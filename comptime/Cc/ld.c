/*===========================================================================*/
/*   (Cc/ld.scm)                                                             */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cc/ld.scm)*/
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


	extern obj_t BGl_za2doublezd2ldzd2libszf3za2zf3zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_ldz00zzcc_ldz00(obj_t, bool_t);
	BGL_IMPORT bool_t bigloo_strcmp(obj_t, obj_t);
	extern obj_t BGl_za2czd2debugza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_bigloozd2configzd2zz__configurez00(obj_t);
	extern obj_t BGl_za2ldzd2relativeza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_za2bigloozd2userzd2libza2z00zzengine_paramz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_za2unsafezd2libraryza2zd2zzengine_paramz00;
	static obj_t BGl_requirezd2initializa7ationz75zzcc_ldz00 = BUNSPEC;
	extern obj_t BGl_za2cczd2optionsza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t
		BGl_libraryzd2translationzd2tablezd2addz12zc0zz__libraryz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2staticzd2allzd2bigloozf3za2zf3zzengine_paramz00;
	static obj_t BGl_genericzd2initzd2zzcc_ldz00();
	extern obj_t BGl_unixzd2filenamezd2zzcc_execz00(obj_t);
	extern obj_t BGl_za2gczd2libza2zd2zzengine_paramz00;
	static obj_t BGl_unixzd2ldzd2zzcc_ldz00(obj_t, bool_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_za2bigloozd2libza2zd2zzengine_paramz00;
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	static obj_t BGl_cnstzd2initzd2zzcc_ldz00();
	extern obj_t BGl_za2profilezd2libraryza2zd2zzengine_paramz00;
	extern obj_t BGl_za2multizd2threadedzd2gczf3za2zf3zzengine_paramz00;
	extern obj_t BGl_za2staticzd2bigloozf3za2z21zzengine_paramz00;
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_libraryzd2suffixeszd2zzcc_ldz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcc_ldz00();
	extern obj_t BGl_za2withzd2filesza2zd2zzengine_paramz00;
	extern obj_t BGl_execz00zzcc_execz00(obj_t, bool_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2ozd2filesza2zd2zzengine_paramz00;
	extern obj_t BGl_za2libzd2dirza2zd2zzengine_paramz00;
	extern obj_t BGl_za2ldzd2optionsza2zd2zzengine_paramz00;
	extern obj_t BGl_za2gczd2customzf3za2z21zzengine_paramz00;
	static obj_t BGl_zc3exitza32563ze3z83zzcc_ldz00(obj_t);
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	extern obj_t BGl_za2ldzd2debugzd2optionza2z00zzengine_paramz00;
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_za2ldzd2ozd2optionza2z00zzengine_paramz00;
	static obj_t BGl_profilezd2gczd2debugzd2libraryzd2suffixz00zzcc_ldz00();
	extern obj_t BGl_getzd2evalzd2librariesz00zzmodule_evalz00();
	extern obj_t BGl_stringza2zd2ze3stringz93zztools_miscz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcc_ldz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_evalz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_configurez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcc_execz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__libraryz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__processz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long,
		char *);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00;
	static obj_t BGl_libraryzd2evalzd2suffixesz00zzcc_ldz00();
	static obj_t BGl__ldz00zzcc_ldz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	static obj_t BGl_zc3exitza31921ze3z83zzcc_ldz00(obj_t);
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	extern obj_t BGl_za2stripza2z00zzengine_paramz00;
	static obj_t BGl_libraryzd2ze3oszd2fileze3zzcc_ldz00(obj_t, obj_t, obj_t,
		bool_t, bool_t);
	BGL_IMPORT obj_t BGl_oszd2classzd2zz__osz00();
	extern obj_t BGl_za2additionalzd2bigloozd2librariesza2z00zzengine_paramz00;
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_za2ccza2z00zzengine_paramz00;
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	extern obj_t BGl_za2ldzd2optimzd2flagsza2z00zzengine_paramz00;
	extern obj_t BGl_za2ldzd2postzd2optionsza2z00zzengine_paramz00;
	extern obj_t BGl_za2destza2z00zzengine_paramz00;
	BGL_IMPORT obj_t BGl_libraryzd2filezd2namez00zz__libraryz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_runzd2processzd2zz__processz00(obj_t, obj_t);
	static obj_t BGl_loopz00zzcc_ldz00(obj_t);
	extern obj_t BGl_stringzd2splitzd2charz00zztools_miscz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	BGL_IMPORT bool_t rgc_fill_buffer(obj_t);
	static obj_t BGl_loopz72z72zzcc_ldz00(obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t BGl__libraryzd2suffixeszd2zzcc_ldz00(obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_defaultzd2executablezd2namez00zz__osz00();
	static obj_t BGl_win32zd2ldzd2zzcc_ldz00(obj_t);
	BGL_IMPORT obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcc_ldz00();
	static obj_t BGl_methodzd2initzd2zzcc_ldz00();
	static obj_t __cnst[13];


	BGL_IMPORT obj_t BGl_makezd2staticzd2libzd2namezd2envz00zz__osz00;
	   
		 
		DEFINE_STRING(BGl_string2757z00zzcc_ldz00,
		BgL_bgl_string2757za700za7za7c2790za7, "unix", 4);
	      DEFINE_STRING(BGl_string2758z00zzcc_ldz00,
		BgL_bgl_string2758za700za7za7c2791za7, "mingw", 5);
	      DEFINE_STRING(BGl_string2760z00zzcc_ldz00,
		BgL_bgl_string2760za700za7za7c2792za7, "ld", 2);
	      DEFINE_STRING(BGl_string2759z00zzcc_ldz00,
		BgL_bgl_string2759za700za7za7c2793za7, "win32", 5);
	      DEFINE_STRING(BGl_string2761z00zzcc_ldz00,
		BgL_bgl_string2761za700za7za7c2794za7, "Unknown os", 10);
	      DEFINE_STRING(BGl_string2762z00zzcc_ldz00,
		BgL_bgl_string2762za700za7za7c2795za7, "_p", 2);
	      DEFINE_STRING(BGl_string2763z00zzcc_ldz00,
		BgL_bgl_string2763za700za7za7c2796za7, "", 0);
	      DEFINE_STRING(BGl_string2764z00zzcc_ldz00,
		BgL_bgl_string2764za700za7za7c2797za7, "-l", 2);
	      DEFINE_STRING(BGl_string2765z00zzcc_ldz00,
		BgL_bgl_string2765za700za7za7c2798za7, "Can't find any `", 16);
	      DEFINE_STRING(BGl_string2766z00zzcc_ldz00,
		BgL_bgl_string2766za700za7za7c2799za7, "' library", 9);
	      DEFINE_STRING(BGl_string2767z00zzcc_ldz00,
		BgL_bgl_string2767za700za7za7c2800za7, "bigloo", 6);
	      DEFINE_STRING(BGl_string2768z00zzcc_ldz00,
		BgL_bgl_string2768za700za7za7c2801za7, "Can't find library \"", 20);
	      DEFINE_STRING(BGl_string2770z00zzcc_ldz00,
		BgL_bgl_string2770za700za7za7c2802za7, " in path \"", 10);
	      DEFINE_STRING(BGl_string2769z00zzcc_ldz00,
		BgL_bgl_string2769za700za7za7c2803za7, "\"", 1);
	      DEFINE_STRING(BGl_string2771z00zzcc_ldz00,
		BgL_bgl_string2771za700za7za7c2804za7, ")", 1);
	      DEFINE_STRING(BGl_string2772z00zzcc_ldz00,
		BgL_bgl_string2772za700za7za7c2805za7, "   . ld (", 9);
	      DEFINE_STRING(BGl_string2773z00zzcc_ldz00,
		BgL_bgl_string2773za700za7za7c2806za7, " ", 1);
	      DEFINE_STRING(BGl_string2774z00zzcc_ldz00,
		BgL_bgl_string2774za700za7za7c2807za7, ".", 1);
	      DEFINE_STRING(BGl_string2775z00zzcc_ldz00,
		BgL_bgl_string2775za700za7za7c2808za7, "-L", 2);
	      DEFINE_STRING(BGl_string2776z00zzcc_ldz00,
		BgL_bgl_string2776za700za7za7c2809za7, "      [", 7);
	      DEFINE_STRING(BGl_string2777z00zzcc_ldz00,
		BgL_bgl_string2777za700za7za7c2810za7, "regular-grammar", 15);
	      DEFINE_STRING(BGl_string2778z00zzcc_ldz00,
		BgL_bgl_string2778za700za7za7c2811za7, "Illegal match", 13);
	      DEFINE_STRING(BGl_string2780z00zzcc_ldz00,
		BgL_bgl_string2780za700za7za7c2812za7, "/link", 5);
	      DEFINE_STRING(BGl_string2779z00zzcc_ldz00,
		BgL_bgl_string2779za700za7za7c2813za7, "bigloo_mt", 9);
	      DEFINE_STRING(BGl_string2781z00zzcc_ldz00,
		BgL_bgl_string2781za700za7za7c2814za7, "[", 1);
	      DEFINE_STRING(BGl_string2782z00zzcc_ldz00,
		BgL_bgl_string2782za700za7za7c2815za7, "]", 1);
	      DEFINE_STRING(BGl_string2783z00zzcc_ldz00,
		BgL_bgl_string2783za700za7za7c2816za7, "      ", 6);
	      DEFINE_STRING(BGl_string2784z00zzcc_ldz00,
		BgL_bgl_string2784za700za7za7c2817za7, "/LIBPATH:", 9);
	      DEFINE_STRING(BGl_string2785z00zzcc_ldz00,
		BgL_bgl_string2785za700za7za7c2818za7, "cc_ld", 5);
	      DEFINE_STRING(BGl_string2786z00zzcc_ldz00,
		BgL_bgl_string2786za700za7za7c2819za7,
		"(:wait #t) dlopen-lib non-custom-gc-directory c-strip-flag shared-link-option static-link-option have-shared-library (\"_es\") (\"_eu\" \"_es\") (\"_ep\" \"_es\") (\"_s\") (\"_u\" \"_s\") (\"_p\" \"_s\") ",
		184);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ldzd2envzd2zzcc_ldz00,
		BgL_bgl__ldza700za7za7cc_ldza7002820z00, BGl__ldz00zzcc_ldz00, 0L, BUNSPEC,
		2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_libraryzd2suffixeszd2envz00zzcc_ldz00,
		BgL_bgl__libraryza7d2suffi2821za7, BGl__libraryzd2suffixeszd2zzcc_ldz00, 0L,
		BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_makezd2sharedzd2libzd2namezd2envz00zz__osz00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcc_ldz00(long
		BgL_checksumz00_1609, char *BgL_fromz00_1610)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcc_ldz00))
				{
					BGl_requirezd2initializa7ationz75zzcc_ldz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcc_ldz00();
					BGl_cnstzd2initzd2zzcc_ldz00();
					BGl_importedzd2moduleszd2initz00zzcc_ldz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcc_ldz00()
	{
		AN_OBJECT;
		{	/* Cc/ld.scm 15 */
			BGl_modulezd2initializa7ationz75zz__configurez00(((long) 0), "cc_ld");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cc_ld");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cc_ld");
			BGl_modulezd2initializa7ationz75zz__libraryz00(((long) 0), "cc_ld");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "cc_ld");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cc_ld");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "cc_ld");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cc_ld");
			BGl_modulezd2initializa7ationz75zz__processz00(((long) 0), "cc_ld");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cc_ld");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcc_ldz00()
	{
		AN_OBJECT;
		{	/* Cc/ld.scm 15 */
			{	/* Cc/ld.scm 15 */
				obj_t BgL_cportz00_1601;

				BgL_cportz00_1601 =
					bgl_open_input_string(BGl_string2786z00zzcc_ldz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1602;

					BgL_iz00_1602 = ((long) 12);
				BgL_loopz00_1603:
					if ((BgL_iz00_1602 == ((long) -1)))
						{	/* Cc/ld.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cc/ld.scm 15 */
							{	/* Cc/ld.scm 15 */
								obj_t BgL_arg2789z00_1605;

								{	/* Cc/ld.scm 15 */

									{	/* Cc/ld.scm 15 */
										obj_t BgL_locationz00_1607;

										BgL_locationz00_1607 = BBOOL(((bool_t) 0));
										{	/* Cc/ld.scm 15 */

											BgL_arg2789z00_1605 =
												BGl_readz00zz__readerz00(BgL_cportz00_1601,
												BgL_locationz00_1607);
										}
									}
								}
								{	/* Cc/ld.scm 15 */
									int BgL_auxz00_1633;

									BgL_auxz00_1633 = (int) (BgL_iz00_1602);
									CNST_TABLE_SET(BgL_auxz00_1633, BgL_arg2789z00_1605);
							}}
							{	/* Cc/ld.scm 15 */
								int BgL_auxz00_1608;

								BgL_auxz00_1608 = (int) ((BgL_iz00_1602 - ((long) 1)));
								{
									long BgL_iz00_1638;

									BgL_iz00_1638 = (long) (BgL_auxz00_1608);
									BgL_iz00_1602 = BgL_iz00_1638;
									goto BgL_loopz00_1603;
								}
							}
						}
				}
			}
		}
	}



/* ld */
	BGL_EXPORTED_DEF obj_t BGl_ldz00zzcc_ldz00(obj_t BgL_namez00_1,
		bool_t BgL_needzd2tozd2returnz00_2)
	{
		AN_OBJECT;
		{	/* Cc/ld.scm 30 */
			if (bigloo_strcmp(BGl_oszd2classzd2zz__osz00(),
					BGl_string2757z00zzcc_ldz00))
				{	/* Cc/ld.scm 32 */
					return
						BGl_unixzd2ldzd2zzcc_ldz00(BgL_namez00_1,
						BgL_needzd2tozd2returnz00_2);
				}
			else
				{	/* Cc/ld.scm 32 */
					if (bigloo_strcmp(BGl_oszd2classzd2zz__osz00(),
							BGl_string2758z00zzcc_ldz00))
						{	/* Cc/ld.scm 34 */
							return
								BGl_unixzd2ldzd2zzcc_ldz00(BgL_namez00_1,
								BgL_needzd2tozd2returnz00_2);
						}
					else
						{	/* Cc/ld.scm 34 */
							if (bigloo_strcmp(BGl_oszd2classzd2zz__osz00(),
									BGl_string2759z00zzcc_ldz00))
								{	/* Cc/ld.scm 36 */
									return BGl_win32zd2ldzd2zzcc_ldz00(BgL_namez00_1);
								}
							else
								{	/* Cc/ld.scm 36 */
									return
										BGl_userzd2errorzd2zztools_errorz00
										(BGl_string2760z00zzcc_ldz00, BGl_string2761z00zzcc_ldz00,
										BGl_oszd2classzd2zz__osz00(), BNIL);
								}
						}
				}
		}
	}



/* _ld */
	obj_t BGl__ldz00zzcc_ldz00(obj_t BgL_envz00_1589, obj_t BgL_namez00_1590,
		obj_t BgL_needzd2tozd2returnz00_1591)
	{
		AN_OBJECT;
		{	/* Cc/ld.scm 30 */
			return
				BGl_ldz00zzcc_ldz00(BgL_namez00_1590,
				CBOOL(BgL_needzd2tozd2returnz00_1591));
		}
	}



/* library-suffixes */
	BGL_EXPORTED_DEF obj_t BGl_libraryzd2suffixeszd2zzcc_ldz00()
	{
		AN_OBJECT;
		{	/* Cc/ld.scm 44 */
			if (CBOOL(BGl_za2profilezd2libraryza2zd2zzengine_paramz00))
				{	/* Cc/ld.scm 46 */
					return CNST_TABLE_REF(((long) 0));
				}
			else
				{	/* Cc/ld.scm 46 */
					if (CBOOL(BGl_za2unsafezd2libraryza2zd2zzengine_paramz00))
						{	/* Cc/ld.scm 47 */
							return CNST_TABLE_REF(((long) 1));
						}
					else
						{	/* Cc/ld.scm 47 */
							return CNST_TABLE_REF(((long) 2));
		}}}
	}



/* _library-suffixes */
	obj_t BGl__libraryzd2suffixeszd2zzcc_ldz00(obj_t BgL_envz00_1592)
	{
		AN_OBJECT;
		{	/* Cc/ld.scm 44 */
			return BGl_libraryzd2suffixeszd2zzcc_ldz00();
		}
	}



/* library-eval-suffixes */
	obj_t BGl_libraryzd2evalzd2suffixesz00zzcc_ldz00()
	{
		AN_OBJECT;
		{	/* Cc/ld.scm 53 */
			if (CBOOL(BGl_za2profilezd2libraryza2zd2zzengine_paramz00))
				{	/* Cc/ld.scm 55 */
					return CNST_TABLE_REF(((long) 3));
				}
			else
				{	/* Cc/ld.scm 55 */
					if (CBOOL(BGl_za2unsafezd2libraryza2zd2zzengine_paramz00))
						{	/* Cc/ld.scm 56 */
							return CNST_TABLE_REF(((long) 4));
						}
					else
						{	/* Cc/ld.scm 56 */
							return CNST_TABLE_REF(((long) 5));
		}}}
	}



/* profile-gc-debug-library-suffix */
	obj_t BGl_profilezd2gczd2debugzd2libraryzd2suffixz00zzcc_ldz00()
	{
		AN_OBJECT;
		{	/* Cc/ld.scm 68 */
			if (CBOOL(BGl_za2profilezd2libraryza2zd2zzengine_paramz00))
				{	/* Cc/ld.scm 70 */
					return BGl_string2762z00zzcc_ldz00;
				}
			else
				{	/* Cc/ld.scm 70 */
					return BGl_string2763z00zzcc_ldz00;
				}
		}
	}



/* library->os-file */
	obj_t BGl_libraryzd2ze3oszd2fileze3zzcc_ldz00(obj_t BgL_libraryz00_3,
		obj_t BgL_suffixesz00_4, obj_t BgL_staticpz00_5, bool_t BgL_forcepz00_6,
		bool_t BgL_foreignpz00_7)
	{
		AN_OBJECT;
		{	/* Cc/ld.scm 76 */
		BGl_libraryzd2ze3oszd2fileze3zzcc_ldz00:
			{	/* Cc/ld.scm 77 */
				obj_t BgL_backendz00_194;

				{	/* Cc/ld.scm 77 */
					obj_t BgL_arg1742z00_241;

					BgL_arg1742z00_241 = BGl_thezd2backendzd2zzbackend_backendz00();
					{
						BgL_backendz00_bglt BgL_auxz00_1674;

						BgL_auxz00_1674 = (BgL_backendz00_bglt) (BgL_arg1742z00_241);
						BgL_backendz00_194 =
							(((BgL_backendz00_bglt) CREF(BgL_auxz00_1674))->BgL_srfi0z00);
					}
				}
				{	/* Cc/ld.scm 78 */
					bool_t BgL_testz00_1677;

					if (BgL_foreignpz00_7)
						{	/* Cc/ld.scm 78 */
							BgL_testz00_1677 = ((bool_t) 1);
						}
					else
						{	/* Cc/ld.scm 79 */
							obj_t BgL__andtest_1594z00_238;

							BgL__andtest_1594z00_238 =
								BGl_za2ldzd2relativeza2zd2zzengine_paramz00;
							if (CBOOL(BgL__andtest_1594z00_238))
								{	/* Cc/ld.scm 80 */
									bool_t BgL_testz00_1681;

									if (CBOOL(BGl_za2profilezd2libraryza2zd2zzengine_paramz00))
										{	/* Cc/ld.scm 80 */
											BgL_testz00_1681 = ((bool_t) 0);
										}
									else
										{	/* Cc/ld.scm 80 */
											BgL_testz00_1681 = ((bool_t) 1);
										}
									if (BgL_testz00_1681)
										{	/* Cc/ld.scm 81 */
											bool_t BgL_testz00_1684;

											if (CBOOL(BgL_staticpz00_5))
												{	/* Cc/ld.scm 81 */
													BgL_testz00_1684 = ((bool_t) 1);
												}
											else
												{	/* Cc/ld.scm 81 */
													if (CBOOL
														(BGl_za2staticzd2allzd2bigloozf3za2zf3zzengine_paramz00))
														{	/* Cc/ld.scm 81 */
															BgL_testz00_1684 = ((bool_t) 1);
														}
													else
														{	/* Cc/ld.scm 81 */
															BgL_testz00_1684 =
																CBOOL
																(BGl_za2staticzd2bigloozf3za2z21zzengine_paramz00);
														}
												}
											if (BgL_testz00_1684)
												{	/* Cc/ld.scm 81 */
													BgL_testz00_1677 = ((bool_t) 0);
												}
											else
												{	/* Cc/ld.scm 81 */
													BgL_testz00_1677 = ((bool_t) 1);
												}
										}
									else
										{	/* Cc/ld.scm 80 */
											BgL_testz00_1677 = ((bool_t) 0);
										}
								}
							else
								{	/* Cc/ld.scm 79 */
									BgL_testz00_1677 = ((bool_t) 0);
								}
						}
					if (BgL_testz00_1677)
						{	/* Cc/ld.scm 83 */
							obj_t BgL_arg1692z00_196;

							obj_t BgL_arg1693z00_197;

							{	/* Cc/ld.scm 83 */
								bool_t BgL_testz00_1690;

								if (bigloo_strcmp(BGl_oszd2classzd2zz__osz00(),
										BGl_string2757z00zzcc_ldz00))
									{	/* Cc/ld.scm 83 */
										BgL_testz00_1690 = ((bool_t) 1);
									}
								else
									{	/* Cc/ld.scm 83 */
										BgL_testz00_1690 =
											bigloo_strcmp(BGl_oszd2classzd2zz__osz00(),
											BGl_string2758z00zzcc_ldz00);
									}
								if (BgL_testz00_1690)
									{	/* Cc/ld.scm 83 */
										BgL_arg1692z00_196 = BGl_string2764z00zzcc_ldz00;
									}
								else
									{	/* Cc/ld.scm 83 */
										if (bigloo_strcmp(BGl_oszd2classzd2zz__osz00(),
												BGl_string2759z00zzcc_ldz00))
											{	/* Cc/ld.scm 86 */
												BgL_arg1692z00_196 = BGl_string2763z00zzcc_ldz00;
											}
										else
											{	/* Cc/ld.scm 86 */
												BgL_arg1692z00_196 =
													BGl_userzd2errorzd2zztools_errorz00
													(BGl_string2760z00zzcc_ldz00,
													BGl_string2761z00zzcc_ldz00,
													BGl_oszd2classzd2zz__osz00(), BNIL);
											}
									}
							}
							if (BgL_foreignpz00_7)
								{	/* Cc/ld.scm 91 */
									obj_t BgL_res2735z00_1188;

									{	/* Cc/ld.scm 91 */
										obj_t BgL_symbolz00_1186;

										BgL_symbolz00_1186 = BgL_libraryz00_3;
										{	/* Cc/ld.scm 91 */
											obj_t BgL_arg2063z00_1187;

											BgL_arg2063z00_1187 =
												SYMBOL_TO_STRING(BgL_symbolz00_1186);
											BgL_res2735z00_1188 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_1187);
										}
									}
									BgL_arg1693z00_197 = BgL_res2735z00_1188;
								}
							else
								{	/* Cc/ld.scm 90 */
									BgL_arg1693z00_197 =
										BGl_libraryzd2filezd2namez00zz__libraryz00(BgL_libraryz00_3,
										CAR(BgL_suffixesz00_4), BgL_backendz00_194);
								}
							return string_append(BgL_arg1692z00_196, BgL_arg1693z00_197);
						}
					else
						{
							obj_t BgL_ssz00_213;

							BgL_ssz00_213 = BgL_suffixesz00_4;
						BgL_zc3anonymousza31710ze3z83_214:
							if (NULLP(BgL_ssz00_213))
								{	/* Cc/ld.scm 94 */
									if (CBOOL(BgL_staticpz00_5))
										{	/* Cc/ld.scm 96 */
											obj_t BgL_arg1714z00_217;

											{	/* Cc/ld.scm 97 */
												obj_t BgL_arg1718z00_219;

												{	/* Cc/ld.scm 98 */
													obj_t BgL_res2736z00_1193;

													{	/* Cc/ld.scm 98 */
														obj_t BgL_symbolz00_1191;

														BgL_symbolz00_1191 = BgL_libraryz00_3;
														{	/* Cc/ld.scm 98 */
															obj_t BgL_arg2063z00_1192;

															BgL_arg2063z00_1192 =
																SYMBOL_TO_STRING(BgL_symbolz00_1191);
															BgL_res2736z00_1193 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_1192);
														}
													}
													BgL_arg1718z00_219 = BgL_res2736z00_1193;
												}
												BgL_arg1714z00_217 =
													string_append_3(BGl_string2765z00zzcc_ldz00,
													BgL_arg1718z00_219, BGl_string2766z00zzcc_ldz00);
											}
											return
												BGl_errorz00zz__errorz00(BGl_string2767z00zzcc_ldz00,
												BgL_arg1714z00_217,
												BGl_za2libzd2dirza2zd2zzengine_paramz00);
										}
									else
										{
											obj_t BgL_staticpz00_1715;

											BgL_staticpz00_1715 = BTRUE;
											BgL_staticpz00_5 = BgL_staticpz00_1715;
											goto BGl_libraryzd2ze3oszd2fileze3zzcc_ldz00;
										}
								}
							else
								{	/* Cc/ld.scm 102 */
									obj_t BgL_fnamez00_221;

									{	/* Cc/ld.scm 102 */
										obj_t BgL_fun1739z00_234;

										if (CBOOL(BgL_staticpz00_5))
											{	/* Cc/ld.scm 102 */
												BgL_fun1739z00_234 =
													BGl_makezd2staticzd2libzd2namezd2envz00zz__osz00;
											}
										else
											{	/* Cc/ld.scm 102 */
												BgL_fun1739z00_234 =
													BGl_makezd2sharedzd2libzd2namezd2envz00zz__osz00;
											}
										{	/* Cc/ld.scm 105 */
											obj_t BgL_arg1738z00_235;

											BgL_arg1738z00_235 =
												BGl_libraryzd2filezd2namez00zz__libraryz00
												(BgL_libraryz00_3, CAR(BgL_ssz00_213),
												BgL_backendz00_194);
											BgL_fnamez00_221 =
												PROCEDURE_ENTRY(BgL_fun1739z00_234) (BgL_fun1739z00_234,
												BgL_arg1738z00_235, BgL_backendz00_194, BEOA);
										}
									}
									{	/* Cc/ld.scm 102 */
										obj_t BgL_namez00_222;

										BgL_namez00_222 =
											BGl_findzd2filezf2pathz20zz__osz00(BgL_fnamez00_221,
											BGl_za2libzd2dirza2zd2zzengine_paramz00);
										{	/* Cc/ld.scm 107 */

											if (STRINGP(BgL_namez00_222))
												{	/* Cc/ld.scm 108 */
													return BgL_namez00_222;
												}
											else
												{	/* Cc/ld.scm 108 */
													{	/* Cc/ld.scm 111 */
														obj_t BgL_arg1725z00_225;

														BgL_arg1725z00_225 =
															string_append_3(BGl_string2768z00zzcc_ldz00,
															BgL_fnamez00_221, BGl_string2769z00zzcc_ldz00);
														{	/* Cc/ld.scm 111 */
															obj_t BgL_list1731z00_228;

															{	/* Cc/ld.scm 111 */
																obj_t BgL_arg1732z00_229;

																{	/* Cc/ld.scm 111 */
																	obj_t BgL_arg1733z00_230;

																	{	/* Cc/ld.scm 111 */
																		obj_t BgL_arg1734z00_231;

																		{	/* Cc/ld.scm 111 */
																			obj_t BgL_arg1735z00_232;

																			BgL_arg1735z00_232 =
																				MAKE_PAIR(BGl_string2769z00zzcc_ldz00,
																				BNIL);
																			BgL_arg1734z00_231 =
																				MAKE_PAIR
																				(BGl_za2libzd2dirza2zd2zzengine_paramz00,
																				BgL_arg1735z00_232);
																		}
																		BgL_arg1733z00_230 =
																			MAKE_PAIR(BGl_string2770z00zzcc_ldz00,
																			BgL_arg1734z00_231);
																	}
																	BgL_arg1732z00_229 =
																		MAKE_PAIR(BgL_arg1725z00_225,
																		BgL_arg1733z00_230);
																}
																BgL_list1731z00_228 =
																	MAKE_PAIR(BGl_string2767z00zzcc_ldz00,
																	BgL_arg1732z00_229);
															}
															BGl_warningz00zz__errorz00(BgL_list1731z00_228);
														}
													}
													{
														obj_t BgL_ssz00_1732;

														BgL_ssz00_1732 = CDR(BgL_ssz00_213);
														BgL_ssz00_213 = BgL_ssz00_1732;
														goto BgL_zc3anonymousza31710ze3z83_214;
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



/* unix-ld */
	obj_t BGl_unixzd2ldzd2zzcc_ldz00(obj_t BgL_namez00_8,
		bool_t BgL_needzd2tozd2returnz00_9)
	{
		AN_OBJECT;
		{	/* Cc/ld.scm 121 */
			{	/* Cc/ld.scm 122 */
				obj_t BgL_list1743z00_242;

				{	/* Cc/ld.scm 122 */
					obj_t BgL_arg1745z00_244;

					{	/* Cc/ld.scm 122 */
						obj_t BgL_arg1746z00_245;

						{	/* Cc/ld.scm 122 */
							obj_t BgL_arg1748z00_247;

							BgL_arg1748z00_247 =
								MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
							BgL_arg1746z00_245 =
								MAKE_PAIR(BGl_string2771z00zzcc_ldz00, BgL_arg1748z00_247);
						}
						BgL_arg1745z00_244 =
							MAKE_PAIR(BGl_za2ccza2z00zzengine_paramz00, BgL_arg1746z00_245);
					}
					BgL_list1743z00_242 =
						MAKE_PAIR(BGl_string2772z00zzcc_ldz00, BgL_arg1745z00_244);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1743z00_242);
			}
			{	/* Cc/ld.scm 124 */
				obj_t BgL_staticpz00_248;

				{	/* Cc/ld.scm 124 */
					bool_t BgL__ortest_1596z00_444;

					if (CBOOL(BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF((
										(long) 6)))))
						{	/* Cc/ld.scm 124 */
							BgL__ortest_1596z00_444 = ((bool_t) 0);
						}
					else
						{	/* Cc/ld.scm 124 */
							BgL__ortest_1596z00_444 = ((bool_t) 1);
						}
					if (BgL__ortest_1596z00_444)
						{	/* Cc/ld.scm 124 */
							BgL_staticpz00_248 = BBOOL(BgL__ortest_1596z00_444);
						}
					else
						{	/* Cc/ld.scm 125 */
							obj_t BgL_port1597z00_445;

							{	/* Cc/ld.scm 125 */
								obj_t BgL_g2739z00_748;

								BgL_g2739z00_748 = BGl_za2ldzd2optionsza2zd2zzengine_paramz00;
								{	/* Cc/ld.scm 125 */

									BgL_port1597z00_445 =
										BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
										(BgL_g2739z00_748, BINT(((long) 0)));
							}}
							{	/* Cc/ld.scm 125 */
								obj_t BgL_val1598z00_446;

								BgL_val1598z00_446 =
									BGl_zc3exitza31921ze3z83zzcc_ldz00(BgL_port1597z00_445);
								bgl_close_input_port(BgL_port1597z00_445);
								if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
										(BgL_val1598z00_446)))
									{	/* Cc/ld.scm 125 */
										BgL_staticpz00_248 =
											BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
											(BgL_val1598z00_446), CDR(BgL_val1598z00_446));
									}
								else
									{	/* Cc/ld.scm 125 */
										BgL_staticpz00_248 = BgL_val1598z00_446;
									}
							}
						}
				}
				if (CBOOL(BgL_staticpz00_248))
					{	/* Cc/ld.scm 131 */
						obj_t BgL_arg1749z00_249;

						BgL_arg1749z00_249 =
							BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
									7)));
						BGl_za2ldzd2optionsza2zd2zzengine_paramz00 =
							string_append_3(BgL_arg1749z00_249, BGl_string2773z00zzcc_ldz00,
							BGl_za2ldzd2optionsza2zd2zzengine_paramz00);
					}
				else
					{	/* Cc/ld.scm 133 */
						obj_t BgL_arg1751z00_251;

						BgL_arg1751z00_251 =
							BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
									8)));
						BGl_za2ldzd2optionsza2zd2zzengine_paramz00 =
							string_append_3(BgL_arg1751z00_251, BGl_string2773z00zzcc_ldz00,
							BGl_za2ldzd2optionsza2zd2zzengine_paramz00);
					}
				{	/* Cc/ld.scm 135 */
					obj_t BgL_destz00_253;

					if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
						{	/* Cc/ld.scm 135 */
							BgL_destz00_253 = BGl_za2destza2z00zzengine_paramz00;
						}
					else
						{	/* Cc/ld.scm 135 */
							BgL_destz00_253 = BGl_defaultzd2executablezd2namez00zz__osz00();
						}
					{	/* Cc/ld.scm 135 */
						obj_t BgL_bigloozd2libzd2_254;

						{	/* Cc/ld.scm 140 */
							obj_t BgL_arg1915z00_439;

							obj_t BgL_arg1916z00_440;

							BgL_arg1915z00_439 = BGl_libraryzd2suffixeszd2zzcc_ldz00();
							{	/* Cc/ld.scm 141 */
								obj_t BgL__ortest_1616z00_441;

								BgL__ortest_1616z00_441 =
									BGl_za2staticzd2allzd2bigloozf3za2zf3zzengine_paramz00;
								if (CBOOL(BgL__ortest_1616z00_441))
									{	/* Cc/ld.scm 141 */
										BgL_arg1916z00_440 = BgL__ortest_1616z00_441;
									}
								else
									{	/* Cc/ld.scm 141 */
										obj_t BgL__ortest_1617z00_442;

										BgL__ortest_1617z00_442 =
											BGl_za2staticzd2bigloozf3za2z21zzengine_paramz00;
										if (CBOOL(BgL__ortest_1617z00_442))
											{	/* Cc/ld.scm 141 */
												BgL_arg1916z00_440 = BgL__ortest_1617z00_442;
											}
										else
											{	/* Cc/ld.scm 141 */
												BgL_arg1916z00_440 = BgL_staticpz00_248;
											}
									}
							}
							BgL_bigloozd2libzd2_254 =
								BGl_libraryzd2ze3oszd2fileze3zzcc_ldz00
								(BGl_za2bigloozd2libza2zd2zzengine_paramz00, BgL_arg1915z00_439,
								BgL_arg1916z00_440, ((bool_t) 0), ((bool_t) 0));
						}
						{	/* Cc/ld.scm 139 */
							obj_t BgL_gczd2libzd2_255;

							{	/* Cc/ld.scm 147 */
								obj_t BgL_arg1908z00_429;

								obj_t BgL_arg1909z00_430;

								bool_t BgL_arg1910z00_431;

								{	/* Cc/ld.scm 147 */
									obj_t BgL_arg1911z00_432;

									BgL_arg1911z00_432 =
										BGl_profilezd2gczd2debugzd2libraryzd2suffixz00zzcc_ldz00();
									{	/* Cc/ld.scm 147 */
										obj_t BgL_list1913z00_434;

										{	/* Cc/ld.scm 147 */
											obj_t BgL_arg1914z00_435;

											BgL_arg1914z00_435 =
												MAKE_PAIR(BGl_string2763z00zzcc_ldz00, BNIL);
											BgL_list1913z00_434 =
												MAKE_PAIR(BgL_arg1911z00_432, BgL_arg1914z00_435);
										}
										BgL_arg1908z00_429 = BgL_list1913z00_434;
									}
								}
								{	/* Cc/ld.scm 149 */
									obj_t BgL__ortest_1618z00_436;

									BgL__ortest_1618z00_436 =
										BGl_za2profilezd2libraryza2zd2zzengine_paramz00;
									if (CBOOL(BgL__ortest_1618z00_436))
										{	/* Cc/ld.scm 149 */
											BgL_arg1909z00_430 = BgL__ortest_1618z00_436;
										}
									else
										{	/* Cc/ld.scm 149 */
											obj_t BgL__ortest_1619z00_437;

											BgL__ortest_1619z00_437 =
												BGl_za2staticzd2allzd2bigloozf3za2zf3zzengine_paramz00;
											if (CBOOL(BgL__ortest_1619z00_437))
												{	/* Cc/ld.scm 149 */
													BgL_arg1909z00_430 = BgL__ortest_1619z00_437;
												}
											else
												{	/* Cc/ld.scm 149 */
													obj_t BgL__ortest_1620z00_438;

													BgL__ortest_1620z00_438 =
														BGl_za2staticzd2bigloozf3za2z21zzengine_paramz00;
													if (CBOOL(BgL__ortest_1620z00_438))
														{	/* Cc/ld.scm 149 */
															BgL_arg1909z00_430 = BgL__ortest_1620z00_438;
														}
													else
														{	/* Cc/ld.scm 149 */
															BgL_arg1909z00_430 = BgL_staticpz00_248;
														}
												}
										}
								}
								if (CBOOL(BGl_za2gczd2customzf3za2z21zzengine_paramz00))
									{	/* Cc/ld.scm 154 */
										BgL_arg1910z00_431 = ((bool_t) 0);
									}
								else
									{	/* Cc/ld.scm 154 */
										BgL_arg1910z00_431 = ((bool_t) 1);
									}
								BgL_gczd2libzd2_255 =
									BGl_libraryzd2ze3oszd2fileze3zzcc_ldz00
									(BGl_za2gczd2libza2zd2zzengine_paramz00, BgL_arg1908z00_429,
									BgL_arg1909z00_430, ((bool_t) 0), BgL_arg1910z00_431);
							}
							{	/* Cc/ld.scm 146 */
								obj_t BgL_evalzd2libszd2_256;

								{	/* Cc/ld.scm 156 */
									obj_t BgL_g1621z00_414;

									BgL_g1621z00_414 =
										BGl_getzd2evalzd2librariesz00zzmodule_evalz00();
									{
										obj_t BgL_libz00_416;

										obj_t BgL_resz00_417;

										BgL_libz00_416 = BgL_g1621z00_414;
										BgL_resz00_417 = BGl_string2763z00zzcc_ldz00;
									BgL_zc3anonymousza31899ze3z83_418:
										if (NULLP(BgL_libz00_416))
											{	/* Cc/ld.scm 158 */
												BgL_evalzd2libszd2_256 = BgL_resz00_417;
											}
										else
											{	/* Cc/ld.scm 160 */
												obj_t BgL_arg1901z00_420;

												obj_t BgL_arg1902z00_421;

												BgL_arg1901z00_420 = CDR(BgL_libz00_416);
												{	/* Cc/ld.scm 163 */
													obj_t BgL_arg1903z00_422;

													{	/* Cc/ld.scm 163 */
														obj_t BgL_arg1905z00_424;

														obj_t BgL_arg1906z00_425;

														obj_t BgL_arg1907z00_426;

														BgL_arg1905z00_424 = CAR(BgL_libz00_416);
														BgL_arg1906z00_425 =
															BGl_libraryzd2evalzd2suffixesz00zzcc_ldz00();
														{	/* Cc/ld.scm 165 */
															obj_t BgL__ortest_1622z00_427;

															BgL__ortest_1622z00_427 =
																BGl_za2staticzd2allzd2bigloozf3za2zf3zzengine_paramz00;
															if (CBOOL(BgL__ortest_1622z00_427))
																{	/* Cc/ld.scm 165 */
																	BgL_arg1907z00_426 = BgL__ortest_1622z00_427;
																}
															else
																{	/* Cc/ld.scm 165 */
																	BgL_arg1907z00_426 = BgL_staticpz00_248;
																}
														}
														BgL_arg1903z00_422 =
															BGl_libraryzd2ze3oszd2fileze3zzcc_ldz00
															(BgL_arg1905z00_424, BgL_arg1906z00_425,
															BgL_arg1907z00_426, ((bool_t) 0), ((bool_t) 0));
													}
													BgL_arg1902z00_421 =
														string_append_3(BgL_arg1903z00_422,
														BGl_string2773z00zzcc_ldz00, BgL_resz00_417);
												}
												{
													obj_t BgL_resz00_1797;

													obj_t BgL_libz00_1796;

													BgL_libz00_1796 = BgL_arg1901z00_420;
													BgL_resz00_1797 = BgL_arg1902z00_421;
													BgL_resz00_417 = BgL_resz00_1797;
													BgL_libz00_416 = BgL_libz00_1796;
													goto BgL_zc3anonymousza31899ze3z83_418;
												}
											}
									}
								}
								{	/* Cc/ld.scm 156 */
									obj_t BgL_addzd2libszd2_257;

									{
										obj_t BgL_libz00_401;

										obj_t BgL_resz00_402;

										BgL_libz00_401 =
											BGl_za2additionalzd2bigloozd2librariesza2z00zzengine_paramz00;
										BgL_resz00_402 = BGl_string2763z00zzcc_ldz00;
									BgL_zc3anonymousza31888ze3z83_403:
										if (NULLP(BgL_libz00_401))
											{	/* Cc/ld.scm 172 */
												BgL_addzd2libszd2_257 = BgL_resz00_402;
											}
										else
											{	/* Cc/ld.scm 174 */
												obj_t BgL_arg1890z00_405;

												obj_t BgL_arg1892z00_406;

												BgL_arg1890z00_405 = CDR(BgL_libz00_401);
												{	/* Cc/ld.scm 177 */
													obj_t BgL_arg1893z00_407;

													{	/* Cc/ld.scm 177 */
														obj_t BgL_arg1895z00_409;

														obj_t BgL_arg1896z00_410;

														obj_t BgL_arg1898z00_411;

														BgL_arg1895z00_409 = CAR(BgL_libz00_401);
														BgL_arg1896z00_410 =
															BGl_libraryzd2suffixeszd2zzcc_ldz00();
														{	/* Cc/ld.scm 179 */
															obj_t BgL__ortest_1623z00_412;

															BgL__ortest_1623z00_412 =
																BGl_za2staticzd2allzd2bigloozf3za2zf3zzengine_paramz00;
															if (CBOOL(BgL__ortest_1623z00_412))
																{	/* Cc/ld.scm 179 */
																	BgL_arg1898z00_411 = BgL__ortest_1623z00_412;
																}
															else
																{	/* Cc/ld.scm 179 */
																	BgL_arg1898z00_411 = BgL_staticpz00_248;
																}
														}
														BgL_arg1893z00_407 =
															BGl_libraryzd2ze3oszd2fileze3zzcc_ldz00
															(BgL_arg1895z00_409, BgL_arg1896z00_410,
															BgL_arg1898z00_411, ((bool_t) 0), ((bool_t) 0));
													}
													BgL_arg1892z00_406 =
														string_append_3(BgL_arg1893z00_407,
														BGl_string2773z00zzcc_ldz00, BgL_resz00_402);
												}
												{
													obj_t BgL_resz00_1808;

													obj_t BgL_libz00_1807;

													BgL_libz00_1807 = BgL_arg1890z00_405;
													BgL_resz00_1808 = BgL_arg1892z00_406;
													BgL_resz00_402 = BgL_resz00_1808;
													BgL_libz00_401 = BgL_libz00_1807;
													goto BgL_zc3anonymousza31888ze3z83_403;
												}
											}
									}
									{	/* Cc/ld.scm 170 */
										obj_t BgL_otherzd2libszd2_258;

										{	/* Cc/ld.scm 184 */
											obj_t BgL_g1624z00_389;

											BgL_g1624z00_389 =
												bgl_reverse
												(BGl_za2bigloozd2userzd2libza2z00zzengine_paramz00);
											{
												obj_t BgL_libz00_391;

												obj_t BgL_resz00_392;

												BgL_libz00_391 = BgL_g1624z00_389;
												BgL_resz00_392 = BGl_string2763z00zzcc_ldz00;
											BgL_zc3anonymousza31881ze3z83_393:
												if (NULLP(BgL_libz00_391))
													{	/* Cc/ld.scm 186 */
														BgL_otherzd2libszd2_258 = BgL_resz00_392;
													}
												else
													{
														obj_t BgL_resz00_1814;

														obj_t BgL_libz00_1812;

														BgL_libz00_1812 = CDR(BgL_libz00_391);
														BgL_resz00_1814 =
															string_append_3(CAR(BgL_libz00_391),
															BGl_string2773z00zzcc_ldz00, BgL_resz00_392);
														BgL_resz00_392 = BgL_resz00_1814;
														BgL_libz00_391 = BgL_libz00_1812;
														goto BgL_zc3anonymousza31881ze3z83_393;
													}
											}
										}
										{	/* Cc/ld.scm 184 */
											obj_t BgL_ldzd2argszd2_259;

											{	/* Cc/ld.scm 192 */
												obj_t BgL_arg1764z00_266;

												obj_t BgL_arg1768z00_268;

												obj_t BgL_arg1769z00_269;

												obj_t BgL_arg1771z00_271;

												obj_t BgL_arg1775z00_273;

												obj_t BgL_arg1776z00_274;

												obj_t BgL_arg1778z00_276;

												obj_t BgL_arg1779z00_277;

												obj_t BgL_arg1782z00_278;

												obj_t BgL_arg1789z00_284;

												obj_t BgL_arg1792z00_287;

												{	/* Cc/ld.scm 192 */
													obj_t BgL_list1829z00_321;

													{	/* Cc/ld.scm 192 */
														obj_t BgL_arg1830z00_322;

														{	/* Cc/ld.scm 192 */
															obj_t BgL_arg1832z00_324;

															BgL_arg1832z00_324 =
																MAKE_PAIR
																(BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00,
																BNIL);
															BgL_arg1830z00_322 =
																MAKE_PAIR(BGl_string2774z00zzcc_ldz00,
																BgL_arg1832z00_324);
														}
														BgL_list1829z00_321 =
															MAKE_PAIR(BgL_namez00_8, BgL_arg1830z00_322);
													}
													BgL_arg1764z00_266 =
														BGl_unixzd2filenamezd2zzcc_execz00
														(BgL_list1829z00_321);
												}
												{	/* Cc/ld.scm 194 */
													obj_t BgL_arg1834z00_325;

													{	/* Cc/ld.scm 194 */
														obj_t BgL_l1651z00_326;

														BgL_l1651z00_326 =
															BGl_za2withzd2filesza2zd2zzengine_paramz00;
														if (NULLP(BgL_l1651z00_326))
															{	/* Cc/ld.scm 194 */
																BgL_arg1834z00_325 = BNIL;
															}
														else
															{	/* Cc/ld.scm 194 */
																obj_t BgL_head1653z00_328;

																{	/* Cc/ld.scm 194 */
																	obj_t BgL_arg1845z00_342;

																	{	/* Cc/ld.scm 194 */
																		obj_t BgL_arg1847z00_344;

																		BgL_arg1847z00_344 = CAR(BgL_l1651z00_326);
																		{	/* Cc/ld.scm 194 */
																			obj_t BgL_list1848z00_345;

																			BgL_list1848z00_345 =
																				MAKE_PAIR(BgL_arg1847z00_344, BNIL);
																			BgL_arg1845z00_342 =
																				BGl_unixzd2filenamezd2zzcc_execz00
																				(BgL_list1848z00_345);
																		}
																	}
																	BgL_head1653z00_328 =
																		MAKE_PAIR(BgL_arg1845z00_342, BNIL);
																}
																{	/* Cc/ld.scm 194 */
																	obj_t BgL_g1656z00_329;

																	BgL_g1656z00_329 = CDR(BgL_l1651z00_326);
																	{
																		obj_t BgL_l1651z00_331;

																		obj_t BgL_tail1654z00_332;

																		BgL_l1651z00_331 = BgL_g1656z00_329;
																		BgL_tail1654z00_332 = BgL_head1653z00_328;
																	BgL_zc3anonymousza31836ze3z83_333:
																		if (NULLP(BgL_l1651z00_331))
																			{	/* Cc/ld.scm 194 */
																				BgL_arg1834z00_325 =
																					BgL_head1653z00_328;
																			}
																		else
																			{	/* Cc/ld.scm 194 */
																				obj_t BgL_newtail1655z00_335;

																				{	/* Cc/ld.scm 194 */
																					obj_t BgL_arg1840z00_337;

																					{	/* Cc/ld.scm 194 */
																						obj_t BgL_arg1842z00_339;

																						BgL_arg1842z00_339 =
																							CAR(BgL_l1651z00_331);
																						{	/* Cc/ld.scm 194 */
																							obj_t BgL_list1843z00_340;

																							BgL_list1843z00_340 =
																								MAKE_PAIR(BgL_arg1842z00_339,
																								BNIL);
																							BgL_arg1840z00_337 =
																								BGl_unixzd2filenamezd2zzcc_execz00
																								(BgL_list1843z00_340);
																						}
																					}
																					BgL_newtail1655z00_335 =
																						MAKE_PAIR(BgL_arg1840z00_337, BNIL);
																				}
																				SET_CDR(BgL_tail1654z00_332,
																					BgL_newtail1655z00_335);
																				{
																					obj_t BgL_tail1654z00_1837;

																					obj_t BgL_l1651z00_1835;

																					BgL_l1651z00_1835 =
																						CDR(BgL_l1651z00_331);
																					BgL_tail1654z00_1837 =
																						BgL_newtail1655z00_335;
																					BgL_tail1654z00_332 =
																						BgL_tail1654z00_1837;
																					BgL_l1651z00_331 = BgL_l1651z00_1835;
																					goto
																						BgL_zc3anonymousza31836ze3z83_333;
																				}
																			}
																	}
																}
															}
													}
													BgL_arg1768z00_268 =
														BGl_stringza2zd2ze3stringz93zztools_miscz00
														(BgL_arg1834z00_325);
												}
												{	/* Cc/ld.scm 196 */
													obj_t BgL_arg1849z00_346;

													{	/* Cc/ld.scm 196 */
														obj_t BgL_l1657z00_347;

														BgL_l1657z00_347 =
															BGl_za2ozd2filesza2zd2zzengine_paramz00;
														if (NULLP(BgL_l1657z00_347))
															{	/* Cc/ld.scm 196 */
																BgL_arg1849z00_346 = BNIL;
															}
														else
															{	/* Cc/ld.scm 196 */
																obj_t BgL_head1659z00_349;

																{	/* Cc/ld.scm 196 */
																	obj_t BgL_arg1858z00_363;

																	{	/* Cc/ld.scm 196 */
																		obj_t BgL_arg1861z00_365;

																		BgL_arg1861z00_365 = CAR(BgL_l1657z00_347);
																		{	/* Cc/ld.scm 196 */
																			obj_t BgL_list1862z00_366;

																			BgL_list1862z00_366 =
																				MAKE_PAIR(BgL_arg1861z00_365, BNIL);
																			BgL_arg1858z00_363 =
																				BGl_unixzd2filenamezd2zzcc_execz00
																				(BgL_list1862z00_366);
																		}
																	}
																	BgL_head1659z00_349 =
																		MAKE_PAIR(BgL_arg1858z00_363, BNIL);
																}
																{	/* Cc/ld.scm 196 */
																	obj_t BgL_g1662z00_350;

																	BgL_g1662z00_350 = CDR(BgL_l1657z00_347);
																	{
																		obj_t BgL_l1657z00_352;

																		obj_t BgL_tail1660z00_353;

																		BgL_l1657z00_352 = BgL_g1662z00_350;
																		BgL_tail1660z00_353 = BgL_head1659z00_349;
																	BgL_zc3anonymousza31851ze3z83_354:
																		if (NULLP(BgL_l1657z00_352))
																			{	/* Cc/ld.scm 196 */
																				BgL_arg1849z00_346 =
																					BgL_head1659z00_349;
																			}
																		else
																			{	/* Cc/ld.scm 196 */
																				obj_t BgL_newtail1661z00_356;

																				{	/* Cc/ld.scm 196 */
																					obj_t BgL_arg1854z00_358;

																					{	/* Cc/ld.scm 196 */
																						obj_t BgL_arg1856z00_360;

																						BgL_arg1856z00_360 =
																							CAR(BgL_l1657z00_352);
																						{	/* Cc/ld.scm 196 */
																							obj_t BgL_list1857z00_361;

																							BgL_list1857z00_361 =
																								MAKE_PAIR(BgL_arg1856z00_360,
																								BNIL);
																							BgL_arg1854z00_358 =
																								BGl_unixzd2filenamezd2zzcc_execz00
																								(BgL_list1857z00_361);
																						}
																					}
																					BgL_newtail1661z00_356 =
																						MAKE_PAIR(BgL_arg1854z00_358, BNIL);
																				}
																				SET_CDR(BgL_tail1660z00_353,
																					BgL_newtail1661z00_356);
																				{
																					obj_t BgL_tail1660z00_1855;

																					obj_t BgL_l1657z00_1853;

																					BgL_l1657z00_1853 =
																						CDR(BgL_l1657z00_352);
																					BgL_tail1660z00_1855 =
																						BgL_newtail1661z00_356;
																					BgL_tail1660z00_353 =
																						BgL_tail1660z00_1855;
																					BgL_l1657z00_352 = BgL_l1657z00_1853;
																					goto
																						BgL_zc3anonymousza31851ze3z83_354;
																				}
																			}
																	}
																}
															}
													}
													BgL_arg1769z00_269 =
														BGl_stringza2zd2ze3stringz93zztools_miscz00
														(BgL_arg1849z00_346);
												}
												{	/* Cc/ld.scm 198 */
													obj_t BgL_list1863z00_367;

													BgL_list1863z00_367 =
														MAKE_PAIR(BgL_destz00_253, BNIL);
													BgL_arg1771z00_271 =
														BGl_unixzd2filenamezd2zzcc_execz00
														(BgL_list1863z00_367);
												}
												{	/* Cc/ld.scm 202 */
													bool_t BgL_testz00_1859;

													if (CBOOL(BGl_za2czd2debugza2zd2zzengine_paramz00))
														{	/* Cc/ld.scm 202 */
															BgL_testz00_1859 = ((bool_t) 1);
														}
													else
														{	/* Cc/ld.scm 202 */
															BgL_testz00_1859 =
																(
																(long)
																CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00)
																> ((long) 0));
														}
													if (BgL_testz00_1859)
														{	/* Cc/ld.scm 202 */
															BgL_arg1775z00_273 =
																string_append(BGl_string2773z00zzcc_ldz00,
																BGl_za2ldzd2debugzd2optionza2z00zzengine_paramz00);
														}
													else
														{	/* Cc/ld.scm 202 */
															BgL_arg1775z00_273 = BGl_string2763z00zzcc_ldz00;
														}
												}
												if (CBOOL(BGl_za2stripza2z00zzengine_paramz00))
													{	/* Cc/ld.scm 206 */
														BgL_arg1776z00_274 =
															string_append(BGl_string2773z00zzcc_ldz00,
															BGl_bigloozd2configzd2zz__configurez00
															(CNST_TABLE_REF(((long) 9))));
													}
												else
													{	/* Cc/ld.scm 206 */
														BgL_arg1776z00_274 = BGl_string2763z00zzcc_ldz00;
													}
												BgL_arg1778z00_276 =
													BGl_loopz72z72zzcc_ldz00
													(BGl_za2libzd2dirza2zd2zzengine_paramz00);
												{	/* Cc/ld.scm 220 */
													obj_t BgL_sz00_385;

													BgL_sz00_385 =
														BGl_bigloozd2configzd2zz__configurez00
														(CNST_TABLE_REF(((long) 10)));
													if ((STRING_LENGTH(BgL_sz00_385) > ((long) 0)))
														{	/* Cc/ld.scm 221 */
															BgL_arg1779z00_277 =
																string_append(BGl_string2775z00zzcc_ldz00,
																BgL_sz00_385);
														}
													else
														{	/* Cc/ld.scm 221 */
															BgL_arg1779z00_277 = BGl_string2763z00zzcc_ldz00;
														}
												}
												if (CBOOL(BGl_za2czd2debugza2zd2zzengine_paramz00))
													{	/* Cc/ld.scm 225 */
														BgL_arg1782z00_278 = BGl_string2763z00zzcc_ldz00;
													}
												else
													{	/* Cc/ld.scm 225 */
														BgL_arg1782z00_278 =
															string_append(BGl_string2773z00zzcc_ldz00,
															BGl_za2ldzd2optimzd2flagsza2z00zzengine_paramz00);
													}
												BgL_arg1789z00_284 =
													BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(
														((long) 11)));
												if (CBOOL
													(BGl_za2doublezd2ldzd2libszf3za2zf3zzengine_paramz00))
													{	/* Cc/ld.scm 241 */
														BgL_arg1792z00_287 = BgL_addzd2libszd2_257;
													}
												else
													{	/* Cc/ld.scm 241 */
														BgL_arg1792z00_287 = BGl_string2763z00zzcc_ldz00;
													}
												{	/* Cc/ld.scm 190 */
													obj_t BgL_list1794z00_289;

													{	/* Cc/ld.scm 190 */
														obj_t BgL_arg1795z00_290;

														{	/* Cc/ld.scm 190 */
															obj_t BgL_arg1796z00_291;

															{	/* Cc/ld.scm 190 */
																obj_t BgL_arg1797z00_292;

																{	/* Cc/ld.scm 190 */
																	obj_t BgL_arg1798z00_293;

																	{	/* Cc/ld.scm 190 */
																		obj_t BgL_arg1799z00_294;

																		{	/* Cc/ld.scm 190 */
																			obj_t BgL_arg1800z00_295;

																			{	/* Cc/ld.scm 190 */
																				obj_t BgL_arg1801z00_296;

																				{	/* Cc/ld.scm 190 */
																					obj_t BgL_arg1803z00_297;

																					{	/* Cc/ld.scm 190 */
																						obj_t BgL_arg1804z00_298;

																						{	/* Cc/ld.scm 190 */
																							obj_t BgL_arg1805z00_299;

																							{	/* Cc/ld.scm 190 */
																								obj_t BgL_arg1806z00_300;

																								{	/* Cc/ld.scm 190 */
																									obj_t BgL_arg1807z00_301;

																									{	/* Cc/ld.scm 190 */
																										obj_t BgL_arg1809z00_302;

																										{	/* Cc/ld.scm 190 */
																											obj_t BgL_arg1810z00_303;

																											{	/* Cc/ld.scm 190 */
																												obj_t
																													BgL_arg1811z00_304;
																												{	/* Cc/ld.scm 190 */
																													obj_t
																														BgL_arg1812z00_305;
																													{	/* Cc/ld.scm 190 */
																														obj_t
																															BgL_arg1813z00_306;
																														{	/* Cc/ld.scm 190 */
																															obj_t
																																BgL_arg1815z00_307;
																															{	/* Cc/ld.scm 190 */
																																obj_t
																																	BgL_arg1816z00_308;
																																{	/* Cc/ld.scm 190 */
																																	obj_t
																																		BgL_arg1817z00_309;
																																	{	/* Cc/ld.scm 190 */
																																		obj_t
																																			BgL_arg1818z00_310;
																																		{	/* Cc/ld.scm 190 */
																																			obj_t
																																				BgL_arg1819z00_311;
																																			{	/* Cc/ld.scm 190 */
																																				obj_t
																																					BgL_arg1820z00_312;
																																				{	/* Cc/ld.scm 190 */
																																					obj_t
																																						BgL_arg1821z00_313;
																																					{	/* Cc/ld.scm 190 */
																																						obj_t
																																							BgL_arg1822z00_314;
																																						{	/* Cc/ld.scm 190 */
																																							obj_t
																																								BgL_arg1823z00_315;
																																							{	/* Cc/ld.scm 190 */
																																								obj_t
																																									BgL_arg1824z00_316;
																																								{	/* Cc/ld.scm 190 */
																																									obj_t
																																										BgL_arg1825z00_317;
																																									{	/* Cc/ld.scm 190 */
																																										obj_t
																																											BgL_arg1826z00_318;
																																										{	/* Cc/ld.scm 190 */
																																											obj_t
																																												BgL_arg1827z00_319;
																																											{	/* Cc/ld.scm 190 */
																																												obj_t
																																													BgL_arg1828z00_320;
																																												BgL_arg1828z00_320
																																													=
																																													MAKE_PAIR
																																													(BGl_za2ldzd2postzd2optionsza2z00zzengine_paramz00,
																																													BNIL);
																																												BgL_arg1827z00_319
																																													=
																																													MAKE_PAIR
																																													(BGl_string2773z00zzcc_ldz00,
																																													BgL_arg1828z00_320);
																																											}
																																											BgL_arg1826z00_318
																																												=
																																												MAKE_PAIR
																																												(BgL_arg1792z00_287,
																																												BgL_arg1827z00_319);
																																										}
																																										BgL_arg1825z00_317
																																											=
																																											MAKE_PAIR
																																											(BGl_string2773z00zzcc_ldz00,
																																											BgL_arg1826z00_318);
																																									}
																																									BgL_arg1824z00_316
																																										=
																																										MAKE_PAIR
																																										(BgL_otherzd2libszd2_258,
																																										BgL_arg1825z00_317);
																																								}
																																								BgL_arg1823z00_315
																																									=
																																									MAKE_PAIR
																																									(BGl_string2773z00zzcc_ldz00,
																																									BgL_arg1824z00_316);
																																							}
																																							BgL_arg1822z00_314
																																								=
																																								MAKE_PAIR
																																								(BgL_arg1789z00_284,
																																								BgL_arg1823z00_315);
																																						}
																																						BgL_arg1821z00_313
																																							=
																																							MAKE_PAIR
																																							(BGl_string2773z00zzcc_ldz00,
																																							BgL_arg1822z00_314);
																																					}
																																					BgL_arg1820z00_312
																																						=
																																						MAKE_PAIR
																																						(BgL_gczd2libzd2_255,
																																						BgL_arg1821z00_313);
																																				}
																																				BgL_arg1819z00_311
																																					=
																																					MAKE_PAIR
																																					(BGl_string2773z00zzcc_ldz00,
																																					BgL_arg1820z00_312);
																																			}
																																			BgL_arg1818z00_310
																																				=
																																				MAKE_PAIR
																																				(BgL_bigloozd2libzd2_254,
																																				BgL_arg1819z00_311);
																																		}
																																		BgL_arg1817z00_309
																																			=
																																			MAKE_PAIR
																																			(BGl_string2773z00zzcc_ldz00,
																																			BgL_arg1818z00_310);
																																	}
																																	BgL_arg1816z00_308
																																		=
																																		MAKE_PAIR
																																		(BgL_addzd2libszd2_257,
																																		BgL_arg1817z00_309);
																																}
																																BgL_arg1815z00_307
																																	=
																																	MAKE_PAIR
																																	(BGl_string2773z00zzcc_ldz00,
																																	BgL_arg1816z00_308);
																															}
																															BgL_arg1813z00_306
																																=
																																MAKE_PAIR
																																(BgL_evalzd2libszd2_256,
																																BgL_arg1815z00_307);
																														}
																														BgL_arg1812z00_305 =
																															MAKE_PAIR
																															(BGl_string2773z00zzcc_ldz00,
																															BgL_arg1813z00_306);
																													}
																													BgL_arg1811z00_304 =
																														MAKE_PAIR
																														(BgL_arg1782z00_278,
																														BgL_arg1812z00_305);
																												}
																												BgL_arg1810z00_303 =
																													MAKE_PAIR
																													(BgL_arg1779z00_277,
																													BgL_arg1811z00_304);
																											}
																											BgL_arg1809z00_302 =
																												MAKE_PAIR
																												(BgL_arg1778z00_276,
																												BgL_arg1810z00_303);
																										}
																										BgL_arg1807z00_301 =
																											MAKE_PAIR
																											(BGl_za2ldzd2optionsza2zd2zzengine_paramz00,
																											BgL_arg1809z00_302);
																									}
																									BgL_arg1806z00_300 =
																										MAKE_PAIR
																										(BGl_string2773z00zzcc_ldz00,
																										BgL_arg1807z00_301);
																								}
																								BgL_arg1805z00_299 =
																									MAKE_PAIR(BgL_arg1776z00_274,
																									BgL_arg1806z00_300);
																							}
																							BgL_arg1804z00_298 =
																								MAKE_PAIR(BgL_arg1775z00_273,
																								BgL_arg1805z00_299);
																						}
																						BgL_arg1803z00_297 =
																							MAKE_PAIR
																							(BGl_za2cczd2optionsza2zd2zzengine_paramz00,
																							BgL_arg1804z00_298);
																					}
																					BgL_arg1801z00_296 =
																						MAKE_PAIR
																						(BGl_string2773z00zzcc_ldz00,
																						BgL_arg1803z00_297);
																				}
																				BgL_arg1800z00_295 =
																					MAKE_PAIR(BgL_arg1771z00_271,
																					BgL_arg1801z00_296);
																			}
																			BgL_arg1799z00_294 =
																				MAKE_PAIR
																				(BGl_za2ldzd2ozd2optionza2z00zzengine_paramz00,
																				BgL_arg1800z00_295);
																		}
																		BgL_arg1798z00_293 =
																			MAKE_PAIR(BGl_string2773z00zzcc_ldz00,
																			BgL_arg1799z00_294);
																	}
																	BgL_arg1797z00_292 =
																		MAKE_PAIR(BgL_arg1769z00_269,
																		BgL_arg1798z00_293);
																}
																BgL_arg1796z00_291 =
																	MAKE_PAIR(BgL_arg1768z00_268,
																	BgL_arg1797z00_292);
															}
															BgL_arg1795z00_290 =
																MAKE_PAIR(BGl_string2773z00zzcc_ldz00,
																BgL_arg1796z00_291);
														}
														BgL_list1794z00_289 =
															MAKE_PAIR(BgL_arg1764z00_266, BgL_arg1795z00_290);
													}
													BgL_ldzd2argszd2_259 =
														BGl_stringzd2appendzd2zz__r4_strings_6_7z00
														(BgL_list1794z00_289);
												}
											}
											{	/* Cc/ld.scm 190 */
												obj_t BgL_cmdz00_260;

												BgL_cmdz00_260 =
													string_append_3(BGl_za2ccza2z00zzengine_paramz00,
													BGl_string2773z00zzcc_ldz00, BgL_ldzd2argszd2_259);
												{	/* Cc/ld.scm 244 */

													{	/* Cc/ld.scm 245 */
														obj_t BgL_list1754z00_261;

														{	/* Cc/ld.scm 245 */
															obj_t BgL_arg1756z00_263;

															{	/* Cc/ld.scm 245 */
																obj_t BgL_arg1757z00_264;

																{	/* Cc/ld.scm 245 */
																	obj_t BgL_arg1758z00_265;

																	BgL_arg1758z00_265 =
																		MAKE_PAIR(BCHAR(((unsigned char) '\n')),
																		BNIL);
																	BgL_arg1757z00_264 =
																		MAKE_PAIR(BCHAR(((unsigned char) ']')),
																		BgL_arg1758z00_265);
																}
																BgL_arg1756z00_263 =
																	MAKE_PAIR(BgL_cmdz00_260, BgL_arg1757z00_264);
															}
															BgL_list1754z00_261 =
																MAKE_PAIR(BGl_string2776z00zzcc_ldz00,
																BgL_arg1756z00_263);
														}
														BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
															BgL_list1754z00_261);
													}
													return
														BGl_execz00zzcc_execz00(BgL_cmdz00_260,
														BgL_needzd2tozd2returnz00_9,
														BGl_string2760z00zzcc_ldz00);
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



/* <exit:1921> */
	obj_t BGl_zc3exitza31921ze3z83zzcc_ldz00(obj_t BgL_port1597z00_1600)
	{
		AN_OBJECT;
		{	/* Cc/ld.scm 125 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1599z00_451;

			if (SET_EXIT(BgL_an_exit1599z00_451))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1599z00_451 = (void *) jmpbuf;
					{	/* Cc/ld.scm 125 */

						PUSH_EXIT(BgL_an_exit1599z00_451, ((long) 0));
						{	/* Cc/ld.scm 125 */
							obj_t BgL_val1600z00_452;

							{
								obj_t BgL_inputzd2portzd2_496;

								long BgL_lastzd2matchzd2_497;

								obj_t BgL_inputzd2portzd2_507;

								long BgL_lastzd2matchzd2_508;

								obj_t BgL_inputzd2portzd2_517;

								long BgL_lastzd2matchzd2_518;

								obj_t BgL_inputzd2portzd2_530;

								long BgL_lastzd2matchzd2_531;

								obj_t BgL_inputzd2portzd2_542;

								long BgL_lastzd2matchzd2_543;

								obj_t BgL_inputzd2portzd2_554;

								long BgL_lastzd2matchzd2_555;

								obj_t BgL_inputzd2portzd2_566;

								long BgL_lastzd2matchzd2_567;

								obj_t BgL_inputzd2portzd2_578;

								long BgL_lastzd2matchzd2_579;

								obj_t BgL_inputzd2portzd2_587;

								long BgL_lastzd2matchzd2_588;

								obj_t BgL_inputzd2portzd2_599;

								long BgL_lastzd2matchzd2_600;

								obj_t BgL_inputzd2portzd2_611;

								long BgL_lastzd2matchzd2_612;

								RGC_START_MATCH(BgL_port1597z00_1600);
								{	/* Cc/ld.scm 125 */
									long BgL_matchz00_704;

									BgL_inputzd2portzd2_578 = BgL_port1597z00_1600;
									BgL_lastzd2matchzd2_579 = ((long) 1);
								BgL_zc3anonymousza31992ze3z83_580:
									{	/* Cc/ld.scm 125 */
										int BgL_currentzd2charzd2_581;

										BgL_currentzd2charzd2_581 =
											RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_578);
										switch ((long) (BgL_currentzd2charzd2_581))
											{
											case ((long) 0):

												if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_578))
													{	/* Cc/ld.scm 125 */
														if (rgc_fill_buffer(BgL_inputzd2portzd2_578))
															{

																goto BgL_zc3anonymousza31992ze3z83_580;
															}
														else
															{	/* Cc/ld.scm 125 */
																BgL_matchz00_704 = BgL_lastzd2matchzd2_579;
															}
													}
												else
													{	/* Cc/ld.scm 125 */
														BgL_inputzd2portzd2_496 = BgL_inputzd2portzd2_578;
														BgL_lastzd2matchzd2_497 = BgL_lastzd2matchzd2_579;
													BgL_zc3anonymousza31923ze3z83_498:
														{	/* Cc/ld.scm 125 */
															long BgL_newzd2matchzd2_499;

															RGC_STOP_MATCH(BgL_inputzd2portzd2_496);
															BgL_newzd2matchzd2_499 = ((long) 1);
															{	/* Cc/ld.scm 125 */
																int BgL_currentzd2charzd2_500;

																BgL_currentzd2charzd2_500 =
																	RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_496);
																if (
																	((long) (BgL_currentzd2charzd2_500) ==
																		((long) 0)))
																	{	/* Cc/ld.scm 125 */
																		if (RGC_BUFFER_EMPTY
																			(BgL_inputzd2portzd2_496))
																			{	/* Cc/ld.scm 125 */
																				if (rgc_fill_buffer
																					(BgL_inputzd2portzd2_496))
																					{

																						goto
																							BgL_zc3anonymousza31923ze3z83_498;
																					}
																				else
																					{	/* Cc/ld.scm 125 */
																						BgL_matchz00_704 =
																							BgL_newzd2matchzd2_499;
																					}
																			}
																		else
																			{	/* Cc/ld.scm 125 */
																				BgL_inputzd2portzd2_507 =
																					BgL_inputzd2portzd2_496;
																				BgL_lastzd2matchzd2_508 =
																					BgL_newzd2matchzd2_499;
																			BgL_zc3anonymousza31930ze3z83_509:
																				{	/* Cc/ld.scm 125 */
																					int BgL_currentzd2charzd2_510;

																					BgL_currentzd2charzd2_510 =
																						RGC_BUFFER_GET_CHAR
																						(BgL_inputzd2portzd2_507);
																					if (((long)
																							(BgL_currentzd2charzd2_510) ==
																							((long) 0)))
																						{	/* Cc/ld.scm 125 */
																							if (RGC_BUFFER_EMPTY
																								(BgL_inputzd2portzd2_507))
																								{	/* Cc/ld.scm 125 */
																									if (rgc_fill_buffer
																										(BgL_inputzd2portzd2_507))
																										{

																											goto
																												BgL_zc3anonymousza31930ze3z83_509;
																										}
																									else
																										{	/* Cc/ld.scm 125 */
																											BgL_matchz00_704 =
																												BgL_lastzd2matchzd2_508;
																										}
																								}
																							else
																								{

																									goto
																										BgL_zc3anonymousza31930ze3z83_509;
																								}
																						}
																					else
																						{	/* Cc/ld.scm 125 */
																							if (
																								((long)
																									(BgL_currentzd2charzd2_510) ==
																									((long) 45)))
																								{	/* Cc/ld.scm 125 */
																									BgL_inputzd2portzd2_530 =
																										BgL_inputzd2portzd2_507;
																									BgL_lastzd2matchzd2_531 =
																										BgL_lastzd2matchzd2_508;
																								BgL_zc3anonymousza31946ze3z83_532:
																									{	/* Cc/ld.scm 125 */
																										int
																											BgL_currentzd2charzd2_533;
																										BgL_currentzd2charzd2_533 =
																											RGC_BUFFER_GET_CHAR
																											(BgL_inputzd2portzd2_530);
																										if (((long)
																												(BgL_currentzd2charzd2_533)
																												== ((long) 0)))
																											{	/* Cc/ld.scm 125 */
																												if (RGC_BUFFER_EMPTY
																													(BgL_inputzd2portzd2_530))
																													{	/* Cc/ld.scm 125 */
																														if (rgc_fill_buffer
																															(BgL_inputzd2portzd2_530))
																															{

																																goto
																																	BgL_zc3anonymousza31946ze3z83_532;
																															}
																														else
																															{	/* Cc/ld.scm 125 */
																																BgL_matchz00_704
																																	=
																																	BgL_lastzd2matchzd2_531;
																															}
																													}
																												else
																													{
																														long
																															BgL_lastzd2matchzd2_1965;
																														obj_t
																															BgL_inputzd2portzd2_1964;
																														BgL_inputzd2portzd2_1964
																															=
																															BgL_inputzd2portzd2_530;
																														BgL_lastzd2matchzd2_1965
																															=
																															BgL_lastzd2matchzd2_531;
																														BgL_lastzd2matchzd2_508
																															=
																															BgL_lastzd2matchzd2_1965;
																														BgL_inputzd2portzd2_507
																															=
																															BgL_inputzd2portzd2_1964;
																														goto
																															BgL_zc3anonymousza31930ze3z83_509;
																													}
																											}
																										else
																											{	/* Cc/ld.scm 125 */
																												if (
																													((long)
																														(BgL_currentzd2charzd2_533)
																														== ((long) 115)))
																													{	/* Cc/ld.scm 125 */
																														BgL_inputzd2portzd2_542
																															=
																															BgL_inputzd2portzd2_530;
																														BgL_lastzd2matchzd2_543
																															=
																															BgL_lastzd2matchzd2_531;
																													BgL_zc3anonymousza31956ze3z83_544:
																														{	/* Cc/ld.scm 125 */
																															int
																																BgL_currentzd2charzd2_545;
																															BgL_currentzd2charzd2_545
																																=
																																RGC_BUFFER_GET_CHAR
																																(BgL_inputzd2portzd2_542);
																															if (((long)
																																	(BgL_currentzd2charzd2_545)
																																	==
																																	((long) 0)))
																																{	/* Cc/ld.scm 125 */
																																	if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_542))
																																		{	/* Cc/ld.scm 125 */
																																			if (rgc_fill_buffer(BgL_inputzd2portzd2_542))
																																				{

																																					goto
																																						BgL_zc3anonymousza31956ze3z83_544;
																																				}
																																			else
																																				{	/* Cc/ld.scm 125 */
																																					BgL_matchz00_704
																																						=
																																						BgL_lastzd2matchzd2_543;
																																				}
																																		}
																																	else
																																		{
																																			long
																																				BgL_lastzd2matchzd2_1978;
																																			obj_t
																																				BgL_inputzd2portzd2_1977;
																																			BgL_inputzd2portzd2_1977
																																				=
																																				BgL_inputzd2portzd2_542;
																																			BgL_lastzd2matchzd2_1978
																																				=
																																				BgL_lastzd2matchzd2_543;
																																			BgL_lastzd2matchzd2_508
																																				=
																																				BgL_lastzd2matchzd2_1978;
																																			BgL_inputzd2portzd2_507
																																				=
																																				BgL_inputzd2portzd2_1977;
																																			goto
																																				BgL_zc3anonymousza31930ze3z83_509;
																																		}
																																}
																															else
																																{	/* Cc/ld.scm 125 */
																																	if (
																																		((long)
																																			(BgL_currentzd2charzd2_545)
																																			==
																																			((long)
																																				116)))
																																		{	/* Cc/ld.scm 125 */
																																			BgL_inputzd2portzd2_554
																																				=
																																				BgL_inputzd2portzd2_542;
																																			BgL_lastzd2matchzd2_555
																																				=
																																				BgL_lastzd2matchzd2_543;
																																		BgL_zc3anonymousza31974ze3z83_556:
																																			{	/* Cc/ld.scm 125 */
																																				int
																																					BgL_currentzd2charzd2_557;
																																				BgL_currentzd2charzd2_557
																																					=
																																					RGC_BUFFER_GET_CHAR
																																					(BgL_inputzd2portzd2_554);
																																				if ((
																																						(long)
																																						(BgL_currentzd2charzd2_557)
																																						==
																																						((long) 0)))
																																					{	/* Cc/ld.scm 125 */
																																						if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_554))
																																							{	/* Cc/ld.scm 125 */
																																								if (rgc_fill_buffer(BgL_inputzd2portzd2_554))
																																									{

																																										goto
																																											BgL_zc3anonymousza31974ze3z83_556;
																																									}
																																								else
																																									{	/* Cc/ld.scm 125 */
																																										BgL_matchz00_704
																																											=
																																											BgL_lastzd2matchzd2_555;
																																									}
																																							}
																																						else
																																							{
																																								long
																																									BgL_lastzd2matchzd2_1991;
																																								obj_t
																																									BgL_inputzd2portzd2_1990;
																																								BgL_inputzd2portzd2_1990
																																									=
																																									BgL_inputzd2portzd2_554;
																																								BgL_lastzd2matchzd2_1991
																																									=
																																									BgL_lastzd2matchzd2_555;
																																								BgL_lastzd2matchzd2_508
																																									=
																																									BgL_lastzd2matchzd2_1991;
																																								BgL_inputzd2portzd2_507
																																									=
																																									BgL_inputzd2portzd2_1990;
																																								goto
																																									BgL_zc3anonymousza31930ze3z83_509;
																																							}
																																					}
																																				else
																																					{	/* Cc/ld.scm 125 */
																																						if (
																																							((long) (BgL_currentzd2charzd2_557) == ((long) 97)))
																																							{	/* Cc/ld.scm 125 */
																																								BgL_inputzd2portzd2_566
																																									=
																																									BgL_inputzd2portzd2_554;
																																								BgL_lastzd2matchzd2_567
																																									=
																																									BgL_lastzd2matchzd2_555;
																																							BgL_zc3anonymousza31983ze3z83_568:
																																								{	/* Cc/ld.scm 125 */
																																									int
																																										BgL_currentzd2charzd2_569;
																																									BgL_currentzd2charzd2_569
																																										=
																																										RGC_BUFFER_GET_CHAR
																																										(BgL_inputzd2portzd2_566);
																																									if (((long) (BgL_currentzd2charzd2_569) == ((long) 0)))
																																										{	/* Cc/ld.scm 125 */
																																											if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_566))
																																												{	/* Cc/ld.scm 125 */
																																													if (rgc_fill_buffer(BgL_inputzd2portzd2_566))
																																														{

																																															goto
																																																BgL_zc3anonymousza31983ze3z83_568;
																																														}
																																													else
																																														{	/* Cc/ld.scm 125 */
																																															BgL_matchz00_704
																																																=
																																																BgL_lastzd2matchzd2_567;
																																														}
																																												}
																																											else
																																												{
																																													long
																																														BgL_lastzd2matchzd2_2004;
																																													obj_t
																																														BgL_inputzd2portzd2_2003;
																																													BgL_inputzd2portzd2_2003
																																														=
																																														BgL_inputzd2portzd2_566;
																																													BgL_lastzd2matchzd2_2004
																																														=
																																														BgL_lastzd2matchzd2_567;
																																													BgL_lastzd2matchzd2_508
																																														=
																																														BgL_lastzd2matchzd2_2004;
																																													BgL_inputzd2portzd2_507
																																														=
																																														BgL_inputzd2portzd2_2003;
																																													goto
																																														BgL_zc3anonymousza31930ze3z83_509;
																																												}
																																										}
																																									else
																																										{	/* Cc/ld.scm 125 */
																																											if (((long) (BgL_currentzd2charzd2_569) == ((long) 116)))
																																												{	/* Cc/ld.scm 125 */
																																													BgL_inputzd2portzd2_587
																																														=
																																														BgL_inputzd2portzd2_566;
																																													BgL_lastzd2matchzd2_588
																																														=
																																														BgL_lastzd2matchzd2_567;
																																												BgL_zc3anonymousza31997ze3z83_589:
																																													{	/* Cc/ld.scm 125 */
																																														int
																																															BgL_currentzd2charzd2_590;
																																														BgL_currentzd2charzd2_590
																																															=
																																															RGC_BUFFER_GET_CHAR
																																															(BgL_inputzd2portzd2_587);
																																														if (((long) (BgL_currentzd2charzd2_590) == ((long) 0)))
																																															{	/* Cc/ld.scm 125 */
																																																if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_587))
																																																	{	/* Cc/ld.scm 125 */
																																																		if (rgc_fill_buffer(BgL_inputzd2portzd2_587))
																																																			{

																																																				goto
																																																					BgL_zc3anonymousza31997ze3z83_589;
																																																			}
																																																		else
																																																			{	/* Cc/ld.scm 125 */
																																																				BgL_matchz00_704
																																																					=
																																																					BgL_lastzd2matchzd2_588;
																																																			}
																																																	}
																																																else
																																																	{
																																																		long
																																																			BgL_lastzd2matchzd2_2017;
																																																		obj_t
																																																			BgL_inputzd2portzd2_2016;
																																																		BgL_inputzd2portzd2_2016
																																																			=
																																																			BgL_inputzd2portzd2_587;
																																																		BgL_lastzd2matchzd2_2017
																																																			=
																																																			BgL_lastzd2matchzd2_588;
																																																		BgL_lastzd2matchzd2_508
																																																			=
																																																			BgL_lastzd2matchzd2_2017;
																																																		BgL_inputzd2portzd2_507
																																																			=
																																																			BgL_inputzd2portzd2_2016;
																																																		goto
																																																			BgL_zc3anonymousza31930ze3z83_509;
																																																	}
																																															}
																																														else
																																															{	/* Cc/ld.scm 125 */
																																																if (((long) (BgL_currentzd2charzd2_590) == ((long) 105)))
																																																	{	/* Cc/ld.scm 125 */
																																																		BgL_inputzd2portzd2_599
																																																			=
																																																			BgL_inputzd2portzd2_587;
																																																		BgL_lastzd2matchzd2_600
																																																			=
																																																			BgL_lastzd2matchzd2_588;
																																																	BgL_zc3anonymousza32008ze3z83_601:
																																																		{	/* Cc/ld.scm 125 */
																																																			int
																																																				BgL_currentzd2charzd2_602;
																																																			BgL_currentzd2charzd2_602
																																																				=
																																																				RGC_BUFFER_GET_CHAR
																																																				(BgL_inputzd2portzd2_599);
																																																			if (((long) (BgL_currentzd2charzd2_602) == ((long) 0)))
																																																				{	/* Cc/ld.scm 125 */
																																																					if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_599))
																																																						{	/* Cc/ld.scm 125 */
																																																							if (rgc_fill_buffer(BgL_inputzd2portzd2_599))
																																																								{

																																																									goto
																																																										BgL_zc3anonymousza32008ze3z83_601;
																																																								}
																																																							else
																																																								{	/* Cc/ld.scm 125 */
																																																									BgL_matchz00_704
																																																										=
																																																										BgL_lastzd2matchzd2_600;
																																																								}
																																																						}
																																																					else
																																																						{
																																																							long
																																																								BgL_lastzd2matchzd2_2030;
																																																							obj_t
																																																								BgL_inputzd2portzd2_2029;
																																																							BgL_inputzd2portzd2_2029
																																																								=
																																																								BgL_inputzd2portzd2_599;
																																																							BgL_lastzd2matchzd2_2030
																																																								=
																																																								BgL_lastzd2matchzd2_600;
																																																							BgL_lastzd2matchzd2_508
																																																								=
																																																								BgL_lastzd2matchzd2_2030;
																																																							BgL_inputzd2portzd2_507
																																																								=
																																																								BgL_inputzd2portzd2_2029;
																																																							goto
																																																								BgL_zc3anonymousza31930ze3z83_509;
																																																						}
																																																				}
																																																			else
																																																				{	/* Cc/ld.scm 125 */
																																																					if (((long) (BgL_currentzd2charzd2_602) == ((long) 99)))
																																																						{	/* Cc/ld.scm 125 */
																																																							BgL_inputzd2portzd2_611
																																																								=
																																																								BgL_inputzd2portzd2_599;
																																																							BgL_lastzd2matchzd2_612
																																																								=
																																																								BgL_lastzd2matchzd2_600;
																																																						BgL_zc3anonymousza32017ze3z83_613:
																																																							{	/* Cc/ld.scm 125 */
																																																								long
																																																									BgL_newzd2matchzd2_614;
																																																								RGC_STOP_MATCH
																																																									(BgL_inputzd2portzd2_611);
																																																								BgL_newzd2matchzd2_614
																																																									=
																																																									(
																																																									(long)
																																																									0);
																																																								{	/* Cc/ld.scm 125 */
																																																									int
																																																										BgL_currentzd2charzd2_615;
																																																									BgL_currentzd2charzd2_615
																																																										=
																																																										RGC_BUFFER_GET_CHAR
																																																										(BgL_inputzd2portzd2_611);
																																																									if (((long) (BgL_currentzd2charzd2_615) == ((long) 0)))
																																																										{	/* Cc/ld.scm 125 */
																																																											if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_611))
																																																												{	/* Cc/ld.scm 125 */
																																																													if (rgc_fill_buffer(BgL_inputzd2portzd2_611))
																																																														{

																																																															goto
																																																																BgL_zc3anonymousza32017ze3z83_613;
																																																														}
																																																													else
																																																														{	/* Cc/ld.scm 125 */
																																																															BgL_matchz00_704
																																																																=
																																																																BgL_newzd2matchzd2_614;
																																																														}
																																																												}
																																																											else
																																																												{
																																																													long
																																																														BgL_lastzd2matchzd2_2044;
																																																													obj_t
																																																														BgL_inputzd2portzd2_2043;
																																																													BgL_inputzd2portzd2_2043
																																																														=
																																																														BgL_inputzd2portzd2_611;
																																																													BgL_lastzd2matchzd2_2044
																																																														=
																																																														BgL_newzd2matchzd2_614;
																																																													BgL_lastzd2matchzd2_508
																																																														=
																																																														BgL_lastzd2matchzd2_2044;
																																																													BgL_inputzd2portzd2_507
																																																														=
																																																														BgL_inputzd2portzd2_2043;
																																																													goto
																																																														BgL_zc3anonymousza31930ze3z83_509;
																																																												}
																																																										}
																																																									else
																																																										{	/* Cc/ld.scm 125 */
																																																											if (((long) (BgL_currentzd2charzd2_615) == ((long) 45)))
																																																												{
																																																													long
																																																														BgL_lastzd2matchzd2_2049;
																																																													obj_t
																																																														BgL_inputzd2portzd2_2048;
																																																													BgL_inputzd2portzd2_2048
																																																														=
																																																														BgL_inputzd2portzd2_611;
																																																													BgL_lastzd2matchzd2_2049
																																																														=
																																																														BgL_newzd2matchzd2_614;
																																																													BgL_lastzd2matchzd2_531
																																																														=
																																																														BgL_lastzd2matchzd2_2049;
																																																													BgL_inputzd2portzd2_530
																																																														=
																																																														BgL_inputzd2portzd2_2048;
																																																													goto
																																																														BgL_zc3anonymousza31946ze3z83_532;
																																																												}
																																																											else
																																																												{	/* Cc/ld.scm 125 */
																																																													bool_t
																																																														BgL_testz00_2050;
																																																													if (((long) (BgL_currentzd2charzd2_615) == ((long) 10)))
																																																														{	/* Cc/ld.scm 125 */
																																																															BgL_testz00_2050
																																																																=
																																																																(
																																																																(bool_t)
																																																																1);
																																																														}
																																																													else
																																																														{	/* Cc/ld.scm 125 */
																																																															BgL_testz00_2050
																																																																=
																																																																(
																																																																(long)
																																																																(BgL_currentzd2charzd2_615)
																																																																==
																																																																((long) 45));
																																																														}
																																																													if (BgL_testz00_2050)
																																																														{	/* Cc/ld.scm 125 */
																																																															BgL_matchz00_704
																																																																=
																																																																BgL_newzd2matchzd2_614;
																																																														}
																																																													else
																																																														{
																																																															long
																																																																BgL_lastzd2matchzd2_2057;
																																																															obj_t
																																																																BgL_inputzd2portzd2_2056;
																																																															BgL_inputzd2portzd2_2056
																																																																=
																																																																BgL_inputzd2portzd2_611;
																																																															BgL_lastzd2matchzd2_2057
																																																																=
																																																																BgL_newzd2matchzd2_614;
																																																															BgL_lastzd2matchzd2_508
																																																																=
																																																																BgL_lastzd2matchzd2_2057;
																																																															BgL_inputzd2portzd2_507
																																																																=
																																																																BgL_inputzd2portzd2_2056;
																																																															goto
																																																																BgL_zc3anonymousza31930ze3z83_509;
																																																														}
																																																												}
																																																										}
																																																								}
																																																							}
																																																						}
																																																					else
																																																						{	/* Cc/ld.scm 125 */
																																																							if (((long) (BgL_currentzd2charzd2_602) == ((long) 45)))
																																																								{
																																																									long
																																																										BgL_lastzd2matchzd2_2062;
																																																									obj_t
																																																										BgL_inputzd2portzd2_2061;
																																																									BgL_inputzd2portzd2_2061
																																																										=
																																																										BgL_inputzd2portzd2_599;
																																																									BgL_lastzd2matchzd2_2062
																																																										=
																																																										BgL_lastzd2matchzd2_600;
																																																									BgL_lastzd2matchzd2_531
																																																										=
																																																										BgL_lastzd2matchzd2_2062;
																																																									BgL_inputzd2portzd2_530
																																																										=
																																																										BgL_inputzd2portzd2_2061;
																																																									goto
																																																										BgL_zc3anonymousza31946ze3z83_532;
																																																								}
																																																							else
																																																								{	/* Cc/ld.scm 125 */
																																																									bool_t
																																																										BgL_testz00_2063;
																																																									if (((long) (BgL_currentzd2charzd2_602) == ((long) 10)))
																																																										{	/* Cc/ld.scm 125 */
																																																											BgL_testz00_2063
																																																												=
																																																												(
																																																												(bool_t)
																																																												1);
																																																										}
																																																									else
																																																										{	/* Cc/ld.scm 125 */
																																																											if (((long) (BgL_currentzd2charzd2_602) == ((long) 45)))
																																																												{	/* Cc/ld.scm 125 */
																																																													BgL_testz00_2063
																																																														=
																																																														(
																																																														(bool_t)
																																																														1);
																																																												}
																																																											else
																																																												{	/* Cc/ld.scm 125 */
																																																													BgL_testz00_2063
																																																														=
																																																														(
																																																														(long)
																																																														(BgL_currentzd2charzd2_602)
																																																														==
																																																														((long) 99));
																																																										}}
																																																									if (BgL_testz00_2063)
																																																										{	/* Cc/ld.scm 125 */
																																																											BgL_matchz00_704
																																																												=
																																																												BgL_lastzd2matchzd2_600;
																																																										}
																																																									else
																																																										{
																																																											long
																																																												BgL_lastzd2matchzd2_2073;
																																																											obj_t
																																																												BgL_inputzd2portzd2_2072;
																																																											BgL_inputzd2portzd2_2072
																																																												=
																																																												BgL_inputzd2portzd2_599;
																																																											BgL_lastzd2matchzd2_2073
																																																												=
																																																												BgL_lastzd2matchzd2_600;
																																																											BgL_lastzd2matchzd2_508
																																																												=
																																																												BgL_lastzd2matchzd2_2073;
																																																											BgL_inputzd2portzd2_507
																																																												=
																																																												BgL_inputzd2portzd2_2072;
																																																											goto
																																																												BgL_zc3anonymousza31930ze3z83_509;
																																																										}
																																																								}
																																																						}
																																																				}
																																																		}
																																																	}
																																																else
																																																	{	/* Cc/ld.scm 125 */
																																																		if (((long) (BgL_currentzd2charzd2_590) == ((long) 45)))
																																																			{
																																																				long
																																																					BgL_lastzd2matchzd2_2078;
																																																				obj_t
																																																					BgL_inputzd2portzd2_2077;
																																																				BgL_inputzd2portzd2_2077
																																																					=
																																																					BgL_inputzd2portzd2_587;
																																																				BgL_lastzd2matchzd2_2078
																																																					=
																																																					BgL_lastzd2matchzd2_588;
																																																				BgL_lastzd2matchzd2_531
																																																					=
																																																					BgL_lastzd2matchzd2_2078;
																																																				BgL_inputzd2portzd2_530
																																																					=
																																																					BgL_inputzd2portzd2_2077;
																																																				goto
																																																					BgL_zc3anonymousza31946ze3z83_532;
																																																			}
																																																		else
																																																			{	/* Cc/ld.scm 125 */
																																																				bool_t
																																																					BgL_testz00_2079;
																																																				if (((long) (BgL_currentzd2charzd2_590) == ((long) 10)))
																																																					{	/* Cc/ld.scm 125 */
																																																						BgL_testz00_2079
																																																							=
																																																							(
																																																							(bool_t)
																																																							1);
																																																					}
																																																				else
																																																					{	/* Cc/ld.scm 125 */
																																																						if (((long) (BgL_currentzd2charzd2_590) == ((long) 45)))
																																																							{	/* Cc/ld.scm 125 */
																																																								BgL_testz00_2079
																																																									=
																																																									(
																																																									(bool_t)
																																																									1);
																																																							}
																																																						else
																																																							{	/* Cc/ld.scm 125 */
																																																								BgL_testz00_2079
																																																									=
																																																									(
																																																									(long)
																																																									(BgL_currentzd2charzd2_590)
																																																									==
																																																									((long) 105));
																																																					}}
																																																				if (BgL_testz00_2079)
																																																					{	/* Cc/ld.scm 125 */
																																																						BgL_matchz00_704
																																																							=
																																																							BgL_lastzd2matchzd2_588;
																																																					}
																																																				else
																																																					{
																																																						long
																																																							BgL_lastzd2matchzd2_2089;
																																																						obj_t
																																																							BgL_inputzd2portzd2_2088;
																																																						BgL_inputzd2portzd2_2088
																																																							=
																																																							BgL_inputzd2portzd2_587;
																																																						BgL_lastzd2matchzd2_2089
																																																							=
																																																							BgL_lastzd2matchzd2_588;
																																																						BgL_lastzd2matchzd2_508
																																																							=
																																																							BgL_lastzd2matchzd2_2089;
																																																						BgL_inputzd2portzd2_507
																																																							=
																																																							BgL_inputzd2portzd2_2088;
																																																						goto
																																																							BgL_zc3anonymousza31930ze3z83_509;
																																																					}
																																																			}
																																																	}
																																															}
																																													}
																																												}
																																											else
																																												{	/* Cc/ld.scm 125 */
																																													if (((long) (BgL_currentzd2charzd2_569) == ((long) 45)))
																																														{
																																															long
																																																BgL_lastzd2matchzd2_2094;
																																															obj_t
																																																BgL_inputzd2portzd2_2093;
																																															BgL_inputzd2portzd2_2093
																																																=
																																																BgL_inputzd2portzd2_566;
																																															BgL_lastzd2matchzd2_2094
																																																=
																																																BgL_lastzd2matchzd2_567;
																																															BgL_lastzd2matchzd2_531
																																																=
																																																BgL_lastzd2matchzd2_2094;
																																															BgL_inputzd2portzd2_530
																																																=
																																																BgL_inputzd2portzd2_2093;
																																															goto
																																																BgL_zc3anonymousza31946ze3z83_532;
																																														}
																																													else
																																														{	/* Cc/ld.scm 125 */
																																															bool_t
																																																BgL_testz00_2095;
																																															if (((long) (BgL_currentzd2charzd2_569) == ((long) 10)))
																																																{	/* Cc/ld.scm 125 */
																																																	BgL_testz00_2095
																																																		=
																																																		(
																																																		(bool_t)
																																																		1);
																																																}
																																															else
																																																{	/* Cc/ld.scm 125 */
																																																	if (((long) (BgL_currentzd2charzd2_569) == ((long) 45)))
																																																		{	/* Cc/ld.scm 125 */
																																																			BgL_testz00_2095
																																																				=
																																																				(
																																																				(bool_t)
																																																				1);
																																																		}
																																																	else
																																																		{	/* Cc/ld.scm 125 */
																																																			BgL_testz00_2095
																																																				=
																																																				(
																																																				(long)
																																																				(BgL_currentzd2charzd2_569)
																																																				==
																																																				((long) 116));
																																																}}
																																															if (BgL_testz00_2095)
																																																{	/* Cc/ld.scm 125 */
																																																	BgL_matchz00_704
																																																		=
																																																		BgL_lastzd2matchzd2_567;
																																																}
																																															else
																																																{
																																																	long
																																																		BgL_lastzd2matchzd2_2105;
																																																	obj_t
																																																		BgL_inputzd2portzd2_2104;
																																																	BgL_inputzd2portzd2_2104
																																																		=
																																																		BgL_inputzd2portzd2_566;
																																																	BgL_lastzd2matchzd2_2105
																																																		=
																																																		BgL_lastzd2matchzd2_567;
																																																	BgL_lastzd2matchzd2_508
																																																		=
																																																		BgL_lastzd2matchzd2_2105;
																																																	BgL_inputzd2portzd2_507
																																																		=
																																																		BgL_inputzd2portzd2_2104;
																																																	goto
																																																		BgL_zc3anonymousza31930ze3z83_509;
																																																}
																																														}
																																												}
																																										}
																																								}
																																							}
																																						else
																																							{	/* Cc/ld.scm 125 */
																																								if (((long) (BgL_currentzd2charzd2_557) == ((long) 45)))
																																									{
																																										long
																																											BgL_lastzd2matchzd2_2110;
																																										obj_t
																																											BgL_inputzd2portzd2_2109;
																																										BgL_inputzd2portzd2_2109
																																											=
																																											BgL_inputzd2portzd2_554;
																																										BgL_lastzd2matchzd2_2110
																																											=
																																											BgL_lastzd2matchzd2_555;
																																										BgL_lastzd2matchzd2_531
																																											=
																																											BgL_lastzd2matchzd2_2110;
																																										BgL_inputzd2portzd2_530
																																											=
																																											BgL_inputzd2portzd2_2109;
																																										goto
																																											BgL_zc3anonymousza31946ze3z83_532;
																																									}
																																								else
																																									{	/* Cc/ld.scm 125 */
																																										bool_t
																																											BgL_testz00_2111;
																																										if (((long) (BgL_currentzd2charzd2_557) == ((long) 10)))
																																											{	/* Cc/ld.scm 125 */
																																												BgL_testz00_2111
																																													=
																																													(
																																													(bool_t)
																																													1);
																																											}
																																										else
																																											{	/* Cc/ld.scm 125 */
																																												if (((long) (BgL_currentzd2charzd2_557) == ((long) 45)))
																																													{	/* Cc/ld.scm 125 */
																																														BgL_testz00_2111
																																															=
																																															(
																																															(bool_t)
																																															1);
																																													}
																																												else
																																													{	/* Cc/ld.scm 125 */
																																														BgL_testz00_2111
																																															=
																																															(
																																															(long)
																																															(BgL_currentzd2charzd2_557)
																																															==
																																															((long) 97));
																																											}}
																																										if (BgL_testz00_2111)
																																											{	/* Cc/ld.scm 125 */
																																												BgL_matchz00_704
																																													=
																																													BgL_lastzd2matchzd2_555;
																																											}
																																										else
																																											{
																																												long
																																													BgL_lastzd2matchzd2_2121;
																																												obj_t
																																													BgL_inputzd2portzd2_2120;
																																												BgL_inputzd2portzd2_2120
																																													=
																																													BgL_inputzd2portzd2_554;
																																												BgL_lastzd2matchzd2_2121
																																													=
																																													BgL_lastzd2matchzd2_555;
																																												BgL_lastzd2matchzd2_508
																																													=
																																													BgL_lastzd2matchzd2_2121;
																																												BgL_inputzd2portzd2_507
																																													=
																																													BgL_inputzd2portzd2_2120;
																																												goto
																																													BgL_zc3anonymousza31930ze3z83_509;
																																											}
																																									}
																																							}
																																					}
																																			}
																																		}
																																	else
																																		{	/* Cc/ld.scm 125 */
																																			if (
																																				((long)
																																					(BgL_currentzd2charzd2_545)
																																					==
																																					((long) 45)))
																																				{
																																					long
																																						BgL_lastzd2matchzd2_2126;
																																					obj_t
																																						BgL_inputzd2portzd2_2125;
																																					BgL_inputzd2portzd2_2125
																																						=
																																						BgL_inputzd2portzd2_542;
																																					BgL_lastzd2matchzd2_2126
																																						=
																																						BgL_lastzd2matchzd2_543;
																																					BgL_lastzd2matchzd2_531
																																						=
																																						BgL_lastzd2matchzd2_2126;
																																					BgL_inputzd2portzd2_530
																																						=
																																						BgL_inputzd2portzd2_2125;
																																					goto
																																						BgL_zc3anonymousza31946ze3z83_532;
																																				}
																																			else
																																				{	/* Cc/ld.scm 125 */
																																					bool_t
																																						BgL_testz00_2127;
																																					if ((
																																							(long)
																																							(BgL_currentzd2charzd2_545)
																																							==
																																							((long) 10)))
																																						{	/* Cc/ld.scm 125 */
																																							BgL_testz00_2127
																																								=
																																								(
																																								(bool_t)
																																								1);
																																						}
																																					else
																																						{	/* Cc/ld.scm 125 */
																																							if (((long) (BgL_currentzd2charzd2_545) == ((long) 45)))
																																								{	/* Cc/ld.scm 125 */
																																									BgL_testz00_2127
																																										=
																																										(
																																										(bool_t)
																																										1);
																																								}
																																							else
																																								{	/* Cc/ld.scm 125 */
																																									BgL_testz00_2127
																																										=
																																										(
																																										(long)
																																										(BgL_currentzd2charzd2_545)
																																										==
																																										((long) 116));
																																						}}
																																					if (BgL_testz00_2127)
																																						{	/* Cc/ld.scm 125 */
																																							BgL_matchz00_704
																																								=
																																								BgL_lastzd2matchzd2_543;
																																						}
																																					else
																																						{
																																							long
																																								BgL_lastzd2matchzd2_2137;
																																							obj_t
																																								BgL_inputzd2portzd2_2136;
																																							BgL_inputzd2portzd2_2136
																																								=
																																								BgL_inputzd2portzd2_542;
																																							BgL_lastzd2matchzd2_2137
																																								=
																																								BgL_lastzd2matchzd2_543;
																																							BgL_lastzd2matchzd2_508
																																								=
																																								BgL_lastzd2matchzd2_2137;
																																							BgL_inputzd2portzd2_507
																																								=
																																								BgL_inputzd2portzd2_2136;
																																							goto
																																								BgL_zc3anonymousza31930ze3z83_509;
																																						}
																																				}
																																		}
																																}
																														}
																													}
																												else
																													{	/* Cc/ld.scm 125 */
																														if (
																															((long)
																																(BgL_currentzd2charzd2_533)
																																== ((long) 45)))
																															{

																																goto
																																	BgL_zc3anonymousza31946ze3z83_532;
																															}
																														else
																															{	/* Cc/ld.scm 125 */
																																bool_t
																																	BgL_testz00_2141;
																																if (((long)
																																		(BgL_currentzd2charzd2_533)
																																		==
																																		((long)
																																			10)))
																																	{	/* Cc/ld.scm 125 */
																																		BgL_testz00_2141
																																			=
																																			((bool_t)
																																			1);
																																	}
																																else
																																	{	/* Cc/ld.scm 125 */
																																		if (
																																			((long)
																																				(BgL_currentzd2charzd2_533)
																																				==
																																				((long)
																																					45)))
																																			{	/* Cc/ld.scm 125 */
																																				BgL_testz00_2141
																																					=
																																					(
																																					(bool_t)
																																					1);
																																			}
																																		else
																																			{	/* Cc/ld.scm 125 */
																																				BgL_testz00_2141
																																					=
																																					(
																																					(long)
																																					(BgL_currentzd2charzd2_533)
																																					==
																																					((long) 115));
																																	}}
																																if (BgL_testz00_2141)
																																	{	/* Cc/ld.scm 125 */
																																		BgL_matchz00_704
																																			=
																																			BgL_lastzd2matchzd2_531;
																																	}
																																else
																																	{
																																		long
																																			BgL_lastzd2matchzd2_2151;
																																		obj_t
																																			BgL_inputzd2portzd2_2150;
																																		BgL_inputzd2portzd2_2150
																																			=
																																			BgL_inputzd2portzd2_530;
																																		BgL_lastzd2matchzd2_2151
																																			=
																																			BgL_lastzd2matchzd2_531;
																																		BgL_lastzd2matchzd2_508
																																			=
																																			BgL_lastzd2matchzd2_2151;
																																		BgL_inputzd2portzd2_507
																																			=
																																			BgL_inputzd2portzd2_2150;
																																		goto
																																			BgL_zc3anonymousza31930ze3z83_509;
																																	}
																															}
																													}
																											}
																									}
																								}
																							else
																								{	/* Cc/ld.scm 125 */
																									bool_t BgL_testz00_2152;

																									if (
																										((long)
																											(BgL_currentzd2charzd2_510)
																											== ((long) 10)))
																										{	/* Cc/ld.scm 125 */
																											BgL_testz00_2152 =
																												((bool_t) 1);
																										}
																									else
																										{	/* Cc/ld.scm 125 */
																											BgL_testz00_2152 =
																												(
																												(long)
																												(BgL_currentzd2charzd2_510)
																												== ((long) 45));
																										}
																									if (BgL_testz00_2152)
																										{	/* Cc/ld.scm 125 */
																											BgL_matchz00_704 =
																												BgL_lastzd2matchzd2_508;
																										}
																									else
																										{

																											goto
																												BgL_zc3anonymousza31930ze3z83_509;
																										}
																								}
																						}
																				}
																			}
																	}
																else
																	{	/* Cc/ld.scm 125 */
																		if (
																			((long) (BgL_currentzd2charzd2_500) ==
																				((long) 45)))
																			{
																				long BgL_lastzd2matchzd2_2162;

																				obj_t BgL_inputzd2portzd2_2161;

																				BgL_inputzd2portzd2_2161 =
																					BgL_inputzd2portzd2_496;
																				BgL_lastzd2matchzd2_2162 =
																					BgL_newzd2matchzd2_499;
																				BgL_lastzd2matchzd2_531 =
																					BgL_lastzd2matchzd2_2162;
																				BgL_inputzd2portzd2_530 =
																					BgL_inputzd2portzd2_2161;
																				goto BgL_zc3anonymousza31946ze3z83_532;
																			}
																		else
																			{	/* Cc/ld.scm 125 */
																				bool_t BgL_testz00_2163;

																				if (
																					((long) (BgL_currentzd2charzd2_500) ==
																						((long) 10)))
																					{	/* Cc/ld.scm 125 */
																						BgL_testz00_2163 = ((bool_t) 1);
																					}
																				else
																					{	/* Cc/ld.scm 125 */
																						BgL_testz00_2163 =
																							(
																							(long) (BgL_currentzd2charzd2_500)
																							== ((long) 45));
																					}
																				if (BgL_testz00_2163)
																					{	/* Cc/ld.scm 125 */
																						BgL_matchz00_704 =
																							BgL_newzd2matchzd2_499;
																					}
																				else
																					{
																						long BgL_lastzd2matchzd2_2170;

																						obj_t BgL_inputzd2portzd2_2169;

																						BgL_inputzd2portzd2_2169 =
																							BgL_inputzd2portzd2_496;
																						BgL_lastzd2matchzd2_2170 =
																							BgL_newzd2matchzd2_499;
																						BgL_lastzd2matchzd2_508 =
																							BgL_lastzd2matchzd2_2170;
																						BgL_inputzd2portzd2_507 =
																							BgL_inputzd2portzd2_2169;
																						goto
																							BgL_zc3anonymousza31930ze3z83_509;
																					}
																			}
																	}
															}
														}
													}
												break;
											case ((long) 45):

												BgL_inputzd2portzd2_517 = BgL_inputzd2portzd2_578;
												BgL_lastzd2matchzd2_518 = BgL_lastzd2matchzd2_579;
											BgL_zc3anonymousza31937ze3z83_519:
												{	/* Cc/ld.scm 125 */
													long BgL_newzd2matchzd2_520;

													RGC_STOP_MATCH(BgL_inputzd2portzd2_517);
													BgL_newzd2matchzd2_520 = ((long) 1);
													{	/* Cc/ld.scm 125 */
														int BgL_currentzd2charzd2_521;

														BgL_currentzd2charzd2_521 =
															RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_517);
														if (
															((long) (BgL_currentzd2charzd2_521) ==
																((long) 0)))
															{	/* Cc/ld.scm 125 */
																if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_517))
																	{	/* Cc/ld.scm 125 */
																		if (rgc_fill_buffer
																			(BgL_inputzd2portzd2_517))
																			{

																				goto BgL_zc3anonymousza31937ze3z83_519;
																			}
																		else
																			{	/* Cc/ld.scm 125 */
																				BgL_matchz00_704 =
																					BgL_newzd2matchzd2_520;
																			}
																	}
																else
																	{
																		long BgL_lastzd2matchzd2_2181;

																		obj_t BgL_inputzd2portzd2_2180;

																		BgL_inputzd2portzd2_2180 =
																			BgL_inputzd2portzd2_517;
																		BgL_lastzd2matchzd2_2181 =
																			BgL_newzd2matchzd2_520;
																		BgL_lastzd2matchzd2_508 =
																			BgL_lastzd2matchzd2_2181;
																		BgL_inputzd2portzd2_507 =
																			BgL_inputzd2portzd2_2180;
																		goto BgL_zc3anonymousza31930ze3z83_509;
																	}
															}
														else
															{	/* Cc/ld.scm 125 */
																if (
																	((long) (BgL_currentzd2charzd2_521) ==
																		((long) 115)))
																	{
																		long BgL_lastzd2matchzd2_2186;

																		obj_t BgL_inputzd2portzd2_2185;

																		BgL_inputzd2portzd2_2185 =
																			BgL_inputzd2portzd2_517;
																		BgL_lastzd2matchzd2_2186 =
																			BgL_newzd2matchzd2_520;
																		BgL_lastzd2matchzd2_543 =
																			BgL_lastzd2matchzd2_2186;
																		BgL_inputzd2portzd2_542 =
																			BgL_inputzd2portzd2_2185;
																		goto BgL_zc3anonymousza31956ze3z83_544;
																	}
																else
																	{	/* Cc/ld.scm 125 */
																		if (
																			((long) (BgL_currentzd2charzd2_521) ==
																				((long) 45)))
																			{
																				long BgL_lastzd2matchzd2_2191;

																				obj_t BgL_inputzd2portzd2_2190;

																				BgL_inputzd2portzd2_2190 =
																					BgL_inputzd2portzd2_517;
																				BgL_lastzd2matchzd2_2191 =
																					BgL_newzd2matchzd2_520;
																				BgL_lastzd2matchzd2_531 =
																					BgL_lastzd2matchzd2_2191;
																				BgL_inputzd2portzd2_530 =
																					BgL_inputzd2portzd2_2190;
																				goto BgL_zc3anonymousza31946ze3z83_532;
																			}
																		else
																			{	/* Cc/ld.scm 125 */
																				bool_t BgL_testz00_2192;

																				if (
																					((long) (BgL_currentzd2charzd2_521) ==
																						((long) 10)))
																					{	/* Cc/ld.scm 125 */
																						BgL_testz00_2192 = ((bool_t) 1);
																					}
																				else
																					{	/* Cc/ld.scm 125 */
																						if (
																							((long)
																								(BgL_currentzd2charzd2_521) ==
																								((long) 45)))
																							{	/* Cc/ld.scm 125 */
																								BgL_testz00_2192 = ((bool_t) 1);
																							}
																						else
																							{	/* Cc/ld.scm 125 */
																								BgL_testz00_2192 =
																									(
																									(long)
																									(BgL_currentzd2charzd2_521) ==
																									((long) 115));
																					}}
																				if (BgL_testz00_2192)
																					{	/* Cc/ld.scm 125 */
																						BgL_matchz00_704 =
																							BgL_newzd2matchzd2_520;
																					}
																				else
																					{
																						long BgL_lastzd2matchzd2_2202;

																						obj_t BgL_inputzd2portzd2_2201;

																						BgL_inputzd2portzd2_2201 =
																							BgL_inputzd2portzd2_517;
																						BgL_lastzd2matchzd2_2202 =
																							BgL_newzd2matchzd2_520;
																						BgL_lastzd2matchzd2_508 =
																							BgL_lastzd2matchzd2_2202;
																						BgL_inputzd2portzd2_507 =
																							BgL_inputzd2portzd2_2201;
																						goto
																							BgL_zc3anonymousza31930ze3z83_509;
																					}
																			}
																	}
															}
													}
												}
												break;
											case ((long) 10):

												{	/* Cc/ld.scm 125 */
													long BgL_newzd2matchzd2_1303;

													RGC_STOP_MATCH(BgL_inputzd2portzd2_578);
													BgL_newzd2matchzd2_1303 = ((long) 1);
													BgL_matchz00_704 = BgL_newzd2matchzd2_1303;
												} break;
											default:
												{
													long BgL_lastzd2matchzd2_2205;

													obj_t BgL_inputzd2portzd2_2204;

													BgL_inputzd2portzd2_2204 = BgL_inputzd2portzd2_578;
													BgL_lastzd2matchzd2_2205 = BgL_lastzd2matchzd2_579;
													BgL_lastzd2matchzd2_497 = BgL_lastzd2matchzd2_2205;
													BgL_inputzd2portzd2_496 = BgL_inputzd2portzd2_2204;
													goto BgL_zc3anonymousza31923ze3z83_498;
												}
											}
									}
									RGC_SET_FILEPOS(BgL_port1597z00_1600);
									{

										{	/* Cc/ld.scm 125 */
											obj_t BgL_aux1650z00_709;

											BgL_aux1650z00_709 = BINT(BgL_matchz00_704);
											switch ((long) CINT(BgL_aux1650z00_709))
												{
												case ((long) 1):

													BgL_val1600z00_452 = BFALSE;
													break;
												case ((long) 0):

													BgL_val1600z00_452 = BTRUE;
													break;
												default:
													BgL_val1600z00_452 =
														BGl_errorz00zz__errorz00
														(BGl_string2777z00zzcc_ldz00,
														BGl_string2778z00zzcc_ldz00,
														BINT(BgL_matchz00_704));
												}
										}
									}
								}
							}
							POP_EXIT();
							return BgL_val1600z00_452;
						}
					}
				}
		}
	}



