/*===========================================================================*/
/*   (Jas/as.scm)                                                            */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Jas/as.scm)*/
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
		obj_t BgL_codez00;
		obj_t BgL_vectz00;
	}              *BgL_typez00_bglt;

	typedef struct BgL_classez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_codez00;
		obj_t BgL_vectz00;
		obj_t BgL_flagsz00;
		obj_t BgL_namez00;
		obj_t BgL_poolz00;
	}                *BgL_classez00_bglt;

	typedef struct BgL_fieldzd2orzd2methodz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_flagsz00;
		obj_t BgL_namez00;
		obj_t BgL_ownerz00;
		obj_t BgL_usertypez00;
		obj_t BgL_typez00;
		obj_t BgL_pnamez00;
		obj_t BgL_descriptorz00;
		obj_t BgL_poolz00;
		obj_t BgL_attributesz00;
	}                             *BgL_fieldzd2orzd2methodz00_bglt;

	typedef struct BgL_fieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_flagsz00;
		obj_t BgL_namez00;
		obj_t BgL_ownerz00;
		obj_t BgL_usertypez00;
		obj_t BgL_typez00;
		obj_t BgL_pnamez00;
		obj_t BgL_descriptorz00;
		obj_t BgL_poolz00;
		obj_t BgL_attributesz00;
	}               *BgL_fieldz00_bglt;

	typedef struct BgL_methodz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_flagsz00;
		obj_t BgL_namez00;
		obj_t BgL_ownerz00;
		obj_t BgL_usertypez00;
		obj_t BgL_typez00;
		obj_t BgL_pnamez00;
		obj_t BgL_descriptorz00;
		obj_t BgL_poolz00;
		obj_t BgL_attributesz00;
	}                *BgL_methodz00_bglt;

	typedef struct BgL_attributez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_typez00;
		obj_t BgL_namez00;
		obj_t BgL_siza7eza7;
		obj_t BgL_infoz00;
	}                   *BgL_attributez00_bglt;

	typedef struct BgL_classfilez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_currentzd2methodzd2;
		obj_t BgL_globalsz00;
		obj_t BgL_poolz00;
		obj_t BgL_poolzd2siza7ez75;
		obj_t BgL_pooledzd2nameszd2;
		obj_t BgL_flagsz00;
		obj_t BgL_mez00;
		obj_t BgL_superz00;
		obj_t BgL_interfacesz00;
		obj_t BgL_fieldsz00;
		obj_t BgL_methodsz00;
		obj_t BgL_attributesz00;
	}                   *BgL_classfilez00_bglt;


	BGL_IMPORT obj_t BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t);
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl__jvmzd2asfilezd2zzjas_asz00(obj_t, obj_t, obj_t);
	extern BgL_fieldz00_bglt
		BGl_declaredzd2fieldzd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	static obj_t BGl_getzd2localvarszd2zzjas_asz00(obj_t);
	extern int BGl_poolzd2namezd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	static BgL_attributez00_bglt
		BGl_makezd2localvarszd2zzjas_asz00(BgL_classfilez00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_zb2zb2zz__r4_numbers_6_5z00(obj_t);
	static long BGl_aszd2classzd2modifiersz00zzjas_asz00(obj_t);
	extern obj_t BGl_jaszd2errorzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzjas_asz00 = BUNSPEC;
	extern obj_t
		BGl_poolzd2localzd2methodz00zzjas_classfilez00(BgL_classfilez00_bglt,
		BgL_methodz00_bglt);
	static obj_t BGl_linezd2compresszd2zzjas_asz00(obj_t, obj_t);
	static obj_t BGl_getzd2lineszd2zzjas_asz00(obj_t, long);
	extern BgL_classfilez00_bglt BGl_makezd2classfilezd2zzjas_classfilez00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3exitza31994ze3z83zzjas_asz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzjas_asz00();
	BGL_IMPORT bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	static obj_t BGl_getzd2handlerszd2zzjas_asz00(obj_t);
	BGL_IMPORT obj_t BGl_2maxz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_resolvezd2opcodeszd2zzjas_opcodez00;
	static obj_t BGl_scanzd2infoszd2zzjas_asz00(BgL_classfilez00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_2minz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_getzd2bytecodezd2zzjas_asz00(obj_t);
	extern obj_t BGl_resolvezd2labelszd2zzjas_labelsz00;
	static obj_t BGl_zc3anonymousza32970ze3z83zzjas_asz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl__jvmzd2aszd2zzjas_asz00(obj_t, obj_t, obj_t);
	static obj_t BGl_reorderzd2classfilezd2zzjas_asz00(BgL_classfilez00_bglt,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzjas_asz00();
	static bool_t BGl_za2profileza2z00zzjas_asz00;
	static obj_t BGl_getzd2procedurezd2codez00zzjas_asz00(BgL_classfilez00_bglt,
		obj_t, obj_t);
	extern int BGl_poolzd2fieldzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		BgL_fieldz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_jvmzd2asfilezd2zzjas_asz00(obj_t, obj_t);
	static obj_t BGl_smapfilez00zzjas_asz00();
	static obj_t BGl_za2za2sdefullfileza2za2z00zzjas_asz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_pathnamez00zzjas_asz00(obj_t);
	static obj_t BGl_zc3anonymousza32005ze3z83zzjas_asz00(obj_t, obj_t);
	static obj_t BGl_za2za2maxlineza2za2z00zzjas_asz00 = BUNSPEC;
	static obj_t BGl_poszd2infozd2ze3linezd2infoz12z23zzjas_asz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzjas_asz00();
	BGL_IMPORT obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static BgL_attributez00_bglt BGl_srcfilez00zzjas_asz00(BgL_classfilez00_bglt,
		obj_t);
	static obj_t BGl_zc3exitza32002ze3z83zzjas_asz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static BgL_attributez00_bglt BGl_smapz00zzjas_asz00(BgL_classfilez00_bglt);
	static obj_t BGl_infoz00zzjas_asz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_aszd2declarezd2zzjas_asz00(BgL_classfilez00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT bool_t bigloo_strncmp(obj_t, obj_t, long);
	extern BgL_classez00_bglt BGl_makezd2classezd2zzjas_classfilez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzjas_asz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_stackz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_labelsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_widez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_peepz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_opcodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_profilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_producez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_classfilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_libz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__binaryz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	extern int
		BGl_poolzd2classzd2byzd2namezd2zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zzjas_asz00();
	BGL_IMPORT long bgl_list_length(obj_t);
	BGL_IMPORT obj_t close_binary_port(obj_t);
	BGL_IMPORT obj_t BGl_rempropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t);
	BGL_IMPORT obj_t make_string(long, unsigned char);
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_IMPORT obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	extern obj_t BGl_fieldzd2orzd2methodz00zzjas_classfilez00;
	extern obj_t BGl_stkzd2analysiszd2zzjas_stackz00(obj_t, obj_t);
	static obj_t BGl_zc3exitza32022ze3z83zzjas_asz00(obj_t, obj_t);
	extern obj_t BGl_za2za2lastzd2numberzd2ofzd2localsza2za2zd2zzjas_peepz00;
	static obj_t BGl_aszd2methodzd2zzjas_asz00(BgL_classfilez00_bglt, obj_t);
	extern BgL_fieldz00_bglt BGl_makezd2fieldzd2zzjas_classfilez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_resolvezd2widezd2zzjas_widez00;
	extern obj_t BGl_aszd2assignzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t, obj_t);
	extern BgL_attributez00_bglt BGl_makezd2attributezd2zzjas_classfilez00(obj_t,
		obj_t, obj_t, obj_t);
	extern BgL_typez00_bglt
		BGl_aszd2typezd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	static BgL_attributez00_bglt
		BGl_aszd2codezd2zzjas_asz00(BgL_classfilez00_bglt, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_jaszd2profilezd2zzjas_profilez00(obj_t);
	BGL_IMPORT obj_t BGl_filterz00zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32179ze3z83zzjas_asz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_jvmzd2aszd2zzjas_asz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	BGL_IMPORT obj_t BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	extern BgL_classez00_bglt
		BGl_declaredzd2classzd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	static bool_t
		BGl_setzd2fieldzd2methodzd2typezd2zzjas_asz00(BgL_classfilez00_bglt);
	static obj_t BGl_za2za2sdefileza2za2z00zzjas_asz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32900ze3z83zzjas_asz00(obj_t, obj_t);
	extern obj_t BGl_peepz00zzjas_peepz00;
	BGL_IMPORT obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	static obj_t BGl_za2za2maxcharza2za2z00zzjas_asz00 = BUNSPEC;
	BGL_IMPORT obj_t
		BGl_callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2jaszd2warningza2zd2zzjas_asz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_sortz00zz__r4_vectors_6_8z00(obj_t, obj_t);
	static obj_t BGl_za2za2poszd2ze3lineza2za2z31zzjas_asz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32897ze3z83zzjas_asz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_producez00zzjas_producez00(obj_t, obj_t);
	static long BGl_za2za2maxposza2za2z00zzjas_asz00;
	static obj_t BGl_za2za2allzd2linesza2za2zd2zzjas_asz00 = BUNSPEC;
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static BgL_attributez00_bglt
		BGl_makezd2linezd2attributez00zzjas_asz00(BgL_classfilez00_bglt, obj_t);
	extern BgL_methodz00_bglt
		BGl_declaredzd2methodzd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	static long BGl_aszd2fieldzd2modifiersz00zzjas_asz00(obj_t);
	extern obj_t BGl_stringzd2ze3utf8z31zzjas_libz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2charzd2infoza2z00zzjas_asz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_raisez00zz__errorz00(obj_t);
	extern BgL_methodz00_bglt BGl_makezd2methodzd2zzjas_classfilez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzjas_asz00();
	static obj_t BGl_asz00zzjas_asz00(obj_t);
	BGL_IMPORT obj_t bgl_remq_bang(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzjas_asz00();
	extern int BGl_poolzd2classzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		BgL_classez00_bglt);
	static long BGl_aszd2methodzd2modifiersz00zzjas_asz00(obj_t);
	static obj_t __cnst[29];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jvmzd2asfilezd2envz00zzjas_asz00,
		BgL_bgl__jvmza7d2asfileza7d23090z00, BGl__jvmzd2asfilezd2zzjas_asz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3078z00zzjas_asz00,
		BgL_bgl_za7c3anonymousza7a323091z00,
		BGl_zc3anonymousza32897ze3z83zzjas_asz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3079z00zzjas_asz00,
		BgL_bgl_za7c3anonymousza7a323092z00,
		BGl_zc3anonymousza32900ze3z83zzjas_asz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3085z00zzjas_asz00,
		BgL_bgl_za7c3anonymousza7a323093z00,
		BGl_zc3anonymousza32970ze3z83zzjas_asz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3043z00zzjas_asz00,
		BgL_bgl_string3043za700za7za7j3094za7, "Jas", 3);
	      DEFINE_STRING(BGl_string3044z00zzjas_asz00,
		BgL_bgl_string3044za700za7za7j3095za7, "Can't open file for output", 26);
	      DEFINE_STRING(BGl_string3045z00zzjas_asz00,
		BgL_bgl_string3045za700za7za7j3096za7, "_", 1);
	      DEFINE_STRING(BGl_string3046z00zzjas_asz00,
		BgL_bgl_string3046za700za7za7j3097za7, "BgL__", 5);
	      DEFINE_STRING(BGl_string3047z00zzjas_asz00,
		BgL_bgl_string3047za700za7za7j3098za7, "apply", 5);
	      DEFINE_STRING(BGl_string3048z00zzjas_asz00,
		BgL_bgl_string3048za700za7za7j3099za7, "jas", 3);
	      DEFINE_STRING(BGl_string3050z00zzjas_asz00,
		BgL_bgl_string3050za700za7za7j3100za7, "SourceFile", 10);
	      DEFINE_STRING(BGl_string3049z00zzjas_asz00,
		BgL_bgl_string3049za700za7za7j3101za7, "bad module definition", 21);
	      DEFINE_STRING(BGl_string3051z00zzjas_asz00,
		BgL_bgl_string3051za700za7za7j3102za7, "SourceDebugExtension", 20);
	      DEFINE_STRING(BGl_string3052z00zzjas_asz00,
		BgL_bgl_string3052za700za7za7j3103za7, "BiglooChar", 10);
	      DEFINE_STRING(BGl_string3053z00zzjas_asz00,
		BgL_bgl_string3053za700za7za7j3104za7, "Bigloo", 6);
	      DEFINE_STRING(BGl_string3054z00zzjas_asz00,
		BgL_bgl_string3054za700za7za7j3105za7, "~a#1,1:~a,~a\n", 13);
	      DEFINE_STRING(BGl_string3055z00zzjas_asz00,
		BgL_bgl_string3055za700za7za7j3106za7, "*L\n", 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_jvmzd2aszd2envz00zzjas_asz00,
		BgL_bgl__jvmza7d2asza7d2za7za7ja3107z00, BGl__jvmzd2aszd2zzjas_asz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3056z00zzjas_asz00,
		BgL_bgl_string3056za700za7za7j3108za7, "\n", 1);
	      DEFINE_STRING(BGl_string3057z00zzjas_asz00,
		BgL_bgl_string3057za700za7za7j3109za7, "+ 1 ", 4);
	      DEFINE_STRING(BGl_string3058z00zzjas_asz00,
		BgL_bgl_string3058za700za7za7j3110za7, "*F\n", 3);
	      DEFINE_STRING(BGl_string3060z00zzjas_asz00,
		BgL_bgl_string3060za700za7za7j3111za7, "", 0);
	      DEFINE_STRING(BGl_string3059z00zzjas_asz00,
		BgL_bgl_string3059za700za7za7j3112za7, "*S Bigloo\n", 10);
	      DEFINE_STRING(BGl_string3061z00zzjas_asz00,
		BgL_bgl_string3061za700za7za7j3113za7, "*E\n", 3);
	      DEFINE_STRING(BGl_string3062z00zzjas_asz00,
		BgL_bgl_string3062za700za7za7j3114za7, ":1\n", 3);
	      DEFINE_STRING(BGl_string3063z00zzjas_asz00,
		BgL_bgl_string3063za700za7za7j3115za7, "1#1,", 4);
	      DEFINE_STRING(BGl_string3064z00zzjas_asz00,
		BgL_bgl_string3064za700za7za7j3116za7, "*S ", 3);
	      DEFINE_STRING(BGl_string3065z00zzjas_asz00,
		BgL_bgl_string3065za700za7za7j3117za7, "SMAP\n", 5);
	      DEFINE_STRING(BGl_string3066z00zzjas_asz00,
		BgL_bgl_string3066za700za7za7j3118za7, "L", 1);
	      DEFINE_STRING(BGl_string3067z00zzjas_asz00,
		BgL_bgl_string3067za700za7za7j3119za7, ";", 1);
	      DEFINE_STRING(BGl_string3068z00zzjas_asz00,
		BgL_bgl_string3068za700za7za7j3120za7, "bad declaration", 15);
	      DEFINE_STRING(BGl_string3070z00zzjas_asz00,
		BgL_bgl_string3070za700za7za7j3121za7, "bad method modifier", 19);
	      DEFINE_STRING(BGl_string3069z00zzjas_asz00,
		BgL_bgl_string3069za700za7za7j3122za7, "as", 2);
	      DEFINE_STRING(BGl_string3071z00zzjas_asz00,
		BgL_bgl_string3071za700za7za7j3123za7, "bad field modifier", 18);
	      DEFINE_STRING(BGl_string3072z00zzjas_asz00,
		BgL_bgl_string3072za700za7za7j3124za7, "bad method definition", 21);
	      DEFINE_STRING(BGl_string3073z00zzjas_asz00,
		BgL_bgl_string3073za700za7za7j3125za7,
		"You should consider splitting this function in small pieces.", 60);
	      DEFINE_STRING(BGl_string3074z00zzjas_asz00,
		BgL_bgl_string3074za700za7za7j3126za7, ", limit size: 8000).\n", 21);
	      DEFINE_STRING(BGl_string3075z00zzjas_asz00,
		BgL_bgl_string3075za700za7za7j3127za7,
		"Method too large. This may cause some troubles to Jvm jits (current size: ",
		74);
	      DEFINE_STRING(BGl_string3076z00zzjas_asz00,
		BgL_bgl_string3076za700za7za7j3128za7, "Code", 4);
	      DEFINE_STRING(BGl_string3077z00zzjas_asz00,
		BgL_bgl_string3077za700za7za7j3129za7, "LineNumberTable", 15);
	      DEFINE_STRING(BGl_string3080z00zzjas_asz00,
		BgL_bgl_string3080za700za7za7j3130za7, "LocalVariableTable", 18);
	      DEFINE_STRING(BGl_string3081z00zzjas_asz00,
		BgL_bgl_string3081za700za7za7j3131za7,
		"You should consider splitting this source file in small pieces.", 63);
	      DEFINE_STRING(BGl_string3082z00zzjas_asz00,
		BgL_bgl_string3082za700za7za7j3132za7, ", limit size: 65535).\n", 22);
	      DEFINE_STRING(BGl_string3083z00zzjas_asz00,
		BgL_bgl_string3083za700za7za7j3133za7,
		"Source file too large for generating character information (current size: ",
		74);
	      DEFINE_STRING(BGl_string3084z00zzjas_asz00,
		BgL_bgl_string3084za700za7za7j3134za7, "*jvm-char-info*", 15);
	      DEFINE_STRING(BGl_string3086z00zzjas_asz00,
		BgL_bgl_string3086za700za7za7j3135za7, "jas_as", 6);
	      DEFINE_STRING(BGl_string3087z00zzjas_asz00,
		BgL_bgl_string3087za700za7za7j3136za7,
		"localvariable linenumber code native synchronized transient volatile static protected private abstract interface super final public field class function bytevector srcfile sde sourcefile fields declare as method list_to_vector invokestatic jas-global-value ",
		257);
	BGL_IMPORT obj_t BGl_readzd2envzd2zz__readerz00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzjas_asz00(long
		BgL_checksumz00_1963, char *BgL_fromz00_1964)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzjas_asz00))
				{
					BGl_requirezd2initializa7ationz75zzjas_asz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzjas_asz00();
					BGl_cnstzd2initzd2zzjas_asz00();
					BGl_importedzd2moduleszd2initz00zzjas_asz00();
					BGl_toplevelzd2initzd2zzjas_asz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzjas_asz00()
	{
		AN_OBJECT;
		{	/* Jas/as.scm 1 */
			BGl_modulezd2initializa7ationz75zz__binaryz00(((long) 0), "jas_as");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"jas_as");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"jas_as");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "jas_as");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "jas_as");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"jas_as");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"jas_as");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "jas_as");
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 0), "jas_as");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "jas_as");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"jas_as");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"jas_as");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"jas_as");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"jas_as");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"jas_as");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"jas_as");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzjas_asz00()
	{
		AN_OBJECT;
		{	/* Jas/as.scm 1 */
			{	/* Jas/as.scm 1 */
				obj_t BgL_cportz00_1945;

				BgL_cportz00_1945 =
					bgl_open_input_string(BGl_string3087z00zzjas_asz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1946;

					BgL_iz00_1946 = ((long) 28);
				BgL_loopz00_1947:
					if ((BgL_iz00_1946 == ((long) -1)))
						{	/* Jas/as.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* Jas/as.scm 1 */
							{	/* Jas/as.scm 1 */
								obj_t BgL_arg3089z00_1949;

								{	/* Jas/as.scm 1 */

									{	/* Jas/as.scm 1 */
										obj_t BgL_locationz00_1951;

										BgL_locationz00_1951 = BBOOL(((bool_t) 0));
										{	/* Jas/as.scm 1 */

											BgL_arg3089z00_1949 =
												BGl_readz00zz__readerz00(BgL_cportz00_1945,
												BgL_locationz00_1951);
										}
									}
								}
								{	/* Jas/as.scm 1 */
									int BgL_auxz00_1994;

									BgL_auxz00_1994 = (int) (BgL_iz00_1946);
									CNST_TABLE_SET(BgL_auxz00_1994, BgL_arg3089z00_1949);
							}}
							{	/* Jas/as.scm 1 */
								int BgL_auxz00_1952;

								BgL_auxz00_1952 = (int) ((BgL_iz00_1946 - ((long) 1)));
								{
									long BgL_iz00_1999;

									BgL_iz00_1999 = (long) (BgL_auxz00_1952);
									BgL_iz00_1946 = BgL_iz00_1999;
									goto BgL_loopz00_1947;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzjas_asz00()
	{
		AN_OBJECT;
		{	/* Jas/as.scm 1 */
			BGl_za2jaszd2warningza2zd2zzjas_asz00 = BFALSE;
			BGl_za2jvmzd2charzd2infoza2z00zzjas_asz00 = BFALSE;
			BGl_za2za2sdefileza2za2z00zzjas_asz00 = BFALSE;
			BGl_za2za2sdefullfileza2za2z00zzjas_asz00 = BFALSE;
			BGl_za2za2maxposza2za2z00zzjas_asz00 = ((long) 0);
			BGl_za2za2maxcharza2za2z00zzjas_asz00 = BINT(((long) 0));
			BGl_za2za2maxlineza2za2z00zzjas_asz00 = BINT(((long) 0));
			BGl_za2profileza2z00zzjas_asz00 = ((bool_t) 0);
			BGl_za2za2allzd2linesza2za2zd2zzjas_asz00 = BNIL;
			return (BGl_za2za2poszd2ze3lineza2za2z31zzjas_asz00 = BNIL, BUNSPEC);
		}
	}



/* jvm-asfile */
	BGL_EXPORTED_DEF obj_t BGl_jvmzd2asfilezd2zzjas_asz00(obj_t BgL_fileinz00_1,
		obj_t BgL_fileoutz00_2)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 35 */
			{	/* Jas/as.scm 36 */
				obj_t BgL_portz00_302;

				BgL_portz00_302 =
					BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00(BgL_fileoutz00_2);
				if (BINARY_PORTP(BgL_portz00_302))
					{	/* Jas/as.scm 37 */
						BFALSE;
					}
				else
					{	/* Jas/as.scm 37 */
						BGl_errorz00zz__errorz00(BGl_string3043z00zzjas_asz00,
							BGl_string3044z00zzjas_asz00, BgL_fileoutz00_2);
					}
				return
					BGl_zc3exitza31994ze3z83zzjas_asz00(BgL_fileoutz00_2, BgL_portz00_302,
					BgL_fileinz00_1);
			}
		}
	}



/* <exit:1994> */
	obj_t BGl_zc3exitza31994ze3z83zzjas_asz00(obj_t BgL_fileoutz00_1937,
		obj_t BgL_portz00_1936, obj_t BgL_fileinz00_1935)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 39 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1910z00_305;

			if (SET_EXIT(BgL_an_exit1910z00_305))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1910z00_305 = (void *) jmpbuf;
					{	/* Jas/as.scm 39 */

						PUSH_EXIT(BgL_an_exit1910z00_305, ((long) 1));
						{	/* Jas/as.scm 39 */
							obj_t BgL_an_exitd1911z00_306;

							BgL_an_exitd1911z00_306 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Jas/as.scm 39 */
								obj_t BgL_res1913z00_309;

								{	/* Jas/as.scm 39 */
									obj_t BgL_err1908z00_310;

									obj_t BgL_ohs1907z00_311;

									BgL_err1908z00_310 = MAKE_PAIR(BFALSE, BUNSPEC);
									BgL_ohs1907z00_311 = BGL_ERROR_HANDLER_GET();
									{	/* Jas/as.scm 39 */
										obj_t BgL_val1914z00_312;

										BgL_val1914z00_312 =
											BGl_zc3exitza32002ze3z83zzjas_asz00(BgL_portz00_1936,
											BgL_ohs1907z00_311, BgL_an_exitd1911z00_306,
											BgL_err1908z00_310, BgL_fileinz00_1935);
										BGL_ERROR_HANDLER_SET(BgL_ohs1907z00_311);
										BUNSPEC;
										if (CBOOL(CAR(BgL_err1908z00_310)))
											{	/* Jas/as.scm 42 */
												obj_t BgL_arg1998z00_314;

												{	/* Jas/as.scm 42 */
													obj_t BgL_ez00_315;

													BgL_ez00_315 = CDR(BgL_err1908z00_310);
													{	/* Jas/as.scm 41 */
														char *BgL_stringz00_1231;

														BgL_stringz00_1231 =
															BSTRING_TO_STRING(BgL_fileoutz00_1937);
														if (unlink(BgL_stringz00_1231))
															{	/* Jas/as.scm 41 */
																((bool_t) 0);
															}
														else
															{	/* Jas/as.scm 41 */
																((bool_t) 1);
															}
													}
													BgL_arg1998z00_314 =
														BGl_raisez00zz__errorz00(BgL_ez00_315);
												}
												BGl_unwindzd2untilz12zc0zz__bexitz00
													(BgL_an_exitd1911z00_306, BgL_arg1998z00_314);
											}
										else
											{	/* Jas/as.scm 39 */
												BFALSE;
											}
										if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
												(BgL_val1914z00_312)))
											{	/* Jas/as.scm 39 */
												BgL_res1913z00_309 =
													BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
													(BgL_val1914z00_312), CDR(BgL_val1914z00_312));
											}
										else
											{	/* Jas/as.scm 39 */
												BgL_res1913z00_309 = BgL_val1914z00_312;
											}
									}
								}
								POP_EXIT();
								return BgL_res1913z00_309;
							}
						}
					}
				}
		}
	}



