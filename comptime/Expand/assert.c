/*===========================================================================*/
/*   (Expand/assert.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Expand/assert.scm)*/
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


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_dupz00zzexpand_assertz00(obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2assertzd2zzexpand_assertz00(obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzexpand_assertz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzexpand_assertz00();
	extern obj_t BGl_za2compilerzd2debugza2zd2zzengine_paramz00;
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	static obj_t BGl_cnstzd2initzd2zzexpand_assertz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzexpand_assertz00();
	static obj_t BGl_makezd2onezd2assertz00zzexpand_assertz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzexpand_assertz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzexpand_assertz00();
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	extern obj_t BGl_replacez12z12zztools_miscz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t);
	BGL_IMPORT bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern obj_t BGl_locationzd2fullzd2fnamez00zztools_locationz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzexpand_assertz00();
	static obj_t BGl__expandzd2assertzd2zzexpand_assertz00(obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzexpand_assertz00();
	static obj_t __cnst[9];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2assertzd2envz00zzexpand_assertz00,
		BgL_bgl__expandza7d2assert1725za7,
		BGl__expandzd2assertzd2zzexpand_assertz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1720z00zzexpand_assertz00,
		BgL_bgl_string1720za700za7za7e1726za7, "Illegal `assert' form", 21);
	      DEFINE_STRING(BGl_string1721z00zzexpand_assertz00,
		BgL_bgl_string1721za700za7za7e1727za7, "expand_assert", 13);
	      DEFINE_STRING(BGl_string1722z00zzexpand_assertz00,
		BgL_bgl_string1722za700za7za7e1728za7,
		"notify-assert-fail location quote define-primop! begin if check bdb assert ",
		75);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzexpand_assertz00(long
		BgL_checksumz00_394, char *BgL_fromz00_395)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzexpand_assertz00))
				{
					BGl_requirezd2initializa7ationz75zzexpand_assertz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzexpand_assertz00();
					BGl_cnstzd2initzd2zzexpand_assertz00();
					BGl_importedzd2moduleszd2initz00zzexpand_assertz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzexpand_assertz00()
	{
		AN_OBJECT;
		{	/* Expand/assert.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"expand_assert");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"expand_assert");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "expand_assert");
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 0), "expand_assert");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzexpand_assertz00()
	{
		AN_OBJECT;
		{	/* Expand/assert.scm 15 */
			{	/* Expand/assert.scm 15 */
				obj_t BgL_cportz00_386;

				BgL_cportz00_386 =
					bgl_open_input_string(BGl_string1722z00zzexpand_assertz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_387;

					BgL_iz00_387 = ((long) 8);
				BgL_loopz00_388:
					if ((BgL_iz00_387 == ((long) -1)))
						{	/* Expand/assert.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Expand/assert.scm 15 */
							{	/* Expand/assert.scm 15 */
								obj_t BgL_arg1724z00_390;

								{	/* Expand/assert.scm 15 */

									{	/* Expand/assert.scm 15 */
										obj_t BgL_locationz00_392;

										BgL_locationz00_392 = BBOOL(((bool_t) 0));
										{	/* Expand/assert.scm 15 */

											BgL_arg1724z00_390 =
												BGl_readz00zz__readerz00(BgL_cportz00_386,
												BgL_locationz00_392);
										}
									}
								}
								{	/* Expand/assert.scm 15 */
									int BgL_auxz00_412;

									BgL_auxz00_412 = (int) (BgL_iz00_387);
									CNST_TABLE_SET(BgL_auxz00_412, BgL_arg1724z00_390);
							}}
							{	/* Expand/assert.scm 15 */
								int BgL_auxz00_393;

								BgL_auxz00_393 = (int) ((BgL_iz00_387 - ((long) 1)));
								{
									long BgL_iz00_417;

									BgL_iz00_417 = (long) (BgL_auxz00_393);
									BgL_iz00_387 = BgL_iz00_417;
									goto BgL_loopz00_388;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzexpand_assertz00()
	{
		AN_OBJECT;
		{	/* Expand/assert.scm 15 */
			return BUNSPEC;
		}
	}



/* expand-assert */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2assertzd2zzexpand_assertz00(obj_t
		BgL_xz00_15, obj_t BgL_ez00_16)
	{
		AN_OBJECT;
		{	/* Expand/assert.scm 26 */
			{
				obj_t BgL_varsz00_205;

				obj_t BgL_predz00_206;

				obj_t BgL_varsz00_202;

				obj_t BgL_bodyz00_203;

				if (PAIRP(BgL_xz00_15))
					{	/* Expand/assert.scm 27 */
						obj_t BgL_cdrzd21399zd2_211;

						BgL_cdrzd21399zd2_211 = CDR(BgL_xz00_15);
						if (PAIRP(BgL_cdrzd21399zd2_211))
							{	/* Expand/assert.scm 27 */
								obj_t BgL_cdrzd21403zd2_213;

								BgL_cdrzd21403zd2_213 = CDR(BgL_cdrzd21399zd2_211);
								if ((CAR(BgL_cdrzd21399zd2_211) == CNST_TABLE_REF(((long) 2))))
									{	/* Expand/assert.scm 27 */
										if (PAIRP(BgL_cdrzd21403zd2_213))
											{	/* Expand/assert.scm 27 */
												obj_t BgL_carzd21406zd2_216;

												BgL_carzd21406zd2_216 = CAR(BgL_cdrzd21403zd2_213);
												if (PAIRP(BgL_carzd21406zd2_216))
													{	/* Expand/assert.scm 27 */
														BgL_varsz00_202 = BgL_carzd21406zd2_216;
														BgL_bodyz00_203 = CDR(BgL_cdrzd21403zd2_213);
														{	/* Expand/assert.scm 30 */
															obj_t BgL_newz00_233;

															{	/* Expand/assert.scm 30 */
																obj_t BgL_arg1623z00_234;

																obj_t BgL_arg1624z00_235;

																BgL_arg1623z00_234 = CNST_TABLE_REF(((long) 0));
																{	/* Expand/assert.scm 30 */
																	obj_t BgL_arg1625z00_236;

																	BgL_arg1625z00_236 =
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_bodyz00_203, BNIL);
																	{	/* Expand/assert.scm 30 */
																		obj_t BgL_list1626z00_237;

																		BgL_list1626z00_237 =
																			MAKE_PAIR(BgL_arg1625z00_236, BNIL);
																		BgL_arg1624z00_235 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_varsz00_202, BgL_list1626z00_237);
																}}
																BgL_newz00_233 =
																	MAKE_PAIR(BgL_arg1623z00_234,
																	BgL_arg1624z00_235);
															}
															BGl_replacez12z12zztools_miscz00(BgL_xz00_15,
																BgL_newz00_233);
															return PROCEDURE_ENTRY(BgL_ez00_16) (BgL_ez00_16,
																BgL_xz00_15, BgL_ez00_16, BEOA);
														}
													}
												else
													{	/* Expand/assert.scm 27 */
														obj_t BgL_carzd21419zd2_220;

														BgL_carzd21419zd2_220 = CAR(BgL_cdrzd21399zd2_211);
														if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
															(BgL_carzd21419zd2_220))
															{	/* Expand/assert.scm 27 */
																BgL_varsz00_205 = BgL_carzd21419zd2_220;
																BgL_predz00_206 = CDR(BgL_cdrzd21399zd2_211);
															BgL_tagzd21390zd2_207:
																{	/* Expand/assert.scm 34 */
																	bool_t BgL_testz00_446;

																	{	/* Expand/assert.scm 34 */
																		bool_t BgL_testz00_447;

																		if (INTEGERP
																			(BGl_za2compilerzd2debugza2zd2zzengine_paramz00))
																			{	/* Expand/assert.scm 34 */
																				BgL_testz00_447 =
																					(
																					(long)
																					CINT
																					(BGl_za2compilerzd2debugza2zd2zzengine_paramz00)
																					>= ((long) 1));
																			}
																		else
																			{	/* Expand/assert.scm 34 */
																				BgL_testz00_447 = ((bool_t) 0);
																			}
																		if (BgL_testz00_447)
																			{	/* Expand/assert.scm 34 */
																				BgL_testz00_446 = ((bool_t) 1);
																			}
																		else
																			{	/* Expand/assert.scm 35 */
																				obj_t BgL__andtest_1594z00_241;

																				{	/* Expand/assert.scm 35 */
																					obj_t BgL_arg1630z00_243;

																					obj_t BgL_arg1631z00_244;

																					BgL_arg1630z00_243 =
																						CNST_TABLE_REF(((long) 1));
																					{	/* Expand/assert.scm 35 */
																						obj_t BgL_arg1632z00_245;

																						BgL_arg1632z00_245 =
																							BGl_thezd2backendzd2zzbackend_backendz00
																							();
																						{
																							BgL_backendz00_bglt
																								BgL_auxz00_454;
																							BgL_auxz00_454 =
																								(BgL_backendz00_bglt)
																								(BgL_arg1632z00_245);
																							BgL_arg1631z00_244 =
																								(((BgL_backendz00_bglt)
																									CREF(BgL_auxz00_454))->
																								BgL_debugzd2supportzd2);
																					}}
																					BgL__andtest_1594z00_241 =
																						BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg1630z00_243,
																						BgL_arg1631z00_244);
																				}
																				if (CBOOL(BgL__andtest_1594z00_241))
																					{	/* Expand/assert.scm 35 */
																						if (INTEGERP
																							(BGl_za2bdbzd2debugza2zd2zzengine_paramz00))
																							{	/* Expand/assert.scm 36 */
																								BgL_testz00_446 =
																									(
																									(long)
																									CINT
																									(BGl_za2bdbzd2debugza2zd2zzengine_paramz00)
																									>= ((long) 1));
																							}
																						else
																							{	/* Expand/assert.scm 36 */
																								BgL_testz00_446 = ((bool_t) 0);
																							}
																					}
																				else
																					{	/* Expand/assert.scm 35 */
																						BgL_testz00_446 = ((bool_t) 0);
																					}
																			}
																	}
																	if (BgL_testz00_446)
																		{	/* Expand/assert.scm 34 */
																			return
																				BGl_replacez12z12zztools_miscz00
																				(BgL_xz00_15,
																				BGl_makezd2onezd2assertz00zzexpand_assertz00
																				(BgL_ez00_16, BgL_xz00_15,
																					BgL_varsz00_205, BgL_predz00_206));
																		}
																	else
																		{	/* Expand/assert.scm 34 */
																			return BUNSPEC;
																		}
																}
															}
														else
															{	/* Expand/assert.scm 27 */
															BgL_tagzd21391zd2_208:
																return
																	BGl_errorz00zz__errorz00(BFALSE,
																	BGl_string1720z00zzexpand_assertz00,
																	BgL_xz00_15);
															}
													}
											}
										else
											{	/* Expand/assert.scm 27 */
												obj_t BgL_carzd21432zd2_224;

												BgL_carzd21432zd2_224 = CAR(BgL_cdrzd21399zd2_211);
												if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
													(BgL_carzd21432zd2_224))
													{
														obj_t BgL_predz00_472;

														obj_t BgL_varsz00_471;

														BgL_varsz00_471 = BgL_carzd21432zd2_224;
														BgL_predz00_472 = CDR(BgL_cdrzd21399zd2_211);
														BgL_predz00_206 = BgL_predz00_472;
														BgL_varsz00_205 = BgL_varsz00_471;
														goto BgL_tagzd21390zd2_207;
													}
												else
													{	/* Expand/assert.scm 27 */
														goto BgL_tagzd21391zd2_208;
													}
											}
									}
								else
									{	/* Expand/assert.scm 27 */
										obj_t BgL_carzd21445zd2_228;

										BgL_carzd21445zd2_228 = CAR(BgL_cdrzd21399zd2_211);
										if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
											(BgL_carzd21445zd2_228))
											{
												obj_t BgL_predz00_478;

												obj_t BgL_varsz00_477;

												BgL_varsz00_477 = BgL_carzd21445zd2_228;
												BgL_predz00_478 = CDR(BgL_cdrzd21399zd2_211);
												BgL_predz00_206 = BgL_predz00_478;
												BgL_varsz00_205 = BgL_varsz00_477;
												goto BgL_tagzd21390zd2_207;
											}
										else
											{	/* Expand/assert.scm 27 */
												goto BgL_tagzd21391zd2_208;
											}
									}
							}
						else
							{	/* Expand/assert.scm 27 */
								goto BgL_tagzd21391zd2_208;
							}
					}
				else
					{	/* Expand/assert.scm 27 */
						goto BgL_tagzd21391zd2_208;
					}
			}
		}
	}



/* _expand-assert */
	obj_t BGl__expandzd2assertzd2zzexpand_assertz00(obj_t BgL_envz00_382,
		obj_t BgL_xz00_383, obj_t BgL_ez00_384)
	{
		AN_OBJECT;
		{	/* Expand/assert.scm 26 */
			return
				BGl_expandzd2assertzd2zzexpand_assertz00(BgL_xz00_383, BgL_ez00_384);
		}
	}



/* make-one-assert */
	obj_t BGl_makezd2onezd2assertz00zzexpand_assertz00(obj_t BgL_ez00_17,
		obj_t BgL_expz00_18, obj_t BgL_varsz00_19, obj_t BgL_predz00_20)
	{
		AN_OBJECT;
		{	/* Expand/assert.scm 47 */
			{	/* Expand/assert.scm 48 */
				obj_t BgL_predz00_247;

				if (NULLP(BgL_predz00_20))
					{	/* Expand/assert.scm 49 */
						obj_t BgL_list1708z00_315;

						BgL_list1708z00_315 = MAKE_PAIR(BUNSPEC, BNIL);
						BgL_predz00_247 = BgL_list1708z00_315;
					}
				else
					{	/* Expand/assert.scm 48 */
						BgL_predz00_247 = BgL_predz00_20;
					}
				{	/* Expand/assert.scm 48 */
					obj_t BgL_oldzd2predzd2_248;

					BgL_oldzd2predzd2_248 = BGl_dupz00zzexpand_assertz00(BgL_predz00_247);
					{	/* Expand/assert.scm 51 */

						{	/* Expand/assert.scm 52 */
							obj_t BgL_arg1635z00_249;

							obj_t BgL_arg1636z00_250;

							BgL_arg1635z00_249 = CNST_TABLE_REF(((long) 3));
							{	/* Expand/assert.scm 52 */
								obj_t BgL_arg1637z00_251;

								obj_t BgL_arg1639z00_252;

								{	/* Expand/assert.scm 52 */
									obj_t BgL_arg1645z00_257;

									BgL_arg1645z00_257 =
										BGl_expandzd2prognzd2zz__prognz00(BgL_predz00_247);
									BgL_arg1637z00_251 =
										PROCEDURE_ENTRY(BgL_ez00_17) (BgL_ez00_17,
										BgL_arg1645z00_257, BgL_ez00_17, BEOA);
								}
								{	/* Expand/assert.scm 54 */
									obj_t BgL_arg1646z00_258;

									obj_t BgL_arg1647z00_259;

									BgL_arg1646z00_258 = CNST_TABLE_REF(((long) 4));
									{	/* Expand/assert.scm 56 */
										obj_t BgL_arg1650z00_260;

										obj_t BgL_arg1651z00_261;

										{
											obj_t BgL_varsz00_264;

											obj_t BgL_defsz00_265;

											BgL_varsz00_264 = BgL_varsz00_19;
											BgL_defsz00_265 = BNIL;
										BgL_zc3anonymousza31652ze3z83_266:
											if (NULLP(BgL_varsz00_264))
												{	/* Expand/assert.scm 58 */
													BgL_arg1650z00_260 = BgL_defsz00_265;
												}
											else
												{	/* Expand/assert.scm 60 */
													obj_t BgL_arg1654z00_268;

													obj_t BgL_arg1655z00_269;

													BgL_arg1654z00_268 = CDR(BgL_varsz00_264);
													{	/* Expand/assert.scm 61 */
														obj_t BgL_arg1657z00_270;

														{	/* Expand/assert.scm 61 */
															obj_t BgL_arg1659z00_271;

															obj_t BgL_arg1660z00_272;

															BgL_arg1659z00_271 = CNST_TABLE_REF(((long) 5));
															{	/* Expand/assert.scm 61 */
																obj_t BgL_arg1662z00_273;

																obj_t BgL_arg1663z00_274;

																{	/* Expand/assert.scm 61 */
																	obj_t BgL_arg1667z00_278;

																	obj_t BgL_arg1668z00_279;

																	BgL_arg1667z00_278 =
																		CNST_TABLE_REF(((long) 6));
																	{	/* Expand/assert.scm 61 */
																		obj_t BgL_arg1669z00_280;

																		BgL_arg1669z00_280 = CAR(BgL_varsz00_264);
																		{	/* Expand/assert.scm 61 */
																			obj_t BgL_list1671z00_282;

																			BgL_list1671z00_282 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg1668z00_279 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg1669z00_280,
																				BgL_list1671z00_282);
																	}}
																	BgL_arg1662z00_273 =
																		MAKE_PAIR(BgL_arg1667z00_278,
																		BgL_arg1668z00_279);
																}
																BgL_arg1663z00_274 = CAR(BgL_varsz00_264);
																{	/* Expand/assert.scm 61 */
																	obj_t BgL_list1665z00_276;

																	{	/* Expand/assert.scm 61 */
																		obj_t BgL_arg1666z00_277;

																		BgL_arg1666z00_277 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list1665z00_276 =
																			MAKE_PAIR(BgL_arg1663z00_274,
																			BgL_arg1666z00_277);
																	}
																	BgL_arg1660z00_272 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg1662z00_273, BgL_list1665z00_276);
															}}
															BgL_arg1657z00_270 =
																MAKE_PAIR(BgL_arg1659z00_271,
																BgL_arg1660z00_272);
														}
														BgL_arg1655z00_269 =
															MAKE_PAIR(BgL_arg1657z00_270, BgL_defsz00_265);
													}
													{
														obj_t BgL_defsz00_506;

														obj_t BgL_varsz00_505;

														BgL_varsz00_505 = BgL_arg1654z00_268;
														BgL_defsz00_506 = BgL_arg1655z00_269;
														BgL_defsz00_265 = BgL_defsz00_506;
														BgL_varsz00_264 = BgL_varsz00_505;
														goto BgL_zc3anonymousza31652ze3z83_266;
													}
												}
										}
										{	/* Expand/assert.scm 63 */
											obj_t BgL_arg1672z00_284;

											{	/* Expand/assert.scm 63 */
												obj_t BgL_locz00_286;

												{	/* Expand/assert.scm 63 */
													obj_t BgL_locz00_312;

													BgL_locz00_312 =
														BGl_findzd2locationzd2zztools_locationz00
														(BgL_expz00_18);
													{	/* Expand/assert.scm 64 */
														bool_t BgL_testz00_508;

														if (STRUCTP(BgL_locz00_312))
															{	/* Expand/assert.scm 64 */
																BgL_testz00_508 =
																	(STRUCT_KEY(BgL_locz00_312) ==
																	CNST_TABLE_REF(((long) 7)));
															}
														else
															{	/* Expand/assert.scm 64 */
																BgL_testz00_508 = ((bool_t) 0);
															}
														if (BgL_testz00_508)
															{	/* Expand/assert.scm 64 */
																BgL_locz00_286 = BgL_locz00_312;
															}
														else
															{	/* Expand/assert.scm 64 */
																BgL_locz00_286 =
																	BGl_findzd2locationzd2zztools_locationz00
																	(BgL_predz00_247);
															}
													}
												}
												{	/* Expand/assert.scm 67 */
													obj_t BgL_arg1674z00_287;

													obj_t BgL_arg1675z00_288;

													BgL_arg1674z00_287 = CNST_TABLE_REF(((long) 8));
													{	/* Expand/assert.scm 67 */
														obj_t BgL_arg1676z00_289;

														obj_t BgL_arg1677z00_290;

														obj_t BgL_arg1678z00_291;

														{	/* Expand/assert.scm 67 */
															obj_t BgL_arg1688z00_296;

															obj_t BgL_arg1689z00_297;

															BgL_arg1688z00_296 = CNST_TABLE_REF(((long) 6));
															{	/* Expand/assert.scm 67 */
																obj_t BgL_list1690z00_298;

																BgL_list1690z00_298 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg1689z00_297 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_varsz00_19, BgL_list1690z00_298);
															}
															BgL_arg1676z00_289 =
																MAKE_PAIR(BgL_arg1688z00_296,
																BgL_arg1689z00_297);
														}
														{	/* Expand/assert.scm 68 */
															obj_t BgL_arg1691z00_299;

															obj_t BgL_arg1692z00_300;

															BgL_arg1691z00_299 = CNST_TABLE_REF(((long) 6));
															{	/* Expand/assert.scm 68 */
																obj_t BgL_arg1693z00_301;

																BgL_arg1693z00_301 =
																	MAKE_PAIR(CNST_TABLE_REF(((long) 4)),
																	BgL_oldzd2predzd2_248);
																{	/* Expand/assert.scm 68 */
																	obj_t BgL_list1695z00_303;

																	BgL_list1695z00_303 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg1692z00_300 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg1693z00_301, BgL_list1695z00_303);
															}}
															BgL_arg1677z00_290 =
																MAKE_PAIR(BgL_arg1691z00_299,
																BgL_arg1692z00_300);
														}
														{	/* Expand/assert.scm 69 */
															bool_t BgL_testz00_526;

															if (STRUCTP(BgL_locz00_286))
																{	/* Expand/assert.scm 69 */
																	BgL_testz00_526 =
																		(STRUCT_KEY(BgL_locz00_286) ==
																		CNST_TABLE_REF(((long) 7)));
																}
															else
																{	/* Expand/assert.scm 69 */
																	BgL_testz00_526 = ((bool_t) 0);
																}
															if (BgL_testz00_526)
																{	/* Expand/assert.scm 70 */
																	obj_t BgL_arg1697z00_305;

																	obj_t BgL_arg1700z00_306;

																	BgL_arg1697z00_305 =
																		CNST_TABLE_REF(((long) 6));
																	{	/* Expand/assert.scm 70 */
																		obj_t BgL_arg1701z00_307;

																		BgL_arg1701z00_307 =
																			MAKE_PAIR
																			(BGl_locationzd2fullzd2fnamez00zztools_locationz00
																			(BgL_locz00_286),
																			STRUCT_REF(BgL_locz00_286,
																				(int) (((long) 1))));
																		{	/* Expand/assert.scm 70 */
																			obj_t BgL_list1703z00_309;

																			BgL_list1703z00_309 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg1700z00_306 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg1701z00_307,
																				BgL_list1703z00_309);
																	}}
																	BgL_arg1678z00_291 =
																		MAKE_PAIR(BgL_arg1697z00_305,
																		BgL_arg1700z00_306);
																}
															else
																{	/* Expand/assert.scm 69 */
																	BgL_arg1678z00_291 = BFALSE;
																}
														}
														{	/* Expand/assert.scm 67 */
															obj_t BgL_list1681z00_293;

															{	/* Expand/assert.scm 67 */
																obj_t BgL_arg1684z00_294;

																{	/* Expand/assert.scm 67 */
																	obj_t BgL_arg1685z00_295;

																	BgL_arg1685z00_295 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg1684z00_294 =
																		MAKE_PAIR(BgL_arg1678z00_291,
																		BgL_arg1685z00_295);
																}
																BgL_list1681z00_293 =
																	MAKE_PAIR(BgL_arg1677z00_290,
																	BgL_arg1684z00_294);
															}
															BgL_arg1675z00_288 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg1676z00_289, BgL_list1681z00_293);
														}
													}
													BgL_arg1672z00_284 =
														MAKE_PAIR(BgL_arg1674z00_287, BgL_arg1675z00_288);
												}
											}
											BgL_arg1651z00_261 = MAKE_PAIR(BgL_arg1672z00_284, BNIL);
										}
										BgL_arg1647z00_259 =
											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg1650z00_260, BgL_arg1651z00_261);
									}
									BgL_arg1639z00_252 =
										MAKE_PAIR(BgL_arg1646z00_258, BgL_arg1647z00_259);
								}
								{	/* Expand/assert.scm 52 */
									obj_t BgL_list1641z00_254;

									{	/* Expand/assert.scm 52 */
										obj_t BgL_arg1643z00_255;

										{	/* Expand/assert.scm 52 */
											obj_t BgL_arg1644z00_256;

											BgL_arg1644z00_256 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg1643z00_255 =
												MAKE_PAIR(BgL_arg1639z00_252, BgL_arg1644z00_256);
										}
										BgL_list1641z00_254 =
											MAKE_PAIR(BUNSPEC, BgL_arg1643z00_255);
									}
									BgL_arg1636z00_250 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg1637z00_251, BgL_list1641z00_254);
								}
							}
							return MAKE_PAIR(BgL_arg1635z00_249, BgL_arg1636z00_250);
						}
					}
				}
			}
		}
	}



/* dup */
	obj_t BGl_dupz00zzexpand_assertz00(obj_t BgL_predz00_21)
	{
		AN_OBJECT;
		{	/* Expand/assert.scm 77 */
			if (PAIRP(BgL_predz00_21))
				{	/* Expand/assert.scm 79 */
					return
						MAKE_PAIR(BGl_dupz00zzexpand_assertz00(CAR(BgL_predz00_21)),
						BGl_dupz00zzexpand_assertz00(CDR(BgL_predz00_21)));
				}
			else
				{	/* Expand/assert.scm 79 */
					return BgL_predz00_21;
				}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzexpand_assertz00()
	{
		AN_OBJECT;
		{	/* Expand/assert.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzexpand_assertz00()
	{
		AN_OBJECT;
		{	/* Expand/assert.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzexpand_assertz00()
	{
		AN_OBJECT;
		{	/* Expand/assert.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1721z00zzexpand_assertz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string1721z00zzexpand_assertz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string1721z00zzexpand_assertz00));
			return
				BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string1721z00zzexpand_assertz00));
		}
	}

#ifdef __cplusplus
}
#endif
