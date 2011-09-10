/*===========================================================================*/
/*   (Heap/restore.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Heap/restore.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
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


	extern obj_t BGl_za2bigloozd2versionza2zd2zzengine_paramz00;
	static obj_t BGl_zc3anonymousza32379ze3z83zzheap_restorez00(obj_t, obj_t);
	extern obj_t BGl_setzd2genvz12zc0zzast_envz00(obj_t);
	extern obj_t BGl_addzd2tenvz12zc0zztype_envz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzheap_restorez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_restorezd2additionalzd2heapsz00zzheap_restorez00();
	static obj_t BGl_genericzd2initzd2zzheap_restorez00();
	BGL_IMPORT bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	static obj_t BGl__restorezd2heapzd2zzheap_restorez00(obj_t);
	static bool_t BGl_backendzd2heapzd2compatiblezf3zf3zzheap_restorez00(obj_t);
	BGL_IMPORT obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	extern obj_t BGl_unbindzd2globalz12zc0zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_za2additionalzd2heapzd2namesza2z00zzengine_paramz00;
	static obj_t BGl_cnstzd2initzd2zzheap_restorez00();
	static obj_t BGl_unbindzd2callzf2ccz12z32zzheap_restorez00();
	BGL_EXPORTED_DECL obj_t BGl_restorezd2heapzd2zzheap_restorez00();
	static obj_t BGl_zc3anonymousza32558ze3z83zzheap_restorez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	static obj_t BGl__heapzd2modulezd2listz00zzheap_restorez00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzheap_restorez00();
	extern obj_t BGl_setzd2tenvz12zc0zztype_envz00(obj_t);
	static obj_t BGl_zc3anonymousza32565ze3z83zzheap_restorez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2libzd2dirza2zd2zzengine_paramz00;
	static obj_t BGl_zc3exitza32276ze3z83zzheap_restorez00(obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2forzd2eachz00zz__hashz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzheap_restorez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_enginez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__binaryz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzheap_restorez00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_za2callzf2cczf3za2z01zzengine_paramz00;
	BGL_IMPORT obj_t close_binary_port(obj_t);
	extern obj_t BGl_za2additionalzd2includezd2foreignza2z00zzengine_paramz00;
	BGL_IMPORT obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	extern obj_t BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00;
	BGL_IMPORT obj_t BGl_openzd2inputzd2binaryzd2filezd2zz__binaryz00(obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	static obj_t BGl__restorezd2additionalzd2heapz00zzheap_restorez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	BGL_IMPORT obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_za2heapzd2modulezd2listza2z00zzheap_restorez00 = BUNSPEC;
	static obj_t BGl__restorezd2additionalzd2heapsz00zzheap_restorez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_restorezd2additionalzd2heapz00zzheap_restorez00(obj_t);
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_addzd2genvz12zc0zzast_envz00(obj_t);
	static obj_t BGl_zc3anonymousza32346ze3z83zzheap_restorez00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_IMPORT obj_t input_obj(obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_zc3exitza32478ze3z83zzheap_restorez00(obj_t, obj_t);
	extern obj_t BGl_compilerzd2exitzd2zzinit_mainz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_heapzd2modulezd2listz00zzheap_restorez00(obj_t);
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_za2heapzd2nameza2zd2zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzheap_restorez00();
	static obj_t BGl_za2heapzd2markza2zd2zzheap_restorez00 = BUNSPEC;
	extern obj_t BGl_za2unsafezd2heapza2zd2zzengine_paramz00;
	static obj_t BGl_methodzd2initzd2zzheap_restorez00();
	extern obj_t BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00(obj_t, obj_t,
		obj_t);
	static obj_t __cnst[7];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2670z00zzheap_restorez00,
		BgL_bgl_za7c3anonymousza7a322681z00,
		BGl_zc3anonymousza32346ze3z83zzheap_restorez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2671z00zzheap_restorez00,
		BgL_bgl_za7c3anonymousza7a322682z00,
		BGl_zc3anonymousza32379ze3z83zzheap_restorez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2675z00zzheap_restorez00,
		BgL_bgl_za7c3anonymousza7a322683z00,
		BGl_zc3anonymousza32558ze3z83zzheap_restorez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2676z00zzheap_restorez00,
		BgL_bgl_za7c3anonymousza7a322684z00,
		BGl_zc3anonymousza32565ze3z83zzheap_restorez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2658z00zzheap_restorez00,
		BgL_bgl_string2658za700za7za7h2685za7, "Heap", 4);
	      DEFINE_STRING(BGl_string2660z00zzheap_restorez00,
		BgL_bgl_string2660za700za7za7h2686za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string2659z00zzheap_restorez00,
		BgL_bgl_string2659za700za7za7h2687za7, "   . ", 5);
	      DEFINE_STRING(BGl_string2661z00zzheap_restorez00,
		BgL_bgl_string2661za700za7za7h2688za7, "]", 1);
	      DEFINE_STRING(BGl_string2662z00zzheap_restorez00,
		BgL_bgl_string2662za700za7za7h2689za7, "      [reading ", 15);
	      DEFINE_STRING(BGl_string2663z00zzheap_restorez00,
		BgL_bgl_string2663za700za7za7h2690za7, "Cannot open heap file ~s", 24);
	      DEFINE_STRING(BGl_string2664z00zzheap_restorez00,
		BgL_bgl_string2664za700za7za7h2691za7, "Corrupted heap", 14);
	      DEFINE_STRING(BGl_string2665z00zzheap_restorez00,
		BgL_bgl_string2665za700za7za7h2692za7, "~a vs. ~a", 9);
	      DEFINE_STRING(BGl_string2666z00zzheap_restorez00,
		BgL_bgl_string2666za700za7za7h2693za7, "Target language mismatch", 24);
	      DEFINE_STRING(BGl_string2667z00zzheap_restorez00,
		BgL_bgl_string2667za700za7za7h2694za7, "Heap is `~a', Bigloo is `~a'", 28);
	      DEFINE_STRING(BGl_string2668z00zzheap_restorez00,
		BgL_bgl_string2668za700za7za7h2695za7, "Release mismatch", 16);
	      DEFINE_STRING(BGl_string2669z00zzheap_restorez00,
		BgL_bgl_string2669za700za7za7h2696za7, "Specific version mismatch", 25);
	      DEFINE_STRING(BGl_string2672z00zzheap_restorez00,
		BgL_bgl_string2672za700za7za7h2697za7, ".", 1);
	      DEFINE_STRING(BGl_string2673z00zzheap_restorez00,
		BgL_bgl_string2673za700za7za7h2698za7, "Library", 7);
	      DEFINE_STRING(BGl_string2674z00zzheap_restorez00,
		BgL_bgl_string2674za700za7za7h2699za7, "restore-additional-heap", 23);
	      DEFINE_STRING(BGl_string2677z00zzheap_restorez00,
		BgL_bgl_string2677za700za7za7h2700za7, "heap_restore", 12);
	      DEFINE_STRING(BGl_string2678z00zzheap_restorez00,
		BgL_bgl_string2678za700za7za7h2701za7,
		"restore-additional-heap call-with-current-continuation __r4_control_features_6_9 call/cc restore-heap pass-started heap-mark ",
		125);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_restorezd2heapzd2envz00zzheap_restorez00,
		BgL_bgl__restoreza7d2heapza72702z00,
		BGl__restorezd2heapzd2zzheap_restorez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_heapzd2modulezd2listzd2envzd2zzheap_restorez00,
		BgL_bgl__heapza7d2moduleza7d2703z00, va_generic_entry,
		BGl__heapzd2modulezd2listz00zzheap_restorez00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_restorezd2additionalzd2heapzd2envzd2zzheap_restorez00,
		BgL_bgl__restoreza7d2addit2704za7,
		BGl__restorezd2additionalzd2heapz00zzheap_restorez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_restorezd2additionalzd2heapszd2envzd2zzheap_restorez00,
		BgL_bgl__restoreza7d2addit2705za7,
		BGl__restorezd2additionalzd2heapsz00zzheap_restorez00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzheap_restorez00(long
		BgL_checksumz00_910, char *BgL_fromz00_911)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzheap_restorez00))
				{
					BGl_requirezd2initializa7ationz75zzheap_restorez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzheap_restorez00();
					BGl_cnstzd2initzd2zzheap_restorez00();
					BGl_importedzd2moduleszd2initz00zzheap_restorez00();
					BGl_toplevelzd2initzd2zzheap_restorez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzheap_restorez00()
	{
		AN_OBJECT;
		{	/* Heap/restore.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "heap_restore");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"heap_restore");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"heap_restore");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "heap_restore");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "heap_restore");
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 0), "heap_restore");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "heap_restore");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"heap_restore");
			BGl_modulezd2initializa7ationz75zz__binaryz00(((long) 0), "heap_restore");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"heap_restore");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzheap_restorez00()
	{
		AN_OBJECT;
		{	/* Heap/restore.scm 15 */
			{	/* Heap/restore.scm 15 */
				obj_t BgL_cportz00_902;

				BgL_cportz00_902 =
					bgl_open_input_string(BGl_string2678z00zzheap_restorez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_903;

					BgL_iz00_903 = ((long) 6);
				BgL_loopz00_904:
					if ((BgL_iz00_903 == ((long) -1)))
						{	/* Heap/restore.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Heap/restore.scm 15 */
							{	/* Heap/restore.scm 15 */
								obj_t BgL_arg2680z00_906;

								{	/* Heap/restore.scm 15 */

									{	/* Heap/restore.scm 15 */
										obj_t BgL_locationz00_908;

										BgL_locationz00_908 = BBOOL(((bool_t) 0));
										{	/* Heap/restore.scm 15 */

											BgL_arg2680z00_906 =
												BGl_readz00zz__readerz00(BgL_cportz00_902,
												BgL_locationz00_908);
										}
									}
								}
								{	/* Heap/restore.scm 15 */
									int BgL_auxz00_935;

									BgL_auxz00_935 = (int) (BgL_iz00_903);
									CNST_TABLE_SET(BgL_auxz00_935, BgL_arg2680z00_906);
							}}
							{	/* Heap/restore.scm 15 */
								int BgL_auxz00_909;

								BgL_auxz00_909 = (int) ((BgL_iz00_903 - ((long) 1)));
								{
									long BgL_iz00_940;

									BgL_iz00_940 = (long) (BgL_auxz00_909);
									BgL_iz00_903 = BgL_iz00_940;
									goto BgL_loopz00_904;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzheap_restorez00()
	{
		AN_OBJECT;
		{	/* Heap/restore.scm 15 */
			BGl_za2heapzd2modulezd2listza2z00zzheap_restorez00 = BNIL;
			return (BGl_za2heapzd2markza2zd2zzheap_restorez00 =
				CNST_TABLE_REF(((long) 0)), BUNSPEC);
		}
	}



/* backend-heap-compatible? */
	bool_t BGl_backendzd2heapzd2compatiblezf3zf3zzheap_restorez00(obj_t
		BgL_targetz00_1)
	{
		AN_OBJECT;
		{	/* Heap/restore.scm 36 */
			{	/* Heap/restore.scm 37 */
				obj_t BgL_instance2181z00_460;

				BgL_instance2181z00_460 = BGl_thezd2backendzd2zzbackend_backendz00();
				{	/* Heap/restore.scm 38 */
					bool_t BgL__ortest_2183z00_461;

					{	/* Heap/restore.scm 38 */
						obj_t BgL_auxz00_944;

						{
							BgL_backendz00_bglt BgL_auxz00_945;

							BgL_auxz00_945 = (BgL_backendz00_bglt) (BgL_instance2181z00_460);
							BgL_auxz00_944 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_945))->BgL_languagez00);
						}
						BgL__ortest_2183z00_461 = (BgL_targetz00_1 == BgL_auxz00_944);
					}
					if (BgL__ortest_2183z00_461)
						{	/* Heap/restore.scm 38 */
							return BgL__ortest_2183z00_461;
						}
					else
						{	/* Heap/restore.scm 38 */
							obj_t BgL_auxz00_950;

							{
								BgL_backendz00_bglt BgL_auxz00_951;

								BgL_auxz00_951 =
									(BgL_backendz00_bglt) (BgL_instance2181z00_460);
								BgL_auxz00_950 =
									(((BgL_backendz00_bglt) CREF(BgL_auxz00_951))->
									BgL_heapzd2compatiblezd2);
							}
							return (BgL_targetz00_1 == BgL_auxz00_950);
						}
				}
			}
		}
	}



/* restore-heap */
	BGL_EXPORTED_DEF obj_t BGl_restorezd2heapzd2zzheap_restorez00()
	{
		AN_OBJECT;
		{	/* Heap/restore.scm 43 */
			if (STRINGP(BGl_za2heapzd2nameza2zd2zzengine_paramz00))
				{	/* Heap/restore.scm 44 */
					{	/* Heap/restore.scm 45 */
						obj_t BgL_list2215z00_465;

						{	/* Heap/restore.scm 45 */
							obj_t BgL_arg2222z00_467;

							{	/* Heap/restore.scm 45 */
								obj_t BgL_arg2227z00_469;

								BgL_arg2227z00_469 =
									MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
								BgL_arg2222z00_467 =
									MAKE_PAIR(BGl_string2658z00zzheap_restorez00,
									BgL_arg2227z00_469);
							}
							BgL_list2215z00_465 =
								MAKE_PAIR(BGl_string2659z00zzheap_restorez00,
								BgL_arg2222z00_467);
						}
						BGl_verbosez00zztools_speekz00(BINT(((long) 1)),
							BgL_list2215z00_465);
					}
					BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 =
						BINT(((long) 0));
					BGl_za2currentzd2passza2zd2zzengine_passz00 =
						BGl_string2658z00zzheap_restorez00;
					{
						obj_t BgL_hooksz00_473;

						obj_t BgL_hnamesz00_474;

						BgL_hooksz00_473 = BNIL;
						BgL_hnamesz00_474 = BNIL;
					BgL_zc3anonymousza32228ze3z83_475:
						if (NULLP(BgL_hooksz00_473))
							{	/* Heap/restore.scm 45 */
								CNST_TABLE_REF(((long) 1));
							}
						else
							{	/* Heap/restore.scm 45 */
								bool_t BgL_testz00_967;

								{	/* Heap/restore.scm 45 */
									obj_t BgL_fun2243z00_483;

									BgL_fun2243z00_483 = CAR(BgL_hooksz00_473);
									BgL_testz00_967 =
										CBOOL(PROCEDURE_ENTRY(BgL_fun2243z00_483)
										(BgL_fun2243z00_483, BEOA));
								}
								if (BgL_testz00_967)
									{
										obj_t BgL_hnamesz00_974;

										obj_t BgL_hooksz00_972;

										BgL_hooksz00_972 = CDR(BgL_hooksz00_473);
										BgL_hnamesz00_974 = CDR(BgL_hnamesz00_474);
										BgL_hnamesz00_474 = BgL_hnamesz00_974;
										BgL_hooksz00_473 = BgL_hooksz00_972;
										goto BgL_zc3anonymousza32228ze3z83_475;
									}
								else
									{	/* Heap/restore.scm 45 */
										BGl_internalzd2errorzd2zztools_errorz00
											(BGl_string2658z00zzheap_restorez00,
											BGl_string2660z00zzheap_restorez00,
											CAR(BgL_hnamesz00_474));
									}
							}
					}
					{	/* Heap/restore.scm 46 */
						obj_t BgL_fnamez00_486;

						BgL_fnamez00_486 =
							BGl_findzd2filezf2pathz20zz__osz00
							(BGl_za2heapzd2nameza2zd2zzengine_paramz00,
							BGl_za2libzd2dirza2zd2zzengine_paramz00);
						if (STRINGP(BgL_fnamez00_486))
							{	/* Heap/restore.scm 48 */
								obj_t BgL_portz00_488;

								BgL_portz00_488 =
									BGl_openzd2inputzd2binaryzd2filezd2zz__binaryz00
									(BgL_fnamez00_486);
								if (BINARY_PORTP(BgL_portz00_488))
									{	/* Heap/restore.scm 49 */
										{	/* Heap/restore.scm 54 */
											obj_t BgL_list2247z00_490;

											{	/* Heap/restore.scm 54 */
												obj_t BgL_arg2255z00_492;

												{	/* Heap/restore.scm 54 */
													obj_t BgL_arg2259z00_493;

													{	/* Heap/restore.scm 54 */
														obj_t BgL_arg2267z00_495;

														BgL_arg2267z00_495 =
															MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
														BgL_arg2259z00_493 =
															MAKE_PAIR(BGl_string2661z00zzheap_restorez00,
															BgL_arg2267z00_495);
													}
													BgL_arg2255z00_492 =
														MAKE_PAIR(BgL_fnamez00_486, BgL_arg2259z00_493);
												}
												BgL_list2247z00_490 =
													MAKE_PAIR(BGl_string2662z00zzheap_restorez00,
													BgL_arg2255z00_492);
											}
											BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
												BgL_list2247z00_490);
										}
										{	/* Heap/restore.scm 55 */
											obj_t BgL_val2186z00_496;

											BgL_val2186z00_496 =
												BGl_zc3exitza32276ze3z83zzheap_restorez00
												(BgL_portz00_488);
											close_binary_port(BgL_portz00_488);
											if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
													(BgL_val2186z00_496)))
												{	/* Heap/restore.scm 109 */
													return
														BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
														(BgL_val2186z00_496), CDR(BgL_val2186z00_496));
												}
											else
												{	/* Heap/restore.scm 109 */
													return BgL_val2186z00_496;
												}
										}
									}
								else
									{	/* Heap/restore.scm 50 */
										obj_t BgL_mz00_550;

										{	/* Heap/restore.scm 50 */
											obj_t BgL_list2397z00_551;

											BgL_list2397z00_551 = MAKE_PAIR(BgL_fnamez00_486, BNIL);
											BgL_mz00_550 =
												BGl_formatz00zz__r4_output_6_10_3z00
												(BGl_string2663z00zzheap_restorez00,
												BgL_list2397z00_551);
										}
										BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 2)),
											BgL_mz00_550, BGl_za2libzd2dirza2zd2zzengine_paramz00);
										return BGl_compilerzd2exitzd2zzinit_mainz00(BINT(((long)
													5)));
							}}
						else
							{	/* Heap/restore.scm 110 */
								obj_t BgL_mz00_552;

								{	/* Heap/restore.scm 110 */
									obj_t BgL_list2398z00_553;

									BgL_list2398z00_553 =
										MAKE_PAIR(BGl_za2heapzd2nameza2zd2zzengine_paramz00, BNIL);
									BgL_mz00_552 =
										BGl_formatz00zz__r4_output_6_10_3z00
										(BGl_string2663z00zzheap_restorez00, BgL_list2398z00_553);
								}
								BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 2)),
									BgL_mz00_552, BGl_za2libzd2dirza2zd2zzengine_paramz00);
								return BGl_compilerzd2exitzd2zzinit_mainz00(BINT(((long) 5)));
				}}}
			else
				{	/* Heap/restore.scm 44 */
					return BFALSE;
				}
		}
	}