/* <exit:2022> */
	obj_t BGl_zc3exitza32022ze3z83zzjas_asz00(obj_t BgL_portz00_1939,
		obj_t BgL_fileinz00_1938)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 45 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1918z00_332;

			if (SET_EXIT(BgL_an_exit1918z00_332))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1918z00_332 = (void *) jmpbuf;
					{	/* Jas/as.scm 45 */

						PUSH_EXIT(BgL_an_exit1918z00_332, ((long) 0));
						{	/* Jas/as.scm 44 */
							obj_t BgL_val1919z00_333;

							BgL_val1919z00_333 =
								BGl_jvmzd2aszd2zzjas_asz00
								(BGl_callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00
								(BgL_fileinz00_1938, BGl_readzd2envzd2zz__readerz00),
								BgL_portz00_1939);
							POP_EXIT();
							return BgL_val1919z00_333;
						}
					}
				}
		}
	}



/* <exit:2002> */
	obj_t BGl_zc3exitza32002ze3z83zzjas_asz00(obj_t BgL_portz00_1944,
		obj_t BgL_ohs1907z00_1943, obj_t BgL_an_exitd1911z00_1942,
		obj_t BgL_err1908z00_1941, obj_t BgL_fileinz00_1940)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 39 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1915z00_320;

			if (SET_EXIT(BgL_an_exit1915z00_320))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1915z00_320 = (void *) jmpbuf;
					{	/* Jas/as.scm 39 */

						PUSH_EXIT(BgL_an_exit1915z00_320, ((long) 0));
						{	/* Jas/as.scm 39 */
							obj_t BgL_val1916z00_321;

							{	/* Jas/as.scm 39 */
								obj_t BgL_arg2003z00_322;

								{	/* Jas/as.scm 39 */
									obj_t BgL_zc3anonymousza32005ze3z83_1906;

									BgL_zc3anonymousza32005ze3z83_1906 =
										make_fx_procedure(BGl_zc3anonymousza32005ze3z83zzjas_asz00,
										(int) (((long) 1)), (int) (((long) 2)));
									PROCEDURE_SET(BgL_zc3anonymousza32005ze3z83_1906,
										(int) (((long) 0)), BgL_err1908z00_1941);
									PROCEDURE_SET(BgL_zc3anonymousza32005ze3z83_1906,
										(int) (((long) 1)), BgL_an_exitd1911z00_1942);
									BgL_arg2003z00_322 =
										MAKE_PAIR(BgL_zc3anonymousza32005ze3z83_1906,
										BgL_ohs1907z00_1943);
								}
								BGL_ERROR_HANDLER_SET(BgL_arg2003z00_322);
								BUNSPEC;
							}
							{	/* Jas/as.scm 43 */
								obj_t BgL_val1917z00_327;

								BgL_val1917z00_327 =
									BGl_zc3exitza32022ze3z83zzjas_asz00(BgL_portz00_1944,
									BgL_fileinz00_1940);
								close_binary_port(BgL_portz00_1944);
								if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
										(BgL_val1917z00_327)))
									{	/* Jas/as.scm 45 */
										BgL_val1916z00_321 =
											BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
											(BgL_val1917z00_327), CDR(BgL_val1917z00_327));
									}
								else
									{	/* Jas/as.scm 45 */
										BgL_val1916z00_321 = BgL_val1917z00_327;
									}
							}
							POP_EXIT();
							return BgL_val1916z00_321;
						}
					}
				}
		}
	}



/* _jvm-asfile */
	obj_t BGl__jvmzd2asfilezd2zzjas_asz00(obj_t BgL_envz00_1907,
		obj_t BgL_fileinz00_1908, obj_t BgL_fileoutz00_1909)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 35 */
			return
				BGl_jvmzd2asfilezd2zzjas_asz00(BgL_fileinz00_1908, BgL_fileoutz00_1909);
		}
	}



/* <anonymous:2005> */
	obj_t BGl_zc3anonymousza32005ze3z83zzjas_asz00(obj_t BgL_envz00_1910,
		obj_t BgL_ez00_1913)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 39 */
			{	/* Jas/as.scm 39 */
				obj_t BgL_err1908z00_1911;

				obj_t BgL_an_exitd1911z00_1912;

				BgL_err1908z00_1911 =
					PROCEDURE_REF(BgL_envz00_1910, (int) (((long) 0)));
				BgL_an_exitd1911z00_1912 =
					PROCEDURE_REF(BgL_envz00_1910, (int) (((long) 1)));
				{
					obj_t BgL_ez00_324;

					BgL_ez00_324 = BgL_ez00_1913;
					SET_CAR(BgL_err1908z00_1911, BTRUE);
					SET_CDR(BgL_err1908z00_1911, BgL_ez00_324);
					return
						BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1911z00_1912,
						BgL_ez00_324);
				}
			}
		}
	}



/* jvm-as */
	BGL_EXPORTED_DEF obj_t BGl_jvmzd2aszd2zzjas_asz00(obj_t BgL_lz00_3,
		obj_t BgL_outchanz00_4)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 47 */
			{	/* Jas/as.scm 48 */
				obj_t BgL_classfilez00_335;

				BgL_classfilez00_335 =
					BGl_asz00zzjas_asz00(BGl_jaszd2profilezd2zzjas_profilez00
					(BgL_lz00_3));
				BGl_reorderzd2classfilezd2zzjas_asz00((BgL_classfilez00_bglt)
					(BgL_classfilez00_335), BgL_lz00_3);
				BGl_producez00zzjas_producez00(BgL_outchanz00_4, BgL_classfilez00_335);
				{	/* Jas/as.scm 53 */
					obj_t BgL_g1949z00_336;

					{
						BgL_classfilez00_bglt BgL_auxz00_2072;

						BgL_auxz00_2072 = (BgL_classfilez00_bglt) (BgL_classfilez00_335);
						BgL_g1949z00_336 =
							(((BgL_classfilez00_bglt) CREF(BgL_auxz00_2072))->BgL_globalsz00);
					}
					{
						obj_t BgL_l1946z00_338;

						{	/* Jas/as.scm 54 */
							bool_t BgL_auxz00_2075;

							BgL_l1946z00_338 = BgL_g1949z00_336;
						BgL_zc3anonymousza32024ze3z83_339:
							if (PAIRP(BgL_l1946z00_338))
								{	/* Jas/as.scm 54 */
									{	/* Jas/as.scm 53 */
										obj_t BgL_sz00_341;

										BgL_sz00_341 = CAR(BgL_l1946z00_338);
										BGl_rempropz12z12zz__r4_symbols_6_4z00(BgL_sz00_341,
											CNST_TABLE_REF(((long) 0)));
									}
									{
										obj_t BgL_l1946z00_2081;

										BgL_l1946z00_2081 = CDR(BgL_l1946z00_338);
										BgL_l1946z00_338 = BgL_l1946z00_2081;
										goto BgL_zc3anonymousza32024ze3z83_339;
									}
								}
							else
								{	/* Jas/as.scm 54 */
									BgL_auxz00_2075 = ((bool_t) 1);
								}
							return BBOOL(BgL_auxz00_2075);
						}
					}
				}
			}
		}
	}



/* _jvm-as */
	obj_t BGl__jvmzd2aszd2zzjas_asz00(obj_t BgL_envz00_1917, obj_t BgL_lz00_1918,
		obj_t BgL_outchanz00_1919)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 47 */
			return BGl_jvmzd2aszd2zzjas_asz00(BgL_lz00_1918, BgL_outchanz00_1919);
		}
	}



/* reorder-classfile */
	obj_t BGl_reorderzd2classfilezd2zzjas_asz00(BgL_classfilez00_bglt
		BgL_classez00_5, obj_t BgL_lz00_6)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 60 */
			{	/* Jas/as.scm 61 */
				obj_t BgL_defsz00_345;

				{	/* Jas/as.scm 61 */
					obj_t BgL_pairz00_1246;

					{	/* Jas/as.scm 61 */
						obj_t BgL_pairz00_1240;

						BgL_pairz00_1240 = BgL_lz00_6;
						BgL_pairz00_1246 = CDR(CDR(CDR(BgL_pairz00_1240)));
					}
					BgL_defsz00_345 = CDR(CDR(BgL_pairz00_1246));
				}
				{
					obj_t BgL_codez00_396;

					obj_t BgL_accz00_397;

					obj_t BgL_namez00_414;

					{	/* Jas/as.scm 111 */
						obj_t BgL_codez00_349;

						BgL_codez00_349 =
							BGl_getzd2procedurezd2codez00zzjas_asz00(BgL_classez00_5,
							BgL_defsz00_345, BGl_string3047z00zzjas_asz00);
						if (CBOOL(BgL_codez00_349))
							{	/* Jas/as.scm 113 */
								obj_t BgL_closuresz00_350;

								obj_t BgL_methodsz00_351;

								BgL_codez00_396 = BgL_codez00_349;
								BgL_accz00_397 = BNIL;
							BgL_zc3anonymousza32071ze3z83_398:
								if (NULLP(BgL_codez00_396))
									{	/* Jas/as.scm 75 */
										BgL_closuresz00_350 = BgL_accz00_397;
									}
								else
									{	/* Jas/as.scm 76 */
										bool_t BgL_testz00_2095;

										{	/* Jas/as.scm 76 */
											bool_t BgL_testz00_2096;

											{	/* Jas/as.scm 76 */
												obj_t BgL_auxz00_2097;

												BgL_auxz00_2097 = CAR(BgL_codez00_396);
												BgL_testz00_2096 = PAIRP(BgL_auxz00_2097);
											}
											if (BgL_testz00_2096)
												{	/* Jas/as.scm 76 */
													bool_t BgL_testz00_2100;

													{	/* Jas/as.scm 76 */
														obj_t BgL_auxz00_2101;

														{	/* Jas/as.scm 76 */
															obj_t BgL_pairz00_1293;

															BgL_pairz00_1293 = BgL_codez00_396;
															BgL_auxz00_2101 = CAR(CAR(BgL_pairz00_1293));
														}
														BgL_testz00_2100 =
															(BgL_auxz00_2101 == CNST_TABLE_REF(((long) 1)));
													}
													if (BgL_testz00_2100)
														{	/* Jas/as.scm 77 */
															bool_t BgL_testz00_2106;

															{	/* Jas/as.scm 77 */
																obj_t BgL_auxz00_2107;

																{	/* Jas/as.scm 77 */
																	obj_t BgL_pairz00_1297;

																	BgL_pairz00_1297 = BgL_codez00_396;
																	BgL_auxz00_2107 =
																		CAR(CDR(CAR(BgL_pairz00_1297)));
																}
																BgL_testz00_2106 =
																	(BgL_auxz00_2107 ==
																	CNST_TABLE_REF(((long) 2)));
															}
															if (BgL_testz00_2106)
																{	/* Jas/as.scm 77 */
																	BgL_testz00_2095 = ((bool_t) 0);
																}
															else
																{	/* Jas/as.scm 77 */
																	BgL_testz00_2095 = ((bool_t) 1);
																}
														}
													else
														{	/* Jas/as.scm 76 */
															BgL_testz00_2095 = ((bool_t) 0);
														}
												}
											else
												{	/* Jas/as.scm 76 */
													BgL_testz00_2095 = ((bool_t) 0);
												}
										}
										if (BgL_testz00_2095)
											{	/* Jas/as.scm 78 */
												obj_t BgL_arg2118z00_401;

												obj_t BgL_arg2119z00_402;

												BgL_arg2118z00_401 = CDR(BgL_codez00_396);
												{	/* Jas/as.scm 79 */
													BgL_methodz00_bglt BgL_arg2125z00_403;

													{	/* Jas/as.scm 79 */
														obj_t BgL_arg2126z00_404;

														{	/* Jas/as.scm 79 */
															obj_t BgL_pairz00_1304;

															BgL_pairz00_1304 = BgL_codez00_396;
															BgL_arg2126z00_404 =
																CAR(CDR(CAR(BgL_pairz00_1304)));
														}
														BgL_namez00_414 = BgL_arg2126z00_404;
														{	/* Jas/as.scm 85 */
															BgL_methodz00_bglt BgL_mz00_416;

															BgL_mz00_416 =
																BGl_declaredzd2methodzd2zzjas_classfilez00
																(BgL_classez00_5, BgL_namez00_414);
															{	/* Jas/as.scm 85 */
																obj_t BgL_stubz00_417;

																{
																	BgL_fieldzd2orzd2methodz00_bglt
																		BgL_auxz00_2118;
																	BgL_auxz00_2118 =
																		(BgL_fieldzd2orzd2methodz00_bglt)
																		(BgL_mz00_416);
																	BgL_stubz00_417 =
																		(((BgL_fieldzd2orzd2methodz00_bglt)
																			CREF(BgL_auxz00_2118))->BgL_namez00);
																}
																{	/* Jas/as.scm 86 */

																	{	/* Jas/as.scm 87 */
																		bool_t BgL_testz00_2121;

																		if (bigloo_strncmp(BgL_stubz00_417,
																				BGl_string3045z00zzjas_asz00,
																				((long) 1)))
																			{	/* Jas/as.scm 87 */
																				BgL_testz00_2121 = ((bool_t) 1);
																			}
																		else
																			{	/* Jas/as.scm 87 */
																				BgL_testz00_2121 =
																					bigloo_strncmp(BgL_stubz00_417,
																					BGl_string3046z00zzjas_asz00,
																					((long) 5));
																			}
																		if (BgL_testz00_2121)
																			{	/* Jas/as.scm 90 */
																				obj_t BgL_ownerz00_419;

																				{	/* Jas/as.scm 90 */
																					obj_t BgL_arg2237z00_446;

																					{
																						BgL_fieldzd2orzd2methodz00_bglt
																							BgL_auxz00_2125;
																						BgL_auxz00_2125 =
																							(BgL_fieldzd2orzd2methodz00_bglt)
																							(BgL_mz00_416);
																						BgL_arg2237z00_446 =
																							(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_2125))->BgL_ownerz00);
																					}
																					{	/* Jas/as.scm 90 */
																						obj_t BgL_res3034z00_1321;

																						{	/* Jas/as.scm 90 */
																							obj_t BgL_symbolz00_1319;

																							BgL_symbolz00_1319 =
																								BgL_arg2237z00_446;
																							{	/* Jas/as.scm 90 */
																								obj_t BgL_arg2063z00_1320;

																								BgL_arg2063z00_1320 =
																									SYMBOL_TO_STRING
																									(BgL_symbolz00_1319);
																								BgL_res3034z00_1321 =
																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																									(BgL_arg2063z00_1320);
																							}
																						}
																						BgL_ownerz00_419 =
																							BgL_res3034z00_1321;
																					}
																				}
																				{	/* Jas/as.scm 90 */
																					obj_t BgL_name2z00_420;

																					{	/* Jas/as.scm 91 */
																						obj_t BgL_res3035z00_1324;

																						{	/* Jas/as.scm 91 */
																							obj_t BgL_symbolz00_1322;

																							BgL_symbolz00_1322 =
																								BgL_namez00_414;
																							{	/* Jas/as.scm 91 */
																								obj_t BgL_arg2063z00_1323;

																								BgL_arg2063z00_1323 =
																									SYMBOL_TO_STRING
																									(BgL_symbolz00_1322);
																								BgL_res3035z00_1324 =
																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																									(BgL_arg2063z00_1323);
																							}
																						}
																						BgL_name2z00_420 =
																							BgL_res3035z00_1324;
																					}
																					{	/* Jas/as.scm 91 */
																						obj_t BgL_nameprocz00_421;

																						BgL_nameprocz00_421 =
																							string_append(c_substring
																							(BgL_name2z00_420, ((long) 0),
																								STRING_LENGTH
																								(BgL_ownerz00_419)),
																							c_substring(BgL_name2z00_420,
																								(((long) 1) +
																									STRING_LENGTH
																									(BgL_ownerz00_419)),
																								STRING_LENGTH
																								(BgL_name2z00_420)));
																						{	/* Jas/as.scm 92 */
																							obj_t BgL_proczd2inzd2codez00_422;

																							{	/* Jas/as.scm 98 */
																								obj_t BgL_arg2178z00_427;

																								{	/* Jas/as.scm 103 */
																									obj_t BgL_arg2199z00_436;

																									{
																										BgL_fieldzd2orzd2methodz00_bglt
																											BgL_auxz00_2139;
																										BgL_auxz00_2139 =
																											(BgL_fieldzd2orzd2methodz00_bglt)
																											(BgL_mz00_416);
																										BgL_arg2199z00_436 =
																											(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_2139))->BgL_namez00);
																									}
																									BgL_arg2178z00_427 =
																										BGl_getzd2procedurezd2codez00zzjas_asz00
																										(BgL_classez00_5,
																										BgL_lz00_6,
																										BgL_arg2199z00_436);
																								}
																								{	/* Jas/as.scm 99 */
																									obj_t
																										BgL_zc3anonymousza32179ze3z83_1920;
																									BgL_zc3anonymousza32179ze3z83_1920
																										=
																										make_fx_procedure
																										(BGl_zc3anonymousza32179ze3z83zzjas_asz00,
																										(int) (((long) 1)),
																										(int) (((long) 1)));
																									PROCEDURE_SET
																										(BgL_zc3anonymousza32179ze3z83_1920,
																										(int) (((long) 0)),
																										BgL_nameprocz00_421);
																									BgL_proczd2inzd2codez00_422 =
																										BGl_filterz00zz__r4_control_features_6_9z00
																										(BgL_zc3anonymousza32179ze3z83_1920,
																										BgL_arg2178z00_427);
																							}}
																							{	/* Jas/as.scm 97 */

																								if (NULLP
																									(BgL_proczd2inzd2codez00_422))
																									{	/* Jas/as.scm 106 */
																										BgL_arg2125z00_403 =
																											BGl_declaredzd2methodzd2zzjas_classfilez00
																											(BgL_classez00_5,
																											BgL_namez00_414);
																									}
																								else
																									{	/* Jas/as.scm 107 */
																										obj_t BgL_arg2159z00_424;

																										{	/* Jas/as.scm 107 */
																											obj_t BgL_pairz00_1346;

																											BgL_pairz00_1346 =
																												CAR
																												(BgL_proczd2inzd2codez00_422);
																											BgL_arg2159z00_424 =
																												CAR(CDR
																												(BgL_pairz00_1346));
																										}
																										BgL_arg2125z00_403 =
																											BGl_declaredzd2methodzd2zzjas_classfilez00
																											(BgL_classez00_5,
																											BgL_arg2159z00_424);
																									}
																							}
																						}
																					}
																				}
																			}
																		else
																			{	/* Jas/as.scm 87 */
																				BgL_arg2125z00_403 =
																					BGl_declaredzd2methodzd2zzjas_classfilez00
																					(BgL_classez00_5, BgL_namez00_414);
																			}
																	}
																}
															}
														}
													}
													BgL_arg2119z00_402 =
														MAKE_PAIR(
														(obj_t) (BgL_arg2125z00_403), BgL_accz00_397);
												}
												{
													obj_t BgL_accz00_2160;

													obj_t BgL_codez00_2159;

													BgL_codez00_2159 = BgL_arg2118z00_401;
													BgL_accz00_2160 = BgL_arg2119z00_402;
													BgL_accz00_397 = BgL_accz00_2160;
													BgL_codez00_396 = BgL_codez00_2159;
													goto BgL_zc3anonymousza32071ze3z83_398;
												}
											}
										else
											{
												obj_t BgL_codez00_2161;

												BgL_codez00_2161 = CDR(BgL_codez00_396);
												BgL_codez00_396 = BgL_codez00_2161;
												goto BgL_zc3anonymousza32071ze3z83_398;
											}
									}
								BgL_methodsz00_351 =
									(((BgL_classfilez00_bglt) CREF(BgL_classez00_5))->
									BgL_methodsz00);
								{
									obj_t BgL_l1950z00_353;

									BgL_l1950z00_353 = BgL_closuresz00_350;
								BgL_zc3anonymousza32029ze3z83_354:
									if (PAIRP(BgL_l1950z00_353))
										{	/* Jas/as.scm 116 */
											{	/* Jas/as.scm 116 */
												obj_t BgL_xz00_356;

												BgL_xz00_356 = CAR(BgL_l1950z00_353);
												BgL_methodsz00_351 =
													bgl_remq_bang(BgL_xz00_356, BgL_methodsz00_351);
											}
											{
												obj_t BgL_l1950z00_2168;

												BgL_l1950z00_2168 = CDR(BgL_l1950z00_353);
												BgL_l1950z00_353 = BgL_l1950z00_2168;
												goto BgL_zc3anonymousza32029ze3z83_354;
											}
										}
									else
										{	/* Jas/as.scm 116 */
											((bool_t) 1);
										}
								}
								{
									obj_t BgL_auxz00_2170;

									BgL_auxz00_2170 =
										bgl_append2(BgL_methodsz00_351, BgL_closuresz00_350);
									return
										((((BgL_classfilez00_bglt) CREF(BgL_classez00_5))->
											BgL_methodsz00) = ((obj_t) BgL_auxz00_2170), BUNSPEC);
								}
							}
						else
							{	/* Jas/as.scm 112 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* get-procedure-code */
	obj_t BGl_getzd2procedurezd2codez00zzjas_asz00(BgL_classfilez00_bglt
		BgL_classez00_1934, obj_t BgL_lz00_361, obj_t BgL_procnamez00_362)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 71 */
		BGl_getzd2procedurezd2codez00zzjas_asz00:
			{

				if (NULLP(BgL_lz00_361))
					{	/* Jas/as.scm 71 */
						return BFALSE;
					}
				else
					{	/* Jas/as.scm 71 */
						if (PAIRP(BgL_lz00_361))
							{	/* Jas/as.scm 71 */
								obj_t BgL_carzd21408zd2_375;

								BgL_carzd21408zd2_375 = CAR(BgL_lz00_361);
								if (PAIRP(BgL_carzd21408zd2_375))
									{	/* Jas/as.scm 71 */
										obj_t BgL_cdrzd21415zd2_377;

										BgL_cdrzd21415zd2_377 = CDR(BgL_carzd21408zd2_375);
										if (
											(CAR(BgL_carzd21408zd2_375) ==
												CNST_TABLE_REF(((long) 3))))
											{	/* Jas/as.scm 71 */
												if (PAIRP(BgL_cdrzd21415zd2_377))
													{	/* Jas/as.scm 71 */
														obj_t BgL_cdrzd21421zd2_380;

														BgL_cdrzd21421zd2_380 = CDR(BgL_cdrzd21415zd2_377);
														if (PAIRP(BgL_cdrzd21421zd2_380))
															{	/* Jas/as.scm 71 */
																obj_t BgL_cdrzd21427zd2_382;

																BgL_cdrzd21427zd2_382 =
																	CDR(BgL_cdrzd21421zd2_380);
																if (PAIRP(BgL_cdrzd21427zd2_382))
																	{	/* Jas/as.scm 71 */
																		obj_t BgL_arg2045z00_384;

																		obj_t BgL_arg2052z00_387;

																		BgL_arg2045z00_384 =
																			CAR(BgL_cdrzd21415zd2_377);
																		BgL_arg2052z00_387 =
																			CDR(BgL_cdrzd21427zd2_382);
																		{	/* Jas/as.scm 71 */
																			BgL_methodz00_bglt BgL_mz00_1277;

																			BgL_mz00_1277 =
																				BGl_declaredzd2methodzd2zzjas_classfilez00
																				(BgL_classez00_1934,
																				BgL_arg2045z00_384);
																			{	/* Jas/as.scm 71 */
																				bool_t BgL_testz00_2196;

																				{	/* Jas/as.scm 71 */
																					obj_t BgL_auxz00_2197;

																					{
																						BgL_fieldzd2orzd2methodz00_bglt
																							BgL_auxz00_2198;
																						BgL_auxz00_2198 =
																							(BgL_fieldzd2orzd2methodz00_bglt)
																							(BgL_mz00_1277);
																						BgL_auxz00_2197 =
																							(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_2198))->BgL_namez00);
																					}
																					BgL_testz00_2196 =
																						BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																						(BgL_auxz00_2197,
																						BgL_procnamez00_362);
																				}
																				if (BgL_testz00_2196)
																					{	/* Jas/as.scm 71 */
																						return BgL_arg2052z00_387;
																					}
																				else
																					{
																						obj_t BgL_lz00_2202;

																						BgL_lz00_2202 = CDR(BgL_lz00_361);
																						BgL_lz00_361 = BgL_lz00_2202;
																						goto
																							BGl_getzd2procedurezd2codez00zzjas_asz00;
																					}
																			}
																		}
																	}
																else
																	{	/* Jas/as.scm 71 */
																	BgL_tagzd21391zd2_371:
																		{
																			obj_t BgL_lz00_2204;

																			BgL_lz00_2204 = CDR(BgL_lz00_361);
																			BgL_lz00_361 = BgL_lz00_2204;
																			goto
																				BGl_getzd2procedurezd2codez00zzjas_asz00;
																		}
																	}
															}
														else
															{	/* Jas/as.scm 71 */
																goto BgL_tagzd21391zd2_371;
															}
													}
												else
													{	/* Jas/as.scm 71 */
														goto BgL_tagzd21391zd2_371;
													}
											}
										else
											{	/* Jas/as.scm 71 */
												goto BgL_tagzd21391zd2_371;
											}
									}
								else
									{	/* Jas/as.scm 71 */
										goto BgL_tagzd21391zd2_371;
									}
							}
						else
							{	/* Jas/as.scm 71 */
								goto BgL_tagzd21391zd2_371;
							}
					}
			}
		}
	}



