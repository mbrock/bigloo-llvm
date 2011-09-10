/*===========================================================================*/
/*   (Llib/bigloo.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Llib/bigloo.scm -indent -o objs/obj_u/Llib/bigloo.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t c_substring(obj_t, long, long);
	extern obj_t bgl_bmem_reset();
	BGL_EXPORTED_DECL bool_t BGl_opaquezf3zf3zz__biglooz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__biglooz00();
	static obj_t BGl_symbol2356z00zz__biglooz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t bigloo_class_mangledp(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_opaquezd2nilzd2zz__biglooz00();
	extern obj_t make_string(long, unsigned char);
	static obj_t BGl_symbol2388z00zz__biglooz00 = BUNSPEC;
	extern bool_t bigloo_strcmp(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_procedurezd2attrzd2zz__biglooz00(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl__bigloozd2classzd2mangledzf3zf3zz__biglooz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__biglooz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t bgl_exit_mutex();
	static obj_t BGl__bigloozd2exitzd2applyz00zz__biglooz00(obj_t, obj_t);
	static obj_t BGl__bigloozd2mangledzf3z21zz__biglooz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bigloo_mangle(obj_t);
	static obj_t BGl__timez00zz__biglooz00(obj_t, obj_t);
	static long BGl_manglezd2atz12zc0zz__biglooz00(obj_t, obj_t, long, long);
	static obj_t BGl__procedurezd2arityzd2zz__biglooz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__biglooz00();
	extern obj_t blit_string(obj_t, long, obj_t, long, long);
	BGL_EXPORTED_DECL obj_t bigloo_demangle(obj_t);
	extern obj_t string_to_bstring(char *);
	static obj_t BGl_za2releaseza2z00zz__biglooz00 = BUNSPEC;
	extern bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl__bmemzd2resetz12zc0zz__biglooz00(obj_t);
	static obj_t BGl__registerzd2exitzd2functionz12z12zz__biglooz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bigloo_module_mangle(obj_t, obj_t);
	static obj_t BGl__opaquezd2nilzd2zz__biglooz00(obj_t);
	static obj_t BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t bigloo_class_demangle(obj_t);
	static obj_t BGl_za2modulesza2z00zz__biglooz00 = BUNSPEC;
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__checkzd2versionz12zc0zz__biglooz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_procedurezd2attrzd2setz12z12zz__biglooz00(obj_t,
		obj_t);
	static obj_t BGl__unspecifiedz00zz__biglooz00(obj_t);
	static obj_t BGl__bigloozd2modulezd2manglez00zz__biglooz00(obj_t, obj_t,
		obj_t);
	static long BGl_charzd2ze3digitz31zz__biglooz00(unsigned char);
	static obj_t BGl__procedurezd2attrzd2setz12z12zz__biglooz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__bigloozd2classzd2demanglez00zz__biglooz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cnstzf3zf3zz__biglooz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__biglooz00();
	static obj_t BGl__bigloozd2exitzd2mutexz00zz__biglooz00(obj_t);
	extern obj_t string_append(obj_t, obj_t);
	static obj_t BGl_za2levelza2z00zz__biglooz00 = BUNSPEC;
	static obj_t BGl__bigloozd2demanglezd2zz__biglooz00(obj_t, obj_t);
	static obj_t BGl__procedurezd2attrzd2zz__biglooz00(obj_t, obj_t);
	static long BGl_getzd28bitszd2integerz00zz__biglooz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__biglooz00();
	BGL_EXPORTED_DECL obj_t
		BGl_registerzd2exitzd2functionz12z12zz__biglooz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_bmemzd2resetz12zc0zz__biglooz00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_za2exitzd2mutexza2zd2zz__biglooz00 = BUNSPEC;
	static obj_t BGl_bigloozd2demanglezd2atz00zz__biglooz00(obj_t, long, obj_t);
	BGL_EXPORTED_DECL obj_t bigloo_exit_apply(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_bigloozd2needzd2manglingzf3zf3zz__biglooz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_timez00zz__biglooz00(obj_t);
	BGL_EXPORTED_DECL bool_t bigloo_mangledp(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_unspecifiedz00zz__biglooz00();
	static obj_t BGl__bigloozd2needzd2manglingzf3zf3zz__biglooz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__biglooz00();
	static obj_t BGl__cnstzf3zf3zz__biglooz00(obj_t, obj_t);
	BGL_EXPORTED_DECL int BGl_procedurezd2arityzd2zz__biglooz00(obj_t);
	static obj_t BGl__opaquezf3zf3zz__biglooz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_checkzd2versionz12zc0zz__biglooz00(obj_t, char *,
		obj_t);
	extern bool_t bigloo_strncmp(obj_t, obj_t, long);
	static obj_t BGl__bigloozd2manglezd2zz__biglooz00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2365z00zz__biglooz00,
		BgL_bgl_string2365za700za7za7_2392za7, "procedure", 9);
	      DEFINE_STRING(BGl_string2366z00zz__biglooz00,
		BgL_bgl_string2366za700za7za7_2393za7, "_procedure-attr", 15);
	      DEFINE_STRING(BGl_string2367z00zz__biglooz00,
		BgL_bgl_string2367za700za7za7_2394za7, "_procedure-attr-set!", 20);
	      DEFINE_STRING(BGl_string2368z00zz__biglooz00,
		BgL_bgl_string2368za700za7za7_2395za7, "0123456789abcdef", 16);
	      DEFINE_STRING(BGl_string2370z00zz__biglooz00,
		BgL_bgl_string2370za700za7za7_2396za7, "Can't mangle empty string", 25);
	      DEFINE_STRING(BGl_string2369z00zz__biglooz00,
		BgL_bgl_string2369za700za7za7_2397za7, "bigloo-mangle-string", 20);
	      DEFINE_STRING(BGl_string2371z00zz__biglooz00,
		BgL_bgl_string2371za700za7za7_2398za7, "BgL_", 4);
	      DEFINE_STRING(BGl_string2372z00zz__biglooz00,
		BgL_bgl_string2372za700za7za7_2399za7, "_bigloo-mangle", 14);
	      DEFINE_STRING(BGl_string2373z00zz__biglooz00,
		BgL_bgl_string2373za700za7za7_2400za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2374z00zz__biglooz00,
		BgL_bgl_string2374za700za7za7_2401za7, "BGl_", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2classzd2demanglezd2envzd2zz__biglooz00,
		BgL_bgl__biglooza7d2classza72402z00,
		BGl__bigloozd2classzd2demanglez00zz__biglooz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2375z00zz__biglooz00,
		BgL_bgl_string2375za700za7za7_2403za7, "_bigloo-module-mangle", 21);
	      DEFINE_STRING(BGl_string2376z00zz__biglooz00,
		BgL_bgl_string2376za700za7za7_2404za7, "_bigloo-mangled?", 16);
	      DEFINE_STRING(BGl_string2377z00zz__biglooz00,
		BgL_bgl_string2377za700za7za7_2405za7, "_bigloo-need-mangling?", 22);
	      DEFINE_STRING(BGl_string2378z00zz__biglooz00,
		BgL_bgl_string2378za700za7za7_2406za7, "bigloo-demangle", 15);
	      DEFINE_STRING(BGl_string2380z00zz__biglooz00,
		BgL_bgl_string2380za700za7za7_2407za7, "Illegal mangling on", 19);
	      DEFINE_STRING(BGl_string2379z00zz__biglooz00,
		BgL_bgl_string2379za700za7za7_2408za7, "Not a Bigloo mangled identifier",
		31);
	      DEFINE_STRING(BGl_string2381z00zz__biglooz00,
		BgL_bgl_string2381za700za7za7_2409za7, "_bigloo-demangle", 16);
	      DEFINE_STRING(BGl_string2382z00zz__biglooz00,
		BgL_bgl_string2382za700za7za7_2410za7, "_bigloo-class-mangled?", 22);
	      DEFINE_STRING(BGl_string2383z00zz__biglooz00,
		BgL_bgl_string2383za700za7za7_2411za7, "_bglt", 5);
	      DEFINE_STRING(BGl_string2384z00zz__biglooz00,
		BgL_bgl_string2384za700za7za7_2412za7, "_bigloo-class-demangle", 22);
	      DEFINE_STRING(BGl_string2385z00zz__biglooz00,
		BgL_bgl_string2385za700za7za7_2413za7, "bigloo-exit-register!", 21);
	      DEFINE_STRING(BGl_string2386z00zz__biglooz00,
		BgL_bgl_string2386za700za7za7_2414za7, "Wrong procedure arity", 21);
	      DEFINE_STRING(BGl_string2387z00zz__biglooz00,
		BgL_bgl_string2387za700za7za7_2415za7, "_register-exit-function!", 24);
	      DEFINE_STRING(BGl_string2390z00zz__biglooz00,
		BgL_bgl_string2390za700za7za7_2416za7, "_time", 5);
	      DEFINE_STRING(BGl_string2389z00zz__biglooz00,
		BgL_bgl_string2389za700za7za7_2417za7, "time", 4);
	      DEFINE_STRING(BGl_string2391z00zz__biglooz00,
		BgL_bgl_string2391za700za7za7_2418za7, "__bigloo", 8);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bmemzd2resetz12zd2envz12zz__biglooz00,
		BgL_bgl__bmemza7d2resetza7122419z00, BGl__bmemzd2resetz12zc0zz__biglooz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2modulezd2manglezd2envzd2zz__biglooz00,
		BgL_bgl__biglooza7d2module2420za7,
		BGl__bigloozd2modulezd2manglez00zz__biglooz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2attrzd2setz12zd2envzc0zz__biglooz00,
		BgL_bgl__procedureza7d2att2421za7,
		BGl__procedurezd2attrzd2setz12z12zz__biglooz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_unspecifiedzd2envzd2zz__biglooz00,
		BgL_bgl__unspecifiedza700za72422z00, BGl__unspecifiedz00zz__biglooz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_opaquezf3zd2envz21zz__biglooz00,
		BgL_bgl__opaqueza7f3za7f3za7za7_2423z00, BGl__opaquezf3zf3zz__biglooz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bigloozd2exitzd2mutexzd2envzd2zz__biglooz00,
		BgL_bgl__biglooza7d2exitza7d2424z00,
		BGl__bigloozd2exitzd2mutexz00zz__biglooz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_procedurezd2arityzd2envz00zz__biglooz00,
		BgL_bgl__procedureza7d2ari2425za7, BGl__procedurezd2arityzd2zz__biglooz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bigloozd2exitzd2applyzd2envzd2zz__biglooz00,
		BgL_bgl__biglooza7d2exitza7d2426z00,
		BGl__bigloozd2exitzd2applyz00zz__biglooz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2needzd2manglingzf3zd2envz21zz__biglooz00,
		BgL_bgl__biglooza7d2needza7d2427z00,
		BGl__bigloozd2needzd2manglingzf3zf3zz__biglooz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cnstzf3zd2envz21zz__biglooz00,
		BgL_bgl__cnstza7f3za7f3za7za7__b2428z00, BGl__cnstzf3zf3zz__biglooz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bigloozd2manglezd2envz00zz__biglooz00,
		BgL_bgl__biglooza7d2mangle2429za7, BGl__bigloozd2manglezd2zz__biglooz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bigloozd2mangledzf3zd2envzf3zz__biglooz00,
		BgL_bgl__biglooza7d2mangle2430za7, BGl__bigloozd2mangledzf3z21zz__biglooz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_procedurezd2attrzd2envz00zz__biglooz00,
		BgL_bgl__procedureza7d2att2431za7, BGl__procedurezd2attrzd2zz__biglooz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2classzd2mangledzf3zd2envz21zz__biglooz00,
		BgL_bgl__biglooza7d2classza72432z00,
		BGl__bigloozd2classzd2mangledzf3zf3zz__biglooz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_opaquezd2nilzd2envz00zz__biglooz00,
		BgL_bgl__opaqueza7d2nilza7d22433z00, BGl__opaquezd2nilzd2zz__biglooz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_timezd2envzd2zz__biglooz00,
		BgL_bgl__timeza700za7za7__bigl2434za7, BGl__timez00zz__biglooz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_checkzd2versionz12zd2envz12zz__biglooz00,
		BgL_bgl__checkza7d2version2435za7, BGl__checkzd2versionz12zc0zz__biglooz00,
		0L, BUNSPEC, 3);
	extern obj_t BGl_stringzd2envzd2zz__r4_strings_6_7z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bigloozd2demanglezd2envz00zz__biglooz00,
		BgL_bgl__biglooza7d2demang2436za7, BGl__bigloozd2demanglezd2zz__biglooz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_registerzd2exitzd2functionz12zd2envzc0zz__biglooz00,
		BgL_bgl__registerza7d2exit2437za7,
		BGl__registerzd2exitzd2functionz12z12zz__biglooz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2357z00zz__biglooz00,
		BgL_bgl_string2357za700za7za7_2438za7, "bigloo-exit", 11);
	      DEFINE_STRING(BGl_string2358z00zz__biglooz00,
		BgL_bgl_string2358za700za7za7_2439za7, " (level 0)", 10);
	      DEFINE_STRING(BGl_string2360z00zz__biglooz00,
		BgL_bgl_string2360za700za7za7_2440za7, "and other by: ", 14);
	      DEFINE_STRING(BGl_string2359z00zz__biglooz00,
		BgL_bgl_string2359za700za7za7_2441za7,
		"Some modules have been compiled by: ", 36);
	      DEFINE_STRING(BGl_string2361z00zz__biglooz00,
		BgL_bgl_string2361za700za7za7_2442za7,
		"/tmp/bigloo/runtime/Llib/bigloo.scm", 35);
	      DEFINE_STRING(BGl_string2362z00zz__biglooz00,
		BgL_bgl_string2362za700za7za7_2443za7, "_check-version!", 15);
	      DEFINE_STRING(BGl_string2363z00zz__biglooz00,
		BgL_bgl_string2363za700za7za7_2444za7, "string", 6);
	      DEFINE_STRING(BGl_string2364z00zz__biglooz00,
		BgL_bgl_string2364za700za7za7_2445za7, "_procedure-arity", 16);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long
		BgL_checksumz00_2121, char *BgL_fromz00_2122)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__biglooz00))
				{
					BGl_requirezd2initializa7ationz75zz__biglooz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__biglooz00();
					BGl_importedzd2moduleszd2initz00zz__biglooz00();
					BGl_toplevelzd2initzd2zz__biglooz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__biglooz00()
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 14 */
			BGl_symbol2356z00zz__biglooz00 =
				bstring_to_symbol(BGl_string2357z00zz__biglooz00);
			return (BGl_symbol2388z00zz__biglooz00 =
				bstring_to_symbol(BGl_string2389z00zz__biglooz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__biglooz00()
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 14 */
			BGl_za2releaseza2z00zz__biglooz00 = BFALSE;
			BGl_za2levelza2z00zz__biglooz00 = BFALSE;
			BGl_za2modulesza2z00zz__biglooz00 = BNIL;
			BGl_za2exitzd2mutexza2zd2zz__biglooz00 =
				bgl_make_mutex(BGl_symbol2356z00zz__biglooz00);
			return (BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00 =
				BNIL, BUNSPEC);
		}
	}



