/*===========================================================================*/
/*   (SawMsil/dnld.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMsil/dnld.scm)*/
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


	static obj_t BGl__dotnetzd2ldzd2zzmsil_ldz00(obj_t);
	static obj_t BGl__generatezd2rotorzd2msdosz00zzmsil_ldz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__generatezd2pnetzd2shz00zzmsil_ldz00(obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_chmodz00zz__osz00(obj_t, obj_t);
	BGL_IMPORT bool_t bigloo_strcmp(obj_t, obj_t);
	extern obj_t BGl_uncygdrivez00zztools_miscz00(obj_t);
	BGL_IMPORT obj_t BGl_bigloozd2configzd2zz__configurez00(obj_t);
	extern obj_t BGl_za2dotnetzd2dllzd2pathza2z00zzengine_paramz00;
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_makezd2ldzd2commandz00zzmsil_ldz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_za2unsafezd2libraryza2zd2zzengine_paramz00;
	static obj_t BGl_requirezd2initializa7ationz75zzmsil_ldz00 = BUNSPEC;
	static bool_t BGl_generatezd2pnetzd2msdosz00zzmsil_ldz00(obj_t, obj_t);
	static obj_t BGl__generatezd2pnetzd2msdosz00zzmsil_ldz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2replacezd2zz__r4_strings_6_7z00(obj_t,
		unsigned char, unsigned char);
	static obj_t BGl_genericzd2initzd2zzmsil_ldz00();
	extern obj_t BGl_za2dotnetzd2ldzd2styleza2z00zzengine_paramz00;
	static obj_t BGl_zc3anonymousza32683ze3z83zzmsil_ldz00(obj_t);
	BGL_IMPORT obj_t BGl_makezd2sharedzd2libzd2namezd2zz__osz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_za2bigloozd2libza2zd2zzengine_paramz00;
	static obj_t BGl_cnstzd2initzd2zzmsil_ldz00();
	extern obj_t BGl_za2profilezd2libraryza2zd2zzengine_paramz00;
	static obj_t BGl_zc3anonymousza32692ze3z83zzmsil_ldz00(obj_t);
	static obj_t BGl_generatezd2dotnetzd2shellzd2scriptzd2zzmsil_ldz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzmsil_ldz00();
	extern obj_t BGl_za2withzd2filesza2zd2zzengine_paramz00;
	extern obj_t BGl_execz00zzcc_execz00(obj_t, bool_t, obj_t);
	static bool_t BGl_generatezd2monozd2shz00zzmsil_ldz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2ozd2filesza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_defaultzd2scriptzd2namez00zz__osz00();
	BGL_IMPORT obj_t BGl_definezd2primopzd2refz12z12zz__evenvz00(obj_t, obj_t);
	extern obj_t BGl_za2libzd2dirza2zd2zzengine_paramz00;
	extern obj_t BGl_za2dotnetzd2clrzd2optza2z00zzengine_paramz00;
	static obj_t BGl_makezd2pnetzd2ldzd2commandzd2zzmsil_ldz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dotnetzd2ldzd2zzmsil_ldz00();
	static obj_t BGl__makezd2pnetzd2ldzd2commandzd2zzmsil_ldz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_za2dotnetzd2shzd2clrsza2z00zzmsil_ldz00 = BUNSPEC;
	extern obj_t BGl_stringza2zd2ze3stringz93zztools_miscz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzmsil_ldz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcc_execz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcc_ldz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__libraryz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evenvz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long,
		char *);
	static obj_t BGl_toplevelzd2initzd2zzmsil_ldz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32732ze3z83zzmsil_ldz00(obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	static bool_t BGl_generatezd2pnetzd2shz00zzmsil_ldz00(obj_t, obj_t);
	extern obj_t BGl_za2additionalzd2bigloozd2librariesza2z00zzengine_paramz00;
	static obj_t BGl_zc3anonymousza32742ze3z83zzmsil_ldz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static bool_t BGl_generatezd2rotorzd2shz00zzmsil_ldz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	extern obj_t BGl_za2destza2z00zzengine_paramz00;
	static obj_t BGl_zc3anonymousza32754ze3z83zzmsil_ldz00(obj_t);
	BGL_IMPORT obj_t BGl_libraryzd2filezd2namez00zz__libraryz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_loopz00zzmsil_ldz00(obj_t);
	extern obj_t BGl_za2dotnetzd2clrza2zd2zzengine_paramz00;
	static obj_t BGl_zc3anonymousza32763ze3z83zzmsil_ldz00(obj_t);
	extern obj_t BGl_za2dotnetzd2clrzd2styleza2z00zzengine_paramz00;
	static obj_t BGl_loopz72z72zzmsil_ldz00(obj_t);
	static obj_t BGl_generatezd2dotnetzd2scriptz00zzmsil_ldz00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t BGl_evalzd2initzd2zzmsil_ldz00();
	static obj_t BGl_za2dotnetzd2msdoszd2clrsza2z00zzmsil_ldz00 = BUNSPEC;
	static obj_t BGl__generatezd2rotorzd2shz00zzmsil_ldz00(obj_t, obj_t, obj_t);
	static obj_t BGl__generatezd2monozd2shz00zzmsil_ldz00(obj_t, obj_t, obj_t);
	static bool_t BGl_generatezd2monozd2msdosz00zzmsil_ldz00(obj_t, obj_t);
	static obj_t BGl__generatezd2monozd2msdosz00zzmsil_ldz00(obj_t, obj_t, obj_t);
	static obj_t BGl_makezd2monozd2ldzd2commandzd2zzmsil_ldz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	extern obj_t BGl_za2dotnetzd2ldza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_za2dotnetzd2linkersza2zd2zzmsil_ldz00 = BUNSPEC;
	static obj_t BGl_dotnetzd2libraryzd2suffixz00zzmsil_ldz00();
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	static obj_t BGl__makezd2monozd2ldzd2commandzd2zzmsil_ldz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzmsil_ldz00();
	static obj_t BGl_dotnetzd2libdirzd2zzmsil_ldz00();
	static bool_t BGl_generatezd2rotorzd2msdosz00zzmsil_ldz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzmsil_ldz00();
	extern obj_t BGl_za2purifyza2z00zzengine_paramz00;
	extern obj_t BGl_za2dotnetzd2shellza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t __cnst[10];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_generatezd2pnetzd2msdoszd2envzd2zzmsil_ldz00,
		BgL_bgl__generateza7d2pnet2853za7,
		BGl__generatezd2pnetzd2msdosz00zzmsil_ldz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_generatezd2monozd2msdoszd2envzd2zzmsil_ldz00,
		BgL_bgl__generateza7d2mono2854za7,
		BGl__generatezd2monozd2msdosz00zzmsil_ldz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_dotnetzd2ldzd2envz00zzmsil_ldz00,
		BgL_bgl__dotnetza7d2ldza7d2za72855za7, BGl__dotnetzd2ldzd2zzmsil_ldz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2806z00zzmsil_ldz00,
		BgL_bgl_string2806za700za7za7m2856za7, "_p", 2);
	      DEFINE_STRING(BGl_string2807z00zzmsil_ldz00,
		BgL_bgl_string2807za700za7za7m2857za7, "_u", 2);
	      DEFINE_STRING(BGl_string2808z00zzmsil_ldz00,
		BgL_bgl_string2808za700za7za7m2858za7, "_s", 2);
	      DEFINE_STRING(BGl_string2810z00zzmsil_ldz00,
		BgL_bgl_string2810za700za7za7m2859za7, ".obj", 4);
	      DEFINE_STRING(BGl_string2809z00zzmsil_ldz00,
		BgL_bgl_string2809za700za7za7m2860za7, ".exe", 4);
	      DEFINE_STRING(BGl_string2811z00zzmsil_ldz00,
		BgL_bgl_string2811za700za7za7m2861za7, ")", 1);
	      DEFINE_STRING(BGl_string2812z00zzmsil_ldz00,
		BgL_bgl_string2812za700za7za7m2862za7, "   . ld (", 9);
	      DEFINE_STRING(BGl_string2813z00zzmsil_ldz00,
		BgL_bgl_string2813za700za7za7m2863za7, "      [", 7);
	      DEFINE_STRING(BGl_string2814z00zzmsil_ldz00,
		BgL_bgl_string2814za700za7za7m2864za7, "ld", 2);
	      DEFINE_STRING(BGl_string2815z00zzmsil_ldz00,
		BgL_bgl_string2815za700za7za7m2865za7, " ", 1);
	      DEFINE_STRING(BGl_string2816z00zzmsil_ldz00,
		BgL_bgl_string2816za700za7za7m2866za7, "", 0);
	      DEFINE_STRING(BGl_string2817z00zzmsil_ldz00,
		BgL_bgl_string2817za700za7za7m2867za7, "Unknown linker style, supported: ",
		33);
	      DEFINE_STRING(BGl_string2818z00zzmsil_ldz00,
		BgL_bgl_string2818za700za7za7m2868za7, "ld (dotnet)", 11);
	      DEFINE_STRING(BGl_string2820z00zzmsil_ldz00,
		BgL_bgl_string2820za700za7za7m2869za7, " (", 2);
	      DEFINE_STRING(BGl_string2819z00zzmsil_ldz00,
		BgL_bgl_string2819za700za7za7m2870za7, "   . ", 5);
	      DEFINE_STRING(BGl_string2821z00zzmsil_ldz00,
		BgL_bgl_string2821za700za7za7m2871za7, "sh", 2);
	      DEFINE_STRING(BGl_string2822z00zzmsil_ldz00,
		BgL_bgl_string2822za700za7za7m2872za7, "msdos", 5);
	      DEFINE_STRING(BGl_string2823z00zzmsil_ldz00,
		BgL_bgl_string2823za700za7za7m2873za7, "' -- using `sh'", 15);
	      DEFINE_STRING(BGl_string2824z00zzmsil_ldz00,
		BgL_bgl_string2824za700za7za7m2874za7, "Illegal shell `", 15);
	      DEFINE_STRING(BGl_string2825z00zzmsil_ldz00,
		BgL_bgl_string2825za700za7za7m2875za7, "generate-dotnet-script", 22);
	      DEFINE_STRING(BGl_string2826z00zzmsil_ldz00,
		BgL_bgl_string2826za700za7za7m2876za7, "Unknown clr style, supported: ",
		30);
	      DEFINE_STRING(BGl_string2827z00zzmsil_ldz00,
		BgL_bgl_string2827za700za7za7m2877za7, " -l", 3);
	      DEFINE_STRING(BGl_string2828z00zzmsil_ldz00,
		BgL_bgl_string2828za700za7za7m2878za7, " -- ", 4);
	      DEFINE_STRING(BGl_string2830z00zzmsil_ldz00,
		BgL_bgl_string2830za700za7za7m2879za7, "\" ", 2);
	      DEFINE_STRING(BGl_string2829z00zzmsil_ldz00,
		BgL_bgl_string2829za700za7za7m2880za7, " -o ", 4);
	      DEFINE_STRING(BGl_string2831z00zzmsil_ldz00,
		BgL_bgl_string2831za700za7za7m2881za7, "-L \"", 4);
	      DEFINE_STRING(BGl_string2832z00zzmsil_ldz00,
		BgL_bgl_string2832za700za7za7m2882za7, "#!/bin/sh", 9);
	      DEFINE_STRING(BGl_string2833z00zzmsil_ldz00,
		BgL_bgl_string2833za700za7za7m2883za7, "DOTNETCLR=", 10);
	      DEFINE_STRING(BGl_string2834z00zzmsil_ldz00,
		BgL_bgl_string2834za700za7za7m2884za7, "$DOTNETCLR ", 11);
	      DEFINE_STRING(BGl_string2835z00zzmsil_ldz00,
		BgL_bgl_string2835za700za7za7m2885za7,
		" $BIGLOODOTNETOPT $BUGLOODOTNETOPT ", 35);
	      DEFINE_STRING(BGl_string2836z00zzmsil_ldz00,
		BgL_bgl_string2836za700za7za7m2886za7, " -L \"", 5);
	      DEFINE_STRING(BGl_string2837z00zzmsil_ldz00,
		BgL_bgl_string2837za700za7za7m2887za7, ".exe ", 5);
	      DEFINE_STRING(BGl_string2838z00zzmsil_ldz00,
		BgL_bgl_string2838za700za7za7m2888za7, "$*", 2);
	      DEFINE_STRING(BGl_string2840z00zzmsil_ldz00,
		BgL_bgl_string2840za700za7za7m2889za7,
		" %BIGLOODOTNETOPT% %BUGLOODOTNETOPT% ", 37);
	      DEFINE_STRING(BGl_string2839z00zzmsil_ldz00,
		BgL_bgl_string2839za700za7za7m2890za7, "@", 1);
	      DEFINE_STRING(BGl_string2841z00zzmsil_ldz00,
		BgL_bgl_string2841za700za7za7m2891za7, " %*", 3);
	      DEFINE_STRING(BGl_string2842z00zzmsil_ldz00,
		BgL_bgl_string2842za700za7za7m2892za7, "-L\"", 3);
	      DEFINE_STRING(BGl_string2843z00zzmsil_ldz00,
		BgL_bgl_string2843za700za7za7m2893za7, "MONO_PATH=$MONO_PATH:", 21);
	      DEFINE_STRING(BGl_string2844z00zzmsil_ldz00,
		BgL_bgl_string2844za700za7za7m2894za7, " $DOTNETCLR ", 12);
	      DEFINE_STRING(BGl_string2845z00zzmsil_ldz00,
		BgL_bgl_string2845za700za7za7m2895za7, "@set MONO_PATH=\"", 16);
	      DEFINE_STRING(BGl_string2846z00zzmsil_ldz00,
		BgL_bgl_string2846za700za7za7m2896za7, "\"\n", 2);
	      DEFINE_STRING(BGl_string2847z00zzmsil_ldz00,
		BgL_bgl_string2847za700za7za7m2897za7, "%*", 2);
	      DEFINE_STRING(BGl_string2848z00zzmsil_ldz00,
		BgL_bgl_string2848za700za7za7m2898za7, "$DOTNETCLR* ", 12);
	      DEFINE_STRING(BGl_string2850z00zzmsil_ldz00,
		BgL_bgl_string2850za700za7za7m2899za7,
		"*dotnet-msdos-clrs* *dotnet-sh-clrs* *dotnet-linkers* execute write read dll-directory rotor mono pnet ",
		103);
	      DEFINE_STRING(BGl_string2849z00zzmsil_ldz00,
		BgL_bgl_string2849za700za7za7m2900za7, "msil_ld", 7);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_generatezd2monozd2shzd2envzd2zzmsil_ldz00,
		BgL_bgl__generateza7d2mono2901za7, BGl__generatezd2monozd2shz00zzmsil_ldz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_generatezd2rotorzd2shzd2envzd2zzmsil_ldz00,
		BgL_bgl__generateza7d2roto2902za7,
		BGl__generatezd2rotorzd2shz00zzmsil_ldz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_makezd2pnetzd2ldzd2commandzd2envz00zzmsil_ldz00,
		BgL_bgl__makeza7d2pnetza7d2l2903z00,
		BGl__makezd2pnetzd2ldzd2commandzd2zzmsil_ldz00, 0L, BUNSPEC, 4);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_generatezd2rotorzd2msdoszd2envzd2zzmsil_ldz00,
		BgL_bgl__generateza7d2roto2904za7,
		BGl__generatezd2rotorzd2msdosz00zzmsil_ldz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_makezd2monozd2ldzd2commandzd2envz00zzmsil_ldz00,
		BgL_bgl__makeza7d2monoza7d2l2905z00,
		BGl__makezd2monozd2ldzd2commandzd2zzmsil_ldz00, 0L, BUNSPEC, 4);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_generatezd2pnetzd2shzd2envzd2zzmsil_ldz00,
		BgL_bgl__generateza7d2pnet2906za7, BGl__generatezd2pnetzd2shz00zzmsil_ldz00,
		0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmsil_ldz00(long
		BgL_checksumz00_1239, char *BgL_fromz00_1240)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmsil_ldz00))
				{
					BGl_requirezd2initializa7ationz75zzmsil_ldz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzmsil_ldz00();
					BGl_cnstzd2initzd2zzmsil_ldz00();
					BGl_importedzd2moduleszd2initz00zzmsil_ldz00();
					BGl_evalzd2initzd2zzmsil_ldz00();
					BGl_toplevelzd2initzd2zzmsil_ldz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmsil_ldz00()
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 15 */
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "msil_ld");
			BGl_modulezd2initializa7ationz75zz__configurez00(((long) 0), "msil_ld");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"msil_ld");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "msil_ld");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"msil_ld");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"msil_ld");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "msil_ld");
			BGl_modulezd2initializa7ationz75zz__evenvz00(((long) 0), "msil_ld");
			BGl_modulezd2initializa7ationz75zz__libraryz00(((long) 0), "msil_ld");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"msil_ld");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmsil_ldz00()
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 15 */
			{	/* SawMsil/dnld.scm 15 */
				obj_t BgL_cportz00_1231;

				BgL_cportz00_1231 =
					bgl_open_input_string(BGl_string2850z00zzmsil_ldz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1232;

					BgL_iz00_1232 = ((long) 9);
				BgL_loopz00_1233:
					if ((BgL_iz00_1232 == ((long) -1)))
						{	/* SawMsil/dnld.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* SawMsil/dnld.scm 15 */
							{	/* SawMsil/dnld.scm 15 */
								obj_t BgL_arg2852z00_1235;

								{	/* SawMsil/dnld.scm 15 */

									{	/* SawMsil/dnld.scm 15 */
										obj_t BgL_locationz00_1237;

										BgL_locationz00_1237 = BBOOL(((bool_t) 0));
										{	/* SawMsil/dnld.scm 15 */

											BgL_arg2852z00_1235 =
												BGl_readz00zz__readerz00(BgL_cportz00_1231,
												BgL_locationz00_1237);
										}
									}
								}
								{	/* SawMsil/dnld.scm 15 */
									int BgL_auxz00_1265;

									BgL_auxz00_1265 = (int) (BgL_iz00_1232);
									CNST_TABLE_SET(BgL_auxz00_1265, BgL_arg2852z00_1235);
							}}
							{	/* SawMsil/dnld.scm 15 */
								int BgL_auxz00_1238;

								BgL_auxz00_1238 = (int) ((BgL_iz00_1232 - ((long) 1)));
								{
									long BgL_iz00_1270;

									BgL_iz00_1270 = (long) (BgL_auxz00_1238);
									BgL_iz00_1232 = BgL_iz00_1270;
									goto BgL_loopz00_1233;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmsil_ldz00()
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 15 */
			{	/* SawMsil/dnld.scm 38 */
				obj_t BgL_arg2240z00_496;

				obj_t BgL_arg2242z00_497;

				BgL_arg2240z00_496 =
					MAKE_PAIR(CNST_TABLE_REF(((long) 0)),
					BGl_makezd2pnetzd2ldzd2commandzd2envz00zzmsil_ldz00);
				BgL_arg2242z00_497 =
					MAKE_PAIR(CNST_TABLE_REF(((long) 1)),
					BGl_makezd2monozd2ldzd2commandzd2envz00zzmsil_ldz00);
				{	/* SawMsil/dnld.scm 38 */
					obj_t BgL_list2243z00_498;

					{	/* SawMsil/dnld.scm 38 */
						obj_t BgL_arg2245z00_499;

						BgL_arg2245z00_499 = MAKE_PAIR(BgL_arg2242z00_497, BNIL);
						BgL_list2243z00_498 =
							MAKE_PAIR(BgL_arg2240z00_496, BgL_arg2245z00_499);
					}
					BGl_za2dotnetzd2linkersza2zd2zzmsil_ldz00 = BgL_list2243z00_498;
			}}
			{	/* SawMsil/dnld.scm 45 */
				obj_t BgL_arg2252z00_500;

				obj_t BgL_arg2255z00_501;

				obj_t BgL_arg2259z00_502;

				BgL_arg2252z00_500 =
					MAKE_PAIR(CNST_TABLE_REF(((long) 0)),
					BGl_generatezd2pnetzd2shzd2envzd2zzmsil_ldz00);
				BgL_arg2255z00_501 =
					MAKE_PAIR(CNST_TABLE_REF(((long) 1)),
					BGl_generatezd2monozd2shzd2envzd2zzmsil_ldz00);
				BgL_arg2259z00_502 =
					MAKE_PAIR(CNST_TABLE_REF(((long) 2)),
					BGl_generatezd2rotorzd2shzd2envzd2zzmsil_ldz00);
				{	/* SawMsil/dnld.scm 45 */
					obj_t BgL_list2260z00_503;

					{	/* SawMsil/dnld.scm 45 */
						obj_t BgL_arg2267z00_504;

						{	/* SawMsil/dnld.scm 45 */
							obj_t BgL_arg2274z00_505;

							BgL_arg2274z00_505 = MAKE_PAIR(BgL_arg2259z00_502, BNIL);
							BgL_arg2267z00_504 =
								MAKE_PAIR(BgL_arg2255z00_501, BgL_arg2274z00_505);
						}
						BgL_list2260z00_503 =
							MAKE_PAIR(BgL_arg2252z00_500, BgL_arg2267z00_504);
					}
					BGl_za2dotnetzd2shzd2clrsza2z00zzmsil_ldz00 = BgL_list2260z00_503;
			}}
			{	/* SawMsil/dnld.scm 53 */
				obj_t BgL_arg2275z00_506;

				obj_t BgL_arg2282z00_507;

				obj_t BgL_arg2285z00_508;

				BgL_arg2275z00_506 =
					MAKE_PAIR(CNST_TABLE_REF(((long) 0)),
					BGl_generatezd2pnetzd2msdoszd2envzd2zzmsil_ldz00);
				BgL_arg2282z00_507 =
					MAKE_PAIR(CNST_TABLE_REF(((long) 1)),
					BGl_generatezd2monozd2msdoszd2envzd2zzmsil_ldz00);
				BgL_arg2285z00_508 =
					MAKE_PAIR(CNST_TABLE_REF(((long) 2)),
					BGl_generatezd2rotorzd2msdoszd2envzd2zzmsil_ldz00);
				{	/* SawMsil/dnld.scm 53 */
					obj_t BgL_list2286z00_509;

					{	/* SawMsil/dnld.scm 53 */
						obj_t BgL_arg2290z00_510;

						{	/* SawMsil/dnld.scm 53 */
							obj_t BgL_arg2295z00_511;

							BgL_arg2295z00_511 = MAKE_PAIR(BgL_arg2285z00_508, BNIL);
							BgL_arg2290z00_510 =
								MAKE_PAIR(BgL_arg2282z00_507, BgL_arg2295z00_511);
						}
						BgL_list2286z00_509 =
							MAKE_PAIR(BgL_arg2275z00_506, BgL_arg2290z00_510);
					}
					return (BGl_za2dotnetzd2msdoszd2clrsza2z00zzmsil_ldz00 =
						BgL_list2286z00_509, BUNSPEC);
				}
			}
		}
	}



/* dotnet-library-suffix */
	obj_t BGl_dotnetzd2libraryzd2suffixz00zzmsil_ldz00()
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 60 */
			if (CBOOL(BGl_za2profilezd2libraryza2zd2zzengine_paramz00))
				{	/* SawMsil/dnld.scm 62 */
					return BGl_string2806z00zzmsil_ldz00;
				}
			else
				{	/* SawMsil/dnld.scm 63 */
					bool_t BgL_testz00_1298;

					if (CBOOL(BGl_za2unsafezd2libraryza2zd2zzengine_paramz00))
						{	/* SawMsil/dnld.scm 63 */
							if (CBOOL(BGl_za2purifyza2z00zzengine_paramz00))
								{	/* SawMsil/dnld.scm 63 */
									BgL_testz00_1298 = ((bool_t) 0);
								}
							else
								{	/* SawMsil/dnld.scm 63 */
									BgL_testz00_1298 = ((bool_t) 1);
								}
						}
					else
						{	/* SawMsil/dnld.scm 63 */
							BgL_testz00_1298 = ((bool_t) 0);
						}
					if (BgL_testz00_1298)
						{	/* SawMsil/dnld.scm 63 */
							return BGl_string2807z00zzmsil_ldz00;
						}
					else
						{	/* SawMsil/dnld.scm 63 */
							return BGl_string2808z00zzmsil_ldz00;
						}
				}
		}
	}



/* dotnet-ld */
	BGL_EXPORTED_DEF obj_t BGl_dotnetzd2ldzd2zzmsil_ldz00()
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 69 */
			{	/* SawMsil/dnld.scm 70 */
				obj_t BgL_targetz00_513;

				if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
					{	/* SawMsil/dnld.scm 70 */
						BgL_targetz00_513 = BGl_za2destza2z00zzengine_paramz00;
					}
				else
					{	/* SawMsil/dnld.scm 70 */
						BgL_targetz00_513 = BGl_defaultzd2scriptzd2namez00zz__osz00();
					}
				{	/* SawMsil/dnld.scm 70 */
					obj_t BgL_backendz00_514;

					{	/* SawMsil/dnld.scm 73 */
						obj_t BgL_arg2453z00_574;

						BgL_arg2453z00_574 = BGl_thezd2backendzd2zzbackend_backendz00();
						{
							BgL_backendz00_bglt BgL_auxz00_1307;

							BgL_auxz00_1307 = (BgL_backendz00_bglt) (BgL_arg2453z00_574);
							BgL_backendz00_514 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1307))->BgL_srfi0z00);
						}
					}
					{	/* SawMsil/dnld.scm 73 */
						obj_t BgL_exenamez00_515;

						BgL_exenamez00_515 =
							string_append(BGl_prefixz00zz__osz00(BgL_targetz00_513),
							BGl_string2809z00zzmsil_ldz00);
						{	/* SawMsil/dnld.scm 74 */
							obj_t BgL_bigloozd2libzd2_516;

							{	/* SawMsil/dnld.scm 76 */
								obj_t BgL_arg2444z00_569;

								obj_t BgL_arg2445z00_570;

								BgL_arg2444z00_569 =
									BGl_dotnetzd2libraryzd2suffixz00zzmsil_ldz00();
								{	/* SawMsil/dnld.scm 77 */
									obj_t BgL_arg2448z00_571;

									BgL_arg2448z00_571 =
										BGl_thezd2backendzd2zzbackend_backendz00();
									{
										BgL_backendz00_bglt BgL_auxz00_1314;

										BgL_auxz00_1314 =
											(BgL_backendz00_bglt) (BgL_arg2448z00_571);
										BgL_arg2445z00_570 =
											(((BgL_backendz00_bglt) CREF(BgL_auxz00_1314))->
											BgL_srfi0z00);
									}
								}
								BgL_bigloozd2libzd2_516 =
									BGl_libraryzd2filezd2namez00zz__libraryz00
									(BGl_za2bigloozd2libza2zd2zzengine_paramz00,
									BgL_arg2444z00_569, BgL_arg2445z00_570);
							}
							{	/* SawMsil/dnld.scm 75 */
								obj_t BgL_addzd2libszd2_517;

								{	/* SawMsil/dnld.scm 78 */
									obj_t BgL_l2198z00_553;

									BgL_l2198z00_553 =
										BGl_za2additionalzd2bigloozd2librariesza2z00zzengine_paramz00;
									if (NULLP(BgL_l2198z00_553))
										{	/* SawMsil/dnld.scm 78 */
											BgL_addzd2libszd2_517 = BNIL;
										}
									else
										{	/* SawMsil/dnld.scm 78 */
											obj_t BgL_head2200z00_555;

											BgL_head2200z00_555 = MAKE_PAIR(BNIL, BNIL);
											{
												obj_t BgL_l2198z00_557;

												obj_t BgL_tail2201z00_558;

												BgL_l2198z00_557 = BgL_l2198z00_553;
												BgL_tail2201z00_558 = BgL_head2200z00_555;
											BgL_zc3anonymousza32424ze3z83_559:
												if (NULLP(BgL_l2198z00_557))
													{	/* SawMsil/dnld.scm 78 */
														BgL_addzd2libszd2_517 = CDR(BgL_head2200z00_555);
													}
												else
													{	/* SawMsil/dnld.scm 78 */
														obj_t BgL_newtail2202z00_561;

														{	/* SawMsil/dnld.scm 78 */
															obj_t BgL_arg2430z00_563;

															{	/* SawMsil/dnld.scm 78 */
																obj_t BgL_libz00_565;

																BgL_libz00_565 = CAR(BgL_l2198z00_557);
																BgL_arg2430z00_563 =
																	BGl_makezd2sharedzd2libzd2namezd2zz__osz00
																	(BGl_libraryzd2filezd2namez00zz__libraryz00
																	(BgL_libz00_565,
																		BGl_dotnetzd2libraryzd2suffixz00zzmsil_ldz00
																		(), BgL_backendz00_514),
																	BgL_backendz00_514);
															}
															BgL_newtail2202z00_561 =
																MAKE_PAIR(BgL_arg2430z00_563, BNIL);
														}
														SET_CDR(BgL_tail2201z00_558,
															BgL_newtail2202z00_561);
														{
															obj_t BgL_tail2201z00_1332;

															obj_t BgL_l2198z00_1330;

															BgL_l2198z00_1330 = CDR(BgL_l2198z00_557);
															BgL_tail2201z00_1332 = BgL_newtail2202z00_561;
															BgL_tail2201z00_558 = BgL_tail2201z00_1332;
															BgL_l2198z00_557 = BgL_l2198z00_1330;
															goto BgL_zc3anonymousza32424ze3z83_559;
														}
													}
											}
										}
								}
								{	/* SawMsil/dnld.scm 78 */
									obj_t BgL_sobjectsz00_518;

									{	/* SawMsil/dnld.scm 85 */
										obj_t BgL_arg2390z00_536;

										{	/* SawMsil/dnld.scm 85 */
											obj_t BgL_l2203z00_537;

											BgL_l2203z00_537 =
												BGl_za2srczd2filesza2zd2zzengine_paramz00;
											if (NULLP(BgL_l2203z00_537))
												{	/* SawMsil/dnld.scm 85 */
													BgL_arg2390z00_536 = BNIL;
												}
											else
												{	/* SawMsil/dnld.scm 85 */
													obj_t BgL_head2205z00_539;

													BgL_head2205z00_539 = MAKE_PAIR(BNIL, BNIL);
													{
														obj_t BgL_l2203z00_541;

														obj_t BgL_tail2206z00_542;

														BgL_l2203z00_541 = BgL_l2203z00_537;
														BgL_tail2206z00_542 = BgL_head2205z00_539;
													BgL_zc3anonymousza32392ze3z83_543:
														if (NULLP(BgL_l2203z00_541))
															{	/* SawMsil/dnld.scm 85 */
																BgL_arg2390z00_536 = CDR(BgL_head2205z00_539);
															}
														else
															{	/* SawMsil/dnld.scm 85 */
																obj_t BgL_newtail2207z00_545;

																{	/* SawMsil/dnld.scm 85 */
																	obj_t BgL_arg2403z00_547;

																	{	/* SawMsil/dnld.scm 85 */
																		obj_t BgL_sz00_549;

																		BgL_sz00_549 = CAR(BgL_l2203z00_541);
																		BgL_arg2403z00_547 =
																			string_append(BGl_prefixz00zz__osz00
																			(BgL_sz00_549),
																			BGl_string2810z00zzmsil_ldz00);
																	}
																	BgL_newtail2207z00_545 =
																		MAKE_PAIR(BgL_arg2403z00_547, BNIL);
																}
																SET_CDR(BgL_tail2206z00_542,
																	BgL_newtail2207z00_545);
																{
																	obj_t BgL_tail2206z00_1346;

																	obj_t BgL_l2203z00_1344;

																	BgL_l2203z00_1344 = CDR(BgL_l2203z00_541);
																	BgL_tail2206z00_1346 = BgL_newtail2207z00_545;
																	BgL_tail2206z00_542 = BgL_tail2206z00_1346;
																	BgL_l2203z00_541 = BgL_l2203z00_1344;
																	goto BgL_zc3anonymousza32392ze3z83_543;
																}
															}
													}
												}
										}
										BgL_sobjectsz00_518 =
											BGl_stringza2zd2ze3stringz93zztools_miscz00
											(BgL_arg2390z00_536);
									}
									{	/* SawMsil/dnld.scm 85 */
										obj_t BgL_objectsz00_519;

										BgL_objectsz00_519 =
											string_append_3(BgL_sobjectsz00_518,
											BGl_stringza2zd2ze3stringz93zztools_miscz00
											(BGl_za2withzd2filesza2zd2zzengine_paramz00),
											BGl_stringza2zd2ze3stringz93zztools_miscz00
											(BGl_za2ozd2filesza2zd2zzengine_paramz00));
										{	/* SawMsil/dnld.scm 88 */
											obj_t BgL_cmdz00_520;

											{	/* SawMsil/dnld.scm 94 */
												obj_t BgL_arg2370z00_533;

												BgL_arg2370z00_533 =
													MAKE_PAIR(BgL_bigloozd2libzd2_516,
													BgL_addzd2libszd2_517);
												BgL_cmdz00_520 =
													BGl_makezd2ldzd2commandz00zzmsil_ldz00
													(BgL_exenamez00_515, BgL_objectsz00_519,
													BGl_za2libzd2dirza2zd2zzengine_paramz00,
													BgL_arg2370z00_533);
											}
											{	/* SawMsil/dnld.scm 91 */

												{	/* SawMsil/dnld.scm 95 */
													obj_t BgL_list2297z00_521;

													{	/* SawMsil/dnld.scm 95 */
														obj_t BgL_arg2312z00_523;

														{	/* SawMsil/dnld.scm 95 */
															obj_t BgL_arg2318z00_524;

															{	/* SawMsil/dnld.scm 95 */
																obj_t BgL_arg2331z00_526;

																BgL_arg2331z00_526 =
																	MAKE_PAIR(BCHAR(((unsigned char) '\n')),
																	BNIL);
																BgL_arg2318z00_524 =
																	MAKE_PAIR(BGl_string2811z00zzmsil_ldz00,
																	BgL_arg2331z00_526);
															}
															BgL_arg2312z00_523 =
																MAKE_PAIR
																(BGl_za2dotnetzd2ldza2zd2zzengine_paramz00,
																BgL_arg2318z00_524);
														}
														BgL_list2297z00_521 =
															MAKE_PAIR(BGl_string2812z00zzmsil_ldz00,
															BgL_arg2312z00_523);
													}
													BGl_verbosez00zztools_speekz00(BINT(((long) 1)),
														BgL_list2297z00_521);
												}
												{	/* SawMsil/dnld.scm 96 */
													obj_t BgL_list2332z00_527;

													{	/* SawMsil/dnld.scm 96 */
														obj_t BgL_arg2344z00_529;

														{	/* SawMsil/dnld.scm 96 */
															obj_t BgL_arg2351z00_530;

															{	/* SawMsil/dnld.scm 96 */
																obj_t BgL_arg2357z00_531;

																BgL_arg2357z00_531 =
																	MAKE_PAIR(BCHAR(((unsigned char) '\n')),
																	BNIL);
																BgL_arg2351z00_530 =
																	MAKE_PAIR(BCHAR(((unsigned char) ']')),
																	BgL_arg2357z00_531);
															}
															BgL_arg2344z00_529 =
																MAKE_PAIR(BgL_cmdz00_520, BgL_arg2351z00_530);
														}
														BgL_list2332z00_527 =
															MAKE_PAIR(BGl_string2813z00zzmsil_ldz00,
															BgL_arg2344z00_529);
													}
													BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
														BgL_list2332z00_527);
												}
												BGl_execz00zzcc_execz00(BgL_cmdz00_520, ((bool_t) 1),
													BGl_string2814z00zzmsil_ldz00);
												return
													BGl_generatezd2dotnetzd2scriptz00zzmsil_ldz00
													(BgL_targetz00_513,
													BGl_dotnetzd2libdirzd2zzmsil_ldz00());
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



/* _dotnet-ld */
	obj_t BGl__dotnetzd2ldzd2zzmsil_ldz00(obj_t BgL_envz00_1208)
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 69 */
			return BGl_dotnetzd2ldzd2zzmsil_ldz00();
		}
	}



/* dotnet-libdir */
	obj_t BGl_dotnetzd2libdirzd2zzmsil_ldz00()
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 103 */
			if (STRINGP(BGl_za2dotnetzd2dllzd2pathza2z00zzengine_paramz00))
				{	/* SawMsil/dnld.scm 104 */
					return BGl_za2dotnetzd2dllzd2pathza2z00zzengine_paramz00;
				}
			else
				{	/* SawMsil/dnld.scm 104 */
					return
						BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 3)));
		}}
	}



