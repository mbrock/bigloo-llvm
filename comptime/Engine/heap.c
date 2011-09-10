/*===========================================================================*/
/*   (Engine/heap.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Engine/heap.scm)*/
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

	typedef struct BgL_valuez00_bgl
	{
		header_t header;
		obj_t widening;
	}               *BgL_valuez00_bglt;

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

	typedef struct BgL_sfunz00_bgl
	{
		header_t header;
		obj_t widening;
		long BgL_arityz00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_predicatezd2ofzd2;
		obj_t BgL_stackzd2allocatorzd2;
		bool_t BgL_topzf3zf3;
		obj_t BgL_thezd2closurezd2;
		obj_t BgL_effectz00;
		obj_t BgL_propertyz00;
		obj_t BgL_argsz00;
		obj_t BgL_argszd2namezd2;
		obj_t BgL_bodyz00;
		obj_t BgL_classz00;
		obj_t BgL_dssslzd2keywordszd2;
		obj_t BgL_locz00;
		obj_t BgL_optionalsz00;
		obj_t BgL_keysz00;
		obj_t BgL_thezd2closurezd2globalz00;
	}              *BgL_sfunz00_bglt;

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

	typedef struct BgL_tclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		struct BgL_globalz00_bgl *BgL_holderz00;
		obj_t BgL_wideningz00;
		long BgL_depthz00;
		bool_t BgL_finalzf3zf3;
		obj_t BgL_constructorz00;
		obj_t BgL_virtualzd2slotszd2numberz00;
		bool_t BgL_abstractzf3zf3;
		obj_t BgL_widezd2typezd2;
	}                *BgL_tclassz00_bglt;


	static obj_t BGl_dumpzd2Tenvzd2zzengine_heapz00(obj_t);
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	extern obj_t BGl_setzd2genvz12zc0zzast_envz00(obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzengine_heapz00 = BUNSPEC;
	static obj_t BGl_dumpzd2heapzd2zzengine_heapz00(obj_t);
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl_genericzd2initzd2zzengine_heapz00();
	static obj_t BGl_zc3exitza32530ze3z83zzengine_heapz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dumpzd2heapszd2zzengine_heapz00(obj_t);
	extern obj_t BGl_initializa7ezd2Tenvz12z67zztype_envz00();
	static obj_t BGl_zc3anonymousza32552ze3z83zzengine_heapz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzengine_heapz00();
	extern obj_t BGl_setzd2backendz12zc0zzbackend_backendz00(obj_t);
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32560ze3z83zzengine_heapz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzengine_heapz00();
	extern obj_t BGl_setzd2tenvz12zc0zztype_envz00(obj_t);
	static obj_t BGl_zc3anonymousza32712ze3z83zzengine_heapz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2libzd2dirza2zd2zzengine_paramz00;
	static obj_t BGl_zc3anonymousza32572ze3z83zzengine_heapz00(obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2forzd2eachz00zz__hashz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzengine_heapz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_pragmaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzheap_restorez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__binaryz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t close_binary_port(obj_t);
	BGL_IMPORT obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2binaryzd2filezd2zz__binaryz00(obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_zc3anonymousza32616ze3z83zzengine_heapz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_dumpzd2Genvzd2zzengine_heapz00(obj_t);
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_za2targetzd2languageza2zd2zzengine_paramz00;
	extern obj_t BGl_addzd2genvz12zc0zzast_envz00(obj_t);
	extern obj_t BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00(obj_t);
	BGL_IMPORT obj_t input_obj(obj_t);
	extern obj_t BGl_heapzd2modulezd2listz00zzheap_restorez00(obj_t);
	static obj_t BGl__dumpzd2heapszd2zzengine_heapz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzengine_heapz00();
	extern obj_t BGl_initializa7ezd2Genvz12z67zzast_envz00();
	static obj_t BGl_methodzd2initzd2zzengine_heapz00();
	extern obj_t BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00(obj_t, obj_t,
		obj_t);
	static obj_t __cnst[14];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2787z00zzengine_heapz00,
		BgL_bgl_za7c3anonymousza7a322806z00,
		BGl_zc3anonymousza32552ze3z83zzengine_heapz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2788z00zzengine_heapz00,
		BgL_bgl_za7c3anonymousza7a322807z00,
		BGl_zc3anonymousza32560ze3z83zzengine_heapz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2801z00zzengine_heapz00,
		BgL_bgl_za7c3anonymousza7a322808z00,
		BGl_zc3anonymousza32712ze3z83zzengine_heapz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2797z00zzengine_heapz00,
		BgL_bgl_za7c3anonymousza7a322809z00,
		BGl_zc3anonymousza32616ze3z83zzengine_heapz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2785z00zzengine_heapz00,
		BgL_bgl_string2785za700za7za7e2810za7, "Cannot open heap file ~s", 24);
	      DEFINE_STRING(BGl_string2786z00zzengine_heapz00,
		BgL_bgl_string2786za700za7za7e2811za7, "Corrupted heap", 14);
	      DEFINE_STRING(BGl_string2800z00zzengine_heapz00,
		BgL_bgl_string2800za700za7za7e2812za7, "", 0);
	      DEFINE_STRING(BGl_string2790z00zzengine_heapz00,
		BgL_bgl_string2790za700za7za7e2813za7, "\"", 1);
	      DEFINE_STRING(BGl_string2789z00zzengine_heapz00,
		BgL_bgl_string2789za700za7za7e2814za7, "(heap \"", 7);
	      DEFINE_STRING(BGl_string2791z00zzengine_heapz00,
		BgL_bgl_string2791za700za7za7e2815za7, " (variables", 11);
	      DEFINE_STRING(BGl_string2802z00zzengine_heapz00,
		BgL_bgl_string2802za700za7za7e2816za7, "engine_heap", 11);
	      DEFINE_STRING(BGl_string2792z00zzengine_heapz00,
		BgL_bgl_string2792za700za7za7e2817za7, " )\n", 3);
	      DEFINE_STRING(BGl_string2803z00zzengine_heapz00,
		BgL_bgl_string2803za700za7za7e2818za7,
		"type super class jvm-type-name inline sifun qualified-type name module id variable native function dump-heap ",
		109);
	      DEFINE_STRING(BGl_string2793z00zzengine_heapz00,
		BgL_bgl_string2793za700za7za7e2819za7, " (types", 7);
	      DEFINE_STRING(BGl_string2794z00zzengine_heapz00,
		BgL_bgl_string2794za700za7za7e2820za7, " )", 2);
	      DEFINE_STRING(BGl_string2795z00zzengine_heapz00,
		BgL_bgl_string2795za700za7za7e2821za7, " (includes", 10);
	      DEFINE_STRING(BGl_string2796z00zzengine_heapz00,
		BgL_bgl_string2796za700za7za7e2822za7, ")\n", 2);
	      DEFINE_STRING(BGl_string2798z00zzengine_heapz00,
		BgL_bgl_string2798za700za7za7e2823za7, "   ", 3);
	      DEFINE_STRING(BGl_string2799z00zzengine_heapz00,
		BgL_bgl_string2799za700za7za7e2824za7, "\n    ", 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_dumpzd2heapszd2envz00zzengine_heapz00,
		BgL_bgl__dumpza7d2heapsza7d22825z00, BGl__dumpzd2heapszd2zzengine_heapz00,
		0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzengine_heapz00(long
		BgL_checksumz00_1066, char *BgL_fromz00_1067)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzengine_heapz00))
				{
					BGl_requirezd2initializa7ationz75zzengine_heapz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzengine_heapz00();
					BGl_cnstzd2initzd2zzengine_heapz00();
					BGl_importedzd2moduleszd2initz00zzengine_heapz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzengine_heapz00()
	{
		AN_OBJECT;
		{	/* Engine/heap.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"engine_heap");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "engine_heap");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "engine_heap");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "engine_heap");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"engine_heap");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "engine_heap");
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 0), "engine_heap");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "engine_heap");
			BGl_modulezd2initializa7ationz75zz__binaryz00(((long) 0), "engine_heap");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"engine_heap");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzengine_heapz00()
	{
		AN_OBJECT;
		{	/* Engine/heap.scm 15 */
			{	/* Engine/heap.scm 15 */
				obj_t BgL_cportz00_1058;

				BgL_cportz00_1058 =
					bgl_open_input_string(BGl_string2803z00zzengine_heapz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1059;

					BgL_iz00_1059 = ((long) 13);
				BgL_loopz00_1060:
					if ((BgL_iz00_1059 == ((long) -1)))
						{	/* Engine/heap.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Engine/heap.scm 15 */
							{	/* Engine/heap.scm 15 */
								obj_t BgL_arg2805z00_1062;

								{	/* Engine/heap.scm 15 */

									{	/* Engine/heap.scm 15 */
										obj_t BgL_locationz00_1064;

										BgL_locationz00_1064 = BBOOL(((bool_t) 0));
										{	/* Engine/heap.scm 15 */

											BgL_arg2805z00_1062 =
												BGl_readz00zz__readerz00(BgL_cportz00_1058,
												BgL_locationz00_1064);
										}
									}
								}
								{	/* Engine/heap.scm 15 */
									int BgL_auxz00_1090;

									BgL_auxz00_1090 = (int) (BgL_iz00_1059);
									CNST_TABLE_SET(BgL_auxz00_1090, BgL_arg2805z00_1062);
							}}
							{	/* Engine/heap.scm 15 */
								int BgL_auxz00_1065;

								BgL_auxz00_1065 = (int) ((BgL_iz00_1059 - ((long) 1)));
								{
									long BgL_iz00_1095;

									BgL_iz00_1095 = (long) (BgL_auxz00_1065);
									BgL_iz00_1059 = BgL_iz00_1095;
									goto BgL_loopz00_1060;
								}
							}
						}
				}
			}
		}
	}



/* dump-heaps */
	BGL_EXPORTED_DEF obj_t BGl_dumpzd2heapszd2zzengine_heapz00(obj_t
		BgL_namesz00_1)
	{
		AN_OBJECT;
		{	/* Engine/heap.scm 33 */
			BGl_setzd2backendz12zc0zzbackend_backendz00
				(BGl_za2targetzd2languageza2zd2zzengine_paramz00);
			BGl_initializa7ezd2Genvz12z67zzast_envz00();
			BGl_initializa7ezd2Tenvz12z67zztype_envz00();
			{
				obj_t BgL_l2464z00_522;

				{	/* Engine/heap.scm 40 */
					bool_t BgL_auxz00_1100;

					BgL_l2464z00_522 = BgL_namesz00_1;
				BgL_zc3anonymousza32491ze3z83_523:
					if (PAIRP(BgL_l2464z00_522))
						{	/* Engine/heap.scm 40 */
							BGl_dumpzd2heapzd2zzengine_heapz00(CAR(BgL_l2464z00_522));
							{
								obj_t BgL_l2464z00_1105;

								BgL_l2464z00_1105 = CDR(BgL_l2464z00_522);
								BgL_l2464z00_522 = BgL_l2464z00_1105;
								goto BgL_zc3anonymousza32491ze3z83_523;
							}
						}
					else
						{	/* Engine/heap.scm 40 */
							BgL_auxz00_1100 = ((bool_t) 1);
						}
					return BBOOL(BgL_auxz00_1100);
				}
			}
		}
	}



/* _dump-heaps */
	obj_t BGl__dumpzd2heapszd2zzengine_heapz00(obj_t BgL_envz00_1032,
		obj_t BgL_namesz00_1033)
	{
		AN_OBJECT;
		{	/* Engine/heap.scm 33 */
			return BGl_dumpzd2heapszd2zzengine_heapz00(BgL_namesz00_1033);
		}
	}



/* dump-heap */
	obj_t BGl_dumpzd2heapzd2zzengine_heapz00(obj_t BgL_heapz00_2)
	{
		AN_OBJECT;
		{	/* Engine/heap.scm 45 */
			{	/* Engine/heap.scm 46 */
				obj_t BgL_fnamez00_528;

				BgL_fnamez00_528 =
					BGl_findzd2filezf2pathz20zz__osz00(BgL_heapz00_2,
					BGl_za2libzd2dirza2zd2zzengine_paramz00);
				if (STRINGP(BgL_fnamez00_528))
					{	/* Engine/heap.scm 48 */
						obj_t BgL_portz00_530;

						BgL_portz00_530 =
							BGl_openzd2inputzd2binaryzd2filezd2zz__binaryz00
							(BgL_fnamez00_528);
						if (BINARY_PORTP(BgL_portz00_530))
							{	/* Engine/heap.scm 53 */
								obj_t BgL_val2458z00_532;

								BgL_val2458z00_532 =
									BGl_zc3exitza32530ze3z83zzengine_heapz00(BgL_heapz00_2,
									BgL_portz00_530);
								close_binary_port(BgL_portz00_530);
								if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
										(BgL_val2458z00_532)))
									{	/* Engine/heap.scm 113 */
										return
											BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
											(BgL_val2458z00_532), CDR(BgL_val2458z00_532));
									}
								else
									{	/* Engine/heap.scm 113 */
										return BgL_val2458z00_532;
									}
							}
						else
							{	/* Engine/heap.scm 50 */
								obj_t BgL_arg2602z00_601;

								obj_t BgL_arg2608z00_602;

								BgL_arg2602z00_601 = CNST_TABLE_REF(((long) 0));
								{	/* Engine/heap.scm 51 */
									obj_t BgL_list2609z00_603;

									BgL_list2609z00_603 = MAKE_PAIR(BgL_fnamez00_528, BNIL);
									BgL_arg2608z00_602 =
										BGl_formatz00zz__r4_output_6_10_3z00
										(BGl_string2785z00zzengine_heapz00, BgL_list2609z00_603);
								}
								return
									BGl_errorz00zz__errorz00(BgL_arg2602z00_601,
									BgL_arg2608z00_602, BGl_za2libzd2dirza2zd2zzengine_paramz00);
							}
					}
				else
					{	/* Engine/heap.scm 114 */
						obj_t BgL_mz00_604;

						{	/* Engine/heap.scm 114 */
							obj_t BgL_list2610z00_605;

							BgL_list2610z00_605 = MAKE_PAIR(BgL_heapz00_2, BNIL);
							BgL_mz00_604 =
								BGl_formatz00zz__r4_output_6_10_3z00
								(BGl_string2785z00zzengine_heapz00, BgL_list2610z00_605);
						}
						BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)), BgL_mz00_604,
							BGl_za2libzd2dirza2zd2zzengine_paramz00);
						return BFALSE;
					}
			}
		}
	}