/* check-version! */
	BGL_EXPORTED_DEF obj_t BGl_checkzd2versionz12zc0zz__biglooz00(obj_t
		BgL_modulez00_1, char *BgL_releasez00_2, obj_t BgL_levelz00_3)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 333 */
			if (STRINGP(BGl_za2releaseza2z00zz__biglooz00))
				{	/* Llib/bigloo.scm 339 */
					bool_t BgL_testz00_2134;

					{	/* Llib/bigloo.scm 339 */
						bool_t BgL_testz00_2135;

						{	/* Llib/bigloo.scm 339 */
							long BgL_minz00_809;

							{	/* Llib/bigloo.scm 339 */
								long BgL_arg1920z00_813;

								{	/* Llib/bigloo.scm 339 */
									long BgL_xz00_815;

									long BgL_yz00_816;

									BgL_xz00_815 =
										STRING_LENGTH(string_to_bstring(BgL_releasez00_2));
									BgL_yz00_816 =
										STRING_LENGTH(BGl_za2releaseza2z00zz__biglooz00);
									if ((BgL_xz00_815 < BgL_yz00_816))
										{	/* Llib/bigloo.scm 339 */
											BgL_arg1920z00_813 = BgL_xz00_815;
										}
									else
										{	/* Llib/bigloo.scm 339 */
											BgL_arg1920z00_813 = BgL_yz00_816;
										}
								}
								BgL_minz00_809 = (BgL_arg1920z00_813 - ((long) 1));
							}
							if (bigloo_strcmp(c_substring(string_to_bstring(BgL_releasez00_2),
										((long) 0), BgL_minz00_809),
									c_substring(BGl_za2releaseza2z00zz__biglooz00, ((long) 0),
										BgL_minz00_809)))
								{	/* Llib/bigloo.scm 342 */
									BgL_testz00_2135 = ((bool_t) 0);
								}
							else
								{	/* Llib/bigloo.scm 342 */
									BgL_testz00_2135 = ((bool_t) 1);
								}
						}
						if (BgL_testz00_2135)
							{	/* Llib/bigloo.scm 339 */
								BgL_testz00_2134 = ((bool_t) 1);
							}
						else
							{	/* Llib/bigloo.scm 339 */
								if (CHARP(BgL_levelz00_3))
									{	/* Llib/bigloo.scm 344 */
										if (CHARP(BGl_za2levelza2z00zz__biglooz00))
											{	/* Llib/bigloo.scm 344 */
												if (
													(CCHAR(BGl_za2levelza2z00zz__biglooz00) ==
														CCHAR(BgL_levelz00_3)))
													{	/* Llib/bigloo.scm 344 */
														BgL_testz00_2134 = ((bool_t) 0);
													}
												else
													{	/* Llib/bigloo.scm 344 */
														BgL_testz00_2134 = ((bool_t) 1);
													}
											}
										else
											{	/* Llib/bigloo.scm 344 */
												BgL_testz00_2134 = ((bool_t) 0);
											}
									}
								else
									{	/* Llib/bigloo.scm 344 */
										BgL_testz00_2134 = ((bool_t) 0);
									}
							}
					}
					if (BgL_testz00_2134)
						{	/* Llib/bigloo.scm 351 */
							obj_t BgL_arg1906z00_792;

							obj_t BgL_arg1907z00_793;

							obj_t BgL_arg1908z00_794;

							{	/* Llib/bigloo.scm 351 */
								obj_t BgL_arg1910z00_796;

								{	/* Llib/bigloo.scm 352 */
									obj_t BgL_releasez00_1491;

									obj_t BgL_levelz00_1492;

									BgL_releasez00_1491 = BGl_za2releaseza2z00zz__biglooz00;
									BgL_levelz00_1492 = BGl_za2levelza2z00zz__biglooz00;
									if (CHARP(BgL_levelz00_1492))
										{	/* Llib/bigloo.scm 352 */
											obj_t BgL_sz00_1494;

											BgL_sz00_1494 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BGl_string2358z00zz__biglooz00);
											{	/* Llib/bigloo.scm 352 */
												unsigned char BgL_auxz00_2158;

												BgL_auxz00_2158 = CCHAR(BgL_levelz00_1492);
												STRING_SET(BgL_sz00_1494, ((long) 8), BgL_auxz00_2158);
											}
											BgL_arg1910z00_796 =
												string_append(BgL_releasez00_1491, BgL_sz00_1494);
										}
									else
										{	/* Llib/bigloo.scm 352 */
											BgL_arg1910z00_796 = BgL_releasez00_1491;
										}
								}
								BgL_arg1906z00_792 =
									string_append(BGl_string2359z00zz__biglooz00,
									BgL_arg1910z00_796);
							}
							{	/* Llib/bigloo.scm 353 */
								obj_t BgL_arg1912z00_798;

								if (CHARP(BgL_levelz00_3))
									{	/* Llib/bigloo.scm 354 */
										obj_t BgL_sz00_1502;

										BgL_sz00_1502 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BGl_string2358z00zz__biglooz00);
										{	/* Llib/bigloo.scm 354 */
											unsigned char BgL_auxz00_2166;

											BgL_auxz00_2166 = CCHAR(BgL_levelz00_3);
											STRING_SET(BgL_sz00_1502, ((long) 8), BgL_auxz00_2166);
										}
										BgL_arg1912z00_798 =
											string_append(string_to_bstring(BgL_releasez00_2),
											BgL_sz00_1502);
									}
								else
									{	/* Llib/bigloo.scm 354 */
										BgL_arg1912z00_798 = string_to_bstring(BgL_releasez00_2);
									}
								BgL_arg1907z00_793 =
									string_append(BGl_string2360z00zz__biglooz00,
									BgL_arg1912z00_798);
							}
							BgL_arg1908z00_794 =
								MAKE_PAIR(BgL_modulez00_1, BGl_za2modulesza2z00zz__biglooz00);
							return
								BGl_errorz00zz__errorz00(BgL_arg1906z00_792, BgL_arg1907z00_793,
								BgL_arg1908z00_794);
						}
					else
						{	/* Llib/bigloo.scm 339 */
							return (BGl_za2modulesza2z00zz__biglooz00 =
								MAKE_PAIR(BgL_modulez00_1, BGl_za2modulesza2z00zz__biglooz00),
								BUNSPEC);
						}
				}
			else
				{	/* Llib/bigloo.scm 335 */
					{	/* Llib/bigloo.scm 336 */
						obj_t BgL_list1923z00_818;

						BgL_list1923z00_818 = MAKE_PAIR(BgL_modulez00_1, BNIL);
						BGl_za2modulesza2z00zz__biglooz00 = BgL_list1923z00_818;
					}
					BGl_za2releaseza2z00zz__biglooz00 =
						string_to_bstring(BgL_releasez00_2);
					return (BGl_za2levelza2z00zz__biglooz00 = BgL_levelz00_3, BUNSPEC);
				}
		}
	}



