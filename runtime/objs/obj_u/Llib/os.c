/*===========================================================================*/
/*   (Llib/os.scm)                                                           */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Llib/os.scm -indent -o objs/obj_u/Llib/os.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_pwdz00zz__osz00();
	static obj_t BGl_defaultzd2basenamezd2zz__osz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2defaultzd2javazd2packageza2z00zz__osz00 =
		BUNSPEC;
	BGL_EXPORTED_DECL char *BGl_executablezd2namezd2zz__osz00();
	BGL_EXPORTED_DECL obj_t BGl_getzd2signalzd2handlerz00zz__osz00(int);
	static obj_t BGl__filezd2namezd2unixzd2canonicaliza7ez75zz__osz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_chmodz00zz__osz00(obj_t, obj_t);
	extern bool_t bigloo_strcmp(obj_t, obj_t);
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getpwnamz00zz__osz00(obj_t);
	static obj_t BGl__setuidz00zz__osz00(obj_t, obj_t);
	extern obj_t get_signal_handler(int);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__getuidz00zz__osz00(obj_t);
	extern char *executable_name;
	static obj_t BGl_requirezd2initializa7ationz75zz__osz00 = BUNSPEC;
	static obj_t BGl__oszd2versionzd2zz__osz00(obj_t);
	extern char *bgl_dload_error();
	static obj_t BGl__filezd2namezd2canonicaliza7eza7zz__osz00(obj_t, obj_t);
	extern char *c_date();
	static obj_t BGl_genericzd2initzd2zz__osz00();
	BGL_EXPORTED_DECL obj_t BGl_filezd2namezd2canonicaliza7eza7zz__osz00(obj_t);
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	extern bool_t fexists(char *);
	extern void bgl_sleep(long);
	static obj_t BGl__executablezd2namezd2zz__osz00(obj_t);
	static obj_t BGl__relativezd2filezd2namez00zz__osz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_oszd2namezd2zz__osz00();
	extern obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_oszd2archzd2zz__osz00();
	BGL_EXPORTED_DECL obj_t BGl_signalz00zz__osz00(int, obj_t);
	extern obj_t bigloo_module_mangle(obj_t, obj_t);
	static obj_t BGl__chmodz00zz__osz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_filezd2namezd2ze3listze3zz__osz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_filezd2namezd2unixzd2canonicaliza7ez12z67zz__osz00(obj_t);
	static obj_t BGl__dynamiczd2unloadzd2zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2sharedzd2libzd2namezd2zz__osz00(obj_t,
		obj_t);
	static obj_t BGl__findzd2filezf2pathz20zz__osz00(obj_t, obj_t, obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2staticzd2libzd2namezd2zz__osz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getenvz00zz__osz00(char *);
	static obj_t BGl_mingwzd2basenamezd2zz__osz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_chdirz00zz__osz00(char *);
	static obj_t BGl__dirnamez00zz__osz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__osz00();
	BGL_EXPORTED_DECL obj_t BGl_sharedzd2libraryzd2suffixz00zz__osz00();
	static obj_t BGl_filezd2namezd2canonicaliza7ezd2innerz75zz__osz00(obj_t,
		obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_basenamez00zz__osz00(obj_t);
	static obj_t BGl__filezd2namezd2canonicaliza7ez12zb5zz__osz00(obj_t, obj_t);
	static obj_t BGl__makezd2sharedzd2libzd2namezd2zz__osz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_relativezd2filezd2namez00zz__osz00(obj_t, obj_t);
	static obj_t BGl__dynamiczd2loadzd2zz__osz00(obj_t, obj_t);
	static obj_t BGl_list2655z00zz__osz00 = BUNSPEC;
	static obj_t BGl__makezd2staticzd2libzd2namezd2zz__osz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	static obj_t BGl__makezd2sharedzd2libraryzd2namezd2zz__osz00(obj_t, obj_t);
	static obj_t BGl__getpwnamz00zz__osz00(obj_t, obj_t);
	static obj_t BGl__makezd2filezd2pathz00zz__osz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_filezd2namezd2unixzd2canonicaliza7ez75zz__osz00(obj_t);
	extern obj_t bgl_getpwnam(char *);
	static obj_t BGl_importedzd2moduleszd2initz00zz__osz00();
	static obj_t BGl_mingwzd2dirnamezd2zz__osz00(obj_t);
	static obj_t BGl__putenvz00zz__osz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__filezd2namezd2ze3listze3zz__osz00(obj_t, obj_t);
	static obj_t BGl__systemz00zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_oszd2versionzd2zz__osz00();
	extern obj_t BGl_readzd2stringzd2zz__r4_input_6_10_2z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_defaultzd2scriptzd2namez00zz__osz00();
	static obj_t BGl__defaultzd2scriptzd2namez00zz__osz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dynamiczd2loadzd2zz__osz00(obj_t, obj_t, obj_t);
	static obj_t BGl__oszd2charsetzd2zz__osz00(obj_t);
	static obj_t BGl__pathzd2separatorzd2zz__osz00(obj_t);
	static obj_t BGl__suffixz00zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dynamiczd2unloadzd2zz__osz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_setuidz00zz__osz00(int);
	BGL_EXPORTED_DECL obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	static obj_t BGl__chdirz00zz__osz00(obj_t, obj_t);
	static obj_t BGl__filezd2namezd2unixzd2canonicaliza7ez12z67zz__osz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL int BGl_getuidz00zz__osz00();
	extern obj_t command_line;
	static obj_t BGl__staticzd2libraryzd2suffixz00zz__osz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__osz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t c_substring(obj_t, long, long);
	extern obj_t c_signal(int, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__osz00();
	static obj_t BGl__makezd2staticzd2libraryzd2namezd2zz__osz00(obj_t, obj_t);
	extern bool_t bgl_chmod(char *, bool_t, bool_t, bool_t);
	static obj_t BGl__prefixz00zz__osz00(obj_t, obj_t);
	static obj_t BGl__oszd2tmpzd2zz__osz00(obj_t);
	extern obj_t make_string(long, unsigned char);
	extern int bgl_setenv(char *, char *);
	BGL_EXPORTED_DECL obj_t BGl_makezd2filezd2pathz00zz__osz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__systemzd2ze3stringz31zz__osz00(obj_t, obj_t);
	static obj_t BGl__filezd2separatorzd2zz__osz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_unixzd2pathzd2ze3listze3zz__osz00(obj_t);
	static obj_t BGl_defaultzd2dirnamezd2zz__osz00(obj_t);
	extern obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2dynamiczd2loadzd2pathza2z00zz__osz00 = BUNSPEC;
	static obj_t BGl__basenamez00zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_oszd2classzd2zz__osz00();
	extern obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl__pwdz00zz__osz00(obj_t);
	static obj_t BGl__commandzd2linezd2zz__osz00(obj_t);
	extern obj_t BGl_stringzd2indexzd2rightz00zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_pathzd2separatorzd2zz__osz00();
	extern obj_t blit_string(obj_t, long, obj_t, long, long);
	static obj_t BGl__datez00zz__osz00(obj_t);
	extern obj_t string_to_bstring(char *);
	BGL_EXPORTED_DECL obj_t BGl_getpwuidz00zz__osz00(int);
	BGL_EXPORTED_DECL obj_t BGl_makezd2sharedzd2libraryzd2namezd2zz__osz00(obj_t);
	static obj_t BGl__oszd2namezd2zz__osz00(obj_t);
	static obj_t BGl__oszd2archzd2zz__osz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sleepz00zz__osz00(long);
	static obj_t BGl__unixzd2pathzd2ze3listze3zz__osz00(obj_t, obj_t);
	static obj_t BGl__defaultzd2executablezd2namez00zz__osz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_oszd2charsetzd2zz__osz00();
	static obj_t BGl_symbol2658z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2660z00zz__osz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_commandzd2linezd2zz__osz00();
	BGL_EXPORTED_DECL obj_t BGl_systemzd2ze3stringz31zz__osz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_filezd2separatorzd2zz__osz00();
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3exitza31946ze3z83zz__osz00(obj_t);
	static obj_t BGl_symbol2684z00zz__osz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_putenvz00zz__osz00(char *, char *);
	static obj_t BGl_symbol2686z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2688z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2700z00zz__osz00 = BUNSPEC;
	extern obj_t bgl_close_input_port(obj_t);
	static obj_t BGl_symbol2703z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2694z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2706z00zz__osz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_systemz00zz__osz00(obj_t);
	static obj_t BGl_symbol2697z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2711z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2735z00zz__osz00 = BUNSPEC;
	extern obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dirnamez00zz__osz00(obj_t);
	static obj_t BGl__signalz00zz__osz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_suffixz00zz__osz00(obj_t);
	static obj_t BGl__sharedzd2libraryzd2suffixz00zz__osz00(obj_t);
	static obj_t BGl__makezd2filezd2namez00zz__osz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2staticzd2libraryzd2namezd2zz__osz00(obj_t);
	extern obj_t BGl_warningz00zz__errorz00(obj_t);
	extern int bgl_dunload(obj_t);
	static obj_t BGl__sleepz00zz__osz00(obj_t, obj_t);
	static obj_t BGl__oszd2classzd2zz__osz00(obj_t);
	static obj_t BGl__getenvz00zz__osz00(obj_t, obj_t);
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_defaultzd2executablezd2namez00zz__osz00();
	BGL_EXPORTED_DECL obj_t BGl_prefixz00zz__osz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_oszd2tmpzd2zz__osz00();
	static obj_t BGl__getzd2signalzd2handlerz00zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_staticzd2libraryzd2suffixz00zz__osz00();
	extern int bgl_dload(char *, char *, char *);
	extern int bgl_getuid();
	static obj_t BGl__getpwuidz00zz__osz00(obj_t, obj_t);
	extern obj_t bgl_getpwuid(int);
	static obj_t BGl_methodzd2initzd2zz__osz00();
	BGL_EXPORTED_DECL char *BGl_datez00zz__osz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_dynamiczd2unloadzd2envz00zz__osz00,
		BgL_bgl__dynamicza7d2unloa2743za7, BGl__dynamiczd2unloadzd2zz__osz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2staticzd2libzd2namezd2envz00zz__osz00,
		BgL_bgl__makeza7d2staticza7d2744z00,
		BGl__makezd2staticzd2libzd2namezd2zz__osz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_systemzd2envzd2zz__osz00,
		BgL_bgl__systemza700za7za7__os2745za7, va_generic_entry,
		BGl__systemz00zz__osz00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_getpwuidzd2envzd2zz__osz00,
		BgL_bgl__getpwuidza700za7za7__2746za7, BGl__getpwuidz00zz__osz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2656z00zz__osz00,
		BgL_bgl_string2656za700za7za7_2747za7, ".", 1);
	      DEFINE_STRING(BGl_string2657z00zz__osz00,
		BgL_bgl_string2657za700za7za7_2748za7, "bigloo.foreign", 14);
	      DEFINE_STRING(BGl_string2659z00zz__osz00,
		BgL_bgl_string2659za700za7za7_2749za7, "ignore", 6);
	      DEFINE_STRING(BGl_string2661z00zz__osz00,
		BgL_bgl_string2661za700za7za7_2750za7, "default", 7);
	      DEFINE_STRING(BGl_string2662z00zz__osz00,
		BgL_bgl_string2662za700za7za7_2751za7, "signal", 6);
	      DEFINE_STRING(BGl_string2663z00zz__osz00,
		BgL_bgl_string2663za700za7za7_2752za7, "Illegal signal", 14);
	      DEFINE_STRING(BGl_string2664z00zz__osz00,
		BgL_bgl_string2664za700za7za7_2753za7, "Wrong number of arguments", 25);
	      DEFINE_STRING(BGl_string2665z00zz__osz00,
		BgL_bgl_string2665za700za7za7_2754za7, "/tmp/bigloo/runtime/Llib/os.scm",
		31);
	      DEFINE_STRING(BGl_string2666z00zz__osz00,
		BgL_bgl_string2666za700za7za7_2755za7, "_signal", 7);
	      DEFINE_STRING(BGl_string2667z00zz__osz00,
		BgL_bgl_string2667za700za7za7_2756za7, "int", 3);
	      DEFINE_STRING(BGl_string2668z00zz__osz00,
		BgL_bgl_string2668za700za7za7_2757za7, "_get-signal-handler", 19);
	      DEFINE_STRING(BGl_string2670z00zz__osz00,
		BgL_bgl_string2670za700za7za7_2758za7, "HOME", 4);
	      DEFINE_STRING(BGl_string2669z00zz__osz00,
		BgL_bgl_string2669za700za7za7_2759za7, "win32", 5);
	      DEFINE_STRING(BGl_string2671z00zz__osz00,
		BgL_bgl_string2671za700za7za7_2760za7, "USERPROFILE", 11);
	      DEFINE_STRING(BGl_string2672z00zz__osz00,
		BgL_bgl_string2672za700za7za7_2761za7, "_getenv", 7);
	      DEFINE_STRING(BGl_string2673z00zz__osz00,
		BgL_bgl_string2673za700za7za7_2762za7, "string", 6);
	      DEFINE_STRING(BGl_string2674z00zz__osz00,
		BgL_bgl_string2674za700za7za7_2763za7, "_putenv", 7);
	      DEFINE_STRING(BGl_string2675z00zz__osz00,
		BgL_bgl_string2675za700za7za7_2764za7, "| ", 2);
	      DEFINE_STRING(BGl_string2676z00zz__osz00,
		BgL_bgl_string2676za700za7za7_2765za7, "_chdir", 6);
	      DEFINE_STRING(BGl_string2677z00zz__osz00,
		BgL_bgl_string2677za700za7za7_2766za7, "mingw", 5);
	      DEFINE_STRING(BGl_string2678z00zz__osz00,
		BgL_bgl_string2678za700za7za7_2767za7, "_basename", 9);
	      DEFINE_STRING(BGl_string2680z00zz__osz00,
		BgL_bgl_string2680za700za7za7_2768za7, "_prefix", 7);
	      DEFINE_STRING(BGl_string2679z00zz__osz00,
		BgL_bgl_string2679za700za7za7_2769za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2681z00zz__osz00,
		BgL_bgl_string2681za700za7za7_2770za7, "_dirname", 8);
	      DEFINE_STRING(BGl_string2682z00zz__osz00,
		BgL_bgl_string2682za700za7za7_2771za7, "", 0);
	      DEFINE_STRING(BGl_string2683z00zz__osz00,
		BgL_bgl_string2683za700za7za7_2772za7, "_suffix", 7);
	      DEFINE_STRING(BGl_string2685z00zz__osz00,
		BgL_bgl_string2685za700za7za7_2773za7, "read", 4);
	      DEFINE_STRING(BGl_string2687z00zz__osz00,
		BgL_bgl_string2687za700za7za7_2774za7, "write", 5);
	      DEFINE_STRING(BGl_string2690z00zz__osz00,
		BgL_bgl_string2690za700za7za7_2775za7, "chmod", 5);
	      DEFINE_STRING(BGl_string2689z00zz__osz00,
		BgL_bgl_string2689za700za7za7_2776za7, "execute", 7);
	      DEFINE_STRING(BGl_string2701z00zz__osz00,
		BgL_bgl_string2701za700za7za7_2777za7, "bigloo-jvm", 10);
	      DEFINE_STRING(BGl_string2691z00zz__osz00,
		BgL_bgl_string2691za700za7za7_2778za7, "Unknown mode", 12);
	      DEFINE_STRING(BGl_string2702z00zz__osz00,
		BgL_bgl_string2702za700za7za7_2779za7, ".zip", 4);
	      DEFINE_STRING(BGl_string2692z00zz__osz00,
		BgL_bgl_string2692za700za7za7_2780za7, "_chmod", 6);
	      DEFINE_STRING(BGl_string2693z00zz__osz00,
		BgL_bgl_string2693za700za7za7_2781za7, "_make-file-name", 15);
	      DEFINE_STRING(BGl_string2704z00zz__osz00,
		BgL_bgl_string2704za700za7za7_2782za7, "bigloo-.net", 11);
	      DEFINE_STRING(BGl_string2705z00zz__osz00,
		BgL_bgl_string2705za700za7za7_2783za7, ".dll", 4);
	      DEFINE_STRING(BGl_string2695z00zz__osz00,
		BgL_bgl_string2695za700za7za7_2784za7, "make-file-path", 14);
	      DEFINE_STRING(BGl_string2696z00zz__osz00,
		BgL_bgl_string2696za700za7za7_2785za7, "_make-file-path", 15);
	      DEFINE_STRING(BGl_string2707z00zz__osz00,
		BgL_bgl_string2707za700za7za7_2786za7, "make-static-lib-name", 20);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_oszd2charsetzd2envz00zz__osz00,
		BgL_bgl__osza7d2charsetza7d22787z00, BGl__oszd2charsetzd2zz__osz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2708z00zz__osz00,
		BgL_bgl_string2708za700za7za7_2788za7, "Unknown backend", 15);
	      DEFINE_STRING(BGl_string2698z00zz__osz00,
		BgL_bgl_string2698za700za7za7_2789za7, "bigloo-c", 8);
	      DEFINE_STRING(BGl_string2710z00zz__osz00,
		BgL_bgl_string2710za700za7za7_2790za7, "symbol", 6);
	      DEFINE_STRING(BGl_string2709z00zz__osz00,
		BgL_bgl_string2709za700za7za7_2791za7, "_make-static-lib-name", 21);
	      DEFINE_STRING(BGl_string2699z00zz__osz00,
		BgL_bgl_string2699za700za7za7_2792za7, "lib", 3);
	      DEFINE_STRING(BGl_string2712z00zz__osz00,
		BgL_bgl_string2712za700za7za7_2793za7, "make-shared-lib-name", 20);
	      DEFINE_STRING(BGl_string2713z00zz__osz00,
		BgL_bgl_string2713za700za7za7_2794za7, "_make-shared-lib-name", 21);
	      DEFINE_STRING(BGl_string2714z00zz__osz00,
		BgL_bgl_string2714za700za7za7_2795za7, "_find-file/path", 15);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_relativezd2filezd2namezd2envzd2zz__osz00,
		BgL_bgl__relativeza7d2file2796za7, BGl__relativezd2filezd2namez00zz__osz00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2715z00zz__osz00,
		BgL_bgl_string2715za700za7za7_2797za7, "_file-name->list", 16);
	      DEFINE_STRING(BGl_string2716z00zz__osz00,
		BgL_bgl_string2716za700za7za7_2798za7, "_file-name-canonicalize", 23);
	      DEFINE_STRING(BGl_string2717z00zz__osz00,
		BgL_bgl_string2717za700za7za7_2799za7, "_file-name-canonicalize!", 24);
	      DEFINE_STRING(BGl_string2718z00zz__osz00,
		BgL_bgl_string2718za700za7za7_2800za7, "..", 2);
	      DEFINE_STRING(BGl_string2720z00zz__osz00,
		BgL_bgl_string2720za700za7za7_2801za7, "_file-name-unix-canonicalize!", 29);
	      DEFINE_STRING(BGl_string2719z00zz__osz00,
		BgL_bgl_string2719za700za7za7_2802za7, "_file-name-unix-canonicalize", 28);
	      DEFINE_STRING(BGl_string2721z00zz__osz00,
		BgL_bgl_string2721za700za7za7_2803za7, "_relative-file-name", 19);
	      DEFINE_STRING(BGl_string2722z00zz__osz00,
		BgL_bgl_string2722za700za7za7_2804za7, "_make-static-library-name", 25);
	      DEFINE_STRING(BGl_string2723z00zz__osz00,
		BgL_bgl_string2723za700za7za7_2805za7, "_make-shared-library-name", 25);
	      DEFINE_STRING(BGl_string2724z00zz__osz00,
		BgL_bgl_string2724za700za7za7_2806za7, "_sleep", 6);
	      DEFINE_STRING(BGl_string2725z00zz__osz00,
		BgL_bgl_string2725za700za7za7_2807za7, "long", 4);
	      DEFINE_STRING(BGl_string2726z00zz__osz00,
		BgL_bgl_string2726za700za7za7_2808za7, "_dynamic-load", 13);
	      DEFINE_STRING(BGl_string2727z00zz__osz00,
		BgL_bgl_string2727za700za7za7_2809za7, "module-initialization", 21);
	      DEFINE_STRING(BGl_string2728z00zz__osz00,
		BgL_bgl_string2728za700za7za7_2810za7, "dynamic-load:", 13);
	      DEFINE_STRING(BGl_string2730z00zz__osz00,
		BgL_bgl_string2730za700za7za7_2811za7,
		"Cannot find library init entry point -- ", 40);
	      DEFINE_STRING(BGl_string2729z00zz__osz00,
		BgL_bgl_string2729za700za7za7_2812za7, "dynamic-load: ", 14);
	      DEFINE_STRING(BGl_string2731z00zz__osz00,
		BgL_bgl_string2731za700za7za7_2813za7, "Cannot find library init module",
		31);
	      DEFINE_STRING(BGl_string2732z00zz__osz00,
		BgL_bgl_string2732za700za7za7_2814za7,
		"Cannot find library init entry point", 36);
	      DEFINE_STRING(BGl_string2733z00zz__osz00,
		BgL_bgl_string2733za700za7za7_2815za7, "Not supported on this architecture",
		34);
	      DEFINE_STRING(BGl_string2734z00zz__osz00,
		BgL_bgl_string2734za700za7za7_2816za7, "Can't find library", 18);
	      DEFINE_STRING(BGl_string2736z00zz__osz00,
		BgL_bgl_string2736za700za7za7_2817za7, "dynamic-unload", 14);
	      DEFINE_STRING(BGl_string2737z00zz__osz00,
		BgL_bgl_string2737za700za7za7_2818za7, "_dynamic-unload", 15);
	      DEFINE_STRING(BGl_string2738z00zz__osz00,
		BgL_bgl_string2738za700za7za7_2819za7, "_unix-path->list", 16);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_oszd2versionzd2envz00zz__osz00,
		BgL_bgl__osza7d2versionza7d22820z00, BGl__oszd2versionzd2zz__osz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2740z00zz__osz00,
		BgL_bgl_string2740za700za7za7_2821za7, "_getpwnam", 9);
	      DEFINE_STRING(BGl_string2739z00zz__osz00,
		BgL_bgl_string2739za700za7za7_2822za7, "_setuid", 7);
	      DEFINE_STRING(BGl_string2741z00zz__osz00,
		BgL_bgl_string2741za700za7za7_2823za7, "_getpwuid", 9);
	      DEFINE_STRING(BGl_string2742z00zz__osz00,
		BgL_bgl_string2742za700za7za7_2824za7, "__os", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_defaultzd2executablezd2namezd2envzd2zz__osz00,
		BgL_bgl__defaultza7d2execu2825za7,
		BGl__defaultzd2executablezd2namez00zz__osz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_oszd2namezd2envz00zz__osz00,
		BgL_bgl__osza7d2nameza7d2za7za7_2826z00, BGl__oszd2namezd2zz__osz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pwdzd2envzd2zz__osz00,
		BgL_bgl__pwdza700za7za7__osza7002827z00, BGl__pwdz00zz__osz00, 0L, BUNSPEC,
		0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_filezd2namezd2unixzd2canonicaliza7ezd2envza7zz__osz00,
		BgL_bgl__fileza7d2nameza7d2u2828z00,
		BGl__filezd2namezd2unixzd2canonicaliza7ez75zz__osz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_oszd2archzd2envz00zz__osz00,
		BgL_bgl__osza7d2archza7d2za7za7_2829z00, BGl__oszd2archzd2zz__osz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sharedzd2libraryzd2suffixzd2envzd2zz__osz00,
		BgL_bgl__sharedza7d2librar2830za7,
		BGl__sharedzd2libraryzd2suffixz00zz__osz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_findzd2filezf2pathzd2envzf2zz__osz00,
		BgL_bgl__findza7d2fileza7f2p2831z00, BGl__findzd2filezf2pathz20zz__osz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_dirnamezd2envzd2zz__osz00,
		BgL_bgl__dirnameza700za7za7__o2832za7, BGl__dirnamez00zz__osz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2filezd2pathzd2envzd2zz__osz00,
		BgL_bgl__makeza7d2fileza7d2p2833z00, va_generic_entry,
		BGl__makezd2filezd2pathz00zz__osz00, BUNSPEC, -3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_filezd2namezd2canonicaliza7ezd2envz75zz__osz00,
		BgL_bgl__fileza7d2nameza7d2c2834z00,
		BGl__filezd2namezd2canonicaliza7eza7zz__osz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_defaultzd2scriptzd2namezd2envzd2zz__osz00,
		BgL_bgl__defaultza7d2scrip2835za7, BGl__defaultzd2scriptzd2namez00zz__osz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2sharedzd2libraryzd2namezd2envz00zz__osz00,
		BgL_bgl__makeza7d2sharedza7d2836z00,
		BGl__makezd2sharedzd2libraryzd2namezd2zz__osz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_dynamiczd2loadzd2envz00zz__osz00,
		BgL_bgl__dynamicza7d2loadza72837z00, opt_generic_entry,
		BGl__dynamiczd2loadzd2zz__osz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_filezd2namezd2unixzd2canonicaliza7ez12zd2envzb5zz__osz00,
		BgL_bgl__fileza7d2nameza7d2u2838z00,
		BGl__filezd2namezd2unixzd2canonicaliza7ez12z67zz__osz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_filezd2namezd2ze3listzd2envz31zz__osz00,
		BgL_bgl__fileza7d2nameza7d2za72839za7,
		BGl__filezd2namezd2ze3listze3zz__osz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_getpwnamzd2envzd2zz__osz00,
		BgL_bgl__getpwnamza700za7za7__2840za7, BGl__getpwnamz00zz__osz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_staticzd2libraryzd2suffixzd2envzd2zz__osz00,
		BgL_bgl__staticza7d2librar2841za7,
		BGl__staticzd2libraryzd2suffixz00zz__osz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_putenvzd2envzd2zz__osz00,
		BgL_bgl__putenvza700za7za7__os2842za7, BGl__putenvz00zz__osz00, 0L, BUNSPEC,
		2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_unixzd2pathzd2ze3listzd2envz31zz__osz00,
		BgL_bgl__unixza7d2pathza7d2za72843za7,
		BGl__unixzd2pathzd2ze3listze3zz__osz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_prefixzd2envzd2zz__osz00,
		BgL_bgl__prefixza700za7za7__os2844za7, BGl__prefixz00zz__osz00, 0L, BUNSPEC,
		1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sleepzd2envzd2zz__osz00,
		BgL_bgl__sleepza700za7za7__osza72845z00, BGl__sleepz00zz__osz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_chdirzd2envzd2zz__osz00,
		BgL_bgl__chdirza700za7za7__osza72846z00, BGl__chdirz00zz__osz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_commandzd2linezd2envz00zz__osz00,
		BgL_bgl__commandza7d2lineza72847z00, BGl__commandzd2linezd2zz__osz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_setuidzd2envzd2zz__osz00,
		BgL_bgl__setuidza700za7za7__os2848za7, BGl__setuidz00zz__osz00, 0L, BUNSPEC,
		1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_signalzd2envzd2zz__osz00,
		BgL_bgl__signalza700za7za7__os2849za7, BGl__signalz00zz__osz00, 0L, BUNSPEC,
		2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_datezd2envzd2zz__osz00,
		BgL_bgl__dateza700za7za7__osza702850z00, BGl__datez00zz__osz00, 0L, BUNSPEC,
		0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_oszd2tmpzd2envz00zz__osz00,
		BgL_bgl__osza7d2tmpza7d2za7za7__2851z00, BGl__oszd2tmpzd2zz__osz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_basenamezd2envzd2zz__osz00,
		BgL_bgl__basenameza700za7za7__2852za7, BGl__basenamez00zz__osz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_getenvzd2envzd2zz__osz00,
		BgL_bgl__getenvza700za7za7__os2853za7, BGl__getenvz00zz__osz00, 0L, BUNSPEC,
		1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_filezd2separatorzd2envz00zz__osz00,
		BgL_bgl__fileza7d2separato2854za7, BGl__filezd2separatorzd2zz__osz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2filezd2namezd2envzd2zz__osz00,
		BgL_bgl__makeza7d2fileza7d2n2855z00, BGl__makezd2filezd2namez00zz__osz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2signalzd2handlerzd2envzd2zz__osz00,
		BgL_bgl__getza7d2signalza7d22856z00,
		BGl__getzd2signalzd2handlerz00zz__osz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_chmodzd2envzd2zz__osz00,
		BgL_bgl__chmodza700za7za7__osza72857z00, va_generic_entry,
		BGl__chmodz00zz__osz00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_executablezd2namezd2envz00zz__osz00,
		BgL_bgl__executableza7d2na2858za7, BGl__executablezd2namezd2zz__osz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_getuidzd2envzd2zz__osz00,
		BgL_bgl__getuidza700za7za7__os2859za7, BGl__getuidz00zz__osz00, 0L, BUNSPEC,
		0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2staticzd2libraryzd2namezd2envz00zz__osz00,
		BgL_bgl__makeza7d2staticza7d2860z00,
		BGl__makezd2staticzd2libraryzd2namezd2zz__osz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_filezd2namezd2canonicaliza7ez12zd2envz67zz__osz00,
		BgL_bgl__fileza7d2nameza7d2c2861z00,
		BGl__filezd2namezd2canonicaliza7ez12zb5zz__osz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_systemzd2ze3stringzd2envze3zz__osz00,
		BgL_bgl__systemza7d2za7e3str2862z00, va_generic_entry,
		BGl__systemzd2ze3stringz31zz__osz00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pathzd2separatorzd2envz00zz__osz00,
		BgL_bgl__pathza7d2separato2863za7, BGl__pathzd2separatorzd2zz__osz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2sharedzd2libzd2namezd2envz00zz__osz00,
		BgL_bgl__makeza7d2sharedza7d2864z00,
		BGl__makezd2sharedzd2libzd2namezd2zz__osz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_suffixzd2envzd2zz__osz00,
		BgL_bgl__suffixza700za7za7__os2865za7, BGl__suffixz00zz__osz00, 0L, BUNSPEC,
		1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_oszd2classzd2envz00zz__osz00,
		BgL_bgl__osza7d2classza7d2za7za72866z00, BGl__oszd2classzd2zz__osz00, 0L,
		BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__osz00(long
		BgL_checksumz00_2948, char *BgL_fromz00_2949)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__osz00))
				{
					BGl_requirezd2initializa7ationz75zz__osz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__osz00();
					BGl_importedzd2moduleszd2initz00zz__osz00();
					BGl_toplevelzd2initzd2zz__osz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__osz00()
	{
		AN_OBJECT;
		{	/* Llib/os.scm 18 */
			BGl_list2655z00zz__osz00 = MAKE_PAIR(BGl_string2656z00zz__osz00, BNIL);
			BGl_symbol2658z00zz__osz00 =
				bstring_to_symbol(BGl_string2659z00zz__osz00);
			BGl_symbol2660z00zz__osz00 =
				bstring_to_symbol(BGl_string2661z00zz__osz00);
			BGl_symbol2684z00zz__osz00 =
				bstring_to_symbol(BGl_string2685z00zz__osz00);
			BGl_symbol2686z00zz__osz00 =
				bstring_to_symbol(BGl_string2687z00zz__osz00);
			BGl_symbol2688z00zz__osz00 =
				bstring_to_symbol(BGl_string2689z00zz__osz00);
			BGl_symbol2694z00zz__osz00 =
				bstring_to_symbol(BGl_string2695z00zz__osz00);
			BGl_symbol2697z00zz__osz00 =
				bstring_to_symbol(BGl_string2698z00zz__osz00);
			BGl_symbol2700z00zz__osz00 =
				bstring_to_symbol(BGl_string2701z00zz__osz00);
			BGl_symbol2703z00zz__osz00 =
				bstring_to_symbol(BGl_string2704z00zz__osz00);
			BGl_symbol2706z00zz__osz00 =
				bstring_to_symbol(BGl_string2707z00zz__osz00);
			BGl_symbol2711z00zz__osz00 =
				bstring_to_symbol(BGl_string2712z00zz__osz00);
			return (BGl_symbol2735z00zz__osz00 =
				bstring_to_symbol(BGl_string2736z00zz__osz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__osz00()
	{
		AN_OBJECT;
		{	/* Llib/os.scm 18 */
			BGl_za2dynamiczd2loadzd2pathza2z00zz__osz00 = BGl_list2655z00zz__osz00;
			return (BGl_za2defaultzd2javazd2packageza2z00zz__osz00 =
				BGl_string2657z00zz__osz00, BUNSPEC);
		}
	}



/* default-executable-name */
	BGL_EXPORTED_DEF obj_t BGl_defaultzd2executablezd2namez00zz__osz00()
	{
		AN_OBJECT;
		{	/* Llib/os.scm 208 */
			return string_to_bstring(BGL_DEFAULT_A_OUT);
		}
	}



/* _default-executable-name */
	obj_t BGl__defaultzd2executablezd2namez00zz__osz00(obj_t BgL_envz00_2778)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 208 */
			return BGl_defaultzd2executablezd2namez00zz__osz00();
		}
	}



/* default-script-name */
	BGL_EXPORTED_DEF obj_t BGl_defaultzd2scriptzd2namez00zz__osz00()
	{
		AN_OBJECT;
		{	/* Llib/os.scm 209 */
			return string_to_bstring(BGL_DEFAULT_A_BAT);
		}
	}



/* _default-script-name */
	obj_t BGl__defaultzd2scriptzd2namez00zz__osz00(obj_t BgL_envz00_2779)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 209 */
			return BGl_defaultzd2scriptzd2namez00zz__osz00();
		}
	}



/* os-class */
	BGL_EXPORTED_DEF obj_t BGl_oszd2classzd2zz__osz00()
	{
		AN_OBJECT;
		{	/* Llib/os.scm 210 */
			return string_to_bstring(OS_CLASS);
		}
	}



/* _os-class */
	obj_t BGl__oszd2classzd2zz__osz00(obj_t BgL_envz00_2780)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 210 */
			return BGl_oszd2classzd2zz__osz00();
		}
	}