/* <exit:2530> */
	obj_t BGl_zc3exitza32530ze3z83zzengine_heapz00(obj_t BgL_heapz00_1056,
		obj_t BgL_portz00_1055)
	{
		AN_OBJECT;
		{	/* Engine/heap.scm 113 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2459z00_537;

			if (SET_EXIT(BgL_an_exit2459z00_537))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2459z00_537 = (void *) jmpbuf;
					{	/* Engine/heap.scm 113 */

						PUSH_EXIT(BgL_an_exit2459z00_537, ((long) 0));
						{	/* Engine/heap.scm 54 */
							obj_t BgL_val2460z00_538;

							{	/* Engine/heap.scm 54 */
								obj_t BgL_envsz00_539;

								BgL_envsz00_539 = input_obj(BgL_portz00_1055);
								{	/* Engine/heap.scm 54 */
									obj_t BgL__z00_540;

									{	/* Engine/heap.scm 55 */
										bool_t BgL_testz00_1135;

										{	/* Engine/heap.scm 55 */
											bool_t BgL_testz00_1136;

											{	/* Engine/heap.scm 55 */
												obj_t BgL_v2466z00_600;

												BgL_v2466z00_600 = create_vector((int) (((long) 1)));
												VECTOR_SET(BgL_v2466z00_600,
													(int) (((long) 0)), BgL_envsz00_539);
												BgL_testz00_1136 = ((bool_t) 1);
											}
											if (BgL_testz00_1136)
												{	/* Engine/heap.scm 56 */
													bool_t BgL__ortest_2461z00_595;

													{	/* Engine/heap.scm 56 */
														int BgL_arg2594z00_598;

														BgL_arg2594z00_598 = VECTOR_LENGTH(BgL_envsz00_539);
														BgL__ortest_2461z00_595 =
															((long) (BgL_arg2594z00_598) == ((long) 5));
													}
													if (BgL__ortest_2461z00_595)
														{	/* Engine/heap.scm 56 */
															BgL_testz00_1135 = BgL__ortest_2461z00_595;
														}
													else
														{	/* Engine/heap.scm 57 */
															int BgL_arg2589z00_596;

															BgL_arg2589z00_596 =
																VECTOR_LENGTH(BgL_envsz00_539);
															BgL_testz00_1135 =
																((long) (BgL_arg2589z00_596) == ((long) 6));
												}}
											else
												{	/* Engine/heap.scm 55 */
													BgL_testz00_1135 = ((bool_t) 0);
												}
										}
										if (BgL_testz00_1135)
											{	/* Engine/heap.scm 55 */
												BgL__z00_540 = BFALSE;
											}
										else
											{	/* Engine/heap.scm 55 */
												BgL__z00_540 =
													BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
													BGl_string2786z00zzengine_heapz00, BgL_heapz00_1056);
									}}
									{	/* Engine/heap.scm 55 */
										obj_t BgL_targetz00_541;

										BgL_targetz00_541 =
											VECTOR_REF(BgL_envsz00_539, (int) (((long) 0)));
										{	/* Engine/heap.scm 59 */
											obj_t BgL_versionz00_542;

											BgL_versionz00_542 =
												VECTOR_REF(BgL_envsz00_539, (int) (((long) 1)));
											{	/* Engine/heap.scm 60 */
												obj_t BgL_specificz00_543;

												BgL_specificz00_543 =
													VECTOR_REF(BgL_envsz00_539, (int) (((long) 2)));
												{	/* Engine/heap.scm 61 */
													obj_t BgL_genvz00_544;

													BgL_genvz00_544 =
														VECTOR_REF(BgL_envsz00_539, (int) (((long) 3)));
													{	/* Engine/heap.scm 62 */
														obj_t BgL_tenvz00_545;

														BgL_tenvz00_545 =
															VECTOR_REF(BgL_envsz00_539, (int) (((long) 4)));
														{	/* Engine/heap.scm 63 */
															obj_t BgL_includesz00_546;

															{	/* Engine/heap.scm 64 */
																bool_t BgL_testz00_1160;

																{	/* Engine/heap.scm 64 */
																	int BgL_arg2576z00_591;

																	BgL_arg2576z00_591 =
																		VECTOR_LENGTH(BgL_envsz00_539);
																	BgL_testz00_1160 =
																		((long) (BgL_arg2576z00_591) == ((long) 6));
																}
																if (BgL_testz00_1160)
																	{	/* Engine/heap.scm 64 */
																		BgL_includesz00_546 =
																			VECTOR_REF(BgL_envsz00_539,
																			(int) (((long) 5)));
																	}
																else
																	{	/* Engine/heap.scm 64 */
																		BgL_includesz00_546 = BNIL;
																	}
															}
															{	/* Engine/heap.scm 64 */

																{	/* Engine/heap.scm 76 */
																	bool_t BgL_testz00_1166;

																	{	/* Engine/heap.scm 76 */
																		int BgL_arg2536z00_548;

																		BgL_arg2536z00_548 =
																			VECTOR_LENGTH(BgL_envsz00_539);
																		BgL_testz00_1166 =
																			(
																			(long) (BgL_arg2536z00_548) ==
																			((long) 6));
																	}
																	if (BgL_testz00_1166)
																		{	/* Engine/heap.scm 76 */
																			BGl_addzd2genvz12zc0zzast_envz00
																				(BgL_genvz00_544);
																		}
																	else
																		{	/* Engine/heap.scm 76 */
																			BGl_setzd2tenvz12zc0zztype_envz00
																				(BgL_tenvz00_545);
																			BGl_setzd2genvz12zc0zzast_envz00
																				(BgL_genvz00_544);
																		}
																}
																{	/* Engine/heap.scm 85 */
																	bool_t BgL_testz00_1173;

																	{	/* Engine/heap.scm 85 */
																		obj_t BgL_arg2558z00_560;

																		BgL_arg2558z00_560 =
																			BGl_thezd2backendzd2zzbackend_backendz00
																			();
																		{
																			BgL_backendz00_bglt BgL_auxz00_1175;

																			BgL_auxz00_1175 =
																				(BgL_backendz00_bglt)
																				(BgL_arg2558z00_560);
																			BgL_testz00_1173 =
																				(((BgL_backendz00_bglt)
																					CREF(BgL_auxz00_1175))->
																				BgL_qualifiedzd2typeszd2);
																		}
																	}
																	if (BgL_testz00_1173)
																		{	/* Engine/heap.scm 85 */
																			BGl_forzd2eachzd2globalz12z12zzast_envz00
																				(BGl_proc2787z00zzengine_heapz00, BNIL);
																		}
																	else
																		{	/* Engine/heap.scm 85 */
																			BFALSE;
																		}
																}
																BGl_hashtablezd2forzd2eachz00zz__hashz00
																	(BgL_genvz00_544,
																	BGl_proc2788z00zzengine_heapz00);
																{	/* Engine/heap.scm 99 */
																	obj_t BgL_arg2566z00_576;

																	{	/* Engine/heap.scm 99 */
																		obj_t BgL_res2772z00_934;

																		{	/* Engine/heap.scm 99 */
																			obj_t BgL_auxz00_1180;

																			BgL_auxz00_1180 =
																				BGL_CURRENT_DYNAMIC_ENV();
																			BgL_res2772z00_934 =
																				BGL_ENV_CURRENT_ERROR_PORT
																				(BgL_auxz00_1180);
																		}
																		BgL_arg2566z00_576 = BgL_res2772z00_934;
																	}
																	{	/* Engine/heap.scm 101 */
																		obj_t BgL_zc3anonymousza32572ze3z83_1034;

																		BgL_zc3anonymousza32572ze3z83_1034 =
																			make_fx_procedure
																			(BGl_zc3anonymousza32572ze3z83zzengine_heapz00,
																			(int) (((long) 0)), (int) (((long) 4)));
																		PROCEDURE_SET
																			(BgL_zc3anonymousza32572ze3z83_1034,
																			(int) (((long) 0)), BgL_heapz00_1056);
																		PROCEDURE_SET
																			(BgL_zc3anonymousza32572ze3z83_1034,
																			(int) (((long) 1)), BgL_genvz00_544);
																		PROCEDURE_SET
																			(BgL_zc3anonymousza32572ze3z83_1034,
																			(int) (((long) 2)), BgL_tenvz00_545);
																		PROCEDURE_SET
																			(BgL_zc3anonymousza32572ze3z83_1034,
																			(int) (((long) 3)), BgL_includesz00_546);
																		BgL_val2460z00_538 =
																			BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00
																			(BgL_arg2566z00_576,
																			BgL_zc3anonymousza32572ze3z83_1034);
							}}}}}}}}}}}
							POP_EXIT();
							return BgL_val2460z00_538;
						}
					}
				}
		}
	}