/* _check-version! */
	obj_t BGl__checkzd2versionz12zc0zz__biglooz00(obj_t BgL_envz00_2041,
		obj_t BgL_modulez00_2042, obj_t BgL_releasez00_2043,
		obj_t BgL_levelz00_2044)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 333 */
			{	/* Llib/bigloo.scm 335 */
				char *BgL_auxz00_2178;

				{	/* Llib/bigloo.scm 335 */
					obj_t BgL_auxz00_2179;

					if (STRINGP(BgL_releasez00_2043))
						{	/* Llib/bigloo.scm 335 */
							BgL_auxz00_2179 = BgL_releasez00_2043;
						}
					else
						{
							obj_t BgL_auxz00_2182;

							BgL_auxz00_2182 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2361z00zz__biglooz00,
								BINT(((long) 11784)), BGl_string2362z00zz__biglooz00,
								BGl_string2363z00zz__biglooz00, BgL_releasez00_2043);
							FAILURE(BgL_auxz00_2182, BFALSE, BFALSE);
						}
					BgL_auxz00_2178 = BSTRING_TO_STRING(BgL_auxz00_2179);
				}
				return
					BGl_checkzd2versionz12zc0zz__biglooz00(BgL_modulez00_2042,
					BgL_auxz00_2178, BgL_levelz00_2044);
			}
		}
	}



/* procedure-arity */
	BGL_EXPORTED_DEF int BGl_procedurezd2arityzd2zz__biglooz00(obj_t
		BgL_procz00_4)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 369 */
			return PROCEDURE_ARITY(BgL_procz00_4);
		}
	}



/* _procedure-arity */
	obj_t BGl__procedurezd2arityzd2zz__biglooz00(obj_t BgL_envz00_2045,
		obj_t BgL_procz00_2046)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 369 */
			{	/* Llib/bigloo.scm 370 */
				int BgL_auxz00_2189;

				{	/* Llib/bigloo.scm 370 */
					obj_t BgL_procz00_2115;

					if (PROCEDUREP(BgL_procz00_2046))
						{	/* Llib/bigloo.scm 370 */
							BgL_procz00_2115 = BgL_procz00_2046;
						}
					else
						{
							obj_t BgL_auxz00_2192;

							BgL_auxz00_2192 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2361z00zz__biglooz00,
								BINT(((long) 13200)), BGl_string2364z00zz__biglooz00,
								BGl_string2365z00zz__biglooz00, BgL_procz00_2046);
							FAILURE(BgL_auxz00_2192, BFALSE, BFALSE);
						}
					BgL_auxz00_2189 = PROCEDURE_ARITY(BgL_procz00_2115);
				}
				return BINT(BgL_auxz00_2189);
			}
		}
	}



/* procedure-attr */
	BGL_EXPORTED_DEF obj_t BGl_procedurezd2attrzd2zz__biglooz00(obj_t
		BgL_procz00_5)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 375 */
			return PROCEDURE_ATTR(BgL_procz00_5);
		}
	}



/* _procedure-attr */
	obj_t BGl__procedurezd2attrzd2zz__biglooz00(obj_t BgL_envz00_2047,
		obj_t BgL_procz00_2048)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 375 */
			{	/* Llib/bigloo.scm 376 */
				obj_t BgL_procz00_2116;

				if (PROCEDUREP(BgL_procz00_2048))
					{	/* Llib/bigloo.scm 376 */
						BgL_procz00_2116 = BgL_procz00_2048;
					}
				else
					{
						obj_t BgL_auxz00_2201;

						BgL_auxz00_2201 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2361z00zz__biglooz00,
							BINT(((long) 13488)), BGl_string2366z00zz__biglooz00,
							BGl_string2365z00zz__biglooz00, BgL_procz00_2048);
						FAILURE(BgL_auxz00_2201, BFALSE, BFALSE);
					}
				return PROCEDURE_ATTR(BgL_procz00_2116);
			}
		}
	}



/* procedure-attr-set! */
	BGL_EXPORTED_DEF obj_t BGl_procedurezd2attrzd2setz12z12zz__biglooz00(obj_t
		BgL_procz00_6, obj_t BgL_objz00_7)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 381 */
			PROCEDURE_ATTR_SET(BgL_procz00_6, BgL_objz00_7);
			return BgL_objz00_7;
		}
	}



/* _procedure-attr-set! */
	obj_t BGl__procedurezd2attrzd2setz12z12zz__biglooz00(obj_t BgL_envz00_2049,
		obj_t BgL_procz00_2050, obj_t BgL_objz00_2051)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 381 */
			{	/* Llib/bigloo.scm 383 */
				obj_t BgL_procz00_2117;

				if (PROCEDUREP(BgL_procz00_2050))
					{	/* Llib/bigloo.scm 383 */
						BgL_procz00_2117 = BgL_procz00_2050;
					}
				else
					{
						obj_t BgL_auxz00_2209;

						BgL_auxz00_2209 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2361z00zz__biglooz00,
							BINT(((long) 13819)), BGl_string2367z00zz__biglooz00,
							BGl_string2365z00zz__biglooz00, BgL_procz00_2050);
						FAILURE(BgL_auxz00_2209, BFALSE, BFALSE);
					}
				PROCEDURE_ATTR_SET(BgL_procz00_2117, BgL_objz00_2051);
				return BgL_objz00_2051;
			}
		}
	}



/* unspecified */
	BGL_EXPORTED_DEF obj_t BGl_unspecifiedz00zz__biglooz00()
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 388 */
			return BUNSPEC;
		}
	}



/* _unspecified */
	obj_t BGl__unspecifiedz00zz__biglooz00(obj_t BgL_envz00_2052)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 388 */
			return BUNSPEC;
		}
	}



/* cnst? */
	BGL_EXPORTED_DEF bool_t BGl_cnstzf3zf3zz__biglooz00(obj_t BgL_objz00_8)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 394 */
			return CNSTP(BgL_objz00_8);
		}
	}



/* _cnst? */
	obj_t BGl__cnstzf3zf3zz__biglooz00(obj_t BgL_envz00_2053,
		obj_t BgL_objz00_2054)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 394 */
			return BBOOL(CNSTP(BgL_objz00_2054));
		}
	}



/* opaque? */
	BGL_EXPORTED_DEF bool_t BGl_opaquezf3zf3zz__biglooz00(obj_t BgL_objz00_9)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 400 */
			return OPAQUEP(BgL_objz00_9);
		}
	}



/* _opaque? */
	obj_t BGl__opaquezf3zf3zz__biglooz00(obj_t BgL_envz00_2055,
		obj_t BgL_objz00_2056)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 400 */
			return BBOOL(OPAQUEP(BgL_objz00_2056));
		}
	}



/* opaque-nil */
	BGL_EXPORTED_DEF obj_t BGl_opaquezd2nilzd2zz__biglooz00()
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 406 */
			return BGL_OPAQUE_NIL();
		}
	}



/* _opaque-nil */
	obj_t BGl__opaquezd2nilzd2zz__biglooz00(obj_t BgL_envz00_2057)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 406 */
			return BGL_OPAQUE_NIL();
		}
	}



