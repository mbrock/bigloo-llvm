/*===========================================================================*/
/*   (SawJvm/jld.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawJvm/jld.scm)*/
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


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza34123ze3z83zzsaw_jvm_ldz00(obj_t);
	BGL_IMPORT bool_t BGl_chmodz00zz__osz00(obj_t, obj_t);
	static obj_t BGl_generatezd2jvmzd2env_4317z00zzsaw_jvm_ldz00();
	BGL_IMPORT obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t, obj_t);
	static obj_t BGl_listzd2ze3msdoszd2pathzd2stringz31zzsaw_jvm_ldz00(obj_t);
	BGL_IMPORT obj_t BGl_bigloozd2configzd2zz__configurez00(obj_t);
	extern obj_t BGl_findzd2srczd2filez00zzengine_linkz00(obj_t, obj_t);
	static obj_t BGl_sourcezd2ze3jvmzd2classze3zzsaw_jvm_ldz00(obj_t);
	extern obj_t BGl_za2jvmzd2directoryza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_za2unsafezd2libraryza2zd2zzengine_paramz00;
	extern obj_t BGl_jvmzd2classzd2sanszd2directoryzd2zzread_jvmz00(obj_t);
	extern obj_t BGl_jvmzd2classzd2withzd2directoryzd2zzread_jvmz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2replacezd2zz__r4_strings_6_7z00(obj_t,
		unsigned char, unsigned char);
	BGL_IMPORT bool_t fexists(char *);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_classzd2idzd2ze3typezd2namez31zzbackend_cplibz00(obj_t,
		obj_t);
	extern obj_t BGl_za2bigloozd2nameza2zd2zzengine_paramz00;
	static obj_t BGl_generatezd2msdoszd2jvmzd2manifestzd2zzsaw_jvm_ldz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzsaw_jvm_ldz00();
	BGL_IMPORT obj_t BGl_basenamez00zz__osz00(obj_t);
	extern obj_t BGl_za2jvmzd2jarzf3za2z21zzengine_paramz00;
	static obj_t BGl_findzd2jvmzd2mainclassz00zzsaw_jvm_ldz00(obj_t);
	extern obj_t BGl_za2jvmzd2mainclassza2zd2zzengine_paramz00;
	static obj_t BGl_zc3anonymousza34163ze3z83zzsaw_jvm_ldz00(obj_t);
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	static obj_t BGl__jvmzd2ldzd2zzsaw_jvm_ldz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_uniquez00zzsaw_jvm_ldz00(obj_t);
	static obj_t BGl_zc3anonymousza33806ze3z83zzsaw_jvm_ldz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_ldz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_linkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_configurez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__libraryz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long,
		char *);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_appendzd2mapzd2zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	extern obj_t BGl_za2mainza2z00zzmodule_modulez00;
	BGL_IMPORT obj_t BGl_hashtablezd2ze3listz31zz__hashz00(obj_t);
	static obj_t BGl_jvmzd2jarzd2zzsaw_jvm_ldz00(obj_t, obj_t, obj_t);
	static obj_t BGl__libraryzd2ze3za7ipsz96zzsaw_jvm_ldz00(obj_t, obj_t);
	extern obj_t BGl_za2destza2z00zzengine_paramz00;
	BGL_IMPORT obj_t BGl_libraryzd2filezd2namez00zz__libraryz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_userzd2libraryzd2zzsaw_jvm_ldz00(obj_t);
	static obj_t BGl_loopz00zzsaw_jvm_ldz00(obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_jvmzd2ldzd2zzsaw_jvm_ldz00(obj_t);
	static obj_t BGl_generatezd2shzd2jvmzd2manifestzd2zzsaw_jvm_ldz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_systemz00zz__osz00(obj_t);
	static obj_t BGl_jvmzd2bigloozd2classpathz00zzsaw_jvm_ldz00();
	BGL_IMPORT obj_t BGl_dirnamez00zz__osz00(obj_t);
	static obj_t BGl_libraryzd2ze3za7ipsz96zzsaw_jvm_ldz00(obj_t);
	BGL_IMPORT obj_t BGl_suffixz00zz__osz00(obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	static bool_t BGl_generatezd2jvmzd2scriptz00zzsaw_jvm_ldz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	extern obj_t BGl_za2jvmzd2pathzd2separatorza2z00zzengine_paramz00;
	extern obj_t BGl_za2additionalzd2bigloozd2za7ipsza2za7zzengine_paramz00;
	extern obj_t BGl_za2jvmzd2javaza2zd2zzengine_paramz00;
	static obj_t BGl_methodzd2initzd2zzsaw_jvm_ldz00();
	extern obj_t BGl_unprofzd2srczd2namez00zzengine_linkz00(obj_t);
	BGL_IMPORT obj_t BGl_displayza2za2zz__r4_output_6_10_3z00(obj_t);
	static obj_t BGl_listzd2ze3shzd2pathzd2stringz31zzsaw_jvm_ldz00(obj_t);
	BGL_IMPORT bool_t bigloo_strcmp(obj_t, obj_t);
	extern obj_t BGl_za2jvmzd2optionsza2zd2zzengine_paramz00;
	extern obj_t BGl_uncygdrivez00zztools_miscz00(obj_t);
	static obj_t BGl_zc3anonymousza33885ze3z83zzsaw_jvm_ldz00(obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_generatezd2jvmzd2envz00zzsaw_jvm_ldz00();
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_jvm_ldz00 = BUNSPEC;
	static obj_t BGl_objectszd2ze3classesz31zzsaw_jvm_ldz00(obj_t);
	BGL_IMPORT obj_t BGl_withzd2exceptionzd2handlerz00zz__errorz00(obj_t, obj_t);
	static obj_t BGl_generatezd2jvmzd2manifestz00zzsaw_jvm_ldz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzsaw_jvm_ldz00();
	static bool_t BGl_generatezd2jvmzd2shzd2scriptzd2zzsaw_jvm_ldz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3exitza33886ze3z83zzsaw_jvm_ldz00();
	static obj_t BGl_zc3anonymousza33898ze3z83zzsaw_jvm_ldz00(obj_t, obj_t);
	static obj_t BGl_findzd2jvmzd2mainz00zzsaw_jvm_ldz00(obj_t);
	static obj_t BGl_zc3anonymousza33899ze3z83zzsaw_jvm_ldz00(obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	BGL_IMPORT obj_t BGl_makezd2sharedzd2libzd2namezd2zz__osz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34020ze3z83zzsaw_jvm_ldz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00(obj_t,
		unsigned char, unsigned char);
	extern obj_t BGl_za2jvmzd2classpathza2zd2zzengine_paramz00;
	static obj_t BGl_makezd2manifestzd2namez00zzsaw_jvm_ldz00();
	static obj_t BGl_zc3exitza33915ze3z83zzsaw_jvm_ldz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_jvm_ldz00();
	extern obj_t BGl_za2jvmzd2bigloozd2classpathza2z00zzengine_paramz00;
	static obj_t BGl_listzd2ze3pathzd2stringze3zzsaw_jvm_ldz00(obj_t, obj_t);
	extern obj_t BGl_za2ozd2filesza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_defaultzd2scriptzd2namez00zz__osz00();
	extern obj_t BGl_za2libzd2dirza2zd2zzengine_paramz00;
	static obj_t BGl_zc3anonymousza34041ze3z83zzsaw_jvm_ldz00(obj_t);
	static obj_t BGl_splitzd272zd2zzsaw_jvm_ldz00(obj_t);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	extern obj_t BGl_sourcezd2ze3qualifiedzd2typeze3zzread_jvmz00(obj_t);
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	static bool_t BGl_generatezd2jvmzd2msdoszd2scriptzd2zzsaw_jvm_ldz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t
		BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern obj_t BGl_compilerzd2readzd2zzread_readerz00(obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_IMPORT obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	extern obj_t BGl_za2additionalzd2bigloozd2librariesza2z00zzengine_paramz00;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_zc3anonymousza34068ze3z83zzsaw_jvm_ldz00(obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2jvmzd2shellza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_filezd2separatorzd2zz__osz00();
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00(obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_za2jvmzd2jarpathza2zd2zzengine_paramz00;
	static obj_t BGl_zc3anonymousza33996ze3z83zzsaw_jvm_ldz00(obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	extern obj_t BGl_za2rmzd2tmpzd2filesza2z00zzengine_paramz00;
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_jvm_ldz00();
	extern obj_t BGl_za2jvmzd2envza2zd2zzengine_paramz00;
	extern obj_t BGl_za2purifyza2z00zzengine_paramz00;
	BGL_IMPORT obj_t BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t __cnst[16];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4336z00zzsaw_jvm_ldz00,
		BgL_bgl_za7c3anonymousza7a334394z00,
		BGl_zc3anonymousza33806ze3z83zzsaw_jvm_ldz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4338z00zzsaw_jvm_ldz00,
		BgL_bgl_za7c3anonymousza7a334395z00,
		BGl_zc3anonymousza33885ze3z83zzsaw_jvm_ldz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4341z00zzsaw_jvm_ldz00,
		BgL_bgl_za7c3anonymousza7a334396z00,
		BGl_zc3anonymousza33899ze3z83zzsaw_jvm_ldz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string4318z00zzsaw_jvm_ldz00,
		BgL_bgl_string4318za700za7za7s4397za7, ".jar", 4);
	      DEFINE_STRING(BGl_string4320z00zzsaw_jvm_ldz00,
		BgL_bgl_string4320za700za7za7s4398za7, ")", 1);
	      DEFINE_STRING(BGl_string4319z00zzsaw_jvm_ldz00,
		BgL_bgl_string4319za700za7za7s4399za7, "   . jar", 8);
	      DEFINE_STRING(BGl_string4321z00zzsaw_jvm_ldz00,
		BgL_bgl_string4321za700za7za7s4400za7, " (", 2);
	      DEFINE_STRING(BGl_string4322z00zzsaw_jvm_ldz00,
		BgL_bgl_string4322za700za7za7s4401za7, ".class", 6);
	      DEFINE_STRING(BGl_string4323z00zzsaw_jvm_ldz00,
		BgL_bgl_string4323za700za7za7s4402za7, "ld", 2);
	      DEFINE_STRING(BGl_string4324z00zzsaw_jvm_ldz00,
		BgL_bgl_string4324za700za7za7s4403za7, "Can't established JVM main class",
		32);
	      DEFINE_STRING(BGl_string4325z00zzsaw_jvm_ldz00,
		BgL_bgl_string4325za700za7za7s4404za7, "see option -jvm-mainclass", 25);
	      DEFINE_STRING(BGl_string4326z00zzsaw_jvm_ldz00,
		BgL_bgl_string4326za700za7za7s4405za7, "msdos", 5);
	      DEFINE_STRING(BGl_string4327z00zzsaw_jvm_ldz00,
		BgL_bgl_string4327za700za7za7s4406za7, "_u", 2);
	      DEFINE_STRING(BGl_string4328z00zzsaw_jvm_ldz00,
		BgL_bgl_string4328za700za7za7s4407za7, "_s", 2);
	      DEFINE_STRING(BGl_string4330z00zzsaw_jvm_ldz00,
		BgL_bgl_string4330za700za7za7s4408za7, "_es", 3);
	      DEFINE_STRING(BGl_string4329z00zzsaw_jvm_ldz00,
		BgL_bgl_string4329za700za7za7s4409za7, "_eu", 3);
	      DEFINE_STRING(BGl_string4331z00zzsaw_jvm_ldz00,
		BgL_bgl_string4331za700za7za7s4410za7,
		"Can't find ~a zip file (~a) for library -- ", 43);
	      DEFINE_STRING(BGl_string4332z00zzsaw_jvm_ldz00,
		BgL_bgl_string4332za700za7za7s4411za7, "ld:", 3);
	      DEFINE_STRING(BGl_string4333z00zzsaw_jvm_ldz00,
		BgL_bgl_string4333za700za7za7s4412za7,
		"Can't find zip file (~a) for library -- ", 40);
	      DEFINE_STRING(BGl_string4334z00zzsaw_jvm_ldz00,
		BgL_bgl_string4334za700za7za7s4413za7, "jar", 3);
	      DEFINE_STRING(BGl_string4335z00zzsaw_jvm_ldz00,
		BgL_bgl_string4335za700za7za7s4414za7, "No main clause found", 20);
	      DEFINE_STRING(BGl_string4337z00zzsaw_jvm_ldz00,
		BgL_bgl_string4337za700za7za7s4415za7, "mco", 3);
	      DEFINE_STRING(BGl_string4340z00zzsaw_jvm_ldz00,
		BgL_bgl_string4340za700za7za7s4416za7, "", 0);
	      DEFINE_STRING(BGl_string4339z00zzsaw_jvm_ldz00,
		BgL_bgl_string4339za700za7za7s4417za7, ".", 1);
	      DEFINE_STRING(BGl_string4342z00zzsaw_jvm_ldz00,
		BgL_bgl_string4342za700za7za7s4418za7, " ", 1);
	      DEFINE_STRING(BGl_string4343z00zzsaw_jvm_ldz00,
		BgL_bgl_string4343za700za7za7s4419za7, "-C ", 3);
	      DEFINE_STRING(BGl_string4344z00zzsaw_jvm_ldz00,
		BgL_bgl_string4344za700za7za7s4420za7, "]\n", 2);
	      DEFINE_STRING(BGl_string4345z00zzsaw_jvm_ldz00,
		BgL_bgl_string4345za700za7za7s4421za7, "      [", 7);
	      DEFINE_STRING(BGl_string4346z00zzsaw_jvm_ldz00,
		BgL_bgl_string4346za700za7za7s4422za7, "Can't create jar file", 21);
	      DEFINE_STRING(BGl_string4347z00zzsaw_jvm_ldz00,
		BgL_bgl_string4347za700za7za7s4423za7, "X", 1);
	      DEFINE_STRING(BGl_string4348z00zzsaw_jvm_ldz00,
		BgL_bgl_string4348za700za7za7s4424za7, "Manifest", 8);
	      DEFINE_STRING(BGl_string4350z00zzsaw_jvm_ldz00,
		BgL_bgl_string4350za700za7za7s4425za7, "' -- using `sh'", 15);
	      DEFINE_STRING(BGl_string4349z00zzsaw_jvm_ldz00,
		BgL_bgl_string4349za700za7za7s4426za7, "sh", 2);
	      DEFINE_STRING(BGl_string4351z00zzsaw_jvm_ldz00,
		BgL_bgl_string4351za700za7za7s4427za7, "Illegal shell `", 15);
	      DEFINE_STRING(BGl_string4352z00zzsaw_jvm_ldz00,
		BgL_bgl_string4352za700za7za7s4428za7, "generate-jvm-manifest", 21);
	      DEFINE_STRING(BGl_string4353z00zzsaw_jvm_ldz00,
		BgL_bgl_string4353za700za7za7s4429za7, "\n ", 2);
	      DEFINE_STRING(BGl_string4354z00zzsaw_jvm_ldz00,
		BgL_bgl_string4354za700za7za7s4430za7, "Manifest-Version: 1.0", 21);
	      DEFINE_STRING(BGl_string4355z00zzsaw_jvm_ldz00,
		BgL_bgl_string4355za700za7za7s4431za7, "Main-Class: ", 12);
	      DEFINE_STRING(BGl_string4356z00zzsaw_jvm_ldz00,
		BgL_bgl_string4356za700za7za7s4432za7, "Class-Path: ", 12);
	      DEFINE_STRING(BGl_string4357z00zzsaw_jvm_ldz00,
		BgL_bgl_string4357za700za7za7s4433za7, "bigloo_u.zip", 12);
	      DEFINE_STRING(BGl_string4358z00zzsaw_jvm_ldz00,
		BgL_bgl_string4358za700za7za7s4434za7, "bigloo_s.zip", 12);
	      DEFINE_STRING(BGl_string4360z00zzsaw_jvm_ldz00,
		BgL_bgl_string4360za700za7za7s4435za7, "=$", 2);
	      DEFINE_STRING(BGl_string4359z00zzsaw_jvm_ldz00,
		BgL_bgl_string4359za700za7za7s4436za7, "Created-By: ", 12);
	      DEFINE_STRING(BGl_string4361z00zzsaw_jvm_ldz00,
		BgL_bgl_string4361za700za7za7s4437za7, "-Dbigloo.", 9);
	      DEFINE_STRING(BGl_string4362z00zzsaw_jvm_ldz00,
		BgL_bgl_string4362za700za7za7s4438za7, "#!/bin/sh", 9);
	      DEFINE_STRING(BGl_string4363z00zzsaw_jvm_ldz00,
		BgL_bgl_string4363za700za7za7s4439za7, "CLASSPATH=", 10);
	      DEFINE_STRING(BGl_string4364z00zzsaw_jvm_ldz00,
		BgL_bgl_string4364za700za7za7s4440za7, "'", 1);
	      DEFINE_STRING(BGl_string4365z00zzsaw_jvm_ldz00,
		BgL_bgl_string4365za700za7za7s4441za7, "$BUGLOOCLASSPATH", 16);
	      DEFINE_STRING(BGl_string4366z00zzsaw_jvm_ldz00,
		BgL_bgl_string4366za700za7za7s4442za7, "$BIGLOOCLASSPATH", 16);
	      DEFINE_STRING(BGl_string4367z00zzsaw_jvm_ldz00,
		BgL_bgl_string4367za700za7za7s4443za7, "export CLASSPATH", 16);
	      DEFINE_STRING(BGl_string4368z00zzsaw_jvm_ldz00,
		BgL_bgl_string4368za700za7za7s4444za7, "exec ", 5);
	      DEFINE_STRING(BGl_string4370z00zzsaw_jvm_ldz00,
		BgL_bgl_string4370za700za7za7s4445za7, " $*", 3);
	      DEFINE_STRING(BGl_string4369z00zzsaw_jvm_ldz00,
		BgL_bgl_string4369za700za7za7s4446za7, " $BIGLOOJAVAOPT $BUGLOOJAVAOPT ",
		31);
	      DEFINE_STRING(BGl_string4371z00zzsaw_jvm_ldz00,
		BgL_bgl_string4371za700za7za7s4447za7, "CLASSPATH=\"", 11);
	      DEFINE_STRING(BGl_string4372z00zzsaw_jvm_ldz00,
		BgL_bgl_string4372za700za7za7s4448za7, "\"", 1);
	      DEFINE_STRING(BGl_string4373z00zzsaw_jvm_ldz00,
		BgL_bgl_string4373za700za7za7s4449za7, " -jar ", 6);
	      DEFINE_STRING(BGl_string4374z00zzsaw_jvm_ldz00,
		BgL_bgl_string4374za700za7za7s4450za7, "`", 1);
	      DEFINE_STRING(BGl_string4375z00zzsaw_jvm_ldz00,
		BgL_bgl_string4375za700za7za7s4451za7, " $0`", 4);
	      DEFINE_STRING(BGl_string4376z00zzsaw_jvm_ldz00,
		BgL_bgl_string4376za700za7za7s4452za7, ".jar $*", 7);
	      DEFINE_STRING(BGl_string4377z00zzsaw_jvm_ldz00,
		BgL_bgl_string4377za700za7za7s4453za7, "@", 1);
	      DEFINE_STRING(BGl_string4378z00zzsaw_jvm_ldz00,
		BgL_bgl_string4378za700za7za7s4454za7, " -cp \"", 6);
	      DEFINE_STRING(BGl_string4380z00zzsaw_jvm_ldz00,
		BgL_bgl_string4380za700za7za7s4455za7, "\\bigloo_s.zip", 13);
	      DEFINE_STRING(BGl_string4379z00zzsaw_jvm_ldz00,
		BgL_bgl_string4379za700za7za7s4456za7, "\\bigloo_u.zip", 13);
	      DEFINE_STRING(BGl_string4381z00zzsaw_jvm_ldz00,
		BgL_bgl_string4381za700za7za7s4457za7, "%BUGLOOCLASSPATH%", 17);
	      DEFINE_STRING(BGl_string4382z00zzsaw_jvm_ldz00,
		BgL_bgl_string4382za700za7za7s4458za7, "\" ", 2);
	      DEFINE_STRING(BGl_string4383z00zzsaw_jvm_ldz00,
		BgL_bgl_string4383za700za7za7s4459za7, " %BIGLOOJAVAOPT% %BUGLOOJAVAOPT% ",
		33);
	      DEFINE_STRING(BGl_string4384z00zzsaw_jvm_ldz00,
		BgL_bgl_string4384za700za7za7s4460za7, " %*", 3);
	      DEFINE_STRING(BGl_string4385z00zzsaw_jvm_ldz00,
		BgL_bgl_string4385za700za7za7s4461za7, "\\", 1);
	      DEFINE_STRING(BGl_string4386z00zzsaw_jvm_ldz00,
		BgL_bgl_string4386za700za7za7s4462za7, "   . ", 5);
	      DEFINE_STRING(BGl_string4387z00zzsaw_jvm_ldz00,
		BgL_bgl_string4387za700za7za7s4463za7, "generate-jvm-script", 19);
	      DEFINE_STRING(BGl_string4388z00zzsaw_jvm_ldz00,
		BgL_bgl_string4388za700za7za7s4464za7, ":", 1);
	      DEFINE_STRING(BGl_string4390z00zzsaw_jvm_ldz00,
		BgL_bgl_string4390za700za7za7s4465za7, "saw_jvm_ld", 10);
	      DEFINE_STRING(BGl_string4389z00zzsaw_jvm_ldz00,
		BgL_bgl_string4389za700za7za7s4466za7, ";", 1);
	      DEFINE_STRING(BGl_string4391z00zzsaw_jvm_ldz00,
		BgL_bgl_string4391za700za7za7s4467za7,
		"dirname-cmd jflags jvflags execute write read zip-directory jar static export wide-class final-class abstract-class class main module ",
		134);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_jvmzd2ldzd2envz00zzsaw_jvm_ldz00,
		BgL_bgl__jvmza7d2ldza7d2za7za7sa4468z00, BGl__jvmzd2ldzd2zzsaw_jvm_ldz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_libraryzd2ze3za7ipszd2envz44zzsaw_jvm_ldz00,
		BgL_bgl__libraryza7d2za7e3za7a4469za7,
		BGl__libraryzd2ze3za7ipsz96zzsaw_jvm_ldz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_ldz00(long
		BgL_checksumz00_2567, char *BgL_fromz00_2568)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_jvm_ldz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_jvm_ldz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzsaw_jvm_ldz00();
					BGl_cnstzd2initzd2zzsaw_jvm_ldz00();
					BGl_importedzd2moduleszd2initz00zzsaw_jvm_ldz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_jvm_ldz00()
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 16 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_jvm_ld");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "saw_jvm_ld");
			BGl_modulezd2initializa7ationz75zz__configurez00(((long) 0),
				"saw_jvm_ld");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_jvm_ld");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_jvm_ld");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "saw_jvm_ld");
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 0), "saw_jvm_ld");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "saw_jvm_ld");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"saw_jvm_ld");
			BGl_modulezd2initializa7ationz75zz__libraryz00(((long) 0), "saw_jvm_ld");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"saw_jvm_ld");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "saw_jvm_ld");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_jvm_ld");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_jvm_ldz00()
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 16 */
			{	/* SawJvm/jld.scm 16 */
				obj_t BgL_cportz00_2559;

				BgL_cportz00_2559 =
					bgl_open_input_string(BGl_string4391z00zzsaw_jvm_ldz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2560;

					BgL_iz00_2560 = ((long) 15);
				BgL_loopz00_2561:
					if ((BgL_iz00_2560 == ((long) -1)))
						{	/* SawJvm/jld.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* SawJvm/jld.scm 16 */
							{	/* SawJvm/jld.scm 16 */
								obj_t BgL_arg4393z00_2563;

								{	/* SawJvm/jld.scm 16 */

									{	/* SawJvm/jld.scm 16 */
										obj_t BgL_locationz00_2565;

										BgL_locationz00_2565 = BBOOL(((bool_t) 0));
										{	/* SawJvm/jld.scm 16 */

											BgL_arg4393z00_2563 =
												BGl_readz00zz__readerz00(BgL_cportz00_2559,
												BgL_locationz00_2565);
										}
									}
								}
								{	/* SawJvm/jld.scm 16 */
									int BgL_auxz00_2594;

									BgL_auxz00_2594 = (int) (BgL_iz00_2560);
									CNST_TABLE_SET(BgL_auxz00_2594, BgL_arg4393z00_2563);
							}}
							{	/* SawJvm/jld.scm 16 */
								int BgL_auxz00_2566;

								BgL_auxz00_2566 = (int) ((BgL_iz00_2560 - ((long) 1)));
								{
									long BgL_iz00_2599;

									BgL_iz00_2599 = (long) (BgL_auxz00_2566);
									BgL_iz00_2560 = BgL_iz00_2599;
									goto BgL_loopz00_2561;
								}
							}
						}
				}
			}
		}
	}



