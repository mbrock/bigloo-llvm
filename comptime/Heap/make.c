/*===========================================================================*/
/*   (Heap/make.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Heap/make.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
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


	BGL_IMPORT obj_t BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_getzd2tenvzd2zztype_envz00();
	BGL_IMPORT obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t, obj_t);
	extern obj_t BGl_za2bigloozd2versionza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzheap_makez00 = BUNSPEC;
	static obj_t BGl__preparezd2additionalzd2globalsz12z12zzheap_makez00(obj_t);
	static obj_t BGl_genericzd2initzd2zzheap_makez00();
	extern obj_t BGl_za2additionalzd2heapzd2nameza2z00zzengine_paramz00;
	static obj_t BGl__makezd2addzd2heapz00zzheap_makez00(obj_t);
	extern obj_t BGl_unbindzd2globalz12zc0zzast_envz00(obj_t, obj_t);
	static obj_t BGl__preparezd2globalsz12zc0zzheap_makez00(obj_t);
	BGL_IMPORT obj_t output_obj(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzheap_makez00();
	static obj_t BGl__makezd2heapzd2zzheap_makez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2addzd2heapz00zzheap_makez00();
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	static obj_t BGl_importedzd2moduleszd2initz00zzheap_makez00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32431ze3z83zzheap_makez00(obj_t, obj_t);
	static obj_t BGl_checkzd2additionalzd2heapzd2libraryzd2zzheap_makez00();
	extern obj_t BGl_za2libzd2dirza2zd2zzengine_paramz00;
	extern obj_t BGl_za2heapzd2libraryza2zd2zzengine_paramz00;
	static bool_t BGl_preparezd2additionalzd2globalsz12z12zzheap_makez00();
	static obj_t BGl_zc3anonymousza32292ze3z83zzheap_makez00(obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzheap_makez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzheap_restorez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_libraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__intextz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__binaryz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_IMPORT obj_t close_binary_port(obj_t);
	extern obj_t BGl_za2additionalzd2includezd2foreignza2z00zzengine_paramz00;
	extern obj_t BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	static obj_t BGl__checkzd2additionalzd2heapzd2libraryzd2zzheap_makez00(obj_t);
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	BGL_IMPORT obj_t BGl_setzd2objzd2stringzd2modez12zc0zz__intextz00(obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	BGL_EXPORTED_DECL obj_t BGl_makezd2heapzd2zzheap_makez00();
	static bool_t BGl_preparezd2globalsz12zc0zzheap_makez00();
	extern obj_t BGl_getzd2genvzd2zzast_envz00();
	extern obj_t BGl_za2heapzd2nameza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzheap_makez00();
	static obj_t BGl_methodzd2initzd2zzheap_makez00();
	static obj_t __cnst[9];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2addzd2heapzd2envzd2zzheap_makez00,
		BgL_bgl__makeza7d2addza7d2he2545z00,
		BGl__makezd2addzd2heapz00zzheap_makez00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_preparezd2globalsz12zd2envz12zzheap_makez00,
		BgL_bgl__prepareza7d2globa2546za7,
		BGl__preparezd2globalsz12zc0zzheap_makez00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2528z00zzheap_makez00,
		BgL_bgl_string2528za700za7za7h2547za7, "Heap", 4);
	      DEFINE_STRING(BGl_string2530z00zzheap_makez00,
		BgL_bgl_string2530za700za7za7h2548za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string2529z00zzheap_makez00,
		BgL_bgl_string2529za700za7za7h2549za7, "   . ", 5);
	      DEFINE_STRING(BGl_string2531z00zzheap_makez00,
		BgL_bgl_string2531za700za7za7h2550za7, "make-heap", 9);
	      DEFINE_STRING(BGl_string2532z00zzheap_makez00,
		BgL_bgl_string2532za700za7za7h2551za7, "Can't open output port", 22);
	      DEFINE_STRING(BGl_string2533z00zzheap_makez00,
		BgL_bgl_string2533za700za7za7h2552za7, "Illegal heap's name", 19);
	      DEFINE_STRING(BGl_string2535z00zzheap_makez00,
		BgL_bgl_string2535za700za7za7h2553za7, "Library heap", 12);
	      DEFINE_STRING(BGl_string2536z00zzheap_makez00,
		BgL_bgl_string2536za700za7za7h2554za7, "make-addd-heap", 14);
	      DEFINE_STRING(BGl_string2537z00zzheap_makez00,
		BgL_bgl_string2537za700za7za7h2555za7, "make-add-heap", 13);
	      DEFINE_STRING(BGl_string2538z00zzheap_makez00,
		BgL_bgl_string2538za700za7za7h2556za7,
		"Illegal reserved identifier for additional heap library (see `-heap-library' compiler option)",
		93);
	      DEFINE_STRING(BGl_string2539z00zzheap_makez00,
		BgL_bgl_string2539za700za7za7h2557za7,
		"Missing additional heap library identifier (see `-heap-library' compiler option)",
		80);
	      DEFINE_STRING(BGl_string2541z00zzheap_makez00,
		BgL_bgl_string2541za700za7za7h2558za7, "heap_make", 9);
	      DEFINE_STRING(BGl_string2542z00zzheap_makez00,
		BgL_bgl_string2542za700za7za7h2559za7,
		"make-add-heap bigloo (check-additional-heap-library prepare-additional-globals!) import export static pair pass-started (prepare-globals!) ",
		139);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_checkzd2additionalzd2heapzd2libraryzd2envz00zzheap_makez00,
		BgL_bgl__checkza7d2additio2560za7,
		BGl__checkzd2additionalzd2heapzd2libraryzd2zzheap_makez00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_preparezd2additionalzd2globalsz12zd2envzc0zzheap_makez00,
		BgL_bgl__prepareza7d2addit2561za7,
		BGl__preparezd2additionalzd2globalsz12z12zzheap_makez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2heapzd2envz00zzheap_makez00,
		BgL_bgl__makeza7d2heapza7d2za72562za7, BGl__makezd2heapzd2zzheap_makez00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2534z00zzheap_makez00,
		BgL_bgl_za7c3anonymousza7a322563z00,
		BGl_zc3anonymousza32292ze3z83zzheap_makez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2540z00zzheap_makez00,
		BgL_bgl_za7c3anonymousza7a322564z00,
		BGl_zc3anonymousza32431ze3z83zzheap_makez00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzheap_makez00(long
		BgL_checksumz00_829, char *BgL_fromz00_830)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzheap_makez00))
				{
					BGl_requirezd2initializa7ationz75zzheap_makez00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzheap_makez00();
					BGl_cnstzd2initzd2zzheap_makez00();
					BGl_importedzd2moduleszd2initz00zzheap_makez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzheap_makez00()
	{
		AN_OBJECT;
		{	/* Heap/make.scm 15 */
			BGl_modulezd2initializa7ationz75zz__binaryz00(((long) 0), "heap_make");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "heap_make");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "heap_make");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "heap_make");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "heap_make");
			BGl_modulezd2initializa7ationz75zz__intextz00(((long) 0), "heap_make");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzheap_makez00()
	{
		AN_OBJECT;
		{	/* Heap/make.scm 15 */
			{	/* Heap/make.scm 15 */
				obj_t BgL_cportz00_821;

				BgL_cportz00_821 =
					bgl_open_input_string(BGl_string2542z00zzheap_makez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_822;

					BgL_iz00_822 = ((long) 8);
				BgL_loopz00_823:
					if ((BgL_iz00_822 == ((long) -1)))
						{	/* Heap/make.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Heap/make.scm 15 */
							{	/* Heap/make.scm 15 */
								obj_t BgL_arg2544z00_825;

								{	/* Heap/make.scm 15 */

									{	/* Heap/make.scm 15 */
										obj_t BgL_locationz00_827;

										BgL_locationz00_827 = BBOOL(((bool_t) 0));
										{	/* Heap/make.scm 15 */

											BgL_arg2544z00_825 =
												BGl_readz00zz__readerz00(BgL_cportz00_821,
												BgL_locationz00_827);
										}
									}
								}
								{	/* Heap/make.scm 15 */
									int BgL_auxz00_849;

									BgL_auxz00_849 = (int) (BgL_iz00_822);
									CNST_TABLE_SET(BgL_auxz00_849, BgL_arg2544z00_825);
							}}
							{	/* Heap/make.scm 15 */
								int BgL_auxz00_828;

								BgL_auxz00_828 = (int) ((BgL_iz00_822 - ((long) 1)));
								{
									long BgL_iz00_854;

									BgL_iz00_854 = (long) (BgL_auxz00_828);
									BgL_iz00_822 = BgL_iz00_854;
									goto BgL_loopz00_823;
								}
							}
						}
				}
			}
		}
	}