/* mangle-at! */
	long BGl_manglezd2atz12zc0zz__biglooz00(obj_t BgL_newz00_11,
		obj_t BgL_oldz00_12, long BgL_lenz00_13, long BgL_offsetz00_14)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 419 */
			{
				long BgL_rz00_821;

				long BgL_wz00_822;

				long BgL_newzd2lenzd2_823;

				long BgL_checksumz00_824;

				BgL_rz00_821 = ((long) 0);
				BgL_wz00_822 = BgL_offsetz00_14;
				BgL_newzd2lenzd2_823 = BgL_offsetz00_14;
				BgL_checksumz00_824 = ((long) 0);
			BgL_zc3anonymousza31924ze3z83_825:
				if ((BgL_rz00_821 == BgL_lenz00_13))
					{	/* Llib/bigloo.scm 424 */
						STRING_SET(BgL_newz00_11, BgL_wz00_822, ((unsigned char) 'z'));
						{	/* Llib/bigloo.scm 427 */
							unsigned char BgL_auxz00_2227;

							long BgL_auxz00_2225;

							BgL_auxz00_2227 =
								STRING_REF(BGl_string2368z00zz__biglooz00,
								(BgL_checksumz00_824 & ((long) 15)));
							BgL_auxz00_2225 = (BgL_wz00_822 + ((long) 1));
							STRING_SET(BgL_newz00_11, BgL_auxz00_2225, BgL_auxz00_2227);
						}
						{	/* Llib/bigloo.scm 430 */
							unsigned char BgL_auxz00_2233;

							long BgL_auxz00_2231;

							BgL_auxz00_2233 =
								STRING_REF(BGl_string2368z00zz__biglooz00,
								((BgL_checksumz00_824 >> (int) (((long) 4))) & ((long) 15)));
							BgL_auxz00_2231 = (BgL_wz00_822 + ((long) 2));
							STRING_SET(BgL_newz00_11, BgL_auxz00_2231, BgL_auxz00_2233);
						}
						return (BgL_wz00_822 + ((long) 3));
					}
				else
					{	/* Llib/bigloo.scm 434 */
						unsigned char BgL_cz00_835;

						BgL_cz00_835 = STRING_REF(BgL_oldz00_12, BgL_rz00_821);
						{	/* Llib/bigloo.scm 435 */
							bool_t BgL_testz00_2241;

							{	/* Llib/bigloo.scm 435 */
								bool_t BgL_testz00_2242;

								if (isalpha(BgL_cz00_835))
									{	/* Llib/bigloo.scm 435 */
										if ((BgL_cz00_835 == ((unsigned char) 'z')))
											{	/* Llib/bigloo.scm 435 */
												BgL_testz00_2242 = ((bool_t) 0);
											}
										else
											{	/* Llib/bigloo.scm 435 */
												BgL_testz00_2242 = ((bool_t) 1);
											}
									}
								else
									{	/* Llib/bigloo.scm 435 */
										BgL_testz00_2242 = ((bool_t) 0);
									}
								if (BgL_testz00_2242)
									{	/* Llib/bigloo.scm 435 */
										BgL_testz00_2241 = ((bool_t) 1);
									}
								else
									{	/* Llib/bigloo.scm 435 */
										if (isdigit(BgL_cz00_835))
											{	/* Llib/bigloo.scm 436 */
												BgL_testz00_2241 = ((bool_t) 1);
											}
										else
											{	/* Llib/bigloo.scm 436 */
												BgL_testz00_2241 =
													(BgL_cz00_835 == ((unsigned char) '_'));
							}}}
							if (BgL_testz00_2241)
								{	/* Llib/bigloo.scm 435 */
									STRING_SET(BgL_newz00_11, BgL_wz00_822, BgL_cz00_835);
									{
										long BgL_newzd2lenzd2_2255;

										long BgL_wz00_2253;

										long BgL_rz00_2251;

										BgL_rz00_2251 = (BgL_rz00_821 + ((long) 1));
										BgL_wz00_2253 = (BgL_wz00_822 + ((long) 1));
										BgL_newzd2lenzd2_2255 = (BgL_newzd2lenzd2_823 + ((long) 1));
										BgL_newzd2lenzd2_823 = BgL_newzd2lenzd2_2255;
										BgL_wz00_822 = BgL_wz00_2253;
										BgL_rz00_821 = BgL_rz00_2251;
										goto BgL_zc3anonymousza31924ze3z83_825;
									}
								}
							else
								{	/* Llib/bigloo.scm 444 */
									long BgL_icz00_840;

									BgL_icz00_840 = (BgL_cz00_835);
									STRING_SET(BgL_newz00_11, BgL_wz00_822,
										((unsigned char) 'z'));
									{	/* Llib/bigloo.scm 446 */
										unsigned char BgL_auxz00_2261;

										long BgL_auxz00_2259;

										BgL_auxz00_2261 =
											STRING_REF(BGl_string2368z00zz__biglooz00,
											(BgL_icz00_840 & ((long) 15)));
										BgL_auxz00_2259 = (BgL_wz00_822 + ((long) 1));
										STRING_SET(BgL_newz00_11, BgL_auxz00_2259, BgL_auxz00_2261);
									}
									{	/* Llib/bigloo.scm 449 */
										unsigned char BgL_auxz00_2267;

										long BgL_auxz00_2265;

										BgL_auxz00_2267 =
											STRING_REF(BGl_string2368z00zz__biglooz00,
											((BgL_icz00_840 >> (int) (((long) 4))) & ((long) 15)));
										BgL_auxz00_2265 = (BgL_wz00_822 + ((long) 2));
										STRING_SET(BgL_newz00_11, BgL_auxz00_2265, BgL_auxz00_2267);
									}
									{
										long BgL_checksumz00_2279;

										long BgL_newzd2lenzd2_2277;

										long BgL_wz00_2275;

										long BgL_rz00_2273;

										BgL_rz00_2273 = (BgL_rz00_821 + ((long) 1));
										BgL_wz00_2275 = (BgL_wz00_822 + ((long) 3));
										BgL_newzd2lenzd2_2277 = (BgL_newzd2lenzd2_823 + ((long) 3));
										BgL_checksumz00_2279 =
											(BgL_checksumz00_824 ^ (BgL_cz00_835));
										BgL_checksumz00_824 = BgL_checksumz00_2279;
										BgL_newzd2lenzd2_823 = BgL_newzd2lenzd2_2277;
										BgL_wz00_822 = BgL_wz00_2275;
										BgL_rz00_821 = BgL_rz00_2273;
										goto BgL_zc3anonymousza31924ze3z83_825;
									}
								}
						}
					}
			}
		}
	}



/* bigloo-mangle */
	BGL_EXPORTED_DEF obj_t bigloo_mangle(obj_t BgL_stringz00_15)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 460 */
			{	/* Llib/bigloo.scm 461 */
				long BgL_lenz00_859;

				BgL_lenz00_859 = STRING_LENGTH(BgL_stringz00_15);
				{	/* Llib/bigloo.scm 461 */
					obj_t BgL_newz00_860;

					BgL_newz00_860 =
						make_string(
						((BgL_lenz00_859 * ((long) 3)) + ((long) 7)),
						((unsigned char) ' '));
					{	/* Llib/bigloo.scm 462 */

						if ((BgL_lenz00_859 == ((long) 0)))
							{	/* Llib/bigloo.scm 463 */
								return
									BGl_errorz00zz__errorz00(BGl_string2369z00zz__biglooz00,
									BGl_string2370z00zz__biglooz00, BgL_stringz00_15);
							}
						else
							{	/* Llib/bigloo.scm 465 */
								long BgL_stopz00_862;

								BgL_stopz00_862 =
									BGl_manglezd2atz12zc0zz__biglooz00(BgL_newz00_860,
									BgL_stringz00_15, BgL_lenz00_859, ((long) 4));
								blit_string(BGl_string2371z00zz__biglooz00, ((long) 0),
									BgL_newz00_860, ((long) 0), ((long) 4));
								return c_substring(BgL_newz00_860, ((long) 0), BgL_stopz00_862);
		}}}}}
	}



/* _bigloo-mangle */
	obj_t BGl__bigloozd2manglezd2zz__biglooz00(obj_t BgL_envz00_2058,
		obj_t BgL_stringz00_2059)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 460 */
			{	/* Llib/bigloo.scm 461 */
				obj_t BgL_auxz00_2292;

				if (STRINGP(BgL_stringz00_2059))
					{	/* Llib/bigloo.scm 461 */
						BgL_auxz00_2292 = BgL_stringz00_2059;
					}
				else
					{
						obj_t BgL_auxz00_2295;

						BgL_auxz00_2295 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2361z00zz__biglooz00,
							BINT(((long) 16663)), BGl_string2372z00zz__biglooz00,
							BGl_string2373z00zz__biglooz00, BgL_stringz00_2059);
						FAILURE(BgL_auxz00_2295, BFALSE, BFALSE);
					}
				return bigloo_mangle(BgL_auxz00_2292);
			}
		}
	}