/* make-ld-command */
	obj_t BGl_makezd2ldzd2commandz00zzmsil_ldz00(obj_t BgL_exez00_1,
		obj_t BgL_objectsz00_2, obj_t BgL_pathz00_3, obj_t BgL_libsz00_4)
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 111 */
			{	/* SawMsil/dnld.scm 112 */
				obj_t BgL_idz00_577;

				{	/* SawMsil/dnld.scm 112 */
					obj_t BgL_stringz00_975;

					BgL_stringz00_975 = BGl_za2dotnetzd2ldzd2styleza2z00zzengine_paramz00;
					BgL_idz00_577 =
						string_to_symbol(BSTRING_TO_STRING(BgL_stringz00_975));
				}
				{	/* SawMsil/dnld.scm 112 */
					obj_t BgL_cz00_578;

					BgL_cz00_578 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_577,
						BGl_za2dotnetzd2linkersza2zd2zzmsil_ldz00);
					{	/* SawMsil/dnld.scm 113 */

						{	/* SawMsil/dnld.scm 114 */
							bool_t BgL_testz00_1379;

							if (PAIRP(BgL_cz00_578))
								{	/* SawMsil/dnld.scm 115 */
									bool_t BgL_testz00_1382;

									{	/* SawMsil/dnld.scm 115 */
										obj_t BgL_auxz00_1383;

										BgL_auxz00_1383 = CDR(BgL_cz00_578);
										BgL_testz00_1382 = PROCEDUREP(BgL_auxz00_1383);
									}
									if (BgL_testz00_1382)
										{	/* SawMsil/dnld.scm 115 */
											BgL_testz00_1379 =
												PROCEDURE_CORRECT_ARITYP(CDR(BgL_cz00_578),
												(int) (((long) 4)));
										}
									else
										{	/* SawMsil/dnld.scm 115 */
											BgL_testz00_1379 = ((bool_t) 0);
										}
								}
							else
								{	/* SawMsil/dnld.scm 114 */
									BgL_testz00_1379 = ((bool_t) 0);
								}
							if (BgL_testz00_1379)
								{	/* SawMsil/dnld.scm 117 */
									obj_t BgL_fun2458z00_580;

									BgL_fun2458z00_580 = CDR(BgL_cz00_578);
									return
										PROCEDURE_ENTRY(BgL_fun2458z00_580) (BgL_fun2458z00_580,
										BgL_exez00_1, BgL_objectsz00_2, BgL_pathz00_3,
										BgL_libsz00_4, BEOA);
								}
							else
								{	/* SawMsil/dnld.scm 118 */
									obj_t BgL_arg2460z00_582;

									{	/* SawMsil/dnld.scm 119 */
										obj_t BgL_runner2524z00_606;

										{	/* SawMsil/dnld.scm 119 */
											obj_t BgL_arg2470z00_584;

											{	/* SawMsil/dnld.scm 121 */
												obj_t BgL_l2208z00_586;

												BgL_l2208z00_586 =
													BGl_za2dotnetzd2linkersza2zd2zzmsil_ldz00;
												if (NULLP(BgL_l2208z00_586))
													{	/* SawMsil/dnld.scm 121 */
														BgL_arg2470z00_584 = BNIL;
													}
												else
													{	/* SawMsil/dnld.scm 121 */
														obj_t BgL_head2210z00_588;

														BgL_head2210z00_588 = MAKE_PAIR(BNIL, BNIL);
														{
															obj_t BgL_l2208z00_590;

															obj_t BgL_tail2211z00_591;

															BgL_l2208z00_590 = BgL_l2208z00_586;
															BgL_tail2211z00_591 = BgL_head2210z00_588;
														BgL_zc3anonymousza32473ze3z83_592:
															if (NULLP(BgL_l2208z00_590))
																{	/* SawMsil/dnld.scm 121 */
																	BgL_arg2470z00_584 = CDR(BgL_head2210z00_588);
																}
															else
																{	/* SawMsil/dnld.scm 121 */
																	obj_t BgL_newtail2212z00_594;

																	{	/* SawMsil/dnld.scm 121 */
																		obj_t BgL_arg2477z00_596;

																		{	/* SawMsil/dnld.scm 121 */
																			obj_t BgL_xz00_598;

																			BgL_xz00_598 = CAR(BgL_l2208z00_590);
																			{	/* SawMsil/dnld.scm 122 */
																				bool_t BgL_testz00_1399;

																				if (PAIRP(BgL_xz00_598))
																					{	/* SawMsil/dnld.scm 123 */
																						obj_t BgL_auxz00_1402;

																						BgL_auxz00_1402 = CAR(BgL_xz00_598);
																						BgL_testz00_1399 =
																							SYMBOLP(BgL_auxz00_1402);
																					}
																				else
																					{	/* SawMsil/dnld.scm 122 */
																						BgL_testz00_1399 = ((bool_t) 0);
																					}
																				if (BgL_testz00_1399)
																					{	/* SawMsil/dnld.scm 124 */
																						obj_t BgL_arg2493z00_600;

																						{	/* SawMsil/dnld.scm 124 */
																							obj_t BgL_arg2504z00_602;

																							BgL_arg2504z00_602 =
																								CAR(BgL_xz00_598);
																							{	/* SawMsil/dnld.scm 124 */
																								obj_t BgL_res2789z00_993;

																								{	/* SawMsil/dnld.scm 124 */
																									obj_t BgL_symbolz00_991;

																									BgL_symbolz00_991 =
																										BgL_arg2504z00_602;
																									{	/* SawMsil/dnld.scm 124 */
																										obj_t BgL_arg2063z00_992;

																										BgL_arg2063z00_992 =
																											SYMBOL_TO_STRING
																											(BgL_symbolz00_991);
																										BgL_res2789z00_993 =
																											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																											(BgL_arg2063z00_992);
																									}
																								}
																								BgL_arg2493z00_600 =
																									BgL_res2789z00_993;
																							}
																						}
																						BgL_arg2477z00_596 =
																							string_append(BgL_arg2493z00_600,
																							BGl_string2815z00zzmsil_ldz00);
																					}
																				else
																					{	/* SawMsil/dnld.scm 122 */
																						BgL_arg2477z00_596 =
																							BGl_string2816z00zzmsil_ldz00;
																					}
																			}
																		}
																		BgL_newtail2212z00_594 =
																			MAKE_PAIR(BgL_arg2477z00_596, BNIL);
																	}
																	SET_CDR(BgL_tail2211z00_591,
																		BgL_newtail2212z00_594);
																	{
																		obj_t BgL_tail2211z00_1413;

																		obj_t BgL_l2208z00_1411;

																		BgL_l2208z00_1411 = CDR(BgL_l2208z00_590);
																		BgL_tail2211z00_1413 =
																			BgL_newtail2212z00_594;
																		BgL_tail2211z00_591 = BgL_tail2211z00_1413;
																		BgL_l2208z00_590 = BgL_l2208z00_1411;
																		goto BgL_zc3anonymousza32473ze3z83_592;
																	}
																}
														}
													}
											}
											{	/* SawMsil/dnld.scm 119 */
												obj_t BgL_list2471z00_585;

												BgL_list2471z00_585 =
													MAKE_PAIR(BgL_arg2470z00_584, BNIL);
												BgL_runner2524z00_606 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BGl_string2817z00zzmsil_ldz00, BgL_list2471z00_585);
											}
										}
										BgL_arg2460z00_582 =
											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
											(BgL_runner2524z00_606);
									}
									return
										BGl_errorz00zz__errorz00(BGl_string2818z00zzmsil_ldz00,
										BgL_arg2460z00_582,
										BGl_za2dotnetzd2ldzd2styleza2z00zzengine_paramz00);
								}
						}
					}
				}
			}
		}
	}