/* <anonymous:2572> */
	obj_t BGl_zc3anonymousza32572ze3z83zzengine_heapz00(obj_t BgL_envz00_1037)
	{
		AN_OBJECT;
		{	/* Engine/heap.scm 100 */
			{	/* Engine/heap.scm 101 */
				obj_t BgL_heapz00_1038;

				obj_t BgL_genvz00_1039;

				obj_t BgL_tenvz00_1040;

				obj_t BgL_includesz00_1041;

				BgL_heapz00_1038 = PROCEDURE_REF(BgL_envz00_1037, (int) (((long) 0)));
				BgL_genvz00_1039 = PROCEDURE_REF(BgL_envz00_1037, (int) (((long) 1)));
				BgL_tenvz00_1040 = PROCEDURE_REF(BgL_envz00_1037, (int) (((long) 2)));
				BgL_includesz00_1041 =
					PROCEDURE_REF(BgL_envz00_1037, (int) (((long) 3)));
				{

					{	/* Engine/heap.scm 101 */
						obj_t BgL_port2470z00_579;

						{	/* Engine/heap.scm 101 */
							obj_t BgL_res2773z00_936;

							{	/* Engine/heap.scm 101 */
								obj_t BgL_auxz00_1204;

								BgL_auxz00_1204 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2773z00_936 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1204);
							}
							BgL_port2470z00_579 = BgL_res2773z00_936;
						}
						bgl_display_string(BGl_string2789z00zzengine_heapz00,
							BgL_port2470z00_579);
						bgl_display_obj(BgL_heapz00_1038, BgL_port2470z00_579);
						bgl_display_string(BGl_string2790z00zzengine_heapz00,
							BgL_port2470z00_579);
						bgl_display_char(((unsigned char) '\n'), BgL_port2470z00_579);
					}
					{	/* Engine/heap.scm 102 */
						obj_t BgL_port2471z00_580;

						{	/* Engine/heap.scm 102 */
							obj_t BgL_res2774z00_943;

							{	/* Engine/heap.scm 102 */
								obj_t BgL_auxz00_1211;

								BgL_auxz00_1211 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2774z00_943 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1211);
							}
							BgL_port2471z00_580 = BgL_res2774z00_943;
						}
						bgl_display_string(BGl_string2791z00zzengine_heapz00,
							BgL_port2471z00_580);
						bgl_display_char(((unsigned char) '\n'), BgL_port2471z00_580);
					}
					BGl_dumpzd2Genvzd2zzengine_heapz00(BgL_genvz00_1039);
					{	/* Engine/heap.scm 104 */
						obj_t BgL_port2472z00_581;

						{	/* Engine/heap.scm 104 */
							obj_t BgL_res2775z00_948;

							{	/* Engine/heap.scm 104 */
								obj_t BgL_auxz00_1217;

								BgL_auxz00_1217 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2775z00_948 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1217);
							}
							BgL_port2472z00_581 = BgL_res2775z00_948;
						}
						bgl_display_string(BGl_string2792z00zzengine_heapz00,
							BgL_port2472z00_581);
						bgl_display_char(((unsigned char) '\n'), BgL_port2472z00_581);
					}
					{	/* Engine/heap.scm 105 */
						obj_t BgL_port2473z00_582;

						{	/* Engine/heap.scm 105 */
							obj_t BgL_res2776z00_953;

							{	/* Engine/heap.scm 105 */
								obj_t BgL_auxz00_1222;

								BgL_auxz00_1222 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2776z00_953 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1222);
							}
							BgL_port2473z00_582 = BgL_res2776z00_953;
						}
						bgl_display_string(BGl_string2793z00zzengine_heapz00,
							BgL_port2473z00_582);
						bgl_display_char(((unsigned char) '\n'), BgL_port2473z00_582);
					}
					BGl_dumpzd2Tenvzd2zzengine_heapz00(BgL_tenvz00_1040);
					{	/* Engine/heap.scm 107 */
						obj_t BgL_port2474z00_583;

						{	/* Engine/heap.scm 107 */
							obj_t BgL_res2777z00_958;

							{	/* Engine/heap.scm 107 */
								obj_t BgL_auxz00_1228;

								BgL_auxz00_1228 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2777z00_958 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1228);
							}
							BgL_port2474z00_583 = BgL_res2777z00_958;
						}
						bgl_display_string(BGl_string2794z00zzengine_heapz00,
							BgL_port2474z00_583);
						bgl_display_char(((unsigned char) '\n'), BgL_port2474z00_583);
					}
					if (PAIRP(BgL_includesz00_1041))
						{	/* Engine/heap.scm 108 */
							{	/* Engine/heap.scm 109 */
								obj_t BgL_port2475z00_585;

								{	/* Engine/heap.scm 109 */
									obj_t BgL_res2778z00_964;

									{	/* Engine/heap.scm 109 */
										obj_t BgL_auxz00_1235;

										BgL_auxz00_1235 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2778z00_964 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1235);
									}
									BgL_port2475z00_585 = BgL_res2778z00_964;
								}
								bgl_display_string(BGl_string2795z00zzengine_heapz00,
									BgL_port2475z00_585);
								bgl_display_char(((unsigned char) '\n'), BgL_port2475z00_585);
							}
							{	/* Engine/heap.scm 110 */
								obj_t BgL_port2476z00_586;

								{	/* Engine/heap.scm 110 */
									obj_t BgL_res2779z00_969;

									{	/* Engine/heap.scm 110 */
										obj_t BgL_auxz00_1240;

										BgL_auxz00_1240 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2779z00_969 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1240);
									}
									BgL_port2476z00_586 = BgL_res2779z00_969;
								}
								bgl_display_obj(BgL_includesz00_1041, BgL_port2476z00_586);
								bgl_display_char(((unsigned char) '\n'), BgL_port2476z00_586);
							}
							{	/* Engine/heap.scm 111 */
								obj_t BgL_port2477z00_587;

								{	/* Engine/heap.scm 111 */
									obj_t BgL_res2780z00_972;

									{	/* Engine/heap.scm 111 */
										obj_t BgL_auxz00_1245;

										BgL_auxz00_1245 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2780z00_972 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1245);
									}
									BgL_port2477z00_587 = BgL_res2780z00_972;
								}
								bgl_display_string(BGl_string2794z00zzengine_heapz00,
									BgL_port2477z00_587);
								bgl_display_char(((unsigned char) '\n'), BgL_port2477z00_587);
						}}
					else
						{	/* Engine/heap.scm 108 */
							BFALSE;
						}
					{	/* Engine/heap.scm 112 */
						obj_t BgL_port2478z00_588;

						{	/* Engine/heap.scm 112 */
							obj_t BgL_res2781z00_977;

							{	/* Engine/heap.scm 112 */
								obj_t BgL_auxz00_1250;

								BgL_auxz00_1250 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2781z00_977 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1250);
							}
							BgL_port2478z00_588 = BgL_res2781z00_977;
						}
						bgl_display_string(BGl_string2796z00zzengine_heapz00,
							BgL_port2478z00_588);
						return bgl_display_char(((unsigned char) '\n'),
							BgL_port2478z00_588);
		}}}}
	}