/* loop' */
	obj_t BGl_loopz72z72zzcc_ldz00(obj_t BgL_pathz00_372)
	{
		AN_OBJECT;
		{	/* Cc/ld.scm 212 */
			if (NULLP(BgL_pathz00_372))
				{	/* Cc/ld.scm 213 */
					return BGl_string2763z00zzcc_ldz00;
				}
			else
				{	/* Cc/ld.scm 215 */
					obj_t BgL_arg1870z00_376;

					obj_t BgL_arg1872z00_378;

					BgL_arg1870z00_376 = CAR(BgL_pathz00_372);
					BgL_arg1872z00_378 = BGl_loopz72z72zzcc_ldz00(CDR(BgL_pathz00_372));
					{	/* Cc/ld.scm 215 */
						obj_t BgL_list1873z00_379;

						{	/* Cc/ld.scm 215 */
							obj_t BgL_arg1874z00_380;

							{	/* Cc/ld.scm 215 */
								obj_t BgL_arg1875z00_381;

								{	/* Cc/ld.scm 215 */
									obj_t BgL_arg1876z00_382;

									BgL_arg1876z00_382 = MAKE_PAIR(BgL_arg1872z00_378, BNIL);
									BgL_arg1875z00_381 =
										MAKE_PAIR(BGl_string2773z00zzcc_ldz00, BgL_arg1876z00_382);
								}
								BgL_arg1874z00_380 =
									MAKE_PAIR(BgL_arg1870z00_376, BgL_arg1875z00_381);
							}
							BgL_list1873z00_379 =
								MAKE_PAIR(BGl_string2775z00zzcc_ldz00, BgL_arg1874z00_380);
						}
						return
							BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1873z00_379);
					}
				}
		}
	}