/* generate-dotnet-script */
	obj_t BGl_generatezd2dotnetzd2scriptz00zzmsil_ldz00(obj_t BgL_targetz00_5,
		obj_t BgL_pathz00_6)
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 133 */
			{	/* SawMsil/dnld.scm 134 */
				obj_t BgL_list2537z00_612;

				{	/* SawMsil/dnld.scm 134 */
					obj_t BgL_arg2550z00_614;

					BgL_arg2550z00_614 =
						MAKE_PAIR(BGl_za2dotnetzd2shellza2zd2zzengine_paramz00, BNIL);
					BgL_list2537z00_612 =
						MAKE_PAIR(BGl_string2819z00zzmsil_ldz00, BgL_arg2550z00_614);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list2537z00_612);
			}
			{	/* SawMsil/dnld.scm 135 */
				obj_t BgL_list2551z00_615;

				{	/* SawMsil/dnld.scm 135 */
					obj_t BgL_arg2555z00_617;

					{	/* SawMsil/dnld.scm 135 */
						obj_t BgL_arg2556z00_618;

						BgL_arg2556z00_618 = MAKE_PAIR(BGl_string2811z00zzmsil_ldz00, BNIL);
						BgL_arg2555z00_617 = MAKE_PAIR(BgL_targetz00_5, BgL_arg2556z00_618);
					}
					BgL_list2551z00_615 =
						MAKE_PAIR(BGl_string2820z00zzmsil_ldz00, BgL_arg2555z00_617);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list2551z00_615);
			}
			{	/* SawMsil/dnld.scm 136 */
				obj_t BgL_list2557z00_619;

				BgL_list2557z00_619 = MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list2557z00_619);
			}
			if (bigloo_strcmp(BGl_za2dotnetzd2shellza2zd2zzengine_paramz00,
					BGl_string2821z00zzmsil_ldz00))
				{	/* SawMsil/dnld.scm 138 */
					return
						BGl_generatezd2dotnetzd2shellzd2scriptzd2zzmsil_ldz00
						(BgL_targetz00_5, BgL_pathz00_6,
						BGl_za2dotnetzd2shzd2clrsza2z00zzmsil_ldz00);
				}
			else
				{	/* SawMsil/dnld.scm 138 */
					if (bigloo_strcmp(BGl_za2dotnetzd2shellza2zd2zzengine_paramz00,
							BGl_string2822z00zzmsil_ldz00))
						{	/* SawMsil/dnld.scm 140 */
							return
								BGl_generatezd2dotnetzd2shellzd2scriptzd2zzmsil_ldz00
								(BgL_targetz00_5, BgL_pathz00_6,
								BGl_za2dotnetzd2msdoszd2clrsza2z00zzmsil_ldz00);
						}
					else
						{	/* SawMsil/dnld.scm 140 */
							{	/* SawMsil/dnld.scm 143 */
								obj_t BgL_list2561z00_622;

								{	/* SawMsil/dnld.scm 143 */
									obj_t BgL_arg2563z00_624;

									{	/* SawMsil/dnld.scm 143 */
										obj_t BgL_arg2565z00_626;

										{	/* SawMsil/dnld.scm 143 */
											obj_t BgL_arg2566z00_627;

											BgL_arg2566z00_627 =
												MAKE_PAIR(BGl_string2823z00zzmsil_ldz00, BNIL);
											BgL_arg2565z00_626 =
												MAKE_PAIR(BGl_za2dotnetzd2shellza2zd2zzengine_paramz00,
												BgL_arg2566z00_627);
										}
										BgL_arg2563z00_624 =
											MAKE_PAIR(BGl_string2824z00zzmsil_ldz00,
											BgL_arg2565z00_626);
									}
									BgL_list2561z00_622 =
										MAKE_PAIR(BGl_string2825z00zzmsil_ldz00,
										BgL_arg2563z00_624);
								}
								BGl_warningz00zz__errorz00(BgL_list2561z00_622);
							}
							return
								BGl_generatezd2dotnetzd2shellzd2scriptzd2zzmsil_ldz00
								(BgL_targetz00_5, BgL_pathz00_6,
								BGl_za2dotnetzd2shzd2clrsza2z00zzmsil_ldz00);
						}
				}
		}
	}