/* <anonymous:2560> */
	obj_t BGl_zc3anonymousza32560ze3z83zzengine_heapz00(obj_t BgL_envz00_1042,
		obj_t BgL_kz00_1043, obj_t BgL_bucketz00_1044)
	{
		AN_OBJECT;
		{	/* Engine/heap.scm 95 */
			{
				obj_t BgL_kz00_562;

				obj_t BgL_bucketz00_563;

				{	/* Engine/heap.scm 96 */
					bool_t BgL_auxz00_1255;

					BgL_kz00_562 = BgL_kz00_1043;
					BgL_bucketz00_563 = BgL_bucketz00_1044;
					{	/* Engine/heap.scm 96 */
						obj_t BgL_g2469z00_565;

						BgL_g2469z00_565 = CDR(BgL_bucketz00_563);
						{
							obj_t BgL_l2467z00_567;

							BgL_l2467z00_567 = BgL_g2469z00_565;
						BgL_zc3anonymousza32561ze3z83_568:
							if (PAIRP(BgL_l2467z00_567))
								{	/* Engine/heap.scm 98 */
									{	/* Engine/heap.scm 97 */
										obj_t BgL_newz00_570;

										BgL_newz00_570 = CAR(BgL_l2467z00_567);
										{	/* Engine/heap.scm 97 */
											obj_t BgL_arg2563z00_571;

											{
												BgL_globalz00_bglt BgL_auxz00_1260;

												BgL_auxz00_1260 = (BgL_globalz00_bglt) (BgL_newz00_570);
												BgL_arg2563z00_571 =
													(((BgL_globalz00_bglt) CREF(BgL_auxz00_1260))->
													BgL_modulez00);
											}
											{	/* Engine/heap.scm 97 */
												obj_t BgL_list2564z00_572;

												BgL_list2564z00_572 =
													MAKE_PAIR(BgL_arg2563z00_571, BNIL);
												BGl_heapzd2modulezd2listz00zzheap_restorez00
													(BgL_list2564z00_572);
											}
										}
									}
									{
										obj_t BgL_l2467z00_1265;

										BgL_l2467z00_1265 = CDR(BgL_l2467z00_567);
										BgL_l2467z00_567 = BgL_l2467z00_1265;
										goto BgL_zc3anonymousza32561ze3z83_568;
									}
								}
							else
								{	/* Engine/heap.scm 98 */
									BgL_auxz00_1255 = ((bool_t) 1);
								}
						}
					}
					return BBOOL(BgL_auxz00_1255);
				}
			}
		}
	}