/* make-heap */
	BGL_EXPORTED_DEF obj_t BGl_makezd2heapzd2zzheap_makez00()
	{
		AN_OBJECT;
		{	/* Heap/make.scm 35 */
			{	/* Heap/make.scm 36 */
				obj_t BgL_list2213z00_467;

				{	/* Heap/make.scm 36 */
					obj_t BgL_arg2222z00_469;

					{	/* Heap/make.scm 36 */
						obj_t BgL_arg2227z00_471;

						BgL_arg2227z00_471 = MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
						BgL_arg2222z00_469 =
							MAKE_PAIR(BGl_string2528z00zzheap_makez00, BgL_arg2227z00_471);
					}
					BgL_list2213z00_467 =
						MAKE_PAIR(BGl_string2529z00zzheap_makez00, BgL_arg2222z00_469);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list2213z00_467);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string2528z00zzheap_makez00;
			{	/* Heap/make.scm 36 */
				obj_t BgL_g2205z00_472;

				obj_t BgL_g2206z00_473;

				{	/* Heap/make.scm 36 */
					obj_t BgL_list2244z00_487;

					BgL_list2244z00_487 =
						MAKE_PAIR(BGl_preparezd2globalsz12zd2envz12zzheap_makez00, BNIL);
					BgL_g2205z00_472 = BgL_list2244z00_487;
				}
				BgL_g2206z00_473 = CNST_TABLE_REF(((long) 0));
				{
					obj_t BgL_hooksz00_475;

					obj_t BgL_hnamesz00_476;

					BgL_hooksz00_475 = BgL_g2205z00_472;
					BgL_hnamesz00_476 = BgL_g2206z00_473;
				BgL_zc3anonymousza32228ze3z83_477:
					if (NULLP(BgL_hooksz00_475))
						{	/* Heap/make.scm 36 */
							CNST_TABLE_REF(((long) 1));
						}
					else
						{	/* Heap/make.scm 36 */
							bool_t BgL_testz00_868;

							{	/* Heap/make.scm 36 */
								obj_t BgL_fun2243z00_485;

								BgL_fun2243z00_485 = CAR(BgL_hooksz00_475);
								BgL_testz00_868 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun2243z00_485) (BgL_fun2243z00_485,
										BEOA));
							}
							if (BgL_testz00_868)
								{
									obj_t BgL_hnamesz00_875;

									obj_t BgL_hooksz00_873;

									BgL_hooksz00_873 = CDR(BgL_hooksz00_475);
									BgL_hnamesz00_875 = CDR(BgL_hnamesz00_476);
									BgL_hnamesz00_476 = BgL_hnamesz00_875;
									BgL_hooksz00_475 = BgL_hooksz00_873;
									goto BgL_zc3anonymousza32228ze3z83_477;
								}
							else
								{	/* Heap/make.scm 36 */
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string2528z00zzheap_makez00,
										BGl_string2530z00zzheap_makez00, CAR(BgL_hnamesz00_476));
								}
						}
				}
			}
			BGl_setzd2objzd2stringzd2modez12zc0zz__intextz00(CNST_TABLE_REF(((long)
						2)));
			if (STRINGP(BGl_za2heapzd2nameza2zd2zzengine_paramz00))
				{	/* Heap/make.scm 40 */
					obj_t BgL_hnamez00_489;

					{	/* Heap/make.scm 40 */
						obj_t BgL_arg2285z00_501;

						BgL_arg2285z00_501 = CAR(BGl_za2libzd2dirza2zd2zzengine_paramz00);
						BgL_hnamez00_489 =
							BGl_makezd2filezd2namez00zz__osz00(BgL_arg2285z00_501,
							BGl_za2heapzd2nameza2zd2zzengine_paramz00);
					}
					{	/* Heap/make.scm 41 */
						obj_t BgL_portz00_490;

						BgL_portz00_490 =
							BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00
							(BgL_hnamez00_489);
						if (BINARY_PORTP(BgL_portz00_490))
							{	/* Heap/make.scm 42 */
								{	/* Heap/make.scm 46 */
									obj_t BgL_arg2252z00_492;

									{	/* Heap/make.scm 46 */
										obj_t BgL_v2211z00_493;

										BgL_v2211z00_493 = create_vector((int) (((long) 5)));
										VECTOR_SET(BgL_v2211z00_493,
											(int) (((long) 4)), BGl_getzd2tenvzd2zztype_envz00());
										VECTOR_SET(BgL_v2211z00_493,
											(int) (((long) 3)), BGl_getzd2genvzd2zzast_envz00());
										VECTOR_SET(BgL_v2211z00_493,
											(int) (((long) 2)),
											BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00);
										VECTOR_SET(BgL_v2211z00_493, (int) (((long) 1)),
											BGl_za2bigloozd2versionza2zd2zzengine_paramz00);
										{	/* Heap/make.scm 46 */
											obj_t BgL_arg2275z00_499;

											{	/* Heap/make.scm 46 */
												obj_t BgL_arg2282z00_500;

												BgL_arg2282z00_500 =
													BGl_thezd2backendzd2zzbackend_backendz00();
												{
													BgL_backendz00_bglt BgL_auxz00_901;

													BgL_auxz00_901 =
														(BgL_backendz00_bglt) (BgL_arg2282z00_500);
													BgL_arg2275z00_499 =
														(((BgL_backendz00_bglt) CREF(BgL_auxz00_901))->
														BgL_languagez00);
											}}
											VECTOR_SET(BgL_v2211z00_493,
												(int) (((long) 0)), BgL_arg2275z00_499);
										}
										BgL_arg2252z00_492 = BgL_v2211z00_493;
									}
									output_obj(BgL_portz00_490, BgL_arg2252z00_492);
								}
								return close_binary_port(BgL_portz00_490);
							}
						else
							{	/* Heap/make.scm 42 */
								return
									BGl_errorz00zz__errorz00(BGl_string2531z00zzheap_makez00,
									BGl_string2532z00zzheap_makez00, BgL_hnamez00_489);
							}
					}
				}
			else
				{	/* Heap/make.scm 38 */
					return
						BGl_userzd2errorzd2zztools_errorz00(BGl_string2531z00zzheap_makez00,
						BGl_string2533z00zzheap_makez00,
						BGl_za2heapzd2nameza2zd2zzengine_paramz00, BNIL);
				}
		}
	}