/* <anonymous:2179> */
	obj_t BGl_zc3anonymousza32179ze3z83zzjas_asz00(obj_t BgL_envz00_1921,
		obj_t BgL_xz00_1923)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 98 */
			{	/* Jas/as.scm 99 */
				obj_t BgL_nameprocz00_1922;

				BgL_nameprocz00_1922 =
					PROCEDURE_REF(BgL_envz00_1921, (int) (((long) 0)));
				{
					obj_t BgL_xz00_428;

					{	/* Jas/as.scm 99 */
						bool_t BgL_auxz00_2208;

						BgL_xz00_428 = BgL_xz00_1923;
						if (PAIRP(BgL_xz00_428))
							{	/* Jas/as.scm 99 */
								if ((CAR(BgL_xz00_428) == CNST_TABLE_REF(((long) 1))))
									{	/* Jas/as.scm 101 */
										obj_t BgL_arg2185z00_432;

										obj_t BgL_arg2187z00_433;

										BgL_arg2185z00_432 = CAR(CDR(BgL_xz00_428));
										{	/* Jas/as.scm 102 */
											obj_t BgL_stringz00_1343;

											BgL_stringz00_1343 = BgL_nameprocz00_1922;
											BgL_arg2187z00_433 =
												string_to_symbol(BSTRING_TO_STRING(BgL_stringz00_1343));
										}
										BgL_auxz00_2208 =
											(BgL_arg2185z00_432 == BgL_arg2187z00_433);
									}
								else
									{	/* Jas/as.scm 100 */
										BgL_auxz00_2208 = ((bool_t) 0);
									}
							}
						else
							{	/* Jas/as.scm 99 */
								BgL_auxz00_2208 = ((bool_t) 0);
							}
						return BBOOL(BgL_auxz00_2208);
					}
				}
			}
		}
	}



/* as */
	obj_t BGl_asz00zzjas_asz00(obj_t BgL_lz00_7)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 123 */
			{
				obj_t BgL_keyz00_451;

				obj_t BgL_thisz00_452;

				obj_t BgL_extendz00_453;

				obj_t BgL_implementsz00_454;

				obj_t BgL_declsz00_455;

				obj_t BgL_infosz00_456;

				if (PAIRP(BgL_lz00_7))
					{	/* Jas/as.scm 124 */
						obj_t BgL_cdrzd21454zd2_461;

						BgL_cdrzd21454zd2_461 = CDR(BgL_lz00_7);
						{	/* Jas/as.scm 124 */
							obj_t BgL_keyz00_462;

							BgL_keyz00_462 = CAR(BgL_lz00_7);
							if (PAIRP(BgL_cdrzd21454zd2_461))
								{	/* Jas/as.scm 124 */
									obj_t BgL_carzd21461zd2_464;

									obj_t BgL_cdrzd21462zd2_465;

									BgL_carzd21461zd2_464 = CAR(BgL_cdrzd21454zd2_461);
									BgL_cdrzd21462zd2_465 = CDR(BgL_cdrzd21454zd2_461);
									if (SYMBOLP(BgL_carzd21461zd2_464))
										{	/* Jas/as.scm 124 */
											if (PAIRP(BgL_cdrzd21462zd2_465))
												{	/* Jas/as.scm 124 */
													obj_t BgL_carzd21469zd2_469;

													obj_t BgL_cdrzd21470zd2_470;

													BgL_carzd21469zd2_469 = CAR(BgL_cdrzd21462zd2_465);
													BgL_cdrzd21470zd2_470 = CDR(BgL_cdrzd21462zd2_465);
													if (SYMBOLP(BgL_carzd21469zd2_469))
														{	/* Jas/as.scm 124 */
															if (PAIRP(BgL_cdrzd21470zd2_470))
																{	/* Jas/as.scm 124 */
																	obj_t BgL_carzd21476zd2_474;

																	obj_t BgL_cdrzd21477zd2_475;

																	BgL_carzd21476zd2_474 =
																		CAR(BgL_cdrzd21470zd2_470);
																	BgL_cdrzd21477zd2_475 =
																		CDR(BgL_cdrzd21470zd2_470);
																	{
																		obj_t BgL_gzd21493zd2_494;

																		obj_t BgL_gzd21480zd2_479;

																		BgL_gzd21480zd2_479 = BgL_carzd21476zd2_474;
																		if (NULLP(BgL_gzd21480zd2_479))
																			{	/* Jas/as.scm 124 */
																				if (PAIRP(BgL_cdrzd21477zd2_475))
																					{	/* Jas/as.scm 124 */
																						obj_t BgL_carzd21484zd2_483;

																						BgL_carzd21484zd2_483 =
																							CAR(BgL_cdrzd21477zd2_475);
																						if (PAIRP(BgL_carzd21484zd2_483))
																							{	/* Jas/as.scm 124 */
																								if (
																									(CAR(BgL_carzd21484zd2_483) ==
																										CNST_TABLE_REF(((long) 5))))
																									{	/* Jas/as.scm 124 */
																										obj_t BgL_arg2252z00_486;

																										obj_t BgL_arg2255z00_487;

																										BgL_arg2252z00_486 =
																											CDR
																											(BgL_carzd21484zd2_483);
																										BgL_arg2255z00_487 =
																											CDR
																											(BgL_cdrzd21477zd2_475);
																										{	/* Jas/as.scm 124 */
																											BgL_classfilez00_bglt
																												BgL_auxz00_2254;
																											BgL_keyz00_451 =
																												BgL_keyz00_462;
																											BgL_thisz00_452 =
																												BgL_carzd21461zd2_464;
																											BgL_extendz00_453 =
																												BgL_carzd21469zd2_469;
																											BgL_implementsz00_454 =
																												BgL_carzd21476zd2_474;
																											BgL_declsz00_455 =
																												BgL_arg2252z00_486;
																											BgL_infosz00_456 =
																												BgL_arg2255z00_487;
																										BgL_tagzd21436zd2_457:
																											{	/* Jas/as.scm 129 */
																												BgL_classfilez00_bglt
																													BgL_classfilez00_511;
																												{	/* Jas/classfile.scm 41 */
																													obj_t
																														BgL_arg2416z00_560;
																													obj_t
																														BgL_arg2431z00_564;
																													BgL_arg2416z00_560 =
																														CNST_TABLE_REF((
																															(long) 4));
																													BgL_arg2431z00_564 =
																														BGl_makezd2hashtablezd2zz__hashz00
																														(BNIL);
																													BgL_classfilez00_511 =
																														BGl_makezd2classfilezd2zzjas_classfilez00
																														(BgL_arg2416z00_560,
																														BNIL, BNIL,
																														BINT(((long) 1)),
																														BgL_arg2431z00_564,
																														BFALSE, BFALSE,
																														BFALSE, BNIL, BNIL,
																														BNIL, BNIL);
																												}
																												if (NULLP
																													(BgL_declsz00_455))
																													{	/* Jas/as.scm 130 */
																														BNIL;
																													}
																												else
																													{	/* Jas/as.scm 130 */
																														obj_t
																															BgL_head1954z00_514;
																														BgL_head1954z00_514
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														{
																															obj_t
																																BgL_l1952z00_516;
																															obj_t
																																BgL_tail1955z00_517;
																															BgL_l1952z00_516 =
																																BgL_declsz00_455;
																															BgL_tail1955z00_517
																																=
																																BgL_head1954z00_514;
																														BgL_zc3anonymousza32299ze3z83_518:
																															if (NULLP
																																(BgL_l1952z00_516))
																																{	/* Jas/as.scm 130 */
																																	CDR
																																		(BgL_head1954z00_514);
																																}
																															else
																																{	/* Jas/as.scm 130 */
																																	obj_t
																																		BgL_newtail1956z00_520;
																																	BgL_newtail1956z00_520
																																		=
																																		MAKE_PAIR
																																		(BGl_aszd2declarezd2zzjas_asz00
																																		(BgL_classfilez00_511,
																																			CAR
																																			(BgL_l1952z00_516)),
																																		BNIL);
																																	SET_CDR
																																		(BgL_tail1955z00_517,
																																		BgL_newtail1956z00_520);
																																	{
																																		obj_t
																																			BgL_tail1955z00_2271;
																																		obj_t
																																			BgL_l1952z00_2269;
																																		BgL_l1952z00_2269
																																			=
																																			CDR
																																			(BgL_l1952z00_516);
																																		BgL_tail1955z00_2271
																																			=
																																			BgL_newtail1956z00_520;
																																		BgL_tail1955z00_517
																																			=
																																			BgL_tail1955z00_2271;
																																		BgL_l1952z00_516
																																			=
																																			BgL_l1952z00_2269;
																																		goto
																																			BgL_zc3anonymousza32299ze3z83_518;
																																	}
																																}
																														}
																													}
																												BGl_setzd2fieldzd2methodzd2typezd2zzjas_asz00
																													(BgL_classfilez00_511);
																												{	/* Jas/as.scm 134 */
																													BgL_classez00_bglt
																														BgL_cthisz00_528;
																													BgL_classez00_bglt
																														BgL_cextendz00_529;
																													BgL_cthisz00_528 =
																														BGl_declaredzd2classzd2zzjas_classfilez00
																														(BgL_classfilez00_511,
																														BgL_thisz00_452);
																													BgL_cextendz00_529 =
																														BGl_declaredzd2classzd2zzjas_classfilez00
																														(BgL_classfilez00_511,
																														BgL_extendz00_453);
																													{	/* Jas/as.scm 136 */
																														obj_t
																															BgL_arg2325z00_530;
																														BgL_arg2325z00_530 =
																															(((BgL_classez00_bglt) CREF(BgL_cthisz00_528))->BgL_flagsz00);
																														((((BgL_classfilez00_bglt) CREF(BgL_classfilez00_511))->BgL_flagsz00) = ((obj_t) BgL_arg2325z00_530), BUNSPEC);
																													}
																													{	/* Jas/as.scm 137 */
																														int
																															BgL_arg2331z00_531;
																														BgL_arg2331z00_531 =
																															BGl_poolzd2classzd2zzjas_classfilez00
																															(BgL_classfilez00_511,
																															BgL_cthisz00_528);
																														{
																															obj_t
																																BgL_auxz00_2278;
																															BgL_auxz00_2278 =
																																BINT
																																(BgL_arg2331z00_531);
																															((((BgL_classfilez00_bglt) CREF(BgL_classfilez00_511))->BgL_mez00) = ((obj_t) BgL_auxz00_2278), BUNSPEC);
																												}}}
																												{	/* Jas/as.scm 138 */
																													int
																														BgL_arg2338z00_532;
																													BgL_arg2338z00_532 =
																														BGl_poolzd2classzd2byzd2namezd2zzjas_classfilez00
																														(BgL_classfilez00_511,
																														BgL_extendz00_453);
																													{
																														obj_t
																															BgL_auxz00_2282;
																														BgL_auxz00_2282 =
																															BINT
																															(BgL_arg2338z00_532);
																														((((BgL_classfilez00_bglt) CREF(BgL_classfilez00_511))->BgL_superz00) = ((obj_t) BgL_auxz00_2282), BUNSPEC);
																												}}
																												{	/* Jas/as.scm 139 */
																													obj_t
																														BgL_arg2344z00_533;
																													if (NULLP
																														(BgL_implementsz00_454))
																														{	/* Jas/as.scm 139 */
																															BgL_arg2344z00_533
																																= BNIL;
																														}
																													else
																														{	/* Jas/as.scm 139 */
																															obj_t
																																BgL_head1959z00_536;
																															{	/* Jas/as.scm 139 */
																																int
																																	BgL_arg2377z00_549;
																																BgL_arg2377z00_549
																																	=
																																	BGl_poolzd2classzd2byzd2namezd2zzjas_classfilez00
																																	(BgL_classfilez00_511,
																																	CAR
																																	(BgL_implementsz00_454));
																																BgL_head1959z00_536
																																	=
																																	MAKE_PAIR(BINT
																																	(BgL_arg2377z00_549),
																																	BNIL);
																															}
																															{	/* Jas/as.scm 139 */
																																obj_t
																																	BgL_g1962z00_537;
																																BgL_g1962z00_537
																																	=
																																	CDR
																																	(BgL_implementsz00_454);
																																{
																																	obj_t
																																		BgL_l1957z00_539;
																																	obj_t
																																		BgL_tail1960z00_540;
																																	BgL_l1957z00_539
																																		=
																																		BgL_g1962z00_537;
																																	BgL_tail1960z00_540
																																		=
																																		BgL_head1959z00_536;
																																BgL_zc3anonymousza32346ze3z83_541:
																																	if (NULLP
																																		(BgL_l1957z00_539))
																																		{	/* Jas/as.scm 139 */
																																			BgL_arg2344z00_533
																																				=
																																				BgL_head1959z00_536;
																																		}
																																	else
																																		{	/* Jas/as.scm 139 */
																																			obj_t
																																				BgL_newtail1961z00_543;
																																			{	/* Jas/as.scm 139 */
																																				int
																																					BgL_arg2357z00_545;
																																				BgL_arg2357z00_545
																																					=
																																					BGl_poolzd2classzd2byzd2namezd2zzjas_classfilez00
																																					(BgL_classfilez00_511,
																																					CAR
																																					(BgL_l1957z00_539));
																																				BgL_newtail1961z00_543
																																					=
																																					MAKE_PAIR
																																					(BINT
																																					(BgL_arg2357z00_545),
																																					BNIL);
																																			}
																																			SET_CDR
																																				(BgL_tail1960z00_540,
																																				BgL_newtail1961z00_543);
																																			{
																																				obj_t
																																					BgL_tail1960z00_2301;
																																				obj_t
																																					BgL_l1957z00_2299;
																																				BgL_l1957z00_2299
																																					=
																																					CDR
																																					(BgL_l1957z00_539);
																																				BgL_tail1960z00_2301
																																					=
																																					BgL_newtail1961z00_543;
																																				BgL_tail1960z00_540
																																					=
																																					BgL_tail1960z00_2301;
																																				BgL_l1957z00_539
																																					=
																																					BgL_l1957z00_2299;
																																				goto
																																					BgL_zc3anonymousza32346ze3z83_541;
																																			}
																																		}
																																}
																															}
																														}
																													((((BgL_classfilez00_bglt) CREF(BgL_classfilez00_511))->BgL_interfacesz00) = ((obj_t) BgL_arg2344z00_533), BUNSPEC);
																												}
																												BGl_scanzd2infoszd2zzjas_asz00
																													(BgL_classfilez00_511,
																													BgL_infosz00_456);
																												if (STRINGP
																													(BGl_za2za2sdefullfileza2za2z00zzjas_asz00))
																													{	/* Jas/as.scm 143 */
																														obj_t
																															BgL_arg2396z00_554;
																														{	/* Jas/as.scm 143 */
																															BgL_attributez00_bglt
																																BgL_arg2403z00_555;
																															obj_t
																																BgL_arg2409z00_556;
																															BgL_arg2403z00_555
																																=
																																BGl_smapz00zzjas_asz00
																																(BgL_classfilez00_511);
																															BgL_arg2409z00_556
																																=
																																(((BgL_classfilez00_bglt) CREF(BgL_classfilez00_511))->BgL_attributesz00);
																															BgL_arg2396z00_554
																																=
																																MAKE_PAIR(
																																(obj_t)
																																(BgL_arg2403z00_555),
																																BgL_arg2409z00_556);
																														}
																														((((BgL_classfilez00_bglt) CREF(BgL_classfilez00_511))->BgL_attributesz00) = ((obj_t) BgL_arg2396z00_554), BUNSPEC);
																													}
																												else
																													{	/* Jas/as.scm 141 */
																														BFALSE;
																													}
																												BgL_auxz00_2254 =
																													BgL_classfilez00_511;
																											}
																											return
																												(obj_t)
																												(BgL_auxz00_2254);
																										}
																									}
																								else
																									{	/* Jas/as.scm 124 */
																									BgL_tagzd21437zd2_458:
																										return
																											BGl_errorz00zz__errorz00
																											(BGl_string3048z00zzjas_asz00,
																											BGl_string3049z00zzjas_asz00,
																											BgL_lz00_7);
																									}
																							}
																						else
																							{	/* Jas/as.scm 124 */
																								goto BgL_tagzd21437zd2_458;
																							}
																					}
																				else
																					{	/* Jas/as.scm 124 */
																						goto BgL_tagzd21437zd2_458;
																					}
																			}
																		else
																			{	/* Jas/as.scm 124 */
																				if (PAIRP(BgL_gzd21480zd2_479))
																					{	/* Jas/as.scm 124 */
																						bool_t BgL_testz00_2315;

																						{	/* Jas/as.scm 124 */
																							obj_t BgL_auxz00_2316;

																							BgL_auxz00_2316 =
																								CAR(BgL_gzd21480zd2_479);
																							BgL_testz00_2315 =
																								SYMBOLP(BgL_auxz00_2316);
																						}
																						if (BgL_testz00_2315)
																							{	/* Jas/as.scm 124 */
																								BgL_gzd21493zd2_494 =
																									CDR(BgL_gzd21480zd2_479);
																							BgL_zc3anonymousza32275ze3z83_495:
																								if (NULLP
																									(BgL_gzd21493zd2_494))
																									{	/* Jas/as.scm 124 */
																										if (PAIRP
																											(BgL_cdrzd21477zd2_475))
																											{	/* Jas/as.scm 124 */
																												obj_t
																													BgL_carzd21497zd2_498;
																												BgL_carzd21497zd2_498 =
																													CAR
																													(BgL_cdrzd21477zd2_475);
																												if (PAIRP
																													(BgL_carzd21497zd2_498))
																													{	/* Jas/as.scm 124 */
																														if (
																															(CAR
																																(BgL_carzd21497zd2_498)
																																==
																																CNST_TABLE_REF((
																																		(long) 5))))
																															{	/* Jas/as.scm 124 */
																																obj_t
																																	BgL_arg2282z00_501;
																																obj_t
																																	BgL_arg2285z00_502;
																																BgL_arg2282z00_501
																																	=
																																	CDR
																																	(BgL_carzd21497zd2_498);
																																BgL_arg2285z00_502
																																	=
																																	CDR
																																	(BgL_cdrzd21477zd2_475);
																																{	/* Jas/as.scm 124 */
																																	BgL_classfilez00_bglt
																																		BgL_auxz00_2332;
																																	{
																																		obj_t
																																			BgL_infosz00_2338;
																																		obj_t
																																			BgL_declsz00_2337;
																																		obj_t
																																			BgL_implementsz00_2336;
																																		obj_t
																																			BgL_extendz00_2335;
																																		obj_t
																																			BgL_thisz00_2334;
																																		obj_t
																																			BgL_keyz00_2333;
																																		BgL_keyz00_2333
																																			=
																																			BgL_keyz00_462;
																																		BgL_thisz00_2334
																																			=
																																			BgL_carzd21461zd2_464;
																																		BgL_extendz00_2335
																																			=
																																			BgL_carzd21469zd2_469;
																																		BgL_implementsz00_2336
																																			=
																																			BgL_carzd21476zd2_474;
																																		BgL_declsz00_2337
																																			=
																																			BgL_arg2282z00_501;
																																		BgL_infosz00_2338
																																			=
																																			BgL_arg2285z00_502;
																																		BgL_infosz00_456
																																			=
																																			BgL_infosz00_2338;
																																		BgL_declsz00_455
																																			=
																																			BgL_declsz00_2337;
																																		BgL_implementsz00_454
																																			=
																																			BgL_implementsz00_2336;
																																		BgL_extendz00_453
																																			=
																																			BgL_extendz00_2335;
																																		BgL_thisz00_452
																																			=
																																			BgL_thisz00_2334;
																																		BgL_keyz00_451
																																			=
																																			BgL_keyz00_2333;
																																		goto
																																			BgL_tagzd21436zd2_457;
																																	}
																																	return
																																		(obj_t)
																																		(BgL_auxz00_2332);
																																}
																															}
																														else
																															{	/* Jas/as.scm 124 */
																																goto
																																	BgL_tagzd21437zd2_458;
																															}
																													}
																												else
																													{	/* Jas/as.scm 124 */
																														goto
																															BgL_tagzd21437zd2_458;
																													}
																											}
																										else
																											{	/* Jas/as.scm 124 */
																												goto
																													BgL_tagzd21437zd2_458;
																											}
																									}
																								else
																									{	/* Jas/as.scm 124 */
																										if (PAIRP
																											(BgL_gzd21493zd2_494))
																											{	/* Jas/as.scm 124 */
																												bool_t BgL_testz00_2342;

																												{	/* Jas/as.scm 124 */
																													obj_t BgL_auxz00_2343;

																													BgL_auxz00_2343 =
																														CAR
																														(BgL_gzd21493zd2_494);
																													BgL_testz00_2342 =
																														SYMBOLP
																														(BgL_auxz00_2343);
																												}
																												if (BgL_testz00_2342)
																													{
																														obj_t
																															BgL_gzd21493zd2_2346;
																														BgL_gzd21493zd2_2346
																															=
																															CDR
																															(BgL_gzd21493zd2_494);
																														BgL_gzd21493zd2_494
																															=
																															BgL_gzd21493zd2_2346;
																														goto
																															BgL_zc3anonymousza32275ze3z83_495;
																													}
																												else
																													{	/* Jas/as.scm 124 */
																														goto
																															BgL_tagzd21437zd2_458;
																													}
																											}
																										else
																											{	/* Jas/as.scm 124 */
																												goto
																													BgL_tagzd21437zd2_458;
																											}
																									}
																							}
																						else
																							{	/* Jas/as.scm 124 */
																								goto BgL_tagzd21437zd2_458;
																							}
																					}
																				else
																					{	/* Jas/as.scm 124 */
																						goto BgL_tagzd21437zd2_458;
																					}
																			}
																	}
																}
															else
																{	/* Jas/as.scm 124 */
																	goto BgL_tagzd21437zd2_458;
																}
														}
													else
														{	/* Jas/as.scm 124 */
															goto BgL_tagzd21437zd2_458;
														}
												}
											else
												{	/* Jas/as.scm 124 */
													goto BgL_tagzd21437zd2_458;
												}
										}
									else
										{	/* Jas/as.scm 124 */
											goto BgL_tagzd21437zd2_458;
										}
								}
							else
								{	/* Jas/as.scm 124 */
									goto BgL_tagzd21437zd2_458;
								}
						}
					}
				else
					{	/* Jas/as.scm 124 */
						goto BgL_tagzd21437zd2_458;
					}
			}
		}
	}