/* <anonymous:2552> */
	obj_t BGl_zc3anonymousza32552ze3z83zzengine_heapz00(obj_t BgL_envz00_1045,
		obj_t BgL_newz00_1046)
	{
		AN_OBJECT;
		{	/* Engine/heap.scm 87 */
			{
				obj_t BgL_newz00_553;

				BgL_newz00_553 = BgL_newz00_1046;
				{	/* Engine/heap.scm 89 */
					obj_t BgL_arg2554z00_555;

					obj_t BgL_arg2555z00_556;

					obj_t BgL_arg2556z00_557;

					{
						BgL_globalz00_bglt BgL_auxz00_1268;

						BgL_auxz00_1268 = (BgL_globalz00_bglt) (BgL_newz00_553);
						BgL_arg2554z00_555 =
							(((BgL_globalz00_bglt) CREF(BgL_auxz00_1268))->BgL_modulez00);
					}
					{
						BgL_globalz00_bglt BgL_auxz00_1271;

						BgL_auxz00_1271 = (BgL_globalz00_bglt) (BgL_newz00_553);
						BgL_arg2555z00_556 =
							(((BgL_globalz00_bglt) CREF(BgL_auxz00_1271))->
							BgL_jvmzd2typezd2namez00);
					}
					BgL_arg2556z00_557 = BGl_shapez00zztools_shapez00(BgL_newz00_553);
					{	/* Engine/heap.scm 88 */
						obj_t BgL_list2557z00_558;

						BgL_list2557z00_558 = MAKE_PAIR(BgL_arg2556z00_557, BNIL);
						return
							BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00(BgL_arg2554z00_555,
							BgL_arg2555z00_556, BgL_list2557z00_558);
					}
				}
			}
		}
	}



/* dump-Genv */
	obj_t BGl_dumpzd2Genvzd2zzengine_heapz00(obj_t BgL_genvz00_3)
	{
		AN_OBJECT;
		{	/* Engine/heap.scm 121 */
			return
				BGl_hashtablezd2forzd2eachz00zz__hashz00(BgL_genvz00_3,
				BGl_proc2797z00zzengine_heapz00);
		}
	}