/* jvm-ld */
	BGL_EXPORTED_DEF obj_t BGl_jvmzd2ldzd2zzsaw_jvm_ldz00(obj_t
		BgL_linkzd2mainzd2modulez00_1)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 39 */
			{	/* SawJvm/jld.scm 40 */
				obj_t BgL_targetz00_988;

				if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
					{	/* SawJvm/jld.scm 40 */
						BgL_targetz00_988 = BGl_za2destza2z00zzengine_paramz00;
					}
				else
					{	/* SawJvm/jld.scm 40 */
						BgL_targetz00_988 = BGl_defaultzd2scriptzd2namez00zz__osz00();
					}
				{	/* SawJvm/jld.scm 40 */
					obj_t BgL_jarnamez00_989;

					BgL_jarnamez00_989 =
						string_append(BGl_prefixz00zz__osz00(BgL_targetz00_988),
						BGl_string4318z00zzsaw_jvm_ldz00);
					{	/* SawJvm/jld.scm 43 */
						obj_t BgL_za7ipsza7_990;

						{	/* SawJvm/jld.scm 45 */
							obj_t BgL_arg3753z00_1022;

							{	/* SawJvm/jld.scm 45 */
								obj_t BgL_list3754z00_1023;

								BgL_list3754z00_1023 =
									MAKE_PAIR
									(BGl_za2additionalzd2bigloozd2librariesza2z00zzengine_paramz00,
									BNIL);
								BgL_arg3753z00_1022 =
									BGl_appendzd2mapzd2zz__r4_control_features_6_9z00
									(BGl_libraryzd2ze3za7ipszd2envz44zzsaw_jvm_ldz00,
									BgL_list3754z00_1023);
							}
							BgL_za7ipsza7_990 =
								bgl_append2(BgL_arg3753z00_1022,
								BGl_za2additionalzd2bigloozd2za7ipsza2za7zzengine_paramz00);
						}
						{	/* SawJvm/jld.scm 44 */

							if (CBOOL(BGl_za2jvmzd2jarzf3za2z21zzengine_paramz00))
								{	/* SawJvm/jld.scm 48 */
									obj_t BgL_manifestz00_991;

									BgL_manifestz00_991 =
										BGl_makezd2manifestzd2namez00zzsaw_jvm_ldz00();
									{	/* SawJvm/jld.scm 48 */
										obj_t BgL_ozd2fileszd2_992;

										{	/* SawJvm/jld.scm 49 */
											obj_t BgL_arg3741z00_1002;

											{	/* SawJvm/jld.scm 49 */
												obj_t BgL_l3692z00_1003;

												BgL_l3692z00_1003 =
													BGl_za2srczd2filesza2zd2zzengine_paramz00;
												if (NULLP(BgL_l3692z00_1003))
													{	/* SawJvm/jld.scm 49 */
														BgL_arg3741z00_1002 = BNIL;
													}
												else
													{	/* SawJvm/jld.scm 49 */
														obj_t BgL_head3694z00_1005;

														BgL_head3694z00_1005 =
															MAKE_PAIR
															(BGl_sourcezd2ze3jvmzd2classze3zzsaw_jvm_ldz00(CAR
																(BgL_l3692z00_1003)), BNIL);
														{	/* SawJvm/jld.scm 49 */
															obj_t BgL_g3697z00_1006;

															BgL_g3697z00_1006 = CDR(BgL_l3692z00_1003);
															{
																obj_t BgL_l3692z00_1008;

																obj_t BgL_tail3695z00_1009;

																BgL_l3692z00_1008 = BgL_g3697z00_1006;
																BgL_tail3695z00_1009 = BgL_head3694z00_1005;
															BgL_zc3anonymousza33743ze3z83_1010:
																if (NULLP(BgL_l3692z00_1008))
																	{	/* SawJvm/jld.scm 49 */
																		BgL_arg3741z00_1002 = BgL_head3694z00_1005;
																	}
																else
																	{	/* SawJvm/jld.scm 49 */
																		obj_t BgL_newtail3696z00_1012;

																		BgL_newtail3696z00_1012 =
																			MAKE_PAIR
																			(BGl_sourcezd2ze3jvmzd2classze3zzsaw_jvm_ldz00
																			(CAR(BgL_l3692z00_1008)), BNIL);
																		SET_CDR(BgL_tail3695z00_1009,
																			BgL_newtail3696z00_1012);
																		{
																			obj_t BgL_tail3695z00_2626;

																			obj_t BgL_l3692z00_2624;

																			BgL_l3692z00_2624 =
																				CDR(BgL_l3692z00_1008);
																			BgL_tail3695z00_2626 =
																				BgL_newtail3696z00_1012;
																			BgL_tail3695z00_1009 =
																				BgL_tail3695z00_2626;
																			BgL_l3692z00_1008 = BgL_l3692z00_2624;
																			goto BgL_zc3anonymousza33743ze3z83_1010;
																		}
																	}
															}
														}
													}
											}
											BgL_ozd2fileszd2_992 =
												bgl_append2(BgL_arg3741z00_1002,
												BGl_za2ozd2filesza2zd2zzengine_paramz00);
										}
										{	/* SawJvm/jld.scm 49 */
											obj_t BgL_allzd2objectszd2_993;

											BgL_allzd2objectszd2_993 =
												BGl_uniquez00zzsaw_jvm_ldz00
												(BGl_objectszd2ze3classesz31zzsaw_jvm_ldz00
												(BgL_ozd2fileszd2_992));
											{	/* SawJvm/jld.scm 51 */

												{	/* SawJvm/jld.scm 52 */
													obj_t BgL_list3733z00_994;

													BgL_list3733z00_994 =
														MAKE_PAIR(BGl_string4319z00zzsaw_jvm_ldz00, BNIL);
													BGl_verbosez00zztools_speekz00(BINT(((long) 1)),
														BgL_list3733z00_994);
												}
												{	/* SawJvm/jld.scm 53 */
													obj_t BgL_list3734z00_995;

													{	/* SawJvm/jld.scm 53 */
														obj_t BgL_arg3736z00_997;

														{	/* SawJvm/jld.scm 53 */
															obj_t BgL_arg3737z00_998;

															BgL_arg3737z00_998 =
																MAKE_PAIR(BGl_string4320z00zzsaw_jvm_ldz00,
																BNIL);
															BgL_arg3736z00_997 =
																MAKE_PAIR(BgL_jarnamez00_989,
																BgL_arg3737z00_998);
														}
														BgL_list3734z00_995 =
															MAKE_PAIR(BGl_string4321z00zzsaw_jvm_ldz00,
															BgL_arg3736z00_997);
													}
													BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
														BgL_list3734z00_995);
												}
												{	/* SawJvm/jld.scm 54 */
													obj_t BgL_list3738z00_999;

													BgL_list3738z00_999 =
														MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
													BGl_verbosez00zztools_speekz00(BINT(((long) 1)),
														BgL_list3738z00_999);
												}
												BGl_generatezd2jvmzd2manifestz00zzsaw_jvm_ldz00
													(BgL_manifestz00_991,
													BGl_findzd2jvmzd2mainz00zzsaw_jvm_ldz00
													(BgL_ozd2fileszd2_992), BgL_jarnamez00_989,
													BgL_za7ipsza7_990);
												BGl_jvmzd2jarzd2zzsaw_jvm_ldz00(BgL_jarnamez00_989,
													BgL_manifestz00_991, BgL_allzd2objectszd2_993);
								}}}}
							else
								{	/* SawJvm/jld.scm 47 */
									BFALSE;
								}
							{	/* SawJvm/jld.scm 61 */
								obj_t BgL_arg3752z00_1021;

								BgL_arg3752z00_1021 =
									BGl_findzd2jvmzd2mainclassz00zzsaw_jvm_ldz00
									(BgL_linkzd2mainzd2modulez00_1);
								return
									BBOOL(BGl_generatezd2jvmzd2scriptz00zzsaw_jvm_ldz00
									(BgL_targetz00_988, BgL_arg3752z00_1021, BgL_jarnamez00_989,
										BgL_za7ipsza7_990));
							}
						}
					}
				}
			}
		}
	}



/* _jvm-ld */
	obj_t BGl__jvmzd2ldzd2zzsaw_jvm_ldz00(obj_t BgL_envz00_2517,
		obj_t BgL_linkzd2mainzd2modulez00_2518)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 39 */
			return BGl_jvmzd2ldzd2zzsaw_jvm_ldz00(BgL_linkzd2mainzd2modulez00_2518);
		}
	}



/* source->jvm-class */
	obj_t BGl_sourcezd2ze3jvmzd2classze3zzsaw_jvm_ldz00(obj_t BgL_sz00_2)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 68 */
			{	/* SawJvm/jld.scm 69 */
				obj_t BgL_qz00_1027;

				BgL_qz00_1027 =
					BGl_sourcezd2ze3qualifiedzd2typeze3zzread_jvmz00(BgL_sz00_2);
				{	/* SawJvm/jld.scm 71 */
					obj_t BgL_arg3758z00_1028;

					if (STRINGP(BgL_qz00_1027))
						{	/* SawJvm/jld.scm 71 */
							BgL_arg3758z00_1028 =
								string_append(BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00
								(BgL_qz00_1027, (char) (((unsigned char) '.')),
									(char) (((unsigned char) '/'))),
								BGl_string4322z00zzsaw_jvm_ldz00);
						}
					else
						{	/* SawJvm/jld.scm 71 */
							BgL_arg3758z00_1028 =
								string_append(BGl_prefixz00zz__osz00(BgL_sz00_2),
								BGl_string4322z00zzsaw_jvm_ldz00);
						}
					return
						BGl_jvmzd2classzd2withzd2directoryzd2zzread_jvmz00
						(BgL_arg3758z00_1028);
				}
			}
		}
	}



/* find-jvm-mainclass */
	obj_t BGl_findzd2jvmzd2mainclassz00zzsaw_jvm_ldz00(obj_t
		BgL_linkzd2mainzd2modulez00_3)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 78 */
			if (STRINGP(BGl_za2jvmzd2mainclassza2zd2zzengine_paramz00))
				{	/* SawJvm/jld.scm 80 */
					return BGl_za2jvmzd2mainclassza2zd2zzengine_paramz00;
				}
			else
				{	/* SawJvm/jld.scm 80 */
					if (CBOOL(BGl_za2mainza2z00zzmodule_modulez00))
						{	/* SawJvm/jld.scm 82 */
							return
								BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00
								(BGl_za2moduleza2z00zzmodule_modulez00);
						}
					else
						{	/* SawJvm/jld.scm 82 */
							if (SYMBOLP(BgL_linkzd2mainzd2modulez00_3))
								{	/* SawJvm/jld.scm 84 */
									return
										BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00
										(BgL_linkzd2mainzd2modulez00_3);
								}
							else
								{	/* SawJvm/jld.scm 84 */
									return
										BGl_errorz00zz__errorz00(BGl_string4323z00zzsaw_jvm_ldz00,
										BGl_string4324z00zzsaw_jvm_ldz00,
										BGl_string4325z00zzsaw_jvm_ldz00);
								}
						}
				}
		}
	}



