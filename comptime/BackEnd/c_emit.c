/*===========================================================================*/
/*   (BackEnd/c_emit.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent BackEnd/c_emit.scm)*/
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


	BGL_EXPORTED_DECL obj_t BGl_stopzd2emissionz12zc0zzbackend_c_emitz00();
	static obj_t BGl_emitzd2licensezd2zzbackend_c_emitz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_emitzd2atomzd2valuez00zzbackend_c_emitz00(obj_t);
	extern obj_t BGl_za2elongza2z00zztype_cachez00;
	BGL_EXPORTED_DECL obj_t BGl_startzd2emissionz12zc0zzbackend_c_emitz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_emitzd2commentzd2zzbackend_c_emitz00(obj_t,
		unsigned char);
	extern obj_t BGl_za2bigloozd2nameza2zd2zzengine_paramz00;
	static obj_t BGl_cnstzd2initzd2zzbackend_c_emitz00();
	BGL_EXPORTED_DECL obj_t
		BGl_emitzd2dlopenzd2initz00zzbackend_c_emitz00(BgL_globalz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcgen_emitzd2copzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcgen_copz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_licensez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_configurez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzbackend_c_emitz00();
	BGL_IMPORT obj_t bgl_close_output_port(obj_t);
	static obj_t
		BGl__emitzd2garbagezd2collectorzd2selectionzd2zzbackend_c_emitz00(obj_t);
	extern obj_t BGl_za2additionalzd2includezd2foreignza2z00zzengine_paramz00;
	BGL_IMPORT obj_t make_string(long, unsigned char);
	extern obj_t BGl_za2garbagezd2collectorza2zd2zzengine_paramz00;
	extern obj_t BGl_za2longza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_za2boolza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t string_to_bstring(char *);
	extern obj_t BGl_za2userzd2heapzd2siza7eza2za7zzengine_paramz00;
	extern obj_t BGl_za2bigloozd2authorza2zd2zzengine_paramz00;
	extern obj_t BGl_za2destza2z00zzengine_paramz00;
	extern obj_t BGl_za2bigloozd2dateza2zd2zzengine_paramz00;
	extern obj_t BGl_za2passza2z00zzengine_paramz00;
	static obj_t BGl_loopz00zzbackend_c_emitz00(BGL_LONGLONG_T, obj_t, long,
		BGL_LONGLONG_T, BGL_LONGLONG_T);
	static long BGl_za2maxzd2colza2zd2zzbackend_c_emitz00;
	static obj_t BGl__emitzd2debugzd2activationz00zzbackend_c_emitz00(obj_t);
	static obj_t BGl__emitzd2dlopenzd2initz00zzbackend_c_emitz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_emitzd2headerzd2zzbackend_c_emitz00();
	BGL_EXPORTED_DECL obj_t BGl_untrigraphz00zzbackend_c_emitz00(obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl__stopzd2emissionz12zc0zzbackend_c_emitz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_llongzd2ze3czd2isoze3zzbackend_c_emitz00(BGL_LONGLONG_T);
	BGL_EXPORTED_DECL obj_t BGl_emitzd2includezd2zzbackend_c_emitz00();
	static obj_t BGl_positivez00zzbackend_c_emitz00(BGL_LONGLONG_T);
	BGL_IMPORT obj_t
		BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, obj_t);
	BGL_IMPORT bool_t BGl_bigloozd2needzd2manglingzf3zf3zz__biglooz00(obj_t);
	extern obj_t BGl_za2realza2z00zztype_cachez00;
	static obj_t BGl_methodzd2initzd2zzbackend_c_emitz00();
	extern obj_t BGl_bigloozd2licensezd2zztools_licensez00();
	extern obj_t BGl_za2charza2z00zztype_cachez00;
	BGL_EXPORTED_DECL obj_t BGl_emitzd2mainzd2zzbackend_c_emitz00();
	BGL_IMPORT obj_t BGl_readzd2linezd2zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbackend_c_emitz00 = BUNSPEC;
	extern obj_t BGl_za2bigloozd2licensingzf3za2z21zzengine_paramz00;
	static obj_t BGl__emitzd2headerzd2zzbackend_c_emitz00(obj_t);
	static obj_t BGl__emitzd2commentzd2zzbackend_c_emitz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bigloo_mangle(obj_t);
	static obj_t BGl_genericzd2initzd2zzbackend_c_emitz00();
	BGL_IMPORT obj_t string_for_read(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_emitzd2debugzd2activationz00zzbackend_c_emitz00();
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl__emitzd2atomzd2valuez00zzbackend_c_emitz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzbackend_c_emitz00();
	extern obj_t BGl_za2includezd2foreignza2zd2zzengine_paramz00;
	static obj_t BGl__startzd2emissionz12zc0zzbackend_c_emitz00(obj_t, obj_t);
	static obj_t BGl_za2destzd2prefixza2zd2zzbackend_c_emitz00 = BUNSPEC;
	extern obj_t BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(obj_t);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	static obj_t BGl__untrigraphz00zzbackend_c_emitz00(obj_t, obj_t);
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	extern obj_t BGl_stringzd2sanszd2z42z42zztype_toolsz00(obj_t);
	static obj_t BGl__emitzd2mainzd2zzbackend_c_emitz00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_EXPORTED_DEF obj_t BGl_za2czd2portza2zd2zzbackend_c_emitz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_emitzd2garbagezd2collectorzd2selectionzd2zzbackend_c_emitz00();
	static obj_t BGl__llongzd2ze3czd2isoze3zzbackend_c_emitz00(obj_t, obj_t);
	static obj_t BGl__emitzd2includezd2zzbackend_c_emitz00(obj_t);
	BGL_IMPORT obj_t BGl_commandzd2linezd2zz__osz00();
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_IMPORT char *BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzbackend_c_emitz00();
	extern obj_t BGl_za2bigloozd2librarieszd2czd2setupza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_fprintfz00zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
	static obj_t __cnst[4];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stopzd2emissionz12zd2envz12zzbackend_c_emitz00,
		BgL_bgl__stopza7d2emission4110za7,
		BGl__stopzd2emissionz12zc0zzbackend_c_emitz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string4056z00zzbackend_c_emitz00,
		BgL_bgl_string4056za700za7za7b4111za7, "Can't open file for output", 26);
	      DEFINE_STRING(BGl_string4057z00zzbackend_c_emitz00,
		BgL_bgl_string4057za700za7za7b4112za7, "/*", 2);
	      DEFINE_STRING(BGl_string4058z00zzbackend_c_emitz00,
		BgL_bgl_string4058za700za7za7b4113za7, "*/", 2);
	      DEFINE_STRING(BGl_string4060z00zzbackend_c_emitz00,
		BgL_bgl_string4060za700za7za7b4114za7, " (c)      ", 10);
	      DEFINE_STRING(BGl_string4059z00zzbackend_c_emitz00,
		BgL_bgl_string4059za700za7za7b4115za7, "", 0);
	      DEFINE_STRING(BGl_string4061z00zzbackend_c_emitz00,
		BgL_bgl_string4061za700za7za7b4116za7, "/* COMPILATION: ", 16);
	      DEFINE_STRING(BGl_string4062z00zzbackend_c_emitz00,
		BgL_bgl_string4062za700za7za7b4117za7, "/* GC selection */", 18);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_emitzd2headerzd2envz00zzbackend_c_emitz00,
		BgL_bgl__emitza7d2headerza7d4118z00,
		BGl__emitzd2headerzd2zzbackend_c_emitz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string4063z00zzbackend_c_emitz00,
		BgL_bgl_string4063za700za7za7b4119za7, "#define THE_GC BOEHM_GC\n", 24);
	      DEFINE_STRING(BGl_string4064z00zzbackend_c_emitz00,
		BgL_bgl_string4064za700za7za7b4120za7, "#define THE_GC BOEHM_GC", 23);
	      DEFINE_STRING(BGl_string4065z00zzbackend_c_emitz00,
		BgL_bgl_string4065za700za7za7b4121za7, "#define BUMPY_GC\n", 17);
	      DEFINE_STRING(BGl_string4066z00zzbackend_c_emitz00,
		BgL_bgl_string4066za700za7za7b4122za7, "emit-garbage-collector-selection",
		32);
	      DEFINE_STRING(BGl_string4067z00zzbackend_c_emitz00,
		BgL_bgl_string4067za700za7za7b4123za7, "Can't emit code for gc", 22);
	      DEFINE_STRING(BGl_string4068z00zzbackend_c_emitz00,
		BgL_bgl_string4068za700za7za7b4124za7, "#include <", 10);
	      DEFINE_STRING(BGl_string4070z00zzbackend_c_emitz00,
		BgL_bgl_string4070za700za7za7b4125za7, "/* debug mode */", 16);
	      DEFINE_STRING(BGl_string4069z00zzbackend_c_emitz00,
		BgL_bgl_string4069za700za7za7b4126za7, ">", 1);
	      DEFINE_STRING(BGl_string4071z00zzbackend_c_emitz00,
		BgL_bgl_string4071za700za7za7b4127za7, "#define BIGLOO_DEBUG 1", 22);
	      DEFINE_STRING(BGl_string4072z00zzbackend_c_emitz00,
		BgL_bgl_string4072za700za7za7b4128za7, "/* Libraries setup imports */", 29);
	      DEFINE_STRING(BGl_string4073z00zzbackend_c_emitz00,
		BgL_bgl_string4073za700za7za7b4129za7, "BGL_IMPORT void ", 16);
	      DEFINE_STRING(BGl_string4074z00zzbackend_c_emitz00,
		BgL_bgl_string4074za700za7za7b4130za7, "(int, char *[], char *[]);", 26);
	      DEFINE_STRING(BGl_string4075z00zzbackend_c_emitz00,
		BgL_bgl_string4075za700za7za7b4131za7, "/* Libraries setup */", 21);
	      DEFINE_STRING(BGl_string4076z00zzbackend_c_emitz00,
		BgL_bgl_string4076za700za7za7b4132za7,
		"static int bigloo_libinit( int argc, char *argv[], char *env[] ) {", 66);
	      DEFINE_STRING(BGl_string4077z00zzbackend_c_emitz00,
		BgL_bgl_string4077za700za7za7b4133za7, "(argc, argv, env);\n", 19);
	      DEFINE_STRING(BGl_string4078z00zzbackend_c_emitz00,
		BgL_bgl_string4078za700za7za7b4134za7, "return 0; }\n\n", 13);
	      DEFINE_STRING(BGl_string4080z00zzbackend_c_emitz00,
		BgL_bgl_string4080za700za7za7b4135za7,
		"int BIGLOO_MAIN(int argc, char *argv[], char *env[]) { ", 55);
	      DEFINE_STRING(BGl_string4079z00zzbackend_c_emitz00,
		BgL_bgl_string4079za700za7za7b4136za7,
		"long bigloo_abort(long n) { return n; }", 39);
	      DEFINE_STRING(BGl_string4081z00zzbackend_c_emitz00,
		BgL_bgl_string4081za700za7za7b4137za7,
		"return _bigloo_main(argc, argv, env, &bigloo_main, &bigloo_libinit, ~a);}",
		73);
	      DEFINE_STRING(BGl_string4082z00zzbackend_c_emitz00,
		BgL_bgl_string4082za700za7za7b4138za7, "BGL_EXPORTED_DEF obj_t ", 23);
	      DEFINE_STRING(BGl_string4083z00zzbackend_c_emitz00,
		BgL_bgl_string4083za700za7za7b4139za7, "() {", 4);
	      DEFINE_STRING(BGl_string4084z00zzbackend_c_emitz00,
		BgL_bgl_string4084za700za7za7b4140za7, "  return ", 9);
	      DEFINE_STRING(BGl_string4085z00zzbackend_c_emitz00,
		BgL_bgl_string4085za700za7za7b4141za7, "( 0, \"", 6);
	      DEFINE_STRING(BGl_string4086z00zzbackend_c_emitz00,
		BgL_bgl_string4086za700za7za7b4142za7, "\" );", 4);
	      DEFINE_STRING(BGl_string4087z00zzbackend_c_emitz00,
		BgL_bgl_string4087za700za7za7b4143za7, "}", 1);
	      DEFINE_STRING(BGl_string4088z00zzbackend_c_emitz00,
		BgL_bgl_string4088za700za7za7b4144za7, "(-", 2);
	      DEFINE_STRING(BGl_string4100z00zzbackend_c_emitz00,
		BgL_bgl_string4100za700za7za7b4145za7, "BCNST(", 6);
	      DEFINE_STRING(BGl_string4090z00zzbackend_c_emitz00,
		BgL_bgl_string4090za700za7za7b4146za7, ")))", 3);
	      DEFINE_STRING(BGl_string4089z00zzbackend_c_emitz00,
		BgL_bgl_string4089za700za7za7b4147za7, ")", 1);
	      DEFINE_STRING(BGl_string4101z00zzbackend_c_emitz00,
		BgL_bgl_string4101za700za7za7b4148za7, "BGL_NAN", 7);
	      DEFINE_STRING(BGl_string4091z00zzbackend_c_emitz00,
		BgL_bgl_string4091za700za7za7b4149za7, " * (", 4);
	      DEFINE_STRING(BGl_string4102z00zzbackend_c_emitz00,
		BgL_bgl_string4102za700za7za7b4150za7, "BGL_INFINITY", 12);
	      DEFINE_STRING(BGl_string4092z00zzbackend_c_emitz00,
		BgL_bgl_string4092za700za7za7b4151za7, " + ((BGL_LONGLONG_T)", 20);
	      DEFINE_STRING(BGl_string4103z00zzbackend_c_emitz00,
		BgL_bgl_string4103za700za7za7b4152za7, "(-BGL_INFINITY)", 15);
	      DEFINE_STRING(BGl_string4093z00zzbackend_c_emitz00,
		BgL_bgl_string4093za700za7za7b4153za7, "(", 1);
	      DEFINE_STRING(BGl_string4104z00zzbackend_c_emitz00,
		BgL_bgl_string4104za700za7za7b4154za7, "(bgl_string_to_bignum( \"", 24);
	      DEFINE_STRING(BGl_string4094z00zzbackend_c_emitz00,
		BgL_bgl_string4094za700za7za7b4155za7, "((BGL_LONGLONG_T)", 17);
	      DEFINE_STRING(BGl_string4105z00zzbackend_c_emitz00,
		BgL_bgl_string4105za700za7za7b4156za7, "\", 16 ))", 8);
	      DEFINE_STRING(BGl_string4095z00zzbackend_c_emitz00,
		BgL_bgl_string4095za700za7za7b4157za7, "((", 2);
	      DEFINE_STRING(BGl_string4106z00zzbackend_c_emitz00,
		BgL_bgl_string4106za700za7za7b4158za7, "backend_c_emit", 14);
	      DEFINE_STRING(BGl_string4096z00zzbackend_c_emitz00,
		BgL_bgl_string4096za700za7za7b4159za7, "BNIL", 4);
	      DEFINE_STRING(BGl_string4107z00zzbackend_c_emitz00,
		BgL_bgl_string4107za700za7za7b4160za7,
		"bumpy boehm --to-stdout (cgen distrib cc cindent hgen) ", 55);
	      DEFINE_STRING(BGl_string4097z00zzbackend_c_emitz00,
		BgL_bgl_string4097za700za7za7b4161za7, "'\\000'", 6);
	      DEFINE_STRING(BGl_string4098z00zzbackend_c_emitz00,
		BgL_bgl_string4098za700za7za7b4162za7, "\\''", 3);
	      DEFINE_STRING(BGl_string4099z00zzbackend_c_emitz00,
		BgL_bgl_string4099za700za7za7b4163za7, "BUNSPEC", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_emitzd2dlopenzd2initzd2envzd2zzbackend_c_emitz00,
		BgL_bgl__emitza7d2dlopenza7d4164z00,
		BGl__emitzd2dlopenzd2initz00zzbackend_c_emitz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_emitzd2mainzd2envz00zzbackend_c_emitz00,
		BgL_bgl__emitza7d2mainza7d2za74165za7,
		BGl__emitzd2mainzd2zzbackend_c_emitz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_emitzd2garbagezd2collectorzd2selectionzd2envz00zzbackend_c_emitz00,
		BgL_bgl__emitza7d2garbageza74166z00,
		BGl__emitzd2garbagezd2collectorzd2selectionzd2zzbackend_c_emitz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_emitzd2includezd2envz00zzbackend_c_emitz00,
		BgL_bgl__emitza7d2includeza74167z00,
		BGl__emitzd2includezd2zzbackend_c_emitz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_untrigraphzd2envzd2zzbackend_c_emitz00,
		BgL_bgl__untrigraphza700za7za74168za7,
		BGl__untrigraphz00zzbackend_c_emitz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_emitzd2atomzd2valuezd2envzd2zzbackend_c_emitz00,
		BgL_bgl__emitza7d2atomza7d2v4169z00,
		BGl__emitzd2atomzd2valuez00zzbackend_c_emitz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_startzd2emissionz12zd2envz12zzbackend_c_emitz00,
		BgL_bgl__startza7d2emissio4170za7,
		BGl__startzd2emissionz12zc0zzbackend_c_emitz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_emitzd2debugzd2activationzd2envzd2zzbackend_c_emitz00,
		BgL_bgl__emitza7d2debugza7d24171z00,
		BGl__emitzd2debugzd2activationz00zzbackend_c_emitz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_emitzd2commentzd2envz00zzbackend_c_emitz00,
		BgL_bgl__emitza7d2commentza74172z00,
		BGl__emitzd2commentzd2zzbackend_c_emitz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_llongzd2ze3czd2isozd2envz31zzbackend_c_emitz00,
		BgL_bgl__llongza7d2za7e3cza7d24173za7,
		BGl__llongzd2ze3czd2isoze3zzbackend_c_emitz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(long
		BgL_checksumz00_2161, char *BgL_fromz00_2162)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbackend_c_emitz00))
				{
					BGl_requirezd2initializa7ationz75zzbackend_c_emitz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzbackend_c_emitz00();
					BGl_cnstzd2initzd2zzbackend_c_emitz00();
					BGl_importedzd2moduleszd2initz00zzbackend_c_emitz00();
					BGl_toplevelzd2initzd2zzbackend_c_emitz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbackend_c_emitz00()
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"backend_c_emit");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"backend_c_emit");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"backend_c_emit");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"backend_c_emit");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"backend_c_emit");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"backend_c_emit");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"backend_c_emit");
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 0),
				"backend_c_emit");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"backend_c_emit");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "backend_c_emit");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"backend_c_emit");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbackend_c_emitz00()
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 15 */
			{	/* BackEnd/c_emit.scm 15 */
				obj_t BgL_cportz00_2151;

				BgL_cportz00_2151 =
					bgl_open_input_string(BGl_string4107z00zzbackend_c_emitz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2152;

					BgL_iz00_2152 = ((long) 3);
				BgL_loopz00_2153:
					if ((BgL_iz00_2152 == ((long) -1)))
						{	/* BackEnd/c_emit.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* BackEnd/c_emit.scm 15 */
							{	/* BackEnd/c_emit.scm 15 */
								obj_t BgL_arg4109z00_2155;

								{	/* BackEnd/c_emit.scm 15 */

									{	/* BackEnd/c_emit.scm 15 */
										obj_t BgL_locationz00_2157;

										BgL_locationz00_2157 = BBOOL(((bool_t) 0));
										{	/* BackEnd/c_emit.scm 15 */

											BgL_arg4109z00_2155 =
												BGl_readz00zz__readerz00(BgL_cportz00_2151,
												BgL_locationz00_2157);
										}
									}
								}
								{	/* BackEnd/c_emit.scm 15 */
									int BgL_auxz00_2187;

									BgL_auxz00_2187 = (int) (BgL_iz00_2152);
									CNST_TABLE_SET(BgL_auxz00_2187, BgL_arg4109z00_2155);
							}}
							{	/* BackEnd/c_emit.scm 15 */
								int BgL_auxz00_2158;

								BgL_auxz00_2158 = (int) ((BgL_iz00_2152 - ((long) 1)));
								{
									long BgL_iz00_2192;

									BgL_iz00_2192 = (long) (BgL_auxz00_2158);
									BgL_iz00_2152 = BgL_iz00_2192;
									goto BgL_loopz00_2153;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbackend_c_emitz00()
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 15 */
			BGl_za2destzd2prefixza2zd2zzbackend_c_emitz00 = BFALSE;
			BGl_za2czd2portza2zd2zzbackend_c_emitz00 = BFALSE;
			return (BGl_za2maxzd2colza2zd2zzbackend_c_emitz00 = ((long) 79), BUNSPEC);
		}
	}



/* start-emission! */
	BGL_EXPORTED_DEF obj_t BGl_startzd2emissionz12zc0zzbackend_c_emitz00(obj_t
		BgL_suffixz00_1)
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 49 */
			{	/* BackEnd/c_emit.scm 50 */
				obj_t BgL_prefixz00_965;

				{	/* BackEnd/c_emit.scm 51 */
					bool_t BgL_testz00_2194;

					if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
						{	/* BackEnd/c_emit.scm 51 */
							BgL_testz00_2194 =
								CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
								(BGl_za2passza2z00zzengine_paramz00,
									CNST_TABLE_REF(((long) 0))));
						}
					else
						{	/* BackEnd/c_emit.scm 51 */
							BgL_testz00_2194 = ((bool_t) 0);
						}
					if (BgL_testz00_2194)
						{	/* BackEnd/c_emit.scm 51 */
							BgL_prefixz00_965 =
								BGl_prefixz00zz__osz00(BGl_za2destza2z00zzengine_paramz00);
						}
					else
						{	/* BackEnd/c_emit.scm 54 */
							bool_t BgL_testz00_2201;

							if (PAIRP(BGl_za2srczd2filesza2zd2zzengine_paramz00))
								{	/* BackEnd/c_emit.scm 54 */
									obj_t BgL_auxz00_2204;

									BgL_auxz00_2204 =
										CAR(BGl_za2srczd2filesza2zd2zzengine_paramz00);
									BgL_testz00_2201 = STRINGP(BgL_auxz00_2204);
								}
							else
								{	/* BackEnd/c_emit.scm 54 */
									BgL_testz00_2201 = ((bool_t) 0);
								}
							if (BgL_testz00_2201)
								{	/* BackEnd/c_emit.scm 54 */
									BgL_prefixz00_965 =
										BGl_prefixz00zz__osz00(CAR
										(BGl_za2srczd2filesza2zd2zzengine_paramz00));
								}
							else
								{	/* BackEnd/c_emit.scm 54 */
									BgL_prefixz00_965 = BFALSE;
								}
						}
				}
				{	/* BackEnd/c_emit.scm 50 */

					{	/* BackEnd/c_emit.scm 58 */
						bool_t BgL_testz00_2209;

						if (
							(BGl_za2destza2z00zzengine_paramz00 ==
								CNST_TABLE_REF(((long) 1))))
							{	/* BackEnd/c_emit.scm 58 */
								BgL_testz00_2209 = ((bool_t) 1);
							}
						else
							{	/* BackEnd/c_emit.scm 58 */
								if (STRINGP(BgL_prefixz00_965))
									{	/* BackEnd/c_emit.scm 58 */
										BgL_testz00_2209 = ((bool_t) 0);
									}
								else
									{	/* BackEnd/c_emit.scm 58 */
										BgL_testz00_2209 = ((bool_t) 1);
									}
							}
						if (BgL_testz00_2209)
							{	/* BackEnd/c_emit.scm 59 */
								obj_t BgL_res4049z00_1721;

								{	/* BackEnd/c_emit.scm 59 */
									obj_t BgL_auxz00_2215;

									BgL_auxz00_2215 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res4049z00_1721 =
										BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2215);
								}
								return (BGl_za2czd2portza2zd2zzbackend_c_emitz00 =
									BgL_res4049z00_1721, BUNSPEC);
							}
						else
							{	/* BackEnd/c_emit.scm 60 */
								obj_t BgL_fzd2namezd2_967;

								BgL_fzd2namezd2_967 =
									string_append(BgL_prefixz00_965, BgL_suffixz00_1);
								BGl_za2destzd2prefixza2zd2zzbackend_c_emitz00 =
									BgL_prefixz00_965;
								{	/* BackEnd/c_emit.scm 62 */

									BGl_za2czd2portza2zd2zzbackend_c_emitz00 =
										BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00
										(BgL_fzd2namezd2_967, BTRUE);
								}
								if (OUTPUT_PORTP(BGl_za2czd2portza2zd2zzbackend_c_emitz00))
									{	/* BackEnd/c_emit.scm 63 */
										return BUNSPEC;
									}
								else
									{	/* BackEnd/c_emit.scm 63 */
										return
											BGl_errorz00zz__errorz00
											(BGl_za2bigloozd2nameza2zd2zzengine_paramz00,
											BGl_string4056z00zzbackend_c_emitz00,
											BgL_fzd2namezd2_967);
									}
							}
					}
				}
			}
		}
	}



