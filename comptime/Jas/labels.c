/*===========================================================================*/
/*   (Jas/labels.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Jas/labels.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
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


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_zb2zb2zz__r4_numbers_6_5z00(obj_t);
	extern obj_t BGl_jaszd2errorzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t, obj_t);
	extern obj_t BGl_u2z00zzjas_libz00(int);
	extern obj_t BGl_u4z00zzjas_libz00(int);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzjas_labelsz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzjas_labelsz00();
	static obj_t BGl_paddingz00zzjas_labelsz00(obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_getzd2targetzd2zzjas_labelsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_resolvezd2labelszd2zzjas_labelsz00 = BUNSPEC;
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzjas_labelsz00();
	static obj_t BGl_getzd2targetz72za0zzjas_labelsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_za2opcodezd2siza7eza2z75zzjas_labelsz00 = BUNSPEC;
	static obj_t BGl_importedzd2moduleszd2initz00zzjas_labelsz00();
	static obj_t BGl_resolvezd2pczd2zzjas_labelsz00(obj_t, obj_t);
	static obj_t BGl_widezd2conditionalszd2zzjas_labelsz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzjas_labelsz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_classfilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_libz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzjas_labelsz00();
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_zc3anonymousza31930ze3z83zzjas_labelsz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_absz00zz__r4_numbers_6_5z00(obj_t);
	BGL_IMPORT long BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(long, long);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzjas_labelsz00();
	static obj_t BGl_resolvezd2definitivezd2labelsz00zzjas_labelsz00(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzjas_labelsz00();
	static obj_t BGl_siza7ezd2insz75zzjas_labelsz00(obj_t, obj_t);
	static obj_t __cnst[5];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2676z00zzjas_labelsz00,
		BgL_bgl_za7c3anonymousza7a312688z00,
		BGl_zc3anonymousza31930ze3z83zzjas_labelsz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2677z00zzjas_labelsz00,
		BgL_bgl_string2677za700za7za7j2689za7, "F", 1);
	      DEFINE_STRING(BGl_string2678z00zzjas_labelsz00,
		BgL_bgl_string2678za700za7za7j2690za7, "far label in handler", 20);
	      DEFINE_STRING(BGl_string2680z00zzjas_labelsz00,
		BgL_bgl_string2680za700za7za7j2691za7, "unknown label", 13);
	      DEFINE_STRING(BGl_string2679z00zzjas_labelsz00,
		BgL_bgl_string2679za700za7za7j2692za7, "far label in localvar", 21);
	      DEFINE_STRING(BGl_string2681z00zzjas_labelsz00,
		BgL_bgl_string2681za700za7za7j2693za7, "too far", 7);
	      DEFINE_STRING(BGl_string2682z00zzjas_labelsz00,
		BgL_bgl_string2682za700za7za7j2694za7, "jas_labels", 10);
	      DEFINE_STRING(BGl_string2683z00zzjas_labelsz00,
		BgL_bgl_string2683za700za7za7j2695za7,
		"(0) (0 0) (0 0 0) ok #(1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 2 3 3 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 3 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 2 0 0 1 1 1 1 1 1 3 3 3 3 3 3 3 5 0 3 2 3 1 1 3 3 1 1 0 4 3 3 5 5 0 0 0 0) ",
		436);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzjas_labelsz00(long
		BgL_checksumz00_1025, char *BgL_fromz00_1026)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzjas_labelsz00))
				{
					BGl_requirezd2initializa7ationz75zzjas_labelsz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzjas_labelsz00();
					BGl_cnstzd2initzd2zzjas_labelsz00();
					BGl_importedzd2moduleszd2initz00zzjas_labelsz00();
					BGl_toplevelzd2initzd2zzjas_labelsz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzjas_labelsz00()
	{
		AN_OBJECT;
		{	/* Jas/labels.scm 1 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"jas_labels");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"jas_labels");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "jas_labels");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"jas_labels");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"jas_labels");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzjas_labelsz00()
	{
		AN_OBJECT;
		{	/* Jas/labels.scm 1 */
			{	/* Jas/labels.scm 1 */
				obj_t BgL_cportz00_999;

				BgL_cportz00_999 =
					bgl_open_input_string(BGl_string2683z00zzjas_labelsz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1000;

					BgL_iz00_1000 = ((long) 4);
				BgL_loopz00_1001:
					if ((BgL_iz00_1000 == ((long) -1)))
						{	/* Jas/labels.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* Jas/labels.scm 1 */
							{	/* Jas/labels.scm 1 */
								obj_t BgL_arg2685z00_1003;

								{	/* Jas/labels.scm 1 */

									{	/* Jas/labels.scm 1 */
										obj_t BgL_locationz00_1005;

										BgL_locationz00_1005 = BBOOL(((bool_t) 0));
										{	/* Jas/labels.scm 1 */

											BgL_arg2685z00_1003 =
												BGl_readz00zz__readerz00(BgL_cportz00_999,
												BgL_locationz00_1005);
										}
									}
								}
								{	/* Jas/labels.scm 1 */
									int BgL_auxz00_1045;

									BgL_auxz00_1045 = (int) (BgL_iz00_1000);
									CNST_TABLE_SET(BgL_auxz00_1045, BgL_arg2685z00_1003);
							}}
							{	/* Jas/labels.scm 1 */
								int BgL_auxz00_1006;

								BgL_auxz00_1006 = (int) ((BgL_iz00_1000 - ((long) 1)));
								{
									long BgL_iz00_1050;

									BgL_iz00_1050 = (long) (BgL_auxz00_1006);
									BgL_iz00_1000 = BgL_iz00_1050;
									goto BgL_loopz00_1001;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzjas_labelsz00()
	{
		AN_OBJECT;
		{	/* Jas/labels.scm 1 */
			BGl_resolvezd2labelszd2zzjas_labelsz00 = BGl_proc2676z00zzjas_labelsz00;
			return (BGl_za2opcodezd2siza7eza2z75zzjas_labelsz00 =
				CNST_TABLE_REF(((long) 0)), BUNSPEC);
		}
	}



/* <anonymous:1930> */
	obj_t BGl_zc3anonymousza31930ze3z83zzjas_labelsz00(obj_t BgL_envz00_992,
		obj_t BgL_classfilez00_993, obj_t BgL_lz00_994)
	{
		AN_OBJECT;
		{	/* Jas/labels.scm 8 */
			{
				obj_t BgL_classfilez00_273;

				obj_t BgL_lz00_274;

				BgL_classfilez00_273 = BgL_classfilez00_993;
				BgL_lz00_274 = BgL_lz00_994;
				{

				BgL_zc3anonymousza31931ze3z83_277:
					if (CBOOL(BGl_widezd2conditionalszd2zzjas_labelsz00
							(BgL_classfilez00_273, BgL_lz00_274)))
						{	/* Jas/labels.scm 10 */
							CNST_TABLE_REF(((long) 1));
						}
					else
						{	/* Jas/labels.scm 10 */
							goto BgL_zc3anonymousza31931ze3z83_277;
						}
					return
						BGl_resolvezd2definitivezd2labelsz00zzjas_labelsz00
						(BgL_classfilez00_273, BgL_lz00_274);
				}
			}
		}
	}



/* wide-conditionals */
	obj_t BGl_widezd2conditionalszd2zzjas_labelsz00(obj_t BgL_classfilez00_1,
		obj_t BgL_lz00_2)
	{
		AN_OBJECT;
		{	/* Jas/labels.scm 18 */
			{	/* Jas/labels.scm 19 */
				obj_t BgL_envz00_280;

				BgL_envz00_280 =
					BGl_resolvezd2pczd2zzjas_labelsz00(BgL_classfilez00_1, BgL_lz00_2);
				{
					obj_t BgL_copz00_297;

					obj_t BgL_lz00_306;

					obj_t BgL_insz00_307;

					long BgL_pcz00_308;

					obj_t BgL_rz00_309;

					obj_t BgL_lz00_393;

					long BgL_pcz00_394;

					obj_t BgL_rz00_395;

					BgL_lz00_393 = BgL_lz00_2;
					BgL_pcz00_394 = ((long) 0);
					BgL_rz00_395 = BTRUE;
				BgL_zc3anonymousza32126ze3z83_396:
					if (NULLP(BgL_lz00_393))
						{	/* Jas/labels.scm 62 */
							return BgL_rz00_395;
						}
					else
						{	/* Jas/labels.scm 63 */
							bool_t BgL_testz00_1061;

							{	/* Jas/labels.scm 63 */
								obj_t BgL_auxz00_1062;

								BgL_auxz00_1062 = CAR(BgL_lz00_393);
								BgL_testz00_1061 = SYMBOLP(BgL_auxz00_1062);
							}
							if (BgL_testz00_1061)
								{
									obj_t BgL_lz00_1065;

									BgL_lz00_1065 = CDR(BgL_lz00_393);
									BgL_lz00_393 = BgL_lz00_1065;
									goto BgL_zc3anonymousza32126ze3z83_396;
								}
							else
								{	/* Jas/labels.scm 65 */
									obj_t BgL_arg2141z00_400;

									long BgL_arg2145z00_401;

									obj_t BgL_arg2151z00_402;

									BgL_arg2141z00_400 = CDR(BgL_lz00_393);
									{	/* Jas/labels.scm 66 */
										obj_t BgL_arg2155z00_403;

										BgL_arg2155z00_403 =
											BGl_siza7ezd2insz75zzjas_labelsz00(CAR(BgL_lz00_393),
											BINT(BgL_pcz00_394));
										BgL_arg2145z00_401 =
											(BgL_pcz00_394 + (long) CINT(BgL_arg2155z00_403));
									}
									BgL_lz00_306 = BgL_lz00_393;
									BgL_insz00_307 = CAR(BgL_lz00_393);
									BgL_pcz00_308 = BgL_pcz00_394;
									BgL_rz00_309 = BgL_rz00_395;
									{	/* Jas/labels.scm 30 */
										obj_t BgL_aux1909z00_312;

										BgL_aux1909z00_312 = CAR(BgL_insz00_307);
										if (INTEGERP(BgL_aux1909z00_312))
											{	/* Jas/labels.scm 30 */
												switch ((long) CINT(BgL_aux1909z00_312))
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

														{	/* Jas/labels.scm 32 */
															bool_t BgL_testz00_1076;

															{	/* Jas/labels.scm 32 */
																obj_t BgL_arg1987z00_331;

																{	/* Jas/labels.scm 32 */
																	obj_t BgL_pairz00_729;

																	BgL_pairz00_729 = BgL_insz00_307;
																	BgL_arg1987z00_331 =
																		CAR(CDR(BgL_pairz00_729));
																}
																{	/* Jas/labels.scm 32 */
																	obj_t BgL_arg1937z00_735;

																	{	/* Jas/labels.scm 32 */
																		long BgL_arg1940z00_737;

																		{	/* Jas/labels.scm 32 */
																			obj_t BgL_arg1941z00_738;

																			BgL_arg1941z00_738 =
																				BGl_getzd2targetz72za0zzjas_labelsz00
																				(BgL_classfilez00_1, BgL_envz00_280,
																				BgL_arg1987z00_331);
																			BgL_arg1940z00_737 =
																				((long) CINT(BgL_arg1941z00_738) -
																				BgL_pcz00_308);
																		}
																		{	/* Jas/labels.scm 32 */
																			long BgL_auxz00_1082;

																			if ((BgL_arg1940z00_737 < ((long) 0)))
																				{	/* Jas/labels.scm 32 */
																					BgL_auxz00_1082 =
																						NEG(BgL_arg1940z00_737);
																				}
																			else
																				{	/* Jas/labels.scm 32 */
																					BgL_auxz00_1082 = BgL_arg1940z00_737;
																				}
																			BgL_arg1937z00_735 =
																				BINT(BgL_auxz00_1082);
																		}
																	}
																	BgL_testz00_1076 =
																		(
																		(long) CINT(BgL_arg1937z00_735) >
																		((long) 32752));
															}}
															if (BgL_testz00_1076)
																{	/* Jas/labels.scm 33 */
																	obj_t BgL_labz00_315;

																	BgL_labz00_315 =
																		BGl_gensymz00zz__r4_symbols_6_4z00
																		(BGl_string2677z00zzjas_labelsz00);
																	{	/* Jas/labels.scm 34 */
																		obj_t BgL_arg1955z00_316;

																		{	/* Jas/labels.scm 34 */
																			long BgL_arg1957z00_317;

																			obj_t BgL_arg1958z00_318;

																			BgL_copz00_297 = CAR(BgL_insz00_307);
																			if (
																				((long) CINT(BgL_copz00_297) <=
																					((long) 166)))
																				{	/* Jas/labels.scm 27 */
																					long BgL_arg1944z00_300;

																					{	/* Jas/labels.scm 27 */
																						long BgL_arg1945z00_301;

																						{	/* Jas/labels.scm 27 */
																							long BgL_arg1949z00_304;

																							{	/* Jas/labels.scm 27 */
																								long BgL_auxz00_1093;

																								BgL_auxz00_1093 =
																									(long) CINT(BgL_copz00_297);
																								BgL_arg1949z00_304 =
																									(BgL_auxz00_1093 %
																									((long) 2));
																							}
																							BgL_arg1945z00_301 =
																								(((long) 2) *
																								BgL_arg1949z00_304);
																						}
																						BgL_arg1944z00_300 =
																							(BgL_arg1945z00_301 - ((long) 1));
																					}
																					BgL_arg1957z00_317 =
																						(
																						(long) CINT(BgL_copz00_297) +
																						BgL_arg1944z00_300);
																				}
																			else
																				{	/* Jas/labels.scm 26 */
																					if (
																						((long) CINT(BgL_copz00_297) ==
																							((long) 198)))
																						{	/* Jas/labels.scm 28 */
																							BgL_arg1957z00_317 = ((long) 199);
																						}
																					else
																						{	/* Jas/labels.scm 28 */
																							BgL_arg1957z00_317 = ((long) 198);
																				}}
																			{	/* Jas/labels.scm 34 */
																				obj_t BgL_list1963z00_320;

																				BgL_list1963z00_320 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg1958z00_318 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_labz00_315, BgL_list1963z00_320);
																			}
																			BgL_arg1955z00_316 =
																				MAKE_PAIR(BINT(BgL_arg1957z00_317),
																				BgL_arg1958z00_318);
																		}
																		SET_CAR(BgL_lz00_306, BgL_arg1955z00_316);
																	}
																	{	/* Jas/labels.scm 35 */
																		obj_t BgL_arg1967z00_321;

																		{	/* Jas/labels.scm 35 */
																			obj_t BgL_arg1968z00_322;

																			obj_t BgL_arg1969z00_323;

																			{	/* Jas/labels.scm 35 */
																				obj_t BgL_arg1971z00_325;

																				{	/* Jas/labels.scm 35 */
																					obj_t BgL_arg1972z00_326;

																					{	/* Jas/labels.scm 35 */
																						obj_t BgL_pairz00_746;

																						BgL_pairz00_746 = BgL_insz00_307;
																						BgL_arg1972z00_326 =
																							CAR(CDR(BgL_pairz00_746));
																					}
																					{	/* Jas/labels.scm 35 */
																						obj_t BgL_list1977z00_328;

																						BgL_list1977z00_328 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg1971z00_325 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg1972z00_326,
																							BgL_list1977z00_328);
																				}}
																				BgL_arg1968z00_322 =
																					MAKE_PAIR(BINT(((long) 200)),
																					BgL_arg1971z00_325);
																			}
																			{	/* Jas/labels.scm 37 */
																				obj_t BgL_arg1984z00_329;

																				BgL_arg1984z00_329 = CDR(BgL_lz00_306);
																				{	/* Jas/labels.scm 35 */
																					obj_t BgL_list1985z00_330;

																					BgL_list1985z00_330 =
																						MAKE_PAIR(BgL_arg1984z00_329, BNIL);
																					BgL_arg1969z00_323 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_labz00_315,
																						BgL_list1985z00_330);
																			}}
																			BgL_arg1967z00_321 =
																				MAKE_PAIR(BgL_arg1968z00_322,
																				BgL_arg1969z00_323);
																		}
																		SET_CDR(BgL_lz00_306, BgL_arg1967z00_321);
																	}
																	BgL_arg2151z00_402 = BFALSE;
																}
															else
																{	/* Jas/labels.scm 32 */
																	BgL_arg2151z00_402 = BgL_rz00_309;
																}
														}
														break;
													case ((long) 167):
													case ((long) 168):

														{	/* Jas/labels.scm 41 */
															bool_t BgL_testz00_1120;

															{	/* Jas/labels.scm 41 */
																obj_t BgL_arg1994z00_338;

																{	/* Jas/labels.scm 41 */
																	obj_t BgL_pairz00_753;

																	BgL_pairz00_753 = BgL_insz00_307;
																	BgL_arg1994z00_338 =
																		CAR(CDR(BgL_pairz00_753));
																}
																{	/* Jas/labels.scm 41 */
																	obj_t BgL_arg1937z00_759;

																	{	/* Jas/labels.scm 41 */
																		long BgL_arg1940z00_761;

																		{	/* Jas/labels.scm 41 */
																			obj_t BgL_arg1941z00_762;

																			BgL_arg1941z00_762 =
																				BGl_getzd2targetz72za0zzjas_labelsz00
																				(BgL_classfilez00_1, BgL_envz00_280,
																				BgL_arg1994z00_338);
																			BgL_arg1940z00_761 =
																				((long) CINT(BgL_arg1941z00_762) -
																				BgL_pcz00_308);
																		}
																		{	/* Jas/labels.scm 41 */
																			long BgL_auxz00_1126;

																			if ((BgL_arg1940z00_761 < ((long) 0)))
																				{	/* Jas/labels.scm 41 */
																					BgL_auxz00_1126 =
																						NEG(BgL_arg1940z00_761);
																				}
																			else
																				{	/* Jas/labels.scm 41 */
																					BgL_auxz00_1126 = BgL_arg1940z00_761;
																				}
																			BgL_arg1937z00_759 =
																				BINT(BgL_auxz00_1126);
																		}
																	}
																	BgL_testz00_1120 =
																		(
																		(long) CINT(BgL_arg1937z00_759) >
																		((long) 32752));
															}}
															if (BgL_testz00_1120)
																{	/* Jas/labels.scm 41 */
																	{	/* Jas/labels.scm 43 */
																		long BgL_arg1989z00_333;

																		{	/* Jas/labels.scm 43 */
																			long BgL_auxz00_1133;

																			{	/* Jas/labels.scm 43 */
																				long BgL_auxz00_1134;

																				{	/* Jas/labels.scm 43 */
																					obj_t BgL_pairz00_767;

																					BgL_pairz00_767 = BgL_insz00_307;
																					BgL_auxz00_1134 =
																						(long) CINT(CAR(BgL_pairz00_767));
																				}
																				BgL_auxz00_1133 =
																					(BgL_auxz00_1134 - ((long) 167));
																			}
																			BgL_arg1989z00_333 =
																				(((long) 200) + BgL_auxz00_1133);
																		}
																		{	/* Jas/labels.scm 43 */
																			obj_t BgL_auxz00_1139;

																			BgL_auxz00_1139 =
																				BINT(BgL_arg1989z00_333);
																			SET_CAR(BgL_insz00_307, BgL_auxz00_1139);
																	}}
																	BgL_arg2151z00_402 = BFALSE;
																}
															else
																{	/* Jas/labels.scm 41 */
																	BgL_arg2151z00_402 = BgL_rz00_309;
																}
														}
														break;
													case ((long) 202):

														{
															obj_t BgL_begz00_339;

															obj_t BgL_endz00_340;

															obj_t BgL_labz00_341;

															obj_t BgL_typez00_342;

															{	/* Jas/labels.scm 47 */
																obj_t BgL_ezd21390zd2_344;

																BgL_ezd21390zd2_344 = CDR(BgL_insz00_307);
																if (PAIRP(BgL_ezd21390zd2_344))
																	{	/* Jas/labels.scm 30 */
																		obj_t BgL_cdrzd21400zd2_346;

																		BgL_cdrzd21400zd2_346 =
																			CDR(BgL_ezd21390zd2_344);
																		if (PAIRP(BgL_cdrzd21400zd2_346))
																			{	/* Jas/labels.scm 30 */
																				obj_t BgL_cdrzd21406zd2_348;

																				BgL_cdrzd21406zd2_348 =
																					CDR(BgL_cdrzd21400zd2_346);
																				if (PAIRP(BgL_cdrzd21406zd2_348))
																					{	/* Jas/labels.scm 30 */
																						obj_t BgL_cdrzd21411zd2_350;

																						BgL_cdrzd21411zd2_350 =
																							CDR(BgL_cdrzd21406zd2_348);
																						if (PAIRP(BgL_cdrzd21411zd2_350))
																							{	/* Jas/labels.scm 30 */
																								if (NULLP(CDR
																										(BgL_cdrzd21411zd2_350)))
																									{	/* Jas/labels.scm 30 */
																										BgL_begz00_339 =
																											CAR(BgL_ezd21390zd2_344);
																										BgL_endz00_340 =
																											CAR
																											(BgL_cdrzd21400zd2_346);
																										BgL_labz00_341 =
																											CAR
																											(BgL_cdrzd21406zd2_348);
																										BgL_typez00_342 =
																											CAR
																											(BgL_cdrzd21411zd2_350);
																										{	/* Jas/labels.scm 49 */
																											bool_t BgL_testz00_1157;

																											{	/* Jas/labels.scm 49 */
																												bool_t BgL_testz00_1158;

																												{	/* Jas/labels.scm 49 */
																													obj_t
																														BgL_arg2022z00_362;
																													BgL_arg2022z00_362 =
																														BGl_getzd2targetz72za0zzjas_labelsz00
																														(BgL_classfilez00_1,
																														BgL_envz00_280,
																														BgL_endz00_340);
																													BgL_testz00_1158 =
																														((long)
																														CINT
																														(BgL_arg2022z00_362)
																														>= ((long) 65536));
																												}
																												if (BgL_testz00_1158)
																													{	/* Jas/labels.scm 49 */
																														BgL_testz00_1157 =
																															((bool_t) 1);
																													}
																												else
																													{	/* Jas/labels.scm 50 */
																														obj_t
																															BgL_arg2012z00_360;
																														BgL_arg2012z00_360 =
																															BGl_getzd2targetz72za0zzjas_labelsz00
																															(BgL_classfilez00_1,
																															BgL_envz00_280,
																															BgL_labz00_341);
																														BgL_testz00_1157 =
																															((long)
																															CINT
																															(BgL_arg2012z00_360)
																															>=
																															((long) 65536));
																											}}
																											if (BgL_testz00_1157)
																												{	/* Jas/labels.scm 49 */
																													BgL_arg2151z00_402 =
																														BGl_jaszd2errorzd2zzjas_classfilez00
																														(
																														(BgL_classfilez00_bglt)
																														(BgL_classfilez00_1),
																														BGl_string2678z00zzjas_labelsz00,
																														BgL_insz00_307);
																												}
																											else
																												{	/* Jas/labels.scm 49 */
																													BgL_arg2151z00_402 =
																														BgL_rz00_309;
																												}
																										}
																									}
																								else
																									{	/* Jas/labels.scm 30 */
																										BgL_arg2151z00_402 = BFALSE;
																									}
																							}
																						else
																							{	/* Jas/labels.scm 30 */
																								BgL_arg2151z00_402 = BFALSE;
																							}
																					}
																				else
																					{	/* Jas/labels.scm 30 */
																						BgL_arg2151z00_402 = BFALSE;
																					}
																			}
																		else
																			{	/* Jas/labels.scm 30 */
																				BgL_arg2151z00_402 = BFALSE;
																			}
																	}
																else
																	{	/* Jas/labels.scm 30 */
																		BgL_arg2151z00_402 = BFALSE;
																	}
															}
														}
														break;
													case ((long) 205):

														{	/* Jas/labels.scm 54 */
															obj_t BgL_ezd21418zd2_370;

															BgL_ezd21418zd2_370 = CDR(BgL_insz00_307);
															if (PAIRP(BgL_ezd21418zd2_370))
																{	/* Jas/labels.scm 30 */
																	obj_t BgL_cdrzd21430zd2_372;

																	BgL_cdrzd21430zd2_372 =
																		CDR(BgL_ezd21418zd2_370);
																	if (PAIRP(BgL_cdrzd21430zd2_372))
																		{	/* Jas/labels.scm 30 */
																			obj_t BgL_cdrzd21437zd2_374;

																			BgL_cdrzd21437zd2_374 =
																				CDR(BgL_cdrzd21430zd2_372);
																			if (PAIRP(BgL_cdrzd21437zd2_374))
																				{	/* Jas/labels.scm 30 */
																					obj_t BgL_cdrzd21443zd2_376;

																					BgL_cdrzd21443zd2_376 =
																						CDR(BgL_cdrzd21437zd2_374);
																					if (PAIRP(BgL_cdrzd21443zd2_376))
																						{	/* Jas/labels.scm 30 */
																							obj_t BgL_cdrzd21448zd2_378;

																							BgL_cdrzd21448zd2_378 =
																								CDR(BgL_cdrzd21443zd2_376);
																							if (PAIRP(BgL_cdrzd21448zd2_378))
																								{	/* Jas/labels.scm 30 */
																									if (NULLP(CDR
																											(BgL_cdrzd21448zd2_378)))
																										{	/* Jas/labels.scm 30 */
																											obj_t BgL_arg2037z00_381;

																											obj_t BgL_arg2038z00_382;

																											BgL_arg2037z00_381 =
																												CAR
																												(BgL_ezd21418zd2_370);
																											BgL_arg2038z00_382 =
																												CAR
																												(BgL_cdrzd21430zd2_372);
																											{	/* Jas/labels.scm 30 */
																												bool_t BgL_testz00_1191;

																												{	/* Jas/labels.scm 30 */
																													bool_t
																														BgL_testz00_1192;
																													{	/* Jas/labels.scm 30 */
																														obj_t
																															BgL_arg2119z00_816;
																														BgL_arg2119z00_816 =
																															BGl_getzd2targetz72za0zzjas_labelsz00
																															(BgL_classfilez00_1,
																															BgL_envz00_280,
																															BgL_arg2037z00_381);
																														BgL_testz00_1192 =
																															((long)
																															CINT
																															(BgL_arg2119z00_816)
																															>=
																															((long) 65536));
																													}
																													if (BgL_testz00_1192)
																														{	/* Jas/labels.scm 30 */
																															BgL_testz00_1191 =
																																((bool_t) 1);
																														}
																													else
																														{	/* Jas/labels.scm 30 */
																															obj_t
																																BgL_arg2070z00_818;
																															BgL_arg2070z00_818
																																=
																																BGl_getzd2targetz72za0zzjas_labelsz00
																																(BgL_classfilez00_1,
																																BgL_envz00_280,
																																BgL_arg2038z00_382);
																															BgL_testz00_1191 =
																																((long)
																																CINT
																																(BgL_arg2070z00_818)
																																>=
																																((long) 65536));
																												}}
																												if (BgL_testz00_1191)
																													{	/* Jas/labels.scm 30 */
																														BgL_arg2151z00_402 =
																															BGl_jaszd2errorzd2zzjas_classfilez00
																															(
																															(BgL_classfilez00_bglt)
																															(BgL_classfilez00_1),
																															BGl_string2679z00zzjas_labelsz00,
																															BgL_insz00_307);
																													}
																												else
																													{	/* Jas/labels.scm 30 */
																														BgL_arg2151z00_402 =
																															BgL_rz00_309;
																													}
																											}
																										}
																									else
																										{	/* Jas/labels.scm 30 */
																											BgL_arg2151z00_402 =
																												BFALSE;
																										}
																								}
																							else
																								{	/* Jas/labels.scm 30 */
																									BgL_arg2151z00_402 = BFALSE;
																								}
																						}
																					else
																						{	/* Jas/labels.scm 30 */
																							BgL_arg2151z00_402 = BFALSE;
																						}
																				}
																			else
																				{	/* Jas/labels.scm 30 */
																					BgL_arg2151z00_402 = BFALSE;
																				}
																		}
																	else
																		{	/* Jas/labels.scm 30 */
																			BgL_arg2151z00_402 = BFALSE;
																		}
																}
															else
																{	/* Jas/labels.scm 30 */
																	BgL_arg2151z00_402 = BFALSE;
																}
														}
														break;
													default:
														BgL_arg2151z00_402 = BgL_rz00_309;
													}
											}
										else
											{	/* Jas/labels.scm 30 */
												BgL_arg2151z00_402 = BgL_rz00_309;
											}
									}
									{
										obj_t BgL_rz00_1206;

										long BgL_pcz00_1205;

										obj_t BgL_lz00_1204;

										BgL_lz00_1204 = BgL_arg2141z00_400;
										BgL_pcz00_1205 = BgL_arg2145z00_401;
										BgL_rz00_1206 = BgL_arg2151z00_402;
										BgL_rz00_395 = BgL_rz00_1206;
										BgL_pcz00_394 = BgL_pcz00_1205;
										BgL_lz00_393 = BgL_lz00_1204;
										goto BgL_zc3anonymousza32126ze3z83_396;
									}
								}
						}
				}
			}
		}
	}



/* get-target' */
	obj_t BGl_getzd2targetz72za0zzjas_labelsz00(obj_t BgL_classfilez00_998,
		obj_t BgL_envz00_997, obj_t BgL_labelz00_286)
	{
		AN_OBJECT;
		{	/* Jas/labels.scm 22 */
			{	/* Jas/labels.scm 21 */
				obj_t BgL_arg1935z00_288;

				{	/* Jas/labels.scm 21 */
					obj_t BgL__ortest_1907z00_289;

					BgL__ortest_1907z00_289 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_labelz00_286,
						BgL_envz00_997);
					if (CBOOL(BgL__ortest_1907z00_289))
						{	/* Jas/labels.scm 21 */
							BgL_arg1935z00_288 = BgL__ortest_1907z00_289;
						}
					else
						{	/* Jas/labels.scm 21 */
							BgL_arg1935z00_288 =
								BGl_jaszd2errorzd2zzjas_classfilez00(
								(BgL_classfilez00_bglt) (BgL_classfilez00_998),
								BGl_string2680z00zzjas_labelsz00, BgL_labelz00_286);
						}
				}
				return CDR(BgL_arg1935z00_288);
			}
		}
	}