/* library->zips */
	obj_t BGl_libraryzd2ze3za7ipsz96zzsaw_jvm_ldz00(obj_t BgL_libz00_4)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 94 */
			{	/* SawJvm/jld.scm 95 */
				obj_t BgL_dirz00_1036;

				if (bigloo_strcmp(BGl_za2jvmzd2shellza2zd2zzengine_paramz00,
						BGl_string4326z00zzsaw_jvm_ldz00))
					{	/* SawJvm/jld.scm 96 */
						obj_t BgL_arg3796z00_1072;

						BgL_arg3796z00_1072 =
							BGl_jvmzd2bigloozd2classpathz00zzsaw_jvm_ldz00();
						BgL_dirz00_1036 =
							MAKE_PAIR(BgL_arg3796z00_1072,
							BGl_za2libzd2dirza2zd2zzengine_paramz00);
					}
				else
					{	/* SawJvm/jld.scm 95 */
						BgL_dirz00_1036 = BGl_za2libzd2dirza2zd2zzengine_paramz00;
					}
				{	/* SawJvm/jld.scm 95 */
					obj_t BgL_bez00_1037;

					{	/* SawJvm/jld.scm 98 */
						obj_t BgL_arg3794z00_1070;

						BgL_arg3794z00_1070 = BGl_thezd2backendzd2zzbackend_backendz00();
						{
							BgL_backendz00_bglt BgL_auxz00_2673;

							BgL_auxz00_2673 = (BgL_backendz00_bglt) (BgL_arg3794z00_1070);
							BgL_bez00_1037 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2673))->BgL_srfi0z00);
						}
					}
					{	/* SawJvm/jld.scm 98 */
						obj_t BgL_nz00_1038;

						{	/* SawJvm/jld.scm 100 */
							obj_t BgL_arg3792z00_1068;

							{	/* SawJvm/jld.scm 100 */
								bool_t BgL_testz00_2676;

								if (CBOOL(BGl_za2unsafezd2libraryza2zd2zzengine_paramz00))
									{	/* SawJvm/jld.scm 100 */
										if (CBOOL(BGl_za2purifyza2z00zzengine_paramz00))
											{	/* SawJvm/jld.scm 100 */
												BgL_testz00_2676 = ((bool_t) 0);
											}
										else
											{	/* SawJvm/jld.scm 100 */
												BgL_testz00_2676 = ((bool_t) 1);
											}
									}
								else
									{	/* SawJvm/jld.scm 100 */
										BgL_testz00_2676 = ((bool_t) 0);
									}
								if (BgL_testz00_2676)
									{	/* SawJvm/jld.scm 100 */
										BgL_arg3792z00_1068 = BGl_string4327z00zzsaw_jvm_ldz00;
									}
								else
									{	/* SawJvm/jld.scm 100 */
										BgL_arg3792z00_1068 = BGl_string4328z00zzsaw_jvm_ldz00;
									}
							}
							BgL_nz00_1038 =
								BGl_libraryzd2filezd2namez00zz__libraryz00(BgL_libz00_4,
								BgL_arg3792z00_1068, BgL_bez00_1037);
						}
						{	/* SawJvm/jld.scm 99 */
							obj_t BgL_fz00_1039;

							BgL_fz00_1039 =
								BGl_findzd2filezf2pathz20zz__osz00
								(BGl_makezd2sharedzd2libzd2namezd2zz__osz00(BgL_nz00_1038,
									BgL_bez00_1037), BgL_dirz00_1036);
							{	/* SawJvm/jld.scm 103 */
								obj_t BgL_nez00_1040;

								{	/* SawJvm/jld.scm 106 */
									obj_t BgL_arg3788z00_1064;

									{	/* SawJvm/jld.scm 106 */
										obj_t BgL_arg3789z00_1065;

										{	/* SawJvm/jld.scm 106 */
											bool_t BgL_testz00_2684;

											if (CBOOL(BGl_za2unsafezd2libraryza2zd2zzengine_paramz00))
												{	/* SawJvm/jld.scm 106 */
													if (CBOOL(BGl_za2purifyza2z00zzengine_paramz00))
														{	/* SawJvm/jld.scm 106 */
															BgL_testz00_2684 = ((bool_t) 0);
														}
													else
														{	/* SawJvm/jld.scm 106 */
															BgL_testz00_2684 = ((bool_t) 1);
														}
												}
											else
												{	/* SawJvm/jld.scm 106 */
													BgL_testz00_2684 = ((bool_t) 0);
												}
											if (BgL_testz00_2684)
												{	/* SawJvm/jld.scm 106 */
													BgL_arg3789z00_1065 =
														BGl_string4329z00zzsaw_jvm_ldz00;
												}
											else
												{	/* SawJvm/jld.scm 106 */
													BgL_arg3789z00_1065 =
														BGl_string4330z00zzsaw_jvm_ldz00;
												}
										}
										BgL_arg3788z00_1064 =
											BGl_libraryzd2filezd2namez00zz__libraryz00(BgL_libz00_4,
											BgL_arg3789z00_1065, BgL_bez00_1037);
									}
									BgL_nez00_1040 =
										BGl_makezd2sharedzd2libzd2namezd2zz__osz00
										(BgL_arg3788z00_1064, BgL_bez00_1037);
								}
								{	/* SawJvm/jld.scm 104 */
									obj_t BgL_fez00_1041;

									BgL_fez00_1041 =
										BGl_findzd2filezf2pathz20zz__osz00(BgL_nez00_1040,
										BgL_dirz00_1036);
									{	/* SawJvm/jld.scm 108 */

										{	/* SawJvm/jld.scm 110 */
											bool_t BgL_testz00_2692;

											if (STRINGP(BgL_fz00_1039))
												{	/* SawJvm/jld.scm 110 */
													BgL_testz00_2692 = STRINGP(BgL_fez00_1041);
												}
											else
												{	/* SawJvm/jld.scm 110 */
													BgL_testz00_2692 = ((bool_t) 0);
												}
											if (BgL_testz00_2692)
												{	/* SawJvm/jld.scm 111 */
													obj_t BgL_list3767z00_1043;

													{	/* SawJvm/jld.scm 111 */
														obj_t BgL_arg3768z00_1044;

														BgL_arg3768z00_1044 =
															MAKE_PAIR(BgL_fez00_1041, BNIL);
														BgL_list3767z00_1043 =
															MAKE_PAIR(BgL_fz00_1039, BgL_arg3768z00_1044);
													}
													return BgL_list3767z00_1043;
												}
											else
												{	/* SawJvm/jld.scm 110 */
													if (STRINGP(BgL_fz00_1039))
														{	/* SawJvm/jld.scm 112 */
															{	/* SawJvm/jld.scm 113 */
																obj_t BgL_arg3771z00_1047;

																{	/* SawJvm/jld.scm 114 */
																	obj_t BgL_arg3776z00_1052;

																	{	/* SawJvm/jld.scm 115 */
																		bool_t BgL_testz00_2700;

																		if (CBOOL
																			(BGl_za2unsafezd2libraryza2zd2zzengine_paramz00))
																			{	/* SawJvm/jld.scm 115 */
																				if (CBOOL
																					(BGl_za2purifyza2z00zzengine_paramz00))
																					{	/* SawJvm/jld.scm 115 */
																						BgL_testz00_2700 = ((bool_t) 0);
																					}
																				else
																					{	/* SawJvm/jld.scm 115 */
																						BgL_testz00_2700 = ((bool_t) 1);
																					}
																			}
																		else
																			{	/* SawJvm/jld.scm 115 */
																				BgL_testz00_2700 = ((bool_t) 0);
																			}
																		if (BgL_testz00_2700)
																			{	/* SawJvm/jld.scm 115 */
																				BgL_arg3776z00_1052 =
																					BGl_string4329z00zzsaw_jvm_ldz00;
																			}
																		else
																			{	/* SawJvm/jld.scm 115 */
																				BgL_arg3776z00_1052 =
																					BGl_string4330z00zzsaw_jvm_ldz00;
																			}
																	}
																	{	/* SawJvm/jld.scm 114 */
																		obj_t BgL_list3777z00_1053;

																		{	/* SawJvm/jld.scm 114 */
																			obj_t BgL_arg3778z00_1054;

																			BgL_arg3778z00_1054 =
																				MAKE_PAIR(BgL_nez00_1040, BNIL);
																			BgL_list3777z00_1053 =
																				MAKE_PAIR(BgL_arg3776z00_1052,
																				BgL_arg3778z00_1054);
																		}
																		BgL_arg3771z00_1047 =
																			BGl_formatz00zz__r4_output_6_10_3z00
																			(BGl_string4331z00zzsaw_jvm_ldz00,
																			BgL_list3777z00_1053);
																	}
																}
																{	/* SawJvm/jld.scm 113 */
																	obj_t BgL_list3772z00_1048;

																	{	/* SawJvm/jld.scm 113 */
																		obj_t BgL_arg3773z00_1049;

																		{	/* SawJvm/jld.scm 113 */
																			obj_t BgL_arg3774z00_1050;

																			BgL_arg3774z00_1050 =
																				MAKE_PAIR(BgL_libz00_4, BNIL);
																			BgL_arg3773z00_1049 =
																				MAKE_PAIR(BgL_arg3771z00_1047,
																				BgL_arg3774z00_1050);
																		}
																		BgL_list3772z00_1048 =
																			MAKE_PAIR
																			(BGl_string4332z00zzsaw_jvm_ldz00,
																			BgL_arg3773z00_1049);
																	}
																	BGl_warningz00zz__errorz00
																		(BgL_list3772z00_1048);
																}
															}
															{	/* SawJvm/jld.scm 118 */
																obj_t BgL_list3780z00_1056;

																BgL_list3780z00_1056 =
																	MAKE_PAIR(BgL_fz00_1039, BNIL);
																return BgL_list3780z00_1056;
															}
														}
													else
														{	/* SawJvm/jld.scm 112 */
															{	/* SawJvm/jld.scm 120 */
																obj_t BgL_arg3782z00_1058;

																{	/* SawJvm/jld.scm 121 */
																	obj_t BgL_list3786z00_1062;

																	BgL_list3786z00_1062 =
																		MAKE_PAIR(BgL_nz00_1038, BNIL);
																	BgL_arg3782z00_1058 =
																		BGl_formatz00zz__r4_output_6_10_3z00
																		(BGl_string4333z00zzsaw_jvm_ldz00,
																		BgL_list3786z00_1062);
																}
																{	/* SawJvm/jld.scm 120 */
																	obj_t BgL_list3783z00_1059;

																	{	/* SawJvm/jld.scm 120 */
																		obj_t BgL_arg3784z00_1060;

																		{	/* SawJvm/jld.scm 120 */
																			obj_t BgL_arg3785z00_1061;

																			BgL_arg3785z00_1061 =
																				MAKE_PAIR(BgL_libz00_4, BNIL);
																			BgL_arg3784z00_1060 =
																				MAKE_PAIR(BgL_arg3782z00_1058,
																				BgL_arg3785z00_1061);
																		}
																		BgL_list3783z00_1059 =
																			MAKE_PAIR
																			(BGl_string4332z00zzsaw_jvm_ldz00,
																			BgL_arg3784z00_1060);
																	}
																	BGl_warningz00zz__errorz00
																		(BgL_list3783z00_1059);
																}
															}
															return BNIL;
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



/* _library->zips */
	obj_t BGl__libraryzd2ze3za7ipsz96zzsaw_jvm_ldz00(obj_t BgL_envz00_2519,
		obj_t BgL_libz00_2520)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 94 */
			return BGl_libraryzd2ze3za7ipsz96zzsaw_jvm_ldz00(BgL_libz00_2520);
		}
	}



/* find-jvm-main */
	obj_t BGl_findzd2jvmzd2mainz00zzsaw_jvm_ldz00(obj_t BgL_ozd2fileszd2_5)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 128 */
			{	/* SawJvm/jld.scm 129 */
				bool_t BgL_testz00_2720;

				{	/* SawJvm/jld.scm 129 */
					obj_t BgL_obj1679z00_2138;

					BgL_obj1679z00_2138 = BGl_za2mainza2z00zzmodule_modulez00;
					BgL_testz00_2720 =
						BGl_iszd2azf3z21zz__objectz00(BgL_obj1679z00_2138,
						BGl_globalz00zzast_varz00);
				}
				if (BgL_testz00_2720)
					{	/* SawJvm/jld.scm 129 */
						return
							BGl_prefixz00zz__osz00(CAR
							(BGl_za2srczd2filesza2zd2zzengine_paramz00));
					}
				else
					{
						obj_t BgL_ozd2fileszd2_1076;

						BgL_ozd2fileszd2_1076 = BgL_ozd2fileszd2_5;
					BgL_zc3anonymousza33799ze3z83_1077:
						if (NULLP(BgL_ozd2fileszd2_1076))
							{	/* SawJvm/jld.scm 132 */
								return
									BGl_errorz00zz__errorz00(BGl_string4334z00zzsaw_jvm_ldz00,
									BGl_string4335z00zzsaw_jvm_ldz00, BgL_ozd2fileszd2_1076);
							}
						else
							{	/* SawJvm/jld.scm 134 */
								obj_t BgL_prefz00_1079;

								BgL_prefz00_1079 =
									BGl_unprofzd2srczd2namez00zzengine_linkz00
									(BGl_prefixz00zz__osz00(CAR(BgL_ozd2fileszd2_1076)));
								{	/* SawJvm/jld.scm 134 */
									obj_t BgL_bprefz00_1080;

									BgL_bprefz00_1080 =
										BGl_basenamez00zz__osz00(BgL_prefz00_1079);
									{	/* SawJvm/jld.scm 135 */
										obj_t BgL_scmzd2filezd2_1081;

										BgL_scmzd2filezd2_1081 =
											BGl_findzd2srczd2filez00zzengine_linkz00(BgL_prefz00_1079,
											BgL_bprefz00_1080);
										{	/* SawJvm/jld.scm 136 */

											{	/* SawJvm/jld.scm 137 */
												bool_t BgL_testz00_2732;

												if (STRINGP(BgL_scmzd2filezd2_1081))
													{	/* SawJvm/jld.scm 137 */
														if (fexists(BSTRING_TO_STRING
																(BgL_scmzd2filezd2_1081)))
															{	/* SawJvm/jld.scm 138 */
																BgL_testz00_2732 = ((bool_t) 0);
															}
														else
															{	/* SawJvm/jld.scm 138 */
																BgL_testz00_2732 = ((bool_t) 1);
															}
													}
												else
													{	/* SawJvm/jld.scm 137 */
														BgL_testz00_2732 = ((bool_t) 1);
													}
												if (BgL_testz00_2732)
													{
														obj_t BgL_ozd2fileszd2_2738;

														BgL_ozd2fileszd2_2738 = CDR(BgL_ozd2fileszd2_1076);
														BgL_ozd2fileszd2_1076 = BgL_ozd2fileszd2_2738;
														goto BgL_zc3anonymousza33799ze3z83_1077;
													}
												else
													{	/* SawJvm/jld.scm 140 */
														obj_t BgL__ortest_3680z00_1084;

														BgL__ortest_3680z00_1084 =
															BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00
															(BgL_scmzd2filezd2_1081,
															BGl_proc4336z00zzsaw_jvm_ldz00);
														if (CBOOL(BgL__ortest_3680z00_1084))
															{	/* SawJvm/jld.scm 140 */
																return BgL__ortest_3680z00_1084;
															}
														else
															{
																obj_t BgL_ozd2fileszd2_2743;

																BgL_ozd2fileszd2_2743 =
																	CDR(BgL_ozd2fileszd2_1076);
																BgL_ozd2fileszd2_1076 = BgL_ozd2fileszd2_2743;
																goto BgL_zc3anonymousza33799ze3z83_1077;
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



/* <anonymous:3806> */
	obj_t BGl_zc3anonymousza33806ze3z83zzsaw_jvm_ldz00(obj_t BgL_envz00_2522)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 141 */
			{

				{	/* SawJvm/jld.scm 142 */
					obj_t BgL_ezd21393zd2_1091;

					BgL_ezd21393zd2_1091 = BGl_compilerzd2readzd2zzread_readerz00(BNIL);
					if (PAIRP(BgL_ezd21393zd2_1091))
						{	/* SawJvm/jld.scm 141 */
							obj_t BgL_cdrzd21397zd2_1093;

							BgL_cdrzd21397zd2_1093 = CDR(BgL_ezd21393zd2_1091);
							if ((CAR(BgL_ezd21393zd2_1091) == CNST_TABLE_REF(((long) 0))))
								{	/* SawJvm/jld.scm 141 */
									if (PAIRP(BgL_cdrzd21397zd2_1093))
										{
											obj_t BgL_gzd21402zd2_1098;

											BgL_gzd21402zd2_1098 = CDR(BgL_cdrzd21397zd2_1093);
										BgL_zc3anonymousza33811ze3z83_1099:
											if (PAIRP(BgL_gzd21402zd2_1098))
												{	/* SawJvm/jld.scm 141 */
													obj_t BgL_carzd21404zd2_1101;

													BgL_carzd21404zd2_1101 = CAR(BgL_gzd21402zd2_1098);
													if (PAIRP(BgL_carzd21404zd2_1101))
														{	/* SawJvm/jld.scm 141 */
															obj_t BgL_cdrzd21407zd2_1103;

															BgL_cdrzd21407zd2_1103 =
																CDR(BgL_carzd21404zd2_1101);
															if (
																(CAR(BgL_carzd21404zd2_1101) ==
																	CNST_TABLE_REF(((long) 1))))
																{	/* SawJvm/jld.scm 141 */
																	if (PAIRP(BgL_cdrzd21407zd2_1103))
																		{	/* SawJvm/jld.scm 141 */
																			if (NULLP(CDR(BgL_cdrzd21407zd2_1103)))
																				{	/* SawJvm/jld.scm 141 */
																					return
																						BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00
																						(CAR(BgL_cdrzd21397zd2_1093));
																				}
																			else
																				{
																					obj_t BgL_gzd21402zd2_2772;

																					BgL_gzd21402zd2_2772 =
																						CDR(BgL_gzd21402zd2_1098);
																					BgL_gzd21402zd2_1098 =
																						BgL_gzd21402zd2_2772;
																					goto
																						BgL_zc3anonymousza33811ze3z83_1099;
																				}
																		}
																	else
																		{
																			obj_t BgL_gzd21402zd2_2774;

																			BgL_gzd21402zd2_2774 =
																				CDR(BgL_gzd21402zd2_1098);
																			BgL_gzd21402zd2_1098 =
																				BgL_gzd21402zd2_2774;
																			goto BgL_zc3anonymousza33811ze3z83_1099;
																		}
																}
															else
																{
																	obj_t BgL_gzd21402zd2_2776;

																	BgL_gzd21402zd2_2776 =
																		CDR(BgL_gzd21402zd2_1098);
																	BgL_gzd21402zd2_1098 = BgL_gzd21402zd2_2776;
																	goto BgL_zc3anonymousza33811ze3z83_1099;
																}
														}
													else
														{
															obj_t BgL_gzd21402zd2_2778;

															BgL_gzd21402zd2_2778 = CDR(BgL_gzd21402zd2_1098);
															BgL_gzd21402zd2_1098 = BgL_gzd21402zd2_2778;
															goto BgL_zc3anonymousza33811ze3z83_1099;
														}
												}
											else
												{	/* SawJvm/jld.scm 141 */
													return BFALSE;
												}
										}
									else
										{	/* SawJvm/jld.scm 141 */
											return BFALSE;
										}
								}
							else
								{	/* SawJvm/jld.scm 141 */
									return BFALSE;
								}
						}
					else
						{	/* SawJvm/jld.scm 141 */
							return BFALSE;
						}
				}
			}
		}
	}



/* objects->classes */
	obj_t BGl_objectszd2ze3classesz31zzsaw_jvm_ldz00(obj_t BgL_objectsz00_6)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 151 */
			{
				obj_t BgL_sourcez00_1224;

				{
					obj_t BgL_objectsz00_1131;

					obj_t BgL_classesz00_1132;

					BgL_objectsz00_1131 = BgL_objectsz00_6;
					BgL_classesz00_1132 = BNIL;
				BgL_zc3anonymousza33832ze3z83_1133:
					if (NULLP(BgL_objectsz00_1131))
						{	/* SawJvm/jld.scm 220 */
							return BgL_classesz00_1132;
						}
					else
						{	/* SawJvm/jld.scm 222 */
							obj_t BgL_objectz00_1135;

							BgL_objectz00_1135 = CAR(BgL_objectsz00_1131);
							{	/* SawJvm/jld.scm 222 */
								obj_t BgL_prefz00_1136;

								BgL_prefz00_1136 =
									BGl_unprofzd2srczd2namez00zzengine_linkz00
									(BGl_prefixz00zz__osz00(BgL_objectz00_1135));
								{	/* SawJvm/jld.scm 223 */
									obj_t BgL_bprefz00_1137;

									BgL_bprefz00_1137 =
										BGl_basenamez00zz__osz00(BgL_prefz00_1136);
									{	/* SawJvm/jld.scm 224 */
										obj_t BgL_scmzd2filezd2_1138;

										BgL_scmzd2filezd2_1138 =
											BGl_findzd2srczd2filez00zzengine_linkz00(BgL_prefz00_1136,
											BgL_bprefz00_1137);
										{	/* SawJvm/jld.scm 225 */

											{	/* SawJvm/jld.scm 226 */
												bool_t BgL_testz00_2788;

												if (STRINGP(BgL_scmzd2filezd2_1138))
													{	/* SawJvm/jld.scm 226 */
														BgL_testz00_2788 =
															fexists(BSTRING_TO_STRING
															(BgL_scmzd2filezd2_1138));
													}
												else
													{	/* SawJvm/jld.scm 226 */
														BgL_testz00_2788 = ((bool_t) 0);
													}
												if (BgL_testz00_2788)
													{	/* SawJvm/jld.scm 227 */
														obj_t BgL_arg3835z00_1140;

														obj_t BgL_arg3836z00_1141;

														BgL_arg3835z00_1140 = CDR(BgL_objectsz00_1131);
														{	/* SawJvm/jld.scm 228 */
															obj_t BgL_auxz00_2794;

															{	/* SawJvm/jld.scm 229 */
																obj_t BgL_auxz00_2795;

																BgL_sourcez00_1224 = BgL_scmzd2filezd2_1138;
																{	/* SawJvm/jld.scm 201 */
																	bool_t BgL_testz00_2796;

																	if (bigloo_strcmp(BGl_suffixz00zz__osz00
																			(BgL_sourcez00_1224),
																			BGl_string4337z00zzsaw_jvm_ldz00))
																		{	/* SawJvm/jld.scm 201 */
																			BgL_testz00_2796 = ((bool_t) 0);
																		}
																	else
																		{	/* SawJvm/jld.scm 201 */
																			BgL_testz00_2796 =
																				fexists(BSTRING_TO_STRING
																				(BgL_sourcez00_1224));
																		}
																	if (BgL_testz00_2796)
																		{	/* SawJvm/jld.scm 201 */
																			BgL_auxz00_2795 =
																				BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00
																				(BgL_sourcez00_1224,
																				BGl_proc4338z00zzsaw_jvm_ldz00);
																		}
																	else
																		{	/* SawJvm/jld.scm 201 */
																			BgL_auxz00_2795 = BNIL;
																		}
																}
																BgL_auxz00_2794 =
																	bgl_append2(BgL_auxz00_2795,
																	BgL_classesz00_1132);
															}
															BgL_arg3836z00_1141 =
																MAKE_PAIR(BgL_objectz00_1135, BgL_auxz00_2794);
														}
														{
															obj_t BgL_classesz00_2806;

															obj_t BgL_objectsz00_2805;

															BgL_objectsz00_2805 = BgL_arg3835z00_1140;
															BgL_classesz00_2806 = BgL_arg3836z00_1141;
															BgL_classesz00_1132 = BgL_classesz00_2806;
															BgL_objectsz00_1131 = BgL_objectsz00_2805;
															goto BgL_zc3anonymousza33832ze3z83_1133;
														}
													}
												else
													{	/* SawJvm/jld.scm 230 */
														obj_t BgL_arg3839z00_1144;

														obj_t BgL_arg3840z00_1145;

														BgL_arg3839z00_1144 = CDR(BgL_objectsz00_1131);
														BgL_arg3840z00_1145 =
															MAKE_PAIR(BgL_objectz00_1135,
															BgL_classesz00_1132);
														{
															obj_t BgL_classesz00_2810;

															obj_t BgL_objectsz00_2809;

															BgL_objectsz00_2809 = BgL_arg3839z00_1144;
															BgL_classesz00_2810 = BgL_arg3840z00_1145;
															BgL_classesz00_1132 = BgL_classesz00_2810;
															BgL_objectsz00_1131 = BgL_objectsz00_2809;
															goto BgL_zc3anonymousza33832ze3z83_1133;
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



/* <anonymous:3885> */
	obj_t BGl_zc3anonymousza33885ze3z83zzsaw_jvm_ldz00(obj_t BgL_envz00_2526)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 204 */
			return BGl_zc3exitza33886ze3z83zzsaw_jvm_ldz00();
		}
	}



/* <exit:3886> */
	obj_t BGl_zc3exitza33886ze3z83zzsaw_jvm_ldz00()
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 205 */
			{
				obj_t BgL_idz00_1149;

				obj_t BgL_modz00_1217;

				obj_t BgL_modz00_1167;

				obj_t BgL_basez00_1168;

				obj_t BgL_clausesz00_1169;

				jmp_buf_t jmpbuf;

				void *BgL_an_exit3682z00_1230;

				if (SET_EXIT(BgL_an_exit3682z00_1230))
					{
						return BGL_EXIT_VALUE();
					}
				else
					{
						BgL_an_exit3682z00_1230 = (void *) jmpbuf;
						{	/* SawJvm/jld.scm 205 */

							PUSH_EXIT(BgL_an_exit3682z00_1230, ((long) 1));
							{	/* SawJvm/jld.scm 205 */
								obj_t BgL_an_exitd3683z00_1231;

								BgL_an_exitd3683z00_1231 = BGL_EXITD_TOP_AS_OBJ();
								{	/* SawJvm/jld.scm 206 */
									obj_t BgL_res3685z00_1234;

									{	/* SawJvm/jld.scm 206 */
										obj_t BgL_mz00_1235;

										{	/* SawJvm/jld.scm 207 */
											obj_t BgL_zc3anonymousza33898ze3z83_2523;

											BgL_zc3anonymousza33898ze3z83_2523 =
												make_fx_procedure
												(BGl_zc3anonymousza33898ze3z83zzsaw_jvm_ldz00,
												(int) (((long) 1)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3anonymousza33898ze3z83_2523,
												(int) (((long) 0)), BgL_an_exitd3683z00_1231);
											BgL_mz00_1235 =
												BGl_withzd2exceptionzd2handlerz00zz__errorz00
												(BgL_zc3anonymousza33898ze3z83_2523,
												BGl_proc4341z00zzsaw_jvm_ldz00);
										}
										if (PAIRP(BgL_mz00_1235))
											{	/* SawJvm/jld.scm 209 */
												obj_t BgL_cdrzd21449zd2_1242;

												BgL_cdrzd21449zd2_1242 = CDR(BgL_mz00_1235);
												if ((CAR(BgL_mz00_1235) == CNST_TABLE_REF(((long) 0))))
													{	/* SawJvm/jld.scm 209 */
														if (PAIRP(BgL_cdrzd21449zd2_1242))
															{	/* SawJvm/jld.scm 209 */
																obj_t BgL_arg3890z00_1245;

																obj_t BgL_arg3891z00_1246;

																BgL_arg3890z00_1245 =
																	CAR(BgL_cdrzd21449zd2_1242);
																BgL_arg3891z00_1246 =
																	CDR(BgL_cdrzd21449zd2_1242);
																BgL_modz00_1167 = BgL_arg3890z00_1245;
																{	/* SawJvm/jld.scm 209 */
																	obj_t BgL_auxz00_2903;

																	BgL_modz00_1217 = BgL_arg3890z00_1245;
																	{	/* SawJvm/jld.scm 193 */
																		obj_t BgL_dz00_1219;

																		{	/* SawJvm/jld.scm 194 */
																			obj_t BgL_arg3879z00_1221;

																			{	/* SawJvm/jld.scm 194 */
																				obj_t BgL_arg3880z00_1222;

																				obj_t BgL_arg3881z00_1223;

																				BgL_arg3880z00_1222 =
																					BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00
																					(BgL_modz00_1217);
																				BgL_arg3881z00_1223 =
																					BGl_filezd2separatorzd2zz__osz00();
																				BgL_arg3879z00_1221 =
																					BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00
																					(BgL_arg3880z00_1222,
																					(char) (((unsigned char) '.')),
																					CCHAR(BgL_arg3881z00_1223));
																			}
																			BgL_dz00_1219 =
																				BGl_dirnamez00zz__osz00
																				(BgL_arg3879z00_1221);
																		}
																		if (bigloo_strcmp(BgL_dz00_1219,
																				BGl_string4339z00zzsaw_jvm_ldz00))
																			{	/* SawJvm/jld.scm 197 */
																				BgL_auxz00_2903 =
																					BGl_string4340z00zzsaw_jvm_ldz00;
																			}
																		else
																			{	/* SawJvm/jld.scm 197 */
																				BgL_auxz00_2903 = BgL_dz00_1219;
																			}
																	}
																	BgL_basez00_1168 =
																		BGl_jvmzd2classzd2withzd2directoryzd2zzread_jvmz00
																		(BgL_auxz00_2903);
																}
																BgL_clausesz00_1169 = BgL_arg3891z00_1246;
																{
																	obj_t BgL_clausesz00_1173;

																	obj_t BgL_classesz00_1174;

																	BgL_clausesz00_1173 = BgL_clausesz00_1169;
																	BgL_classesz00_1174 = BNIL;
																BgL_zc3anonymousza33856ze3z83_1175:
																	if (NULLP(BgL_clausesz00_1173))
																		{	/* SawJvm/jld.scm 168 */
																			BgL_res3685z00_1234 = BgL_classesz00_1174;
																		}
																	else
																		{
																			obj_t BgL_statexpz00_1177;

																			{	/* SawJvm/jld.scm 170 */
																				obj_t BgL_ezd21420zd2_1180;

																				BgL_ezd21420zd2_1180 =
																					CAR(BgL_clausesz00_1173);
																				if (PAIRP(BgL_ezd21420zd2_1180))
																					{	/* SawJvm/jld.scm 170 */
																						obj_t BgL_carzd21423zd2_1182;

																						obj_t BgL_cdrzd21424zd2_1183;

																						BgL_carzd21423zd2_1182 =
																							CAR(BgL_ezd21420zd2_1180);
																						BgL_cdrzd21424zd2_1183 =
																							CDR(BgL_ezd21420zd2_1180);
																						if (
																							(BgL_carzd21423zd2_1182 ==
																								CNST_TABLE_REF(((long) 6))))
																							{	/* SawJvm/jld.scm 170 */
																								BgL_statexpz00_1177 =
																									BgL_cdrzd21424zd2_1183;
																							BgL_tagzd21418zd2_1178:
																								{
																									obj_t BgL_statexpz00_1187;

																									obj_t BgL_classesz00_1188;

																									BgL_statexpz00_1187 =
																										BgL_statexpz00_1177;
																									BgL_classesz00_1188 =
																										BgL_classesz00_1174;
																								BgL_zc3anonymousza33861ze3z83_1189:
																									if (NULLP
																										(BgL_statexpz00_1187))
																										{
																											obj_t BgL_classesz00_2847;

																											obj_t BgL_clausesz00_2845;

																											BgL_clausesz00_2845 =
																												CDR
																												(BgL_clausesz00_1173);
																											BgL_classesz00_2847 =
																												BgL_classesz00_1188;
																											BgL_classesz00_1174 =
																												BgL_classesz00_2847;
																											BgL_clausesz00_1173 =
																												BgL_clausesz00_2845;
																											goto
																												BgL_zc3anonymousza33856ze3z83_1175;
																										}
																									else
																										{
																											obj_t BgL_identz00_1192;

																											{	/* SawJvm/jld.scm 177 */
																												obj_t
																													BgL_ezd21429zd2_1195;
																												BgL_ezd21429zd2_1195 =
																													CAR
																													(BgL_statexpz00_1187);
																												if (PAIRP
																													(BgL_ezd21429zd2_1195))
																													{	/* SawJvm/jld.scm 177 */
																														obj_t
																															BgL_carzd21432zd2_1197;
																														obj_t
																															BgL_cdrzd21433zd2_1198;
																														BgL_carzd21432zd2_1197
																															=
																															CAR
																															(BgL_ezd21429zd2_1195);
																														BgL_cdrzd21433zd2_1198
																															=
																															CDR
																															(BgL_ezd21429zd2_1195);
																														{

																															if (
																																(BgL_carzd21432zd2_1197
																																	==
																																	CNST_TABLE_REF
																																	(((long) 2))))
																																{	/* SawJvm/jld.scm 177 */
																																BgL_kapzd21434zd2_1199:
																																	if (PAIRP
																																		(BgL_cdrzd21433zd2_1198))
																																		{	/* SawJvm/jld.scm 177 */
																																			BgL_identz00_1192
																																				=
																																				CAR
																																				(BgL_cdrzd21433zd2_1198);
																																			{	/* SawJvm/jld.scm 180 */
																																				obj_t
																																					BgL_idz00_1207;
																																				BgL_idz00_1149
																																					=
																																					BgL_identz00_1192;
																																				{	/* SawJvm/jld.scm 153 */
																																					obj_t
																																						BgL_stringz00_1151;
																																					{	/* SawJvm/jld.scm 153 */
																																						obj_t
																																							BgL_res4288z00_2173;
																																						{	/* SawJvm/jld.scm 153 */
																																							obj_t
																																								BgL_symbolz00_2171;
																																							BgL_symbolz00_2171
																																								=
																																								BgL_idz00_1149;
																																							{	/* SawJvm/jld.scm 153 */
																																								obj_t
																																									BgL_arg2063z00_2172;
																																								BgL_arg2063z00_2172
																																									=
																																									SYMBOL_TO_STRING
																																									(BgL_symbolz00_2171);
																																								BgL_res4288z00_2173
																																									=
																																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																									(BgL_arg2063z00_2172);
																																							}
																																						}
																																						BgL_stringz00_1151
																																							=
																																							BgL_res4288z00_2173;
																																					}
																																					{	/* SawJvm/jld.scm 153 */
																																						long
																																							BgL_lenz00_1152;
																																						BgL_lenz00_1152
																																							=
																																							STRING_LENGTH
																																							(BgL_stringz00_1151);
																																						{	/* SawJvm/jld.scm 154 */

																																							{
																																								long
																																									BgL_walkerz00_1154;
																																								BgL_walkerz00_1154
																																									=
																																									(
																																									(long)
																																									0);
																																							BgL_zc3anonymousza33844ze3z83_1155:
																																								if ((BgL_walkerz00_1154 == BgL_lenz00_1152))
																																									{	/* SawJvm/jld.scm 157 */
																																										BgL_idz00_1207
																																											=
																																											BgL_idz00_1149;
																																									}
																																								else
																																									{	/* SawJvm/jld.scm 159 */
																																										bool_t
																																											BgL_testz00_2863;
																																										if ((STRING_REF(BgL_stringz00_1151, BgL_walkerz00_1154) == ((unsigned char) ':')))
																																											{	/* SawJvm/jld.scm 159 */
																																												if ((BgL_walkerz00_1154 < (BgL_lenz00_1152 - ((long) 1))))
																																													{	/* SawJvm/jld.scm 160 */
																																														BgL_testz00_2863
																																															=
																																															(STRING_REF
																																															(BgL_stringz00_1151,
																																																(BgL_walkerz00_1154
																																																	+
																																																	((long) 1))) == ((unsigned char) ':'));
																																													}
																																												else
																																													{	/* SawJvm/jld.scm 160 */
																																														BgL_testz00_2863
																																															=
																																															(
																																															(bool_t)
																																															0);
																																													}
																																											}
																																										else
																																											{	/* SawJvm/jld.scm 159 */
																																												BgL_testz00_2863
																																													=
																																													(
																																													(bool_t)
																																													0);
																																											}
																																										if (BgL_testz00_2863)
																																											{	/* SawJvm/jld.scm 162 */
																																												obj_t
																																													BgL_arg3847z00_1158;
																																												BgL_arg3847z00_1158
																																													=
																																													c_substring
																																													(BgL_stringz00_1151,
																																													((long) 0), BgL_walkerz00_1154);
																																												BgL_idz00_1207
																																													=
																																													string_to_symbol
																																													(BSTRING_TO_STRING
																																													(BgL_arg3847z00_1158));
																																											}
																																										else
																																											{
																																												long
																																													BgL_walkerz00_2876;
																																												BgL_walkerz00_2876
																																													=
																																													(BgL_walkerz00_1154
																																													+
																																													((long) 1));
																																												BgL_walkerz00_1154
																																													=
																																													BgL_walkerz00_2876;
																																												goto
																																													BgL_zc3anonymousza33844ze3z83_1155;
																																											}
																																									}
																																							}
																																						}
																																					}
																																				}
																																				{	/* SawJvm/jld.scm 180 */
																																					obj_t
																																						BgL_mglz00_1208;
																																					BgL_mglz00_1208
																																						=
																																						BGl_classzd2idzd2ze3typezd2namez31zzbackend_cplibz00
																																						(BgL_idz00_1207,
																																						BgL_modz00_1167);
																																					{	/* SawJvm/jld.scm 181 */

																																						{	/* SawJvm/jld.scm 182 */
																																							obj_t
																																								BgL_arg3871z00_1209;
																																							obj_t
																																								BgL_arg3872z00_1210;
																																							BgL_arg3871z00_1209
																																								=
																																								CDR
																																								(BgL_statexpz00_1187);
																																							BgL_arg3872z00_1210
																																								=
																																								MAKE_PAIR
																																								(BGl_makezd2filezd2namez00zz__osz00
																																								(BgL_basez00_1168,
																																									string_append
																																									(BgL_mglz00_1208,
																																										BGl_string4322z00zzsaw_jvm_ldz00)),
																																								BgL_classesz00_1188);
																																							{
																																								obj_t
																																									BgL_classesz00_2884;
																																								obj_t
																																									BgL_statexpz00_2883;
																																								BgL_statexpz00_2883
																																									=
																																									BgL_arg3871z00_1209;
																																								BgL_classesz00_2884
																																									=
																																									BgL_arg3872z00_1210;
																																								BgL_classesz00_1188
																																									=
																																									BgL_classesz00_2884;
																																								BgL_statexpz00_1187
																																									=
																																									BgL_statexpz00_2883;
																																								goto
																																									BgL_zc3anonymousza33861ze3z83_1189;
																																							}
																																						}
																																					}
																																				}
																																			}
																																		}
																																	else
																																		{	/* SawJvm/jld.scm 177 */
																																		BgL_tagzd21428zd2_1194:
																																			{
																																				obj_t
																																					BgL_statexpz00_2886;
																																				BgL_statexpz00_2886
																																					=
																																					CDR
																																					(BgL_statexpz00_1187);
																																				BgL_statexpz00_1187
																																					=
																																					BgL_statexpz00_2886;
																																				goto
																																					BgL_zc3anonymousza33861ze3z83_1189;
																																			}
																																		}
																																}
																															else
																																{	/* SawJvm/jld.scm 177 */
																																	if (
																																		(BgL_carzd21432zd2_1197
																																			==
																																			CNST_TABLE_REF
																																			(((long)
																																					3))))
																																		{	/* SawJvm/jld.scm 177 */
																																			goto
																																				BgL_kapzd21434zd2_1199;
																																		}
																																	else
																																		{	/* SawJvm/jld.scm 177 */
																																			if (
																																				(BgL_carzd21432zd2_1197
																																					==
																																					CNST_TABLE_REF
																																					(((long) 4))))
																																				{	/* SawJvm/jld.scm 177 */
																																					goto
																																						BgL_kapzd21434zd2_1199;
																																				}
																																			else
																																				{	/* SawJvm/jld.scm 177 */
																																					if (
																																						(BgL_carzd21432zd2_1197
																																							==
																																							CNST_TABLE_REF
																																							(((long) 5))))
																																						{	/* SawJvm/jld.scm 177 */
																																							goto
																																								BgL_kapzd21434zd2_1199;
																																						}
																																					else
																																						{	/* SawJvm/jld.scm 177 */
																																							goto
																																								BgL_tagzd21428zd2_1194;
																																						}
																																				}
																																		}
																																}
																														}
																													}
																												else
																													{	/* SawJvm/jld.scm 177 */
																														goto
																															BgL_tagzd21428zd2_1194;
																													}
																											}
																										}
																								}
																							}
																						else
																							{	/* SawJvm/jld.scm 170 */
																								if (
																									(BgL_carzd21423zd2_1182 ==
																										CNST_TABLE_REF(((long) 7))))
																									{
																										obj_t BgL_statexpz00_2900;

																										BgL_statexpz00_2900 =
																											BgL_cdrzd21424zd2_1183;
																										BgL_statexpz00_1177 =
																											BgL_statexpz00_2900;
																										goto BgL_tagzd21418zd2_1178;
																									}
																								else
																									{	/* SawJvm/jld.scm 170 */
																									BgL_tagzd21419zd2_1179:
																										{
																											obj_t BgL_clausesz00_2901;

																											BgL_clausesz00_2901 =
																												CDR
																												(BgL_clausesz00_1173);
																											BgL_clausesz00_1173 =
																												BgL_clausesz00_2901;
																											goto
																												BgL_zc3anonymousza33856ze3z83_1175;
																										}
																									}
																							}
																					}
																				else
																					{	/* SawJvm/jld.scm 170 */
																						goto BgL_tagzd21419zd2_1179;
																					}
																			}
																		}
																}
															}
														else
															{	/* SawJvm/jld.scm 209 */
																BgL_res3685z00_1234 = BNIL;
															}
													}
												else
													{	/* SawJvm/jld.scm 209 */
														BgL_res3685z00_1234 = BNIL;
													}
											}
										else
											{	/* SawJvm/jld.scm 209 */
												BgL_res3685z00_1234 = BNIL;
											}
									}
									POP_EXIT();
									return BgL_res3685z00_1234;
								}
							}
						}
					}
			}
		}
	}



/* <anonymous:3899> */
	obj_t BGl_zc3anonymousza33899ze3z83zzsaw_jvm_ldz00(obj_t BgL_envz00_2527)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 208 */
			{

				{	/* SawJvm/jld.scm 208 */
					obj_t BgL_arg3900z00_1256;

					{	/* SawJvm/jld.scm 208 */
						obj_t BgL_res4289z00_2228;

						{	/* SawJvm/jld.scm 208 */
							obj_t BgL_auxz00_2914;

							BgL_auxz00_2914 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res4289z00_2228 = BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_2914);
						}
						BgL_arg3900z00_1256 = BgL_res4289z00_2228;
					}
					{	/* SawJvm/jld.scm 208 */

						{	/* SawJvm/jld.scm 208 */

							return BGl_readz00zz__readerz00(BgL_arg3900z00_1256, BFALSE);
						}
					}
				}
			}
		}
	}



/* <anonymous:3898> */
	obj_t BGl_zc3anonymousza33898ze3z83zzsaw_jvm_ldz00(obj_t BgL_envz00_2528,
		obj_t BgL__z00_2530)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 207 */
			{	/* SawJvm/jld.scm 207 */
				obj_t BgL_an_exitd3683z00_2529;

				BgL_an_exitd3683z00_2529 =
					PROCEDURE_REF(BgL_envz00_2528, (int) (((long) 0)));
				{
					obj_t BgL__z00_1253;

					BgL__z00_1253 = BgL__z00_2530;
					return
						BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd3683z00_2529,
						BNIL);
				}
			}
		}
	}



/* unique */
	obj_t BGl_uniquez00zzsaw_jvm_ldz00(obj_t BgL_lstz00_7)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 236 */
			{	/* SawJvm/jld.scm 237 */
				obj_t BgL_tz00_1269;

				BgL_tz00_1269 = BGl_makezd2hashtablezd2zz__hashz00(BNIL);
				{
					obj_t BgL_l3698z00_1271;

					BgL_l3698z00_1271 = BgL_lstz00_7;
				BgL_zc3anonymousza33904ze3z83_1272:
					if (PAIRP(BgL_l3698z00_1271))
						{	/* SawJvm/jld.scm 238 */
							{	/* SawJvm/jld.scm 238 */
								obj_t BgL_fz00_1274;

								BgL_fz00_1274 = CAR(BgL_l3698z00_1271);
								BGl_hashtablezd2putz12zc0zz__hashz00(BgL_tz00_1269,
									BgL_fz00_1274, BgL_fz00_1274);
							}
							{
								obj_t BgL_l3698z00_2926;

								BgL_l3698z00_2926 = CDR(BgL_l3698z00_1271);
								BgL_l3698z00_1271 = BgL_l3698z00_2926;
								goto BgL_zc3anonymousza33904ze3z83_1272;
							}
						}
					else
						{	/* SawJvm/jld.scm 238 */
							((bool_t) 1);
						}
				}
				return BGl_hashtablezd2ze3listz31zz__hashz00(BgL_tz00_1269);
			}
		}
	}



/* jvm-jar */
	obj_t BGl_jvmzd2jarzd2zzsaw_jvm_ldz00(obj_t BgL_targetz00_8,
		obj_t BgL_manifestz00_9, obj_t BgL_objectsz00_10)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 244 */
			{	/* SawJvm/jld.scm 245 */
				obj_t BgL_cmdz00_1278;

				if (STRINGP(BGl_za2jvmzd2directoryza2zd2zzengine_paramz00))
					{
						obj_t BgL_objectsz00_1298;

						obj_t BgL_cmdz00_1299;

						BgL_objectsz00_1298 = BgL_objectsz00_10;
						BgL_cmdz00_1299 = BGl_string4340z00zzsaw_jvm_ldz00;
					BgL_zc3anonymousza33923ze3z83_1300:
						if (NULLP(BgL_objectsz00_1298))
							{	/* SawJvm/jld.scm 249 */
								obj_t BgL_arg3925z00_1302;

								BgL_arg3925z00_1302 =
									BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
											8)));
								{	/* SawJvm/jld.scm 249 */
									obj_t BgL_list3929z00_1306;

									{	/* SawJvm/jld.scm 249 */
										obj_t BgL_arg3930z00_1307;

										{	/* SawJvm/jld.scm 249 */
											obj_t BgL_arg3931z00_1308;

											{	/* SawJvm/jld.scm 249 */
												obj_t BgL_arg3932z00_1309;

												{	/* SawJvm/jld.scm 249 */
													obj_t BgL_arg3933z00_1310;

													{	/* SawJvm/jld.scm 249 */
														obj_t BgL_arg3934z00_1311;

														{	/* SawJvm/jld.scm 249 */
															obj_t BgL_arg3935z00_1312;

															BgL_arg3935z00_1312 =
																MAKE_PAIR(BgL_cmdz00_1299, BNIL);
															BgL_arg3934z00_1311 =
																MAKE_PAIR(BGl_string4342z00zzsaw_jvm_ldz00,
																BgL_arg3935z00_1312);
														}
														BgL_arg3933z00_1310 =
															MAKE_PAIR(BgL_targetz00_8, BgL_arg3934z00_1311);
													}
													BgL_arg3932z00_1309 =
														MAKE_PAIR(BGl_string4342z00zzsaw_jvm_ldz00,
														BgL_arg3933z00_1310);
												}
												BgL_arg3931z00_1308 =
													MAKE_PAIR(BgL_manifestz00_9, BgL_arg3932z00_1309);
											}
											BgL_arg3930z00_1307 =
												MAKE_PAIR(BGl_string4342z00zzsaw_jvm_ldz00,
												BgL_arg3931z00_1308);
										}
										BgL_list3929z00_1306 =
											MAKE_PAIR(BgL_arg3925z00_1302, BgL_arg3930z00_1307);
									}
									BgL_cmdz00_1278 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list3929z00_1306);
							}}
						else
							{	/* SawJvm/jld.scm 253 */
								obj_t BgL_arg3936z00_1313;

								obj_t BgL_arg3937z00_1314;

								BgL_arg3936z00_1313 = CDR(BgL_objectsz00_1298);
								{	/* SawJvm/jld.scm 254 */
									obj_t BgL_arg3940z00_1317;

									BgL_arg3940z00_1317 =
										BGl_jvmzd2classzd2sanszd2directoryzd2zzread_jvmz00(CAR
										(BgL_objectsz00_1298));
									{	/* SawJvm/jld.scm 254 */
										obj_t BgL_list3942z00_1319;

										{	/* SawJvm/jld.scm 254 */
											obj_t BgL_arg3943z00_1320;

											{	/* SawJvm/jld.scm 254 */
												obj_t BgL_arg3944z00_1321;

												{	/* SawJvm/jld.scm 254 */
													obj_t BgL_arg3945z00_1322;

													{	/* SawJvm/jld.scm 254 */
														obj_t BgL_arg3946z00_1323;

														{	/* SawJvm/jld.scm 254 */
															obj_t BgL_arg3947z00_1324;

															BgL_arg3947z00_1324 =
																MAKE_PAIR(BgL_cmdz00_1299, BNIL);
															BgL_arg3946z00_1323 =
																MAKE_PAIR(BGl_string4342z00zzsaw_jvm_ldz00,
																BgL_arg3947z00_1324);
														}
														BgL_arg3945z00_1322 =
															MAKE_PAIR(BgL_arg3940z00_1317,
															BgL_arg3946z00_1323);
													}
													BgL_arg3944z00_1321 =
														MAKE_PAIR(BGl_string4342z00zzsaw_jvm_ldz00,
														BgL_arg3945z00_1322);
												}
												BgL_arg3943z00_1320 =
													MAKE_PAIR
													(BGl_za2jvmzd2directoryza2zd2zzengine_paramz00,
													BgL_arg3944z00_1321);
											}
											BgL_list3942z00_1319 =
												MAKE_PAIR(BGl_string4343z00zzsaw_jvm_ldz00,
												BgL_arg3943z00_1320);
										}
										BgL_arg3937z00_1314 =
											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
											(BgL_list3942z00_1319);
									}
								}
								{
									obj_t BgL_cmdz00_2954;

									obj_t BgL_objectsz00_2953;

									BgL_objectsz00_2953 = BgL_arg3936z00_1313;
									BgL_cmdz00_2954 = BgL_arg3937z00_1314;
									BgL_cmdz00_1299 = BgL_cmdz00_2954;
									BgL_objectsz00_1298 = BgL_objectsz00_2953;
									goto BgL_zc3anonymousza33923ze3z83_1300;
								}
							}
					}
				else
					{
						obj_t BgL_objectsz00_1328;

						obj_t BgL_cmdz00_1329;

						BgL_objectsz00_1328 = BgL_objectsz00_10;
						BgL_cmdz00_1329 = BGl_string4340z00zzsaw_jvm_ldz00;
					BgL_zc3anonymousza33949ze3z83_1330:
						if (NULLP(BgL_objectsz00_1328))
							{	/* SawJvm/jld.scm 260 */
								obj_t BgL_arg3951z00_1332;

								BgL_arg3951z00_1332 =
									BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
											8)));
								{	/* SawJvm/jld.scm 260 */
									obj_t BgL_list3956z00_1336;

									{	/* SawJvm/jld.scm 260 */
										obj_t BgL_arg3958z00_1337;

										{	/* SawJvm/jld.scm 260 */
											obj_t BgL_arg3959z00_1338;

											{	/* SawJvm/jld.scm 260 */
												obj_t BgL_arg3960z00_1339;

												{	/* SawJvm/jld.scm 260 */
													obj_t BgL_arg3961z00_1340;

													{	/* SawJvm/jld.scm 260 */
														obj_t BgL_arg3962z00_1341;

														{	/* SawJvm/jld.scm 260 */
															obj_t BgL_arg3963z00_1342;

															BgL_arg3963z00_1342 =
																MAKE_PAIR(BgL_cmdz00_1329, BNIL);
															BgL_arg3962z00_1341 =
																MAKE_PAIR(BGl_string4342z00zzsaw_jvm_ldz00,
																BgL_arg3963z00_1342);
														}
														BgL_arg3961z00_1340 =
															MAKE_PAIR(BgL_targetz00_8, BgL_arg3962z00_1341);
													}
													BgL_arg3960z00_1339 =
														MAKE_PAIR(BGl_string4342z00zzsaw_jvm_ldz00,
														BgL_arg3961z00_1340);
												}
												BgL_arg3959z00_1338 =
													MAKE_PAIR(BgL_manifestz00_9, BgL_arg3960z00_1339);
											}
											BgL_arg3958z00_1337 =
												MAKE_PAIR(BGl_string4342z00zzsaw_jvm_ldz00,
												BgL_arg3959z00_1338);
										}
										BgL_list3956z00_1336 =
											MAKE_PAIR(BgL_arg3951z00_1332, BgL_arg3958z00_1337);
									}
									BgL_cmdz00_1278 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list3956z00_1336);
							}}
						else
							{
								obj_t BgL_cmdz00_2969;

								obj_t BgL_objectsz00_2967;

								BgL_objectsz00_2967 = CDR(BgL_objectsz00_1328);
								BgL_cmdz00_2969 =
									string_append_3(CAR(BgL_objectsz00_1328),
									BGl_string4342z00zzsaw_jvm_ldz00, BgL_cmdz00_1329);
								BgL_cmdz00_1329 = BgL_cmdz00_2969;
								BgL_objectsz00_1328 = BgL_objectsz00_2967;
								goto BgL_zc3anonymousza33949ze3z83_1330;
							}
					}
				{	/* SawJvm/jld.scm 267 */
					obj_t BgL_list3908z00_1279;

					{	/* SawJvm/jld.scm 267 */
						obj_t BgL_arg3910z00_1281;

						{	/* SawJvm/jld.scm 267 */
							obj_t BgL_arg3911z00_1282;

							BgL_arg3911z00_1282 =
								MAKE_PAIR(BGl_string4344z00zzsaw_jvm_ldz00, BNIL);
							BgL_arg3910z00_1281 =
								MAKE_PAIR(BgL_cmdz00_1278, BgL_arg3911z00_1282);
						}
						BgL_list3908z00_1279 =
							MAKE_PAIR(BGl_string4345z00zzsaw_jvm_ldz00, BgL_arg3910z00_1281);
					}
					BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
						BgL_list3908z00_1279);
				}
				{	/* SawJvm/jld.scm 268 */
					obj_t BgL_val3687z00_1283;

					BgL_val3687z00_1283 =
						BGl_zc3exitza33915ze3z83zzsaw_jvm_ldz00(BgL_cmdz00_1278,
						BgL_targetz00_8);
					if (CBOOL(BGl_za2rmzd2tmpzd2filesza2z00zzengine_paramz00))
						{	/* SawJvm/jld.scm 273 */
							char *BgL_stringz00_2253;

							BgL_stringz00_2253 = BSTRING_TO_STRING(BgL_manifestz00_9);
							if (unlink(BgL_stringz00_2253))
								{	/* SawJvm/jld.scm 273 */
									((bool_t) 0);
								}
							else
								{	/* SawJvm/jld.scm 273 */
									((bool_t) 1);
								}
						}
					else
						{	/* SawJvm/jld.scm 272 */
							((bool_t) 0);
						}
					if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
							(BgL_val3687z00_1283)))
						{	/* SawJvm/jld.scm 272 */
							return
								BGl_unwindzd2untilz12zc0zz__bexitz00(CAR(BgL_val3687z00_1283),
								CDR(BgL_val3687z00_1283));
						}
					else
						{	/* SawJvm/jld.scm 272 */
							return BgL_val3687z00_1283;
						}
				}
			}
		}
	}