/* bigloo-module-mangle */
	BGL_EXPORTED_DEF obj_t bigloo_module_mangle(obj_t BgL_idz00_16,
		obj_t BgL_modulez00_17)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 472 */
			{	/* Llib/bigloo.scm 473 */
				long BgL_lenz00_867;

				BgL_lenz00_867 =
					(STRING_LENGTH(BgL_idz00_16) + STRING_LENGTH(BgL_modulez00_17));
				{	/* Llib/bigloo.scm 473 */
					obj_t BgL_newz00_868;

					BgL_newz00_868 =
						make_string(
						((BgL_lenz00_867 * ((long) 3)) + ((long) 12)),
						((unsigned char) ' '));
					{	/* Llib/bigloo.scm 474 */

						if ((BgL_lenz00_867 == ((long) 0)))
							{	/* Llib/bigloo.scm 475 */
								return
									BGl_errorz00zz__errorz00(BGl_string2369z00zz__biglooz00,
									BGl_string2370z00zz__biglooz00,
									BGl_stringzd2envzd2zz__r4_strings_6_7z00);
							}
						else
							{	/* Llib/bigloo.scm 477 */
								long BgL_modzd2startzd2_870;

								BgL_modzd2startzd2_870 =
									BGl_manglezd2atz12zc0zz__biglooz00(BgL_newz00_868,
									BgL_idz00_16, STRING_LENGTH(BgL_idz00_16), ((long) 4));
								STRING_SET(BgL_newz00_868, BgL_modzd2startzd2_870,
									((unsigned char) 'z'));
								{	/* Llib/bigloo.scm 479 */
									long BgL_auxz00_2312;

									BgL_auxz00_2312 = (((long) 1) + BgL_modzd2startzd2_870);
									STRING_SET(BgL_newz00_868, BgL_auxz00_2312,
										((unsigned char) 'z'));
								}
								{	/* Llib/bigloo.scm 480 */
									long BgL_stopz00_872;

									BgL_stopz00_872 =
										BGl_manglezd2atz12zc0zz__biglooz00(BgL_newz00_868,
										BgL_modulez00_17, STRING_LENGTH(BgL_modulez00_17),
										(BgL_modzd2startzd2_870 + ((long) 2)));
									blit_string(BGl_string2374z00zz__biglooz00, ((long) 0),
										BgL_newz00_868, ((long) 0), ((long) 4));
									return c_substring(BgL_newz00_868, ((long) 0),
										BgL_stopz00_872);
		}}}}}}
	}



/* _bigloo-module-mangle */
	obj_t BGl__bigloozd2modulezd2manglez00zz__biglooz00(obj_t BgL_envz00_2060,
		obj_t BgL_idz00_2061, obj_t BgL_modulez00_2062)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 472 */
			{	/* Llib/bigloo.scm 473 */
				obj_t BgL_auxz00_2327;

				obj_t BgL_auxz00_2320;

				if (STRINGP(BgL_modulez00_2062))
					{	/* Llib/bigloo.scm 473 */
						BgL_auxz00_2327 = BgL_modulez00_2062;
					}
				else
					{
						obj_t BgL_auxz00_2330;

						BgL_auxz00_2330 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2361z00zz__biglooz00,
							BINT(((long) 17219)), BGl_string2375z00zz__biglooz00,
							BGl_string2373z00zz__biglooz00, BgL_modulez00_2062);
						FAILURE(BgL_auxz00_2330, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_idz00_2061))
					{	/* Llib/bigloo.scm 473 */
						BgL_auxz00_2320 = BgL_idz00_2061;
					}
				else
					{
						obj_t BgL_auxz00_2323;

						BgL_auxz00_2323 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2361z00zz__biglooz00,
							BINT(((long) 17219)), BGl_string2375z00zz__biglooz00,
							BGl_string2373z00zz__biglooz00, BgL_idz00_2061);
						FAILURE(BgL_auxz00_2323, BFALSE, BFALSE);
					}
				return bigloo_module_mangle(BgL_auxz00_2320, BgL_auxz00_2327);
			}
		}
	}



/* bigloo-mangled? */
	BGL_EXPORTED_DEF bool_t bigloo_mangledp(obj_t BgL_stringz00_18)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 489 */
			{	/* Llib/bigloo.scm 490 */
				long BgL_lenz00_883;

				BgL_lenz00_883 = STRING_LENGTH(BgL_stringz00_18);
				if ((BgL_lenz00_883 > ((long) 7)))
					{	/* Llib/bigloo.scm 492 */
						bool_t BgL_testz00_2338;

						{	/* Llib/bigloo.scm 492 */
							bool_t BgL__ortest_1830z00_900;

							BgL__ortest_1830z00_900 =
								bigloo_strncmp(BgL_stringz00_18, BGl_string2371z00zz__biglooz00,
								((long) 4));
							if (BgL__ortest_1830z00_900)
								{	/* Llib/bigloo.scm 492 */
									BgL_testz00_2338 = BgL__ortest_1830z00_900;
								}
							else
								{	/* Llib/bigloo.scm 492 */
									BgL_testz00_2338 =
										bigloo_strncmp(BgL_stringz00_18,
										BGl_string2374z00zz__biglooz00, ((long) 4));
						}}
						if (BgL_testz00_2338)
							{	/* Llib/bigloo.scm 492 */
								if (
									(STRING_REF(BgL_stringz00_18,
											(BgL_lenz00_883 - ((long) 3))) == ((unsigned char) 'z')))
									{	/* Llib/bigloo.scm 495 */
										bool_t BgL_testz00_2346;

										{	/* Llib/bigloo.scm 495 */
											bool_t BgL__ortest_1831z00_893;

											{	/* Llib/bigloo.scm 495 */
												unsigned char BgL_auxz00_2347;

												BgL_auxz00_2347 =
													STRING_REF(BgL_stringz00_18,
													(BgL_lenz00_883 - ((long) 2)));
												BgL__ortest_1831z00_893 = isalpha(BgL_auxz00_2347);
											}
											if (BgL__ortest_1831z00_893)
												{	/* Llib/bigloo.scm 495 */
													BgL_testz00_2346 = BgL__ortest_1831z00_893;
												}
											else
												{	/* Llib/bigloo.scm 496 */
													unsigned char BgL_auxz00_2352;

													BgL_auxz00_2352 =
														STRING_REF(BgL_stringz00_18,
														(BgL_lenz00_883 - ((long) 2)));
													BgL_testz00_2346 = isdigit(BgL_auxz00_2352);
										}}
										if (BgL_testz00_2346)
											{	/* Llib/bigloo.scm 497 */
												bool_t BgL__ortest_1832z00_888;

												{	/* Llib/bigloo.scm 497 */
													unsigned char BgL_auxz00_2356;

													BgL_auxz00_2356 =
														STRING_REF(BgL_stringz00_18,
														(BgL_lenz00_883 - ((long) 1)));
													BgL__ortest_1832z00_888 = isalpha(BgL_auxz00_2356);
												}
												if (BgL__ortest_1832z00_888)
													{	/* Llib/bigloo.scm 497 */
														return BgL__ortest_1832z00_888;
													}
												else
													{	/* Llib/bigloo.scm 498 */
														unsigned char BgL_auxz00_2361;

														BgL_auxz00_2361 =
															STRING_REF(BgL_stringz00_18,
															(BgL_lenz00_883 - ((long) 1)));
														return isdigit(BgL_auxz00_2361);
													}
											}
										else
											{	/* Llib/bigloo.scm 495 */
												return ((bool_t) 0);
											}
									}
								else
									{	/* Llib/bigloo.scm 494 */
										return ((bool_t) 0);
									}
							}
						else
							{	/* Llib/bigloo.scm 492 */
								return ((bool_t) 0);
							}
					}
				else
					{	/* Llib/bigloo.scm 491 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* _bigloo-mangled? */
	obj_t BGl__bigloozd2mangledzf3z21zz__biglooz00(obj_t BgL_envz00_2065,
		obj_t BgL_stringz00_2066)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 489 */
			{	/* Llib/bigloo.scm 490 */
				bool_t BgL_auxz00_2365;

				{	/* Llib/bigloo.scm 490 */
					obj_t BgL_auxz00_2366;

					if (STRINGP(BgL_stringz00_2066))
						{	/* Llib/bigloo.scm 490 */
							BgL_auxz00_2366 = BgL_stringz00_2066;
						}
					else
						{
							obj_t BgL_auxz00_2369;

							BgL_auxz00_2369 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2361z00zz__biglooz00,
								BINT(((long) 17989)), BGl_string2376z00zz__biglooz00,
								BGl_string2373z00zz__biglooz00, BgL_stringz00_2066);
							FAILURE(BgL_auxz00_2369, BFALSE, BFALSE);
						}
					BgL_auxz00_2365 = bigloo_mangledp(BgL_auxz00_2366);
				}
				return BBOOL(BgL_auxz00_2365);
			}
		}
	}