/* os-name */
	BGL_EXPORTED_DEF obj_t BGl_oszd2namezd2zz__osz00()
	{
		AN_OBJECT;
		{	/* Llib/os.scm 211 */
			return string_to_bstring(OS_NAME);
		}
	}



/* _os-name */
	obj_t BGl__oszd2namezd2zz__osz00(obj_t BgL_envz00_2781)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 211 */
			return BGl_oszd2namezd2zz__osz00();
		}
	}



/* os-arch */
	BGL_EXPORTED_DEF obj_t BGl_oszd2archzd2zz__osz00()
	{
		AN_OBJECT;
		{	/* Llib/os.scm 212 */
			return string_to_bstring(OS_ARCH);
		}
	}



/* _os-arch */
	obj_t BGl__oszd2archzd2zz__osz00(obj_t BgL_envz00_2782)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 212 */
			return BGl_oszd2archzd2zz__osz00();
		}
	}



/* os-version */
	BGL_EXPORTED_DEF obj_t BGl_oszd2versionzd2zz__osz00()
	{
		AN_OBJECT;
		{	/* Llib/os.scm 213 */
			return string_to_bstring(OS_VERSION);
		}
	}



/* _os-version */
	obj_t BGl__oszd2versionzd2zz__osz00(obj_t BgL_envz00_2783)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 213 */
			return BGl_oszd2versionzd2zz__osz00();
		}
	}



/* os-tmp */
	BGL_EXPORTED_DEF obj_t BGl_oszd2tmpzd2zz__osz00()
	{
		AN_OBJECT;
		{	/* Llib/os.scm 214 */
			return string_to_bstring(OS_TMP);
		}
	}



/* _os-tmp */
	obj_t BGl__oszd2tmpzd2zz__osz00(obj_t BgL_envz00_2784)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 214 */
			return BGl_oszd2tmpzd2zz__osz00();
		}
	}



/* os-charset */
	BGL_EXPORTED_DEF obj_t BGl_oszd2charsetzd2zz__osz00()
	{
		AN_OBJECT;
		{	/* Llib/os.scm 215 */
			return string_to_bstring(OS_CHARSET);
		}
	}



/* _os-charset */
	obj_t BGl__oszd2charsetzd2zz__osz00(obj_t BgL_envz00_2785)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 215 */
			return BGl_oszd2charsetzd2zz__osz00();
		}
	}



/* file-separator */
	BGL_EXPORTED_DEF obj_t BGl_filezd2separatorzd2zz__osz00()
	{
		AN_OBJECT;
		{	/* Llib/os.scm 216 */
			return BCHAR(FILE_SEPARATOR);
		}
	}



/* _file-separator */
	obj_t BGl__filezd2separatorzd2zz__osz00(obj_t BgL_envz00_2786)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 216 */
			return BGl_filezd2separatorzd2zz__osz00();
		}
	}



/* path-separator */
	BGL_EXPORTED_DEF obj_t BGl_pathzd2separatorzd2zz__osz00()
	{
		AN_OBJECT;
		{	/* Llib/os.scm 217 */
			return BCHAR(PATH_SEPARATOR);
		}
	}



/* _path-separator */
	obj_t BGl__pathzd2separatorzd2zz__osz00(obj_t BgL_envz00_2787)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 217 */
			return BGl_pathzd2separatorzd2zz__osz00();
		}
	}



/* static-library-suffix */
	BGL_EXPORTED_DEF obj_t BGl_staticzd2libraryzd2suffixz00zz__osz00()
	{
		AN_OBJECT;
		{	/* Llib/os.scm 218 */
			return string_to_bstring(STATIC_LIB_SUFFIX);
		}
	}



/* _static-library-suffix */
	obj_t BGl__staticzd2libraryzd2suffixz00zz__osz00(obj_t BgL_envz00_2788)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 218 */
			return BGl_staticzd2libraryzd2suffixz00zz__osz00();
		}
	}



/* shared-library-suffix */
	BGL_EXPORTED_DEF obj_t BGl_sharedzd2libraryzd2suffixz00zz__osz00()
	{
		AN_OBJECT;
		{	/* Llib/os.scm 219 */
			return string_to_bstring(SHARED_LIB_SUFFIX);
		}
	}



/* _shared-library-suffix */
	obj_t BGl__sharedzd2libraryzd2suffixz00zz__osz00(obj_t BgL_envz00_2789)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 219 */
			return BGl_sharedzd2libraryzd2suffixz00zz__osz00();
		}
	}



/* command-line */
	BGL_EXPORTED_DEF obj_t BGl_commandzd2linezd2zz__osz00()
	{
		AN_OBJECT;
		{	/* Llib/os.scm 224 */
			return command_line;
		}
	}



/* _command-line */
	obj_t BGl__commandzd2linezd2zz__osz00(obj_t BgL_envz00_2790)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 224 */
			return command_line;
		}
	}



/* executable-name */
	BGL_EXPORTED_DEF char *BGl_executablezd2namezd2zz__osz00()
	{
		AN_OBJECT;
		{	/* Llib/os.scm 230 */
			return executable_name;
		}
	}



/* _executable-name */
	obj_t BGl__executablezd2namezd2zz__osz00(obj_t BgL_envz00_2791)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 230 */
			return string_to_bstring(executable_name);
		}
	}



/* signal */
	BGL_EXPORTED_DEF obj_t BGl_signalz00zz__osz00(int BgL_numz00_1,
		obj_t BgL_procz00_2)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 236 */
			if ((BgL_procz00_2 == BGl_symbol2658z00zz__osz00))
				{	/* Llib/os.scm 238 */
					return c_signal(BgL_numz00_1, BTRUE);
				}
			else
				{	/* Llib/os.scm 238 */
					if ((BgL_procz00_2 == BGl_symbol2660z00zz__osz00))
						{	/* Llib/os.scm 240 */
							return c_signal(BgL_numz00_1, BFALSE);
						}
					else
						{	/* Llib/os.scm 242 */
							bool_t BgL_testz00_3000;

							{	/* Llib/os.scm 242 */
								int BgL_arg1918z00_799;

								BgL_arg1918z00_799 = PROCEDURE_ARITY(BgL_procz00_2);
								BgL_testz00_3000 = ((long) (BgL_arg1918z00_799) == ((long) 1));
							}
							if (BgL_testz00_3000)
								{	/* Llib/os.scm 242 */
									if (((long) (BgL_numz00_1) < ((long) 0)))
										{	/* Llib/os.scm 244 */
											return BUNSPEC;
										}
									else
										{	/* Llib/os.scm 244 */
											if (((long) (BgL_numz00_1) > ((long) 31)))
												{	/* Llib/os.scm 246 */
													return
														BGl_errorz00zz__errorz00(BGl_string2662z00zz__osz00,
														BGl_string2663z00zz__osz00, BINT(BgL_numz00_1));
												}
											else
												{	/* Llib/os.scm 246 */
													return c_signal(BgL_numz00_1, BgL_procz00_2);
												}
										}
								}
							else
								{	/* Llib/os.scm 242 */
									return
										BGl_errorz00zz__errorz00(BGl_string2662z00zz__osz00,
										BGl_string2664z00zz__osz00, BgL_procz00_2);
								}
						}
				}
		}
	}



/* _signal */
	obj_t BGl__signalz00zz__osz00(obj_t BgL_envz00_2792, obj_t BgL_numz00_2793,
		obj_t BgL_procz00_2794)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 236 */
			{	/* Llib/os.scm 238 */
				int BgL_auxz00_3014;

				{	/* Llib/os.scm 238 */
					obj_t BgL_auxz00_3015;

					if (INTEGERP(BgL_numz00_2793))
						{	/* Llib/os.scm 238 */
							BgL_auxz00_3015 = BgL_numz00_2793;
						}
					else
						{
							obj_t BgL_auxz00_3018;

							BgL_auxz00_3018 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
								BINT(((long) 9178)), BGl_string2666z00zz__osz00,
								BGl_string2667z00zz__osz00, BgL_numz00_2793);
							FAILURE(BgL_auxz00_3018, BFALSE, BFALSE);
						}
					BgL_auxz00_3014 = CINT(BgL_auxz00_3015);
				}
				return BGl_signalz00zz__osz00(BgL_auxz00_3014, BgL_procz00_2794);
			}
		}
	}



/* get-signal-handler */
	BGL_EXPORTED_DEF obj_t BGl_getzd2signalzd2handlerz00zz__osz00(int
		BgL_numz00_3)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 254 */
			{	/* Llib/os.scm 255 */
				obj_t BgL_vz00_1785;

				BgL_vz00_1785 = get_signal_handler(BgL_numz00_3);
				if ((BgL_vz00_1785 == BTRUE))
					{	/* Llib/os.scm 255 */
						return BGl_symbol2658z00zz__osz00;
					}
				else
					{	/* Llib/os.scm 255 */
						if ((BgL_vz00_1785 == BFALSE))
							{	/* Llib/os.scm 255 */
								return BGl_symbol2660z00zz__osz00;
							}
						else
							{	/* Llib/os.scm 255 */
								return BgL_vz00_1785;
							}
					}
			}
		}
	}