/* <exit:3915> */
	obj_t BGl_zc3exitza33915ze3z83zzsaw_jvm_ldz00(obj_t BgL_cmdz00_2558,
		obj_t BgL_targetz00_2557)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 272 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit3688z00_1288;

			if (SET_EXIT(BgL_an_exit3688z00_1288))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit3688z00_1288 = (void *) jmpbuf;
					{	/* SawJvm/jld.scm 272 */

						PUSH_EXIT(BgL_an_exit3688z00_1288, ((long) 0));
						{	/* SawJvm/jld.scm 269 */
							obj_t BgL_val3689z00_1289;

							{	/* SawJvm/jld.scm 269 */
								bool_t BgL_testz00_2992;

								{	/* SawJvm/jld.scm 269 */
									obj_t BgL_arg3919z00_1293;

									{	/* SawJvm/jld.scm 269 */
										obj_t BgL_list3921z00_1295;

										BgL_list3921z00_1295 = MAKE_PAIR(BgL_cmdz00_2558, BNIL);
										BgL_arg3919z00_1293 =
											BGl_systemz00zz__osz00(BgL_list3921z00_1295);
									}
									BgL_testz00_2992 =
										((long) CINT(BgL_arg3919z00_1293) == ((long) 0));
								}
								if (BgL_testz00_2992)
									{	/* SawJvm/jld.scm 269 */
										BgL_val3689z00_1289 = BTRUE;
									}
								else
									{	/* SawJvm/jld.scm 269 */
										BgL_val3689z00_1289 =
											BGl_errorz00zz__errorz00
											(BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF((
														(long) 8))), BGl_string4346z00zzsaw_jvm_ldz00,
											BgL_targetz00_2557);
							}}
							POP_EXIT();
							return BgL_val3689z00_1289;
						}
					}
				}
		}
	}