/* _start-emission! */
	obj_t BGl__startzd2emissionz12zc0zzbackend_c_emitz00(obj_t BgL_envz00_2127,
		obj_t BgL_suffixz00_2128)
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 49 */
			return BGl_startzd2emissionz12zc0zzbackend_c_emitz00(BgL_suffixz00_2128);
		}
	}



/* stop-emission! */
	BGL_EXPORTED_DEF obj_t BGl_stopzd2emissionz12zc0zzbackend_c_emitz00()
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 70 */
			if (OUTPUT_PORTP(BGl_za2czd2portza2zd2zzbackend_c_emitz00))
				{	/* BackEnd/c_emit.scm 74 */
					bool_t BgL_testz00_2226;

					{	/* BackEnd/c_emit.scm 74 */
						obj_t BgL_arg3818z00_981;

						{	/* BackEnd/c_emit.scm 74 */
							obj_t BgL_res4050z00_1725;

							{	/* BackEnd/c_emit.scm 74 */
								obj_t BgL_auxz00_2227;

								BgL_auxz00_2227 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res4050z00_1725 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2227);
							}
							BgL_arg3818z00_981 = BgL_res4050z00_1725;
						}
						BgL_testz00_2226 =
							(BGl_za2czd2portza2zd2zzbackend_c_emitz00 == BgL_arg3818z00_981);
					}
					if (BgL_testz00_2226)
						{	/* BackEnd/c_emit.scm 74 */
							return BFALSE;
						}
					else
						{	/* BackEnd/c_emit.scm 74 */
							FLUSH_OUTPUT_PORT(BGl_za2czd2portza2zd2zzbackend_c_emitz00);
							bgl_close_output_port(BGl_za2czd2portza2zd2zzbackend_c_emitz00);
							BGl_za2czd2portza2zd2zzbackend_c_emitz00 = BFALSE;
							return BGl_za2destzd2prefixza2zd2zzbackend_c_emitz00;
						}
				}
			else
				{	/* BackEnd/c_emit.scm 72 */
					return BFALSE;
				}
		}
	}