/* generate-dotnet-shell-script */
	obj_t BGl_generatezd2dotnetzd2shellzd2scriptzd2zzmsil_ldz00(obj_t
		BgL_targetz00_7, obj_t BgL_pathz00_8, obj_t BgL_lstz00_9)
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 150 */
			{	/* SawMsil/dnld.scm 151 */
				obj_t BgL_idz00_628;

				{	/* SawMsil/dnld.scm 151 */
					obj_t BgL_stringz00_1003;

					BgL_stringz00_1003 =
						BGl_za2dotnetzd2clrzd2styleza2z00zzengine_paramz00;
					BgL_idz00_628 =
						string_to_symbol(BSTRING_TO_STRING(BgL_stringz00_1003));
				}
				{	/* SawMsil/dnld.scm 151 */
					obj_t BgL_cz00_629;

					BgL_cz00_629 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_628,
						BgL_lstz00_9);
					{	/* SawMsil/dnld.scm 152 */

						{	/* SawMsil/dnld.scm 153 */
							bool_t BgL_testz00_1446;

							if (PAIRP(BgL_cz00_629))
								{	/* SawMsil/dnld.scm 154 */
									bool_t BgL_testz00_1449;

									{	/* SawMsil/dnld.scm 154 */
										obj_t BgL_auxz00_1450;

										BgL_auxz00_1450 = CDR(BgL_cz00_629);
										BgL_testz00_1449 = PROCEDUREP(BgL_auxz00_1450);
									}
									if (BgL_testz00_1449)
										{	/* SawMsil/dnld.scm 154 */
											BgL_testz00_1446 =
												PROCEDURE_CORRECT_ARITYP(CDR(BgL_cz00_629),
												(int) (((long) 2)));
										}
									else
										{	/* SawMsil/dnld.scm 154 */
											BgL_testz00_1446 = ((bool_t) 0);
										}
								}
							else
								{	/* SawMsil/dnld.scm 153 */
									BgL_testz00_1446 = ((bool_t) 0);
								}
							if (BgL_testz00_1446)
								{	/* SawMsil/dnld.scm 156 */
									obj_t BgL_fun2568z00_631;

									BgL_fun2568z00_631 = CDR(BgL_cz00_629);
									return
										PROCEDURE_ENTRY(BgL_fun2568z00_631) (BgL_fun2568z00_631,
										BgL_targetz00_7, BgL_pathz00_8, BEOA);
								}
							else
								{	/* SawMsil/dnld.scm 157 */
									obj_t BgL_arg2572z00_633;

									{	/* SawMsil/dnld.scm 158 */
										obj_t BgL_runner2629z00_657;

										{	/* SawMsil/dnld.scm 158 */
											obj_t BgL_arg2586z00_635;

											if (NULLP(BgL_lstz00_9))
												{	/* SawMsil/dnld.scm 160 */
													BgL_arg2586z00_635 = BNIL;
												}
											else
												{	/* SawMsil/dnld.scm 160 */
													obj_t BgL_head2215z00_639;

													BgL_head2215z00_639 = MAKE_PAIR(BNIL, BNIL);
													{
														obj_t BgL_l2213z00_641;

														obj_t BgL_tail2216z00_642;

														BgL_l2213z00_641 = BgL_lstz00_9;
														BgL_tail2216z00_642 = BgL_head2215z00_639;
													BgL_zc3anonymousza32589ze3z83_643:
														if (NULLP(BgL_l2213z00_641))
															{	/* SawMsil/dnld.scm 160 */
																BgL_arg2586z00_635 = CDR(BgL_head2215z00_639);
															}
														else
															{	/* SawMsil/dnld.scm 160 */
																obj_t BgL_newtail2217z00_645;

																{	/* SawMsil/dnld.scm 160 */
																	obj_t BgL_arg2595z00_647;

																	{	/* SawMsil/dnld.scm 160 */
																		obj_t BgL_xz00_649;

																		BgL_xz00_649 = CAR(BgL_l2213z00_641);
																		{	/* SawMsil/dnld.scm 161 */
																			bool_t BgL_testz00_1466;

																			if (PAIRP(BgL_xz00_649))
																				{	/* SawMsil/dnld.scm 162 */
																					obj_t BgL_auxz00_1469;

																					BgL_auxz00_1469 = CAR(BgL_xz00_649);
																					BgL_testz00_1466 =
																						SYMBOLP(BgL_auxz00_1469);
																				}
																			else
																				{	/* SawMsil/dnld.scm 161 */
																					BgL_testz00_1466 = ((bool_t) 0);
																				}
																			if (BgL_testz00_1466)
																				{	/* SawMsil/dnld.scm 163 */
																					obj_t BgL_arg2608z00_651;

																					{	/* SawMsil/dnld.scm 163 */
																						obj_t BgL_arg2621z00_653;

																						BgL_arg2621z00_653 =
																							CAR(BgL_xz00_649);
																						{	/* SawMsil/dnld.scm 163 */
																							obj_t BgL_res2790z00_1021;

																							{	/* SawMsil/dnld.scm 163 */
																								obj_t BgL_symbolz00_1019;

																								BgL_symbolz00_1019 =
																									BgL_arg2621z00_653;
																								{	/* SawMsil/dnld.scm 163 */
																									obj_t BgL_arg2063z00_1020;

																									BgL_arg2063z00_1020 =
																										SYMBOL_TO_STRING
																										(BgL_symbolz00_1019);
																									BgL_res2790z00_1021 =
																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																										(BgL_arg2063z00_1020);
																								}
																							}
																							BgL_arg2608z00_651 =
																								BgL_res2790z00_1021;
																						}
																					}
																					BgL_arg2595z00_647 =
																						string_append(BgL_arg2608z00_651,
																						BGl_string2815z00zzmsil_ldz00);
																				}
																			else
																				{	/* SawMsil/dnld.scm 161 */
																					BgL_arg2595z00_647 =
																						BGl_string2816z00zzmsil_ldz00;
																				}
																		}
																	}
																	BgL_newtail2217z00_645 =
																		MAKE_PAIR(BgL_arg2595z00_647, BNIL);
																}
																SET_CDR(BgL_tail2216z00_642,
																	BgL_newtail2217z00_645);
																{
																	obj_t BgL_tail2216z00_1480;

																	obj_t BgL_l2213z00_1478;

																	BgL_l2213z00_1478 = CDR(BgL_l2213z00_641);
																	BgL_tail2216z00_1480 = BgL_newtail2217z00_645;
																	BgL_tail2216z00_642 = BgL_tail2216z00_1480;
																	BgL_l2213z00_641 = BgL_l2213z00_1478;
																	goto BgL_zc3anonymousza32589ze3z83_643;
																}
															}
													}
												}
											{	/* SawMsil/dnld.scm 158 */
												obj_t BgL_list2587z00_636;

												BgL_list2587z00_636 =
													MAKE_PAIR(BgL_arg2586z00_635, BNIL);
												BgL_runner2629z00_657 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BGl_string2826z00zzmsil_ldz00, BgL_list2587z00_636);
											}
										}
										BgL_arg2572z00_633 =
											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
											(BgL_runner2629z00_657);
									}
									return
										BGl_errorz00zz__errorz00(BGl_string2818z00zzmsil_ldz00,
										BgL_arg2572z00_633,
										BGl_za2dotnetzd2clrzd2styleza2z00zzengine_paramz00);
								}
						}
					}
				}
			}
		}
	}