/* set-field-method-type */
	bool_t BGl_setzd2fieldzd2methodzd2typezd2zzjas_asz00(BgL_classfilez00_bglt
		BgL_classfilez00_8)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 147 */
			{	/* Jas/as.scm 148 */
				obj_t BgL_g1965z00_570;

				BgL_g1965z00_570 =
					(((BgL_classfilez00_bglt) CREF(BgL_classfilez00_8))->BgL_globalsz00);
				{
					obj_t BgL_l1963z00_572;

					BgL_l1963z00_572 = BgL_g1965z00_570;
				BgL_zc3anonymousza32447ze3z83_573:
					if (PAIRP(BgL_l1963z00_572))
						{	/* Jas/as.scm 155 */
							{	/* Jas/as.scm 151 */
								obj_t BgL_slotz00_575;

								BgL_slotz00_575 = CAR(BgL_l1963z00_572);
								{	/* Jas/as.scm 151 */
									obj_t BgL_valuez00_576;

									BgL_valuez00_576 =
										BGl_getpropz00zz__r4_symbols_6_4z00(BgL_slotz00_575,
										CNST_TABLE_REF(((long) 0)));
									if (BGl_iszd2azf3z21zz__objectz00(BgL_valuez00_576,
											BGl_fieldzd2orzd2methodz00zzjas_classfilez00))
										{	/* Jas/as.scm 153 */
											BgL_fieldzd2orzd2methodz00_bglt BgL_instance1927z00_578;

											BgL_instance1927z00_578 =
												(BgL_fieldzd2orzd2methodz00_bglt) (BgL_valuez00_576);
											{	/* Jas/as.scm 154 */
												BgL_typez00_bglt BgL_arg2451z00_579;

												{	/* Jas/as.scm 154 */
													obj_t BgL_arg2452z00_580;

													BgL_arg2452z00_580 =
														(((BgL_fieldzd2orzd2methodz00_bglt)
															CREF(BgL_instance1927z00_578))->BgL_usertypez00);
													BgL_arg2451z00_579 =
														BGl_aszd2typezd2zzjas_classfilez00
														(BgL_classfilez00_8, BgL_arg2452z00_580);
												}
												{
													obj_t BgL_auxz00_2360;

													BgL_auxz00_2360 = (obj_t) (BgL_arg2451z00_579);
													((((BgL_fieldzd2orzd2methodz00_bglt)
																CREF(BgL_instance1927z00_578))->BgL_typez00) =
														((obj_t) BgL_auxz00_2360), BUNSPEC);
												}
											}
										}
									else
										{	/* Jas/as.scm 152 */
											BFALSE;
										}
								}
							}
							{
								obj_t BgL_l1963z00_2363;

								BgL_l1963z00_2363 = CDR(BgL_l1963z00_572);
								BgL_l1963z00_572 = BgL_l1963z00_2363;
								goto BgL_zc3anonymousza32447ze3z83_573;
							}
						}
					else
						{	/* Jas/as.scm 155 */
							return ((bool_t) 1);
						}
				}
			}
		}
	}



/* scan-infos */
	obj_t BGl_scanzd2infoszd2zzjas_asz00(BgL_classfilez00_bglt BgL_classfilez00_9,
		obj_t BgL_infosz00_10)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 157 */
		BGl_scanzd2infoszd2zzjas_asz00:
			if (NULLP(BgL_infosz00_10))
				{	/* Jas/as.scm 159 */
					return (obj_t) (BgL_classfilez00_9);
				}
			else
				{	/* Jas/as.scm 160 */
					bool_t BgL_testz00_2368;

					{	/* Jas/as.scm 160 */
						obj_t BgL_auxz00_2369;

						{	/* Jas/as.scm 160 */
							obj_t BgL_pairz00_1434;

							BgL_pairz00_1434 = BgL_infosz00_10;
							BgL_auxz00_2369 = CAR(CAR(BgL_pairz00_1434));
						}
						BgL_testz00_2368 = (BgL_auxz00_2369 == CNST_TABLE_REF(((long) 6)));
					}
					if (BgL_testz00_2368)
						{	/* Jas/as.scm 160 */
							{	/* Jas/as.scm 162 */
								obj_t BgL_arg2459z00_586;

								{	/* Jas/as.scm 162 */
									obj_t BgL_l1966z00_587;

									{	/* Jas/as.scm 162 */
										obj_t BgL_pairz00_1438;

										BgL_pairz00_1438 = BgL_infosz00_10;
										BgL_l1966z00_587 = CDR(CAR(BgL_pairz00_1438));
									}
									if (NULLP(BgL_l1966z00_587))
										{	/* Jas/as.scm 162 */
											BgL_arg2459z00_586 = BNIL;
										}
									else
										{	/* Jas/as.scm 162 */
											obj_t BgL_head1968z00_589;

											BgL_head1968z00_589 = MAKE_PAIR(BNIL, BNIL);
											{
												obj_t BgL_l1966z00_591;

												obj_t BgL_tail1969z00_592;

												BgL_l1966z00_591 = BgL_l1966z00_587;
												BgL_tail1969z00_592 = BgL_head1968z00_589;
											BgL_zc3anonymousza32461ze3z83_593:
												if (NULLP(BgL_l1966z00_591))
													{	/* Jas/as.scm 162 */
														BgL_arg2459z00_586 = CDR(BgL_head1968z00_589);
													}
												else
													{	/* Jas/as.scm 162 */
														obj_t BgL_newtail1970z00_595;

														{	/* Jas/as.scm 162 */
															BgL_fieldz00_bglt BgL_arg2471z00_597;

															{	/* Jas/as.scm 162 */
																obj_t BgL_fz00_599;

																BgL_fz00_599 = CAR(BgL_l1966z00_591);
																{	/* Jas/as.scm 162 */
																	BgL_fieldz00_bglt BgL_fieldz00_1450;

																	BgL_fieldz00_1450 =
																		BGl_declaredzd2fieldzd2zzjas_classfilez00
																		(BgL_classfilez00_9, BgL_fz00_599);
																	BGl_poolzd2fieldzd2zzjas_classfilez00
																		(BgL_classfilez00_9, BgL_fieldz00_1450);
																	BgL_arg2471z00_597 = BgL_fieldz00_1450;
																}
															}
															BgL_newtail1970z00_595 =
																MAKE_PAIR((obj_t) (BgL_arg2471z00_597), BNIL);
														}
														SET_CDR(BgL_tail1969z00_592,
															BgL_newtail1970z00_595);
														{
															obj_t BgL_tail1969z00_2390;

															obj_t BgL_l1966z00_2388;

															BgL_l1966z00_2388 = CDR(BgL_l1966z00_591);
															BgL_tail1969z00_2390 = BgL_newtail1970z00_595;
															BgL_tail1969z00_592 = BgL_tail1969z00_2390;
															BgL_l1966z00_591 = BgL_l1966z00_2388;
															goto BgL_zc3anonymousza32461ze3z83_593;
														}
													}
											}
										}
								}
								((((BgL_classfilez00_bglt) CREF(BgL_classfilez00_9))->
										BgL_fieldsz00) = ((obj_t) BgL_arg2459z00_586), BUNSPEC);
							}
							{
								obj_t BgL_infosz00_2392;

								BgL_infosz00_2392 = CDR(BgL_infosz00_10);
								BgL_infosz00_10 = BgL_infosz00_2392;
								goto BGl_scanzd2infoszd2zzjas_asz00;
							}
						}
					else
						{	/* Jas/as.scm 164 */
							bool_t BgL_testz00_2394;

							{	/* Jas/as.scm 164 */
								obj_t BgL_auxz00_2395;

								{	/* Jas/as.scm 164 */
									obj_t BgL_pairz00_1459;

									BgL_pairz00_1459 = BgL_infosz00_10;
									BgL_auxz00_2395 = CAR(CAR(BgL_pairz00_1459));
								}
								BgL_testz00_2394 =
									(BgL_auxz00_2395 == CNST_TABLE_REF(((long) 7)));
							}
							if (BgL_testz00_2394)
								{	/* Jas/as.scm 164 */
									{	/* Jas/as.scm 166 */
										obj_t BgL_arg2491z00_604;

										{	/* Jas/as.scm 166 */
											BgL_attributez00_bglt BgL_arg2492z00_605;

											obj_t BgL_arg2493z00_606;

											{	/* Jas/as.scm 166 */
												obj_t BgL_arg2503z00_607;

												{	/* Jas/as.scm 166 */
													obj_t BgL_pairz00_1463;

													BgL_pairz00_1463 = BgL_infosz00_10;
													BgL_arg2503z00_607 = CAR(CDR(CAR(BgL_pairz00_1463)));
												}
												BgL_arg2492z00_605 =
													BGl_srcfilez00zzjas_asz00(BgL_classfilez00_9,
													BgL_arg2503z00_607);
											}
											BgL_arg2493z00_606 =
												(((BgL_classfilez00_bglt) CREF(BgL_classfilez00_9))->
												BgL_attributesz00);
											BgL_arg2491z00_604 =
												MAKE_PAIR((obj_t) (BgL_arg2492z00_605),
												BgL_arg2493z00_606);
										}
										((((BgL_classfilez00_bglt) CREF(BgL_classfilez00_9))->
												BgL_attributesz00) =
											((obj_t) BgL_arg2491z00_604), BUNSPEC);
									}
									{
										obj_t BgL_infosz00_2408;

										BgL_infosz00_2408 = CDR(BgL_infosz00_10);
										BgL_infosz00_10 = BgL_infosz00_2408;
										goto BGl_scanzd2infoszd2zzjas_asz00;
									}
								}
							else
								{	/* Jas/as.scm 168 */
									bool_t BgL_testz00_2410;

									{	/* Jas/as.scm 168 */
										obj_t BgL_auxz00_2411;

										{	/* Jas/as.scm 168 */
											obj_t BgL_pairz00_1473;

											BgL_pairz00_1473 = BgL_infosz00_10;
											BgL_auxz00_2411 = CAR(CAR(BgL_pairz00_1473));
										}
										BgL_testz00_2410 =
											(BgL_auxz00_2411 == CNST_TABLE_REF(((long) 8)));
									}
									if (BgL_testz00_2410)
										{	/* Jas/as.scm 168 */
											{	/* Jas/as.scm 169 */
												obj_t BgL_pairz00_1477;

												BgL_pairz00_1477 = BgL_infosz00_10;
												BGl_za2za2sdefileza2za2z00zzjas_asz00 =
													CAR(CDR(CAR(BgL_pairz00_1477)));
											}
											{	/* Jas/as.scm 170 */
												obj_t BgL_pairz00_1483;

												BgL_pairz00_1483 = BgL_infosz00_10;
												BGl_za2za2sdefullfileza2za2z00zzjas_asz00 =
													CAR(CDR(CDR(CAR(BgL_pairz00_1483))));
											}
											{
												obj_t BgL_infosz00_2423;

												BgL_infosz00_2423 = CDR(BgL_infosz00_10);
												BgL_infosz00_10 = BgL_infosz00_2423;
												goto BGl_scanzd2infoszd2zzjas_asz00;
											}
										}
									else
										{	/* Jas/as.scm 168 */
											{	/* Jas/as.scm 174 */
												obj_t BgL_arg2529z00_612;

												{	/* Jas/as.scm 174 */
													obj_t BgL_head1973z00_615;

													BgL_head1973z00_615 = MAKE_PAIR(BNIL, BNIL);
													{
														obj_t BgL_l1971z00_617;

														obj_t BgL_tail1974z00_618;

														BgL_l1971z00_617 = BgL_infosz00_10;
														BgL_tail1974z00_618 = BgL_head1973z00_615;
													BgL_zc3anonymousza32531ze3z83_619:
														if (NULLP(BgL_l1971z00_617))
															{	/* Jas/as.scm 174 */
																BgL_arg2529z00_612 = CDR(BgL_head1973z00_615);
															}
														else
															{	/* Jas/as.scm 174 */
																obj_t BgL_newtail1975z00_621;

																BgL_newtail1975z00_621 =
																	MAKE_PAIR(BGl_aszd2methodzd2zzjas_asz00
																	(BgL_classfilez00_9, CAR(BgL_l1971z00_617)),
																	BNIL);
																SET_CDR(BgL_tail1974z00_618,
																	BgL_newtail1975z00_621);
																{
																	obj_t BgL_tail1974z00_2435;

																	obj_t BgL_l1971z00_2433;

																	BgL_l1971z00_2433 = CDR(BgL_l1971z00_617);
																	BgL_tail1974z00_2435 = BgL_newtail1975z00_621;
																	BgL_tail1974z00_618 = BgL_tail1974z00_2435;
																	BgL_l1971z00_617 = BgL_l1971z00_2433;
																	goto BgL_zc3anonymousza32531ze3z83_619;
																}
															}
													}
												}
												((((BgL_classfilez00_bglt) CREF(BgL_classfilez00_9))->
														BgL_methodsz00) =
													((obj_t) BgL_arg2529z00_612), BUNSPEC);
											}
											if (NULLP(BGl_za2za2allzd2linesza2za2zd2zzjas_asz00))
												{	/* Jas/as.scm 176 */
													BGl_za2jvmzd2charzd2infoza2z00zzjas_asz00 = BFALSE;
												}
											else
												{	/* Jas/as.scm 176 */
													BFALSE;
												}
											if (CBOOL(BGl_za2jvmzd2charzd2infoza2z00zzjas_asz00))
												{	/* Jas/as.scm 177 */
													return
														BGl_poszd2infozd2ze3linezd2infoz12z23zzjas_asz00();
												}
											else
												{	/* Jas/as.scm 177 */
													return BFALSE;
												}
										}
								}
						}
				}
		}
	}



/* srcfile */
	BgL_attributez00_bglt BGl_srcfilez00zzjas_asz00(BgL_classfilez00_bglt
		BgL_classfilez00_11, obj_t BgL_namez00_12)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 182 */
			{	/* Jas/as.scm 184 */
				obj_t BgL_arg2560z00_634;

				int BgL_arg2561z00_635;

				int BgL_arg2563z00_637;

				BgL_arg2560z00_634 = CNST_TABLE_REF(((long) 9));
				BgL_arg2561z00_635 =
					BGl_poolzd2namezd2zzjas_classfilez00(BgL_classfilez00_11,
					BGl_string3050z00zzjas_asz00);
				BgL_arg2563z00_637 =
					BGl_poolzd2namezd2zzjas_classfilez00(BgL_classfilez00_11,
					BgL_namez00_12);
				return BGl_makezd2attributezd2zzjas_classfilez00(BgL_arg2560z00_634,
					BINT(BgL_arg2561z00_635), BINT(((long) 2)), BINT(BgL_arg2563z00_637));
		}}
	}



/* smap */
	BgL_attributez00_bglt BGl_smapz00zzjas_asz00(BgL_classfilez00_bglt
		BgL_classfilez00_13)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 192 */
			{	/* Jas/as.scm 193 */
				obj_t BgL_smapfilez00_638;

				BgL_smapfilez00_638 =
					BGl_stringzd2ze3utf8z31zzjas_libz00(BGl_smapfilez00zzjas_asz00());
				{	/* Jas/as.scm 195 */
					obj_t BgL_arg2564z00_639;

					int BgL_arg2565z00_640;

					long BgL_arg2566z00_641;

					BgL_arg2564z00_639 = CNST_TABLE_REF(((long) 10));
					BgL_arg2565z00_640 =
						BGl_poolzd2namezd2zzjas_classfilez00(BgL_classfilez00_13,
						BGl_string3051z00zzjas_asz00);
					BgL_arg2566z00_641 = STRING_LENGTH(BgL_smapfilez00_638);
					return
						BGl_makezd2attributezd2zzjas_classfilez00(BgL_arg2564z00_639,
						BINT(BgL_arg2565z00_640),
						BINT(BgL_arg2566z00_641), BgL_smapfilez00_638);
				}
			}
		}
	}



