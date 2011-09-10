/*===========================================================================*/
/*   (Jas/wide.scm)                                                          */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Jas/wide.scm)*/
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

	typedef struct BgL_classez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_codez00;
		obj_t BgL_vectz00;
		obj_t BgL_flagsz00;
		obj_t BgL_namez00;
		obj_t BgL_poolz00;
	}                *BgL_classez00_bglt;

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

	typedef struct BgL_fieldz00_bgl
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
	}               *BgL_fieldz00_bglt;

	typedef struct BgL_methodz00_bgl
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
	}                *BgL_methodz00_bglt;

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


	static obj_t BGl_widez00zzjas_widez00(obj_t, obj_t, obj_t);
	extern int BGl_poolzd2namezd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_zb2zb2zz__r4_numbers_6_5z00(obj_t);
	extern int
		BGl_poolzd2interfacezd2methodz00zzjas_classfilez00(BgL_classfilez00_bglt,
		BgL_methodz00_bglt);
	extern obj_t BGl_jaszd2errorzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t, obj_t);
	extern obj_t BGl_u2z00zzjas_libz00(int);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzjas_widez00 = BUNSPEC;
	extern int
		BGl_poolzd2classzd2byzd2reftypezd2zzjas_classfilez00(BgL_classfilez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_genericzd2initzd2zzjas_widez00();
	extern int BGl_poolzd2floatzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		float);
	extern int BGl_poolzd2stringzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t);
	extern int BGl_poolzd2fieldzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		BgL_fieldz00_bglt);
	static obj_t BGl_importedzd2moduleszd2initz00zzjas_widez00();
	extern int BGl_poolzd2methodzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		BgL_methodz00_bglt);
	BGL_IMPORT obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzjas_widez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_classfilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_libz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_zc3anonymousza31925ze3z83zzjas_widez00(obj_t, obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzjas_widez00();
	BGL_EXPORTED_DEF obj_t BGl_resolvezd2widezd2zzjas_widez00 = BUNSPEC;
	extern int BGl_typezd2siza7ez75zzjas_classfilez00(BgL_typez00_bglt);
	BGL_IMPORT obj_t BGl_absz00zz__r4_numbers_6_5z00(obj_t);
	extern int BGl_poolzd2llongzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		BGL_LONGLONG_T);
	extern int BGl_poolzd2doublezd2zzjas_classfilez00(BgL_classfilez00_bglt,
		double);
	extern int BGl_poolzd2longzd2zzjas_classfilez00(BgL_classfilez00_bglt, long);
	extern int BGl_poolzd2intzd2zzjas_classfilez00(BgL_classfilez00_bglt, int);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern int BGl_poolzd2elongzd2zzjas_classfilez00(BgL_classfilez00_bglt, long);
	static obj_t BGl_libraryzd2moduleszd2initz00zzjas_widez00();
	static obj_t BGl_methodzd2initzd2zzjas_widez00();
	extern int BGl_poolzd2classzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		BgL_classez00_bglt);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2441z00zzjas_widez00,
		BgL_bgl_string2441za700za7za7j2446za7, "bad immediate value", 19);
	      DEFINE_STRING(BGl_string2442z00zzjas_widez00,
		BgL_bgl_string2442za700za7za7j2447za7, "too much locals", 15);
	      DEFINE_STRING(BGl_string2443z00zzjas_widez00,
		BgL_bgl_string2443za700za7za7j2448za7, "too large increment in iinc", 27);
	      DEFINE_STRING(BGl_string2444z00zzjas_widez00,
		BgL_bgl_string2444za700za7za7j2449za7, "bad localvar args", 17);
	      DEFINE_STRING(BGl_string2445z00zzjas_widez00,
		BgL_bgl_string2445za700za7za7j2450za7, "jas_wide", 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2440z00zzjas_widez00,
		BgL_bgl_za7c3anonymousza7a312451z00,
		BGl_zc3anonymousza31925ze3z83zzjas_widez00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzjas_widez00(long
		BgL_checksumz00_664, char *BgL_fromz00_665)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzjas_widez00))
				{
					BGl_requirezd2initializa7ationz75zzjas_widez00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzjas_widez00();
					BGl_importedzd2moduleszd2initz00zzjas_widez00();
					BGl_toplevelzd2initzd2zzjas_widez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzjas_widez00()
	{
		AN_OBJECT;
		{	/* Jas/wide.scm 1 */
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"jas_wide");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"jas_wide");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "jas_wide");
			return BUNSPEC;
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzjas_widez00()
	{
		AN_OBJECT;
		{	/* Jas/wide.scm 1 */
			return (BGl_resolvezd2widezd2zzjas_widez00 =
				BGl_proc2440z00zzjas_widez00, BUNSPEC);
		}
	}