/* make-pnet-ld-command */
	obj_t BGl_makezd2pnetzd2ldzd2commandzd2zzmsil_ldz00(obj_t BgL_exez00_10,
		obj_t BgL_objectsz00_11, obj_t BgL_pathz00_12, obj_t BgL_libsz00_13)
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 172 */
			{	/* SawMsil/dnld.scm 173 */
				obj_t BgL_lpathz00_663;

				BgL_lpathz00_663 = BGl_loopz72z72zzmsil_ldz00(BgL_pathz00_12);
				{	/* SawMsil/dnld.scm 180 */
					obj_t BgL_runner2670z00_689;

					{	/* SawMsil/dnld.scm 180 */
						obj_t BgL_arg2655z00_667;

						{	/* SawMsil/dnld.scm 186 */
							obj_t BgL_head2220z00_677;

							BgL_head2220z00_677 = MAKE_PAIR(BNIL, BNIL);
							{
								obj_t BgL_l2218z00_679;

								obj_t BgL_tail2221z00_680;

								BgL_l2218z00_679 = BgL_libsz00_13;
								BgL_tail2221z00_680 = BgL_head2220z00_677;
							BgL_zc3anonymousza32665ze3z83_681:
								if (NULLP(BgL_l2218z00_679))
									{	/* SawMsil/dnld.scm 186 */
										BgL_arg2655z00_667 = CDR(BgL_head2220z00_677);
									}
								else
									{	/* SawMsil/dnld.scm 186 */
										obj_t BgL_newtail2222z00_683;

										BgL_newtail2222z00_683 =
											MAKE_PAIR(string_append(BGl_string2827z00zzmsil_ldz00,
												CAR(BgL_l2218z00_679)), BNIL);
										SET_CDR(BgL_tail2221z00_680, BgL_newtail2222z00_683);
										{
											obj_t BgL_tail2221z00_1496;

											obj_t BgL_l2218z00_1494;

											BgL_l2218z00_1494 = CDR(BgL_l2218z00_679);
											BgL_tail2221z00_1496 = BgL_newtail2222z00_683;
											BgL_tail2221z00_680 = BgL_tail2221z00_1496;
											BgL_l2218z00_679 = BgL_l2218z00_1494;
											goto BgL_zc3anonymousza32665ze3z83_681;
										}
									}
							}
						}
						{	/* SawMsil/dnld.scm 180 */
							obj_t BgL_list2656z00_668;

							{	/* SawMsil/dnld.scm 180 */
								obj_t BgL_arg2657z00_669;

								{	/* SawMsil/dnld.scm 180 */
									obj_t BgL_arg2658z00_670;

									{	/* SawMsil/dnld.scm 180 */
										obj_t BgL_arg2659z00_671;

										{	/* SawMsil/dnld.scm 180 */
											obj_t BgL_arg2660z00_672;

											{	/* SawMsil/dnld.scm 180 */
												obj_t BgL_arg2661z00_673;

												{	/* SawMsil/dnld.scm 180 */
													obj_t BgL_arg2663z00_674;

													BgL_arg2663z00_674 =
														MAKE_PAIR(BgL_arg2655z00_667, BNIL);
													BgL_arg2661z00_673 =
														MAKE_PAIR(BgL_objectsz00_11, BgL_arg2663z00_674);
												}
												BgL_arg2660z00_672 =
													MAKE_PAIR(BGl_string2828z00zzmsil_ldz00,
													BgL_arg2661z00_673);
											}
											BgL_arg2659z00_671 =
												MAKE_PAIR(BgL_exez00_10, BgL_arg2660z00_672);
										}
										BgL_arg2658z00_670 =
											MAKE_PAIR(BGl_string2829z00zzmsil_ldz00,
											BgL_arg2659z00_671);
									}
									BgL_arg2657z00_669 =
										MAKE_PAIR(BgL_lpathz00_663, BgL_arg2658z00_670);
								}
								BgL_list2656z00_668 =
									MAKE_PAIR(BGl_string2815z00zzmsil_ldz00, BgL_arg2657z00_669);
							}
							BgL_runner2670z00_689 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
								(BGl_za2dotnetzd2ldza2zd2zzengine_paramz00,
								BgL_list2656z00_668);
						}
					}
					return
						BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_runner2670z00_689);
				}
			}
		}
	}



/* loop' */
	obj_t BGl_loopz72z72zzmsil_ldz00(obj_t BgL_pathz00_691)
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 173 */
			if (NULLP(BgL_pathz00_691))
				{	/* SawMsil/dnld.scm 174 */
					return BGl_string2816z00zzmsil_ldz00;
				}
			else
				{	/* SawMsil/dnld.scm 176 */
					obj_t BgL_arg2674z00_695;

					obj_t BgL_arg2676z00_697;

					BgL_arg2674z00_695 = CAR(BgL_pathz00_691);
					BgL_arg2676z00_697 = BGl_loopz72z72zzmsil_ldz00(CDR(BgL_pathz00_691));
					{	/* SawMsil/dnld.scm 176 */
						obj_t BgL_list2677z00_698;

						{	/* SawMsil/dnld.scm 176 */
							obj_t BgL_arg2678z00_699;

							{	/* SawMsil/dnld.scm 176 */
								obj_t BgL_arg2679z00_700;

								{	/* SawMsil/dnld.scm 176 */
									obj_t BgL_arg2680z00_701;

									BgL_arg2680z00_701 = MAKE_PAIR(BgL_arg2676z00_697, BNIL);
									BgL_arg2679z00_700 =
										MAKE_PAIR(BGl_string2830z00zzmsil_ldz00,
										BgL_arg2680z00_701);
								}
								BgL_arg2678z00_699 =
									MAKE_PAIR(BgL_arg2674z00_695, BgL_arg2679z00_700);
							}
							BgL_list2677z00_698 =
								MAKE_PAIR(BGl_string2831z00zzmsil_ldz00, BgL_arg2678z00_699);
						}
						return
							BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list2677z00_698);
					}
				}
		}
	}



/* _make-pnet-ld-command */
	obj_t BGl__makezd2pnetzd2ldzd2commandzd2zzmsil_ldz00(obj_t BgL_envz00_1180,
		obj_t BgL_exez00_1181, obj_t BgL_objectsz00_1182, obj_t BgL_pathz00_1183,
		obj_t BgL_libsz00_1184)
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 172 */
			return
				BGl_makezd2pnetzd2ldzd2commandzd2zzmsil_ldz00(BgL_exez00_1181,
				BgL_objectsz00_1182, BgL_pathz00_1183, BgL_libsz00_1184);
		}
	}



/* generate-pnet-sh */
	bool_t BGl_generatezd2pnetzd2shz00zzmsil_ldz00(obj_t BgL_targetz00_14,
		obj_t BgL_pathz00_15)
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 191 */
			{	/* SawMsil/dnld.scm 194 */
				obj_t BgL_zc3anonymousza32683ze3z83_1209;

				BgL_zc3anonymousza32683ze3z83_1209 =
					make_fx_procedure(BGl_zc3anonymousza32683ze3z83zzmsil_ldz00,
					(int) (((long) 0)), (int) (((long) 2)));
				PROCEDURE_SET(BgL_zc3anonymousza32683ze3z83_1209,
					(int) (((long) 0)), BgL_pathz00_15);
				PROCEDURE_SET(BgL_zc3anonymousza32683ze3z83_1209,
					(int) (((long) 1)), BgL_targetz00_14);
				BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00(BgL_targetz00_14,
					BgL_zc3anonymousza32683ze3z83_1209);
			}
			{	/* SawMsil/dnld.scm 202 */
				obj_t BgL_list2686z00_712;

				{	/* SawMsil/dnld.scm 202 */
					obj_t BgL_arg2687z00_713;

					obj_t BgL_arg2688z00_714;

					BgL_arg2687z00_713 = CNST_TABLE_REF(((long) 4));
					{	/* SawMsil/dnld.scm 202 */
						obj_t BgL_arg2689z00_715;

						obj_t BgL_arg2690z00_716;

						BgL_arg2689z00_715 = CNST_TABLE_REF(((long) 5));
						BgL_arg2690z00_716 = MAKE_PAIR(CNST_TABLE_REF(((long) 6)), BNIL);
						BgL_arg2688z00_714 =
							MAKE_PAIR(BgL_arg2689z00_715, BgL_arg2690z00_716);
					}
					BgL_list2686z00_712 =
						MAKE_PAIR(BgL_arg2687z00_713, BgL_arg2688z00_714);
				}
				return BGl_chmodz00zz__osz00(BgL_targetz00_14, BgL_list2686z00_712);
			}
		}
	}



/* _generate-pnet-sh */
	obj_t BGl__generatezd2pnetzd2shz00zzmsil_ldz00(obj_t BgL_envz00_1190,
		obj_t BgL_targetz00_1191, obj_t BgL_pathz00_1192)
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 191 */
			return
				BBOOL(BGl_generatezd2pnetzd2shz00zzmsil_ldz00(BgL_targetz00_1191,
					BgL_pathz00_1192));
		}
	}