/* smapfile */
	obj_t BGl_smapfilez00zzjas_asz00()
	{
		AN_OBJECT;
		{	/* Jas/as.scm 200 */
			{	/* Jas/as.scm 201 */
				obj_t BgL_arg2590z00_648;

				obj_t BgL_arg2629z00_656;

				obj_t BgL_arg2642z00_658;

				if (CBOOL(BGl_za2jvmzd2charzd2infoza2z00zzjas_asz00))
					{	/* Jas/as.scm 207 */
						BgL_arg2590z00_648 = BGl_string3052z00zzjas_asz00;
					}
				else
					{	/* Jas/as.scm 207 */
						BgL_arg2590z00_648 = BGl_string3053z00zzjas_asz00;
					}
				{	/* Jas/as.scm 214 */
					obj_t BgL_arg2672z00_680;

					if (CBOOL(BGl_za2jvmzd2charzd2infoza2z00zzjas_asz00))
						{	/* Jas/as.scm 214 */
							BgL_arg2672z00_680 = BGl_za2za2maxcharza2za2z00zzjas_asz00;
						}
					else
						{	/* Jas/as.scm 214 */
							BgL_arg2672z00_680 = BGl_za2za2maxlineza2za2z00zzjas_asz00;
						}
					{	/* Jas/as.scm 214 */

						BgL_arg2629z00_656 =
							BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
							(long) CINT(BgL_arg2672z00_680), ((long) 10));
				}}
				if (CBOOL(BGl_za2jvmzd2charzd2infoza2z00zzjas_asz00))
					{	/* Jas/as.scm 219 */
						obj_t BgL_arg2679z00_689;

						{	/* Jas/as.scm 225 */
							obj_t BgL_runner2706z00_724;

							{	/* Jas/as.scm 226 */
								obj_t BgL_l1976z00_699;

								BgL_l1976z00_699 = BGl_za2za2poszd2ze3lineza2za2z31zzjas_asz00;
								if (NULLP(BgL_l1976z00_699))
									{	/* Jas/as.scm 226 */
										BgL_runner2706z00_724 = BNIL;
									}
								else
									{	/* Jas/as.scm 226 */
										obj_t BgL_head1978z00_701;

										BgL_head1978z00_701 = MAKE_PAIR(BNIL, BNIL);
										{
											obj_t BgL_l1976z00_703;

											obj_t BgL_tail1979z00_704;

											BgL_l1976z00_703 = BgL_l1976z00_699;
											BgL_tail1979z00_704 = BgL_head1978z00_701;
										BgL_zc3anonymousza32690ze3z83_705:
											if (NULLP(BgL_l1976z00_703))
												{	/* Jas/as.scm 226 */
													BgL_runner2706z00_724 = CDR(BgL_head1978z00_701);
												}
											else
												{	/* Jas/as.scm 226 */
													obj_t BgL_newtail1980z00_707;

													{	/* Jas/as.scm 226 */
														obj_t BgL_arg2693z00_709;

														{	/* Jas/as.scm 226 */
															obj_t BgL_xz00_711;

															BgL_xz00_711 = CAR(BgL_l1976z00_703);
															{	/* Jas/as.scm 227 */
																obj_t BgL_arg2696z00_713;

																obj_t BgL_arg2697z00_714;

																long BgL_arg2698z00_715;

																BgL_arg2696z00_713 = CAR(BgL_xz00_711);
																{	/* Jas/as.scm 228 */
																	obj_t BgL_pairz00_1514;

																	BgL_pairz00_1514 = BgL_xz00_711;
																	BgL_arg2697z00_714 =
																		CAR(CDR(BgL_pairz00_1514));
																}
																{	/* Jas/as.scm 229 */
																	long BgL_auxz00_2475;

																	{	/* Jas/as.scm 229 */
																		long BgL_auxz00_2481;

																		long BgL_auxz00_2476;

																		{	/* Jas/as.scm 229 */
																			obj_t BgL_pairz00_1524;

																			BgL_pairz00_1524 = BgL_xz00_711;
																			{	/* Jas/as.scm 229 */
																				obj_t BgL_pairz00_1527;

																				BgL_pairz00_1527 =
																					CDR(BgL_pairz00_1524);
																				BgL_auxz00_2481 =
																					(long) CINT(CAR(BgL_pairz00_1527));
																		}}
																		{	/* Jas/as.scm 229 */
																			obj_t BgL_pairz00_1518;

																			BgL_pairz00_1518 = BgL_xz00_711;
																			{	/* Jas/as.scm 229 */
																				obj_t BgL_pairz00_1523;

																				BgL_pairz00_1523 =
																					CDR(CDR(BgL_pairz00_1518));
																				BgL_auxz00_2476 =
																					(long) CINT(CAR(BgL_pairz00_1523));
																		}}
																		BgL_auxz00_2475 =
																			(BgL_auxz00_2476 - BgL_auxz00_2481);
																	}
																	BgL_arg2698z00_715 =
																		(((long) 1) + BgL_auxz00_2475);
																}
																{	/* Jas/as.scm 227 */
																	obj_t BgL_list2699z00_716;

																	{	/* Jas/as.scm 227 */
																		obj_t BgL_arg2700z00_717;

																		{	/* Jas/as.scm 227 */
																			obj_t BgL_arg2701z00_718;

																			BgL_arg2701z00_718 =
																				MAKE_PAIR(BINT(BgL_arg2698z00_715),
																				BNIL);
																			BgL_arg2700z00_717 =
																				MAKE_PAIR(BgL_arg2697z00_714,
																				BgL_arg2701z00_718);
																		}
																		BgL_list2699z00_716 =
																			MAKE_PAIR(BgL_arg2696z00_713,
																			BgL_arg2700z00_717);
																	}
																	BgL_arg2693z00_709 =
																		BGl_formatz00zz__r4_output_6_10_3z00
																		(BGl_string3054z00zzjas_asz00,
																		BgL_list2699z00_716);
														}}}
														BgL_newtail1980z00_707 =
															MAKE_PAIR(BgL_arg2693z00_709, BNIL);
													}
													SET_CDR(BgL_tail1979z00_704, BgL_newtail1980z00_707);
													{
														obj_t BgL_tail1979z00_2496;

														obj_t BgL_l1976z00_2494;

														BgL_l1976z00_2494 = CDR(BgL_l1976z00_703);
														BgL_tail1979z00_2496 = BgL_newtail1980z00_707;
														BgL_tail1979z00_704 = BgL_tail1979z00_2496;
														BgL_l1976z00_703 = BgL_l1976z00_2494;
														goto BgL_zc3anonymousza32690ze3z83_705;
													}
												}
										}
									}
							}
							BgL_arg2679z00_689 =
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
								(BgL_runner2706z00_724);
						}
						{	/* Jas/as.scm 219 */
							obj_t BgL_list2680z00_690;

							{	/* Jas/as.scm 219 */
								obj_t BgL_arg2681z00_691;

								{	/* Jas/as.scm 219 */
									obj_t BgL_arg2682z00_692;

									{	/* Jas/as.scm 219 */
										obj_t BgL_arg2683z00_693;

										{	/* Jas/as.scm 219 */
											obj_t BgL_arg2684z00_694;

											{	/* Jas/as.scm 219 */
												obj_t BgL_arg2685z00_695;

												{	/* Jas/as.scm 219 */
													obj_t BgL_arg2686z00_696;

													{	/* Jas/as.scm 219 */
														obj_t BgL_arg2687z00_697;

														{	/* Jas/as.scm 219 */
															obj_t BgL_arg2688z00_698;

															BgL_arg2688z00_698 =
																MAKE_PAIR(BgL_arg2679z00_689, BNIL);
															BgL_arg2687z00_697 =
																MAKE_PAIR(BGl_string3055z00zzjas_asz00,
																BgL_arg2688z00_698);
														}
														BgL_arg2686z00_696 =
															MAKE_PAIR(BGl_string3056z00zzjas_asz00,
															BgL_arg2687z00_697);
													}
													BgL_arg2685z00_695 =
														MAKE_PAIR(BGl_za2za2sdefullfileza2za2z00zzjas_asz00,
														BgL_arg2686z00_696);
												}
												BgL_arg2684z00_694 =
													MAKE_PAIR(BGl_string3056z00zzjas_asz00,
													BgL_arg2685z00_695);
											}
											BgL_arg2683z00_693 =
												MAKE_PAIR(BGl_za2za2sdefileza2za2z00zzjas_asz00,
												BgL_arg2684z00_694);
										}
										BgL_arg2682z00_692 =
											MAKE_PAIR(BGl_string3057z00zzjas_asz00,
											BgL_arg2683z00_693);
									}
									BgL_arg2681z00_691 =
										MAKE_PAIR(BGl_string3058z00zzjas_asz00, BgL_arg2682z00_692);
								}
								BgL_list2680z00_690 =
									MAKE_PAIR(BGl_string3059z00zzjas_asz00, BgL_arg2681z00_691);
							}
							BgL_arg2642z00_658 =
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
								(BgL_list2680z00_690);
						}
					}
				else
					{	/* Jas/as.scm 218 */
						BgL_arg2642z00_658 = BGl_string3060z00zzjas_asz00;
					}
				{	/* Jas/as.scm 201 */
					obj_t BgL_list2649z00_660;

					{	/* Jas/as.scm 201 */
						obj_t BgL_arg2650z00_661;

						{	/* Jas/as.scm 201 */
							obj_t BgL_arg2651z00_662;

							{	/* Jas/as.scm 201 */
								obj_t BgL_arg2652z00_663;

								{	/* Jas/as.scm 201 */
									obj_t BgL_arg2655z00_664;

									{	/* Jas/as.scm 201 */
										obj_t BgL_arg2656z00_665;

										{	/* Jas/as.scm 201 */
											obj_t BgL_arg2657z00_666;

											{	/* Jas/as.scm 201 */
												obj_t BgL_arg2658z00_667;

												{	/* Jas/as.scm 201 */
													obj_t BgL_arg2659z00_668;

													{	/* Jas/as.scm 201 */
														obj_t BgL_arg2660z00_669;

														{	/* Jas/as.scm 201 */
															obj_t BgL_arg2661z00_670;

															{	/* Jas/as.scm 201 */
																obj_t BgL_arg2663z00_671;

																{	/* Jas/as.scm 201 */
																	obj_t BgL_arg2664z00_672;

																	{	/* Jas/as.scm 201 */
																		obj_t BgL_arg2665z00_673;

																		{	/* Jas/as.scm 201 */
																			obj_t BgL_arg2666z00_674;

																			{	/* Jas/as.scm 201 */
																				obj_t BgL_arg2667z00_675;

																				{	/* Jas/as.scm 201 */
																					obj_t BgL_arg2668z00_676;

																					{	/* Jas/as.scm 201 */
																						obj_t BgL_arg2669z00_677;

																						{	/* Jas/as.scm 201 */
																							obj_t BgL_arg2670z00_678;

																							{	/* Jas/as.scm 201 */
																								obj_t BgL_arg2671z00_679;

																								BgL_arg2671z00_679 =
																									MAKE_PAIR
																									(BGl_string3061z00zzjas_asz00,
																									BNIL);
																								BgL_arg2670z00_678 =
																									MAKE_PAIR(BgL_arg2642z00_658,
																									BgL_arg2671z00_679);
																							}
																							BgL_arg2669z00_677 =
																								MAKE_PAIR
																								(BGl_string3062z00zzjas_asz00,
																								BgL_arg2670z00_678);
																						}
																						BgL_arg2668z00_676 =
																							MAKE_PAIR(BgL_arg2629z00_656,
																							BgL_arg2669z00_677);
																					}
																					BgL_arg2667z00_675 =
																						MAKE_PAIR
																						(BGl_string3063z00zzjas_asz00,
																						BgL_arg2668z00_676);
																				}
																				BgL_arg2666z00_674 =
																					MAKE_PAIR
																					(BGl_string3055z00zzjas_asz00,
																					BgL_arg2667z00_675);
																			}
																			BgL_arg2665z00_673 =
																				MAKE_PAIR(BGl_string3056z00zzjas_asz00,
																				BgL_arg2666z00_674);
																		}
																		BgL_arg2664z00_672 =
																			MAKE_PAIR
																			(BGl_za2za2sdefullfileza2za2z00zzjas_asz00,
																			BgL_arg2665z00_673);
																	}
																	BgL_arg2663z00_671 =
																		MAKE_PAIR(BGl_string3056z00zzjas_asz00,
																		BgL_arg2664z00_672);
																}
																BgL_arg2661z00_670 =
																	MAKE_PAIR
																	(BGl_za2za2sdefileza2za2z00zzjas_asz00,
																	BgL_arg2663z00_671);
															}
															BgL_arg2660z00_669 =
																MAKE_PAIR(BGl_string3057z00zzjas_asz00,
																BgL_arg2661z00_670);
														}
														BgL_arg2659z00_668 =
															MAKE_PAIR(BGl_string3058z00zzjas_asz00,
															BgL_arg2660z00_669);
													}
													BgL_arg2658z00_667 =
														MAKE_PAIR(BGl_string3056z00zzjas_asz00,
														BgL_arg2659z00_668);
												}
												BgL_arg2657z00_666 =
													MAKE_PAIR(BgL_arg2590z00_648, BgL_arg2658z00_667);
											}
											BgL_arg2656z00_665 =
												MAKE_PAIR(BGl_string3064z00zzjas_asz00,
												BgL_arg2657z00_666);
										}
										BgL_arg2655z00_664 =
											MAKE_PAIR(BGl_string3056z00zzjas_asz00,
											BgL_arg2656z00_665);
									}
									BgL_arg2652z00_663 =
										MAKE_PAIR(BGl_string3053z00zzjas_asz00, BgL_arg2655z00_664);
								}
								BgL_arg2651z00_662 =
									MAKE_PAIR(BGl_string3056z00zzjas_asz00, BgL_arg2652z00_663);
							}
							BgL_arg2650z00_661 =
								MAKE_PAIR(BGl_za2za2sdefileza2za2z00zzjas_asz00,
								BgL_arg2651z00_662);
						}
						BgL_list2649z00_660 =
							MAKE_PAIR(BGl_string3065z00zzjas_asz00, BgL_arg2650z00_661);
					}
					return
						BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list2649z00_660);
				}
			}
		}
	}



/* as-declare */
	obj_t BGl_aszd2declarezd2zzjas_asz00(BgL_classfilez00_bglt
		BgL_classfilez00_14, obj_t BgL_declz00_15)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 237 */
			{
				obj_t BgL_gnamez00_725;

				obj_t BgL_valuez00_726;

				if (PAIRP(BgL_declz00_15))
					{	/* Jas/as.scm 238 */
						obj_t BgL_cdrzd21514zd2_731;

						BgL_cdrzd21514zd2_731 = CDR(BgL_declz00_15);
						if (PAIRP(BgL_cdrzd21514zd2_731))
							{	/* Jas/as.scm 238 */
								if (NULLP(CDR(BgL_cdrzd21514zd2_731)))
									{	/* Jas/as.scm 238 */
										BgL_gnamez00_725 = CAR(BgL_declz00_15);
										BgL_valuez00_726 = CAR(BgL_cdrzd21514zd2_731);
										{	/* Jas/as.scm 240 */
											obj_t BgL_arg2713z00_737;

											{
												obj_t BgL_classz00_746;

												obj_t BgL_modifiersz00_747;

												obj_t BgL_tretz00_748;

												obj_t BgL_namez00_749;

												obj_t BgL_targsz00_750;

												obj_t BgL_modifiersz00_738;

												obj_t BgL_namez00_739;

												if (PAIRP(BgL_valuez00_726))
													{	/* Jas/as.scm 240 */
														obj_t BgL_cdrzd21534zd2_755;

														BgL_cdrzd21534zd2_755 = CDR(BgL_valuez00_726);
														if (
															(CAR(BgL_valuez00_726) ==
																CNST_TABLE_REF(((long) 12))))
															{	/* Jas/as.scm 240 */
																if (PAIRP(BgL_cdrzd21534zd2_755))
																	{	/* Jas/as.scm 240 */
																		obj_t BgL_cdrzd21538zd2_758;

																		BgL_cdrzd21538zd2_758 =
																			CDR(BgL_cdrzd21534zd2_755);
																		if (PAIRP(BgL_cdrzd21538zd2_758))
																			{	/* Jas/as.scm 240 */
																				obj_t BgL_carzd21541zd2_760;

																				BgL_carzd21541zd2_760 =
																					CAR(BgL_cdrzd21538zd2_758);
																				if (STRINGP(BgL_carzd21541zd2_760))
																					{	/* Jas/as.scm 240 */
																						if (NULLP(CDR
																								(BgL_cdrzd21538zd2_758)))
																							{	/* Jas/as.scm 240 */
																								obj_t BgL_arg2720z00_763;

																								BgL_arg2720z00_763 =
																									CAR(BgL_cdrzd21534zd2_755);
																								{	/* Jas/as.scm 240 */
																									BgL_classez00_bglt
																										BgL_auxz00_2556;
																									BgL_modifiersz00_738 =
																										BgL_arg2720z00_763;
																									BgL_namez00_739 =
																										BgL_carzd21541zd2_760;
																									{	/* Jas/as.scm 243 */
																										obj_t BgL_namezf2zf2_802;

																										BgL_namezf2zf2_802 =
																											BGl_pathnamez00zzjas_asz00
																											(BgL_namez00_739);
																										{	/* Jas/as.scm 245 */
																											obj_t BgL_arg2750z00_803;

																											long BgL_arg2752z00_804;

																											BgL_arg2750z00_803 =
																												string_append_3
																												(BGl_string3066z00zzjas_asz00,
																												BgL_namezf2zf2_802,
																												BGl_string3067z00zzjas_asz00);
																											BgL_arg2752z00_804 =
																												BGl_aszd2classzd2modifiersz00zzjas_asz00
																												(BgL_modifiersz00_738);
																											BgL_auxz00_2556 =
																												BGl_makezd2classezd2zzjas_classfilez00
																												(BgL_arg2750z00_803,
																												BFALSE,
																												BINT
																												(BgL_arg2752z00_804),
																												BgL_namezf2zf2_802,
																												BFALSE);
																									}}
																									BgL_arg2713z00_737 =
																										(obj_t) (BgL_auxz00_2556);
																							}}
																						else
																							{	/* Jas/as.scm 240 */
																							BgL_tagzd21523zd2_752:
																								BgL_arg2713z00_737 =
																									BGl_jaszd2errorzd2zzjas_classfilez00
																									(BgL_classfilez00_14,
																									BGl_string3068z00zzjas_asz00,
																									BgL_declz00_15);
																							}
																					}
																				else
																					{	/* Jas/as.scm 240 */
																						goto BgL_tagzd21523zd2_752;
																					}
																			}
																		else
																			{	/* Jas/as.scm 240 */
																				goto BgL_tagzd21523zd2_752;
																			}
																	}
																else
																	{	/* Jas/as.scm 240 */
																		goto BgL_tagzd21523zd2_752;
																	}
															}
														else
															{	/* Jas/as.scm 240 */
																if (
																	(CAR(BgL_valuez00_726) ==
																		CNST_TABLE_REF(((long) 13))))
																	{	/* Jas/as.scm 240 */
																		if (PAIRP(BgL_cdrzd21534zd2_755))
																			{	/* Jas/as.scm 240 */
																				obj_t BgL_cdrzd21643zd2_768;

																				BgL_cdrzd21643zd2_768 =
																					CDR(BgL_cdrzd21534zd2_755);
																				if (PAIRP(BgL_cdrzd21643zd2_768))
																					{	/* Jas/as.scm 240 */
																						obj_t BgL_cdrzd21649zd2_770;

																						BgL_cdrzd21649zd2_770 =
																							CDR(BgL_cdrzd21643zd2_768);
																						if (PAIRP(BgL_cdrzd21649zd2_770))
																							{	/* Jas/as.scm 240 */
																								obj_t BgL_cdrzd21654zd2_772;

																								BgL_cdrzd21654zd2_772 =
																									CDR(BgL_cdrzd21649zd2_770);
																								if (PAIRP
																									(BgL_cdrzd21654zd2_772))
																									{	/* Jas/as.scm 240 */
																										obj_t BgL_carzd21657zd2_774;

																										BgL_carzd21657zd2_774 =
																											CAR
																											(BgL_cdrzd21654zd2_772);
																										if (STRINGP
																											(BgL_carzd21657zd2_774))
																											{	/* Jas/as.scm 240 */
																												if (NULLP(CDR
																														(BgL_cdrzd21654zd2_772)))
																													{	/* Jas/as.scm 240 */
																														obj_t
																															BgL_arg2729z00_777;
																														obj_t
																															BgL_arg2730z00_778;
																														obj_t
																															BgL_arg2731z00_779;
																														BgL_arg2729z00_777 =
																															CAR
																															(BgL_cdrzd21534zd2_755);
																														BgL_arg2730z00_778 =
																															CAR
																															(BgL_cdrzd21643zd2_768);
																														BgL_arg2731z00_779 =
																															CAR
																															(BgL_cdrzd21649zd2_770);
																														{	/* Jas/as.scm 240 */
																															obj_t
																																BgL_namez00_1574;
																															BgL_namez00_1574 =
																																BgL_carzd21657zd2_774;
																															{	/* Jas/as.scm 240 */
																																long
																																	BgL_arg2753z00_1575;
																																BgL_arg2753z00_1575
																																	=
																																	BGl_aszd2fieldzd2modifiersz00zzjas_asz00
																																	(BgL_arg2730z00_778);
																																BgL_arg2713z00_737
																																	=
																																	(obj_t)
																																	(BGl_makezd2fieldzd2zzjas_classfilez00
																																	(BINT
																																		(BgL_arg2753z00_1575),
																																		BgL_namez00_1574,
																																		BgL_arg2729z00_777,
																																		BgL_arg2731z00_779,
																																		BFALSE,
																																		BFALSE,
																																		BFALSE,
																																		BFALSE,
																																		BNIL));
																													}}}
																												else
																													{	/* Jas/as.scm 240 */
																														goto
																															BgL_tagzd21523zd2_752;
																													}
																											}
																										else
																											{	/* Jas/as.scm 240 */
																												goto
																													BgL_tagzd21523zd2_752;
																											}
																									}
																								else
																									{	/* Jas/as.scm 240 */
																										goto BgL_tagzd21523zd2_752;
																									}
																							}
																						else
																							{	/* Jas/as.scm 240 */
																								goto BgL_tagzd21523zd2_752;
																							}
																					}
																				else
																					{	/* Jas/as.scm 240 */
																						goto BgL_tagzd21523zd2_752;
																					}
																			}
																		else
																			{	/* Jas/as.scm 240 */
																				goto BgL_tagzd21523zd2_752;
																			}
																	}
																else
																	{	/* Jas/as.scm 240 */
																		obj_t BgL_cdrzd21733zd2_781;

																		BgL_cdrzd21733zd2_781 =
																			CDR(BgL_valuez00_726);
																		if (
																			(CAR(BgL_valuez00_726) ==
																				CNST_TABLE_REF(((long) 3))))
																			{	/* Jas/as.scm 240 */
																				if (PAIRP(BgL_cdrzd21733zd2_781))
																					{	/* Jas/as.scm 240 */
																						obj_t BgL_cdrzd21740zd2_784;

																						BgL_cdrzd21740zd2_784 =
																							CDR(BgL_cdrzd21733zd2_781);
																						if (PAIRP(BgL_cdrzd21740zd2_784))
																							{	/* Jas/as.scm 240 */
																								obj_t BgL_cdrzd21747zd2_786;

																								BgL_cdrzd21747zd2_786 =
																									CDR(BgL_cdrzd21740zd2_784);
																								if (PAIRP
																									(BgL_cdrzd21747zd2_786))
																									{	/* Jas/as.scm 240 */
																										obj_t BgL_cdrzd21753zd2_788;

																										BgL_cdrzd21753zd2_788 =
																											CDR
																											(BgL_cdrzd21747zd2_786);
																										if (PAIRP
																											(BgL_cdrzd21753zd2_788))
																											{	/* Jas/as.scm 240 */
																												obj_t
																													BgL_carzd21757zd2_790;
																												BgL_carzd21757zd2_790 =
																													CAR
																													(BgL_cdrzd21753zd2_788);
																												if (STRINGP
																													(BgL_carzd21757zd2_790))
																													{	/* Jas/as.scm 240 */
																														obj_t
																															BgL_arg2739z00_792;
																														obj_t
																															BgL_arg2740z00_793;
																														obj_t
																															BgL_arg2741z00_794;
																														obj_t
																															BgL_arg2742z00_795;
																														BgL_arg2739z00_792 =
																															CAR
																															(BgL_cdrzd21733zd2_781);
																														BgL_arg2740z00_793 =
																															CAR
																															(BgL_cdrzd21740zd2_784);
																														BgL_arg2741z00_794 =
																															CAR
																															(BgL_cdrzd21747zd2_786);
																														BgL_arg2742z00_795 =
																															CDR
																															(BgL_cdrzd21753zd2_788);
																														{	/* Jas/as.scm 240 */
																															BgL_methodz00_bglt
																																BgL_auxz00_2615;
																															BgL_classz00_746 =
																																BgL_arg2739z00_792;
																															BgL_modifiersz00_747
																																=
																																BgL_arg2740z00_793;
																															BgL_tretz00_748 =
																																BgL_arg2741z00_794;
																															BgL_namez00_749 =
																																BgL_carzd21757zd2_790;
																															BgL_targsz00_750 =
																																BgL_arg2742z00_795;
																															{	/* Jas/as.scm 256 */
																																long
																																	BgL_arg2755z00_807;
																																obj_t
																																	BgL_arg2756z00_808;
																																BgL_arg2755z00_807
																																	=
																																	BGl_aszd2methodzd2modifiersz00zzjas_asz00
																																	(BgL_modifiersz00_747);
																																{	/* Jas/as.scm 259 */
																																	obj_t
																																		BgL_arg2759z00_810;
																																	obj_t
																																		BgL_arg2760z00_811;
																																	BgL_arg2759z00_810
																																		=
																																		CNST_TABLE_REF
																																		(((long)
																																			11));
																																	{	/* Jas/as.scm 259 */
																																		obj_t
																																			BgL_arg2761z00_812;
																																		BgL_arg2761z00_812
																																			=
																																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																			(BgL_targsz00_750,
																																			BNIL);
																																		{	/* Jas/as.scm 259 */
																																			obj_t
																																				BgL_list2762z00_813;
																																			BgL_list2762z00_813
																																				=
																																				MAKE_PAIR
																																				(BgL_arg2761z00_812,
																																				BNIL);
																																			BgL_arg2760z00_811
																																				=
																																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																				(BgL_tretz00_748,
																																				BgL_list2762z00_813);
																																	}}
																																	BgL_arg2756z00_808
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2759z00_810,
																																		BgL_arg2760z00_811);
																																}
																																BgL_auxz00_2615
																																	=
																																	BGl_makezd2methodzd2zzjas_classfilez00
																																	(BINT
																																	(BgL_arg2755z00_807),
																																	BgL_namez00_749,
																																	BgL_classz00_746,
																																	BgL_arg2756z00_808,
																																	BFALSE,
																																	BFALSE,
																																	BFALSE,
																																	BFALSE, BNIL);
																															}
																															BgL_arg2713z00_737
																																=
																																(obj_t)
																																(BgL_auxz00_2615);
																													}}
																												else
																													{	/* Jas/as.scm 240 */
																														goto
																															BgL_tagzd21523zd2_752;
																													}
																											}
																										else
																											{	/* Jas/as.scm 240 */
																												goto
																													BgL_tagzd21523zd2_752;
																											}
																									}
																								else
																									{	/* Jas/as.scm 240 */
																										goto BgL_tagzd21523zd2_752;
																									}
																							}
																						else
																							{	/* Jas/as.scm 240 */
																								goto BgL_tagzd21523zd2_752;
																							}
																					}
																				else
																					{	/* Jas/as.scm 240 */
																						goto BgL_tagzd21523zd2_752;
																					}
																			}
																		else
																			{	/* Jas/as.scm 240 */
																				goto BgL_tagzd21523zd2_752;
																			}
																	}
															}
													}
												else
													{	/* Jas/as.scm 240 */
														goto BgL_tagzd21523zd2_752;
													}
											}
											return
												BGl_aszd2assignzd2zzjas_classfilez00
												(BgL_classfilez00_14, BgL_gnamez00_725,
												BgL_arg2713z00_737);
										}
									}
								else
									{	/* Jas/as.scm 238 */
									BgL_tagzd21507zd2_728:
										return
											BGl_jaszd2errorzd2zzjas_classfilez00(BgL_classfilez00_14,
											BGl_string3068z00zzjas_asz00, BgL_declz00_15);
									}
							}
						else
							{	/* Jas/as.scm 238 */
								goto BgL_tagzd21507zd2_728;
							}
					}
				else
					{	/* Jas/as.scm 238 */
						goto BgL_tagzd21507zd2_728;
					}
			}
		}
	}