/* _stop-emission! */
	obj_t BGl__stopzd2emissionz12zc0zzbackend_c_emitz00(obj_t BgL_envz00_2129)
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 70 */
			return BGl_stopzd2emissionz12zc0zzbackend_c_emitz00();
		}
	}



/* emit-comment */
	BGL_EXPORTED_DEF obj_t BGl_emitzd2commentzd2zzbackend_c_emitz00(obj_t
		BgL_stringz00_2, unsigned char BgL_fillz00_3)
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 90 */
			{	/* BackEnd/c_emit.scm 91 */
				obj_t BgL_stringz00_982;

				if (
					(STRING_LENGTH(BgL_stringz00_2) >
						(BGl_za2maxzd2colza2zd2zzbackend_c_emitz00 - ((long) 8))))
					{	/* BackEnd/c_emit.scm 91 */
						BgL_stringz00_982 =
							c_substring(BgL_stringz00_2, ((long) 0),
							(BGl_za2maxzd2colza2zd2zzbackend_c_emitz00 - ((long) 9)));
					}
				else
					{	/* BackEnd/c_emit.scm 91 */
						BgL_stringz00_982 = BgL_stringz00_2;
					}
				bgl_display_string(BGl_string4057z00zzbackend_c_emitz00,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				{	/* BackEnd/c_emit.scm 95 */
					long BgL_lenz00_983;

					BgL_lenz00_983 = STRING_LENGTH(BgL_stringz00_982);
					if ((BgL_lenz00_983 == ((long) 0)))
						{	/* BackEnd/c_emit.scm 97 */
							obj_t BgL_port3775z00_985;

							BgL_port3775z00_985 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
							{	/* BackEnd/c_emit.scm 97 */
								obj_t BgL_arg3820z00_986;

								{	/* BackEnd/c_emit.scm 97 */
									long BgL_arg3821z00_987;

									BgL_arg3821z00_987 =
										(BGl_za2maxzd2colza2zd2zzbackend_c_emitz00 - ((long) 4));
									{	/* BackEnd/c_emit.scm 97 */
										obj_t BgL_list3822z00_988;

										BgL_list3822z00_988 = MAKE_PAIR(BCHAR(BgL_fillz00_3), BNIL);
										{	/* BackEnd/c_emit.scm 97 */
											obj_t BgL_res4051z00_1751;

											{	/* BackEnd/c_emit.scm 97 */
												obj_t BgL_arg2006z00_1748;

												BgL_arg2006z00_1748 = CAR(BgL_list3822z00_988);
												BgL_res4051z00_1751 =
													make_string(BgL_arg3821z00_987,
													CCHAR(BgL_arg2006z00_1748));
											}
											BgL_arg3820z00_986 = BgL_res4051z00_1751;
								}}}
								bgl_display_obj(BgL_arg3820z00_986, BgL_port3775z00_985);
							}
							bgl_display_string(BGl_string4058z00zzbackend_c_emitz00,
								BgL_port3775z00_985);
							return bgl_display_char(((unsigned char) '\n'),
								BgL_port3775z00_985);
						}
					else
						{	/* BackEnd/c_emit.scm 96 */
							{	/* BackEnd/c_emit.scm 99 */
								obj_t BgL_arg3823z00_989;

								{	/* BackEnd/c_emit.scm 99 */
									obj_t BgL_list3824z00_990;

									BgL_list3824z00_990 = MAKE_PAIR(BCHAR(BgL_fillz00_3), BNIL);
									{	/* BackEnd/c_emit.scm 99 */
										obj_t BgL_res4052z00_1761;

										{	/* BackEnd/c_emit.scm 99 */
											obj_t BgL_arg2006z00_1758;

											BgL_arg2006z00_1758 = CAR(BgL_list3824z00_990);
											BgL_res4052z00_1761 =
												make_string(((long) 2), CCHAR(BgL_arg2006z00_1758));
										}
										BgL_arg3823z00_989 = BgL_res4052z00_1761;
								}}
								bgl_display_obj(BgL_arg3823z00_989,
									BGl_za2czd2portza2zd2zzbackend_c_emitz00);
							}
							bgl_display_char(((unsigned char) ' '),
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
							bgl_display_obj(BgL_stringz00_982,
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
							bgl_display_char(((unsigned char) ' '),
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
							{	/* BackEnd/c_emit.scm 103 */
								obj_t BgL_port3776z00_991;

								BgL_port3776z00_991 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
								{	/* BackEnd/c_emit.scm 104 */
									obj_t BgL_arg3825z00_992;

									{	/* BackEnd/c_emit.scm 104 */
										long BgL_arg3826z00_993;

										{	/* BackEnd/c_emit.scm 104 */
											obj_t BgL_arg3828z00_995;

											BgL_arg3828z00_995 = BINT((((long) 8) + BgL_lenz00_983));
											BgL_arg3826z00_993 =
												(BGl_za2maxzd2colza2zd2zzbackend_c_emitz00 -
												(long) CINT(BgL_arg3828z00_995));
										}
										{	/* BackEnd/c_emit.scm 104 */
											obj_t BgL_list3827z00_994;

											BgL_list3827z00_994 =
												MAKE_PAIR(BCHAR(BgL_fillz00_3), BNIL);
											{	/* BackEnd/c_emit.scm 104 */
												obj_t BgL_res4053z00_1774;

												{	/* BackEnd/c_emit.scm 104 */
													obj_t BgL_arg2006z00_1771;

													BgL_arg2006z00_1771 = CAR(BgL_list3827z00_994);
													BgL_res4053z00_1774 =
														make_string(BgL_arg3826z00_993,
														CCHAR(BgL_arg2006z00_1771));
												}
												BgL_arg3825z00_992 = BgL_res4053z00_1774;
									}}}
									bgl_display_obj(BgL_arg3825z00_992, BgL_port3776z00_991);
								}
								bgl_display_string(BGl_string4058z00zzbackend_c_emitz00,
									BgL_port3776z00_991);
								return bgl_display_char(((unsigned char) '\n'),
									BgL_port3776z00_991);
		}}}}}
	}



/* _emit-comment */
	obj_t BGl__emitzd2commentzd2zzbackend_c_emitz00(obj_t BgL_envz00_2130,
		obj_t BgL_stringz00_2131, obj_t BgL_fillz00_2132)
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 90 */
			return
				BGl_emitzd2commentzd2zzbackend_c_emitz00(BgL_stringz00_2131,
				CCHAR(BgL_fillz00_2132));
		}
	}



