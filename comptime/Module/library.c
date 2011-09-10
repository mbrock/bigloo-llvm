/*===========================================================================*/
/*   (Module/library.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/library.scm)*/
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


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	extern obj_t BGl_za2debugzd2moduleza2zd2zzengine_paramz00;
	extern obj_t BGl_za2bdbzd2moduleza2zd2zzbdb_settingz00;
	BGL_EXPORTED_DECL obj_t BGl_libraryzd2finaliza7erz75zzmodule_libraryz00();
	extern obj_t BGl_za2jvmzd2debugza2zd2zzengine_paramz00;
	static obj_t BGl_zc3anonymousza32244ze3z83zzmodule_libraryz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_libraryz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzmodule_libraryz00();
	extern obj_t BGl_getzd2importedzd2modulesz00zzmodule_impusez00();
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_withzd2libraryzd2modulez12z12zzmodule_libraryz00(obj_t);
	extern obj_t BGl_modulezd2initializa7ationzd2idza7zzmodule_modulez00(obj_t);
	extern obj_t BGl_za2jvmzd2debugzd2moduleza2z00zzbdb_settingz00;
	BGL_IMPORT obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	extern obj_t BGl_za2libzd2modeza2zd2zzengine_paramz00;
	static obj_t BGl__libraryzd2finaliza7erz75zzmodule_libraryz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl__withzd2libraryzd2modulez12z12zzmodule_libraryz00(obj_t,
		obj_t);
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	static obj_t BGl_cnstzd2initzd2zzmodule_libraryz00();
	static obj_t BGl_needzd2libraryzd2modulez12z12zzmodule_libraryz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_libraryz00();
	static obj_t BGl_za2keyza2z00zzmodule_libraryz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzmodule_libraryz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbdb_settingz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_impusez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_za2withzd2keyza2zd2zzmodule_libraryz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzmodule_libraryz00();
	static obj_t BGl_za2neededzd2modulesza2zd2zzmodule_libraryz00 = BUNSPEC;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	BGL_IMPORT obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	extern obj_t BGl_cvarz00zzast_varz00;
	static obj_t BGl_za2withzd2libraryzd2modulesza2z00zzmodule_libraryz00 =
		BUNSPEC;
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_libraryz00();
	static obj_t BGl_methodzd2initzd2zzmodule_libraryz00();
	static obj_t __cnst[11];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2559z00zzmodule_libraryz00,
		BgL_bgl_za7c3anonymousza7a322566z00,
		BGl_zc3anonymousza32244ze3z83zzmodule_libraryz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_libraryzd2finaliza7erzd2envza7zzmodule_libraryz00,
		BgL_bgl__libraryza7d2final2567za7,
		BGl__libraryzd2finaliza7erz75zzmodule_libraryz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2560z00zzmodule_libraryz00,
		BgL_bgl_string2560za700za7za7m2568za7, "bgl_init_module_debug_library(\"",
		31);
	      DEFINE_STRING(BGl_string2561z00zzmodule_libraryz00,
		BgL_bgl_string2561za700za7za7m2569za7, "\")", 2);
	      DEFINE_STRING(BGl_string2562z00zzmodule_libraryz00,
		BgL_bgl_string2562za700za7za7m2570za7, "module_library", 14);
	      DEFINE_STRING(BGl_string2563z00zzmodule_libraryz00,
		BgL_bgl_string2563za700za7za7m2571za7,
		"@ unit library-modules pragma::void begin module (#unspecified) jvm bdb foreign with-key ",
		89);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_withzd2libraryzd2modulez12zd2envzc0zzmodule_libraryz00,
		BgL_bgl__withza7d2libraryza72572z00,
		BGl__withzd2libraryzd2modulez12z12zzmodule_libraryz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzmodule_libraryz00(long
		BgL_checksumz00_855, char *BgL_fromz00_856)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_libraryz00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_libraryz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzmodule_libraryz00();
					BGl_cnstzd2initzd2zzmodule_libraryz00();
					BGl_importedzd2moduleszd2initz00zzmodule_libraryz00();
					BGl_toplevelzd2initzd2zzmodule_libraryz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_libraryz00()
	{
		AN_OBJECT;
		{	/* Module/library.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_library");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"module_library");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"module_library");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"module_library");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"module_library");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_libraryz00()
	{
		AN_OBJECT;
		{	/* Module/library.scm 15 */
			{	/* Module/library.scm 15 */
				obj_t BgL_cportz00_847;

				BgL_cportz00_847 =
					bgl_open_input_string(BGl_string2563z00zzmodule_libraryz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_848;

					BgL_iz00_848 = ((long) 10);
				BgL_loopz00_849:
					if ((BgL_iz00_848 == ((long) -1)))
						{	/* Module/library.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/library.scm 15 */
							{	/* Module/library.scm 15 */
								obj_t BgL_arg2565z00_851;

								{	/* Module/library.scm 15 */

									{	/* Module/library.scm 15 */
										obj_t BgL_locationz00_853;

										BgL_locationz00_853 = BBOOL(((bool_t) 0));
										{	/* Module/library.scm 15 */

											BgL_arg2565z00_851 =
												BGl_readz00zz__readerz00(BgL_cportz00_847,
												BgL_locationz00_853);
										}
									}
								}
								{	/* Module/library.scm 15 */
									int BgL_auxz00_875;

									BgL_auxz00_875 = (int) (BgL_iz00_848);
									CNST_TABLE_SET(BgL_auxz00_875, BgL_arg2565z00_851);
							}}
							{	/* Module/library.scm 15 */
								int BgL_auxz00_854;

								BgL_auxz00_854 = (int) ((BgL_iz00_848 - ((long) 1)));
								{
									long BgL_iz00_880;

									BgL_iz00_880 = (long) (BgL_auxz00_854);
									BgL_iz00_848 = BgL_iz00_880;
									goto BgL_loopz00_849;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmodule_libraryz00()
	{
		AN_OBJECT;
		{	/* Module/library.scm 15 */
			BGl_za2neededzd2modulesza2zd2zzmodule_libraryz00 = BNIL;
			BGl_za2keyza2z00zzmodule_libraryz00 = BUNSPEC;
			BGl_za2withzd2keyza2zd2zzmodule_libraryz00 =
				BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 0)));
			return (BGl_za2withzd2libraryzd2modulesza2z00zzmodule_libraryz00 =
				BNIL, BUNSPEC);
		}
	}



/* library-finalizer */
	BGL_EXPORTED_DEF obj_t BGl_libraryzd2finaliza7erz75zzmodule_libraryz00()
	{
		AN_OBJECT;
		{	/* Module/library.scm 31 */
			{	/* Module/library.scm 33 */

				{	/* Module/library.scm 33 */

					BGl_za2keyza2z00zzmodule_libraryz00 =
						BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
				}
			}
			{	/* Module/library.scm 35 */
				obj_t BgL_g2205z00_502;

				BgL_g2205z00_502 = BGl_getzd2importedzd2modulesz00zzmodule_impusez00();
				{
					obj_t BgL_l2203z00_504;

					BgL_l2203z00_504 = BgL_g2205z00_502;
				BgL_zc3anonymousza32238ze3z83_505:
					if (PAIRP(BgL_l2203z00_504))
						{	/* Module/library.scm 36 */
							{	/* Module/library.scm 35 */
								obj_t BgL_modulez00_507;

								BgL_modulez00_507 = CAR(BgL_l2203z00_504);
								BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_modulez00_507,
									BGl_za2keyza2z00zzmodule_libraryz00, BTRUE);
							}
							{
								obj_t BgL_l2203z00_890;

								BgL_l2203z00_890 = CDR(BgL_l2203z00_504);
								BgL_l2203z00_504 = BgL_l2203z00_890;
								goto BgL_zc3anonymousza32238ze3z83_505;
							}
						}
					else
						{	/* Module/library.scm 36 */
							((bool_t) 1);
						}
				}
			}
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 1)),
				BGl_za2keyza2z00zzmodule_libraryz00, BTRUE);
			BGl_putpropz12z12zz__r4_symbols_6_4z00
				(BGl_za2moduleza2z00zzmodule_modulez00,
				BGl_za2keyza2z00zzmodule_libraryz00, BTRUE);
			BGl_forzd2eachzd2globalz12z12zzast_envz00
				(BGl_proc2559z00zzmodule_libraryz00, BNIL);
			{	/* Module/library.scm 50 */
				bool_t BgL_testz00_896;

				if (
					((long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) > ((long) 0)))
					{	/* Module/library.scm 51 */
						obj_t BgL_arg2290z00_535;

						obj_t BgL_arg2295z00_536;

						BgL_arg2290z00_535 = CNST_TABLE_REF(((long) 2));
						{	/* Module/library.scm 51 */
							obj_t BgL_arg2297z00_537;

							BgL_arg2297z00_537 = BGl_thezd2backendzd2zzbackend_backendz00();
							{
								BgL_backendz00_bglt BgL_auxz00_902;

								BgL_auxz00_902 = (BgL_backendz00_bglt) (BgL_arg2297z00_537);
								BgL_arg2295z00_536 =
									(((BgL_backendz00_bglt) CREF(BgL_auxz00_902))->
									BgL_debugzd2supportzd2);
						}}
						BgL_testz00_896 =
							CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg2290z00_535,
								BgL_arg2295z00_536));
					}
				else
					{	/* Module/library.scm 50 */
						BgL_testz00_896 = ((bool_t) 0);
					}
				if (BgL_testz00_896)
					{
						obj_t BgL_l2206z00_528;

						BgL_l2206z00_528 = BGl_za2bdbzd2moduleza2zd2zzbdb_settingz00;
					BgL_zc3anonymousza32276ze3z83_529:
						if (PAIRP(BgL_l2206z00_528))
							{	/* Module/library.scm 52 */
								BGl_needzd2libraryzd2modulez12z12zzmodule_libraryz00(CAR
									(BgL_l2206z00_528));
								{
									obj_t BgL_l2206z00_911;

									BgL_l2206z00_911 = CDR(BgL_l2206z00_528);
									BgL_l2206z00_528 = BgL_l2206z00_911;
									goto BgL_zc3anonymousza32276ze3z83_529;
								}
							}
						else
							{	/* Module/library.scm 52 */
								((bool_t) 1);
							}
					}
				else
					{	/* Module/library.scm 50 */
						((bool_t) 0);
					}
			}
			{	/* Module/library.scm 53 */
				bool_t BgL_testz00_913;

				if (CBOOL(BGl_za2jvmzd2debugza2zd2zzengine_paramz00))
					{	/* Module/library.scm 53 */
						if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
							{	/* Module/library.scm 54 */
								BgL_testz00_913 = ((bool_t) 0);
							}
						else
							{	/* Module/library.scm 55 */
								obj_t BgL_arg2318z00_546;

								obj_t BgL_arg2325z00_547;

								BgL_arg2318z00_546 = CNST_TABLE_REF(((long) 3));
								{	/* Module/library.scm 55 */
									obj_t BgL_arg2331z00_548;

									BgL_arg2331z00_548 =
										BGl_thezd2backendzd2zzbackend_backendz00();
									{
										BgL_backendz00_bglt BgL_auxz00_920;

										BgL_auxz00_920 = (BgL_backendz00_bglt) (BgL_arg2331z00_548);
										BgL_arg2325z00_547 =
											(((BgL_backendz00_bglt) CREF(BgL_auxz00_920))->
											BgL_debugzd2supportzd2);
								}}
								BgL_testz00_913 =
									CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
									(BgL_arg2318z00_546, BgL_arg2325z00_547));
					}}
				else
					{	/* Module/library.scm 53 */
						BgL_testz00_913 = ((bool_t) 0);
					}
				if (BgL_testz00_913)
					{
						obj_t BgL_l2208z00_540;

						BgL_l2208z00_540 =
							BGl_za2jvmzd2debugzd2moduleza2z00zzbdb_settingz00;
					BgL_zc3anonymousza32299ze3z83_541:
						if (PAIRP(BgL_l2208z00_540))
							{	/* Module/library.scm 56 */
								BGl_needzd2libraryzd2modulez12z12zzmodule_libraryz00(CAR
									(BgL_l2208z00_540));
								{
									obj_t BgL_l2208z00_929;

									BgL_l2208z00_929 = CDR(BgL_l2208z00_540);
									BgL_l2208z00_540 = BgL_l2208z00_929;
									goto BgL_zc3anonymousza32299ze3z83_541;
								}
							}
						else
							{	/* Module/library.scm 56 */
								((bool_t) 1);
							}
					}
				else
					{	/* Module/library.scm 53 */
						((bool_t) 0);
					}
			}
			{
				obj_t BgL_l2210z00_550;

				BgL_l2210z00_550 =
					BGl_za2withzd2libraryzd2modulesza2z00zzmodule_libraryz00;
			BgL_zc3anonymousza32332ze3z83_551:
				if (PAIRP(BgL_l2210z00_550))
					{	/* Module/library.scm 59 */
						BGl_needzd2libraryzd2modulez12z12zzmodule_libraryz00(CAR
							(BgL_l2210z00_550));
						{
							obj_t BgL_l2210z00_935;

							BgL_l2210z00_935 = CDR(BgL_l2210z00_550);
							BgL_l2210z00_550 = BgL_l2210z00_935;
							goto BgL_zc3anonymousza32332ze3z83_551;
						}
					}
				else
					{	/* Module/library.scm 59 */
						((bool_t) 1);
					}
			}
			{	/* Module/library.scm 61 */
				obj_t BgL_modulesz00_556;

				BgL_modulesz00_556 = BGl_za2neededzd2modulesza2zd2zzmodule_libraryz00;
				if (NULLP(BgL_modulesz00_556))
					{	/* Module/library.scm 62 */
						return BNIL;
					}
				else
					{	/* Module/library.scm 64 */
						obj_t BgL_g2202z00_558;

						BgL_g2202z00_558 = CNST_TABLE_REF(((long) 4));
						{
							obj_t BgL_modulesz00_560;

							obj_t BgL_initzd2callza2z70_561;

							BgL_modulesz00_560 = BgL_modulesz00_556;
							BgL_initzd2callza2z70_561 = BgL_g2202z00_558;
						BgL_zc3anonymousza32346ze3z83_562:
							if (NULLP(BgL_modulesz00_560))
								{	/* Module/library.scm 67 */
									obj_t BgL_bodyz00_564;

									{	/* Module/library.scm 67 */
										bool_t BgL_testz00_942;

										if (
											((long) CINT(BGl_za2debugzd2moduleza2zd2zzengine_paramz00)
												> ((long) 0)))
											{	/* Module/library.scm 68 */
												obj_t BgL_arg2437z00_582;

												obj_t BgL_arg2438z00_583;

												BgL_arg2437z00_582 = CNST_TABLE_REF(((long) 5));
												{	/* Module/library.scm 70 */
													obj_t BgL_arg2444z00_584;

													BgL_arg2444z00_584 =
														BGl_thezd2backendzd2zzbackend_backendz00();
													{
														BgL_backendz00_bglt BgL_auxz00_948;

														BgL_auxz00_948 =
															(BgL_backendz00_bglt) (BgL_arg2444z00_584);
														BgL_arg2438z00_583 =
															(((BgL_backendz00_bglt) CREF(BgL_auxz00_948))->
															BgL_debugzd2supportzd2);
												}}
												BgL_testz00_942 =
													CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
													(BgL_arg2437z00_582, BgL_arg2438z00_583));
											}
										else
											{	/* Module/library.scm 67 */
												BgL_testz00_942 = ((bool_t) 0);
											}
										if (BgL_testz00_942)
											{	/* Module/library.scm 71 */
												obj_t BgL_arg2351z00_566;

												{	/* Module/library.scm 71 */
													obj_t BgL_arg2364z00_568;

													obj_t BgL_arg2370z00_569;

													BgL_arg2364z00_568 = CNST_TABLE_REF(((long) 6));
													{	/* Module/library.scm 72 */
														obj_t BgL_arg2377z00_570;

														obj_t BgL_arg2383z00_571;

														{	/* Module/library.scm 72 */
															obj_t BgL_arg2390z00_573;

															obj_t BgL_arg2396z00_574;

															BgL_arg2390z00_573 = CNST_TABLE_REF(((long) 7));
															{	/* Module/library.scm 73 */
																obj_t BgL_arg2403z00_575;

																{	/* Module/library.scm 73 */
																	obj_t BgL_arg2422z00_579;

																	{	/* Module/library.scm 75 */
																		obj_t BgL_res2557z00_803;

																		{	/* Module/library.scm 75 */
																			obj_t BgL_symbolz00_801;

																			BgL_symbolz00_801 =
																				BGl_za2moduleza2z00zzmodule_modulez00;
																			{	/* Module/library.scm 75 */
																				obj_t BgL_arg2063z00_802;

																				BgL_arg2063z00_802 =
																					SYMBOL_TO_STRING(BgL_symbolz00_801);
																				BgL_res2557z00_803 =
																					BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																					(BgL_arg2063z00_802);
																		}}
																		BgL_arg2422z00_579 = BgL_res2557z00_803;
																	}
																	BgL_arg2403z00_575 =
																		string_append_3
																		(BGl_string2560z00zzmodule_libraryz00,
																		BgL_arg2422z00_579,
																		BGl_string2561z00zzmodule_libraryz00);
																}
																{	/* Module/library.scm 72 */
																	obj_t BgL_list2410z00_577;

																	BgL_list2410z00_577 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg2396z00_574 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2403z00_575, BgL_list2410z00_577);
															}}
															BgL_arg2377z00_570 =
																MAKE_PAIR(BgL_arg2390z00_573,
																BgL_arg2396z00_574);
														}
														BgL_arg2383z00_571 =
															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
															(BgL_initzd2callza2z70_561, BNIL);
														{	/* Module/library.scm 71 */
															obj_t BgL_list2384z00_572;

															BgL_list2384z00_572 =
																MAKE_PAIR(BgL_arg2383z00_571, BNIL);
															BgL_arg2370z00_569 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2377z00_570, BgL_list2384z00_572);
													}}
													BgL_arg2351z00_566 =
														MAKE_PAIR(BgL_arg2364z00_568, BgL_arg2370z00_569);
												}
												BgL_bodyz00_564 = MAKE_PAIR(BgL_arg2351z00_566, BNIL);
											}
										else
											{	/* Module/library.scm 67 */
												BgL_bodyz00_564 = BgL_initzd2callza2z70_561;
											}
									}
									{	/* Module/library.scm 79 */
										obj_t BgL_idz00_804;

										BgL_idz00_804 = CNST_TABLE_REF(((long) 8));
										{	/* Module/library.scm 79 */
											obj_t BgL_newz00_809;

											BgL_newz00_809 =
												create_struct(CNST_TABLE_REF(((long) 9)),
												(int) (((long) 5)));
											{	/* Module/library.scm 79 */
												int BgL_auxz00_970;

												BgL_auxz00_970 = (int) (((long) 4));
												STRUCT_SET(BgL_newz00_809, BgL_auxz00_970, BFALSE);
											}
											{	/* Module/library.scm 79 */
												int BgL_auxz00_973;

												BgL_auxz00_973 = (int) (((long) 3));
												STRUCT_SET(BgL_newz00_809, BgL_auxz00_973, BTRUE);
											}
											{	/* Module/library.scm 79 */
												int BgL_auxz00_976;

												BgL_auxz00_976 = (int) (((long) 2));
												STRUCT_SET(BgL_newz00_809, BgL_auxz00_976,
													BgL_bodyz00_564);
											}
											{	/* Module/library.scm 79 */
												obj_t BgL_auxz00_981;

												int BgL_auxz00_979;

												BgL_auxz00_981 = BINT(((long) 2));
												BgL_auxz00_979 = (int) (((long) 1));
												STRUCT_SET(BgL_newz00_809, BgL_auxz00_979,
													BgL_auxz00_981);
											}
											{	/* Module/library.scm 79 */
												int BgL_auxz00_984;

												BgL_auxz00_984 = (int) (((long) 0));
												STRUCT_SET(BgL_newz00_809, BgL_auxz00_984,
													BgL_idz00_804);
											}
											return BgL_newz00_809;
										}
									}
								}
							else
								{	/* Module/library.scm 80 */
									obj_t BgL_idz00_585;

									BgL_idz00_585 = CAR(BgL_modulesz00_560);
									{	/* Module/library.scm 80 */
										obj_t BgL_initzd2funzd2idz00_586;

										BgL_initzd2funzd2idz00_586 =
											BGl_modulezd2initializa7ationzd2idza7zzmodule_modulez00
											(BgL_idz00_585);
										{	/* Module/library.scm 81 */

											{	/* Module/library.scm 82 */
												obj_t BgL_arg2445z00_587;

												obj_t BgL_arg2448z00_588;

												BgL_arg2445z00_587 = CDR(BgL_modulesz00_560);
												{	/* Module/library.scm 83 */
													obj_t BgL_arg2451z00_589;

													{	/* Module/library.scm 83 */
														obj_t BgL_arg2452z00_590;

														obj_t BgL_arg2453z00_591;

														{	/* Module/library.scm 83 */
															obj_t BgL_arg2454z00_592;

															obj_t BgL_arg2459z00_593;

															BgL_arg2454z00_592 = CNST_TABLE_REF(((long) 10));
															{	/* Module/library.scm 83 */
																obj_t BgL_list2460z00_594;

																{	/* Module/library.scm 83 */
																	obj_t BgL_arg2461z00_595;

																	BgL_arg2461z00_595 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list2460z00_594 =
																		MAKE_PAIR(BgL_idz00_585,
																		BgL_arg2461z00_595);
																}
																BgL_arg2459z00_593 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_initzd2funzd2idz00_586,
																	BgL_list2460z00_594);
															}
															BgL_arg2452z00_590 =
																MAKE_PAIR(BgL_arg2454z00_592,
																BgL_arg2459z00_593);
														}
														{	/* Module/library.scm 83 */
															obj_t BgL_arg2471z00_597;

															{	/* Module/library.scm 87 */
																obj_t BgL_res2558z00_839;

																{	/* Module/library.scm 87 */
																	obj_t BgL_symbolz00_837;

																	BgL_symbolz00_837 =
																		BGl_za2moduleza2z00zzmodule_modulez00;
																	{	/* Module/library.scm 87 */
																		obj_t BgL_arg2063z00_838;

																		BgL_arg2063z00_838 =
																			SYMBOL_TO_STRING(BgL_symbolz00_837);
																		BgL_res2558z00_839 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2063z00_838);
																}}
																BgL_arg2471z00_597 = BgL_res2558z00_839;
															}
															{	/* Module/library.scm 83 */
																obj_t BgL_list2473z00_599;

																{	/* Module/library.scm 83 */
																	obj_t BgL_arg2476z00_600;

																	BgL_arg2476z00_600 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list2473z00_599 =
																		MAKE_PAIR(BgL_arg2471z00_597,
																		BgL_arg2476z00_600);
																}
																BgL_arg2453z00_591 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BINT(((long) 0)), BgL_list2473z00_599);
														}}
														BgL_arg2451z00_589 =
															MAKE_PAIR(BgL_arg2452z00_590, BgL_arg2453z00_591);
													}
													BgL_arg2448z00_588 =
														MAKE_PAIR(BgL_arg2451z00_589,
														BgL_initzd2callza2z70_561);
												}
												{
													obj_t BgL_initzd2callza2z70_1004;

													obj_t BgL_modulesz00_1003;

													BgL_modulesz00_1003 = BgL_arg2445z00_587;
													BgL_initzd2callza2z70_1004 = BgL_arg2448z00_588;
													BgL_initzd2callza2z70_561 =
														BgL_initzd2callza2z70_1004;
													BgL_modulesz00_560 = BgL_modulesz00_1003;
													goto BgL_zc3anonymousza32346ze3z83_562;
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



/* _library-finalizer */
	obj_t BGl__libraryzd2finaliza7erz75zzmodule_libraryz00(obj_t BgL_envz00_841)
	{
		AN_OBJECT;
		{	/* Module/library.scm 31 */
			return BGl_libraryzd2finaliza7erz75zzmodule_libraryz00();
		}
	}



/* <anonymous:2244> */
	obj_t BGl_zc3anonymousza32244ze3z83zzmodule_libraryz00(obj_t BgL_envz00_842,
		obj_t BgL_globalz00_843)
	{
		AN_OBJECT;
		{	/* Module/library.scm 42 */
			{
				obj_t BgL_globalz00_512;

				BgL_globalz00_512 = BgL_globalz00_843;
				{	/* Module/library.scm 45 */
					bool_t BgL_testz00_1006;

					{	/* Module/library.scm 45 */
						bool_t BgL_testz00_1007;

						{	/* Module/library.scm 45 */
							long BgL_auxz00_1008;

							{
								BgL_variablez00_bglt BgL_auxz00_1009;

								BgL_auxz00_1009 = (BgL_variablez00_bglt) (BgL_globalz00_512);
								BgL_auxz00_1008 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_1009))->
									BgL_occurrencez00);
							}
							BgL_testz00_1007 = (BgL_auxz00_1008 > ((long) 0));
						}
						if (BgL_testz00_1007)
							{	/* Module/library.scm 45 */
								bool_t BgL_testz00_1013;

								{	/* Module/library.scm 45 */
									BgL_globalz00_bglt BgL_obj1773z00_777;

									BgL_obj1773z00_777 = (BgL_globalz00_bglt) (BgL_globalz00_512);
									BgL_testz00_1013 =
										CBOOL(
										(((BgL_globalz00_bglt) CREF(BgL_obj1773z00_777))->
											BgL_libraryz00));
								}
								if (BgL_testz00_1013)
									{	/* Module/library.scm 47 */
										bool_t BgL_testz00_1017;

										{	/* Module/library.scm 47 */
											bool_t BgL_testz00_1018;

											{	/* Module/library.scm 47 */
												BgL_valuez00_bglt BgL_arg2260z00_522;

												{
													BgL_variablez00_bglt BgL_auxz00_1019;

													BgL_auxz00_1019 =
														(BgL_variablez00_bglt) (BgL_globalz00_512);
													BgL_arg2260z00_522 =
														(((BgL_variablez00_bglt) CREF(BgL_auxz00_1019))->
														BgL_valuez00);
												}
												{	/* Module/library.scm 47 */
													obj_t BgL_obj2108z00_779;

													BgL_obj2108z00_779 = (obj_t) (BgL_arg2260z00_522);
													BgL_testz00_1018 =
														BGl_iszd2azf3z21zz__objectz00(BgL_obj2108z00_779,
														BGl_cfunz00zzast_varz00);
												}
											}
											if (BgL_testz00_1018)
												{	/* Module/library.scm 47 */
													BgL_testz00_1017 = ((bool_t) 1);
												}
											else
												{	/* Module/library.scm 47 */
													BgL_valuez00_bglt BgL_arg2259z00_521;

													{
														BgL_variablez00_bglt BgL_auxz00_1024;

														BgL_auxz00_1024 =
															(BgL_variablez00_bglt) (BgL_globalz00_512);
														BgL_arg2259z00_521 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_1024))->
															BgL_valuez00);
													}
													{	/* Module/library.scm 47 */
														obj_t BgL_obj2146z00_781;

														BgL_obj2146z00_781 = (obj_t) (BgL_arg2259z00_521);
														BgL_testz00_1017 =
															BGl_iszd2azf3z21zz__objectz00(BgL_obj2146z00_781,
															BGl_cvarz00zzast_varz00);
													}
												}
										}
										if (BgL_testz00_1017)
											{	/* Module/library.scm 47 */
												BgL_testz00_1006 = ((bool_t) 0);
											}
										else
											{	/* Module/library.scm 47 */
												BgL_testz00_1006 = ((bool_t) 1);
											}
									}
								else
									{	/* Module/library.scm 45 */
										BgL_testz00_1006 = ((bool_t) 0);
									}
							}
						else
							{	/* Module/library.scm 45 */
								BgL_testz00_1006 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_1006)
						{	/* Module/library.scm 48 */
							obj_t BgL_arg2252z00_516;

							{
								BgL_globalz00_bglt BgL_auxz00_1029;

								BgL_auxz00_1029 = (BgL_globalz00_bglt) (BgL_globalz00_512);
								BgL_arg2252z00_516 =
									(((BgL_globalz00_bglt) CREF(BgL_auxz00_1029))->BgL_modulez00);
							}
							return
								BGl_needzd2libraryzd2modulez12z12zzmodule_libraryz00
								(BgL_arg2252z00_516);
						}
					else
						{	/* Module/library.scm 45 */
							return BFALSE;
						}
				}
			}
		}
	}