/* make-manifest-name */
	obj_t BGl_makezd2manifestzd2namez00zzsaw_jvm_ldz00()
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 278 */
			{
				obj_t BgL_namez00_1349;

				BgL_namez00_1349 = BGl_string4348z00zzsaw_jvm_ldz00;
			BgL_zc3anonymousza33968ze3z83_1350:
				if (fexists(BSTRING_TO_STRING(BgL_namez00_1349)))
					{
						obj_t BgL_namez00_3004;

						BgL_namez00_3004 =
							string_append(BgL_namez00_1349, BGl_string4347z00zzsaw_jvm_ldz00);
						BgL_namez00_1349 = BgL_namez00_3004;
						goto BgL_zc3anonymousza33968ze3z83_1350;
					}
				else
					{	/* SawJvm/jld.scm 280 */
						return BgL_namez00_1349;
					}
			}
		}
	}



/* jvm-bigloo-classpath */
	obj_t BGl_jvmzd2bigloozd2classpathz00zzsaw_jvm_ldz00()
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 287 */
			{	/* SawJvm/jld.scm 289 */
				obj_t BgL_arg3972z00_1354;

				if (STRINGP(BGl_za2jvmzd2bigloozd2classpathza2z00zzengine_paramz00))
					{	/* SawJvm/jld.scm 289 */
						BgL_arg3972z00_1354 =
							BGl_za2jvmzd2bigloozd2classpathza2z00zzengine_paramz00;
					}
				else
					{	/* SawJvm/jld.scm 289 */
						BgL_arg3972z00_1354 =
							BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
									9)));
					}
				return BGl_uncygdrivez00zztools_miscz00(BgL_arg3972z00_1354);
			}
		}
	}



/* generate-jvm-manifest */
	obj_t BGl_generatezd2jvmzd2manifestz00zzsaw_jvm_ldz00(obj_t BgL_fnamez00_12,
		obj_t BgL_mainz00_13, obj_t BgL_jarnamez00_14, obj_t BgL_za7ipsza7_15)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 304 */
			if (bigloo_strcmp(BGl_za2jvmzd2shellza2zd2zzengine_paramz00,
					BGl_string4349z00zzsaw_jvm_ldz00))
				{	/* SawJvm/jld.scm 306 */
					return
						BGl_generatezd2shzd2jvmzd2manifestzd2zzsaw_jvm_ldz00
						(BgL_fnamez00_12, BgL_mainz00_13, BgL_za7ipsza7_15);
				}
			else
				{	/* SawJvm/jld.scm 306 */
					if (bigloo_strcmp(BGl_za2jvmzd2shellza2zd2zzengine_paramz00,
							BGl_string4326z00zzsaw_jvm_ldz00))
						{	/* SawJvm/jld.scm 308 */
							return
								BGl_generatezd2msdoszd2jvmzd2manifestzd2zzsaw_jvm_ldz00
								(BgL_fnamez00_12, BgL_mainz00_13, BgL_jarnamez00_14);
						}
					else
						{	/* SawJvm/jld.scm 308 */
							{	/* SawJvm/jld.scm 311 */
								obj_t BgL_list3977z00_1359;

								{	/* SawJvm/jld.scm 311 */
									obj_t BgL_arg3979z00_1361;

									{	/* SawJvm/jld.scm 311 */
										obj_t BgL_arg3981z00_1363;

										{	/* SawJvm/jld.scm 311 */
											obj_t BgL_arg3982z00_1364;

											BgL_arg3982z00_1364 =
												MAKE_PAIR(BGl_string4350z00zzsaw_jvm_ldz00, BNIL);
											BgL_arg3981z00_1363 =
												MAKE_PAIR(BGl_za2jvmzd2shellza2zd2zzengine_paramz00,
												BgL_arg3982z00_1364);
										}
										BgL_arg3979z00_1361 =
											MAKE_PAIR(BGl_string4351z00zzsaw_jvm_ldz00,
											BgL_arg3981z00_1363);
									}
									BgL_list3977z00_1359 =
										MAKE_PAIR(BGl_string4352z00zzsaw_jvm_ldz00,
										BgL_arg3979z00_1361);
								}
								BGl_warningz00zz__errorz00(BgL_list3977z00_1359);
							}
							return
								BGl_generatezd2shzd2jvmzd2manifestzd2zzsaw_jvm_ldz00
								(BgL_fnamez00_12, BgL_mainz00_13, BgL_za7ipsza7_15);
						}
				}
		}
	}



/* split-72 */
	obj_t BGl_splitzd272zd2zzsaw_jvm_ldz00(obj_t BgL_strz00_16)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 318 */
			return BGl_loopz00zzsaw_jvm_ldz00(BgL_strz00_16, ((long) 0));
		}
	}



/* loop */
	obj_t BGl_loopz00zzsaw_jvm_ldz00(obj_t BgL_strz00_2556, long BgL_oz00_1366)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 319 */
			if (((STRING_LENGTH(BgL_strz00_2556) - BgL_oz00_1366) <= ((long) 72)))
				{	/* SawJvm/jld.scm 320 */
					if ((BgL_oz00_1366 == ((long) 0)))
						{	/* SawJvm/jld.scm 321 */
							return BgL_strz00_2556;
						}
					else
						{	/* SawJvm/jld.scm 321 */
							return
								c_substring(BgL_strz00_2556, BgL_oz00_1366,
								STRING_LENGTH(BgL_strz00_2556));
						}
				}
			else
				{	/* SawJvm/jld.scm 320 */
					return
						string_append_3(c_substring(BgL_strz00_2556, BgL_oz00_1366,
							(BgL_oz00_1366 + ((long) 71))), BGl_string4353z00zzsaw_jvm_ldz00,
						BGl_loopz00zzsaw_jvm_ldz00(BgL_strz00_2556,
							(BgL_oz00_1366 + ((long) 72))));
		}}
	}



/* generate-sh-jvm-manifest */
	obj_t BGl_generatezd2shzd2jvmzd2manifestzd2zzsaw_jvm_ldz00(obj_t
		BgL_fnamez00_17, obj_t BgL_mainz00_18, obj_t BgL_za7ipsza7_19)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 331 */
			{	/* SawJvm/jld.scm 334 */
				obj_t BgL_zc3anonymousza33996ze3z83_2531;

				BgL_zc3anonymousza33996ze3z83_2531 =
					make_fx_procedure(BGl_zc3anonymousza33996ze3z83zzsaw_jvm_ldz00,
					(int) (((long) 0)), (int) (((long) 2)));
				PROCEDURE_SET(BgL_zc3anonymousza33996ze3z83_2531,
					(int) (((long) 0)), BgL_mainz00_18);
				PROCEDURE_SET(BgL_zc3anonymousza33996ze3z83_2531,
					(int) (((long) 1)), BgL_za7ipsza7_19);
				return
					BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00
					(BgL_fnamez00_17, BgL_zc3anonymousza33996ze3z83_2531);
			}
		}
	}



/* <anonymous:3996> */
	obj_t BGl_zc3anonymousza33996ze3z83zzsaw_jvm_ldz00(obj_t BgL_envz00_2532)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 333 */
			{	/* SawJvm/jld.scm 334 */
				obj_t BgL_mainz00_2533;

				obj_t BgL_za7ipsza7_2534;

				BgL_mainz00_2533 = PROCEDURE_REF(BgL_envz00_2532, (int) (((long) 0)));
				BgL_za7ipsza7_2534 = PROCEDURE_REF(BgL_envz00_2532, (int) (((long) 1)));
				{

					{	/* SawJvm/jld.scm 334 */
						obj_t BgL_port3700z00_1382;

						{	/* SawJvm/jld.scm 334 */
							obj_t BgL_res4290z00_2284;

							{	/* SawJvm/jld.scm 334 */
								obj_t BgL_auxz00_3049;

								BgL_auxz00_3049 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res4290z00_2284 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3049);
							}
							BgL_port3700z00_1382 = BgL_res4290z00_2284;
						}
						bgl_display_string(BGl_string4354z00zzsaw_jvm_ldz00,
							BgL_port3700z00_1382);
						bgl_display_char(((unsigned char) '\n'), BgL_port3700z00_1382);
					}
					{	/* SawJvm/jld.scm 335 */
						obj_t BgL_port3701z00_1383;

						{	/* SawJvm/jld.scm 335 */
							obj_t BgL_res4291z00_2289;

							{	/* SawJvm/jld.scm 335 */
								obj_t BgL_auxz00_3054;

								BgL_auxz00_3054 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res4291z00_2289 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3054);
							}
							BgL_port3701z00_1383 = BgL_res4291z00_2289;
						}
						bgl_display_string(BGl_string4355z00zzsaw_jvm_ldz00,
							BgL_port3701z00_1383);
						bgl_display_obj(BgL_mainz00_2533, BgL_port3701z00_1383);
						bgl_display_char(((unsigned char) '\n'), BgL_port3701z00_1383);
					}
					{	/* SawJvm/jld.scm 336 */
						obj_t BgL_arg3998z00_1385;

						BgL_arg3998z00_1385 =
							BGl_splitzd272zd2zzsaw_jvm_ldz00
							(BGl_za2jvmzd2classpathza2zd2zzengine_paramz00);
						{	/* SawJvm/jld.scm 336 */
							obj_t BgL_list3999z00_1386;

							{	/* SawJvm/jld.scm 336 */
								obj_t BgL_arg4000z00_1387;

								BgL_arg4000z00_1387 = MAKE_PAIR(BgL_arg3998z00_1385, BNIL);
								BgL_list3999z00_1386 =
									MAKE_PAIR(BGl_string4356z00zzsaw_jvm_ldz00,
									BgL_arg4000z00_1387);
							}
							BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list3999z00_1386);
					}}
					{	/* SawJvm/jld.scm 338 */
						obj_t BgL_arg4002z00_1389;

						{	/* SawJvm/jld.scm 338 */
							obj_t BgL_res4292z00_2294;

							{	/* SawJvm/jld.scm 338 */
								obj_t BgL_auxz00_3064;

								BgL_auxz00_3064 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res4292z00_2294 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3064);
							}
							BgL_arg4002z00_1389 = BgL_res4292z00_2294;
						}
						bgl_display_string(BGl_string4353z00zzsaw_jvm_ldz00,
							BgL_arg4002z00_1389);
					}
					{	/* SawJvm/jld.scm 341 */
						obj_t BgL_arg4003z00_1390;

						obj_t BgL_arg4004z00_1391;

						{	/* SawJvm/jld.scm 341 */
							obj_t BgL_arg4005z00_1392;

							{	/* SawJvm/jld.scm 341 */
								obj_t BgL_arg4006z00_1393;

								obj_t BgL_arg4007z00_1394;

								BgL_arg4006z00_1393 =
									BGl_jvmzd2bigloozd2classpathz00zzsaw_jvm_ldz00();
								{	/* SawJvm/jld.scm 342 */
									bool_t BgL_testz00_3069;

									if (CBOOL(BGl_za2unsafezd2libraryza2zd2zzengine_paramz00))
										{	/* SawJvm/jld.scm 342 */
											if (CBOOL(BGl_za2purifyza2z00zzengine_paramz00))
												{	/* SawJvm/jld.scm 342 */
													BgL_testz00_3069 = ((bool_t) 0);
												}
											else
												{	/* SawJvm/jld.scm 342 */
													BgL_testz00_3069 = ((bool_t) 1);
												}
										}
									else
										{	/* SawJvm/jld.scm 342 */
											BgL_testz00_3069 = ((bool_t) 0);
										}
									if (BgL_testz00_3069)
										{	/* SawJvm/jld.scm 342 */
											BgL_arg4007z00_1394 = BGl_string4357z00zzsaw_jvm_ldz00;
										}
									else
										{	/* SawJvm/jld.scm 342 */
											BgL_arg4007z00_1394 = BGl_string4358z00zzsaw_jvm_ldz00;
										}
								}
								BgL_arg4005z00_1392 =
									BGl_makezd2filezd2namez00zz__osz00(BgL_arg4006z00_1393,
									BgL_arg4007z00_1394);
							}
							BgL_arg4003z00_1390 =
								BGl_splitzd272zd2zzsaw_jvm_ldz00(BgL_arg4005z00_1392);
						}
						{	/* SawJvm/jld.scm 339 */
							obj_t BgL_res4293z00_2298;

							{	/* SawJvm/jld.scm 339 */
								obj_t BgL_auxz00_3076;

								BgL_auxz00_3076 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res4293z00_2298 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3076);
							}
							BgL_arg4004z00_1391 = BgL_res4293z00_2298;
						}
						bgl_display_obj(BgL_arg4003z00_1390, BgL_arg4004z00_1391);
					}
					{
						obj_t BgL_l3702z00_1397;

						BgL_l3702z00_1397 = BgL_za7ipsza7_2534;
					BgL_zc3anonymousza34009ze3z83_1398:
						if (PAIRP(BgL_l3702z00_1397))
							{	/* SawJvm/jld.scm 345 */
								{	/* SawJvm/jld.scm 347 */
									obj_t BgL_lz00_1400;

									BgL_lz00_1400 = CAR(BgL_l3702z00_1397);
									{	/* SawJvm/jld.scm 346 */
										obj_t BgL_arg4012z00_1402;

										{	/* SawJvm/jld.scm 346 */
											obj_t BgL_res4294z00_2302;

											{	/* SawJvm/jld.scm 346 */
												obj_t BgL_auxz00_3083;

												BgL_auxz00_3083 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res4294z00_2302 =
													BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3083);
											}
											BgL_arg4012z00_1402 = BgL_res4294z00_2302;
										}
										bgl_display_string(BGl_string4353z00zzsaw_jvm_ldz00,
											BgL_arg4012z00_1402);
									}
									{	/* SawJvm/jld.scm 347 */
										obj_t BgL_arg4013z00_1403;

										obj_t BgL_arg4014z00_1404;

										BgL_arg4013z00_1403 =
											BGl_splitzd272zd2zzsaw_jvm_ldz00
											(BGl_userzd2libraryzd2zzsaw_jvm_ldz00(BgL_lz00_1400));
										{	/* SawJvm/jld.scm 347 */
											obj_t BgL_res4295z00_2306;

											{	/* SawJvm/jld.scm 347 */
												obj_t BgL_auxz00_3089;

												BgL_auxz00_3089 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res4295z00_2306 =
													BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3089);
											}
											BgL_arg4014z00_1404 = BgL_res4295z00_2306;
										}
										bgl_display_obj(BgL_arg4013z00_1403, BgL_arg4014z00_1404);
									}
								}
								{
									obj_t BgL_l3702z00_3093;

									BgL_l3702z00_3093 = CDR(BgL_l3702z00_1397);
									BgL_l3702z00_1397 = BgL_l3702z00_3093;
									goto BgL_zc3anonymousza34009ze3z83_1398;
								}
							}
						else
							{	/* SawJvm/jld.scm 345 */
								((bool_t) 1);
							}
					}
					{	/* SawJvm/jld.scm 349 */
						obj_t BgL_arg4017z00_1408;

						{	/* SawJvm/jld.scm 349 */
							obj_t BgL_res4296z00_2309;

							{	/* SawJvm/jld.scm 349 */
								obj_t BgL_auxz00_3095;

								BgL_auxz00_3095 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res4296z00_2309 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3095);
							}
							BgL_arg4017z00_1408 = BgL_res4296z00_2309;
						}
						bgl_display_char(((unsigned char) '\n'), BgL_arg4017z00_1408);
					}
					{	/* SawJvm/jld.scm 350 */
						obj_t BgL_port3704z00_1409;

						{	/* SawJvm/jld.scm 350 */
							obj_t BgL_res4297z00_2312;

							{	/* SawJvm/jld.scm 350 */
								obj_t BgL_auxz00_3099;

								BgL_auxz00_3099 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res4297z00_2312 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3099);
							}
							BgL_port3704z00_1409 = BgL_res4297z00_2312;
						}
						bgl_display_string(BGl_string4359z00zzsaw_jvm_ldz00,
							BgL_port3704z00_1409);
						bgl_display_obj(BGl_za2bigloozd2nameza2zd2zzengine_paramz00,
							BgL_port3704z00_1409);
						bgl_display_char(((unsigned char) '\n'), BgL_port3704z00_1409);
					}
					{	/* SawJvm/jld.scm 351 */
						obj_t BgL_arg4018z00_1410;

						{	/* SawJvm/jld.scm 351 */
							obj_t BgL_res4298z00_2317;

							{	/* SawJvm/jld.scm 351 */
								obj_t BgL_auxz00_3105;

								BgL_auxz00_3105 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res4298z00_2317 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3105);
							}
							BgL_arg4018z00_1410 = BgL_res4298z00_2317;
						}
						return
							bgl_display_char(((unsigned char) '\n'), BgL_arg4018z00_1410);
		}}}}
	}



/* generate-msdos-jvm-manifest */
	obj_t BGl_generatezd2msdoszd2jvmzd2manifestzd2zzsaw_jvm_ldz00(obj_t
		BgL_fnamez00_20, obj_t BgL_mainz00_21, obj_t BgL_jarnamez00_22)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 356 */
			{	/* SawJvm/jld.scm 359 */
				obj_t BgL_zc3anonymousza34020ze3z83_2535;

				BgL_zc3anonymousza34020ze3z83_2535 =
					make_fx_procedure(BGl_zc3anonymousza34020ze3z83zzsaw_jvm_ldz00,
					(int) (((long) 0)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3anonymousza34020ze3z83_2535,
					(int) (((long) 0)), BgL_mainz00_21);
				return
					BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00
					(BgL_fnamez00_20, BgL_zc3anonymousza34020ze3z83_2535);
			}
		}
	}



/* <anonymous:4020> */
	obj_t BGl_zc3anonymousza34020ze3z83zzsaw_jvm_ldz00(obj_t BgL_envz00_2536)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 358 */
			{	/* SawJvm/jld.scm 359 */
				obj_t BgL_mainz00_2537;

				BgL_mainz00_2537 = PROCEDURE_REF(BgL_envz00_2536, (int) (((long) 0)));
				{

					{	/* SawJvm/jld.scm 359 */
						obj_t BgL_port3705z00_1414;

						{	/* SawJvm/jld.scm 359 */
							obj_t BgL_res4299z00_2320;

							{	/* SawJvm/jld.scm 359 */
								obj_t BgL_auxz00_3117;

								BgL_auxz00_3117 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res4299z00_2320 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3117);
							}
							BgL_port3705z00_1414 = BgL_res4299z00_2320;
						}
						bgl_display_string(BGl_string4354z00zzsaw_jvm_ldz00,
							BgL_port3705z00_1414);
						bgl_display_char(((unsigned char) '\n'), BgL_port3705z00_1414);
					}
					{	/* SawJvm/jld.scm 360 */
						obj_t BgL_port3706z00_1415;

						{	/* SawJvm/jld.scm 360 */
							obj_t BgL_res4300z00_2325;

							{	/* SawJvm/jld.scm 360 */
								obj_t BgL_auxz00_3122;

								BgL_auxz00_3122 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res4300z00_2325 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3122);
							}
							BgL_port3706z00_1415 = BgL_res4300z00_2325;
						}
						bgl_display_string(BGl_string4355z00zzsaw_jvm_ldz00,
							BgL_port3706z00_1415);
						bgl_display_obj(BgL_mainz00_2537, BgL_port3706z00_1415);
						bgl_display_char(((unsigned char) '\n'), BgL_port3706z00_1415);
					}
					{	/* SawJvm/jld.scm 361 */
						obj_t BgL_port3707z00_1416;

						{	/* SawJvm/jld.scm 361 */
							obj_t BgL_res4301z00_2330;

							{	/* SawJvm/jld.scm 361 */
								obj_t BgL_auxz00_3128;

								BgL_auxz00_3128 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res4301z00_2330 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3128);
							}
							BgL_port3707z00_1416 = BgL_res4301z00_2330;
						}
						bgl_display_string(BGl_string4359z00zzsaw_jvm_ldz00,
							BgL_port3707z00_1416);
						bgl_display_obj(BGl_za2bigloozd2nameza2zd2zzengine_paramz00,
							BgL_port3707z00_1416);
						bgl_display_char(((unsigned char) '\n'), BgL_port3707z00_1416);
					}
					{	/* SawJvm/jld.scm 362 */
						obj_t BgL_arg4021z00_1417;

						{	/* SawJvm/jld.scm 362 */
							obj_t BgL_res4302z00_2335;

							{	/* SawJvm/jld.scm 362 */
								obj_t BgL_auxz00_3134;

								BgL_auxz00_3134 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res4302z00_2335 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3134);
							}
							BgL_arg4021z00_1417 = BgL_res4302z00_2335;
						}
						return
							bgl_display_char(((unsigned char) '\n'), BgL_arg4021z00_1417);
		}}}}
	}