/* emit-license */
	obj_t BGl_emitzd2licensezd2zzbackend_c_emitz00()
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 110 */
			{	/* BackEnd/c_emit.scm 111 */
				obj_t BgL_inz00_1001;

				{	/* BackEnd/c_emit.scm 111 */
					obj_t BgL_arg3837z00_1009;

					BgL_arg3837z00_1009 = BGl_bigloozd2licensezd2zztools_licensez00();
					{	/* BackEnd/c_emit.scm 111 */

						BgL_inz00_1001 =
							BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
							(BgL_arg3837z00_1009, BINT(((long) 0)));
				}}
				{	/* BackEnd/c_emit.scm 112 */
					obj_t BgL_g3772z00_1002;

					BgL_g3772z00_1002 =
						BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_inz00_1001);
					{
						obj_t BgL_strz00_1004;

						BgL_strz00_1004 = BgL_g3772z00_1002;
					BgL_zc3anonymousza33834ze3z83_1005:
						if (EOF_OBJECTP(BgL_strz00_1004))
							{	/* BackEnd/c_emit.scm 113 */
								return bgl_close_input_port(BgL_inz00_1001);
							}
						else
							{	/* BackEnd/c_emit.scm 113 */
								BGl_emitzd2commentzd2zzbackend_c_emitz00(BgL_strz00_1004,
									(char) (((unsigned char) ' ')));
								{
									obj_t BgL_strz00_2285;

									BgL_strz00_2285 =
										BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_inz00_1001);
									BgL_strz00_1004 = BgL_strz00_2285;
									goto BgL_zc3anonymousza33834ze3z83_1005;
								}
							}
					}
				}
			}
		}
	}



/* emit-header */
	BGL_EXPORTED_DEF obj_t BGl_emitzd2headerzd2zzbackend_c_emitz00()
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 122 */
			BGl_emitzd2commentzd2zzbackend_c_emitz00
				(BGl_string4059z00zzbackend_c_emitz00, (char) (((unsigned char) '=')));
			{	/* BackEnd/c_emit.scm 124 */
				obj_t BgL_arg3838z00_1012;

				{	/* BackEnd/c_emit.scm 124 */
					obj_t BgL_pz00_1013;

					{	/* BackEnd/c_emit.scm 124 */

						{	/* BackEnd/c_emit.scm 124 */

							BgL_pz00_1013 =
								BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(BTRUE);
					}}
					bgl_display_obj(BGl_za2srczd2filesza2zd2zzengine_paramz00,
						BgL_pz00_1013);
					BgL_arg3838z00_1012 = bgl_close_output_port(BgL_pz00_1013);
				}
				BGl_emitzd2commentzd2zzbackend_c_emitz00(BgL_arg3838z00_1012,
					(char) (((unsigned char) ' ')));
			}
			BGl_emitzd2commentzd2zzbackend_c_emitz00
				(BGl_za2bigloozd2nameza2zd2zzengine_paramz00,
				(char) (((unsigned char) ' ')));
			BGl_emitzd2commentzd2zzbackend_c_emitz00(string_append_3
				(BGl_za2bigloozd2authorza2zd2zzengine_paramz00,
					BGl_string4060z00zzbackend_c_emitz00,
					BGl_za2bigloozd2dateza2zd2zzengine_paramz00),
				(char) (((unsigned char) ' ')));
			if (CBOOL(BGl_za2bigloozd2licensingzf3za2z21zzengine_paramz00))
				{	/* BackEnd/c_emit.scm 131 */
					BGl_emitzd2licensezd2zzbackend_c_emitz00();
				}
			else
				{	/* BackEnd/c_emit.scm 131 */
					BFALSE;
				}
			BGl_emitzd2commentzd2zzbackend_c_emitz00
				(BGl_string4059z00zzbackend_c_emitz00, (char) (((unsigned char) '=')));
			bgl_display_string(BGl_string4061z00zzbackend_c_emitz00,
				BGl_za2czd2portza2zd2zzbackend_c_emitz00);
			{	/* BackEnd/c_emit.scm 134 */
				obj_t BgL_arg3840z00_1016;

				BgL_arg3840z00_1016 = BGl_commandzd2linezd2zz__osz00();
				bgl_display_obj(BgL_arg3840z00_1016,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
			}
			bgl_display_string(BGl_string4058z00zzbackend_c_emitz00,
				BGl_za2czd2portza2zd2zzbackend_c_emitz00);
			return bgl_display_char(((unsigned char) '\n'),
				BGl_za2czd2portza2zd2zzbackend_c_emitz00);
		}
	}



/* _emit-header */
	obj_t BGl__emitzd2headerzd2zzbackend_c_emitz00(obj_t BgL_envz00_2133)
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 122 */
			return BGl_emitzd2headerzd2zzbackend_c_emitz00();
		}
	}



/* emit-garbage-collector-selection */
	BGL_EXPORTED_DEF obj_t
		BGl_emitzd2garbagezd2collectorzd2selectionzd2zzbackend_c_emitz00()
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 141 */
			{	/* BackEnd/c_emit.scm 142 */
				obj_t BgL_port3777z00_1017;

				BgL_port3777z00_1017 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				bgl_display_string(BGl_string4062z00zzbackend_c_emitz00,
					BgL_port3777z00_1017);
				bgl_display_char(((unsigned char) '\n'), BgL_port3777z00_1017);
			}
			{	/* BackEnd/c_emit.scm 143 */
				obj_t BgL_casezd2valuezd2_1018;

				BgL_casezd2valuezd2_1018 =
					BGl_za2garbagezd2collectorza2zd2zzengine_paramz00;
				if ((BgL_casezd2valuezd2_1018 == CNST_TABLE_REF(((long) 2))))
					{	/* BackEnd/c_emit.scm 145 */
						obj_t BgL_port3778z00_1020;

						BgL_port3778z00_1020 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
						bgl_display_string(BGl_string4063z00zzbackend_c_emitz00,
							BgL_port3778z00_1020);
						return bgl_display_char(((unsigned char) '\n'),
							BgL_port3778z00_1020);
					}
				else
					{	/* BackEnd/c_emit.scm 143 */
						if ((BgL_casezd2valuezd2_1018 == CNST_TABLE_REF(((long) 3))))
							{	/* BackEnd/c_emit.scm 143 */
								{	/* BackEnd/c_emit.scm 147 */
									obj_t BgL_port3779z00_1022;

									BgL_port3779z00_1022 =
										BGl_za2czd2portza2zd2zzbackend_c_emitz00;
									bgl_display_string(BGl_string4064z00zzbackend_c_emitz00,
										BgL_port3779z00_1022);
									bgl_display_char(((unsigned char) '\n'),
										BgL_port3779z00_1022);
								}
								{	/* BackEnd/c_emit.scm 148 */
									obj_t BgL_port3780z00_1023;

									BgL_port3780z00_1023 =
										BGl_za2czd2portza2zd2zzbackend_c_emitz00;
									bgl_display_string(BGl_string4065z00zzbackend_c_emitz00,
										BgL_port3780z00_1023);
									return bgl_display_char(((unsigned char) '\n'),
										BgL_port3780z00_1023);
							}}
						else
							{	/* BackEnd/c_emit.scm 143 */
								return
									BGl_errorz00zz__errorz00(BGl_string4066z00zzbackend_c_emitz00,
									BGl_string4067z00zzbackend_c_emitz00,
									BGl_za2garbagezd2collectorza2zd2zzengine_paramz00);
							}
					}
			}
		}
	}



/* _emit-garbage-collector-selection */
	obj_t BGl__emitzd2garbagezd2collectorzd2selectionzd2zzbackend_c_emitz00(obj_t
		BgL_envz00_2134)
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 141 */
			return BGl_emitzd2garbagezd2collectorzd2selectionzd2zzbackend_c_emitz00();
		}
	}



/* emit-include */
	BGL_EXPORTED_DEF obj_t BGl_emitzd2includezd2zzbackend_c_emitz00()
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 157 */
			{	/* BackEnd/c_emit.scm 159 */
				obj_t BgL_g3784z00_1024;

				BgL_g3784z00_1024 =
					bgl_reverse_bang(BGl_za2includezd2foreignza2zd2zzengine_paramz00);
				{
					obj_t BgL_l3782z00_1026;

					BgL_l3782z00_1026 = BgL_g3784z00_1024;
				BgL_zc3anonymousza33843ze3z83_1027:
					if (PAIRP(BgL_l3782z00_1026))
						{	/* BackEnd/c_emit.scm 160 */
							{	/* BackEnd/c_emit.scm 159 */
								obj_t BgL_iz00_1029;

								BgL_iz00_1029 = CAR(BgL_l3782z00_1026);
								{	/* BackEnd/c_emit.scm 159 */
									obj_t BgL_port3781z00_1030;

									BgL_port3781z00_1030 =
										BGl_za2czd2portza2zd2zzbackend_c_emitz00;
									bgl_display_string(BGl_string4068z00zzbackend_c_emitz00,
										BgL_port3781z00_1030);
									bgl_display_obj(BgL_iz00_1029, BgL_port3781z00_1030);
									bgl_display_string(BGl_string4069z00zzbackend_c_emitz00,
										BgL_port3781z00_1030);
									bgl_display_char(((unsigned char) '\n'),
										BgL_port3781z00_1030);
							}}
							{
								obj_t BgL_l3782z00_2334;

								BgL_l3782z00_2334 = CDR(BgL_l3782z00_1026);
								BgL_l3782z00_1026 = BgL_l3782z00_2334;
								goto BgL_zc3anonymousza33843ze3z83_1027;
							}
						}
					else
						{	/* BackEnd/c_emit.scm 160 */
							((bool_t) 1);
						}
				}
			}
			{	/* BackEnd/c_emit.scm 162 */
				obj_t BgL_g3788z00_1033;

				BgL_g3788z00_1033 =
					bgl_reverse_bang
					(BGl_za2additionalzd2includezd2foreignza2z00zzengine_paramz00);
				{
					obj_t BgL_l3786z00_1035;

					BgL_l3786z00_1035 = BgL_g3788z00_1033;
				BgL_zc3anonymousza33846ze3z83_1036:
					if (PAIRP(BgL_l3786z00_1035))
						{	/* BackEnd/c_emit.scm 163 */
							{	/* BackEnd/c_emit.scm 162 */
								obj_t BgL_iz00_1038;

								BgL_iz00_1038 = CAR(BgL_l3786z00_1035);
								{	/* BackEnd/c_emit.scm 162 */
									obj_t BgL_port3785z00_1039;

									BgL_port3785z00_1039 =
										BGl_za2czd2portza2zd2zzbackend_c_emitz00;
									bgl_display_string(BGl_string4068z00zzbackend_c_emitz00,
										BgL_port3785z00_1039);
									bgl_display_obj(BgL_iz00_1038, BgL_port3785z00_1039);
									bgl_display_string(BGl_string4069z00zzbackend_c_emitz00,
										BgL_port3785z00_1039);
									bgl_display_char(((unsigned char) '\n'),
										BgL_port3785z00_1039);
							}}
							{
								obj_t BgL_l3786z00_2344;

								BgL_l3786z00_2344 = CDR(BgL_l3786z00_1035);
								BgL_l3786z00_1035 = BgL_l3786z00_2344;
								goto BgL_zc3anonymousza33846ze3z83_1036;
							}
						}
					else
						{	/* BackEnd/c_emit.scm 163 */
							((bool_t) 1);
						}
				}
			}
			return
				bgl_display_char(((unsigned char) '\n'),
				BGl_za2czd2portza2zd2zzbackend_c_emitz00);
		}
	}