/* resolve-definitive-labels */
	obj_t BGl_resolvezd2definitivezd2labelsz00zzjas_labelsz00(obj_t
		BgL_classfilez00_3, obj_t BgL_lz00_4)
	{
		AN_OBJECT;
		{	/* Jas/labels.scm 73 */
			{	/* Jas/labels.scm 74 */
				obj_t BgL_envz00_412;

				BgL_envz00_412 =
					BGl_resolvezd2pczd2zzjas_labelsz00(BgL_classfilez00_3, BgL_lz00_4);
				{
					obj_t BgL_insz00_415;

					obj_t BgL_pcz00_416;

					obj_t BgL_lz00_561;

					obj_t BgL_pcz00_562;

					obj_t BgL_donez00_563;

					BgL_lz00_561 = BgL_lz00_4;
					BgL_pcz00_562 = BINT(((long) 0));
					BgL_donez00_563 = BNIL;
				BgL_zc3anonymousza32530ze3z83_564:
					if (NULLP(BgL_lz00_561))
						{	/* Jas/labels.scm 117 */
							return bgl_reverse_bang(BgL_donez00_563);
						}
					else
						{	/* Jas/labels.scm 118 */
							bool_t BgL_testz00_1217;

							{	/* Jas/labels.scm 118 */
								obj_t BgL_auxz00_1218;

								BgL_auxz00_1218 = CAR(BgL_lz00_561);
								BgL_testz00_1217 = SYMBOLP(BgL_auxz00_1218);
							}
							if (BgL_testz00_1217)
								{
									obj_t BgL_lz00_1221;

									BgL_lz00_1221 = CDR(BgL_lz00_561);
									BgL_lz00_561 = BgL_lz00_1221;
									goto BgL_zc3anonymousza32530ze3z83_564;
								}
							else
								{	/* Jas/labels.scm 120 */
									obj_t BgL_arg2544z00_568;

									obj_t BgL_arg2550z00_569;

									obj_t BgL_arg2554z00_570;

									BgL_arg2544z00_568 = CDR(BgL_lz00_561);
									BgL_arg2550z00_569 =
										BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_pcz00_562,
										BGl_siza7ezd2insz75zzjas_labelsz00(CAR(BgL_lz00_561),
											BgL_pcz00_562));
									{	/* Jas/labels.scm 122 */
										obj_t BgL_auxz00_1227;

										BgL_insz00_415 = CAR(BgL_lz00_561);
										BgL_pcz00_416 = BgL_pcz00_562;
										{
											obj_t BgL_labelz00_547;

											{	/* Jas/labels.scm 86 */
												obj_t BgL_aux1912z00_422;

												BgL_aux1912z00_422 = CAR(BgL_insz00_415);
												if (INTEGERP(BgL_aux1912z00_422))
													{	/* Jas/labels.scm 86 */
														switch ((long) CINT(BgL_aux1912z00_422))
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
															case ((long) 167):
															case ((long) 168):
															case ((long) 198):
															case ((long) 199):

																{	/* Jas/labels.scm 89 */
																	obj_t BgL_arg2185z00_425;

																	{	/* Jas/labels.scm 89 */
																		obj_t BgL_arg2187z00_426;

																		{	/* Jas/labels.scm 89 */
																			obj_t BgL_pairz00_845;

																			BgL_pairz00_845 = BgL_insz00_415;
																			BgL_arg2187z00_426 =
																				CAR(CDR(BgL_pairz00_845));
																		}
																		BgL_labelz00_547 = BgL_arg2187z00_426;
																		{	/* Jas/labels.scm 80 */
																			obj_t BgL_dz00_549;

																			BgL_dz00_549 =
																				BGl_2zd2zd2zz__r4_numbers_6_5z00
																				(BGl_getzd2targetzd2zzjas_labelsz00
																				(BgL_classfilez00_3, BgL_envz00_412,
																					BgL_labelz00_547), BgL_pcz00_416);
																			if (BGl_2ze3ze3zz__r4_numbers_6_5z00
																				(BGl_absz00zz__r4_numbers_6_5z00
																					(BgL_dz00_549), BINT(((long) 32752))))
																				{	/* Jas/labels.scm 81 */
																					BgL_arg2185z00_425 =
																						BGl_jaszd2errorzd2zzjas_classfilez00
																						((BgL_classfilez00_bglt)
																						(BgL_classfilez00_3),
																						BGl_string2681z00zzjas_labelsz00,
																						BgL_labelz00_547);
																				}
																			else
																				{	/* Jas/labels.scm 81 */
																					BgL_arg2185z00_425 =
																						BGl_u2z00zzjas_libz00(CINT
																						(BgL_dz00_549));
																				}
																		}
																	}
																	BgL_auxz00_1227 =
																		MAKE_PAIR(BgL_aux1912z00_422,
																		BgL_arg2185z00_425);
																}
																break;
															case ((long) 200):
															case ((long) 201):

																{	/* Jas/labels.scm 91 */
																	obj_t BgL_arg2198z00_428;

																	{	/* Jas/labels.scm 91 */
																		obj_t BgL_arg2199z00_429;

																		{	/* Jas/labels.scm 91 */
																			obj_t BgL_pairz00_850;

																			BgL_pairz00_850 = BgL_insz00_415;
																			BgL_arg2199z00_429 =
																				CAR(CDR(BgL_pairz00_850));
																		}
																		{	/* Jas/labels.scm 91 */
																			obj_t BgL_arg2523z00_855;

																			BgL_arg2523z00_855 =
																				BGl_2zd2zd2zz__r4_numbers_6_5z00
																				(BGl_getzd2targetzd2zzjas_labelsz00
																				(BgL_classfilez00_3, BgL_envz00_412,
																					BgL_arg2199z00_429), BgL_pcz00_416);
																			BgL_arg2198z00_428 =
																				BGl_u4z00zzjas_libz00(CINT
																				(BgL_arg2523z00_855));
																	}}
																	BgL_auxz00_1227 =
																		MAKE_PAIR(BgL_aux1912z00_422,
																		BgL_arg2198z00_428);
																} break;
															case ((long) 170):

																{	/* Jas/labels.scm 93 */
																	obj_t BgL_arg2208z00_431;

																	{	/* Jas/labels.scm 93 */
																		obj_t BgL_arg2213z00_432;

																		obj_t BgL_arg2216z00_433;

																		BgL_arg2213z00_432 =
																			BGl_paddingz00zzjas_labelsz00
																			(BgL_pcz00_416);
																		{	/* Jas/labels.scm 93 */
																			obj_t BgL_arg2222z00_434;

																			obj_t BgL_arg2226z00_435;

																			{	/* Jas/labels.scm 93 */
																				obj_t BgL_arg2227z00_436;

																				{	/* Jas/labels.scm 93 */
																					obj_t BgL_pairz00_857;

																					BgL_pairz00_857 = BgL_insz00_415;
																					BgL_arg2227z00_436 =
																						CAR(CDR(BgL_pairz00_857));
																				}
																				{	/* Jas/labels.scm 93 */
																					obj_t BgL_arg2523z00_862;

																					BgL_arg2523z00_862 =
																						BGl_2zd2zd2zz__r4_numbers_6_5z00
																						(BGl_getzd2targetzd2zzjas_labelsz00
																						(BgL_classfilez00_3, BgL_envz00_412,
																							BgL_arg2227z00_436),
																						BgL_pcz00_416);
																					BgL_arg2222z00_434 =
																						BGl_u4z00zzjas_libz00(CINT
																						(BgL_arg2523z00_862));
																			}}
																			{	/* Jas/labels.scm 94 */
																				obj_t BgL_arg2233z00_437;

																				obj_t BgL_arg2237z00_438;

																				{	/* Jas/labels.scm 94 */
																					obj_t BgL_arg2239z00_439;

																					{	/* Jas/labels.scm 94 */
																						obj_t BgL_pairz00_864;

																						BgL_pairz00_864 = BgL_insz00_415;
																						BgL_arg2239z00_439 =
																							CAR(CDR(CDR(BgL_pairz00_864)));
																					}
																					BgL_arg2233z00_437 =
																						BGl_u4z00zzjas_libz00(CINT
																						(BgL_arg2239z00_439));
																				}
																				{	/* Jas/labels.scm 95 */
																					obj_t BgL_arg2240z00_440;

																					obj_t BgL_arg2242z00_441;

																					{	/* Jas/labels.scm 95 */
																						obj_t BgL_arg2243z00_442;

																						{	/* Jas/labels.scm 95 */
																							obj_t BgL_auxz00_1263;

																							{	/* Jas/labels.scm 95 */
																								obj_t BgL_auxz00_1268;

																								obj_t BgL_auxz00_1264;

																								{	/* Jas/labels.scm 95 */
																									long BgL_auxz00_1269;

																									{	/* Jas/labels.scm 95 */
																										obj_t BgL_auxz00_1270;

																										{	/* Jas/labels.scm 95 */
																											obj_t BgL_pairz00_876;

																											BgL_pairz00_876 =
																												BgL_insz00_415;
																											BgL_auxz00_1270 =
																												CDR(CDR(CDR
																													(BgL_pairz00_876)));
																										}
																										BgL_auxz00_1269 =
																											bgl_list_length
																											(BgL_auxz00_1270);
																									}
																									BgL_auxz00_1268 =
																										BINT(BgL_auxz00_1269);
																								}
																								{	/* Jas/labels.scm 95 */
																									obj_t BgL_pairz00_870;

																									BgL_pairz00_870 =
																										BgL_insz00_415;
																									BgL_auxz00_1264 =
																										CAR(CDR(CDR
																											(BgL_pairz00_870)));
																								}
																								BgL_auxz00_1263 =
																									BGl_2zb2zb2zz__r4_numbers_6_5z00
																									(BgL_auxz00_1264,
																									BgL_auxz00_1268);
																							}
																							BgL_arg2243z00_442 =
																								BGl_2zd2zd2zz__r4_numbers_6_5z00
																								(BgL_auxz00_1263,
																								BINT(((long) 1)));
																						}
																						BgL_arg2240z00_440 =
																							BGl_u4z00zzjas_libz00(CINT
																							(BgL_arg2243z00_442));
																					}
																					{	/* Jas/labels.scm 96 */
																						obj_t BgL_runner2291z00_466;

																						{	/* Jas/labels.scm 96 */
																							obj_t BgL_l1917z00_448;

																							{	/* Jas/labels.scm 96 */
																								obj_t BgL_pairz00_882;

																								BgL_pairz00_882 =
																									BgL_insz00_415;
																								BgL_l1917z00_448 =
																									CDR(CDR(CDR
																										(BgL_pairz00_882)));
																							}
																							if (NULLP(BgL_l1917z00_448))
																								{	/* Jas/labels.scm 96 */
																									BgL_runner2291z00_466 = BNIL;
																								}
																							else
																								{	/* Jas/labels.scm 96 */
																									obj_t BgL_head1919z00_450;

																									{	/* Jas/labels.scm 96 */
																										obj_t BgL_arg2285z00_463;

																										{	/* Jas/labels.scm 96 */
																											obj_t BgL_arg2290z00_465;

																											BgL_arg2290z00_465 =
																												CAR(BgL_l1917z00_448);
																											{	/* Jas/labels.scm 96 */
																												obj_t
																													BgL_arg2523z00_891;
																												BgL_arg2523z00_891 =
																													BGl_2zd2zd2zz__r4_numbers_6_5z00
																													(BGl_getzd2targetzd2zzjas_labelsz00
																													(BgL_classfilez00_3,
																														BgL_envz00_412,
																														BgL_arg2290z00_465),
																													BgL_pcz00_416);
																												BgL_arg2285z00_463 =
																													BGl_u4z00zzjas_libz00
																													(CINT
																													(BgL_arg2523z00_891));
																											}
																										}
																										BgL_head1919z00_450 =
																											MAKE_PAIR
																											(BgL_arg2285z00_463,
																											BNIL);
																									}
																									{	/* Jas/labels.scm 96 */
																										obj_t BgL_g1924z00_451;

																										BgL_g1924z00_451 =
																											CDR(BgL_l1917z00_448);
																										{
																											obj_t BgL_l1917z00_453;

																											obj_t BgL_tail1920z00_454;

																											BgL_l1917z00_453 =
																												BgL_g1924z00_451;
																											BgL_tail1920z00_454 =
																												BgL_head1919z00_450;
																										BgL_zc3anonymousza32262ze3z83_455:
																											if (NULLP
																												(BgL_l1917z00_453))
																												{	/* Jas/labels.scm 96 */
																													BgL_runner2291z00_466
																														=
																														BgL_head1919z00_450;
																												}
																											else
																												{	/* Jas/labels.scm 96 */
																													obj_t
																														BgL_newtail1921z00_457;
																													{	/* Jas/labels.scm 96 */
																														obj_t
																															BgL_arg2274z00_459;
																														{	/* Jas/labels.scm 96 */
																															obj_t
																																BgL_arg2282z00_461;
																															BgL_arg2282z00_461
																																=
																																CAR
																																(BgL_l1917z00_453);
																															{	/* Jas/labels.scm 96 */
																																obj_t
																																	BgL_arg2523z00_899;
																																BgL_arg2523z00_899
																																	=
																																	BGl_2zd2zd2zz__r4_numbers_6_5z00
																																	(BGl_getzd2targetzd2zzjas_labelsz00
																																	(BgL_classfilez00_3,
																																		BgL_envz00_412,
																																		BgL_arg2282z00_461),
																																	BgL_pcz00_416);
																																BgL_arg2274z00_459
																																	=
																																	BGl_u4z00zzjas_libz00
																																	(CINT
																																	(BgL_arg2523z00_899));
																															}
																														}
																														BgL_newtail1921z00_457
																															=
																															MAKE_PAIR
																															(BgL_arg2274z00_459,
																															BNIL);
																													}
																													SET_CDR
																														(BgL_tail1920z00_454,
																														BgL_newtail1921z00_457);
																													{
																														obj_t
																															BgL_tail1920z00_1304;
																														obj_t
																															BgL_l1917z00_1302;
																														BgL_l1917z00_1302 =
																															CDR
																															(BgL_l1917z00_453);
																														BgL_tail1920z00_1304
																															=
																															BgL_newtail1921z00_457;
																														BgL_tail1920z00_454
																															=
																															BgL_tail1920z00_1304;
																														BgL_l1917z00_453 =
																															BgL_l1917z00_1302;
																														goto
																															BgL_zc3anonymousza32262ze3z83_455;
																													}
																												}
																										}
																									}
																								}
																						}
																						BgL_arg2242z00_441 =
																							BGl_appendz00zz__r4_pairs_and_lists_6_3z00
																							(BgL_runner2291z00_466);
																					}
																					BgL_arg2237z00_438 =
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2240z00_440,
																						BgL_arg2242z00_441);
																				}
																				BgL_arg2226z00_435 =
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2233z00_437,
																					BgL_arg2237z00_438);
																			}
																			BgL_arg2216z00_433 =
																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2222z00_434,
																				BgL_arg2226z00_435);
																		}
																		BgL_arg2208z00_431 =
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2213z00_432, BgL_arg2216z00_433);
																	}
																	BgL_auxz00_1227 =
																		MAKE_PAIR(BINT(((long) 170)),
																		BgL_arg2208z00_431);
																} break;
															case ((long) 171):

																{	/* Jas/labels.scm 98 */
																	obj_t BgL_arg2297z00_468;

																	{	/* Jas/labels.scm 98 */
																		obj_t BgL_arg2305z00_469;

																		obj_t BgL_arg2312z00_470;

																		BgL_arg2305z00_469 =
																			BGl_paddingz00zzjas_labelsz00
																			(BgL_pcz00_416);
																		{	/* Jas/labels.scm 98 */
																			obj_t BgL_arg2318z00_471;

																			obj_t BgL_arg2325z00_472;

																			{	/* Jas/labels.scm 98 */
																				obj_t BgL_arg2331z00_473;

																				{	/* Jas/labels.scm 98 */
																					obj_t BgL_pairz00_906;

																					BgL_pairz00_906 = BgL_insz00_415;
																					BgL_arg2331z00_473 =
																						CAR(CDR(BgL_pairz00_906));
																				}
																				{	/* Jas/labels.scm 98 */
																					obj_t BgL_arg2523z00_911;

																					BgL_arg2523z00_911 =
																						BGl_2zd2zd2zz__r4_numbers_6_5z00
																						(BGl_getzd2targetzd2zzjas_labelsz00
																						(BgL_classfilez00_3, BgL_envz00_412,
																							BgL_arg2331z00_473),
																						BgL_pcz00_416);
																					BgL_arg2318z00_471 =
																						BGl_u4z00zzjas_libz00(CINT
																						(BgL_arg2523z00_911));
																			}}
																			{	/* Jas/labels.scm 99 */
																				obj_t BgL_arg2338z00_474;

																				obj_t BgL_arg2344z00_475;

																				{	/* Jas/labels.scm 99 */
																					long BgL_arg2351z00_476;

																					{	/* Jas/labels.scm 99 */
																						obj_t BgL_auxz00_1319;

																						{	/* Jas/labels.scm 99 */
																							obj_t BgL_pairz00_913;

																							BgL_pairz00_913 = BgL_insz00_415;
																							BgL_auxz00_1319 =
																								CDR(CDR(BgL_pairz00_913));
																						}
																						BgL_arg2351z00_476 =
																							bgl_list_length(BgL_auxz00_1319);
																					}
																					BgL_arg2338z00_474 =
																						BGl_u4z00zzjas_libz00(
																						(int) (BgL_arg2351z00_476));
																				}
																				{	/* Jas/labels.scm 100 */
																					obj_t BgL_runner2404z00_496;

																					{	/* Jas/labels.scm 101 */
																						obj_t BgL_l1925z00_478;

																						{	/* Jas/labels.scm 104 */
																							obj_t BgL_pairz00_917;

																							BgL_pairz00_917 = BgL_insz00_415;
																							BgL_l1925z00_478 =
																								CDR(CDR(BgL_pairz00_917));
																						}
																						if (NULLP(BgL_l1925z00_478))
																							{	/* Jas/labels.scm 101 */
																								BgL_runner2404z00_496 = BNIL;
																							}
																						else
																							{	/* Jas/labels.scm 101 */
																								obj_t BgL_head1927z00_480;

																								BgL_head1927z00_480 =
																									MAKE_PAIR(BNIL, BNIL);
																								{
																									obj_t BgL_l1925z00_482;

																									obj_t BgL_tail1928z00_483;

																									BgL_l1925z00_482 =
																										BgL_l1925z00_478;
																									BgL_tail1928z00_483 =
																										BgL_head1927z00_480;
																								BgL_zc3anonymousza32359ze3z83_484:
																									if (NULLP
																										(BgL_l1925z00_482))
																										{	/* Jas/labels.scm 101 */
																											BgL_runner2404z00_496 =
																												CDR
																												(BgL_head1927z00_480);
																										}
																									else
																										{	/* Jas/labels.scm 101 */
																											obj_t
																												BgL_newtail1929z00_486;
																											{	/* Jas/labels.scm 101 */
																												obj_t
																													BgL_arg2370z00_488;
																												{	/* Jas/labels.scm 101 */
																													obj_t BgL_xz00_490;

																													BgL_xz00_490 =
																														CAR
																														(BgL_l1925z00_482);
																													{	/* Jas/labels.scm 102 */
																														obj_t
																															BgL_arg2383z00_491;
																														obj_t
																															BgL_arg2390z00_492;
																														{	/* Jas/labels.scm 102 */
																															obj_t
																																BgL_arg2396z00_493;
																															BgL_arg2396z00_493
																																=
																																CAR
																																(BgL_xz00_490);
																															BgL_arg2383z00_491
																																=
																																BGl_u4z00zzjas_libz00
																																(CINT
																																(BgL_arg2396z00_493));
																														}
																														{	/* Jas/labels.scm 103 */
																															obj_t
																																BgL_arg2403z00_494;
																															BgL_arg2403z00_494
																																=
																																CDR
																																(BgL_xz00_490);
																															{	/* Jas/labels.scm 103 */
																																obj_t
																																	BgL_arg2523z00_930;
																																BgL_arg2523z00_930
																																	=
																																	BGl_2zd2zd2zz__r4_numbers_6_5z00
																																	(BGl_getzd2targetzd2zzjas_labelsz00
																																	(BgL_classfilez00_3,
																																		BgL_envz00_412,
																																		BgL_arg2403z00_494),
																																	BgL_pcz00_416);
																																BgL_arg2390z00_492
																																	=
																																	BGl_u4z00zzjas_libz00
																																	(CINT
																																	(BgL_arg2523z00_930));
																															}
																														}
																														BgL_arg2370z00_488 =
																															bgl_append2
																															(BgL_arg2383z00_491,
																															BgL_arg2390z00_492);
																													}
																												}
																												BgL_newtail1929z00_486 =
																													MAKE_PAIR
																													(BgL_arg2370z00_488,
																													BNIL);
																											}
																											SET_CDR
																												(BgL_tail1928z00_483,
																												BgL_newtail1929z00_486);
																											{
																												obj_t
																													BgL_tail1928z00_1347;
																												obj_t BgL_l1925z00_1345;

																												BgL_l1925z00_1345 =
																													CDR(BgL_l1925z00_482);
																												BgL_tail1928z00_1347 =
																													BgL_newtail1929z00_486;
																												BgL_tail1928z00_483 =
																													BgL_tail1928z00_1347;
																												BgL_l1925z00_482 =
																													BgL_l1925z00_1345;
																												goto
																													BgL_zc3anonymousza32359ze3z83_484;
																											}
																										}
																								}
																							}
																					}
																					BgL_arg2344z00_475 =
																						BGl_appendz00zz__r4_pairs_and_lists_6_3z00
																						(BgL_runner2404z00_496);
																				}
																				BgL_arg2325z00_472 =
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2338z00_474,
																					BgL_arg2344z00_475);
																			}
																			BgL_arg2312z00_470 =
																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2318z00_471,
																				BgL_arg2325z00_472);
																		}
																		BgL_arg2297z00_468 =
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2305z00_469, BgL_arg2312z00_470);
																	}
																	BgL_auxz00_1227 =
																		MAKE_PAIR(BINT(((long) 171)),
																		BgL_arg2297z00_468);
																} break;
															case ((long) 202):

																{
																	obj_t BgL_begz00_497;

																	obj_t BgL_endz00_498;

																	obj_t BgL_labz00_499;

																	obj_t BgL_typez00_500;

																	{	/* Jas/labels.scm 106 */
																		obj_t BgL_ezd21455zd2_502;

																		BgL_ezd21455zd2_502 = CDR(BgL_insz00_415);
																		if (PAIRP(BgL_ezd21455zd2_502))
																			{	/* Jas/labels.scm 86 */
																				obj_t BgL_cdrzd21465zd2_504;

																				BgL_cdrzd21465zd2_504 =
																					CDR(BgL_ezd21455zd2_502);
																				if (PAIRP(BgL_cdrzd21465zd2_504))
																					{	/* Jas/labels.scm 86 */
																						obj_t BgL_cdrzd21471zd2_506;

																						BgL_cdrzd21471zd2_506 =
																							CDR(BgL_cdrzd21465zd2_504);
																						if (PAIRP(BgL_cdrzd21471zd2_506))
																							{	/* Jas/labels.scm 86 */
																								obj_t BgL_cdrzd21476zd2_508;

																								BgL_cdrzd21476zd2_508 =
																									CDR(BgL_cdrzd21471zd2_506);
																								if (PAIRP
																									(BgL_cdrzd21476zd2_508))
																									{	/* Jas/labels.scm 86 */
																										if (NULLP(CDR
																												(BgL_cdrzd21476zd2_508)))
																											{	/* Jas/labels.scm 86 */
																												BgL_begz00_497 =
																													CAR
																													(BgL_ezd21455zd2_502);
																												BgL_endz00_498 =
																													CAR
																													(BgL_cdrzd21465zd2_504);
																												BgL_labz00_499 =
																													CAR
																													(BgL_cdrzd21471zd2_506);
																												BgL_typez00_500 =
																													CAR
																													(BgL_cdrzd21476zd2_508);
																												{	/* Jas/labels.scm 108 */
																													obj_t
																														BgL_arg2438z00_517;
																													obj_t
																														BgL_arg2444z00_518;
																													obj_t
																														BgL_arg2445z00_519;
																													BgL_arg2438z00_517 =
																														BGl_getzd2targetzd2zzjas_labelsz00
																														(BgL_classfilez00_3,
																														BgL_envz00_412,
																														BgL_begz00_497);
																													BgL_arg2444z00_518 =
																														BGl_getzd2targetzd2zzjas_labelsz00
																														(BgL_classfilez00_3,
																														BgL_envz00_412,
																														BgL_endz00_498);
																													BgL_arg2445z00_519 =
																														BGl_getzd2targetzd2zzjas_labelsz00
																														(BgL_classfilez00_3,
																														BgL_envz00_412,
																														BgL_labz00_499);
																													{	/* Jas/labels.scm 108 */
																														obj_t
																															BgL_list2446z00_520;
																														{	/* Jas/labels.scm 108 */
																															obj_t
																																BgL_arg2448z00_521;
																															{	/* Jas/labels.scm 108 */
																																obj_t
																																	BgL_arg2451z00_522;
																																{	/* Jas/labels.scm 108 */
																																	obj_t
																																		BgL_arg2452z00_523;
																																	{	/* Jas/labels.scm 108 */
																																		obj_t
																																			BgL_arg2453z00_524;
																																		BgL_arg2453z00_524
																																			=
																																			MAKE_PAIR
																																			(BgL_typez00_500,
																																			BNIL);
																																		BgL_arg2452z00_523
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2445z00_519,
																																			BgL_arg2453z00_524);
																																	}
																																	BgL_arg2451z00_522
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2444z00_518,
																																		BgL_arg2452z00_523);
																																}
																																BgL_arg2448z00_521
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2438z00_517,
																																	BgL_arg2451z00_522);
																															}
																															BgL_list2446z00_520
																																=
																																MAKE_PAIR(BINT((
																																		(long)
																																		202)),
																																BgL_arg2448z00_521);
																														}
																														BgL_auxz00_1227 =
																															BgL_list2446z00_520;
																											}}}
																										else
																											{	/* Jas/labels.scm 86 */
																												BgL_auxz00_1227 =
																													BFALSE;
																											}
																									}
																								else
																									{	/* Jas/labels.scm 86 */
																										BgL_auxz00_1227 = BFALSE;
																									}
																							}
																						else
																							{	/* Jas/labels.scm 86 */
																								BgL_auxz00_1227 = BFALSE;
																							}
																					}
																				else
																					{	/* Jas/labels.scm 86 */
																						BgL_auxz00_1227 = BFALSE;
																					}
																			}
																		else
																			{	/* Jas/labels.scm 86 */
																				BgL_auxz00_1227 = BFALSE;
																			}
																	}
																}
																break;
															case ((long) 205):

																{
																	obj_t BgL_begz00_525;

																	obj_t BgL_endz00_526;

																	obj_t BgL_restz00_527;

																	{	/* Jas/labels.scm 111 */
																		obj_t BgL_ezd21483zd2_529;

																		BgL_ezd21483zd2_529 = CDR(BgL_insz00_415);
																		if (PAIRP(BgL_ezd21483zd2_529))
																			{	/* Jas/labels.scm 86 */
																				obj_t BgL_cdrzd21491zd2_531;

																				BgL_cdrzd21491zd2_531 =
																					CDR(BgL_ezd21483zd2_529);
																				if (PAIRP(BgL_cdrzd21491zd2_531))
																					{	/* Jas/labels.scm 86 */
																						BgL_begz00_525 =
																							CAR(BgL_ezd21483zd2_529);
																						BgL_endz00_526 =
																							CAR(BgL_cdrzd21491zd2_531);
																						BgL_restz00_527 =
																							CDR(BgL_cdrzd21491zd2_531);
																						{	/* Jas/labels.scm 113 */
																							obj_t BgL_bz00_536;

																							obj_t BgL_ez00_537;

																							BgL_bz00_536 =
																								BGl_getzd2targetzd2zzjas_labelsz00
																								(BgL_classfilez00_3,
																								BgL_envz00_412, BgL_begz00_525);
																							BgL_ez00_537 =
																								BGl_getzd2targetzd2zzjas_labelsz00
																								(BgL_classfilez00_3,
																								BgL_envz00_412, BgL_endz00_526);
																							{	/* Jas/labels.scm 114 */
																								obj_t BgL_arg2471z00_539;

																								{	/* Jas/labels.scm 114 */
																									long BgL_arg2472z00_540;

																									BgL_arg2472z00_540 =
																										(
																										(long) CINT(BgL_ez00_537) -
																										(long) CINT(BgL_bz00_536));
																									{	/* Jas/labels.scm 114 */
																										obj_t BgL_list2473z00_541;

																										{	/* Jas/labels.scm 114 */
																											obj_t BgL_arg2476z00_542;

																											BgL_arg2476z00_542 =
																												MAKE_PAIR
																												(BgL_restz00_527, BNIL);
																											BgL_list2473z00_541 =
																												MAKE_PAIR(BINT
																												(BgL_arg2472z00_540),
																												BgL_arg2476z00_542);
																										}
																										BgL_arg2471z00_539 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_bz00_536,
																											BgL_list2473z00_541);
																								}}
																								BgL_auxz00_1227 =
																									MAKE_PAIR(BINT(((long) 205)),
																									BgL_arg2471z00_539);
																					}}}
																				else
																					{	/* Jas/labels.scm 86 */
																						BgL_auxz00_1227 = BFALSE;
																					}
																			}
																		else
																			{	/* Jas/labels.scm 86 */
																				BgL_auxz00_1227 = BFALSE;
																			}
																	}
																}
																break;
															default:
																BgL_auxz00_1227 = BgL_insz00_415;
															}
													}
												else
													{	/* Jas/labels.scm 86 */
														BgL_auxz00_1227 = BgL_insz00_415;
													}
											}
										}
										BgL_arg2554z00_570 =
											MAKE_PAIR(BgL_auxz00_1227, BgL_donez00_563);
									}
									{
										obj_t BgL_donez00_1408;

										obj_t BgL_pcz00_1407;

										obj_t BgL_lz00_1406;

										BgL_lz00_1406 = BgL_arg2544z00_568;
										BgL_pcz00_1407 = BgL_arg2550z00_569;
										BgL_donez00_1408 = BgL_arg2554z00_570;
										BgL_donez00_563 = BgL_donez00_1408;
										BgL_pcz00_562 = BgL_pcz00_1407;
										BgL_lz00_561 = BgL_lz00_1406;
										goto BgL_zc3anonymousza32530ze3z83_564;
									}
								}
						}
				}
			}
		}
	}