/* <anonymous:1925> */
	obj_t BGl_zc3anonymousza31925ze3z83zzjas_widez00(obj_t BgL_envz00_661,
		obj_t BgL_classfilez00_662, obj_t BgL_codez00_663)
	{
		AN_OBJECT;
		{	/* Jas/wide.scm 8 */
			{
				obj_t BgL_classfilez00_267;

				obj_t BgL_codez00_268;

				BgL_classfilez00_267 = BgL_classfilez00_662;
				BgL_codez00_268 = BgL_codez00_663;
				if (NULLP(BgL_codez00_268))
					{	/* Jas/wide.scm 9 */
						return BNIL;
					}
				else
					{	/* Jas/wide.scm 9 */
						obj_t BgL_head1913z00_272;

						BgL_head1913z00_272 = MAKE_PAIR(BNIL, BNIL);
						{
							obj_t BgL_l1911z00_274;

							obj_t BgL_tail1914z00_275;

							BgL_l1911z00_274 = BgL_codez00_268;
							BgL_tail1914z00_275 = BgL_head1913z00_272;
						BgL_zc3anonymousza31927ze3z83_276:
							if (NULLP(BgL_l1911z00_274))
								{	/* Jas/wide.scm 9 */
									return CDR(BgL_head1913z00_272);
								}
							else
								{	/* Jas/wide.scm 9 */
									obj_t BgL_newtail1915z00_278;

									{	/* Jas/wide.scm 9 */
										obj_t BgL_arg1930z00_280;

										{	/* Jas/wide.scm 9 */
											obj_t BgL_xz00_282;

											BgL_xz00_282 = CAR(BgL_l1911z00_274);
											if (PAIRP(BgL_xz00_282))
												{	/* Jas/wide.scm 9 */
													BgL_arg1930z00_280 =
														BGl_widez00zzjas_widez00(BgL_classfilez00_267,
														CAR(BgL_xz00_282), CDR(BgL_xz00_282));
												}
											else
												{	/* Jas/wide.scm 9 */
													BgL_arg1930z00_280 = BgL_xz00_282;
												}
										}
										BgL_newtail1915z00_278 =
											MAKE_PAIR(BgL_arg1930z00_280, BNIL);
									}
									SET_CDR(BgL_tail1914z00_275, BgL_newtail1915z00_278);
									{
										obj_t BgL_tail1914z00_691;

										obj_t BgL_l1911z00_689;

										BgL_l1911z00_689 = CDR(BgL_l1911z00_274);
										BgL_tail1914z00_691 = BgL_newtail1915z00_278;
										BgL_tail1914z00_275 = BgL_tail1914z00_691;
										BgL_l1911z00_274 = BgL_l1911z00_689;
										goto BgL_zc3anonymousza31927ze3z83_276;
									}
								}
						}
					}
			}
		}
	}