/* <exit:2276> */
	obj_t BGl_zc3exitza32276ze3z83zzheap_restorez00(obj_t BgL_portz00_900)
	{
		AN_OBJECT;
		{	/* Heap/restore.scm 109 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2187z00_501;

			if (SET_EXIT(BgL_an_exit2187z00_501))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2187z00_501 = (void *) jmpbuf;
					{	/* Heap/restore.scm 109 */

						PUSH_EXIT(BgL_an_exit2187z00_501, ((long) 0));
						{	/* Heap/restore.scm 56 */
							bool_t BgL_val2188z00_502;

							{	/* Heap/restore.scm 56 */
								obj_t BgL_envsz00_503;

								BgL_envsz00_503 = input_obj(BgL_portz00_900);
								{	/* Heap/restore.scm 56 */
									obj_t BgL__z00_504;

									{	/* Heap/restore.scm 57 */
										bool_t BgL_testz00_1015;

										if (VECTORP(BgL_envsz00_503))
											{	/* Heap/restore.scm 58 */
												int BgL_arg2390z00_548;

												BgL_arg2390z00_548 = VECTOR_LENGTH(BgL_envsz00_503);
												BgL_testz00_1015 =
													((long) (BgL_arg2390z00_548) == ((long) 5));
											}
										else
											{	/* Heap/restore.scm 57 */
												BgL_testz00_1015 = ((bool_t) 0);
											}
										if (BgL_testz00_1015)
											{	/* Heap/restore.scm 57 */
												BgL__z00_504 = BFALSE;
											}
										else
											{	/* Heap/restore.scm 57 */
												BgL__z00_504 =
													BGl_errorz00zz__errorz00
													(BGl_za2heapzd2nameza2zd2zzengine_paramz00,
													BGl_string2664z00zzheap_restorez00, BgL_envsz00_503);
											}
									}
									{	/* Heap/restore.scm 57 */
										obj_t BgL_targetz00_505;

										BgL_targetz00_505 =
											VECTOR_REF(BgL_envsz00_503, (int) (((long) 0)));
										{	/* Heap/restore.scm 62 */
											obj_t BgL_versionz00_506;

											BgL_versionz00_506 =
												VECTOR_REF(BgL_envsz00_503, (int) (((long) 1)));
											{	/* Heap/restore.scm 63 */
												obj_t BgL_specificz00_507;

												BgL_specificz00_507 =
													VECTOR_REF(BgL_envsz00_503, (int) (((long) 2)));
												{	/* Heap/restore.scm 64 */
													obj_t BgL_genvz00_508;

													BgL_genvz00_508 =
														VECTOR_REF(BgL_envsz00_503, (int) (((long) 3)));
													{	/* Heap/restore.scm 65 */
														obj_t BgL_tenvz00_509;

														BgL_tenvz00_509 =
															VECTOR_REF(BgL_envsz00_503, (int) (((long) 4)));
														{	/* Heap/restore.scm 66 */

															if (BGl_backendzd2heapzd2compatiblezf3zf3zzheap_restorez00(BgL_targetz00_505))
																{	/* Heap/restore.scm 68 */
																	BFALSE;
																}
															else
																{	/* Heap/restore.scm 69 */
																	obj_t BgL_arg2285z00_512;

																	{	/* Heap/restore.scm 71 */
																		obj_t BgL_arg2290z00_514;

																		{	/* Heap/restore.scm 73 */
																			obj_t BgL_arg2297z00_517;

																			BgL_arg2297z00_517 =
																				BGl_thezd2backendzd2zzbackend_backendz00
																				();
																			{
																				BgL_backendz00_bglt BgL_auxz00_1035;

																				BgL_auxz00_1035 =
																					(BgL_backendz00_bglt)
																					(BgL_arg2297z00_517);
																				BgL_arg2290z00_514 =
																					(((BgL_backendz00_bglt)
																						CREF(BgL_auxz00_1035))->
																					BgL_languagez00);
																			}
																		}
																		{	/* Heap/restore.scm 71 */
																			obj_t BgL_list2291z00_515;

																			{	/* Heap/restore.scm 71 */
																				obj_t BgL_arg2295z00_516;

																				BgL_arg2295z00_516 =
																					MAKE_PAIR(BgL_arg2290z00_514, BNIL);
																				BgL_list2291z00_515 =
																					MAKE_PAIR(BgL_targetz00_505,
																					BgL_arg2295z00_516);
																			}
																			BgL_arg2285z00_512 =
																				BGl_formatz00zz__r4_output_6_10_3z00
																				(BGl_string2665z00zzheap_restorez00,
																				BgL_list2291z00_515);
																		}
																	}
																	BGl_errorz00zz__errorz00
																		(BGl_za2heapzd2nameza2zd2zzengine_paramz00,
																		BGl_string2666z00zzheap_restorez00,
																		BgL_arg2285z00_512);
																}
															{	/* Heap/restore.scm 74 */
																bool_t BgL_testz00_1042;

																if (CBOOL
																	(BGl_za2unsafezd2heapza2zd2zzengine_paramz00))
																	{	/* Heap/restore.scm 74 */
																		BgL_testz00_1042 = ((bool_t) 1);
																	}
																else
																	{	/* Heap/restore.scm 74 */
																		BgL_testz00_1042 =
																			BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																			(BgL_versionz00_506,
																			BGl_za2bigloozd2versionza2zd2zzengine_paramz00);
																	}
																if (BgL_testz00_1042)
																	{	/* Heap/restore.scm 74 */
																		BFALSE;
																	}
																else
																	{	/* Heap/restore.scm 76 */
																		obj_t BgL_arg2312z00_520;

																		{	/* Heap/restore.scm 78 */
																			obj_t BgL_list2313z00_521;

																			{	/* Heap/restore.scm 78 */
																				obj_t BgL_arg2318z00_522;

																				BgL_arg2318z00_522 =
																					MAKE_PAIR
																					(BGl_za2bigloozd2versionza2zd2zzengine_paramz00,
																					BNIL);
																				BgL_list2313z00_521 =
																					MAKE_PAIR(BgL_versionz00_506,
																					BgL_arg2318z00_522);
																			}
																			BgL_arg2312z00_520 =
																				BGl_formatz00zz__r4_output_6_10_3z00
																				(BGl_string2667z00zzheap_restorez00,
																				BgL_list2313z00_521);
																		}
																		BGl_errorz00zz__errorz00
																			(BGl_za2heapzd2nameza2zd2zzengine_paramz00,
																			BGl_string2668z00zzheap_restorez00,
																			BgL_arg2312z00_520);
																	}
															}
															{	/* Heap/restore.scm 81 */
																bool_t BgL_testz00_1050;

																if (CBOOL
																	(BGl_za2unsafezd2heapza2zd2zzengine_paramz00))
																	{	/* Heap/restore.scm 81 */
																		BgL_testz00_1050 = ((bool_t) 1);
																	}
																else
																	{	/* Heap/restore.scm 81 */
																		BgL_testz00_1050 =
																			BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																			(BgL_specificz00_507,
																			BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00);
																	}
																if (BgL_testz00_1050)
																	{	/* Heap/restore.scm 81 */
																		BFALSE;
																	}
																else
																	{	/* Heap/restore.scm 83 */
																		obj_t BgL_arg2331z00_525;

																		{	/* Heap/restore.scm 85 */
																			obj_t BgL_list2332z00_526;

																			{	/* Heap/restore.scm 85 */
																				obj_t BgL_arg2338z00_527;

																				BgL_arg2338z00_527 =
																					MAKE_PAIR
																					(BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00,
																					BNIL);
																				BgL_list2332z00_526 =
																					MAKE_PAIR(BgL_specificz00_507,
																					BgL_arg2338z00_527);
																			}
																			BgL_arg2331z00_525 =
																				BGl_formatz00zz__r4_output_6_10_3z00
																				(BGl_string2667z00zzheap_restorez00,
																				BgL_list2332z00_526);
																		}
																		BGl_errorz00zz__errorz00
																			(BGl_za2heapzd2nameza2zd2zzengine_paramz00,
																			BGl_string2669z00zzheap_restorez00,
																			BgL_arg2331z00_525);
																	}
															}
															BGl_setzd2genvz12zc0zzast_envz00(BgL_genvz00_508);
															BGl_setzd2tenvz12zc0zztype_envz00
																(BgL_tenvz00_509);
															if (CBOOL
																(BGl_za2callzf2cczf3za2z01zzengine_paramz00))
																{	/* Heap/restore.scm 93 */
																	BFALSE;
																}
															else
																{	/* Heap/restore.scm 93 */
																	BGl_unbindzd2callzf2ccz12z32zzheap_restorez00
																		();
																}
															{	/* Heap/restore.scm 96 */
																bool_t BgL_testz00_1063;

																{	/* Heap/restore.scm 96 */
																	obj_t BgL_arg2370z00_538;

																	BgL_arg2370z00_538 =
																		BGl_thezd2backendzd2zzbackend_backendz00();
																	{
																		BgL_backendz00_bglt BgL_auxz00_1065;

																		BgL_auxz00_1065 =
																			(BgL_backendz00_bglt)
																			(BgL_arg2370z00_538);
																		BgL_testz00_1063 =
																			(((BgL_backendz00_bglt)
																				CREF(BgL_auxz00_1065))->
																			BgL_qualifiedzd2typeszd2);
																	}
																}
																if (BgL_testz00_1063)
																	{	/* Heap/restore.scm 96 */
																		BGl_forzd2eachzd2globalz12z12zzast_envz00
																			(BGl_proc2670z00zzheap_restorez00, BNIL);
																		BgL_genvz00_508;
																	}
																else
																	{	/* Heap/restore.scm 96 */
																		BFALSE;
																	}
															}
															BGl_forzd2eachzd2globalz12z12zzast_envz00
																(BGl_proc2671z00zzheap_restorez00, BNIL);
															BgL_val2188z00_502 = ((bool_t) 1);
														}
													}
												}
											}
										}
									}
								}
							}
							POP_EXIT();
							return BBOOL(BgL_val2188z00_502);
						}
					}
				}
		}
	}