/* need-library-module! */
	obj_t BGl_needzd2libraryzd2modulez12z12zzmodule_libraryz00(obj_t
		BgL_modulez00_23)
	{
		AN_OBJECT;
		{	/* Module/library.scm 103 */
			if (CBOOL(BGl_getpropz00zz__r4_symbols_6_4z00(BgL_modulez00_23,
						BGl_za2keyza2z00zzmodule_libraryz00)))
				{	/* Module/library.scm 104 */
					return BFALSE;
				}
			else
				{	/* Module/library.scm 104 */
					BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_modulez00_23,
						BGl_za2keyza2z00zzmodule_libraryz00, BTRUE);
					return (BGl_za2neededzd2modulesza2zd2zzmodule_libraryz00 =
						MAKE_PAIR(BgL_modulez00_23,
							BGl_za2neededzd2modulesza2zd2zzmodule_libraryz00), BUNSPEC);
				}
		}
	}



/* with-library-module! */
	BGL_EXPORTED_DEF obj_t
		BGl_withzd2libraryzd2modulez12z12zzmodule_libraryz00(obj_t BgL_modulez00_24)
	{
		AN_OBJECT;
		{	/* Module/library.scm 122 */
			if (CBOOL(BGl_getpropz00zz__r4_symbols_6_4z00(BgL_modulez00_24,
						BGl_za2withzd2keyza2zd2zzmodule_libraryz00)))
				{	/* Module/library.scm 123 */
					return BFALSE;
				}
			else
				{	/* Module/library.scm 123 */
					BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_modulez00_24,
						BGl_za2withzd2keyza2zd2zzmodule_libraryz00, BTRUE);
					return (BGl_za2withzd2libraryzd2modulesza2z00zzmodule_libraryz00 =
						MAKE_PAIR(BgL_modulez00_24,
							BGl_za2withzd2libraryzd2modulesza2z00zzmodule_libraryz00),
						BUNSPEC);
				}
		}
	}