/* <anonymous:2683> */
	obj_t BGl_zc3anonymousza32683ze3z83zzmsil_ldz00(obj_t BgL_envz00_1210)
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 193 */
			{	/* SawMsil/dnld.scm 194 */
				obj_t BgL_pathz00_1211;

				obj_t BgL_targetz00_1212;

				BgL_pathz00_1211 = PROCEDURE_REF(BgL_envz00_1210, (int) (((long) 0)));
				BgL_targetz00_1212 = PROCEDURE_REF(BgL_envz00_1210, (int) (((long) 1)));
				{

					{	/* SawMsil/dnld.scm 194 */
						obj_t BgL_port2223z00_706;

						{	/* SawMsil/dnld.scm 194 */
							obj_t BgL_res2791z00_1042;

							{	/* SawMsil/dnld.scm 194 */
								obj_t BgL_auxz00_1538;

								BgL_auxz00_1538 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2791z00_1042 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1538);
							}
							BgL_port2223z00_706 = BgL_res2791z00_1042;
						}
						bgl_display_string(BGl_string2832z00zzmsil_ldz00,
							BgL_port2223z00_706);
						bgl_display_char(((unsigned char) '\n'), BgL_port2223z00_706);
					}
					{	/* SawMsil/dnld.scm 195 */
						obj_t BgL_arg2684z00_707;

						{	/* SawMsil/dnld.scm 195 */
							obj_t BgL_res2792z00_1047;

							{	/* SawMsil/dnld.scm 195 */
								obj_t BgL_auxz00_1543;

								BgL_auxz00_1543 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2792z00_1047 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1543);
							}
							BgL_arg2684z00_707 = BgL_res2792z00_1047;
						}
						bgl_display_char(((unsigned char) '\n'), BgL_arg2684z00_707);
					}
					{	/* SawMsil/dnld.scm 196 */
						obj_t BgL_port2224z00_708;

						{	/* SawMsil/dnld.scm 196 */
							obj_t BgL_res2793z00_1050;

							{	/* SawMsil/dnld.scm 196 */
								obj_t BgL_auxz00_1547;

								BgL_auxz00_1547 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2793z00_1050 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1547);
							}
							BgL_port2224z00_708 = BgL_res2793z00_1050;
						}
						bgl_display_string(BGl_string2833z00zzmsil_ldz00,
							BgL_port2224z00_708);
						bgl_display_obj(BGl_za2dotnetzd2clrza2zd2zzengine_paramz00,
							BgL_port2224z00_708);
						bgl_display_char(((unsigned char) '\n'), BgL_port2224z00_708);
					}
					{	/* SawMsil/dnld.scm 197 */
						obj_t BgL_port2225z00_709;

						{	/* SawMsil/dnld.scm 197 */
							obj_t BgL_res2794z00_1055;

							{	/* SawMsil/dnld.scm 197 */
								obj_t BgL_auxz00_1553;

								BgL_auxz00_1553 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2794z00_1055 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1553);
							}
							BgL_port2225z00_709 = BgL_res2794z00_1055;
						}
						bgl_display_string(BGl_string2834z00zzmsil_ldz00,
							BgL_port2225z00_709);
						bgl_display_obj(BGl_za2dotnetzd2clrzd2optza2z00zzengine_paramz00,
							BgL_port2225z00_709);
						bgl_display_string(BGl_string2835z00zzmsil_ldz00,
							BgL_port2225z00_709);
						bgl_display_string(BGl_string2836z00zzmsil_ldz00,
							BgL_port2225z00_709);
						bgl_display_obj(BgL_pathz00_1211, BgL_port2225z00_709);
						bgl_display_string(BGl_string2830z00zzmsil_ldz00,
							BgL_port2225z00_709);
						bgl_display_obj(BGl_prefixz00zz__osz00(BgL_targetz00_1212),
							BgL_port2225z00_709);
						bgl_display_string(BGl_string2837z00zzmsil_ldz00,
							BgL_port2225z00_709);
						bgl_display_string(BGl_string2838z00zzmsil_ldz00,
							BgL_port2225z00_709);
						return bgl_display_char(((unsigned char) '\n'),
							BgL_port2225z00_709);
		}}}}
	}



/* generate-pnet-msdos */
	bool_t BGl_generatezd2pnetzd2msdosz00zzmsil_ldz00(obj_t BgL_targetz00_16,
		obj_t BgL_pathz00_17)
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 207 */
			{	/* SawMsil/dnld.scm 210 */
				obj_t BgL_zc3anonymousza32692ze3z83_1213;

				BgL_zc3anonymousza32692ze3z83_1213 =
					make_fx_procedure(BGl_zc3anonymousza32692ze3z83zzmsil_ldz00,
					(int) (((long) 0)), (int) (((long) 2)));
				PROCEDURE_SET(BgL_zc3anonymousza32692ze3z83_1213,
					(int) (((long) 0)), BgL_pathz00_17);
				PROCEDURE_SET(BgL_zc3anonymousza32692ze3z83_1213,
					(int) (((long) 1)), BgL_targetz00_16);
				BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00(BgL_targetz00_16,
					BgL_zc3anonymousza32692ze3z83_1213);
			}
			{	/* SawMsil/dnld.scm 215 */
				obj_t BgL_list2695z00_723;

				{	/* SawMsil/dnld.scm 215 */
					obj_t BgL_arg2696z00_724;

					obj_t BgL_arg2697z00_725;

					BgL_arg2696z00_724 = CNST_TABLE_REF(((long) 4));
					{	/* SawMsil/dnld.scm 215 */
						obj_t BgL_arg2698z00_726;

						obj_t BgL_arg2699z00_727;

						BgL_arg2698z00_726 = CNST_TABLE_REF(((long) 5));
						BgL_arg2699z00_727 = MAKE_PAIR(CNST_TABLE_REF(((long) 6)), BNIL);
						BgL_arg2697z00_725 =
							MAKE_PAIR(BgL_arg2698z00_726, BgL_arg2699z00_727);
					}
					BgL_list2695z00_723 =
						MAKE_PAIR(BgL_arg2696z00_724, BgL_arg2697z00_725);
				}
				return BGl_chmodz00zz__osz00(BgL_targetz00_16, BgL_list2695z00_723);
			}
		}
	}



/* _generate-pnet-msdos */
	obj_t BGl__generatezd2pnetzd2msdosz00zzmsil_ldz00(obj_t BgL_envz00_1199,
		obj_t BgL_targetz00_1200, obj_t BgL_pathz00_1201)
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 207 */
			return
				BBOOL(BGl_generatezd2pnetzd2msdosz00zzmsil_ldz00(BgL_targetz00_1200,
					BgL_pathz00_1201));
		}
	}



/* <anonymous:2692> */
	obj_t BGl_zc3anonymousza32692ze3z83zzmsil_ldz00(obj_t BgL_envz00_1214)
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 209 */
			{	/* SawMsil/dnld.scm 210 */
				obj_t BgL_pathz00_1215;

				obj_t BgL_targetz00_1216;

				BgL_pathz00_1215 = PROCEDURE_REF(BgL_envz00_1214, (int) (((long) 0)));
				BgL_targetz00_1216 = PROCEDURE_REF(BgL_envz00_1214, (int) (((long) 1)));
				{

					{	/* SawMsil/dnld.scm 210 */
						obj_t BgL_port2226z00_719;

						{	/* SawMsil/dnld.scm 210 */
							obj_t BgL_res2795z00_1070;

							{	/* SawMsil/dnld.scm 210 */
								obj_t BgL_auxz00_1588;

								BgL_auxz00_1588 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2795z00_1070 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1588);
							}
							BgL_port2226z00_719 = BgL_res2795z00_1070;
						}
						bgl_display_string(BGl_string2839z00zzmsil_ldz00,
							BgL_port2226z00_719);
						bgl_display_obj(BGl_za2dotnetzd2clrza2zd2zzengine_paramz00,
							BgL_port2226z00_719);
						bgl_display_string(BGl_string2815z00zzmsil_ldz00,
							BgL_port2226z00_719);
						bgl_display_obj(BGl_za2dotnetzd2clrzd2optza2z00zzengine_paramz00,
							BgL_port2226z00_719);
						bgl_display_string(BGl_string2840z00zzmsil_ldz00,
							BgL_port2226z00_719);
						bgl_display_string(BGl_string2836z00zzmsil_ldz00,
							BgL_port2226z00_719);
						bgl_display_obj(BGl_uncygdrivez00zztools_miscz00(BgL_pathz00_1215),
							BgL_port2226z00_719);
						bgl_display_string(BGl_string2830z00zzmsil_ldz00,
							BgL_port2226z00_719);
						bgl_display_obj(BGl_prefixz00zz__osz00(BgL_targetz00_1216),
							BgL_port2226z00_719);
						bgl_display_string(BGl_string2809z00zzmsil_ldz00,
							BgL_port2226z00_719);
						bgl_display_string(BGl_string2841z00zzmsil_ldz00,
							BgL_port2226z00_719);
						return bgl_display_char(((unsigned char) '\n'),
							BgL_port2226z00_719);
		}}}}
	}



/* make-mono-ld-command */
	obj_t BGl_makezd2monozd2ldzd2commandzd2zzmsil_ldz00(obj_t BgL_exez00_18,
		obj_t BgL_objectsz00_19, obj_t BgL_pathz00_20, obj_t BgL_libsz00_21)
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 220 */
			{	/* SawMsil/dnld.scm 221 */
				obj_t BgL_lpathz00_728;

				BgL_lpathz00_728 = BGl_loopz00zzmsil_ldz00(BgL_pathz00_20);
				{	/* SawMsil/dnld.scm 228 */
					obj_t BgL_runner2718z00_754;

					{	/* SawMsil/dnld.scm 228 */
						obj_t BgL_arg2703z00_732;

						{	/* SawMsil/dnld.scm 234 */
							obj_t BgL_head2229z00_742;

							BgL_head2229z00_742 = MAKE_PAIR(BNIL, BNIL);
							{
								obj_t BgL_l2227z00_744;

								obj_t BgL_tail2230z00_745;

								BgL_l2227z00_744 = BgL_libsz00_21;
								BgL_tail2230z00_745 = BgL_head2229z00_742;
							BgL_zc3anonymousza32712ze3z83_746:
								if (NULLP(BgL_l2227z00_744))
									{	/* SawMsil/dnld.scm 234 */
										BgL_arg2703z00_732 = CDR(BgL_head2229z00_742);
									}
								else
									{	/* SawMsil/dnld.scm 234 */
										obj_t BgL_newtail2231z00_748;

										BgL_newtail2231z00_748 =
											MAKE_PAIR(string_append(BGl_string2827z00zzmsil_ldz00,
												CAR(BgL_l2227z00_744)), BNIL);
										SET_CDR(BgL_tail2230z00_745, BgL_newtail2231z00_748);
										{
											obj_t BgL_tail2230z00_1616;

											obj_t BgL_l2227z00_1614;

											BgL_l2227z00_1614 = CDR(BgL_l2227z00_744);
											BgL_tail2230z00_1616 = BgL_newtail2231z00_748;
											BgL_tail2230z00_745 = BgL_tail2230z00_1616;
											BgL_l2227z00_744 = BgL_l2227z00_1614;
											goto BgL_zc3anonymousza32712ze3z83_746;
										}
									}
							}
						}
						{	/* SawMsil/dnld.scm 228 */
							obj_t BgL_list2704z00_733;

							{	/* SawMsil/dnld.scm 228 */
								obj_t BgL_arg2705z00_734;

								{	/* SawMsil/dnld.scm 228 */
									obj_t BgL_arg2706z00_735;

									{	/* SawMsil/dnld.scm 228 */
										obj_t BgL_arg2707z00_736;

										{	/* SawMsil/dnld.scm 228 */
											obj_t BgL_arg2708z00_737;

											{	/* SawMsil/dnld.scm 228 */
												obj_t BgL_arg2709z00_738;

												{	/* SawMsil/dnld.scm 228 */
													obj_t BgL_arg2710z00_739;

													BgL_arg2710z00_739 =
														MAKE_PAIR(BgL_arg2703z00_732, BNIL);
													BgL_arg2709z00_738 =
														MAKE_PAIR(BgL_objectsz00_19, BgL_arg2710z00_739);
												}
												BgL_arg2708z00_737 =
													MAKE_PAIR(BGl_string2828z00zzmsil_ldz00,
													BgL_arg2709z00_738);
											}
											BgL_arg2707z00_736 =
												MAKE_PAIR(BgL_exez00_18, BgL_arg2708z00_737);
										}
										BgL_arg2706z00_735 =
											MAKE_PAIR(BGl_string2829z00zzmsil_ldz00,
											BgL_arg2707z00_736);
									}
									BgL_arg2705z00_734 =
										MAKE_PAIR(BgL_lpathz00_728, BgL_arg2706z00_735);
								}
								BgL_list2704z00_733 =
									MAKE_PAIR(BGl_string2815z00zzmsil_ldz00, BgL_arg2705z00_734);
							}
							BgL_runner2718z00_754 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
								(BGl_za2dotnetzd2ldza2zd2zzengine_paramz00,
								BgL_list2704z00_733);
						}
					}
					return
						BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_runner2718z00_754);
				}
			}
		}
	}