/* _restore-heap */
	obj_t BGl__restorezd2heapzd2zzheap_restorez00(obj_t BgL_envz00_881)
	{
		AN_OBJECT;
		{	/* Heap/restore.scm 43 */
			return BGl_restorezd2heapzd2zzheap_restorez00();
		}
	}



/* <anonymous:2379> */
	obj_t BGl_zc3anonymousza32379ze3z83zzheap_restorez00(obj_t BgL_envz00_882,
		obj_t BgL_newz00_883)
	{
		AN_OBJECT;
		{	/* Heap/restore.scm 106 */
			{
				obj_t BgL_newz00_541;

				BgL_newz00_541 = BgL_newz00_883;
				{	/* Heap/restore.scm 107 */
					obj_t BgL_arg2383z00_824;

					{
						BgL_globalz00_bglt BgL_auxz00_1073;

						BgL_auxz00_1073 = (BgL_globalz00_bglt) (BgL_newz00_541);
						BgL_arg2383z00_824 =
							(((BgL_globalz00_bglt) CREF(BgL_auxz00_1073))->BgL_modulez00);
					}
					{	/* Heap/restore.scm 107 */
						obj_t BgL_list2384z00_825;

						BgL_list2384z00_825 = MAKE_PAIR(BgL_arg2383z00_824, BNIL);
						return
							BGl_heapzd2modulezd2listz00zzheap_restorez00(BgL_list2384z00_825);
					}
				}
			}
		}
	}