/* get-target */
	obj_t BGl_getzd2targetzd2zzjas_labelsz00(obj_t BgL_classfilez00_996,
		obj_t BgL_envz00_995, obj_t BgL_labelz00_543)
	{
		AN_OBJECT;
		{	/* Jas/labels.scm 78 */
			{	/* Jas/labels.scm 77 */
				obj_t BgL_arg2491z00_545;

				{	/* Jas/labels.scm 77 */
					obj_t BgL__ortest_1910z00_546;

					BgL__ortest_1910z00_546 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_labelz00_543,
						BgL_envz00_995);
					if (CBOOL(BgL__ortest_1910z00_546))
						{	/* Jas/labels.scm 77 */
							BgL_arg2491z00_545 = BgL__ortest_1910z00_546;
						}
					else
						{	/* Jas/labels.scm 77 */
							BgL_arg2491z00_545 =
								BGl_jaszd2errorzd2zzjas_classfilez00(
								(BgL_classfilez00_bglt) (BgL_classfilez00_996),
								BGl_string2680z00zzjas_labelsz00, BgL_labelz00_543);
						}
				}
				return CDR(BgL_arg2491z00_545);
			}
		}
	}



/* padding */
	obj_t BGl_paddingz00zzjas_labelsz00(obj_t BgL_pcz00_5)
	{
		AN_OBJECT;
		{	/* Jas/labels.scm 125 */
			{	/* Jas/labels.scm 126 */
				long BgL_aux1914z00_579;

				BgL_aux1914z00_579 =
					BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
					(long) CINT(BgL_pcz00_5), ((long) 4));
				switch (BgL_aux1914z00_579)
					{
					case ((long) 0):

						return CNST_TABLE_REF(((long) 2));
						break;
					case ((long) 1):

						return CNST_TABLE_REF(((long) 3));
						break;
					case ((long) 2):

						return CNST_TABLE_REF(((long) 4));
						break;
					default:
						return BNIL;
					}
			}
		}
	}