/* generate-jvm-sh-script */
	bool_t BGl_generatezd2jvmzd2shzd2scriptzd2zzsaw_jvm_ldz00(obj_t
		BgL_targetz00_23, obj_t BgL_mainzd2classzd2_24, obj_t BgL_za7ipsza7_25)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 367 */
			{

				if (CBOOL(BGl_za2jvmzd2jarzf3za2z21zzengine_paramz00))
					{	/* SawJvm/jld.scm 432 */
						{	/* SawJvm/jld.scm 381 */
							obj_t BgL_zc3anonymousza34041ze3z83_2540;

							BgL_zc3anonymousza34041ze3z83_2540 =
								make_fx_procedure(BGl_zc3anonymousza34041ze3z83zzsaw_jvm_ldz00,
								(int) (((long) 0)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3anonymousza34041ze3z83_2540,
								(int) (((long) 0)), BgL_targetz00_23);
							BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00
								(BgL_targetz00_23, BgL_zc3anonymousza34041ze3z83_2540);
						}
						{	/* SawJvm/jld.scm 402 */
							obj_t BgL_list4061z00_1472;

							{	/* SawJvm/jld.scm 402 */
								obj_t BgL_arg4062z00_1473;

								obj_t BgL_arg4063z00_1474;

								BgL_arg4062z00_1473 = CNST_TABLE_REF(((long) 10));
								{	/* SawJvm/jld.scm 402 */
									obj_t BgL_arg4064z00_1475;

									obj_t BgL_arg4065z00_1476;

									BgL_arg4064z00_1475 = CNST_TABLE_REF(((long) 11));
									BgL_arg4065z00_1476 =
										MAKE_PAIR(CNST_TABLE_REF(((long) 12)), BNIL);
									BgL_arg4063z00_1474 =
										MAKE_PAIR(BgL_arg4064z00_1475, BgL_arg4065z00_1476);
								}
								BgL_list4061z00_1472 =
									MAKE_PAIR(BgL_arg4062z00_1473, BgL_arg4063z00_1474);
							}
							return
								BGl_chmodz00zz__osz00(BgL_targetz00_23, BgL_list4061z00_1472);
						}
					}
				else
					{	/* SawJvm/jld.scm 432 */
						{	/* SawJvm/jld.scm 406 */
							obj_t BgL_zc3anonymousza34068ze3z83_2539;

							BgL_zc3anonymousza34068ze3z83_2539 =
								make_fx_procedure(BGl_zc3anonymousza34068ze3z83zzsaw_jvm_ldz00,
								(int) (((long) 0)), (int) (((long) 2)));
							PROCEDURE_SET(BgL_zc3anonymousza34068ze3z83_2539,
								(int) (((long) 0)), BgL_za7ipsza7_25);
							PROCEDURE_SET(BgL_zc3anonymousza34068ze3z83_2539,
								(int) (((long) 1)), BgL_mainzd2classzd2_24);
							BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00
								(BgL_targetz00_23, BgL_zc3anonymousza34068ze3z83_2539);
						}
						{	/* SawJvm/jld.scm 431 */
							obj_t BgL_list4100z00_1523;

							{	/* SawJvm/jld.scm 431 */
								obj_t BgL_arg4101z00_1524;

								obj_t BgL_arg4102z00_1525;

								BgL_arg4101z00_1524 = CNST_TABLE_REF(((long) 10));
								{	/* SawJvm/jld.scm 431 */
									obj_t BgL_arg4103z00_1526;

									obj_t BgL_arg4104z00_1527;

									BgL_arg4103z00_1526 = CNST_TABLE_REF(((long) 11));
									BgL_arg4104z00_1527 =
										MAKE_PAIR(CNST_TABLE_REF(((long) 12)), BNIL);
									BgL_arg4102z00_1525 =
										MAKE_PAIR(BgL_arg4103z00_1526, BgL_arg4104z00_1527);
								}
								BgL_list4100z00_1523 =
									MAKE_PAIR(BgL_arg4101z00_1524, BgL_arg4102z00_1525);
							}
							return
								BGl_chmodz00zz__osz00(BgL_targetz00_23, BgL_list4100z00_1523);
						}
					}
			}
		}
	}



/* generate-jvm-env */
	obj_t BGl_generatezd2jvmzd2envz00zzsaw_jvm_ldz00()
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 377 */
			{
				obj_t BgL_envz00_1427;

				obj_t BgL_resz00_1428;

				BgL_envz00_1427 = BGl_za2jvmzd2envza2zd2zzengine_paramz00;
				BgL_resz00_1428 = BGl_string4340z00zzsaw_jvm_ldz00;
			BgL_zc3anonymousza34024ze3z83_1429:
				if (NULLP(BgL_envz00_1427))
					{	/* SawJvm/jld.scm 373 */
						return BgL_resz00_1428;
					}
				else
					{	/* SawJvm/jld.scm 375 */
						obj_t BgL_arg4026z00_1431;

						obj_t BgL_arg4027z00_1432;

						BgL_arg4026z00_1431 = CDR(BgL_envz00_1427);
						{	/* SawJvm/jld.scm 376 */
							obj_t BgL_arg4029z00_1434;

							obj_t BgL_arg4031z00_1436;

							BgL_arg4029z00_1434 = CAR(BgL_envz00_1427);
							BgL_arg4031z00_1436 = CAR(BgL_envz00_1427);
							{	/* SawJvm/jld.scm 376 */
								obj_t BgL_list4033z00_1438;

								{	/* SawJvm/jld.scm 376 */
									obj_t BgL_arg4034z00_1439;

									{	/* SawJvm/jld.scm 376 */
										obj_t BgL_arg4035z00_1440;

										{	/* SawJvm/jld.scm 376 */
											obj_t BgL_arg4036z00_1441;

											{	/* SawJvm/jld.scm 376 */
												obj_t BgL_arg4037z00_1442;

												{	/* SawJvm/jld.scm 376 */
													obj_t BgL_arg4038z00_1443;

													BgL_arg4038z00_1443 =
														MAKE_PAIR(BgL_resz00_1428, BNIL);
													BgL_arg4037z00_1442 =
														MAKE_PAIR(BGl_string4342z00zzsaw_jvm_ldz00,
														BgL_arg4038z00_1443);
												}
												BgL_arg4036z00_1441 =
													MAKE_PAIR(BgL_arg4031z00_1436, BgL_arg4037z00_1442);
											}
											BgL_arg4035z00_1440 =
												MAKE_PAIR(BGl_string4360z00zzsaw_jvm_ldz00,
												BgL_arg4036z00_1441);
										}
										BgL_arg4034z00_1439 =
											MAKE_PAIR(BgL_arg4029z00_1434, BgL_arg4035z00_1440);
									}
									BgL_list4033z00_1438 =
										MAKE_PAIR(BGl_string4361z00zzsaw_jvm_ldz00,
										BgL_arg4034z00_1439);
								}
								BgL_arg4027z00_1432 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list4033z00_1438);
							}
						}
						{
							obj_t BgL_resz00_3181;

							obj_t BgL_envz00_3180;

							BgL_envz00_3180 = BgL_arg4026z00_1431;
							BgL_resz00_3181 = BgL_arg4027z00_1432;
							BgL_resz00_1428 = BgL_resz00_3181;
							BgL_envz00_1427 = BgL_envz00_3180;
							goto BgL_zc3anonymousza34024ze3z83_1429;
						}
					}
			}
		}
	}



/* <anonymous:4068> */
	obj_t BGl_zc3anonymousza34068ze3z83zzsaw_jvm_ldz00(obj_t BgL_envz00_2541)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 405 */
			{	/* SawJvm/jld.scm 406 */
				obj_t BgL_za7ipsza7_2542;

				obj_t BgL_mainzd2classzd2_2543;

				BgL_za7ipsza7_2542 = PROCEDURE_REF(BgL_envz00_2541, (int) (((long) 0)));
				BgL_mainzd2classzd2_2543 =
					PROCEDURE_REF(BgL_envz00_2541, (int) (((long) 1)));
				{

					{	/* SawJvm/jld.scm 406 */
						obj_t BgL_port3712z00_1480;

						{	/* SawJvm/jld.scm 406 */
							obj_t BgL_res4309z00_2382;

							{	/* SawJvm/jld.scm 406 */
								obj_t BgL_auxz00_3186;

								BgL_auxz00_3186 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res4309z00_2382 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3186);
							}
							BgL_port3712z00_1480 = BgL_res4309z00_2382;
						}
						bgl_display_string(BGl_string4362z00zzsaw_jvm_ldz00,
							BgL_port3712z00_1480);
						bgl_display_char(((unsigned char) '\n'), BgL_port3712z00_1480);
					}
					{	/* SawJvm/jld.scm 407 */
						obj_t BgL_arg4069z00_1481;

						{	/* SawJvm/jld.scm 407 */
							obj_t BgL_res4310z00_2387;

							{	/* SawJvm/jld.scm 407 */
								obj_t BgL_auxz00_3191;

								BgL_auxz00_3191 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res4310z00_2387 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3191);
							}
							BgL_arg4069z00_1481 = BgL_res4310z00_2387;
						}
						bgl_display_char(((unsigned char) '\n'), BgL_arg4069z00_1481);
					}
					{	/* SawJvm/jld.scm 408 */
						obj_t BgL_port3718z00_1482;

						{	/* SawJvm/jld.scm 408 */
							obj_t BgL_res4311z00_2390;

							{	/* SawJvm/jld.scm 408 */
								obj_t BgL_auxz00_3195;

								BgL_auxz00_3195 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res4311z00_2390 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3195);
							}
							BgL_port3718z00_1482 = BgL_res4311z00_2390;
						}
						bgl_display_string(BGl_string4363z00zzsaw_jvm_ldz00,
							BgL_port3718z00_1482);
						{	/* SawJvm/jld.scm 410 */
							obj_t BgL_arg4070z00_1483;

							{	/* SawJvm/jld.scm 410 */
								obj_t BgL_arg4071z00_1484;

								{	/* SawJvm/jld.scm 410 */
									obj_t BgL_arg4072z00_1485;

									{	/* SawJvm/jld.scm 410 */
										obj_t BgL_arg4075z00_1488;

										obj_t BgL_arg4076z00_1489;

										{	/* SawJvm/jld.scm 414 */
											obj_t BgL_arg4080z00_1493;

											{	/* SawJvm/jld.scm 414 */
												obj_t BgL_arg4081z00_1494;

												obj_t BgL_arg4082z00_1495;

												BgL_arg4081z00_1494 =
													BGl_jvmzd2bigloozd2classpathz00zzsaw_jvm_ldz00();
												{	/* SawJvm/jld.scm 415 */
													bool_t BgL_testz00_3200;

													if (CBOOL
														(BGl_za2unsafezd2libraryza2zd2zzengine_paramz00))
														{	/* SawJvm/jld.scm 415 */
															if (CBOOL(BGl_za2purifyza2z00zzengine_paramz00))
																{	/* SawJvm/jld.scm 416 */
																	BgL_testz00_3200 = ((bool_t) 0);
																}
															else
																{	/* SawJvm/jld.scm 416 */
																	BgL_testz00_3200 = ((bool_t) 1);
																}
														}
													else
														{	/* SawJvm/jld.scm 415 */
															BgL_testz00_3200 = ((bool_t) 0);
														}
													if (BgL_testz00_3200)
														{	/* SawJvm/jld.scm 415 */
															BgL_arg4082z00_1495 =
																BGl_string4357z00zzsaw_jvm_ldz00;
														}
													else
														{	/* SawJvm/jld.scm 415 */
															BgL_arg4082z00_1495 =
																BGl_string4358z00zzsaw_jvm_ldz00;
														}
												}
												BgL_arg4080z00_1493 =
													BGl_makezd2filezd2namez00zz__osz00
													(BgL_arg4081z00_1494, BgL_arg4082z00_1495);
											}
											BgL_arg4075z00_1488 =
												string_append_3(BGl_string4364z00zzsaw_jvm_ldz00,
												BgL_arg4080z00_1493, BGl_string4364z00zzsaw_jvm_ldz00);
										}
										{	/* SawJvm/jld.scm 419 */
											obj_t BgL_arg4084z00_1497;

											if (NULLP(BgL_za7ipsza7_2542))
												{	/* SawJvm/jld.scm 419 */
													BgL_arg4084z00_1497 = BNIL;
												}
											else
												{	/* SawJvm/jld.scm 419 */
													obj_t BgL_head3715z00_1501;

													BgL_head3715z00_1501 = MAKE_PAIR(BNIL, BNIL);
													{
														obj_t BgL_l3713z00_1503;

														obj_t BgL_tail3716z00_1504;

														BgL_l3713z00_1503 = BgL_za7ipsza7_2542;
														BgL_tail3716z00_1504 = BgL_head3715z00_1501;
													BgL_zc3anonymousza34087ze3z83_1505:
														if (NULLP(BgL_l3713z00_1503))
															{	/* SawJvm/jld.scm 419 */
																BgL_arg4084z00_1497 = CDR(BgL_head3715z00_1501);
															}
														else
															{	/* SawJvm/jld.scm 419 */
																obj_t BgL_newtail3717z00_1507;

																{	/* SawJvm/jld.scm 419 */
																	obj_t BgL_arg4090z00_1509;

																	{	/* SawJvm/jld.scm 419 */
																		obj_t BgL_fz00_1511;

																		BgL_fz00_1511 = CAR(BgL_l3713z00_1503);
																		BgL_arg4090z00_1509 =
																			string_append_3
																			(BGl_string4364z00zzsaw_jvm_ldz00,
																			BGl_userzd2libraryzd2zzsaw_jvm_ldz00
																			(BgL_fz00_1511),
																			BGl_string4364z00zzsaw_jvm_ldz00);
																	}
																	BgL_newtail3717z00_1507 =
																		MAKE_PAIR(BgL_arg4090z00_1509, BNIL);
																}
																SET_CDR(BgL_tail3716z00_1504,
																	BgL_newtail3717z00_1507);
																{
																	obj_t BgL_tail3716z00_3220;

																	obj_t BgL_l3713z00_3218;

																	BgL_l3713z00_3218 = CDR(BgL_l3713z00_1503);
																	BgL_tail3716z00_3220 =
																		BgL_newtail3717z00_1507;
																	BgL_tail3716z00_1504 = BgL_tail3716z00_3220;
																	BgL_l3713z00_1503 = BgL_l3713z00_3218;
																	goto BgL_zc3anonymousza34087ze3z83_1505;
																}
															}
													}
												}
											BgL_arg4076z00_1489 =
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg4084z00_1497, BNIL);
										}
										{	/* SawJvm/jld.scm 410 */
											obj_t BgL_list4077z00_1490;

											{	/* SawJvm/jld.scm 410 */
												obj_t BgL_arg4078z00_1491;

												{	/* SawJvm/jld.scm 410 */
													obj_t BgL_arg4079z00_1492;

													BgL_arg4079z00_1492 =
														MAKE_PAIR(BgL_arg4076z00_1489, BNIL);
													BgL_arg4078z00_1491 =
														MAKE_PAIR(BgL_arg4075z00_1488, BgL_arg4079z00_1492);
												}
												BgL_list4077z00_1490 =
													MAKE_PAIR(BGl_string4365z00zzsaw_jvm_ldz00,
													BgL_arg4078z00_1491);
											}
											BgL_arg4072z00_1485 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BGl_string4366z00zzsaw_jvm_ldz00,
												BgL_list4077z00_1490);
										}
									}
									BgL_arg4071z00_1484 =
										MAKE_PAIR(BGl_za2jvmzd2classpathza2zd2zzengine_paramz00,
										BgL_arg4072z00_1485);
								}
								BgL_arg4070z00_1483 =
									BGl_listzd2ze3shzd2pathzd2stringz31zzsaw_jvm_ldz00
									(BgL_arg4071z00_1484);
							}
							bgl_display_obj(BgL_arg4070z00_1483, BgL_port3718z00_1482);
						}
						bgl_display_char(((unsigned char) '\n'), BgL_port3718z00_1482);
					}
					{	/* SawJvm/jld.scm 420 */
						obj_t BgL_port3719z00_1514;

						{	/* SawJvm/jld.scm 420 */
							obj_t BgL_res4312z00_2408;

							{	/* SawJvm/jld.scm 420 */
								obj_t BgL_auxz00_3230;

								BgL_auxz00_3230 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res4312z00_2408 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3230);
							}
							BgL_port3719z00_1514 = BgL_res4312z00_2408;
						}
						bgl_display_string(BGl_string4367z00zzsaw_jvm_ldz00,
							BgL_port3719z00_1514);
						bgl_display_char(((unsigned char) '\n'), BgL_port3719z00_1514);
					}
					{	/* SawJvm/jld.scm 421 */
						obj_t BgL_arg4093z00_1515;

						{	/* SawJvm/jld.scm 421 */
							obj_t BgL_res4313z00_2413;

							{	/* SawJvm/jld.scm 421 */
								obj_t BgL_auxz00_3235;

								BgL_auxz00_3235 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res4313z00_2413 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3235);
							}
							BgL_arg4093z00_1515 = BgL_res4313z00_2413;
						}
						bgl_display_char(((unsigned char) '\n'), BgL_arg4093z00_1515);
					}
					{	/* SawJvm/jld.scm 422 */
						obj_t BgL_port3720z00_1516;

						{	/* SawJvm/jld.scm 422 */
							obj_t BgL_res4314z00_2416;

							{	/* SawJvm/jld.scm 422 */
								obj_t BgL_auxz00_3239;

								BgL_auxz00_3239 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res4314z00_2416 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3239);
							}
							BgL_port3720z00_1516 = BgL_res4314z00_2416;
						}
						bgl_display_string(BGl_string4368z00zzsaw_jvm_ldz00,
							BgL_port3720z00_1516);
						bgl_display_obj(BGl_za2jvmzd2javaza2zd2zzengine_paramz00,
							BgL_port3720z00_1516);
						bgl_display_string(BGl_string4342z00zzsaw_jvm_ldz00,
							BgL_port3720z00_1516);
						{	/* SawJvm/jld.scm 423 */
							obj_t BgL_arg4094z00_1517;

							if (CBOOL(BGl_za2purifyza2z00zzengine_paramz00))
								{	/* SawJvm/jld.scm 423 */
									BgL_arg4094z00_1517 = BGl_string4340z00zzsaw_jvm_ldz00;
								}
							else
								{	/* SawJvm/jld.scm 423 */
									BgL_arg4094z00_1517 =
										BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF((
												(long) 13)));
								}
							bgl_display_obj(BgL_arg4094z00_1517, BgL_port3720z00_1516);
						}
						bgl_display_string(BGl_string4369z00zzsaw_jvm_ldz00,
							BgL_port3720z00_1516);
						bgl_display_obj(BGl_bigloozd2configzd2zz__configurez00
							(CNST_TABLE_REF(((long) 14))), BgL_port3720z00_1516);
						bgl_display_string(BGl_string4342z00zzsaw_jvm_ldz00,
							BgL_port3720z00_1516);
						bgl_display_obj(BGl_za2jvmzd2optionsza2zd2zzengine_paramz00,
							BgL_port3720z00_1516);
						bgl_display_string(BGl_string4342z00zzsaw_jvm_ldz00,
							BgL_port3720z00_1516);
						bgl_display_obj(BGl_generatezd2jvmzd2envz00zzsaw_jvm_ldz00(),
							BgL_port3720z00_1516);
						{	/* SawJvm/jld.scm 429 */
							obj_t BgL_arg4098z00_1520;

							{	/* SawJvm/jld.scm 429 */
								obj_t BgL_arg4099z00_1521;

								BgL_arg4099z00_1521 = BGl_filezd2separatorzd2zz__osz00();
								BgL_arg4098z00_1520 =
									BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00
									(BgL_mainzd2classzd2_2543, CCHAR(BgL_arg4099z00_1521),
									(char) (((unsigned char) '.')));
							}
							bgl_display_obj(BgL_arg4098z00_1520, BgL_port3720z00_1516);
						}
						bgl_display_string(BGl_string4370z00zzsaw_jvm_ldz00,
							BgL_port3720z00_1516);
						return bgl_display_char(((unsigned char) '\n'),
							BgL_port3720z00_1516);
		}}}}
	}