/* <anonymous:2346> */
	obj_t BGl_zc3anonymousza32346ze3z83zzheap_restorez00(obj_t BgL_envz00_884,
		obj_t BgL_newz00_885)
	{
		AN_OBJECT;
		{	/* Heap/restore.scm 98 */
			{
				obj_t BgL_newz00_531;

				BgL_newz00_531 = BgL_newz00_885;
				{	/* Heap/restore.scm 100 */
					obj_t BgL_arg2351z00_533;

					obj_t BgL_arg2357z00_534;

					obj_t BgL_arg2364z00_535;

					{
						BgL_globalz00_bglt BgL_auxz00_1078;

						BgL_auxz00_1078 = (BgL_globalz00_bglt) (BgL_newz00_531);
						BgL_arg2351z00_533 =
							(((BgL_globalz00_bglt) CREF(BgL_auxz00_1078))->BgL_modulez00);
					}
					{
						BgL_globalz00_bglt BgL_auxz00_1081;

						BgL_auxz00_1081 = (BgL_globalz00_bglt) (BgL_newz00_531);
						BgL_arg2357z00_534 =
							(((BgL_globalz00_bglt) CREF(BgL_auxz00_1081))->
							BgL_jvmzd2typezd2namez00);
					}
					BgL_arg2364z00_535 = BGl_shapez00zztools_shapez00(BgL_newz00_531);
					{	/* Heap/restore.scm 99 */
						obj_t BgL_list2365z00_536;

						BgL_list2365z00_536 = MAKE_PAIR(BgL_arg2364z00_535, BNIL);
						return
							BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00(BgL_arg2351z00_533,
							BgL_arg2357z00_534, BgL_list2365z00_536);
					}
				}
			}
		}
	}