/* _get-signal-handler */
	obj_t BGl__getzd2signalzd2handlerz00zz__osz00(obj_t BgL_envz00_2795,
		obj_t BgL_numz00_2796)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 254 */
			{	/* Llib/os.scm 255 */
				int BgL_auxz00_3029;

				{	/* Llib/os.scm 255 */
					obj_t BgL_auxz00_3030;

					if (INTEGERP(BgL_numz00_2796))
						{	/* Llib/os.scm 255 */
							BgL_auxz00_3030 = BgL_numz00_2796;
						}
					else
						{
							obj_t BgL_auxz00_3033;

							BgL_auxz00_3033 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
								BINT(((long) 9785)), BGl_string2668z00zz__osz00,
								BGl_string2667z00zz__osz00, BgL_numz00_2796);
							FAILURE(BgL_auxz00_3033, BFALSE, BFALSE);
						}
					BgL_auxz00_3029 = CINT(BgL_auxz00_3030);
				}
				return BGl_getzd2signalzd2handlerz00zz__osz00(BgL_auxz00_3029);
			}
		}
	}



/* getenv */
	BGL_EXPORTED_DEF obj_t BGl_getenvz00zz__osz00(char *BgL_stringz00_4)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 264 */
			{	/* Llib/os.scm 265 */
				bool_t BgL_testz00_3039;

				if (bigloo_strcmp(string_to_bstring(OS_CLASS),
						BGl_string2669z00zz__osz00))
					{	/* Llib/os.scm 265 */
						BgL_testz00_3039 =
							bigloo_strcmp(string_to_bstring(BgL_stringz00_4),
							BGl_string2670z00zz__osz00);
					}
				else
					{	/* Llib/os.scm 265 */
						BgL_testz00_3039 = ((bool_t) 0);
					}
				if (BgL_testz00_3039)
					{	/* Llib/os.scm 265 */
						BgL_stringz00_4 = BSTRING_TO_STRING(BGl_string2671z00zz__osz00);
					}
				else
					{	/* Llib/os.scm 265 */
						BFALSE;
					}
			}
			if ((long) getenv(BgL_stringz00_4))
				{	/* Llib/os.scm 269 */
					char *BgL_resultz00_809;

					BgL_resultz00_809 = (char *) getenv(BgL_stringz00_4);
					if (STRING_PTR_NULL(BgL_resultz00_809))
						{	/* Llib/os.scm 270 */
							return BFALSE;
						}
					else
						{	/* Llib/os.scm 270 */
							return string_to_bstring(BgL_resultz00_809);
						}
				}
			else
				{	/* Llib/os.scm 268 */
					return BFALSE;
				}
		}
	}



/* _getenv */
	obj_t BGl__getenvz00zz__osz00(obj_t BgL_envz00_2797, obj_t BgL_stringz00_2798)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 264 */
			{	/* Llib/os.scm 273 */
				char *BgL_auxz00_3052;

				{	/* Llib/os.scm 273 */
					obj_t BgL_auxz00_3053;

					if (STRINGP(BgL_stringz00_2798))
						{	/* Llib/os.scm 273 */
							BgL_auxz00_3053 = BgL_stringz00_2798;
						}
					else
						{
							obj_t BgL_auxz00_3056;

							BgL_auxz00_3056 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
								BINT(((long) 10415)), BGl_string2672z00zz__osz00,
								BGl_string2673z00zz__osz00, BgL_stringz00_2798);
							FAILURE(BgL_auxz00_3056, BFALSE, BFALSE);
						}
					BgL_auxz00_3052 = BSTRING_TO_STRING(BgL_auxz00_3053);
				}
				return BGl_getenvz00zz__osz00(BgL_auxz00_3052);
			}
		}
	}



/* putenv */
	BGL_EXPORTED_DEF obj_t BGl_putenvz00zz__osz00(char *BgL_stringz00_5,
		char *BgL_valz00_6)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 278 */
			{	/* Llib/os.scm 279 */
				bool_t BgL_testz00_3062;

				if (bigloo_strcmp(string_to_bstring(OS_CLASS),
						BGl_string2669z00zz__osz00))
					{	/* Llib/os.scm 279 */
						BgL_testz00_3062 =
							bigloo_strcmp(string_to_bstring(BgL_stringz00_5),
							BGl_string2670z00zz__osz00);
					}
				else
					{	/* Llib/os.scm 279 */
						BgL_testz00_3062 = ((bool_t) 0);
					}
				if (BgL_testz00_3062)
					{	/* Llib/os.scm 279 */
						BgL_stringz00_5 = BSTRING_TO_STRING(BGl_string2671z00zz__osz00);
					}
				else
					{	/* Llib/os.scm 279 */
						BFALSE;
					}
			}
			{	/* Llib/os.scm 282 */
				int BgL_arg1932z00_815;

				BgL_arg1932z00_815 = bgl_setenv(BgL_stringz00_5, BgL_valz00_6);
				return BBOOL(((long) (BgL_arg1932z00_815) == ((long) 0)));
		}}
	}



/* _putenv */
	obj_t BGl__putenvz00zz__osz00(obj_t BgL_envz00_2799, obj_t BgL_stringz00_2800,
		obj_t BgL_valz00_2801)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 278 */
			{	/* Llib/os.scm 282 */
				char *BgL_auxz00_3082;

				char *BgL_auxz00_3073;

				{	/* Llib/os.scm 282 */
					obj_t BgL_auxz00_3083;

					if (STRINGP(BgL_valz00_2801))
						{	/* Llib/os.scm 282 */
							BgL_auxz00_3083 = BgL_valz00_2801;
						}
					else
						{
							obj_t BgL_auxz00_3086;

							BgL_auxz00_3086 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
								BINT(((long) 10816)), BGl_string2674z00zz__osz00,
								BGl_string2673z00zz__osz00, BgL_valz00_2801);
							FAILURE(BgL_auxz00_3086, BFALSE, BFALSE);
						}
					BgL_auxz00_3082 = BSTRING_TO_STRING(BgL_auxz00_3083);
				}
				{	/* Llib/os.scm 282 */
					obj_t BgL_auxz00_3074;

					if (STRINGP(BgL_stringz00_2800))
						{	/* Llib/os.scm 282 */
							BgL_auxz00_3074 = BgL_stringz00_2800;
						}
					else
						{
							obj_t BgL_auxz00_3077;

							BgL_auxz00_3077 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
								BINT(((long) 10816)), BGl_string2674z00zz__osz00,
								BGl_string2673z00zz__osz00, BgL_stringz00_2800);
							FAILURE(BgL_auxz00_3077, BFALSE, BFALSE);
						}
					BgL_auxz00_3073 = BSTRING_TO_STRING(BgL_auxz00_3074);
				}
				return BGl_putenvz00zz__osz00(BgL_auxz00_3073, BgL_auxz00_3082);
			}
		}
	}



/* system */
	BGL_EXPORTED_DEF obj_t BGl_systemz00zz__osz00(obj_t BgL_stringsz00_7)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 287 */
			if (NULLP(BgL_stringsz00_7))
				{	/* Llib/os.scm 289 */
					return BFALSE;
				}
			else
				{	/* Llib/os.scm 289 */
					if (NULLP(CDR(BgL_stringsz00_7)))
						{	/* Llib/os.scm 292 */
							obj_t BgL_arg1938z00_819;

							BgL_arg1938z00_819 = CAR(BgL_stringsz00_7);
							{	/* Llib/os.scm 292 */
								int BgL_auxz00_3098;

								{	/* Llib/os.scm 292 */
									char *BgL_auxz00_3099;

									BgL_auxz00_3099 = BSTRING_TO_STRING(BgL_arg1938z00_819);
									BgL_auxz00_3098 = system(BgL_auxz00_3099);
								}
								return BINT(BgL_auxz00_3098);
							}
						}
					else
						{	/* Llib/os.scm 294 */
							obj_t BgL_arg1940z00_820;

							BgL_arg1940z00_820 =
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_stringsz00_7);
							{	/* Llib/os.scm 294 */
								int BgL_auxz00_3104;

								{	/* Llib/os.scm 294 */
									char *BgL_auxz00_3105;

									BgL_auxz00_3105 = BSTRING_TO_STRING(BgL_arg1940z00_820);
									BgL_auxz00_3104 = system(BgL_auxz00_3105);
								}
								return BINT(BgL_auxz00_3104);
							}
						}
				}
		}
	}



/* _system */
	obj_t BGl__systemz00zz__osz00(obj_t BgL_envz00_2802,
		obj_t BgL_stringsz00_2803)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 287 */
			return BGl_systemz00zz__osz00(BgL_stringsz00_2803);
		}
	}



/* system->string */
	BGL_EXPORTED_DEF obj_t BGl_systemzd2ze3stringz31zz__osz00(obj_t
		BgL_stringsz00_8)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 299 */
			{	/* Llib/os.scm 300 */
				obj_t BgL_pz00_823;

				{	/* Llib/os.scm 300 */
					obj_t BgL_arg1948z00_831;

					{	/* Llib/os.scm 300 */
						obj_t BgL_runner1951z00_835;

						{	/* Llib/os.scm 300 */
							obj_t BgL_list1950z00_834;

							BgL_list1950z00_834 = MAKE_PAIR(BgL_stringsz00_8, BNIL);
							BgL_runner1951z00_835 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
								(BGl_string2675z00zz__osz00, BgL_list1950z00_834);
						}
						BgL_arg1948z00_831 =
							BGl_stringzd2appendzd2zz__r4_strings_6_7z00
							(BgL_runner1951z00_835);
					}
					{	/* Ieee/port.scm 375 */

						BgL_pz00_823 =
							BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
							(BgL_arg1948z00_831, BTRUE);
					}
				}
				{	/* Llib/os.scm 301 */
					obj_t BgL_val1824z00_824;

					BgL_val1824z00_824 = BGl_zc3exitza31946ze3z83zz__osz00(BgL_pz00_823);
					bgl_close_input_port(BgL_pz00_823);
					if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
							(BgL_val1824z00_824)))
						{	/* Llib/os.scm 303 */
							return
								BGl_unwindzd2untilz12zc0zz__bexitz00(CAR(BgL_val1824z00_824),
								CDR(BgL_val1824z00_824));
						}
					else
						{	/* Llib/os.scm 303 */
							return BgL_val1824z00_824;
						}
				}
			}
		}
	}



/* <exit:1946> */
	obj_t BGl_zc3exitza31946ze3z83zz__osz00(obj_t BgL_pz00_2867)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 303 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1825z00_829;

			if (SET_EXIT(BgL_an_exit1825z00_829))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1825z00_829 = (void *) jmpbuf;
					{	/* Llib/os.scm 303 */

						PUSH_EXIT(BgL_an_exit1825z00_829, ((long) 0));
						{	/* Llib/os.scm 302 */
							obj_t BgL_val1826z00_830;

							BgL_val1826z00_830 =
								BGl_readzd2stringzd2zz__r4_input_6_10_2z00(BgL_pz00_2867);
							POP_EXIT();
							return BgL_val1826z00_830;
						}
					}
				}
		}
	}



/* _system->string */
	obj_t BGl__systemzd2ze3stringz31zz__osz00(obj_t BgL_envz00_2804,
		obj_t BgL_stringsz00_2805)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 299 */
			return BGl_systemzd2ze3stringz31zz__osz00(BgL_stringsz00_2805);
		}
	}



/* date */
	BGL_EXPORTED_DEF char *BGl_datez00zz__osz00()
	{
		AN_OBJECT;
		{	/* Llib/os.scm 308 */
			{	/* Llib/os.scm 309 */
				char *BgL_dtz00_836;

				BgL_dtz00_836 = c_date();
				{	/* Llib/os.scm 309 */
					long BgL_lenz00_837;

					BgL_lenz00_837 = STRING_LENGTH(string_to_bstring(BgL_dtz00_836));
					{	/* Llib/os.scm 310 */

						if (
							(STRING_REF(string_to_bstring(BgL_dtz00_836),
									(BgL_lenz00_837 - ((long) 1))) == ((unsigned char) '\n')))
							{	/* Llib/os.scm 312 */
								long BgL_arg1954z00_840;

								BgL_arg1954z00_840 = (BgL_lenz00_837 - ((long) 1));
								{	/* Llib/os.scm 312 */
									obj_t BgL_stringz00_1815;

									BgL_stringz00_1815 = string_to_bstring(BgL_dtz00_836);
									return
										BSTRING_TO_STRING(c_substring(BgL_stringz00_1815,
											((long) 0), BgL_arg1954z00_840));
							}}
						else
							{	/* Llib/os.scm 311 */
								return BgL_dtz00_836;
							}
					}
				}
			}
		}
	}



/* _date */
	obj_t BGl__datez00zz__osz00(obj_t BgL_envz00_2806)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 308 */
			return string_to_bstring(BGl_datez00zz__osz00());
		}
	}



/* chdir */
	BGL_EXPORTED_DEF bool_t BGl_chdirz00zz__osz00(char *BgL_dirnamez00_9)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 318 */
			if (chdir(BgL_dirnamez00_9))
				{	/* Llib/os.scm 319 */
					return ((bool_t) 0);
				}
			else
				{	/* Llib/os.scm 319 */
					return ((bool_t) 1);
				}
		}
	}



/* _chdir */
	obj_t BGl__chdirz00zz__osz00(obj_t BgL_envz00_2807, obj_t BgL_dirnamez00_2808)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 318 */
			{	/* Llib/os.scm 319 */
				bool_t BgL_auxz00_3144;

				{	/* Llib/os.scm 319 */
					char *BgL_dirnamez00_2944;

					{	/* Llib/os.scm 319 */
						obj_t BgL_auxz00_3145;

						if (STRINGP(BgL_dirnamez00_2808))
							{	/* Llib/os.scm 319 */
								BgL_auxz00_3145 = BgL_dirnamez00_2808;
							}
						else
							{
								obj_t BgL_auxz00_3148;

								BgL_auxz00_3148 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
									BINT(((long) 12277)), BGl_string2676z00zz__osz00,
									BGl_string2673z00zz__osz00, BgL_dirnamez00_2808);
								FAILURE(BgL_auxz00_3148, BFALSE, BFALSE);
							}
						BgL_dirnamez00_2944 = BSTRING_TO_STRING(BgL_auxz00_3145);
					}
					if (chdir(BgL_dirnamez00_2944))
						{	/* Llib/os.scm 319 */
							BgL_auxz00_3144 = ((bool_t) 0);
						}
					else
						{	/* Llib/os.scm 319 */
							BgL_auxz00_3144 = ((bool_t) 1);
						}
				}
				return BBOOL(BgL_auxz00_3144);
			}
		}
	}



/* pwd */
	BGL_EXPORTED_DEF obj_t BGl_pwdz00zz__osz00()
	{
		AN_OBJECT;
		{	/* Llib/os.scm 324 */
			{	/* Llib/os.scm 325 */
				obj_t BgL_stringz00_1819;

				BgL_stringz00_1819 = make_string(((long) 1024), ((unsigned char) ' '));
				{	/* Llib/os.scm 325 */
					char *BgL_auxz00_3157;

					{	/* Llib/os.scm 325 */
						int BgL_auxz00_3160;

						char *BgL_auxz00_3158;

						BgL_auxz00_3160 = (int) (((long) 1024));
						BgL_auxz00_3158 = BSTRING_TO_STRING(BgL_stringz00_1819);
						BgL_auxz00_3157 =
							(char *) (long) getcwd(BgL_auxz00_3158, BgL_auxz00_3160);
					}
					return string_to_bstring(BgL_auxz00_3157);
				}
			}
		}
	}



/* _pwd */
	obj_t BGl__pwdz00zz__osz00(obj_t BgL_envz00_2809)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 324 */
			return BGl_pwdz00zz__osz00();
		}
	}



/* basename */
	BGL_EXPORTED_DEF obj_t BGl_basenamez00zz__osz00(obj_t BgL_stringz00_10)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 331 */
			if (bigloo_strcmp(string_to_bstring(OS_CLASS),
					BGl_string2677z00zz__osz00))
				{	/* Llib/os.scm 332 */
					return BGl_mingwzd2basenamezd2zz__osz00(BgL_stringz00_10);
				}
			else
				{	/* Llib/os.scm 332 */
					return BGl_defaultzd2basenamezd2zz__osz00(BgL_stringz00_10);
				}
		}
	}



/* _basename */
	obj_t BGl__basenamez00zz__osz00(obj_t BgL_envz00_2810,
		obj_t BgL_stringz00_2811)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 331 */
			{	/* Llib/os.scm 332 */
				obj_t BgL_auxz00_3170;

				if (STRINGP(BgL_stringz00_2811))
					{	/* Llib/os.scm 332 */
						BgL_auxz00_3170 = BgL_stringz00_2811;
					}
				else
					{
						obj_t BgL_auxz00_3173;

						BgL_auxz00_3173 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
							BINT(((long) 12882)), BGl_string2678z00zz__osz00,
							BGl_string2679z00zz__osz00, BgL_stringz00_2811);
						FAILURE(BgL_auxz00_3173, BFALSE, BFALSE);
					}
				return BGl_basenamez00zz__osz00(BgL_auxz00_3170);
			}
		}
	}



/* mingw-basename */
	obj_t BGl_mingwzd2basenamezd2zz__osz00(obj_t BgL_stringz00_11)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 339 */
			{	/* Llib/os.scm 340 */
				long BgL_nz00_849;

				bool_t BgL_stopz00_850;

				BgL_nz00_849 = STRING_LENGTH(BgL_stringz00_11);
				BgL_stopz00_850 = ((bool_t) 0);
				{
					long BgL_iz00_853;

					BgL_iz00_853 = (BgL_nz00_849 - ((long) 1));
				BgL_zc3anonymousza31963ze3z83_854:
					if ((BBOOL(BgL_stopz00_850) == BTRUE))
						{	/* Llib/os.scm 342 */
							return
								c_substring(BgL_stringz00_11,
								(BgL_iz00_853 + ((long) 2)), BgL_nz00_849);
						}
					else
						{	/* Llib/os.scm 342 */
							if ((BgL_iz00_853 < ((long) 0)))
								{	/* Llib/os.scm 345 */
									BgL_stopz00_850 = ((bool_t) 1);
								}
							else
								{	/* Llib/os.scm 347 */
									bool_t BgL__ortest_1828z00_858;

									BgL__ortest_1828z00_858 =
										(STRING_REF(BgL_stringz00_11,
											BgL_iz00_853) == ((unsigned char) '\\'));
									if (BgL__ortest_1828z00_858)
										{	/* Llib/os.scm 347 */
											BgL_stopz00_850 = BgL__ortest_1828z00_858;
										}
									else
										{	/* Llib/os.scm 347 */
											BgL_stopz00_850 =
												(STRING_REF(BgL_stringz00_11,
													BgL_iz00_853) == ((unsigned char) '/'));
								}}
							{
								long BgL_iz00_3191;

								BgL_iz00_3191 = (BgL_iz00_853 - ((long) 1));
								BgL_iz00_853 = BgL_iz00_3191;
								goto BgL_zc3anonymousza31963ze3z83_854;
							}
						}
				}
			}
		}
	}



/* default-basename */
	obj_t BGl_defaultzd2basenamezd2zz__osz00(obj_t BgL_stringz00_12)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 353 */
			{	/* Llib/os.scm 354 */
				long BgL_lenz00_863;

				BgL_lenz00_863 = (STRING_LENGTH(BgL_stringz00_12) - ((long) 1));
				{	/* Llib/os.scm 354 */
					long BgL_startz00_864;

					{	/* Llib/os.scm 355 */
						bool_t BgL_testz00_3196;

						if ((BgL_lenz00_863 > ((long) 0)))
							{	/* Llib/os.scm 355 */
								BgL_testz00_3196 =
									(STRING_REF(BgL_stringz00_12, BgL_lenz00_863) ==
									(unsigned char) (FILE_SEPARATOR));
							}
						else
							{	/* Llib/os.scm 355 */
								BgL_testz00_3196 = ((bool_t) 0);
							}
						if (BgL_testz00_3196)
							{	/* Llib/os.scm 355 */
								BgL_startz00_864 = (BgL_lenz00_863 - ((long) 1));
							}
						else
							{	/* Llib/os.scm 355 */
								BgL_startz00_864 = BgL_lenz00_863;
							}
					}
					{	/* Llib/os.scm 355 */

						{
							long BgL_indexz00_866;

							BgL_indexz00_866 = BgL_startz00_864;
						BgL_zc3anonymousza31970ze3z83_867:
							if ((BgL_indexz00_866 == ((long) -1)))
								{	/* Llib/os.scm 362 */
									return BgL_stringz00_12;
								}
							else
								{	/* Llib/os.scm 362 */
									if (
										(STRING_REF(BgL_stringz00_12, BgL_indexz00_866) ==
											(unsigned char) (FILE_SEPARATOR)))
										{	/* Llib/os.scm 364 */
											return
												c_substring(BgL_stringz00_12,
												(BgL_indexz00_866 + ((long) 1)),
												(BgL_startz00_864 + ((long) 1)));
										}
									else
										{
											long BgL_indexz00_3212;

											BgL_indexz00_3212 = (BgL_indexz00_866 - ((long) 1));
											BgL_indexz00_866 = BgL_indexz00_3212;
											goto BgL_zc3anonymousza31970ze3z83_867;
										}
								}
						}
					}
				}
			}
		}
	}



