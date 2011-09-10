/*===========================================================================*/
/*   (Jas/stack.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Jas/stack.scm)*/
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
		obj_t BgL_codez00;
		obj_t BgL_vectz00;
	}              *BgL_typez00_bglt;

	typedef struct BgL_funz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_codez00;
		obj_t BgL_vectz00;
		struct BgL_typez00_bgl *BgL_tretz00;
		obj_t BgL_targsz00;
	}             *BgL_funz00_bglt;

	typedef struct BgL_fieldzd2orzd2methodz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_flagsz00;
		obj_t BgL_namez00;
		obj_t BgL_ownerz00;
		obj_t BgL_usertypez00;
		obj_t BgL_typez00;
		obj_t BgL_pnamez00;
		obj_t BgL_descriptorz00;
		obj_t BgL_poolz00;
		obj_t BgL_attributesz00;
	}                             *BgL_fieldzd2orzd2methodz00_bglt;

	typedef struct BgL_classfilez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_currentzd2methodzd2;
		obj_t BgL_globalsz00;
		obj_t BgL_poolz00;
		obj_t BgL_poolzd2siza7ez75;
		obj_t BgL_pooledzd2nameszd2;
		obj_t BgL_flagsz00;
		obj_t BgL_mez00;
		obj_t BgL_superz00;
		obj_t BgL_interfacesz00;
		obj_t BgL_fieldsz00;
		obj_t BgL_methodsz00;
		obj_t BgL_attributesz00;
	}                   *BgL_classfilez00_bglt;


	BGL_IMPORT obj_t BGl_zb2zb2zz__r4_numbers_6_5z00(obj_t);
	extern obj_t BGl_jaszd2errorzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzjas_stackz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzjas_stackz00();
	BGL_EXPORTED_DECL obj_t BGl_nbpushz00zzjas_stackz00(obj_t, obj_t);
	extern obj_t BGl_jaszd2warningzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_2maxz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzjas_stackz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzjas_stackz00();
	static obj_t BGl__stkzd2analysiszd2zzjas_stackz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzjas_stackz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_classfilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_libz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_nbpopz00zzjas_stackz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzjas_stackz00();
	BGL_EXPORTED_DECL obj_t BGl_stkzd2analysiszd2zzjas_stackz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_maxz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern int BGl_typezd2siza7ez75zzjas_classfilez00(BgL_typez00_bglt);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_za2popza2z00zzjas_stackz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__nbpopz00zzjas_stackz00(obj_t, obj_t, obj_t);
	static obj_t BGl_stkzd2analysezd2zzjas_stackz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__nbpushz00zzjas_stackz00(obj_t, obj_t, obj_t);
	static obj_t BGl_za2pushza2z00zzjas_stackz00 = BUNSPEC;
	static obj_t BGl_makezd2stkzd2envz00zzjas_stackz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzjas_stackz00();
	static obj_t BGl_methodzd2initzd2zzjas_stackz00();
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_stkzd2analysiszd2envz00zzjas_stackz00,
		BgL_bgl__stkza7d2analysisza72256z00, BGl__stkzd2analysiszd2zzjas_stackz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_nbpopzd2envzd2zzjas_stackz00,
		BgL_bgl__nbpopza700za7za7jas_s2257za7, BGl__nbpopz00zzjas_stackz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_nbpushzd2envzd2zzjas_stackz00,
		BgL_bgl__nbpushza700za7za7jas_2258za7, BGl__nbpushz00zzjas_stackz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2244z00zzjas_stackz00,
		BgL_bgl_string2244za700za7za7j2259za7, "bad cop for pop", 15);
	      DEFINE_STRING(BGl_string2245z00zzjas_stackz00,
		BgL_bgl_string2245za700za7za7j2260za7, "bad cop for push", 16);
	      DEFINE_STRING(BGl_string2246z00zzjas_stackz00,
		BgL_bgl_string2246za700za7za7j2261za7, "stack not empty", 15);
	      DEFINE_STRING(BGl_string2247z00zzjas_stackz00,
		BgL_bgl_string2247za700za7za7j2262za7, "return unreachable", 18);
	      DEFINE_STRING(BGl_string2248z00zzjas_stackz00,
		BgL_bgl_string2248za700za7za7j2263za7, "different stack for label", 25);
	      DEFINE_STRING(BGl_string2250z00zzjas_stackz00,
		BgL_bgl_string2250za700za7za7j2264za7, "jas_stack", 9);
	      DEFINE_STRING(BGl_string2249z00zzjas_stackz00,
		BgL_bgl_string2249za700za7za7j2265za7, "empty stack", 11);
	      DEFINE_STRING(BGl_string2251z00zzjas_stackz00,
		BgL_bgl_string2251za700za7za7j2266za7,
		"* #(0 1 1 1 1 1 1 1 1 2 2 1 1 1 2 2 1 1 1 1 2 1 2 1 2 1 1 1 1 1 2 2 2 2 1 1 1 1 2 2 2 2 1 1 1 1 1 2 1 2 1 1 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 2 3 4 4 5 6 2 1 2 1 2 1 2 1 2 1 2 1 2 1 2 1 2 1 2 1 2 1 2 1 2 1 2 1 2 1 2 1 2 1 2 1 2 0 2 1 2 1 1 2 1 2 2 1 2 1 1 1 1 1 1 1 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 * 0 * 0 * * * * 0 1 1 1 1 0 1 1 0 0 * 1 0 0 0 1 0 0 0 0) #(0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 2 2 2 2 2 2 2 2 1 2 1 2 1 1 1 1 1 2 2 2 2 1 1 1 1 2 2 2 2 1 1 1 1 3 4 3 4 3 3 3 3 1 2 1 2 3 2 3 4 2 2 4 2 4 2 4 2 4 2 4 2 4 2 4 2 4 2 4 2 4 1 2 1 2 2 3 2 3 2 3 2 4 2 4 2 4 0 1 1 1 2 2 2 1 1 1 2 2 2 1 1 1 4 2 2 4 4 1 1 1 1 1 1 2 2 2 2 2 2 2 2 0 0 0 1 1 1 2 1 2 1 0 0 * 1 * * * * * 0 0 1 1 1 1 1 1 1 1 * * 1 1 0 0 0 0 0 0) ",
		832);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzjas_stackz00(long
		BgL_checksumz00_714, char *BgL_fromz00_715)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzjas_stackz00))
				{
					BGl_requirezd2initializa7ationz75zzjas_stackz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzjas_stackz00();
					BGl_cnstzd2initzd2zzjas_stackz00();
					BGl_importedzd2moduleszd2initz00zzjas_stackz00();
					BGl_toplevelzd2initzd2zzjas_stackz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzjas_stackz00()
	{
		AN_OBJECT;
		{	/* Jas/stack.scm 1 */
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"jas_stack");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "jas_stack");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"jas_stack");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzjas_stackz00()
	{
		AN_OBJECT;
		{	/* Jas/stack.scm 1 */
			{	/* Jas/stack.scm 1 */
				obj_t BgL_cportz00_702;

				BgL_cportz00_702 =
					bgl_open_input_string(BGl_string2251z00zzjas_stackz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_703;

					BgL_iz00_703 = ((long) 2);
				BgL_loopz00_704:
					if ((BgL_iz00_703 == ((long) -1)))
						{	/* Jas/stack.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* Jas/stack.scm 1 */
							{	/* Jas/stack.scm 1 */
								obj_t BgL_arg2255z00_706;

								{	/* Jas/stack.scm 1 */

									{	/* Jas/stack.scm 1 */
										obj_t BgL_locationz00_708;

										BgL_locationz00_708 = BBOOL(((bool_t) 0));
										{	/* Jas/stack.scm 1 */

											BgL_arg2255z00_706 =
												BGl_readz00zz__readerz00(BgL_cportz00_702,
												BgL_locationz00_708);
										}
									}
								}
								{	/* Jas/stack.scm 1 */
									int BgL_auxz00_732;

									BgL_auxz00_732 = (int) (BgL_iz00_703);
									CNST_TABLE_SET(BgL_auxz00_732, BgL_arg2255z00_706);
							}}
							{	/* Jas/stack.scm 1 */
								int BgL_auxz00_709;

								BgL_auxz00_709 = (int) ((BgL_iz00_703 - ((long) 1)));
								{
									long BgL_iz00_737;

									BgL_iz00_737 = (long) (BgL_auxz00_709);
									BgL_iz00_703 = BgL_iz00_737;
									goto BgL_loopz00_704;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzjas_stackz00()
	{
		AN_OBJECT;
		{	/* Jas/stack.scm 1 */
			BGl_za2popza2z00zzjas_stackz00 = CNST_TABLE_REF(((long) 0));
			return (BGl_za2pushza2z00zzjas_stackz00 =
				CNST_TABLE_REF(((long) 1)), BUNSPEC);
		}
	}



/* nbpop */
	BGL_EXPORTED_DEF obj_t BGl_nbpopz00zzjas_stackz00(obj_t BgL_classfilez00_1,
		obj_t BgL_insz00_2)
	{
		AN_OBJECT;
		{	/* Jas/stack.scm 25 */
			{	/* Jas/stack.scm 26 */
				obj_t BgL_copz00_271;

				BgL_copz00_271 = CAR(BgL_insz00_2);
				{	/* Jas/stack.scm 26 */
					obj_t BgL_argsz00_272;

					BgL_argsz00_272 = CDR(BgL_insz00_2);
					{	/* Jas/stack.scm 26 */
						obj_t BgL_nz00_273;

						BgL_nz00_273 =
							VECTOR_REF(BGl_za2popza2z00zzjas_stackz00, CINT(BgL_copz00_271));
						{	/* Jas/stack.scm 26 */

							if ((BgL_nz00_273 == CNST_TABLE_REF(((long) 2))))
								{

									if (INTEGERP(BgL_copz00_271))
										{	/* Jas/stack.scm 28 */
											switch ((long) CINT(BgL_copz00_271))
												{
												case ((long) 179):
												case ((long) 181):

													{	/* Jas/stack.scm 30 */
														int BgL_nz00_278;

														{	/* Jas/stack.scm 30 */
															obj_t BgL_arg1940z00_282;

															{	/* Jas/stack.scm 30 */
																BgL_fieldzd2orzd2methodz00_bglt
																	BgL_obj1636z00_538;
																{	/* Jas/stack.scm 30 */
																	obj_t BgL_pairz00_537;

																	BgL_pairz00_537 = BgL_argsz00_272;
																	BgL_obj1636z00_538 =
																		(BgL_fieldzd2orzd2methodz00_bglt) (CAR
																		(BgL_pairz00_537));
																}
																BgL_arg1940z00_282 =
																	(((BgL_fieldzd2orzd2methodz00_bglt)
																		CREF(BgL_obj1636z00_538))->BgL_typez00);
															}
															BgL_nz00_278 =
																BGl_typezd2siza7ez75zzjas_classfilez00(
																(BgL_typez00_bglt) (BgL_arg1940z00_282));
														}
														switch ((long) CINT(BgL_copz00_271))
															{
															case ((long) 179):

																return BINT(BgL_nz00_278);
																break;
															case ((long) 181):

																return
																	BINT(((long) (BgL_nz00_278) + ((long) 1)));
																break;
															default:
																return BUNSPEC;
															}
													}
													break;
												case ((long) 182):
												case ((long) 183):
												case ((long) 184):
												case ((long) 185):

													{	/* Jas/stack.scm 35 */
														obj_t BgL_instance1911z00_284;

														{	/* Jas/stack.scm 35 */
															BgL_fieldzd2orzd2methodz00_bglt
																BgL_obj1636z00_542;
															{	/* Jas/stack.scm 35 */
																obj_t BgL_pairz00_541;

																BgL_pairz00_541 = BgL_argsz00_272;
																BgL_obj1636z00_542 =
																	(BgL_fieldzd2orzd2methodz00_bglt) (CAR
																	(BgL_pairz00_541));
															}
															BgL_instance1911z00_284 =
																(((BgL_fieldzd2orzd2methodz00_bglt)
																	CREF(BgL_obj1636z00_542))->BgL_typez00);
														}
														{	/* Jas/stack.scm 36 */
															obj_t BgL_nz00_285;

															{	/* Jas/stack.scm 36 */
																obj_t BgL_runner1958z00_305;

																{	/* Jas/stack.scm 36 */
																	obj_t BgL_l1919z00_287;

																	{
																		BgL_funz00_bglt BgL_auxz00_764;

																		BgL_auxz00_764 =
																			(BgL_funz00_bglt)
																			(BgL_instance1911z00_284);
																		BgL_l1919z00_287 =
																			(((BgL_funz00_bglt)
																				CREF(BgL_auxz00_764))->BgL_targsz00);
																	}
																	if (NULLP(BgL_l1919z00_287))
																		{	/* Jas/stack.scm 36 */
																			BgL_runner1958z00_305 = BNIL;
																		}
																	else
																		{	/* Jas/stack.scm 36 */
																			obj_t BgL_head1921z00_289;

																			{	/* Jas/stack.scm 36 */
																				int BgL_arg1952z00_302;

																				{	/* Jas/stack.scm 36 */
																					obj_t BgL_arg1957z00_304;

																					BgL_arg1957z00_304 =
																						CAR(BgL_l1919z00_287);
																					BgL_arg1952z00_302 =
																						BGl_typezd2siza7ez75zzjas_classfilez00
																						((BgL_typez00_bglt)
																						(BgL_arg1957z00_304));
																				}
																				BgL_head1921z00_289 =
																					MAKE_PAIR(BINT(BgL_arg1952z00_302),
																					BNIL);
																			}
																			{	/* Jas/stack.scm 36 */
																				obj_t BgL_g1924z00_290;

																				BgL_g1924z00_290 =
																					CDR(BgL_l1919z00_287);
																				{
																					obj_t BgL_l1919z00_292;

																					obj_t BgL_tail1922z00_293;

																					BgL_l1919z00_292 = BgL_g1924z00_290;
																					BgL_tail1922z00_293 =
																						BgL_head1921z00_289;
																				BgL_zc3anonymousza31944ze3z83_294:
																					if (NULLP(BgL_l1919z00_292))
																						{	/* Jas/stack.scm 36 */
																							BgL_runner1958z00_305 =
																								BgL_head1921z00_289;
																						}
																					else
																						{	/* Jas/stack.scm 36 */
																							obj_t BgL_newtail1923z00_296;

																							{	/* Jas/stack.scm 36 */
																								int BgL_arg1948z00_298;

																								{	/* Jas/stack.scm 36 */
																									obj_t BgL_arg1950z00_300;

																									BgL_arg1950z00_300 =
																										CAR(BgL_l1919z00_292);
																									BgL_arg1948z00_298 =
																										BGl_typezd2siza7ez75zzjas_classfilez00
																										((BgL_typez00_bglt)
																										(BgL_arg1950z00_300));
																								}
																								BgL_newtail1923z00_296 =
																									MAKE_PAIR(BINT
																									(BgL_arg1948z00_298), BNIL);
																							}
																							SET_CDR(BgL_tail1922z00_293,
																								BgL_newtail1923z00_296);
																							{
																								obj_t BgL_tail1922z00_785;

																								obj_t BgL_l1919z00_783;

																								BgL_l1919z00_783 =
																									CDR(BgL_l1919z00_292);
																								BgL_tail1922z00_785 =
																									BgL_newtail1923z00_296;
																								BgL_tail1922z00_293 =
																									BgL_tail1922z00_785;
																								BgL_l1919z00_292 =
																									BgL_l1919z00_783;
																								goto
																									BgL_zc3anonymousza31944ze3z83_294;
																							}
																						}
																				}
																			}
																		}
																}
																BgL_nz00_285 =
																	BGl_zb2zb2zz__r4_numbers_6_5z00
																	(BgL_runner1958z00_305);
															}
															if (((long) CINT(BgL_copz00_271) == ((long) 184)))
																{	/* Jas/stack.scm 37 */
																	return BgL_nz00_285;
																}
															else
																{	/* Jas/stack.scm 37 */
																	return
																		BINT(
																		((long) CINT(BgL_nz00_285) + ((long) 1)));
													}}} break;
												case ((long) 197):

													{	/* Jas/stack.scm 39 */
														obj_t BgL_pairz00_560;

														BgL_pairz00_560 = BgL_argsz00_272;
														return CAR(CDR(BgL_pairz00_560));
													}
													break;
												default:
												BgL_case_else1907z00_275:
													return
														BGl_jaszd2errorzd2zzjas_classfilez00(
														(BgL_classfilez00_bglt) (BgL_classfilez00_1),
														BGl_string2244z00zzjas_stackz00, BgL_copz00_271);
												}
										}
									else
										{	/* Jas/stack.scm 28 */
											goto BgL_case_else1907z00_275;
										}
								}
							else
								{	/* Jas/stack.scm 27 */
									return BgL_nz00_273;
								}
						}
					}
				}
			}
		}
	}



/* _nbpop */
	obj_t BGl__nbpopz00zzjas_stackz00(obj_t BgL_envz00_686,
		obj_t BgL_classfilez00_687, obj_t BgL_insz00_688)
	{
		AN_OBJECT;
		{	/* Jas/stack.scm 25 */
			return BGl_nbpopz00zzjas_stackz00(BgL_classfilez00_687, BgL_insz00_688);
		}
	}



/* nbpush */
	BGL_EXPORTED_DEF obj_t BGl_nbpushz00zzjas_stackz00(obj_t BgL_classfilez00_3,
		obj_t BgL_insz00_4)
	{
		AN_OBJECT;
		{	/* Jas/stack.scm 58 */
			{	/* Jas/stack.scm 59 */
				obj_t BgL_copz00_307;

				BgL_copz00_307 = CAR(BgL_insz00_4);
				{	/* Jas/stack.scm 59 */
					obj_t BgL_argsz00_308;

					BgL_argsz00_308 = CDR(BgL_insz00_4);
					{	/* Jas/stack.scm 59 */
						obj_t BgL_nz00_309;

						BgL_nz00_309 =
							VECTOR_REF(BGl_za2pushza2z00zzjas_stackz00, CINT(BgL_copz00_307));
						{	/* Jas/stack.scm 59 */

							if ((BgL_nz00_309 == CNST_TABLE_REF(((long) 2))))
								{

									if (INTEGERP(BgL_copz00_307))
										{	/* Jas/stack.scm 61 */
											switch ((long) CINT(BgL_copz00_307))
												{
												case ((long) 178):
												case ((long) 180):

													{	/* Jas/stack.scm 63 */
														obj_t BgL_arg1967z00_314;

														{	/* Jas/stack.scm 63 */
															BgL_fieldzd2orzd2methodz00_bglt
																BgL_obj1636z00_569;
															{	/* Jas/stack.scm 63 */
																obj_t BgL_pairz00_568;

																BgL_pairz00_568 = BgL_argsz00_308;
																BgL_obj1636z00_569 =
																	(BgL_fieldzd2orzd2methodz00_bglt) (CAR
																	(BgL_pairz00_568));
															}
															BgL_arg1967z00_314 =
																(((BgL_fieldzd2orzd2methodz00_bglt)
																	CREF(BgL_obj1636z00_569))->BgL_typez00);
														}
														return
															BINT(BGl_typezd2siza7ez75zzjas_classfilez00(
																(BgL_typez00_bglt) (BgL_arg1967z00_314)));
													}
													break;
												case ((long) 182):
												case ((long) 183):
												case ((long) 184):
												case ((long) 185):

													{	/* Jas/stack.scm 65 */
														obj_t BgL_instance1915z00_316;

														{	/* Jas/stack.scm 65 */
															BgL_fieldzd2orzd2methodz00_bglt
																BgL_obj1636z00_571;
															{	/* Jas/stack.scm 65 */
																obj_t BgL_pairz00_570;

																BgL_pairz00_570 = BgL_argsz00_308;
																BgL_obj1636z00_571 =
																	(BgL_fieldzd2orzd2methodz00_bglt) (CAR
																	(BgL_pairz00_570));
															}
															BgL_instance1915z00_316 =
																(((BgL_fieldzd2orzd2methodz00_bglt)
																	CREF(BgL_obj1636z00_571))->BgL_typez00);
														}
														{	/* Jas/stack.scm 66 */
															BgL_typez00_bglt BgL_arg1969z00_317;

															{
																BgL_funz00_bglt BgL_auxz00_818;

																BgL_auxz00_818 =
																	(BgL_funz00_bglt) (BgL_instance1915z00_316);
																BgL_arg1969z00_317 =
																	(((BgL_funz00_bglt) CREF(BgL_auxz00_818))->
																	BgL_tretz00);
															}
															return
																BINT(BGl_typezd2siza7ez75zzjas_classfilez00
																(BgL_arg1969z00_317));
														}
													}
													break;
												default:
												BgL_case_else1913z00_311:
													return
														BGl_jaszd2errorzd2zzjas_classfilez00(
														(BgL_classfilez00_bglt) (BgL_classfilez00_3),
														BGl_string2245z00zzjas_stackz00, BgL_copz00_307);
												}
										}
									else
										{	/* Jas/stack.scm 61 */
											goto BgL_case_else1913z00_311;
										}
								}
							else
								{	/* Jas/stack.scm 60 */
									return BgL_nz00_309;
								}
						}
					}
				}
			}
		}
	}



/* _nbpush */
	obj_t BGl__nbpushz00zzjas_stackz00(obj_t BgL_envz00_689,
		obj_t BgL_classfilez00_690, obj_t BgL_insz00_691)
	{
		AN_OBJECT;
		{	/* Jas/stack.scm 58 */
			return BGl_nbpushz00zzjas_stackz00(BgL_classfilez00_690, BgL_insz00_691);
		}
	}



/* stk-analysis */
	BGL_EXPORTED_DEF obj_t BGl_stkzd2analysiszd2zzjas_stackz00(obj_t
		BgL_classfilez00_5, obj_t BgL_codez00_6)
	{
		AN_OBJECT;
		{	/* Jas/stack.scm 70 */
			return
				BGl_stkzd2analysezd2zzjas_stackz00(BGl_makezd2stkzd2envz00zzjas_stackz00
				(BgL_codez00_6), BgL_classfilez00_5, BgL_codez00_6, BgL_codez00_6,
				BINT(((long) 0)), BINT(((long) 0)));
		}
	}



/* stk-analyse */
	obj_t BGl_stkzd2analysezd2zzjas_stackz00(obj_t BgL_envz00_701,
		obj_t BgL_classfilez00_700, obj_t BgL_codez00_699, obj_t BgL_lz00_322,
		obj_t BgL_nz00_323, obj_t BgL_maxnz00_324)
	{
		AN_OBJECT;
		{	/* Jas/stack.scm 93 */
		BGl_stkzd2analysezd2zzjas_stackz00:
			{
				obj_t BgL_insz00_353;

				obj_t BgL_lz00_354;

				long BgL_nz00_355;

				obj_t BgL_maxnz00_356;

				if (NULLP(BgL_lz00_322))
					{	/* Jas/stack.scm 73 */
						return
							BGl_jaszd2errorzd2zzjas_classfilez00(
							(BgL_classfilez00_bglt) (BgL_classfilez00_700),
							BGl_string2247z00zzjas_stackz00, BgL_lz00_322);
					}
				else
					{	/* Jas/stack.scm 75 */
						bool_t BgL_testz00_836;

						{	/* Jas/stack.scm 75 */
							obj_t BgL_auxz00_837;

							BgL_auxz00_837 = CAR(BgL_lz00_322);
							BgL_testz00_836 = SYMBOLP(BgL_auxz00_837);
						}
						if (BgL_testz00_836)
							{	/* Jas/stack.scm 76 */
								obj_t BgL_slotz00_328;

								BgL_slotz00_328 =
									BGl_assqz00zz__r4_pairs_and_lists_6_3z00(CAR(BgL_lz00_322),
									BgL_envz00_701);
								{	/* Jas/stack.scm 76 */
									obj_t BgL_nlabz00_329;

									BgL_nlabz00_329 = CDR(BgL_slotz00_328);
									{	/* Jas/stack.scm 76 */

										if (((long) CINT(BgL_nlabz00_329) == ((long) -1)))
											{	/* Jas/stack.scm 78 */
												SET_CDR(BgL_slotz00_328, BgL_nz00_323);
												{	/* Jas/stack.scm 80 */
													obj_t BgL_arg1976z00_331;

													BgL_arg1976z00_331 = CDR(BgL_lz00_322);
													{
														obj_t BgL_lz00_848;

														BgL_lz00_848 = BgL_arg1976z00_331;
														BgL_lz00_322 = BgL_lz00_848;
														goto BGl_stkzd2analysezd2zzjas_stackz00;
													}
												}
											}
										else
											{	/* Jas/stack.scm 78 */
												if (
													((long) CINT(BgL_nz00_323) ==
														(long) CINT(BgL_nlabz00_329)))
													{	/* Jas/stack.scm 81 */
														return BgL_maxnz00_324;
													}
												else
													{	/* Jas/stack.scm 81 */
														{	/* Jas/stack.scm 83 */
															obj_t BgL_arg1987z00_334;

															{	/* Jas/stack.scm 84 */
																obj_t BgL_arg1988z00_335;

																BgL_arg1988z00_335 = CAR(BgL_lz00_322);
																{	/* Jas/stack.scm 84 */
																	obj_t BgL_list1989z00_336;

																	{	/* Jas/stack.scm 84 */
																		obj_t BgL_arg1990z00_337;

																		{	/* Jas/stack.scm 84 */
																			obj_t BgL_arg1991z00_338;

																			BgL_arg1991z00_338 =
																				MAKE_PAIR(BgL_nlabz00_329, BNIL);
																			BgL_arg1990z00_337 =
																				MAKE_PAIR(BgL_nz00_323,
																				BgL_arg1991z00_338);
																		}
																		BgL_list1989z00_336 =
																			MAKE_PAIR(BgL_arg1988z00_335,
																			BgL_arg1990z00_337);
																	}
																	BgL_arg1987z00_334 = BgL_list1989z00_336;
																}
															}
															BGl_jaszd2warningzd2zzjas_classfilez00(
																(BgL_classfilez00_bglt) (BgL_classfilez00_700),
																BGl_string2248z00zzjas_stackz00,
																BgL_arg1987z00_334);
														}
														return BgL_maxnz00_324;
													}
											}
									}
								}
							}
						else
							{	/* Jas/stack.scm 87 */
								long BgL_downz00_340;

								{	/* Jas/stack.scm 87 */
									obj_t BgL_arg2000z00_350;

									BgL_arg2000z00_350 =
										BGl_nbpopz00zzjas_stackz00(BgL_classfilez00_700,
										CAR(BgL_lz00_322));
									BgL_downz00_340 =
										(
										(long) CINT(BgL_nz00_323) -
										(long) CINT(BgL_arg2000z00_350));
								}
								{	/* Jas/stack.scm 87 */
									long BgL_upz00_341;

									{	/* Jas/stack.scm 88 */
										obj_t BgL_arg1998z00_348;

										BgL_arg1998z00_348 =
											BGl_nbpushz00zzjas_stackz00(BgL_classfilez00_700,
											CAR(BgL_lz00_322));
										BgL_upz00_341 =
											(BgL_downz00_340 + (long) CINT(BgL_arg1998z00_348));
									}
									{	/* Jas/stack.scm 88 */

										if ((BgL_downz00_340 < ((long) 0)))
											{	/* Jas/stack.scm 89 */
												BGl_jaszd2warningzd2zzjas_classfilez00(
													(BgL_classfilez00_bglt) (BgL_classfilez00_700),
													BGl_string2249z00zzjas_stackz00,
													BINT(BgL_downz00_340));
												{	/* Jas/stack.scm 92 */
													long BgL_za71za7_594;

													BgL_za71za7_594 = (long) CINT(BgL_maxnz00_324);
													BgL_maxnz00_324 =
														BINT((BgL_za71za7_594 - BgL_downz00_340));
											}}
										else
											{	/* Jas/stack.scm 89 */
												BFALSE;
											}
										BgL_insz00_353 = CAR(BgL_lz00_322);
										BgL_lz00_354 = CDR(BgL_lz00_322);
										BgL_nz00_355 = BgL_upz00_341;
										BgL_maxnz00_356 =
											BGl_2maxz00zz__r4_numbers_6_5z00(BINT(BgL_upz00_341),
											BgL_maxnz00_324);
										{
											obj_t BgL_lz00_439;

											{	/* Jas/stack.scm 97 */
												obj_t BgL_aux1918z00_361;

												BgL_aux1918z00_361 = CAR(BgL_insz00_353);
												if (INTEGERP(BgL_aux1918z00_361))
													{	/* Jas/stack.scm 97 */
														switch ((long) CINT(BgL_aux1918z00_361))
															{
															case ((long) 153):
															case ((long) 154):
															case ((long) 155):
															case ((long) 156):
															case ((long) 157):
															case ((long) 158):
															case ((long) 159):
															case ((long) 160):
															case ((long) 161):
															case ((long) 162):
															case ((long) 163):
															case ((long) 164):
															case ((long) 165):
															case ((long) 166):
															case ((long) 198):
															case ((long) 199):

																{	/* Jas/stack.scm 99 */
																	obj_t BgL_xz00_363;

																	obj_t BgL_yz00_364;

																	BgL_xz00_363 =
																		BGl_stkzd2analysezd2zzjas_stackz00
																		(BgL_envz00_701, BgL_classfilez00_700,
																		BgL_codez00_699, BgL_lz00_354,
																		BINT(BgL_nz00_355), BgL_maxnz00_356);
																	{	/* Jas/stack.scm 99 */
																		obj_t BgL_arg2012z00_365;

																		{	/* Jas/stack.scm 99 */
																			obj_t BgL_pairz00_600;

																			BgL_pairz00_600 = BgL_insz00_353;
																			BgL_arg2012z00_365 =
																				CAR(CDR(BgL_pairz00_600));
																		}
																		BgL_yz00_364 =
																			BGl_stkzd2analysezd2zzjas_stackz00
																			(BgL_envz00_701, BgL_classfilez00_700,
																			BgL_codez00_699,
																			BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2012z00_365, BgL_codez00_699),
																			BINT(BgL_nz00_355), BgL_maxnz00_356);
																	}
																	return
																		BGl_2maxz00zz__r4_numbers_6_5z00
																		(BgL_xz00_363, BgL_yz00_364);
																}
																break;
															case ((long) 167):
															case ((long) 200):

																{	/* Jas/stack.scm 101 */
																	obj_t BgL_arg2021z00_366;

																	{	/* Jas/stack.scm 101 */
																		obj_t BgL_pairz00_606;

																		BgL_pairz00_606 = BgL_insz00_353;
																		BgL_arg2021z00_366 =
																			CAR(CDR(BgL_pairz00_606));
																	}
																	{
																		obj_t BgL_maxnz00_893;

																		obj_t BgL_nz00_891;

																		obj_t BgL_lz00_889;

																		BgL_lz00_889 =
																			BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2021z00_366, BgL_codez00_699);
																		BgL_nz00_891 = BINT(BgL_nz00_355);
																		BgL_maxnz00_893 = BgL_maxnz00_356;
																		BgL_maxnz00_324 = BgL_maxnz00_893;
																		BgL_nz00_323 = BgL_nz00_891;
																		BgL_lz00_322 = BgL_lz00_889;
																		goto BGl_stkzd2analysezd2zzjas_stackz00;
																	}
																}
																break;
															case ((long) 168):
															case ((long) 201):

																{	/* Jas/stack.scm 103 */
																	obj_t BgL_xz00_367;

																	obj_t BgL_yz00_368;

																	BgL_xz00_367 =
																		BGl_stkzd2analysezd2zzjas_stackz00
																		(BgL_envz00_701, BgL_classfilez00_700,
																		BgL_codez00_699, BgL_lz00_354,
																		BINT((BgL_nz00_355 - ((long) 1))),
																		BgL_maxnz00_356);
																	{	/* Jas/stack.scm 104 */
																		obj_t BgL_arg2023z00_370;

																		{	/* Jas/stack.scm 104 */
																			obj_t BgL_pairz00_612;

																			BgL_pairz00_612 = BgL_insz00_353;
																			BgL_arg2023z00_370 =
																				CAR(CDR(BgL_pairz00_612));
																		}
																		BgL_yz00_368 =
																			BGl_stkzd2analysezd2zzjas_stackz00
																			(BgL_envz00_701, BgL_classfilez00_700,
																			BgL_codez00_699,
																			BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2023z00_370, BgL_codez00_699),
																			BINT(BgL_nz00_355), BgL_maxnz00_356);
																	}
																	return
																		BGl_2maxz00zz__r4_numbers_6_5z00
																		(BgL_xz00_367, BgL_yz00_368);
																}
																break;
															case ((long) 169):
															case ((long) 191):

																return BgL_maxnz00_356;
																break;
															case ((long) 170):

																{
																	obj_t BgL_defz00_371;

																	obj_t BgL_begz00_372;

																	obj_t BgL_labsz00_373;

																	{	/* Jas/stack.scm 108 */
																		obj_t BgL_ezd21390zd2_375;

																		BgL_ezd21390zd2_375 = CDR(BgL_insz00_353);
																		if (PAIRP(BgL_ezd21390zd2_375))
																			{	/* Jas/stack.scm 97 */
																				obj_t BgL_cdrzd21398zd2_377;

																				BgL_cdrzd21398zd2_377 =
																					CDR(BgL_ezd21390zd2_375);
																				if (PAIRP(BgL_cdrzd21398zd2_377))
																					{	/* Jas/stack.scm 97 */
																						BgL_defz00_371 =
																							CAR(BgL_ezd21390zd2_375);
																						BgL_begz00_372 =
																							CAR(BgL_cdrzd21398zd2_377);
																						BgL_labsz00_373 =
																							CDR(BgL_cdrzd21398zd2_377);
																						{	/* Jas/stack.scm 110 */
																							obj_t BgL_runner2055z00_403;

																							{	/* Jas/stack.scm 110 */
																								obj_t BgL_arg2031z00_382;

																								obj_t BgL_arg2033z00_383;

																								BgL_arg2031z00_382 =
																									BGl_stkzd2analysezd2zzjas_stackz00
																									(BgL_envz00_701,
																									BgL_classfilez00_700,
																									BgL_codez00_699,
																									BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																									(BgL_defz00_371,
																										BgL_codez00_699),
																									BINT(BgL_nz00_355),
																									BgL_maxnz00_356);
																								if (NULLP(BgL_labsz00_373))
																									{	/* Jas/stack.scm 110 */
																										BgL_arg2033z00_383 = BNIL;
																									}
																								else
																									{	/* Jas/stack.scm 110 */
																										obj_t BgL_head1927z00_386;

																										{	/* Jas/stack.scm 110 */
																											obj_t BgL_arg2051z00_399;

																											{	/* Jas/stack.scm 110 */
																												obj_t
																													BgL_arg2053z00_401;
																												BgL_arg2053z00_401 =
																													CAR(BgL_labsz00_373);
																												BgL_arg2051z00_399 =
																													BGl_stkzd2analysezd2zzjas_stackz00
																													(BgL_envz00_701,
																													BgL_classfilez00_700,
																													BgL_codez00_699,
																													BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																													(BgL_arg2053z00_401,
																														BgL_codez00_699),
																													BINT(BgL_nz00_355),
																													BgL_maxnz00_356);
																											}
																											BgL_head1927z00_386 =
																												MAKE_PAIR
																												(BgL_arg2051z00_399,
																												BNIL);
																										}
																										{	/* Jas/stack.scm 110 */
																											obj_t BgL_g1930z00_387;

																											BgL_g1930z00_387 =
																												CDR(BgL_labsz00_373);
																											{
																												obj_t BgL_l1925z00_389;

																												obj_t
																													BgL_tail1928z00_390;
																												BgL_l1925z00_389 =
																													BgL_g1930z00_387;
																												BgL_tail1928z00_390 =
																													BgL_head1927z00_386;
																											BgL_zc3anonymousza32035ze3z83_391:
																												if (NULLP
																													(BgL_l1925z00_389))
																													{	/* Jas/stack.scm 110 */
																														BgL_arg2033z00_383 =
																															BgL_head1927z00_386;
																													}
																												else
																													{	/* Jas/stack.scm 110 */
																														obj_t
																															BgL_newtail1929z00_393;
																														{	/* Jas/stack.scm 110 */
																															obj_t
																																BgL_arg2038z00_395;
																															{	/* Jas/stack.scm 110 */
																																obj_t
																																	BgL_arg2048z00_397;
																																BgL_arg2048z00_397
																																	=
																																	CAR
																																	(BgL_l1925z00_389);
																																BgL_arg2038z00_395
																																	=
																																	BGl_stkzd2analysezd2zzjas_stackz00
																																	(BgL_envz00_701,
																																	BgL_classfilez00_700,
																																	BgL_codez00_699,
																																	BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																																	(BgL_arg2048z00_397,
																																		BgL_codez00_699),
																																	BINT
																																	(BgL_nz00_355),
																																	BgL_maxnz00_356);
																															}
																															BgL_newtail1929z00_393
																																=
																																MAKE_PAIR
																																(BgL_arg2038z00_395,
																																BNIL);
																														}
																														SET_CDR
																															(BgL_tail1928z00_390,
																															BgL_newtail1929z00_393);
																														{
																															obj_t
																																BgL_tail1928z00_930;
																															obj_t
																																BgL_l1925z00_928;
																															BgL_l1925z00_928 =
																																CDR
																																(BgL_l1925z00_389);
																															BgL_tail1928z00_930
																																=
																																BgL_newtail1929z00_393;
																															BgL_tail1928z00_390
																																=
																																BgL_tail1928z00_930;
																															BgL_l1925z00_389 =
																																BgL_l1925z00_928;
																															goto
																																BgL_zc3anonymousza32035ze3z83_391;
																														}
																													}
																											}
																										}
																									}
																								BgL_runner2055z00_403 =
																									MAKE_PAIR(BgL_arg2031z00_382,
																									BgL_arg2033z00_383);
																							}
																							{	/* Jas/stack.scm 110 */
																								obj_t BgL_aux2054z00_402;

																								BgL_aux2054z00_402 =
																									CAR(BgL_runner2055z00_403);
																								BgL_runner2055z00_403 =
																									CDR(BgL_runner2055z00_403);
																								return
																									BGl_maxz00zz__r4_numbers_6_5z00
																									(BgL_aux2054z00_402,
																									BgL_runner2055z00_403);
																							}
																						}
																					}
																				else
																					{	/* Jas/stack.scm 97 */
																						return BFALSE;
																					}
																			}
																		else
																			{	/* Jas/stack.scm 97 */
																				return BFALSE;
																			}
																	}
																}
																break;
															case ((long) 171):

																{
																	obj_t BgL_defz00_404;

																	obj_t BgL_tablez00_405;

																	{	/* Jas/stack.scm 112 */
																		obj_t BgL_ezd21407zd2_407;

																		BgL_ezd21407zd2_407 = CDR(BgL_insz00_353);
																		if (PAIRP(BgL_ezd21407zd2_407))
																			{	/* Jas/stack.scm 97 */
																				BgL_defz00_404 =
																					CAR(BgL_ezd21407zd2_407);
																				BgL_tablez00_405 =
																					CDR(BgL_ezd21407zd2_407);
																				{	/* Jas/stack.scm 114 */
																					obj_t BgL_runner2141z00_429;

																					{	/* Jas/stack.scm 114 */
																						obj_t BgL_arg2070z00_411;

																						obj_t BgL_arg2118z00_412;

																						BgL_arg2070z00_411 =
																							BGl_stkzd2analysezd2zzjas_stackz00
																							(BgL_envz00_701,
																							BgL_classfilez00_700,
																							BgL_codez00_699,
																							BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																							(BgL_defz00_404, BgL_codez00_699),
																							BINT(BgL_nz00_355),
																							BgL_maxnz00_356);
																						if (NULLP(BgL_tablez00_405))
																							{	/* Jas/stack.scm 115 */
																								BgL_arg2118z00_412 = BNIL;
																							}
																						else
																							{	/* Jas/stack.scm 115 */
																								obj_t BgL_head1933z00_415;

																								BgL_head1933z00_415 =
																									MAKE_PAIR(BNIL, BNIL);
																								{
																									obj_t BgL_l1931z00_417;

																									obj_t BgL_tail1934z00_418;

																									BgL_l1931z00_417 =
																										BgL_tablez00_405;
																									BgL_tail1934z00_418 =
																										BgL_head1933z00_415;
																								BgL_zc3anonymousza32120ze3z83_419:
																									if (NULLP
																										(BgL_l1931z00_417))
																										{	/* Jas/stack.scm 115 */
																											BgL_arg2118z00_412 =
																												CDR
																												(BgL_head1933z00_415);
																										}
																									else
																										{	/* Jas/stack.scm 115 */
																											obj_t
																												BgL_newtail1935z00_421;
																											{	/* Jas/stack.scm 115 */
																												obj_t
																													BgL_arg2126z00_423;
																												{	/* Jas/stack.scm 115 */
																													obj_t BgL_slotz00_425;

																													BgL_slotz00_425 =
																														CAR
																														(BgL_l1931z00_417);
																													{	/* Jas/stack.scm 115 */
																														obj_t
																															BgL_arg2139z00_426;
																														BgL_arg2139z00_426 =
																															CDR
																															(BgL_slotz00_425);
																														BgL_arg2126z00_423 =
																															BGl_stkzd2analysezd2zzjas_stackz00
																															(BgL_envz00_701,
																															BgL_classfilez00_700,
																															BgL_codez00_699,
																															BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																															(BgL_arg2139z00_426,
																																BgL_codez00_699),
																															BINT
																															(BgL_nz00_355),
																															BgL_maxnz00_356);
																													}
																												}
																												BgL_newtail1935z00_421 =
																													MAKE_PAIR
																													(BgL_arg2126z00_423,
																													BNIL);
																											}
																											SET_CDR
																												(BgL_tail1934z00_418,
																												BgL_newtail1935z00_421);
																											{
																												obj_t
																													BgL_tail1934z00_959;
																												obj_t BgL_l1931z00_957;

																												BgL_l1931z00_957 =
																													CDR(BgL_l1931z00_417);
																												BgL_tail1934z00_959 =
																													BgL_newtail1935z00_421;
																												BgL_tail1934z00_418 =
																													BgL_tail1934z00_959;
																												BgL_l1931z00_417 =
																													BgL_l1931z00_957;
																												goto
																													BgL_zc3anonymousza32120ze3z83_419;
																											}
																										}
																								}
																							}
																						BgL_runner2141z00_429 =
																							MAKE_PAIR(BgL_arg2070z00_411,
																							BgL_arg2118z00_412);
																					}
																					{	/* Jas/stack.scm 114 */
																						obj_t BgL_aux2140z00_428;

																						BgL_aux2140z00_428 =
																							CAR(BgL_runner2141z00_429);
																						BgL_runner2141z00_429 =
																							CDR(BgL_runner2141z00_429);
																						return
																							BGl_maxz00zz__r4_numbers_6_5z00
																							(BgL_aux2140z00_428,
																							BgL_runner2141z00_429);
																					}
																				}
																			}
																		else
																			{	/* Jas/stack.scm 97 */
																				return BFALSE;
																			}
																	}
																}
																break;
															case ((long) 172):
															case ((long) 173):
															case ((long) 174):
															case ((long) 175):
															case ((long) 176):
															case ((long) 177):

																if ((BgL_nz00_355 == ((long) 0)))
																	{	/* Jas/stack.scm 118 */
																		BFALSE;
																	}
																else
																	{	/* Jas/stack.scm 118 */
																		BGl_jaszd2warningzd2zzjas_classfilez00(
																			(BgL_classfilez00_bglt)
																			(BgL_classfilez00_700),
																			BGl_string2246z00zzjas_stackz00,
																			BINT(BgL_nz00_355));
																	}
																return BgL_maxnz00_356;
																break;
															case ((long) 202):

																{	/* Jas/stack.scm 121 */
																	obj_t BgL_xz00_431;

																	obj_t BgL_yz00_432;

																	BgL_xz00_431 =
																		BGl_stkzd2analysezd2zzjas_stackz00
																		(BgL_envz00_701, BgL_classfilez00_700,
																		BgL_codez00_699, BgL_lz00_354,
																		BINT(BgL_nz00_355), BgL_maxnz00_356);
																	{	/* Jas/stack.scm 121 */
																		obj_t BgL_arg2145z00_433;

																		{	/* Jas/stack.scm 121 */
																			obj_t BgL_auxz00_973;

																			{	/* Jas/stack.scm 121 */
																				obj_t BgL_pairz00_670;

																				BgL_pairz00_670 = BgL_insz00_353;
																				BgL_auxz00_973 =
																					CAR(CDR(CDR(CDR(BgL_pairz00_670))));
																			}
																			BgL_arg2145z00_433 =
																				BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																				(BgL_auxz00_973, BgL_codez00_699);
																		}
																		BgL_yz00_432 =
																			BGl_stkzd2analysezd2zzjas_stackz00
																			(BgL_envz00_701, BgL_classfilez00_700,
																			BgL_codez00_699, BgL_arg2145z00_433,
																			BINT(((long) 1)), BgL_maxnz00_356);
																	}
																	return
																		BGl_2maxz00zz__r4_numbers_6_5z00
																		(BgL_xz00_431, BgL_yz00_432);
																}
																break;
															default:
																BgL_lz00_439 = BgL_lz00_354;
															BgL_zc3anonymousza32160ze3z83_440:
																{
																	obj_t BgL_maxnz00_985;

																	obj_t BgL_nz00_983;

																	obj_t BgL_lz00_982;

																	BgL_lz00_982 = BgL_lz00_439;
																	BgL_nz00_983 = BINT(BgL_nz00_355);
																	BgL_maxnz00_985 = BgL_maxnz00_356;
																	BgL_maxnz00_324 = BgL_maxnz00_985;
																	BgL_nz00_323 = BgL_nz00_983;
																	BgL_lz00_322 = BgL_lz00_982;
																	goto BGl_stkzd2analysezd2zzjas_stackz00;
																}
															}
													}
												else
													{
														obj_t BgL_lz00_988;

														BgL_lz00_988 = BgL_lz00_354;
														BgL_lz00_439 = BgL_lz00_988;
														goto BgL_zc3anonymousza32160ze3z83_440;
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



/* _stk-analysis */
	obj_t BGl__stkzd2analysiszd2zzjas_stackz00(obj_t BgL_envz00_692,
		obj_t BgL_classfilez00_693, obj_t BgL_codez00_694)
	{
		AN_OBJECT;
		{	/* Jas/stack.scm 70 */
			return
				BGl_stkzd2analysiszd2zzjas_stackz00(BgL_classfilez00_693,
				BgL_codez00_694);
		}
	}



/* make-stk-env */
	obj_t BGl_makezd2stkzd2envz00zzjas_stackz00(obj_t BgL_lz00_7)
	{
		AN_OBJECT;
		{	/* Jas/stack.scm 125 */
		BGl_makezd2stkzd2envz00zzjas_stackz00:
			if (NULLP(BgL_lz00_7))
				{	/* Jas/stack.scm 126 */
					return BgL_lz00_7;
				}
			else
				{	/* Jas/stack.scm 127 */
					bool_t BgL_testz00_996;

					{	/* Jas/stack.scm 127 */
						obj_t BgL_auxz00_997;

						BgL_auxz00_997 = CAR(BgL_lz00_7);
						BgL_testz00_996 = SYMBOLP(BgL_auxz00_997);
					}
					if (BgL_testz00_996)
						{	/* Jas/stack.scm 127 */
							obj_t BgL_arg2165z00_447;

							obj_t BgL_arg2172z00_448;

							BgL_arg2165z00_447 =
								MAKE_PAIR(CAR(BgL_lz00_7), BINT(((long) -1)));
							BgL_arg2172z00_448 =
								BGl_makezd2stkzd2envz00zzjas_stackz00(CDR(BgL_lz00_7));
							return MAKE_PAIR(BgL_arg2165z00_447, BgL_arg2172z00_448);
						}
					else
						{
							obj_t BgL_lz00_1006;

							BgL_lz00_1006 = CDR(BgL_lz00_7);
							BgL_lz00_7 = BgL_lz00_1006;
							goto BGl_makezd2stkzd2envz00zzjas_stackz00;
						}
				}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzjas_stackz00()
	{
		AN_OBJECT;
		{	/* Jas/stack.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzjas_stackz00()
	{
		AN_OBJECT;
		{	/* Jas/stack.scm 1 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzjas_stackz00()
	{
		AN_OBJECT;
		{	/* Jas/stack.scm 1 */
			BGl_modulezd2initializa7ationz75zzjas_libz00(((long) 125143848),
				BSTRING_TO_STRING(BGl_string2250z00zzjas_stackz00));
			return
				BGl_modulezd2initializa7ationz75zzjas_classfilez00(((long) 324206891),
				BSTRING_TO_STRING(BGl_string2250z00zzjas_stackz00));
		}
	}

#ifdef __cplusplus
}
#endif