/* unbind-call/cc! */
	obj_t BGl_unbindzd2callzf2ccz12z32zzheap_restorez00()
	{
		AN_OBJECT;
		{	/* Heap/restore.scm 117 */
			if (CBOOL(BGl_findzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
								3)), CNST_TABLE_REF(((long) 4)))))
				{	/* Heap/restore.scm 118 */
					BGl_unbindzd2globalz12zc0zzast_envz00(CNST_TABLE_REF(((long) 3)),
						CNST_TABLE_REF(((long) 4)));
				}
			else
				{	/* Heap/restore.scm 118 */
					BFALSE;
				}
			if (CBOOL(BGl_findzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
								5)), CNST_TABLE_REF(((long) 4)))))
				{	/* Heap/restore.scm 120 */
					return
						BGl_unbindzd2globalz12zc0zzast_envz00(CNST_TABLE_REF(((long) 5)),
						CNST_TABLE_REF(((long) 4)));
				}
			else
				{	/* Heap/restore.scm 120 */
					return BFALSE;
				}
		}
	}



/* restore-additional-heaps */
	BGL_EXPORTED_DEF obj_t BGl_restorezd2additionalzd2heapsz00zzheap_restorez00()
	{
		AN_OBJECT;
		{	/* Heap/restore.scm 128 */
			if (PAIRP(BGl_za2additionalzd2heapzd2namesza2z00zzengine_paramz00))
				{	/* Heap/restore.scm 130 */
					obj_t BgL_sufz00_557;

					{	/* Heap/restore.scm 130 */
						obj_t BgL_arg2451z00_589;

						{	/* Heap/restore.scm 130 */
							obj_t BgL_arg2452z00_590;

							BgL_arg2452z00_590 = BGl_thezd2backendzd2zzbackend_backendz00();
							{
								BgL_backendz00_bglt BgL_auxz00_1106;

								BgL_auxz00_1106 = (BgL_backendz00_bglt) (BgL_arg2452z00_590);
								BgL_arg2451z00_589 =
									(((BgL_backendz00_bglt) CREF(BgL_auxz00_1106))->
									BgL_heapzd2suffixzd2);
							}
						}
						BgL_sufz00_557 =
							string_append(BGl_string2672z00zzheap_restorez00,
							BgL_arg2451z00_589);
					}
					{	/* Heap/restore.scm 131 */
						obj_t BgL_list2402z00_558;

						{	/* Heap/restore.scm 131 */
							obj_t BgL_arg2409z00_560;

							{	/* Heap/restore.scm 131 */
								obj_t BgL_arg2422z00_562;

								BgL_arg2422z00_562 =
									MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
								BgL_arg2409z00_560 =
									MAKE_PAIR(BGl_string2673z00zzheap_restorez00,
									BgL_arg2422z00_562);
							}
							BgL_list2402z00_558 =
								MAKE_PAIR(BGl_string2659z00zzheap_restorez00,
								BgL_arg2409z00_560);
						}
						BGl_verbosez00zztools_speekz00(BINT(((long) 1)),
							BgL_list2402z00_558);
					}
					BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 =
						BINT(((long) 0));
					BGl_za2currentzd2passza2zd2zzengine_passz00 =
						BGl_string2673z00zzheap_restorez00;
					{
						obj_t BgL_hooksz00_566;

						obj_t BgL_hnamesz00_567;

						BgL_hooksz00_566 = BNIL;
						BgL_hnamesz00_567 = BNIL;
					BgL_zc3anonymousza32423ze3z83_568:
						if (NULLP(BgL_hooksz00_566))
							{	/* Heap/restore.scm 131 */
								CNST_TABLE_REF(((long) 1));
							}
						else
							{	/* Heap/restore.scm 131 */
								bool_t BgL_testz00_1120;

								{	/* Heap/restore.scm 131 */
									obj_t BgL_fun2439z00_576;

									BgL_fun2439z00_576 = CAR(BgL_hooksz00_566);
									BgL_testz00_1120 =
										CBOOL(PROCEDURE_ENTRY(BgL_fun2439z00_576)
										(BgL_fun2439z00_576, BEOA));
								}
								if (BgL_testz00_1120)
									{
										obj_t BgL_hnamesz00_1127;

										obj_t BgL_hooksz00_1125;

										BgL_hooksz00_1125 = CDR(BgL_hooksz00_566);
										BgL_hnamesz00_1127 = CDR(BgL_hnamesz00_567);
										BgL_hnamesz00_567 = BgL_hnamesz00_1127;
										BgL_hooksz00_566 = BgL_hooksz00_1125;
										goto BgL_zc3anonymousza32423ze3z83_568;
									}
								else
									{	/* Heap/restore.scm 131 */
										BGl_internalzd2errorzd2zztools_errorz00
											(BGl_string2673z00zzheap_restorez00,
											BGl_string2660z00zzheap_restorez00,
											CAR(BgL_hnamesz00_567));
									}
							}
					}
					{	/* Heap/restore.scm 132 */
						obj_t BgL_g2196z00_579;

						BgL_g2196z00_579 =
							bgl_reverse
							(BGl_za2additionalzd2heapzd2namesza2z00zzengine_paramz00);
						{
							obj_t BgL_l2194z00_581;

							{	/* Heap/restore.scm 134 */
								bool_t BgL_auxz00_1132;

								BgL_l2194z00_581 = BgL_g2196z00_579;
							BgL_zc3anonymousza32441ze3z83_582:
								if (PAIRP(BgL_l2194z00_581))
									{	/* Heap/restore.scm 134 */
										{	/* Heap/restore.scm 133 */
											obj_t BgL_hz00_584;

											BgL_hz00_584 = CAR(BgL_l2194z00_581);
											BGl_restorezd2additionalzd2heapz00zzheap_restorez00
												(string_append(BgL_hz00_584, BgL_sufz00_557));
										}
										{
											obj_t BgL_l2194z00_1138;

											BgL_l2194z00_1138 = CDR(BgL_l2194z00_581);
											BgL_l2194z00_581 = BgL_l2194z00_1138;
											goto BgL_zc3anonymousza32441ze3z83_582;
										}
									}
								else
									{	/* Heap/restore.scm 134 */
										BgL_auxz00_1132 = ((bool_t) 1);
									}
								return BBOOL(BgL_auxz00_1132);
							}
						}
					}
				}
			else
				{	/* Heap/restore.scm 129 */
					return BFALSE;
				}
		}
	}