/* _emit-include */
	obj_t BGl__emitzd2includezd2zzbackend_c_emitz00(obj_t BgL_envz00_2135)
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 157 */
			return BGl_emitzd2includezd2zzbackend_c_emitz00();
		}
	}



/* emit-debug-activation */
	BGL_EXPORTED_DEF obj_t BGl_emitzd2debugzd2activationz00zzbackend_c_emitz00()
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 169 */
			{	/* BackEnd/c_emit.scm 170 */
				obj_t BgL_port3789z00_1042;

				BgL_port3789z00_1042 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				bgl_display_string(BGl_string4070z00zzbackend_c_emitz00,
					BgL_port3789z00_1042);
				bgl_display_char(((unsigned char) '\n'), BgL_port3789z00_1042);
			}
			{	/* BackEnd/c_emit.scm 171 */
				obj_t BgL_port3790z00_1043;

				BgL_port3790z00_1043 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				bgl_display_string(BGl_string4071z00zzbackend_c_emitz00,
					BgL_port3790z00_1043);
				bgl_display_char(((unsigned char) '\n'), BgL_port3790z00_1043);
			}
			return
				bgl_display_char(((unsigned char) '\n'),
				BGl_za2czd2portza2zd2zzbackend_c_emitz00);
		}
	}



/* _emit-debug-activation */
	obj_t BGl__emitzd2debugzd2activationz00zzbackend_c_emitz00(obj_t
		BgL_envz00_2136)
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 169 */
			return BGl_emitzd2debugzd2activationz00zzbackend_c_emitz00();
		}
	}



/* emit-main */
	BGL_EXPORTED_DEF obj_t BGl_emitzd2mainzd2zzbackend_c_emitz00()
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 177 */
			BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BUNSPEC);
			if (PAIRP(BGl_za2bigloozd2librarieszd2czd2setupza2zd2zzengine_paramz00))
				{	/* BackEnd/c_emit.scm 180 */
					{	/* BackEnd/c_emit.scm 181 */
						obj_t BgL_port3791z00_1045;

						BgL_port3791z00_1045 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
						bgl_display_string(BGl_string4072z00zzbackend_c_emitz00,
							BgL_port3791z00_1045);
						bgl_display_char(((unsigned char) '\n'), BgL_port3791z00_1045);
					}
					{
						obj_t BgL_l3793z00_1047;

						BgL_l3793z00_1047 =
							BGl_za2bigloozd2librarieszd2czd2setupza2zd2zzengine_paramz00;
					BgL_zc3anonymousza33850ze3z83_1048:
						if (PAIRP(BgL_l3793z00_1047))
							{	/* BackEnd/c_emit.scm 182 */
								{	/* BackEnd/c_emit.scm 183 */
									obj_t BgL_fz00_1050;

									BgL_fz00_1050 = CAR(BgL_l3793z00_1047);
									{	/* BackEnd/c_emit.scm 183 */
										obj_t BgL_port3792z00_1051;

										BgL_port3792z00_1051 =
											BGl_za2czd2portza2zd2zzbackend_c_emitz00;
										bgl_display_string(BGl_string4073z00zzbackend_c_emitz00,
											BgL_port3792z00_1051);
										bgl_display_obj(BgL_fz00_1050, BgL_port3792z00_1051);
										bgl_display_string(BGl_string4074z00zzbackend_c_emitz00,
											BgL_port3792z00_1051);
										bgl_display_char(((unsigned char) '\n'),
											BgL_port3792z00_1051);
								}}
								{
									obj_t BgL_l3793z00_2366;

									BgL_l3793z00_2366 = CDR(BgL_l3793z00_1047);
									BgL_l3793z00_1047 = BgL_l3793z00_2366;
									goto BgL_zc3anonymousza33850ze3z83_1048;
								}
							}
						else
							{	/* BackEnd/c_emit.scm 182 */
								((bool_t) 1);
							}
					}
					bgl_display_char(((unsigned char) '\n'),
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				}
			else
				{	/* BackEnd/c_emit.scm 180 */
					BFALSE;
				}
			{	/* BackEnd/c_emit.scm 189 */
				obj_t BgL_port3795z00_1054;

				BgL_port3795z00_1054 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				bgl_display_string(BGl_string4075z00zzbackend_c_emitz00,
					BgL_port3795z00_1054);
				bgl_display_char(((unsigned char) '\n'), BgL_port3795z00_1054);
			}
			{	/* BackEnd/c_emit.scm 190 */
				obj_t BgL_port3796z00_1055;

				BgL_port3796z00_1055 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				bgl_display_string(BGl_string4076z00zzbackend_c_emitz00,
					BgL_port3796z00_1055);
				bgl_display_char(((unsigned char) '\n'), BgL_port3796z00_1055);
			}
			{
				obj_t BgL_l3798z00_1057;

				BgL_l3798z00_1057 =
					BGl_za2bigloozd2librarieszd2czd2setupza2zd2zzengine_paramz00;
			BgL_zc3anonymousza33853ze3z83_1058:
				if (PAIRP(BgL_l3798z00_1057))
					{	/* BackEnd/c_emit.scm 191 */
						{	/* BackEnd/c_emit.scm 192 */
							obj_t BgL_fz00_1060;

							BgL_fz00_1060 = CAR(BgL_l3798z00_1057);
							{	/* BackEnd/c_emit.scm 192 */
								obj_t BgL_port3797z00_1061;

								BgL_port3797z00_1061 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
								bgl_display_obj(BgL_fz00_1060, BgL_port3797z00_1061);
								bgl_display_string(BGl_string4077z00zzbackend_c_emitz00,
									BgL_port3797z00_1061);
								bgl_display_char(((unsigned char) '\n'), BgL_port3797z00_1061);
						}}
						{
							obj_t BgL_l3798z00_2379;

							BgL_l3798z00_2379 = CDR(BgL_l3798z00_1057);
							BgL_l3798z00_1057 = BgL_l3798z00_2379;
							goto BgL_zc3anonymousza33853ze3z83_1058;
						}
					}
				else
					{	/* BackEnd/c_emit.scm 191 */
						((bool_t) 1);
					}
			}
			{	/* BackEnd/c_emit.scm 194 */
				obj_t BgL_port3800z00_1064;

				BgL_port3800z00_1064 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				bgl_display_string(BGl_string4078z00zzbackend_c_emitz00,
					BgL_port3800z00_1064);
				bgl_display_char(((unsigned char) '\n'), BgL_port3800z00_1064);
			}
			{	/* BackEnd/c_emit.scm 200 */
				obj_t BgL_port3801z00_1065;

				BgL_port3801z00_1065 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				bgl_display_string(BGl_string4079z00zzbackend_c_emitz00,
					BgL_port3801z00_1065);
				bgl_display_char(((unsigned char) '\n'), BgL_port3801z00_1065);
			}
			BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BUNSPEC);
			{	/* BackEnd/c_emit.scm 202 */
				obj_t BgL_port3802z00_1066;

				BgL_port3802z00_1066 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				bgl_display_string(BGl_string4080z00zzbackend_c_emitz00,
					BgL_port3802z00_1066);
				bgl_display_char(((unsigned char) '\n'), BgL_port3802z00_1066);
			}
			{	/* BackEnd/c_emit.scm 204 */
				obj_t BgL_list3856z00_1067;

				BgL_list3856z00_1067 =
					MAKE_PAIR(BGl_za2userzd2heapzd2siza7eza2za7zzengine_paramz00, BNIL);
				BGl_fprintfz00zz__r4_output_6_10_3z00
					(BGl_za2czd2portza2zd2zzbackend_c_emitz00,
					BGl_string4081z00zzbackend_c_emitz00, BgL_list3856z00_1067);
			}
			return
				bgl_display_char(((unsigned char) '\n'),
				BGl_za2czd2portza2zd2zzbackend_c_emitz00);
		}
	}



/* _emit-main */
	obj_t BGl__emitzd2mainzd2zzbackend_c_emitz00(obj_t BgL_envz00_2137)
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 177 */
			return BGl_emitzd2mainzd2zzbackend_c_emitz00();
		}
	}



/* emit-dlopen-init */
	BGL_EXPORTED_DEF obj_t
		BGl_emitzd2dlopenzd2initz00zzbackend_c_emitz00(BgL_globalz00_bglt
		BgL_globalz00_4, obj_t BgL_initz00_5)
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 211 */
			{	/* BackEnd/c_emit.scm 212 */
				obj_t BgL_symz00_1068;

				if (BGl_bigloozd2needzd2manglingzf3zf3zz__biglooz00(BgL_initz00_5))
					{	/* BackEnd/c_emit.scm 212 */
						BgL_symz00_1068 = bigloo_mangle(BgL_initz00_5);
					}
				else
					{	/* BackEnd/c_emit.scm 212 */
						BgL_symz00_1068 = BgL_initz00_5;
					}
				BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BUNSPEC);
				{	/* BackEnd/c_emit.scm 216 */
					obj_t BgL_port3803z00_1069;

					BgL_port3803z00_1069 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
					bgl_display_string(BGl_string4082z00zzbackend_c_emitz00,
						BgL_port3803z00_1069);
					bgl_display_obj(BgL_symz00_1068, BgL_port3803z00_1069);
					bgl_display_string(BGl_string4083z00zzbackend_c_emitz00,
						BgL_port3803z00_1069);
					bgl_display_char(((unsigned char) '\n'), BgL_port3803z00_1069);
				}
				BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BUNSPEC);
				{	/* BackEnd/c_emit.scm 218 */
					obj_t BgL_port3804z00_1070;

					BgL_port3804z00_1070 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
					bgl_display_string(BGl_string4084z00zzbackend_c_emitz00,
						BgL_port3804z00_1070);
					{	/* BackEnd/c_emit.scm 218 */
						obj_t BgL_arg3857z00_1071;

						{
							BgL_variablez00_bglt BgL_auxz00_2402;

							BgL_auxz00_2402 = (BgL_variablez00_bglt) (BgL_globalz00_4);
							BgL_arg3857z00_1071 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_2402))->BgL_namez00);
						}
						bgl_display_obj(BgL_arg3857z00_1071, BgL_port3804z00_1070);
					}
					bgl_display_string(BGl_string4085z00zzbackend_c_emitz00,
						BgL_port3804z00_1070);
					bgl_display_obj(CAR(BGl_za2srczd2filesza2zd2zzengine_paramz00),
						BgL_port3804z00_1070);
					bgl_display_string(BGl_string4086z00zzbackend_c_emitz00,
						BgL_port3804z00_1070);
					bgl_display_char(((unsigned char) '\n'), BgL_port3804z00_1070);
				}
				BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BUNSPEC);
				{	/* BackEnd/c_emit.scm 221 */
					obj_t BgL_port3805z00_1073;

					BgL_port3805z00_1073 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
					bgl_display_string(BGl_string4087z00zzbackend_c_emitz00,
						BgL_port3805z00_1073);
					bgl_display_char(((unsigned char) '\n'), BgL_port3805z00_1073);
				}
				return
					bgl_display_char(((unsigned char) '\n'),
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
		}}
	}