/* _make-heap */
	obj_t BGl__makezd2heapzd2zzheap_makez00(obj_t BgL_envz00_810)
	{
		AN_OBJECT;
		{	/* Heap/make.scm 35 */
			return BGl_makezd2heapzd2zzheap_makez00();
		}
	}



/* prepare-globals! */
	bool_t BGl_preparezd2globalsz12zc0zzheap_makez00()
	{
		AN_OBJECT;
		{	/* Heap/make.scm 60 */
			BGl_forzd2eachzd2globalz12z12zzast_envz00(BGl_proc2534z00zzheap_makez00,
				BNIL);
			return ((bool_t) 1);
		}
	}



/* _prepare-globals! */
	obj_t BGl__preparezd2globalsz12zc0zzheap_makez00(obj_t BgL_envz00_811)
	{
		AN_OBJECT;
		{	/* Heap/make.scm 60 */
			return BBOOL(BGl_preparezd2globalsz12zc0zzheap_makez00());
		}
	}



/* <anonymous:2292> */
	obj_t BGl_zc3anonymousza32292ze3z83zzheap_makez00(obj_t BgL_envz00_813,
		obj_t BgL_gz00_814)
	{
		AN_OBJECT;
		{	/* Heap/make.scm 61 */
			{
				obj_t BgL_gz00_505;

				BgL_gz00_505 = BgL_gz00_814;
				{	/* Heap/make.scm 64 */
					bool_t BgL_testz00_914;

					{	/* Heap/make.scm 64 */
						obj_t BgL_auxz00_915;

						{
							BgL_globalz00_bglt BgL_auxz00_916;

							BgL_auxz00_916 = (BgL_globalz00_bglt) (BgL_gz00_505);
							BgL_auxz00_915 =
								(((BgL_globalz00_bglt) CREF(BgL_auxz00_916))->BgL_importz00);
						}
						BgL_testz00_914 = (BgL_auxz00_915 == CNST_TABLE_REF(((long) 3)));
					}
					if (BgL_testz00_914)
						{	/* Heap/make.scm 65 */
							obj_t BgL_arg2295z00_508;

							obj_t BgL_arg2297z00_509;

							{
								BgL_variablez00_bglt BgL_auxz00_921;

								BgL_auxz00_921 = (BgL_variablez00_bglt) (BgL_gz00_505);
								BgL_arg2295z00_508 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_921))->BgL_idz00);
							}
							{
								BgL_globalz00_bglt BgL_auxz00_924;

								BgL_auxz00_924 = (BgL_globalz00_bglt) (BgL_gz00_505);
								BgL_arg2297z00_509 =
									(((BgL_globalz00_bglt) CREF(BgL_auxz00_924))->BgL_modulez00);
							}
							BGl_unbindzd2globalz12zc0zzast_envz00(BgL_arg2295z00_508,
								BgL_arg2297z00_509);
						}
					else
						{	/* Heap/make.scm 66 */
							bool_t BgL_testz00_928;

							{	/* Heap/make.scm 66 */
								obj_t BgL_auxz00_929;

								{
									BgL_globalz00_bglt BgL_auxz00_930;

									BgL_auxz00_930 = (BgL_globalz00_bglt) (BgL_gz00_505);
									BgL_auxz00_929 =
										(((BgL_globalz00_bglt) CREF(BgL_auxz00_930))->
										BgL_importz00);
								}
								BgL_testz00_928 =
									(BgL_auxz00_929 == CNST_TABLE_REF(((long) 4)));
							}
							if (BgL_testz00_928)
								{	/* Heap/make.scm 67 */
									BgL_globalz00_bglt BgL_obj1681z00_735;

									obj_t BgL_val1680z00_736;

									BgL_obj1681z00_735 = (BgL_globalz00_bglt) (BgL_gz00_505);
									BgL_val1680z00_736 = CNST_TABLE_REF(((long) 5));
									((((BgL_globalz00_bglt) CREF(BgL_obj1681z00_735))->
											BgL_importz00) = ((obj_t) BgL_val1680z00_736), BUNSPEC);
								}
							else
								{	/* Heap/make.scm 66 */
									BUNSPEC;
								}
						}
				}
				{	/* Heap/make.scm 72 */
					bool_t BgL_testz00_938;

					{	/* Heap/make.scm 72 */
						bool_t BgL_testz00_939;

						{	/* Heap/make.scm 72 */
							obj_t BgL_auxz00_940;

							{	/* Heap/make.scm 72 */
								BgL_objectz00_bglt BgL_auxz00_941;

								BgL_auxz00_941 = (BgL_objectz00_bglt) (BgL_gz00_505);
								BgL_auxz00_940 = BGL_OBJECT_WIDENING(BgL_auxz00_941);
							}
							BgL_testz00_939 = CBOOL(BgL_auxz00_940);
						}
						if (BgL_testz00_939)
							{	/* Heap/make.scm 72 */
								BgL_testz00_938 = ((bool_t) 1);
							}
						else
							{	/* Heap/make.scm 72 */
								BgL_testz00_938 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_938)
						{	/* Heap/make.scm 72 */
							{	/* Heap/make.scm 72 */
								long BgL_arg2331z00_517;

								{	/* Heap/make.scm 72 */
									obj_t BgL_arg2338z00_518;

									{	/* Heap/make.scm 72 */
										obj_t BgL_arg2344z00_519;

										{	/* Heap/make.scm 72 */
											BgL_objectz00_bglt BgL_objectz00_740;

											BgL_objectz00_740 = (BgL_objectz00_bglt) (BgL_gz00_505);
											{	/* Heap/make.scm 72 */
												long BgL_arg2646z00_741;

												{	/* Heap/make.scm 72 */
													long BgL_arg2647z00_742;

													BgL_arg2647z00_742 =
														BGL_OBJECT_CLASS_NUM(BgL_objectz00_740);
													BgL_arg2646z00_741 =
														(BgL_arg2647z00_742 - OBJECT_TYPE);
												}
												BgL_arg2344z00_519 =
													VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
													(int) (BgL_arg2646z00_741));
										}}
										BgL_arg2338z00_518 =
											BGl_classzd2superzd2zz__objectz00(BgL_arg2344z00_519);
									}
									BgL_arg2331z00_517 =
										BGl_classzd2numzd2zz__objectz00(BgL_arg2338z00_518);
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_gz00_505), BgL_arg2331z00_517);
							}
							{	/* Heap/make.scm 72 */
								BgL_objectz00_bglt BgL_auxz00_954;

								BgL_auxz00_954 = (BgL_objectz00_bglt) (BgL_gz00_505);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_954, BFALSE);
							} BgL_gz00_505;
						}
					else
						{	/* Heap/make.scm 72 */
							BFALSE;
						}
				}
				{
					BgL_variablez00_bglt BgL_auxz00_957;

					BgL_auxz00_957 = (BgL_variablez00_bglt) (BgL_gz00_505);
					((((BgL_variablez00_bglt) CREF(BgL_auxz00_957))->BgL_occurrencez00) =
						((long) ((long) 0)), BUNSPEC);
				}
				{
					BgL_globalz00_bglt BgL_auxz00_960;

					BgL_auxz00_960 = (BgL_globalz00_bglt) (BgL_gz00_505);
					return
						((((BgL_globalz00_bglt) CREF(BgL_auxz00_960))->BgL_libraryz00) =
						((obj_t) BGl_za2heapzd2libraryza2zd2zzengine_paramz00), BUNSPEC);
				}
			}
		}
	}