/* _restore-additional-heaps */
	obj_t BGl__restorezd2additionalzd2heapsz00zzheap_restorez00(obj_t
		BgL_envz00_886)
	{
		AN_OBJECT;
		{	/* Heap/restore.scm 128 */
			return BGl_restorezd2additionalzd2heapsz00zzheap_restorez00();
		}
	}



/* restore-additional-heap */
	BGL_EXPORTED_DEF obj_t
		BGl_restorezd2additionalzd2heapz00zzheap_restorez00(obj_t BgL_heapz00_2)
	{
		AN_OBJECT;
		{	/* Heap/restore.scm 139 */
			{	/* Heap/restore.scm 140 */
				obj_t BgL_fnamez00_591;

				BgL_fnamez00_591 =
					BGl_findzd2filezf2pathz20zz__osz00(BgL_heapz00_2,
					BGl_za2libzd2dirza2zd2zzengine_paramz00);
				if (STRINGP(BgL_fnamez00_591))
					{	/* Heap/restore.scm 142 */
						obj_t BgL_portz00_593;

						BgL_portz00_593 =
							BGl_openzd2inputzd2binaryzd2filezd2zz__binaryz00
							(BgL_fnamez00_591);
						if (BINARY_PORTP(BgL_portz00_593))
							{	/* Heap/restore.scm 143 */
								{	/* Heap/restore.scm 148 */
									obj_t BgL_list2457z00_595;

									{	/* Heap/restore.scm 148 */
										obj_t BgL_arg2460z00_597;

										{	/* Heap/restore.scm 148 */
											obj_t BgL_arg2461z00_598;

											{	/* Heap/restore.scm 148 */
												obj_t BgL_arg2471z00_600;

												BgL_arg2471z00_600 =
													MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
												BgL_arg2461z00_598 =
													MAKE_PAIR(BGl_string2661z00zzheap_restorez00,
													BgL_arg2471z00_600);
											}
											BgL_arg2460z00_597 =
												MAKE_PAIR(BgL_fnamez00_591, BgL_arg2461z00_598);
										}
										BgL_list2457z00_595 =
											MAKE_PAIR(BGl_string2662z00zzheap_restorez00,
											BgL_arg2460z00_597);
									}
									BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
										BgL_list2457z00_595);
								}
								{	/* Heap/restore.scm 149 */
									obj_t BgL_val2191z00_601;

									BgL_val2191z00_601 =
										BGl_zc3exitza32478ze3z83zzheap_restorez00(BgL_heapz00_2,
										BgL_portz00_593);
									close_binary_port(BgL_portz00_593);
									if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
											(BgL_val2191z00_601)))
										{	/* Heap/restore.scm 212 */
											return
												BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
												(BgL_val2191z00_601), CDR(BgL_val2191z00_601));
										}
									else
										{	/* Heap/restore.scm 212 */
											return BgL_val2191z00_601;
										}
								}
							}
						else
							{	/* Heap/restore.scm 144 */
								obj_t BgL_mz00_665;

								{	/* Heap/restore.scm 144 */
									obj_t BgL_list2588z00_666;

									BgL_list2588z00_666 = MAKE_PAIR(BgL_fnamez00_591, BNIL);
									BgL_mz00_665 =
										BGl_formatz00zz__r4_output_6_10_3z00
										(BGl_string2663z00zzheap_restorez00, BgL_list2588z00_666);
								}
								BGl_errorz00zz__errorz00(BGl_string2674z00zzheap_restorez00,
									BgL_mz00_665, BGl_za2libzd2dirza2zd2zzengine_paramz00);
								return BGl_compilerzd2exitzd2zzinit_mainz00(BINT(((long) 6)));
					}}
				else
					{	/* Heap/restore.scm 213 */
						obj_t BgL_mz00_667;

						{	/* Heap/restore.scm 213 */
							obj_t BgL_list2589z00_668;

							BgL_list2589z00_668 = MAKE_PAIR(BgL_heapz00_2, BNIL);
							BgL_mz00_667 =
								BGl_formatz00zz__r4_output_6_10_3z00
								(BGl_string2663z00zzheap_restorez00, BgL_list2589z00_668);
						}
						BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 6)), BgL_mz00_667,
							BGl_za2libzd2dirza2zd2zzengine_paramz00);
						return BGl_compilerzd2exitzd2zzinit_mainz00(BINT(((long) 6)));
		}}}
	}