/* prefix */
	BGL_EXPORTED_DEF obj_t BGl_prefixz00zz__osz00(obj_t BgL_stringz00_13)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 372 */
			{	/* Llib/os.scm 373 */
				long BgL_lenz00_880;

				BgL_lenz00_880 = (STRING_LENGTH(BgL_stringz00_13) - ((long) 1));
				{
					long BgL_ez00_882;

					long BgL_sz00_883;

					BgL_ez00_882 = BgL_lenz00_880;
					BgL_sz00_883 = BgL_lenz00_880;
				BgL_zc3anonymousza31982ze3z83_884:
					if ((BgL_sz00_883 <= ((long) 0)))
						{	/* Llib/os.scm 377 */
							return
								c_substring(BgL_stringz00_13, ((long) 0),
								(((long) 1) + BgL_ez00_882));
						}
					else
						{	/* Llib/os.scm 380 */
							bool_t BgL_testz00_3220;

							if (
								(BCHAR(STRING_REF(BgL_stringz00_13, BgL_sz00_883)) ==
									BCHAR(((unsigned char) '.'))))
								{	/* Llib/os.scm 380 */
									BgL_testz00_3220 = (BgL_ez00_882 == BgL_lenz00_880);
								}
							else
								{	/* Llib/os.scm 380 */
									BgL_testz00_3220 = ((bool_t) 0);
								}
							if (BgL_testz00_3220)
								{
									long BgL_sz00_3229;

									long BgL_ez00_3227;

									BgL_ez00_3227 = (BgL_sz00_883 - ((long) 1));
									BgL_sz00_3229 = (BgL_sz00_883 - ((long) 1));
									BgL_sz00_883 = BgL_sz00_3229;
									BgL_ez00_882 = BgL_ez00_3227;
									goto BgL_zc3anonymousza31982ze3z83_884;
								}
							else
								{
									long BgL_sz00_3231;

									BgL_sz00_3231 = (BgL_sz00_883 - ((long) 1));
									BgL_sz00_883 = BgL_sz00_3231;
									goto BgL_zc3anonymousza31982ze3z83_884;
								}
						}
				}
			}
		}
	}



/* _prefix */
	obj_t BGl__prefixz00zz__osz00(obj_t BgL_envz00_2812, obj_t BgL_stringz00_2813)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 372 */
			{	/* Llib/os.scm 373 */
				obj_t BgL_auxz00_3233;

				if (STRINGP(BgL_stringz00_2813))
					{	/* Llib/os.scm 373 */
						BgL_auxz00_3233 = BgL_stringz00_2813;
					}
				else
					{
						obj_t BgL_auxz00_3236;

						BgL_auxz00_3236 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
							BINT(((long) 14413)), BGl_string2680z00zz__osz00,
							BGl_string2679z00zz__osz00, BgL_stringz00_2813);
						FAILURE(BgL_auxz00_3236, BFALSE, BFALSE);
					}
				return BGl_prefixz00zz__osz00(BgL_auxz00_3233);
			}
		}
	}



/* dirname */
	BGL_EXPORTED_DEF obj_t BGl_dirnamez00zz__osz00(obj_t BgL_stringz00_14)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 388 */
			if (bigloo_strcmp(string_to_bstring(OS_CLASS),
					BGl_string2677z00zz__osz00))
				{	/* Llib/os.scm 389 */
					return BGl_mingwzd2dirnamezd2zz__osz00(BgL_stringz00_14);
				}
			else
				{	/* Llib/os.scm 389 */
					return BGl_defaultzd2dirnamezd2zz__osz00(BgL_stringz00_14);
				}
		}
	}



/* _dirname */
	obj_t BGl__dirnamez00zz__osz00(obj_t BgL_envz00_2814,
		obj_t BgL_stringz00_2815)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 388 */
			{	/* Llib/os.scm 389 */
				obj_t BgL_auxz00_3246;

				if (STRINGP(BgL_stringz00_2815))
					{	/* Llib/os.scm 389 */
						BgL_auxz00_3246 = BgL_stringz00_2815;
					}
				else
					{
						obj_t BgL_auxz00_3249;

						BgL_auxz00_3249 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
							BINT(((long) 15049)), BGl_string2681z00zz__osz00,
							BGl_string2679z00zz__osz00, BgL_stringz00_2815);
						FAILURE(BgL_auxz00_3249, BFALSE, BFALSE);
					}
				return BGl_dirnamez00zz__osz00(BgL_auxz00_3246);
			}
		}
	}



/* mingw-dirname */
	obj_t BGl_mingwzd2dirnamezd2zz__osz00(obj_t BgL_stringz00_15)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 396 */
			{	/* Llib/os.scm 397 */
				long BgL_nz00_900;

				bool_t BgL_stopz00_901;

				BgL_nz00_900 = STRING_LENGTH(BgL_stringz00_15);
				BgL_stopz00_901 = ((bool_t) 0);
				{
					long BgL_iz00_904;

					BgL_iz00_904 = (BgL_nz00_900 - ((long) 1));
				BgL_zc3anonymousza31999ze3z83_905:
					if ((BBOOL(BgL_stopz00_901) == BTRUE))
						{	/* Llib/os.scm 399 */
							if ((BgL_iz00_904 < ((long) 0)))
								{	/* Llib/os.scm 401 */
									return BGl_string2656z00zz__osz00;
								}
							else
								{	/* Llib/os.scm 401 */
									return
										c_substring(BgL_stringz00_15, ((long) 0),
										(BgL_iz00_904 + ((long) 1)));
						}}
					else
						{	/* Llib/os.scm 399 */
							if ((BgL_iz00_904 < ((long) 0)))
								{	/* Llib/os.scm 404 */
									BgL_stopz00_901 = ((bool_t) 1);
								}
							else
								{	/* Llib/os.scm 406 */
									bool_t BgL__ortest_1830z00_911;

									BgL__ortest_1830z00_911 =
										(STRING_REF(BgL_stringz00_15,
											BgL_iz00_904) == ((unsigned char) '\\'));
									if (BgL__ortest_1830z00_911)
										{	/* Llib/os.scm 406 */
											BgL_stopz00_901 = BgL__ortest_1830z00_911;
										}
									else
										{	/* Llib/os.scm 406 */
											BgL_stopz00_901 =
												(STRING_REF(BgL_stringz00_15,
													BgL_iz00_904) == ((unsigned char) '/'));
								}}
							{
								long BgL_iz00_3269;

								BgL_iz00_3269 = (BgL_iz00_904 - ((long) 1));
								BgL_iz00_904 = BgL_iz00_3269;
								goto BgL_zc3anonymousza31999ze3z83_905;
							}
						}
				}
			}
		}
	}



/* default-dirname */
	obj_t BGl_defaultzd2dirnamezd2zz__osz00(obj_t BgL_stringz00_16)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 412 */
			{	/* Llib/os.scm 413 */
				long BgL_lenz00_916;

				BgL_lenz00_916 = (STRING_LENGTH(BgL_stringz00_16) - ((long) 1));
				if ((BgL_lenz00_916 == ((long) -1)))
					{	/* Llib/os.scm 414 */
						return BGl_string2656z00zz__osz00;
					}
				else
					{
						long BgL_readz00_919;

						BgL_readz00_919 = BgL_lenz00_916;
					BgL_zc3anonymousza32009ze3z83_920:
						if ((BgL_readz00_919 == ((long) 0)))
							{	/* Llib/os.scm 418 */
								if (
									(STRING_REF(BgL_stringz00_16, BgL_readz00_919) ==
										(unsigned char) (FILE_SEPARATOR)))
									{	/* Llib/os.scm 420 */
										obj_t BgL_list2012z00_923;

										BgL_list2012z00_923 =
											MAKE_PAIR(BCHAR(FILE_SEPARATOR), BNIL);
										{	/* Llib/os.scm 420 */
											obj_t BgL_res2560z00_1943;

											{	/* Llib/os.scm 420 */
												obj_t BgL_arg2407z00_1940;

												BgL_arg2407z00_1940 = CAR(BgL_list2012z00_923);
												BgL_res2560z00_1943 =
													make_string(((long) 1), CCHAR(BgL_arg2407z00_1940));
											}
											return BgL_res2560z00_1943;
										}
									}
								else
									{	/* Llib/os.scm 419 */
										return BGl_string2656z00zz__osz00;
									}
							}
						else
							{	/* Llib/os.scm 418 */
								if (
									(STRING_REF(BgL_stringz00_16, BgL_readz00_919) ==
										(unsigned char) (FILE_SEPARATOR)))
									{	/* Llib/os.scm 422 */
										return
											c_substring(BgL_stringz00_16, ((long) 0),
											BgL_readz00_919);
									}
								else
									{
										long BgL_readz00_3292;

										BgL_readz00_3292 = (BgL_readz00_919 - ((long) 1));
										BgL_readz00_919 = BgL_readz00_3292;
										goto BgL_zc3anonymousza32009ze3z83_920;
									}
							}
					}
			}
		}
	}



/* suffix */
	BGL_EXPORTED_DEF obj_t BGl_suffixz00zz__osz00(obj_t BgL_stringz00_17)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 430 */
			{	/* Llib/os.scm 431 */
				long BgL_lenz00_931;

				BgL_lenz00_931 = STRING_LENGTH(BgL_stringz00_17);
				{	/* Llib/os.scm 431 */
					long BgL_lenzd21zd2_932;

					BgL_lenzd21zd2_932 = (BgL_lenz00_931 - ((long) 1));
					{	/* Llib/os.scm 432 */

						{
							long BgL_readz00_934;

							BgL_readz00_934 = BgL_lenzd21zd2_932;
						BgL_zc3anonymousza32019ze3z83_935:
							if ((BgL_readz00_934 < ((long) 0)))
								{	/* Llib/os.scm 435 */
									return BGl_string2682z00zz__osz00;
								}
							else
								{	/* Llib/os.scm 435 */
									if (
										(STRING_REF(BgL_stringz00_17, BgL_readz00_934) ==
											(unsigned char) (FILE_SEPARATOR)))
										{	/* Llib/os.scm 437 */
											return BGl_string2682z00zz__osz00;
										}
									else
										{	/* Llib/os.scm 437 */
											if (
												(STRING_REF(BgL_stringz00_17,
														BgL_readz00_934) == ((unsigned char) '.')))
												{	/* Llib/os.scm 439 */
													if ((BgL_readz00_934 == BgL_lenzd21zd2_932))
														{	/* Llib/os.scm 441 */
															return BGl_string2682z00zz__osz00;
														}
													else
														{	/* Llib/os.scm 441 */
															return
																c_substring(BgL_stringz00_17,
																(BgL_readz00_934 + ((long) 1)), BgL_lenz00_931);
												}}
											else
												{
													long BgL_readz00_3309;

													BgL_readz00_3309 = (BgL_readz00_934 - ((long) 1));
													BgL_readz00_934 = BgL_readz00_3309;
													goto BgL_zc3anonymousza32019ze3z83_935;
												}
										}
								}
						}
					}
				}
			}
		}
	}



/* _suffix */
	obj_t BGl__suffixz00zz__osz00(obj_t BgL_envz00_2816, obj_t BgL_stringz00_2817)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 430 */
			{	/* Llib/os.scm 431 */
				obj_t BgL_auxz00_3311;

				if (STRINGP(BgL_stringz00_2817))
					{	/* Llib/os.scm 431 */
						BgL_auxz00_3311 = BgL_stringz00_2817;
					}
				else
					{
						obj_t BgL_auxz00_3314;

						BgL_auxz00_3314 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
							BINT(((long) 16574)), BGl_string2683z00zz__osz00,
							BGl_string2679z00zz__osz00, BgL_stringz00_2817);
						FAILURE(BgL_auxz00_3314, BFALSE, BFALSE);
					}
				return BGl_suffixz00zz__osz00(BgL_auxz00_3311);
			}
		}
	}



/* chmod */
	BGL_EXPORTED_DEF bool_t BGl_chmodz00zz__osz00(obj_t BgL_filez00_18,
		obj_t BgL_modez00_19)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 451 */
			{
				obj_t BgL_modez00_946;

				bool_t BgL_readzf3zf3_947;

				bool_t BgL_writezf3zf3_948;

				bool_t BgL_execzf3zf3_949;

				{	/* Llib/os.scm 452 */
					obj_t BgL_auxz00_3319;

					BgL_modez00_946 = BgL_modez00_19;
					BgL_readzf3zf3_947 = ((bool_t) 0);
					BgL_writezf3zf3_948 = ((bool_t) 0);
					BgL_execzf3zf3_949 = ((bool_t) 0);
				BgL_zc3anonymousza32029ze3z83_950:
					if (NULLP(BgL_modez00_946))
						{	/* Llib/os.scm 457 */
							BgL_auxz00_3319 =
								BBOOL(bgl_chmod(BSTRING_TO_STRING(BgL_filez00_18),
									BgL_readzf3zf3_947, BgL_writezf3zf3_948, BgL_execzf3zf3_949));
						}
					else
						{	/* Llib/os.scm 457 */
							if (INTEGERP(CAR(BgL_modez00_946)))
								{	/* Llib/os.scm 460 */
									obj_t BgL_arg2033z00_953;

									BgL_arg2033z00_953 = CAR(BgL_modez00_946);
									{	/* Llib/os.scm 460 */
										bool_t BgL_auxz00_3329;

										{	/* Llib/os.scm 460 */
											int BgL_auxz00_3332;

											char *BgL_auxz00_3330;

											BgL_auxz00_3332 = CINT(BgL_arg2033z00_953);
											BgL_auxz00_3330 = BSTRING_TO_STRING(BgL_filez00_18);
											BgL_auxz00_3329 = chmod(BgL_auxz00_3330, BgL_auxz00_3332);
										}
										BgL_auxz00_3319 = BBOOL(BgL_auxz00_3329);
								}}
							else
								{	/* Llib/os.scm 459 */
									if ((CAR(BgL_modez00_946) == BGl_symbol2684z00zz__osz00))
										{
											bool_t BgL_readzf3zf3_3341;

											obj_t BgL_modez00_3339;

											BgL_modez00_3339 = CDR(BgL_modez00_946);
											BgL_readzf3zf3_3341 = ((bool_t) 1);
											BgL_readzf3zf3_947 = BgL_readzf3zf3_3341;
											BgL_modez00_946 = BgL_modez00_3339;
											goto BgL_zc3anonymousza32029ze3z83_950;
										}
									else
										{	/* Llib/os.scm 461 */
											if ((CAR(BgL_modez00_946) == BGl_symbol2686z00zz__osz00))
												{
													bool_t BgL_writezf3zf3_3347;

													obj_t BgL_modez00_3345;

													BgL_modez00_3345 = CDR(BgL_modez00_946);
													BgL_writezf3zf3_3347 = ((bool_t) 1);
													BgL_writezf3zf3_948 = BgL_writezf3zf3_3347;
													BgL_modez00_946 = BgL_modez00_3345;
													goto BgL_zc3anonymousza32029ze3z83_950;
												}
											else
												{	/* Llib/os.scm 466 */
													if (
														(CAR(BgL_modez00_946) ==
															BGl_symbol2688z00zz__osz00))
														{
															bool_t BgL_execzf3zf3_3353;

															obj_t BgL_modez00_3351;

															BgL_modez00_3351 = CDR(BgL_modez00_946);
															BgL_execzf3zf3_3353 = ((bool_t) 1);
															BgL_execzf3zf3_949 = BgL_execzf3zf3_3353;
															BgL_modez00_946 = BgL_modez00_3351;
															goto BgL_zc3anonymousza32029ze3z83_950;
														}
													else
														{	/* Llib/os.scm 471 */
															BgL_auxz00_3319 =
																BGl_errorz00zz__errorz00
																(BGl_string2690z00zz__osz00,
																BGl_string2691z00zz__osz00, BgL_modez00_946);
														}
												}
										}
								}
						}
					return CBOOL(BgL_auxz00_3319);
				}
			}
		}
	}



/* _chmod */
	obj_t BGl__chmodz00zz__osz00(obj_t BgL_envz00_2818, obj_t BgL_filez00_2819,
		obj_t BgL_modez00_2820)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 451 */
			{	/* Llib/os.scm 457 */
				bool_t BgL_auxz00_3356;

				{	/* Llib/os.scm 457 */
					obj_t BgL_auxz00_3357;

					if (STRINGP(BgL_filez00_2819))
						{	/* Llib/os.scm 457 */
							BgL_auxz00_3357 = BgL_filez00_2819;
						}
					else
						{
							obj_t BgL_auxz00_3360;

							BgL_auxz00_3360 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
								BINT(((long) 17426)), BGl_string2692z00zz__osz00,
								BGl_string2679z00zz__osz00, BgL_filez00_2819);
							FAILURE(BgL_auxz00_3360, BFALSE, BFALSE);
						}
					BgL_auxz00_3356 =
						BGl_chmodz00zz__osz00(BgL_auxz00_3357, BgL_modez00_2820);
				}
				return BBOOL(BgL_auxz00_3356);
			}
		}
	}



/* make-file-name */
	BGL_EXPORTED_DEF obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t
		BgL_directoryz00_20, obj_t BgL_filez00_21)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 485 */
			{
				long BgL_ldirz00_979;

				{	/* Llib/os.scm 493 */
					long BgL_ldirz00_969;

					BgL_ldirz00_969 = STRING_LENGTH(BgL_directoryz00_20);
					{	/* Llib/os.scm 493 */

						if ((BgL_ldirz00_969 == ((long) 1)))
							{	/* Llib/os.scm 494 */
								if (
									(STRING_REF(BgL_directoryz00_20,
											((long) 0)) == ((unsigned char) '.')))
									{	/* Llib/os.scm 496 */
										return BgL_filez00_21;
									}
								else
									{	/* Llib/os.scm 496 */
										if (
											(STRING_REF(BgL_directoryz00_20, ((long) 0)) ==
												(unsigned char) (FILE_SEPARATOR)))
											{	/* Llib/os.scm 499 */
												long BgL_lfilez00_973;

												BgL_lfilez00_973 = STRING_LENGTH(BgL_filez00_21);
												{	/* Llib/os.scm 499 */
													long BgL_lenz00_974;

													BgL_lenz00_974 = (BgL_ldirz00_969 + BgL_lfilez00_973);
													{	/* Llib/os.scm 500 */
														obj_t BgL_strz00_975;

														{	/* Llib/os.scm 501 */
															obj_t BgL_list2051z00_976;

															BgL_list2051z00_976 =
																MAKE_PAIR(BCHAR(FILE_SEPARATOR), BNIL);
															{	/* Llib/os.scm 501 */
																obj_t BgL_res2561z00_2005;

																{	/* Llib/os.scm 501 */
																	obj_t BgL_arg2407z00_2002;

																	BgL_arg2407z00_2002 =
																		CAR(BgL_list2051z00_976);
																	BgL_res2561z00_2005 =
																		make_string(BgL_lenz00_974,
																		CCHAR(BgL_arg2407z00_2002));
																}
																BgL_strz00_975 = BgL_res2561z00_2005;
														}}
														{	/* Llib/os.scm 501 */

															blit_string(BgL_directoryz00_20, ((long) 0),
																BgL_strz00_975, ((long) 0), BgL_ldirz00_969);
															blit_string(BgL_filez00_21, ((long) 0),
																BgL_strz00_975, BgL_ldirz00_969,
																BgL_lfilez00_973);
															return BgL_strz00_975;
														}
													}
												}
											}
										else
											{	/* Llib/os.scm 498 */
												BgL_ldirz00_979 = BgL_ldirz00_969;
											BgL_zc3anonymousza32054ze3z83_980:
												{	/* Llib/os.scm 487 */
													long BgL_lfilez00_981;

													BgL_lfilez00_981 = STRING_LENGTH(BgL_filez00_21);
													{	/* Llib/os.scm 487 */
														long BgL_lenz00_982;

														BgL_lenz00_982 =
															(BgL_ldirz00_979 +
															(BgL_lfilez00_981 + ((long) 1)));
														{	/* Llib/os.scm 488 */
															obj_t BgL_strz00_983;

															{	/* Llib/os.scm 489 */
																obj_t BgL_list2057z00_986;

																BgL_list2057z00_986 =
																	MAKE_PAIR(BCHAR(FILE_SEPARATOR), BNIL);
																{	/* Llib/os.scm 489 */
																	obj_t BgL_res2562z00_2027;

																	{	/* Llib/os.scm 489 */
																		obj_t BgL_arg2407z00_2024;

																		BgL_arg2407z00_2024 =
																			CAR(BgL_list2057z00_986);
																		BgL_res2562z00_2027 =
																			make_string(BgL_lenz00_982,
																			CCHAR(BgL_arg2407z00_2024));
																	}
																	BgL_strz00_983 = BgL_res2562z00_2027;
															}}
															{	/* Llib/os.scm 489 */

																blit_string(BgL_directoryz00_20, ((long) 0),
																	BgL_strz00_983, ((long) 0), BgL_ldirz00_979);
																blit_string(BgL_filez00_21, ((long) 0),
																	BgL_strz00_983,
																	(((long) 1) + BgL_ldirz00_979),
																	BgL_lfilez00_981);
																return BgL_strz00_983;
															}
														}
													}
												}
											}
									}
							}
						else
							{
								long BgL_ldirz00_3396;

								BgL_ldirz00_3396 = BgL_ldirz00_969;
								BgL_ldirz00_979 = BgL_ldirz00_3396;
								goto BgL_zc3anonymousza32054ze3z83_980;
							}
					}
				}
			}
		}
	}