/* pathname */
	obj_t BGl_pathnamez00zzjas_asz00(obj_t BgL_strz00_16)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 263 */
			{	/* Jas/as.scm 264 */
				long BgL_lenz00_814;

				BgL_lenz00_814 = STRING_LENGTH(BgL_strz00_16);
				{	/* Jas/as.scm 264 */
					obj_t BgL_resz00_815;

					BgL_resz00_815 = make_string(BgL_lenz00_814, ((unsigned char) ' '));
					{	/* Jas/as.scm 265 */

						{	/* Jas/as.scm 266 */
							long BgL_g1940z00_816;

							BgL_g1940z00_816 = (BgL_lenz00_814 - ((long) 1));
							{
								long BgL_iz00_818;

								BgL_iz00_818 = BgL_g1940z00_816;
							BgL_zc3anonymousza32763ze3z83_819:
								if ((BgL_iz00_818 == ((long) -1)))
									{	/* Jas/as.scm 268 */
										return BgL_resz00_815;
									}
								else
									{	/* Jas/as.scm 268 */
										if (
											(STRING_REF(BgL_strz00_16,
													BgL_iz00_818) == ((unsigned char) '.')))
											{	/* Jas/as.scm 270 */
												STRING_SET(BgL_resz00_815, BgL_iz00_818,
													((unsigned char) '/'));
												{
													long BgL_iz00_2638;

													BgL_iz00_2638 = (BgL_iz00_818 - ((long) 1));
													BgL_iz00_818 = BgL_iz00_2638;
													goto BgL_zc3anonymousza32763ze3z83_819;
												}
											}
										else
											{	/* Jas/as.scm 270 */
												{	/* Jas/as.scm 274 */
													unsigned char BgL_auxz00_2640;

													BgL_auxz00_2640 =
														STRING_REF(BgL_strz00_16, BgL_iz00_818);
													STRING_SET(BgL_resz00_815, BgL_iz00_818,
														BgL_auxz00_2640);
												}
												{
													long BgL_iz00_2643;

													BgL_iz00_2643 = (BgL_iz00_818 - ((long) 1));
													BgL_iz00_818 = BgL_iz00_2643;
													goto BgL_zc3anonymousza32763ze3z83_819;
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



/* as-class-modifiers */
	long BGl_aszd2classzd2modifiersz00zzjas_asz00(obj_t BgL_modifiersz00_17)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 278 */
			{	/* Jas/as.scm 279 */
				long BgL_rz00_828;

				BgL_rz00_828 = ((long) 0);
				{
					obj_t BgL_l1981z00_830;

					BgL_l1981z00_830 = BgL_modifiersz00_17;
				BgL_zc3anonymousza32771ze3z83_831:
					if (PAIRP(BgL_l1981z00_830))
						{	/* Jas/as.scm 280 */
							{	/* Jas/as.scm 282 */
								obj_t BgL_namez00_833;

								BgL_namez00_833 = CAR(BgL_l1981z00_830);
								if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(BgL_namez00_833,
										CNST_TABLE_REF(((long) 14))))
									{	/* Jas/as.scm 282 */
										BgL_rz00_828 = (BgL_rz00_828 | ((long) 1));
									}
								else
									{	/* Jas/as.scm 282 */
										if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(BgL_namez00_833,
												CNST_TABLE_REF(((long) 15))))
											{	/* Jas/as.scm 282 */
												BgL_rz00_828 = (BgL_rz00_828 | ((long) 16));
											}
										else
											{	/* Jas/as.scm 282 */
												if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00
													(BgL_namez00_833, CNST_TABLE_REF(((long) 16))))
													{	/* Jas/as.scm 282 */
														BgL_rz00_828 = (BgL_rz00_828 | ((long) 32));
													}
												else
													{	/* Jas/as.scm 282 */
														if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00
															(BgL_namez00_833, CNST_TABLE_REF(((long) 17))))
															{	/* Jas/as.scm 282 */
																BgL_rz00_828 = (BgL_rz00_828 | ((long) 512));
															}
														else
															{	/* Jas/as.scm 282 */
																if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00
																	(BgL_namez00_833,
																		CNST_TABLE_REF(((long) 18))))
																	{	/* Jas/as.scm 282 */
																		BgL_rz00_828 =
																			(BgL_rz00_828 | ((long) 1024));
																	}
																else
																	{	/* Jas/as.scm 282 */
																		BGl_errorz00zz__errorz00
																			(BGl_string3069z00zzjas_asz00,
																			BGl_string3070z00zzjas_asz00,
																			BgL_namez00_833);
																	}
															}
													}
											}
									}
							}
							{
								obj_t BgL_l1981z00_2669;

								BgL_l1981z00_2669 = CDR(BgL_l1981z00_830);
								BgL_l1981z00_830 = BgL_l1981z00_2669;
								goto BgL_zc3anonymousza32771ze3z83_831;
							}
						}
					else
						{	/* Jas/as.scm 280 */
							((bool_t) 1);
						}
				}
				return BgL_rz00_828;
			}
		}
	}



/* as-field-modifiers */
	long BGl_aszd2fieldzd2modifiersz00zzjas_asz00(obj_t BgL_modifiersz00_18)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 292 */
			{	/* Jas/as.scm 293 */
				long BgL_rz00_843;

				BgL_rz00_843 = ((long) 0);
				{
					obj_t BgL_l1983z00_845;

					BgL_l1983z00_845 = BgL_modifiersz00_18;
				BgL_zc3anonymousza32779ze3z83_846:
					if (PAIRP(BgL_l1983z00_845))
						{	/* Jas/as.scm 294 */
							{	/* Jas/as.scm 296 */
								obj_t BgL_namez00_848;

								BgL_namez00_848 = CAR(BgL_l1983z00_845);
								if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(BgL_namez00_848,
										CNST_TABLE_REF(((long) 14))))
									{	/* Jas/as.scm 296 */
										BgL_rz00_843 = (BgL_rz00_843 | ((long) 1));
									}
								else
									{	/* Jas/as.scm 296 */
										if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(BgL_namez00_848,
												CNST_TABLE_REF(((long) 19))))
											{	/* Jas/as.scm 296 */
												BgL_rz00_843 = (BgL_rz00_843 | ((long) 2));
											}
										else
											{	/* Jas/as.scm 296 */
												if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00
													(BgL_namez00_848, CNST_TABLE_REF(((long) 20))))
													{	/* Jas/as.scm 296 */
														BgL_rz00_843 = (BgL_rz00_843 | ((long) 4));
													}
												else
													{	/* Jas/as.scm 296 */
														if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00
															(BgL_namez00_848, CNST_TABLE_REF(((long) 21))))
															{	/* Jas/as.scm 296 */
																BgL_rz00_843 = (BgL_rz00_843 | ((long) 8));
															}
														else
															{	/* Jas/as.scm 296 */
																if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00
																	(BgL_namez00_848,
																		CNST_TABLE_REF(((long) 15))))
																	{	/* Jas/as.scm 296 */
																		BgL_rz00_843 = (BgL_rz00_843 | ((long) 16));
																	}
																else
																	{	/* Jas/as.scm 296 */
																		if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00
																			(BgL_namez00_848,
																				CNST_TABLE_REF(((long) 22))))
																			{	/* Jas/as.scm 296 */
																				BgL_rz00_843 =
																					(BgL_rz00_843 | ((long) 64));
																			}
																		else
																			{	/* Jas/as.scm 296 */
																				if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(BgL_namez00_848, CNST_TABLE_REF(((long) 23))))
																					{	/* Jas/as.scm 296 */
																						BgL_rz00_843 =
																							(BgL_rz00_843 | ((long) 128));
																					}
																				else
																					{	/* Jas/as.scm 296 */
																						BGl_errorz00zz__errorz00
																							(BGl_string3069z00zzjas_asz00,
																							BGl_string3071z00zzjas_asz00,
																							BgL_namez00_848);
																					}
																			}
																	}
															}
													}
											}
									}
							}
							{
								obj_t BgL_l1983z00_2703;

								BgL_l1983z00_2703 = CDR(BgL_l1983z00_845);
								BgL_l1983z00_845 = BgL_l1983z00_2703;
								goto BgL_zc3anonymousza32779ze3z83_846;
							}
						}
					else
						{	/* Jas/as.scm 294 */
							((bool_t) 1);
						}
				}
				return BgL_rz00_843;
			}
		}
	}



/* as-method-modifiers */
	long BGl_aszd2methodzd2modifiersz00zzjas_asz00(obj_t BgL_modifiersz00_19)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 308 */
			{	/* Jas/as.scm 309 */
				long BgL_rz00_860;

				BgL_rz00_860 = ((long) 0);
				{
					obj_t BgL_l1985z00_862;

					BgL_l1985z00_862 = BgL_modifiersz00_19;
				BgL_zc3anonymousza32790ze3z83_863:
					if (PAIRP(BgL_l1985z00_862))
						{	/* Jas/as.scm 310 */
							{	/* Jas/as.scm 312 */
								obj_t BgL_namez00_865;

								BgL_namez00_865 = CAR(BgL_l1985z00_862);
								if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(BgL_namez00_865,
										CNST_TABLE_REF(((long) 14))))
									{	/* Jas/as.scm 312 */
										BgL_rz00_860 = (BgL_rz00_860 | ((long) 1));
									}
								else
									{	/* Jas/as.scm 312 */
										if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(BgL_namez00_865,
												CNST_TABLE_REF(((long) 19))))
											{	/* Jas/as.scm 312 */
												BgL_rz00_860 = (BgL_rz00_860 | ((long) 2));
											}
										else
											{	/* Jas/as.scm 312 */
												if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00
													(BgL_namez00_865, CNST_TABLE_REF(((long) 20))))
													{	/* Jas/as.scm 312 */
														BgL_rz00_860 = (BgL_rz00_860 | ((long) 4));
													}
												else
													{	/* Jas/as.scm 312 */
														if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00
															(BgL_namez00_865, CNST_TABLE_REF(((long) 21))))
															{	/* Jas/as.scm 312 */
																BgL_rz00_860 = (BgL_rz00_860 | ((long) 8));
															}
														else
															{	/* Jas/as.scm 312 */
																if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00
																	(BgL_namez00_865,
																		CNST_TABLE_REF(((long) 15))))
																	{	/* Jas/as.scm 312 */
																		BgL_rz00_860 = (BgL_rz00_860 | ((long) 16));
																	}
																else
																	{	/* Jas/as.scm 312 */
																		if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00
																			(BgL_namez00_865,
																				CNST_TABLE_REF(((long) 24))))
																			{	/* Jas/as.scm 312 */
																				BgL_rz00_860 =
																					(BgL_rz00_860 | ((long) 32));
																			}
																		else
																			{	/* Jas/as.scm 312 */
																				if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(BgL_namez00_865, CNST_TABLE_REF(((long) 25))))
																					{	/* Jas/as.scm 312 */
																						BgL_rz00_860 =
																							(BgL_rz00_860 | ((long) 256));
																					}
																				else
																					{	/* Jas/as.scm 312 */
																						if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(BgL_namez00_865, CNST_TABLE_REF(((long) 18))))
																							{	/* Jas/as.scm 312 */
																								BgL_rz00_860 =
																									(BgL_rz00_860 | ((long)
																										1024));
																							}
																						else
																							{	/* Jas/as.scm 312 */
																								BGl_errorz00zz__errorz00
																									(BGl_string3069z00zzjas_asz00,
																									BGl_string3070z00zzjas_asz00,
																									BgL_namez00_865);
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
								obj_t BgL_l1985z00_2741;

								BgL_l1985z00_2741 = CDR(BgL_l1985z00_862);
								BgL_l1985z00_862 = BgL_l1985z00_2741;
								goto BgL_zc3anonymousza32790ze3z83_863;
							}
						}
					else
						{	/* Jas/as.scm 310 */
							((bool_t) 1);
						}
				}
				return BgL_rz00_860;
			}
		}
	}



/* as-method */
	obj_t BGl_aszd2methodzd2zzjas_asz00(BgL_classfilez00_bglt BgL_classfilez00_22,
		obj_t BgL_declz00_23)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 338 */
			{
				obj_t BgL_gnamez00_879;

				obj_t BgL_paramsz00_880;

				obj_t BgL_localsz00_881;

				obj_t BgL_codez00_882;

				if (PAIRP(BgL_declz00_23))
					{	/* Jas/as.scm 339 */
						obj_t BgL_cdrzd21795zd2_887;

						BgL_cdrzd21795zd2_887 = CDR(BgL_declz00_23);
						if ((CAR(BgL_declz00_23) == CNST_TABLE_REF(((long) 3))))
							{	/* Jas/as.scm 339 */
								if (PAIRP(BgL_cdrzd21795zd2_887))
									{	/* Jas/as.scm 339 */
										obj_t BgL_cdrzd21801zd2_890;

										BgL_cdrzd21801zd2_890 = CDR(BgL_cdrzd21795zd2_887);
										if (PAIRP(BgL_cdrzd21801zd2_890))
											{	/* Jas/as.scm 339 */
												obj_t BgL_cdrzd21807zd2_892;

												BgL_cdrzd21807zd2_892 = CDR(BgL_cdrzd21801zd2_890);
												if (PAIRP(BgL_cdrzd21807zd2_892))
													{	/* Jas/as.scm 339 */
														obj_t BgL_arg2806z00_894;

														obj_t BgL_arg2807z00_895;

														obj_t BgL_arg2808z00_896;

														obj_t BgL_arg2809z00_897;

														BgL_arg2806z00_894 = CAR(BgL_cdrzd21795zd2_887);
														BgL_arg2807z00_895 = CAR(BgL_cdrzd21801zd2_890);
														BgL_arg2808z00_896 = CAR(BgL_cdrzd21807zd2_892);
														BgL_arg2809z00_897 = CDR(BgL_cdrzd21807zd2_892);
														{	/* Jas/as.scm 339 */
															BgL_methodz00_bglt BgL_auxz00_2762;

															BgL_gnamez00_879 = BgL_arg2806z00_894;
															BgL_paramsz00_880 = BgL_arg2807z00_895;
															BgL_localsz00_881 = BgL_arg2808z00_896;
															BgL_codez00_882 = BgL_arg2809z00_897;
															((((BgL_classfilez00_bglt)
																		CREF(BgL_classfilez00_22))->
																	BgL_currentzd2methodzd2) =
																((obj_t) BgL_gnamez00_879), BUNSPEC);
															{	/* Jas/as.scm 342 */
																BgL_methodz00_bglt BgL_mz00_900;

																BgL_mz00_900 =
																	BGl_declaredzd2methodzd2zzjas_classfilez00
																	(BgL_classfilez00_22, BgL_gnamez00_879);
																BGl_poolzd2localzd2methodz00zzjas_classfilez00
																	(BgL_classfilez00_22, BgL_mz00_900);
																{	/* Jas/as.scm 345 */
																	obj_t BgL_arg2812z00_902;

																	{	/* Jas/as.scm 345 */
																		BgL_attributez00_bglt BgL_arg2813z00_903;

																		obj_t BgL_arg2814z00_904;

																		BgL_arg2813z00_903 =
																			BGl_aszd2codezd2zzjas_asz00
																			(BgL_classfilez00_22, BgL_paramsz00_880,
																			BgL_localsz00_881, BgL_codez00_882);
																		{
																			BgL_fieldzd2orzd2methodz00_bglt
																				BgL_auxz00_2767;
																			BgL_auxz00_2767 =
																				(BgL_fieldzd2orzd2methodz00_bglt)
																				(BgL_mz00_900);
																			BgL_arg2814z00_904 =
																				(((BgL_fieldzd2orzd2methodz00_bglt)
																					CREF(BgL_auxz00_2767))->
																				BgL_attributesz00);
																		}
																		BgL_arg2812z00_902 =
																			MAKE_PAIR(
																			(obj_t) (BgL_arg2813z00_903),
																			BgL_arg2814z00_904);
																	}
																	{
																		BgL_fieldzd2orzd2methodz00_bglt
																			BgL_auxz00_2772;
																		BgL_auxz00_2772 =
																			(BgL_fieldzd2orzd2methodz00_bglt)
																			(BgL_mz00_900);
																		((((BgL_fieldzd2orzd2methodz00_bglt)
																					CREF(BgL_auxz00_2772))->
																				BgL_attributesz00) =
																			((obj_t) BgL_arg2812z00_902), BUNSPEC);
																	}
																}
																BgL_auxz00_2762 = BgL_mz00_900;
															}
															return (obj_t) (BgL_auxz00_2762);
														}
													}
												else
													{	/* Jas/as.scm 339 */
													BgL_tagzd21784zd2_884:
														return
															BGl_errorz00zz__errorz00
															(BGl_string3069z00zzjas_asz00,
															BGl_string3072z00zzjas_asz00, BgL_declz00_23);
													}
											}
										else
											{	/* Jas/as.scm 339 */
												goto BgL_tagzd21784zd2_884;
											}
									}
								else
									{	/* Jas/as.scm 339 */
										goto BgL_tagzd21784zd2_884;
									}
							}
						else
							{	/* Jas/as.scm 339 */
								goto BgL_tagzd21784zd2_884;
							}
					}
				else
					{	/* Jas/as.scm 339 */
						goto BgL_tagzd21784zd2_884;
					}
			}
		}
	}