/* <exit:2478> */
	obj_t BGl_zc3exitza32478ze3z83zzheap_restorez00(obj_t BgL_heapz00_899,
		obj_t BgL_portz00_898)
	{
		AN_OBJECT;
		{	/* Heap/restore.scm 212 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2192z00_606;

			if (SET_EXIT(BgL_an_exit2192z00_606))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2192z00_606 = (void *) jmpbuf;
					{	/* Heap/restore.scm 212 */

						PUSH_EXIT(BgL_an_exit2192z00_606, ((long) 0));
						{	/* Heap/restore.scm 150 */
							bool_t BgL_val2193z00_607;

							{	/* Heap/restore.scm 150 */
								obj_t BgL_envsz00_608;

								BgL_envsz00_608 = input_obj(BgL_portz00_898);
								{	/* Heap/restore.scm 150 */
									obj_t BgL__z00_609;

									{	/* Heap/restore.scm 151 */
										bool_t BgL_testz00_1178;

										{	/* Heap/restore.scm 151 */
											bool_t BgL_testz00_1179;

											{	/* Heap/restore.scm 151 */
												obj_t BgL_v2197z00_664;

												BgL_v2197z00_664 = create_vector((int) (((long) 1)));
												VECTOR_SET(BgL_v2197z00_664,
													(int) (((long) 0)), BgL_envsz00_608);
												BgL_testz00_1179 = ((bool_t) 1);
											}
											if (BgL_testz00_1179)
												{	/* Heap/restore.scm 152 */
													int BgL_arg2586z00_662;

													BgL_arg2586z00_662 = VECTOR_LENGTH(BgL_envsz00_608);
													BgL_testz00_1178 =
														((long) (BgL_arg2586z00_662) == ((long) 6));
												}
											else
												{	/* Heap/restore.scm 151 */
													BgL_testz00_1178 = ((bool_t) 0);
												}
										}
										if (BgL_testz00_1178)
											{	/* Heap/restore.scm 151 */
												BgL__z00_609 = BFALSE;
											}
										else
											{	/* Heap/restore.scm 151 */
												BgL__z00_609 =
													BGl_errorz00zz__errorz00(BgL_heapz00_899,
													BGl_string2664z00zzheap_restorez00, BgL_envsz00_608);
											}
									}
									{	/* Heap/restore.scm 151 */
										obj_t BgL_targetz00_610;

										BgL_targetz00_610 =
											VECTOR_REF(BgL_envsz00_608, (int) (((long) 0)));
										{	/* Heap/restore.scm 154 */
											obj_t BgL_versionz00_611;

											BgL_versionz00_611 =
												VECTOR_REF(BgL_envsz00_608, (int) (((long) 1)));
											{	/* Heap/restore.scm 155 */
												obj_t BgL_specificz00_612;

												BgL_specificz00_612 =
													VECTOR_REF(BgL_envsz00_608, (int) (((long) 2)));
												{	/* Heap/restore.scm 156 */
													obj_t BgL_genvz00_613;

													BgL_genvz00_613 =
														VECTOR_REF(BgL_envsz00_608, (int) (((long) 3)));
													{	/* Heap/restore.scm 157 */
														obj_t BgL_tenvz00_614;

														BgL_tenvz00_614 =
															VECTOR_REF(BgL_envsz00_608, (int) (((long) 4)));
														{	/* Heap/restore.scm 158 */
															obj_t BgL_includesz00_615;

															BgL_includesz00_615 =
																VECTOR_REF(BgL_envsz00_608, (int) (((long) 5)));
															{	/* Heap/restore.scm 159 */

																if (BGl_backendzd2heapzd2compatiblezf3zf3zzheap_restorez00(BgL_targetz00_610))
																	{	/* Heap/restore.scm 161 */
																		BFALSE;
																	}
																else
																	{	/* Heap/restore.scm 162 */
																		obj_t BgL_arg2492z00_618;

																		{	/* Heap/restore.scm 164 */
																			obj_t BgL_arg2503z00_620;

																			{	/* Heap/restore.scm 166 */
																				obj_t BgL_arg2523z00_623;

																				BgL_arg2523z00_623 =
																					BGl_thezd2backendzd2zzbackend_backendz00
																					();
																				{
																					BgL_backendz00_bglt BgL_auxz00_1203;

																					BgL_auxz00_1203 =
																						(BgL_backendz00_bglt)
																						(BgL_arg2523z00_623);
																					BgL_arg2503z00_620 =
																						(((BgL_backendz00_bglt)
																							CREF(BgL_auxz00_1203))->
																						BgL_languagez00);
																				}
																			}
																			{	/* Heap/restore.scm 164 */
																				obj_t BgL_list2504z00_621;

																				{	/* Heap/restore.scm 164 */
																					obj_t BgL_arg2505z00_622;

																					BgL_arg2505z00_622 =
																						MAKE_PAIR(BgL_arg2503z00_620, BNIL);
																					BgL_list2504z00_621 =
																						MAKE_PAIR(BgL_targetz00_610,
																						BgL_arg2505z00_622);
																				}
																				BgL_arg2492z00_618 =
																					BGl_formatz00zz__r4_output_6_10_3z00
																					(BGl_string2665z00zzheap_restorez00,
																					BgL_list2504z00_621);
																			}
																		}
																		BGl_errorz00zz__errorz00(BgL_heapz00_899,
																			BGl_string2666z00zzheap_restorez00,
																			BgL_arg2492z00_618);
																	}
																if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																	(BgL_versionz00_611,
																		BGl_za2bigloozd2versionza2zd2zzengine_paramz00))
																	{	/* Heap/restore.scm 167 */
																		BFALSE;
																	}
																else
																	{	/* Heap/restore.scm 168 */
																		obj_t BgL_arg2531z00_626;

																		{	/* Heap/restore.scm 170 */
																			obj_t BgL_list2532z00_627;

																			{	/* Heap/restore.scm 170 */
																				obj_t BgL_arg2536z00_628;

																				BgL_arg2536z00_628 =
																					MAKE_PAIR
																					(BGl_za2bigloozd2versionza2zd2zzengine_paramz00,
																					BNIL);
																				BgL_list2532z00_627 =
																					MAKE_PAIR(BgL_versionz00_611,
																					BgL_arg2536z00_628);
																			}
																			BgL_arg2531z00_626 =
																				BGl_formatz00zz__r4_output_6_10_3z00
																				(BGl_string2667z00zzheap_restorez00,
																				BgL_list2532z00_627);
																		}
																		BGl_errorz00zz__errorz00
																			(BGl_za2heapzd2nameza2zd2zzengine_paramz00,
																			BGl_string2668z00zzheap_restorez00,
																			BgL_arg2531z00_626);
																	}
																if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																	(BgL_specificz00_612,
																		BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00))
																	{	/* Heap/restore.scm 173 */
																		BFALSE;
																	}
																else
																	{	/* Heap/restore.scm 174 */
																		obj_t BgL_arg2550z00_631;

																		{	/* Heap/restore.scm 176 */
																			obj_t BgL_list2551z00_632;

																			{	/* Heap/restore.scm 176 */
																				obj_t BgL_arg2554z00_633;

																				BgL_arg2554z00_633 =
																					MAKE_PAIR
																					(BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00,
																					BNIL);
																				BgL_list2551z00_632 =
																					MAKE_PAIR(BgL_specificz00_612,
																					BgL_arg2554z00_633);
																			}
																			BgL_arg2550z00_631 =
																				BGl_formatz00zz__r4_output_6_10_3z00
																				(BGl_string2667z00zzheap_restorez00,
																				BgL_list2551z00_632);
																		}
																		BGl_errorz00zz__errorz00
																			(BGl_za2heapzd2nameza2zd2zzengine_paramz00,
																			BGl_string2669z00zzheap_restorez00,
																			BgL_arg2550z00_631);
																	}
																BGl_addzd2tenvz12zc0zztype_envz00
																	(BgL_tenvz00_614);
																BGl_addzd2genvz12zc0zzast_envz00
																	(BgL_genvz00_613);
																{	/* Heap/restore.scm 192 */
																	bool_t BgL_testz00_1224;

																	{	/* Heap/restore.scm 192 */
																		obj_t BgL_arg2563z00_644;

																		BgL_arg2563z00_644 =
																			BGl_thezd2backendzd2zzbackend_backendz00
																			();
																		{
																			BgL_backendz00_bglt BgL_auxz00_1226;

																			BgL_auxz00_1226 =
																				(BgL_backendz00_bglt)
																				(BgL_arg2563z00_644);
																			BgL_testz00_1224 =
																				(((BgL_backendz00_bglt)
																					CREF(BgL_auxz00_1226))->
																				BgL_qualifiedzd2typeszd2);
																		}
																	}
																	if (BgL_testz00_1224)
																		{	/* Heap/restore.scm 192 */
																			BGl_forzd2eachzd2globalz12z12zzast_envz00
																				(BGl_proc2675z00zzheap_restorez00,
																				BNIL);
																		}
																	else
																		{	/* Heap/restore.scm 192 */
																			BFALSE;
																		}
																}
																BGl_hashtablezd2forzd2eachz00zz__hashz00
																	(BgL_genvz00_613,
																	BGl_proc2676z00zzheap_restorez00);
																BGl_za2additionalzd2includezd2foreignza2z00zzengine_paramz00
																	=
																	bgl_append2
																	(BGl_za2additionalzd2includezd2foreignza2z00zzengine_paramz00,
																	BgL_includesz00_615);
																BgL_val2193z00_607 = ((bool_t) 1);
															}
														}
													}
												}
											}
										}
									}
								}
							}
							POP_EXIT();
							return BBOOL(BgL_val2193z00_607);
						}
					}
				}
		}
	}



/* _restore-additional-heap */
	obj_t BGl__restorezd2additionalzd2heapz00zzheap_restorez00(obj_t
		BgL_envz00_889, obj_t BgL_heapz00_890)
	{
		AN_OBJECT;
		{	/* Heap/restore.scm 139 */
			return
				BGl_restorezd2additionalzd2heapz00zzheap_restorez00(BgL_heapz00_890);
		}
	}