/* wide */
	obj_t BGl_widez00zzjas_widez00(obj_t BgL_classfilez00_1, obj_t BgL_copz00_2,
		obj_t BgL_argsz00_3)
	{
		AN_OBJECT;
		{	/* Jas/wide.scm 12 */
			if (INTEGERP(BgL_copz00_2))
				{	/* Jas/wide.scm 13 */
					switch ((long) CINT(BgL_copz00_2))
						{
						case ((long) 17):

							{	/* Jas/wide.scm 15 */
								obj_t BgL_arg1940z00_290;

								{	/* Jas/wide.scm 15 */
									obj_t BgL_arg1941z00_291;

									BgL_arg1941z00_291 = CAR(BgL_argsz00_3);
									BgL_arg1940z00_290 =
										BGl_u2z00zzjas_libz00(CINT(BgL_arg1941z00_291));
								}
								return MAKE_PAIR(BgL_copz00_2, BgL_arg1940z00_290);
							}
							break;
						case ((long) 18):

							{	/* Jas/wide.scm 17 */
								obj_t BgL_vz00_292;

								BgL_vz00_292 = CAR(BgL_argsz00_3);
								{
									int BgL_nz00_300;

									if (INTEGERP(BgL_vz00_292))
										{	/* Jas/wide.scm 19 */
											BgL_nz00_300 =
												BGl_poolzd2intzd2zzjas_classfilez00(
												(BgL_classfilez00_bglt) (BgL_classfilez00_1),
												CINT(BgL_vz00_292));
										BgL_zc3anonymousza31949ze3z83_301:
											if (((long) (BgL_nz00_300) < ((long) 256)))
												{	/* Jas/wide.scm 18 */
													obj_t BgL_list1951z00_303;

													{	/* Jas/wide.scm 18 */
														obj_t BgL_arg1955z00_305;

														BgL_arg1955z00_305 =
															MAKE_PAIR(BINT(BgL_nz00_300), BNIL);
														BgL_list1951z00_303 =
															MAKE_PAIR(BINT(((long) 18)), BgL_arg1955z00_305);
													}
													return BgL_list1951z00_303;
												}
											else
												{	/* Jas/wide.scm 18 */
													return
														MAKE_PAIR(BINT(((long) 19)),
														BGl_u2z00zzjas_libz00(BgL_nz00_300));
										}}
									else
										{	/* Jas/wide.scm 19 */
											if (REALP(BgL_vz00_292))
												{
													int BgL_nz00_716;

													BgL_nz00_716 =
														BGl_poolzd2floatzd2zzjas_classfilez00(
														(BgL_classfilez00_bglt) (BgL_classfilez00_1),
														REAL_TO_FLOAT(BgL_vz00_292));
													BgL_nz00_300 = BgL_nz00_716;
													goto BgL_zc3anonymousza31949ze3z83_301;
												}
											else
												{	/* Jas/wide.scm 20 */
													if (STRINGP(BgL_vz00_292))
														{
															int BgL_nz00_722;

															BgL_nz00_722 =
																BGl_poolzd2stringzd2zzjas_classfilez00(
																(BgL_classfilez00_bglt) (BgL_classfilez00_1),
																BgL_vz00_292);
															BgL_nz00_300 = BgL_nz00_722;
															goto BgL_zc3anonymousza31949ze3z83_301;
														}
													else
														{	/* Jas/wide.scm 21 */
															return
																BGl_jaszd2errorzd2zzjas_classfilez00(
																(BgL_classfilez00_bglt) (BgL_classfilez00_1),
																BGl_string2441z00zzjas_widez00, BgL_vz00_292);
														}
												}
										}
								}
							}
							break;
						case ((long) 20):

							{	/* Jas/wide.scm 24 */
								obj_t BgL_vz00_309;

								BgL_vz00_309 = CAR(BgL_argsz00_3);
								if (INTEGERP(BgL_vz00_309))
									{	/* Jas/wide.scm 25 */
										return
											MAKE_PAIR(BINT(((long) 20)),
											BGl_u2z00zzjas_libz00(BGl_poolzd2longzd2zzjas_classfilez00
												((BgL_classfilez00_bglt) (BgL_classfilez00_1),
													(long) CINT(BgL_vz00_309))));
									}
								else
									{	/* Jas/wide.scm 25 */
										if (REALP(BgL_vz00_309))
											{	/* Jas/wide.scm 26 */
												obj_t BgL_arg1977z00_316;

												{	/* Jas/wide.scm 26 */
													int BgL_arg1984z00_317;

													BgL_arg1984z00_317 =
														BGl_poolzd2doublezd2zzjas_classfilez00(
														(BgL_classfilez00_bglt) (BgL_classfilez00_1),
														REAL_TO_DOUBLE(BgL_vz00_309));
													BgL_arg1977z00_316 =
														BGl_u2z00zzjas_libz00(BgL_arg1984z00_317);
												}
												return MAKE_PAIR(BINT(((long) 20)), BgL_arg1977z00_316);
											}
										else
											{	/* Jas/wide.scm 26 */
												if (ELONGP(BgL_vz00_309))
													{	/* Jas/wide.scm 27 */
														obj_t BgL_arg1988z00_320;

														{	/* Jas/wide.scm 27 */
															int BgL_arg1989z00_321;

															BgL_arg1989z00_321 =
																BGl_poolzd2elongzd2zzjas_classfilez00(
																(BgL_classfilez00_bglt) (BgL_classfilez00_1),
																BELONG_TO_LONG(BgL_vz00_309));
															BgL_arg1988z00_320 =
																BGl_u2z00zzjas_libz00(BgL_arg1989z00_321);
														}
														return
															MAKE_PAIR(BINT(((long) 20)), BgL_arg1988z00_320);
													}
												else
													{	/* Jas/wide.scm 27 */
														if (LLONGP(BgL_vz00_309))
															{	/* Jas/wide.scm 28 */
																return
																	MAKE_PAIR(BINT(((long) 20)),
																	BGl_u2z00zzjas_libz00
																	(BGl_poolzd2llongzd2zzjas_classfilez00(
																			(BgL_classfilez00_bglt)
																			(BgL_classfilez00_1),
																			BLLONG_TO_LLONG(BgL_vz00_309))));
															}
														else
															{	/* Jas/wide.scm 28 */
																return
																	BGl_jaszd2errorzd2zzjas_classfilez00(
																	(BgL_classfilez00_bglt) (BgL_classfilez00_1),
																	BGl_string2441z00zzjas_widez00, BgL_vz00_309);
															}
													}
											}
									}
							}
							break;
						case ((long) 21):
						case ((long) 22):
						case ((long) 23):
						case ((long) 24):
						case ((long) 25):
						case ((long) 54):
						case ((long) 55):
						case ((long) 56):
						case ((long) 57):
						case ((long) 58):

							{	/* Jas/wide.scm 31 */
								obj_t BgL_indexz00_326;

								BgL_indexz00_326 = CAR(BgL_argsz00_3);
								{	/* Jas/wide.scm 31 */
									long BgL_basez00_327;

									if (((long) CINT(BgL_copz00_2) > ((long) 50)))
										{	/* Jas/wide.scm 32 */
											BgL_basez00_327 = ((long) 54);
										}
									else
										{	/* Jas/wide.scm 32 */
											BgL_basez00_327 = ((long) 21);
										}
									{	/* Jas/wide.scm 32 */
										long BgL_ismallz00_328;

										BgL_ismallz00_328 =
											(
											(BgL_basez00_327 + ((long) 5)) +
											(((long) CINT(BgL_copz00_2) -
													BgL_basez00_327) * ((long) 4)));
										{	/* Jas/wide.scm 33 */

											if (((long) CINT(BgL_indexz00_326) < ((long) 4)))
												{	/* Jas/wide.scm 34 */
													obj_t BgL_arg1995z00_330;

													BgL_arg1995z00_330 =
														BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT
														(BgL_ismallz00_328), BgL_indexz00_326);
													{	/* Jas/wide.scm 34 */
														obj_t BgL_list1996z00_331;

														BgL_list1996z00_331 =
															MAKE_PAIR(BgL_arg1995z00_330, BNIL);
														return BgL_list1996z00_331;
													}
												}
											else
												{	/* Jas/wide.scm 34 */
													if (((long) CINT(BgL_indexz00_326) < ((long) 256)))
														{	/* Jas/wide.scm 35 */
															obj_t BgL_list1998z00_333;

															{	/* Jas/wide.scm 35 */
																obj_t BgL_arg1999z00_334;

																BgL_arg1999z00_334 =
																	MAKE_PAIR(BgL_indexz00_326, BNIL);
																BgL_list1998z00_333 =
																	MAKE_PAIR(BgL_copz00_2, BgL_arg1999z00_334);
															}
															return BgL_list1998z00_333;
														}
													else
														{	/* Jas/wide.scm 35 */
															if (
																((long) CINT(BgL_indexz00_326) <
																	((long) 65536)))
																{	/* Jas/wide.scm 36 */
																	obj_t BgL_arg2002z00_337;

																	{	/* Jas/wide.scm 36 */
																		obj_t BgL_arg2003z00_338;

																		BgL_arg2003z00_338 =
																			BGl_u2z00zzjas_libz00(CINT
																			(BgL_indexz00_326));
																		{	/* Jas/wide.scm 36 */
																			obj_t BgL_list2004z00_339;

																			BgL_list2004z00_339 =
																				MAKE_PAIR(BgL_arg2003z00_338, BNIL);
																			BgL_arg2002z00_337 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_copz00_2, BgL_list2004z00_339);
																	}}
																	return
																		MAKE_PAIR(BINT(((long) 196)),
																		BgL_arg2002z00_337);
																}
															else
																{	/* Jas/wide.scm 36 */
																	return
																		BGl_jaszd2errorzd2zzjas_classfilez00(
																		(BgL_classfilez00_bglt)
																		(BgL_classfilez00_1),
																		BGl_string2442z00zzjas_widez00,
																		BgL_indexz00_326);
																}
														}
												}
										}
									}
								}
							}
							break;
						case ((long) 132):

							{	/* Jas/wide.scm 40 */
								obj_t BgL_indexz00_345;

								obj_t BgL_nz00_346;

								BgL_indexz00_345 = CAR(BgL_argsz00_3);
								{	/* Jas/wide.scm 40 */
									obj_t BgL_pairz00_588;

									BgL_pairz00_588 = BgL_argsz00_3;
									BgL_nz00_346 = CAR(CDR(BgL_pairz00_588));
								}
								{	/* Jas/wide.scm 42 */
									bool_t BgL_testz00_796;

									if (((long) CINT(BgL_indexz00_345) < ((long) 256)))
										{	/* Jas/wide.scm 42 */
											if (((long) CINT(BgL_nz00_346) > ((long) -129)))
												{	/* Jas/wide.scm 42 */
													BgL_testz00_796 =
														((long) CINT(BgL_nz00_346) < ((long) 128));
												}
											else
												{	/* Jas/wide.scm 42 */
													BgL_testz00_796 = ((bool_t) 0);
												}
										}
									else
										{	/* Jas/wide.scm 42 */
											BgL_testz00_796 = ((bool_t) 0);
										}
									if (BgL_testz00_796)
										{	/* Jas/wide.scm 43 */
											obj_t BgL_list2026z00_348;

											{	/* Jas/wide.scm 43 */
												obj_t BgL_arg2028z00_350;

												{	/* Jas/wide.scm 43 */
													obj_t BgL_arg2029z00_351;

													BgL_arg2029z00_351 = MAKE_PAIR(BgL_nz00_346, BNIL);
													BgL_arg2028z00_350 =
														MAKE_PAIR(BgL_indexz00_345, BgL_arg2029z00_351);
												}
												BgL_list2026z00_348 =
													MAKE_PAIR(BINT(((long) 132)), BgL_arg2028z00_350);
											}
											return BgL_list2026z00_348;
										}
									else
										{	/* Jas/wide.scm 42 */
											if (((long) CINT(BgL_indexz00_345) >= ((long) 65536)))
												{	/* Jas/wide.scm 44 */
													return
														BGl_jaszd2errorzd2zzjas_classfilez00(
														(BgL_classfilez00_bglt) (BgL_classfilez00_1),
														BGl_string2442z00zzjas_widez00, BgL_indexz00_345);
												}
											else
												{	/* Jas/wide.scm 44 */
													if (
														((long)
															CINT(BGl_absz00zz__r4_numbers_6_5z00
																(BgL_nz00_346)) >= ((long) 32768)))
														{	/* Jas/wide.scm 46 */
															return
																BGl_jaszd2errorzd2zzjas_classfilez00(
																(BgL_classfilez00_bglt) (BgL_classfilez00_1),
																BGl_string2443z00zzjas_widez00, BgL_nz00_346);
														}
													else
														{	/* Jas/wide.scm 48 */
															obj_t BgL_arg2038z00_355;

															{	/* Jas/wide.scm 48 */
																obj_t BgL_arg2048z00_357;

																obj_t BgL_arg2051z00_358;

																BgL_arg2048z00_357 =
																	BGl_u2z00zzjas_libz00(CINT(BgL_indexz00_345));
																BgL_arg2051z00_358 =
																	BGl_u2z00zzjas_libz00(CINT(BgL_nz00_346));
																{	/* Jas/wide.scm 48 */
																	obj_t BgL_list2052z00_359;

																	{	/* Jas/wide.scm 48 */
																		obj_t BgL_arg2053z00_360;

																		BgL_arg2053z00_360 =
																			MAKE_PAIR(BgL_arg2051z00_358, BNIL);
																		BgL_list2052z00_359 =
																			MAKE_PAIR(BgL_arg2048z00_357,
																			BgL_arg2053z00_360);
																	}
																	BgL_arg2038z00_355 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BINT(((long) 132)), BgL_list2052z00_359);
															}}
															return
																MAKE_PAIR(BINT(((long) 196)),
																BgL_arg2038z00_355);
							}}}}} break;
						case ((long) 169):

							{	/* Jas/wide.scm 50 */
								obj_t BgL_indexz00_365;

								BgL_indexz00_365 = CAR(BgL_argsz00_3);
								if (((long) CINT(BgL_indexz00_365) < ((long) 256)))
									{	/* Jas/wide.scm 51 */
										obj_t BgL_list2065z00_367;

										{	/* Jas/wide.scm 51 */
											obj_t BgL_arg2118z00_369;

											BgL_arg2118z00_369 = MAKE_PAIR(BgL_indexz00_365, BNIL);
											BgL_list2065z00_367 =
												MAKE_PAIR(BINT(((long) 169)), BgL_arg2118z00_369);
										}
										return BgL_list2065z00_367;
									}
								else
									{	/* Jas/wide.scm 51 */
										if (((long) CINT(BgL_indexz00_365) < ((long) 65536)))
											{	/* Jas/wide.scm 52 */
												obj_t BgL_arg2126z00_372;

												{	/* Jas/wide.scm 52 */
													obj_t BgL_arg2139z00_374;

													BgL_arg2139z00_374 =
														BGl_u2z00zzjas_libz00(CINT(BgL_indexz00_365));
													{	/* Jas/wide.scm 52 */
														obj_t BgL_list2140z00_375;

														BgL_list2140z00_375 =
															MAKE_PAIR(BgL_arg2139z00_374, BNIL);
														BgL_arg2126z00_372 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT((
																	(long) 169)), BgL_list2140z00_375);
												}}
												return
													MAKE_PAIR(BINT(((long) 196)), BgL_arg2126z00_372);
											}
										else
											{	/* Jas/wide.scm 52 */
												return
													BGl_jaszd2errorzd2zzjas_classfilez00(
													(BgL_classfilez00_bglt) (BgL_classfilez00_1),
													BGl_string2442z00zzjas_widez00, BgL_indexz00_365);
											}
									}
							}
							break;
						case ((long) 178):
						case ((long) 179):
						case ((long) 180):
						case ((long) 181):

							{	/* Jas/wide.scm 56 */
								obj_t BgL_arg2141z00_376;

								{	/* Jas/wide.scm 56 */
									int BgL_arg2145z00_377;

									{	/* Jas/wide.scm 56 */
										obj_t BgL_arg2151z00_378;

										BgL_arg2151z00_378 = CAR(BgL_argsz00_3);
										BgL_arg2145z00_377 =
											BGl_poolzd2fieldzd2zzjas_classfilez00(
											(BgL_classfilez00_bglt) (BgL_classfilez00_1),
											(BgL_fieldz00_bglt) (BgL_arg2151z00_378));
									}
									BgL_arg2141z00_376 =
										BGl_u2z00zzjas_libz00(BgL_arg2145z00_377);
								}
								return MAKE_PAIR(BgL_copz00_2, BgL_arg2141z00_376);
							}
							break;
						case ((long) 182):
						case ((long) 183):
						case ((long) 184):

							{	/* Jas/wide.scm 58 */
								obj_t BgL_arg2155z00_379;

								{	/* Jas/wide.scm 58 */
									int BgL_arg2159z00_380;

									{	/* Jas/wide.scm 58 */
										obj_t BgL_arg2165z00_381;

										BgL_arg2165z00_381 = CAR(BgL_argsz00_3);
										BgL_arg2159z00_380 =
											BGl_poolzd2methodzd2zzjas_classfilez00(
											(BgL_classfilez00_bglt) (BgL_classfilez00_1),
											(BgL_methodz00_bglt) (BgL_arg2165z00_381));
									}
									BgL_arg2155z00_379 =
										BGl_u2z00zzjas_libz00(BgL_arg2159z00_380);
								}
								return MAKE_PAIR(BgL_copz00_2, BgL_arg2155z00_379);
							}
							break;
						case ((long) 185):

							{	/* Jas/wide.scm 60 */
								obj_t BgL_mz00_382;

								BgL_mz00_382 = CAR(BgL_argsz00_3);
								{	/* Jas/wide.scm 61 */
									obj_t BgL_instance1909z00_383;

									{
										BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_862;

										BgL_auxz00_862 =
											(BgL_fieldzd2orzd2methodz00_bglt) (BgL_mz00_382);
										BgL_instance1909z00_383 =
											(((BgL_fieldzd2orzd2methodz00_bglt)
												CREF(BgL_auxz00_862))->BgL_typez00);
									}
									{	/* Jas/wide.scm 62 */
										obj_t BgL_arg2172z00_384;

										{	/* Jas/wide.scm 62 */
											obj_t BgL_arg2178z00_385;

											obj_t BgL_arg2185z00_386;

											BgL_arg2178z00_385 =
												BGl_u2z00zzjas_libz00
												(BGl_poolzd2interfacezd2methodz00zzjas_classfilez00(
													(BgL_classfilez00_bglt) (BgL_classfilez00_1),
													(BgL_methodz00_bglt) (BgL_mz00_382)));
											{	/* Jas/wide.scm 63 */
												long BgL_arg2192z00_388;

												{	/* Jas/wide.scm 63 */
													obj_t BgL_arg2213z00_393;

													{	/* Jas/wide.scm 63 */
														obj_t BgL_runner2241z00_412;

														{	/* Jas/wide.scm 63 */
															obj_t BgL_l1916z00_394;

															{
																BgL_funz00_bglt BgL_auxz00_869;

																BgL_auxz00_869 =
																	(BgL_funz00_bglt) (BgL_instance1909z00_383);
																BgL_l1916z00_394 =
																	(((BgL_funz00_bglt) CREF(BgL_auxz00_869))->
																	BgL_targsz00);
															}
															if (NULLP(BgL_l1916z00_394))
																{	/* Jas/wide.scm 63 */
																	BgL_runner2241z00_412 = BNIL;
																}
															else
																{	/* Jas/wide.scm 63 */
																	obj_t BgL_head1918z00_396;

																	{	/* Jas/wide.scm 63 */
																		int BgL_arg2237z00_409;

																		{	/* Jas/wide.scm 63 */
																			obj_t BgL_arg2240z00_411;

																			BgL_arg2240z00_411 =
																				CAR(BgL_l1916z00_394);
																			BgL_arg2237z00_409 =
																				BGl_typezd2siza7ez75zzjas_classfilez00(
																				(BgL_typez00_bglt)
																				(BgL_arg2240z00_411));
																		}
																		BgL_head1918z00_396 =
																			MAKE_PAIR(BINT(BgL_arg2237z00_409), BNIL);
																	}
																	{	/* Jas/wide.scm 63 */
																		obj_t BgL_g1924z00_397;

																		BgL_g1924z00_397 = CDR(BgL_l1916z00_394);
																		{
																			obj_t BgL_l1916z00_399;

																			obj_t BgL_tail1919z00_400;

																			BgL_l1916z00_399 = BgL_g1924z00_397;
																			BgL_tail1919z00_400 = BgL_head1918z00_396;
																		BgL_zc3anonymousza32215ze3z83_401:
																			if (NULLP(BgL_l1916z00_399))
																				{	/* Jas/wide.scm 63 */
																					BgL_runner2241z00_412 =
																						BgL_head1918z00_396;
																				}
																			else
																				{	/* Jas/wide.scm 63 */
																					obj_t BgL_newtail1920z00_403;

																					{	/* Jas/wide.scm 63 */
																						int BgL_arg2226z00_405;

																						{	/* Jas/wide.scm 63 */
																							obj_t BgL_arg2233z00_407;

																							BgL_arg2233z00_407 =
																								CAR(BgL_l1916z00_399);
																							BgL_arg2226z00_405 =
																								BGl_typezd2siza7ez75zzjas_classfilez00
																								((BgL_typez00_bglt)
																								(BgL_arg2233z00_407));
																						}
																						BgL_newtail1920z00_403 =
																							MAKE_PAIR(BINT
																							(BgL_arg2226z00_405), BNIL);
																					}
																					SET_CDR(BgL_tail1919z00_400,
																						BgL_newtail1920z00_403);
																					{
																						obj_t BgL_tail1919z00_890;

																						obj_t BgL_l1916z00_888;

																						BgL_l1916z00_888 =
																							CDR(BgL_l1916z00_399);
																						BgL_tail1919z00_890 =
																							BgL_newtail1920z00_403;
																						BgL_tail1919z00_400 =
																							BgL_tail1919z00_890;
																						BgL_l1916z00_399 = BgL_l1916z00_888;
																						goto
																							BgL_zc3anonymousza32215ze3z83_401;
																					}
																				}
																		}
																	}
																}
														}
														BgL_arg2213z00_393 =
															BGl_zb2zb2zz__r4_numbers_6_5z00
															(BgL_runner2241z00_412);
													}
													BgL_arg2192z00_388 =
														(((long) 1) + (long) CINT(BgL_arg2213z00_393));
												}
												{	/* Jas/wide.scm 63 */
													obj_t BgL_list2199z00_390;

													{	/* Jas/wide.scm 63 */
														obj_t BgL_arg2200z00_391;

														BgL_arg2200z00_391 =
															MAKE_PAIR(BINT(((long) 0)), BNIL);
														BgL_list2199z00_390 =
															MAKE_PAIR(BINT(BgL_arg2192z00_388),
															BgL_arg2200z00_391);
													}
													BgL_arg2185z00_386 = BgL_list2199z00_390;
											}}
											BgL_arg2172z00_384 =
												bgl_append2(BgL_arg2178z00_385, BgL_arg2185z00_386);
										}
										return MAKE_PAIR(BgL_copz00_2, BgL_arg2172z00_384);
									}
								}
							}
							break;
						case ((long) 187):

							{	/* Jas/wide.scm 66 */
								obj_t BgL_arg2242z00_413;

								{	/* Jas/wide.scm 66 */
									int BgL_arg2243z00_414;

									{	/* Jas/wide.scm 66 */
										obj_t BgL_arg2245z00_415;

										BgL_arg2245z00_415 = CAR(BgL_argsz00_3);
										BgL_arg2243z00_414 =
											BGl_poolzd2classzd2zzjas_classfilez00(
											(BgL_classfilez00_bglt) (BgL_classfilez00_1),
											(BgL_classez00_bglt) (BgL_arg2245z00_415));
									}
									BgL_arg2242z00_413 =
										BGl_u2z00zzjas_libz00(BgL_arg2243z00_414);
								}
								return MAKE_PAIR(BgL_copz00_2, BgL_arg2242z00_413);
							}
							break;
						case ((long) 189):
						case ((long) 192):
						case ((long) 193):

							{	/* Jas/wide.scm 68 */
								obj_t BgL_arg2252z00_416;

								{	/* Jas/wide.scm 68 */
									int BgL_arg2255z00_417;

									{	/* Jas/wide.scm 68 */
										obj_t BgL_arg2259z00_418;

										BgL_arg2259z00_418 = CAR(BgL_argsz00_3);
										BgL_arg2255z00_417 =
											BGl_poolzd2classzd2byzd2reftypezd2zzjas_classfilez00(
											(BgL_classfilez00_bglt) (BgL_classfilez00_1),
											(BgL_typez00_bglt) (BgL_arg2259z00_418));
									}
									BgL_arg2252z00_416 =
										BGl_u2z00zzjas_libz00(BgL_arg2255z00_417);
								}
								return MAKE_PAIR(BgL_copz00_2, BgL_arg2252z00_416);
							}
							break;
						case ((long) 197):

							{	/* Jas/wide.scm 70 */
								obj_t BgL_arg2260z00_419;

								{	/* Jas/wide.scm 70 */
									obj_t BgL_arg2267z00_420;

									obj_t BgL_arg2274z00_421;

									{	/* Jas/wide.scm 70 */
										int BgL_arg2275z00_422;

										{	/* Jas/wide.scm 70 */
											obj_t BgL_arg2282z00_423;

											BgL_arg2282z00_423 = CAR(BgL_argsz00_3);
											BgL_arg2275z00_422 =
												BGl_poolzd2classzd2byzd2reftypezd2zzjas_classfilez00(
												(BgL_classfilez00_bglt) (BgL_classfilez00_1),
												(BgL_typez00_bglt) (BgL_arg2282z00_423));
										}
										BgL_arg2267z00_420 =
											BGl_u2z00zzjas_libz00(BgL_arg2275z00_422);
									}
									{	/* Jas/wide.scm 71 */
										obj_t BgL_arg2285z00_424;

										{	/* Jas/wide.scm 71 */
											obj_t BgL_pairz00_635;

											BgL_pairz00_635 = BgL_argsz00_3;
											BgL_arg2285z00_424 = CAR(CDR(BgL_pairz00_635));
										}
										{	/* Jas/wide.scm 71 */
											obj_t BgL_list2286z00_425;

											BgL_list2286z00_425 = MAKE_PAIR(BgL_arg2285z00_424, BNIL);
											BgL_arg2274z00_421 = BgL_list2286z00_425;
									}}
									BgL_arg2260z00_419 =
										bgl_append2(BgL_arg2267z00_420, BgL_arg2274z00_421);
								}
								return MAKE_PAIR(BgL_copz00_2, BgL_arg2260z00_419);
							}
							break;
						case ((long) 205):

							{
								obj_t BgL_begz00_426;

								obj_t BgL_endz00_427;

								obj_t BgL_namez00_428;

								obj_t BgL_typez00_429;

								obj_t BgL_indexz00_430;

								if (PAIRP(BgL_argsz00_3))
									{	/* Jas/wide.scm 13 */
										obj_t BgL_cdrzd21403zd2_435;

										BgL_cdrzd21403zd2_435 = CDR(BgL_argsz00_3);
										if (PAIRP(BgL_cdrzd21403zd2_435))
											{	/* Jas/wide.scm 13 */
												obj_t BgL_cdrzd21410zd2_437;

												BgL_cdrzd21410zd2_437 = CDR(BgL_cdrzd21403zd2_435);
												if (PAIRP(BgL_cdrzd21410zd2_437))
													{	/* Jas/wide.scm 13 */
														obj_t BgL_cdrzd21416zd2_439;

														BgL_cdrzd21416zd2_439 = CDR(BgL_cdrzd21410zd2_437);
														if (PAIRP(BgL_cdrzd21416zd2_439))
															{	/* Jas/wide.scm 13 */
																obj_t BgL_cdrzd21421zd2_441;

																BgL_cdrzd21421zd2_441 =
																	CDR(BgL_cdrzd21416zd2_439);
																if (PAIRP(BgL_cdrzd21421zd2_441))
																	{	/* Jas/wide.scm 13 */
																		if (NULLP(CDR(BgL_cdrzd21421zd2_441)))
																			{	/* Jas/wide.scm 13 */
																				BgL_begz00_426 = CAR(BgL_argsz00_3);
																				BgL_endz00_427 =
																					CAR(BgL_cdrzd21403zd2_435);
																				BgL_namez00_428 =
																					CAR(BgL_cdrzd21410zd2_437);
																				BgL_typez00_429 =
																					CAR(BgL_cdrzd21416zd2_439);
																				BgL_indexz00_430 =
																					CAR(BgL_cdrzd21421zd2_441);
																				{	/* Jas/wide.scm 75 */
																					int BgL_arg2331z00_450;

																					int BgL_arg2338z00_451;

																					BgL_arg2331z00_450 =
																						BGl_poolzd2namezd2zzjas_classfilez00
																						((BgL_classfilez00_bglt)
																						(BgL_classfilez00_1),
																						BgL_namez00_428);
																					{	/* Jas/wide.scm 76 */
																						obj_t BgL_arg2377z00_458;

																						{
																							BgL_typez00_bglt BgL_auxz00_941;

																							BgL_auxz00_941 =
																								(BgL_typez00_bglt)
																								(BgL_typez00_429);
																							BgL_arg2377z00_458 =
																								(((BgL_typez00_bglt)
																									CREF(BgL_auxz00_941))->
																								BgL_codez00);
																						}
																						BgL_arg2338z00_451 =
																							BGl_poolzd2namezd2zzjas_classfilez00
																							((BgL_classfilez00_bglt)
																							(BgL_classfilez00_1),
																							BgL_arg2377z00_458);
																					}
																					{	/* Jas/wide.scm 75 */
																						obj_t BgL_list2339z00_452;

																						{	/* Jas/wide.scm 75 */
																							obj_t BgL_arg2344z00_453;

																							{	/* Jas/wide.scm 75 */
																								obj_t BgL_arg2351z00_454;

																								{	/* Jas/wide.scm 75 */
																									obj_t BgL_arg2357z00_455;

																									{	/* Jas/wide.scm 75 */
																										obj_t BgL_arg2364z00_456;

																										{	/* Jas/wide.scm 75 */
																											obj_t BgL_arg2370z00_457;

																											BgL_arg2370z00_457 =
																												MAKE_PAIR
																												(BgL_indexz00_430,
																												BNIL);
																											BgL_arg2364z00_456 =
																												MAKE_PAIR(BINT
																												(BgL_arg2338z00_451),
																												BgL_arg2370z00_457);
																										}
																										BgL_arg2357z00_455 =
																											MAKE_PAIR(BINT
																											(BgL_arg2331z00_450),
																											BgL_arg2364z00_456);
																									}
																									BgL_arg2351z00_454 =
																										MAKE_PAIR(BgL_endz00_427,
																										BgL_arg2357z00_455);
																								}
																								BgL_arg2344z00_453 =
																									MAKE_PAIR(BgL_begz00_426,
																									BgL_arg2351z00_454);
																							}
																							BgL_list2339z00_452 =
																								MAKE_PAIR(BgL_copz00_2,
																								BgL_arg2344z00_453);
																						}
																						return BgL_list2339z00_452;
																					}
																				}
																			}
																		else
																			{	/* Jas/wide.scm 13 */
																			BgL_tagzd21390zd2_432:
																				return
																					BGl_jaszd2errorzd2zzjas_classfilez00(
																					(BgL_classfilez00_bglt)
																					(BgL_classfilez00_1),
																					BGl_string2444z00zzjas_widez00,
																					BgL_argsz00_3);
																			}
																	}
																else
																	{	/* Jas/wide.scm 13 */
																		goto BgL_tagzd21390zd2_432;
																	}
															}
														else
															{	/* Jas/wide.scm 13 */
																goto BgL_tagzd21390zd2_432;
															}
													}
												else
													{	/* Jas/wide.scm 13 */
														goto BgL_tagzd21390zd2_432;
													}
											}
										else
											{	/* Jas/wide.scm 13 */
												goto BgL_tagzd21390zd2_432;
											}
									}
								else
									{	/* Jas/wide.scm 13 */
										goto BgL_tagzd21390zd2_432;
									}
							}
							break;
						default:
							return MAKE_PAIR(BgL_copz00_2, BgL_argsz00_3);
						}
				}
			else
				{	/* Jas/wide.scm 13 */
					return MAKE_PAIR(BgL_copz00_2, BgL_argsz00_3);
				}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzjas_widez00()
	{
		AN_OBJECT;
		{	/* Jas/wide.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzjas_widez00()
	{
		AN_OBJECT;
		{	/* Jas/wide.scm 1 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzjas_widez00()
	{
		AN_OBJECT;
		{	/* Jas/wide.scm 1 */
			BGl_modulezd2initializa7ationz75zzjas_libz00(((long) 125143848),
				BSTRING_TO_STRING(BGl_string2445z00zzjas_widez00));
			return
				BGl_modulezd2initializa7ationz75zzjas_classfilez00(((long) 324206891),
				BSTRING_TO_STRING(BGl_string2445z00zzjas_widez00));
		}
	}

#ifdef __cplusplus
}
#endif
