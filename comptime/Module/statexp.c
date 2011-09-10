/*===========================================================================*/
/*   (Module/statexp.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/statexp.scm)*/
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


	extern obj_t BGl_classzd2finaliza7erz75zzmodule_classz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_statexpz00 = BUNSPEC;
	static obj_t BGl__exportzd2consumerzd2zzmodule_statexpz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32532ze3z83zzmodule_statexpz00(obj_t);
	BGL_IMPORT obj_t BGl_makezd2promisezd2zz__r4_control_features_6_9z00(obj_t);
	static obj_t BGl_genericzd2initzd2zzmodule_statexpz00();
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_IMPORT obj_t BGl_evalz00zz__evalz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2staticzd2compilerz00zzmodule_statexpz00();
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	extern obj_t BGl_declarezd2widezd2classz12z12zzmodule_classz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_zc3anonymousza32551ze3z83zzmodule_statexpz00(obj_t);
	static obj_t BGl__makezd2staticzd2compilerz00zzmodule_statexpz00(obj_t);
	static obj_t BGl_za2localzd2classesza2zd2zzmodule_statexpz00 = BUNSPEC;
	static obj_t BGl_cnstzd2initzd2zzmodule_statexpz00();
	extern obj_t BGl_za2modulezd2clauseza2zd2zzmodule_modulez00;
	static obj_t BGl_zc3anonymousza32558ze3z83zzmodule_statexpz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_statexpz00();
	static obj_t BGl_zc3anonymousza32563ze3z83zzmodule_statexpz00(obj_t);
	static obj_t BGl__statexpzd2producerzd2zzmodule_statexpz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32432ze3z83zzmodule_statexpz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32433ze3z83zzmodule_statexpz00(obj_t);
	BGL_IMPORT obj_t BGl_defaultzd2environmentzd2zz__evalz00();
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_tozd2bezd2macroz12z12zzexpand_expanderz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzmodule_statexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_findzd2gdefszd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_expanderz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_prototypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzmodule_statexpz00();
	extern BgL_globalz00_bglt
		BGl_declarezd2globalzd2svarz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_statexpzd2finaliza7erz75zzmodule_statexpz00();
	static obj_t BGl_statexpzd2parserzd2zzmodule_statexpz00(obj_t, obj_t);
	extern obj_t BGl_parsezd2prototypezd2zzmodule_prototypez00(obj_t);
	extern obj_t BGl_declarezd2classz12zc0zzmodule_classz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2exportzd2compilerz00zzmodule_statexpz00();
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t
		BGl_tozd2bezd2definez12z12zzast_findzd2gdefszd2(BgL_globalz00_bglt);
	static obj_t BGl__makezd2exportzd2compilerz00zzmodule_statexpz00(obj_t);
	extern BgL_globalz00_bglt
		BGl_declarezd2globalzd2sfunz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__statexpzd2finaliza7erz75zzmodule_statexpz00(obj_t);
	extern obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	extern BgL_ccompz00_bglt BGl_makezd2ccompzd2zzmodule_modulez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_statexpzd2producerzd2zzmodule_statexpz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_exportzd2consumerzd2zzmodule_statexpz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_statexpz00();
	static obj_t BGl_methodzd2initzd2zzmodule_statexpz00();
	static obj_t __cnst[15];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_statexpzd2finaliza7erzd2envza7zzmodule_statexpz00,
		BgL_bgl__statexpza7d2final2674za7,
		BGl__statexpzd2finaliza7erz75zzmodule_statexpz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_statexpzd2producerzd2envz00zzmodule_statexpz00,
		BgL_bgl__statexpza7d2produ2675za7,
		BGl__statexpzd2producerzd2zzmodule_statexpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2663z00zzmodule_statexpz00,
		BgL_bgl_za7c3anonymousza7a322676z00,
		BGl_zc3anonymousza32433ze3z83zzmodule_statexpz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2664z00zzmodule_statexpz00,
		BgL_bgl_za7c3anonymousza7a322677z00,
		BGl_zc3anonymousza32432ze3z83zzmodule_statexpz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2665z00zzmodule_statexpz00,
		BgL_bgl_string2665za700za7za7m2678za7, "Illegal `", 9);
	      DEFINE_STRING(BGl_string2666z00zzmodule_statexpz00,
		BgL_bgl_string2666za700za7za7m2679za7, "' clause", 8);
	      DEFINE_STRING(BGl_string2667z00zzmodule_statexpz00,
		BgL_bgl_string2667za700za7za7m2680za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string2668z00zzmodule_statexpz00,
		BgL_bgl_string2668za700za7za7m2681za7, "Illegal `export' clause", 23);
	      DEFINE_STRING(BGl_string2670z00zzmodule_statexpz00,
		BgL_bgl_string2670za700za7za7m2682za7, "module_statexp", 14);
	      DEFINE_STRING(BGl_string2669z00zzmodule_statexpz00,
		BgL_bgl_string2669za700za7za7m2683za7, "Illegal prototype", 17);
	      DEFINE_STRING(BGl_string2671z00zzmodule_statexpz00,
		BgL_bgl_string2671za700za7za7m2684za7,
		"expander syntax macro define-macro wide-class final-class abstract-class class svar sgfun sifun sfun export void static ",
		120);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_exportzd2consumerzd2envz00zzmodule_statexpz00,
		BgL_bgl__exportza7d2consum2685za7,
		BGl__exportzd2consumerzd2zzmodule_statexpz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2exportzd2compilerzd2envzd2zzmodule_statexpz00,
		BgL_bgl__makeza7d2exportza7d2686z00,
		BGl__makezd2exportzd2compilerz00zzmodule_statexpz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2staticzd2compilerzd2envzd2zzmodule_statexpz00,
		BgL_bgl__makeza7d2staticza7d2687z00,
		BGl__makezd2staticzd2compilerz00zzmodule_statexpz00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzmodule_statexpz00(long
		BgL_checksumz00_838, char *BgL_fromz00_839)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_statexpz00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_statexpz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzmodule_statexpz00();
					BGl_cnstzd2initzd2zzmodule_statexpz00();
					BGl_importedzd2moduleszd2initz00zzmodule_statexpz00();
					BGl_toplevelzd2initzd2zzmodule_statexpz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_statexpz00()
	{
		AN_OBJECT;
		{	/* Module/statexp.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"module_statexp");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"module_statexp");
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "module_statexp");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_statexp");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"module_statexp");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_statexpz00()
	{
		AN_OBJECT;
		{	/* Module/statexp.scm 15 */
			{	/* Module/statexp.scm 15 */
				obj_t BgL_cportz00_828;

				BgL_cportz00_828 =
					bgl_open_input_string(BGl_string2671z00zzmodule_statexpz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_829;

					BgL_iz00_829 = ((long) 14);
				BgL_loopz00_830:
					if ((BgL_iz00_829 == ((long) -1)))
						{	/* Module/statexp.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/statexp.scm 15 */
							{	/* Module/statexp.scm 15 */
								obj_t BgL_arg2673z00_832;

								{	/* Module/statexp.scm 15 */

									{	/* Module/statexp.scm 15 */
										obj_t BgL_locationz00_834;

										BgL_locationz00_834 = BBOOL(((bool_t) 0));
										{	/* Module/statexp.scm 15 */

											BgL_arg2673z00_832 =
												BGl_readz00zz__readerz00(BgL_cportz00_828,
												BgL_locationz00_834);
										}
									}
								}
								{	/* Module/statexp.scm 15 */
									int BgL_auxz00_858;

									BgL_auxz00_858 = (int) (BgL_iz00_829);
									CNST_TABLE_SET(BgL_auxz00_858, BgL_arg2673z00_832);
							}}
							{	/* Module/statexp.scm 15 */
								int BgL_auxz00_835;

								BgL_auxz00_835 = (int) ((BgL_iz00_829 - ((long) 1)));
								{
									long BgL_iz00_863;

									BgL_iz00_863 = (long) (BgL_auxz00_835);
									BgL_iz00_829 = BgL_iz00_863;
									goto BgL_loopz00_830;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmodule_statexpz00()
	{
		AN_OBJECT;
		{	/* Module/statexp.scm 15 */
			return (BGl_za2localzd2classesza2zd2zzmodule_statexpz00 = BNIL, BUNSPEC);
		}
	}



/* make-static-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2staticzd2compilerz00zzmodule_statexpz00()
	{
		AN_OBJECT;
		{	/* Module/statexp.scm 36 */
			{	/* Module/statexp.scm 38 */
				obj_t BgL_arg2429z00_470;

				BgL_arg2429z00_470 = CNST_TABLE_REF(((long) 0));
				return
					(obj_t) (BGl_makezd2ccompzd2zzmodule_modulez00(BgL_arg2429z00_470,
						BGl_statexpzd2producerzd2envz00zzmodule_statexpz00,
						BGl_proc2664z00zzmodule_statexpz00,
						BGl_proc2663z00zzmodule_statexpz00));
			}
		}
	}



/* _make-static-compiler */
	obj_t BGl__makezd2staticzd2compilerz00zzmodule_statexpz00(obj_t
		BgL_envz00_795)
	{
		AN_OBJECT;
		{	/* Module/statexp.scm 36 */
			return BGl_makezd2staticzd2compilerz00zzmodule_statexpz00();
		}
	}



/* <anonymous:2433> */
	obj_t BGl_zc3anonymousza32433ze3z83zzmodule_statexpz00(obj_t BgL_envz00_796)
	{
		AN_OBJECT;
		{	/* Module/module.scm 54 */
			{

				return CNST_TABLE_REF(((long) 1));
		}}
	}



/* <anonymous:2432> */
	obj_t BGl_zc3anonymousza32432ze3z83zzmodule_statexpz00(obj_t BgL_envz00_797,
		obj_t BgL_mz00_798, obj_t BgL_cz00_799)
	{
		AN_OBJECT;
		{	/* Module/module.scm 52 */
			return BNIL;
		}
	}



/* make-export-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2exportzd2compilerz00zzmodule_statexpz00()
	{
		AN_OBJECT;
		{	/* Module/statexp.scm 44 */
			return
				(obj_t) (BGl_makezd2ccompzd2zzmodule_modulez00(CNST_TABLE_REF(((long)
							2)), BGl_statexpzd2producerzd2envz00zzmodule_statexpz00,
					BGl_exportzd2consumerzd2envz00zzmodule_statexpz00,
					BGl_statexpzd2finaliza7erzd2envza7zzmodule_statexpz00));
		}
	}



/* _make-export-compiler */
	obj_t BGl__makezd2exportzd2compilerz00zzmodule_statexpz00(obj_t
		BgL_envz00_802)
	{
		AN_OBJECT;
		{	/* Module/statexp.scm 44 */
			return BGl_makezd2exportzd2compilerz00zzmodule_statexpz00();
		}
	}



/* statexp-producer */
	obj_t BGl_statexpzd2producerzd2zzmodule_statexpz00(obj_t BgL_clausez00_23)
	{
		AN_OBJECT;
		{	/* Module/statexp.scm 54 */
			{	/* Module/statexp.scm 55 */
				obj_t BgL_modez00_479;

				BgL_modez00_479 = CAR(BgL_clausez00_23);
				{
					obj_t BgL_protosz00_480;

					if (PAIRP(BgL_clausez00_23))
						{	/* Module/statexp.scm 56 */
							BgL_protosz00_480 = CDR(BgL_clausez00_23);
							{
								obj_t BgL_l2381z00_487;

								BgL_l2381z00_487 = BgL_protosz00_480;
							BgL_zc3anonymousza32438ze3z83_488:
								if (PAIRP(BgL_l2381z00_487))
									{	/* Module/statexp.scm 58 */
										BGl_statexpzd2parserzd2zzmodule_statexpz00(CAR
											(BgL_l2381z00_487), BgL_modez00_479);
										{
											obj_t BgL_l2381z00_881;

											BgL_l2381z00_881 = CDR(BgL_l2381z00_487);
											BgL_l2381z00_487 = BgL_l2381z00_881;
											goto BgL_zc3anonymousza32438ze3z83_488;
										}
									}
								else
									{	/* Module/statexp.scm 58 */
										((bool_t) 1);
									}
							}
							return BNIL;
						}
					else
						{	/* Module/statexp.scm 56 */
							{	/* Module/statexp.scm 61 */
								obj_t BgL_arg2445z00_493;

								obj_t BgL_arg2451z00_495;

								BgL_arg2445z00_493 =
									BGl_findzd2locationzd2zztools_locationz00
									(BGl_za2modulezd2clauseza2zd2zzmodule_modulez00);
								{	/* Module/statexp.scm 63 */
									obj_t BgL_arg2459z00_499;

									{	/* Module/statexp.scm 65 */
										obj_t BgL_arg2461z00_501;

										{	/* Module/statexp.scm 65 */
											obj_t BgL_res2662z00_729;

											{	/* Module/statexp.scm 65 */
												obj_t BgL_symbolz00_727;

												BgL_symbolz00_727 = BgL_modez00_479;
												{	/* Module/statexp.scm 65 */
													obj_t BgL_arg2063z00_728;

													BgL_arg2063z00_728 =
														SYMBOL_TO_STRING(BgL_symbolz00_727);
													BgL_res2662z00_729 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg2063z00_728);
												}
											}
											BgL_arg2461z00_501 = BgL_res2662z00_729;
										}
										BgL_arg2459z00_499 =
											BGl_stringzd2downcasezd2zz__r4_strings_6_7z00
											(BgL_arg2461z00_501);
									}
									BgL_arg2451z00_495 =
										string_append_3(BGl_string2665z00zzmodule_statexpz00,
										BgL_arg2459z00_499, BGl_string2666z00zzmodule_statexpz00);
								}
								{	/* Module/statexp.scm 61 */
									obj_t BgL_list2453z00_497;

									BgL_list2453z00_497 = MAKE_PAIR(BNIL, BNIL);
									return
										BGl_userzd2errorzf2locationz20zztools_errorz00
										(BgL_arg2445z00_493, BGl_string2667z00zzmodule_statexpz00,
										BgL_arg2451z00_495, BgL_clausez00_23, BgL_list2453z00_497);
								}
							}
						}
				}
			}
		}
	}



/* _statexp-producer */
	obj_t BGl__statexpzd2producerzd2zzmodule_statexpz00(obj_t BgL_envz00_800,
		obj_t BgL_clausez00_801)
	{
		AN_OBJECT;
		{	/* Module/statexp.scm 54 */
			return BGl_statexpzd2producerzd2zzmodule_statexpz00(BgL_clausez00_801);
		}
	}



/* export-consumer */
	obj_t BGl_exportzd2consumerzd2zzmodule_statexpz00(obj_t BgL_modulez00_24,
		obj_t BgL_clausez00_25)
	{
		AN_OBJECT;
		{	/* Module/statexp.scm 73 */
			{

				if (PAIRP(BgL_clausez00_25))
					{	/* Module/statexp.scm 74 */
						return CDR(BgL_clausez00_25);
					}
				else
					{	/* Module/statexp.scm 74 */
						{	/* Module/statexp.scm 78 */
							obj_t BgL_arg2471z00_508;

							BgL_arg2471z00_508 =
								BGl_findzd2locationzd2zztools_locationz00
								(BGl_za2modulezd2clauseza2zd2zzmodule_modulez00);
							{	/* Module/statexp.scm 78 */
								obj_t BgL_list2478z00_512;

								BgL_list2478z00_512 = MAKE_PAIR(BNIL, BNIL);
								return
									BGl_userzd2errorzf2locationz20zztools_errorz00
									(BgL_arg2471z00_508, BGl_string2667z00zzmodule_statexpz00,
									BGl_string2668z00zzmodule_statexpz00, BgL_clausez00_25,
									BgL_list2478z00_512);
							}
						}
					}
			}
		}
	}



/* _export-consumer */
	obj_t BGl__exportzd2consumerzd2zzmodule_statexpz00(obj_t BgL_envz00_803,
		obj_t BgL_modulez00_804, obj_t BgL_clausez00_805)
	{
		AN_OBJECT;
		{	/* Module/statexp.scm 73 */
			return
				BGl_exportzd2consumerzd2zzmodule_statexpz00(BgL_modulez00_804,
				BgL_clausez00_805);
		}
	}



/* statexp-parser */
	obj_t BGl_statexpzd2parserzd2zzmodule_statexpz00(obj_t BgL_prototypez00_26,
		obj_t BgL_importz00_27)
	{
		AN_OBJECT;
		{	/* Module/statexp.scm 87 */
			{	/* Module/statexp.scm 88 */
				obj_t BgL_protoz00_513;

				BgL_protoz00_513 =
					BGl_parsezd2prototypezd2zzmodule_prototypez00(BgL_prototypez00_26);
				if (PAIRP(BgL_protoz00_513))
					{	/* Module/statexp.scm 95 */
						obj_t BgL_casezd2valuezd2_515;

						BgL_casezd2valuezd2_515 = CAR(BgL_protoz00_513);
						{	/* Module/statexp.scm 95 */
							bool_t BgL_testz00_903;

							{	/* Module/statexp.scm 95 */
								bool_t BgL__ortest_2379z00_558;

								BgL__ortest_2379z00_558 =
									(BgL_casezd2valuezd2_515 == CNST_TABLE_REF(((long) 3)));
								if (BgL__ortest_2379z00_558)
									{	/* Module/statexp.scm 95 */
										BgL_testz00_903 = BgL__ortest_2379z00_558;
									}
								else
									{	/* Module/statexp.scm 95 */
										bool_t BgL__ortest_2380z00_559;

										BgL__ortest_2380z00_559 =
											(BgL_casezd2valuezd2_515 == CNST_TABLE_REF(((long) 4)));
										if (BgL__ortest_2380z00_559)
											{	/* Module/statexp.scm 95 */
												BgL_testz00_903 = BgL__ortest_2380z00_559;
											}
										else
											{	/* Module/statexp.scm 95 */
												BgL_testz00_903 =
													(BgL_casezd2valuezd2_515 ==
													CNST_TABLE_REF(((long) 5)));
							}}}
							if (BgL_testz00_903)
								{	/* Module/statexp.scm 97 */
									BgL_globalz00_bglt BgL_arg2491z00_517;

									{	/* Module/statexp.scm 97 */
										obj_t BgL_arg2492z00_518;

										obj_t BgL_arg2493z00_519;

										BgL_arg2492z00_518 = CAR(CDR(BgL_protoz00_513));
										BgL_arg2493z00_519 = CAR(CDR(CDR(BgL_protoz00_513)));
										BgL_arg2491z00_517 =
											BGl_declarezd2globalzd2sfunz12z12zzast_glozd2declzd2
											(BgL_arg2492z00_518, BgL_arg2493z00_519,
											BGl_za2moduleza2z00zzmodule_modulez00, BgL_importz00_27,
											BgL_casezd2valuezd2_515, BgL_prototypez00_26, BFALSE);
									}
									return
										BGl_tozd2bezd2definez12z12zzast_findzd2gdefszd2
										(BgL_arg2491z00_517);
								}
							else
								{	/* Module/statexp.scm 95 */
									if ((BgL_casezd2valuezd2_515 == CNST_TABLE_REF(((long) 6))))
										{	/* Module/statexp.scm 105 */
											BgL_globalz00_bglt BgL_arg2505z00_522;

											{	/* Module/statexp.scm 105 */
												obj_t BgL_arg2523z00_523;

												BgL_arg2523z00_523 = CAR(CDR(BgL_protoz00_513));
												BgL_arg2505z00_522 =
													BGl_declarezd2globalzd2svarz12z12zzast_glozd2declzd2
													(BgL_arg2523z00_523,
													BGl_za2moduleza2z00zzmodule_modulez00,
													BgL_importz00_27, BgL_prototypez00_26, BFALSE);
											}
											return
												BGl_tozd2bezd2definez12z12zzast_findzd2gdefszd2
												(BgL_arg2505z00_522);
										}
									else
										{	/* Module/statexp.scm 95 */
											if (
												(BgL_casezd2valuezd2_515 == CNST_TABLE_REF(((long) 7))))
												{	/* Module/statexp.scm 111 */
													obj_t BgL_arg2529z00_525;

													{	/* Module/statexp.scm 111 */
														obj_t BgL_zc3anonymousza32532ze3z83_807;

														BgL_zc3anonymousza32532ze3z83_807 =
															make_fx_procedure
															(BGl_zc3anonymousza32532ze3z83zzmodule_statexpz00,
															(int) (((long) 0)), (int) (((long) 3)));
														PROCEDURE_SET(BgL_zc3anonymousza32532ze3z83_807,
															(int) (((long) 0)), BgL_protoz00_513);
														PROCEDURE_SET(BgL_zc3anonymousza32532ze3z83_807,
															(int) (((long) 1)), BgL_importz00_27);
														PROCEDURE_SET(BgL_zc3anonymousza32532ze3z83_807,
															(int) (((long) 2)), BgL_prototypez00_26);
														BgL_arg2529z00_525 =
															BGl_makezd2promisezd2zz__r4_control_features_6_9z00
															(BgL_zc3anonymousza32532ze3z83_807);
													}
													return
														(BGl_za2localzd2classesza2zd2zzmodule_statexpz00 =
														MAKE_PAIR(BgL_arg2529z00_525,
															BGl_za2localzd2classesza2zd2zzmodule_statexpz00),
														BUNSPEC);
												}
											else
												{	/* Module/statexp.scm 95 */
													if (
														(BgL_casezd2valuezd2_515 ==
															CNST_TABLE_REF(((long) 8))))
														{	/* Module/statexp.scm 119 */
															obj_t BgL_arg2544z00_531;

															{	/* Module/statexp.scm 119 */
																obj_t BgL_zc3anonymousza32551ze3z83_808;

																BgL_zc3anonymousza32551ze3z83_808 =
																	make_fx_procedure
																	(BGl_zc3anonymousza32551ze3z83zzmodule_statexpz00,
																	(int) (((long) 0)), (int) (((long) 3)));
																PROCEDURE_SET(BgL_zc3anonymousza32551ze3z83_808,
																	(int) (((long) 0)), BgL_protoz00_513);
																PROCEDURE_SET(BgL_zc3anonymousza32551ze3z83_808,
																	(int) (((long) 1)), BgL_importz00_27);
																PROCEDURE_SET(BgL_zc3anonymousza32551ze3z83_808,
																	(int) (((long) 2)), BgL_prototypez00_26);
																BgL_arg2544z00_531 =
																	BGl_makezd2promisezd2zz__r4_control_features_6_9z00
																	(BgL_zc3anonymousza32551ze3z83_808);
															}
															return
																(BGl_za2localzd2classesza2zd2zzmodule_statexpz00
																=
																MAKE_PAIR(BgL_arg2544z00_531,
																	BGl_za2localzd2classesza2zd2zzmodule_statexpz00),
																BUNSPEC);
														}
													else
														{	/* Module/statexp.scm 95 */
															if (
																(BgL_casezd2valuezd2_515 ==
																	CNST_TABLE_REF(((long) 9))))
																{	/* Module/statexp.scm 127 */
																	obj_t BgL_arg2556z00_537;

																	{	/* Module/statexp.scm 127 */
																		obj_t BgL_zc3anonymousza32558ze3z83_809;

																		BgL_zc3anonymousza32558ze3z83_809 =
																			make_fx_procedure
																			(BGl_zc3anonymousza32558ze3z83zzmodule_statexpz00,
																			(int) (((long) 0)), (int) (((long) 3)));
																		PROCEDURE_SET
																			(BgL_zc3anonymousza32558ze3z83_809,
																			(int) (((long) 0)), BgL_protoz00_513);
																		PROCEDURE_SET
																			(BgL_zc3anonymousza32558ze3z83_809,
																			(int) (((long) 1)), BgL_importz00_27);
																		PROCEDURE_SET
																			(BgL_zc3anonymousza32558ze3z83_809,
																			(int) (((long) 2)), BgL_prototypez00_26);
																		BgL_arg2556z00_537 =
																			BGl_makezd2promisezd2zz__r4_control_features_6_9z00
																			(BgL_zc3anonymousza32558ze3z83_809);
																	}
																	return
																		(BGl_za2localzd2classesza2zd2zzmodule_statexpz00
																		=
																		MAKE_PAIR(BgL_arg2556z00_537,
																			BGl_za2localzd2classesza2zd2zzmodule_statexpz00),
																		BUNSPEC);
																}
															else
																{	/* Module/statexp.scm 95 */
																	if (
																		(BgL_casezd2valuezd2_515 ==
																			CNST_TABLE_REF(((long) 10))))
																		{	/* Module/statexp.scm 135 */
																			obj_t BgL_arg2561z00_543;

																			{	/* Module/statexp.scm 135 */
																				obj_t BgL_zc3anonymousza32563ze3z83_810;

																				BgL_zc3anonymousza32563ze3z83_810 =
																					make_fx_procedure
																					(BGl_zc3anonymousza32563ze3z83zzmodule_statexpz00,
																					(int) (((long) 0)),
																					(int) (((long) 3)));
																				PROCEDURE_SET
																					(BgL_zc3anonymousza32563ze3z83_810,
																					(int) (((long) 0)), BgL_protoz00_513);
																				PROCEDURE_SET
																					(BgL_zc3anonymousza32563ze3z83_810,
																					(int) (((long) 1)), BgL_importz00_27);
																				PROCEDURE_SET
																					(BgL_zc3anonymousza32563ze3z83_810,
																					(int) (((long) 2)),
																					BgL_prototypez00_26);
																				BgL_arg2561z00_543 =
																					BGl_makezd2promisezd2zz__r4_control_features_6_9z00
																					(BgL_zc3anonymousza32563ze3z83_810);
																			}
																			return
																				(BGl_za2localzd2classesza2zd2zzmodule_statexpz00
																				=
																				MAKE_PAIR(BgL_arg2561z00_543,
																					BGl_za2localzd2classesza2zd2zzmodule_statexpz00),
																				BUNSPEC);
																		}
																	else
																		{	/* Module/statexp.scm 95 */
																			if (
																				(BgL_casezd2valuezd2_515 ==
																					CNST_TABLE_REF(((long) 11))))
																				{	/* Module/statexp.scm 141 */
																					obj_t BgL_g2668z00_549;

																					BgL_g2668z00_549 = BgL_protoz00_513;
																					{	/* Module/statexp.scm 141 */
																						obj_t BgL_envz00_550;

																						BgL_envz00_550 =
																							BGl_defaultzd2environmentzd2zz__evalz00
																							();
																						{	/* Module/statexp.scm 141 */

																							return
																								BGl_evalz00zz__evalz00
																								(BgL_g2668z00_549,
																								BgL_envz00_550);
																						}
																					}
																				}
																			else
																				{	/* Module/statexp.scm 95 */
																					if (
																						(BgL_casezd2valuezd2_515 ==
																							CNST_TABLE_REF(((long) 12))))
																						{	/* Module/statexp.scm 95 */
																							return
																								BGl_tozd2bezd2macroz12z12zzexpand_expanderz00
																								(CAR(CDR(BgL_protoz00_513)),
																								BgL_prototypez00_26);
																						}
																					else
																						{	/* Module/statexp.scm 95 */
																							if (
																								(BgL_casezd2valuezd2_515 ==
																									CNST_TABLE_REF(((long) 13))))
																								{	/* Module/statexp.scm 95 */
																									return
																										BGl_tozd2bezd2macroz12z12zzexpand_expanderz00
																										(CAR(CDR(BgL_protoz00_513)),
																										BgL_prototypez00_26);
																								}
																							else
																								{	/* Module/statexp.scm 95 */
																									if (
																										(BgL_casezd2valuezd2_515 ==
																											CNST_TABLE_REF(((long)
																													14))))
																										{	/* Module/statexp.scm 95 */
																											return
																												BGl_tozd2bezd2macroz12z12zzexpand_expanderz00
																												(CAR(CDR
																													(BgL_protoz00_513)),
																												BgL_prototypez00_26);
																										}
																									else
																										{	/* Module/statexp.scm 149 */
																											obj_t BgL_list2587z00_557;

																											BgL_list2587z00_557 =
																												MAKE_PAIR(BNIL, BNIL);
																											return
																												BGl_userzd2errorzd2zztools_errorz00
																												(BGl_string2667z00zzmodule_statexpz00,
																												BGl_string2669z00zzmodule_statexpz00,
																												BgL_prototypez00_26,
																												BgL_list2587z00_557);
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
				else
					{	/* Module/statexp.scm 90 */
						obj_t BgL_arg2589z00_560;

						BgL_arg2589z00_560 =
							BGl_findzd2locationzd2zztools_locationz00
							(BGl_za2modulezd2clauseza2zd2zzmodule_modulez00);
						{	/* Module/statexp.scm 90 */
							obj_t BgL_list2596z00_564;

							BgL_list2596z00_564 = MAKE_PAIR(BNIL, BNIL);
							return
								BGl_userzd2errorzf2locationz20zztools_errorz00
								(BgL_arg2589z00_560, BGl_string2667z00zzmodule_statexpz00,
								BGl_string2669z00zzmodule_statexpz00, BgL_prototypez00_26,
								BgL_list2596z00_564);
						}
					}
			}
		}
	}



/* <anonymous:2532> */
	obj_t BGl_zc3anonymousza32532ze3z83zzmodule_statexpz00(obj_t BgL_envz00_811)
	{
		AN_OBJECT;
		{	/* Module/statexp.scm 111 */
			{	/* Module/statexp.scm 111 */
				obj_t BgL_protoz00_812;

				obj_t BgL_importz00_813;

				obj_t BgL_prototypez00_814;

				BgL_protoz00_812 = PROCEDURE_REF(BgL_envz00_811, (int) (((long) 0)));
				BgL_importz00_813 = PROCEDURE_REF(BgL_envz00_811, (int) (((long) 1)));
				BgL_prototypez00_814 =
					PROCEDURE_REF(BgL_envz00_811, (int) (((long) 2)));
				{

					{	/* Module/statexp.scm 111 */
						obj_t BgL_arg2536z00_528;

						BgL_arg2536z00_528 = CDR(BgL_protoz00_812);
						return
							BGl_declarezd2classz12zc0zzmodule_classz00(BgL_arg2536z00_528,
							BGl_za2moduleza2z00zzmodule_modulez00, BgL_importz00_813,
							((bool_t) 0), ((bool_t) 0), BgL_prototypez00_814, BFALSE);
					}
				}
			}
		}
	}



/* <anonymous:2551> */
	obj_t BGl_zc3anonymousza32551ze3z83zzmodule_statexpz00(obj_t BgL_envz00_815)
	{
		AN_OBJECT;
		{	/* Module/statexp.scm 119 */
			{	/* Module/statexp.scm 119 */
				obj_t BgL_protoz00_816;

				obj_t BgL_importz00_817;

				obj_t BgL_prototypez00_818;

				BgL_protoz00_816 = PROCEDURE_REF(BgL_envz00_815, (int) (((long) 0)));
				BgL_importz00_817 = PROCEDURE_REF(BgL_envz00_815, (int) (((long) 1)));
				BgL_prototypez00_818 =
					PROCEDURE_REF(BgL_envz00_815, (int) (((long) 2)));
				{

					{	/* Module/statexp.scm 119 */
						obj_t BgL_arg2554z00_534;

						BgL_arg2554z00_534 = CDR(BgL_protoz00_816);
						return
							BGl_declarezd2classz12zc0zzmodule_classz00(BgL_arg2554z00_534,
							BGl_za2moduleza2z00zzmodule_modulez00, BgL_importz00_817,
							((bool_t) 0), ((bool_t) 1), BgL_prototypez00_818, BFALSE);
					}
				}
			}
		}
	}



/* <anonymous:2558> */
	obj_t BGl_zc3anonymousza32558ze3z83zzmodule_statexpz00(obj_t BgL_envz00_819)
	{
		AN_OBJECT;
		{	/* Module/statexp.scm 127 */
			{	/* Module/statexp.scm 127 */
				obj_t BgL_protoz00_820;

				obj_t BgL_importz00_821;

				obj_t BgL_prototypez00_822;

				BgL_protoz00_820 = PROCEDURE_REF(BgL_envz00_819, (int) (((long) 0)));
				BgL_importz00_821 = PROCEDURE_REF(BgL_envz00_819, (int) (((long) 1)));
				BgL_prototypez00_822 =
					PROCEDURE_REF(BgL_envz00_819, (int) (((long) 2)));
				{

					{	/* Module/statexp.scm 127 */
						obj_t BgL_arg2559z00_540;

						BgL_arg2559z00_540 = CDR(BgL_protoz00_820);
						return
							BGl_declarezd2classz12zc0zzmodule_classz00(BgL_arg2559z00_540,
							BGl_za2moduleza2z00zzmodule_modulez00, BgL_importz00_821,
							((bool_t) 1), ((bool_t) 0), BgL_prototypez00_822, BFALSE);
					}
				}
			}
		}
	}



/* <anonymous:2563> */
	obj_t BGl_zc3anonymousza32563ze3z83zzmodule_statexpz00(obj_t BgL_envz00_823)
	{
		AN_OBJECT;
		{	/* Module/statexp.scm 135 */
			{	/* Module/statexp.scm 135 */
				obj_t BgL_protoz00_824;

				obj_t BgL_importz00_825;

				obj_t BgL_prototypez00_826;

				BgL_protoz00_824 = PROCEDURE_REF(BgL_envz00_823, (int) (((long) 0)));
				BgL_importz00_825 = PROCEDURE_REF(BgL_envz00_823, (int) (((long) 1)));
				BgL_prototypez00_826 =
					PROCEDURE_REF(BgL_envz00_823, (int) (((long) 2)));
				{

					{	/* Module/statexp.scm 135 */
						obj_t BgL_arg2564z00_546;

						BgL_arg2564z00_546 = CDR(BgL_protoz00_824);
						return
							BGl_declarezd2widezd2classz12z12zzmodule_classz00
							(BgL_arg2564z00_546, BGl_za2moduleza2z00zzmodule_modulez00,
							BgL_importz00_825, BgL_prototypez00_826, BFALSE);
					}
				}
			}
		}
	}



/* statexp-finalizer */
	obj_t BGl_statexpzd2finaliza7erz75zzmodule_statexpz00()
	{
		AN_OBJECT;
		{	/* Module/statexp.scm 171 */
			{	/* Module/statexp.scm 173 */
				obj_t BgL_g2385z00_565;

				BgL_g2385z00_565 =
					bgl_reverse_bang(BGl_za2localzd2classesza2zd2zzmodule_statexpz00);
				{
					obj_t BgL_l2383z00_567;

					BgL_l2383z00_567 = BgL_g2385z00_565;
				BgL_zc3anonymousza32597ze3z83_568:
					if (PAIRP(BgL_l2383z00_567))
						{	/* Module/statexp.scm 173 */
							{	/* Module/statexp.scm 173 */
								obj_t BgL_arg2602z00_570;

								BgL_arg2602z00_570 = CAR(BgL_l2383z00_567);
								PROCEDURE_ENTRY(BgL_arg2602z00_570) (BgL_arg2602z00_570, BEOA);
							}
							{
								obj_t BgL_l2383z00_1048;

								BgL_l2383z00_1048 = CDR(BgL_l2383z00_567);
								BgL_l2383z00_567 = BgL_l2383z00_1048;
								goto BgL_zc3anonymousza32597ze3z83_568;
							}
						}
					else
						{	/* Module/statexp.scm 173 */
							((bool_t) 1);
						}
				}
			}
			BGl_za2localzd2classesza2zd2zzmodule_statexpz00 = BNIL;
			{	/* Module/statexp.scm 176 */
				obj_t BgL_classesz00_573;

				BgL_classesz00_573 = BGl_classzd2finaliza7erz75zzmodule_classz00();
				if (PAIRP(BgL_classesz00_573))
					{	/* Module/statexp.scm 177 */
						return BgL_classesz00_573;
					}
				else
					{	/* Module/statexp.scm 177 */
						return CNST_TABLE_REF(((long) 1));
		}}}
	}



/* _statexp-finalizer */
	obj_t BGl__statexpzd2finaliza7erz75zzmodule_statexpz00(obj_t BgL_envz00_806)
	{
		AN_OBJECT;
		{	/* Module/statexp.scm 171 */
			return BGl_statexpzd2finaliza7erz75zzmodule_statexpz00();
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_statexpz00()
	{
		AN_OBJECT;
		{	/* Module/statexp.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_statexpz00()
	{
		AN_OBJECT;
		{	/* Module/statexp.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_statexpz00()
	{
		AN_OBJECT;
		{	/* Module/statexp.scm 15 */
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string2670z00zzmodule_statexpz00));
			BGl_modulezd2initializa7ationz75zzmodule_prototypez00(((long) 280176011),
				BSTRING_TO_STRING(BGl_string2670z00zzmodule_statexpz00));
			BGl_modulezd2initializa7ationz75zzmodule_classz00(((long) 315716763),
				BSTRING_TO_STRING(BGl_string2670z00zzmodule_statexpz00));
			BGl_modulezd2initializa7ationz75zzexpand_expanderz00(((long) 112686943),
				BSTRING_TO_STRING(BGl_string2670z00zzmodule_statexpz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string2670z00zzmodule_statexpz00));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 320731191),
				BSTRING_TO_STRING(BGl_string2670z00zzmodule_statexpz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string2670z00zzmodule_statexpz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2670z00zzmodule_statexpz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string2670z00zzmodule_statexpz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string2670z00zzmodule_statexpz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string2670z00zzmodule_statexpz00));
			BGl_modulezd2initializa7ationz75zzast_findzd2gdefszd2(((long) 356303425),
				BSTRING_TO_STRING(BGl_string2670z00zzmodule_statexpz00));
			return
				BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(((long) 237711330),
				BSTRING_TO_STRING(BGl_string2670z00zzmodule_statexpz00));
		}
	}

#ifdef __cplusplus
}
#endif