/* <anonymous:2616> */
	obj_t BGl_zc3anonymousza32616ze3z83zzengine_heapz00(obj_t BgL_envz00_1048,
		obj_t BgL_kz00_1049, obj_t BgL_bucketz00_1050)
	{
		AN_OBJECT;
		{	/* Engine/heap.scm 152 */
			{
				obj_t BgL_kz00_608;

				obj_t BgL_bucketz00_609;

				{	/* Engine/heap.scm 152 */
					bool_t BgL_auxz00_1278;

					BgL_kz00_608 = BgL_kz00_1049;
					BgL_bucketz00_609 = BgL_bucketz00_1050;
					{
						obj_t BgL_newz00_620;

						{	/* Engine/heap.scm 152 */
							obj_t BgL_g2482z00_611;

							BgL_g2482z00_611 = CDR(BgL_bucketz00_609);
							{
								obj_t BgL_l2480z00_613;

								BgL_l2480z00_613 = BgL_g2482z00_611;
							BgL_zc3anonymousza32617ze3z83_614:
								if (PAIRP(BgL_l2480z00_613))
									{	/* Engine/heap.scm 152 */
										BgL_newz00_620 = CAR(BgL_l2480z00_613);
										{	/* Engine/heap.scm 123 */
											obj_t BgL_modulez00_622;

											{
												BgL_globalz00_bglt BgL_auxz00_1282;

												BgL_auxz00_1282 = (BgL_globalz00_bglt) (BgL_newz00_620);
												BgL_modulez00_622 =
													(((BgL_globalz00_bglt) CREF(BgL_auxz00_1282))->
													BgL_modulez00);
											}
											{	/* Engine/heap.scm 123 */
												obj_t BgL_idz00_623;

												{
													BgL_variablez00_bglt BgL_auxz00_1285;

													BgL_auxz00_1285 =
														(BgL_variablez00_bglt) (BgL_newz00_620);
													BgL_idz00_623 =
														(((BgL_variablez00_bglt) CREF(BgL_auxz00_1285))->
														BgL_idz00);
												}
												{	/* Engine/heap.scm 124 */
													obj_t BgL_qtz00_624;

													BgL_qtz00_624 =
														BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00
														(BgL_modulez00_622);
													{	/* Engine/heap.scm 125 */
														obj_t BgL_jtz00_625;

														{
															BgL_globalz00_bglt BgL_auxz00_1289;

															BgL_auxz00_1289 =
																(BgL_globalz00_bglt) (BgL_newz00_620);
															BgL_jtz00_625 =
																(((BgL_globalz00_bglt) CREF(BgL_auxz00_1289))->
																BgL_jvmzd2typezd2namez00);
														}
														{	/* Engine/heap.scm 126 */
															BgL_valuez00_bglt BgL_valz00_626;

															{
																BgL_variablez00_bglt BgL_auxz00_1292;

																BgL_auxz00_1292 =
																	(BgL_variablez00_bglt) (BgL_newz00_620);
																BgL_valz00_626 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_1292))->BgL_valuez00);
															}
															{	/* Engine/heap.scm 127 */
																obj_t BgL_kindz00_627;

																{	/* Engine/heap.scm 129 */
																	bool_t BgL_testz00_1295;

																	{	/* Engine/heap.scm 129 */
																		obj_t BgL_obj1952z00_992;

																		BgL_obj1952z00_992 =
																			(obj_t) (BgL_valz00_626);
																		BgL_testz00_1295 =
																			BGl_iszd2azf3z21zz__objectz00
																			(BgL_obj1952z00_992,
																			BGl_sfunz00zzast_varz00);
																	}
																	if (BgL_testz00_1295)
																		{	/* Engine/heap.scm 129 */
																			BgL_kindz00_627 =
																				CNST_TABLE_REF(((long) 1));
																		}
																	else
																		{	/* Engine/heap.scm 130 */
																			bool_t BgL_testz00_1299;

																			{	/* Engine/heap.scm 130 */
																				obj_t BgL_obj2016z00_993;

																				BgL_obj2016z00_993 =
																					(obj_t) (BgL_valz00_626);
																				BgL_testz00_1299 =
																					BGl_iszd2azf3z21zz__objectz00
																					(BgL_obj2016z00_993,
																					BGl_cfunz00zzast_varz00);
																			}
																			if (BgL_testz00_1299)
																				{	/* Engine/heap.scm 130 */
																					BgL_kindz00_627 =
																						CNST_TABLE_REF(((long) 2));
																				}
																			else
																				{	/* Engine/heap.scm 130 */
																					BgL_kindz00_627 =
																						CNST_TABLE_REF(((long) 3));
																}}}
																{	/* Engine/heap.scm 128 */

																	{	/* Engine/heap.scm 132 */
																		obj_t BgL_port2479z00_628;

																		{	/* Engine/heap.scm 132 */
																			obj_t BgL_res2782z00_995;

																			{	/* Engine/heap.scm 132 */
																				obj_t BgL_auxz00_1304;

																				BgL_auxz00_1304 =
																					BGL_CURRENT_DYNAMIC_ENV();
																				BgL_res2782z00_995 =
																					BGL_ENV_CURRENT_OUTPUT_PORT
																					(BgL_auxz00_1304);
																			}
																			BgL_port2479z00_628 = BgL_res2782z00_995;
																		}
																		bgl_display_string
																			(BGl_string2798z00zzengine_heapz00,
																			BgL_port2479z00_628);
																		{	/* Engine/heap.scm 133 */
																			obj_t BgL_arg2630z00_629;

																			{	/* Engine/heap.scm 133 */
																				obj_t BgL_arg2642z00_630;

																				{	/* Engine/heap.scm 133 */
																					obj_t BgL_arg2648z00_631;

																					obj_t BgL_arg2650z00_633;

																					obj_t BgL_arg2652z00_635;

																					obj_t BgL_arg2656z00_637;

																					obj_t BgL_arg2658z00_639;

																					obj_t BgL_arg2659z00_640;

																					obj_t BgL_arg2660z00_641;

																					obj_t BgL_arg2663z00_643;

																					BgL_arg2648z00_631 =
																						BGl_shapez00zztools_shapez00
																						(BgL_newz00_620);
																					{	/* Engine/heap.scm 135 */
																						obj_t BgL_arg2678z00_658;

																						obj_t BgL_arg2679z00_659;

																						BgL_arg2678z00_658 =
																							CNST_TABLE_REF(((long) 4));
																						{	/* Engine/heap.scm 135 */
																							obj_t BgL_list2680z00_660;

																							BgL_list2680z00_660 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2679z00_659 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_idz00_623,
																								BgL_list2680z00_660);
																						}
																						BgL_arg2650z00_633 =
																							MAKE_PAIR(BgL_arg2678z00_658,
																							BgL_arg2679z00_659);
																					}
																					{	/* Engine/heap.scm 137 */
																						obj_t BgL_arg2681z00_661;

																						obj_t BgL_arg2682z00_662;

																						BgL_arg2681z00_661 =
																							CNST_TABLE_REF(((long) 5));
																						{	/* Engine/heap.scm 137 */
																							obj_t BgL_list2683z00_663;

																							BgL_list2683z00_663 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2682z00_662 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_modulez00_622,
																								BgL_list2683z00_663);
																						}
																						BgL_arg2652z00_635 =
																							MAKE_PAIR(BgL_arg2681z00_661,
																							BgL_arg2682z00_662);
																					}
																					{	/* Engine/heap.scm 139 */
																						obj_t BgL_arg2684z00_664;

																						obj_t BgL_arg2685z00_665;

																						BgL_arg2684z00_664 =
																							CNST_TABLE_REF(((long) 6));
																						{	/* Engine/heap.scm 139 */
																							obj_t BgL_arg2686z00_666;

																							{
																								BgL_variablez00_bglt
																									BgL_auxz00_1318;
																								BgL_auxz00_1318 =
																									(BgL_variablez00_bglt)
																									(BgL_newz00_620);
																								BgL_arg2686z00_666 =
																									(((BgL_variablez00_bglt)
																										CREF(BgL_auxz00_1318))->
																									BgL_namez00);
																							}
																							{	/* Engine/heap.scm 139 */
																								obj_t BgL_list2688z00_668;

																								BgL_list2688z00_668 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2685z00_665 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg2686z00_666,
																									BgL_list2688z00_668);
																						}}
																						BgL_arg2656z00_637 =
																							MAKE_PAIR(BgL_arg2684z00_664,
																							BgL_arg2685z00_665);
																					}
																					{	/* Engine/heap.scm 141 */
																						obj_t BgL_arg2689z00_669;

																						obj_t BgL_arg2690z00_670;

																						BgL_arg2689z00_669 =
																							CNST_TABLE_REF(((long) 7));
																						{	/* Engine/heap.scm 141 */
																							obj_t BgL_list2691z00_671;

																							BgL_list2691z00_671 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2690z00_670 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_qtz00_624,
																								BgL_list2691z00_671);
																						}
																						BgL_arg2658z00_639 =
																							MAKE_PAIR(BgL_arg2689z00_669,
																							BgL_arg2690z00_670);
																					}
																					{	/* Engine/heap.scm 142 */
																						bool_t BgL_testz00_1328;

																						{	/* Engine/heap.scm 142 */
																							bool_t BgL_testz00_1329;

																							{	/* Engine/heap.scm 142 */
																								obj_t BgL_obj1952z00_999;

																								BgL_obj1952z00_999 =
																									(obj_t) (BgL_valz00_626);
																								BgL_testz00_1329 =
																									BGl_iszd2azf3z21zz__objectz00
																									(BgL_obj1952z00_999,
																									BGl_sfunz00zzast_varz00);
																							}
																							if (BgL_testz00_1329)
																								{	/* Engine/heap.scm 142 */
																									obj_t BgL_auxz00_1332;

																									{
																										BgL_sfunz00_bglt
																											BgL_auxz00_1333;
																										BgL_auxz00_1333 =
																											(BgL_sfunz00_bglt)
																											(BgL_valz00_626);
																										BgL_auxz00_1332 =
																											(((BgL_sfunz00_bglt)
																												CREF(BgL_auxz00_1333))->
																											BgL_classz00);
																									}
																									BgL_testz00_1328 =
																										(BgL_auxz00_1332 ==
																										CNST_TABLE_REF(((long) 8)));
																								}
																							else
																								{	/* Engine/heap.scm 142 */
																									BgL_testz00_1328 =
																										((bool_t) 0);
																								}
																						}
																						if (BgL_testz00_1328)
																							{	/* Engine/heap.scm 142 */
																								BgL_arg2659z00_640 =
																									BGl_string2799z00zzengine_heapz00;
																							}
																						else
																							{	/* Engine/heap.scm 142 */
																								BgL_arg2659z00_640 =
																									BGl_string2800z00zzengine_heapz00;
																							}
																					}
																					{	/* Engine/heap.scm 145 */
																						bool_t BgL_testz00_1338;

																						{	/* Engine/heap.scm 145 */
																							bool_t BgL_testz00_1339;

																							{	/* Engine/heap.scm 145 */
																								obj_t BgL_obj1952z00_1001;

																								BgL_obj1952z00_1001 =
																									(obj_t) (BgL_valz00_626);
																								BgL_testz00_1339 =
																									BGl_iszd2azf3z21zz__objectz00
																									(BgL_obj1952z00_1001,
																									BGl_sfunz00zzast_varz00);
																							}
																							if (BgL_testz00_1339)
																								{	/* Engine/heap.scm 145 */
																									obj_t BgL_auxz00_1342;

																									{
																										BgL_sfunz00_bglt
																											BgL_auxz00_1343;
																										BgL_auxz00_1343 =
																											(BgL_sfunz00_bglt)
																											(BgL_valz00_626);
																										BgL_auxz00_1342 =
																											(((BgL_sfunz00_bglt)
																												CREF(BgL_auxz00_1343))->
																											BgL_classz00);
																									}
																									BgL_testz00_1338 =
																										(BgL_auxz00_1342 ==
																										CNST_TABLE_REF(((long) 8)));
																								}
																							else
																								{	/* Engine/heap.scm 145 */
																									BgL_testz00_1338 =
																										((bool_t) 0);
																								}
																						}
																						if (BgL_testz00_1338)
																							{	/* Engine/heap.scm 146 */
																								obj_t BgL_arg2697z00_677;

																								obj_t BgL_arg2698z00_678;

																								BgL_arg2697z00_677 =
																									CNST_TABLE_REF(((long) 9));
																								{	/* Engine/heap.scm 146 */
																									obj_t BgL_arg2699z00_679;

																									{	/* Engine/heap.scm 146 */
																										obj_t BgL_arg2702z00_682;

																										{
																											BgL_sfunz00_bglt
																												BgL_auxz00_1349;
																											BgL_auxz00_1349 =
																												(BgL_sfunz00_bglt)
																												(BgL_valz00_626);
																											BgL_arg2702z00_682 =
																												(((BgL_sfunz00_bglt)
																													CREF
																													(BgL_auxz00_1349))->
																												BgL_bodyz00);
																										}
																										BgL_arg2699z00_679 =
																											BGl_shapez00zztools_shapez00
																											(BgL_arg2702z00_682);
																									}
																									{	/* Engine/heap.scm 146 */
																										obj_t BgL_list2701z00_681;

																										BgL_list2701z00_681 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2698z00_678 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg2699z00_679,
																											BgL_list2701z00_681);
																								}}
																								BgL_arg2660z00_641 =
																									MAKE_PAIR(BgL_arg2697z00_677,
																									BgL_arg2698z00_678);
																							}
																						else
																							{	/* Engine/heap.scm 145 */
																								BgL_arg2660z00_641 =
																									BGl_string2800z00zzengine_heapz00;
																							}
																					}
																					{	/* Engine/heap.scm 149 */
																						obj_t BgL_arg2706z00_686;

																						obj_t BgL_arg2707z00_687;

																						BgL_arg2706z00_686 =
																							CNST_TABLE_REF(((long) 10));
																						{	/* Engine/heap.scm 149 */
																							obj_t BgL_list2708z00_688;

																							BgL_list2708z00_688 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2707z00_687 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_jtz00_625,
																								BgL_list2708z00_688);
																						}
																						BgL_arg2663z00_643 =
																							MAKE_PAIR(BgL_arg2706z00_686,
																							BgL_arg2707z00_687);
																					}
																					{	/* Engine/heap.scm 132 */
																						obj_t BgL_list2665z00_645;

																						{	/* Engine/heap.scm 132 */
																							obj_t BgL_arg2666z00_646;

																							{	/* Engine/heap.scm 132 */
																								obj_t BgL_arg2667z00_647;

																								{	/* Engine/heap.scm 132 */
																									obj_t BgL_arg2668z00_648;

																									{	/* Engine/heap.scm 132 */
																										obj_t BgL_arg2669z00_649;

																										{	/* Engine/heap.scm 132 */
																											obj_t BgL_arg2670z00_650;

																											{	/* Engine/heap.scm 132 */
																												obj_t
																													BgL_arg2671z00_651;
																												{	/* Engine/heap.scm 132 */
																													obj_t
																														BgL_arg2672z00_652;
																													{	/* Engine/heap.scm 132 */
																														obj_t
																															BgL_arg2673z00_653;
																														{	/* Engine/heap.scm 132 */
																															obj_t
																																BgL_arg2674z00_654;
																															{	/* Engine/heap.scm 132 */
																																obj_t
																																	BgL_arg2675z00_655;
																																{	/* Engine/heap.scm 132 */
																																	obj_t
																																		BgL_arg2676z00_656;
																																	{	/* Engine/heap.scm 132 */
																																		obj_t
																																			BgL_arg2677z00_657;
																																		BgL_arg2677z00_657
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		BgL_arg2676z00_656
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2663z00_643,
																																			BgL_arg2677z00_657);
																																	}
																																	BgL_arg2675z00_655
																																		=
																																		MAKE_PAIR
																																		(BGl_string2799z00zzengine_heapz00,
																																		BgL_arg2676z00_656);
																																}
																																BgL_arg2674z00_654
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2660z00_641,
																																	BgL_arg2675z00_655);
																															}
																															BgL_arg2673z00_653
																																=
																																MAKE_PAIR
																																(BgL_arg2659z00_640,
																																BgL_arg2674z00_654);
																														}
																														BgL_arg2672z00_652 =
																															MAKE_PAIR
																															(BgL_arg2658z00_639,
																															BgL_arg2673z00_653);
																													}
																													BgL_arg2671z00_651 =
																														MAKE_PAIR
																														(BGl_string2799z00zzengine_heapz00,
																														BgL_arg2672z00_652);
																												}
																												BgL_arg2670z00_650 =
																													MAKE_PAIR
																													(BgL_arg2656z00_637,
																													BgL_arg2671z00_651);
																											}
																											BgL_arg2669z00_649 =
																												MAKE_PAIR
																												(BGl_string2799z00zzengine_heapz00,
																												BgL_arg2670z00_650);
																										}
																										BgL_arg2668z00_648 =
																											MAKE_PAIR
																											(BgL_arg2652z00_635,
																											BgL_arg2669z00_649);
																									}
																									BgL_arg2667z00_647 =
																										MAKE_PAIR
																										(BGl_string2799z00zzengine_heapz00,
																										BgL_arg2668z00_648);
																								}
																								BgL_arg2666z00_646 =
																									MAKE_PAIR(BgL_arg2650z00_633,
																									BgL_arg2667z00_647);
																							}
																							BgL_list2665z00_645 =
																								MAKE_PAIR
																								(BGl_string2799z00zzengine_heapz00,
																								BgL_arg2666z00_646);
																						}
																						BgL_arg2642z00_630 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2648z00_631,
																							BgL_list2665z00_645);
																				}}
																				BgL_arg2630z00_629 =
																					MAKE_PAIR(BgL_kindz00_627,
																					BgL_arg2642z00_630);
																			}
																			bgl_display_obj(BgL_arg2630z00_629,
																				BgL_port2479z00_628);
																		}
																		bgl_display_char(((unsigned char) '\n'),
																			BgL_port2479z00_628);
										}}}}}}}}
										{
											obj_t BgL_l2480z00_1378;

											BgL_l2480z00_1378 = CDR(BgL_l2480z00_613);
											BgL_l2480z00_613 = BgL_l2480z00_1378;
											goto BgL_zc3anonymousza32617ze3z83_614;
										}
									}
								else
									{	/* Engine/heap.scm 152 */
										BgL_auxz00_1278 = ((bool_t) 1);
									}
							}
						}
					}
					return BBOOL(BgL_auxz00_1278);
				}
			}
		}
	}