/* bigloo-need-mangling? */
	BGL_EXPORTED_DEF bool_t BGl_bigloozd2needzd2manglingzf3zf3zz__biglooz00(obj_t
		BgL_stringz00_19)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 503 */
			{	/* Llib/bigloo.scm 504 */
				long BgL_lenz00_901;

				BgL_lenz00_901 = STRING_LENGTH(BgL_stringz00_19);
				if ((BgL_lenz00_901 > ((long) 0)))
					{	/* Llib/bigloo.scm 506 */
						bool_t BgL__ortest_1834z00_903;

						{	/* Llib/bigloo.scm 506 */
							bool_t BgL_testz00_2378;

							{	/* Llib/bigloo.scm 506 */
								bool_t BgL_testz00_2379;

								{	/* Llib/bigloo.scm 506 */
									unsigned char BgL_auxz00_2380;

									BgL_auxz00_2380 = STRING_REF(BgL_stringz00_19, ((long) 0));
									BgL_testz00_2379 = isalpha(BgL_auxz00_2380);
								}
								if (BgL_testz00_2379)
									{	/* Llib/bigloo.scm 506 */
										BgL_testz00_2378 = ((bool_t) 1);
									}
								else
									{	/* Llib/bigloo.scm 506 */
										BgL_testz00_2378 =
											(STRING_REF(BgL_stringz00_19,
												((long) 0)) == ((unsigned char) '_'));
							}}
							if (BgL_testz00_2378)
								{	/* Llib/bigloo.scm 506 */
									BgL__ortest_1834z00_903 = ((bool_t) 0);
								}
							else
								{	/* Llib/bigloo.scm 506 */
									BgL__ortest_1834z00_903 = ((bool_t) 1);
								}
						}
						if (BgL__ortest_1834z00_903)
							{	/* Llib/bigloo.scm 506 */
								return BgL__ortest_1834z00_903;
							}
						else
							{
								long BgL_iz00_905;

								BgL_iz00_905 = ((long) 1);
							BgL_zc3anonymousza31990ze3z83_906:
								if ((BgL_iz00_905 >= BgL_lenz00_901))
									{	/* Llib/bigloo.scm 509 */
										return ((bool_t) 0);
									}
								else
									{	/* Llib/bigloo.scm 511 */
										unsigned char BgL_cz00_908;

										BgL_cz00_908 = STRING_REF(BgL_stringz00_19, BgL_iz00_905);
										{	/* Llib/bigloo.scm 512 */
											bool_t BgL_testz00_2389;

											if (isalpha(BgL_cz00_908))
												{	/* Llib/bigloo.scm 512 */
													BgL_testz00_2389 = ((bool_t) 1);
												}
											else
												{	/* Llib/bigloo.scm 512 */
													if (isdigit(BgL_cz00_908))
														{	/* Llib/bigloo.scm 513 */
															BgL_testz00_2389 = ((bool_t) 1);
														}
													else
														{	/* Llib/bigloo.scm 513 */
															BgL_testz00_2389 =
																(BgL_cz00_908 == ((unsigned char) '_'));
												}}
											if (BgL_testz00_2389)
												{
													long BgL_iz00_2395;

													BgL_iz00_2395 = (BgL_iz00_905 + ((long) 1));
													BgL_iz00_905 = BgL_iz00_2395;
													goto BgL_zc3anonymousza31990ze3z83_906;
												}
											else
												{	/* Llib/bigloo.scm 512 */
													return ((bool_t) 1);
												}
										}
									}
							}
					}
				else
					{	/* Llib/bigloo.scm 505 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* _bigloo-need-mangling? */
	obj_t BGl__bigloozd2needzd2manglingzf3zf3zz__biglooz00(obj_t BgL_envz00_2067,
		obj_t BgL_stringz00_2068)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 503 */
			{	/* Llib/bigloo.scm 504 */
				bool_t BgL_auxz00_2397;

				{	/* Llib/bigloo.scm 504 */
					obj_t BgL_auxz00_2398;

					if (STRINGP(BgL_stringz00_2068))
						{	/* Llib/bigloo.scm 504 */
							BgL_auxz00_2398 = BgL_stringz00_2068;
						}
					else
						{
							obj_t BgL_auxz00_2401;

							BgL_auxz00_2401 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2361z00zz__biglooz00,
								BINT(((long) 18674)), BGl_string2377z00zz__biglooz00,
								BGl_string2373z00zz__biglooz00, BgL_stringz00_2068);
							FAILURE(BgL_auxz00_2401, BFALSE, BFALSE);
						}
					BgL_auxz00_2397 =
						BGl_bigloozd2needzd2manglingzf3zf3zz__biglooz00(BgL_auxz00_2398);
				}
				return BBOOL(BgL_auxz00_2397);
			}
		}
	}



/* bigloo-demangle */
	BGL_EXPORTED_DEF obj_t bigloo_demangle(obj_t BgL_stringz00_20)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 521 */
			{	/* Llib/bigloo.scm 522 */
				long BgL_lenz00_918;

				BgL_lenz00_918 = STRING_LENGTH(BgL_stringz00_20);
				{	/* Llib/bigloo.scm 522 */
					long BgL_clenz00_919;

					BgL_clenz00_919 = (BgL_lenz00_918 - ((long) 3));
					{	/* Llib/bigloo.scm 523 */

						{

							if ((BgL_lenz00_918 < ((long) 8)))
								{	/* Llib/bigloo.scm 572 */
									return
										BGl_errorz00zz__errorz00(BGl_string2378z00zz__biglooz00,
										BGl_string2379z00zz__biglooz00, BgL_stringz00_20);
								}
							else
								{	/* Llib/bigloo.scm 572 */
									if (bigloo_strncmp(BgL_stringz00_20,
											BGl_string2371z00zz__biglooz00, ((long) 4)))
										{	/* Llib/bigloo.scm 574 */
											{	/* Llib/bigloo.scm 562 */
												obj_t BgL_strz00_980;

												BgL_strz00_980 =
													BGl_bigloozd2demanglezd2atz00zz__biglooz00
													(BgL_stringz00_20, BgL_clenz00_919, BINT(((long) 4)));
												{	/* Llib/bigloo.scm 564 */
													obj_t BgL_offsetz00_981;

													{	/* Llib/bigloo.scm 564 */
														int BgL_auxz00_2416;

														BgL_auxz00_2416 = (int) (((long) 1));
														BgL_offsetz00_981 =
															BGL_MVALUES_VAL(BgL_auxz00_2416);
													}
													{	/* Llib/bigloo.scm 564 */
														int BgL_auxz00_2419;

														BgL_auxz00_2419 = (int) (((long) 2));
														BGL_MVALUES_NUMBER_SET(BgL_auxz00_2419);
													}
													{	/* Llib/bigloo.scm 564 */
														int BgL_auxz00_2422;

														BgL_auxz00_2422 = (int) (((long) 1));
														BGL_MVALUES_VAL_SET(BgL_auxz00_2422, BUNSPEC);
													}
													return BgL_strz00_980;
												}
											}
										}
									else
										{	/* Llib/bigloo.scm 574 */
											if (bigloo_strncmp(BgL_stringz00_20,
													BGl_string2374z00zz__biglooz00, ((long) 4)))
												{	/* Llib/bigloo.scm 576 */
													{	/* Llib/bigloo.scm 566 */
														obj_t BgL_idz00_985;

														BgL_idz00_985 =
															BGl_bigloozd2demanglezd2atz00zz__biglooz00
															(BgL_stringz00_20, BgL_clenz00_919,
															BINT(((long) 4)));
														{	/* Llib/bigloo.scm 568 */
															obj_t BgL_offsetz00_986;

															{	/* Llib/bigloo.scm 568 */
																int BgL_auxz00_2429;

																BgL_auxz00_2429 = (int) (((long) 1));
																BgL_offsetz00_986 =
																	BGL_MVALUES_VAL(BgL_auxz00_2429);
															}
															{	/* Llib/bigloo.scm 568 */
																obj_t BgL_modulez00_987;

																BgL_modulez00_987 =
																	BGl_bigloozd2demanglezd2atz00zz__biglooz00
																	(BgL_stringz00_20, BgL_clenz00_919,
																	BgL_offsetz00_986);
																{	/* Llib/bigloo.scm 570 */
																	obj_t BgL_offsetz00_988;

																	{	/* Llib/bigloo.scm 570 */
																		int BgL_auxz00_2433;

																		BgL_auxz00_2433 = (int) (((long) 1));
																		BgL_offsetz00_988 =
																			BGL_MVALUES_VAL(BgL_auxz00_2433);
																	}
																	{	/* Llib/bigloo.scm 570 */
																		int BgL_auxz00_2436;

																		BgL_auxz00_2436 = (int) (((long) 2));
																		BGL_MVALUES_NUMBER_SET(BgL_auxz00_2436);
																	}
																	{	/* Llib/bigloo.scm 570 */
																		int BgL_auxz00_2439;

																		BgL_auxz00_2439 = (int) (((long) 1));
																		BGL_MVALUES_VAL_SET(BgL_auxz00_2439,
																			BgL_modulez00_987);
																	}
																	return BgL_idz00_985;
																}
															}
														}
													}
												}
											else
												{	/* Llib/bigloo.scm 576 */
													return BgL_stringz00_20;
												}
										}
								}
						}
					}
				}
			}
		}
	}



/* char->digit */
	long BGl_charzd2ze3digitz31zz__biglooz00(unsigned char BgL_cz00_930)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 529 */
			if (isdigit(BgL_cz00_930))
				{	/* Llib/bigloo.scm 527 */
					return ((BgL_cz00_930) - ((long) 48));
				}
			else
				{	/* Llib/bigloo.scm 527 */
					return (((long) 10) + ((BgL_cz00_930) - ((long) 97)));
		}}
	}



/* get-8bits-integer */
	long BGl_getzd28bitszd2integerz00zz__biglooz00(obj_t BgL_stringz00_2083,
		obj_t BgL_rz00_939)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 535 */
			{	/* Llib/bigloo.scm 534 */

				return
					(BGl_charzd2ze3digitz31zz__biglooz00(STRING_REF(BgL_stringz00_2083,
							((long) CINT(BgL_rz00_939) + ((long) 1)))) +
					(BGl_charzd2ze3digitz31zz__biglooz00(STRING_REF(BgL_stringz00_2083,
								((long) CINT(BgL_rz00_939) + ((long) 2)))) <<
						(int) (((long) 4))));
		}}
	}