/* size-ins */
	obj_t BGl_siza7ezd2insz75zzjas_labelsz00(obj_t BgL_insz00_6,
		obj_t BgL_pcz00_7)
	{
		AN_OBJECT;
		{	/* Jas/labels.scm 150 */
			{	/* Jas/labels.scm 151 */
				long BgL_siza7eza7_581;

				{	/* Jas/labels.scm 151 */
					obj_t BgL_arg2649z00_610;

					BgL_arg2649z00_610 = CAR(BgL_insz00_6);
					{	/* Jas/labels.scm 151 */
						obj_t BgL_vectorz00_973;

						int BgL_kz00_974;

						BgL_vectorz00_973 = BGl_za2opcodezd2siza7eza2z75zzjas_labelsz00;
						BgL_kz00_974 = CINT(BgL_arg2649z00_610);
						BgL_siza7eza7_581 =
							(long) CINT(VECTOR_REF(BgL_vectorz00_973, BgL_kz00_974));
				}}
				if ((BgL_siza7eza7_581 == ((long) 0)))
					{	/* Jas/labels.scm 153 */
						obj_t BgL_aux1916z00_584;

						BgL_aux1916z00_584 = CAR(BgL_insz00_6);
						if (INTEGERP(BgL_aux1916z00_584))
							{	/* Jas/labels.scm 153 */
								switch ((long) CINT(BgL_aux1916z00_584))
									{
									case ((long) 170):

										{	/* Jas/labels.scm 155 */
											obj_t BgL_arg2564z00_587;

											{	/* Jas/labels.scm 155 */
												long BgL_arg2565z00_588;

												obj_t BgL_arg2566z00_589;

												BgL_arg2565z00_588 =
													bgl_list_length(BGl_paddingz00zzjas_labelsz00
													(BgL_pcz00_7));
												BgL_arg2566z00_589 =
													BINT((((long) 4) * bgl_list_length(BgL_insz00_6)));
												{	/* Jas/labels.scm 155 */
													obj_t BgL_list2567z00_590;

													{	/* Jas/labels.scm 155 */
														obj_t BgL_arg2571z00_591;

														BgL_arg2571z00_591 =
															MAKE_PAIR(BgL_arg2566z00_589, BNIL);
														BgL_list2567z00_590 =
															MAKE_PAIR(BINT(BgL_arg2565z00_588),
															BgL_arg2571z00_591);
													}
													BgL_arg2564z00_587 =
														BGl_zb2zb2zz__r4_numbers_6_5z00
														(BgL_list2567z00_590);
											}}
											return
												BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long) 1)),
												BgL_arg2564z00_587);
										} break;
									case ((long) 171):

										{	/* Jas/labels.scm 158 */
											obj_t BgL_arg2589z00_596;

											{	/* Jas/labels.scm 158 */
												long BgL_arg2590z00_597;

												obj_t BgL_arg2595z00_599;

												BgL_arg2590z00_597 =
													bgl_list_length(BGl_paddingz00zzjas_labelsz00
													(BgL_pcz00_7));
												{	/* Jas/labels.scm 159 */
													long BgL_auxz00_1444;

													{	/* Jas/labels.scm 159 */
														long BgL_auxz00_1445;

														{	/* Jas/labels.scm 159 */
															obj_t BgL_auxz00_1446;

															{	/* Jas/labels.scm 159 */
																obj_t BgL_pairz00_976;

																BgL_pairz00_976 = BgL_insz00_6;
																BgL_auxz00_1446 = CDR(CDR(BgL_pairz00_976));
															}
															BgL_auxz00_1445 =
																bgl_list_length(BgL_auxz00_1446);
														}
														BgL_auxz00_1444 = (((long) 8) * BgL_auxz00_1445);
													}
													BgL_arg2595z00_599 = BINT(BgL_auxz00_1444);
												}
												{	/* Jas/labels.scm 158 */
													obj_t BgL_list2596z00_600;

													{	/* Jas/labels.scm 158 */
														obj_t BgL_arg2602z00_601;

														{	/* Jas/labels.scm 158 */
															obj_t BgL_arg2608z00_602;

															BgL_arg2608z00_602 =
																MAKE_PAIR(BgL_arg2595z00_599, BNIL);
															BgL_arg2602z00_601 =
																MAKE_PAIR(BINT(((long) 8)), BgL_arg2608z00_602);
														}
														BgL_list2596z00_600 =
															MAKE_PAIR(BINT(BgL_arg2590z00_597),
															BgL_arg2602z00_601);
													}
													BgL_arg2589z00_596 =
														BGl_zb2zb2zz__r4_numbers_6_5z00
														(BgL_list2596z00_600);
											}}
											return
												BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long) 1)),
												BgL_arg2589z00_596);
										} break;
									case ((long) 196):

										{	/* Jas/labels.scm 161 */
											bool_t BgL_testz00_1460;

											{	/* Jas/labels.scm 161 */
												obj_t BgL_auxz00_1461;

												{	/* Jas/labels.scm 161 */
													obj_t BgL_pairz00_980;

													BgL_pairz00_980 = BgL_insz00_6;
													BgL_auxz00_1461 = CAR(CDR(BgL_pairz00_980));
												}
												BgL_testz00_1460 =
													BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_auxz00_1461,
													BINT(((long) 132)));
											}
											if (BgL_testz00_1460)
												{	/* Jas/labels.scm 161 */
													return BINT(((long) 6));
												}
											else
												{	/* Jas/labels.scm 161 */
													return BINT(((long) 4));
										}} break;
									case ((long) 202):

										return BINT(((long) 0));
										break;
									case ((long) 203):

										return BINT(((long) 0));
										break;
									case ((long) 204):

										return BINT(((long) 0));
										break;
									case ((long) 205):

										return BINT(((long) 0));
										break;
									default:
										return BUNSPEC;
									}
							}
						else
							{	/* Jas/labels.scm 153 */
								return BUNSPEC;
							}
					}
				else
					{	/* Jas/labels.scm 152 */
						return BINT(BgL_siza7eza7_581);
					}
			}
		}
	}