/* _make-file-name */
	obj_t BGl__makezd2filezd2namez00zz__osz00(obj_t BgL_envz00_2821,
		obj_t BgL_directoryz00_2822, obj_t BgL_filez00_2823)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 485 */
			{	/* Llib/os.scm 487 */
				obj_t BgL_auxz00_3404;

				obj_t BgL_auxz00_3397;

				if (STRINGP(BgL_filez00_2823))
					{	/* Llib/os.scm 487 */
						BgL_auxz00_3404 = BgL_filez00_2823;
					}
				else
					{
						obj_t BgL_auxz00_3407;

						BgL_auxz00_3407 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
							BINT(((long) 18340)), BGl_string2693z00zz__osz00,
							BGl_string2679z00zz__osz00, BgL_filez00_2823);
						FAILURE(BgL_auxz00_3407, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_directoryz00_2822))
					{	/* Llib/os.scm 487 */
						BgL_auxz00_3397 = BgL_directoryz00_2822;
					}
				else
					{
						obj_t BgL_auxz00_3400;

						BgL_auxz00_3400 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
							BINT(((long) 18340)), BGl_string2693z00zz__osz00,
							BGl_string2679z00zz__osz00, BgL_directoryz00_2822);
						FAILURE(BgL_auxz00_3400, BFALSE, BFALSE);
					}
				return
					BGl_makezd2filezd2namez00zz__osz00(BgL_auxz00_3397, BgL_auxz00_3404);
			}
		}
	}



/* make-file-path */
	BGL_EXPORTED_DEF obj_t BGl_makezd2filezd2pathz00zz__osz00(obj_t
		BgL_directoryz00_22, obj_t BgL_filez00_23, obj_t BgL_objz00_24)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 515 */
			{	/* Llib/os.scm 516 */
				bool_t BgL_testz00_3412;

				if ((STRING_LENGTH(BgL_directoryz00_22) == ((long) 0)))
					{	/* Llib/os.scm 516 */
						BgL_testz00_3412 = NULLP(BgL_objz00_24);
					}
				else
					{	/* Llib/os.scm 516 */
						BgL_testz00_3412 = ((bool_t) 0);
					}
				if (BgL_testz00_3412)
					{	/* Llib/os.scm 516 */
						return BgL_filez00_23;
					}
				else
					{	/* Llib/os.scm 518 */
						long BgL_ldirz00_990;

						BgL_ldirz00_990 = STRING_LENGTH(BgL_directoryz00_22);
						{	/* Llib/os.scm 518 */
							long BgL_lfilez00_991;

							BgL_lfilez00_991 = STRING_LENGTH(BgL_filez00_23);
							{	/* Llib/os.scm 519 */
								obj_t BgL_lenz00_992;

								{	/* Llib/os.scm 520 */
									long BgL_g1831z00_1014;

									BgL_g1831z00_1014 =
										(BgL_ldirz00_990 + (((long) 1) + BgL_lfilez00_991));
									{
										obj_t BgL_objz00_1016;

										long BgL_lz00_1017;

										BgL_objz00_1016 = BgL_objz00_24;
										BgL_lz00_1017 = BgL_g1831z00_1014;
									BgL_zc3anonymousza32075ze3z83_1018:
										if (NULLP(BgL_objz00_1016))
											{	/* Llib/os.scm 523 */
												BgL_lenz00_992 = BINT(BgL_lz00_1017);
											}
										else
											{	/* Llib/os.scm 525 */
												bool_t BgL_testz00_3424;

												{	/* Llib/os.scm 525 */
													obj_t BgL_auxz00_3425;

													BgL_auxz00_3425 = CAR(BgL_objz00_1016);
													BgL_testz00_3424 = STRINGP(BgL_auxz00_3425);
												}
												if (BgL_testz00_3424)
													{
														long BgL_lz00_3430;

														obj_t BgL_objz00_3428;

														BgL_objz00_3428 = CDR(BgL_objz00_1016);
														BgL_lz00_3430 =
															(((long) 1) +
															(STRING_LENGTH(CAR(BgL_objz00_1016)) +
																BgL_lz00_1017));
														BgL_lz00_1017 = BgL_lz00_3430;
														BgL_objz00_1016 = BgL_objz00_3428;
														goto BgL_zc3anonymousza32075ze3z83_1018;
													}
												else
													{	/* Llib/os.scm 525 */
														BgL_lenz00_992 =
															BGl_bigloozd2typezd2errorz00zz__errorz00
															(BGl_symbol2694z00zz__osz00,
															BGl_string2673z00zz__osz00, CAR(BgL_objz00_1016));
													}
											}
									}
								}
								{	/* Llib/os.scm 520 */
									obj_t BgL_strz00_993;

									{	/* Llib/os.scm 533 */
										obj_t BgL_list2074z00_1013;

										BgL_list2074z00_1013 =
											MAKE_PAIR(BCHAR(FILE_SEPARATOR), BNIL);
										{	/* Llib/os.scm 533 */
											obj_t BgL_res2563z00_2067;

											{	/* Llib/os.scm 533 */
												long BgL_kz00_2061;

												BgL_kz00_2061 = (long) CINT(BgL_lenz00_992);
												{	/* Llib/os.scm 533 */
													obj_t BgL_arg2407z00_2064;

													BgL_arg2407z00_2064 = CAR(BgL_list2074z00_1013);
													BgL_res2563z00_2067 =
														make_string(BgL_kz00_2061,
														CCHAR(BgL_arg2407z00_2064));
											}}
											BgL_strz00_993 = BgL_res2563z00_2067;
									}}
									{	/* Llib/os.scm 533 */

										blit_string(BgL_directoryz00_22, ((long) 0), BgL_strz00_993,
											((long) 0), BgL_ldirz00_990);
										blit_string(BgL_filez00_23, ((long) 0), BgL_strz00_993,
											(((long) 1) + BgL_ldirz00_990), BgL_lfilez00_991);
										{	/* Llib/os.scm 536 */
											long BgL_g1832z00_996;

											BgL_g1832z00_996 =
												(((long) 1) + (BgL_ldirz00_990 + BgL_lfilez00_991));
											{
												obj_t BgL_objz00_998;

												long BgL_wz00_999;

												BgL_objz00_998 = BgL_objz00_24;
												BgL_wz00_999 = BgL_g1832z00_996;
											BgL_zc3anonymousza32062ze3z83_1000:
												if (NULLP(BgL_objz00_998))
													{	/* Llib/os.scm 538 */
														return BgL_strz00_993;
													}
												else
													{	/* Llib/os.scm 540 */
														long BgL_loz00_1002;

														BgL_loz00_1002 = STRING_LENGTH(CAR(BgL_objz00_998));
														blit_string(CAR(BgL_objz00_998), ((long) 0),
															BgL_strz00_993, (((long) 1) + BgL_wz00_999),
															BgL_loz00_1002);
														{
															long BgL_wz00_3457;

															obj_t BgL_objz00_3455;

															BgL_objz00_3455 = CDR(BgL_objz00_998);
															BgL_wz00_3457 =
																(BgL_wz00_999 + (BgL_loz00_1002 + ((long) 1)));
															BgL_wz00_999 = BgL_wz00_3457;
															BgL_objz00_998 = BgL_objz00_3455;
															goto BgL_zc3anonymousza32062ze3z83_1000;
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



/* _make-file-path */
	obj_t BGl__makezd2filezd2pathz00zz__osz00(obj_t BgL_envz00_2824,
		obj_t BgL_directoryz00_2825, obj_t BgL_filez00_2826, obj_t BgL_objz00_2827)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 515 */
			{	/* Llib/os.scm 516 */
				obj_t BgL_auxz00_3467;

				obj_t BgL_auxz00_3460;

				if (STRINGP(BgL_filez00_2826))
					{	/* Llib/os.scm 516 */
						BgL_auxz00_3467 = BgL_filez00_2826;
					}
				else
					{
						obj_t BgL_auxz00_3470;

						BgL_auxz00_3470 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
							BINT(((long) 19559)), BGl_string2696z00zz__osz00,
							BGl_string2679z00zz__osz00, BgL_filez00_2826);
						FAILURE(BgL_auxz00_3470, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_directoryz00_2825))
					{	/* Llib/os.scm 516 */
						BgL_auxz00_3460 = BgL_directoryz00_2825;
					}
				else
					{
						obj_t BgL_auxz00_3463;

						BgL_auxz00_3463 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
							BINT(((long) 19559)), BGl_string2696z00zz__osz00,
							BGl_string2679z00zz__osz00, BgL_directoryz00_2825);
						FAILURE(BgL_auxz00_3463, BFALSE, BFALSE);
					}
				return
					BGl_makezd2filezd2pathz00zz__osz00(BgL_auxz00_3460, BgL_auxz00_3467,
					BgL_objz00_2827);
			}
		}
	}



/* make-static-lib-name */
	BGL_EXPORTED_DEF obj_t BGl_makezd2staticzd2libzd2namezd2zz__osz00(obj_t
		BgL_libz00_25, obj_t BgL_backendz00_26)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 547 */
			if ((BgL_backendz00_26 == BGl_symbol2697z00zz__osz00))
				{	/* Llib/os.scm 548 */
					if (bigloo_strcmp(string_to_bstring(OS_CLASS),
							BGl_string2669z00zz__osz00))
						{	/* Llib/os.scm 550 */
							return
								string_append_3(BgL_libz00_25, BGl_string2656z00zz__osz00,
								string_to_bstring(STATIC_LIB_SUFFIX));
						}
					else
						{	/* Llib/os.scm 552 */
							obj_t BgL_list2096z00_1039;

							{	/* Llib/os.scm 552 */
								obj_t BgL_arg2098z00_1041;

								{	/* Llib/os.scm 552 */
									obj_t BgL_arg2099z00_1042;

									{	/* Llib/os.scm 552 */
										obj_t BgL_arg2101z00_1044;

										BgL_arg2101z00_1044 =
											MAKE_PAIR(string_to_bstring(STATIC_LIB_SUFFIX), BNIL);
										BgL_arg2099z00_1042 =
											MAKE_PAIR(BGl_string2656z00zz__osz00,
											BgL_arg2101z00_1044);
									}
									BgL_arg2098z00_1041 =
										MAKE_PAIR(BgL_libz00_25, BgL_arg2099z00_1042);
								}
								BgL_list2096z00_1039 =
									MAKE_PAIR(BGl_string2699z00zz__osz00, BgL_arg2098z00_1041);
							}
							return
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
								(BgL_list2096z00_1039);
						}
				}
			else
				{	/* Llib/os.scm 548 */
					if ((BgL_backendz00_26 == BGl_symbol2700z00zz__osz00))
						{	/* Llib/os.scm 548 */
							return string_append(BgL_libz00_25, BGl_string2702z00zz__osz00);
						}
					else
						{	/* Llib/os.scm 548 */
							if ((BgL_backendz00_26 == BGl_symbol2703z00zz__osz00))
								{	/* Llib/os.scm 548 */
									return
										string_append(BgL_libz00_25, BGl_string2705z00zz__osz00);
								}
							else
								{	/* Llib/os.scm 548 */
									return
										BGl_errorz00zz__errorz00(BGl_symbol2706z00zz__osz00,
										BGl_string2708z00zz__osz00, BgL_backendz00_26);
								}
						}
				}
		}
	}



/* _make-static-lib-name */
	obj_t BGl__makezd2staticzd2libzd2namezd2zz__osz00(obj_t BgL_envz00_2828,
		obj_t BgL_libz00_2829, obj_t BgL_backendz00_2830)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 547 */
			{	/* Llib/os.scm 548 */
				obj_t BgL_auxz00_3502;

				obj_t BgL_auxz00_3495;

				if (SYMBOLP(BgL_backendz00_2830))
					{	/* Llib/os.scm 548 */
						BgL_auxz00_3502 = BgL_backendz00_2830;
					}
				else
					{
						obj_t BgL_auxz00_3505;

						BgL_auxz00_3505 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
							BINT(((long) 20686)), BGl_string2709z00zz__osz00,
							BGl_string2710z00zz__osz00, BgL_backendz00_2830);
						FAILURE(BgL_auxz00_3505, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_libz00_2829))
					{	/* Llib/os.scm 548 */
						BgL_auxz00_3495 = BgL_libz00_2829;
					}
				else
					{
						obj_t BgL_auxz00_3498;

						BgL_auxz00_3498 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
							BINT(((long) 20686)), BGl_string2709z00zz__osz00,
							BGl_string2679z00zz__osz00, BgL_libz00_2829);
						FAILURE(BgL_auxz00_3498, BFALSE, BFALSE);
					}
				return
					BGl_makezd2staticzd2libzd2namezd2zz__osz00(BgL_auxz00_3495,
					BgL_auxz00_3502);
			}
		}
	}



/* make-shared-lib-name */
	BGL_EXPORTED_DEF obj_t BGl_makezd2sharedzd2libzd2namezd2zz__osz00(obj_t
		BgL_libz00_27, obj_t BgL_backendz00_28)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 563 */
			if ((BgL_backendz00_28 == BGl_symbol2697z00zz__osz00))
				{	/* Llib/os.scm 564 */
					if (bigloo_strcmp(string_to_bstring(OS_CLASS),
							BGl_string2669z00zz__osz00))
						{	/* Llib/os.scm 566 */
							return
								string_append_3(BgL_libz00_27, BGl_string2656z00zz__osz00,
								string_to_bstring(STATIC_LIB_SUFFIX));
						}
					else
						{	/* Llib/os.scm 568 */
							obj_t BgL_list2108z00_1052;

							{	/* Llib/os.scm 568 */
								obj_t BgL_arg2110z00_1054;

								{	/* Llib/os.scm 568 */
									obj_t BgL_arg2111z00_1055;

									{	/* Llib/os.scm 568 */
										obj_t BgL_arg2113z00_1057;

										BgL_arg2113z00_1057 =
											MAKE_PAIR(string_to_bstring(SHARED_LIB_SUFFIX), BNIL);
										BgL_arg2111z00_1055 =
											MAKE_PAIR(BGl_string2656z00zz__osz00,
											BgL_arg2113z00_1057);
									}
									BgL_arg2110z00_1054 =
										MAKE_PAIR(BgL_libz00_27, BgL_arg2111z00_1055);
								}
								BgL_list2108z00_1052 =
									MAKE_PAIR(BGl_string2699z00zz__osz00, BgL_arg2110z00_1054);
							}
							return
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
								(BgL_list2108z00_1052);
						}
				}
			else
				{	/* Llib/os.scm 564 */
					if ((BgL_backendz00_28 == BGl_symbol2700z00zz__osz00))
						{	/* Llib/os.scm 564 */
							return string_append(BgL_libz00_27, BGl_string2702z00zz__osz00);
						}
					else
						{	/* Llib/os.scm 564 */
							if ((BgL_backendz00_28 == BGl_symbol2703z00zz__osz00))
								{	/* Llib/os.scm 564 */
									return
										string_append(BgL_libz00_27, BGl_string2705z00zz__osz00);
								}
							else
								{	/* Llib/os.scm 564 */
									return
										BGl_errorz00zz__errorz00(BGl_symbol2711z00zz__osz00,
										BGl_string2708z00zz__osz00, BgL_backendz00_28);
								}
						}
				}
		}
	}



/* _make-shared-lib-name */
	obj_t BGl__makezd2sharedzd2libzd2namezd2zz__osz00(obj_t BgL_envz00_2831,
		obj_t BgL_libz00_2832, obj_t BgL_backendz00_2833)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 563 */
			{	/* Llib/os.scm 564 */
				obj_t BgL_auxz00_3537;

				obj_t BgL_auxz00_3530;

				if (SYMBOLP(BgL_backendz00_2833))
					{	/* Llib/os.scm 564 */
						BgL_auxz00_3537 = BgL_backendz00_2833;
					}
				else
					{
						obj_t BgL_auxz00_3540;

						BgL_auxz00_3540 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
							BINT(((long) 21341)), BGl_string2713z00zz__osz00,
							BGl_string2710z00zz__osz00, BgL_backendz00_2833);
						FAILURE(BgL_auxz00_3540, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_libz00_2832))
					{	/* Llib/os.scm 564 */
						BgL_auxz00_3530 = BgL_libz00_2832;
					}
				else
					{
						obj_t BgL_auxz00_3533;

						BgL_auxz00_3533 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
							BINT(((long) 21341)), BGl_string2713z00zz__osz00,
							BGl_string2679z00zz__osz00, BgL_libz00_2832);
						FAILURE(BgL_auxz00_3533, BFALSE, BFALSE);
					}
				return
					BGl_makezd2sharedzd2libzd2namezd2zz__osz00(BgL_auxz00_3530,
					BgL_auxz00_3537);
			}
		}
	}



/* find-file/path */
	BGL_EXPORTED_DEF obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t
		BgL_filezd2namezd2_29, obj_t BgL_pathz00_30)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 579 */
			{
				obj_t BgL_filezd2namezd2_1079;

				if ((STRING_LENGTH(BgL_filezd2namezd2_29) == ((long) 0)))
					{	/* Llib/os.scm 591 */
						return BFALSE;
					}
				else
					{	/* Llib/os.scm 593 */
						bool_t BgL_testz00_3548;

						if (
							(STRING_REF(BgL_filezd2namezd2_29, ((long) 0)) ==
								(unsigned char) (FILE_SEPARATOR)))
							{	/* Llib/os.scm 593 */
								BgL_testz00_3548 = ((bool_t) 1);
							}
						else
							{	/* Llib/os.scm 593 */
								BgL_filezd2namezd2_1079 = BgL_filezd2namezd2_29;
								if (bigloo_strcmp(string_to_bstring(OS_CLASS),
										BGl_string2677z00zz__osz00))
									{	/* Llib/os.scm 582 */
										bool_t BgL__ortest_1833z00_1082;

										BgL__ortest_1833z00_1082 =
											(STRING_REF(BgL_filezd2namezd2_1079,
												((long) 0)) == ((unsigned char) '/'));
										if (BgL__ortest_1833z00_1082)
											{	/* Llib/os.scm 582 */
												BgL_testz00_3548 = BgL__ortest_1833z00_1082;
											}
										else
											{	/* Llib/os.scm 583 */
												bool_t BgL__ortest_1834z00_1083;

												BgL__ortest_1834z00_1083 =
													(STRING_REF(BgL_filezd2namezd2_1079,
														((long) 0)) == ((unsigned char) '\\'));
												if (BgL__ortest_1834z00_1083)
													{	/* Llib/os.scm 583 */
														BgL_testz00_3548 = BgL__ortest_1834z00_1083;
													}
												else
													{	/* Llib/os.scm 583 */
														if (
															(STRING_LENGTH(BgL_filezd2namezd2_1079) >
																((long) 2)))
															{	/* Llib/os.scm 584 */
																if (
																	(STRING_REF(BgL_filezd2namezd2_1079,
																			((long) 1)) == ((unsigned char) ':')))
																	{	/* Llib/os.scm 586 */
																		bool_t BgL__ortest_1836z00_1086;

																		BgL__ortest_1836z00_1086 =
																			(STRING_REF(BgL_filezd2namezd2_1079,
																				((long) 2)) == ((unsigned char) '/'));
																		if (BgL__ortest_1836z00_1086)
																			{	/* Llib/os.scm 586 */
																				BgL_testz00_3548 =
																					BgL__ortest_1836z00_1086;
																			}
																		else
																			{	/* Llib/os.scm 586 */
																				BgL_testz00_3548 =
																					(STRING_REF(BgL_filezd2namezd2_1079,
																						((long) 2)) ==
																					((unsigned char) '\\'));
																	}}
																else
																	{	/* Llib/os.scm 585 */
																		BgL_testz00_3548 = ((bool_t) 0);
																	}
															}
														else
															{	/* Llib/os.scm 584 */
																BgL_testz00_3548 = ((bool_t) 0);
															}
													}
											}
									}
								else
									{	/* Llib/os.scm 581 */
										BgL_testz00_3548 = ((bool_t) 0);
									}
							}
						if (BgL_testz00_3548)
							{	/* Llib/os.scm 593 */
								if (fexists(BSTRING_TO_STRING(BgL_filezd2namezd2_29)))
									{	/* Llib/os.scm 595 */
										return BgL_filezd2namezd2_29;
									}
								else
									{	/* Llib/os.scm 595 */
										return BFALSE;
									}
							}
						else
							{
								obj_t BgL_pathz00_1067;

								BgL_pathz00_1067 = BgL_pathz00_30;
							BgL_zc3anonymousza32121ze3z83_1068:
								if (NULLP(BgL_pathz00_1067))
									{	/* Llib/os.scm 600 */
										return BFALSE;
									}
								else
									{	/* Llib/os.scm 602 */
										obj_t BgL_fnamez00_1070;

										BgL_fnamez00_1070 =
											BGl_makezd2filezd2namez00zz__osz00(CAR(BgL_pathz00_1067),
											BgL_filezd2namezd2_29);
										if (fexists(BSTRING_TO_STRING(BgL_fnamez00_1070)))
											{	/* Llib/os.scm 603 */
												return BgL_fnamez00_1070;
											}
										else
											{
												obj_t BgL_pathz00_3583;

												BgL_pathz00_3583 = CDR(BgL_pathz00_1067);
												BgL_pathz00_1067 = BgL_pathz00_3583;
												goto BgL_zc3anonymousza32121ze3z83_1068;
											}
									}
							}
					}
			}
		}
	}