/* <anonymous:2565> */
	obj_t BGl_zc3anonymousza32565ze3z83zzheap_restorez00(obj_t BgL_envz00_891,
		obj_t BgL_kz00_892, obj_t BgL_bucketz00_893)
	{
		AN_OBJECT;
		{	/* Heap/restore.scm 202 */
			{
				obj_t BgL_kz00_646;

				obj_t BgL_bucketz00_647;

				{	/* Heap/restore.scm 203 */
					bool_t BgL_auxz00_1235;

					BgL_kz00_646 = BgL_kz00_892;
					BgL_bucketz00_647 = BgL_bucketz00_893;
					{	/* Heap/restore.scm 203 */
						obj_t BgL_g2200z00_649;

						BgL_g2200z00_649 = CDR(BgL_bucketz00_647);
						{
							obj_t BgL_l2198z00_651;

							BgL_l2198z00_651 = BgL_g2200z00_649;
						BgL_zc3anonymousza32566ze3z83_652:
							if (PAIRP(BgL_l2198z00_651))
								{	/* Heap/restore.scm 206 */
									{	/* Heap/restore.scm 204 */
										obj_t BgL_newz00_654;

										BgL_newz00_654 = CAR(BgL_l2198z00_651);
										{	/* Heap/restore.scm 205 */
											obj_t BgL_arg2571z00_655;

											{
												BgL_globalz00_bglt BgL_auxz00_1240;

												BgL_auxz00_1240 = (BgL_globalz00_bglt) (BgL_newz00_654);
												BgL_arg2571z00_655 =
													(((BgL_globalz00_bglt) CREF(BgL_auxz00_1240))->
													BgL_modulez00);
											}
											{	/* Heap/restore.scm 204 */
												obj_t BgL_list2572z00_656;

												BgL_list2572z00_656 =
													MAKE_PAIR(BgL_arg2571z00_655, BNIL);
												BGl_heapzd2modulezd2listz00zzheap_restorez00
													(BgL_list2572z00_656);
											}
										}
									}
									{
										obj_t BgL_l2198z00_1245;

										BgL_l2198z00_1245 = CDR(BgL_l2198z00_651);
										BgL_l2198z00_651 = BgL_l2198z00_1245;
										goto BgL_zc3anonymousza32566ze3z83_652;
									}
								}
							else
								{	/* Heap/restore.scm 206 */
									BgL_auxz00_1235 = ((bool_t) 1);
								}
						}
					}
					return BBOOL(BgL_auxz00_1235);
				}
			}
		}
	}



/* <anonymous:2558> */
	obj_t BGl_zc3anonymousza32558ze3z83zzheap_restorez00(obj_t BgL_envz00_894,
		obj_t BgL_newz00_895)
	{
		AN_OBJECT;
		{	/* Heap/restore.scm 194 */
			{
				obj_t BgL_newz00_637;

				BgL_newz00_637 = BgL_newz00_895;
				{	/* Heap/restore.scm 196 */
					obj_t BgL_arg2559z00_639;

					obj_t BgL_arg2560z00_640;

					obj_t BgL_arg2561z00_641;

					{
						BgL_globalz00_bglt BgL_auxz00_1248;

						BgL_auxz00_1248 = (BgL_globalz00_bglt) (BgL_newz00_637);
						BgL_arg2559z00_639 =
							(((BgL_globalz00_bglt) CREF(BgL_auxz00_1248))->BgL_modulez00);
					}
					{
						BgL_globalz00_bglt BgL_auxz00_1251;

						BgL_auxz00_1251 = (BgL_globalz00_bglt) (BgL_newz00_637);
						BgL_arg2560z00_640 =
							(((BgL_globalz00_bglt) CREF(BgL_auxz00_1251))->
							BgL_jvmzd2typezd2namez00);
					}
					BgL_arg2561z00_641 = BGl_shapez00zztools_shapez00(BgL_newz00_637);
					{	/* Heap/restore.scm 195 */
						obj_t BgL_list2562z00_642;

						BgL_list2562z00_642 = MAKE_PAIR(BgL_arg2561z00_641, BNIL);
						return
							BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00(BgL_arg2559z00_639,
							BgL_arg2560z00_640, BgL_list2562z00_642);
					}
				}
			}
		}
	}



/* heap-module-list */
	BGL_EXPORTED_DEF obj_t BGl_heapzd2modulezd2listz00zzheap_restorez00(obj_t
		BgL_argsz00_3)
	{
		AN_OBJECT;
		{	/* Heap/restore.scm 233 */
			if (NULLP(BgL_argsz00_3))
				{	/* Heap/restore.scm 235 */
					return BGl_za2heapzd2modulezd2listza2z00zzheap_restorez00;
				}
			else
				{	/* Heap/restore.scm 237 */
					bool_t BgL_testz00_1259;

					{	/* Heap/restore.scm 237 */
						obj_t BgL_arg2602z00_673;

						BgL_arg2602z00_673 = CAR(BgL_argsz00_3);
						BgL_testz00_1259 =
							CBOOL(BGl_getpropz00zz__r4_symbols_6_4z00(BgL_arg2602z00_673,
								BGl_za2heapzd2markza2zd2zzheap_restorez00));
					}
					if (BgL_testz00_1259)
						{	/* Heap/restore.scm 237 */
							return BFALSE;
						}
					else
						{	/* Heap/restore.scm 237 */
							{	/* Heap/restore.scm 238 */
								obj_t BgL_arg2594z00_671;

								BgL_arg2594z00_671 = CAR(BgL_argsz00_3);
								BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg2594z00_671,
									BGl_za2heapzd2markza2zd2zzheap_restorez00, BTRUE);
							}
							{	/* Heap/restore.scm 239 */
								obj_t BgL_arg2595z00_672;

								BgL_arg2595z00_672 = CAR(BgL_argsz00_3);
								return (BGl_za2heapzd2modulezd2listza2z00zzheap_restorez00 =
									MAKE_PAIR(BgL_arg2595z00_672,
										BGl_za2heapzd2modulezd2listza2z00zzheap_restorez00),
									BUNSPEC);
							}
						}
				}
		}
	}



/* _heap-module-list */
	obj_t BGl__heapzd2modulezd2listz00zzheap_restorez00(obj_t BgL_envz00_896,
		obj_t BgL_argsz00_897)
	{
		AN_OBJECT;
		{	/* Heap/restore.scm 233 */
			return BGl_heapzd2modulezd2listz00zzheap_restorez00(BgL_argsz00_897);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzheap_restorez00()
	{
		AN_OBJECT;
		{	/* Heap/restore.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzheap_restorez00()
	{
		AN_OBJECT;
		{	/* Heap/restore.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzheap_restorez00()
	{
		AN_OBJECT;
		{	/* Heap/restore.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string2677z00zzheap_restorez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string2677z00zzheap_restorez00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string2677z00zzheap_restorez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string2677z00zzheap_restorez00));
			BGl_modulezd2initializa7ationz75zzengine_enginez00(((long) 528201616),
				BSTRING_TO_STRING(BGl_string2677z00zzheap_restorez00));
			BGl_modulezd2initializa7ationz75zzinit_mainz00(((long) 230845835),
				BSTRING_TO_STRING(BGl_string2677z00zzheap_restorez00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string2677z00zzheap_restorez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2677z00zzheap_restorez00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string2677z00zzheap_restorez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string2677z00zzheap_restorez00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 143212498),
				BSTRING_TO_STRING(BGl_string2677z00zzheap_restorez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string2677z00zzheap_restorez00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string2677z00zzheap_restorez00));
		}
	}

#ifdef __cplusplus
}
#endif
