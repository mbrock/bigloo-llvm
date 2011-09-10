/*===========================================================================*/
/*   (SawMsil/type.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMsil/type.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
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

	typedef struct BgL_dotnetz00_bgl
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
		obj_t BgL_outz00;
		obj_t BgL_qnamez00;
	}                *BgL_dotnetz00_bglt;


	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL int BGl_typeSiza7eza7zzmsil_typez00(BgL_typez00_bglt);
	static obj_t BGl_cnstzd2initzd2zzmsil_typez00();
	static obj_t BGl__typeSiza7eza7zzmsil_typez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzmsil_typez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmsil_namesz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_dotnet_classz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_bvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzmsil_typez00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzmsil_typez00();
	BGL_IMPORT bool_t bigloo_strcmp(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmsil_typez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzmsil_typez00();
	static obj_t BGl_backendzd2subtypezf3zd2dot3615zf3zzmsil_typez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzmsil_typez00();
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_za2za2longzd2typesza2za2zd2zzmsil_typez00 = BUNSPEC;
	static obj_t BGl_libraryzd2moduleszd2initz00zzmsil_typez00();
	extern obj_t BGl_dotnetz00zzbackend_dotnet_classz00;
	static obj_t __cnst[3];


	extern obj_t BGl_backendzd2subtypezf3zd2envzf3zzbackend_backendz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_typeSiza7ezd2envz75zzmsil_typez00,
		BgL_bgl__typesiza7a7eza7a7za7za73685z00, BGl__typeSiza7eza7zzmsil_typez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3678z00zzmsil_typez00,
		BgL_bgl_backendza7d2subtyp3686za7,
		BGl_backendzd2subtypezf3zd2dot3615zf3zzmsil_typez00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string3680z00zzmsil_typez00,
		BgL_bgl_string3680za700za7za7m3687za7, "class System.Object", 19);
	      DEFINE_STRING(BGl_string3679z00zzmsil_typez00,
		BgL_bgl_string3679za700za7za7m3688za7, "backend-subtype?", 16);
	      DEFINE_STRING(BGl_string3681z00zzmsil_typez00,
		BgL_bgl_string3681za700za7za7m3689za7, "msil_type", 9);
	      DEFINE_STRING(BGl_string3682z00zzmsil_typez00,
		BgL_bgl_string3682za700za7za7m3690za7,
		"obj void (elong uelong llong ullong double) ", 44);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmsil_typez00(long
		BgL_checksumz00_1359, char *BgL_fromz00_1360)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmsil_typez00))
				{
					BGl_requirezd2initializa7ationz75zzmsil_typez00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzmsil_typez00();
					BGl_cnstzd2initzd2zzmsil_typez00();
					BGl_importedzd2moduleszd2initz00zzmsil_typez00();
					BGl_methodzd2initzd2zzmsil_typez00();
					BGl_toplevelzd2initzd2zzmsil_typez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmsil_typez00()
	{
		AN_OBJECT;
		{	/* SawMsil/type.scm 1 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "msil_type");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"msil_type");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "msil_type");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmsil_typez00()
	{
		AN_OBJECT;
		{	/* SawMsil/type.scm 1 */
			{	/* SawMsil/type.scm 1 */
				obj_t BgL_cportz00_1351;

				BgL_cportz00_1351 =
					bgl_open_input_string(BGl_string3682z00zzmsil_typez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1352;

					BgL_iz00_1352 = ((long) 2);
				BgL_loopz00_1353:
					if ((BgL_iz00_1352 == ((long) -1)))
						{	/* SawMsil/type.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMsil/type.scm 1 */
							{	/* SawMsil/type.scm 1 */
								obj_t BgL_arg3684z00_1355;

								{	/* SawMsil/type.scm 1 */

									{	/* SawMsil/type.scm 1 */
										obj_t BgL_locationz00_1357;

										BgL_locationz00_1357 = BBOOL(((bool_t) 0));
										{	/* SawMsil/type.scm 1 */

											BgL_arg3684z00_1355 =
												BGl_readz00zz__readerz00(BgL_cportz00_1351,
												BgL_locationz00_1357);
										}
									}
								}
								{	/* SawMsil/type.scm 1 */
									int BgL_auxz00_1378;

									BgL_auxz00_1378 = (int) (BgL_iz00_1352);
									CNST_TABLE_SET(BgL_auxz00_1378, BgL_arg3684z00_1355);
							}}
							{	/* SawMsil/type.scm 1 */
								int BgL_auxz00_1358;

								BgL_auxz00_1358 = (int) ((BgL_iz00_1352 - ((long) 1)));
								{
									long BgL_iz00_1383;

									BgL_iz00_1383 = (long) (BgL_auxz00_1358);
									BgL_iz00_1352 = BgL_iz00_1383;
									goto BgL_loopz00_1353;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmsil_typez00()
	{
		AN_OBJECT;
		{	/* SawMsil/type.scm 1 */
			BGl_za2za2longzd2typesza2za2zd2zzmsil_typez00 =
				CNST_TABLE_REF(((long) 0));
			return BUNSPEC;
		}
	}



/* typeSize */
	BGL_EXPORTED_DEF int BGl_typeSiza7eza7zzmsil_typez00(BgL_typez00_bglt
		BgL_typez00_1)
	{
		AN_OBJECT;
		{	/* SawMsil/type.scm 16 */
			{	/* SawMsil/type.scm 17 */
				obj_t BgL_idz00_901;

				BgL_idz00_901 = (((BgL_typez00_bglt) CREF(BgL_typez00_1))->BgL_idz00);
				if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_901,
							BGl_za2za2longzd2typesza2za2zd2zzmsil_typez00)))
					{	/* SawMsil/type.scm 18 */
						return (int) (((long) 2));
					}
				else
					{	/* SawMsil/type.scm 18 */
						if ((BgL_idz00_901 == CNST_TABLE_REF(((long) 1))))
							{	/* SawMsil/type.scm 19 */
								return (int) (((long) 0));
							}
						else
							{	/* SawMsil/type.scm 19 */
								return (int) (((long) 1));
		}}}}
	}



/* _typeSize */
	obj_t BGl__typeSiza7eza7zzmsil_typez00(obj_t BgL_envz00_1340,
		obj_t BgL_typez00_1341)
	{
		AN_OBJECT;
		{	/* SawMsil/type.scm 16 */
			return
				BINT(BGl_typeSiza7eza7zzmsil_typez00(
					(BgL_typez00_bglt) (BgL_typez00_1341)));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmsil_typez00()
	{
		AN_OBJECT;
		{	/* SawMsil/type.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmsil_typez00()
	{
		AN_OBJECT;
		{	/* SawMsil/type.scm 1 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2subtypezf3zd2envzf3zzbackend_backendz00,
				BGl_dotnetz00zzbackend_dotnet_classz00, BGl_proc3678z00zzmsil_typez00,
				BGl_string3679z00zzmsil_typez00);
		}
	}



/* backend-subtype?-dot3615 */
	obj_t BGl_backendzd2subtypezf3zd2dot3615zf3zzmsil_typez00(obj_t
		BgL_envz00_1343, obj_t BgL_bz00_1344, obj_t BgL_t1z00_1345,
		obj_t BgL_t2z00_1346)
	{
		AN_OBJECT;
		{	/* SawMsil/type.scm 25 */
			{
				BgL_dotnetz00_bglt BgL_bz00_1310;

				obj_t BgL_t1z00_1311;

				obj_t BgL_t2z00_1312;

				{	/* SawMsil/type.scm 26 */
					bool_t BgL_auxz00_1400;

					BgL_bz00_1310 = (BgL_dotnetz00_bglt) (BgL_bz00_1344);
					BgL_t1z00_1311 = BgL_t1z00_1345;
					BgL_t2z00_1312 = BgL_t2z00_1346;
					{	/* SawMsil/type.scm 26 */
						bool_t BgL__ortest_3610z00_1315;

						BgL__ortest_3610z00_1315 = (BgL_t1z00_1311 == BgL_t2z00_1312);
						if (BgL__ortest_3610z00_1315)
							{	/* SawMsil/type.scm 26 */
								BgL_auxz00_1400 = BgL__ortest_3610z00_1315;
							}
						else
							{	/* SawMsil/type.scm 27 */
								bool_t BgL__ortest_3611z00_1316;

								{	/* SawMsil/type.scm 27 */
									obj_t BgL_auxz00_1407;

									obj_t BgL_auxz00_1403;

									{
										BgL_typez00_bglt BgL_auxz00_1408;

										BgL_auxz00_1408 = (BgL_typez00_bglt) (BgL_t2z00_1312);
										BgL_auxz00_1407 =
											(((BgL_typez00_bglt) CREF(BgL_auxz00_1408))->BgL_idz00);
									}
									{
										BgL_typez00_bglt BgL_auxz00_1404;

										BgL_auxz00_1404 = (BgL_typez00_bglt) (BgL_t1z00_1311);
										BgL_auxz00_1403 =
											(((BgL_typez00_bglt) CREF(BgL_auxz00_1404))->BgL_idz00);
									}
									BgL__ortest_3611z00_1316 =
										(BgL_auxz00_1403 == BgL_auxz00_1407);
								}
								if (BgL__ortest_3611z00_1316)
									{	/* SawMsil/type.scm 27 */
										BgL_auxz00_1400 = BgL__ortest_3611z00_1316;
									}
								else
									{	/* SawMsil/type.scm 28 */
										bool_t BgL__ortest_3612z00_1317;

										{	/* SawMsil/type.scm 28 */
											obj_t BgL_auxz00_1413;

											{
												BgL_typez00_bglt BgL_auxz00_1414;

												BgL_auxz00_1414 = (BgL_typez00_bglt) (BgL_t2z00_1312);
												BgL_auxz00_1413 =
													(((BgL_typez00_bglt) CREF(BgL_auxz00_1414))->
													BgL_idz00);
											}
											BgL__ortest_3612z00_1317 =
												(BgL_auxz00_1413 == CNST_TABLE_REF(((long) 2)));
										}
										if (BgL__ortest_3612z00_1317)
											{	/* SawMsil/type.scm 28 */
												BgL_auxz00_1400 = BgL__ortest_3612z00_1317;
											}
										else
											{	/* SawMsil/type.scm 29 */
												bool_t BgL__ortest_3613z00_1318;

												{	/* SawMsil/type.scm 29 */
													obj_t BgL_arg3667z00_1321;

													{
														BgL_typez00_bglt BgL_auxz00_1420;

														BgL_auxz00_1420 =
															(BgL_typez00_bglt) (BgL_t2z00_1312);
														BgL_arg3667z00_1321 =
															(((BgL_typez00_bglt) CREF(BgL_auxz00_1420))->
															BgL_namez00);
													}
													BgL__ortest_3613z00_1318 =
														bigloo_strcmp(BgL_arg3667z00_1321,
														BGl_string3680z00zzmsil_typez00);
												}
												if (BgL__ortest_3613z00_1318)
													{	/* SawMsil/type.scm 29 */
														BgL_auxz00_1400 = BgL__ortest_3613z00_1318;
													}
												else
													{	/* SawMsil/type.scm 30 */
														obj_t BgL_arg3665z00_1319;

														obj_t BgL_arg3666z00_1320;

														{
															BgL_typez00_bglt BgL_auxz00_1425;

															BgL_auxz00_1425 =
																(BgL_typez00_bglt) (BgL_t1z00_1311);
															BgL_arg3665z00_1319 =
																(((BgL_typez00_bglt) CREF(BgL_auxz00_1425))->
																BgL_namez00);
														}
														{
															BgL_typez00_bglt BgL_auxz00_1428;

															BgL_auxz00_1428 =
																(BgL_typez00_bglt) (BgL_t2z00_1312);
															BgL_arg3666z00_1320 =
																(((BgL_typez00_bglt) CREF(BgL_auxz00_1428))->
																BgL_namez00);
														}
														BgL_auxz00_1400 =
															bigloo_strcmp(BgL_arg3665z00_1319,
															BgL_arg3666z00_1320);
													}
											}
									}
							}
					}
					return BBOOL(BgL_auxz00_1400);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmsil_typez00()
	{
		AN_OBJECT;
		{	/* SawMsil/type.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3681z00zzmsil_typez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3681z00zzmsil_typez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3681z00zzmsil_typez00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string3681z00zzmsil_typez00));
			BGl_modulezd2initializa7ationz75zzbackend_bvmz00(((long) 52967775),
				BSTRING_TO_STRING(BGl_string3681z00zzmsil_typez00));
			BGl_modulezd2initializa7ationz75zzbackend_dotnet_classz00(((long) 0),
				BSTRING_TO_STRING(BGl_string3681z00zzmsil_typez00));
			return
				BGl_modulezd2initializa7ationz75zzmsil_namesz00(((long) 484617828),
				BSTRING_TO_STRING(BGl_string3681z00zzmsil_typez00));
		}
	}

#ifdef __cplusplus
}
#endif