/* _find-file/path */
	obj_t BGl__findzd2filezf2pathz20zz__osz00(obj_t BgL_envz00_2834,
		obj_t BgL_filezd2namezd2_2835, obj_t BgL_pathz00_2836)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 579 */
			{	/* Llib/os.scm 581 */
				obj_t BgL_auxz00_3585;

				if (STRINGP(BgL_filezd2namezd2_2835))
					{	/* Llib/os.scm 581 */
						BgL_auxz00_3585 = BgL_filezd2namezd2_2835;
					}
				else
					{
						obj_t BgL_auxz00_3588;

						BgL_auxz00_3588 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
							BINT(((long) 22046)), BGl_string2714z00zz__osz00,
							BGl_string2679z00zz__osz00, BgL_filezd2namezd2_2835);
						FAILURE(BgL_auxz00_3588, BFALSE, BFALSE);
					}
				return
					BGl_findzd2filezf2pathz20zz__osz00(BgL_auxz00_3585, BgL_pathz00_2836);
			}
		}
	}



/* file-name->list */
	BGL_EXPORTED_DEF obj_t BGl_filezd2namezd2ze3listze3zz__osz00(obj_t
		BgL_namez00_31)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 610 */
			{	/* Llib/os.scm 611 */
				long BgL_lenz00_1097;

				BgL_lenz00_1097 = STRING_LENGTH(BgL_namez00_31);
				{	/* Llib/os.scm 612 */
					bool_t BgL_testz00_3594;

					if ((BgL_lenz00_1097 == ((long) 1)))
						{	/* Llib/os.scm 612 */
							BgL_testz00_3594 =
								(STRING_REF(BgL_namez00_31, ((long) 0)) ==
								(unsigned char) (FILE_SEPARATOR));
						}
					else
						{	/* Llib/os.scm 612 */
							BgL_testz00_3594 = ((bool_t) 0);
						}
					if (BgL_testz00_3594)
						{	/* Llib/os.scm 613 */
							obj_t BgL_list2147z00_1099;

							BgL_list2147z00_1099 =
								MAKE_PAIR(BGl_string2682z00zz__osz00, BNIL);
							return BgL_list2147z00_1099;
						}
					else
						{
							long BgL_startz00_1102;

							long BgL_stopz00_1103;

							obj_t BgL_resz00_1104;

							BgL_startz00_1102 = ((long) 0);
							BgL_stopz00_1103 = ((long) 0);
							BgL_resz00_1104 = BNIL;
						BgL_zc3anonymousza32148ze3z83_1105:
							if ((BgL_stopz00_1103 == BgL_lenz00_1097))
								{	/* Llib/os.scm 619 */
									obj_t BgL_arg2150z00_1107;

									BgL_arg2150z00_1107 =
										MAKE_PAIR(c_substring(BgL_namez00_31, BgL_startz00_1102,
											BgL_stopz00_1103), BgL_resz00_1104);
									return bgl_reverse_bang(BgL_arg2150z00_1107);
								}
							else
								{	/* Llib/os.scm 618 */
									if (
										(STRING_REF(BgL_namez00_31, BgL_stopz00_1103) ==
											(unsigned char) (FILE_SEPARATOR)))
										{	/* Llib/os.scm 621 */
											long BgL_arg2153z00_1110;

											long BgL_arg2154z00_1111;

											obj_t BgL_arg2155z00_1112;

											BgL_arg2153z00_1110 = (BgL_stopz00_1103 + ((long) 1));
											BgL_arg2154z00_1111 = (BgL_stopz00_1103 + ((long) 1));
											BgL_arg2155z00_1112 =
												MAKE_PAIR(c_substring(BgL_namez00_31, BgL_startz00_1102,
													BgL_stopz00_1103), BgL_resz00_1104);
											{
												obj_t BgL_resz00_3616;

												long BgL_stopz00_3615;

												long BgL_startz00_3614;

												BgL_startz00_3614 = BgL_arg2153z00_1110;
												BgL_stopz00_3615 = BgL_arg2154z00_1111;
												BgL_resz00_3616 = BgL_arg2155z00_1112;
												BgL_resz00_1104 = BgL_resz00_3616;
												BgL_stopz00_1103 = BgL_stopz00_3615;
												BgL_startz00_1102 = BgL_startz00_3614;
												goto BgL_zc3anonymousza32148ze3z83_1105;
											}
										}
									else
										{
											long BgL_stopz00_3617;

											BgL_stopz00_3617 = (BgL_stopz00_1103 + ((long) 1));
											BgL_stopz00_1103 = BgL_stopz00_3617;
											goto BgL_zc3anonymousza32148ze3z83_1105;
										}
								}
						}
				}
			}
		}
	}



/* _file-name->list */
	obj_t BGl__filezd2namezd2ze3listze3zz__osz00(obj_t BgL_envz00_2837,
		obj_t BgL_namez00_2838)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 610 */
			{	/* Llib/os.scm 611 */
				obj_t BgL_auxz00_3619;

				if (STRINGP(BgL_namez00_2838))
					{	/* Llib/os.scm 611 */
						BgL_auxz00_3619 = BgL_namez00_2838;
					}
				else
					{
						obj_t BgL_auxz00_3622;

						BgL_auxz00_3622 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
							BINT(((long) 23085)), BGl_string2715z00zz__osz00,
							BGl_string2679z00zz__osz00, BgL_namez00_2838);
						FAILURE(BgL_auxz00_3622, BFALSE, BFALSE);
					}
				return BGl_filezd2namezd2ze3listze3zz__osz00(BgL_auxz00_3619);
			}
		}
	}



/* file-name-canonicalize-inner */
	obj_t BGl_filezd2namezd2canonicaliza7ezd2innerz75zz__osz00(obj_t
		BgL_srcz00_32, obj_t BgL_resz00_33, long BgL_indexz00_34)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 630 */
			{	/* Llib/os.scm 632 */
				long BgL_lenz00_1122;

				long BgL_iz00_1123;

				long BgL_jz00_1124;

				BgL_lenz00_1122 = STRING_LENGTH(BgL_srcz00_32);
				BgL_iz00_1123 = BgL_indexz00_34;
				BgL_jz00_1124 = BgL_indexz00_34;
				{

				BgL_zc3anonymousza32206ze3z83_1175:
					{	/* Llib/os.scm 746 */
						bool_t BgL_testz00_3628;

						if ((BgL_iz00_1123 < (BgL_lenz00_1122 - ((long) 3))))
							{	/* Llib/os.scm 746 */
								if (
									(STRING_REF(BgL_srcz00_32,
											BgL_iz00_1123) == ((unsigned char) '.')))
									{	/* Llib/os.scm 747 */
										if (
											(STRING_REF(BgL_srcz00_32,
													(BgL_iz00_1123 + ((long) 1))) ==
												((unsigned char) '.')))
											{	/* Llib/os.scm 748 */
												BgL_testz00_3628 =
													(STRING_REF(BgL_srcz00_32,
														(BgL_iz00_1123 + ((long) 2))) ==
													(unsigned char) (FILE_SEPARATOR));
											}
										else
											{	/* Llib/os.scm 748 */
												BgL_testz00_3628 = ((bool_t) 0);
											}
									}
								else
									{	/* Llib/os.scm 747 */
										BgL_testz00_3628 = ((bool_t) 0);
									}
							}
						else
							{	/* Llib/os.scm 746 */
								BgL_testz00_3628 = ((bool_t) 0);
							}
						if (BgL_testz00_3628)
							{	/* Llib/os.scm 746 */
								STRING_SET(BgL_resz00_33, BgL_jz00_1124, ((unsigned char) '.'));
								{	/* Llib/os.scm 752 */
									long BgL_auxz00_3644;

									BgL_auxz00_3644 = (BgL_jz00_1124 + ((long) 1));
									STRING_SET(BgL_resz00_33, BgL_auxz00_3644,
										((unsigned char) '.'));
								}
								{	/* Llib/os.scm 753 */
									unsigned char BgL_auxz00_3649;

									long BgL_auxz00_3647;

									BgL_auxz00_3649 = (unsigned char) (FILE_SEPARATOR);
									BgL_auxz00_3647 = (BgL_jz00_1124 + ((long) 2));
									STRING_SET(BgL_resz00_33, BgL_auxz00_3647, BgL_auxz00_3649);
								}
								BgL_iz00_1123 = (BgL_iz00_1123 + ((long) 3));
								BgL_jz00_1124 = (BgL_jz00_1124 + ((long) 3));
								{

								BgL_zc3anonymousza32210ze3z83_1180:
									if ((BgL_iz00_1123 == BgL_lenz00_1122))
										{	/* Llib/os.scm 757 */
											return bgl_string_shrink(BgL_resz00_33, BgL_jz00_1124);
										}
									else
										{	/* Llib/os.scm 759 */
											bool_t BgL_testz00_3657;

											{	/* Llib/os.scm 759 */
												unsigned char BgL_char2z00_2416;

												BgL_char2z00_2416 = (unsigned char) (FILE_SEPARATOR);
												BgL_testz00_3657 =
													(STRING_REF(BgL_srcz00_32,
														BgL_iz00_1123) == BgL_char2z00_2416);
											}
											if (BgL_testz00_3657)
												{	/* Llib/os.scm 759 */
													BgL_iz00_1123 = (BgL_iz00_1123 + ((long) 1));
													goto BgL_zc3anonymousza32210ze3z83_1180;
												}
											else
												{	/* Llib/os.scm 759 */
													goto BgL_zc3anonymousza32206ze3z83_1175;
												}
										}
								}
							}
						else
							{	/* Llib/os.scm 746 */
							BgL_zc3anonymousza32173ze3z83_1143:
								if ((BgL_iz00_1123 == BgL_lenz00_1122))
									{	/* Llib/os.scm 669 */
										return bgl_string_shrink(BgL_resz00_33, BgL_jz00_1124);
									}
								else
									{	/* Llib/os.scm 671 */
										unsigned char BgL_cz00_1145;

										BgL_cz00_1145 = STRING_REF(BgL_srcz00_32, BgL_iz00_1123);
										if ((BgL_cz00_1145 == (unsigned char) (FILE_SEPARATOR)))
											{	/* Llib/os.scm 673 */
												STRING_SET(BgL_resz00_33, BgL_jz00_1124, BgL_cz00_1145);
												BgL_iz00_1123 = (BgL_iz00_1123 + ((long) 1));
												BgL_jz00_1124 = (BgL_jz00_1124 + ((long) 1));
											BgL_zc3anonymousza32163ze3z83_1130:
												if ((BgL_iz00_1123 == BgL_lenz00_1122))
													{	/* Llib/os.scm 638 */
														return
															bgl_string_shrink(BgL_resz00_33, BgL_jz00_1124);
													}
												else
													{	/* Llib/os.scm 640 */
														bool_t BgL_testz00_3675;

														{	/* Llib/os.scm 640 */
															unsigned char BgL_char2z00_2188;

															BgL_char2z00_2188 =
																(unsigned char) (FILE_SEPARATOR);
															BgL_testz00_3675 =
																(STRING_REF(BgL_srcz00_32,
																	BgL_iz00_1123) == BgL_char2z00_2188);
														}
														if (BgL_testz00_3675)
															{	/* Llib/os.scm 640 */
																BgL_iz00_1123 = (BgL_iz00_1123 + ((long) 1));
																goto BgL_zc3anonymousza32163ze3z83_1130;
															}
														else
															{	/* Llib/os.scm 640 */
																goto BgL_zc3anonymousza32173ze3z83_1143;
															}
													}
											}
										else
											{	/* Llib/os.scm 673 */
												if ((BgL_cz00_1145 == ((unsigned char) '.')))
													{	/* Llib/os.scm 679 */
														if (
															(BgL_iz00_1123 == (BgL_lenz00_1122 - ((long) 1))))
															{	/* Llib/os.scm 681 */
																if ((BgL_jz00_1124 == ((long) 0)))
																	{	/* Llib/os.scm 683 */
																		STRING_SET(BgL_resz00_33, BgL_jz00_1124,
																			((unsigned char) '.'));
																		{	/* Llib/os.scm 686 */
																			long BgL_auxz00_3688;

																			BgL_auxz00_3688 =
																				(BgL_jz00_1124 + ((long) 1));
																			return
																				bgl_string_shrink(BgL_resz00_33,
																				BgL_auxz00_3688);
																		}
																	}
																else
																	{	/* Llib/os.scm 687 */
																		long BgL_auxz00_3691;

																		BgL_auxz00_3691 =
																			(BgL_jz00_1124 - ((long) 1));
																		return
																			bgl_string_shrink(BgL_resz00_33,
																			BgL_auxz00_3691);
																	}
															}
														else
															{	/* Llib/os.scm 681 */
																if (
																	(STRING_REF(BgL_srcz00_32,
																			(BgL_iz00_1123 + ((long) 1))) ==
																		(unsigned char) (FILE_SEPARATOR)))
																	{	/* Llib/os.scm 688 */
																		if (
																			(BgL_iz00_1123 ==
																				(BgL_lenz00_1122 - ((long) 2))))
																			{	/* Llib/os.scm 689 */
																				STRING_SET(BgL_resz00_33, BgL_jz00_1124,
																					((unsigned char) '.'));
																				{	/* Llib/os.scm 693 */
																					long BgL_auxz00_3703;

																					BgL_auxz00_3703 =
																						(BgL_jz00_1124 + ((long) 1));
																					return
																						bgl_string_shrink(BgL_resz00_33,
																						BgL_auxz00_3703);
																				}
																			}
																		else
																			{	/* Llib/os.scm 689 */
																				BgL_iz00_1123 =
																					(BgL_iz00_1123 + ((long) 2));
																				goto BgL_zc3anonymousza32163ze3z83_1130;
																			}
																	}
																else
																	{	/* Llib/os.scm 688 */
																		if (
																			(STRING_REF(BgL_srcz00_32,
																					(BgL_iz00_1123 + ((long) 1))) ==
																				((unsigned char) '.')))
																			{	/* Llib/os.scm 698 */
																				if (
																					(BgL_iz00_1123 ==
																						(BgL_lenz00_1122 - ((long) 2))))
																					{	/* Llib/os.scm 701 */
																						if ((BgL_jz00_1124 == ((long) 0)))
																							{	/* Llib/os.scm 704 */
																								return
																									bgl_string_shrink
																									(BgL_resz00_33, ((long) 0));
																							}
																						else
																							{	/* Llib/os.scm 704 */
																								if (
																									(BgL_jz00_1124 == ((long) 1)))
																									{	/* Llib/os.scm 706 */
																										return
																											bgl_string_shrink
																											(BgL_resz00_33,
																											((long) 1));
																									}
																								else
																									{	/* Llib/os.scm 706 */
																										{	/* Llib/os.scm 709 */
																											long BgL_jz00_2292;

																											BgL_jz00_2292 =
																												BgL_jz00_1124;
																											{	/* Llib/os.scm 709 */
																												obj_t BgL_njz00_2293;

																												{	/* Llib/os.scm 709 */
																													long
																														BgL_arg2172z00_2294;
																													BgL_arg2172z00_2294 =
																														(BgL_jz00_2292 -
																														((long) 2));
																													BgL_njz00_2293 =
																														BGl_stringzd2indexzd2rightz00zz__r4_strings_6_7z00
																														(BgL_resz00_33,
																														BCHAR
																														(FILE_SEPARATOR),
																														BINT
																														(BgL_arg2172z00_2294));
																												}
																												if (INTEGERP
																													(BgL_njz00_2293))
																													{	/* Llib/os.scm 709 */
																														BgL_jz00_1124 =
																															(
																															(long)
																															CINT
																															(BgL_njz00_2293) +
																															((long) 1));
																													}
																												else
																													{	/* Llib/os.scm 709 */
																														BgL_jz00_1124 =
																															((long) 0);
																										}}}
																										if (
																											(BgL_jz00_1124 >
																												((long) 1)))
																											{	/* Llib/os.scm 711 */
																												long BgL_auxz00_3730;

																												BgL_auxz00_3730 =
																													(BgL_jz00_1124 -
																													((long) 1));
																												return
																													bgl_string_shrink
																													(BgL_resz00_33,
																													BgL_auxz00_3730);
																											}
																										else
																											{	/* Llib/os.scm 710 */
																												return
																													bgl_string_shrink
																													(BgL_resz00_33,
																													BgL_jz00_1124);
																											}
																									}
																							}
																					}
																				else
																					{	/* Llib/os.scm 701 */
																						if (
																							(STRING_REF(BgL_srcz00_32,
																									(BgL_iz00_1123 +
																										((long) 2))) ==
																								(unsigned
																									char) (FILE_SEPARATOR)))
																							{	/* Llib/os.scm 713 */
																								if (
																									(BgL_jz00_1124 >= ((long) 2)))
																									{	/* Llib/os.scm 716 */
																										long BgL_jz00_2317;

																										BgL_jz00_2317 =
																											BgL_jz00_1124;
																										{	/* Llib/os.scm 716 */
																											obj_t BgL_njz00_2318;

																											{	/* Llib/os.scm 716 */
																												long
																													BgL_arg2172z00_2319;
																												BgL_arg2172z00_2319 =
																													(BgL_jz00_2317 -
																													((long) 2));
																												BgL_njz00_2318 =
																													BGl_stringzd2indexzd2rightz00zz__r4_strings_6_7z00
																													(BgL_resz00_33,
																													BCHAR(FILE_SEPARATOR),
																													BINT
																													(BgL_arg2172z00_2319));
																											}
																											if (INTEGERP
																												(BgL_njz00_2318))
																												{	/* Llib/os.scm 716 */
																													BgL_jz00_1124 =
																														(
																														(long)
																														CINT(BgL_njz00_2318)
																														+ ((long) 1));
																												}
																											else
																												{	/* Llib/os.scm 716 */
																													BgL_jz00_1124 =
																														((long) 0);
																									}}}
																								else
																									{	/* Llib/os.scm 715 */
																										BFALSE;
																									}
																								BgL_iz00_1123 =
																									(BgL_iz00_1123 + ((long) 3));
																								goto
																									BgL_zc3anonymousza32163ze3z83_1130;
																							}
																						else
																							{	/* Llib/os.scm 713 */
																								STRING_SET(BgL_resz00_33,
																									BgL_jz00_1124, BgL_cz00_1145);
																								BgL_iz00_1123 =
																									(BgL_iz00_1123 + ((long) 1));
																								BgL_jz00_1124 =
																									(BgL_jz00_1124 + ((long) 1));
																								{	/* Llib/os.scm 723 */
																									unsigned char
																										BgL_arg2193z00_1164;
																									BgL_arg2193z00_1164 =
																										STRING_REF(BgL_srcz00_32,
																										BgL_iz00_1123);
																									STRING_SET(BgL_resz00_33,
																										BgL_jz00_1124,
																										BgL_arg2193z00_1164);
																								}
																								BgL_iz00_1123 =
																									(BgL_iz00_1123 + ((long) 1));
																								BgL_jz00_1124 =
																									(BgL_jz00_1124 + ((long) 1));
																								{	/* Llib/os.scm 726 */
																									unsigned char
																										BgL_arg2194z00_1165;
																									BgL_arg2194z00_1165 =
																										STRING_REF(BgL_srcz00_32,
																										BgL_iz00_1123);
																									STRING_SET(BgL_resz00_33,
																										BgL_jz00_1124,
																										BgL_arg2194z00_1165);
																								}
																							BgL_zc3anonymousza32167ze3z83_1134:
																								if (
																									(BgL_iz00_1123 ==
																										BgL_lenz00_1122))
																									{	/* Llib/os.scm 647 */
																										return
																											bgl_string_shrink
																											(BgL_resz00_33,
																											BgL_jz00_1124);
																									}
																								else
																									{	/* Llib/os.scm 649 */
																										unsigned char BgL_cz00_1136;

																										BgL_cz00_1136 =
																											STRING_REF(BgL_srcz00_32,
																											BgL_iz00_1123);
																										if ((BgL_cz00_1136 ==
																												(unsigned
																													char)
																												(FILE_SEPARATOR)))
																											{	/* Llib/os.scm 651 */
																												STRING_SET
																													(BgL_resz00_33,
																													BgL_jz00_1124,
																													BgL_cz00_1136);
																												BgL_iz00_1123 =
																													(BgL_iz00_1123 +
																													((long) 1));
																												BgL_jz00_1124 =
																													(BgL_jz00_1124 +
																													((long) 1));
																												goto
																													BgL_zc3anonymousza32163ze3z83_1130;
																											}
																										else
																											{	/* Llib/os.scm 651 */
																												STRING_SET
																													(BgL_resz00_33,
																													BgL_jz00_1124,
																													BgL_cz00_1136);
																												BgL_iz00_1123 =
																													(BgL_iz00_1123 +
																													((long) 1));
																												BgL_jz00_1124 =
																													(BgL_jz00_1124 +
																													((long) 1));
																												goto
																													BgL_zc3anonymousza32167ze3z83_1134;
																											}
																									}
																							}
																					}
																			}
																		else
																			{	/* Llib/os.scm 698 */
																				STRING_SET(BgL_resz00_33, BgL_jz00_1124,
																					BgL_cz00_1145);
																				BgL_iz00_1123 =
																					(BgL_iz00_1123 + ((long) 1));
																				BgL_jz00_1124 =
																					(BgL_jz00_1124 + ((long) 1));
																				{	/* Llib/os.scm 733 */
																					unsigned char BgL_arg2198z00_1169;

																					BgL_arg2198z00_1169 =
																						STRING_REF(BgL_srcz00_32,
																						BgL_iz00_1123);
																					STRING_SET(BgL_resz00_33,
																						BgL_jz00_1124, BgL_arg2198z00_1169);
																				}
																				BgL_iz00_1123 =
																					(BgL_iz00_1123 + ((long) 1));
																				BgL_jz00_1124 =
																					(BgL_jz00_1124 + ((long) 1));
																				goto BgL_zc3anonymousza32167ze3z83_1134;
																			}
																	}
															}
													}
												else
													{	/* Llib/os.scm 679 */
														STRING_SET(BgL_resz00_33, BgL_jz00_1124,
															BgL_cz00_1145);
														BgL_iz00_1123 = (BgL_iz00_1123 + ((long) 1));
														BgL_jz00_1124 = (BgL_jz00_1124 + ((long) 1));
														goto BgL_zc3anonymousza32167ze3z83_1134;
													}
											}
									}
							}
					}
				}
			}
		}
	}



