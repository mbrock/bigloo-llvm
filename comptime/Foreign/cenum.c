/*===========================================================================*/
/*   (Foreign/cenum.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Foreign/cenum.scm)*/
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

	typedef struct BgL_cenumz00_bgl
	{
		struct BgL_typez00_bgl *BgL_btypez00;
		obj_t BgL_literalsz00;
	}               *BgL_cenumz00_bglt;


	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	extern obj_t BGl_cenumz00zzforeign_ctypez00;
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzforeign_cenumz00 = BUNSPEC;
	extern obj_t
		BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzforeign_cenumz00();
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_makezd2definezd2inlinez00zzforeign_libraryz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzforeign_cenumz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzforeign_cenumz00();
	static obj_t BGl_makezd2ctypezd2accessesz122133z12zzforeign_cenumz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzforeign_cenumz00(long, char *);
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
	static obj_t BGl_toplevelzd2initzd2zzforeign_cenumz00();
	extern obj_t BGl_stringzd2sanszd2z42z42zztype_toolsz00(obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_makezd2protozd2inlinez00zzforeign_libraryz00(obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzforeign_cenumz00();
	static obj_t BGl_methodzd2initzd2zzforeign_cenumz00();
	static obj_t __cnst[23];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2756z00zzforeign_cenumz00,
		BgL_bgl_makeza7d2ctypeza7d2a2765z00,
		BGl_makezd2ctypezd2accessesz122133z12zzforeign_cenumz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2757z00zzforeign_cenumz00,
		BgL_bgl_string2757za700za7za7f2766za7, "make-ctype-accesses!", 20);
	      DEFINE_STRING(BGl_string2758z00zzforeign_cenumz00,
		BgL_bgl_string2758za700za7za7f2767za7, "(", 1);
	      DEFINE_STRING(BGl_string2760z00zzforeign_cenumz00,
		BgL_bgl_string2760za700za7za7f2768za7, "CENUM_TO_FOREIGN", 16);
	      DEFINE_STRING(BGl_string2759z00zzforeign_cenumz00,
		BgL_bgl_string2759za700za7za7f2769za7, ")FOREIGN_TO_COBJ", 16);
	      DEFINE_STRING(BGl_string2761z00zzforeign_cenumz00,
		BgL_bgl_string2761za700za7za7f2770za7, "foreign_cenum", 13);
	      DEFINE_STRING(BGl_string2762z00zzforeign_cenumz00,
		BgL_bgl_string2762za700za7za7f2771za7,
		"predicate-of ::obj static foreign symbol macro quote foreign-id eq? o foreign? if o::obj (pragma::bool \"($1 == $2)\" o1 o2) o2 o1 ?::bool = pragma - ::bool ? -> ",
		160);
	extern obj_t BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzforeign_cenumz00(long
		BgL_checksumz00_488, char *BgL_fromz00_489)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzforeign_cenumz00))
				{
					BGl_requirezd2initializa7ationz75zzforeign_cenumz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzforeign_cenumz00();
					BGl_cnstzd2initzd2zzforeign_cenumz00();
					BGl_importedzd2moduleszd2initz00zzforeign_cenumz00();
					BGl_methodzd2initzd2zzforeign_cenumz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzforeign_cenumz00()
	{
		AN_OBJECT;
		{	/* Foreign/cenum.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"foreign_cenum");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"foreign_cenum");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"foreign_cenum");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"foreign_cenum");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"foreign_cenum");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzforeign_cenumz00()
	{
		AN_OBJECT;
		{	/* Foreign/cenum.scm 15 */
			{	/* Foreign/cenum.scm 15 */
				obj_t BgL_cportz00_480;

				BgL_cportz00_480 =
					bgl_open_input_string(BGl_string2762z00zzforeign_cenumz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_481;

					BgL_iz00_481 = ((long) 22);
				BgL_loopz00_482:
					if ((BgL_iz00_481 == ((long) -1)))
						{	/* Foreign/cenum.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Foreign/cenum.scm 15 */
							{	/* Foreign/cenum.scm 15 */
								obj_t BgL_arg2764z00_484;

								{	/* Foreign/cenum.scm 15 */

									{	/* Foreign/cenum.scm 15 */
										obj_t BgL_locationz00_486;

										BgL_locationz00_486 = BBOOL(((bool_t) 0));
										{	/* Foreign/cenum.scm 15 */

											BgL_arg2764z00_484 =
												BGl_readz00zz__readerz00(BgL_cportz00_480,
												BgL_locationz00_486);
										}
									}
								}
								{	/* Foreign/cenum.scm 15 */
									int BgL_auxz00_508;

									BgL_auxz00_508 = (int) (BgL_iz00_481);
									CNST_TABLE_SET(BgL_auxz00_508, BgL_arg2764z00_484);
							}}
							{	/* Foreign/cenum.scm 15 */
								int BgL_auxz00_487;

								BgL_auxz00_487 = (int) ((BgL_iz00_481 - ((long) 1)));
								{
									long BgL_iz00_513;

									BgL_iz00_513 = (long) (BgL_auxz00_487);
									BgL_iz00_481 = BgL_iz00_513;
									goto BgL_loopz00_482;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzforeign_cenumz00()
	{
		AN_OBJECT;
		{	/* Foreign/cenum.scm 15 */
			return BUNSPEC;
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzforeign_cenumz00()
	{
		AN_OBJECT;
		{	/* Foreign/cenum.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzforeign_cenumz00()
	{
		AN_OBJECT;
		{	/* Foreign/cenum.scm 15 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00,
				BGl_cenumz00zzforeign_ctypez00, BGl_proc2756z00zzforeign_cenumz00,
				BGl_string2757z00zzforeign_cenumz00);
		}
	}



/* make-ctype-accesses!2133 */
	obj_t BGl_makezd2ctypezd2accessesz122133z12zzforeign_cenumz00(obj_t
		BgL_envz00_472, obj_t BgL_whatz00_473, obj_t BgL_whoz00_474,
		obj_t BgL_locz00_475)
	{
		AN_OBJECT;
		{	/* Foreign/cenum.scm 28 */
			{
				BgL_cenumz00_bglt BgL_whatz00_262;

				BgL_typez00_bglt BgL_whoz00_263;

				obj_t BgL_locz00_264;

				BgL_whatz00_262 = (BgL_cenumz00_bglt) (BgL_whatz00_473);
				BgL_whoz00_263 = (BgL_typez00_bglt) (BgL_whoz00_474);
				BgL_locz00_264 = BgL_locz00_475;
				{	/* Foreign/cenum.scm 29 */
					BgL_typez00_bglt BgL_btypez00_267;

					{
						obj_t BgL_auxz00_516;

						{	/* Foreign/cenum.scm 29 */
							BgL_objectz00_bglt BgL_auxz00_517;

							BgL_auxz00_517 = (BgL_objectz00_bglt) (BgL_whatz00_262);
							BgL_auxz00_516 = BGL_OBJECT_WIDENING(BgL_auxz00_517);
						}
						BgL_btypez00_267 =
							(((BgL_cenumz00_bglt) CREF(BgL_auxz00_516))->BgL_btypez00);
					}
					{	/* Foreign/cenum.scm 29 */
						obj_t BgL_idz00_268;

						BgL_idz00_268 =
							(((BgL_typez00_bglt) CREF(BgL_whoz00_263))->BgL_idz00);
						{	/* Foreign/cenum.scm 30 */
							obj_t BgL_widz00_269;

							{
								BgL_typez00_bglt BgL_auxz00_522;

								BgL_auxz00_522 = (BgL_typez00_bglt) (BgL_whatz00_262);
								BgL_widz00_269 =
									(((BgL_typez00_bglt) CREF(BgL_auxz00_522))->BgL_idz00);
							}
							{	/* Foreign/cenum.scm 31 */
								obj_t BgL_bidz00_270;

								BgL_bidz00_270 =
									(((BgL_typez00_bglt) CREF(BgL_btypez00_267))->BgL_idz00);
								{	/* Foreign/cenum.scm 32 */
									obj_t BgL_idzd2ze3bidz31_271;

									{	/* Foreign/cenum.scm 33 */
										obj_t BgL_list2651z00_437;

										{	/* Foreign/cenum.scm 33 */
											obj_t BgL_arg2652z00_438;

											{	/* Foreign/cenum.scm 33 */
												obj_t BgL_arg2655z00_439;

												obj_t BgL_arg2656z00_440;

												BgL_arg2655z00_439 = CNST_TABLE_REF(((long) 0));
												BgL_arg2656z00_440 = MAKE_PAIR(BgL_bidz00_270, BNIL);
												BgL_arg2652z00_438 =
													MAKE_PAIR(BgL_arg2655z00_439, BgL_arg2656z00_440);
											}
											BgL_list2651z00_437 =
												MAKE_PAIR(BgL_idz00_268, BgL_arg2652z00_438);
										}
										BgL_idzd2ze3bidz31_271 =
											BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
											(BgL_list2651z00_437);
									}
									{	/* Foreign/cenum.scm 33 */
										obj_t BgL_bidzd2ze3idz31_272;

										{	/* Foreign/cenum.scm 34 */
											obj_t BgL_list2643z00_433;

											{	/* Foreign/cenum.scm 34 */
												obj_t BgL_arg2648z00_434;

												{	/* Foreign/cenum.scm 34 */
													obj_t BgL_arg2649z00_435;

													obj_t BgL_arg2650z00_436;

													BgL_arg2649z00_435 = CNST_TABLE_REF(((long) 0));
													BgL_arg2650z00_436 = MAKE_PAIR(BgL_idz00_268, BNIL);
													BgL_arg2648z00_434 =
														MAKE_PAIR(BgL_arg2649z00_435, BgL_arg2650z00_436);
												}
												BgL_list2643z00_433 =
													MAKE_PAIR(BgL_bidz00_270, BgL_arg2648z00_434);
											}
											BgL_bidzd2ze3idz31_272 =
												BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
												(BgL_list2643z00_433);
										}
										{	/* Foreign/cenum.scm 34 */
											obj_t BgL_bidzf3zf3_273;

											{	/* Foreign/cenum.scm 35 */
												obj_t BgL_arg2628z00_428;

												{	/* Foreign/cenum.scm 35 */
													obj_t BgL_arg2629z00_429;

													obj_t BgL_arg2630z00_430;

													{	/* Foreign/cenum.scm 35 */
														obj_t BgL_res2658z00_449;

														{	/* Foreign/cenum.scm 35 */
															obj_t BgL_arg2063z00_448;

															BgL_arg2063z00_448 =
																SYMBOL_TO_STRING(BgL_idz00_268);
															BgL_res2658z00_449 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_448);
														}
														BgL_arg2629z00_429 = BgL_res2658z00_449;
													}
													{	/* Foreign/cenum.scm 35 */
														obj_t BgL_res2659z00_452;

														{	/* Foreign/cenum.scm 35 */
															obj_t BgL_symbolz00_450;

															BgL_symbolz00_450 = CNST_TABLE_REF(((long) 1));
															{	/* Foreign/cenum.scm 35 */
																obj_t BgL_arg2063z00_451;

																BgL_arg2063z00_451 =
																	SYMBOL_TO_STRING(BgL_symbolz00_450);
																BgL_res2659z00_452 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_451);
														}}
														BgL_arg2630z00_430 = BgL_res2659z00_452;
													}
													{	/* Foreign/cenum.scm 35 */
														obj_t BgL_list2631z00_431;

														{	/* Foreign/cenum.scm 35 */
															obj_t BgL_arg2642z00_432;

															BgL_arg2642z00_432 =
																MAKE_PAIR(BgL_arg2630z00_430, BNIL);
															BgL_list2631z00_431 =
																MAKE_PAIR(BgL_arg2629z00_429,
																BgL_arg2642z00_432);
														}
														BgL_arg2628z00_428 =
															BGl_stringzd2appendzd2zz__r4_strings_6_7z00
															(BgL_list2631z00_431);
												}}
												BgL_bidzf3zf3_273 =
													string_to_symbol(BSTRING_TO_STRING
													(BgL_arg2628z00_428));
											}
											{	/* Foreign/cenum.scm 35 */
												obj_t BgL_bidzf3zd2boolz21_274;

												{	/* Foreign/cenum.scm 36 */
													obj_t BgL_arg2602z00_423;

													{	/* Foreign/cenum.scm 36 */
														obj_t BgL_arg2608z00_424;

														obj_t BgL_arg2615z00_425;

														{	/* Foreign/cenum.scm 36 */
															obj_t BgL_res2660z00_456;

															{	/* Foreign/cenum.scm 36 */
																obj_t BgL_arg2063z00_455;

																BgL_arg2063z00_455 =
																	SYMBOL_TO_STRING(BgL_bidzf3zf3_273);
																BgL_res2660z00_456 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_455);
															}
															BgL_arg2608z00_424 = BgL_res2660z00_456;
														}
														{	/* Foreign/cenum.scm 36 */
															obj_t BgL_res2661z00_459;

															{	/* Foreign/cenum.scm 36 */
																obj_t BgL_symbolz00_457;

																BgL_symbolz00_457 = CNST_TABLE_REF(((long) 2));
																{	/* Foreign/cenum.scm 36 */
																	obj_t BgL_arg2063z00_458;

																	BgL_arg2063z00_458 =
																		SYMBOL_TO_STRING(BgL_symbolz00_457);
																	BgL_res2661z00_459 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg2063z00_458);
															}}
															BgL_arg2615z00_425 = BgL_res2661z00_459;
														}
														{	/* Foreign/cenum.scm 36 */
															obj_t BgL_list2616z00_426;

															{	/* Foreign/cenum.scm 36 */
																obj_t BgL_arg2621z00_427;

																BgL_arg2621z00_427 =
																	MAKE_PAIR(BgL_arg2615z00_425, BNIL);
																BgL_list2616z00_426 =
																	MAKE_PAIR(BgL_arg2608z00_424,
																	BgL_arg2621z00_427);
															}
															BgL_arg2602z00_423 =
																BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																(BgL_list2616z00_426);
													}}
													BgL_bidzf3zd2boolz21_274 =
														string_to_symbol(BSTRING_TO_STRING
														(BgL_arg2602z00_423));
												}
												{	/* Foreign/cenum.scm 36 */
													obj_t BgL_namez00_275;

													BgL_namez00_275 =
														(((BgL_typez00_bglt) CREF(BgL_whoz00_263))->
														BgL_namez00);
													{	/* Foreign/cenum.scm 37 */
														obj_t BgL_namezd2sanszd2z42z42_276;

														BgL_namezd2sanszd2z42z42_276 =
															BGl_stringzd2sanszd2z42z42zztype_toolsz00
															(BgL_namez00_275);
														{	/* Foreign/cenum.scm 38 */
															obj_t BgL_literalsz00_277;

															{
																obj_t BgL_auxz00_558;

																{	/* Foreign/cenum.scm 39 */
																	BgL_objectz00_bglt BgL_auxz00_559;

																	BgL_auxz00_559 =
																		(BgL_objectz00_bglt) (BgL_whatz00_262);
																	BgL_auxz00_558 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_559);
																}
																BgL_literalsz00_277 =
																	(((BgL_cenumz00_bglt) CREF(BgL_auxz00_558))->
																	BgL_literalsz00);
															}
															{	/* Foreign/cenum.scm 39 */

																{

																	{	/* Foreign/cenum.scm 88 */
																		obj_t BgL_arg2185z00_283;

																		{	/* Foreign/cenum.scm 88 */
																			obj_t BgL_list2188z00_286;

																			{	/* Foreign/cenum.scm 88 */
																				obj_t BgL_arg2192z00_287;

																				obj_t BgL_arg2198z00_288;

																				BgL_arg2192z00_287 =
																					CNST_TABLE_REF(((long) 5));
																				{	/* Foreign/cenum.scm 88 */
																					obj_t BgL_arg2199z00_289;

																					BgL_arg2199z00_289 =
																						MAKE_PAIR(CNST_TABLE_REF(((long)
																								1)), BNIL);
																					BgL_arg2198z00_288 =
																						MAKE_PAIR(BgL_idz00_268,
																						BgL_arg2199z00_289);
																				}
																				BgL_list2188z00_286 =
																					MAKE_PAIR(BgL_arg2192z00_287,
																					BgL_arg2198z00_288);
																			}
																			BgL_arg2185z00_283 =
																				BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																				(BgL_list2188z00_286);
																		}
																		{	/* Foreign/cenum.scm 86 */
																			obj_t BgL_list2186z00_284;

																			{	/* Foreign/cenum.scm 86 */
																				obj_t BgL_arg2187z00_285;

																				BgL_arg2187z00_285 =
																					MAKE_PAIR(BgL_arg2185z00_283, BNIL);
																				BgL_list2186z00_284 =
																					MAKE_PAIR(BgL_bidzf3zf3_273,
																					BgL_arg2187z00_285);
																			}
																			BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00
																				(BgL_list2186z00_284);
																	}}
																	{	/* Foreign/cenum.scm 91 */
																		obj_t BgL_arg2200z00_290;

																		{	/* Foreign/cenum.scm 91 */
																			obj_t BgL_arg2208z00_291;

																			obj_t BgL_arg2213z00_292;

																			BgL_arg2208z00_291 =
																				CNST_TABLE_REF(((long) 19));
																			{	/* Foreign/cenum.scm 91 */
																				obj_t BgL_arg2216z00_293;

																				obj_t BgL_arg2222z00_294;

																				{	/* Foreign/cenum.scm 45 */
																					obj_t BgL_arg2325z00_326;

																					obj_t BgL_arg2331z00_327;

																					BgL_arg2325z00_326 =
																						CNST_TABLE_REF(((long) 17));
																					{	/* Foreign/cenum.scm 45 */
																						obj_t BgL_arg2338z00_328;

																						{	/* Foreign/cenum.scm 45 */
																							obj_t BgL_arg2377z00_335;

																							obj_t BgL_arg2383z00_336;

																							BgL_arg2377z00_335 =
																								CNST_TABLE_REF(((long) 18));
																							{	/* Foreign/cenum.scm 45 */
																								obj_t BgL_list2384z00_337;

																								BgL_list2384z00_337 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2383z00_336 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_idz00_268,
																									BgL_list2384z00_337);
																							}
																							BgL_arg2338z00_328 =
																								MAKE_PAIR(BgL_arg2377z00_335,
																								BgL_arg2383z00_336);
																						}
																						{	/* Foreign/cenum.scm 45 */
																							obj_t BgL_list2352z00_331;

																							{	/* Foreign/cenum.scm 45 */
																								obj_t BgL_arg2357z00_332;

																								{	/* Foreign/cenum.scm 45 */
																									obj_t BgL_arg2364z00_333;

																									{	/* Foreign/cenum.scm 45 */
																										obj_t BgL_arg2370z00_334;

																										BgL_arg2370z00_334 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2364z00_333 =
																											MAKE_PAIR
																											(BGl_string2760z00zzforeign_cenumz00,
																											BgL_arg2370z00_334);
																									}
																									BgL_arg2357z00_332 =
																										MAKE_PAIR
																										(BgL_arg2338z00_328,
																										BgL_arg2364z00_333);
																								}
																								BgL_list2352z00_331 =
																									MAKE_PAIR
																									(BgL_idzd2ze3bidz31_271,
																									BgL_arg2357z00_332);
																							}
																							BgL_arg2331z00_327 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_bidz00_270,
																								BgL_list2352z00_331);
																					}}
																					BgL_arg2216z00_293 =
																						MAKE_PAIR(BgL_arg2325z00_326,
																						BgL_arg2331z00_327);
																				}
																				{	/* Foreign/cenum.scm 48 */
																					obj_t BgL_mnamez00_339;

																					BgL_mnamez00_339 =
																						string_append_3
																						(BGl_string2758z00zzforeign_cenumz00,
																						BgL_namezd2sanszd2z42z42_276,
																						BGl_string2759z00zzforeign_cenumz00);
																					{	/* Foreign/cenum.scm 49 */
																						obj_t BgL_arg2390z00_340;

																						obj_t BgL_arg2396z00_341;

																						BgL_arg2390z00_340 =
																							CNST_TABLE_REF(((long) 17));
																						{	/* Foreign/cenum.scm 49 */
																							obj_t BgL_arg2403z00_342;

																							BgL_arg2403z00_342 =
																								MAKE_PAIR(BgL_bidz00_270, BNIL);
																							{	/* Foreign/cenum.scm 49 */
																								obj_t BgL_list2410z00_344;

																								{	/* Foreign/cenum.scm 49 */
																									obj_t BgL_arg2416z00_345;

																									{	/* Foreign/cenum.scm 49 */
																										obj_t BgL_arg2422z00_346;

																										{	/* Foreign/cenum.scm 49 */
																											obj_t BgL_arg2429z00_347;

																											BgL_arg2429z00_347 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg2422z00_346 =
																												MAKE_PAIR
																												(BgL_mnamez00_339,
																												BgL_arg2429z00_347);
																										}
																										BgL_arg2416z00_345 =
																											MAKE_PAIR
																											(BgL_arg2403z00_342,
																											BgL_arg2422z00_346);
																									}
																									BgL_list2410z00_344 =
																										MAKE_PAIR
																										(BgL_bidzd2ze3idz31_272,
																										BgL_arg2416z00_345);
																								}
																								BgL_arg2396z00_341 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_idz00_268,
																									BgL_list2410z00_344);
																						}}
																						BgL_arg2222z00_294 =
																							MAKE_PAIR(BgL_arg2390z00_340,
																							BgL_arg2396z00_341);
																				}}
																				{	/* Foreign/cenum.scm 91 */
																					obj_t BgL_list2227z00_296;

																					{	/* Foreign/cenum.scm 91 */
																						obj_t BgL_arg2233z00_297;

																						BgL_arg2233z00_297 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list2227z00_296 =
																							MAKE_PAIR(BgL_arg2222z00_294,
																							BgL_arg2233z00_297);
																					}
																					BgL_arg2213z00_292 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2216z00_293,
																						BgL_list2227z00_296);
																			}}
																			BgL_arg2200z00_290 =
																				MAKE_PAIR(BgL_arg2208z00_291,
																				BgL_arg2213z00_292);
																		}
																		BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																			(BgL_arg2200z00_290);
																	}
																	{	/* Foreign/cenum.scm 93 */
																		obj_t BgL_arg2237z00_298;

																		{	/* Foreign/cenum.scm 93 */
																			obj_t BgL_arg2239z00_299;

																			obj_t BgL_arg2240z00_300;

																			BgL_arg2239z00_299 =
																				CNST_TABLE_REF(((long) 20));
																			{	/* Foreign/cenum.scm 94 */
																				obj_t BgL_arg2242z00_301;

																				{	/* Foreign/cenum.scm 94 */
																					obj_t BgL_arg2245z00_304;

																					{	/* Foreign/cenum.scm 94 */
																						obj_t BgL_arg2252z00_305;

																						{	/* Foreign/cenum.scm 94 */
																							obj_t BgL_list2253z00_306;

																							BgL_list2253z00_306 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2252z00_305 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(CNST_TABLE_REF(((long) 21)),
																								BgL_list2253z00_306);
																						}
																						BgL_arg2245z00_304 =
																							MAKE_PAIR
																							(BgL_bidzf3zd2boolz21_274,
																							BgL_arg2252z00_305);
																					}
																					BgL_arg2242z00_301 =
																						BGl_makezd2protozd2inlinez00zzforeign_libraryz00
																						(BgL_arg2245z00_304);
																				}
																				{	/* Foreign/cenum.scm 93 */
																					obj_t BgL_list2244z00_303;

																					BgL_list2244z00_303 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2240z00_300 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2242z00_301,
																						BgL_list2244z00_303);
																			}}
																			BgL_arg2237z00_298 =
																				MAKE_PAIR(BgL_arg2239z00_299,
																				BgL_arg2240z00_300);
																		}
																		BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																			(BgL_arg2237z00_298);
																	}
																	{	/* Foreign/cenum.scm 95 */
																		obj_t BgL_arg2255z00_307;

																		{	/* Foreign/cenum.scm 95 */
																			obj_t BgL_arg2259z00_308;

																			obj_t BgL_arg2260z00_309;

																			BgL_arg2259z00_308 =
																				CNST_TABLE_REF(((long) 4));
																			{	/* Foreign/cenum.scm 95 */
																				obj_t BgL_arg2267z00_310;

																				{	/* Foreign/cenum.scm 95 */
																					obj_t BgL_arg2282z00_313;

																					{	/* Foreign/cenum.scm 95 */
																						obj_t BgL_arg2285z00_314;

																						{	/* Foreign/cenum.scm 95 */
																							obj_t BgL_arg2290z00_317;

																							obj_t BgL_arg2295z00_318;

																							BgL_arg2290z00_317 =
																								CNST_TABLE_REF(((long) 22));
																							{	/* Foreign/cenum.scm 95 */
																								obj_t BgL_list2296z00_319;

																								BgL_list2296z00_319 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2295z00_318 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_widz00_269,
																									BgL_list2296z00_319);
																							}
																							BgL_arg2285z00_314 =
																								MAKE_PAIR(BgL_arg2290z00_317,
																								BgL_arg2295z00_318);
																						}
																						{	/* Foreign/cenum.scm 95 */
																							obj_t BgL_list2287z00_316;

																							BgL_list2287z00_316 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2282z00_313 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2285z00_314,
																								BgL_list2287z00_316);
																					}}
																					BgL_arg2267z00_310 =
																						MAKE_PAIR(BgL_bidzf3zf3_273,
																						BgL_arg2282z00_313);
																				}
																				{	/* Foreign/cenum.scm 95 */
																					obj_t BgL_list2275z00_312;

																					BgL_list2275z00_312 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2260z00_309 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2267z00_310,
																						BgL_list2275z00_312);
																			}}
																			BgL_arg2255z00_307 =
																				MAKE_PAIR(BgL_arg2259z00_308,
																				BgL_arg2260z00_309);
																		}
																		BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																			(BgL_arg2255z00_307);
																	}
																	{	/* Foreign/cenum.scm 98 */
																		obj_t BgL_arg2297z00_320;

																		obj_t BgL_arg2305z00_321;

																		{	/* Foreign/cenum.scm 62 */
																			obj_t BgL_arg2523z00_378;

																			obj_t BgL_arg2529z00_379;

																			{	/* Foreign/cenum.scm 62 */
																				obj_t BgL_arg2531z00_380;

																				obj_t BgL_arg2536z00_381;

																				{	/* Foreign/cenum.scm 62 */
																					obj_t BgL_list2537z00_382;

																					{	/* Foreign/cenum.scm 62 */
																						obj_t BgL_arg2544z00_383;

																						obj_t BgL_arg2550z00_384;

																						BgL_arg2544z00_383 =
																							CNST_TABLE_REF(((long) 5));
																						{	/* Foreign/cenum.scm 62 */
																							obj_t BgL_arg2554z00_385;

																							BgL_arg2554z00_385 =
																								MAKE_PAIR(CNST_TABLE_REF(((long)
																										6)), BNIL);
																							BgL_arg2550z00_384 =
																								MAKE_PAIR(BgL_idz00_268,
																								BgL_arg2554z00_385);
																						}
																						BgL_list2537z00_382 =
																							MAKE_PAIR(BgL_arg2544z00_383,
																							BgL_arg2550z00_384);
																					}
																					BgL_arg2531z00_380 =
																						BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																						(BgL_list2537z00_382);
																				}
																				{	/* Foreign/cenum.scm 63 */
																					obj_t BgL_arg2555z00_386;

																					obj_t BgL_arg2556z00_387;

																					BgL_arg2555z00_386 =
																						BGl_makezd2typedzd2identz00zzast_identz00
																						(CNST_TABLE_REF(((long) 7)),
																						BgL_idz00_268);
																					BgL_arg2556z00_387 =
																						BGl_makezd2typedzd2identz00zzast_identz00
																						(CNST_TABLE_REF(((long) 8)),
																						BgL_idz00_268);
																					{	/* Foreign/cenum.scm 62 */
																						obj_t BgL_list2558z00_389;

																						{	/* Foreign/cenum.scm 62 */
																							obj_t BgL_arg2559z00_390;

																							BgL_arg2559z00_390 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list2558z00_389 =
																								MAKE_PAIR(BgL_arg2556z00_387,
																								BgL_arg2559z00_390);
																						}
																						BgL_arg2536z00_381 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2555z00_386,
																							BgL_list2558z00_389);
																				}}
																				BgL_arg2523z00_378 =
																					MAKE_PAIR(BgL_arg2531z00_380,
																					BgL_arg2536z00_381);
																			}
																			BgL_arg2529z00_379 =
																				CNST_TABLE_REF(((long) 9));
																			BgL_arg2297z00_320 =
																				BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																				(BgL_arg2523z00_378,
																				BgL_arg2529z00_379);
																		}
																		{	/* Foreign/cenum.scm 98 */
																			obj_t BgL_arg2312z00_322;

																			obj_t BgL_arg2318z00_323;

																			{	/* Foreign/cenum.scm 54 */
																				obj_t BgL_arg2431z00_349;

																				obj_t BgL_arg2437z00_350;

																				{	/* Foreign/cenum.scm 54 */
																					obj_t BgL_arg2438z00_351;

																					{	/* Foreign/cenum.scm 54 */
																						obj_t BgL_list2439z00_352;

																						BgL_list2439z00_352 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg2438z00_351 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(CNST_TABLE_REF(((long) 10)),
																							BgL_list2439z00_352);
																					}
																					BgL_arg2431z00_349 =
																						MAKE_PAIR(BgL_bidzf3zd2boolz21_274,
																						BgL_arg2438z00_351);
																				}
																				{	/* Foreign/cenum.scm 55 */
																					obj_t BgL_arg2444z00_353;

																					obj_t BgL_arg2445z00_354;

																					BgL_arg2444z00_353 =
																						CNST_TABLE_REF(((long) 11));
																					{	/* Foreign/cenum.scm 55 */
																						obj_t BgL_arg2448z00_355;

																						obj_t BgL_arg2451z00_356;

																						{	/* Foreign/cenum.scm 55 */
																							obj_t BgL_arg2460z00_361;

																							obj_t BgL_arg2461z00_362;

																							BgL_arg2460z00_361 =
																								CNST_TABLE_REF(((long) 12));
																							{	/* Foreign/cenum.scm 55 */
																								obj_t BgL_list2462z00_363;

																								BgL_list2462z00_363 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2461z00_362 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(CNST_TABLE_REF(((long) 13)),
																									BgL_list2462z00_363);
																							}
																							BgL_arg2448z00_355 =
																								MAKE_PAIR(BgL_arg2460z00_361,
																								BgL_arg2461z00_362);
																						}
																						{	/* Foreign/cenum.scm 56 */
																							obj_t BgL_arg2470z00_364;

																							obj_t BgL_arg2471z00_365;

																							BgL_arg2470z00_364 =
																								CNST_TABLE_REF(((long) 14));
																							{	/* Foreign/cenum.scm 56 */
																								obj_t BgL_arg2472z00_366;

																								obj_t BgL_arg2476z00_367;

																								{	/* Foreign/cenum.scm 56 */
																									obj_t BgL_arg2492z00_371;

																									obj_t BgL_arg2493z00_372;

																									BgL_arg2492z00_371 =
																										CNST_TABLE_REF(((long) 15));
																									{	/* Foreign/cenum.scm 56 */
																										obj_t BgL_list2494z00_373;

																										BgL_list2494z00_373 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2493z00_372 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(CNST_TABLE_REF(((long)
																													13)),
																											BgL_list2494z00_373);
																									}
																									BgL_arg2472z00_366 =
																										MAKE_PAIR
																										(BgL_arg2492z00_371,
																										BgL_arg2493z00_372);
																								}
																								{	/* Foreign/cenum.scm 56 */
																									obj_t BgL_arg2503z00_374;

																									obj_t BgL_arg2504z00_375;

																									BgL_arg2503z00_374 =
																										CNST_TABLE_REF(((long) 16));
																									{	/* Foreign/cenum.scm 56 */
																										obj_t BgL_list2505z00_376;

																										BgL_list2505z00_376 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2504z00_375 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_bidz00_270,
																											BgL_list2505z00_376);
																									}
																									BgL_arg2476z00_367 =
																										MAKE_PAIR
																										(BgL_arg2503z00_374,
																										BgL_arg2504z00_375);
																								}
																								{	/* Foreign/cenum.scm 56 */
																									obj_t BgL_list2478z00_369;

																									{	/* Foreign/cenum.scm 56 */
																										obj_t BgL_arg2491z00_370;

																										BgL_arg2491z00_370 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list2478z00_369 =
																											MAKE_PAIR
																											(BgL_arg2476z00_367,
																											BgL_arg2491z00_370);
																									}
																									BgL_arg2471z00_365 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg2472z00_366,
																										BgL_list2478z00_369);
																							}}
																							BgL_arg2451z00_356 =
																								MAKE_PAIR(BgL_arg2470z00_364,
																								BgL_arg2471z00_365);
																						}
																						{	/* Foreign/cenum.scm 55 */
																							obj_t BgL_list2453z00_358;

																							{	/* Foreign/cenum.scm 55 */
																								obj_t BgL_arg2454z00_359;

																								{	/* Foreign/cenum.scm 55 */
																									obj_t BgL_arg2459z00_360;

																									BgL_arg2459z00_360 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg2454z00_359 =
																										MAKE_PAIR(BFALSE,
																										BgL_arg2459z00_360);
																								}
																								BgL_list2453z00_358 =
																									MAKE_PAIR(BgL_arg2451z00_356,
																									BgL_arg2454z00_359);
																							}
																							BgL_arg2445z00_354 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2448z00_355,
																								BgL_list2453z00_358);
																					}}
																					BgL_arg2437z00_350 =
																						MAKE_PAIR(BgL_arg2444z00_353,
																						BgL_arg2445z00_354);
																				}
																				BgL_arg2312z00_322 =
																					BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																					(BgL_arg2431z00_349,
																					BgL_arg2437z00_350);
																			}
																			{
																				obj_t BgL_literalsz00_394;

																				obj_t BgL_resz00_395;

																				BgL_literalsz00_394 =
																					BgL_literalsz00_277;
																				BgL_resz00_395 = BNIL;
																			BgL_zc3anonymousza32561ze3z83_396:
																				if (NULLP(BgL_literalsz00_394))
																					{	/* Foreign/cenum.scm 71 */
																						BgL_arg2318z00_323 = BgL_resz00_395;
																					}
																				else
																					{	/* Foreign/cenum.scm 73 */
																						obj_t BgL_literalz00_398;

																						BgL_literalz00_398 =
																							CAR(BgL_literalsz00_394);
																						{	/* Foreign/cenum.scm 73 */
																							obj_t BgL_literalzd2idzd2_399;

																							BgL_literalzd2idzd2_399 =
																								CAR(BgL_literalz00_398);
																							{	/* Foreign/cenum.scm 74 */
																								obj_t BgL_literalzd2namezd2_400;

																								{	/* Foreign/cenum.scm 75 */
																									obj_t BgL_pairz00_466;

																									BgL_pairz00_466 =
																										BgL_literalz00_398;
																									BgL_literalzd2namezd2_400 =
																										CAR(CDR(BgL_pairz00_466));
																								}
																								{	/* Foreign/cenum.scm 75 */
																									obj_t BgL_accesszd2idzd2_401;

																									{	/* Foreign/cenum.scm 76 */
																										obj_t BgL_list2589z00_413;

																										{	/* Foreign/cenum.scm 76 */
																											obj_t BgL_arg2590z00_414;

																											{	/* Foreign/cenum.scm 76 */
																												obj_t
																													BgL_arg2594z00_415;
																												obj_t
																													BgL_arg2595z00_416;
																												BgL_arg2594z00_415 =
																													CNST_TABLE_REF(((long)
																														3));
																												BgL_arg2595z00_416 =
																													MAKE_PAIR
																													(BgL_literalzd2idzd2_399,
																													BNIL);
																												BgL_arg2590z00_414 =
																													MAKE_PAIR
																													(BgL_arg2594z00_415,
																													BgL_arg2595z00_416);
																											}
																											BgL_list2589z00_413 =
																												MAKE_PAIR(BgL_idz00_268,
																												BgL_arg2590z00_414);
																										}
																										BgL_accesszd2idzd2_401 =
																											BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																											(BgL_list2589z00_413);
																									}
																									{	/* Foreign/cenum.scm 76 */
																										obj_t BgL_accessz00_402;

																										{	/* Foreign/cenum.scm 78 */
																											obj_t BgL_arg2566z00_406;

																											obj_t BgL_arg2571z00_407;

																											BgL_arg2566z00_406 =
																												MAKE_PAIR
																												(BGl_makezd2typedzd2identz00zzast_identz00
																												(BgL_accesszd2idzd2_401,
																													BgL_widz00_269),
																												BNIL);
																											{	/* Foreign/cenum.scm 79 */
																												obj_t
																													BgL_arg2586z00_410;
																												obj_t
																													BgL_arg2587z00_411;
																												BgL_arg2586z00_410 =
																													BGl_makezd2typedzd2identz00zzast_identz00
																													(CNST_TABLE_REF((
																															(long) 4)),
																													BgL_widz00_269);
																												{	/* Foreign/cenum.scm 79 */
																													obj_t
																														BgL_list2588z00_412;
																													BgL_list2588z00_412 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg2587z00_411 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_literalzd2namezd2_400,
																														BgL_list2588z00_412);
																												}
																												BgL_arg2571z00_407 =
																													MAKE_PAIR
																													(BgL_arg2586z00_410,
																													BgL_arg2587z00_411);
																											}
																											BgL_accessz00_402 =
																												BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																												(BgL_arg2566z00_406,
																												BgL_arg2571z00_407);
																										}
																										{	/* Foreign/cenum.scm 77 */

																											{	/* Foreign/cenum.scm 81 */
																												obj_t
																													BgL_list2563z00_403;
																												BgL_list2563z00_403 =
																													MAKE_PAIR
																													(BgL_accesszd2idzd2_401,
																													BNIL);
																												BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00
																													(BgL_list2563z00_403);
																											}
																											{	/* Foreign/cenum.scm 82 */
																												obj_t
																													BgL_arg2564z00_404;
																												obj_t
																													BgL_arg2565z00_405;
																												BgL_arg2564z00_404 =
																													CDR
																													(BgL_literalsz00_394);
																												BgL_arg2565z00_405 =
																													MAKE_PAIR
																													(BgL_accessz00_402,
																													BgL_resz00_395);
																												{
																													obj_t BgL_resz00_690;

																													obj_t
																														BgL_literalsz00_689;
																													BgL_literalsz00_689 =
																														BgL_arg2564z00_404;
																													BgL_resz00_690 =
																														BgL_arg2565z00_405;
																													BgL_resz00_395 =
																														BgL_resz00_690;
																													BgL_literalsz00_394 =
																														BgL_literalsz00_689;
																													goto
																														BgL_zc3anonymousza32561ze3z83_396;
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																			}
																			{	/* Foreign/cenum.scm 98 */
																				obj_t BgL_list2319z00_324;

																				BgL_list2319z00_324 =
																					MAKE_PAIR(BgL_arg2318z00_323, BNIL);
																				BgL_arg2305z00_321 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2312z00_322,
																					BgL_list2319z00_324);
																			}
																		}
																		return
																			MAKE_PAIR(BgL_arg2297z00_320,
																			BgL_arg2305z00_321);
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
	obj_t BGl_importedzd2moduleszd2initz00zzforeign_cenumz00()
	{
		AN_OBJECT;
		{	/* Foreign/cenum.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string2761z00zzforeign_cenumz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 195902195),
				BSTRING_TO_STRING(BGl_string2761z00zzforeign_cenumz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2761z00zzforeign_cenumz00));
			BGl_modulezd2initializa7ationz75zzforeign_ctypez00(((long) 178768066),
				BSTRING_TO_STRING(BGl_string2761z00zzforeign_cenumz00));
			BGl_modulezd2initializa7ationz75zzforeign_accessz00(((long) 477377954),
				BSTRING_TO_STRING(BGl_string2761z00zzforeign_cenumz00));
			BGl_modulezd2initializa7ationz75zzforeign_libraryz00(((long) 477408199),
				BSTRING_TO_STRING(BGl_string2761z00zzforeign_cenumz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string2761z00zzforeign_cenumz00));
			return
				BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string2761z00zzforeign_cenumz00));
		}
	}

#ifdef __cplusplus
}
#endif