/* make-add-heap */
	BGL_EXPORTED_DEF obj_t BGl_makezd2addzd2heapz00zzheap_makez00()
	{
		AN_OBJECT;
		{	/* Heap/make.scm 84 */
			{	/* Heap/make.scm 85 */
				obj_t BgL_list2345z00_521;

				{	/* Heap/make.scm 85 */
					obj_t BgL_arg2357z00_523;

					{	/* Heap/make.scm 85 */
						obj_t BgL_arg2370z00_525;

						BgL_arg2370z00_525 = MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
						BgL_arg2357z00_523 =
							MAKE_PAIR(BGl_string2535z00zzheap_makez00, BgL_arg2370z00_525);
					}
					BgL_list2345z00_521 =
						MAKE_PAIR(BGl_string2529z00zzheap_makez00, BgL_arg2357z00_523);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list2345z00_521);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string2535z00zzheap_makez00;
			{	/* Heap/make.scm 85 */
				obj_t BgL_g2208z00_526;

				obj_t BgL_g2209z00_527;

				{	/* Heap/make.scm 85 */
					obj_t BgL_list2405z00_541;

					{	/* Heap/make.scm 85 */
						obj_t BgL_arg2409z00_542;

						BgL_arg2409z00_542 =
							MAKE_PAIR
							(BGl_preparezd2additionalzd2globalsz12zd2envzc0zzheap_makez00,
							BNIL);
						BgL_list2405z00_541 =
							MAKE_PAIR
							(BGl_checkzd2additionalzd2heapzd2libraryzd2envz00zzheap_makez00,
							BgL_arg2409z00_542);
					}
					BgL_g2208z00_526 = BgL_list2405z00_541;
				}
				BgL_g2209z00_527 = CNST_TABLE_REF(((long) 6));
				{
					obj_t BgL_hooksz00_529;

					obj_t BgL_hnamesz00_530;

					BgL_hooksz00_529 = BgL_g2208z00_526;
					BgL_hnamesz00_530 = BgL_g2209z00_527;
				BgL_zc3anonymousza32371ze3z83_531:
					if (NULLP(BgL_hooksz00_529))
						{	/* Heap/make.scm 85 */
							CNST_TABLE_REF(((long) 1));
						}
					else
						{	/* Heap/make.scm 85 */
							bool_t BgL_testz00_976;

							{	/* Heap/make.scm 85 */
								obj_t BgL_fun2404z00_539;

								BgL_fun2404z00_539 = CAR(BgL_hooksz00_529);
								BgL_testz00_976 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun2404z00_539) (BgL_fun2404z00_539,
										BEOA));
							}
							if (BgL_testz00_976)
								{
									obj_t BgL_hnamesz00_983;

									obj_t BgL_hooksz00_981;

									BgL_hooksz00_981 = CDR(BgL_hooksz00_529);
									BgL_hnamesz00_983 = CDR(BgL_hnamesz00_530);
									BgL_hnamesz00_530 = BgL_hnamesz00_983;
									BgL_hooksz00_529 = BgL_hooksz00_981;
									goto BgL_zc3anonymousza32371ze3z83_531;
								}
							else
								{	/* Heap/make.scm 85 */
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string2535z00zzheap_makez00,
										BGl_string2530z00zzheap_makez00, CAR(BgL_hnamesz00_530));
								}
						}
				}
			}
			{	/* Heap/make.scm 88 */
				obj_t BgL_genvz00_543;

				obj_t BgL_tenvz00_544;

				obj_t BgL_langz00_545;

				BgL_genvz00_543 = BGl_getzd2genvzd2zzast_envz00();
				BgL_tenvz00_544 = BGl_getzd2tenvzd2zztype_envz00();
				{	/* Heap/make.scm 90 */
					obj_t BgL_arg2422z00_553;

					BgL_arg2422z00_553 = BGl_thezd2backendzd2zzbackend_backendz00();
					{
						BgL_backendz00_bglt BgL_auxz00_990;

						BgL_auxz00_990 = (BgL_backendz00_bglt) (BgL_arg2422z00_553);
						BgL_langz00_545 =
							(((BgL_backendz00_bglt) CREF(BgL_auxz00_990))->BgL_languagez00);
					}
				}
				BGl_setzd2objzd2stringzd2modez12zc0zz__intextz00(CNST_TABLE_REF(((long)
							2)));
				if (STRINGP(BGl_za2additionalzd2heapzd2nameza2z00zzengine_paramz00))
					{	/* Heap/make.scm 96 */
						obj_t BgL_hnamez00_547;

						BgL_hnamez00_547 =
							BGl_za2additionalzd2heapzd2nameza2z00zzengine_paramz00;
						{	/* Heap/make.scm 97 */
							obj_t BgL_portz00_548;

							BgL_portz00_548 =
								BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00
								(BgL_hnamez00_547);
							if (BINARY_PORTP(BgL_portz00_548))
								{	/* Heap/make.scm 98 */
									{	/* Heap/make.scm 101 */
										obj_t BgL_arg2416z00_550;

										{	/* Heap/make.scm 101 */
											obj_t BgL_v2212z00_551;

											BgL_v2212z00_551 = create_vector((int) (((long) 6)));
											VECTOR_SET(BgL_v2212z00_551,
												(int) (((long) 5)),
												BGl_za2additionalzd2includezd2foreignza2z00zzengine_paramz00);
											VECTOR_SET(BgL_v2212z00_551, (int) (((long) 4)),
												BgL_tenvz00_544);
											VECTOR_SET(BgL_v2212z00_551, (int) (((long) 3)),
												BgL_genvz00_543);
											VECTOR_SET(BgL_v2212z00_551, (int) (((long) 2)),
												BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00);
											VECTOR_SET(BgL_v2212z00_551, (int) (((long) 1)),
												BGl_za2bigloozd2versionza2zd2zzengine_paramz00);
											VECTOR_SET(BgL_v2212z00_551, (int) (((long) 0)),
												BgL_langz00_545);
											BgL_arg2416z00_550 = BgL_v2212z00_551;
										}
										output_obj(BgL_portz00_548, BgL_arg2416z00_550);
									}
									return close_binary_port(BgL_portz00_548);
								}
							else
								{	/* Heap/make.scm 98 */
									return
										BGl_errorz00zz__errorz00(BGl_string2536z00zzheap_makez00,
										BGl_string2532z00zzheap_makez00, BgL_hnamez00_547);
								}
						}
					}
				else
					{	/* Heap/make.scm 92 */
						return
							BGl_userzd2errorzd2zztools_errorz00
							(BGl_string2537z00zzheap_makez00, BGl_string2533z00zzheap_makez00,
							BGl_za2additionalzd2heapzd2nameza2z00zzengine_paramz00, BNIL);
					}
			}
		}
	}