/* resolve-pc */
	obj_t BGl_resolvezd2pczd2zzjas_labelsz00(obj_t BgL_classfilez00_8,
		obj_t BgL_codez00_9)
	{
		AN_OBJECT;
		{	/* Jas/labels.scm 172 */
			{
				obj_t BgL_lz00_612;

				obj_t BgL_envz00_613;

				obj_t BgL_pcz00_614;

				BgL_lz00_612 = BgL_codez00_9;
				BgL_envz00_613 = BNIL;
				BgL_pcz00_614 = BINT(((long) 0));
			BgL_zc3anonymousza32650ze3z83_615:
				if (NULLP(BgL_lz00_612))
					{	/* Jas/labels.scm 174 */
						return BgL_envz00_613;
					}
				else
					{	/* Jas/labels.scm 176 */
						bool_t BgL_testz00_1477;

						{	/* Jas/labels.scm 176 */
							obj_t BgL_auxz00_1478;

							BgL_auxz00_1478 = CAR(BgL_lz00_612);
							BgL_testz00_1477 = SYMBOLP(BgL_auxz00_1478);
						}
						if (BgL_testz00_1477)
							{	/* Jas/labels.scm 177 */
								obj_t BgL_arg2655z00_618;

								obj_t BgL_arg2656z00_619;

								BgL_arg2655z00_618 = CDR(BgL_lz00_612);
								{	/* Jas/labels.scm 177 */
									obj_t BgL_arg2657z00_620;

									BgL_arg2657z00_620 =
										MAKE_PAIR(CAR(BgL_lz00_612), BgL_pcz00_614);
									BgL_arg2656z00_619 =
										MAKE_PAIR(BgL_arg2657z00_620, BgL_envz00_613);
								}
								{
									obj_t BgL_envz00_1486;

									obj_t BgL_lz00_1485;

									BgL_lz00_1485 = BgL_arg2655z00_618;
									BgL_envz00_1486 = BgL_arg2656z00_619;
									BgL_envz00_613 = BgL_envz00_1486;
									BgL_lz00_612 = BgL_lz00_1485;
									goto BgL_zc3anonymousza32650ze3z83_615;
								}
							}
						else
							{
								obj_t BgL_pcz00_1489;

								obj_t BgL_lz00_1487;

								BgL_lz00_1487 = CDR(BgL_lz00_612);
								BgL_pcz00_1489 =
									BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_pcz00_614,
									BGl_siza7ezd2insz75zzjas_labelsz00(CAR(BgL_lz00_612),
										BgL_pcz00_614));
								BgL_pcz00_614 = BgL_pcz00_1489;
								BgL_lz00_612 = BgL_lz00_1487;
								goto BgL_zc3anonymousza32650ze3z83_615;
							}
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzjas_labelsz00()
	{
		AN_OBJECT;
		{	/* Jas/labels.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzjas_labelsz00()
	{
		AN_OBJECT;
		{	/* Jas/labels.scm 1 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzjas_labelsz00()
	{
		AN_OBJECT;
		{	/* Jas/labels.scm 1 */
			BGl_modulezd2initializa7ationz75zzjas_libz00(((long) 125143848),
				BSTRING_TO_STRING(BGl_string2682z00zzjas_labelsz00));
			return
				BGl_modulezd2initializa7ationz75zzjas_classfilez00(((long) 324206891),
				BSTRING_TO_STRING(BGl_string2682z00zzjas_labelsz00));
		}
	}

#ifdef __cplusplus
}
#endif