/* as-code */
	BgL_attributez00_bglt BGl_aszd2codezd2zzjas_asz00(BgL_classfilez00_bglt
		BgL_classfilez00_24, obj_t BgL_paramz00_25, obj_t BgL_localsz00_26,
		obj_t BgL_codez00_27)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 350 */
			{	/* Jas/as.scm 351 */
				obj_t BgL_l1z00_905;

				BgL_l1z00_905 =
					PROCEDURE_ENTRY(BGl_resolvezd2opcodeszd2zzjas_opcodez00)
					(BGl_resolvezd2opcodeszd2zzjas_opcodez00,
					(obj_t) (BgL_classfilez00_24), BgL_paramz00_25, BgL_localsz00_26,
					BgL_codez00_27, BEOA);
				{	/* Jas/as.scm 351 */
					obj_t BgL_lpz00_906;

					BgL_lpz00_906 =
						PROCEDURE_ENTRY(BGl_peepz00zzjas_peepz00) (BGl_peepz00zzjas_peepz00,
						(obj_t) (BgL_classfilez00_24), BgL_paramz00_25, BgL_localsz00_26,
						BgL_l1z00_905, BEOA);
					{	/* Jas/as.scm 352 */
						obj_t BgL_lwz00_907;

						BgL_lwz00_907 =
							PROCEDURE_ENTRY(BGl_resolvezd2widezd2zzjas_widez00)
							(BGl_resolvezd2widezd2zzjas_widez00,
							(obj_t) (BgL_classfilez00_24), BgL_lpz00_906, BEOA);
						{	/* Jas/as.scm 353 */
							obj_t BgL_l3z00_908;

							BgL_l3z00_908 =
								PROCEDURE_ENTRY(BGl_resolvezd2labelszd2zzjas_labelsz00)
								(BGl_resolvezd2labelszd2zzjas_labelsz00,
								(obj_t) (BgL_classfilez00_24), BgL_lwz00_907, BEOA);
							{	/* Jas/as.scm 354 */
								obj_t BgL_handlersz00_909;

								BgL_handlersz00_909 =
									BGl_getzd2handlerszd2zzjas_asz00(BgL_l3z00_908);
								{	/* Jas/as.scm 355 */
									obj_t BgL_lines0z00_910;

									BgL_lines0z00_910 =
										BGl_getzd2lineszd2zzjas_asz00(BgL_l3z00_908, ((long) 0));
									{	/* Jas/as.scm 356 */
										obj_t BgL_linesz00_911;

										if (CBOOL(BGl_za2jvmzd2charzd2infoza2z00zzjas_asz00))
											{	/* Jas/as.scm 357 */
												BgL_linesz00_911 = BgL_lines0z00_910;
											}
										else
											{	/* Jas/as.scm 357 */
												BgL_linesz00_911 =
													BGl_linezd2compresszd2zzjas_asz00(BgL_lines0z00_910,
													BINT(((long) -1)));
											}
										{	/* Jas/as.scm 357 */
											obj_t BgL_localvarsz00_912;

											BgL_localvarsz00_912 =
												BGl_getzd2localvarszd2zzjas_asz00(BgL_l3z00_908);
											{	/* Jas/as.scm 360 */
												obj_t BgL_bytecodez00_913;

												BgL_bytecodez00_913 =
													BGl_getzd2bytecodezd2zzjas_asz00(BgL_l3z00_908);
												{	/* Jas/as.scm 361 */

													BGl_za2za2allzd2linesza2za2zd2zzjas_asz00 =
														BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00
														(BGl_za2za2allzd2linesza2za2zd2zzjas_asz00,
														BgL_lines0z00_910);
													{	/* Jas/as.scm 363 */
														long BgL_nz00_914;

														BgL_nz00_914 = bgl_list_length(BgL_bytecodez00_913);
														{	/* Jas/as.scm 364 */
															bool_t BgL_testz00_2799;

															if ((BgL_nz00_914 >= ((long) 8000)))
																{	/* Jas/as.scm 364 */
																	if (CBOOL
																		(BGl_za2jaszd2warningza2zd2zzjas_asz00))
																		{	/* Jas/as.scm 364 */
																			BgL_testz00_2799 = ((bool_t) 0);
																		}
																	else
																		{	/* Jas/as.scm 364 */
																			BgL_testz00_2799 = ((bool_t) 1);
																		}
																}
															else
																{	/* Jas/as.scm 364 */
																	BgL_testz00_2799 = ((bool_t) 0);
																}
															if (BgL_testz00_2799)
																{	/* Jas/as.scm 365 */
																	obj_t BgL_arg2816z00_916;

																	BgL_arg2816z00_916 =
																		(((BgL_classfilez00_bglt)
																			CREF(BgL_classfilez00_24))->
																		BgL_currentzd2methodzd2);
																	{	/* Jas/as.scm 365 */
																		obj_t BgL_list2821z00_920;

																		{	/* Jas/as.scm 365 */
																			obj_t BgL_arg2822z00_921;

																			{	/* Jas/as.scm 365 */
																				obj_t BgL_arg2823z00_922;

																				{	/* Jas/as.scm 365 */
																					obj_t BgL_arg2825z00_923;

																					{	/* Jas/as.scm 365 */
																						obj_t BgL_arg2826z00_924;

																						BgL_arg2826z00_924 =
																							MAKE_PAIR
																							(BGl_string3073z00zzjas_asz00,
																							BNIL);
																						BgL_arg2825z00_923 =
																							MAKE_PAIR
																							(BGl_string3074z00zzjas_asz00,
																							BgL_arg2826z00_924);
																					}
																					BgL_arg2823z00_922 =
																						MAKE_PAIR(BINT(BgL_nz00_914),
																						BgL_arg2825z00_923);
																				}
																				BgL_arg2822z00_921 =
																					MAKE_PAIR
																					(BGl_string3075z00zzjas_asz00,
																					BgL_arg2823z00_922);
																			}
																			BgL_list2821z00_920 =
																				MAKE_PAIR(BgL_arg2816z00_916,
																				BgL_arg2822z00_921);
																		}
																		BGl_warningz00zz__errorz00
																			(BgL_list2821z00_920);
																	}
																}
															else
																{	/* Jas/as.scm 364 */
																	BFALSE;
																}
														}
													}
													if (NULLP(BgL_linesz00_911))
														{	/* Jas/as.scm 369 */
															obj_t BgL_arg2829z00_927;

															{	/* Jas/as.scm 369 */
																obj_t BgL_list2831z00_929;

																{	/* Jas/as.scm 369 */
																	obj_t BgL_arg2833z00_931;

																	{	/* Jas/as.scm 369 */
																		obj_t BgL_arg2835z00_933;

																		BgL_arg2835z00_933 =
																			MAKE_PAIR(BINT(((long) 0)), BNIL);
																		BgL_arg2833z00_931 =
																			MAKE_PAIR(BINT(((long) 0)),
																			BgL_arg2835z00_933);
																	}
																	BgL_list2831z00_929 =
																		MAKE_PAIR(BINT(((long) 0)),
																		BgL_arg2833z00_931);
																}
																BgL_arg2829z00_927 = BgL_list2831z00_929;
															}
															BgL_linesz00_911 =
																MAKE_PAIR(BgL_arg2829z00_927, BNIL);
														}
													else
														{	/* Jas/as.scm 369 */
															BFALSE;
														}
													{	/* Jas/as.scm 371 */
														obj_t BgL_arg2836z00_934;

														int BgL_arg2837z00_935;

														obj_t BgL_arg2838z00_936;

														obj_t BgL_arg2839z00_937;

														BgL_arg2836z00_934 = CNST_TABLE_REF(((long) 26));
														BgL_arg2837z00_935 =
															BGl_poolzd2namezd2zzjas_classfilez00
															(BgL_classfilez00_24,
															BGl_string3076z00zzjas_asz00);
														{	/* Jas/as.scm 373 */
															obj_t BgL_arg2842z00_939;

															{	/* Jas/as.scm 373 */
																long BgL_arg2843z00_940;

																obj_t BgL_arg2844z00_941;

																obj_t BgL_arg2845z00_942;

																obj_t BgL_arg2846z00_943;

																BgL_arg2843z00_940 =
																	bgl_list_length(BgL_bytecodez00_913);
																BgL_arg2844z00_941 =
																	BINT(
																	(((long) 8) *
																		bgl_list_length(BgL_handlersz00_909)));
																if (NULLP(BgL_linesz00_911))
																	{	/* Jas/as.scm 374 */
																		BgL_arg2845z00_942 = BINT(((long) 0));
																	}
																else
																	{	/* Jas/as.scm 374 */
																		obj_t BgL_arg2856z00_952;

																		{	/* Jas/as.scm 374 */
																			long BgL_arg2858z00_954;

																			BgL_arg2858z00_954 =
																				bgl_list_length(BgL_linesz00_911);
																			BgL_arg2856z00_952 =
																				BINT((((long) 4) * BgL_arg2858z00_954));
																		}
																		BgL_arg2845z00_942 =
																			BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT((
																					(long) 8)), BgL_arg2856z00_952);
																	}
																if (NULLP(BgL_localvarsz00_912))
																	{	/* Jas/as.scm 375 */
																		BgL_arg2846z00_943 = BINT(((long) 0));
																	}
																else
																	{	/* Jas/as.scm 375 */
																		BgL_arg2846z00_943 =
																			BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT((
																					(long) 8)),
																			BINT((((long) 10) *
																					bgl_list_length
																					(BgL_localvarsz00_912))));
																	}
																{	/* Jas/as.scm 373 */
																	obj_t BgL_list2847z00_944;

																	{	/* Jas/as.scm 373 */
																		obj_t BgL_arg2848z00_945;

																		{	/* Jas/as.scm 373 */
																			obj_t BgL_arg2849z00_946;

																			{	/* Jas/as.scm 373 */
																				obj_t BgL_arg2850z00_947;

																				BgL_arg2850z00_947 =
																					MAKE_PAIR(BgL_arg2846z00_943, BNIL);
																				BgL_arg2849z00_946 =
																					MAKE_PAIR(BgL_arg2845z00_942,
																					BgL_arg2850z00_947);
																			}
																			BgL_arg2848z00_945 =
																				MAKE_PAIR(BgL_arg2844z00_941,
																				BgL_arg2849z00_946);
																		}
																		BgL_list2847z00_944 =
																			MAKE_PAIR(BINT(BgL_arg2843z00_940),
																			BgL_arg2848z00_945);
																	}
																	BgL_arg2842z00_939 =
																		BGl_zb2zb2zz__r4_numbers_6_5z00
																		(BgL_list2847z00_944);
															}}
															BgL_arg2838z00_936 =
																BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long)
																		12)), BgL_arg2842z00_939);
														}
														{	/* Jas/as.scm 376 */
															obj_t BgL_arg2865z00_960;

															obj_t BgL_arg2866z00_961;

															BgL_arg2865z00_960 =
																BGl_stkzd2analysiszd2zzjas_stackz00(
																(obj_t) (BgL_classfilez00_24), BgL_lpz00_906);
															{	/* Jas/as.scm 380 */
																obj_t BgL_arg2867z00_962;

																{	/* Jas/as.scm 380 */
																	obj_t BgL_arg2871z00_966;

																	obj_t BgL_arg2872z00_967;

																	if (NULLP(BgL_linesz00_911))
																		{	/* Jas/as.scm 380 */
																			BgL_arg2871z00_966 = BNIL;
																		}
																	else
																		{	/* Jas/as.scm 381 */
																			BgL_attributez00_bglt BgL_arg2874z00_969;

																			BgL_arg2874z00_969 =
																				BGl_makezd2linezd2attributez00zzjas_asz00
																				(BgL_classfilez00_24, BgL_linesz00_911);
																			BgL_arg2871z00_966 =
																				MAKE_PAIR((obj_t) (BgL_arg2874z00_969),
																				BNIL);
																		}
																	{	/* Jas/as.scm 382 */
																		obj_t BgL_arg2876z00_971;

																		if (NULLP(BgL_localvarsz00_912))
																			{	/* Jas/as.scm 382 */
																				BgL_arg2876z00_971 = BNIL;
																			}
																		else
																			{	/* Jas/as.scm 383 */
																				BgL_attributez00_bglt
																					BgL_arg2879z00_974;
																				BgL_arg2879z00_974 =
																					BGl_makezd2localvarszd2zzjas_asz00
																					(BgL_classfilez00_24,
																					BgL_localvarsz00_912);
																				BgL_arg2876z00_971 =
																					MAKE_PAIR((obj_t)
																					(BgL_arg2879z00_974), BNIL);
																			}
																		BgL_arg2872z00_967 =
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2876z00_971, BNIL);
																	}
																	BgL_arg2867z00_962 =
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2871z00_966, BgL_arg2872z00_967);
																}
																{	/* Jas/as.scm 376 */
																	obj_t BgL_list2868z00_963;

																	{	/* Jas/as.scm 376 */
																		obj_t BgL_arg2869z00_964;

																		{	/* Jas/as.scm 376 */
																			obj_t BgL_arg2870z00_965;

																			BgL_arg2870z00_965 =
																				MAKE_PAIR(BgL_arg2867z00_962, BNIL);
																			BgL_arg2869z00_964 =
																				MAKE_PAIR(BgL_handlersz00_909,
																				BgL_arg2870z00_965);
																		}
																		BgL_list2868z00_963 =
																			MAKE_PAIR(BgL_bytecodez00_913,
																			BgL_arg2869z00_964);
																	}
																	BgL_arg2866z00_961 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BGl_za2za2lastzd2numberzd2ofzd2localsza2za2zd2zzjas_peepz00,
																		BgL_list2868z00_963);
																}
															}
															BgL_arg2839z00_937 =
																MAKE_PAIR(BgL_arg2865z00_960,
																BgL_arg2866z00_961);
														}
														return
															BGl_makezd2attributezd2zzjas_classfilez00
															(BgL_arg2836z00_934, BINT(BgL_arg2837z00_935),
															BgL_arg2838z00_936, BgL_arg2839z00_937);
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



/* make-line-attribute */
	BgL_attributez00_bglt
		BGl_makezd2linezd2attributez00zzjas_asz00(BgL_classfilez00_bglt
		BgL_classfilez00_28, obj_t BgL_linesz00_29)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 385 */
			{	/* Jas/as.scm 387 */
				obj_t BgL_arg2881z00_976;

				int BgL_arg2882z00_977;

				obj_t BgL_arg2883z00_978;

				obj_t BgL_arg2884z00_979;

				BgL_arg2881z00_976 = CNST_TABLE_REF(((long) 27));
				BgL_arg2882z00_977 =
					BGl_poolzd2namezd2zzjas_classfilez00(BgL_classfilez00_28,
					BGl_string3077z00zzjas_asz00);
				BgL_arg2883z00_978 =
					BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long) 2)),
					BINT((((long) 4) * bgl_list_length(BgL_linesz00_29))));
				{	/* Jas/as.scm 390 */
					obj_t BgL_fun1992z00_984;

					if (CBOOL(BGl_za2jvmzd2charzd2infoza2z00zzjas_asz00))
						{	/* Jas/as.scm 390 */
							BgL_fun1992z00_984 = BGl_proc3078z00zzjas_asz00;
						}
					else
						{	/* Jas/as.scm 390 */
							BgL_fun1992z00_984 = BGl_proc3079z00zzjas_asz00;
						}
					if (NULLP(BgL_linesz00_29))
						{	/* Jas/as.scm 390 */
							BgL_arg2884z00_979 = BNIL;
						}
					else
						{	/* Jas/as.scm 390 */
							obj_t BgL_head1989z00_987;

							BgL_head1989z00_987 = MAKE_PAIR(BNIL, BNIL);
							{
								obj_t BgL_l1987z00_989;

								obj_t BgL_tail1990z00_990;

								BgL_l1987z00_989 = BgL_linesz00_29;
								BgL_tail1990z00_990 = BgL_head1989z00_987;
							BgL_zc3anonymousza32890ze3z83_991:
								if (NULLP(BgL_l1987z00_989))
									{	/* Jas/as.scm 390 */
										BgL_arg2884z00_979 = CDR(BgL_head1989z00_987);
									}
								else
									{	/* Jas/as.scm 390 */
										obj_t BgL_newtail1991z00_993;

										{	/* Jas/as.scm 390 */
											obj_t BgL_arg2893z00_995;

											{	/* Jas/as.scm 390 */
												obj_t BgL_arg2896z00_997;

												BgL_arg2896z00_997 = CAR(BgL_l1987z00_989);
												BgL_arg2893z00_995 =
													PROCEDURE_ENTRY(BgL_fun1992z00_984)
													(BgL_fun1992z00_984, BgL_arg2896z00_997, BEOA);
											}
											BgL_newtail1991z00_993 =
												MAKE_PAIR(BgL_arg2893z00_995, BNIL);
										}
										SET_CDR(BgL_tail1990z00_990, BgL_newtail1991z00_993);
										{
											obj_t BgL_tail1990z00_2894;

											obj_t BgL_l1987z00_2892;

											BgL_l1987z00_2892 = CDR(BgL_l1987z00_989);
											BgL_tail1990z00_2894 = BgL_newtail1991z00_993;
											BgL_tail1990z00_990 = BgL_tail1990z00_2894;
											BgL_l1987z00_989 = BgL_l1987z00_2892;
											goto BgL_zc3anonymousza32890ze3z83_991;
										}
									}
							}
						}
				}
				return
					BGl_makezd2attributezd2zzjas_classfilez00(BgL_arg2881z00_976,
					BINT(BgL_arg2882z00_977), BgL_arg2883z00_978, BgL_arg2884z00_979);
			}
		}
	}



/* <anonymous:2897> */
	obj_t BGl_zc3anonymousza32897ze3z83zzjas_asz00(obj_t BgL_envz00_1926,
		obj_t BgL_xz00_1927)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 391 */
			{
				obj_t BgL_xz00_999;

				BgL_xz00_999 = BgL_xz00_1927;
				{	/* Jas/as.scm 391 */
					obj_t BgL_arg2898z00_1699;

					obj_t BgL_arg2899z00_1700;

					BgL_arg2898z00_1699 = CAR(BgL_xz00_999);
					{	/* Jas/as.scm 391 */
						obj_t BgL_pairz00_1702;

						BgL_pairz00_1702 = BgL_xz00_999;
						BgL_arg2899z00_1700 = CAR(CDR(CDR(BgL_pairz00_1702)));
					}
					return MAKE_PAIR(BgL_arg2898z00_1699, BgL_arg2899z00_1700);
				}
			}
		}
	}



/* <anonymous:2900> */
	obj_t BGl_zc3anonymousza32900ze3z83zzjas_asz00(obj_t BgL_envz00_1928,
		obj_t BgL_xz00_1929)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 392 */
			{
				obj_t BgL_xz00_1003;

				BgL_xz00_1003 = BgL_xz00_1929;
				{	/* Jas/as.scm 392 */
					obj_t BgL_arg2901z00_1708;

					obj_t BgL_arg2902z00_1709;

					BgL_arg2901z00_1708 = CAR(BgL_xz00_1003);
					{	/* Jas/as.scm 392 */
						obj_t BgL_pairz00_1711;

						BgL_pairz00_1711 = BgL_xz00_1003;
						BgL_arg2902z00_1709 = CAR(CDR(BgL_pairz00_1711));
					}
					return MAKE_PAIR(BgL_arg2901z00_1708, BgL_arg2902z00_1709);
				}
			}
		}
	}



/* make-localvars */
	BgL_attributez00_bglt BGl_makezd2localvarszd2zzjas_asz00(BgL_classfilez00_bglt
		BgL_classfilez00_30, obj_t BgL_localvarsz00_31)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 394 */
			{	/* Jas/as.scm 396 */
				obj_t BgL_arg2903z00_1007;

				int BgL_arg2904z00_1008;

				obj_t BgL_arg2905z00_1009;

				BgL_arg2903z00_1007 = CNST_TABLE_REF(((long) 28));
				BgL_arg2904z00_1008 =
					BGl_poolzd2namezd2zzjas_classfilez00(BgL_classfilez00_30,
					BGl_string3080z00zzjas_asz00);
				BgL_arg2905z00_1009 =
					BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long) 2)),
					BINT((((long) 10) * bgl_list_length(BgL_localvarsz00_31))));
				return BGl_makezd2attributezd2zzjas_classfilez00(BgL_arg2903z00_1007,
					BINT(BgL_arg2904z00_1008), BgL_arg2905z00_1009, BgL_localvarsz00_31);
			}
		}
	}



/* get-handlers */
	obj_t BGl_getzd2handlerszd2zzjas_asz00(obj_t BgL_lz00_32)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 402 */
		BGl_getzd2handlerszd2zzjas_asz00:
			if (NULLP(BgL_lz00_32))
				{	/* Jas/as.scm 403 */
					return BgL_lz00_32;
				}
			else
				{	/* Jas/as.scm 404 */
					bool_t BgL_testz00_2917;

					{	/* Jas/as.scm 404 */
						obj_t BgL_auxz00_2918;

						{	/* Jas/as.scm 404 */
							obj_t BgL_pairz00_1727;

							BgL_pairz00_1727 = BgL_lz00_32;
							BgL_auxz00_2918 = CAR(CAR(BgL_pairz00_1727));
						}
						BgL_testz00_2917 = (BgL_auxz00_2918 == BINT(((long) 202)));
					}
					if (BgL_testz00_2917)
						{	/* Jas/as.scm 404 */
							obj_t BgL_arg2912z00_1016;

							obj_t BgL_arg2913z00_1017;

							{	/* Jas/as.scm 404 */
								obj_t BgL_pairz00_1731;

								BgL_pairz00_1731 = BgL_lz00_32;
								BgL_arg2912z00_1016 = CDR(CAR(BgL_pairz00_1731));
							}
							BgL_arg2913z00_1017 =
								BGl_getzd2handlerszd2zzjas_asz00(CDR(BgL_lz00_32));
							return MAKE_PAIR(BgL_arg2912z00_1016, BgL_arg2913z00_1017);
						}
					else
						{
							obj_t BgL_lz00_2928;

							BgL_lz00_2928 = CDR(BgL_lz00_32);
							BgL_lz00_32 = BgL_lz00_2928;
							goto BGl_getzd2handlerszd2zzjas_asz00;
						}
				}
		}
	}



/* get-lines */
	obj_t BGl_getzd2lineszd2zzjas_asz00(obj_t BgL_lz00_33, long BgL_pcz00_34)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 409 */
		BGl_getzd2lineszd2zzjas_asz00:
			if (NULLP(BgL_lz00_33))
				{	/* Jas/as.scm 410 */
					{	/* Jas/as.scm 411 */
						bool_t BgL_testz00_2932;

						if (CBOOL(BGl_za2jvmzd2charzd2infoza2z00zzjas_asz00))
							{	/* Jas/as.scm 411 */
								BgL_testz00_2932 =
									(
									(long) CINT(BGl_za2za2maxcharza2za2z00zzjas_asz00) >
									((long) 65535));
							}
						else
							{	/* Jas/as.scm 411 */
								BgL_testz00_2932 = ((bool_t) 0);
							}
						if (BgL_testz00_2932)
							{	/* Jas/as.scm 411 */
								{	/* Jas/as.scm 412 */
									obj_t BgL_list2920z00_1024;

									{	/* Jas/as.scm 412 */
										obj_t BgL_arg2922z00_1026;

										{	/* Jas/as.scm 412 */
											obj_t BgL_arg2924z00_1028;

											{	/* Jas/as.scm 412 */
												obj_t BgL_arg2925z00_1029;

												{	/* Jas/as.scm 412 */
													obj_t BgL_arg2927z00_1031;

													BgL_arg2927z00_1031 =
														MAKE_PAIR(BGl_string3081z00zzjas_asz00, BNIL);
													BgL_arg2925z00_1029 =
														MAKE_PAIR(BGl_string3082z00zzjas_asz00,
														BgL_arg2927z00_1031);
												}
												BgL_arg2924z00_1028 =
													MAKE_PAIR(BGl_za2za2maxcharza2za2z00zzjas_asz00,
													BgL_arg2925z00_1029);
											}
											BgL_arg2922z00_1026 =
												MAKE_PAIR(BGl_string3083z00zzjas_asz00,
												BgL_arg2924z00_1028);
										}
										BgL_list2920z00_1024 =
											MAKE_PAIR(BGl_string3084z00zzjas_asz00,
											BgL_arg2922z00_1026);
									}
									BGl_warningz00zz__errorz00(BgL_list2920z00_1024);
								}
								BGl_za2jvmzd2charzd2infoza2z00zzjas_asz00 = BFALSE;
							}
						else
							{	/* Jas/as.scm 411 */
								BFALSE;
							}
					}
					return BgL_lz00_33;
				}
			else
				{	/* Jas/as.scm 417 */
					bool_t BgL_testz00_2943;

					{	/* Jas/as.scm 417 */
						obj_t BgL_auxz00_2944;

						{	/* Jas/as.scm 417 */
							obj_t BgL_pairz00_1740;

							BgL_pairz00_1740 = BgL_lz00_33;
							BgL_auxz00_2944 = CAR(CAR(BgL_pairz00_1740));
						}
						BgL_testz00_2943 = (BgL_auxz00_2944 == BINT(((long) 202)));
					}
					if (BgL_testz00_2943)
						{
							obj_t BgL_lz00_2949;

							BgL_lz00_2949 = CDR(BgL_lz00_33);
							BgL_lz00_33 = BgL_lz00_2949;
							goto BGl_getzd2lineszd2zzjas_asz00;
						}
					else
						{	/* Jas/as.scm 418 */
							bool_t BgL_testz00_2951;

							{	/* Jas/as.scm 418 */
								obj_t BgL_auxz00_2952;

								{	/* Jas/as.scm 418 */
									obj_t BgL_pairz00_1745;

									BgL_pairz00_1745 = BgL_lz00_33;
									BgL_auxz00_2952 = CAR(CAR(BgL_pairz00_1745));
								}
								BgL_testz00_2951 = (BgL_auxz00_2952 == BINT(((long) 203)));
							}
							if (BgL_testz00_2951)
								{	/* Jas/as.scm 418 */
									{	/* Jas/as.scm 419 */
										bool_t BgL_testz00_2957;

										{	/* Jas/as.scm 419 */
											long BgL_n1z00_1755;

											long BgL_n2z00_1756;

											{	/* Jas/as.scm 419 */
												obj_t BgL_pairz00_1749;

												BgL_pairz00_1749 = BgL_lz00_33;
												{	/* Jas/as.scm 419 */
													obj_t BgL_pairz00_1754;

													BgL_pairz00_1754 = CDR(CAR(BgL_pairz00_1749));
													BgL_n1z00_1755 = (long) CINT(CAR(BgL_pairz00_1754));
											}}
											BgL_n2z00_1756 =
												(long) CINT(BGl_za2za2maxlineza2za2z00zzjas_asz00);
											BgL_testz00_2957 = (BgL_n1z00_1755 > BgL_n2z00_1756);
										}
										if (BgL_testz00_2957)
											{	/* Jas/as.scm 419 */
												obj_t BgL_pairz00_1757;

												BgL_pairz00_1757 = BgL_lz00_33;
												BGl_za2za2maxlineza2za2z00zzjas_asz00 =
													CAR(CDR(CAR(BgL_pairz00_1757)));
											}
										else
											{	/* Jas/as.scm 419 */
												BFALSE;
											}
									}
									{	/* Jas/as.scm 420 */
										bool_t BgL_testz00_2967;

										{	/* Jas/as.scm 420 */
											long BgL_n1z00_1771;

											long BgL_n2z00_1772;

											{	/* Jas/as.scm 420 */
												obj_t BgL_pairz00_1763;

												BgL_pairz00_1763 = BgL_lz00_33;
												{	/* Jas/as.scm 420 */
													obj_t BgL_pairz00_1770;

													BgL_pairz00_1770 = CDR(CDR(CAR(BgL_pairz00_1763)));
													BgL_n1z00_1771 = (long) CINT(CAR(BgL_pairz00_1770));
											}}
											BgL_n2z00_1772 =
												(long) CINT(BGl_za2za2maxcharza2za2z00zzjas_asz00);
											BgL_testz00_2967 = (BgL_n1z00_1771 > BgL_n2z00_1772);
										}
										if (BgL_testz00_2967)
											{	/* Jas/as.scm 420 */
												obj_t BgL_pairz00_1773;

												BgL_pairz00_1773 = BgL_lz00_33;
												BGl_za2za2maxcharza2za2z00zzjas_asz00 =
													CAR(CDR(CDR(CAR(BgL_pairz00_1773))));
											}
										else
											{	/* Jas/as.scm 420 */
												BFALSE;
											}
									}
									{	/* Jas/as.scm 421 */
										obj_t BgL_arg2935z00_1039;

										obj_t BgL_arg2936z00_1040;

										{	/* Jas/as.scm 421 */
											obj_t BgL_arg2937z00_1041;

											obj_t BgL_arg2938z00_1042;

											{	/* Jas/as.scm 421 */
												obj_t BgL_pairz00_1781;

												BgL_pairz00_1781 = BgL_lz00_33;
												BgL_arg2937z00_1041 = CAR(CDR(CAR(BgL_pairz00_1781)));
											}
											{	/* Jas/as.scm 421 */
												obj_t BgL_pairz00_1787;

												BgL_pairz00_1787 = BgL_lz00_33;
												BgL_arg2938z00_1042 =
													CAR(CDR(CDR(CAR(BgL_pairz00_1787))));
											}
											{	/* Jas/as.scm 421 */
												obj_t BgL_list2939z00_1043;

												{	/* Jas/as.scm 421 */
													obj_t BgL_arg2940z00_1044;

													{	/* Jas/as.scm 421 */
														obj_t BgL_arg2942z00_1045;

														BgL_arg2942z00_1045 =
															MAKE_PAIR(BgL_arg2938z00_1042, BNIL);
														BgL_arg2940z00_1044 =
															MAKE_PAIR(BgL_arg2937z00_1041,
															BgL_arg2942z00_1045);
													}
													BgL_list2939z00_1043 =
														MAKE_PAIR(BINT(BgL_pcz00_34), BgL_arg2940z00_1044);
												}
												BgL_arg2935z00_1039 = BgL_list2939z00_1043;
											}
										}
										BgL_arg2936z00_1040 =
											BGl_getzd2lineszd2zzjas_asz00(CDR(BgL_lz00_33),
											BgL_pcz00_34);
										return MAKE_PAIR(BgL_arg2935z00_1039, BgL_arg2936z00_1040);
									}
								}
							else
								{	/* Jas/as.scm 422 */
									bool_t BgL_testz00_2993;

									{	/* Jas/as.scm 422 */
										obj_t BgL_auxz00_2994;

										{	/* Jas/as.scm 422 */
											obj_t BgL_pairz00_1798;

											BgL_pairz00_1798 = BgL_lz00_33;
											BgL_auxz00_2994 = CAR(CAR(BgL_pairz00_1798));
										}
										BgL_testz00_2993 = (BgL_auxz00_2994 == BINT(((long) 204)));
									}
									if (BgL_testz00_2993)
										{
											obj_t BgL_lz00_2999;

											BgL_lz00_2999 = CDR(BgL_lz00_33);
											BgL_lz00_33 = BgL_lz00_2999;
											goto BGl_getzd2lineszd2zzjas_asz00;
										}
									else
										{	/* Jas/as.scm 423 */
											bool_t BgL_testz00_3001;

											{	/* Jas/as.scm 423 */
												obj_t BgL_auxz00_3002;

												{	/* Jas/as.scm 423 */
													obj_t BgL_pairz00_1803;

													BgL_pairz00_1803 = BgL_lz00_33;
													BgL_auxz00_3002 = CAR(CAR(BgL_pairz00_1803));
												}
												BgL_testz00_3001 =
													(BgL_auxz00_3002 == BINT(((long) 205)));
											}
											if (BgL_testz00_3001)
												{
													obj_t BgL_lz00_3007;

													BgL_lz00_3007 = CDR(BgL_lz00_33);
													BgL_lz00_33 = BgL_lz00_3007;
													goto BGl_getzd2lineszd2zzjas_asz00;
												}
											else
												{
													long BgL_pcz00_3011;

													obj_t BgL_lz00_3009;

													BgL_lz00_3009 = CDR(BgL_lz00_33);
													BgL_pcz00_3011 =
														(BgL_pcz00_34 + bgl_list_length(CAR(BgL_lz00_33)));
													BgL_pcz00_34 = BgL_pcz00_3011;
													BgL_lz00_33 = BgL_lz00_3009;
													goto BGl_getzd2lineszd2zzjas_asz00;
												}
										}
								}
						}
				}
		}
	}



