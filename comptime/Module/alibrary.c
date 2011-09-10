/*===========================================================================*/
/*   (Module/alibrary.scm)                                                   */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/alibrary.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_ccompz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_producerz00;
		obj_t BgL_consumerz00;
		obj_t BgL_finaliza7erza7;
	}               *BgL_ccompz00_bglt;

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


	BGL_EXPORTED_DECL obj_t BGl_getzd2alibraryzd2initsz00zzmodule_alibraryz00();
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_alibraryz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzmodule_alibraryz00();
	BGL_IMPORT obj_t
		BGl_deletezd2duplicateszd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32260ze3z83zzmodule_alibraryz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl_zc3anonymousza32261ze3z83zzmodule_alibraryz00(obj_t);
	BGL_IMPORT obj_t BGl_libraryzd2infozd2zz__libraryz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_za2additionalzd2heapzd2namesza2z00zzengine_paramz00;
	static obj_t BGl_cnstzd2initzd2zzmodule_alibraryz00();
	static obj_t BGl__usezd2libraryz12zc0zzmodule_alibraryz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_alibraryz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32287ze3z83zzmodule_alibraryz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_usezd2libraryz12zc0zzmodule_alibraryz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_filterzd2mapzd2zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	static obj_t BGl__makezd2alibraryzd2compilerz00zzmodule_alibraryz00(obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2alibraryzd2compilerz00zzmodule_alibraryz00();
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzmodule_alibraryz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_setrcz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__libraryz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzmodule_alibraryz00();
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	static obj_t BGl_alibraryzd2producerzd2zzmodule_alibraryz00(obj_t);
	extern obj_t BGl_za2additionalzd2bigloozd2librariesza2z00zzengine_paramz00;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl__alibraryzd2producerzd2zzmodule_alibraryz00(obj_t, obj_t);
	extern obj_t BGl_setupzd2libraryzd2valuesz00zzinit_setrcz00(obj_t);
	extern BgL_ccompz00_bglt BGl_makezd2ccompzd2zzmodule_modulez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__getzd2alibraryzd2initsz00zzmodule_alibraryz00(obj_t);
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_alibraryz00();
	BGL_IMPORT obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzmodule_alibraryz00();
	static obj_t __cnst[6];


	   
		 
		DEFINE_STRING(BGl_string2468z00zzmodule_alibraryz00,
		BgL_bgl_string2468za700za7za7m2492za7, "Illegal prototype", 17);
	      DEFINE_STRING(BGl_string2470z00zzmodule_alibraryz00,
		BgL_bgl_string2470za700za7za7m2493za7, "Illegal `library' clause", 24);
	      DEFINE_STRING(BGl_string2469z00zzmodule_alibraryz00,
		BgL_bgl_string2469za700za7za7m2494za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string2472z00zzmodule_alibraryz00,
		BgL_bgl_string2472za700za7za7m2495za7, "~a()", 4);
	      DEFINE_STRING(BGl_string2473z00zzmodule_alibraryz00,
		BgL_bgl_string2473za700za7za7m2496za7, "-", 1);
	      DEFINE_STRING(BGl_string2474z00zzmodule_alibraryz00,
		BgL_bgl_string2474za700za7za7m2497za7, "module_alibrary", 15);
	      DEFINE_STRING(BGl_string2475z00zzmodule_alibraryz00,
		BgL_bgl_string2475za700za7za7m2498za7,
		"module-initialization pragma begin void library now ", 52);
	BGL_IMPORT obj_t BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2alibraryzd2initszd2envzd2zzmodule_alibraryz00,
		BgL_bgl__getza7d2alibraryza72499z00,
		BGl__getzd2alibraryzd2initsz00zzmodule_alibraryz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2alibraryzd2compilerzd2envzd2zzmodule_alibraryz00,
		BgL_bgl__makeza7d2alibrary2500za7,
		BGl__makezd2alibraryzd2compilerz00zzmodule_alibraryz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_usezd2libraryz12zd2envz12zzmodule_alibraryz00,
		BgL_bgl__useza7d2libraryza712501z00,
		BGl__usezd2libraryz12zc0zzmodule_alibraryz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_alibraryzd2producerzd2envz00zzmodule_alibraryz00,
		BgL_bgl__alibraryza7d2prod2502za7,
		BGl__alibraryzd2producerzd2zzmodule_alibraryz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2466z00zzmodule_alibraryz00,
		BgL_bgl_za7c3anonymousza7a322503z00,
		BGl_zc3anonymousza32261ze3z83zzmodule_alibraryz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2467z00zzmodule_alibraryz00,
		BgL_bgl_za7c3anonymousza7a322504z00,
		BGl_zc3anonymousza32260ze3z83zzmodule_alibraryz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2471z00zzmodule_alibraryz00,
		BgL_bgl_za7c3anonymousza7a322505z00,
		BGl_zc3anonymousza32287ze3z83zzmodule_alibraryz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzmodule_alibraryz00(long
		BgL_checksumz00_829, char *BgL_fromz00_830)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_alibraryz00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_alibraryz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzmodule_alibraryz00();
					BGl_cnstzd2initzd2zzmodule_alibraryz00();
					BGl_importedzd2moduleszd2initz00zzmodule_alibraryz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_alibraryz00()
	{
		AN_OBJECT;
		{	/* Module/alibrary.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_alibrary");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"module_alibrary");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"module_alibrary");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"module_alibrary");
			BGl_modulezd2initializa7ationz75zz__libraryz00(((long) 0),
				"module_alibrary");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"module_alibrary");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"module_alibrary");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"module_alibrary");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"module_alibrary");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_alibraryz00()
	{
		AN_OBJECT;
		{	/* Module/alibrary.scm 15 */
			{	/* Module/alibrary.scm 15 */
				obj_t BgL_cportz00_819;

				BgL_cportz00_819 =
					bgl_open_input_string(BGl_string2475z00zzmodule_alibraryz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_820;

					BgL_iz00_820 = ((long) 5);
				BgL_loopz00_821:
					if ((BgL_iz00_820 == ((long) -1)))
						{	/* Module/alibrary.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/alibrary.scm 15 */
							{	/* Module/alibrary.scm 15 */
								obj_t BgL_arg2491z00_823;

								{	/* Module/alibrary.scm 15 */

									{	/* Module/alibrary.scm 15 */
										obj_t BgL_locationz00_825;

										BgL_locationz00_825 = BBOOL(((bool_t) 0));
										{	/* Module/alibrary.scm 15 */

											BgL_arg2491z00_823 =
												BGl_readz00zz__readerz00(BgL_cportz00_819,
												BgL_locationz00_825);
										}
									}
								}
								{	/* Module/alibrary.scm 15 */
									int BgL_auxz00_852;

									BgL_auxz00_852 = (int) (BgL_iz00_820);
									CNST_TABLE_SET(BgL_auxz00_852, BgL_arg2491z00_823);
							}}
							{	/* Module/alibrary.scm 15 */
								int BgL_auxz00_826;

								BgL_auxz00_826 = (int) ((BgL_iz00_820 - ((long) 1)));
								{
									long BgL_iz00_857;

									BgL_iz00_857 = (long) (BgL_auxz00_826);
									BgL_iz00_820 = BgL_iz00_857;
									goto BgL_loopz00_821;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmodule_alibraryz00()
	{
		AN_OBJECT;
		{	/* Module/alibrary.scm 15 */
			return BUNSPEC;
		}
	}



/* use-library! */
	BGL_EXPORTED_DEF obj_t BGl_usezd2libraryz12zc0zzmodule_alibraryz00(obj_t
		BgL_libraryz00_73, obj_t BgL_modez00_74)
	{
		AN_OBJECT;
		{	/* Module/alibrary.scm 35 */
			if (CBOOL(BGl_memberz00zz__r4_pairs_and_lists_6_3z00(BgL_libraryz00_73,
						BGl_za2additionalzd2bigloozd2librariesza2z00zzengine_paramz00)))
				{	/* Module/alibrary.scm 36 */
					return BFALSE;
				}
			else
				{	/* Module/alibrary.scm 36 */
					BGl_za2additionalzd2bigloozd2librariesza2z00zzengine_paramz00 =
						MAKE_PAIR(BgL_libraryz00_73,
						BGl_za2additionalzd2bigloozd2librariesza2z00zzengine_paramz00);
					{	/* Module/alibrary.scm 40 */
						obj_t BgL_heapzd2namezd2_563;

						{	/* Module/alibrary.scm 40 */
							obj_t BgL_res2463z00_768;

							{	/* Module/alibrary.scm 40 */
								obj_t BgL_arg2063z00_767;

								BgL_arg2063z00_767 = SYMBOL_TO_STRING(BgL_libraryz00_73);
								BgL_res2463z00_768 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2063z00_767);
							}
							BgL_heapzd2namezd2_563 = BgL_res2463z00_768;
						}
						if ((BgL_modez00_74 == CNST_TABLE_REF(((long) 0))))
							{	/* Module/alibrary.scm 46 */
								BGl_setupzd2libraryzd2valuesz00zzinit_setrcz00
									(BgL_libraryz00_73);
							}
						else
							{	/* Module/alibrary.scm 46 */
								BFALSE;
							}
						BGl_za2additionalzd2heapzd2namesza2z00zzengine_paramz00 =
							MAKE_PAIR(BgL_heapzd2namezd2_563,
							BGl_za2additionalzd2heapzd2namesza2z00zzengine_paramz00);
						return BgL_libraryz00_73;
					}
				}
		}
	}



/* _use-library! */
	obj_t BGl__usezd2libraryz12zc0zzmodule_alibraryz00(obj_t BgL_envz00_798,
		obj_t BgL_libraryz00_799, obj_t BgL_modez00_800)
	{
		AN_OBJECT;
		{	/* Module/alibrary.scm 35 */
			return
				BGl_usezd2libraryz12zc0zzmodule_alibraryz00(BgL_libraryz00_799,
				BgL_modez00_800);
		}
	}



/* make-alibrary-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2alibraryzd2compilerz00zzmodule_alibraryz00()
	{
		AN_OBJECT;
		{	/* Module/alibrary.scm 54 */
			{	/* Module/alibrary.scm 56 */
				obj_t BgL_arg2252z00_565;

				BgL_arg2252z00_565 = CNST_TABLE_REF(((long) 1));
				return
					(obj_t) (BGl_makezd2ccompzd2zzmodule_modulez00(BgL_arg2252z00_565,
						BGl_alibraryzd2producerzd2envz00zzmodule_alibraryz00,
						BGl_proc2467z00zzmodule_alibraryz00,
						BGl_proc2466z00zzmodule_alibraryz00));
			}
		}
	}



/* _make-alibrary-compiler */
	obj_t BGl__makezd2alibraryzd2compilerz00zzmodule_alibraryz00(obj_t
		BgL_envz00_803)
	{
		AN_OBJECT;
		{	/* Module/alibrary.scm 54 */
			return BGl_makezd2alibraryzd2compilerz00zzmodule_alibraryz00();
		}
	}



/* <anonymous:2261> */
	obj_t BGl_zc3anonymousza32261ze3z83zzmodule_alibraryz00(obj_t BgL_envz00_804)
	{
		AN_OBJECT;
		{	/* Module/module.scm 54 */
			{

				return CNST_TABLE_REF(((long) 2));
		}}
	}



/* <anonymous:2260> */
	obj_t BGl_zc3anonymousza32260ze3z83zzmodule_alibraryz00(obj_t BgL_envz00_805,
		obj_t BgL_mz00_806, obj_t BgL_cz00_807)
	{
		AN_OBJECT;
		{	/* Module/module.scm 52 */
			return BNIL;
		}
	}



/* alibrary-producer */
	obj_t BGl_alibraryzd2producerzd2zzmodule_alibraryz00(obj_t BgL_clausez00_75)
	{
		AN_OBJECT;
		{	/* Module/alibrary.scm 62 */
			{
				obj_t BgL_protosz00_574;

				if (PAIRP(BgL_clausez00_75))
					{	/* Module/alibrary.scm 63 */
						BgL_protosz00_574 = CDR(BgL_clausez00_75);
						{
							obj_t BgL_l2201z00_581;

							BgL_l2201z00_581 = BgL_protosz00_574;
						BgL_zc3anonymousza32268ze3z83_582:
							if (PAIRP(BgL_l2201z00_581))
								{	/* Module/alibrary.scm 65 */
									{	/* Module/alibrary.scm 66 */
										obj_t BgL_xz00_584;

										BgL_xz00_584 = CAR(BgL_l2201z00_581);
										if (SYMBOLP(BgL_xz00_584))
											{	/* Module/alibrary.scm 66 */
												BGl_usezd2libraryz12zc0zzmodule_alibraryz00
													(BgL_xz00_584, CNST_TABLE_REF(((long) 0)));
											}
										else
											{	/* Module/alibrary.scm 66 */
												BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 1)),
													BGl_string2468z00zzmodule_alibraryz00, BgL_xz00_584);
									}}
									{
										obj_t BgL_l2201z00_887;

										BgL_l2201z00_887 = CDR(BgL_l2201z00_581);
										BgL_l2201z00_581 = BgL_l2201z00_887;
										goto BgL_zc3anonymousza32268ze3z83_582;
									}
								}
							else
								{	/* Module/alibrary.scm 65 */
									((bool_t) 1);
								}
						}
						return BNIL;
					}
				else
					{	/* Module/alibrary.scm 63 */
						{	/* Module/alibrary.scm 72 */
							obj_t BgL_list2275z00_588;

							BgL_list2275z00_588 = MAKE_PAIR(BNIL, BNIL);
							return
								BGl_userzd2errorzd2zztools_errorz00
								(BGl_string2469z00zzmodule_alibraryz00,
								BGl_string2470z00zzmodule_alibraryz00, BgL_clausez00_75,
								BgL_list2275z00_588);
						}
					}
			}
		}
	}



/* _alibrary-producer */
	obj_t BGl__alibraryzd2producerzd2zzmodule_alibraryz00(obj_t BgL_envz00_808,
		obj_t BgL_clausez00_809)
	{
		AN_OBJECT;
		{	/* Module/alibrary.scm 62 */
			return BGl_alibraryzd2producerzd2zzmodule_alibraryz00(BgL_clausez00_809);
		}
	}



/* get-alibrary-inits */
	BGL_EXPORTED_DEF obj_t BGl_getzd2alibraryzd2initsz00zzmodule_alibraryz00()
	{
		AN_OBJECT;
		{	/* Module/alibrary.scm 77 */
			{	/* Module/alibrary.scm 78 */
				obj_t BgL_arg2285z00_590;

				{	/* Module/alibrary.scm 96 */
					obj_t BgL_g2662z00_630;

					BgL_g2662z00_630 =
						BGl_za2additionalzd2bigloozd2librariesza2z00zzengine_paramz00;
					{	/* Module/alibrary.scm 96 */

						BgL_arg2285z00_590 =
							BGl_deletezd2duplicateszd2zz__r4_pairs_and_lists_6_3z00
							(BgL_g2662z00_630,
							BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);
					}
				}
				{	/* Module/alibrary.scm 78 */
					obj_t BgL_list2286z00_591;

					BgL_list2286z00_591 = MAKE_PAIR(BgL_arg2285z00_590, BNIL);
					return
						BGl_filterzd2mapzd2zz__r4_control_features_6_9z00
						(BGl_proc2471z00zzmodule_alibraryz00, BgL_list2286z00_591);
				}
			}
		}
	}



/* _get-alibrary-inits */
	obj_t BGl__getzd2alibraryzd2initsz00zzmodule_alibraryz00(obj_t BgL_envz00_811)
	{
		AN_OBJECT;
		{	/* Module/alibrary.scm 77 */
			return BGl_getzd2alibraryzd2initsz00zzmodule_alibraryz00();
		}
	}



/* <anonymous:2287> */
	obj_t BGl_zc3anonymousza32287ze3z83zzmodule_alibraryz00(obj_t BgL_envz00_812,
		obj_t BgL_libz00_813)
	{
		AN_OBJECT;
		{	/* Module/alibrary.scm 78 */
			{
				obj_t BgL_libz00_592;

				BgL_libz00_592 = BgL_libz00_813;
				{	/* Module/alibrary.scm 79 */
					obj_t BgL_infoz00_594;

					BgL_infoz00_594 = BGl_libraryzd2infozd2zz__libraryz00(BgL_libz00_592);
					if (CBOOL(BgL_infoz00_594))
						{	/* Module/alibrary.scm 81 */
							obj_t BgL_arg2290z00_595;

							obj_t BgL_arg2295z00_596;

							BgL_arg2290z00_595 = CNST_TABLE_REF(((long) 3));
							{	/* Module/alibrary.scm 82 */
								obj_t BgL_arg2297z00_597;

								obj_t BgL_arg2305z00_598;

								obj_t BgL_arg2312z00_599;

								{	/* Module/alibrary.scm 82 */
									bool_t BgL_testz00_901;

									{	/* Module/alibrary.scm 82 */
										bool_t BgL_testz00_902;

										{	/* Module/alibrary.scm 82 */
											obj_t BgL_sz00_776;

											BgL_sz00_776 = BgL_infoz00_594;
											BgL_testz00_902 =
												CBOOL(STRUCT_REF(BgL_sz00_776, (int) (((long) 3))));
										}
										if (BgL_testz00_902)
											{	/* Module/alibrary.scm 83 */
												obj_t BgL_arg2377z00_614;

												BgL_arg2377z00_614 =
													BGl_thezd2backendzd2zzbackend_backendz00();
												{
													BgL_backendz00_bglt BgL_auxz00_907;

													BgL_auxz00_907 =
														(BgL_backendz00_bglt) (BgL_arg2377z00_614);
													BgL_testz00_901 =
														(((BgL_backendz00_bglt) CREF(BgL_auxz00_907))->
														BgL_pragmazd2supportzd2);
												}
											}
										else
											{	/* Module/alibrary.scm 82 */
												BgL_testz00_901 = ((bool_t) 0);
											}
									}
									if (BgL_testz00_901)
										{	/* Module/alibrary.scm 84 */
											obj_t BgL_arg2338z00_605;

											obj_t BgL_arg2344z00_606;

											BgL_arg2338z00_605 = CNST_TABLE_REF(((long) 4));
											{	/* Module/alibrary.scm 84 */
												obj_t BgL_arg2351z00_607;

												{	/* Module/alibrary.scm 84 */
													obj_t BgL_arg2370z00_611;

													BgL_arg2370z00_611 =
														STRUCT_REF(BgL_infoz00_594, (int) (((long) 3)));
													{	/* Module/alibrary.scm 84 */
														obj_t BgL_list2371z00_612;

														BgL_list2371z00_612 =
															MAKE_PAIR(BgL_arg2370z00_611, BNIL);
														BgL_arg2351z00_607 =
															BGl_formatz00zz__r4_output_6_10_3z00
															(BGl_string2472z00zzmodule_alibraryz00,
															BgL_list2371z00_612);
												}}
												{	/* Module/alibrary.scm 84 */
													obj_t BgL_list2358z00_609;

													BgL_list2358z00_609 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2344z00_606 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2351z00_607, BgL_list2358z00_609);
											}}
											BgL_arg2297z00_597 =
												MAKE_PAIR(BgL_arg2338z00_605, BgL_arg2344z00_606);
										}
									else
										{	/* Module/alibrary.scm 82 */
											BgL_arg2297z00_597 = BFALSE;
										}
								}
								{	/* Module/alibrary.scm 86 */
									bool_t BgL_testz00_918;

									{	/* Module/alibrary.scm 86 */
										obj_t BgL_sz00_783;

										BgL_sz00_783 = BgL_infoz00_594;
										BgL_testz00_918 =
											CBOOL(STRUCT_REF(BgL_sz00_783, (int) (((long) 5))));
									}
									if (BgL_testz00_918)
										{	/* Module/alibrary.scm 87 */
											obj_t BgL_vz00_616;

											{	/* Module/alibrary.scm 87 */
												obj_t BgL_arg2403z00_624;

												obj_t BgL_arg2409z00_625;

												BgL_arg2403z00_624 = CNST_TABLE_REF(((long) 5));
												BgL_arg2409z00_625 =
													STRUCT_REF(BgL_infoz00_594, (int) (((long) 5)));
												{	/* Module/alibrary.scm 87 */
													obj_t BgL_list2410z00_626;

													BgL_list2410z00_626 =
														MAKE_PAIR(BgL_arg2409z00_625, BNIL);
													BgL_vz00_616 =
														BGl_findzd2globalzd2zzast_envz00(BgL_arg2403z00_624,
														BgL_list2410z00_626);
											}}
											if (BGl_iszd2azf3z21zz__objectz00(BgL_vz00_616,
													BGl_globalz00zzast_varz00))
												{	/* Module/alibrary.scm 90 */
													obj_t BgL_fz00_618;

													{	/* Module/alibrary.scm 90 */
														bool_t BgL_testz00_929;

														{	/* Module/alibrary.scm 90 */
															obj_t BgL_auxz00_930;

															BgL_auxz00_930 =
																CAR(BGl_za2srczd2filesza2zd2zzengine_paramz00);
															BgL_testz00_929 = STRINGP(BgL_auxz00_930);
														}
														if (BgL_testz00_929)
															{	/* Module/alibrary.scm 90 */
																BgL_fz00_618 =
																	CAR
																	(BGl_za2srczd2filesza2zd2zzengine_paramz00);
															}
														else
															{	/* Module/alibrary.scm 90 */
																BgL_fz00_618 =
																	BGl_string2473z00zzmodule_alibraryz00;
															}
													}
													{	/* Module/alibrary.scm 93 */
														obj_t BgL_arg2383z00_619;

														{	/* Module/alibrary.scm 93 */
															obj_t BgL_list2384z00_620;

															{	/* Module/alibrary.scm 93 */
																obj_t BgL_arg2390z00_621;

																BgL_arg2390z00_621 = MAKE_PAIR(BNIL, BNIL);
																BgL_list2384z00_620 =
																	MAKE_PAIR(BgL_fz00_618, BgL_arg2390z00_621);
															}
															BgL_arg2383z00_619 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT
																(((long) 0)), BgL_list2384z00_620);
														}
														BgL_arg2305z00_598 =
															MAKE_PAIR(BgL_vz00_616, BgL_arg2383z00_619);
												}}
											else
												{	/* Module/alibrary.scm 89 */
													BgL_arg2305z00_598 = BFALSE;
												}
										}
									else
										{	/* Module/alibrary.scm 86 */
											BgL_arg2305z00_598 = BFALSE;
										}
								}
								{	/* Module/alibrary.scm 94 */
									bool_t BgL_testz00_939;

									{	/* Module/alibrary.scm 94 */
										obj_t BgL_sz00_793;

										BgL_sz00_793 = BgL_infoz00_594;
										BgL_testz00_939 =
											CBOOL(STRUCT_REF(BgL_sz00_793, (int) (((long) 9))));
									}
									if (BgL_testz00_939)
										{	/* Module/alibrary.scm 94 */
											BgL_arg2312z00_599 =
												MAKE_PAIR(STRUCT_REF(BgL_infoz00_594,
													(int) (((long) 9))), BNIL);
										}
									else
										{	/* Module/alibrary.scm 94 */
											BgL_arg2312z00_599 = BFALSE;
										}
								}
								{	/* Module/alibrary.scm 81 */
									obj_t BgL_list2319z00_601;

									{	/* Module/alibrary.scm 81 */
										obj_t BgL_arg2325z00_602;

										{	/* Module/alibrary.scm 81 */
											obj_t BgL_arg2331z00_603;

											BgL_arg2331z00_603 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg2325z00_602 =
												MAKE_PAIR(BgL_arg2312z00_599, BgL_arg2331z00_603);
										}
										BgL_list2319z00_601 =
											MAKE_PAIR(BgL_arg2305z00_598, BgL_arg2325z00_602);
									}
									BgL_arg2295z00_596 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg2297z00_597, BgL_list2319z00_601);
								}
							}
							return MAKE_PAIR(BgL_arg2290z00_595, BgL_arg2295z00_596);
						}
					else
						{	/* Module/alibrary.scm 80 */
							return BFALSE;
						}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_alibraryz00()
	{
		AN_OBJECT;
		{	/* Module/alibrary.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_alibraryz00()
	{
		AN_OBJECT;
		{	/* Module/alibrary.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_alibraryz00()
	{
		AN_OBJECT;
		{	/* Module/alibrary.scm 15 */
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string2474z00zzmodule_alibraryz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string2474z00zzmodule_alibraryz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string2474z00zzmodule_alibraryz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string2474z00zzmodule_alibraryz00));
			BGl_modulezd2initializa7ationz75zzinit_setrcz00(((long) 385369337),
				BSTRING_TO_STRING(BGl_string2474z00zzmodule_alibraryz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string2474z00zzmodule_alibraryz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2474z00zzmodule_alibraryz00));
			BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(((long) 237711330),
				BSTRING_TO_STRING(BGl_string2474z00zzmodule_alibraryz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string2474z00zzmodule_alibraryz00));
			return
				BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string2474z00zzmodule_alibraryz00));
		}
	}

#ifdef __cplusplus
}
#endif
