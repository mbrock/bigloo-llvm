/*===========================================================================*/
/*   (Foreign/copaque.scm)                                                   */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Foreign/copaque.scm)*/
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

	typedef struct BgL_copaquez00_bgl
	{
		struct BgL_typez00_bgl *BgL_btypez00;
	}                 *BgL_copaquez00_bglt;


	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_copaquez00zzforeign_ctypez00;
	static obj_t BGl_requirezd2initializa7ationz75zzforeign_copaquez00 = BUNSPEC;
	extern obj_t
		BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzforeign_copaquez00();
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_makezd2definezd2inlinez00zzforeign_libraryz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzforeign_copaquez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzforeign_copaquez00();
	static obj_t BGl_makezd2ctypezd2accessesz122132z12zzforeign_copaquez00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzforeign_copaquez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_libraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_accessz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_ctypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzforeign_copaquez00();
	extern obj_t BGl_stringzd2sanszd2z42z42zztype_toolsz00(obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_makezd2protozd2inlinez00zzforeign_libraryz00(obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzforeign_copaquez00();
	static obj_t BGl_methodzd2initzd2zzforeign_copaquez00();
	static obj_t __cnst[23];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2612z00zzforeign_copaquez00,
		BgL_bgl_makeza7d2ctypeza7d2a2622z00,
		BGl_makezd2ctypezd2accessesz122132z12zzforeign_copaquez00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2613z00zzforeign_copaquez00,
		BgL_bgl_string2613za700za7za7f2623za7, "make-ctype-accesses!", 20);
	      DEFINE_STRING(BGl_string2614z00zzforeign_copaquez00,
		BgL_bgl_string2614za700za7za7f2624za7, "(", 1);
	      DEFINE_STRING(BGl_string2615z00zzforeign_copaquez00,
		BgL_bgl_string2615za700za7za7f2625za7, ")FOREIGN_TO_COBJ", 16);
	      DEFINE_STRING(BGl_string2616z00zzforeign_copaquez00,
		BgL_bgl_string2616za700za7za7f2626za7, "cobj_to_foreign", 15);
	      DEFINE_STRING(BGl_string2617z00zzforeign_copaquez00,
		BgL_bgl_string2617za700za7za7f2627za7, "foreign_copaque", 15);
	      DEFINE_STRING(BGl_string2618z00zzforeign_copaquez00,
		BgL_bgl_string2618za700za7za7f2628za7,
		"predicate-of pragma ::obj static foreign symbol macro quote foreign-id eq? o foreign? if o::obj (pragma::bool \"($1 == $2)\" o1 o2) o2 void* o1 ?::bool = ::bool ? -> ",
		164);
	extern obj_t BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzforeign_copaquez00(long
		BgL_checksumz00_450, char *BgL_fromz00_451)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzforeign_copaquez00))
				{
					BGl_requirezd2initializa7ationz75zzforeign_copaquez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzforeign_copaquez00();
					BGl_cnstzd2initzd2zzforeign_copaquez00();
					BGl_importedzd2moduleszd2initz00zzforeign_copaquez00();
					BGl_methodzd2initzd2zzforeign_copaquez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzforeign_copaquez00()
	{
		AN_OBJECT;
		{	/* Foreign/copaque.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"foreign_copaque");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"foreign_copaque");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"foreign_copaque");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"foreign_copaque");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"foreign_copaque");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzforeign_copaquez00()
	{
		AN_OBJECT;
		{	/* Foreign/copaque.scm 15 */
			{	/* Foreign/copaque.scm 15 */
				obj_t BgL_cportz00_442;

				BgL_cportz00_442 =
					bgl_open_input_string(BGl_string2618z00zzforeign_copaquez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_443;

					BgL_iz00_443 = ((long) 22);
				BgL_loopz00_444:
					if ((BgL_iz00_443 == ((long) -1)))
						{	/* Foreign/copaque.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Foreign/copaque.scm 15 */
							{	/* Foreign/copaque.scm 15 */
								obj_t BgL_arg2621z00_446;

								{	/* Foreign/copaque.scm 15 */

									{	/* Foreign/copaque.scm 15 */
										obj_t BgL_locationz00_448;

										BgL_locationz00_448 = BBOOL(((bool_t) 0));
										{	/* Foreign/copaque.scm 15 */

											BgL_arg2621z00_446 =
												BGl_readz00zz__readerz00(BgL_cportz00_442,
												BgL_locationz00_448);
										}
									}
								}
								{	/* Foreign/copaque.scm 15 */
									int BgL_auxz00_470;

									BgL_auxz00_470 = (int) (BgL_iz00_443);
									CNST_TABLE_SET(BgL_auxz00_470, BgL_arg2621z00_446);
							}}
							{	/* Foreign/copaque.scm 15 */
								int BgL_auxz00_449;

								BgL_auxz00_449 = (int) ((BgL_iz00_443 - ((long) 1)));
								{
									long BgL_iz00_475;

									BgL_iz00_475 = (long) (BgL_auxz00_449);
									BgL_iz00_443 = BgL_iz00_475;
									goto BgL_loopz00_444;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzforeign_copaquez00()
	{
		AN_OBJECT;
		{	/* Foreign/copaque.scm 15 */
			return BUNSPEC;
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzforeign_copaquez00()
	{
		AN_OBJECT;
		{	/* Foreign/copaque.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzforeign_copaquez00()
	{
		AN_OBJECT;
		{	/* Foreign/copaque.scm 15 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00,
				BGl_copaquez00zzforeign_ctypez00, BGl_proc2612z00zzforeign_copaquez00,
				BGl_string2613z00zzforeign_copaquez00);
		}
	}



/* make-ctype-accesses!2132 */
	obj_t BGl_makezd2ctypezd2accessesz122132z12zzforeign_copaquez00(obj_t
		BgL_envz00_434, obj_t BgL_whatz00_435, obj_t BgL_whoz00_436,
		obj_t BgL_locz00_437)
	{
		AN_OBJECT;
		{	/* Foreign/copaque.scm 28 */
			{
				BgL_copaquez00_bglt BgL_whatz00_262;

				BgL_typez00_bglt BgL_whoz00_263;

				obj_t BgL_locz00_264;

				BgL_whatz00_262 = (BgL_copaquez00_bglt) (BgL_whatz00_435);
				BgL_whoz00_263 = (BgL_typez00_bglt) (BgL_whoz00_436);
				BgL_locz00_264 = BgL_locz00_437;
				{	/* Foreign/copaque.scm 29 */
					BgL_typez00_bglt BgL_btypez00_267;

					{
						obj_t BgL_auxz00_478;

						{	/* Foreign/copaque.scm 29 */
							BgL_objectz00_bglt BgL_auxz00_479;

							BgL_auxz00_479 = (BgL_objectz00_bglt) (BgL_whatz00_262);
							BgL_auxz00_478 = BGL_OBJECT_WIDENING(BgL_auxz00_479);
						}
						BgL_btypez00_267 =
							(((BgL_copaquez00_bglt) CREF(BgL_auxz00_478))->BgL_btypez00);
					}
					{	/* Foreign/copaque.scm 29 */
						obj_t BgL_idz00_268;

						BgL_idz00_268 =
							(((BgL_typez00_bglt) CREF(BgL_whoz00_263))->BgL_idz00);
						{	/* Foreign/copaque.scm 30 */
							obj_t BgL_widz00_269;

							{
								BgL_typez00_bglt BgL_auxz00_484;

								BgL_auxz00_484 = (BgL_typez00_bglt) (BgL_whatz00_262);
								BgL_widz00_269 =
									(((BgL_typez00_bglt) CREF(BgL_auxz00_484))->BgL_idz00);
							}
							{	/* Foreign/copaque.scm 31 */
								obj_t BgL_bidz00_270;

								BgL_bidz00_270 =
									(((BgL_typez00_bglt) CREF(BgL_btypez00_267))->BgL_idz00);
								{	/* Foreign/copaque.scm 32 */
									obj_t BgL_idzd2ze3bidz31_271;

									{	/* Foreign/copaque.scm 33 */
										obj_t BgL_list2590z00_406;

										{	/* Foreign/copaque.scm 33 */
											obj_t BgL_arg2594z00_407;

											{	/* Foreign/copaque.scm 33 */
												obj_t BgL_arg2595z00_408;

												obj_t BgL_arg2602z00_409;

												BgL_arg2595z00_408 = CNST_TABLE_REF(((long) 0));
												BgL_arg2602z00_409 = MAKE_PAIR(BgL_bidz00_270, BNIL);
												BgL_arg2594z00_407 =
													MAKE_PAIR(BgL_arg2595z00_408, BgL_arg2602z00_409);
											}
											BgL_list2590z00_406 =
												MAKE_PAIR(BgL_idz00_268, BgL_arg2594z00_407);
										}
										BgL_idzd2ze3bidz31_271 =
											BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
											(BgL_list2590z00_406);
									}
									{	/* Foreign/copaque.scm 33 */
										obj_t BgL_bidzd2ze3idz31_272;

										{	/* Foreign/copaque.scm 34 */
											obj_t BgL_list2577z00_402;

											{	/* Foreign/copaque.scm 34 */
												obj_t BgL_arg2586z00_403;

												{	/* Foreign/copaque.scm 34 */
													obj_t BgL_arg2587z00_404;

													obj_t BgL_arg2589z00_405;

													BgL_arg2587z00_404 = CNST_TABLE_REF(((long) 0));
													BgL_arg2589z00_405 = MAKE_PAIR(BgL_idz00_268, BNIL);
													BgL_arg2586z00_403 =
														MAKE_PAIR(BgL_arg2587z00_404, BgL_arg2589z00_405);
												}
												BgL_list2577z00_402 =
													MAKE_PAIR(BgL_bidz00_270, BgL_arg2586z00_403);
											}
											BgL_bidzd2ze3idz31_272 =
												BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
												(BgL_list2577z00_402);
										}
										{	/* Foreign/copaque.scm 34 */
											obj_t BgL_bidzf3zf3_273;

											{	/* Foreign/copaque.scm 35 */
												obj_t BgL_arg2565z00_397;

												{	/* Foreign/copaque.scm 35 */
													obj_t BgL_arg2566z00_398;

													obj_t BgL_arg2571z00_399;

													{	/* Foreign/copaque.scm 35 */
														obj_t BgL_res2604z00_418;

														{	/* Foreign/copaque.scm 35 */
															obj_t BgL_arg2063z00_417;

															BgL_arg2063z00_417 =
																SYMBOL_TO_STRING(BgL_idz00_268);
															BgL_res2604z00_418 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_417);
														}
														BgL_arg2566z00_398 = BgL_res2604z00_418;
													}
													{	/* Foreign/copaque.scm 35 */
														obj_t BgL_res2605z00_421;

														{	/* Foreign/copaque.scm 35 */
															obj_t BgL_symbolz00_419;

															BgL_symbolz00_419 = CNST_TABLE_REF(((long) 1));
															{	/* Foreign/copaque.scm 35 */
																obj_t BgL_arg2063z00_420;

																BgL_arg2063z00_420 =
																	SYMBOL_TO_STRING(BgL_symbolz00_419);
																BgL_res2605z00_421 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_420);
														}}
														BgL_arg2571z00_399 = BgL_res2605z00_421;
													}
													{	/* Foreign/copaque.scm 35 */
														obj_t BgL_list2572z00_400;

														{	/* Foreign/copaque.scm 35 */
															obj_t BgL_arg2576z00_401;

															BgL_arg2576z00_401 =
																MAKE_PAIR(BgL_arg2571z00_399, BNIL);
															BgL_list2572z00_400 =
																MAKE_PAIR(BgL_arg2566z00_398,
																BgL_arg2576z00_401);
														}
														BgL_arg2565z00_397 =
															BGl_stringzd2appendzd2zz__r4_strings_6_7z00
															(BgL_list2572z00_400);
												}}
												BgL_bidzf3zf3_273 =
													string_to_symbol(BSTRING_TO_STRING
													(BgL_arg2565z00_397));
											}
											{	/* Foreign/copaque.scm 35 */
												obj_t BgL_bidzf3zd2boolz21_274;

												{	/* Foreign/copaque.scm 36 */
													obj_t BgL_arg2560z00_392;

													{	/* Foreign/copaque.scm 36 */
														obj_t BgL_arg2561z00_393;

														obj_t BgL_arg2562z00_394;

														{	/* Foreign/copaque.scm 36 */
															obj_t BgL_res2606z00_425;

															{	/* Foreign/copaque.scm 36 */
																obj_t BgL_arg2063z00_424;

																BgL_arg2063z00_424 =
																	SYMBOL_TO_STRING(BgL_bidzf3zf3_273);
																BgL_res2606z00_425 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_424);
															}
															BgL_arg2561z00_393 = BgL_res2606z00_425;
														}
														{	/* Foreign/copaque.scm 36 */
															obj_t BgL_res2607z00_428;

															{	/* Foreign/copaque.scm 36 */
																obj_t BgL_symbolz00_426;

																BgL_symbolz00_426 = CNST_TABLE_REF(((long) 2));
																{	/* Foreign/copaque.scm 36 */
																	obj_t BgL_arg2063z00_427;

																	BgL_arg2063z00_427 =
																		SYMBOL_TO_STRING(BgL_symbolz00_426);
																	BgL_res2607z00_428 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg2063z00_427);
															}}
															BgL_arg2562z00_394 = BgL_res2607z00_428;
														}
														{	/* Foreign/copaque.scm 36 */
															obj_t BgL_list2563z00_395;

															{	/* Foreign/copaque.scm 36 */
																obj_t BgL_arg2564z00_396;

																BgL_arg2564z00_396 =
																	MAKE_PAIR(BgL_arg2562z00_394, BNIL);
																BgL_list2563z00_395 =
																	MAKE_PAIR(BgL_arg2561z00_393,
																	BgL_arg2564z00_396);
															}
															BgL_arg2560z00_392 =
																BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																(BgL_list2563z00_395);
													}}
													BgL_bidzf3zd2boolz21_274 =
														string_to_symbol(BSTRING_TO_STRING
														(BgL_arg2560z00_392));
												}
												{	/* Foreign/copaque.scm 36 */
													obj_t BgL_namez00_275;

													BgL_namez00_275 =
														(((BgL_typez00_bglt) CREF(BgL_whoz00_263))->
														BgL_namez00);
													{	/* Foreign/copaque.scm 37 */
														obj_t BgL_namezd2sanszd2z42z42_276;

														BgL_namezd2sanszd2z42z42_276 =
															BGl_stringzd2sanszd2z42z42zztype_toolsz00
															(BgL_namez00_275);
														{	/* Foreign/copaque.scm 38 */

															{

																{	/* Foreign/copaque.scm 69 */
																	obj_t BgL_arg2185z00_281;

																	{	/* Foreign/copaque.scm 69 */
																		obj_t BgL_list2188z00_284;

																		{	/* Foreign/copaque.scm 69 */
																			obj_t BgL_arg2192z00_285;

																			obj_t BgL_arg2198z00_286;

																			BgL_arg2192z00_285 =
																				CNST_TABLE_REF(((long) 3));
																			{	/* Foreign/copaque.scm 69 */
																				obj_t BgL_arg2199z00_287;

																				BgL_arg2199z00_287 =
																					MAKE_PAIR(CNST_TABLE_REF(((long) 1)),
																					BNIL);
																				BgL_arg2198z00_286 =
																					MAKE_PAIR(BgL_idz00_268,
																					BgL_arg2199z00_287);
																			}
																			BgL_list2188z00_284 =
																				MAKE_PAIR(BgL_arg2192z00_285,
																				BgL_arg2198z00_286);
																		}
																		BgL_arg2185z00_281 =
																			BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																			(BgL_list2188z00_284);
																	}
																	{	/* Foreign/copaque.scm 67 */
																		obj_t BgL_list2186z00_282;

																		{	/* Foreign/copaque.scm 67 */
																			obj_t BgL_arg2187z00_283;

																			BgL_arg2187z00_283 =
																				MAKE_PAIR(BgL_arg2185z00_281, BNIL);
																			BgL_list2186z00_282 =
																				MAKE_PAIR(BgL_bidzf3zf3_273,
																				BgL_arg2187z00_283);
																		}
																		BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00
																			(BgL_list2186z00_282);
																}}
																{	/* Foreign/copaque.scm 72 */
																	obj_t BgL_arg2200z00_288;

																	{	/* Foreign/copaque.scm 72 */
																		obj_t BgL_arg2208z00_289;

																		obj_t BgL_arg2213z00_290;

																		BgL_arg2208z00_289 =
																			CNST_TABLE_REF(((long) 18));
																		{	/* Foreign/copaque.scm 72 */
																			obj_t BgL_arg2216z00_291;

																			obj_t BgL_arg2222z00_292;

																			{	/* Foreign/copaque.scm 44 */
																				obj_t BgL_arg2318z00_323;

																				obj_t BgL_arg2325z00_324;

																				BgL_arg2318z00_323 =
																					CNST_TABLE_REF(((long) 16));
																				{	/* Foreign/copaque.scm 44 */
																					obj_t BgL_arg2331z00_325;

																					{	/* Foreign/copaque.scm 44 */
																						obj_t BgL_arg2370z00_332;

																						obj_t BgL_arg2377z00_333;

																						BgL_arg2370z00_332 =
																							CNST_TABLE_REF(((long) 17));
																						{	/* Foreign/copaque.scm 44 */
																							obj_t BgL_list2378z00_334;

																							BgL_list2378z00_334 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2377z00_333 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_idz00_268,
																								BgL_list2378z00_334);
																						}
																						BgL_arg2331z00_325 =
																							MAKE_PAIR(BgL_arg2370z00_332,
																							BgL_arg2377z00_333);
																					}
																					{	/* Foreign/copaque.scm 44 */
																						obj_t BgL_list2345z00_328;

																						{	/* Foreign/copaque.scm 44 */
																							obj_t BgL_arg2351z00_329;

																							{	/* Foreign/copaque.scm 44 */
																								obj_t BgL_arg2357z00_330;

																								{	/* Foreign/copaque.scm 44 */
																									obj_t BgL_arg2364z00_331;

																									BgL_arg2364z00_331 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg2357z00_330 =
																										MAKE_PAIR
																										(BGl_string2616z00zzforeign_copaquez00,
																										BgL_arg2364z00_331);
																								}
																								BgL_arg2351z00_329 =
																									MAKE_PAIR(BgL_arg2331z00_325,
																									BgL_arg2357z00_330);
																							}
																							BgL_list2345z00_328 =
																								MAKE_PAIR
																								(BgL_idzd2ze3bidz31_271,
																								BgL_arg2351z00_329);
																						}
																						BgL_arg2325z00_324 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_bidz00_270,
																							BgL_list2345z00_328);
																				}}
																				BgL_arg2216z00_291 =
																					MAKE_PAIR(BgL_arg2318z00_323,
																					BgL_arg2325z00_324);
																			}
																			{	/* Foreign/copaque.scm 47 */
																				obj_t BgL_mnamez00_336;

																				BgL_mnamez00_336 =
																					string_append_3
																					(BGl_string2614z00zzforeign_copaquez00,
																					BgL_namezd2sanszd2z42z42_276,
																					BGl_string2615z00zzforeign_copaquez00);
																				{	/* Foreign/copaque.scm 48 */
																					obj_t BgL_arg2383z00_337;

																					obj_t BgL_arg2390z00_338;

																					BgL_arg2383z00_337 =
																						CNST_TABLE_REF(((long) 16));
																					{	/* Foreign/copaque.scm 48 */
																						obj_t BgL_arg2396z00_339;

																						BgL_arg2396z00_339 =
																							MAKE_PAIR(BgL_bidz00_270, BNIL);
																						{	/* Foreign/copaque.scm 48 */
																							obj_t BgL_list2404z00_341;

																							{	/* Foreign/copaque.scm 48 */
																								obj_t BgL_arg2409z00_342;

																								{	/* Foreign/copaque.scm 48 */
																									obj_t BgL_arg2416z00_343;

																									{	/* Foreign/copaque.scm 48 */
																										obj_t BgL_arg2422z00_344;

																										BgL_arg2422z00_344 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2416z00_343 =
																											MAKE_PAIR
																											(BgL_mnamez00_336,
																											BgL_arg2422z00_344);
																									}
																									BgL_arg2409z00_342 =
																										MAKE_PAIR
																										(BgL_arg2396z00_339,
																										BgL_arg2416z00_343);
																								}
																								BgL_list2404z00_341 =
																									MAKE_PAIR
																									(BgL_bidzd2ze3idz31_272,
																									BgL_arg2409z00_342);
																							}
																							BgL_arg2390z00_338 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_idz00_268,
																								BgL_list2404z00_341);
																					}}
																					BgL_arg2222z00_292 =
																						MAKE_PAIR(BgL_arg2383z00_337,
																						BgL_arg2390z00_338);
																			}}
																			{	/* Foreign/copaque.scm 72 */
																				obj_t BgL_list2227z00_294;

																				{	/* Foreign/copaque.scm 72 */
																					obj_t BgL_arg2233z00_295;

																					BgL_arg2233z00_295 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list2227z00_294 =
																						MAKE_PAIR(BgL_arg2222z00_292,
																						BgL_arg2233z00_295);
																				}
																				BgL_arg2213z00_290 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2216z00_291,
																					BgL_list2227z00_294);
																		}}
																		BgL_arg2200z00_288 =
																			MAKE_PAIR(BgL_arg2208z00_289,
																			BgL_arg2213z00_290);
																	}
																	BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																		(BgL_arg2200z00_288);
																}
																{	/* Foreign/copaque.scm 74 */
																	obj_t BgL_arg2237z00_296;

																	{	/* Foreign/copaque.scm 74 */
																		obj_t BgL_arg2239z00_297;

																		obj_t BgL_arg2240z00_298;

																		BgL_arg2239z00_297 =
																			CNST_TABLE_REF(((long) 19));
																		{	/* Foreign/copaque.scm 75 */
																			obj_t BgL_arg2242z00_299;

																			{	/* Foreign/copaque.scm 75 */
																				obj_t BgL_arg2245z00_302;

																				{	/* Foreign/copaque.scm 75 */
																					obj_t BgL_arg2252z00_303;

																					{	/* Foreign/copaque.scm 75 */
																						obj_t BgL_list2253z00_304;

																						BgL_list2253z00_304 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg2252z00_303 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(CNST_TABLE_REF(((long) 20)),
																							BgL_list2253z00_304);
																					}
																					BgL_arg2245z00_302 =
																						MAKE_PAIR(BgL_bidzf3zd2boolz21_274,
																						BgL_arg2252z00_303);
																				}
																				BgL_arg2242z00_299 =
																					BGl_makezd2protozd2inlinez00zzforeign_libraryz00
																					(BgL_arg2245z00_302);
																			}
																			{	/* Foreign/copaque.scm 74 */
																				obj_t BgL_list2244z00_301;

																				BgL_list2244z00_301 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2240z00_298 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2242z00_299,
																					BgL_list2244z00_301);
																		}}
																		BgL_arg2237z00_296 =
																			MAKE_PAIR(BgL_arg2239z00_297,
																			BgL_arg2240z00_298);
																	}
																	BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																		(BgL_arg2237z00_296);
																}
																{	/* Foreign/copaque.scm 76 */
																	obj_t BgL_arg2255z00_305;

																	{	/* Foreign/copaque.scm 76 */
																		obj_t BgL_arg2259z00_306;

																		obj_t BgL_arg2260z00_307;

																		BgL_arg2259z00_306 =
																			CNST_TABLE_REF(((long) 21));
																		{	/* Foreign/copaque.scm 76 */
																			obj_t BgL_arg2267z00_308;

																			{	/* Foreign/copaque.scm 76 */
																				obj_t BgL_arg2282z00_311;

																				{	/* Foreign/copaque.scm 76 */
																					obj_t BgL_arg2285z00_312;

																					{	/* Foreign/copaque.scm 76 */
																						obj_t BgL_arg2290z00_315;

																						obj_t BgL_arg2295z00_316;

																						BgL_arg2290z00_315 =
																							CNST_TABLE_REF(((long) 22));
																						{	/* Foreign/copaque.scm 76 */
																							obj_t BgL_list2296z00_317;

																							BgL_list2296z00_317 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2295z00_316 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_widz00_269,
																								BgL_list2296z00_317);
																						}
																						BgL_arg2285z00_312 =
																							MAKE_PAIR(BgL_arg2290z00_315,
																							BgL_arg2295z00_316);
																					}
																					{	/* Foreign/copaque.scm 76 */
																						obj_t BgL_list2287z00_314;

																						BgL_list2287z00_314 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg2282z00_311 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2285z00_312,
																							BgL_list2287z00_314);
																				}}
																				BgL_arg2267z00_308 =
																					MAKE_PAIR(BgL_bidzf3zf3_273,
																					BgL_arg2282z00_311);
																			}
																			{	/* Foreign/copaque.scm 76 */
																				obj_t BgL_list2275z00_310;

																				BgL_list2275z00_310 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2260z00_307 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2267z00_308,
																					BgL_list2275z00_310);
																		}}
																		BgL_arg2255z00_305 =
																			MAKE_PAIR(BgL_arg2259z00_306,
																			BgL_arg2260z00_307);
																	}
																	BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																		(BgL_arg2255z00_305);
																}
																{	/* Foreign/copaque.scm 79 */
																	obj_t BgL_arg2297z00_318;

																	obj_t BgL_arg2305z00_319;

																	{	/* Foreign/copaque.scm 61 */
																		obj_t BgL_arg2523z00_375;

																		obj_t BgL_arg2529z00_376;

																		{	/* Foreign/copaque.scm 61 */
																			obj_t BgL_arg2531z00_377;

																			obj_t BgL_arg2536z00_378;

																			{	/* Foreign/copaque.scm 61 */
																				obj_t BgL_list2537z00_379;

																				{	/* Foreign/copaque.scm 61 */
																					obj_t BgL_arg2544z00_380;

																					obj_t BgL_arg2550z00_381;

																					BgL_arg2544z00_380 =
																						CNST_TABLE_REF(((long) 3));
																					{	/* Foreign/copaque.scm 61 */
																						obj_t BgL_arg2554z00_382;

																						BgL_arg2554z00_382 =
																							MAKE_PAIR(CNST_TABLE_REF(((long)
																									4)), BNIL);
																						BgL_arg2550z00_381 =
																							MAKE_PAIR(BgL_idz00_268,
																							BgL_arg2554z00_382);
																					}
																					BgL_list2537z00_379 =
																						MAKE_PAIR(BgL_arg2544z00_380,
																						BgL_arg2550z00_381);
																				}
																				BgL_arg2531z00_377 =
																					BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																					(BgL_list2537z00_379);
																			}
																			{	/* Foreign/copaque.scm 62 */
																				obj_t BgL_arg2555z00_383;

																				obj_t BgL_arg2556z00_384;

																				BgL_arg2555z00_383 =
																					BGl_makezd2typedzd2identz00zzast_identz00
																					(CNST_TABLE_REF(((long) 5)),
																					CNST_TABLE_REF(((long) 6)));
																				BgL_arg2556z00_384 =
																					BGl_makezd2typedzd2identz00zzast_identz00
																					(CNST_TABLE_REF(((long) 7)),
																					CNST_TABLE_REF(((long) 6)));
																				{	/* Foreign/copaque.scm 61 */
																					obj_t BgL_list2558z00_386;

																					{	/* Foreign/copaque.scm 61 */
																						obj_t BgL_arg2559z00_387;

																						BgL_arg2559z00_387 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list2558z00_386 =
																							MAKE_PAIR(BgL_arg2556z00_384,
																							BgL_arg2559z00_387);
																					}
																					BgL_arg2536z00_378 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2555z00_383,
																						BgL_list2558z00_386);
																			}}
																			BgL_arg2523z00_375 =
																				MAKE_PAIR(BgL_arg2531z00_377,
																				BgL_arg2536z00_378);
																		}
																		BgL_arg2529z00_376 =
																			CNST_TABLE_REF(((long) 8));
																		BgL_arg2297z00_318 =
																			BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																			(BgL_arg2523z00_375, BgL_arg2529z00_376);
																	}
																	{	/* Foreign/copaque.scm 53 */
																		obj_t BgL_arg2429z00_346;

																		obj_t BgL_arg2430z00_347;

																		{	/* Foreign/copaque.scm 53 */
																			obj_t BgL_arg2431z00_348;

																			{	/* Foreign/copaque.scm 53 */
																				obj_t BgL_list2432z00_349;

																				BgL_list2432z00_349 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2431z00_348 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(CNST_TABLE_REF(((long) 9)),
																					BgL_list2432z00_349);
																			}
																			BgL_arg2429z00_346 =
																				MAKE_PAIR(BgL_bidzf3zd2boolz21_274,
																				BgL_arg2431z00_348);
																		}
																		{	/* Foreign/copaque.scm 54 */
																			obj_t BgL_arg2437z00_350;

																			obj_t BgL_arg2438z00_351;

																			BgL_arg2437z00_350 =
																				CNST_TABLE_REF(((long) 10));
																			{	/* Foreign/copaque.scm 54 */
																				obj_t BgL_arg2444z00_352;

																				obj_t BgL_arg2445z00_353;

																				{	/* Foreign/copaque.scm 54 */
																					obj_t BgL_arg2453z00_358;

																					obj_t BgL_arg2454z00_359;

																					BgL_arg2453z00_358 =
																						CNST_TABLE_REF(((long) 11));
																					{	/* Foreign/copaque.scm 54 */
																						obj_t BgL_list2455z00_360;

																						BgL_list2455z00_360 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg2454z00_359 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(CNST_TABLE_REF(((long) 12)),
																							BgL_list2455z00_360);
																					}
																					BgL_arg2444z00_352 =
																						MAKE_PAIR(BgL_arg2453z00_358,
																						BgL_arg2454z00_359);
																				}
																				{	/* Foreign/copaque.scm 55 */
																					obj_t BgL_arg2459z00_361;

																					obj_t BgL_arg2460z00_362;

																					BgL_arg2459z00_361 =
																						CNST_TABLE_REF(((long) 13));
																					{	/* Foreign/copaque.scm 55 */
																						obj_t BgL_arg2461z00_363;

																						obj_t BgL_arg2470z00_364;

																						{	/* Foreign/copaque.scm 55 */
																							obj_t BgL_arg2477z00_368;

																							obj_t BgL_arg2491z00_369;

																							BgL_arg2477z00_368 =
																								CNST_TABLE_REF(((long) 14));
																							{	/* Foreign/copaque.scm 55 */
																								obj_t BgL_list2492z00_370;

																								BgL_list2492z00_370 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2491z00_369 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(CNST_TABLE_REF(((long) 12)),
																									BgL_list2492z00_370);
																							}
																							BgL_arg2461z00_363 =
																								MAKE_PAIR(BgL_arg2477z00_368,
																								BgL_arg2491z00_369);
																						}
																						{	/* Foreign/copaque.scm 55 */
																							obj_t BgL_arg2493z00_371;

																							obj_t BgL_arg2503z00_372;

																							BgL_arg2493z00_371 =
																								CNST_TABLE_REF(((long) 15));
																							{	/* Foreign/copaque.scm 55 */
																								obj_t BgL_list2504z00_373;

																								BgL_list2504z00_373 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2503z00_372 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_bidz00_270,
																									BgL_list2504z00_373);
																							}
																							BgL_arg2470z00_364 =
																								MAKE_PAIR(BgL_arg2493z00_371,
																								BgL_arg2503z00_372);
																						}
																						{	/* Foreign/copaque.scm 55 */
																							obj_t BgL_list2472z00_366;

																							{	/* Foreign/copaque.scm 55 */
																								obj_t BgL_arg2476z00_367;

																								BgL_arg2476z00_367 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list2472z00_366 =
																									MAKE_PAIR(BgL_arg2470z00_364,
																									BgL_arg2476z00_367);
																							}
																							BgL_arg2460z00_362 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2461z00_363,
																								BgL_list2472z00_366);
																					}}
																					BgL_arg2445z00_353 =
																						MAKE_PAIR(BgL_arg2459z00_361,
																						BgL_arg2460z00_362);
																				}
																				{	/* Foreign/copaque.scm 54 */
																					obj_t BgL_list2449z00_355;

																					{	/* Foreign/copaque.scm 54 */
																						obj_t BgL_arg2451z00_356;

																						{	/* Foreign/copaque.scm 54 */
																							obj_t BgL_arg2452z00_357;

																							BgL_arg2452z00_357 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2451z00_356 =
																								MAKE_PAIR(BFALSE,
																								BgL_arg2452z00_357);
																						}
																						BgL_list2449z00_355 =
																							MAKE_PAIR(BgL_arg2445z00_353,
																							BgL_arg2451z00_356);
																					}
																					BgL_arg2438z00_351 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2444z00_352,
																						BgL_list2449z00_355);
																			}}
																			BgL_arg2430z00_347 =
																				MAKE_PAIR(BgL_arg2437z00_350,
																				BgL_arg2438z00_351);
																		}
																		BgL_arg2305z00_319 =
																			BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																			(BgL_arg2429z00_346, BgL_arg2430z00_347);
																	}
																	{	/* Foreign/copaque.scm 79 */
																		obj_t BgL_list2306z00_320;

																		{	/* Foreign/copaque.scm 79 */
																			obj_t BgL_arg2312z00_321;

																			BgL_arg2312z00_321 =
																				MAKE_PAIR(BgL_arg2305z00_319, BNIL);
																			BgL_list2306z00_320 =
																				MAKE_PAIR(BgL_arg2297z00_318,
																				BgL_arg2312z00_321);
																		}
																		return BgL_list2306z00_320;
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
					}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzforeign_copaquez00()
	{
		AN_OBJECT;
		{	/* Foreign/copaque.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string2617z00zzforeign_copaquez00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 195902195),
				BSTRING_TO_STRING(BGl_string2617z00zzforeign_copaquez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2617z00zzforeign_copaquez00));
			BGl_modulezd2initializa7ationz75zzforeign_ctypez00(((long) 178768066),
				BSTRING_TO_STRING(BGl_string2617z00zzforeign_copaquez00));
			BGl_modulezd2initializa7ationz75zzforeign_accessz00(((long) 477377954),
				BSTRING_TO_STRING(BGl_string2617z00zzforeign_copaquez00));
			BGl_modulezd2initializa7ationz75zzforeign_libraryz00(((long) 477408199),
				BSTRING_TO_STRING(BGl_string2617z00zzforeign_copaquez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string2617z00zzforeign_copaquez00));
			return
				BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string2617z00zzforeign_copaquez00));
		}
	}

#ifdef __cplusplus
}
#endif