/* file-name-canonicalize */
	BGL_EXPORTED_DEF obj_t BGl_filezd2namezd2canonicaliza7eza7zz__osz00(obj_t
		BgL_namez00_35)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 771 */
			return
				BGl_filezd2namezd2canonicaliza7ezd2innerz75zz__osz00(BgL_namez00_35,
				make_string(STRING_LENGTH(BgL_namez00_35), ((unsigned char) ' ')),
				((long) 0));
		}
	}



/* _file-name-canonicalize */
	obj_t BGl__filezd2namezd2canonicaliza7eza7zz__osz00(obj_t BgL_envz00_2839,
		obj_t BgL_namez00_2840)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 771 */
			{	/* Llib/os.scm 772 */
				obj_t BgL_auxz00_3785;

				if (STRINGP(BgL_namez00_2840))
					{	/* Llib/os.scm 772 */
						BgL_auxz00_3785 = BgL_namez00_2840;
					}
				else
					{
						obj_t BgL_auxz00_3788;

						BgL_auxz00_3788 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
							BINT(((long) 27573)), BGl_string2716z00zz__osz00,
							BGl_string2679z00zz__osz00, BgL_namez00_2840);
						FAILURE(BgL_auxz00_3788, BFALSE, BFALSE);
					}
				return BGl_filezd2namezd2canonicaliza7eza7zz__osz00(BgL_auxz00_3785);
			}
		}
	}



/* file-name-canonicalize! */
	BGL_EXPORTED_DEF obj_t BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00(obj_t
		BgL_namez00_36)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 777 */
			{	/* Llib/os.scm 778 */
				long BgL_lenz00_1203;

				BgL_lenz00_1203 = STRING_LENGTH(BgL_namez00_36);
				{
					long BgL_iz00_1206;

					long BgL_sz00_1207;

					BgL_iz00_1206 = ((long) 0);
					BgL_sz00_1207 = ((long) 0);
				BgL_zc3anonymousza32237ze3z83_1208:
					if ((BgL_iz00_1206 == BgL_lenz00_1203))
						{	/* Llib/os.scm 782 */
							return BgL_namez00_36;
						}
					else
						{	/* Llib/os.scm 784 */
							unsigned char BgL_cz00_1210;

							BgL_cz00_1210 = STRING_REF(BgL_namez00_36, BgL_iz00_1206);
							if ((BgL_cz00_1210 == (unsigned char) (FILE_SEPARATOR)))
								{	/* Llib/os.scm 786 */
									if ((BgL_sz00_1207 == (BgL_iz00_1206 - ((long) 1))))
										{	/* Llib/os.scm 788 */
											obj_t BgL_resz00_1213;

											BgL_resz00_1213 =
												make_string(BgL_lenz00_1203, ((unsigned char) ' '));
											blit_string(BgL_namez00_36, ((long) 0), BgL_resz00_1213,
												((long) 0), BgL_iz00_1206);
											return
												BGl_filezd2namezd2canonicaliza7ezd2innerz75zz__osz00
												(BgL_namez00_36, BgL_resz00_1213, BgL_sz00_1207);
										}
									else
										{
											long BgL_sz00_3808;

											long BgL_iz00_3806;

											BgL_iz00_3806 = (BgL_iz00_1206 + ((long) 1));
											BgL_sz00_3808 = BgL_iz00_1206;
											BgL_sz00_1207 = BgL_sz00_3808;
											BgL_iz00_1206 = BgL_iz00_3806;
											goto BgL_zc3anonymousza32237ze3z83_1208;
										}
								}
							else
								{	/* Llib/os.scm 792 */
									bool_t BgL_testz00_3809;

									if ((BgL_cz00_1210 == ((unsigned char) '.')))
										{	/* Llib/os.scm 792 */
											BgL_testz00_3809 = (BgL_sz00_1207 >= ((long) 0));
										}
									else
										{	/* Llib/os.scm 792 */
											BgL_testz00_3809 = ((bool_t) 0);
										}
									if (BgL_testz00_3809)
										{	/* Llib/os.scm 793 */
											obj_t BgL_resz00_1218;

											BgL_resz00_1218 =
												make_string(BgL_lenz00_1203, ((unsigned char) ' '));
											blit_string(BgL_namez00_36, ((long) 0), BgL_resz00_1218,
												((long) 0), BgL_iz00_1206);
											return
												BGl_filezd2namezd2canonicaliza7ezd2innerz75zz__osz00
												(BgL_namez00_36, BgL_resz00_1218, BgL_sz00_1207);
										}
									else
										{
											long BgL_sz00_3818;

											long BgL_iz00_3816;

											BgL_iz00_3816 = (BgL_iz00_1206 + ((long) 1));
											BgL_sz00_3818 = ((long) -1);
											BgL_sz00_1207 = BgL_sz00_3818;
											BgL_iz00_1206 = BgL_iz00_3816;
											goto BgL_zc3anonymousza32237ze3z83_1208;
										}
								}
						}
				}
			}
		}
	}



/* _file-name-canonicalize! */
	obj_t BGl__filezd2namezd2canonicaliza7ez12zb5zz__osz00(obj_t BgL_envz00_2841,
		obj_t BgL_namez00_2842)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 777 */
			{	/* Llib/os.scm 778 */
				obj_t BgL_auxz00_3819;

				if (STRINGP(BgL_namez00_2842))
					{	/* Llib/os.scm 778 */
						BgL_auxz00_3819 = BgL_namez00_2842;
					}
				else
					{
						obj_t BgL_auxz00_3822;

						BgL_auxz00_3822 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
							BINT(((long) 27864)), BGl_string2717z00zz__osz00,
							BGl_string2679z00zz__osz00, BgL_namez00_2842);
						FAILURE(BgL_auxz00_3822, BFALSE, BFALSE);
					}
				return BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00(BgL_auxz00_3819);
			}
		}
	}



/* file-name-unix-canonicalize */
	BGL_EXPORTED_DEF obj_t
		BGl_filezd2namezd2unixzd2canonicaliza7ez75zz__osz00(obj_t BgL_namez00_37)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 802 */
			{	/* Llib/os.scm 803 */
				long BgL_lenz00_1224;

				BgL_lenz00_1224 = STRING_LENGTH(BgL_namez00_37);
				if ((BgL_lenz00_1224 == ((long) 0)))
					{	/* Llib/os.scm 805 */
						return BgL_namez00_37;
					}
				else
					{	/* Llib/os.scm 805 */
						if (
							(STRING_REF(BgL_namez00_37, ((long) 0)) == ((unsigned char) '~')))
							{	/* Llib/os.scm 807 */
								if ((BgL_lenz00_1224 == ((long) 1)))
									{	/* Llib/os.scm 809 */
										return
											BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00
											(BGl_getenvz00zz__osz00(BSTRING_TO_STRING
												(BGl_string2670z00zz__osz00)));
									}
								else
									{	/* Llib/os.scm 809 */
										if (
											(STRING_REF(BgL_namez00_37, ((long) 1)) ==
												(unsigned char) (FILE_SEPARATOR)))
											{	/* Llib/os.scm 812 */
												return
													BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00
													(string_append(BGl_getenvz00zz__osz00
														(BSTRING_TO_STRING(BGl_string2670z00zz__osz00)),
														c_substring(BgL_namez00_37, ((long) 1),
															BgL_lenz00_1224)));
											}
										else
											{	/* Llib/os.scm 819 */
												obj_t BgL_arg2259z00_1233;

												{	/* Llib/os.scm 819 */
													obj_t BgL_arg2260z00_1234;

													obj_t BgL_arg2263z00_1236;

													BgL_arg2260z00_1234 =
														BGl_getenvz00zz__osz00(BSTRING_TO_STRING
														(BGl_string2670z00zz__osz00));
													BgL_arg2263z00_1236 =
														c_substring(BgL_namez00_37, ((long) 1),
														BgL_lenz00_1224);
													{	/* Llib/os.scm 819 */
														obj_t BgL_list2264z00_1237;

														BgL_list2264z00_1237 =
															MAKE_PAIR(BgL_arg2263z00_1236, BNIL);
														BgL_arg2259z00_1233 =
															BGl_makezd2filezd2pathz00zz__osz00
															(BgL_arg2260z00_1234, BGl_string2718z00zz__osz00,
															BgL_list2264z00_1237);
												}}
												return
													BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00
													(BgL_arg2259z00_1233);
											}
									}
							}
						else
							{	/* Llib/os.scm 807 */
								return
									BGl_filezd2namezd2canonicaliza7ezd2innerz75zz__osz00
									(BgL_namez00_37, make_string(BgL_lenz00_1224,
										((unsigned char) ' ')), ((long) 0));
		}}}}
	}



/* _file-name-unix-canonicalize */
	obj_t BGl__filezd2namezd2unixzd2canonicaliza7ez75zz__osz00(obj_t
		BgL_envz00_2843, obj_t BgL_namez00_2844)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 802 */
			{	/* Llib/os.scm 803 */
				obj_t BgL_auxz00_3855;

				if (STRINGP(BgL_namez00_2844))
					{	/* Llib/os.scm 803 */
						BgL_auxz00_3855 = BgL_namez00_2844;
					}
				else
					{
						obj_t BgL_auxz00_3858;

						BgL_auxz00_3858 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
							BINT(((long) 28711)), BGl_string2719z00zz__osz00,
							BGl_string2679z00zz__osz00, BgL_namez00_2844);
						FAILURE(BgL_auxz00_3858, BFALSE, BFALSE);
					}
				return
					BGl_filezd2namezd2unixzd2canonicaliza7ez75zz__osz00(BgL_auxz00_3855);
			}
		}
	}



/* file-name-unix-canonicalize! */
	BGL_EXPORTED_DEF obj_t
		BGl_filezd2namezd2unixzd2canonicaliza7ez12z67zz__osz00(obj_t BgL_namez00_38)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 826 */
			{	/* Llib/os.scm 827 */
				long BgL_lenz00_1241;

				BgL_lenz00_1241 = STRING_LENGTH(BgL_namez00_38);
				if ((BgL_lenz00_1241 == ((long) 0)))
					{	/* Llib/os.scm 829 */
						return BgL_namez00_38;
					}
				else
					{	/* Llib/os.scm 829 */
						if (
							(STRING_REF(BgL_namez00_38, ((long) 0)) == ((unsigned char) '~')))
							{	/* Llib/os.scm 831 */
								return
									BGl_filezd2namezd2unixzd2canonicaliza7ez75zz__osz00
									(BgL_namez00_38);
							}
						else
							{	/* Llib/os.scm 831 */
								return
									BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00
									(BgL_namez00_38);
							}
					}
			}
		}
	}



/* _file-name-unix-canonicalize! */
	obj_t BGl__filezd2namezd2unixzd2canonicaliza7ez12z67zz__osz00(obj_t
		BgL_envz00_2845, obj_t BgL_namez00_2846)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 826 */
			{	/* Llib/os.scm 827 */
				obj_t BgL_auxz00_3871;

				if (STRINGP(BgL_namez00_2846))
					{	/* Llib/os.scm 827 */
						BgL_auxz00_3871 = BgL_namez00_2846;
					}
				else
					{
						obj_t BgL_auxz00_3874;

						BgL_auxz00_3874 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
							BINT(((long) 29587)), BGl_string2720z00zz__osz00,
							BGl_string2679z00zz__osz00, BgL_namez00_2846);
						FAILURE(BgL_auxz00_3874, BFALSE, BFALSE);
					}
				return
					BGl_filezd2namezd2unixzd2canonicaliza7ez12z67zz__osz00
					(BgL_auxz00_3871);
			}
		}
	}



/* relative-file-name */
	BGL_EXPORTED_DEF obj_t BGl_relativezd2filezd2namez00zz__osz00(obj_t
		BgL_namez00_39, obj_t BgL_basez00_40)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 839 */
			{
				obj_t BgL_fz00_1260;

				{	/* Llib/os.scm 848 */
					obj_t BgL_g1838z00_1246;

					obj_t BgL_g1839z00_1247;

					BgL_g1838z00_1246 =
						BGl_filezd2namezd2ze3listze3zz__osz00(BgL_namez00_39);
					BgL_g1839z00_1247 =
						BGl_filezd2namezd2ze3listze3zz__osz00(BgL_basez00_40);
					{
						obj_t BgL_fz00_1249;

						obj_t BgL_bz00_1250;

						BgL_fz00_1249 = BgL_g1838z00_1246;
						BgL_bz00_1250 = BgL_g1839z00_1247;
					BgL_zc3anonymousza32271ze3z83_1251:
						if (NULLP(BgL_fz00_1249))
							{	/* Llib/os.scm 851 */
								return BGl_string2682z00zz__osz00;
							}
						else
							{	/* Llib/os.scm 851 */
								if (NULLP(BgL_bz00_1250))
									{	/* Llib/os.scm 853 */
										BgL_fz00_1260 = BgL_fz00_1249;
									BgL_zc3anonymousza32280ze3z83_1261:
										if (NULLP(CDR(BgL_fz00_1260)))
											{	/* Llib/os.scm 842 */
												return CAR(BgL_fz00_1260);
											}
										else
											{	/* Llib/os.scm 844 */
												bool_t BgL_testz00_3889;

												{	/* Llib/os.scm 844 */
													obj_t BgL_auxz00_3890;

													{	/* Llib/os.scm 844 */
														obj_t BgL_pairz00_2525;

														BgL_pairz00_2525 = BgL_fz00_1260;
														BgL_auxz00_3890 = CDR(CDR(BgL_pairz00_2525));
													}
													BgL_testz00_3889 = NULLP(BgL_auxz00_3890);
												}
												if (BgL_testz00_3889)
													{	/* Llib/os.scm 845 */
														obj_t BgL_arg2283z00_1264;

														obj_t BgL_arg2284z00_1265;

														BgL_arg2283z00_1264 = CAR(BgL_fz00_1260);
														{	/* Llib/os.scm 845 */
															obj_t BgL_pairz00_2531;

															BgL_pairz00_2531 = BgL_fz00_1260;
															BgL_arg2284z00_1265 = CAR(CDR(BgL_pairz00_2531));
														}
														return
															BGl_makezd2filezd2namez00zz__osz00
															(BgL_arg2283z00_1264, BgL_arg2284z00_1265);
													}
												else
													{	/* Llib/os.scm 847 */
														obj_t BgL_runner2287z00_1268;

														BgL_runner2287z00_1268 = BgL_fz00_1260;
														{	/* Llib/os.scm 847 */
															obj_t BgL_aux2285z00_1266;

															BgL_aux2285z00_1266 = CAR(BgL_runner2287z00_1268);
															BgL_runner2287z00_1268 =
																CDR(BgL_runner2287z00_1268);
															{	/* Llib/os.scm 847 */
																obj_t BgL_aux2286z00_1267;

																BgL_aux2286z00_1267 =
																	CAR(BgL_runner2287z00_1268);
																BgL_runner2287z00_1268 =
																	CDR(BgL_runner2287z00_1268);
																return
																	BGl_makezd2filezd2pathz00zz__osz00
																	(BgL_aux2285z00_1266, BgL_aux2286z00_1267,
																	BgL_runner2287z00_1268);
															}
														}
													}
											}
									}
								else
									{	/* Llib/os.scm 853 */
										if (bigloo_strcmp(CAR(BgL_fz00_1249), CAR(BgL_bz00_1250)))
											{
												obj_t BgL_bz00_3909;

												obj_t BgL_fz00_3907;

												BgL_fz00_3907 = CDR(BgL_fz00_1249);
												BgL_bz00_3909 = CDR(BgL_bz00_1250);
												BgL_bz00_1250 = BgL_bz00_3909;
												BgL_fz00_1249 = BgL_fz00_3907;
												goto BgL_zc3anonymousza32271ze3z83_1251;
											}
										else
											{
												obj_t BgL_fz00_3911;

												BgL_fz00_3911 = BgL_fz00_1249;
												BgL_fz00_1260 = BgL_fz00_3911;
												goto BgL_zc3anonymousza32280ze3z83_1261;
											}
									}
							}
					}
				}
			}
		}
	}



/* _relative-file-name */
	obj_t BGl__relativezd2filezd2namez00zz__osz00(obj_t BgL_envz00_2847,
		obj_t BgL_namez00_2848, obj_t BgL_basez00_2849)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 839 */
			{	/* Llib/os.scm 842 */
				obj_t BgL_auxz00_3919;

				obj_t BgL_auxz00_3912;

				if (STRINGP(BgL_basez00_2849))
					{	/* Llib/os.scm 842 */
						BgL_auxz00_3919 = BgL_basez00_2849;
					}
				else
					{
						obj_t BgL_auxz00_3922;

						BgL_auxz00_3922 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
							BINT(((long) 30080)), BGl_string2721z00zz__osz00,
							BGl_string2679z00zz__osz00, BgL_basez00_2849);
						FAILURE(BgL_auxz00_3922, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_namez00_2848))
					{	/* Llib/os.scm 842 */
						BgL_auxz00_3912 = BgL_namez00_2848;
					}
				else
					{
						obj_t BgL_auxz00_3915;

						BgL_auxz00_3915 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
							BINT(((long) 30080)), BGl_string2721z00zz__osz00,
							BGl_string2679z00zz__osz00, BgL_namez00_2848);
						FAILURE(BgL_auxz00_3915, BFALSE, BFALSE);
					}
				return
					BGl_relativezd2filezd2namez00zz__osz00(BgL_auxz00_3912,
					BgL_auxz00_3919);
			}
		}
	}



/* make-static-library-name */
	BGL_EXPORTED_DEF obj_t BGl_makezd2staticzd2libraryzd2namezd2zz__osz00(obj_t
		BgL_libnamez00_41)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 865 */
			return
				string_append_3(BgL_libnamez00_41, BGl_string2656z00zz__osz00,
				string_to_bstring(STATIC_LIB_SUFFIX));
		}
	}



/* _make-static-library-name */
	obj_t BGl__makezd2staticzd2libraryzd2namezd2zz__osz00(obj_t BgL_envz00_2850,
		obj_t BgL_libnamez00_2851)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 865 */
			{	/* Llib/os.scm 866 */
				obj_t BgL_auxz00_3929;

				if (STRINGP(BgL_libnamez00_2851))
					{	/* Llib/os.scm 866 */
						BgL_auxz00_3929 = BgL_libnamez00_2851;
					}
				else
					{
						obj_t BgL_auxz00_3932;

						BgL_auxz00_3932 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
							BINT(((long) 30862)), BGl_string2722z00zz__osz00,
							BGl_string2679z00zz__osz00, BgL_libnamez00_2851);
						FAILURE(BgL_auxz00_3932, BFALSE, BFALSE);
					}
				return BGl_makezd2staticzd2libraryzd2namezd2zz__osz00(BgL_auxz00_3929);
			}
		}
	}



/* make-shared-library-name */
	BGL_EXPORTED_DEF obj_t BGl_makezd2sharedzd2libraryzd2namezd2zz__osz00(obj_t
		BgL_libnamez00_42)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 873 */
			return
				string_append_3(BgL_libnamez00_42, BGl_string2656z00zz__osz00,
				string_to_bstring(SHARED_LIB_SUFFIX));
		}
	}



/* _make-shared-library-name */
	obj_t BGl__makezd2sharedzd2libraryzd2namezd2zz__osz00(obj_t BgL_envz00_2852,
		obj_t BgL_libnamez00_2853)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 873 */
			{	/* Llib/os.scm 874 */
				obj_t BgL_auxz00_3939;

				if (STRINGP(BgL_libnamez00_2853))
					{	/* Llib/os.scm 874 */
						BgL_auxz00_3939 = BgL_libnamez00_2853;
					}
				else
					{
						obj_t BgL_auxz00_3942;

						BgL_auxz00_3942 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
							BINT(((long) 31347)), BGl_string2723z00zz__osz00,
							BGl_string2679z00zz__osz00, BgL_libnamez00_2853);
						FAILURE(BgL_auxz00_3942, BFALSE, BFALSE);
					}
				return BGl_makezd2sharedzd2libraryzd2namezd2zz__osz00(BgL_auxz00_3939);
			}
		}
	}



/* sleep */
	BGL_EXPORTED_DEF obj_t BGl_sleepz00zz__osz00(long BgL_msz00_43)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 879 */
			bgl_sleep(BgL_msz00_43);
			BUNSPEC;
			return BINT(BgL_msz00_43);
		}
	}



/* _sleep */
	obj_t BGl__sleepz00zz__osz00(obj_t BgL_envz00_2854, obj_t BgL_msz00_2855)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 879 */
			{	/* Llib/os.scm 881 */
				long BgL_msz00_2945;

				{	/* Llib/os.scm 881 */
					obj_t BgL_auxz00_3949;

					if (INTEGERP(BgL_msz00_2855))
						{	/* Llib/os.scm 881 */
							BgL_auxz00_3949 = BgL_msz00_2855;
						}
					else
						{
							obj_t BgL_auxz00_3952;

							BgL_auxz00_3952 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
								BINT(((long) 31674)), BGl_string2724z00zz__osz00,
								BGl_string2725z00zz__osz00, BgL_msz00_2855);
							FAILURE(BgL_auxz00_3952, BFALSE, BFALSE);
						}
					BgL_msz00_2945 = (long) CINT(BgL_auxz00_3949);
				}
				bgl_sleep(BgL_msz00_2945);
				BUNSPEC;
				return BINT(BgL_msz00_2945);
			}
		}
	}