/* line-compress */
	obj_t BGl_linezd2compresszd2zzjas_asz00(obj_t BgL_lz00_35,
		obj_t BgL_linez00_36)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 426 */
		BGl_linezd2compresszd2zzjas_asz00:
			if (NULLP(BgL_lz00_35))
				{	/* Jas/as.scm 428 */
					return BgL_lz00_35;
				}
			else
				{	/* Jas/as.scm 429 */
					bool_t BgL_testz00_3017;

					{	/* Jas/as.scm 429 */
						obj_t BgL_auxz00_3018;

						{	/* Jas/as.scm 429 */
							obj_t BgL_pairz00_1813;

							BgL_pairz00_1813 = BgL_lz00_35;
							BgL_auxz00_3018 = CAR(CDR(CAR(BgL_pairz00_1813)));
						}
						BgL_testz00_3017 = (BgL_auxz00_3018 == BgL_linez00_36);
					}
					if (BgL_testz00_3017)
						{
							obj_t BgL_lz00_3023;

							BgL_lz00_3023 = CDR(BgL_lz00_35);
							BgL_lz00_35 = BgL_lz00_3023;
							goto BGl_linezd2compresszd2zzjas_asz00;
						}
					else
						{	/* Jas/as.scm 431 */
							obj_t BgL_arg2964z00_1066;

							obj_t BgL_arg2965z00_1067;

							BgL_arg2964z00_1066 = CAR(BgL_lz00_35);
							{	/* Jas/as.scm 431 */
								obj_t BgL_arg2966z00_1068;

								obj_t BgL_arg2967z00_1069;

								BgL_arg2966z00_1068 = CDR(BgL_lz00_35);
								{	/* Jas/as.scm 431 */
									obj_t BgL_pairz00_1822;

									BgL_pairz00_1822 = BgL_lz00_35;
									BgL_arg2967z00_1069 = CAR(CDR(CAR(BgL_pairz00_1822)));
								}
								BgL_arg2965z00_1067 =
									BGl_linezd2compresszd2zzjas_asz00(BgL_arg2966z00_1068,
									BgL_arg2967z00_1069);
							}
							return MAKE_PAIR(BgL_arg2964z00_1066, BgL_arg2965z00_1067);
						}
				}
		}
	}



/* pos-info->line-info! */
	obj_t BGl_poszd2infozd2ze3linezd2infoz12z23zzjas_asz00()
	{
		AN_OBJECT;
		{	/* Jas/as.scm 433 */
			{	/* Jas/as.scm 449 */
				obj_t BgL_xz00_1072;

				BgL_xz00_1072 =
					BGl_sortz00zz__r4_vectors_6_8z00
					(BGl_za2za2allzd2linesza2za2zd2zzjas_asz00,
					BGl_proc3085z00zzjas_asz00);
				return (BGl_za2za2poszd2ze3lineza2za2z31zzjas_asz00 =
					BGl_infoz00zzjas_asz00(BgL_xz00_1072, BFALSE, BINT(((long) 0)),
						BINT(((long) 0))), BUNSPEC);
		}}
	}



/* info */
	obj_t BGl_infoz00zzjas_asz00(obj_t BgL_lz00_1080, obj_t BgL_linez00_1081,
		obj_t BgL_miniz00_1082, obj_t BgL_maxiz00_1083)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 448 */
		BGl_infoz00zzjas_asz00:
			if (NULLP(BgL_lz00_1080))
				{	/* Jas/as.scm 436 */
					if (CBOOL(BgL_linez00_1081))
						{	/* Jas/as.scm 438 */
							obj_t BgL_arg2975z00_1086;

							{	/* Jas/as.scm 438 */
								obj_t BgL_list2977z00_1088;

								{	/* Jas/as.scm 438 */
									obj_t BgL_arg2978z00_1089;

									{	/* Jas/as.scm 438 */
										obj_t BgL_arg2979z00_1090;

										BgL_arg2979z00_1090 = MAKE_PAIR(BgL_maxiz00_1083, BNIL);
										BgL_arg2978z00_1089 =
											MAKE_PAIR(BgL_miniz00_1082, BgL_arg2979z00_1090);
									}
									BgL_list2977z00_1088 =
										MAKE_PAIR(BgL_linez00_1081, BgL_arg2978z00_1089);
								}
								BgL_arg2975z00_1086 = BgL_list2977z00_1088;
							}
							return MAKE_PAIR(BgL_arg2975z00_1086, BNIL);
						}
					else
						{	/* Jas/as.scm 437 */
							return BNIL;
						}
				}
			else
				{	/* Jas/as.scm 436 */
					if (CBOOL(BgL_linez00_1081))
						{	/* Jas/as.scm 443 */
							bool_t BgL_testz00_3046;

							{	/* Jas/as.scm 443 */
								long BgL_auxz00_3047;

								{	/* Jas/as.scm 443 */
									obj_t BgL_auxz00_3049;

									{	/* Jas/as.scm 443 */
										obj_t BgL_pairz00_1844;

										BgL_pairz00_1844 = CAR(BgL_lz00_1080);
										BgL_auxz00_3049 = CAR(CDR(BgL_pairz00_1844));
									}
									BgL_auxz00_3047 = (long) CINT(BgL_auxz00_3049);
								}
								BgL_testz00_3046 =
									((long) CINT(BgL_linez00_1081) == BgL_auxz00_3047);
							}
							if (BgL_testz00_3046)
								{	/* Jas/as.scm 444 */
									obj_t BgL_posz00_1092;

									{	/* Jas/as.scm 444 */
										obj_t BgL_pairz00_1851;

										BgL_pairz00_1851 = CAR(BgL_lz00_1080);
										BgL_posz00_1092 = CAR(CDR(CDR(BgL_pairz00_1851)));
									}
									{
										obj_t BgL_maxiz00_3063;

										obj_t BgL_miniz00_3061;

										obj_t BgL_lz00_3059;

										BgL_lz00_3059 = CDR(BgL_lz00_1080);
										BgL_miniz00_3061 =
											BGl_2minz00zz__r4_numbers_6_5z00(BgL_miniz00_1082,
											BgL_posz00_1092);
										BgL_maxiz00_3063 =
											BGl_2maxz00zz__r4_numbers_6_5z00(BgL_maxiz00_1083,
											BgL_posz00_1092);
										BgL_maxiz00_1083 = BgL_maxiz00_3063;
										BgL_miniz00_1082 = BgL_miniz00_3061;
										BgL_lz00_1080 = BgL_lz00_3059;
										goto BGl_infoz00zzjas_asz00;
									}
								}
							else
								{	/* Jas/as.scm 447 */
									obj_t BgL_arg2985z00_1101;

									obj_t BgL_arg2986z00_1102;

									{	/* Jas/as.scm 447 */
										obj_t BgL_list2987z00_1103;

										{	/* Jas/as.scm 447 */
											obj_t BgL_arg2988z00_1104;

											{	/* Jas/as.scm 447 */
												obj_t BgL_arg2989z00_1105;

												BgL_arg2989z00_1105 = MAKE_PAIR(BgL_maxiz00_1083, BNIL);
												BgL_arg2988z00_1104 =
													MAKE_PAIR(BgL_miniz00_1082, BgL_arg2989z00_1105);
											}
											BgL_list2987z00_1103 =
												MAKE_PAIR(BgL_linez00_1081, BgL_arg2988z00_1104);
										}
										BgL_arg2985z00_1101 = BgL_list2987z00_1103;
									}
									BgL_arg2986z00_1102 =
										BGl_infoz00zzjas_asz00(BgL_lz00_1080, BFALSE,
										BINT(((long) 0)), BINT(((long) 0)));
									return MAKE_PAIR(BgL_arg2985z00_1101, BgL_arg2986z00_1102);
								}
						}
					else
						{	/* Jas/as.scm 441 */
							obj_t BgL_posz00_1108;

							{	/* Jas/as.scm 441 */
								obj_t BgL_pairz00_1861;

								BgL_pairz00_1861 = CAR(BgL_lz00_1080);
								BgL_posz00_1108 = CAR(CDR(CDR(BgL_pairz00_1861)));
							}
							{	/* Jas/as.scm 442 */
								obj_t BgL_arg2992z00_1109;

								{	/* Jas/as.scm 442 */
									obj_t BgL_pairz00_1868;

									BgL_pairz00_1868 = CAR(BgL_lz00_1080);
									BgL_arg2992z00_1109 = CAR(CDR(BgL_pairz00_1868));
								}
								{
									obj_t BgL_maxiz00_3081;

									obj_t BgL_miniz00_3080;

									obj_t BgL_linez00_3079;

									BgL_linez00_3079 = BgL_arg2992z00_1109;
									BgL_miniz00_3080 = BgL_posz00_1108;
									BgL_maxiz00_3081 = BgL_posz00_1108;
									BgL_maxiz00_1083 = BgL_maxiz00_3081;
									BgL_miniz00_1082 = BgL_miniz00_3080;
									BgL_linez00_1081 = BgL_linez00_3079;
									goto BGl_infoz00zzjas_asz00;
								}
							}
						}
				}
		}
	}



/* <anonymous:2970> */
	obj_t BGl_zc3anonymousza32970ze3z83zzjas_asz00(obj_t BgL_envz00_1931,
		obj_t BgL_xz00_1932, obj_t BgL_yz00_1933)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 449 */
			{
				obj_t BgL_xz00_1074;

				obj_t BgL_yz00_1075;

				{	/* Jas/as.scm 449 */
					bool_t BgL_auxz00_3082;

					BgL_xz00_1074 = BgL_xz00_1932;
					BgL_yz00_1075 = BgL_yz00_1933;
					{	/* Jas/as.scm 449 */
						long BgL_auxz00_3087;

						long BgL_auxz00_3083;

						{	/* Jas/as.scm 449 */
							obj_t BgL_pairz00_1834;

							BgL_pairz00_1834 = BgL_yz00_1075;
							{	/* Jas/as.scm 449 */
								obj_t BgL_pairz00_1837;

								BgL_pairz00_1837 = CDR(BgL_pairz00_1834);
								BgL_auxz00_3087 = (long) CINT(CAR(BgL_pairz00_1837));
						}}
						{	/* Jas/as.scm 449 */
							obj_t BgL_pairz00_1830;

							BgL_pairz00_1830 = BgL_xz00_1074;
							{	/* Jas/as.scm 449 */
								obj_t BgL_pairz00_1833;

								BgL_pairz00_1833 = CDR(BgL_pairz00_1830);
								BgL_auxz00_3083 = (long) CINT(CAR(BgL_pairz00_1833));
						}}
						BgL_auxz00_3082 = (BgL_auxz00_3083 <= BgL_auxz00_3087);
					}
					return BBOOL(BgL_auxz00_3082);
				}
			}
		}
	}



/* get-localvars */
	obj_t BGl_getzd2localvarszd2zzjas_asz00(obj_t BgL_lz00_37)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 453 */
		BGl_getzd2localvarszd2zzjas_asz00:
			if (NULLP(BgL_lz00_37))
				{	/* Jas/as.scm 455 */
					return BgL_lz00_37;
				}
			else
				{	/* Jas/as.scm 456 */
					bool_t BgL_testz00_3095;

					{	/* Jas/as.scm 456 */
						obj_t BgL_auxz00_3096;

						{	/* Jas/as.scm 456 */
							obj_t BgL_pairz00_1873;

							BgL_pairz00_1873 = BgL_lz00_37;
							BgL_auxz00_3096 = CAR(CAR(BgL_pairz00_1873));
						}
						BgL_testz00_3095 = (BgL_auxz00_3096 == BINT(((long) 205)));
					}
					if (BgL_testz00_3095)
						{	/* Jas/as.scm 457 */
							obj_t BgL_arg2997z00_1115;

							obj_t BgL_arg2998z00_1116;

							{	/* Jas/as.scm 457 */
								obj_t BgL_pairz00_1877;

								BgL_pairz00_1877 = BgL_lz00_37;
								BgL_arg2997z00_1115 = CDR(CAR(BgL_pairz00_1877));
							}
							BgL_arg2998z00_1116 =
								BGl_getzd2localvarszd2zzjas_asz00(CDR(BgL_lz00_37));
							return MAKE_PAIR(BgL_arg2997z00_1115, BgL_arg2998z00_1116);
						}
					else
						{
							obj_t BgL_lz00_3106;

							BgL_lz00_3106 = CDR(BgL_lz00_37);
							BgL_lz00_37 = BgL_lz00_3106;
							goto BGl_getzd2localvarszd2zzjas_asz00;
						}
				}
		}
	}



/* get-bytecode */
	obj_t BGl_getzd2bytecodezd2zzjas_asz00(obj_t BgL_lz00_38)
	{
		AN_OBJECT;
		{	/* Jas/as.scm 461 */
		BGl_getzd2bytecodezd2zzjas_asz00:
			if (NULLP(BgL_lz00_38))
				{	/* Jas/as.scm 462 */
					return BgL_lz00_38;
				}
			else
				{	/* Jas/as.scm 463 */
					bool_t BgL_testz00_3110;

					{	/* Jas/as.scm 463 */
						obj_t BgL_auxz00_3111;

						{	/* Jas/as.scm 463 */
							obj_t BgL_pairz00_1884;

							BgL_pairz00_1884 = BgL_lz00_38;
							BgL_auxz00_3111 = CAR(CAR(BgL_pairz00_1884));
						}
						BgL_testz00_3110 = (BgL_auxz00_3111 == BINT(((long) 202)));
					}
					if (BgL_testz00_3110)
						{
							obj_t BgL_lz00_3116;

							BgL_lz00_3116 = CDR(BgL_lz00_38);
							BgL_lz00_38 = BgL_lz00_3116;
							goto BGl_getzd2bytecodezd2zzjas_asz00;
						}
					else
						{	/* Jas/as.scm 464 */
							bool_t BgL_testz00_3118;

							{	/* Jas/as.scm 464 */
								obj_t BgL_auxz00_3119;

								{	/* Jas/as.scm 464 */
									obj_t BgL_pairz00_1889;

									BgL_pairz00_1889 = BgL_lz00_38;
									BgL_auxz00_3119 = CAR(CAR(BgL_pairz00_1889));
								}
								BgL_testz00_3118 = (BgL_auxz00_3119 == BINT(((long) 203)));
							}
							if (BgL_testz00_3118)
								{
									obj_t BgL_lz00_3124;

									BgL_lz00_3124 = CDR(BgL_lz00_38);
									BgL_lz00_38 = BgL_lz00_3124;
									goto BGl_getzd2bytecodezd2zzjas_asz00;
								}
							else
								{	/* Jas/as.scm 465 */
									bool_t BgL_testz00_3126;

									{	/* Jas/as.scm 465 */
										obj_t BgL_auxz00_3127;

										{	/* Jas/as.scm 465 */
											obj_t BgL_pairz00_1894;

											BgL_pairz00_1894 = BgL_lz00_38;
											BgL_auxz00_3127 = CAR(CAR(BgL_pairz00_1894));
										}
										BgL_testz00_3126 = (BgL_auxz00_3127 == BINT(((long) 204)));
									}
									if (BgL_testz00_3126)
										{
											obj_t BgL_lz00_3132;

											BgL_lz00_3132 = CDR(BgL_lz00_38);
											BgL_lz00_38 = BgL_lz00_3132;
											goto BGl_getzd2bytecodezd2zzjas_asz00;
										}
									else
										{	/* Jas/as.scm 466 */
											bool_t BgL_testz00_3134;

											{	/* Jas/as.scm 466 */
												obj_t BgL_auxz00_3135;

												{	/* Jas/as.scm 466 */
													obj_t BgL_pairz00_1899;

													BgL_pairz00_1899 = BgL_lz00_38;
													BgL_auxz00_3135 = CAR(CAR(BgL_pairz00_1899));
												}
												BgL_testz00_3134 =
													(BgL_auxz00_3135 == BINT(((long) 205)));
											}
											if (BgL_testz00_3134)
												{
													obj_t BgL_lz00_3140;

													BgL_lz00_3140 = CDR(BgL_lz00_38);
													BgL_lz00_38 = BgL_lz00_3140;
													goto BGl_getzd2bytecodezd2zzjas_asz00;
												}
											else
												{	/* Jas/as.scm 466 */
													return
														bgl_append2(CAR(BgL_lz00_38),
														BGl_getzd2bytecodezd2zzjas_asz00(CDR(BgL_lz00_38)));
												}
										}
								}
						}
				}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzjas_asz00()
	{
		AN_OBJECT;
		{	/* Jas/as.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzjas_asz00()
	{
		AN_OBJECT;
		{	/* Jas/as.scm 1 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzjas_asz00()
	{
		AN_OBJECT;
		{	/* Jas/as.scm 1 */
			BGl_modulezd2initializa7ationz75zzjas_libz00(((long) 125143848),
				BSTRING_TO_STRING(BGl_string3086z00zzjas_asz00));
			BGl_modulezd2initializa7ationz75zzjas_classfilez00(((long) 324206891),
				BSTRING_TO_STRING(BGl_string3086z00zzjas_asz00));
			BGl_modulezd2initializa7ationz75zzjas_producez00(((long) 298447731),
				BSTRING_TO_STRING(BGl_string3086z00zzjas_asz00));
			BGl_modulezd2initializa7ationz75zzjas_profilez00(((long) 333982142),
				BSTRING_TO_STRING(BGl_string3086z00zzjas_asz00));
			BGl_modulezd2initializa7ationz75zzjas_opcodez00(((long) 20598055),
				BSTRING_TO_STRING(BGl_string3086z00zzjas_asz00));
			BGl_modulezd2initializa7ationz75zzjas_peepz00(((long) 442782109),
				BSTRING_TO_STRING(BGl_string3086z00zzjas_asz00));
			BGl_modulezd2initializa7ationz75zzjas_widez00(((long) 263038994),
				BSTRING_TO_STRING(BGl_string3086z00zzjas_asz00));
			BGl_modulezd2initializa7ationz75zzjas_labelsz00(((long) 529891230),
				BSTRING_TO_STRING(BGl_string3086z00zzjas_asz00));
			return
				BGl_modulezd2initializa7ationz75zzjas_stackz00(((long) 200211980),
				BSTRING_TO_STRING(BGl_string3086z00zzjas_asz00));
		}
	}

#ifdef __cplusplus
}
#endif