/* win32-ld */
	obj_t BGl_win32zd2ldzd2zzcc_ldz00(obj_t BgL_namez00_10)
	{
		AN_OBJECT;
		{	/* Cc/ld.scm 251 */
			{	/* Cc/ld.scm 252 */
				obj_t BgL_list2233z00_751;

				{	/* Cc/ld.scm 252 */
					obj_t BgL_arg2239z00_753;

					{	/* Cc/ld.scm 252 */
						obj_t BgL_arg2240z00_754;

						{	/* Cc/ld.scm 252 */
							obj_t BgL_arg2243z00_756;

							BgL_arg2243z00_756 =
								MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
							BgL_arg2240z00_754 =
								MAKE_PAIR(BGl_string2771z00zzcc_ldz00, BgL_arg2243z00_756);
						}
						BgL_arg2239z00_753 =
							MAKE_PAIR(BGl_za2ccza2z00zzengine_paramz00, BgL_arg2240z00_754);
					}
					BgL_list2233z00_751 =
						MAKE_PAIR(BGl_string2772z00zzcc_ldz00, BgL_arg2239z00_753);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list2233z00_751);
			}
			{	/* Cc/ld.scm 254 */
				obj_t BgL_staticpz00_757;

				{	/* Cc/ld.scm 255 */
					bool_t BgL__ortest_1625z00_866;

					if (CBOOL(BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF((
										(long) 6)))))
						{	/* Cc/ld.scm 255 */
							BgL__ortest_1625z00_866 = ((bool_t) 0);
						}
					else
						{	/* Cc/ld.scm 255 */
							BgL__ortest_1625z00_866 = ((bool_t) 1);
						}
					if (BgL__ortest_1625z00_866)
						{	/* Cc/ld.scm 255 */
							BgL_staticpz00_757 = BBOOL(BgL__ortest_1625z00_866);
						}
					else
						{	/* Cc/ld.scm 256 */
							obj_t BgL_port1626z00_867;

							{	/* Cc/ld.scm 256 */
								obj_t BgL_g2739z00_1170;

								BgL_g2739z00_1170 = BGl_za2ldzd2optionsza2zd2zzengine_paramz00;
								{	/* Cc/ld.scm 256 */

									BgL_port1626z00_867 =
										BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
										(BgL_g2739z00_1170, BINT(((long) 0)));
							}}
							{	/* Cc/ld.scm 256 */
								obj_t BgL_val1627z00_868;

								BgL_val1627z00_868 =
									BGl_zc3exitza32563ze3z83zzcc_ldz00(BgL_port1626z00_867);
								bgl_close_input_port(BgL_port1626z00_867);
								if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
										(BgL_val1627z00_868)))
									{	/* Cc/ld.scm 256 */
										BgL_staticpz00_757 =
											BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
											(BgL_val1627z00_868), CDR(BgL_val1627z00_868));
									}
								else
									{	/* Cc/ld.scm 256 */
										BgL_staticpz00_757 = BgL_val1627z00_868;
									}
							}
						}
				}
				if (CBOOL(BgL_staticpz00_757))
					{	/* Cc/ld.scm 262 */
						obj_t BgL_arg2245z00_758;

						BgL_arg2245z00_758 =
							BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
									7)));
						BGl_za2ldzd2optionsza2zd2zzengine_paramz00 =
							string_append_3(BgL_arg2245z00_758, BGl_string2773z00zzcc_ldz00,
							BGl_za2ldzd2optionsza2zd2zzengine_paramz00);
					}
				else
					{	/* Cc/ld.scm 264 */
						obj_t BgL_arg2255z00_760;

						BgL_arg2255z00_760 =
							BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
									8)));
						BGl_za2ldzd2optionsza2zd2zzengine_paramz00 =
							string_append_3(BgL_arg2255z00_760, BGl_string2773z00zzcc_ldz00,
							BGl_za2ldzd2optionsza2zd2zzengine_paramz00);
					}
				if (CBOOL(BGl_za2multizd2threadedzd2gczf3za2zf3zzengine_paramz00))
					{	/* Cc/ld.scm 268 */
						BGl_libraryzd2translationzd2tablezd2addz12zc0zz__libraryz00
							(BGl_za2bigloozd2libza2zd2zzengine_paramz00,
							BGl_string2779z00zzcc_ldz00, BNIL);
					}
				else
					{	/* Cc/ld.scm 268 */
						BFALSE;
					}
				{	/* Cc/ld.scm 270 */
					obj_t BgL_destz00_763;

					if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
						{	/* Cc/ld.scm 270 */
							BgL_destz00_763 = BGl_za2destza2z00zzengine_paramz00;
						}
					else
						{	/* Cc/ld.scm 270 */
							BgL_destz00_763 = BGl_defaultzd2executablezd2namez00zz__osz00();
						}
					{	/* Cc/ld.scm 270 */
						obj_t BgL_bigloozd2libzd2_764;

						{	/* Cc/ld.scm 275 */
							obj_t BgL_arg2557z00_864;

							BgL_arg2557z00_864 = BGl_libraryzd2suffixeszd2zzcc_ldz00();
							BgL_bigloozd2libzd2_764 =
								BGl_libraryzd2ze3oszd2fileze3zzcc_ldz00
								(BGl_za2bigloozd2libza2zd2zzengine_paramz00, BgL_arg2557z00_864,
								BTRUE, ((bool_t) 0), ((bool_t) 0));
						}
						{	/* Cc/ld.scm 274 */
							obj_t BgL_addzd2libszd2_765;

							{
								obj_t BgL_libz00_852;

								obj_t BgL_resz00_853;

								BgL_libz00_852 =
									BGl_za2additionalzd2bigloozd2librariesza2z00zzengine_paramz00;
								BgL_resz00_853 = BNIL;
							BgL_zc3anonymousza32532ze3z83_854:
								if (NULLP(BgL_libz00_852))
									{	/* Cc/ld.scm 280 */
										BgL_addzd2libszd2_765 = BgL_resz00_853;
									}
								else
									{	/* Cc/ld.scm 282 */
										obj_t BgL_arg2536z00_856;

										obj_t BgL_arg2544z00_857;

										BgL_arg2536z00_856 = CDR(BgL_libz00_852);
										{	/* Cc/ld.scm 285 */
											obj_t BgL_arg2550z00_858;

											{	/* Cc/ld.scm 285 */
												obj_t BgL_arg2554z00_859;

												obj_t BgL_arg2555z00_860;

												obj_t BgL_arg2556z00_861;

												BgL_arg2554z00_859 = CAR(BgL_libz00_852);
												BgL_arg2555z00_860 =
													BGl_libraryzd2suffixeszd2zzcc_ldz00();
												{	/* Cc/ld.scm 287 */
													obj_t BgL__ortest_1646z00_862;

													BgL__ortest_1646z00_862 =
														BGl_za2staticzd2allzd2bigloozf3za2zf3zzengine_paramz00;
													if (CBOOL(BgL__ortest_1646z00_862))
														{	/* Cc/ld.scm 287 */
															BgL_arg2556z00_861 = BgL__ortest_1646z00_862;
														}
													else
														{	/* Cc/ld.scm 287 */
															BgL_arg2556z00_861 = BgL_staticpz00_757;
														}
												}
												BgL_arg2550z00_858 =
													BGl_libraryzd2ze3oszd2fileze3zzcc_ldz00
													(BgL_arg2554z00_859, BgL_arg2555z00_860,
													BgL_arg2556z00_861, ((bool_t) 0), ((bool_t) 0));
											}
											BgL_arg2544z00_857 =
												MAKE_PAIR(BgL_arg2550z00_858, BgL_resz00_853);
										}
										{
											obj_t BgL_resz00_2274;

											obj_t BgL_libz00_2273;

											BgL_libz00_2273 = BgL_arg2536z00_856;
											BgL_resz00_2274 = BgL_arg2544z00_857;
											BgL_resz00_853 = BgL_resz00_2274;
											BgL_libz00_852 = BgL_libz00_2273;
											goto BgL_zc3anonymousza32532ze3z83_854;
										}
									}
							}
							{	/* Cc/ld.scm 278 */
								obj_t BgL_otherzd2libszd2_766;

								BgL_otherzd2libszd2_766 =
									BGl_za2bigloozd2userzd2libza2z00zzengine_paramz00;
								{	/* Cc/ld.scm 290 */
									obj_t BgL_ldzd2argszd2_767;

									{	/* Cc/ld.scm 293 */
										obj_t BgL_arg2312z00_792;

										obj_t BgL_arg2318z00_793;

										obj_t BgL_arg2325z00_794;

										obj_t BgL_arg2331z00_795;

										obj_t BgL_arg2338z00_796;

										obj_t BgL_arg2344z00_797;

										obj_t BgL_arg2351z00_798;

										obj_t BgL_arg2357z00_799;

										obj_t BgL_arg2364z00_800;

										obj_t BgL_arg2370z00_801;

										obj_t BgL_arg2377z00_802;

										obj_t BgL_arg2383z00_803;

										obj_t BgL_arg2390z00_804;

										{	/* Cc/ld.scm 293 */
											obj_t BgL_arg2454z00_822;

											BgL_arg2454z00_822 =
												string_append_3(BgL_namez00_10,
												BGl_string2774z00zzcc_ldz00,
												BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00);
											{	/* Cc/ld.scm 293 */
												obj_t BgL_list2455z00_823;

												BgL_list2455z00_823 =
													MAKE_PAIR(BgL_arg2454z00_822, BNIL);
												BgL_arg2312z00_792 = BgL_list2455z00_823;
											}
										}
										{	/* Cc/ld.scm 301 */
											obj_t BgL_arg2459z00_824;

											BgL_arg2459z00_824 =
												string_append
												(BGl_za2ldzd2ozd2optionza2z00zzengine_paramz00,
												BgL_destz00_763);
											{	/* Cc/ld.scm 301 */
												obj_t BgL_list2460z00_825;

												BgL_list2460z00_825 =
													MAKE_PAIR(BgL_arg2459z00_824, BNIL);
												BgL_arg2318z00_793 = BgL_list2460z00_825;
											}
										}
										BgL_arg2325z00_794 =
											BGl_stringzd2splitzd2charz00zztools_miscz00
											(BGl_za2cczd2optionsza2zd2zzengine_paramz00,
											BCHAR(((unsigned char) ' ')));
										{	/* Cc/ld.scm 305 */
											obj_t BgL_list2461z00_826;

											BgL_list2461z00_826 =
												MAKE_PAIR(BGl_string2780z00zzcc_ldz00, BNIL);
											BgL_arg2331z00_795 = BgL_list2461z00_826;
										}
										{	/* Cc/ld.scm 307 */
											bool_t BgL_testz00_2282;

											if (CBOOL(BGl_za2czd2debugza2zd2zzengine_paramz00))
												{	/* Cc/ld.scm 307 */
													BgL_testz00_2282 = ((bool_t) 1);
												}
											else
												{	/* Cc/ld.scm 307 */
													BgL_testz00_2282 =
														(
														(long)
														CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >
														((long) 0));
												}
											if (BgL_testz00_2282)
												{	/* Cc/ld.scm 307 */
													BgL_arg2338z00_796 =
														BGl_stringzd2splitzd2charz00zztools_miscz00
														(BGl_za2ldzd2debugzd2optionza2z00zzengine_paramz00,
														BCHAR(((unsigned char) ' ')));
												}
											else
												{	/* Cc/ld.scm 307 */
													BgL_arg2338z00_796 = BNIL;
												}
										}
										if (CBOOL(BGl_za2czd2debugza2zd2zzengine_paramz00))
											{	/* Cc/ld.scm 311 */
												BgL_arg2344z00_797 = BNIL;
											}
										else
											{	/* Cc/ld.scm 311 */
												BgL_arg2344z00_797 =
													BGl_stringzd2splitzd2charz00zztools_miscz00
													(BGl_za2ldzd2optimzd2flagsza2z00zzengine_paramz00,
													BCHAR(((unsigned char) ' ')));
											}
										{	/* Cc/ld.scm 315 */
											bool_t BgL_testz00_2293;

											if (CBOOL(BGl_za2stripza2z00zzengine_paramz00))
												{	/* Cc/ld.scm 316 */
													bool_t BgL_testz00_2296;

													{	/* Cc/ld.scm 316 */
														obj_t BgL_arg2476z00_832;

														BgL_arg2476z00_832 =
															BGl_bigloozd2configzd2zz__configurez00
															(CNST_TABLE_REF(((long) 9)));
														BgL_testz00_2296 =
															bigloo_strcmp(BgL_arg2476z00_832,
															BGl_string2763z00zzcc_ldz00);
													}
													if (BgL_testz00_2296)
														{	/* Cc/ld.scm 316 */
															BgL_testz00_2293 = ((bool_t) 0);
														}
													else
														{	/* Cc/ld.scm 316 */
															BgL_testz00_2293 = ((bool_t) 1);
														}
												}
											else
												{	/* Cc/ld.scm 315 */
													BgL_testz00_2293 = ((bool_t) 0);
												}
											if (BgL_testz00_2293)
												{	/* Cc/ld.scm 317 */
													obj_t BgL_arg2470z00_829;

													BgL_arg2470z00_829 =
														BGl_bigloozd2configzd2zz__configurez00
														(CNST_TABLE_REF(((long) 9)));
													{	/* Cc/ld.scm 317 */
														obj_t BgL_list2471z00_830;

														BgL_list2471z00_830 =
															MAKE_PAIR(BgL_arg2470z00_829, BNIL);
														BgL_arg2351z00_798 = BgL_list2471z00_830;
												}}
											else
												{	/* Cc/ld.scm 315 */
													BgL_arg2351z00_798 = BNIL;
												}
										}
										BgL_arg2357z00_799 =
											BGl_stringzd2splitzd2charz00zztools_miscz00
											(BGl_za2ldzd2optionsza2zd2zzengine_paramz00,
											BCHAR(((unsigned char) ' ')));
										BgL_arg2364z00_800 =
											BGl_loopz00zzcc_ldz00
											(BGl_za2libzd2dirza2zd2zzengine_paramz00);
										{	/* Cc/ld.scm 330 */
											obj_t BgL_list2505z00_844;

											BgL_list2505z00_844 =
												MAKE_PAIR(BgL_bigloozd2libzd2_764, BNIL);
											BgL_arg2370z00_801 = BgL_list2505z00_844;
										}
										{	/* Cc/ld.scm 332 */
											bool_t BgL_testz00_2307;

											{	/* Cc/ld.scm 332 */
												obj_t BgL_arg2529z00_848;

												BgL_arg2529z00_848 =
													BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(
														((long) 11)));
												BgL_testz00_2307 =
													bigloo_strcmp(BgL_arg2529z00_848,
													BGl_string2763z00zzcc_ldz00);
											}
											if (BgL_testz00_2307)
												{	/* Cc/ld.scm 332 */
													BgL_arg2377z00_802 = BNIL;
												}
											else
												{	/* Cc/ld.scm 334 */
													obj_t BgL_arg2523z00_846;

													BgL_arg2523z00_846 =
														BGl_bigloozd2configzd2zz__configurez00
														(CNST_TABLE_REF(((long) 11)));
													{	/* Cc/ld.scm 334 */
														obj_t BgL_list2524z00_847;

														BgL_list2524z00_847 =
															MAKE_PAIR(BgL_arg2523z00_846, BNIL);
														BgL_arg2377z00_802 = BgL_list2524z00_847;
										}}}
										if (CBOOL
											(BGl_za2doublezd2ldzd2libszf3za2zf3zzengine_paramz00))
											{	/* Cc/ld.scm 338 */
												BgL_arg2383z00_803 = BgL_addzd2libszd2_765;
											}
										else
											{	/* Cc/ld.scm 338 */
												BgL_arg2383z00_803 = BNIL;
											}
										BgL_arg2390z00_804 =
											BGl_stringzd2splitzd2charz00zztools_miscz00
											(BGl_za2ldzd2postzd2optionsza2z00zzengine_paramz00,
											BCHAR(((unsigned char) ' ')));
										{	/* Cc/ld.scm 291 */
											obj_t BgL_list2391z00_805;

											{	/* Cc/ld.scm 291 */
												obj_t BgL_arg2396z00_806;

												{	/* Cc/ld.scm 291 */
													obj_t BgL_arg2403z00_807;

													{	/* Cc/ld.scm 291 */
														obj_t BgL_arg2409z00_808;

														{	/* Cc/ld.scm 291 */
															obj_t BgL_arg2416z00_809;

															{	/* Cc/ld.scm 291 */
																obj_t BgL_arg2422z00_810;

																{	/* Cc/ld.scm 291 */
																	obj_t BgL_arg2429z00_811;

																	{	/* Cc/ld.scm 291 */
																		obj_t BgL_arg2430z00_812;

																		{	/* Cc/ld.scm 291 */
																			obj_t BgL_arg2431z00_813;

																			{	/* Cc/ld.scm 291 */
																				obj_t BgL_arg2437z00_814;

																				{	/* Cc/ld.scm 291 */
																					obj_t BgL_arg2438z00_815;

																					{	/* Cc/ld.scm 291 */
																						obj_t BgL_arg2444z00_816;

																						{	/* Cc/ld.scm 291 */
																							obj_t BgL_arg2445z00_817;

																							{	/* Cc/ld.scm 291 */
																								obj_t BgL_arg2448z00_818;

																								{	/* Cc/ld.scm 291 */
																									obj_t BgL_arg2451z00_819;

																									{	/* Cc/ld.scm 291 */
																										obj_t BgL_arg2452z00_820;

																										{	/* Cc/ld.scm 291 */
																											obj_t BgL_arg2453z00_821;

																											BgL_arg2453z00_821 =
																												MAKE_PAIR
																												(BgL_arg2390z00_804,
																												BNIL);
																											BgL_arg2452z00_820 =
																												MAKE_PAIR
																												(BgL_arg2383z00_803,
																												BgL_arg2453z00_821);
																										}
																										BgL_arg2451z00_819 =
																											MAKE_PAIR
																											(BgL_otherzd2libszd2_766,
																											BgL_arg2452z00_820);
																									}
																									BgL_arg2448z00_818 =
																										MAKE_PAIR
																										(BgL_arg2377z00_802,
																										BgL_arg2451z00_819);
																								}
																								BgL_arg2445z00_817 =
																									MAKE_PAIR(BgL_arg2370z00_801,
																									BgL_arg2448z00_818);
																							}
																							BgL_arg2444z00_816 =
																								MAKE_PAIR(BgL_addzd2libszd2_765,
																								BgL_arg2445z00_817);
																						}
																						BgL_arg2438z00_815 =
																							MAKE_PAIR(BgL_arg2364z00_800,
																							BgL_arg2444z00_816);
																					}
																					BgL_arg2437z00_814 =
																						MAKE_PAIR(BgL_arg2357z00_799,
																						BgL_arg2438z00_815);
																				}
																				BgL_arg2431z00_813 =
																					MAKE_PAIR(BgL_arg2351z00_798,
																					BgL_arg2437z00_814);
																			}
																			BgL_arg2430z00_812 =
																				MAKE_PAIR(BgL_arg2344z00_797,
																				BgL_arg2431z00_813);
																		}
																		BgL_arg2429z00_811 =
																			MAKE_PAIR(BgL_arg2338z00_796,
																			BgL_arg2430z00_812);
																	}
																	BgL_arg2422z00_810 =
																		MAKE_PAIR(BgL_arg2331z00_795,
																		BgL_arg2429z00_811);
																}
																BgL_arg2416z00_809 =
																	MAKE_PAIR(BgL_arg2325z00_794,
																	BgL_arg2422z00_810);
															}
															BgL_arg2409z00_808 =
																MAKE_PAIR(BgL_arg2318z00_793,
																BgL_arg2416z00_809);
														}
														BgL_arg2403z00_807 =
															MAKE_PAIR(BGl_za2ozd2filesza2zd2zzengine_paramz00,
															BgL_arg2409z00_808);
													}
													BgL_arg2396z00_806 =
														MAKE_PAIR
														(BGl_za2withzd2filesza2zd2zzengine_paramz00,
														BgL_arg2403z00_807);
												}
												BgL_list2391z00_805 =
													MAKE_PAIR(BgL_arg2312z00_792, BgL_arg2396z00_806);
											}
											BgL_ldzd2argszd2_767 =
												BGl_appendz00zz__r4_pairs_and_lists_6_3z00
												(BgL_list2391z00_805);
									}}
									{	/* Cc/ld.scm 291 */

										{	/* Cc/ld.scm 341 */
											obj_t BgL_arg2275z00_770;

											{	/* Cc/ld.scm 341 */
												obj_t BgL_l1667z00_774;

												BgL_l1667z00_774 =
													MAKE_PAIR(BGl_za2ccza2z00zzengine_paramz00,
													BgL_ldzd2argszd2_767);
												{	/* Cc/ld.scm 341 */
													obj_t BgL_head1669z00_776;

													BgL_head1669z00_776 = MAKE_PAIR(BNIL, BNIL);
													{
														obj_t BgL_l1667z00_778;

														obj_t BgL_tail1670z00_779;

														BgL_l1667z00_778 = BgL_l1667z00_774;
														BgL_tail1670z00_779 = BgL_head1669z00_776;
													BgL_zc3anonymousza32287ze3z83_780:
														if (NULLP(BgL_l1667z00_778))
															{	/* Cc/ld.scm 341 */
																BgL_arg2275z00_770 = CDR(BgL_head1669z00_776);
															}
														else
															{	/* Cc/ld.scm 341 */
																obj_t BgL_newtail1671z00_782;

																BgL_newtail1671z00_782 =
																	MAKE_PAIR(string_append_3
																	(BGl_string2781z00zzcc_ldz00,
																		CAR(BgL_l1667z00_778),
																		BGl_string2782z00zzcc_ldz00), BNIL);
																SET_CDR(BgL_tail1670z00_779,
																	BgL_newtail1671z00_782);
																{
																	obj_t BgL_tail1670z00_2347;

																	obj_t BgL_l1667z00_2345;

																	BgL_l1667z00_2345 = CDR(BgL_l1667z00_778);
																	BgL_tail1670z00_2347 = BgL_newtail1671z00_782;
																	BgL_tail1670z00_779 = BgL_tail1670z00_2347;
																	BgL_l1667z00_778 = BgL_l1667z00_2345;
																	goto BgL_zc3anonymousza32287ze3z83_780;
																}
															}
													}
												}
											}
											{	/* Cc/ld.scm 341 */
												obj_t BgL_list2276z00_771;

												{	/* Cc/ld.scm 341 */
													obj_t BgL_arg2282z00_772;

													{	/* Cc/ld.scm 341 */
														obj_t BgL_arg2285z00_773;

														BgL_arg2285z00_773 =
															MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
														BgL_arg2282z00_772 =
															MAKE_PAIR(BgL_arg2275z00_770, BgL_arg2285z00_773);
													}
													BgL_list2276z00_771 =
														MAKE_PAIR(BGl_string2783z00zzcc_ldz00,
														BgL_arg2282z00_772);
												}
												BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
													BgL_list2276z00_771);
										}}
										{	/* Cc/ld.scm 345 */
											obj_t BgL_runner2308z00_791;

											{	/* Cc/ld.scm 345 */
												obj_t BgL_arg2305z00_788;

												BgL_arg2305z00_788 =
													bgl_append2(BgL_ldzd2argszd2_767,
													CNST_TABLE_REF(((long) 12)));
												{	/* Cc/ld.scm 345 */
													obj_t BgL_list2306z00_789;

													BgL_list2306z00_789 =
														MAKE_PAIR(BgL_arg2305z00_788, BNIL);
													BgL_runner2308z00_791 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BGl_za2ccza2z00zzengine_paramz00,
														BgL_list2306z00_789);
											}}
											{	/* Cc/ld.scm 345 */
												obj_t BgL_aux2307z00_790;

												BgL_aux2307z00_790 = CAR(BgL_runner2308z00_791);
												BgL_runner2308z00_791 = CDR(BgL_runner2308z00_791);
												return
													BGl_runzd2processzd2zz__processz00(BgL_aux2307z00_790,
													BgL_runner2308z00_791);
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



/* <exit:2563> */
	obj_t BGl_zc3exitza32563ze3z83zzcc_ldz00(obj_t BgL_port1626z00_1599)
	{
		AN_OBJECT;
		{	/* Cc/ld.scm 256 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1628z00_873;

			if (SET_EXIT(BgL_an_exit1628z00_873))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1628z00_873 = (void *) jmpbuf;
					{	/* Cc/ld.scm 256 */

						PUSH_EXIT(BgL_an_exit1628z00_873, ((long) 0));
						{	/* Cc/ld.scm 256 */
							obj_t BgL_val1629z00_874;

							{
								obj_t BgL_inputzd2portzd2_918;

								long BgL_lastzd2matchzd2_919;

								obj_t BgL_inputzd2portzd2_929;

								long BgL_lastzd2matchzd2_930;

								obj_t BgL_inputzd2portzd2_939;

								long BgL_lastzd2matchzd2_940;

								obj_t BgL_inputzd2portzd2_952;

								long BgL_lastzd2matchzd2_953;

								obj_t BgL_inputzd2portzd2_964;

								long BgL_lastzd2matchzd2_965;

								obj_t BgL_inputzd2portzd2_976;

								long BgL_lastzd2matchzd2_977;

								obj_t BgL_inputzd2portzd2_988;

								long BgL_lastzd2matchzd2_989;

								obj_t BgL_inputzd2portzd2_1000;

								long BgL_lastzd2matchzd2_1001;

								obj_t BgL_inputzd2portzd2_1009;

								long BgL_lastzd2matchzd2_1010;

								obj_t BgL_inputzd2portzd2_1021;

								long BgL_lastzd2matchzd2_1022;

								obj_t BgL_inputzd2portzd2_1033;

								long BgL_lastzd2matchzd2_1034;

								RGC_START_MATCH(BgL_port1626z00_1599);
								{	/* Cc/ld.scm 256 */
									long BgL_matchz00_1126;

									BgL_inputzd2portzd2_1000 = BgL_port1626z00_1599;
									BgL_lastzd2matchzd2_1001 = ((long) 1);
								BgL_zc3anonymousza32630ze3z83_1002:
									{	/* Cc/ld.scm 256 */
										int BgL_currentzd2charzd2_1003;

										BgL_currentzd2charzd2_1003 =
											RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1000);
										switch ((long) (BgL_currentzd2charzd2_1003))
											{
											case ((long) 0):

												if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1000))
													{	/* Cc/ld.scm 256 */
														if (rgc_fill_buffer(BgL_inputzd2portzd2_1000))
															{

																goto BgL_zc3anonymousza32630ze3z83_1002;
															}
														else
															{	/* Cc/ld.scm 256 */
																BgL_matchz00_1126 = BgL_lastzd2matchzd2_1001;
															}
													}
												else
													{	/* Cc/ld.scm 256 */
														BgL_inputzd2portzd2_918 = BgL_inputzd2portzd2_1000;
														BgL_lastzd2matchzd2_919 = BgL_lastzd2matchzd2_1001;
													BgL_zc3anonymousza32565ze3z83_920:
														{	/* Cc/ld.scm 256 */
															long BgL_newzd2matchzd2_921;

															RGC_STOP_MATCH(BgL_inputzd2portzd2_918);
															BgL_newzd2matchzd2_921 = ((long) 1);
															{	/* Cc/ld.scm 256 */
																int BgL_currentzd2charzd2_922;

																BgL_currentzd2charzd2_922 =
																	RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_918);
																if (
																	((long) (BgL_currentzd2charzd2_922) ==
																		((long) 0)))
																	{	/* Cc/ld.scm 256 */
																		if (RGC_BUFFER_EMPTY
																			(BgL_inputzd2portzd2_918))
																			{	/* Cc/ld.scm 256 */
																				if (rgc_fill_buffer
																					(BgL_inputzd2portzd2_918))
																					{

																						goto
																							BgL_zc3anonymousza32565ze3z83_920;
																					}
																				else
																					{	/* Cc/ld.scm 256 */
																						BgL_matchz00_1126 =
																							BgL_newzd2matchzd2_921;
																					}
																			}
																		else
																			{	/* Cc/ld.scm 256 */
																				BgL_inputzd2portzd2_929 =
																					BgL_inputzd2portzd2_918;
																				BgL_lastzd2matchzd2_930 =
																					BgL_newzd2matchzd2_921;
																			BgL_zc3anonymousza32572ze3z83_931:
																				{	/* Cc/ld.scm 256 */
																					int BgL_currentzd2charzd2_932;

																					BgL_currentzd2charzd2_932 =
																						RGC_BUFFER_GET_CHAR
																						(BgL_inputzd2portzd2_929);
																					if (((long)
																							(BgL_currentzd2charzd2_932) ==
																							((long) 0)))
																						{	/* Cc/ld.scm 256 */
																							if (RGC_BUFFER_EMPTY
																								(BgL_inputzd2portzd2_929))
																								{	/* Cc/ld.scm 256 */
																									if (rgc_fill_buffer
																										(BgL_inputzd2portzd2_929))
																										{

																											goto
																												BgL_zc3anonymousza32572ze3z83_931;
																										}
																									else
																										{	/* Cc/ld.scm 256 */
																											BgL_matchz00_1126 =
																												BgL_lastzd2matchzd2_930;
																										}
																								}
																							else
																								{

																									goto
																										BgL_zc3anonymousza32572ze3z83_931;
																								}
																						}
																					else
																						{	/* Cc/ld.scm 256 */
																							if (
																								((long)
																									(BgL_currentzd2charzd2_932) ==
																									((long) 45)))
																								{	/* Cc/ld.scm 256 */
																									BgL_inputzd2portzd2_952 =
																										BgL_inputzd2portzd2_929;
																									BgL_lastzd2matchzd2_953 =
																										BgL_lastzd2matchzd2_930;
																								BgL_zc3anonymousza32589ze3z83_954:
																									{	/* Cc/ld.scm 256 */
																										int
																											BgL_currentzd2charzd2_955;
																										BgL_currentzd2charzd2_955 =
																											RGC_BUFFER_GET_CHAR
																											(BgL_inputzd2portzd2_952);
																										if (((long)
																												(BgL_currentzd2charzd2_955)
																												== ((long) 0)))
																											{	/* Cc/ld.scm 256 */
																												if (RGC_BUFFER_EMPTY
																													(BgL_inputzd2portzd2_952))
																													{	/* Cc/ld.scm 256 */
																														if (rgc_fill_buffer
																															(BgL_inputzd2portzd2_952))
																															{

																																goto
																																	BgL_zc3anonymousza32589ze3z83_954;
																															}
																														else
																															{	/* Cc/ld.scm 256 */
																																BgL_matchz00_1126
																																	=
																																	BgL_lastzd2matchzd2_953;
																															}
																													}
																												else
																													{
																														long
																															BgL_lastzd2matchzd2_2399;
																														obj_t
																															BgL_inputzd2portzd2_2398;
																														BgL_inputzd2portzd2_2398
																															=
																															BgL_inputzd2portzd2_952;
																														BgL_lastzd2matchzd2_2399
																															=
																															BgL_lastzd2matchzd2_953;
																														BgL_lastzd2matchzd2_930
																															=
																															BgL_lastzd2matchzd2_2399;
																														BgL_inputzd2portzd2_929
																															=
																															BgL_inputzd2portzd2_2398;
																														goto
																															BgL_zc3anonymousza32572ze3z83_931;
																													}
																											}
																										else
																											{	/* Cc/ld.scm 256 */
																												if (
																													((long)
																														(BgL_currentzd2charzd2_955)
																														== ((long) 115)))
																													{	/* Cc/ld.scm 256 */
																														BgL_inputzd2portzd2_964
																															=
																															BgL_inputzd2portzd2_952;
																														BgL_lastzd2matchzd2_965
																															=
																															BgL_lastzd2matchzd2_953;
																													BgL_zc3anonymousza32601ze3z83_966:
																														{	/* Cc/ld.scm 256 */
																															int
																																BgL_currentzd2charzd2_967;
																															BgL_currentzd2charzd2_967
																																=
																																RGC_BUFFER_GET_CHAR
																																(BgL_inputzd2portzd2_964);
																															if (((long)
																																	(BgL_currentzd2charzd2_967)
																																	==
																																	((long) 0)))
																																{	/* Cc/ld.scm 256 */
																																	if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_964))
																																		{	/* Cc/ld.scm 256 */
																																			if (rgc_fill_buffer(BgL_inputzd2portzd2_964))
																																				{

																																					goto
																																						BgL_zc3anonymousza32601ze3z83_966;
																																				}
																																			else
																																				{	/* Cc/ld.scm 256 */
																																					BgL_matchz00_1126
																																						=
																																						BgL_lastzd2matchzd2_965;
																																				}
																																		}
																																	else
																																		{
																																			long
																																				BgL_lastzd2matchzd2_2412;
																																			obj_t
																																				BgL_inputzd2portzd2_2411;
																																			BgL_inputzd2portzd2_2411
																																				=
																																				BgL_inputzd2portzd2_964;
																																			BgL_lastzd2matchzd2_2412
																																				=
																																				BgL_lastzd2matchzd2_965;
																																			BgL_lastzd2matchzd2_930
																																				=
																																				BgL_lastzd2matchzd2_2412;
																																			BgL_inputzd2portzd2_929
																																				=
																																				BgL_inputzd2portzd2_2411;
																																			goto
																																				BgL_zc3anonymousza32572ze3z83_931;
																																		}
																																}
																															else
																																{	/* Cc/ld.scm 256 */
																																	if (
																																		((long)
																																			(BgL_currentzd2charzd2_967)
																																			==
																																			((long)
																																				116)))
																																		{	/* Cc/ld.scm 256 */
																																			BgL_inputzd2portzd2_976
																																				=
																																				BgL_inputzd2portzd2_964;
																																			BgL_lastzd2matchzd2_977
																																				=
																																				BgL_lastzd2matchzd2_965;
																																		BgL_zc3anonymousza32611ze3z83_978:
																																			{	/* Cc/ld.scm 256 */
																																				int
																																					BgL_currentzd2charzd2_979;
																																				BgL_currentzd2charzd2_979
																																					=
																																					RGC_BUFFER_GET_CHAR
																																					(BgL_inputzd2portzd2_976);
																																				if ((
																																						(long)
																																						(BgL_currentzd2charzd2_979)
																																						==
																																						((long) 0)))
																																					{	/* Cc/ld.scm 256 */
																																						if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_976))
																																							{	/* Cc/ld.scm 256 */
																																								if (rgc_fill_buffer(BgL_inputzd2portzd2_976))
																																									{

																																										goto
																																											BgL_zc3anonymousza32611ze3z83_978;
																																									}
																																								else
																																									{	/* Cc/ld.scm 256 */
																																										BgL_matchz00_1126
																																											=
																																											BgL_lastzd2matchzd2_977;
																																									}
																																							}
																																						else
																																							{
																																								long
																																									BgL_lastzd2matchzd2_2425;
																																								obj_t
																																									BgL_inputzd2portzd2_2424;
																																								BgL_inputzd2portzd2_2424
																																									=
																																									BgL_inputzd2portzd2_976;
																																								BgL_lastzd2matchzd2_2425
																																									=
																																									BgL_lastzd2matchzd2_977;
																																								BgL_lastzd2matchzd2_930
																																									=
																																									BgL_lastzd2matchzd2_2425;
																																								BgL_inputzd2portzd2_929
																																									=
																																									BgL_inputzd2portzd2_2424;
																																								goto
																																									BgL_zc3anonymousza32572ze3z83_931;
																																							}
																																					}
																																				else
																																					{	/* Cc/ld.scm 256 */
																																						if (
																																							((long) (BgL_currentzd2charzd2_979) == ((long) 97)))
																																							{	/* Cc/ld.scm 256 */
																																								BgL_inputzd2portzd2_988
																																									=
																																									BgL_inputzd2portzd2_976;
																																								BgL_lastzd2matchzd2_989
																																									=
																																									BgL_lastzd2matchzd2_977;
																																							BgL_zc3anonymousza32621ze3z83_990:
																																								{	/* Cc/ld.scm 256 */
																																									int
																																										BgL_currentzd2charzd2_991;
																																									BgL_currentzd2charzd2_991
																																										=
																																										RGC_BUFFER_GET_CHAR
																																										(BgL_inputzd2portzd2_988);
																																									if (((long) (BgL_currentzd2charzd2_991) == ((long) 0)))
																																										{	/* Cc/ld.scm 256 */
																																											if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_988))
																																												{	/* Cc/ld.scm 256 */
																																													if (rgc_fill_buffer(BgL_inputzd2portzd2_988))
																																														{

																																															goto
																																																BgL_zc3anonymousza32621ze3z83_990;
																																														}
																																													else
																																														{	/* Cc/ld.scm 256 */
																																															BgL_matchz00_1126
																																																=
																																																BgL_lastzd2matchzd2_989;
																																														}
																																												}
																																											else
																																												{
																																													long
																																														BgL_lastzd2matchzd2_2438;
																																													obj_t
																																														BgL_inputzd2portzd2_2437;
																																													BgL_inputzd2portzd2_2437
																																														=
																																														BgL_inputzd2portzd2_988;
																																													BgL_lastzd2matchzd2_2438
																																														=
																																														BgL_lastzd2matchzd2_989;
																																													BgL_lastzd2matchzd2_930
																																														=
																																														BgL_lastzd2matchzd2_2438;
																																													BgL_inputzd2portzd2_929
																																														=
																																														BgL_inputzd2portzd2_2437;
																																													goto
																																														BgL_zc3anonymousza32572ze3z83_931;
																																												}
																																										}
																																									else
																																										{	/* Cc/ld.scm 256 */
																																											if (((long) (BgL_currentzd2charzd2_991) == ((long) 116)))
																																												{	/* Cc/ld.scm 256 */
																																													BgL_inputzd2portzd2_1009
																																														=
																																														BgL_inputzd2portzd2_988;
																																													BgL_lastzd2matchzd2_1010
																																														=
																																														BgL_lastzd2matchzd2_989;
																																												BgL_zc3anonymousza32634ze3z83_1011:
																																													{	/* Cc/ld.scm 256 */
																																														int
																																															BgL_currentzd2charzd2_1012;
																																														BgL_currentzd2charzd2_1012
																																															=
																																															RGC_BUFFER_GET_CHAR
																																															(BgL_inputzd2portzd2_1009);
																																														if (((long) (BgL_currentzd2charzd2_1012) == ((long) 0)))
																																															{	/* Cc/ld.scm 256 */
																																																if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1009))
																																																	{	/* Cc/ld.scm 256 */
																																																		if (rgc_fill_buffer(BgL_inputzd2portzd2_1009))
																																																			{

																																																				goto
																																																					BgL_zc3anonymousza32634ze3z83_1011;
																																																			}
																																																		else
																																																			{	/* Cc/ld.scm 256 */
																																																				BgL_matchz00_1126
																																																					=
																																																					BgL_lastzd2matchzd2_1010;
																																																			}
																																																	}
																																																else
																																																	{
																																																		long
																																																			BgL_lastzd2matchzd2_2451;
																																																		obj_t
																																																			BgL_inputzd2portzd2_2450;
																																																		BgL_inputzd2portzd2_2450
																																																			=
																																																			BgL_inputzd2portzd2_1009;
																																																		BgL_lastzd2matchzd2_2451
																																																			=
																																																			BgL_lastzd2matchzd2_1010;
																																																		BgL_lastzd2matchzd2_930
																																																			=
																																																			BgL_lastzd2matchzd2_2451;
																																																		BgL_inputzd2portzd2_929
																																																			=
																																																			BgL_inputzd2portzd2_2450;
																																																		goto
																																																			BgL_zc3anonymousza32572ze3z83_931;
																																																	}
																																															}
																																														else
																																															{	/* Cc/ld.scm 256 */
																																																if (((long) (BgL_currentzd2charzd2_1012) == ((long) 105)))
																																																	{	/* Cc/ld.scm 256 */
																																																		BgL_inputzd2portzd2_1021
																																																			=
																																																			BgL_inputzd2portzd2_1009;
																																																		BgL_lastzd2matchzd2_1022
																																																			=
																																																			BgL_lastzd2matchzd2_1010;
																																																	BgL_zc3anonymousza32644ze3z83_1023:
																																																		{	/* Cc/ld.scm 256 */
																																																			int
																																																				BgL_currentzd2charzd2_1024;
																																																			BgL_currentzd2charzd2_1024
																																																				=
																																																				RGC_BUFFER_GET_CHAR
																																																				(BgL_inputzd2portzd2_1021);
																																																			if (((long) (BgL_currentzd2charzd2_1024) == ((long) 0)))
																																																				{	/* Cc/ld.scm 256 */
																																																					if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1021))
																																																						{	/* Cc/ld.scm 256 */
																																																							if (rgc_fill_buffer(BgL_inputzd2portzd2_1021))
																																																								{

																																																									goto
																																																										BgL_zc3anonymousza32644ze3z83_1023;
																																																								}
																																																							else
																																																								{	/* Cc/ld.scm 256 */
																																																									BgL_matchz00_1126
																																																										=
																																																										BgL_lastzd2matchzd2_1022;
																																																								}
																																																						}
																																																					else
																																																						{
																																																							long
																																																								BgL_lastzd2matchzd2_2464;
																																																							obj_t
																																																								BgL_inputzd2portzd2_2463;
																																																							BgL_inputzd2portzd2_2463
																																																								=
																																																								BgL_inputzd2portzd2_1021;
																																																							BgL_lastzd2matchzd2_2464
																																																								=
																																																								BgL_lastzd2matchzd2_1022;
																																																							BgL_lastzd2matchzd2_930
																																																								=
																																																								BgL_lastzd2matchzd2_2464;
																																																							BgL_inputzd2portzd2_929
																																																								=
																																																								BgL_inputzd2portzd2_2463;
																																																							goto
																																																								BgL_zc3anonymousza32572ze3z83_931;
																																																						}
																																																				}
																																																			else
																																																				{	/* Cc/ld.scm 256 */
																																																					if (((long) (BgL_currentzd2charzd2_1024) == ((long) 99)))
																																																						{	/* Cc/ld.scm 256 */
																																																							BgL_inputzd2portzd2_1033
																																																								=
																																																								BgL_inputzd2portzd2_1021;
																																																							BgL_lastzd2matchzd2_1034
																																																								=
																																																								BgL_lastzd2matchzd2_1022;
																																																						BgL_zc3anonymousza32656ze3z83_1035:
																																																							{	/* Cc/ld.scm 256 */
																																																								long
																																																									BgL_newzd2matchzd2_1036;
																																																								RGC_STOP_MATCH
																																																									(BgL_inputzd2portzd2_1033);
																																																								BgL_newzd2matchzd2_1036
																																																									=
																																																									(
																																																									(long)
																																																									0);
																																																								{	/* Cc/ld.scm 256 */
																																																									int
																																																										BgL_currentzd2charzd2_1037;
																																																									BgL_currentzd2charzd2_1037
																																																										=
																																																										RGC_BUFFER_GET_CHAR
																																																										(BgL_inputzd2portzd2_1033);
																																																									if (((long) (BgL_currentzd2charzd2_1037) == ((long) 0)))
																																																										{	/* Cc/ld.scm 256 */
																																																											if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1033))
																																																												{	/* Cc/ld.scm 256 */
																																																													if (rgc_fill_buffer(BgL_inputzd2portzd2_1033))
																																																														{

																																																															goto
																																																																BgL_zc3anonymousza32656ze3z83_1035;
																																																														}
																																																													else
																																																														{	/* Cc/ld.scm 256 */
																																																															BgL_matchz00_1126
																																																																=
																																																																BgL_newzd2matchzd2_1036;
																																																														}
																																																												}
																																																											else
																																																												{
																																																													long
																																																														BgL_lastzd2matchzd2_2478;
																																																													obj_t
																																																														BgL_inputzd2portzd2_2477;
																																																													BgL_inputzd2portzd2_2477
																																																														=
																																																														BgL_inputzd2portzd2_1033;
																																																													BgL_lastzd2matchzd2_2478
																																																														=
																																																														BgL_newzd2matchzd2_1036;
																																																													BgL_lastzd2matchzd2_930
																																																														=
																																																														BgL_lastzd2matchzd2_2478;
																																																													BgL_inputzd2portzd2_929
																																																														=
																																																														BgL_inputzd2portzd2_2477;
																																																													goto
																																																														BgL_zc3anonymousza32572ze3z83_931;
																																																												}
																																																										}
																																																									else
																																																										{	/* Cc/ld.scm 256 */
																																																											if (((long) (BgL_currentzd2charzd2_1037) == ((long) 45)))
																																																												{
																																																													long
																																																														BgL_lastzd2matchzd2_2483;
																																																													obj_t
																																																														BgL_inputzd2portzd2_2482;
																																																													BgL_inputzd2portzd2_2482
																																																														=
																																																														BgL_inputzd2portzd2_1033;
																																																													BgL_lastzd2matchzd2_2483
																																																														=
																																																														BgL_newzd2matchzd2_1036;
																																																													BgL_lastzd2matchzd2_953
																																																														=
																																																														BgL_lastzd2matchzd2_2483;
																																																													BgL_inputzd2portzd2_952
																																																														=
																																																														BgL_inputzd2portzd2_2482;
																																																													goto
																																																														BgL_zc3anonymousza32589ze3z83_954;
																																																												}
																																																											else
																																																												{	/* Cc/ld.scm 256 */
																																																													bool_t
																																																														BgL_testz00_2484;
																																																													if (((long) (BgL_currentzd2charzd2_1037) == ((long) 10)))
																																																														{	/* Cc/ld.scm 256 */
																																																															BgL_testz00_2484
																																																																=
																																																																(
																																																																(bool_t)
																																																																1);
																																																														}
																																																													else
																																																														{	/* Cc/ld.scm 256 */
																																																															BgL_testz00_2484
																																																																=
																																																																(
																																																																(long)
																																																																(BgL_currentzd2charzd2_1037)
																																																																==
																																																																((long) 45));
																																																														}
																																																													if (BgL_testz00_2484)
																																																														{	/* Cc/ld.scm 256 */
																																																															BgL_matchz00_1126
																																																																=
																																																																BgL_newzd2matchzd2_1036;
																																																														}
																																																													else
																																																														{
																																																															long
																																																																BgL_lastzd2matchzd2_2491;
																																																															obj_t
																																																																BgL_inputzd2portzd2_2490;
																																																															BgL_inputzd2portzd2_2490
																																																																=
																																																																BgL_inputzd2portzd2_1033;
																																																															BgL_lastzd2matchzd2_2491
																																																																=
																																																																BgL_newzd2matchzd2_1036;
																																																															BgL_lastzd2matchzd2_930
																																																																=
																																																																BgL_lastzd2matchzd2_2491;
																																																															BgL_inputzd2portzd2_929
																																																																=
																																																																BgL_inputzd2portzd2_2490;
																																																															goto
																																																																BgL_zc3anonymousza32572ze3z83_931;
																																																														}
																																																												}
																																																										}
																																																								}
																																																							}
																																																						}
																																																					else
																																																						{	/* Cc/ld.scm 256 */
																																																							if (((long) (BgL_currentzd2charzd2_1024) == ((long) 45)))
																																																								{
																																																									long
																																																										BgL_lastzd2matchzd2_2496;
																																																									obj_t
																																																										BgL_inputzd2portzd2_2495;
																																																									BgL_inputzd2portzd2_2495
																																																										=
																																																										BgL_inputzd2portzd2_1021;
																																																									BgL_lastzd2matchzd2_2496
																																																										=
																																																										BgL_lastzd2matchzd2_1022;
																																																									BgL_lastzd2matchzd2_953
																																																										=
																																																										BgL_lastzd2matchzd2_2496;
																																																									BgL_inputzd2portzd2_952
																																																										=
																																																										BgL_inputzd2portzd2_2495;
																																																									goto
																																																										BgL_zc3anonymousza32589ze3z83_954;
																																																								}
																																																							else
																																																								{	/* Cc/ld.scm 256 */
																																																									bool_t
																																																										BgL_testz00_2497;
																																																									if (((long) (BgL_currentzd2charzd2_1024) == ((long) 10)))
																																																										{	/* Cc/ld.scm 256 */
																																																											BgL_testz00_2497
																																																												=
																																																												(
																																																												(bool_t)
																																																												1);
																																																										}
																																																									else
																																																										{	/* Cc/ld.scm 256 */
																																																											if (((long) (BgL_currentzd2charzd2_1024) == ((long) 45)))
																																																												{	/* Cc/ld.scm 256 */
																																																													BgL_testz00_2497
																																																														=
																																																														(
																																																														(bool_t)
																																																														1);
																																																												}
																																																											else
																																																												{	/* Cc/ld.scm 256 */
																																																													BgL_testz00_2497
																																																														=
																																																														(
																																																														(long)
																																																														(BgL_currentzd2charzd2_1024)
																																																														==
																																																														((long) 99));
																																																										}}
																																																									if (BgL_testz00_2497)
																																																										{	/* Cc/ld.scm 256 */
																																																											BgL_matchz00_1126
																																																												=
																																																												BgL_lastzd2matchzd2_1022;
																																																										}
																																																									else
																																																										{
																																																											long
																																																												BgL_lastzd2matchzd2_2507;
																																																											obj_t
																																																												BgL_inputzd2portzd2_2506;
																																																											BgL_inputzd2portzd2_2506
																																																												=
																																																												BgL_inputzd2portzd2_1021;
																																																											BgL_lastzd2matchzd2_2507
																																																												=
																																																												BgL_lastzd2matchzd2_1022;
																																																											BgL_lastzd2matchzd2_930
																																																												=
																																																												BgL_lastzd2matchzd2_2507;
																																																											BgL_inputzd2portzd2_929
																																																												=
																																																												BgL_inputzd2portzd2_2506;
																																																											goto
																																																												BgL_zc3anonymousza32572ze3z83_931;
																																																										}
																																																								}
																																																						}
																																																				}
																																																		}
																																																	}
																																																else
																																																	{	/* Cc/ld.scm 256 */
																																																		if (((long) (BgL_currentzd2charzd2_1012) == ((long) 45)))
																																																			{
																																																				long
																																																					BgL_lastzd2matchzd2_2512;
																																																				obj_t
																																																					BgL_inputzd2portzd2_2511;
																																																				BgL_inputzd2portzd2_2511
																																																					=
																																																					BgL_inputzd2portzd2_1009;
																																																				BgL_lastzd2matchzd2_2512
																																																					=
																																																					BgL_lastzd2matchzd2_1010;
																																																				BgL_lastzd2matchzd2_953
																																																					=
																																																					BgL_lastzd2matchzd2_2512;
																																																				BgL_inputzd2portzd2_952
																																																					=
																																																					BgL_inputzd2portzd2_2511;
																																																				goto
																																																					BgL_zc3anonymousza32589ze3z83_954;
																																																			}
																																																		else
																																																			{	/* Cc/ld.scm 256 */
																																																				bool_t
																																																					BgL_testz00_2513;
																																																				if (((long) (BgL_currentzd2charzd2_1012) == ((long) 10)))
																																																					{	/* Cc/ld.scm 256 */
																																																						BgL_testz00_2513
																																																							=
																																																							(
																																																							(bool_t)
																																																							1);
																																																					}
																																																				else
																																																					{	/* Cc/ld.scm 256 */
																																																						if (((long) (BgL_currentzd2charzd2_1012) == ((long) 45)))
																																																							{	/* Cc/ld.scm 256 */
																																																								BgL_testz00_2513
																																																									=
																																																									(
																																																									(bool_t)
																																																									1);
																																																							}
																																																						else
																																																							{	/* Cc/ld.scm 256 */
																																																								BgL_testz00_2513
																																																									=
																																																									(
																																																									(long)
																																																									(BgL_currentzd2charzd2_1012)
																																																									==
																																																									((long) 105));
																																																					}}
																																																				if (BgL_testz00_2513)
																																																					{	/* Cc/ld.scm 256 */
																																																						BgL_matchz00_1126
																																																							=
																																																							BgL_lastzd2matchzd2_1010;
																																																					}
																																																				else
																																																					{
																																																						long
																																																							BgL_lastzd2matchzd2_2523;
																																																						obj_t
																																																							BgL_inputzd2portzd2_2522;
																																																						BgL_inputzd2portzd2_2522
																																																							=
																																																							BgL_inputzd2portzd2_1009;
																																																						BgL_lastzd2matchzd2_2523
																																																							=
																																																							BgL_lastzd2matchzd2_1010;
																																																						BgL_lastzd2matchzd2_930
																																																							=
																																																							BgL_lastzd2matchzd2_2523;
																																																						BgL_inputzd2portzd2_929
																																																							=
																																																							BgL_inputzd2portzd2_2522;
																																																						goto
																																																							BgL_zc3anonymousza32572ze3z83_931;
																																																					}
																																																			}
																																																	}
																																															}
																																													}
																																												}
																																											else
																																												{	/* Cc/ld.scm 256 */
																																													if (((long) (BgL_currentzd2charzd2_991) == ((long) 45)))
																																														{
																																															long
																																																BgL_lastzd2matchzd2_2528;
																																															obj_t
																																																BgL_inputzd2portzd2_2527;
																																															BgL_inputzd2portzd2_2527
																																																=
																																																BgL_inputzd2portzd2_988;
																																															BgL_lastzd2matchzd2_2528
																																																=
																																																BgL_lastzd2matchzd2_989;
																																															BgL_lastzd2matchzd2_953
																																																=
																																																BgL_lastzd2matchzd2_2528;
																																															BgL_inputzd2portzd2_952
																																																=
																																																BgL_inputzd2portzd2_2527;
																																															goto
																																																BgL_zc3anonymousza32589ze3z83_954;
																																														}
																																													else
																																														{	/* Cc/ld.scm 256 */
																																															bool_t
																																																BgL_testz00_2529;
																																															if (((long) (BgL_currentzd2charzd2_991) == ((long) 10)))
																																																{	/* Cc/ld.scm 256 */
																																																	BgL_testz00_2529
																																																		=
																																																		(
																																																		(bool_t)
																																																		1);
																																																}
																																															else
																																																{	/* Cc/ld.scm 256 */
																																																	if (((long) (BgL_currentzd2charzd2_991) == ((long) 45)))
																																																		{	/* Cc/ld.scm 256 */
																																																			BgL_testz00_2529
																																																				=
																																																				(
																																																				(bool_t)
																																																				1);
																																																		}
																																																	else
																																																		{	/* Cc/ld.scm 256 */
																																																			BgL_testz00_2529
																																																				=
																																																				(
																																																				(long)
																																																				(BgL_currentzd2charzd2_991)
																																																				==
																																																				((long) 116));
																																																}}
																																															if (BgL_testz00_2529)
																																																{	/* Cc/ld.scm 256 */
																																																	BgL_matchz00_1126
																																																		=
																																																		BgL_lastzd2matchzd2_989;
																																																}
																																															else
																																																{
																																																	long
																																																		BgL_lastzd2matchzd2_2539;
																																																	obj_t
																																																		BgL_inputzd2portzd2_2538;
																																																	BgL_inputzd2portzd2_2538
																																																		=
																																																		BgL_inputzd2portzd2_988;
																																																	BgL_lastzd2matchzd2_2539
																																																		=
																																																		BgL_lastzd2matchzd2_989;
																																																	BgL_lastzd2matchzd2_930
																																																		=
																																																		BgL_lastzd2matchzd2_2539;
																																																	BgL_inputzd2portzd2_929
																																																		=
																																																		BgL_inputzd2portzd2_2538;
																																																	goto
																																																		BgL_zc3anonymousza32572ze3z83_931;
																																																}
																																														}
																																												}
																																										}
																																								}
																																							}
																																						else
																																							{	/* Cc/ld.scm 256 */
																																								if (((long) (BgL_currentzd2charzd2_979) == ((long) 45)))
																																									{
																																										long
																																											BgL_lastzd2matchzd2_2544;
																																										obj_t
																																											BgL_inputzd2portzd2_2543;
																																										BgL_inputzd2portzd2_2543
																																											=
																																											BgL_inputzd2portzd2_976;
																																										BgL_lastzd2matchzd2_2544
																																											=
																																											BgL_lastzd2matchzd2_977;
																																										BgL_lastzd2matchzd2_953
																																											=
																																											BgL_lastzd2matchzd2_2544;
																																										BgL_inputzd2portzd2_952
																																											=
																																											BgL_inputzd2portzd2_2543;
																																										goto
																																											BgL_zc3anonymousza32589ze3z83_954;
																																									}
																																								else
																																									{	/* Cc/ld.scm 256 */
																																										bool_t
																																											BgL_testz00_2545;
																																										if (((long) (BgL_currentzd2charzd2_979) == ((long) 10)))
																																											{	/* Cc/ld.scm 256 */
																																												BgL_testz00_2545
																																													=
																																													(
																																													(bool_t)
																																													1);
																																											}
																																										else
																																											{	/* Cc/ld.scm 256 */
																																												if (((long) (BgL_currentzd2charzd2_979) == ((long) 45)))
																																													{	/* Cc/ld.scm 256 */
																																														BgL_testz00_2545
																																															=
																																															(
																																															(bool_t)
																																															1);
																																													}
																																												else
																																													{	/* Cc/ld.scm 256 */
																																														BgL_testz00_2545
																																															=
																																															(
																																															(long)
																																															(BgL_currentzd2charzd2_979)
																																															==
																																															((long) 97));
																																											}}
																																										if (BgL_testz00_2545)
																																											{	/* Cc/ld.scm 256 */
																																												BgL_matchz00_1126
																																													=
																																													BgL_lastzd2matchzd2_977;
																																											}
																																										else
																																											{
																																												long
																																													BgL_lastzd2matchzd2_2555;
																																												obj_t
																																													BgL_inputzd2portzd2_2554;
																																												BgL_inputzd2portzd2_2554
																																													=
																																													BgL_inputzd2portzd2_976;
																																												BgL_lastzd2matchzd2_2555
																																													=
																																													BgL_lastzd2matchzd2_977;
																																												BgL_lastzd2matchzd2_930
																																													=
																																													BgL_lastzd2matchzd2_2555;
																																												BgL_inputzd2portzd2_929
																																													=
																																													BgL_inputzd2portzd2_2554;
																																												goto
																																													BgL_zc3anonymousza32572ze3z83_931;
																																											}
																																									}
																																							}
																																					}
																																			}
																																		}
																																	else
																																		{	/* Cc/ld.scm 256 */
																																			if (
																																				((long)
																																					(BgL_currentzd2charzd2_967)
																																					==
																																					((long) 45)))
																																				{
																																					long
																																						BgL_lastzd2matchzd2_2560;
																																					obj_t
																																						BgL_inputzd2portzd2_2559;
																																					BgL_inputzd2portzd2_2559
																																						=
																																						BgL_inputzd2portzd2_964;
																																					BgL_lastzd2matchzd2_2560
																																						=
																																						BgL_lastzd2matchzd2_965;
																																					BgL_lastzd2matchzd2_953
																																						=
																																						BgL_lastzd2matchzd2_2560;
																																					BgL_inputzd2portzd2_952
																																						=
																																						BgL_inputzd2portzd2_2559;
																																					goto
																																						BgL_zc3anonymousza32589ze3z83_954;
																																				}
																																			else
																																				{	/* Cc/ld.scm 256 */
																																					bool_t
																																						BgL_testz00_2561;
																																					if ((
																																							(long)
																																							(BgL_currentzd2charzd2_967)
																																							==
																																							((long) 10)))
																																						{	/* Cc/ld.scm 256 */
																																							BgL_testz00_2561
																																								=
																																								(
																																								(bool_t)
																																								1);
																																						}
																																					else
																																						{	/* Cc/ld.scm 256 */
																																							if (((long) (BgL_currentzd2charzd2_967) == ((long) 45)))
																																								{	/* Cc/ld.scm 256 */
																																									BgL_testz00_2561
																																										=
																																										(
																																										(bool_t)
																																										1);
																																								}
																																							else
																																								{	/* Cc/ld.scm 256 */
																																									BgL_testz00_2561
																																										=
																																										(
																																										(long)
																																										(BgL_currentzd2charzd2_967)
																																										==
																																										((long) 116));
																																						}}
																																					if (BgL_testz00_2561)
																																						{	/* Cc/ld.scm 256 */
																																							BgL_matchz00_1126
																																								=
																																								BgL_lastzd2matchzd2_965;
																																						}
																																					else
																																						{
																																							long
																																								BgL_lastzd2matchzd2_2571;
																																							obj_t
																																								BgL_inputzd2portzd2_2570;
																																							BgL_inputzd2portzd2_2570
																																								=
																																								BgL_inputzd2portzd2_964;
																																							BgL_lastzd2matchzd2_2571
																																								=
																																								BgL_lastzd2matchzd2_965;
																																							BgL_lastzd2matchzd2_930
																																								=
																																								BgL_lastzd2matchzd2_2571;
																																							BgL_inputzd2portzd2_929
																																								=
																																								BgL_inputzd2portzd2_2570;
																																							goto
																																								BgL_zc3anonymousza32572ze3z83_931;
																																						}
																																				}
																																		}
																																}
																														}
																													}
																												else
																													{	/* Cc/ld.scm 256 */
																														if (
																															((long)
																																(BgL_currentzd2charzd2_955)
																																== ((long) 45)))
																															{

																																goto
																																	BgL_zc3anonymousza32589ze3z83_954;
																															}
																														else
																															{	/* Cc/ld.scm 256 */
																																bool_t
																																	BgL_testz00_2575;
																																if (((long)
																																		(BgL_currentzd2charzd2_955)
																																		==
																																		((long)
																																			10)))
																																	{	/* Cc/ld.scm 256 */
																																		BgL_testz00_2575
																																			=
																																			((bool_t)
																																			1);
																																	}
																																else
																																	{	/* Cc/ld.scm 256 */
																																		if (
																																			((long)
																																				(BgL_currentzd2charzd2_955)
																																				==
																																				((long)
																																					45)))
																																			{	/* Cc/ld.scm 256 */
																																				BgL_testz00_2575
																																					=
																																					(
																																					(bool_t)
																																					1);
																																			}
																																		else
																																			{	/* Cc/ld.scm 256 */
																																				BgL_testz00_2575
																																					=
																																					(
																																					(long)
																																					(BgL_currentzd2charzd2_955)
																																					==
																																					((long) 115));
																																	}}
																																if (BgL_testz00_2575)
																																	{	/* Cc/ld.scm 256 */
																																		BgL_matchz00_1126
																																			=
																																			BgL_lastzd2matchzd2_953;
																																	}
																																else
																																	{
																																		long
																																			BgL_lastzd2matchzd2_2585;
																																		obj_t
																																			BgL_inputzd2portzd2_2584;
																																		BgL_inputzd2portzd2_2584
																																			=
																																			BgL_inputzd2portzd2_952;
																																		BgL_lastzd2matchzd2_2585
																																			=
																																			BgL_lastzd2matchzd2_953;
																																		BgL_lastzd2matchzd2_930
																																			=
																																			BgL_lastzd2matchzd2_2585;
																																		BgL_inputzd2portzd2_929
																																			=
																																			BgL_inputzd2portzd2_2584;
																																		goto
																																			BgL_zc3anonymousza32572ze3z83_931;
																																	}
																															}
																													}
																											}
																									}
																								}
																							else
																								{	/* Cc/ld.scm 256 */
																									bool_t BgL_testz00_2586;

																									if (
																										((long)
																											(BgL_currentzd2charzd2_932)
																											== ((long) 10)))
																										{	/* Cc/ld.scm 256 */
																											BgL_testz00_2586 =
																												((bool_t) 1);
																										}
																									else
																										{	/* Cc/ld.scm 256 */
																											BgL_testz00_2586 =
																												(
																												(long)
																												(BgL_currentzd2charzd2_932)
																												== ((long) 45));
																										}
																									if (BgL_testz00_2586)
																										{	/* Cc/ld.scm 256 */
																											BgL_matchz00_1126 =
																												BgL_lastzd2matchzd2_930;
																										}
																									else
																										{

																											goto
																												BgL_zc3anonymousza32572ze3z83_931;
																										}
																								}
																						}
																				}
																			}
																	}
																else
																	{	/* Cc/ld.scm 256 */
																		if (
																			((long) (BgL_currentzd2charzd2_922) ==
																				((long) 45)))
																			{
																				long BgL_lastzd2matchzd2_2596;

																				obj_t BgL_inputzd2portzd2_2595;

																				BgL_inputzd2portzd2_2595 =
																					BgL_inputzd2portzd2_918;
																				BgL_lastzd2matchzd2_2596 =
																					BgL_newzd2matchzd2_921;
																				BgL_lastzd2matchzd2_953 =
																					BgL_lastzd2matchzd2_2596;
																				BgL_inputzd2portzd2_952 =
																					BgL_inputzd2portzd2_2595;
																				goto BgL_zc3anonymousza32589ze3z83_954;
																			}
																		else
																			{	/* Cc/ld.scm 256 */
																				bool_t BgL_testz00_2597;

																				if (
																					((long) (BgL_currentzd2charzd2_922) ==
																						((long) 10)))
																					{	/* Cc/ld.scm 256 */
																						BgL_testz00_2597 = ((bool_t) 1);
																					}
																				else
																					{	/* Cc/ld.scm 256 */
																						BgL_testz00_2597 =
																							(
																							(long) (BgL_currentzd2charzd2_922)
																							== ((long) 45));
																					}
																				if (BgL_testz00_2597)
																					{	/* Cc/ld.scm 256 */
																						BgL_matchz00_1126 =
																							BgL_newzd2matchzd2_921;
																					}
																				else
																					{
																						long BgL_lastzd2matchzd2_2604;

																						obj_t BgL_inputzd2portzd2_2603;

																						BgL_inputzd2portzd2_2603 =
																							BgL_inputzd2portzd2_918;
																						BgL_lastzd2matchzd2_2604 =
																							BgL_newzd2matchzd2_921;
																						BgL_lastzd2matchzd2_930 =
																							BgL_lastzd2matchzd2_2604;
																						BgL_inputzd2portzd2_929 =
																							BgL_inputzd2portzd2_2603;
																						goto
																							BgL_zc3anonymousza32572ze3z83_931;
																					}
																			}
																	}
															}
														}
													}
												break;
											case ((long) 45):

												BgL_inputzd2portzd2_939 = BgL_inputzd2portzd2_1000;
												BgL_lastzd2matchzd2_940 = BgL_lastzd2matchzd2_1001;
											BgL_zc3anonymousza32580ze3z83_941:
												{	/* Cc/ld.scm 256 */
													long BgL_newzd2matchzd2_942;

													RGC_STOP_MATCH(BgL_inputzd2portzd2_939);
													BgL_newzd2matchzd2_942 = ((long) 1);
													{	/* Cc/ld.scm 256 */
														int BgL_currentzd2charzd2_943;

														BgL_currentzd2charzd2_943 =
															RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_939);
														if (
															((long) (BgL_currentzd2charzd2_943) ==
																((long) 0)))
															{	/* Cc/ld.scm 256 */
																if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_939))
																	{	/* Cc/ld.scm 256 */
																		if (rgc_fill_buffer
																			(BgL_inputzd2portzd2_939))
																			{

																				goto BgL_zc3anonymousza32580ze3z83_941;
																			}
																		else
																			{	/* Cc/ld.scm 256 */
																				BgL_matchz00_1126 =
																					BgL_newzd2matchzd2_942;
																			}
																	}
																else
																	{
																		long BgL_lastzd2matchzd2_2615;

																		obj_t BgL_inputzd2portzd2_2614;

																		BgL_inputzd2portzd2_2614 =
																			BgL_inputzd2portzd2_939;
																		BgL_lastzd2matchzd2_2615 =
																			BgL_newzd2matchzd2_942;
																		BgL_lastzd2matchzd2_930 =
																			BgL_lastzd2matchzd2_2615;
																		BgL_inputzd2portzd2_929 =
																			BgL_inputzd2portzd2_2614;
																		goto BgL_zc3anonymousza32572ze3z83_931;
																	}
															}
														else
															{	/* Cc/ld.scm 256 */
																if (
																	((long) (BgL_currentzd2charzd2_943) ==
																		((long) 115)))
																	{
																		long BgL_lastzd2matchzd2_2620;

																		obj_t BgL_inputzd2portzd2_2619;

																		BgL_inputzd2portzd2_2619 =
																			BgL_inputzd2portzd2_939;
																		BgL_lastzd2matchzd2_2620 =
																			BgL_newzd2matchzd2_942;
																		BgL_lastzd2matchzd2_965 =
																			BgL_lastzd2matchzd2_2620;
																		BgL_inputzd2portzd2_964 =
																			BgL_inputzd2portzd2_2619;
																		goto BgL_zc3anonymousza32601ze3z83_966;
																	}
																else
																	{	/* Cc/ld.scm 256 */
																		if (
																			((long) (BgL_currentzd2charzd2_943) ==
																				((long) 45)))
																			{
																				long BgL_lastzd2matchzd2_2625;

																				obj_t BgL_inputzd2portzd2_2624;

																				BgL_inputzd2portzd2_2624 =
																					BgL_inputzd2portzd2_939;
																				BgL_lastzd2matchzd2_2625 =
																					BgL_newzd2matchzd2_942;
																				BgL_lastzd2matchzd2_953 =
																					BgL_lastzd2matchzd2_2625;
																				BgL_inputzd2portzd2_952 =
																					BgL_inputzd2portzd2_2624;
																				goto BgL_zc3anonymousza32589ze3z83_954;
																			}
																		else
																			{	/* Cc/ld.scm 256 */
																				bool_t BgL_testz00_2626;

																				if (
																					((long) (BgL_currentzd2charzd2_943) ==
																						((long) 10)))
																					{	/* Cc/ld.scm 256 */
																						BgL_testz00_2626 = ((bool_t) 1);
																					}
																				else
																					{	/* Cc/ld.scm 256 */
																						if (
																							((long)
																								(BgL_currentzd2charzd2_943) ==
																								((long) 45)))
																							{	/* Cc/ld.scm 256 */
																								BgL_testz00_2626 = ((bool_t) 1);
																							}
																						else
																							{	/* Cc/ld.scm 256 */
																								BgL_testz00_2626 =
																									(
																									(long)
																									(BgL_currentzd2charzd2_943) ==
																									((long) 115));
																					}}
																				if (BgL_testz00_2626)
																					{	/* Cc/ld.scm 256 */
																						BgL_matchz00_1126 =
																							BgL_newzd2matchzd2_942;
																					}
																				else
																					{
																						long BgL_lastzd2matchzd2_2636;

																						obj_t BgL_inputzd2portzd2_2635;

																						BgL_inputzd2portzd2_2635 =
																							BgL_inputzd2portzd2_939;
																						BgL_lastzd2matchzd2_2636 =
																							BgL_newzd2matchzd2_942;
																						BgL_lastzd2matchzd2_930 =
																							BgL_lastzd2matchzd2_2636;
																						BgL_inputzd2portzd2_929 =
																							BgL_inputzd2portzd2_2635;
																						goto
																							BgL_zc3anonymousza32572ze3z83_931;
																					}
																			}
																	}
															}
													}
												}
												break;
											case ((long) 10):

												{	/* Cc/ld.scm 256 */
													long BgL_newzd2matchzd2_1502;

													RGC_STOP_MATCH(BgL_inputzd2portzd2_1000);
													BgL_newzd2matchzd2_1502 = ((long) 1);
													BgL_matchz00_1126 = BgL_newzd2matchzd2_1502;
												} break;
											default:
												{
													long BgL_lastzd2matchzd2_2639;

													obj_t BgL_inputzd2portzd2_2638;

													BgL_inputzd2portzd2_2638 = BgL_inputzd2portzd2_1000;
													BgL_lastzd2matchzd2_2639 = BgL_lastzd2matchzd2_1001;
													BgL_lastzd2matchzd2_919 = BgL_lastzd2matchzd2_2639;
													BgL_inputzd2portzd2_918 = BgL_inputzd2portzd2_2638;
													goto BgL_zc3anonymousza32565ze3z83_920;
												}
											}
									}
									RGC_SET_FILEPOS(BgL_port1626z00_1599);
									{

										{	/* Cc/ld.scm 256 */
											obj_t BgL_aux1666z00_1131;

											BgL_aux1666z00_1131 = BINT(BgL_matchz00_1126);
											switch ((long) CINT(BgL_aux1666z00_1131))
												{
												case ((long) 1):

													BgL_val1629z00_874 = BFALSE;
													break;
												case ((long) 0):

													BgL_val1629z00_874 = BTRUE;
													break;
												default:
													BgL_val1629z00_874 =
														BGl_errorz00zz__errorz00
														(BGl_string2777z00zzcc_ldz00,
														BGl_string2778z00zzcc_ldz00,
														BINT(BgL_matchz00_1126));
												}
										}
									}
								}
							}
							POP_EXIT();
							return BgL_val1629z00_874;
						}
					}
				}
		}
	}