/* dump-Tenv */
	obj_t BGl_dumpzd2Tenvzd2zzengine_heapz00(obj_t BgL_tenvz00_4)
	{
		AN_OBJECT;
		{	/* Engine/heap.scm 157 */
			return
				BGl_hashtablezd2forzd2eachz00zz__hashz00(BgL_tenvz00_4,
				BGl_proc2801z00zzengine_heapz00);
		}
	}



/* <anonymous:2712> */
	obj_t BGl_zc3anonymousza32712ze3z83zzengine_heapz00(obj_t BgL_envz00_1052,
		obj_t BgL_kz00_1053, obj_t BgL_newz00_1054)
	{
		AN_OBJECT;
		{	/* Engine/heap.scm 159 */
			{
				obj_t BgL_kz00_693;

				obj_t BgL_newz00_694;

				BgL_kz00_693 = BgL_kz00_1053;
				BgL_newz00_694 = BgL_newz00_1054;
				{	/* Engine/heap.scm 160 */
					obj_t BgL_idz00_696;

					{
						BgL_typez00_bglt BgL_auxz00_1382;

						BgL_auxz00_1382 = (BgL_typez00_bglt) (BgL_newz00_694);
						BgL_idz00_696 =
							(((BgL_typez00_bglt) CREF(BgL_auxz00_1382))->BgL_idz00);
					}
					{	/* Engine/heap.scm 160 */
						obj_t BgL_namez00_697;

						{
							BgL_typez00_bglt BgL_auxz00_1385;

							BgL_auxz00_1385 = (BgL_typez00_bglt) (BgL_newz00_694);
							BgL_namez00_697 =
								(((BgL_typez00_bglt) CREF(BgL_auxz00_1385))->BgL_namez00);
						}
						{	/* Engine/heap.scm 161 */

							if (BGl_iszd2azf3z21zz__objectz00(BgL_newz00_694,
									BGl_tclassz00zzobject_classz00))
								{	/* Engine/heap.scm 163 */
									BgL_tclassz00_bglt BgL_instance2462z00_699;

									BgL_instance2462z00_699 =
										(BgL_tclassz00_bglt) (BgL_newz00_694);
									{	/* Engine/heap.scm 164 */
										obj_t BgL_port2489z00_700;

										{	/* Engine/heap.scm 164 */
											obj_t BgL_res2783z00_1009;

											{	/* Engine/heap.scm 164 */
												obj_t BgL_auxz00_1391;

												BgL_auxz00_1391 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res2783z00_1009 =
													BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1391);
											}
											BgL_port2489z00_700 = BgL_res2783z00_1009;
										}
										bgl_display_string(BGl_string2798z00zzengine_heapz00,
											BgL_port2489z00_700);
										{	/* Engine/heap.scm 165 */
											obj_t BgL_arg2714z00_701;

											{	/* Engine/heap.scm 165 */
												obj_t BgL_arg2716z00_702;

												obj_t BgL_arg2717z00_703;

												BgL_arg2716z00_702 = CNST_TABLE_REF(((long) 11));
												{	/* Engine/heap.scm 165 */
													obj_t BgL_arg2718z00_704;

													obj_t BgL_arg2719z00_705;

													obj_t BgL_arg2720z00_706;

													BgL_arg2718z00_704 =
														BGl_shapez00zztools_shapez00(BgL_newz00_694);
													{	/* Engine/heap.scm 166 */
														obj_t BgL_arg2724z00_709;

														obj_t BgL_arg2725z00_710;

														BgL_arg2724z00_709 = CNST_TABLE_REF(((long) 12));
														{	/* Engine/heap.scm 166 */
															obj_t BgL_arg2726z00_711;

															{	/* Engine/heap.scm 166 */
																obj_t BgL_arg2729z00_714;

																{
																	obj_t BgL_auxz00_1398;

																	{	/* Engine/heap.scm 166 */
																		BgL_objectz00_bglt BgL_auxz00_1399;

																		BgL_auxz00_1399 =
																			(BgL_objectz00_bglt)
																			(BgL_instance2462z00_699);
																		BgL_auxz00_1398 =
																			BGL_OBJECT_WIDENING(BgL_auxz00_1399);
																	}
																	BgL_arg2729z00_714 =
																		(((BgL_tclassz00_bglt)
																			CREF(BgL_auxz00_1398))->
																		BgL_itszd2superzd2);
																}
																BgL_arg2726z00_711 =
																	BGl_shapez00zztools_shapez00
																	(BgL_arg2729z00_714);
															}
															{	/* Engine/heap.scm 166 */
																obj_t BgL_list2728z00_713;

																BgL_list2728z00_713 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2725z00_710 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2726z00_711, BgL_list2728z00_713);
														}}
														BgL_arg2719z00_705 =
															MAKE_PAIR(BgL_arg2724z00_709, BgL_arg2725z00_710);
													}
													{	/* Engine/heap.scm 167 */
														obj_t BgL_arg2730z00_715;

														{	/* Engine/heap.scm 167 */
															obj_t BgL_l2483z00_717;

															{
																obj_t BgL_auxz00_1407;

																{	/* Engine/heap.scm 167 */
																	BgL_objectz00_bglt BgL_auxz00_1408;

																	BgL_auxz00_1408 =
																		(BgL_objectz00_bglt)
																		(BgL_instance2462z00_699);
																	BgL_auxz00_1407 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_1408);
																}
																BgL_l2483z00_717 =
																	(((BgL_tclassz00_bglt)
																		CREF(BgL_auxz00_1407))->BgL_slotsz00);
															}
															if (NULLP(BgL_l2483z00_717))
																{	/* Engine/heap.scm 167 */
																	BgL_arg2730z00_715 = BNIL;
																}
															else
																{	/* Engine/heap.scm 167 */
																	obj_t BgL_head2485z00_719;

																	BgL_head2485z00_719 =
																		MAKE_PAIR(BGl_shapez00zztools_shapez00(CAR
																			(BgL_l2483z00_717)), BNIL);
																	{	/* Engine/heap.scm 167 */
																		obj_t BgL_g2488z00_720;

																		BgL_g2488z00_720 = CDR(BgL_l2483z00_717);
																		{
																			obj_t BgL_l2483z00_722;

																			obj_t BgL_tail2486z00_723;

																			BgL_l2483z00_722 = BgL_g2488z00_720;
																			BgL_tail2486z00_723 = BgL_head2485z00_719;
																		BgL_zc3anonymousza32733ze3z83_724:
																			if (NULLP(BgL_l2483z00_722))
																				{	/* Engine/heap.scm 167 */
																					BgL_arg2730z00_715 =
																						BgL_head2485z00_719;
																				}
																			else
																				{	/* Engine/heap.scm 167 */
																					obj_t BgL_newtail2487z00_726;

																					BgL_newtail2487z00_726 =
																						MAKE_PAIR
																						(BGl_shapez00zztools_shapez00(CAR
																							(BgL_l2483z00_722)), BNIL);
																					SET_CDR(BgL_tail2486z00_723,
																						BgL_newtail2487z00_726);
																					{
																						obj_t BgL_tail2486z00_1426;

																						obj_t BgL_l2483z00_1424;

																						BgL_l2483z00_1424 =
																							CDR(BgL_l2483z00_722);
																						BgL_tail2486z00_1426 =
																							BgL_newtail2487z00_726;
																						BgL_tail2486z00_723 =
																							BgL_tail2486z00_1426;
																						BgL_l2483z00_722 =
																							BgL_l2483z00_1424;
																						goto
																							BgL_zc3anonymousza32733ze3z83_724;
																					}
																				}
																		}
																	}
																}
														}
														BgL_arg2720z00_706 =
															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg2730z00_715, BNIL);
													}
													{	/* Engine/heap.scm 165 */
														obj_t BgL_list2721z00_707;

														{	/* Engine/heap.scm 165 */
															obj_t BgL_arg2722z00_708;

															BgL_arg2722z00_708 =
																MAKE_PAIR(BgL_arg2720z00_706, BNIL);
															BgL_list2721z00_707 =
																MAKE_PAIR(BgL_arg2719z00_705,
																BgL_arg2722z00_708);
														}
														BgL_arg2717z00_703 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg2718z00_704, BgL_list2721z00_707);
													}
												}
												BgL_arg2714z00_701 =
													MAKE_PAIR(BgL_arg2716z00_702, BgL_arg2717z00_703);
											}
											bgl_display_obj(BgL_arg2714z00_701, BgL_port2489z00_700);
										}
										return
											bgl_display_char(((unsigned char) '\n'),
											BgL_port2489z00_700);
								}}
							else
								{	/* Engine/heap.scm 168 */
									obj_t BgL_port2490z00_735;

									{	/* Engine/heap.scm 168 */
										obj_t BgL_res2784z00_1028;

										{	/* Engine/heap.scm 168 */
											obj_t BgL_auxz00_1434;

											BgL_auxz00_1434 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_res2784z00_1028 =
												BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1434);
										}
										BgL_port2490z00_735 = BgL_res2784z00_1028;
									}
									bgl_display_string(BGl_string2798z00zzengine_heapz00,
										BgL_port2490z00_735);
									{	/* Engine/heap.scm 168 */
										obj_t BgL_arg2742z00_736;

										{	/* Engine/heap.scm 168 */
											obj_t BgL_arg2743z00_737;

											obj_t BgL_arg2745z00_738;

											BgL_arg2743z00_737 = CNST_TABLE_REF(((long) 13));
											{	/* Engine/heap.scm 168 */
												obj_t BgL_arg2746z00_739;

												{	/* Engine/heap.scm 168 */
													obj_t BgL_arg2750z00_743;

													obj_t BgL_arg2752z00_744;

													BgL_arg2750z00_743 = CNST_TABLE_REF(((long) 6));
													{	/* Engine/heap.scm 168 */
														obj_t BgL_list2753z00_745;

														BgL_list2753z00_745 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2752z00_744 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_namez00_697, BgL_list2753z00_745);
													}
													BgL_arg2746z00_739 =
														MAKE_PAIR(BgL_arg2750z00_743, BgL_arg2752z00_744);
												}
												{	/* Engine/heap.scm 168 */
													obj_t BgL_list2748z00_741;

													{	/* Engine/heap.scm 168 */
														obj_t BgL_arg2749z00_742;

														BgL_arg2749z00_742 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2748z00_741 =
															MAKE_PAIR(BgL_arg2746z00_739, BgL_arg2749z00_742);
													}
													BgL_arg2745z00_738 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_idz00_696, BgL_list2748z00_741);
											}}
											BgL_arg2742z00_736 =
												MAKE_PAIR(BgL_arg2743z00_737, BgL_arg2745z00_738);
										}
										bgl_display_obj(BgL_arg2742z00_736, BgL_port2490z00_735);
									}
									return
										bgl_display_char(((unsigned char) '\n'),
										BgL_port2490z00_735);
		}}}}}}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzengine_heapz00()
	{
		AN_OBJECT;
		{	/* Engine/heap.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzengine_heapz00()
	{
		AN_OBJECT;
		{	/* Engine/heap.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzengine_heapz00()
	{
		AN_OBJECT;
		{	/* Engine/heap.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string2802z00zzengine_heapz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string2802z00zzengine_heapz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string2802z00zzengine_heapz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string2802z00zzengine_heapz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2802z00zzengine_heapz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string2802z00zzengine_heapz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string2802z00zzengine_heapz00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 143212498),
				BSTRING_TO_STRING(BGl_string2802z00zzengine_heapz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string2802z00zzengine_heapz00));
			BGl_modulezd2initializa7ationz75zzheap_restorez00(((long) 307873065),
				BSTRING_TO_STRING(BGl_string2802z00zzengine_heapz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string2802z00zzengine_heapz00));
			return
				BGl_modulezd2initializa7ationz75zzmodule_pragmaz00(((long) 284127067),
				BSTRING_TO_STRING(BGl_string2802z00zzengine_heapz00));
		}
	}

#ifdef __cplusplus
}
#endif