/* <anonymous:4041> */
	obj_t BGl_zc3anonymousza34041ze3z83zzsaw_jvm_ldz00(obj_t BgL_envz00_2544)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 380 */
			{	/* SawJvm/jld.scm 381 */
				obj_t BgL_targetz00_2545;

				BgL_targetz00_2545 = PROCEDURE_REF(BgL_envz00_2544, (int) (((long) 0)));
				{

					{	/* SawJvm/jld.scm 381 */
						obj_t BgL_port3708z00_1448;

						{	/* SawJvm/jld.scm 381 */
							obj_t BgL_res4303z00_2342;

							{	/* SawJvm/jld.scm 381 */
								obj_t BgL_auxz00_3268;

								BgL_auxz00_3268 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res4303z00_2342 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3268);
							}
							BgL_port3708z00_1448 = BgL_res4303z00_2342;
						}
						bgl_display_string(BGl_string4362z00zzsaw_jvm_ldz00,
							BgL_port3708z00_1448);
						bgl_display_char(((unsigned char) '\n'), BgL_port3708z00_1448);
					}
					{	/* SawJvm/jld.scm 382 */
						obj_t BgL_arg4042z00_1449;

						{	/* SawJvm/jld.scm 382 */
							obj_t BgL_res4304z00_2347;

							{	/* SawJvm/jld.scm 382 */
								obj_t BgL_auxz00_3273;

								BgL_auxz00_3273 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res4304z00_2347 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3273);
							}
							BgL_arg4042z00_1449 = BgL_res4304z00_2347;
						}
						bgl_display_char(((unsigned char) '\n'), BgL_arg4042z00_1449);
					}
					{	/* SawJvm/jld.scm 383 */
						obj_t BgL_port3709z00_1450;

						{	/* SawJvm/jld.scm 383 */
							obj_t BgL_res4305z00_2350;

							{	/* SawJvm/jld.scm 383 */
								obj_t BgL_auxz00_3277;

								BgL_auxz00_3277 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res4305z00_2350 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3277);
							}
							BgL_port3709z00_1450 = BgL_res4305z00_2350;
						}
						bgl_display_string(BGl_string4371z00zzsaw_jvm_ldz00,
							BgL_port3709z00_1450);
						{	/* SawJvm/jld.scm 385 */
							obj_t BgL_arg4043z00_1451;

							{	/* SawJvm/jld.scm 385 */
								obj_t BgL_arg4044z00_1452;

								{	/* SawJvm/jld.scm 385 */
									obj_t BgL_arg4045z00_1453;

									{	/* SawJvm/jld.scm 385 */
										obj_t BgL_list4046z00_1454;

										BgL_list4046z00_1454 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg4045z00_1453 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BGl_string4365z00zzsaw_jvm_ldz00, BgL_list4046z00_1454);
									}
									BgL_arg4044z00_1452 =
										MAKE_PAIR(BGl_za2jvmzd2classpathza2zd2zzengine_paramz00,
										BgL_arg4045z00_1453);
								}
								BgL_arg4043z00_1451 =
									BGl_listzd2ze3shzd2pathzd2stringz31zzsaw_jvm_ldz00
									(BgL_arg4044z00_1452);
							}
							bgl_display_obj(BgL_arg4043z00_1451, BgL_port3709z00_1450);
						}
						bgl_display_string(BGl_string4372z00zzsaw_jvm_ldz00,
							BgL_port3709z00_1450);
						bgl_display_char(((unsigned char) '\n'), BgL_port3709z00_1450);
					}
					{	/* SawJvm/jld.scm 387 */
						obj_t BgL_port3710z00_1455;

						{	/* SawJvm/jld.scm 387 */
							obj_t BgL_res4306z00_2357;

							{	/* SawJvm/jld.scm 387 */
								obj_t BgL_auxz00_3288;

								BgL_auxz00_3288 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res4306z00_2357 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3288);
							}
							BgL_port3710z00_1455 = BgL_res4306z00_2357;
						}
						bgl_display_string(BGl_string4367z00zzsaw_jvm_ldz00,
							BgL_port3710z00_1455);
						bgl_display_char(((unsigned char) '\n'), BgL_port3710z00_1455);
					}
					{	/* SawJvm/jld.scm 388 */
						obj_t BgL_arg4047z00_1456;

						{	/* SawJvm/jld.scm 388 */
							obj_t BgL_res4307z00_2362;

							{	/* SawJvm/jld.scm 388 */
								obj_t BgL_auxz00_3293;

								BgL_auxz00_3293 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res4307z00_2362 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3293);
							}
							BgL_arg4047z00_1456 = BgL_res4307z00_2362;
						}
						bgl_display_char(((unsigned char) '\n'), BgL_arg4047z00_1456);
					}
					{	/* SawJvm/jld.scm 389 */
						obj_t BgL_port3711z00_1457;

						{	/* SawJvm/jld.scm 389 */
							obj_t BgL_res4308z00_2365;

							{	/* SawJvm/jld.scm 389 */
								obj_t BgL_auxz00_3297;

								BgL_auxz00_3297 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res4308z00_2365 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3297);
							}
							BgL_port3711z00_1457 = BgL_res4308z00_2365;
						}
						bgl_display_string(BGl_string4368z00zzsaw_jvm_ldz00,
							BgL_port3711z00_1457);
						bgl_display_obj(BGl_za2jvmzd2javaza2zd2zzengine_paramz00,
							BgL_port3711z00_1457);
						bgl_display_string(BGl_string4342z00zzsaw_jvm_ldz00,
							BgL_port3711z00_1457);
						{	/* SawJvm/jld.scm 390 */
							obj_t BgL_arg4048z00_1458;

							if (CBOOL(BGl_za2purifyza2z00zzengine_paramz00))
								{	/* SawJvm/jld.scm 390 */
									BgL_arg4048z00_1458 = BGl_string4340z00zzsaw_jvm_ldz00;
								}
							else
								{	/* SawJvm/jld.scm 390 */
									BgL_arg4048z00_1458 =
										BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF((
												(long) 13)));
								}
							bgl_display_obj(BgL_arg4048z00_1458, BgL_port3711z00_1457);
						}
						bgl_display_string(BGl_string4369z00zzsaw_jvm_ldz00,
							BgL_port3711z00_1457);
						bgl_display_obj(BGl_bigloozd2configzd2zz__configurez00
							(CNST_TABLE_REF(((long) 14))), BgL_port3711z00_1457);
						bgl_display_string(BGl_string4373z00zzsaw_jvm_ldz00,
							BgL_port3711z00_1457);
						bgl_display_obj(BGl_za2jvmzd2optionsza2zd2zzengine_paramz00,
							BgL_port3711z00_1457);
						bgl_display_string(BGl_string4342z00zzsaw_jvm_ldz00,
							BgL_port3711z00_1457);
						bgl_display_obj(BGl_generatezd2jvmzd2envz00zzsaw_jvm_ldz00(),
							BgL_port3711z00_1457);
						{	/* SawJvm/jld.scm 395 */
							obj_t BgL_arg4051z00_1461;

							{	/* SawJvm/jld.scm 395 */
								bool_t BgL_testz00_3317;

								{	/* SawJvm/jld.scm 395 */
									obj_t BgL_arg4059z00_1469;

									BgL_arg4059z00_1469 =
										BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF((
												(long) 15)));
									BgL_testz00_3317 =
										bigloo_strcmp(BgL_arg4059z00_1469,
										BGl_string4340z00zzsaw_jvm_ldz00);
								}
								if (BgL_testz00_3317)
									{	/* SawJvm/jld.scm 395 */
										BgL_arg4051z00_1461 =
											BGl_prefixz00zz__osz00(BgL_targetz00_2545);
									}
								else
									{	/* SawJvm/jld.scm 395 */
										BgL_arg4051z00_1461 =
											BGl_makezd2filezd2namez00zz__osz00(string_append_3
											(BGl_string4374z00zzsaw_jvm_ldz00,
												BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF((
															(long) 15))), BGl_string4375z00zzsaw_jvm_ldz00),
											BGl_prefixz00zz__osz00(BGl_basenamez00zz__osz00
												(BgL_targetz00_2545)));
							}}
							bgl_display_obj(BgL_arg4051z00_1461, BgL_port3711z00_1457);
						}
						bgl_display_string(BGl_string4376z00zzsaw_jvm_ldz00,
							BgL_port3711z00_1457);
						return bgl_display_char(((unsigned char) '\n'),
							BgL_port3711z00_1457);
		}}}}
	}



/* generate-jvm-msdos-script */
	bool_t BGl_generatezd2jvmzd2msdoszd2scriptzd2zzsaw_jvm_ldz00(obj_t
		BgL_targetz00_26, obj_t BgL_mainzd2classzd2_27, obj_t BgL_jarnamez00_28,
		obj_t BgL_za7ipsza7_29)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 439 */
			{

				if (CBOOL(BGl_za2jvmzd2jarzf3za2z21zzengine_paramz00))
					{	/* SawJvm/jld.scm 504 */
						{	/* SawJvm/jld.scm 451 */
							obj_t BgL_zc3anonymousza34123ze3z83_2548;

							BgL_zc3anonymousza34123ze3z83_2548 =
								make_fx_procedure(BGl_zc3anonymousza34123ze3z83zzsaw_jvm_ldz00,
								(int) (((long) 0)), (int) (((long) 3)));
							PROCEDURE_SET(BgL_zc3anonymousza34123ze3z83_2548,
								(int) (((long) 0)), BgL_jarnamez00_28);
							PROCEDURE_SET(BgL_zc3anonymousza34123ze3z83_2548,
								(int) (((long) 1)), BgL_za7ipsza7_29);
							PROCEDURE_SET(BgL_zc3anonymousza34123ze3z83_2548,
								(int) (((long) 2)), BgL_mainzd2classzd2_27);
							BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00
								(BgL_targetz00_26, BgL_zc3anonymousza34123ze3z83_2548);
						}
						{	/* SawJvm/jld.scm 476 */
							obj_t BgL_list4155z00_1599;

							{	/* SawJvm/jld.scm 476 */
								obj_t BgL_arg4156z00_1600;

								obj_t BgL_arg4158z00_1601;

								BgL_arg4156z00_1600 = CNST_TABLE_REF(((long) 10));
								{	/* SawJvm/jld.scm 476 */
									obj_t BgL_arg4159z00_1602;

									obj_t BgL_arg4160z00_1603;

									BgL_arg4159z00_1602 = CNST_TABLE_REF(((long) 11));
									BgL_arg4160z00_1603 =
										MAKE_PAIR(CNST_TABLE_REF(((long) 12)), BNIL);
									BgL_arg4158z00_1601 =
										MAKE_PAIR(BgL_arg4159z00_1602, BgL_arg4160z00_1603);
								}
								BgL_list4155z00_1599 =
									MAKE_PAIR(BgL_arg4156z00_1600, BgL_arg4158z00_1601);
							}
							return
								BGl_chmodz00zz__osz00(BgL_targetz00_26, BgL_list4155z00_1599);
						}
					}
				else
					{	/* SawJvm/jld.scm 504 */
						{	/* SawJvm/jld.scm 480 */
							obj_t BgL_zc3anonymousza34163ze3z83_2547;

							BgL_zc3anonymousza34163ze3z83_2547 =
								make_fx_procedure(BGl_zc3anonymousza34163ze3z83zzsaw_jvm_ldz00,
								(int) (((long) 0)), (int) (((long) 2)));
							PROCEDURE_SET(BgL_zc3anonymousza34163ze3z83_2547,
								(int) (((long) 0)), BgL_za7ipsza7_29);
							PROCEDURE_SET(BgL_zc3anonymousza34163ze3z83_2547,
								(int) (((long) 1)), BgL_mainzd2classzd2_27);
							BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00
								(BgL_targetz00_26, BgL_zc3anonymousza34163ze3z83_2547);
						}
						{	/* SawJvm/jld.scm 503 */
							obj_t BgL_list4191z00_1642;

							{	/* SawJvm/jld.scm 503 */
								obj_t BgL_arg4192z00_1643;

								obj_t BgL_arg4193z00_1644;

								BgL_arg4192z00_1643 = CNST_TABLE_REF(((long) 10));
								{	/* SawJvm/jld.scm 503 */
									obj_t BgL_arg4194z00_1645;

									obj_t BgL_arg4195z00_1646;

									BgL_arg4194z00_1645 = CNST_TABLE_REF(((long) 11));
									BgL_arg4195z00_1646 =
										MAKE_PAIR(CNST_TABLE_REF(((long) 12)), BNIL);
									BgL_arg4193z00_1644 =
										MAKE_PAIR(BgL_arg4194z00_1645, BgL_arg4195z00_1646);
								}
								BgL_list4191z00_1642 =
									MAKE_PAIR(BgL_arg4192z00_1643, BgL_arg4193z00_1644);
							}
							return
								BGl_chmodz00zz__osz00(BgL_targetz00_26, BgL_list4191z00_1642);
						}
					}
			}
		}
	}



/* generate-jvm-env_4317 */
	obj_t BGl_generatezd2jvmzd2env_4317z00zzsaw_jvm_ldz00()
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 447 */
			{
				obj_t BgL_envz00_1537;

				obj_t BgL_resz00_1538;

				BgL_envz00_1537 = BGl_za2jvmzd2envza2zd2zzengine_paramz00;
				BgL_resz00_1538 = BGl_string4340z00zzsaw_jvm_ldz00;
			BgL_zc3anonymousza34106ze3z83_1539:
				if (NULLP(BgL_envz00_1537))
					{	/* SawJvm/jld.scm 443 */
						return BgL_resz00_1538;
					}
				else
					{	/* SawJvm/jld.scm 445 */
						obj_t BgL_arg4108z00_1541;

						obj_t BgL_arg4109z00_1542;

						BgL_arg4108z00_1541 = CDR(BgL_envz00_1537);
						{	/* SawJvm/jld.scm 446 */
							obj_t BgL_arg4111z00_1544;

							obj_t BgL_arg4113z00_1546;

							BgL_arg4111z00_1544 = CAR(BgL_envz00_1537);
							BgL_arg4113z00_1546 = CAR(BgL_envz00_1537);
							{	/* SawJvm/jld.scm 446 */
								obj_t BgL_list4115z00_1548;

								{	/* SawJvm/jld.scm 446 */
									obj_t BgL_arg4116z00_1549;

									{	/* SawJvm/jld.scm 446 */
										obj_t BgL_arg4117z00_1550;

										{	/* SawJvm/jld.scm 446 */
											obj_t BgL_arg4118z00_1551;

											{	/* SawJvm/jld.scm 446 */
												obj_t BgL_arg4119z00_1552;

												{	/* SawJvm/jld.scm 446 */
													obj_t BgL_arg4120z00_1553;

													BgL_arg4120z00_1553 =
														MAKE_PAIR(BgL_resz00_1538, BNIL);
													BgL_arg4119z00_1552 =
														MAKE_PAIR(BGl_string4342z00zzsaw_jvm_ldz00,
														BgL_arg4120z00_1553);
												}
												BgL_arg4118z00_1551 =
													MAKE_PAIR(BgL_arg4113z00_1546, BgL_arg4119z00_1552);
											}
											BgL_arg4117z00_1550 =
												MAKE_PAIR(BGl_string4360z00zzsaw_jvm_ldz00,
												BgL_arg4118z00_1551);
										}
										BgL_arg4116z00_1549 =
											MAKE_PAIR(BgL_arg4111z00_1544, BgL_arg4117z00_1550);
									}
									BgL_list4115z00_1548 =
										MAKE_PAIR(BGl_string4361z00zzsaw_jvm_ldz00,
										BgL_arg4116z00_1549);
								}
								BgL_arg4109z00_1542 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list4115z00_1548);
							}
						}
						{
							obj_t BgL_resz00_3378;

							obj_t BgL_envz00_3377;

							BgL_envz00_3377 = BgL_arg4108z00_1541;
							BgL_resz00_3378 = BgL_arg4109z00_1542;
							BgL_resz00_1538 = BgL_resz00_3378;
							BgL_envz00_1537 = BgL_envz00_3377;
							goto BgL_zc3anonymousza34106ze3z83_1539;
						}
					}
			}
		}
	}



/* <anonymous:4163> */
	obj_t BGl_zc3anonymousza34163ze3z83zzsaw_jvm_ldz00(obj_t BgL_envz00_2549)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 479 */
			{	/* SawJvm/jld.scm 480 */
				obj_t BgL_za7ipsza7_2550;

				obj_t BgL_mainzd2classzd2_2551;

				BgL_za7ipsza7_2550 = PROCEDURE_REF(BgL_envz00_2549, (int) (((long) 0)));
				BgL_mainzd2classzd2_2551 =
					PROCEDURE_REF(BgL_envz00_2549, (int) (((long) 1)));
				{

					{	/* SawJvm/jld.scm 480 */
						obj_t BgL_port3732z00_1607;

						{	/* SawJvm/jld.scm 480 */
							obj_t BgL_res4316z00_2468;

							{	/* SawJvm/jld.scm 480 */
								obj_t BgL_auxz00_3383;

								BgL_auxz00_3383 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res4316z00_2468 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3383);
							}
							BgL_port3732z00_1607 = BgL_res4316z00_2468;
						}
						bgl_display_string(BGl_string4377z00zzsaw_jvm_ldz00,
							BgL_port3732z00_1607);
						bgl_display_obj(BGl_za2jvmzd2javaza2zd2zzengine_paramz00,
							BgL_port3732z00_1607);
						bgl_display_string(BGl_string4342z00zzsaw_jvm_ldz00,
							BgL_port3732z00_1607);
						bgl_display_obj(BGl_bigloozd2configzd2zz__configurez00
							(CNST_TABLE_REF(((long) 14))), BgL_port3732z00_1607);
						bgl_display_string(BGl_string4342z00zzsaw_jvm_ldz00,
							BgL_port3732z00_1607);
						{	/* SawJvm/jld.scm 482 */
							obj_t BgL_arg4165z00_1609;

							if (CBOOL(BGl_za2purifyza2z00zzengine_paramz00))
								{	/* SawJvm/jld.scm 482 */
									BgL_arg4165z00_1609 = BGl_string4340z00zzsaw_jvm_ldz00;
								}
							else
								{	/* SawJvm/jld.scm 482 */
									BgL_arg4165z00_1609 =
										BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF((
												(long) 13)));
								}
							bgl_display_obj(BgL_arg4165z00_1609, BgL_port3732z00_1607);
						}
						bgl_display_string(BGl_string4342z00zzsaw_jvm_ldz00,
							BgL_port3732z00_1607);
						bgl_display_obj(BGl_za2jvmzd2optionsza2zd2zzengine_paramz00,
							BgL_port3732z00_1607);
						bgl_display_string(BGl_string4378z00zzsaw_jvm_ldz00,
							BgL_port3732z00_1607);
						{	/* SawJvm/jld.scm 487 */
							obj_t BgL_arg4166z00_1610;

							{	/* SawJvm/jld.scm 487 */
								obj_t BgL_arg4167z00_1611;

								{	/* SawJvm/jld.scm 487 */
									obj_t BgL_arg4168z00_1612;

									{	/* SawJvm/jld.scm 487 */
										obj_t BgL_arg4170z00_1614;

										obj_t BgL_arg4171z00_1615;

										{	/* SawJvm/jld.scm 490 */
											obj_t BgL_arg4174z00_1618;

											obj_t BgL_arg4175z00_1619;

											BgL_arg4174z00_1618 =
												BGl_stringzd2replacezd2zz__r4_strings_6_7z00
												(BGl_jvmzd2bigloozd2classpathz00zzsaw_jvm_ldz00(),
												(char) (((unsigned char) '/')),
												(char) (((unsigned char) '\\')));
											if (CBOOL(BGl_za2unsafezd2libraryza2zd2zzengine_paramz00))
												{	/* SawJvm/jld.scm 492 */
													BgL_arg4175z00_1619 =
														BGl_string4379z00zzsaw_jvm_ldz00;
												}
											else
												{	/* SawJvm/jld.scm 492 */
													BgL_arg4175z00_1619 =
														BGl_string4380z00zzsaw_jvm_ldz00;
												}
											BgL_arg4170z00_1614 =
												string_append(BgL_arg4174z00_1618, BgL_arg4175z00_1619);
										}
										{	/* SawJvm/jld.scm 495 */
											obj_t BgL_arg4178z00_1621;

											if (NULLP(BgL_za7ipsza7_2550))
												{	/* SawJvm/jld.scm 495 */
													BgL_arg4178z00_1621 = BNIL;
												}
											else
												{	/* SawJvm/jld.scm 495 */
													obj_t BgL_head3729z00_1625;

													BgL_head3729z00_1625 = MAKE_PAIR(BNIL, BNIL);
													{
														obj_t BgL_l3727z00_1627;

														obj_t BgL_tail3730z00_1628;

														BgL_l3727z00_1627 = BgL_za7ipsza7_2550;
														BgL_tail3730z00_1628 = BgL_head3729z00_1625;
													BgL_zc3anonymousza34182ze3z83_1629:
														if (NULLP(BgL_l3727z00_1627))
															{	/* SawJvm/jld.scm 495 */
																BgL_arg4178z00_1621 = CDR(BgL_head3729z00_1625);
															}
														else
															{	/* SawJvm/jld.scm 495 */
																obj_t BgL_newtail3731z00_1631;

																{	/* SawJvm/jld.scm 495 */
																	obj_t BgL_arg4185z00_1633;

																	{	/* SawJvm/jld.scm 495 */
																		obj_t BgL_xz00_1635;

																		BgL_xz00_1635 = CAR(BgL_l3727z00_1627);
																		BgL_arg4185z00_1633 =
																			BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00
																			(BGl_userzd2libraryzd2zzsaw_jvm_ldz00
																			(BgL_xz00_1635),
																			(char) (((unsigned char) '/')),
																			(char) (((unsigned char) '\\')));
																	}
																	BgL_newtail3731z00_1631 =
																		MAKE_PAIR(BgL_arg4185z00_1633, BNIL);
																}
																SET_CDR(BgL_tail3730z00_1628,
																	BgL_newtail3731z00_1631);
																{
																	obj_t BgL_tail3730z00_3423;

																	obj_t BgL_l3727z00_3421;

																	BgL_l3727z00_3421 = CDR(BgL_l3727z00_1627);
																	BgL_tail3730z00_3423 =
																		BgL_newtail3731z00_1631;
																	BgL_tail3730z00_1628 = BgL_tail3730z00_3423;
																	BgL_l3727z00_1627 = BgL_l3727z00_3421;
																	goto BgL_zc3anonymousza34182ze3z83_1629;
																}
															}
													}
												}
											BgL_arg4171z00_1615 =
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg4178z00_1621, BNIL);
										}
										{	/* SawJvm/jld.scm 487 */
											obj_t BgL_list4172z00_1616;

											{	/* SawJvm/jld.scm 487 */
												obj_t BgL_arg4173z00_1617;

												BgL_arg4173z00_1617 =
													MAKE_PAIR(BgL_arg4171z00_1615, BNIL);
												BgL_list4172z00_1616 =
													MAKE_PAIR(BgL_arg4170z00_1614, BgL_arg4173z00_1617);
											}
											BgL_arg4168z00_1612 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BGl_string4381z00zzsaw_jvm_ldz00,
												BgL_list4172z00_1616);
										}
									}
									BgL_arg4167z00_1611 =
										MAKE_PAIR(BGl_za2jvmzd2classpathza2zd2zzengine_paramz00,
										BgL_arg4168z00_1612);
								}
								BgL_arg4166z00_1610 =
									BGl_listzd2ze3msdoszd2pathzd2stringz31zzsaw_jvm_ldz00
									(BgL_arg4167z00_1611);
							}
							bgl_display_obj(BgL_arg4166z00_1610, BgL_port3732z00_1607);
						}
						bgl_display_string(BGl_string4382z00zzsaw_jvm_ldz00,
							BgL_port3732z00_1607);
						bgl_display_obj(BGl_generatezd2jvmzd2env_4317z00zzsaw_jvm_ldz00(),
							BgL_port3732z00_1607);
						bgl_display_string(BGl_string4383z00zzsaw_jvm_ldz00,
							BgL_port3732z00_1607);
						{	/* SawJvm/jld.scm 501 */
							obj_t BgL_arg4189z00_1639;

							{	/* SawJvm/jld.scm 501 */
								obj_t BgL_arg4190z00_1640;

								BgL_arg4190z00_1640 = BGl_filezd2separatorzd2zz__osz00();
								BgL_arg4189z00_1639 =
									BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00
									(BgL_mainzd2classzd2_2551, CCHAR(BgL_arg4190z00_1640),
									(char) (((unsigned char) '.')));
							}
							bgl_display_obj(BgL_arg4189z00_1639, BgL_port3732z00_1607);
						}
						bgl_display_string(BGl_string4384z00zzsaw_jvm_ldz00,
							BgL_port3732z00_1607);
						return bgl_display_char(((unsigned char) '\n'),
							BgL_port3732z00_1607);
		}}}}
	}