/* _with-library-module! */
	obj_t BGl__withzd2libraryzd2modulez12z12zzmodule_libraryz00(obj_t
		BgL_envz00_844, obj_t BgL_modulez00_845)
	{
		AN_OBJECT;
		{	/* Module/library.scm 122 */
			return
				BGl_withzd2libraryzd2modulez12z12zzmodule_libraryz00(BgL_modulez00_845);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_libraryz00()
	{
		AN_OBJECT;
		{	/* Module/library.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_libraryz00()
	{
		AN_OBJECT;
		{	/* Module/library.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_libraryz00()
	{
		AN_OBJECT;
		{	/* Module/library.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2562z00zzmodule_libraryz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string2562z00zzmodule_libraryz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string2562z00zzmodule_libraryz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string2562z00zzmodule_libraryz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string2562z00zzmodule_libraryz00));
			BGl_modulezd2initializa7ationz75zzmodule_impusez00(((long) 468691571),
				BSTRING_TO_STRING(BGl_string2562z00zzmodule_libraryz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string2562z00zzmodule_libraryz00));
			return
				BGl_modulezd2initializa7ationz75zzbdb_settingz00(((long) 443437044),
				BSTRING_TO_STRING(BGl_string2562z00zzmodule_libraryz00));
		}
	}

#ifdef __cplusplus
}
#endif