/* _emit-dlopen-init */
	obj_t BGl__emitzd2dlopenzd2initz00zzbackend_c_emitz00(obj_t BgL_envz00_2138,
		obj_t BgL_globalz00_2139, obj_t BgL_initz00_2140)
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 211 */
			return
				BGl_emitzd2dlopenzd2initz00zzbackend_c_emitz00(
				(BgL_globalz00_bglt) (BgL_globalz00_2139), BgL_initz00_2140);
		}
	}



/* llong->c-iso */
	BGL_EXPORTED_DEF obj_t
		BGl_llongzd2ze3czd2isoze3zzbackend_c_emitz00(BGL_LONGLONG_T BgL_llongz00_6)
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 227 */
			if ((BgL_llongz00_6 >= ((BGL_LONGLONG_T) 0)))
				{	/* BackEnd/c_emit.scm 242 */
					return BGl_positivez00zzbackend_c_emitz00(BgL_llongz00_6);
				}
			else
				{	/* BackEnd/c_emit.scm 244 */
					obj_t BgL_arg3862z00_1078;

					{	/* BackEnd/c_emit.scm 244 */
						BGL_LONGLONG_T BgL_arg3864z00_1080;

						if ((BgL_llongz00_6 < ((BGL_LONGLONG_T) 0)))
							{	/* BackEnd/c_emit.scm 244 */
								BgL_arg3864z00_1080 = NEG(BgL_llongz00_6);
							}
						else
							{	/* BackEnd/c_emit.scm 244 */
								BgL_arg3864z00_1080 = BgL_llongz00_6;
							}
						BgL_arg3862z00_1078 =
							BGl_positivez00zzbackend_c_emitz00(BgL_arg3864z00_1080);
					}
					return
						string_append_3(BGl_string4088z00zzbackend_c_emitz00,
						BgL_arg3862z00_1078, BGl_string4089z00zzbackend_c_emitz00);
				}
		}
	}



/* loop */
	obj_t BGl_loopz00zzbackend_c_emitz00(BGL_LONGLONG_T BgL_shiftz00_2150,
		obj_t BgL_sshiftz00_2149, long BgL_bitsz00_2148,
		BGL_LONGLONG_T BgL_maskz00_2147, BGL_LONGLONG_T BgL_allongz00_1088)
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 233 */
			if ((BgL_allongz00_1088 >= BgL_shiftz00_2150))
				{	/* BackEnd/c_emit.scm 235 */
					obj_t BgL_arg3869z00_1092;

					obj_t BgL_arg3872z00_1095;

					BgL_arg3869z00_1092 =
						BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
						(BgL_allongz00_1088 & BgL_maskz00_2147), BNIL);
					BgL_arg3872z00_1095 =
						BGl_loopz00zzbackend_c_emitz00(BgL_shiftz00_2150,
						BgL_sshiftz00_2149, BgL_bitsz00_2148, BgL_maskz00_2147,
						(BgL_allongz00_1088 >> (int) (BgL_bitsz00_2148)));
					{	/* BackEnd/c_emit.scm 235 */
						obj_t BgL_list3874z00_1097;

						{	/* BackEnd/c_emit.scm 235 */
							obj_t BgL_arg3875z00_1098;

							{	/* BackEnd/c_emit.scm 235 */
								obj_t BgL_arg3876z00_1099;

								{	/* BackEnd/c_emit.scm 235 */
									obj_t BgL_arg3877z00_1100;

									{	/* BackEnd/c_emit.scm 235 */
										obj_t BgL_arg3878z00_1101;

										{	/* BackEnd/c_emit.scm 235 */
											obj_t BgL_arg3879z00_1102;

											{	/* BackEnd/c_emit.scm 235 */
												obj_t BgL_arg3880z00_1103;

												BgL_arg3880z00_1103 =
													MAKE_PAIR(BGl_string4090z00zzbackend_c_emitz00, BNIL);
												BgL_arg3879z00_1102 =
													MAKE_PAIR(BgL_arg3872z00_1095, BgL_arg3880z00_1103);
											}
											BgL_arg3878z00_1101 =
												MAKE_PAIR(BGl_string4091z00zzbackend_c_emitz00,
												BgL_arg3879z00_1102);
										}
										BgL_arg3877z00_1100 =
											MAKE_PAIR(BgL_sshiftz00_2149, BgL_arg3878z00_1101);
									}
									BgL_arg3876z00_1099 =
										MAKE_PAIR(BGl_string4092z00zzbackend_c_emitz00,
										BgL_arg3877z00_1100);
								}
								BgL_arg3875z00_1098 =
									MAKE_PAIR(BgL_arg3869z00_1092, BgL_arg3876z00_1099);
							}
							BgL_list3874z00_1097 =
								MAKE_PAIR(BGl_string4093z00zzbackend_c_emitz00,
								BgL_arg3875z00_1098);
						}
						return
							BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list3874z00_1097);
					}
				}
			else
				{	/* BackEnd/c_emit.scm 234 */
					return
						string_append_3(BGl_string4094z00zzbackend_c_emitz00,
						BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
						(BgL_allongz00_1088, BNIL), BGl_string4089z00zzbackend_c_emitz00);
				}
		}
	}



/* positive */
	obj_t BGl_positivez00zzbackend_c_emitz00(BGL_LONGLONG_T BgL_allongz00_1081)
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 241 */
			{	/* BackEnd/c_emit.scm 229 */
				BGL_LONGLONG_T BgL_shiftz00_1084;

				BgL_shiftz00_1084 = (((BGL_LONGLONG_T) 1) << (int) (((long) 16)));
				{	/* BackEnd/c_emit.scm 230 */
					obj_t BgL_sshiftz00_1085;

					BgL_sshiftz00_1085 =
						BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
						(BgL_shiftz00_1084, BNIL);
					{	/* BackEnd/c_emit.scm 231 */
						BGL_LONGLONG_T BgL_maskz00_1086;

						BgL_maskz00_1086 = (BgL_shiftz00_1084 - ((BGL_LONGLONG_T) 1));
						{	/* BackEnd/c_emit.scm 232 */

							return
								BGl_loopz00zzbackend_c_emitz00(BgL_shiftz00_1084,
								BgL_sshiftz00_1085, ((long) 16), BgL_maskz00_1086,
								BgL_allongz00_1081);
		}}}}}
	}



/* _llong->c-iso */
	obj_t BGl__llongzd2ze3czd2isoze3zzbackend_c_emitz00(obj_t BgL_envz00_2141,
		obj_t BgL_llongz00_2142)
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 227 */
			return
				BGl_llongzd2ze3czd2isoze3zzbackend_c_emitz00(BLLONG_TO_LLONG
				(BgL_llongz00_2142));
		}
	}