/* <anonymous:4123> */
	obj_t BGl_zc3anonymousza34123ze3z83zzsaw_jvm_ldz00(obj_t BgL_envz00_2552)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 450 */
			{	/* SawJvm/jld.scm 451 */
				obj_t BgL_jarnamez00_2553;

				obj_t BgL_za7ipsza7_2554;

				obj_t BgL_mainzd2classzd2_2555;

				BgL_jarnamez00_2553 =
					PROCEDURE_REF(BgL_envz00_2552, (int) (((long) 0)));
				BgL_za7ipsza7_2554 = PROCEDURE_REF(BgL_envz00_2552, (int) (((long) 1)));
				BgL_mainzd2classzd2_2555 =
					PROCEDURE_REF(BgL_envz00_2552, (int) (((long) 2)));
				{

					{	/* SawJvm/jld.scm 451 */
						obj_t BgL_port3726z00_1558;

						{	/* SawJvm/jld.scm 451 */
							obj_t BgL_res4315z00_2435;

							{	/* SawJvm/jld.scm 451 */
								obj_t BgL_auxz00_3448;

								BgL_auxz00_3448 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res4315z00_2435 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3448);
							}
							BgL_port3726z00_1558 = BgL_res4315z00_2435;
						}
						bgl_display_string(BGl_string4377z00zzsaw_jvm_ldz00,
							BgL_port3726z00_1558);
						bgl_display_obj(BGl_za2jvmzd2javaza2zd2zzengine_paramz00,
							BgL_port3726z00_1558);
						bgl_display_string(BGl_string4342z00zzsaw_jvm_ldz00,
							BgL_port3726z00_1558);
						bgl_display_obj(BGl_bigloozd2configzd2zz__configurez00
							(CNST_TABLE_REF(((long) 14))), BgL_port3726z00_1558);
						bgl_display_string(BGl_string4342z00zzsaw_jvm_ldz00,
							BgL_port3726z00_1558);
						{	/* SawJvm/jld.scm 453 */
							obj_t BgL_arg4125z00_1560;

							if (CBOOL(BGl_za2purifyza2z00zzengine_paramz00))
								{	/* SawJvm/jld.scm 453 */
									BgL_arg4125z00_1560 = BGl_string4340z00zzsaw_jvm_ldz00;
								}
							else
								{	/* SawJvm/jld.scm 453 */
									BgL_arg4125z00_1560 =
										BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF((
												(long) 13)));
								}
							bgl_display_obj(BgL_arg4125z00_1560, BgL_port3726z00_1558);
						}
						bgl_display_string(BGl_string4378z00zzsaw_jvm_ldz00,
							BgL_port3726z00_1558);
						{	/* SawJvm/jld.scm 456 */
							obj_t BgL_arg4126z00_1561;

							{	/* SawJvm/jld.scm 456 */
								obj_t BgL_arg4127z00_1562;

								{	/* SawJvm/jld.scm 456 */
									obj_t BgL_arg4128z00_1563;

									{	/* SawJvm/jld.scm 456 */
										obj_t BgL_arg4130z00_1565;

										obj_t BgL_arg4131z00_1566;

										obj_t BgL_arg4132z00_1567;

										{	/* SawJvm/jld.scm 458 */
											obj_t BgL_arg4136z00_1571;

											obj_t BgL_arg4138z00_1573;

											{	/* SawJvm/jld.scm 458 */
												obj_t BgL_arg4139z00_1574;

												BgL_arg4139z00_1574 =
													BGl_dirnamez00zz__osz00(BgL_jarnamez00_2553);
												if (STRINGP
													(BGl_za2jvmzd2jarpathza2zd2zzengine_paramz00))
													{	/* SawJvm/jld.scm 458 */
														BgL_arg4136z00_1571 =
															BGl_za2jvmzd2jarpathza2zd2zzengine_paramz00;
													}
												else
													{	/* SawJvm/jld.scm 458 */
														BgL_arg4136z00_1571 = BgL_arg4139z00_1574;
													}
											}
											BgL_arg4138z00_1573 =
												BGl_basenamez00zz__osz00(BgL_jarnamez00_2553);
											BgL_arg4130z00_1565 =
												string_append_3(BgL_arg4136z00_1571,
												BGl_string4385z00zzsaw_jvm_ldz00, BgL_arg4138z00_1573);
										}
										{	/* SawJvm/jld.scm 462 */
											obj_t BgL_arg4140z00_1575;

											obj_t BgL_arg4141z00_1576;

											BgL_arg4140z00_1575 =
												BGl_stringzd2replacezd2zz__r4_strings_6_7z00
												(BGl_jvmzd2bigloozd2classpathz00zzsaw_jvm_ldz00(),
												(char) (((unsigned char) '/')),
												(char) (((unsigned char) '\\')));
											if (CBOOL(BGl_za2unsafezd2libraryza2zd2zzengine_paramz00))
												{	/* SawJvm/jld.scm 464 */
													BgL_arg4141z00_1576 =
														BGl_string4379z00zzsaw_jvm_ldz00;
												}
											else
												{	/* SawJvm/jld.scm 464 */
													BgL_arg4141z00_1576 =
														BGl_string4380z00zzsaw_jvm_ldz00;
												}
											BgL_arg4131z00_1566 =
												string_append(BgL_arg4140z00_1575, BgL_arg4141z00_1576);
										}
										{	/* SawJvm/jld.scm 467 */
											obj_t BgL_arg4143z00_1578;

											if (NULLP(BgL_za7ipsza7_2554))
												{	/* SawJvm/jld.scm 467 */
													BgL_arg4143z00_1578 = BNIL;
												}
											else
												{	/* SawJvm/jld.scm 467 */
													obj_t BgL_head3723z00_1582;

													BgL_head3723z00_1582 = MAKE_PAIR(BNIL, BNIL);
													{
														obj_t BgL_l3721z00_1584;

														obj_t BgL_tail3724z00_1585;

														BgL_l3721z00_1584 = BgL_za7ipsza7_2554;
														BgL_tail3724z00_1585 = BgL_head3723z00_1582;
													BgL_zc3anonymousza34146ze3z83_1586:
														if (NULLP(BgL_l3721z00_1584))
															{	/* SawJvm/jld.scm 467 */
																BgL_arg4143z00_1578 = CDR(BgL_head3723z00_1582);
															}
														else
															{	/* SawJvm/jld.scm 467 */
																obj_t BgL_newtail3725z00_1588;

																{	/* SawJvm/jld.scm 467 */
																	obj_t BgL_arg4149z00_1590;

																	{	/* SawJvm/jld.scm 467 */
																		obj_t BgL_xz00_1592;

																		BgL_xz00_1592 = CAR(BgL_l3721z00_1584);
																		BgL_arg4149z00_1590 =
																			BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00
																			(BGl_userzd2libraryzd2zzsaw_jvm_ldz00
																			(BgL_xz00_1592),
																			(char) (((unsigned char) '/')),
																			(char) (((unsigned char) '\\')));
																	}
																	BgL_newtail3725z00_1588 =
																		MAKE_PAIR(BgL_arg4149z00_1590, BNIL);
																}
																SET_CDR(BgL_tail3724z00_1585,
																	BgL_newtail3725z00_1588);
																{
																	obj_t BgL_tail3724z00_3491;

																	obj_t BgL_l3721z00_3489;

																	BgL_l3721z00_3489 = CDR(BgL_l3721z00_1584);
																	BgL_tail3724z00_3491 =
																		BgL_newtail3725z00_1588;
																	BgL_tail3724z00_1585 = BgL_tail3724z00_3491;
																	BgL_l3721z00_1584 = BgL_l3721z00_3489;
																	goto BgL_zc3anonymousza34146ze3z83_1586;
																}
															}
													}
												}
											BgL_arg4132z00_1567 =
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg4143z00_1578, BNIL);
										}
										{	/* SawJvm/jld.scm 456 */
											obj_t BgL_list4133z00_1568;

											{	/* SawJvm/jld.scm 456 */
												obj_t BgL_arg4134z00_1569;

												{	/* SawJvm/jld.scm 456 */
													obj_t BgL_arg4135z00_1570;

													BgL_arg4135z00_1570 =
														MAKE_PAIR(BgL_arg4132z00_1567, BNIL);
													BgL_arg4134z00_1569 =
														MAKE_PAIR(BgL_arg4131z00_1566, BgL_arg4135z00_1570);
												}
												BgL_list4133z00_1568 =
													MAKE_PAIR(BgL_arg4130z00_1565, BgL_arg4134z00_1569);
											}
											BgL_arg4128z00_1563 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BGl_string4381z00zzsaw_jvm_ldz00,
												BgL_list4133z00_1568);
										}
									}
									BgL_arg4127z00_1562 =
										MAKE_PAIR(BGl_za2jvmzd2classpathza2zd2zzengine_paramz00,
										BgL_arg4128z00_1563);
								}
								BgL_arg4126z00_1561 =
									BGl_listzd2ze3msdoszd2pathzd2stringz31zzsaw_jvm_ldz00
									(BgL_arg4127z00_1562);
							}
							bgl_display_obj(BgL_arg4126z00_1561, BgL_port3726z00_1558);
						}
						bgl_display_string(BGl_string4382z00zzsaw_jvm_ldz00,
							BgL_port3726z00_1558);
						bgl_display_obj(BGl_za2jvmzd2optionsza2zd2zzengine_paramz00,
							BgL_port3726z00_1558);
						bgl_display_string(BGl_string4342z00zzsaw_jvm_ldz00,
							BgL_port3726z00_1558);
						bgl_display_obj(BGl_generatezd2jvmzd2env_4317z00zzsaw_jvm_ldz00(),
							BgL_port3726z00_1558);
						bgl_display_string(BGl_string4383z00zzsaw_jvm_ldz00,
							BgL_port3726z00_1558);
						{	/* SawJvm/jld.scm 474 */
							obj_t BgL_arg4153z00_1596;

							{	/* SawJvm/jld.scm 474 */
								obj_t BgL_arg4154z00_1597;

								BgL_arg4154z00_1597 = BGl_filezd2separatorzd2zz__osz00();
								BgL_arg4153z00_1596 =
									BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00
									(BgL_mainzd2classzd2_2555, CCHAR(BgL_arg4154z00_1597),
									(char) (((unsigned char) '.')));
							}
							bgl_display_obj(BgL_arg4153z00_1596, BgL_port3726z00_1558);
						}
						bgl_display_string(BGl_string4384z00zzsaw_jvm_ldz00,
							BgL_port3726z00_1558);
						return bgl_display_char(((unsigned char) '\n'),
							BgL_port3726z00_1558);
		}}}}
	}



/* generate-jvm-script */
	bool_t BGl_generatezd2jvmzd2scriptz00zzsaw_jvm_ldz00(obj_t BgL_targetz00_30,
		obj_t BgL_mainzd2classzd2_31, obj_t BgL_jarnamez00_32,
		obj_t BgL_za7ipsza7_33)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 511 */
			{	/* SawJvm/jld.scm 512 */
				obj_t BgL_list4196z00_1650;

				{	/* SawJvm/jld.scm 512 */
					obj_t BgL_arg4198z00_1652;

					BgL_arg4198z00_1652 =
						MAKE_PAIR(BGl_za2jvmzd2shellza2zd2zzengine_paramz00, BNIL);
					BgL_list4196z00_1650 =
						MAKE_PAIR(BGl_string4386z00zzsaw_jvm_ldz00, BgL_arg4198z00_1652);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list4196z00_1650);
			}
			{	/* SawJvm/jld.scm 513 */
				obj_t BgL_list4199z00_1653;

				{	/* SawJvm/jld.scm 513 */
					obj_t BgL_arg4201z00_1655;

					{	/* SawJvm/jld.scm 513 */
						obj_t BgL_arg4202z00_1656;

						BgL_arg4202z00_1656 =
							MAKE_PAIR(BGl_string4320z00zzsaw_jvm_ldz00, BNIL);
						BgL_arg4201z00_1655 =
							MAKE_PAIR(BgL_targetz00_30, BgL_arg4202z00_1656);
					}
					BgL_list4199z00_1653 =
						MAKE_PAIR(BGl_string4321z00zzsaw_jvm_ldz00, BgL_arg4201z00_1655);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list4199z00_1653);
			}
			{	/* SawJvm/jld.scm 514 */
				obj_t BgL_list4203z00_1657;

				BgL_list4203z00_1657 = MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list4203z00_1657);
			}
			if (bigloo_strcmp(BGl_za2jvmzd2shellza2zd2zzengine_paramz00,
					BGl_string4349z00zzsaw_jvm_ldz00))
				{	/* SawJvm/jld.scm 516 */
					return
						BGl_generatezd2jvmzd2shzd2scriptzd2zzsaw_jvm_ldz00(BgL_targetz00_30,
						BgL_mainzd2classzd2_31, BgL_za7ipsza7_33);
				}
			else
				{	/* SawJvm/jld.scm 516 */
					if (bigloo_strcmp(BGl_za2jvmzd2shellza2zd2zzengine_paramz00,
							BGl_string4326z00zzsaw_jvm_ldz00))
						{	/* SawJvm/jld.scm 518 */
							return
								BGl_generatezd2jvmzd2msdoszd2scriptzd2zzsaw_jvm_ldz00
								(BgL_targetz00_30, BgL_mainzd2classzd2_31, BgL_jarnamez00_32,
								BgL_za7ipsza7_33);
						}
					else
						{	/* SawJvm/jld.scm 518 */
							{	/* SawJvm/jld.scm 521 */
								obj_t BgL_list4206z00_1660;

								{	/* SawJvm/jld.scm 521 */
									obj_t BgL_arg4208z00_1662;

									{	/* SawJvm/jld.scm 521 */
										obj_t BgL_arg4210z00_1664;

										{	/* SawJvm/jld.scm 521 */
											obj_t BgL_arg4211z00_1665;

											BgL_arg4211z00_1665 =
												MAKE_PAIR(BGl_string4350z00zzsaw_jvm_ldz00, BNIL);
											BgL_arg4210z00_1664 =
												MAKE_PAIR(BGl_za2jvmzd2shellza2zd2zzengine_paramz00,
												BgL_arg4211z00_1665);
										}
										BgL_arg4208z00_1662 =
											MAKE_PAIR(BGl_string4351z00zzsaw_jvm_ldz00,
											BgL_arg4210z00_1664);
									}
									BgL_list4206z00_1660 =
										MAKE_PAIR(BGl_string4387z00zzsaw_jvm_ldz00,
										BgL_arg4208z00_1662);
								}
								BGl_warningz00zz__errorz00(BgL_list4206z00_1660);
							}
							return
								BGl_generatezd2jvmzd2shzd2scriptzd2zzsaw_jvm_ldz00
								(BgL_targetz00_30, BgL_mainzd2classzd2_31, BgL_za7ipsza7_33);
						}
				}
		}
	}



/* user-library */
	obj_t BGl_userzd2libraryzd2zzsaw_jvm_ldz00(obj_t BgL_libz00_34)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 528 */
			{
				obj_t BgL_libz00_1669;

				{	/* SawJvm/jld.scm 539 */
					bool_t BgL_testz00_3538;

					BgL_libz00_1669 = BgL_libz00_34;
					{	/* SawJvm/jld.scm 530 */
						long BgL_lenz00_1671;

						BgL_lenz00_1671 = STRING_LENGTH(BgL_libz00_1669);
						{
							long BgL_iz00_1673;

							BgL_iz00_1673 = ((long) 0);
						BgL_zc3anonymousza34215ze3z83_1674:
							if ((BgL_iz00_1673 == BgL_lenz00_1671))
								{	/* SawJvm/jld.scm 533 */
									BgL_testz00_3538 = ((bool_t) 0);
								}
							else
								{	/* SawJvm/jld.scm 535 */
									bool_t BgL_testz00_3542;

									{	/* SawJvm/jld.scm 535 */
										unsigned char BgL_arg4219z00_1678;

										obj_t BgL_arg4220z00_1679;

										BgL_arg4219z00_1678 =
											STRING_REF(BgL_libz00_1669, BgL_iz00_1673);
										BgL_arg4220z00_1679 = BGl_filezd2separatorzd2zz__osz00();
										BgL_testz00_3542 =
											(BgL_arg4219z00_1678 == CCHAR(BgL_arg4220z00_1679));
									}
									if (BgL_testz00_3542)
										{	/* SawJvm/jld.scm 535 */
											BgL_testz00_3538 = ((bool_t) 1);
										}
									else
										{
											long BgL_iz00_3547;

											BgL_iz00_3547 = (BgL_iz00_1673 + ((long) 1));
											BgL_iz00_1673 = BgL_iz00_3547;
											goto BgL_zc3anonymousza34215ze3z83_1674;
										}
								}
						}
					}
					if (BgL_testz00_3538)
						{	/* SawJvm/jld.scm 539 */
							return BgL_libz00_34;
						}
					else
						{	/* SawJvm/jld.scm 539 */
							return
								BGl_makezd2filezd2namez00zz__osz00
								(BGl_jvmzd2bigloozd2classpathz00zzsaw_jvm_ldz00(),
								BgL_libz00_34);
						}
				}
			}
		}
	}



/* list->path-string */
	obj_t BGl_listzd2ze3pathzd2stringze3zzsaw_jvm_ldz00(obj_t BgL_pathz00_35,
		obj_t BgL_separatorz00_36)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 546 */
			{	/* SawJvm/jld.scm 547 */
				obj_t BgL_rpathz00_1682;

				BgL_rpathz00_1682 = bgl_reverse(BgL_pathz00_35);
				{	/* SawJvm/jld.scm 548 */
					obj_t BgL_g3690z00_1683;

					obj_t BgL_g3691z00_1684;

					BgL_g3690z00_1683 = CDR(BgL_rpathz00_1682);
					BgL_g3691z00_1684 = CAR(BgL_rpathz00_1682);
					{
						obj_t BgL_pathz00_1686;

						obj_t BgL_resz00_1687;

						BgL_pathz00_1686 = BgL_g3690z00_1683;
						BgL_resz00_1687 = BgL_g3691z00_1684;
					BgL_zc3anonymousza34221ze3z83_1688:
						if (NULLP(BgL_pathz00_1686))
							{	/* SawJvm/jld.scm 550 */
								return BgL_resz00_1687;
							}
						else
							{
								obj_t BgL_resz00_3558;

								obj_t BgL_pathz00_3556;

								BgL_pathz00_3556 = CDR(BgL_pathz00_1686);
								BgL_resz00_3558 =
									string_append_3(CAR(BgL_pathz00_1686), BgL_separatorz00_36,
									BgL_resz00_1687);
								BgL_resz00_1687 = BgL_resz00_3558;
								BgL_pathz00_1686 = BgL_pathz00_3556;
								goto BgL_zc3anonymousza34221ze3z83_1688;
							}
					}
				}
			}
		}
	}



/* list->sh-path-string */
	obj_t BGl_listzd2ze3shzd2pathzd2stringz31zzsaw_jvm_ldz00(obj_t BgL_pathz00_37)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 557 */
			{	/* SawJvm/jld.scm 559 */
				obj_t BgL_arg4226z00_1694;

				if (STRINGP(BGl_za2jvmzd2pathzd2separatorza2z00zzengine_paramz00))
					{	/* SawJvm/jld.scm 559 */
						BgL_arg4226z00_1694 =
							BGl_za2jvmzd2pathzd2separatorza2z00zzengine_paramz00;
					}
				else
					{	/* SawJvm/jld.scm 559 */
						BgL_arg4226z00_1694 = BGl_string4388z00zzsaw_jvm_ldz00;
					}
				return
					BGl_listzd2ze3pathzd2stringze3zzsaw_jvm_ldz00(BgL_pathz00_37,
					BgL_arg4226z00_1694);
			}
		}
	}



/* list->msdos-path-string */
	obj_t BGl_listzd2ze3msdoszd2pathzd2stringz31zzsaw_jvm_ldz00(obj_t
		BgL_pathz00_38)
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 566 */
			{	/* SawJvm/jld.scm 568 */
				obj_t BgL_arg4228z00_1696;

				if (STRINGP(BGl_za2jvmzd2pathzd2separatorza2z00zzengine_paramz00))
					{	/* SawJvm/jld.scm 568 */
						BgL_arg4228z00_1696 =
							BGl_za2jvmzd2pathzd2separatorza2z00zzengine_paramz00;
					}
				else
					{	/* SawJvm/jld.scm 568 */
						BgL_arg4228z00_1696 = BGl_string4389z00zzsaw_jvm_ldz00;
					}
				return
					BGl_listzd2ze3pathzd2stringze3zzsaw_jvm_ldz00(BgL_pathz00_38,
					BgL_arg4228z00_1696);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_jvm_ldz00()
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 16 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_jvm_ldz00()
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 16 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_jvm_ldz00()
	{
		AN_OBJECT;
		{	/* SawJvm/jld.scm 16 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string4390z00zzsaw_jvm_ldz00));
			BGl_modulezd2initializa7ationz75zzengine_configurez00(((long) 96794353),
				BSTRING_TO_STRING(BGl_string4390z00zzsaw_jvm_ldz00));
			BGl_modulezd2initializa7ationz75zzengine_linkz00(((long) 392051205),
				BSTRING_TO_STRING(BGl_string4390z00zzsaw_jvm_ldz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string4390z00zzsaw_jvm_ldz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string4390z00zzsaw_jvm_ldz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string4390z00zzsaw_jvm_ldz00));
			BGl_modulezd2initializa7ationz75zzread_readerz00(((long) 182269387),
				BSTRING_TO_STRING(BGl_string4390z00zzsaw_jvm_ldz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string4390z00zzsaw_jvm_ldz00));
			BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long) 254412896),
				BSTRING_TO_STRING(BGl_string4390z00zzsaw_jvm_ldz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4390z00zzsaw_jvm_ldz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4390z00zzsaw_jvm_ldz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4390z00zzsaw_jvm_ldz00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 143212498),
				BSTRING_TO_STRING(BGl_string4390z00zzsaw_jvm_ldz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string4390z00zzsaw_jvm_ldz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string4390z00zzsaw_jvm_ldz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string4390z00zzsaw_jvm_ldz00));
		}
	}

#ifdef __cplusplus
}
#endif