/* _make-add-heap */
	obj_t BGl__makezd2addzd2heapz00zzheap_makez00(obj_t BgL_envz00_815)
	{
		AN_OBJECT;
		{	/* Heap/make.scm 84 */
			return BGl_makezd2addzd2heapz00zzheap_makez00();
		}
	}



/* check-additional-heap-library */
	obj_t BGl_checkzd2additionalzd2heapzd2libraryzd2zzheap_makez00()
	{
		AN_OBJECT;
		{	/* Heap/make.scm 112 */
			if (
				(BGl_za2heapzd2libraryza2zd2zzengine_paramz00 ==
					CNST_TABLE_REF(((long) 7))))
				{	/* Heap/make.scm 114 */
					return
						BGl_userzd2errorzd2zztools_errorz00(CNST_TABLE_REF(((long) 8)),
						BGl_string2538z00zzheap_makez00,
						BGl_za2heapzd2libraryza2zd2zzengine_paramz00, BNIL);
				}
			else
				{	/* Heap/make.scm 114 */
					if (SYMBOLP(BGl_za2heapzd2libraryza2zd2zzengine_paramz00))
						{	/* Heap/make.scm 118 */
							return BTRUE;
						}
					else
						{	/* Heap/make.scm 118 */
							return
								BGl_userzd2errorzd2zztools_errorz00(CNST_TABLE_REF(((long) 8)),
								BGl_string2539z00zzheap_makez00,
								BGl_za2heapzd2libraryza2zd2zzengine_paramz00, BNIL);
		}}}
	}