/* loop */
	obj_t BGl_loopz00zzmsil_ldz00(obj_t BgL_pathz00_756)
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 221 */
			if (NULLP(BgL_pathz00_756))
				{	/* SawMsil/dnld.scm 222 */
					return BGl_string2816z00zzmsil_ldz00;
				}
			else
				{	/* SawMsil/dnld.scm 224 */
					obj_t BgL_arg2722z00_760;

					obj_t BgL_arg2725z00_762;

					BgL_arg2722z00_760 = CAR(BgL_pathz00_756);
					BgL_arg2725z00_762 = BGl_loopz00zzmsil_ldz00(CDR(BgL_pathz00_756));
					{	/* SawMsil/dnld.scm 224 */
						obj_t BgL_list2726z00_763;

						{	/* SawMsil/dnld.scm 224 */
							obj_t BgL_arg2727z00_764;

							{	/* SawMsil/dnld.scm 224 */
								obj_t BgL_arg2728z00_765;

								{	/* SawMsil/dnld.scm 224 */
									obj_t BgL_arg2729z00_766;

									BgL_arg2729z00_766 = MAKE_PAIR(BgL_arg2725z00_762, BNIL);
									BgL_arg2728z00_765 =
										MAKE_PAIR(BGl_string2830z00zzmsil_ldz00,
										BgL_arg2729z00_766);
								}
								BgL_arg2727z00_764 =
									MAKE_PAIR(BgL_arg2722z00_760, BgL_arg2728z00_765);
							}
							BgL_list2726z00_763 =
								MAKE_PAIR(BGl_string2842z00zzmsil_ldz00, BgL_arg2727z00_764);
						}
						return
							BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list2726z00_763);
					}
				}
		}
	}



/* _make-mono-ld-command */
	obj_t BGl__makezd2monozd2ldzd2commandzd2zzmsil_ldz00(obj_t BgL_envz00_1185,
		obj_t BgL_exez00_1186, obj_t BgL_objectsz00_1187, obj_t BgL_pathz00_1188,
		obj_t BgL_libsz00_1189)
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 220 */
			return
				BGl_makezd2monozd2ldzd2commandzd2zzmsil_ldz00(BgL_exez00_1186,
				BgL_objectsz00_1187, BgL_pathz00_1188, BgL_libsz00_1189);
		}
	}



/* generate-mono-sh */
	bool_t BGl_generatezd2monozd2shz00zzmsil_ldz00(obj_t BgL_targetz00_22,
		obj_t BgL_pathz00_23)
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 239 */
			{	/* SawMsil/dnld.scm 242 */
				obj_t BgL_zc3anonymousza32732ze3z83_1217;

				BgL_zc3anonymousza32732ze3z83_1217 =
					make_fx_procedure(BGl_zc3anonymousza32732ze3z83zzmsil_ldz00,
					(int) (((long) 0)), (int) (((long) 2)));
				PROCEDURE_SET(BgL_zc3anonymousza32732ze3z83_1217,
					(int) (((long) 0)), BgL_pathz00_23);
				PROCEDURE_SET(BgL_zc3anonymousza32732ze3z83_1217,
					(int) (((long) 1)), BgL_targetz00_22);
				BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00(BgL_targetz00_22,
					BgL_zc3anonymousza32732ze3z83_1217);
			}
			{	/* SawMsil/dnld.scm 250 */
				obj_t BgL_list2736z00_778;

				{	/* SawMsil/dnld.scm 250 */
					obj_t BgL_arg2737z00_779;

					obj_t BgL_arg2738z00_780;

					BgL_arg2737z00_779 = CNST_TABLE_REF(((long) 4));
					{	/* SawMsil/dnld.scm 250 */
						obj_t BgL_arg2739z00_781;

						obj_t BgL_arg2740z00_782;

						BgL_arg2739z00_781 = CNST_TABLE_REF(((long) 5));
						BgL_arg2740z00_782 = MAKE_PAIR(CNST_TABLE_REF(((long) 6)), BNIL);
						BgL_arg2738z00_780 =
							MAKE_PAIR(BgL_arg2739z00_781, BgL_arg2740z00_782);
					}
					BgL_list2736z00_778 =
						MAKE_PAIR(BgL_arg2737z00_779, BgL_arg2738z00_780);
				}
				return BGl_chmodz00zz__osz00(BgL_targetz00_22, BgL_list2736z00_778);
			}
		}
	}



/* _generate-mono-sh */
	obj_t BGl__generatezd2monozd2shz00zzmsil_ldz00(obj_t BgL_envz00_1193,
		obj_t BgL_targetz00_1194, obj_t BgL_pathz00_1195)
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 239 */
			return
				BBOOL(BGl_generatezd2monozd2shz00zzmsil_ldz00(BgL_targetz00_1194,
					BgL_pathz00_1195));
		}
	}



/* <anonymous:2732> */
	obj_t BGl_zc3anonymousza32732ze3z83zzmsil_ldz00(obj_t BgL_envz00_1218)
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 241 */
			{	/* SawMsil/dnld.scm 242 */
				obj_t BgL_pathz00_1219;

				obj_t BgL_targetz00_1220;

				BgL_pathz00_1219 = PROCEDURE_REF(BgL_envz00_1218, (int) (((long) 0)));
				BgL_targetz00_1220 = PROCEDURE_REF(BgL_envz00_1218, (int) (((long) 1)));
				{

					{	/* SawMsil/dnld.scm 242 */
						obj_t BgL_port2232z00_771;

						{	/* SawMsil/dnld.scm 242 */
							obj_t BgL_res2796z00_1101;

							{	/* SawMsil/dnld.scm 242 */
								obj_t BgL_auxz00_1658;

								BgL_auxz00_1658 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2796z00_1101 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1658);
							}
							BgL_port2232z00_771 = BgL_res2796z00_1101;
						}
						bgl_display_string(BGl_string2832z00zzmsil_ldz00,
							BgL_port2232z00_771);
						bgl_display_char(((unsigned char) '\n'), BgL_port2232z00_771);
					}
					{	/* SawMsil/dnld.scm 243 */
						obj_t BgL_arg2733z00_772;

						{	/* SawMsil/dnld.scm 243 */
							obj_t BgL_res2797z00_1106;

							{	/* SawMsil/dnld.scm 243 */
								obj_t BgL_auxz00_1663;

								BgL_auxz00_1663 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2797z00_1106 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1663);
							}
							BgL_arg2733z00_772 = BgL_res2797z00_1106;
						}
						bgl_display_char(((unsigned char) '\n'), BgL_arg2733z00_772);
					}
					{	/* SawMsil/dnld.scm 244 */
						obj_t BgL_port2233z00_773;

						{	/* SawMsil/dnld.scm 244 */
							obj_t BgL_res2798z00_1109;

							{	/* SawMsil/dnld.scm 244 */
								obj_t BgL_auxz00_1667;

								BgL_auxz00_1667 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2798z00_1109 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1667);
							}
							BgL_port2233z00_773 = BgL_res2798z00_1109;
						}
						bgl_display_string(BGl_string2833z00zzmsil_ldz00,
							BgL_port2233z00_773);
						bgl_display_obj(BGl_za2dotnetzd2clrza2zd2zzengine_paramz00,
							BgL_port2233z00_773);
						bgl_display_char(((unsigned char) '\n'), BgL_port2233z00_773);
					}
					{	/* SawMsil/dnld.scm 245 */
						obj_t BgL_port2234z00_774;

						{	/* SawMsil/dnld.scm 245 */
							obj_t BgL_res2799z00_1114;

							{	/* SawMsil/dnld.scm 245 */
								obj_t BgL_auxz00_1673;

								BgL_auxz00_1673 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2799z00_1114 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1673);
							}
							BgL_port2234z00_774 = BgL_res2799z00_1114;
						}
						bgl_display_string(BGl_string2843z00zzmsil_ldz00,
							BgL_port2234z00_774);
						bgl_display_obj(BGl_uncygdrivez00zztools_miscz00(BgL_pathz00_1219),
							BgL_port2234z00_774);
						bgl_display_string(BGl_string2844z00zzmsil_ldz00,
							BgL_port2234z00_774);
						bgl_display_obj(BGl_za2dotnetzd2clrzd2optza2z00zzengine_paramz00,
							BgL_port2234z00_774);
						bgl_display_string(BGl_string2835z00zzmsil_ldz00,
							BgL_port2234z00_774);
						bgl_display_obj(BGl_prefixz00zz__osz00(BgL_targetz00_1220),
							BgL_port2234z00_774);
						bgl_display_string(BGl_string2837z00zzmsil_ldz00,
							BgL_port2234z00_774);
						bgl_display_string(BGl_string2838z00zzmsil_ldz00,
							BgL_port2234z00_774);
						return bgl_display_char(((unsigned char) '\n'),
							BgL_port2234z00_774);
		}}}}
	}



/* generate-mono-msdos */
	bool_t BGl_generatezd2monozd2msdosz00zzmsil_ldz00(obj_t BgL_targetz00_24,
		obj_t BgL_pathz00_25)
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 255 */
			{	/* SawMsil/dnld.scm 258 */
				obj_t BgL_zc3anonymousza32742ze3z83_1221;

				BgL_zc3anonymousza32742ze3z83_1221 =
					make_fx_procedure(BGl_zc3anonymousza32742ze3z83zzmsil_ldz00,
					(int) (((long) 0)), (int) (((long) 2)));
				PROCEDURE_SET(BgL_zc3anonymousza32742ze3z83_1221,
					(int) (((long) 0)), BgL_pathz00_25);
				PROCEDURE_SET(BgL_zc3anonymousza32742ze3z83_1221,
					(int) (((long) 1)), BgL_targetz00_24);
				BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00(BgL_targetz00_24,
					BgL_zc3anonymousza32742ze3z83_1221);
			}
			{	/* SawMsil/dnld.scm 265 */
				obj_t BgL_list2747z00_790;

				{	/* SawMsil/dnld.scm 265 */
					obj_t BgL_arg2748z00_791;

					obj_t BgL_arg2749z00_792;

					BgL_arg2748z00_791 = CNST_TABLE_REF(((long) 4));
					{	/* SawMsil/dnld.scm 265 */
						obj_t BgL_arg2750z00_793;

						obj_t BgL_arg2752z00_794;

						BgL_arg2750z00_793 = CNST_TABLE_REF(((long) 5));
						BgL_arg2752z00_794 = MAKE_PAIR(CNST_TABLE_REF(((long) 6)), BNIL);
						BgL_arg2749z00_792 =
							MAKE_PAIR(BgL_arg2750z00_793, BgL_arg2752z00_794);
					}
					BgL_list2747z00_790 =
						MAKE_PAIR(BgL_arg2748z00_791, BgL_arg2749z00_792);
				}
				return BGl_chmodz00zz__osz00(BgL_targetz00_24, BgL_list2747z00_790);
			}
		}
	}



/* _generate-mono-msdos */
	obj_t BGl__generatezd2monozd2msdosz00zzmsil_ldz00(obj_t BgL_envz00_1202,
		obj_t BgL_targetz00_1203, obj_t BgL_pathz00_1204)
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 255 */
			return
				BBOOL(BGl_generatezd2monozd2msdosz00zzmsil_ldz00(BgL_targetz00_1203,
					BgL_pathz00_1204));
		}
	}



/* <anonymous:2742> */
	obj_t BGl_zc3anonymousza32742ze3z83zzmsil_ldz00(obj_t BgL_envz00_1222)
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 257 */
			{	/* SawMsil/dnld.scm 258 */
				obj_t BgL_pathz00_1223;

				obj_t BgL_targetz00_1224;

				BgL_pathz00_1223 = PROCEDURE_REF(BgL_envz00_1222, (int) (((long) 0)));
				BgL_targetz00_1224 = PROCEDURE_REF(BgL_envz00_1222, (int) (((long) 1)));
				{

					{	/* SawMsil/dnld.scm 258 */
						obj_t BgL_port2235z00_785;

						{	/* SawMsil/dnld.scm 258 */
							obj_t BgL_res2800z00_1127;

							{	/* SawMsil/dnld.scm 258 */
								obj_t BgL_auxz00_1708;

								BgL_auxz00_1708 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2800z00_1127 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1708);
							}
							BgL_port2235z00_785 = BgL_res2800z00_1127;
						}
						bgl_display_string(BGl_string2845z00zzmsil_ldz00,
							BgL_port2235z00_785);
						bgl_display_obj(BGl_uncygdrivez00zztools_miscz00
							(BGl_stringzd2replacezd2zz__r4_strings_6_7z00(BgL_pathz00_1223,
									(char) (((unsigned char) '/')),
									(char) (((unsigned char) '\\')))), BgL_port2235z00_785);
						bgl_display_string(BGl_string2846z00zzmsil_ldz00,
							BgL_port2235z00_785);
						bgl_display_string(BGl_string2839z00zzmsil_ldz00,
							BgL_port2235z00_785);
						bgl_display_obj(BGl_za2dotnetzd2clrza2zd2zzengine_paramz00,
							BgL_port2235z00_785);
						bgl_display_string(BGl_string2815z00zzmsil_ldz00,
							BgL_port2235z00_785);
						bgl_display_obj(BGl_za2dotnetzd2clrzd2optza2z00zzengine_paramz00,
							BgL_port2235z00_785);
						bgl_display_string(BGl_string2840z00zzmsil_ldz00,
							BgL_port2235z00_785);
						bgl_display_obj(BGl_prefixz00zz__osz00(BgL_targetz00_1224),
							BgL_port2235z00_785);
						bgl_display_string(BGl_string2837z00zzmsil_ldz00,
							BgL_port2235z00_785);
						bgl_display_string(BGl_string2847z00zzmsil_ldz00,
							BgL_port2235z00_785);
						return bgl_display_char(((unsigned char) '\n'),
							BgL_port2235z00_785);
		}}}}
	}