/* bigloo-demangle-at */
	obj_t BGl_bigloozd2demanglezd2atz00zz__biglooz00(obj_t BgL_stringz00_2085,
		long BgL_clenz00_2084, obj_t BgL_offsetz00_948)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 560 */
			{	/* Llib/bigloo.scm 537 */
				obj_t BgL_newz00_950;

				BgL_newz00_950 = make_string(BgL_clenz00_2084, ((unsigned char) ' '));
				{
					obj_t BgL_rz00_952;

					long BgL_wz00_953;

					long BgL_checksumz00_954;

					BgL_rz00_952 = BgL_offsetz00_948;
					BgL_wz00_953 = ((long) 0);
					BgL_checksumz00_954 = ((long) 0);
				BgL_zc3anonymousza32018ze3z83_955:
					if (((long) CINT(BgL_rz00_952) == BgL_clenz00_2084))
						{	/* Llib/bigloo.scm 541 */
							if (
								(BgL_checksumz00_954 ==
									BGl_getzd28bitszd2integerz00zz__biglooz00(BgL_stringz00_2085,
										BgL_rz00_952)))
								{	/* Llib/bigloo.scm 544 */
									obj_t BgL_val0_1861z00_958;

									long BgL_val1_1862z00_959;

									BgL_val0_1861z00_958 =
										c_substring(BgL_newz00_950, ((long) 0), BgL_wz00_953);
									BgL_val1_1862z00_959 =
										((long) CINT(BgL_rz00_952) + ((long) 3));
									{	/* Llib/bigloo.scm 544 */
										int BgL_auxz00_2470;

										BgL_auxz00_2470 = (int) (((long) 2));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_2470);
									}
									{	/* Llib/bigloo.scm 544 */
										obj_t BgL_auxz00_2475;

										int BgL_auxz00_2473;

										BgL_auxz00_2475 = BINT(BgL_val1_1862z00_959);
										BgL_auxz00_2473 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_2473, BgL_auxz00_2475);
									}
									return BgL_val0_1861z00_958;
								}
							else
								{	/* Llib/bigloo.scm 543 */
									return
										BGl_errorz00zz__errorz00(BGl_string2378z00zz__biglooz00,
										BGl_string2380z00zz__biglooz00, BgL_stringz00_2085);
								}
						}
					else
						{	/* Llib/bigloo.scm 546 */
							unsigned char BgL_cz00_961;

							BgL_cz00_961 =
								STRING_REF(BgL_stringz00_2085, (long) CINT(BgL_rz00_952));
							if ((BgL_cz00_961 == ((unsigned char) 'z')))
								{	/* Llib/bigloo.scm 547 */
									if (
										(STRING_REF(BgL_stringz00_2085,
												((long) CINT(BgL_rz00_952) + ((long) 1))) ==
											((unsigned char) 'z')))
										{	/* Llib/bigloo.scm 549 */
											obj_t BgL_val0_1863z00_964;

											long BgL_val1_1864z00_965;

											BgL_val0_1863z00_964 =
												c_substring(BgL_newz00_950, ((long) 0),
												(BgL_wz00_953 - ((long) 1)));
											BgL_val1_1864z00_965 =
												((long) CINT(BgL_rz00_952) + ((long) 2));
											{	/* Llib/bigloo.scm 549 */
												int BgL_auxz00_2492;

												BgL_auxz00_2492 = (int) (((long) 2));
												BGL_MVALUES_NUMBER_SET(BgL_auxz00_2492);
											}
											{	/* Llib/bigloo.scm 549 */
												obj_t BgL_auxz00_2497;

												int BgL_auxz00_2495;

												BgL_auxz00_2497 = BINT(BgL_val1_1864z00_965);
												BgL_auxz00_2495 = (int) (((long) 1));
												BGL_MVALUES_VAL_SET(BgL_auxz00_2495, BgL_auxz00_2497);
											}
											return BgL_val0_1863z00_964;
										}
									else
										{	/* Llib/bigloo.scm 550 */
											long BgL_iz00_968;

											BgL_iz00_968 =
												BGl_getzd28bitszd2integerz00zz__biglooz00
												(BgL_stringz00_2085, BgL_rz00_952);
											{	/* Llib/bigloo.scm 550 */
												unsigned char BgL_ncz00_969;

												BgL_ncz00_969 = (BgL_iz00_968);
												{	/* Llib/bigloo.scm 551 */

													STRING_SET(BgL_newz00_950, BgL_wz00_953,
														BgL_ncz00_969);
													{	/* Llib/bigloo.scm 553 */
														long BgL_arg2027z00_970;

														long BgL_arg2028z00_971;

														long BgL_arg2029z00_972;

														BgL_arg2027z00_970 =
															((long) CINT(BgL_rz00_952) + ((long) 3));
														BgL_arg2028z00_971 = (BgL_wz00_953 + ((long) 1));
														BgL_arg2029z00_972 =
															(BgL_checksumz00_954 ^ BgL_iz00_968);
														{
															long BgL_checksumz00_2510;

															long BgL_wz00_2509;

															obj_t BgL_rz00_2507;

															BgL_rz00_2507 = BINT(BgL_arg2027z00_970);
															BgL_wz00_2509 = BgL_arg2028z00_971;
															BgL_checksumz00_2510 = BgL_arg2029z00_972;
															BgL_checksumz00_954 = BgL_checksumz00_2510;
															BgL_wz00_953 = BgL_wz00_2509;
															BgL_rz00_952 = BgL_rz00_2507;
															goto BgL_zc3anonymousza32018ze3z83_955;
														}
													}
												}
											}
										}
								}
							else
								{	/* Llib/bigloo.scm 547 */
									STRING_SET(BgL_newz00_950, BgL_wz00_953, BgL_cz00_961);
									{	/* Llib/bigloo.scm 558 */
										long BgL_arg2033z00_975;

										long BgL_arg2034z00_976;

										BgL_arg2033z00_975 =
											((long) CINT(BgL_rz00_952) + ((long) 1));
										BgL_arg2034z00_976 = (BgL_wz00_953 + ((long) 1));
										{
											long BgL_wz00_2517;

											obj_t BgL_rz00_2515;

											BgL_rz00_2515 = BINT(BgL_arg2033z00_975);
											BgL_wz00_2517 = BgL_arg2034z00_976;
											BgL_wz00_953 = BgL_wz00_2517;
											BgL_rz00_952 = BgL_rz00_2515;
											goto BgL_zc3anonymousza32018ze3z83_955;
										}
									}
								}
						}
				}
			}
		}
	}



/* _bigloo-demangle */
	obj_t BGl__bigloozd2demanglezd2zz__biglooz00(obj_t BgL_envz00_2069,
		obj_t BgL_stringz00_2070)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 521 */
			{	/* Llib/bigloo.scm 522 */
				obj_t BgL_auxz00_2518;

				if (STRINGP(BgL_stringz00_2070))
					{	/* Llib/bigloo.scm 522 */
						BgL_auxz00_2518 = BgL_stringz00_2070;
					}
				else
					{
						obj_t BgL_auxz00_2521;

						BgL_auxz00_2521 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2361z00zz__biglooz00,
							BINT(((long) 19317)), BGl_string2381z00zz__biglooz00,
							BGl_string2373z00zz__biglooz00, BgL_stringz00_2070);
						FAILURE(BgL_auxz00_2521, BFALSE, BFALSE);
					}
				return bigloo_demangle(BgL_auxz00_2518);
			}
		}
	}



/* bigloo-class-mangled? */
	BGL_EXPORTED_DEF bool_t bigloo_class_mangledp(obj_t BgL_stringz00_21)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 584 */
			{	/* Llib/bigloo.scm 585 */
				long BgL_lenz00_997;

				BgL_lenz00_997 = STRING_LENGTH(BgL_stringz00_21);
				if ((BgL_lenz00_997 > ((long) 8)))
					{	/* Llib/bigloo.scm 586 */
						if (
							(STRING_REF(BgL_stringz00_21,
									(BgL_lenz00_997 - ((long) 1))) == ((unsigned char) 't')))
							{	/* Llib/bigloo.scm 587 */
								if (
									(STRING_REF(BgL_stringz00_21,
											(BgL_lenz00_997 - ((long) 2))) == ((unsigned char) 'l')))
									{	/* Llib/bigloo.scm 588 */
										if (
											(STRING_REF(BgL_stringz00_21,
													(BgL_lenz00_997 - ((long) 3))) ==
												((unsigned char) 'g')))
											{	/* Llib/bigloo.scm 589 */
												if (
													(STRING_REF(BgL_stringz00_21,
															(BgL_lenz00_997 - ((long) 4))) ==
														((unsigned char) 'b')))
													{	/* Llib/bigloo.scm 590 */
														if (
															(STRING_REF(BgL_stringz00_21,
																	(BgL_lenz00_997 - ((long) 5))) ==
																((unsigned char) '_')))
															{	/* Llib/bigloo.scm 591 */
																return
																	bigloo_mangledp(c_substring(BgL_stringz00_21,
																		((long) 0), (BgL_lenz00_997 - ((long) 5))));
															}
														else
															{	/* Llib/bigloo.scm 591 */
																return ((bool_t) 0);
															}
													}
												else
													{	/* Llib/bigloo.scm 590 */
														return ((bool_t) 0);
													}
											}
										else
											{	/* Llib/bigloo.scm 589 */
												return ((bool_t) 0);
											}
									}
								else
									{	/* Llib/bigloo.scm 588 */
										return ((bool_t) 0);
									}
							}
						else
							{	/* Llib/bigloo.scm 587 */
								return ((bool_t) 0);
							}
					}
				else
					{	/* Llib/bigloo.scm 586 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* _bigloo-class-mangled? */
	obj_t BGl__bigloozd2classzd2mangledzf3zf3zz__biglooz00(obj_t BgL_envz00_2071,
		obj_t BgL_stringz00_2072)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 584 */
			{	/* Llib/bigloo.scm 585 */
				bool_t BgL_auxz00_2552;

				{	/* Llib/bigloo.scm 585 */
					obj_t BgL_auxz00_2553;

					if (STRINGP(BgL_stringz00_2072))
						{	/* Llib/bigloo.scm 585 */
							BgL_auxz00_2553 = BgL_stringz00_2072;
						}
					else
						{
							obj_t BgL_auxz00_2556;

							BgL_auxz00_2556 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2361z00zz__biglooz00,
								BINT(((long) 21451)), BGl_string2382z00zz__biglooz00,
								BGl_string2373z00zz__biglooz00, BgL_stringz00_2072);
							FAILURE(BgL_auxz00_2556, BFALSE, BFALSE);
						}
					BgL_auxz00_2552 = bigloo_class_mangledp(BgL_auxz00_2553);
				}
				return BBOOL(BgL_auxz00_2552);
			}
		}
	}



/* bigloo-class-demangle */
	BGL_EXPORTED_DEF obj_t bigloo_class_demangle(obj_t BgL_stringz00_22)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 597 */
			return
				string_append(bigloo_demangle(c_substring(BgL_stringz00_22, ((long) 0),
						(STRING_LENGTH(BgL_stringz00_22) - ((long) 5)))),
				BGl_string2383z00zz__biglooz00);
		}
	}