/* _check-additional-heap-library */
	obj_t BGl__checkzd2additionalzd2heapzd2libraryzd2zzheap_makez00(obj_t
		BgL_envz00_817)
	{
		AN_OBJECT;
		{	/* Heap/make.scm 112 */
			return BGl_checkzd2additionalzd2heapzd2libraryzd2zzheap_makez00();
		}
	}



/* prepare-additional-globals! */
	bool_t BGl_preparezd2additionalzd2globalsz12z12zzheap_makez00()
	{
		AN_OBJECT;
		{	/* Heap/make.scm 132 */
			BGl_forzd2eachzd2globalz12z12zzast_envz00(BGl_proc2540z00zzheap_makez00,
				BNIL);
			return ((bool_t) 1);
		}
	}



/* _prepare-additional-globals! */
	obj_t BGl__preparezd2additionalzd2globalsz12z12zzheap_makez00(obj_t
		BgL_envz00_816)
	{
		AN_OBJECT;
		{	/* Heap/make.scm 132 */
			return BBOOL(BGl_preparezd2additionalzd2globalsz12z12zzheap_makez00());
		}
	}



/* <anonymous:2431> */
	obj_t BGl_zc3anonymousza32431ze3z83zzheap_makez00(obj_t BgL_envz00_819,
		obj_t BgL_gz00_820)
	{
		AN_OBJECT;
		{	/* Heap/make.scm 133 */
			{
				obj_t BgL_gz00_560;

				BgL_gz00_560 = BgL_gz00_820;
				{	/* Heap/make.scm 136 */
					bool_t BgL_testz00_1032;

					{	/* Heap/make.scm 136 */
						bool_t BgL_testz00_1033;

						{	/* Heap/make.scm 136 */
							obj_t BgL_auxz00_1034;

							{
								BgL_globalz00_bglt BgL_auxz00_1035;

								BgL_auxz00_1035 = (BgL_globalz00_bglt) (BgL_gz00_560);
								BgL_auxz00_1034 =
									(((BgL_globalz00_bglt) CREF(BgL_auxz00_1035))->BgL_importz00);
							}
							BgL_testz00_1033 =
								(BgL_auxz00_1034 == CNST_TABLE_REF(((long) 3)));
						}
						if (BgL_testz00_1033)
							{	/* Heap/make.scm 136 */
								BgL_testz00_1032 = ((bool_t) 1);
							}
						else
							{	/* Heap/make.scm 137 */
								BgL_globalz00_bglt BgL_obj1685z00_787;

								BgL_obj1685z00_787 = (BgL_globalz00_bglt) (BgL_gz00_560);
								BgL_testz00_1032 =
									CBOOL(
									(((BgL_globalz00_bglt) CREF(BgL_obj1685z00_787))->
										BgL_libraryz00));
							}
					}
					if (BgL_testz00_1032)
						{	/* Heap/make.scm 138 */
							obj_t BgL_arg2437z00_563;

							obj_t BgL_arg2438z00_564;

							{
								BgL_variablez00_bglt BgL_auxz00_1043;

								BgL_auxz00_1043 = (BgL_variablez00_bglt) (BgL_gz00_560);
								BgL_arg2437z00_563 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_1043))->BgL_idz00);
							}
							{
								BgL_globalz00_bglt BgL_auxz00_1046;

								BgL_auxz00_1046 = (BgL_globalz00_bglt) (BgL_gz00_560);
								BgL_arg2438z00_564 =
									(((BgL_globalz00_bglt) CREF(BgL_auxz00_1046))->BgL_modulez00);
							}
							BGl_unbindzd2globalz12zc0zzast_envz00(BgL_arg2437z00_563,
								BgL_arg2438z00_564);
						}
					else
						{	/* Heap/make.scm 139 */
							bool_t BgL_testz00_1050;

							{	/* Heap/make.scm 139 */
								obj_t BgL_auxz00_1051;

								{
									BgL_globalz00_bglt BgL_auxz00_1052;

									BgL_auxz00_1052 = (BgL_globalz00_bglt) (BgL_gz00_560);
									BgL_auxz00_1051 =
										(((BgL_globalz00_bglt) CREF(BgL_auxz00_1052))->
										BgL_importz00);
								}
								BgL_testz00_1050 =
									(BgL_auxz00_1051 == CNST_TABLE_REF(((long) 4)));
							}
							if (BgL_testz00_1050)
								{	/* Heap/make.scm 140 */
									BgL_globalz00_bglt BgL_obj1681z00_791;

									obj_t BgL_val1680z00_792;

									BgL_obj1681z00_791 = (BgL_globalz00_bglt) (BgL_gz00_560);
									BgL_val1680z00_792 = CNST_TABLE_REF(((long) 5));
									((((BgL_globalz00_bglt) CREF(BgL_obj1681z00_791))->
											BgL_importz00) = ((obj_t) BgL_val1680z00_792), BUNSPEC);
								}
							else
								{	/* Heap/make.scm 139 */
									BUNSPEC;
								}
						}
				}
				{	/* Heap/make.scm 145 */
					bool_t BgL_testz00_1060;

					{	/* Heap/make.scm 145 */
						bool_t BgL_testz00_1061;

						{	/* Heap/make.scm 145 */
							obj_t BgL_auxz00_1062;

							{	/* Heap/make.scm 145 */
								BgL_objectz00_bglt BgL_auxz00_1063;

								BgL_auxz00_1063 = (BgL_objectz00_bglt) (BgL_gz00_560);
								BgL_auxz00_1062 = BGL_OBJECT_WIDENING(BgL_auxz00_1063);
							}
							BgL_testz00_1061 = CBOOL(BgL_auxz00_1062);
						}
						if (BgL_testz00_1061)
							{	/* Heap/make.scm 145 */
								BgL_testz00_1060 = ((bool_t) 1);
							}
						else
							{	/* Heap/make.scm 145 */
								BgL_testz00_1060 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_1060)
						{	/* Heap/make.scm 145 */
							{	/* Heap/make.scm 145 */
								long BgL_arg2453z00_573;

								{	/* Heap/make.scm 145 */
									obj_t BgL_arg2454z00_574;

									{	/* Heap/make.scm 145 */
										obj_t BgL_arg2459z00_575;

										{	/* Heap/make.scm 145 */
											BgL_objectz00_bglt BgL_objectz00_796;

											BgL_objectz00_796 = (BgL_objectz00_bglt) (BgL_gz00_560);
											{	/* Heap/make.scm 145 */
												long BgL_arg2646z00_797;

												{	/* Heap/make.scm 145 */
													long BgL_arg2647z00_798;

													BgL_arg2647z00_798 =
														BGL_OBJECT_CLASS_NUM(BgL_objectz00_796);
													BgL_arg2646z00_797 =
														(BgL_arg2647z00_798 - OBJECT_TYPE);
												}
												BgL_arg2459z00_575 =
													VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
													(int) (BgL_arg2646z00_797));
										}}
										BgL_arg2454z00_574 =
											BGl_classzd2superzd2zz__objectz00(BgL_arg2459z00_575);
									}
									BgL_arg2453z00_573 =
										BGl_classzd2numzd2zz__objectz00(BgL_arg2454z00_574);
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_gz00_560), BgL_arg2453z00_573);
							}
							{	/* Heap/make.scm 145 */
								BgL_objectz00_bglt BgL_auxz00_1076;

								BgL_auxz00_1076 = (BgL_objectz00_bglt) (BgL_gz00_560);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_1076, BFALSE);
							} BgL_gz00_560;
						}
					else
						{	/* Heap/make.scm 145 */
							BFALSE;
						}
				}
				{
					BgL_variablez00_bglt BgL_auxz00_1079;

					BgL_auxz00_1079 = (BgL_variablez00_bglt) (BgL_gz00_560);
					((((BgL_variablez00_bglt) CREF(BgL_auxz00_1079))->BgL_occurrencez00) =
						((long) ((long) 0)), BUNSPEC);
				}
				{
					BgL_globalz00_bglt BgL_auxz00_1082;

					BgL_auxz00_1082 = (BgL_globalz00_bglt) (BgL_gz00_560);
					return
						((((BgL_globalz00_bglt) CREF(BgL_auxz00_1082))->BgL_libraryz00) =
						((obj_t) BGl_za2heapzd2libraryza2zd2zzengine_paramz00), BUNSPEC);
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzheap_makez00()
	{
		AN_OBJECT;
		{	/* Heap/make.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzheap_makez00()
	{
		AN_OBJECT;
		{	/* Heap/make.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzheap_makez00()
	{
		AN_OBJECT;
		{	/* Heap/make.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string2541z00zzheap_makez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string2541z00zzheap_makez00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string2541z00zzheap_makez00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string2541z00zzheap_makez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string2541z00zzheap_makez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2541z00zzheap_makez00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string2541z00zzheap_makez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string2541z00zzheap_makez00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string2541z00zzheap_makez00));
			BGl_modulezd2initializa7ationz75zzforeign_libraryz00(((long) 477408199),
				BSTRING_TO_STRING(BGl_string2541z00zzheap_makez00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string2541z00zzheap_makez00));
			BGl_modulezd2initializa7ationz75zzheap_restorez00(((long) 307873065),
				BSTRING_TO_STRING(BGl_string2541z00zzheap_makez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string2541z00zzheap_makez00));
			return
				BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string2541z00zzheap_makez00));
		}
	}

#ifdef __cplusplus
}
#endif