/* emit-atom-value */
	BGL_EXPORTED_DEF obj_t BGl_emitzd2atomzd2valuez00zzbackend_c_emitz00(obj_t
		BgL_valuez00_7)
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 249 */
			if (BOOLEANP(BgL_valuez00_7))
				{	/* BackEnd/c_emit.scm 251 */
					bgl_display_string(BGl_string4095z00zzbackend_c_emitz00,
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					{	/* BackEnd/c_emit.scm 253 */
						obj_t BgL_arg3890z00_1115;

						{	/* BackEnd/c_emit.scm 253 */
							obj_t BgL_arg3891z00_1116;

							{
								BgL_typez00_bglt BgL_auxz00_2452;

								BgL_auxz00_2452 =
									(BgL_typez00_bglt) (BGl_za2boolza2z00zztype_cachez00);
								BgL_arg3891z00_1116 =
									(((BgL_typez00_bglt) CREF(BgL_auxz00_2452))->BgL_namez00);
							}
							BgL_arg3890z00_1115 =
								BGl_stringzd2sanszd2z42z42zztype_toolsz00(BgL_arg3891z00_1116);
						}
						bgl_display_obj(BgL_arg3890z00_1115,
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					}
					bgl_display_char(((unsigned char) ')'),
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					{	/* BackEnd/c_emit.scm 255 */
						long BgL_arg3892z00_1117;

						if (CBOOL(BgL_valuez00_7))
							{	/* BackEnd/c_emit.scm 255 */
								BgL_arg3892z00_1117 = ((long) 1);
							}
						else
							{	/* BackEnd/c_emit.scm 255 */
								BgL_arg3892z00_1117 = ((long) 0);
							}
						bgl_display_obj(BINT(BgL_arg3892z00_1117),
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					}
					return
						bgl_display_char(((unsigned char) ')'),
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				}
			else
				{	/* BackEnd/c_emit.scm 251 */
					if (NULLP(BgL_valuez00_7))
						{	/* BackEnd/c_emit.scm 257 */
							return
								bgl_display_string(BGl_string4096z00zzbackend_c_emitz00,
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
						}
					else
						{	/* BackEnd/c_emit.scm 257 */
							if (CHARP(BgL_valuez00_7))
								{	/* BackEnd/c_emit.scm 259 */
									bgl_display_string(BGl_string4095z00zzbackend_c_emitz00,
										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
									{	/* BackEnd/c_emit.scm 261 */
										obj_t BgL_arg3895z00_1120;

										{	/* BackEnd/c_emit.scm 261 */
											obj_t BgL_arg3896z00_1121;

											{
												BgL_typez00_bglt BgL_auxz00_2469;

												BgL_auxz00_2469 =
													(BgL_typez00_bglt) (BGl_za2charza2z00zztype_cachez00);
												BgL_arg3896z00_1121 =
													(((BgL_typez00_bglt) CREF(BgL_auxz00_2469))->
													BgL_namez00);
											}
											BgL_arg3895z00_1120 =
												BGl_stringzd2sanszd2z42z42zztype_toolsz00
												(BgL_arg3896z00_1121);
										}
										bgl_display_obj(BgL_arg3895z00_1120,
											BGl_za2czd2portza2zd2zzbackend_c_emitz00);
									}
									bgl_display_string(BGl_string4089z00zzbackend_c_emitz00,
										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
									if (((CCHAR(BgL_valuez00_7)) == ((long) 0)))
										{	/* BackEnd/c_emit.scm 263 */
											bgl_display_string(BGl_string4097z00zzbackend_c_emitz00,
												BGl_za2czd2portza2zd2zzbackend_c_emitz00);
										}
									else
										{	/* BackEnd/c_emit.scm 263 */
											bgl_display_char(((unsigned char) '\''),
												BGl_za2czd2portza2zd2zzbackend_c_emitz00);
											if (((CCHAR(BgL_valuez00_7)) == ((long) 39)))
												{	/* BackEnd/c_emit.scm 267 */
													bgl_display_string
														(BGl_string4098z00zzbackend_c_emitz00,
														BGl_za2czd2portza2zd2zzbackend_c_emitz00);
												}
											else
												{	/* BackEnd/c_emit.scm 267 */
													{	/* BackEnd/c_emit.scm 270 */
														obj_t BgL_aux3774z00_1125;

														BgL_aux3774z00_1125 = BgL_valuez00_7;
														switch (CCHAR(BgL_aux3774z00_1125))
															{
															case ((unsigned char) '\r'):

																bgl_display_char(((unsigned char) '\\'),
																	BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																bgl_display_char(((unsigned char) 'r'),
																	BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																break;
															case ((unsigned char) '\t'):

																bgl_display_char(((unsigned char) '\\'),
																	BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																bgl_display_char(((unsigned char) 't'),
																	BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																break;
															case ((unsigned char) '\n'):

																bgl_display_char(((unsigned char) '\\'),
																	BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																bgl_display_char(((unsigned char) 'n'),
																	BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																break;
															case ((unsigned char) '\\'):

																bgl_display_char(((unsigned char) '\\'),
																	BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																bgl_display_char(((unsigned char) '\\'),
																	BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																break;
															default:
																{	/* BackEnd/c_emit.scm 270 */
																	unsigned char BgL_auxz00_2494;

																	BgL_auxz00_2494 = CCHAR(BgL_valuez00_7);
																	bgl_display_char(BgL_auxz00_2494,
																		BGl_za2czd2portza2zd2zzbackend_c_emitz00);
													}}}
													bgl_display_char(((unsigned char) '\''),
														BGl_za2czd2portza2zd2zzbackend_c_emitz00);
										}}
									return
										bgl_display_char(((unsigned char) ')'),
										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
								}
							else
								{	/* BackEnd/c_emit.scm 259 */
									if ((BgL_valuez00_7 == BUNSPEC))
										{	/* BackEnd/c_emit.scm 287 */
											return
												bgl_display_string(BGl_string4099z00zzbackend_c_emitz00,
												BGl_za2czd2portza2zd2zzbackend_c_emitz00);
										}
									else
										{	/* BackEnd/c_emit.scm 287 */
											if (CNSTP(BgL_valuez00_7))
												{	/* BackEnd/c_emit.scm 289 */
													bgl_display_string
														(BGl_string4100z00zzbackend_c_emitz00,
														BGl_za2czd2portza2zd2zzbackend_c_emitz00);
													{	/* BackEnd/c_emit.scm 291 */
														long BgL_arg3906z00_1133;

														BgL_arg3906z00_1133 = CCNST(BgL_valuez00_7);
														bgl_display_obj(BINT(BgL_arg3906z00_1133),
															BGl_za2czd2portza2zd2zzbackend_c_emitz00);
													}
													return
														bgl_display_char(((unsigned char) ')'),
														BGl_za2czd2portza2zd2zzbackend_c_emitz00);
												}
											else
												{	/* BackEnd/c_emit.scm 289 */
													if (STRINGP(BgL_valuez00_7))
														{	/* BackEnd/c_emit.scm 293 */
															bgl_display_char(((unsigned char) '"'),
																BGl_za2czd2portza2zd2zzbackend_c_emitz00);
															{	/* BackEnd/c_emit.scm 295 */
																obj_t BgL_arg3908z00_1135;

																BgL_arg3908z00_1135 =
																	BGl_untrigraphz00zzbackend_c_emitz00
																	(string_for_read(BgL_valuez00_7));
																bgl_display_obj(BgL_arg3908z00_1135,
																	BGl_za2czd2portza2zd2zzbackend_c_emitz00);
															}
															return
																bgl_display_char(((unsigned char) '"'),
																BGl_za2czd2portza2zd2zzbackend_c_emitz00);
														}
													else
														{	/* BackEnd/c_emit.scm 293 */
															if (INTEGERP(BgL_valuez00_7))
																{	/* BackEnd/c_emit.scm 297 */
																	bgl_display_string
																		(BGl_string4095z00zzbackend_c_emitz00,
																		BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																	{	/* BackEnd/c_emit.scm 299 */
																		obj_t BgL_arg3911z00_1138;

																		{	/* BackEnd/c_emit.scm 299 */
																			obj_t BgL_arg3912z00_1139;

																			{
																				BgL_typez00_bglt BgL_auxz00_2521;

																				BgL_auxz00_2521 =
																					(BgL_typez00_bglt)
																					(BGl_za2longza2z00zztype_cachez00);
																				BgL_arg3912z00_1139 =
																					(((BgL_typez00_bglt)
																						CREF(BgL_auxz00_2521))->
																					BgL_namez00);
																			}
																			BgL_arg3911z00_1138 =
																				BGl_stringzd2sanszd2z42z42zztype_toolsz00
																				(BgL_arg3912z00_1139);
																		}
																		bgl_display_obj(BgL_arg3911z00_1138,
																			BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																	}
																	bgl_display_string
																		(BGl_string4089z00zzbackend_c_emitz00,
																		BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																	bgl_display_obj(BgL_valuez00_7,
																		BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																	return
																		bgl_display_string
																		(BGl_string4089z00zzbackend_c_emitz00,
																		BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																}
															else
																{	/* BackEnd/c_emit.scm 297 */
																	if (REALP(BgL_valuez00_7))
																		{	/* BackEnd/c_emit.scm 303 */
																			if (BGL_IS_NAN(REAL_TO_DOUBLE
																					(BgL_valuez00_7)))
																				{	/* BackEnd/c_emit.scm 305 */
																					return
																						bgl_display_string
																						(BGl_string4101z00zzbackend_c_emitz00,
																						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																				}
																			else
																				{	/* BackEnd/c_emit.scm 307 */
																					bool_t BgL_testz00_2535;

																					if (BGL_IS_INF(REAL_TO_DOUBLE
																							(BgL_valuez00_7)))
																						{	/* BackEnd/c_emit.scm 307 */
																							BgL_testz00_2535 =
																								(REAL_TO_DOUBLE(BgL_valuez00_7)
																								> ((double) 0.0));
																						}
																					else
																						{	/* BackEnd/c_emit.scm 307 */
																							BgL_testz00_2535 = ((bool_t) 0);
																						}
																					if (BgL_testz00_2535)
																						{	/* BackEnd/c_emit.scm 307 */
																							return
																								bgl_display_string
																								(BGl_string4102z00zzbackend_c_emitz00,
																								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																						}
																					else
																						{	/* BackEnd/c_emit.scm 307 */
																							if (BGL_IS_INF(REAL_TO_DOUBLE
																									(BgL_valuez00_7)))
																								{	/* BackEnd/c_emit.scm 309 */
																									return
																										bgl_display_string
																										(BGl_string4103z00zzbackend_c_emitz00,
																										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																								}
																							else
																								{	/* BackEnd/c_emit.scm 309 */
																									bgl_display_string
																										(BGl_string4095z00zzbackend_c_emitz00,
																										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																									{	/* BackEnd/c_emit.scm 313 */
																										obj_t BgL_arg3917z00_1144;

																										{	/* BackEnd/c_emit.scm 313 */
																											obj_t BgL_arg3918z00_1145;

																											{
																												BgL_typez00_bglt
																													BgL_auxz00_2547;
																												BgL_auxz00_2547 =
																													(BgL_typez00_bglt)
																													(BGl_za2realza2z00zztype_cachez00);
																												BgL_arg3918z00_1145 =
																													(((BgL_typez00_bglt)
																														CREF
																														(BgL_auxz00_2547))->
																													BgL_namez00);
																											}
																											BgL_arg3917z00_1144 =
																												BGl_stringzd2sanszd2z42z42zztype_toolsz00
																												(BgL_arg3918z00_1145);
																										}
																										bgl_display_obj
																											(BgL_arg3917z00_1144,
																											BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																									}
																									bgl_display_string
																										(BGl_string4089z00zzbackend_c_emitz00,
																										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																									bgl_display_obj
																										(BgL_valuez00_7,
																										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																									return
																										bgl_display_string
																										(BGl_string4089z00zzbackend_c_emitz00,
																										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																								}
																						}
																				}
																		}
																	else
																		{	/* BackEnd/c_emit.scm 303 */
																			if (ELONGP(BgL_valuez00_7))
																				{	/* BackEnd/c_emit.scm 317 */
																					bgl_display_string
																						(BGl_string4095z00zzbackend_c_emitz00,
																						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																					{	/* BackEnd/c_emit.scm 319 */
																						obj_t BgL_arg3922z00_1148;

																						{	/* BackEnd/c_emit.scm 319 */
																							obj_t BgL_arg3923z00_1149;

																							{
																								BgL_typez00_bglt
																									BgL_auxz00_2558;
																								BgL_auxz00_2558 =
																									(BgL_typez00_bglt)
																									(BGl_za2elongza2z00zztype_cachez00);
																								BgL_arg3923z00_1149 =
																									(((BgL_typez00_bglt)
																										CREF(BgL_auxz00_2558))->
																									BgL_namez00);
																							}
																							BgL_arg3922z00_1148 =
																								BGl_stringzd2sanszd2z42z42zztype_toolsz00
																								(BgL_arg3923z00_1149);
																						}
																						bgl_display_obj(BgL_arg3922z00_1148,
																							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																					}
																					bgl_display_string
																						(BGl_string4089z00zzbackend_c_emitz00,
																						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																					{	/* BackEnd/c_emit.scm 321 */
																						obj_t BgL_arg3924z00_1150;

																						BgL_arg3924z00_1150 =
																							BGl_elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																							(BELONG_TO_LONG(BgL_valuez00_7),
																							BNIL);
																						bgl_display_obj(BgL_arg3924z00_1150,
																							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																					}
																					return
																						bgl_display_string
																						(BGl_string4089z00zzbackend_c_emitz00,
																						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																				}
																			else
																				{	/* BackEnd/c_emit.scm 317 */
																					if (LLONGP(BgL_valuez00_7))
																						{	/* BackEnd/c_emit.scm 324 */
																							obj_t BgL_arg3927z00_1153;

																							BgL_arg3927z00_1153 =
																								BGl_llongzd2ze3czd2isoze3zzbackend_c_emitz00
																								(BLLONG_TO_LLONG
																								(BgL_valuez00_7));
																							return
																								bgl_display_obj
																								(BgL_arg3927z00_1153,
																								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																						}
																					else
																						{	/* BackEnd/c_emit.scm 323 */
																							if (BIGNUMP(BgL_valuez00_7))
																								{	/* BackEnd/c_emit.scm 325 */
																									bgl_display_string
																										(BGl_string4104z00zzbackend_c_emitz00,
																										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																									{	/* BackEnd/c_emit.scm 327 */
																										char *BgL_arg3929z00_1155;

																										BgL_arg3929z00_1155 =
																											BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																											(BgL_valuez00_7,
																											BINT(((long) 16)));
																										bgl_display_obj
																											(string_to_bstring
																											(BgL_arg3929z00_1155),
																											BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																									}
																									return
																										bgl_display_string
																										(BGl_string4105z00zzbackend_c_emitz00,
																										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																								}
																							else
																								{	/* BackEnd/c_emit.scm 325 */
																									return
																										bgl_display_obj
																										(BgL_valuez00_7,
																										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
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



/* _emit-atom-value */
	obj_t BGl__emitzd2atomzd2valuez00zzbackend_c_emitz00(obj_t BgL_envz00_2143,
		obj_t BgL_valuez00_2144)
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 249 */
			return BGl_emitzd2atomzd2valuez00zzbackend_c_emitz00(BgL_valuez00_2144);
		}
	}



/* untrigraph */
	BGL_EXPORTED_DEF obj_t BGl_untrigraphz00zzbackend_c_emitz00(obj_t
		BgL_fromz00_8)
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 338 */
			{	/* BackEnd/c_emit.scm 339 */
				long BgL_lenz00_1156;

				BgL_lenz00_1156 = STRING_LENGTH(BgL_fromz00_8);
				{	/* BackEnd/c_emit.scm 339 */
					long BgL_lenzd22zd2_1157;

					BgL_lenzd22zd2_1157 = (BgL_lenz00_1156 - ((long) 2));
					{	/* BackEnd/c_emit.scm 340 */

						{	/* BackEnd/c_emit.scm 342 */
							long BgL_nbzd2colzd2_1158;

							{
								long BgL_iz00_1197;

								long BgL_nbzd2colzd2_1198;

								BgL_iz00_1197 = ((long) 0);
								BgL_nbzd2colzd2_1198 = ((long) 0);
							BgL_zc3anonymousza33963ze3z83_1199:
								if ((BgL_iz00_1197 > BgL_lenzd22zd2_1157))
									{	/* BackEnd/c_emit.scm 345 */
										BgL_nbzd2colzd2_1158 = BgL_nbzd2colzd2_1198;
									}
								else
									{	/* BackEnd/c_emit.scm 345 */
										if (
											(STRING_REF(BgL_fromz00_8,
													BgL_iz00_1197) == ((unsigned char) '?')))
											{	/* BackEnd/c_emit.scm 347 */
												if (
													(STRING_REF(BgL_fromz00_8,
															(BgL_iz00_1197 + ((long) 1))) ==
														((unsigned char) '?')))
													{
														long BgL_nbzd2colzd2_2596;

														long BgL_iz00_2594;

														BgL_iz00_2594 = (BgL_iz00_1197 + ((long) 2));
														BgL_nbzd2colzd2_2596 =
															(BgL_nbzd2colzd2_1198 + ((long) 1));
														BgL_nbzd2colzd2_1198 = BgL_nbzd2colzd2_2596;
														BgL_iz00_1197 = BgL_iz00_2594;
														goto BgL_zc3anonymousza33963ze3z83_1199;
													}
												else
													{
														long BgL_iz00_2598;

														BgL_iz00_2598 = (BgL_iz00_1197 + ((long) 2));
														BgL_iz00_1197 = BgL_iz00_2598;
														goto BgL_zc3anonymousza33963ze3z83_1199;
													}
											}
										else
											{
												long BgL_iz00_2600;

												BgL_iz00_2600 = (BgL_iz00_1197 + ((long) 1));
												BgL_iz00_1197 = BgL_iz00_2600;
												goto BgL_zc3anonymousza33963ze3z83_1199;
											}
									}
							}
							if ((BgL_nbzd2colzd2_1158 == ((long) 0)))
								{	/* BackEnd/c_emit.scm 354 */
									return BgL_fromz00_8;
								}
							else
								{	/* BackEnd/c_emit.scm 359 */
									obj_t BgL_resz00_1160;

									BgL_resz00_1160 =
										make_string(
										(BgL_lenz00_1156 +
											(((long) 3) *
												(BgL_nbzd2colzd2_1158 * ((long) 2)))),
										((unsigned char) ' '));
									{
										long BgL_rz00_1163;

										long BgL_wz00_1164;

										BgL_rz00_1163 = ((long) 0);
										BgL_wz00_1164 = ((long) 0);
									BgL_zc3anonymousza33931ze3z83_1165:
										if ((BgL_rz00_1163 == BgL_lenz00_1156))
											{	/* BackEnd/c_emit.scm 364 */
												return BgL_resz00_1160;
											}
										else
											{	/* BackEnd/c_emit.scm 366 */
												bool_t BgL_testz00_2610;

												if (
													(STRING_REF(BgL_fromz00_8,
															BgL_rz00_1163) == ((unsigned char) '?')))
													{	/* BackEnd/c_emit.scm 366 */
														BgL_testz00_2610 =
															(BgL_rz00_1163 > BgL_lenzd22zd2_1157);
													}
												else
													{	/* BackEnd/c_emit.scm 366 */
														BgL_testz00_2610 = ((bool_t) 1);
													}
												if (BgL_testz00_2610)
													{	/* BackEnd/c_emit.scm 366 */
														{	/* BackEnd/c_emit.scm 368 */
															unsigned char BgL_auxz00_2615;

															BgL_auxz00_2615 =
																STRING_REF(BgL_fromz00_8, BgL_rz00_1163);
															STRING_SET(BgL_resz00_1160, BgL_wz00_1164,
																BgL_auxz00_2615);
														}
														{
															long BgL_wz00_2620;

															long BgL_rz00_2618;

															BgL_rz00_2618 = (BgL_rz00_1163 + ((long) 1));
															BgL_wz00_2620 = (BgL_wz00_1164 + ((long) 1));
															BgL_wz00_1164 = BgL_wz00_2620;
															BgL_rz00_1163 = BgL_rz00_2618;
															goto BgL_zc3anonymousza33931ze3z83_1165;
														}
													}
												else
													{	/* BackEnd/c_emit.scm 366 */
														if (
															(STRING_REF(BgL_fromz00_8,
																	(BgL_rz00_1163 + ((long) 1))) ==
																((unsigned char) '?')))
															{	/* BackEnd/c_emit.scm 370 */
																STRING_SET(BgL_resz00_1160, BgL_wz00_1164,
																	((unsigned char) '\\'));
																{	/* BackEnd/c_emit.scm 377 */
																	long BgL_auxz00_2627;

																	BgL_auxz00_2627 =
																		(BgL_wz00_1164 + ((long) 1));
																	STRING_SET(BgL_resz00_1160, BgL_auxz00_2627,
																		((unsigned char) '0'));
																}
																{	/* BackEnd/c_emit.scm 378 */
																	long BgL_auxz00_2630;

																	BgL_auxz00_2630 =
																		(BgL_wz00_1164 + ((long) 2));
																	STRING_SET(BgL_resz00_1160, BgL_auxz00_2630,
																		((unsigned char) '7'));
																}
																{	/* BackEnd/c_emit.scm 379 */
																	long BgL_auxz00_2633;

																	BgL_auxz00_2633 =
																		(BgL_wz00_1164 + ((long) 3));
																	STRING_SET(BgL_resz00_1160, BgL_auxz00_2633,
																		((unsigned char) '7'));
																}
																{	/* BackEnd/c_emit.scm 380 */
																	long BgL_auxz00_2636;

																	BgL_auxz00_2636 =
																		(BgL_wz00_1164 + ((long) 4));
																	STRING_SET(BgL_resz00_1160, BgL_auxz00_2636,
																		((unsigned char) '\\'));
																}
																{	/* BackEnd/c_emit.scm 381 */
																	long BgL_auxz00_2639;

																	BgL_auxz00_2639 =
																		(BgL_wz00_1164 + ((long) 5));
																	STRING_SET(BgL_resz00_1160, BgL_auxz00_2639,
																		((unsigned char) '0'));
																}
																{	/* BackEnd/c_emit.scm 382 */
																	long BgL_auxz00_2642;

																	BgL_auxz00_2642 =
																		(BgL_wz00_1164 + ((long) 6));
																	STRING_SET(BgL_resz00_1160, BgL_auxz00_2642,
																		((unsigned char) '7'));
																}
																{	/* BackEnd/c_emit.scm 383 */
																	long BgL_auxz00_2645;

																	BgL_auxz00_2645 =
																		(BgL_wz00_1164 + ((long) 7));
																	STRING_SET(BgL_resz00_1160, BgL_auxz00_2645,
																		((unsigned char) '7'));
																}
																{
																	long BgL_wz00_2650;

																	long BgL_rz00_2648;

																	BgL_rz00_2648 = (BgL_rz00_1163 + ((long) 2));
																	BgL_wz00_2650 = (BgL_wz00_1164 + ((long) 8));
																	BgL_wz00_1164 = BgL_wz00_2650;
																	BgL_rz00_1163 = BgL_rz00_2648;
																	goto BgL_zc3anonymousza33931ze3z83_1165;
																}
															}
														else
															{	/* BackEnd/c_emit.scm 370 */
																STRING_SET(BgL_resz00_1160, BgL_wz00_1164,
																	((unsigned char) '?'));
																{	/* BackEnd/c_emit.scm 372 */
																	unsigned char BgL_auxz00_2655;

																	long BgL_auxz00_2653;

																	BgL_auxz00_2655 =
																		STRING_REF(BgL_fromz00_8,
																		(BgL_rz00_1163 + ((long) 1)));
																	BgL_auxz00_2653 =
																		(BgL_wz00_1164 + ((long) 1));
																	STRING_SET(BgL_resz00_1160, BgL_auxz00_2653,
																		BgL_auxz00_2655);
																}
																{
																	long BgL_wz00_2661;

																	long BgL_rz00_2659;

																	BgL_rz00_2659 = (BgL_rz00_1163 + ((long) 2));
																	BgL_wz00_2661 = (BgL_wz00_1164 + ((long) 2));
																	BgL_wz00_1164 = BgL_wz00_2661;
																	BgL_rz00_1163 = BgL_rz00_2659;
																	goto BgL_zc3anonymousza33931ze3z83_1165;
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



/* _untrigraph */
	obj_t BGl__untrigraphz00zzbackend_c_emitz00(obj_t BgL_envz00_2145,
		obj_t BgL_fromz00_2146)
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 338 */
			return BGl_untrigraphz00zzbackend_c_emitz00(BgL_fromz00_2146);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbackend_c_emitz00()
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbackend_c_emitz00()
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbackend_c_emitz00()
	{
		AN_OBJECT;
		{	/* BackEnd/c_emit.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string4106z00zzbackend_c_emitz00));
			BGl_modulezd2initializa7ationz75zzengine_configurez00(((long) 96794353),
				BSTRING_TO_STRING(BGl_string4106z00zzbackend_c_emitz00));
			BGl_modulezd2initializa7ationz75zztools_licensez00(((long) 156724265),
				BSTRING_TO_STRING(BGl_string4106z00zzbackend_c_emitz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4106z00zzbackend_c_emitz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string4106z00zzbackend_c_emitz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4106z00zzbackend_c_emitz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4106z00zzbackend_c_emitz00));
			BGl_modulezd2initializa7ationz75zzcgen_copz00(((long) 241571075),
				BSTRING_TO_STRING(BGl_string4106z00zzbackend_c_emitz00));
			BGl_modulezd2initializa7ationz75zzcgen_emitzd2copzd2(((long) 356045708),
				BSTRING_TO_STRING(BGl_string4106z00zzbackend_c_emitz00));
			return
				BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 195902195),
				BSTRING_TO_STRING(BGl_string4106z00zzbackend_c_emitz00));
		}
	}

#ifdef __cplusplus
}
#endif