/* _dynamic-load */
	obj_t BGl__dynamiczd2loadzd2zz__osz00(obj_t BgL_envz00_48,
		obj_t BgL_optz00_47)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 900 */
			{	/* Llib/os.scm 900 */
				obj_t BgL_g1879z00_1272;

				BgL_g1879z00_1272 = VECTOR_REF(BgL_optz00_47, (int) (((long) 0)));
				{	/* Llib/os.scm 900 */
					int BgL_aux1881z00_1274;

					BgL_aux1881z00_1274 = VECTOR_LENGTH(BgL_optz00_47);
					switch ((long) (BgL_aux1881z00_1274))
						{
						case ((long) 1):

							{	/* Llib/os.scm 900 */

								{	/* Llib/os.scm 900 */
									obj_t BgL_arg2292z00_1278;

									BgL_arg2292z00_1278 =
										VECTOR_REF(BgL_optz00_47, (int) (((long) 0)));
									{	/* Llib/os.scm 900 */
										obj_t BgL_auxz00_3964;

										if (STRINGP(BgL_arg2292z00_1278))
											{	/* Llib/os.scm 900 */
												BgL_auxz00_3964 = BgL_arg2292z00_1278;
											}
										else
											{
												obj_t BgL_auxz00_3967;

												BgL_auxz00_3967 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2665z00zz__osz00, BINT(((long) 32728)),
													BGl_string2726z00zz__osz00,
													BGl_string2679z00zz__osz00, BgL_arg2292z00_1278);
												FAILURE(BgL_auxz00_3967, BFALSE, BFALSE);
											}
										return
											BGl_dynamiczd2loadzd2zz__osz00(BgL_auxz00_3964,
											string_to_bstring(BGL_DYNAMIC_LOAD_INIT), BFALSE);
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Llib/os.scm 900 */
								obj_t BgL_initz00_1279;

								BgL_initz00_1279 =
									VECTOR_REF(BgL_optz00_47, (int) (((long) 1)));
								{	/* Llib/os.scm 900 */

									{	/* Llib/os.scm 900 */
										obj_t BgL_arg2293z00_1281;

										BgL_arg2293z00_1281 =
											VECTOR_REF(BgL_optz00_47, (int) (((long) 0)));
										{	/* Llib/os.scm 900 */
											obj_t BgL_auxz00_3977;

											if (STRINGP(BgL_arg2293z00_1281))
												{	/* Llib/os.scm 900 */
													BgL_auxz00_3977 = BgL_arg2293z00_1281;
												}
											else
												{
													obj_t BgL_auxz00_3980;

													BgL_auxz00_3980 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2665z00zz__osz00, BINT(((long) 32728)),
														BGl_string2726z00zz__osz00,
														BGl_string2679z00zz__osz00, BgL_arg2293z00_1281);
													FAILURE(BgL_auxz00_3980, BFALSE, BFALSE);
												}
											return
												BGl_dynamiczd2loadzd2zz__osz00(BgL_auxz00_3977,
												BgL_initz00_1279, BFALSE);
										}
									}
								}
							}
							break;
						case ((long) 3):

							{	/* Llib/os.scm 900 */
								obj_t BgL_initz00_1282;

								BgL_initz00_1282 =
									VECTOR_REF(BgL_optz00_47, (int) (((long) 1)));
								{	/* Llib/os.scm 900 */
									obj_t BgL_modulez00_1283;

									BgL_modulez00_1283 =
										VECTOR_REF(BgL_optz00_47, (int) (((long) 2)));
									{	/* Llib/os.scm 900 */

										{	/* Llib/os.scm 900 */
											obj_t BgL_arg2294z00_1284;

											BgL_arg2294z00_1284 =
												VECTOR_REF(BgL_optz00_47, (int) (((long) 0)));
											{	/* Llib/os.scm 900 */
												obj_t BgL_auxz00_3991;

												if (STRINGP(BgL_arg2294z00_1284))
													{	/* Llib/os.scm 900 */
														BgL_auxz00_3991 = BgL_arg2294z00_1284;
													}
												else
													{
														obj_t BgL_auxz00_3994;

														BgL_auxz00_3994 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2665z00zz__osz00, BINT(((long) 32728)),
															BGl_string2726z00zz__osz00,
															BGl_string2679z00zz__osz00, BgL_arg2294z00_1284);
														FAILURE(BgL_auxz00_3994, BFALSE, BFALSE);
													}
												return
													BGl_dynamiczd2loadzd2zz__osz00(BgL_auxz00_3991,
													BgL_initz00_1282, BgL_modulez00_1283);
											}
										}
									}
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* dynamic-load */
	BGL_EXPORTED_DEF obj_t BGl_dynamiczd2loadzd2zz__osz00(obj_t BgL_libz00_44,
		obj_t BgL_initz00_45, obj_t BgL_modulez00_46)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 900 */
			{	/* Llib/os.scm 905 */
				obj_t BgL_flibz00_1287;

				obj_t BgL_modz00_1288;

				BgL_flibz00_1287 =
					BGl_findzd2filezf2pathz20zz__osz00(BgL_libz00_44,
					BGl_za2dynamiczd2loadzd2pathza2z00zz__osz00);
				if (CBOOL(BgL_modulez00_46))
					{	/* Llib/os.scm 915 */
						obj_t BgL_arg2308z00_1304;

						BgL_arg2308z00_1304 = SYMBOL_TO_STRING(BgL_modulez00_46);
						BgL_modz00_1288 =
							bigloo_module_mangle(BGl_string2727z00zz__osz00,
							BgL_arg2308z00_1304);
					}
				else
					{	/* Llib/os.scm 912 */
						BgL_modz00_1288 = BGl_string2682z00zz__osz00;
					}
				if (STRINGP(BgL_flibz00_1287))
					{	/* Llib/os.scm 922 */
						obj_t BgL_initz00_1290;

						if (CBOOL(BgL_initz00_45))
							{	/* Llib/os.scm 922 */
								BgL_initz00_1290 = BgL_initz00_45;
							}
						else
							{	/* Llib/os.scm 922 */
								BgL_initz00_1290 = BGl_string2682z00zz__osz00;
							}
						{	/* Llib/os.scm 923 */
							int BgL_aux1842z00_1292;

							BgL_aux1842z00_1292 =
								bgl_dload(BSTRING_TO_STRING(BgL_flibz00_1287),
								BSTRING_TO_STRING(BgL_initz00_1290),
								BSTRING_TO_STRING(BgL_modz00_1288));
							switch ((long) (BgL_aux1842z00_1292))
								{
								case ((long) 0):

									return BgL_flibz00_1287;
									break;
								case ((long) 1):

									{	/* Llib/os.scm 927 */
										char *BgL_arg2297z00_1294;

										BgL_arg2297z00_1294 = bgl_dload_error();
										{	/* Llib/os.scm 927 */
											obj_t BgL_procz00_2541;

											obj_t BgL_objz00_2543;

											BgL_procz00_2541 = BgL_flibz00_1287;
											BgL_objz00_2543 = BgL_flibz00_1287;
											return
												BGl_errorz00zz__errorz00(string_append
												(BGl_string2728z00zz__osz00, BgL_procz00_2541),
												string_to_bstring(BgL_arg2297z00_1294),
												BgL_objz00_2543);
										}
									}
									break;
								case ((long) 2):

									{	/* Llib/os.scm 930 */
										bool_t BgL_testz00_4018;

										if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00
											(BgL_initz00_1290,
												string_to_bstring(BGL_DYNAMIC_LOAD_INIT)))
											{	/* Llib/os.scm 930 */
												if (CBOOL(BgL_modulez00_46))
													{	/* Llib/os.scm 930 */
														BgL_testz00_4018 = ((bool_t) 0);
													}
												else
													{	/* Llib/os.scm 930 */
														BgL_testz00_4018 = ((bool_t) 1);
													}
											}
										else
											{	/* Llib/os.scm 930 */
												BgL_testz00_4018 = ((bool_t) 0);
											}
										if (BgL_testz00_4018)
											{	/* Llib/os.scm 931 */
												obj_t BgL_arg2300z00_1296;

												BgL_arg2300z00_1296 =
													string_append(BGl_string2729z00zz__osz00,
													BgL_flibz00_1287);
												{	/* Llib/os.scm 931 */
													obj_t BgL_list2302z00_1298;

													{	/* Llib/os.scm 931 */
														obj_t BgL_arg2303z00_1299;

														{	/* Llib/os.scm 931 */
															obj_t BgL_arg2304z00_1300;

															BgL_arg2304z00_1300 =
																MAKE_PAIR(BgL_initz00_1290, BNIL);
															BgL_arg2303z00_1299 =
																MAKE_PAIR(BGl_string2730z00zz__osz00,
																BgL_arg2304z00_1300);
														}
														BgL_list2302z00_1298 =
															MAKE_PAIR(BgL_arg2300z00_1296,
															BgL_arg2303z00_1299);
													}
													return
														BGl_warningz00zz__errorz00(BgL_list2302z00_1298);
												}
											}
										else
											{	/* Llib/os.scm 930 */
												if (bigloo_strcmp(BgL_initz00_1290,
														BGl_string2682z00zz__osz00))
													{	/* Llib/os.scm 935 */
														obj_t BgL_procz00_2547;

														BgL_procz00_2547 = BgL_flibz00_1287;
														return
															BGl_errorz00zz__errorz00(string_append
															(BGl_string2728z00zz__osz00, BgL_procz00_2547),
															BGl_string2731z00zz__osz00, BgL_modulez00_46);
													}
												else
													{	/* Llib/os.scm 939 */
														obj_t BgL_procz00_2551;

														BgL_procz00_2551 = BgL_flibz00_1287;
														return
															BGl_errorz00zz__errorz00(string_append
															(BGl_string2728z00zz__osz00, BgL_procz00_2551),
															BGl_string2732z00zz__osz00, BgL_initz00_1290);
													}
											}
									}
									break;
								case ((long) 3):

									return
										BGl_errorz00zz__errorz00(BGl_string2728z00zz__osz00,
										BGl_string2733z00zz__osz00, BgL_flibz00_1287);
									break;
								default:
									return BUNSPEC;
								}
						}
					}
				else
					{	/* Llib/os.scm 920 */
						return
							BGl_errorz00zz__errorz00(BGl_string2728z00zz__osz00,
							BGl_string2734z00zz__osz00, BgL_libz00_44);
					}
			}
		}
	}



/* dynamic-unload */
	BGL_EXPORTED_DEF obj_t BGl_dynamiczd2unloadzd2zz__osz00(obj_t BgL_libz00_49)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 948 */
			{	/* Llib/os.scm 949 */
				obj_t BgL_flibz00_1315;

				BgL_flibz00_1315 =
					BGl_findzd2filezf2pathz20zz__osz00(BgL_libz00_49,
					BGl_za2dynamiczd2loadzd2pathza2z00zz__osz00);
				if (STRINGP(BgL_flibz00_1315))
					{	/* Llib/os.scm 958 */
						int BgL_arg2313z00_1317;

						BgL_arg2313z00_1317 = bgl_dunload(BgL_flibz00_1315);
						return BBOOL(((long) (BgL_arg2313z00_1317) == ((long) 0)));
					}
				else
					{	/* Llib/os.scm 956 */
						return
							BGl_errorz00zz__errorz00(BGl_symbol2735z00zz__osz00,
							BGl_string2734z00zz__osz00, BgL_libz00_49);
					}
			}
		}
	}



/* _dynamic-unload */
	obj_t BGl__dynamiczd2unloadzd2zz__osz00(obj_t BgL_envz00_2856,
		obj_t BgL_libz00_2857)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 948 */
			{	/* Llib/os.scm 949 */
				obj_t BgL_auxz00_4047;

				if (STRINGP(BgL_libz00_2857))
					{	/* Llib/os.scm 949 */
						BgL_auxz00_4047 = BgL_libz00_2857;
					}
				else
					{
						obj_t BgL_auxz00_4050;

						BgL_auxz00_4050 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
							BINT(((long) 34246)), BGl_string2737z00zz__osz00,
							BGl_string2679z00zz__osz00, BgL_libz00_2857);
						FAILURE(BgL_auxz00_4050, BFALSE, BFALSE);
					}
				return BGl_dynamiczd2unloadzd2zz__osz00(BgL_auxz00_4047);
			}
		}
	}



/* unix-path->list */
	BGL_EXPORTED_DEF obj_t BGl_unixzd2pathzd2ze3listze3zz__osz00(obj_t
		BgL_strz00_50)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 963 */
			{	/* Llib/os.scm 964 */
				long BgL_stopz00_1319;

				BgL_stopz00_1319 = STRING_LENGTH(BgL_strz00_50);
				{
					long BgL_markz00_1323;

					long BgL_rz00_1324;

					obj_t BgL_resz00_1325;

					BgL_markz00_1323 = ((long) 0);
					BgL_rz00_1324 = ((long) 0);
					BgL_resz00_1325 = BNIL;
				BgL_zc3anonymousza32315ze3z83_1326:
					if ((BgL_stopz00_1319 == BgL_rz00_1324))
						{	/* Llib/os.scm 971 */
							obj_t BgL_resz00_1328;

							if ((BgL_markz00_1323 < BgL_rz00_1324))
								{	/* Llib/os.scm 971 */
									BgL_resz00_1328 =
										MAKE_PAIR(c_substring(BgL_strz00_50, BgL_markz00_1323,
											BgL_rz00_1324), BgL_resz00_1325);
								}
							else
								{	/* Llib/os.scm 971 */
									BgL_resz00_1328 = BgL_resz00_1325;
								}
							return bgl_reverse_bang(BgL_resz00_1328);
						}
					else
						{	/* Llib/os.scm 970 */
							if (
								(STRING_REF(BgL_strz00_50, BgL_rz00_1324) ==
									(unsigned char) (PATH_SEPARATOR)))
								{	/* Llib/os.scm 975 */
									if ((BgL_markz00_1323 < BgL_rz00_1324))
										{	/* Llib/os.scm 977 */
											long BgL_arg2321z00_1333;

											long BgL_arg2322z00_1334;

											obj_t BgL_arg2323z00_1335;

											BgL_arg2321z00_1333 = (((long) 1) + BgL_rz00_1324);
											BgL_arg2322z00_1334 = (((long) 1) + BgL_rz00_1324);
											BgL_arg2323z00_1335 =
												MAKE_PAIR(c_substring(BgL_strz00_50, BgL_markz00_1323,
													BgL_rz00_1324), BgL_resz00_1325);
											{
												obj_t BgL_resz00_4075;

												long BgL_rz00_4074;

												long BgL_markz00_4073;

												BgL_markz00_4073 = BgL_arg2321z00_1333;
												BgL_rz00_4074 = BgL_arg2322z00_1334;
												BgL_resz00_4075 = BgL_arg2323z00_1335;
												BgL_resz00_1325 = BgL_resz00_4075;
												BgL_rz00_1324 = BgL_rz00_4074;
												BgL_markz00_1323 = BgL_markz00_4073;
												goto BgL_zc3anonymousza32315ze3z83_1326;
											}
										}
									else
										{
											long BgL_rz00_4078;

											long BgL_markz00_4076;

											BgL_markz00_4076 = (((long) 1) + BgL_rz00_1324);
											BgL_rz00_4078 = (((long) 1) + BgL_rz00_1324);
											BgL_rz00_1324 = BgL_rz00_4078;
											BgL_markz00_1323 = BgL_markz00_4076;
											goto BgL_zc3anonymousza32315ze3z83_1326;
										}
								}
							else
								{
									long BgL_rz00_4080;

									BgL_rz00_4080 = (((long) 1) + BgL_rz00_1324);
									BgL_rz00_1324 = BgL_rz00_4080;
									goto BgL_zc3anonymousza32315ze3z83_1326;
								}
						}
				}
			}
		}
	}



/* _unix-path->list */
	obj_t BGl__unixzd2pathzd2ze3listze3zz__osz00(obj_t BgL_envz00_2858,
		obj_t BgL_strz00_2859)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 963 */
			{	/* Llib/os.scm 964 */
				obj_t BgL_auxz00_4082;

				if (STRINGP(BgL_strz00_2859))
					{	/* Llib/os.scm 964 */
						BgL_auxz00_4082 = BgL_strz00_2859;
					}
				else
					{
						obj_t BgL_auxz00_4085;

						BgL_auxz00_4085 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
							BINT(((long) 34790)), BGl_string2738z00zz__osz00,
							BGl_string2679z00zz__osz00, BgL_strz00_2859);
						FAILURE(BgL_auxz00_4085, BFALSE, BFALSE);
					}
				return BGl_unixzd2pathzd2ze3listze3zz__osz00(BgL_auxz00_4082);
			}
		}
	}



/* getuid */
	BGL_EXPORTED_DEF int BGl_getuidz00zz__osz00()
	{
		AN_OBJECT;
		{	/* Llib/os.scm 985 */
			return bgl_getuid();
		}
	}



/* _getuid */
	obj_t BGl__getuidz00zz__osz00(obj_t BgL_envz00_2860)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 985 */
			return BINT(bgl_getuid());
		}
	}



/* setuid */
	BGL_EXPORTED_DEF obj_t BGl_setuidz00zz__osz00(int BgL_uidz00_51)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 995 */
			return BINT(bgl_getuid());
		}
	}



/* _setuid */
	obj_t BGl__setuidz00zz__osz00(obj_t BgL_envz00_2861, obj_t BgL_uidz00_2862)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 995 */
			{	/* Llib/os.scm 998 */
				int BgL_uidz00_2946;

				{	/* Llib/os.scm 998 */
					obj_t BgL_auxz00_4095;

					if (INTEGERP(BgL_uidz00_2862))
						{	/* Llib/os.scm 998 */
							BgL_auxz00_4095 = BgL_uidz00_2862;
						}
					else
						{
							obj_t BgL_auxz00_4098;

							BgL_auxz00_4098 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
								BINT(((long) 35845)), BGl_string2739z00zz__osz00,
								BGl_string2667z00zz__osz00, BgL_uidz00_2862);
							FAILURE(BgL_auxz00_4098, BFALSE, BFALSE);
						}
					BgL_uidz00_2946 = CINT(BgL_auxz00_4095);
				}
				return BINT(bgl_getuid());
			}
		}
	}



/* getpwnam */
	BGL_EXPORTED_DEF obj_t BGl_getpwnamz00zz__osz00(obj_t BgL_namez00_52)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 1005 */
			return bgl_getpwnam(BSTRING_TO_STRING(BgL_namez00_52));
		}
	}



/* _getpwnam */
	obj_t BGl__getpwnamz00zz__osz00(obj_t BgL_envz00_2863, obj_t BgL_namez00_2864)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 1005 */
			{	/* Llib/os.scm 1008 */
				obj_t BgL_auxz00_4107;

				if (STRINGP(BgL_namez00_2864))
					{	/* Llib/os.scm 1008 */
						BgL_auxz00_4107 = BgL_namez00_2864;
					}
				else
					{
						obj_t BgL_auxz00_4110;

						BgL_auxz00_4110 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
							BINT(((long) 36210)), BGl_string2740z00zz__osz00,
							BGl_string2679z00zz__osz00, BgL_namez00_2864);
						FAILURE(BgL_auxz00_4110, BFALSE, BFALSE);
					}
				return BGl_getpwnamz00zz__osz00(BgL_auxz00_4107);
			}
		}
	}



/* getpwuid */
	BGL_EXPORTED_DEF obj_t BGl_getpwuidz00zz__osz00(int BgL_uidz00_53)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 1015 */
			return bgl_getpwuid(BgL_uidz00_53);
		}
	}



/* _getpwuid */
	obj_t BGl__getpwuidz00zz__osz00(obj_t BgL_envz00_2865, obj_t BgL_uidz00_2866)
	{
		AN_OBJECT;
		{	/* Llib/os.scm 1015 */
			{	/* Llib/os.scm 1018 */
				int BgL_uidz00_2947;

				{	/* Llib/os.scm 1018 */
					obj_t BgL_auxz00_4116;

					if (INTEGERP(BgL_uidz00_2866))
						{	/* Llib/os.scm 1018 */
							BgL_auxz00_4116 = BgL_uidz00_2866;
						}
					else
						{
							obj_t BgL_auxz00_4119;

							BgL_auxz00_4119 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2665z00zz__osz00,
								BINT(((long) 36538)), BGl_string2741z00zz__osz00,
								BGl_string2667z00zz__osz00, BgL_uidz00_2866);
							FAILURE(BgL_auxz00_4119, BFALSE, BFALSE);
						}
					BgL_uidz00_2947 = CINT(BgL_auxz00_4116);
				}
				return bgl_getpwuid(BgL_uidz00_2947);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__osz00()
	{
		AN_OBJECT;
		{	/* Llib/os.scm 18 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__osz00()
	{
		AN_OBJECT;
		{	/* Llib/os.scm 18 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__osz00()
	{
		AN_OBJECT;
		{	/* Llib/os.scm 18 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2742z00zz__osz00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2742z00zz__osz00));
		}
	}

#ifdef __cplusplus
}
#endif