/* generate-rotor-sh */
	bool_t BGl_generatezd2rotorzd2shz00zzmsil_ldz00(obj_t BgL_targetz00_26,
		obj_t BgL_pathz00_27)
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 270 */
			{	/* SawMsil/dnld.scm 273 */
				obj_t BgL_zc3anonymousza32754ze3z83_1225;

				BgL_zc3anonymousza32754ze3z83_1225 =
					make_fx_procedure(BGl_zc3anonymousza32754ze3z83zzmsil_ldz00,
					(int) (((long) 0)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3anonymousza32754ze3z83_1225,
					(int) (((long) 0)), BgL_targetz00_26);
				BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00(BgL_targetz00_26,
					BgL_zc3anonymousza32754ze3z83_1225);
			}
			{	/* SawMsil/dnld.scm 280 */
				obj_t BgL_list2757z00_803;

				{	/* SawMsil/dnld.scm 280 */
					obj_t BgL_arg2758z00_804;

					obj_t BgL_arg2759z00_805;

					BgL_arg2758z00_804 = CNST_TABLE_REF(((long) 4));
					{	/* SawMsil/dnld.scm 280 */
						obj_t BgL_arg2760z00_806;

						obj_t BgL_arg2761z00_807;

						BgL_arg2760z00_806 = CNST_TABLE_REF(((long) 5));
						BgL_arg2761z00_807 = MAKE_PAIR(CNST_TABLE_REF(((long) 6)), BNIL);
						BgL_arg2759z00_805 =
							MAKE_PAIR(BgL_arg2760z00_806, BgL_arg2761z00_807);
					}
					BgL_list2757z00_803 =
						MAKE_PAIR(BgL_arg2758z00_804, BgL_arg2759z00_805);
				}
				return BGl_chmodz00zz__osz00(BgL_targetz00_26, BgL_list2757z00_803);
			}
		}
	}



/* _generate-rotor-sh */
	obj_t BGl__generatezd2rotorzd2shz00zzmsil_ldz00(obj_t BgL_envz00_1196,
		obj_t BgL_targetz00_1197, obj_t BgL_pathz00_1198)
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 270 */
			return
				BBOOL(BGl_generatezd2rotorzd2shz00zzmsil_ldz00(BgL_targetz00_1197,
					BgL_pathz00_1198));
		}
	}



/* <anonymous:2754> */
	obj_t BGl_zc3anonymousza32754ze3z83zzmsil_ldz00(obj_t BgL_envz00_1226)
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 272 */
			{	/* SawMsil/dnld.scm 273 */
				obj_t BgL_targetz00_1227;

				BgL_targetz00_1227 = PROCEDURE_REF(BgL_envz00_1226, (int) (((long) 0)));
				{

					{	/* SawMsil/dnld.scm 273 */
						obj_t BgL_port2236z00_797;

						{	/* SawMsil/dnld.scm 273 */
							obj_t BgL_res2801z00_1144;

							{	/* SawMsil/dnld.scm 273 */
								obj_t BgL_auxz00_1745;

								BgL_auxz00_1745 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2801z00_1144 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1745);
							}
							BgL_port2236z00_797 = BgL_res2801z00_1144;
						}
						bgl_display_string(BGl_string2832z00zzmsil_ldz00,
							BgL_port2236z00_797);
						bgl_display_char(((unsigned char) '\n'), BgL_port2236z00_797);
					}
					{	/* SawMsil/dnld.scm 274 */
						obj_t BgL_arg2755z00_798;

						{	/* SawMsil/dnld.scm 274 */
							obj_t BgL_res2802z00_1149;

							{	/* SawMsil/dnld.scm 274 */
								obj_t BgL_auxz00_1750;

								BgL_auxz00_1750 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2802z00_1149 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1750);
							}
							BgL_arg2755z00_798 = BgL_res2802z00_1149;
						}
						bgl_display_char(((unsigned char) '\n'), BgL_arg2755z00_798);
					}
					{	/* SawMsil/dnld.scm 275 */
						obj_t BgL_port2237z00_799;

						{	/* SawMsil/dnld.scm 275 */
							obj_t BgL_res2803z00_1152;

							{	/* SawMsil/dnld.scm 275 */
								obj_t BgL_auxz00_1754;

								BgL_auxz00_1754 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2803z00_1152 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1754);
							}
							BgL_port2237z00_799 = BgL_res2803z00_1152;
						}
						bgl_display_string(BGl_string2833z00zzmsil_ldz00,
							BgL_port2237z00_799);
						bgl_display_obj(BGl_za2dotnetzd2clrza2zd2zzengine_paramz00,
							BgL_port2237z00_799);
						bgl_display_char(((unsigned char) '\n'), BgL_port2237z00_799);
					}
					{	/* SawMsil/dnld.scm 276 */
						obj_t BgL_port2238z00_800;

						{	/* SawMsil/dnld.scm 276 */
							obj_t BgL_res2804z00_1157;

							{	/* SawMsil/dnld.scm 276 */
								obj_t BgL_auxz00_1760;

								BgL_auxz00_1760 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2804z00_1157 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1760);
							}
							BgL_port2238z00_800 = BgL_res2804z00_1157;
						}
						bgl_display_string(BGl_string2848z00zzmsil_ldz00,
							BgL_port2238z00_800);
						bgl_display_obj(BGl_za2dotnetzd2clrzd2optza2z00zzengine_paramz00,
							BgL_port2238z00_800);
						bgl_display_string(BGl_string2835z00zzmsil_ldz00,
							BgL_port2238z00_800);
						bgl_display_obj(BGl_prefixz00zz__osz00(BgL_targetz00_1227),
							BgL_port2238z00_800);
						bgl_display_string(BGl_string2837z00zzmsil_ldz00,
							BgL_port2238z00_800);
						bgl_display_string(BGl_string2838z00zzmsil_ldz00,
							BgL_port2238z00_800);
						return bgl_display_char(((unsigned char) '\n'),
							BgL_port2238z00_800);
		}}}}
	}



/* generate-rotor-msdos */
	bool_t BGl_generatezd2rotorzd2msdosz00zzmsil_ldz00(obj_t BgL_targetz00_28,
		obj_t BgL_pathz00_29)
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 285 */
			{	/* SawMsil/dnld.scm 288 */
				obj_t BgL_zc3anonymousza32763ze3z83_1228;

				BgL_zc3anonymousza32763ze3z83_1228 =
					make_fx_procedure(BGl_zc3anonymousza32763ze3z83zzmsil_ldz00,
					(int) (((long) 0)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3anonymousza32763ze3z83_1228,
					(int) (((long) 0)), BgL_targetz00_28);
				BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00(BgL_targetz00_28,
					BgL_zc3anonymousza32763ze3z83_1228);
			}
			{	/* SawMsil/dnld.scm 292 */
				obj_t BgL_list2765z00_813;

				{	/* SawMsil/dnld.scm 292 */
					obj_t BgL_arg2766z00_814;

					obj_t BgL_arg2767z00_815;

					BgL_arg2766z00_814 = CNST_TABLE_REF(((long) 4));
					{	/* SawMsil/dnld.scm 292 */
						obj_t BgL_arg2768z00_816;

						obj_t BgL_arg2769z00_817;

						BgL_arg2768z00_816 = CNST_TABLE_REF(((long) 5));
						BgL_arg2769z00_817 = MAKE_PAIR(CNST_TABLE_REF(((long) 6)), BNIL);
						BgL_arg2767z00_815 =
							MAKE_PAIR(BgL_arg2768z00_816, BgL_arg2769z00_817);
					}
					BgL_list2765z00_813 =
						MAKE_PAIR(BgL_arg2766z00_814, BgL_arg2767z00_815);
				}
				return BGl_chmodz00zz__osz00(BgL_targetz00_28, BgL_list2765z00_813);
			}
		}
	}



/* _generate-rotor-msdos */
	obj_t BGl__generatezd2rotorzd2msdosz00zzmsil_ldz00(obj_t BgL_envz00_1205,
		obj_t BgL_targetz00_1206, obj_t BgL_pathz00_1207)
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 285 */
			return
				BBOOL(BGl_generatezd2rotorzd2msdosz00zzmsil_ldz00(BgL_targetz00_1206,
					BgL_pathz00_1207));
		}
	}



/* <anonymous:2763> */
	obj_t BGl_zc3anonymousza32763ze3z83zzmsil_ldz00(obj_t BgL_envz00_1229)
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 287 */
			{	/* SawMsil/dnld.scm 288 */
				obj_t BgL_targetz00_1230;

				BgL_targetz00_1230 = PROCEDURE_REF(BgL_envz00_1229, (int) (((long) 0)));
				{

					{	/* SawMsil/dnld.scm 288 */
						obj_t BgL_port2239z00_810;

						{	/* SawMsil/dnld.scm 288 */
							obj_t BgL_res2805z00_1168;

							{	/* SawMsil/dnld.scm 288 */
								obj_t BgL_auxz00_1788;

								BgL_auxz00_1788 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2805z00_1168 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1788);
							}
							BgL_port2239z00_810 = BgL_res2805z00_1168;
						}
						bgl_display_string(BGl_string2839z00zzmsil_ldz00,
							BgL_port2239z00_810);
						bgl_display_obj(BGl_za2dotnetzd2clrza2zd2zzengine_paramz00,
							BgL_port2239z00_810);
						bgl_display_string(BGl_string2815z00zzmsil_ldz00,
							BgL_port2239z00_810);
						bgl_display_obj(BGl_za2dotnetzd2clrzd2optza2z00zzengine_paramz00,
							BgL_port2239z00_810);
						bgl_display_string(BGl_string2840z00zzmsil_ldz00,
							BgL_port2239z00_810);
						bgl_display_obj(BGl_prefixz00zz__osz00(BgL_targetz00_1230),
							BgL_port2239z00_810);
						bgl_display_string(BGl_string2837z00zzmsil_ldz00,
							BgL_port2239z00_810);
						bgl_display_string(BGl_string2847z00zzmsil_ldz00,
							BgL_port2239z00_810);
						return bgl_display_char(((unsigned char) '\n'),
							BgL_port2239z00_810);
		}}}}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmsil_ldz00()
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmsil_ldz00()
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmsil_ldz00()
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string2849z00zzmsil_ldz00));
			BGl_modulezd2initializa7ationz75zzengine_configurez00(((long) 96794353),
				BSTRING_TO_STRING(BGl_string2849z00zzmsil_ldz00));
			BGl_modulezd2initializa7ationz75zzengine_linkz00(((long) 392051205),
				BSTRING_TO_STRING(BGl_string2849z00zzmsil_ldz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string2849z00zzmsil_ldz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string2849z00zzmsil_ldz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string2849z00zzmsil_ldz00));
			BGl_modulezd2initializa7ationz75zzread_readerz00(((long) 182269387),
				BSTRING_TO_STRING(BGl_string2849z00zzmsil_ldz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string2849z00zzmsil_ldz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string2849z00zzmsil_ldz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2849z00zzmsil_ldz00));
			BGl_modulezd2initializa7ationz75zzcc_ldz00(((long) 663636),
				BSTRING_TO_STRING(BGl_string2849z00zzmsil_ldz00));
			BGl_modulezd2initializa7ationz75zzcc_execz00(((long) 209072610),
				BSTRING_TO_STRING(BGl_string2849z00zzmsil_ldz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string2849z00zzmsil_ldz00));
		}
	}



/* eval-init */
	obj_t BGl_evalzd2initzd2zzmsil_ldz00()
	{
		AN_OBJECT;
		{	/* SawMsil/dnld.scm 15 */
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 7)),
				__EVMEANING_ADDRESS((BGl_za2dotnetzd2linkersza2zd2zzmsil_ldz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 8)),
				__EVMEANING_ADDRESS((BGl_za2dotnetzd2shzd2clrsza2z00zzmsil_ldz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 9)),
				__EVMEANING_ADDRESS((BGl_za2dotnetzd2msdoszd2clrsza2z00zzmsil_ldz00)));
			return BUNSPEC;
		}
	}

#ifdef __cplusplus
}
#endif
