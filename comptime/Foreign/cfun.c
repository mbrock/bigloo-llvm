/*===========================================================================*/
/*   (Foreign/cfun.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Foreign/cfun.scm)*/
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

	typedef struct BgL_cfunctionz00_bgl
	{
		struct BgL_typez00_bgl *BgL_btypez00;
		long BgL_arityz00;
		struct BgL_typez00_bgl *BgL_typezd2reszd2;
		obj_t BgL_typezd2argszd2;
	}                   *BgL_cfunctionz00_bglt;


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t
		BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00(obj_t);
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzforeign_cfunctionz00();
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzforeign_cfunctionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_libraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_accessz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_ctypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzforeign_cfunctionz00();
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_za2maxzd2czd2foreignzd2arityza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	extern obj_t BGl_cfunctionz00zzforeign_ctypez00;
	static obj_t BGl_methodzd2initzd2zzforeign_cfunctionz00();
	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzforeign_cfunctionz00 =
		BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzforeign_cfunctionz00();
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_makezd2definezd2inlinez00zzforeign_libraryz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzforeign_cfunctionz00();
	static obj_t
		BGl_makezd2ctypezd2accessesz122156z12zzforeign_cfunctionz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_stringzd2sanszd2z42z42zztype_toolsz00(obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_makezd2protozd2inlinez00zzforeign_libraryz00(obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzforeign_cfunctionz00();
	static obj_t __cnst[25];


	extern obj_t BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2762z00zzforeign_cfunctionz00,
		BgL_bgl_makeza7d2ctypeza7d2a2777z00,
		BGl_makezd2ctypezd2accessesz122156z12zzforeign_cfunctionz00, 0L, BUNSPEC,
		3);
	      DEFINE_STRING(BGl_string2763z00zzforeign_cfunctionz00,
		BgL_bgl_string2763za700za7za7f2778za7, "make-ctype-accesses!", 20);
	      DEFINE_STRING(BGl_string2764z00zzforeign_cfunctionz00,
		BgL_bgl_string2764za700za7za7f2779za7,
		"Too large arity for a foreign function (max", 43);
	      DEFINE_STRING(BGl_string2765z00zzforeign_cfunctionz00,
		BgL_bgl_string2765za700za7za7f2780za7, ")", 1);
	      DEFINE_STRING(BGl_string2766z00zzforeign_cfunctionz00,
		BgL_bgl_string2766za700za7za7f2781za7, " args provided", 14);
	      DEFINE_STRING(BGl_string2767z00zzforeign_cfunctionz00,
		BgL_bgl_string2767za700za7za7f2782za7, "bigloo", 6);
	      DEFINE_STRING(BGl_string2768z00zzforeign_cfunctionz00,
		BgL_bgl_string2768za700za7za7f2783za7,
		"Can't manage pointers on C multiple arity function", 50);
	      DEFINE_STRING(BGl_string2770z00zzforeign_cfunctionz00,
		BgL_bgl_string2770za700za7za7f2784za7, "(", 1);
	      DEFINE_STRING(BGl_string2769z00zzforeign_cfunctionz00,
		BgL_bgl_string2769za700za7za7f2785za7, "C_FUNCTION_CALL_", 16);
	      DEFINE_STRING(BGl_string2771z00zzforeign_cfunctionz00,
		BgL_bgl_string2771za700za7za7f2786za7, ")FOREIGN_TO_COBJ", 16);
	      DEFINE_STRING(BGl_string2772z00zzforeign_cfunctionz00,
		BgL_bgl_string2772za700za7za7f2787za7, "cobj_to_foreign", 15);
	      DEFINE_STRING(BGl_string2773z00zzforeign_cfunctionz00,
		BgL_bgl_string2773za700za7za7f2788za7, "foreign_cfunction", 17);
	      DEFINE_STRING(BGl_string2774z00zzforeign_cfunctionz00,
		BgL_bgl_string2774za700za7za7f2789za7,
		"predicate-of pragma ::obj static foreign symbol quote foreign-id eq? o foreign? if o::obj (pragma::bool \"($1 == $2)\" o1 o2) o2 o1 ?::bool = macro f c- ::bool ? -> -call ",
		169);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzforeign_cfunctionz00(long
		BgL_checksumz00_681, char *BgL_fromz00_682)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzforeign_cfunctionz00))
				{
					BGl_requirezd2initializa7ationz75zzforeign_cfunctionz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzforeign_cfunctionz00();
					BGl_cnstzd2initzd2zzforeign_cfunctionz00();
					BGl_importedzd2moduleszd2initz00zzforeign_cfunctionz00();
					BGl_methodzd2initzd2zzforeign_cfunctionz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzforeign_cfunctionz00()
	{
		AN_OBJECT;
		{	/* Foreign/cfun.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"foreign_cfunction");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"foreign_cfunction");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"foreign_cfunction");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"foreign_cfunction");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"foreign_cfunction");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"foreign_cfunction");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzforeign_cfunctionz00()
	{
		AN_OBJECT;
		{	/* Foreign/cfun.scm 15 */
			{	/* Foreign/cfun.scm 15 */
				obj_t BgL_cportz00_673;

				BgL_cportz00_673 =
					bgl_open_input_string(BGl_string2774z00zzforeign_cfunctionz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_674;

					BgL_iz00_674 = ((long) 24);
				BgL_loopz00_675:
					if ((BgL_iz00_674 == ((long) -1)))
						{	/* Foreign/cfun.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Foreign/cfun.scm 15 */
							{	/* Foreign/cfun.scm 15 */
								obj_t BgL_arg2776z00_677;

								{	/* Foreign/cfun.scm 15 */

									{	/* Foreign/cfun.scm 15 */
										obj_t BgL_locationz00_679;

										BgL_locationz00_679 = BBOOL(((bool_t) 0));
										{	/* Foreign/cfun.scm 15 */

											BgL_arg2776z00_677 =
												BGl_readz00zz__readerz00(BgL_cportz00_673,
												BgL_locationz00_679);
										}
									}
								}
								{	/* Foreign/cfun.scm 15 */
									int BgL_auxz00_702;

									BgL_auxz00_702 = (int) (BgL_iz00_674);
									CNST_TABLE_SET(BgL_auxz00_702, BgL_arg2776z00_677);
							}}
							{	/* Foreign/cfun.scm 15 */
								int BgL_auxz00_680;

								BgL_auxz00_680 = (int) ((BgL_iz00_674 - ((long) 1)));
								{
									long BgL_iz00_707;

									BgL_iz00_707 = (long) (BgL_auxz00_680);
									BgL_iz00_674 = BgL_iz00_707;
									goto BgL_loopz00_675;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzforeign_cfunctionz00()
	{
		AN_OBJECT;
		{	/* Foreign/cfun.scm 15 */
			return BUNSPEC;
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzforeign_cfunctionz00()
	{
		AN_OBJECT;
		{	/* Foreign/cfun.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzforeign_cfunctionz00()
	{
		AN_OBJECT;
		{	/* Foreign/cfun.scm 15 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00,
				BGl_cfunctionz00zzforeign_ctypez00,
				BGl_proc2762z00zzforeign_cfunctionz00,
				BGl_string2763z00zzforeign_cfunctionz00);
		}
	}



/* make-ctype-accesses!2156 */
	obj_t BGl_makezd2ctypezd2accessesz122156z12zzforeign_cfunctionz00(obj_t
		BgL_envz00_665, obj_t BgL_whatz00_666, obj_t BgL_whoz00_667,
		obj_t BgL_locz00_668)
	{
		AN_OBJECT;
		{	/* Foreign/cfun.scm 30 */
			{
				BgL_cfunctionz00_bglt BgL_whatz00_262;

				BgL_typez00_bglt BgL_whoz00_263;

				obj_t BgL_locz00_264;

				BgL_whatz00_262 = (BgL_cfunctionz00_bglt) (BgL_whatz00_666);
				BgL_whoz00_263 = (BgL_typez00_bglt) (BgL_whoz00_667);
				BgL_locz00_264 = BgL_locz00_668;
				{	/* Foreign/cfun.scm 31 */
					BgL_typez00_bglt BgL_btypez00_267;

					{
						obj_t BgL_auxz00_710;

						{	/* Foreign/cfun.scm 31 */
							BgL_objectz00_bglt BgL_auxz00_711;

							BgL_auxz00_711 = (BgL_objectz00_bglt) (BgL_whatz00_262);
							BgL_auxz00_710 = BGL_OBJECT_WIDENING(BgL_auxz00_711);
						}
						BgL_btypez00_267 =
							(((BgL_cfunctionz00_bglt) CREF(BgL_auxz00_710))->BgL_btypez00);
					}
					{	/* Foreign/cfun.scm 31 */
						obj_t BgL_idz00_268;

						BgL_idz00_268 =
							(((BgL_typez00_bglt) CREF(BgL_whoz00_263))->BgL_idz00);
						{	/* Foreign/cfun.scm 32 */
							obj_t BgL_widz00_269;

							{
								BgL_typez00_bglt BgL_auxz00_716;

								BgL_auxz00_716 = (BgL_typez00_bglt) (BgL_whatz00_262);
								BgL_widz00_269 =
									(((BgL_typez00_bglt) CREF(BgL_auxz00_716))->BgL_idz00);
							}
							{	/* Foreign/cfun.scm 33 */
								obj_t BgL_bidz00_270;

								BgL_bidz00_270 =
									(((BgL_typez00_bglt) CREF(BgL_btypez00_267))->BgL_idz00);
								{	/* Foreign/cfun.scm 34 */
									obj_t BgL_callzd2idzd2_271;

									{	/* Foreign/cfun.scm 35 */
										obj_t BgL_arg2738z00_553;

										{	/* Foreign/cfun.scm 35 */
											obj_t BgL_arg2739z00_554;

											obj_t BgL_arg2740z00_555;

											{	/* Foreign/cfun.scm 35 */
												obj_t BgL_res2744z00_566;

												{	/* Foreign/cfun.scm 35 */
													obj_t BgL_arg2063z00_565;

													BgL_arg2063z00_565 = SYMBOL_TO_STRING(BgL_idz00_268);
													BgL_res2744z00_566 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg2063z00_565);
												}
												BgL_arg2739z00_554 = BgL_res2744z00_566;
											}
											{	/* Foreign/cfun.scm 35 */
												obj_t BgL_res2745z00_569;

												{	/* Foreign/cfun.scm 35 */
													obj_t BgL_symbolz00_567;

													BgL_symbolz00_567 = CNST_TABLE_REF(((long) 0));
													{	/* Foreign/cfun.scm 35 */
														obj_t BgL_arg2063z00_568;

														BgL_arg2063z00_568 =
															SYMBOL_TO_STRING(BgL_symbolz00_567);
														BgL_res2745z00_569 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg2063z00_568);
												}}
												BgL_arg2740z00_555 = BgL_res2745z00_569;
											}
											{	/* Foreign/cfun.scm 35 */
												obj_t BgL_list2741z00_556;

												{	/* Foreign/cfun.scm 35 */
													obj_t BgL_arg2742z00_557;

													BgL_arg2742z00_557 =
														MAKE_PAIR(BgL_arg2740z00_555, BNIL);
													BgL_list2741z00_556 =
														MAKE_PAIR(BgL_arg2739z00_554, BgL_arg2742z00_557);
												}
												BgL_arg2738z00_553 =
													BGl_stringzd2appendzd2zz__r4_strings_6_7z00
													(BgL_list2741z00_556);
										}}
										BgL_callzd2idzd2_271 =
											string_to_symbol(BSTRING_TO_STRING(BgL_arg2738z00_553));
									}
									{	/* Foreign/cfun.scm 35 */
										obj_t BgL_idzd2ze3bidz31_272;

										{	/* Foreign/cfun.scm 36 */
											obj_t BgL_list2734z00_549;

											{	/* Foreign/cfun.scm 36 */
												obj_t BgL_arg2735z00_550;

												{	/* Foreign/cfun.scm 36 */
													obj_t BgL_arg2736z00_551;

													obj_t BgL_arg2737z00_552;

													BgL_arg2736z00_551 = CNST_TABLE_REF(((long) 1));
													BgL_arg2737z00_552 = MAKE_PAIR(BgL_bidz00_270, BNIL);
													BgL_arg2735z00_550 =
														MAKE_PAIR(BgL_arg2736z00_551, BgL_arg2737z00_552);
												}
												BgL_list2734z00_549 =
													MAKE_PAIR(BgL_idz00_268, BgL_arg2735z00_550);
											}
											BgL_idzd2ze3bidz31_272 =
												BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
												(BgL_list2734z00_549);
										}
										{	/* Foreign/cfun.scm 36 */
											obj_t BgL_bidzd2ze3idz31_273;

											{	/* Foreign/cfun.scm 37 */
												obj_t BgL_list2730z00_545;

												{	/* Foreign/cfun.scm 37 */
													obj_t BgL_arg2731z00_546;

													{	/* Foreign/cfun.scm 37 */
														obj_t BgL_arg2732z00_547;

														obj_t BgL_arg2733z00_548;

														BgL_arg2732z00_547 = CNST_TABLE_REF(((long) 1));
														BgL_arg2733z00_548 = MAKE_PAIR(BgL_idz00_268, BNIL);
														BgL_arg2731z00_546 =
															MAKE_PAIR(BgL_arg2732z00_547, BgL_arg2733z00_548);
													}
													BgL_list2730z00_545 =
														MAKE_PAIR(BgL_bidz00_270, BgL_arg2731z00_546);
												}
												BgL_bidzd2ze3idz31_273 =
													BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
													(BgL_list2730z00_545);
											}
											{	/* Foreign/cfun.scm 37 */
												obj_t BgL_bidzf3zf3_274;

												{	/* Foreign/cfun.scm 38 */
													obj_t BgL_arg2725z00_540;

													{	/* Foreign/cfun.scm 38 */
														obj_t BgL_arg2726z00_541;

														obj_t BgL_arg2727z00_542;

														{	/* Foreign/cfun.scm 38 */
															obj_t BgL_res2746z00_573;

															{	/* Foreign/cfun.scm 38 */
																obj_t BgL_arg2063z00_572;

																BgL_arg2063z00_572 =
																	SYMBOL_TO_STRING(BgL_idz00_268);
																BgL_res2746z00_573 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_572);
															}
															BgL_arg2726z00_541 = BgL_res2746z00_573;
														}
														{	/* Foreign/cfun.scm 38 */
															obj_t BgL_res2747z00_576;

															{	/* Foreign/cfun.scm 38 */
																obj_t BgL_symbolz00_574;

																BgL_symbolz00_574 = CNST_TABLE_REF(((long) 2));
																{	/* Foreign/cfun.scm 38 */
																	obj_t BgL_arg2063z00_575;

																	BgL_arg2063z00_575 =
																		SYMBOL_TO_STRING(BgL_symbolz00_574);
																	BgL_res2747z00_576 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg2063z00_575);
															}}
															BgL_arg2727z00_542 = BgL_res2747z00_576;
														}
														{	/* Foreign/cfun.scm 38 */
															obj_t BgL_list2728z00_543;

															{	/* Foreign/cfun.scm 38 */
																obj_t BgL_arg2729z00_544;

																BgL_arg2729z00_544 =
																	MAKE_PAIR(BgL_arg2727z00_542, BNIL);
																BgL_list2728z00_543 =
																	MAKE_PAIR(BgL_arg2726z00_541,
																	BgL_arg2729z00_544);
															}
															BgL_arg2725z00_540 =
																BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																(BgL_list2728z00_543);
													}}
													BgL_bidzf3zf3_274 =
														string_to_symbol(BSTRING_TO_STRING
														(BgL_arg2725z00_540));
												}
												{	/* Foreign/cfun.scm 38 */
													obj_t BgL_bidzf3zd2boolz21_275;

													{	/* Foreign/cfun.scm 39 */
														obj_t BgL_arg2719z00_535;

														{	/* Foreign/cfun.scm 39 */
															obj_t BgL_arg2720z00_536;

															obj_t BgL_arg2721z00_537;

															{	/* Foreign/cfun.scm 39 */
																obj_t BgL_res2748z00_580;

																{	/* Foreign/cfun.scm 39 */
																	obj_t BgL_arg2063z00_579;

																	BgL_arg2063z00_579 =
																		SYMBOL_TO_STRING(BgL_bidzf3zf3_274);
																	BgL_res2748z00_580 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg2063z00_579);
																}
																BgL_arg2720z00_536 = BgL_res2748z00_580;
															}
															{	/* Foreign/cfun.scm 39 */
																obj_t BgL_res2749z00_583;

																{	/* Foreign/cfun.scm 39 */
																	obj_t BgL_symbolz00_581;

																	BgL_symbolz00_581 =
																		CNST_TABLE_REF(((long) 3));
																	{	/* Foreign/cfun.scm 39 */
																		obj_t BgL_arg2063z00_582;

																		BgL_arg2063z00_582 =
																			SYMBOL_TO_STRING(BgL_symbolz00_581);
																		BgL_res2749z00_583 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2063z00_582);
																}}
																BgL_arg2721z00_537 = BgL_res2749z00_583;
															}
															{	/* Foreign/cfun.scm 39 */
																obj_t BgL_list2722z00_538;

																{	/* Foreign/cfun.scm 39 */
																	obj_t BgL_arg2724z00_539;

																	BgL_arg2724z00_539 =
																		MAKE_PAIR(BgL_arg2721z00_537, BNIL);
																	BgL_list2722z00_538 =
																		MAKE_PAIR(BgL_arg2720z00_536,
																		BgL_arg2724z00_539);
																}
																BgL_arg2719z00_535 =
																	BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																	(BgL_list2722z00_538);
														}}
														BgL_bidzf3zd2boolz21_275 =
															string_to_symbol(BSTRING_TO_STRING
															(BgL_arg2719z00_535));
													}
													{	/* Foreign/cfun.scm 39 */
														obj_t BgL_namez00_276;

														BgL_namez00_276 =
															(((BgL_typez00_bglt) CREF(BgL_whoz00_263))->
															BgL_namez00);
														{	/* Foreign/cfun.scm 40 */
															obj_t BgL_namezd2sanszd2z42z42_277;

															BgL_namezd2sanszd2z42z42_277 =
																BGl_stringzd2sanszd2z42z42zztype_toolsz00
																(BgL_namez00_276);
															{	/* Foreign/cfun.scm 41 */
																BgL_typez00_bglt BgL_typezd2reszd2_278;

																{
																	obj_t BgL_auxz00_762;

																	{	/* Foreign/cfun.scm 42 */
																		BgL_objectz00_bglt BgL_auxz00_763;

																		BgL_auxz00_763 =
																			(BgL_objectz00_bglt) (BgL_whatz00_262);
																		BgL_auxz00_762 =
																			BGL_OBJECT_WIDENING(BgL_auxz00_763);
																	}
																	BgL_typezd2reszd2_278 =
																		(((BgL_cfunctionz00_bglt)
																			CREF(BgL_auxz00_762))->BgL_typezd2reszd2);
																}
																{	/* Foreign/cfun.scm 42 */
																	obj_t BgL_typezd2argszd2_279;

																	{
																		obj_t BgL_auxz00_767;

																		{	/* Foreign/cfun.scm 43 */
																			BgL_objectz00_bglt BgL_auxz00_768;

																			BgL_auxz00_768 =
																				(BgL_objectz00_bglt) (BgL_whatz00_262);
																			BgL_auxz00_767 =
																				BGL_OBJECT_WIDENING(BgL_auxz00_768);
																		}
																		BgL_typezd2argszd2_279 =
																			(((BgL_cfunctionz00_bglt)
																				CREF(BgL_auxz00_767))->
																			BgL_typezd2argszd2);
																	}
																	{	/* Foreign/cfun.scm 43 */
																		long BgL_arityz00_280;

																		{
																			obj_t BgL_auxz00_772;

																			{	/* Foreign/cfun.scm 44 */
																				BgL_objectz00_bglt BgL_auxz00_773;

																				BgL_auxz00_773 =
																					(BgL_objectz00_bglt)
																					(BgL_whatz00_262);
																				BgL_auxz00_772 =
																					BGL_OBJECT_WIDENING(BgL_auxz00_773);
																			}
																			BgL_arityz00_280 =
																				(((BgL_cfunctionz00_bglt)
																					CREF(BgL_auxz00_772))->BgL_arityz00);
																		}
																		{	/* Foreign/cfun.scm 44 */
																			obj_t BgL_nbzd2argszd2_281;

																			{	/* Foreign/cfun.scm 45 */

																				BgL_nbzd2argszd2_281 =
																					BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																					(BgL_arityz00_280, ((long) 10));
																			}
																			{	/* Foreign/cfun.scm 45 */

																				{

																					{	/* Foreign/cfun.scm 113 */
																						obj_t BgL_arg2200z00_289;

																						{	/* Foreign/cfun.scm 113 */
																							obj_t BgL_list2214z00_293;

																							{	/* Foreign/cfun.scm 113 */
																								obj_t BgL_arg2216z00_294;

																								obj_t BgL_arg2222z00_295;

																								BgL_arg2216z00_294 =
																									CNST_TABLE_REF(((long) 7));
																								{	/* Foreign/cfun.scm 113 */
																									obj_t BgL_arg2226z00_296;

																									BgL_arg2226z00_296 =
																										MAKE_PAIR(CNST_TABLE_REF((
																												(long) 2)), BNIL);
																									BgL_arg2222z00_295 =
																										MAKE_PAIR(BgL_idz00_268,
																										BgL_arg2226z00_296);
																								}
																								BgL_list2214z00_293 =
																									MAKE_PAIR(BgL_arg2216z00_294,
																									BgL_arg2222z00_295);
																							}
																							BgL_arg2200z00_289 =
																								BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																								(BgL_list2214z00_293);
																						}
																						{	/* Foreign/cfun.scm 111 */
																							obj_t BgL_list2201z00_290;

																							{	/* Foreign/cfun.scm 111 */
																								obj_t BgL_arg2208z00_291;

																								{	/* Foreign/cfun.scm 111 */
																									obj_t BgL_arg2213z00_292;

																									BgL_arg2213z00_292 =
																										MAKE_PAIR
																										(BgL_callzd2idzd2_271,
																										BNIL);
																									BgL_arg2208z00_291 =
																										MAKE_PAIR
																										(BgL_arg2200z00_289,
																										BgL_arg2213z00_292);
																								}
																								BgL_list2201z00_290 =
																									MAKE_PAIR(BgL_bidzf3zf3_274,
																									BgL_arg2208z00_291);
																							}
																							BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00
																								(BgL_list2201z00_290);
																					}}
																					{	/* Foreign/cfun.scm 117 */
																						obj_t BgL_arg2227z00_297;

																						{	/* Foreign/cfun.scm 117 */
																							obj_t BgL_arg2233z00_298;

																							obj_t BgL_arg2237z00_299;

																							BgL_arg2233z00_298 =
																								CNST_TABLE_REF(((long) 20));
																							{	/* Foreign/cfun.scm 117 */
																								obj_t BgL_arg2239z00_300;

																								obj_t BgL_arg2240z00_301;

																								obj_t BgL_arg2242z00_302;

																								{	/* Foreign/cfun.scm 51 */
																									obj_t BgL_arg2383z00_336;

																									obj_t BgL_arg2390z00_337;

																									BgL_arg2383z00_336 =
																										CNST_TABLE_REF(((long) 6));
																									{	/* Foreign/cfun.scm 51 */
																										obj_t BgL_arg2396z00_338;

																										{	/* Foreign/cfun.scm 51 */
																											obj_t BgL_arg2430z00_345;

																											obj_t BgL_arg2431z00_346;

																											BgL_arg2430z00_345 =
																												CNST_TABLE_REF(((long)
																													19));
																											{	/* Foreign/cfun.scm 51 */
																												obj_t
																													BgL_list2432z00_347;
																												BgL_list2432z00_347 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg2431z00_346 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_idz00_268,
																													BgL_list2432z00_347);
																											}
																											BgL_arg2396z00_338 =
																												MAKE_PAIR
																												(BgL_arg2430z00_345,
																												BgL_arg2431z00_346);
																										}
																										{	/* Foreign/cfun.scm 51 */
																											obj_t BgL_list2410z00_341;

																											{	/* Foreign/cfun.scm 51 */
																												obj_t
																													BgL_arg2416z00_342;
																												{	/* Foreign/cfun.scm 51 */
																													obj_t
																														BgL_arg2422z00_343;
																													{	/* Foreign/cfun.scm 51 */
																														obj_t
																															BgL_arg2429z00_344;
																														BgL_arg2429z00_344 =
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg2422z00_343 =
																															MAKE_PAIR
																															(BGl_string2772z00zzforeign_cfunctionz00,
																															BgL_arg2429z00_344);
																													}
																													BgL_arg2416z00_342 =
																														MAKE_PAIR
																														(BgL_arg2396z00_338,
																														BgL_arg2422z00_343);
																												}
																												BgL_list2410z00_341 =
																													MAKE_PAIR
																													(BgL_idzd2ze3bidz31_272,
																													BgL_arg2416z00_342);
																											}
																											BgL_arg2390z00_337 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_bidz00_270,
																												BgL_list2410z00_341);
																									}}
																									BgL_arg2239z00_300 =
																										MAKE_PAIR
																										(BgL_arg2383z00_336,
																										BgL_arg2390z00_337);
																								}
																								{	/* Foreign/cfun.scm 54 */
																									obj_t BgL_mnamez00_349;

																									BgL_mnamez00_349 =
																										string_append_3
																										(BGl_string2770z00zzforeign_cfunctionz00,
																										BgL_namezd2sanszd2z42z42_277,
																										BGl_string2771z00zzforeign_cfunctionz00);
																									{	/* Foreign/cfun.scm 55 */
																										obj_t BgL_arg2437z00_350;

																										obj_t BgL_arg2438z00_351;

																										BgL_arg2437z00_350 =
																											CNST_TABLE_REF(((long)
																												6));
																										{	/* Foreign/cfun.scm 55 */
																											obj_t BgL_arg2444z00_352;

																											BgL_arg2444z00_352 =
																												MAKE_PAIR
																												(BgL_bidz00_270, BNIL);
																											{	/* Foreign/cfun.scm 55 */
																												obj_t
																													BgL_list2446z00_354;
																												{	/* Foreign/cfun.scm 55 */
																													obj_t
																														BgL_arg2448z00_355;
																													{	/* Foreign/cfun.scm 55 */
																														obj_t
																															BgL_arg2451z00_356;
																														{	/* Foreign/cfun.scm 55 */
																															obj_t
																																BgL_arg2452z00_357;
																															BgL_arg2452z00_357
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_arg2451z00_356
																																=
																																MAKE_PAIR
																																(BgL_mnamez00_349,
																																BgL_arg2452z00_357);
																														}
																														BgL_arg2448z00_355 =
																															MAKE_PAIR
																															(BgL_arg2444z00_352,
																															BgL_arg2451z00_356);
																													}
																													BgL_list2446z00_354 =
																														MAKE_PAIR
																														(BgL_bidzd2ze3idz31_273,
																														BgL_arg2448z00_355);
																												}
																												BgL_arg2438z00_351 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_idz00_268,
																													BgL_list2446z00_354);
																										}}
																										BgL_arg2240z00_301 =
																											MAKE_PAIR
																											(BgL_arg2437z00_350,
																											BgL_arg2438z00_351);
																								}}
																								{	/* Foreign/cfun.scm 74 */
																									obj_t BgL_treszd2idzd2_402;

																									BgL_treszd2idzd2_402 =
																										(((BgL_typez00_bglt)
																											CREF
																											(BgL_typezd2reszd2_278))->
																										BgL_idz00);
																									{	/* Foreign/cfun.scm 74 */
																										obj_t BgL_targszd2idzd2_403;

																										if (NULLP
																											(BgL_typezd2argszd2_279))
																											{	/* Foreign/cfun.scm 75 */
																												BgL_targszd2idzd2_403 =
																													BNIL;
																											}
																										else
																											{	/* Foreign/cfun.scm 75 */
																												obj_t
																													BgL_head2133z00_421;
																												{	/* Foreign/cfun.scm 75 */
																													obj_t
																														BgL_arg2659z00_434;
																													{	/* Foreign/cfun.scm 75 */
																														BgL_typez00_bglt
																															BgL_obj1508z00_594;
																														{	/* Foreign/cfun.scm 75 */
																															obj_t
																																BgL_pairz00_593;
																															BgL_pairz00_593 =
																																BgL_typezd2argszd2_279;
																															BgL_obj1508z00_594
																																=
																																(BgL_typez00_bglt)
																																(CAR
																																(BgL_pairz00_593));
																														}
																														BgL_arg2659z00_434 =
																															(((BgL_typez00_bglt) CREF(BgL_obj1508z00_594))->BgL_idz00);
																													}
																													BgL_head2133z00_421 =
																														MAKE_PAIR
																														(BgL_arg2659z00_434,
																														BNIL);
																												}
																												{	/* Foreign/cfun.scm 75 */
																													obj_t
																														BgL_g2136z00_422;
																													BgL_g2136z00_422 =
																														CDR
																														(BgL_typezd2argszd2_279);
																													{
																														obj_t
																															BgL_l2131z00_424;
																														obj_t
																															BgL_tail2134z00_425;
																														BgL_l2131z00_424 =
																															BgL_g2136z00_422;
																														BgL_tail2134z00_425
																															=
																															BgL_head2133z00_421;
																													BgL_zc3anonymousza32652ze3z83_426:
																														if (NULLP
																															(BgL_l2131z00_424))
																															{	/* Foreign/cfun.scm 75 */
																																BgL_targszd2idzd2_403
																																	=
																																	BgL_head2133z00_421;
																															}
																														else
																															{	/* Foreign/cfun.scm 75 */
																																obj_t
																																	BgL_newtail2135z00_428;
																																{	/* Foreign/cfun.scm 75 */
																																	obj_t
																																		BgL_arg2656z00_430;
																																	{	/* Foreign/cfun.scm 75 */
																																		BgL_typez00_bglt
																																			BgL_obj1508z00_600;
																																		{	/* Foreign/cfun.scm 75 */
																																			obj_t
																																				BgL_pairz00_599;
																																			BgL_pairz00_599
																																				=
																																				BgL_l2131z00_424;
																																			BgL_obj1508z00_600
																																				=
																																				(BgL_typez00_bglt)
																																				(CAR
																																				(BgL_pairz00_599));
																																		}
																																		BgL_arg2656z00_430
																																			=
																																			(((BgL_typez00_bglt) CREF(BgL_obj1508z00_600))->BgL_idz00);
																																	}
																																	BgL_newtail2135z00_428
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2656z00_430,
																																		BNIL);
																																}
																																SET_CDR
																																	(BgL_tail2134z00_425,
																																	BgL_newtail2135z00_428);
																																{
																																	obj_t
																																		BgL_tail2134z00_826;
																																	obj_t
																																		BgL_l2131z00_824;
																																	BgL_l2131z00_824
																																		=
																																		CDR
																																		(BgL_l2131z00_424);
																																	BgL_tail2134z00_826
																																		=
																																		BgL_newtail2135z00_428;
																																	BgL_tail2134z00_425
																																		=
																																		BgL_tail2134z00_826;
																																	BgL_l2131z00_424
																																		=
																																		BgL_l2131z00_824;
																																	goto
																																		BgL_zc3anonymousza32652ze3z83_426;
																																}
																															}
																													}
																												}
																											}
																										{	/* Foreign/cfun.scm 75 */
																											obj_t
																												BgL_callerzd2namezd2_404;
																											BgL_callerzd2namezd2_404 =
																												string_append
																												(BGl_string2769z00zzforeign_cfunctionz00,
																												BgL_nbzd2argszd2_281);
																											{	/* Foreign/cfun.scm 76 */
																												obj_t
																													BgL_czd2callzd2idz00_405;
																												{	/* Foreign/cfun.scm 77 */
																													obj_t
																														BgL_arg2629z00_414;
																													{	/* Foreign/cfun.scm 77 */
																														obj_t
																															BgL_arg2630z00_415;
																														obj_t
																															BgL_arg2642z00_416;
																														{	/* Foreign/cfun.scm 77 */
																															obj_t
																																BgL_res2751z00_608;
																															{	/* Foreign/cfun.scm 77 */
																																obj_t
																																	BgL_symbolz00_606;
																																BgL_symbolz00_606
																																	=
																																	CNST_TABLE_REF
																																	(((long) 4));
																																{	/* Foreign/cfun.scm 77 */
																																	obj_t
																																		BgL_arg2063z00_607;
																																	BgL_arg2063z00_607
																																		=
																																		SYMBOL_TO_STRING
																																		(BgL_symbolz00_606);
																																	BgL_res2751z00_608
																																		=
																																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																		(BgL_arg2063z00_607);
																															}}
																															BgL_arg2630z00_415
																																=
																																BgL_res2751z00_608;
																														}
																														{	/* Foreign/cfun.scm 77 */
																															obj_t
																																BgL_res2752z00_611;
																															{	/* Foreign/cfun.scm 77 */
																																obj_t
																																	BgL_arg2063z00_610;
																																BgL_arg2063z00_610
																																	=
																																	SYMBOL_TO_STRING
																																	(BgL_callzd2idzd2_271);
																																BgL_res2752z00_611
																																	=
																																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																	(BgL_arg2063z00_610);
																															}
																															BgL_arg2642z00_416
																																=
																																BgL_res2752z00_611;
																														}
																														{	/* Foreign/cfun.scm 77 */
																															obj_t
																																BgL_list2643z00_417;
																															{	/* Foreign/cfun.scm 77 */
																																obj_t
																																	BgL_arg2648z00_418;
																																BgL_arg2648z00_418
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2642z00_416,
																																	BNIL);
																																BgL_list2643z00_417
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2630z00_415,
																																	BgL_arg2648z00_418);
																															}
																															BgL_arg2629z00_414
																																=
																																BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																(BgL_list2643z00_417);
																													}}
																													BgL_czd2callzd2idz00_405
																														=
																														string_to_symbol
																														(BSTRING_TO_STRING
																														(BgL_arg2629z00_414));
																												}
																												{	/* Foreign/cfun.scm 77 */

																													{	/* Foreign/cfun.scm 78 */
																														obj_t
																															BgL_arg2594z00_406;
																														obj_t
																															BgL_arg2595z00_407;
																														BgL_arg2594z00_406 =
																															CNST_TABLE_REF((
																																(long) 6));
																														{	/* Foreign/cfun.scm 78 */
																															obj_t
																																BgL_arg2602z00_408;
																															BgL_arg2602z00_408
																																=
																																MAKE_PAIR
																																(BgL_idz00_268,
																																BgL_targszd2idzd2_403);
																															{	/* Foreign/cfun.scm 78 */
																																obj_t
																																	BgL_list2609z00_410;
																																{	/* Foreign/cfun.scm 78 */
																																	obj_t
																																		BgL_arg2615z00_411;
																																	{	/* Foreign/cfun.scm 78 */
																																		obj_t
																																			BgL_arg2621z00_412;
																																		{	/* Foreign/cfun.scm 78 */
																																			obj_t
																																				BgL_arg2628z00_413;
																																			BgL_arg2628z00_413
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_arg2621z00_412
																																				=
																																				MAKE_PAIR
																																				(BgL_callerzd2namezd2_404,
																																				BgL_arg2628z00_413);
																																		}
																																		BgL_arg2615z00_411
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2602z00_408,
																																			BgL_arg2621z00_412);
																																	}
																																	BgL_list2609z00_410
																																		=
																																		MAKE_PAIR
																																		(BgL_czd2callzd2idz00_405,
																																		BgL_arg2615z00_411);
																																}
																																BgL_arg2595z00_407
																																	=
																																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																	(BgL_treszd2idzd2_402,
																																	BgL_list2609z00_410);
																														}}
																														BgL_arg2242z00_302 =
																															MAKE_PAIR
																															(BgL_arg2594z00_406,
																															BgL_arg2595z00_407);
																								}}}}}}
																								{	/* Foreign/cfun.scm 117 */
																									obj_t BgL_list2244z00_304;

																									{	/* Foreign/cfun.scm 117 */
																										obj_t BgL_arg2245z00_305;

																										{	/* Foreign/cfun.scm 117 */
																											obj_t BgL_arg2252z00_306;

																											BgL_arg2252z00_306 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg2245z00_305 =
																												MAKE_PAIR
																												(BgL_arg2242z00_302,
																												BgL_arg2252z00_306);
																										}
																										BgL_list2244z00_304 =
																											MAKE_PAIR
																											(BgL_arg2240z00_301,
																											BgL_arg2245z00_305);
																									}
																									BgL_arg2237z00_299 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg2239z00_300,
																										BgL_list2244z00_304);
																							}}
																							BgL_arg2227z00_297 =
																								MAKE_PAIR(BgL_arg2233z00_298,
																								BgL_arg2237z00_299);
																						}
																						BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																							(BgL_arg2227z00_297);
																					}
																					{	/* Foreign/cfun.scm 121 */
																						obj_t BgL_arg2255z00_307;

																						{	/* Foreign/cfun.scm 121 */
																							obj_t BgL_arg2259z00_308;

																							obj_t BgL_arg2260z00_309;

																							BgL_arg2259z00_308 =
																								CNST_TABLE_REF(((long) 21));
																							{	/* Foreign/cfun.scm 122 */
																								obj_t BgL_arg2267z00_310;

																								{	/* Foreign/cfun.scm 122 */
																									obj_t BgL_arg2282z00_313;

																									{	/* Foreign/cfun.scm 122 */
																										obj_t BgL_arg2285z00_314;

																										{	/* Foreign/cfun.scm 122 */
																											obj_t BgL_list2286z00_315;

																											BgL_list2286z00_315 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg2285z00_314 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(CNST_TABLE_REF(((long)
																														22)),
																												BgL_list2286z00_315);
																										}
																										BgL_arg2282z00_313 =
																											MAKE_PAIR
																											(BgL_bidzf3zd2boolz21_275,
																											BgL_arg2285z00_314);
																									}
																									BgL_arg2267z00_310 =
																										BGl_makezd2protozd2inlinez00zzforeign_libraryz00
																										(BgL_arg2282z00_313);
																								}
																								{	/* Foreign/cfun.scm 121 */
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
																					{	/* Foreign/cfun.scm 123 */
																						obj_t BgL_arg2290z00_316;

																						{	/* Foreign/cfun.scm 123 */
																							obj_t BgL_arg2295z00_317;

																							obj_t BgL_arg2297z00_318;

																							BgL_arg2295z00_317 =
																								CNST_TABLE_REF(((long) 23));
																							{	/* Foreign/cfun.scm 123 */
																								obj_t BgL_arg2305z00_319;

																								{	/* Foreign/cfun.scm 123 */
																									obj_t BgL_arg2318z00_322;

																									{	/* Foreign/cfun.scm 123 */
																										obj_t BgL_arg2325z00_323;

																										{	/* Foreign/cfun.scm 123 */
																											obj_t BgL_arg2338z00_326;

																											obj_t BgL_arg2344z00_327;

																											BgL_arg2338z00_326 =
																												CNST_TABLE_REF(((long)
																													24));
																											{	/* Foreign/cfun.scm 123 */
																												obj_t
																													BgL_list2345z00_328;
																												BgL_list2345z00_328 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg2344z00_327 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_widz00_269,
																													BgL_list2345z00_328);
																											}
																											BgL_arg2325z00_323 =
																												MAKE_PAIR
																												(BgL_arg2338z00_326,
																												BgL_arg2344z00_327);
																										}
																										{	/* Foreign/cfun.scm 123 */
																											obj_t BgL_list2332z00_325;

																											BgL_list2332z00_325 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg2318z00_322 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg2325z00_323,
																												BgL_list2332z00_325);
																									}}
																									BgL_arg2305z00_319 =
																										MAKE_PAIR(BgL_bidzf3zf3_274,
																										BgL_arg2318z00_322);
																								}
																								{	/* Foreign/cfun.scm 123 */
																									obj_t BgL_list2313z00_321;

																									BgL_list2313z00_321 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg2297z00_318 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg2305z00_319,
																										BgL_list2313z00_321);
																							}}
																							BgL_arg2290z00_316 =
																								MAKE_PAIR(BgL_arg2295z00_317,
																								BgL_arg2297z00_318);
																						}
																						BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																							(BgL_arg2290z00_316);
																					}
																					{	/* Foreign/cfun.scm 126 */
																						obj_t BgL_arg2351z00_329;

																						obj_t BgL_arg2357z00_330;

																						obj_t BgL_arg2364z00_331;

																						{	/* Foreign/cfun.scm 60 */
																							obj_t BgL_arg2454z00_359;

																							obj_t BgL_arg2459z00_360;

																							{	/* Foreign/cfun.scm 60 */
																								obj_t BgL_arg2460z00_361;

																								{	/* Foreign/cfun.scm 60 */
																									obj_t BgL_list2461z00_362;

																									BgL_list2461z00_362 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg2460z00_361 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(CNST_TABLE_REF(((long)
																												12)),
																										BgL_list2461z00_362);
																								}
																								BgL_arg2454z00_359 =
																									MAKE_PAIR
																									(BgL_bidzf3zd2boolz21_275,
																									BgL_arg2460z00_361);
																							}
																							{	/* Foreign/cfun.scm 61 */
																								obj_t BgL_arg2470z00_363;

																								obj_t BgL_arg2471z00_364;

																								BgL_arg2470z00_363 =
																									CNST_TABLE_REF(((long) 13));
																								{	/* Foreign/cfun.scm 61 */
																									obj_t BgL_arg2472z00_365;

																									obj_t BgL_arg2476z00_366;

																									{	/* Foreign/cfun.scm 61 */
																										obj_t BgL_arg2493z00_371;

																										obj_t BgL_arg2503z00_372;

																										BgL_arg2493z00_371 =
																											CNST_TABLE_REF(((long)
																												14));
																										{	/* Foreign/cfun.scm 61 */
																											obj_t BgL_list2504z00_373;

																											BgL_list2504z00_373 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg2503z00_372 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(CNST_TABLE_REF(((long)
																														15)),
																												BgL_list2504z00_373);
																										}
																										BgL_arg2472z00_365 =
																											MAKE_PAIR
																											(BgL_arg2493z00_371,
																											BgL_arg2503z00_372);
																									}
																									{	/* Foreign/cfun.scm 62 */
																										obj_t BgL_arg2505z00_374;

																										obj_t BgL_arg2523z00_375;

																										BgL_arg2505z00_374 =
																											CNST_TABLE_REF(((long)
																												16));
																										{	/* Foreign/cfun.scm 62 */
																											obj_t BgL_arg2529z00_376;

																											obj_t BgL_arg2531z00_377;

																											{	/* Foreign/cfun.scm 62 */
																												obj_t
																													BgL_arg2550z00_381;
																												obj_t
																													BgL_arg2554z00_382;
																												BgL_arg2550z00_381 =
																													CNST_TABLE_REF(((long)
																														17));
																												{	/* Foreign/cfun.scm 62 */
																													obj_t
																														BgL_list2555z00_383;
																													BgL_list2555z00_383 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg2554z00_382 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(CNST_TABLE_REF((
																																(long) 15)),
																														BgL_list2555z00_383);
																												}
																												BgL_arg2529z00_376 =
																													MAKE_PAIR
																													(BgL_arg2550z00_381,
																													BgL_arg2554z00_382);
																											}
																											{	/* Foreign/cfun.scm 62 */
																												obj_t
																													BgL_arg2556z00_384;
																												obj_t
																													BgL_arg2557z00_385;
																												BgL_arg2556z00_384 =
																													CNST_TABLE_REF(((long)
																														18));
																												{	/* Foreign/cfun.scm 62 */
																													obj_t
																														BgL_list2558z00_386;
																													BgL_list2558z00_386 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg2557z00_385 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_bidz00_270,
																														BgL_list2558z00_386);
																												}
																												BgL_arg2531z00_377 =
																													MAKE_PAIR
																													(BgL_arg2556z00_384,
																													BgL_arg2557z00_385);
																											}
																											{	/* Foreign/cfun.scm 62 */
																												obj_t
																													BgL_list2537z00_379;
																												{	/* Foreign/cfun.scm 62 */
																													obj_t
																														BgL_arg2544z00_380;
																													BgL_arg2544z00_380 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_list2537z00_379 =
																														MAKE_PAIR
																														(BgL_arg2531z00_377,
																														BgL_arg2544z00_380);
																												}
																												BgL_arg2523z00_375 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_arg2529z00_376,
																													BgL_list2537z00_379);
																										}}
																										BgL_arg2476z00_366 =
																											MAKE_PAIR
																											(BgL_arg2505z00_374,
																											BgL_arg2523z00_375);
																									}
																									{	/* Foreign/cfun.scm 61 */
																										obj_t BgL_list2478z00_368;

																										{	/* Foreign/cfun.scm 61 */
																											obj_t BgL_arg2491z00_369;

																											{	/* Foreign/cfun.scm 61 */
																												obj_t
																													BgL_arg2492z00_370;
																												BgL_arg2492z00_370 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg2491z00_369 =
																													MAKE_PAIR(BFALSE,
																													BgL_arg2492z00_370);
																											}
																											BgL_list2478z00_368 =
																												MAKE_PAIR
																												(BgL_arg2476z00_366,
																												BgL_arg2491z00_369);
																										}
																										BgL_arg2471z00_364 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg2472z00_365,
																											BgL_list2478z00_368);
																								}}
																								BgL_arg2459z00_360 =
																									MAKE_PAIR(BgL_arg2470z00_363,
																									BgL_arg2471z00_364);
																							}
																							BgL_arg2351z00_329 =
																								BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																								(BgL_arg2454z00_359,
																								BgL_arg2459z00_360);
																						}
																						{	/* Foreign/cfun.scm 68 */
																							obj_t BgL_arg2560z00_388;

																							obj_t BgL_arg2561z00_389;

																							{	/* Foreign/cfun.scm 68 */
																								obj_t BgL_arg2562z00_390;

																								obj_t BgL_arg2563z00_391;

																								{	/* Foreign/cfun.scm 68 */
																									obj_t BgL_list2564z00_392;

																									{	/* Foreign/cfun.scm 68 */
																										obj_t BgL_arg2565z00_393;

																										obj_t BgL_arg2566z00_394;

																										BgL_arg2565z00_393 =
																											CNST_TABLE_REF(((long)
																												7));
																										{	/* Foreign/cfun.scm 68 */
																											obj_t BgL_arg2571z00_395;

																											BgL_arg2571z00_395 =
																												MAKE_PAIR(CNST_TABLE_REF
																												(((long) 8)), BNIL);
																											BgL_arg2566z00_394 =
																												MAKE_PAIR(BgL_idz00_268,
																												BgL_arg2571z00_395);
																										}
																										BgL_list2564z00_392 =
																											MAKE_PAIR
																											(BgL_arg2565z00_393,
																											BgL_arg2566z00_394);
																									}
																									BgL_arg2562z00_390 =
																										BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																										(BgL_list2564z00_392);
																								}
																								{	/* Foreign/cfun.scm 69 */
																									obj_t BgL_arg2572z00_396;

																									obj_t BgL_arg2576z00_397;

																									BgL_arg2572z00_396 =
																										BGl_makezd2typedzd2identz00zzast_identz00
																										(CNST_TABLE_REF(((long) 9)),
																										BgL_idz00_268);
																									BgL_arg2576z00_397 =
																										BGl_makezd2typedzd2identz00zzast_identz00
																										(CNST_TABLE_REF(((long)
																												10)), BgL_idz00_268);
																									{	/* Foreign/cfun.scm 68 */
																										obj_t BgL_list2587z00_399;

																										{	/* Foreign/cfun.scm 68 */
																											obj_t BgL_arg2589z00_400;

																											BgL_arg2589z00_400 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_list2587z00_399 =
																												MAKE_PAIR
																												(BgL_arg2576z00_397,
																												BgL_arg2589z00_400);
																										}
																										BgL_arg2563z00_391 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg2572z00_396,
																											BgL_list2587z00_399);
																								}}
																								BgL_arg2560z00_388 =
																									MAKE_PAIR(BgL_arg2562z00_390,
																									BgL_arg2563z00_391);
																							}
																							BgL_arg2561z00_389 =
																								CNST_TABLE_REF(((long) 11));
																							BgL_arg2357z00_330 =
																								BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																								(BgL_arg2560z00_388,
																								BgL_arg2561z00_389);
																						}
																						if (
																							(BgL_arityz00_280 >=
																								(long)
																								CINT
																								(BGl_za2maxzd2czd2foreignzd2arityza2zd2zzengine_paramz00)))
																							{	/* Foreign/cfun.scm 85 */
																								obj_t BgL_arg2664z00_439;

																								obj_t BgL_arg2665z00_440;

																								{	/* Foreign/cfun.scm 85 */
																									obj_t BgL_arg2668z00_443;

																									{	/* Foreign/cfun.scm 87 */
																										obj_t BgL_g2155z00_445;

																										BgL_g2155z00_445 =
																											BGl_za2maxzd2czd2foreignzd2arityza2zd2zzengine_paramz00;
																										{	/* Foreign/cfun.scm 87 */

																											BgL_arg2668z00_443 =
																												BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																												((long)
																												CINT(BgL_g2155z00_445),
																												((long) 10));
																									}}
																									BgL_arg2664z00_439 =
																										string_append_3
																										(BGl_string2764z00zzforeign_cfunctionz00,
																										BgL_arg2668z00_443,
																										BGl_string2765z00zzforeign_cfunctionz00);
																								}
																								BgL_arg2665z00_440 =
																									string_append
																									(BgL_nbzd2argszd2_281,
																									BGl_string2766z00zzforeign_cfunctionz00);
																								BgL_arg2364z00_331 =
																									BGl_userzd2errorzd2zztools_errorz00
																									(BgL_idz00_268,
																									BgL_arg2664z00_439,
																									BgL_arg2665z00_440, BNIL);
																							}
																						else
																							{	/* Foreign/cfun.scm 83 */
																								if (
																									(BgL_arityz00_280 >=
																										((long) 0)))
																									{	/* Foreign/cfun.scm 90 */
																										{	/* Foreign/cfun.scm 98 */
																											obj_t
																												BgL_treszd2idzd2_450;
																											BgL_treszd2idzd2_450 =
																												(((BgL_typez00_bglt)
																													CREF
																													(BgL_typezd2reszd2_278))->
																												BgL_idz00);
																											{	/* Foreign/cfun.scm 98 */
																												obj_t
																													BgL_targszd2idzd2_451;
																												if (NULLP
																													(BgL_typezd2argszd2_279))
																													{	/* Foreign/cfun.scm 99 */
																														BgL_targszd2idzd2_451
																															= BNIL;
																													}
																												else
																													{	/* Foreign/cfun.scm 99 */
																														obj_t
																															BgL_head2139z00_510;
																														{	/* Foreign/cfun.scm 99 */
																															obj_t
																																BgL_arg2716z00_523;
																															{	/* Foreign/cfun.scm 99 */
																																BgL_typez00_bglt
																																	BgL_obj1508z00_620;
																																{	/* Foreign/cfun.scm 99 */
																																	obj_t
																																		BgL_pairz00_619;
																																	BgL_pairz00_619
																																		=
																																		BgL_typezd2argszd2_279;
																																	BgL_obj1508z00_620
																																		=
																																		(BgL_typez00_bglt)
																																		(CAR
																																		(BgL_pairz00_619));
																																}
																																BgL_arg2716z00_523
																																	=
																																	(((BgL_typez00_bglt) CREF(BgL_obj1508z00_620))->BgL_idz00);
																															}
																															BgL_head2139z00_510
																																=
																																MAKE_PAIR
																																(BgL_arg2716z00_523,
																																BNIL);
																														}
																														{	/* Foreign/cfun.scm 99 */
																															obj_t
																																BgL_g2142z00_511;
																															BgL_g2142z00_511 =
																																CDR
																																(BgL_typezd2argszd2_279);
																															{
																																obj_t
																																	BgL_l2137z00_513;
																																obj_t
																																	BgL_tail2140z00_514;
																																BgL_l2137z00_513
																																	=
																																	BgL_g2142z00_511;
																																BgL_tail2140z00_514
																																	=
																																	BgL_head2139z00_510;
																															BgL_zc3anonymousza32709ze3z83_515:
																																if (NULLP
																																	(BgL_l2137z00_513))
																																	{	/* Foreign/cfun.scm 99 */
																																		BgL_targszd2idzd2_451
																																			=
																																			BgL_head2139z00_510;
																																	}
																																else
																																	{	/* Foreign/cfun.scm 99 */
																																		obj_t
																																			BgL_newtail2141z00_517;
																																		{	/* Foreign/cfun.scm 99 */
																																			obj_t
																																				BgL_arg2712z00_519;
																																			{	/* Foreign/cfun.scm 99 */
																																				BgL_typez00_bglt
																																					BgL_obj1508z00_626;
																																				{	/* Foreign/cfun.scm 99 */
																																					obj_t
																																						BgL_pairz00_625;
																																					BgL_pairz00_625
																																						=
																																						BgL_l2137z00_513;
																																					BgL_obj1508z00_626
																																						=
																																						(BgL_typez00_bglt)
																																						(CAR
																																						(BgL_pairz00_625));
																																				}
																																				BgL_arg2712z00_519
																																					=
																																					(((BgL_typez00_bglt) CREF(BgL_obj1508z00_626))->BgL_idz00);
																																			}
																																			BgL_newtail2141z00_517
																																				=
																																				MAKE_PAIR
																																				(BgL_arg2712z00_519,
																																				BNIL);
																																		}
																																		SET_CDR
																																			(BgL_tail2140z00_514,
																																			BgL_newtail2141z00_517);
																																		{
																																			obj_t
																																				BgL_tail2140z00_947;
																																			obj_t
																																				BgL_l2137z00_945;
																																			BgL_l2137z00_945
																																				=
																																				CDR
																																				(BgL_l2137z00_513);
																																			BgL_tail2140z00_947
																																				=
																																				BgL_newtail2141z00_517;
																																			BgL_tail2140z00_514
																																				=
																																				BgL_tail2140z00_947;
																																			BgL_l2137z00_513
																																				=
																																				BgL_l2137z00_945;
																																			goto
																																				BgL_zc3anonymousza32709ze3z83_515;
																																		}
																																	}
																															}
																														}
																													}
																												{	/* Foreign/cfun.scm 99 */
																													obj_t BgL_argsz00_452;

																													if (NULLP
																														(BgL_targszd2idzd2_451))
																														{	/* Foreign/cfun.scm 100 */
																															BgL_argsz00_452 =
																																BNIL;
																														}
																													else
																														{	/* Foreign/cfun.scm 100 */
																															obj_t
																																BgL_head2145z00_492;
																															BgL_head2145z00_492
																																=
																																MAKE_PAIR
																																(BGl_gensymz00zz__r4_symbols_6_4z00
																																(CAR
																																	(BgL_targszd2idzd2_451)),
																																BNIL);
																															{	/* Foreign/cfun.scm 100 */
																																obj_t
																																	BgL_g2148z00_493;
																																BgL_g2148z00_493
																																	=
																																	CDR
																																	(BgL_targszd2idzd2_451);
																																{
																																	obj_t
																																		BgL_l2143z00_495;
																																	obj_t
																																		BgL_tail2146z00_496;
																																	BgL_l2143z00_495
																																		=
																																		BgL_g2148z00_493;
																																	BgL_tail2146z00_496
																																		=
																																		BgL_head2145z00_492;
																																BgL_zc3anonymousza32699ze3z83_497:
																																	if (NULLP
																																		(BgL_l2143z00_495))
																																		{	/* Foreign/cfun.scm 100 */
																																			BgL_argsz00_452
																																				=
																																				BgL_head2145z00_492;
																																		}
																																	else
																																		{	/* Foreign/cfun.scm 100 */
																																			obj_t
																																				BgL_newtail2147z00_499;
																																			BgL_newtail2147z00_499
																																				=
																																				MAKE_PAIR
																																				(BGl_gensymz00zz__r4_symbols_6_4z00
																																				(CAR
																																					(BgL_l2143z00_495)),
																																				BNIL);
																																			SET_CDR
																																				(BgL_tail2146z00_496,
																																				BgL_newtail2147z00_499);
																																			{
																																				obj_t
																																					BgL_tail2146z00_962;
																																				obj_t
																																					BgL_l2143z00_960;
																																				BgL_l2143z00_960
																																					=
																																					CDR
																																					(BgL_l2143z00_495);
																																				BgL_tail2146z00_962
																																					=
																																					BgL_newtail2147z00_499;
																																				BgL_tail2146z00_496
																																					=
																																					BgL_tail2146z00_962;
																																				BgL_l2143z00_495
																																					=
																																					BgL_l2143z00_960;
																																				goto
																																					BgL_zc3anonymousza32699ze3z83_497;
																																			}
																																		}
																																}
																															}
																														}
																													{	/* Foreign/cfun.scm 100 */
																														obj_t
																															BgL_czd2callzd2idz00_453;
																														{	/* Foreign/cfun.scm 101 */
																															obj_t
																																BgL_arg2693z00_485;
																															{	/* Foreign/cfun.scm 101 */
																																obj_t
																																	BgL_arg2694z00_486;
																																obj_t
																																	BgL_arg2695z00_487;
																																{	/* Foreign/cfun.scm 101 */
																																	obj_t
																																		BgL_res2753z00_646;
																																	{	/* Foreign/cfun.scm 101 */
																																		obj_t
																																			BgL_symbolz00_644;
																																		BgL_symbolz00_644
																																			=
																																			CNST_TABLE_REF
																																			(((long)
																																				4));
																																		{	/* Foreign/cfun.scm 101 */
																																			obj_t
																																				BgL_arg2063z00_645;
																																			BgL_arg2063z00_645
																																				=
																																				SYMBOL_TO_STRING
																																				(BgL_symbolz00_644);
																																			BgL_res2753z00_646
																																				=
																																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																				(BgL_arg2063z00_645);
																																	}}
																																	BgL_arg2694z00_486
																																		=
																																		BgL_res2753z00_646;
																																}
																																{	/* Foreign/cfun.scm 101 */
																																	obj_t
																																		BgL_res2754z00_649;
																																	{	/* Foreign/cfun.scm 101 */
																																		obj_t
																																			BgL_arg2063z00_648;
																																		BgL_arg2063z00_648
																																			=
																																			SYMBOL_TO_STRING
																																			(BgL_callzd2idzd2_271);
																																		BgL_res2754z00_649
																																			=
																																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																			(BgL_arg2063z00_648);
																																	}
																																	BgL_arg2695z00_487
																																		=
																																		BgL_res2754z00_649;
																																}
																																{	/* Foreign/cfun.scm 101 */
																																	obj_t
																																		BgL_list2696z00_488;
																																	{	/* Foreign/cfun.scm 101 */
																																		obj_t
																																			BgL_arg2697z00_489;
																																		BgL_arg2697z00_489
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2695z00_487,
																																			BNIL);
																																		BgL_list2696z00_488
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2694z00_486,
																																			BgL_arg2697z00_489);
																																	}
																																	BgL_arg2693z00_485
																																		=
																																		BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																		(BgL_list2696z00_488);
																															}}
																															BgL_czd2callzd2idz00_453
																																=
																																string_to_symbol
																																(BSTRING_TO_STRING
																																(BgL_arg2693z00_485));
																														}
																														{	/* Foreign/cfun.scm 101 */

																															{	/* Foreign/cfun.scm 103 */
																																obj_t
																																	BgL_arg2673z00_454;
																																obj_t
																																	BgL_arg2674z00_455;
																																{	/* Foreign/cfun.scm 103 */
																																	obj_t
																																		BgL_arg2675z00_456;
																																	obj_t
																																		BgL_arg2676z00_457;
																																	BgL_arg2675z00_456
																																		=
																																		BGl_makezd2typedzd2identz00zzast_identz00
																																		(BgL_callzd2idzd2_271,
																																		BgL_treszd2idzd2_450);
																																	{	/* Foreign/cfun.scm 104 */
																																		obj_t
																																			BgL_arg2677z00_458;
																																		obj_t
																																			BgL_arg2678z00_459;
																																		BgL_arg2677z00_458
																																			=
																																			BGl_makezd2typedzd2identz00zzast_identz00
																																			(CNST_TABLE_REF
																																			(((long)
																																					5)),
																																			BgL_idz00_268);
																																		{	/* Foreign/cfun.scm 105 */
																																			obj_t
																																				BgL_arg2680z00_461;
																																			if (NULLP
																																				(BgL_argsz00_452))
																																				{	/* Foreign/cfun.scm 105 */
																																					BgL_arg2680z00_461
																																						=
																																						BNIL;
																																				}
																																			else
																																				{	/* Foreign/cfun.scm 105 */
																																					obj_t
																																						BgL_head2151z00_466;
																																					BgL_head2151z00_466
																																						=
																																						MAKE_PAIR
																																						(BNIL,
																																						BNIL);
																																					{
																																						obj_t
																																							BgL_ll2149z00_468;
																																						obj_t
																																							BgL_ll2150z00_469;
																																						obj_t
																																							BgL_tail2152z00_470;
																																						BgL_ll2149z00_468
																																							=
																																							BgL_argsz00_452;
																																						BgL_ll2150z00_469
																																							=
																																							BgL_targszd2idzd2_451;
																																						BgL_tail2152z00_470
																																							=
																																							BgL_head2151z00_466;
																																					BgL_zc3anonymousza32683ze3z83_471:
																																						if (NULLP(BgL_ll2149z00_468))
																																							{	/* Foreign/cfun.scm 105 */
																																								BgL_arg2680z00_461
																																									=
																																									CDR
																																									(BgL_head2151z00_466);
																																							}
																																						else
																																							{	/* Foreign/cfun.scm 105 */
																																								obj_t
																																									BgL_newtail2153z00_473;
																																								BgL_newtail2153z00_473
																																									=
																																									MAKE_PAIR
																																									(BGl_makezd2typedzd2identz00zzast_identz00
																																									(CAR
																																										(BgL_ll2149z00_468),
																																										CAR
																																										(BgL_ll2150z00_469)),
																																									BNIL);
																																								SET_CDR
																																									(BgL_tail2152z00_470,
																																									BgL_newtail2153z00_473);
																																								{
																																									obj_t
																																										BgL_tail2152z00_991;
																																									obj_t
																																										BgL_ll2150z00_989;
																																									obj_t
																																										BgL_ll2149z00_987;
																																									BgL_ll2149z00_987
																																										=
																																										CDR
																																										(BgL_ll2149z00_468);
																																									BgL_ll2150z00_989
																																										=
																																										CDR
																																										(BgL_ll2150z00_469);
																																									BgL_tail2152z00_991
																																										=
																																										BgL_newtail2153z00_473;
																																									BgL_tail2152z00_470
																																										=
																																										BgL_tail2152z00_991;
																																									BgL_ll2150z00_469
																																										=
																																										BgL_ll2150z00_989;
																																									BgL_ll2149z00_468
																																										=
																																										BgL_ll2149z00_987;
																																									goto
																																										BgL_zc3anonymousza32683ze3z83_471;
																																								}
																																							}
																																					}
																																				}
																																			BgL_arg2678z00_459
																																				=
																																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																				(BgL_arg2680z00_461,
																																				BNIL);
																																		}
																																		{	/* Foreign/cfun.scm 103 */
																																			obj_t
																																				BgL_list2679z00_460;
																																			BgL_list2679z00_460
																																				=
																																				MAKE_PAIR
																																				(BgL_arg2678z00_459,
																																				BNIL);
																																			BgL_arg2676z00_457
																																				=
																																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																				(BgL_arg2677z00_458,
																																				BgL_list2679z00_460);
																																		}
																																	}
																																	BgL_arg2673z00_454
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2675z00_456,
																																		BgL_arg2676z00_457);
																																}
																																{	/* Foreign/cfun.scm 108 */
																																	obj_t
																																		BgL_arg2689z00_481;
																																	{	/* Foreign/cfun.scm 108 */
																																		obj_t
																																			BgL_arg2690z00_482;
																																		obj_t
																																			BgL_arg2691z00_483;
																																		BgL_arg2690z00_482
																																			=
																																			CNST_TABLE_REF
																																			(((long)
																																				5));
																																		BgL_arg2691z00_483
																																			=
																																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																			(BgL_argsz00_452,
																																			BNIL);
																																		{	/* Foreign/cfun.scm 108 */
																																			obj_t
																																				BgL_list2692z00_484;
																																			BgL_list2692z00_484
																																				=
																																				MAKE_PAIR
																																				(BgL_arg2691z00_483,
																																				BNIL);
																																			BgL_arg2689z00_481
																																				=
																																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																				(BgL_arg2690z00_482,
																																				BgL_list2692z00_484);
																																	}}
																																	BgL_arg2674z00_455
																																		=
																																		MAKE_PAIR
																																		(BgL_czd2callzd2idz00_453,
																																		BgL_arg2689z00_481);
																																}
																																BgL_arg2364z00_331
																																	=
																																	BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																																	(BgL_arg2673z00_454,
																																	BgL_arg2674z00_455);
																									}}}}}}}
																								else
																									{	/* Foreign/cfun.scm 90 */
																										BgL_arg2364z00_331 =
																											BGl_userzd2errorzd2zztools_errorz00
																											(BGl_string2767z00zzforeign_cfunctionz00,
																											BGl_string2768z00zzforeign_cfunctionz00,
																											BgL_idz00_268, BNIL);
																									}
																							}
																						{	/* Foreign/cfun.scm 126 */
																							obj_t BgL_list2365z00_332;

																							{	/* Foreign/cfun.scm 126 */
																								obj_t BgL_arg2370z00_333;

																								{	/* Foreign/cfun.scm 126 */
																									obj_t BgL_arg2377z00_334;

																									BgL_arg2377z00_334 =
																										MAKE_PAIR
																										(BgL_arg2364z00_331, BNIL);
																									BgL_arg2370z00_333 =
																										MAKE_PAIR
																										(BgL_arg2357z00_330,
																										BgL_arg2377z00_334);
																								}
																								BgL_list2365z00_332 =
																									MAKE_PAIR(BgL_arg2351z00_329,
																									BgL_arg2370z00_333);
																							}
																							return BgL_list2365z00_332;
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
					}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzforeign_cfunctionz00()
	{
		AN_OBJECT;
		{	/* Foreign/cfun.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string2773z00zzforeign_cfunctionz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string2773z00zzforeign_cfunctionz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 195902195),
				BSTRING_TO_STRING(BGl_string2773z00zzforeign_cfunctionz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2773z00zzforeign_cfunctionz00));
			BGl_modulezd2initializa7ationz75zzforeign_ctypez00(((long) 178768066),
				BSTRING_TO_STRING(BGl_string2773z00zzforeign_cfunctionz00));
			BGl_modulezd2initializa7ationz75zzforeign_accessz00(((long) 477377954),
				BSTRING_TO_STRING(BGl_string2773z00zzforeign_cfunctionz00));
			BGl_modulezd2initializa7ationz75zzforeign_libraryz00(((long) 477408199),
				BSTRING_TO_STRING(BGl_string2773z00zzforeign_cfunctionz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string2773z00zzforeign_cfunctionz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string2773z00zzforeign_cfunctionz00));
			return
				BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string2773z00zzforeign_cfunctionz00));
		}
	}

#ifdef __cplusplus
}
#endif