/* _bigloo-class-demangle */
	obj_t BGl__bigloozd2classzd2demanglez00zz__biglooz00(obj_t BgL_envz00_2073,
		obj_t BgL_stringz00_2074)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 597 */
			{	/* Llib/bigloo.scm 599 */
				obj_t BgL_auxz00_2567;

				if (STRINGP(BgL_stringz00_2074))
					{	/* Llib/bigloo.scm 599 */
						BgL_auxz00_2567 = BgL_stringz00_2074;
					}
				else
					{
						obj_t BgL_auxz00_2570;

						BgL_auxz00_2570 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2361z00zz__biglooz00,
							BINT(((long) 22118)), BGl_string2384z00zz__biglooz00,
							BGl_string2373z00zz__biglooz00, BgL_stringz00_2074);
						FAILURE(BgL_auxz00_2570, BFALSE, BFALSE);
					}
				return bigloo_class_demangle(BgL_auxz00_2567);
			}
		}
	}



/* bigloo-exit-mutex */
	BGL_EXPORTED_DEF obj_t bgl_exit_mutex()
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 610 */
			return BGl_za2exitzd2mutexza2zd2zz__biglooz00;
		}
	}



/* _bigloo-exit-mutex */
	obj_t BGl__bigloozd2exitzd2mutexz00zz__biglooz00(obj_t BgL_envz00_2075)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 610 */
			return BGl_za2exitzd2mutexza2zd2zz__biglooz00;
		}
	}



/* register-exit-function! */
	BGL_EXPORTED_DEF obj_t BGl_registerzd2exitzd2functionz12z12zz__biglooz00(obj_t
		BgL_funz00_23)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 621 */
			{	/* Llib/bigloo.scm 622 */
				obj_t BgL_arg2060z00_1024;

				BgL_arg2060z00_1024 = BGl_za2exitzd2mutexza2zd2zz__biglooz00;
				{	/* Llib/thread.scm 201 */

					if ((((long) 0) == ((long) 0)))
						{	/* Llib/thread.scm 201 */
							bgl_mutex_lock(BgL_arg2060z00_1024);
						}
					else
						{	/* Llib/thread.scm 201 */
							bgl_mutex_timed_lock(BgL_arg2060z00_1024, ((long) 0));
			}}}
			if (PROCEDURE_CORRECT_ARITYP(BgL_funz00_23, (int) (((long) 1))))
				{	/* Llib/bigloo.scm 623 */
					BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00 =
						MAKE_PAIR(BgL_funz00_23,
						BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00);
				}
			else
				{	/* Llib/bigloo.scm 623 */
					BGl_errorz00zz__errorz00(BGl_string2385z00zz__biglooz00,
						BGl_string2386z00zz__biglooz00, BgL_funz00_23);
				}
			{	/* Llib/bigloo.scm 628 */
				obj_t BgL_arg2062z00_1028;

				BgL_arg2062z00_1028 = BGl_za2exitzd2mutexza2zd2zz__biglooz00;
				return BBOOL(bgl_mutex_unlock(BgL_arg2062z00_1028));
			}
		}
	}



/* _register-exit-function! */
	obj_t BGl__registerzd2exitzd2functionz12z12zz__biglooz00(obj_t
		BgL_envz00_2076, obj_t BgL_funz00_2077)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 621 */
			{	/* Llib/bigloo.scm 628 */
				obj_t BgL_auxz00_2586;

				if (PROCEDUREP(BgL_funz00_2077))
					{	/* Llib/bigloo.scm 628 */
						BgL_auxz00_2586 = BgL_funz00_2077;
					}
				else
					{
						obj_t BgL_auxz00_2589;

						BgL_auxz00_2589 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2361z00zz__biglooz00,
							BINT(((long) 23510)), BGl_string2387z00zz__biglooz00,
							BGl_string2365z00zz__biglooz00, BgL_funz00_2077);
						FAILURE(BgL_auxz00_2589, BFALSE, BFALSE);
					}
				return
					BGl_registerzd2exitzd2functionz12z12zz__biglooz00(BgL_auxz00_2586);
			}
		}
	}



/* bigloo-exit-apply */
	BGL_EXPORTED_DEF obj_t bigloo_exit_apply(obj_t BgL_valz00_24)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 633 */
			{	/* Llib/bigloo.scm 634 */
				obj_t BgL_mutz00_1029;

				if (BGL_MUTEXP(BGl_za2exitzd2mutexza2zd2zz__biglooz00))
					{	/* Llib/bigloo.scm 634 */
						BgL_mutz00_1029 = BGl_za2exitzd2mutexza2zd2zz__biglooz00;
					}
				else
					{	/* Llib/bigloo.scm 634 */
						BgL_mutz00_1029 = bgl_make_mutex(BGl_symbol2356z00zz__biglooz00);
					}
				{	/* Llib/thread.scm 201 */

					if ((((long) 0) == ((long) 0)))
						{	/* Llib/thread.scm 201 */
							bgl_mutex_lock(BgL_mutz00_1029);
						}
					else
						{	/* Llib/thread.scm 201 */
							bgl_mutex_timed_lock(BgL_mutz00_1029, ((long) 0));
				}}
				{
					obj_t BgL_valz00_1033;

					BgL_valz00_1033 = BgL_valz00_24;
				BgL_zc3anonymousza32063ze3z83_1034:
					{	/* Llib/bigloo.scm 639 */
						obj_t BgL_valz00_1035;

						if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_valz00_1033))
							{	/* Llib/bigloo.scm 639 */
								BgL_valz00_1035 = BgL_valz00_1033;
							}
						else
							{	/* Llib/bigloo.scm 639 */
								BgL_valz00_1035 = BINT(((long) 0));
							}
						if (PAIRP(BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00))
							{	/* Llib/bigloo.scm 643 */
								obj_t BgL_funz00_1037;

								BgL_funz00_1037 =
									CAR(BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00);
								BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00 =
									CDR(BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00);
								{	/* Llib/bigloo.scm 645 */
									obj_t BgL_nvalz00_1038;

									BgL_nvalz00_1038 =
										PROCEDURE_ENTRY(BgL_funz00_1037) (BgL_funz00_1037,
										BgL_valz00_1035, BEOA);
									{	/* Llib/bigloo.scm 646 */
										obj_t BgL_arg2065z00_1039;

										if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
											(BgL_nvalz00_1038))
											{	/* Llib/bigloo.scm 646 */
												BgL_arg2065z00_1039 = BgL_nvalz00_1038;
											}
										else
											{	/* Llib/bigloo.scm 646 */
												BgL_arg2065z00_1039 = BgL_valz00_1035;
											}
										{
											obj_t BgL_valz00_2612;

											BgL_valz00_2612 = BgL_arg2065z00_1039;
											BgL_valz00_1033 = BgL_valz00_2612;
											goto BgL_zc3anonymousza32063ze3z83_1034;
										}
									}
								}
							}
						else
							{	/* Llib/bigloo.scm 642 */
								bgl_mutex_unlock(BgL_mutz00_1029);
								return BgL_valz00_1035;
							}
					}
				}
			}
		}
	}



/* _bigloo-exit-apply */
	obj_t BGl__bigloozd2exitzd2applyz00zz__biglooz00(obj_t BgL_envz00_2078,
		obj_t BgL_valz00_2079)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 633 */
			return bigloo_exit_apply(BgL_valz00_2079);
		}
	}



/* time */
	BGL_EXPORTED_DEF obj_t BGl_timez00zz__biglooz00(obj_t BgL_procz00_25)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 654 */
			if (PROCEDURE_CORRECT_ARITYP(BgL_procz00_25, (int) (((long) 0))))
				{	/* Llib/bigloo.scm 655 */
					return bgl_time(BgL_procz00_25);
				}
			else
				{	/* Llib/bigloo.scm 655 */
					return
						BGl_errorz00zz__errorz00(BGl_symbol2388z00zz__biglooz00,
						BGl_string2386z00zz__biglooz00, BgL_procz00_25);
				}
		}
	}



/* _time */
	obj_t BGl__timez00zz__biglooz00(obj_t BgL_envz00_2080, obj_t BgL_procz00_2081)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 654 */
			{	/* Llib/bigloo.scm 655 */
				obj_t BgL_auxz00_2620;

				if (PROCEDUREP(BgL_procz00_2081))
					{	/* Llib/bigloo.scm 655 */
						BgL_auxz00_2620 = BgL_procz00_2081;
					}
				else
					{
						obj_t BgL_auxz00_2623;

						BgL_auxz00_2623 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2361z00zz__biglooz00,
							BINT(((long) 24494)), BGl_string2390z00zz__biglooz00,
							BGl_string2365z00zz__biglooz00, BgL_procz00_2081);
						FAILURE(BgL_auxz00_2623, BFALSE, BFALSE);
					}
				return BGl_timez00zz__biglooz00(BgL_auxz00_2620);
			}
		}
	}



/* bmem-reset! */
	BGL_EXPORTED_DEF obj_t BGl_bmemzd2resetz12zc0zz__biglooz00()
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 666 */
			return bgl_bmem_reset();
		}
	}



/* _bmem-reset! */
	obj_t BGl__bmemzd2resetz12zc0zz__biglooz00(obj_t BgL_envz00_2082)
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 666 */
			return bgl_bmem_reset();
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__biglooz00()
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__biglooz00()
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__biglooz00()
	{
		AN_OBJECT;
		{	/* Llib/bigloo.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2391z00zz__biglooz00));
			BGl_modulezd2initializa7ationz75zz__configurez00(((long) 306671391),
				BSTRING_TO_STRING(BGl_string2391z00zz__biglooz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2391z00zz__biglooz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2391z00zz__biglooz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2391z00zz__biglooz00));
			return
				BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string2391z00zz__biglooz00));
		}
	}

#ifdef __cplusplus
}
#endif