/* loop */
	obj_t BGl_loopz00zzcc_ldz00(obj_t BgL_pathz00_835)
	{
		AN_OBJECT;
		{	/* Cc/ld.scm 322 */
			if (NULLP(BgL_pathz00_835))
				{	/* Cc/ld.scm 323 */
					return BNIL;
				}
			else
				{	/* Cc/ld.scm 323 */
					return
						MAKE_PAIR(string_append(BGl_string2784z00zzcc_ldz00,
							CAR(BgL_pathz00_835)),
						BGl_loopz00zzcc_ldz00(CDR(BgL_pathz00_835)));
				}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcc_ldz00()
	{
		AN_OBJECT;
		{	/* Cc/ld.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcc_ldz00()
	{
		AN_OBJECT;
		{	/* Cc/ld.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcc_ldz00()
	{
		AN_OBJECT;
		{	/* Cc/ld.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string2785z00zzcc_ldz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string2785z00zzcc_ldz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string2785z00zzcc_ldz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string2785z00zzcc_ldz00));
			BGl_modulezd2initializa7ationz75zzcc_execz00(((long) 209072610),
				BSTRING_TO_STRING(BGl_string2785z00zzcc_ldz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string2785z00zzcc_ldz00));
			BGl_modulezd2initializa7ationz75zzengine_configurez00(((long) 96794353),
				BSTRING_TO_STRING(BGl_string2785z00zzcc_ldz00));
			return
				BGl_modulezd2initializa7ationz75zzmodule_evalz00(((long) 168261208),
				BSTRING_TO_STRING(BGl_string2785z00zzcc_ldz00));
		}
	}

#ifdef __cplusplus
}
#endif
