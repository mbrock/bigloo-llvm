/*===========================================================================*/
/*   (Module/prototype.scm)                                                  */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/prototype.scm)*/
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


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_parsezd2classzd2zzmodule_prototypez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_prototypez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzmodule_prototypez00();
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_parsezd2expanderzd2zzmodule_prototypez00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzmodule_prototypez00();
	static obj_t BGl_parsezd2variablezd2prototypez00zzmodule_prototypez00(obj_t);
	extern BgL_typez00_bglt BGl_getzd2defaultzd2typez00zztype_cachez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_prototypez00();
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	static obj_t BGl_parsezd2functionzd2prototypez00zzmodule_prototypez00(obj_t,
		obj_t);
	static obj_t BGl_parsezd2classzd2slotz00zzmodule_prototypez00(obj_t, obj_t);
	static obj_t BGl_parsezd2macrozd2zzmodule_prototypez00(obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzmodule_prototypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_evalz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_dssslz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static bool_t BGl_correctzd2attributzf3z21zzmodule_prototypez00(obj_t);
	extern bool_t BGl_dssslzd2checkzd2prototypezf3zf3zztools_dssslz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_parsezd2prototypezd2zzmodule_prototypez00(obj_t);
	static obj_t BGl_parsezd2syntaxzd2zzmodule_prototypez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_za2allzd2exportzd2mutablezf3za2zf3zzmodule_evalz00;
	static obj_t BGl__parsezd2prototypezd2zzmodule_prototypez00(obj_t, obj_t);
	extern BgL_typez00_bglt BGl_typezd2ofzd2idz00zzast_identz00(obj_t, obj_t);
	extern obj_t BGl_epairifyz00zztools_miscz00(obj_t, obj_t);
	static obj_t BGl_parsezd2classzd2slotsz00zzmodule_prototypez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_prototypez00();
	static obj_t BGl_methodzd2initzd2zzmodule_prototypez00();
	static obj_t __cnst[22];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_parsezd2prototypezd2envz00zzmodule_prototypez00,
		BgL_bgl__parseza7d2prototy1861za7,
		BGl__parsezd2prototypezd2zzmodule_prototypez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1851z00zzmodule_prototypez00,
		BgL_bgl_string1851za700za7za7m1862za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string1852z00zzmodule_prototypez00,
		BgL_bgl_string1852za700za7za7m1863za7, "Illegal class field definition",
		30);
	      DEFINE_STRING(BGl_string1853z00zzmodule_prototypez00,
		BgL_bgl_string1853za700za7za7m1864za7, "Illegal macro definition", 24);
	      DEFINE_STRING(BGl_string1854z00zzmodule_prototypez00,
		BgL_bgl_string1854za700za7za7m1865za7, "Illegal syntax definition", 25);
	      DEFINE_STRING(BGl_string1855z00zzmodule_prototypez00,
		BgL_bgl_string1855za700za7za7m1866za7, "Illegal expander definition", 27);
	      DEFINE_STRING(BGl_string1856z00zzmodule_prototypez00,
		BgL_bgl_string1856za700za7za7m1867za7, "module_prototype", 16);
	      DEFINE_STRING(BGl_string1857z00zzmodule_prototypez00,
		BgL_bgl_string1857za700za7za7m1868za7,
		"info default set get (read-only) * id define-macro svar expander syntax macro inline generic abstract-class wide-class final-class class sfun (main module-initialization) sifun sgfun ",
		183);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzmodule_prototypez00(long
		BgL_checksumz00_678, char *BgL_fromz00_679)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_prototypez00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_prototypez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzmodule_prototypez00();
					BGl_cnstzd2initzd2zzmodule_prototypez00();
					BGl_importedzd2moduleszd2initz00zzmodule_prototypez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_prototypez00()
	{
		AN_OBJECT;
		{	/* Module/prototype.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_prototype");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"module_prototype");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_prototypez00()
	{
		AN_OBJECT;
		{	/* Module/prototype.scm 15 */
			{	/* Module/prototype.scm 15 */
				obj_t BgL_cportz00_670;

				BgL_cportz00_670 =
					bgl_open_input_string(BGl_string1857z00zzmodule_prototypez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_671;

					BgL_iz00_671 = ((long) 21);
				BgL_loopz00_672:
					if ((BgL_iz00_671 == ((long) -1)))
						{	/* Module/prototype.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/prototype.scm 15 */
							{	/* Module/prototype.scm 15 */
								obj_t BgL_arg1860z00_674;

								{	/* Module/prototype.scm 15 */

									{	/* Module/prototype.scm 15 */
										obj_t BgL_locationz00_676;

										BgL_locationz00_676 = BBOOL(((bool_t) 0));
										{	/* Module/prototype.scm 15 */

											BgL_arg1860z00_674 =
												BGl_readz00zz__readerz00(BgL_cportz00_670,
												BgL_locationz00_676);
										}
									}
								}
								{	/* Module/prototype.scm 15 */
									int BgL_auxz00_694;

									BgL_auxz00_694 = (int) (BgL_iz00_671);
									CNST_TABLE_SET(BgL_auxz00_694, BgL_arg1860z00_674);
							}}
							{	/* Module/prototype.scm 15 */
								int BgL_auxz00_677;

								BgL_auxz00_677 = (int) ((BgL_iz00_671 - ((long) 1)));
								{
									long BgL_iz00_699;

									BgL_iz00_699 = (long) (BgL_auxz00_677);
									BgL_iz00_671 = BgL_iz00_699;
									goto BgL_loopz00_672;
								}
							}
						}
				}
			}
		}
	}



/* parse-prototype */
	BGL_EXPORTED_DEF obj_t BGl_parsezd2prototypezd2zzmodule_prototypez00(obj_t
		BgL_protoz00_1)
	{
		AN_OBJECT;
		{	/* Module/prototype.scm 30 */
			{
				obj_t BgL_idz00_165;

				if (PAIRP(BgL_protoz00_1))
					{	/* Module/prototype.scm 31 */
						obj_t BgL_carzd21401zd2_170;

						BgL_carzd21401zd2_170 = CAR(BgL_protoz00_1);
						if ((BgL_carzd21401zd2_170 == CNST_TABLE_REF(((long) 4))))
							{	/* Module/prototype.scm 31 */
								return
									BGl_parsezd2classzd2zzmodule_prototypez00
									(BgL_carzd21401zd2_170, CDR(BgL_protoz00_1));
							}
						else
							{	/* Module/prototype.scm 31 */
								if ((BgL_carzd21401zd2_170 == CNST_TABLE_REF(((long) 5))))
									{	/* Module/prototype.scm 31 */
										return
											BGl_parsezd2classzd2zzmodule_prototypez00
											(BgL_carzd21401zd2_170, CDR(BgL_protoz00_1));
									}
								else
									{	/* Module/prototype.scm 31 */
										if ((BgL_carzd21401zd2_170 == CNST_TABLE_REF(((long) 6))))
											{	/* Module/prototype.scm 31 */
												return
													BGl_parsezd2classzd2zzmodule_prototypez00
													(BgL_carzd21401zd2_170, CDR(BgL_protoz00_1));
											}
										else
											{	/* Module/prototype.scm 31 */
												if (
													(BgL_carzd21401zd2_170 == CNST_TABLE_REF(((long) 7))))
													{	/* Module/prototype.scm 31 */
														return
															BGl_parsezd2classzd2zzmodule_prototypez00
															(BgL_carzd21401zd2_170, CDR(BgL_protoz00_1));
													}
												else
													{	/* Module/prototype.scm 31 */
														if (
															(BgL_carzd21401zd2_170 ==
																CNST_TABLE_REF(((long) 8))))
															{	/* Module/prototype.scm 31 */
																{	/* Module/prototype.scm 35 */
																	obj_t BgL_arg1627z00_194;

																	obj_t BgL_arg1628z00_195;

																	BgL_arg1627z00_194 = CDR(BgL_protoz00_1);
																	BgL_arg1628z00_195 =
																		CNST_TABLE_REF(((long) 0));
																	return
																		BGl_parsezd2functionzd2prototypez00zzmodule_prototypez00
																		(BgL_arg1627z00_194, BgL_arg1628z00_195);
																}
															}
														else
															{	/* Module/prototype.scm 31 */
																if (
																	(CAR(BgL_protoz00_1) ==
																		CNST_TABLE_REF(((long) 9))))
																	{	/* Module/prototype.scm 31 */
																		{	/* Module/prototype.scm 37 */
																			obj_t BgL_arg1630z00_196;

																			obj_t BgL_arg1631z00_197;

																			BgL_arg1630z00_196 = CDR(BgL_protoz00_1);
																			BgL_arg1631z00_197 =
																				CNST_TABLE_REF(((long) 1));
																			return
																				BGl_parsezd2functionzd2prototypez00zzmodule_prototypez00
																				(BgL_arg1630z00_196,
																				BgL_arg1631z00_197);
																		}
																	}
																else
																	{	/* Module/prototype.scm 31 */
																		if (
																			(CAR(BgL_protoz00_1) ==
																				CNST_TABLE_REF(((long) 10))))
																			{	/* Module/prototype.scm 31 */
																				return
																					BGl_parsezd2macrozd2zzmodule_prototypez00
																					(CDR(BgL_protoz00_1));
																			}
																		else
																			{	/* Module/prototype.scm 31 */
																				if (
																					(CAR(BgL_protoz00_1) ==
																						CNST_TABLE_REF(((long) 11))))
																					{	/* Module/prototype.scm 31 */
																						return
																							BGl_parsezd2syntaxzd2zzmodule_prototypez00
																							(CDR(BgL_protoz00_1));
																					}
																				else
																					{	/* Module/prototype.scm 31 */
																						if (
																							(CAR(BgL_protoz00_1) ==
																								CNST_TABLE_REF(((long) 12))))
																							{	/* Module/prototype.scm 31 */
																								return
																									BGl_parsezd2expanderzd2zzmodule_prototypez00
																									(CDR(BgL_protoz00_1));
																							}
																						else
																							{	/* Module/prototype.scm 31 */
																								BgL_idz00_165 =
																									CAR(BgL_protoz00_1);
																								{	/* Module/prototype.scm 45 */
																									bool_t BgL_testz00_755;

																									if (CBOOL
																										(BGl_za2allzd2exportzd2mutablezf3za2zf3zzmodule_evalz00))
																										{	/* Module/prototype.scm 45 */
																											if (CBOOL
																												(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																													(BgL_idz00_165,
																														CNST_TABLE_REF((
																																(long) 2)))))
																												{	/* Module/prototype.scm 46 */
																													BgL_testz00_755 =
																														((bool_t) 1);
																												}
																											else
																												{	/* Module/prototype.scm 47 */
																													bool_t
																														BgL_testz00_762;
																													{	/* Module/prototype.scm 47 */
																														BgL_typez00_bglt
																															BgL_arg1639z00_204;
																														BgL_typez00_bglt
																															BgL_arg1640z00_205;
																														BgL_arg1639z00_204 =
																															BGl_getzd2defaultzd2typez00zztype_cachez00
																															();
																														BgL_arg1640z00_205 =
																															BGl_typezd2ofzd2idz00zzast_identz00
																															(BgL_idz00_165,
																															BGl_findzd2locationzd2zztools_locationz00
																															(BgL_protoz00_1));
																														BgL_testz00_762 =
																															((obj_t)
																															(BgL_arg1639z00_204)
																															==
																															(obj_t)
																															(BgL_arg1640z00_205));
																													}
																													if (BgL_testz00_762)
																														{	/* Module/prototype.scm 47 */
																															BgL_testz00_755 =
																																((bool_t) 0);
																														}
																													else
																														{	/* Module/prototype.scm 47 */
																															BgL_testz00_755 =
																																((bool_t) 1);
																														}
																												}
																										}
																									else
																										{	/* Module/prototype.scm 45 */
																											BgL_testz00_755 =
																												((bool_t) 1);
																										}
																									if (BgL_testz00_755)
																										{	/* Module/prototype.scm 45 */
																											return
																												BGl_parsezd2functionzd2prototypez00zzmodule_prototypez00
																												(BgL_protoz00_1,
																												CNST_TABLE_REF(((long)
																														3)));
																										}
																									else
																										{	/* Module/prototype.scm 45 */
																											return
																												BGl_parsezd2variablezd2prototypez00zzmodule_prototypez00
																												(BgL_idz00_165);
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
					{	/* Module/prototype.scm 31 */
						return
							BGl_parsezd2variablezd2prototypez00zzmodule_prototypez00
							(BgL_protoz00_1);
					}
			}
		}
	}



/* _parse-prototype */
	obj_t BGl__parsezd2prototypezd2zzmodule_prototypez00(obj_t BgL_envz00_666,
		obj_t BgL_protoz00_667)
	{
		AN_OBJECT;
		{	/* Module/prototype.scm 30 */
			return BGl_parsezd2prototypezd2zzmodule_prototypez00(BgL_protoz00_667);
		}
	}



/* parse-function-prototype */
	obj_t BGl_parsezd2functionzd2prototypez00zzmodule_prototypez00(obj_t
		BgL_protoz00_2, obj_t BgL_classz00_3)
	{
		AN_OBJECT;
		{	/* Module/prototype.scm 57 */
			{
				obj_t BgL_idz00_207;

				obj_t BgL_thezd2argszd2_208;

				if (PAIRP(BgL_protoz00_2))
					{	/* Module/prototype.scm 58 */
						obj_t BgL_carzd21444zd2_213;

						BgL_carzd21444zd2_213 = CAR(BgL_protoz00_2);
						if (SYMBOLP(BgL_carzd21444zd2_213))
							{	/* Module/prototype.scm 58 */
								BgL_idz00_207 = BgL_carzd21444zd2_213;
								BgL_thezd2argszd2_208 = CDR(BgL_protoz00_2);
								if (BGl_dssslzd2checkzd2prototypezf3zf3zztools_dssslz00
									(BgL_thezd2argszd2_208))
									{	/* Module/prototype.scm 61 */
										obj_t BgL_list1648z00_217;

										{	/* Module/prototype.scm 61 */
											obj_t BgL_arg1650z00_218;

											{	/* Module/prototype.scm 61 */
												obj_t BgL_arg1651z00_219;

												BgL_arg1651z00_219 =
													MAKE_PAIR(BgL_thezd2argszd2_208, BNIL);
												BgL_arg1650z00_218 =
													MAKE_PAIR(BgL_idz00_207, BgL_arg1651z00_219);
											}
											BgL_list1648z00_217 =
												MAKE_PAIR(BgL_classz00_3, BgL_arg1650z00_218);
										}
										return BgL_list1648z00_217;
									}
								else
									{
										obj_t BgL_argsz00_221;

										BgL_argsz00_221 = BgL_thezd2argszd2_208;
									BgL_zc3anonymousza31652ze3z83_222:
										if (NULLP(BgL_argsz00_221))
											{	/* Module/prototype.scm 65 */
												obj_t BgL_list1654z00_224;

												{	/* Module/prototype.scm 65 */
													obj_t BgL_arg1655z00_225;

													{	/* Module/prototype.scm 65 */
														obj_t BgL_arg1657z00_226;

														BgL_arg1657z00_226 =
															MAKE_PAIR(BgL_thezd2argszd2_208, BNIL);
														BgL_arg1655z00_225 =
															MAKE_PAIR(BgL_idz00_207, BgL_arg1657z00_226);
													}
													BgL_list1654z00_224 =
														MAKE_PAIR(BgL_classz00_3, BgL_arg1655z00_225);
												}
												return BgL_list1654z00_224;
											}
										else
											{	/* Module/prototype.scm 64 */
												if (SYMBOLP(BgL_argsz00_221))
													{	/* Module/prototype.scm 67 */
														obj_t BgL_list1659z00_228;

														{	/* Module/prototype.scm 67 */
															obj_t BgL_arg1660z00_229;

															{	/* Module/prototype.scm 67 */
																obj_t BgL_arg1662z00_230;

																BgL_arg1662z00_230 =
																	MAKE_PAIR(BgL_thezd2argszd2_208, BNIL);
																BgL_arg1660z00_229 =
																	MAKE_PAIR(BgL_idz00_207, BgL_arg1662z00_230);
															}
															BgL_list1659z00_228 =
																MAKE_PAIR(BgL_classz00_3, BgL_arg1660z00_229);
														}
														return BgL_list1659z00_228;
													}
												else
													{	/* Module/prototype.scm 66 */
														if (PAIRP(BgL_argsz00_221))
															{	/* Module/prototype.scm 70 */
																bool_t BgL_testz00_797;

																{	/* Module/prototype.scm 70 */
																	obj_t BgL_auxz00_798;

																	BgL_auxz00_798 = CAR(BgL_argsz00_221);
																	BgL_testz00_797 = SYMBOLP(BgL_auxz00_798);
																}
																if (BgL_testz00_797)
																	{
																		obj_t BgL_argsz00_801;

																		BgL_argsz00_801 = CDR(BgL_argsz00_221);
																		BgL_argsz00_221 = BgL_argsz00_801;
																		goto BgL_zc3anonymousza31652ze3z83_222;
																	}
																else
																	{	/* Module/prototype.scm 70 */
																		return BFALSE;
																	}
															}
														else
															{	/* Module/prototype.scm 68 */
																return BFALSE;
															}
													}
											}
									}
							}
						else
							{	/* Module/prototype.scm 58 */
								return BFALSE;
							}
					}
				else
					{	/* Module/prototype.scm 58 */
						return BFALSE;
					}
			}
		}
	}



/* parse-variable-prototype */
	obj_t BGl_parsezd2variablezd2prototypez00zzmodule_prototypez00(obj_t
		BgL_protoz00_4)
	{
		AN_OBJECT;
		{	/* Module/prototype.scm 80 */
			if (SYMBOLP(BgL_protoz00_4))
				{	/* Module/prototype.scm 82 */
					obj_t BgL_list1669z00_237;

					{	/* Module/prototype.scm 82 */
						obj_t BgL_arg1670z00_238;

						obj_t BgL_arg1672z00_239;

						BgL_arg1670z00_238 = CNST_TABLE_REF(((long) 13));
						BgL_arg1672z00_239 = MAKE_PAIR(BgL_protoz00_4, BNIL);
						BgL_list1669z00_237 =
							MAKE_PAIR(BgL_arg1670z00_238, BgL_arg1672z00_239);
					}
					return BgL_list1669z00_237;
				}
			else
				{	/* Module/prototype.scm 81 */
					return BFALSE;
				}
		}
	}



/* parse-class */
	obj_t BGl_parsezd2classzd2zzmodule_prototypez00(obj_t BgL_classz00_5,
		obj_t BgL_classzd2defzd2_6)
	{
		AN_OBJECT;
		{	/* Module/prototype.scm 88 */
			{	/* Module/prototype.scm 89 */
				obj_t BgL_locz00_240;

				BgL_locz00_240 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_classzd2defzd2_6);
				{
					obj_t BgL_namez00_246;

					obj_t BgL_slotsz00_247;

					if (PAIRP(BgL_classzd2defzd2_6))
						{	/* Module/prototype.scm 108 */
							obj_t BgL_carzd21459zd2_252;

							obj_t BgL_cdrzd21460zd2_253;

							BgL_carzd21459zd2_252 = CAR(BgL_classzd2defzd2_6);
							BgL_cdrzd21460zd2_253 = CDR(BgL_classzd2defzd2_6);
							if (SYMBOLP(BgL_carzd21459zd2_252))
								{	/* Module/prototype.scm 108 */
									if (PAIRP(BgL_cdrzd21460zd2_253))
										{	/* Module/prototype.scm 108 */
											obj_t BgL_carzd21465zd2_256;

											BgL_carzd21465zd2_256 = CAR(BgL_cdrzd21460zd2_253);
											if (PAIRP(BgL_carzd21465zd2_256))
												{	/* Module/prototype.scm 108 */
													if (NULLP(CDR(BgL_carzd21465zd2_256)))
														{	/* Module/prototype.scm 108 */
															obj_t BgL_arg1678z00_259;

															obj_t BgL_arg1680z00_260;

															BgL_arg1678z00_259 = CAR(BgL_carzd21465zd2_256);
															BgL_arg1680z00_260 = CDR(BgL_cdrzd21460zd2_253);
															{	/* Module/prototype.scm 108 */
																obj_t BgL_namez00_555;

																BgL_namez00_555 = BgL_carzd21459zd2_252;
																{	/* Module/prototype.scm 108 */
																	obj_t BgL_arg1693z00_558;

																	{	/* Module/prototype.scm 108 */
																		obj_t BgL_arg1694z00_559;

																		BgL_arg1694z00_559 =
																			BGl_parsezd2classzd2slotsz00zzmodule_prototypez00
																			(BgL_classzd2defzd2_6, BgL_locz00_240,
																			BgL_arg1680z00_260);
																		{	/* Module/prototype.scm 108 */
																			obj_t BgL_list1695z00_560;

																			{	/* Module/prototype.scm 108 */
																				obj_t BgL_arg1696z00_561;

																				BgL_arg1696z00_561 =
																					MAKE_PAIR(BgL_arg1694z00_559, BNIL);
																				BgL_list1695z00_560 =
																					MAKE_PAIR(BgL_arg1678z00_259,
																					BgL_arg1696z00_561);
																			}
																			BgL_arg1693z00_558 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_namez00_555, BgL_list1695z00_560);
																		}
																	}
																	return
																		MAKE_PAIR(BgL_classz00_5,
																		BgL_arg1693z00_558);
																}
															}
														}
													else
														{	/* Module/prototype.scm 108 */
															BgL_namez00_246 = BgL_carzd21459zd2_252;
															BgL_slotsz00_247 = BgL_cdrzd21460zd2_253;
														BgL_tagzd21450zd2_248:
															{	/* Module/prototype.scm 112 */
																obj_t BgL_arg1697z00_278;

																{	/* Module/prototype.scm 112 */
																	obj_t BgL_arg1700z00_279;

																	BgL_arg1700z00_279 =
																		BGl_parsezd2classzd2slotsz00zzmodule_prototypez00
																		(BgL_classzd2defzd2_6, BgL_locz00_240,
																		BgL_slotsz00_247);
																	{	/* Module/prototype.scm 112 */
																		obj_t BgL_list1701z00_280;

																		{	/* Module/prototype.scm 112 */
																			obj_t BgL_arg1702z00_281;

																			BgL_arg1702z00_281 =
																				MAKE_PAIR(BgL_arg1700z00_279, BNIL);
																			BgL_list1701z00_280 =
																				MAKE_PAIR(BFALSE, BgL_arg1702z00_281);
																		}
																		BgL_arg1697z00_278 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_namez00_246, BgL_list1701z00_280);
																	}
																}
																return
																	MAKE_PAIR(BgL_classz00_5, BgL_arg1697z00_278);
															}
														}
												}
											else
												{
													obj_t BgL_slotsz00_837;

													obj_t BgL_namez00_836;

													BgL_namez00_836 = BgL_carzd21459zd2_252;
													BgL_slotsz00_837 = BgL_cdrzd21460zd2_253;
													BgL_slotsz00_247 = BgL_slotsz00_837;
													BgL_namez00_246 = BgL_namez00_836;
													goto BgL_tagzd21450zd2_248;
												}
										}
									else
										{
											obj_t BgL_slotsz00_839;

											obj_t BgL_namez00_838;

											BgL_namez00_838 = BgL_carzd21459zd2_252;
											BgL_slotsz00_839 = BgL_cdrzd21460zd2_253;
											BgL_slotsz00_247 = BgL_slotsz00_839;
											BgL_namez00_246 = BgL_namez00_838;
											goto BgL_tagzd21450zd2_248;
										}
								}
							else
								{	/* Module/prototype.scm 108 */
									return BFALSE;
								}
						}
					else
						{	/* Module/prototype.scm 108 */
							return BFALSE;
						}
				}
			}
		}
	}



/* parse-class-slots */
	obj_t BGl_parsezd2classzd2slotsz00zzmodule_prototypez00(obj_t
		BgL_classzd2defzd2_669, obj_t BgL_locz00_668, obj_t BgL_slotsz00_282)
	{
		AN_OBJECT;
		{	/* Module/prototype.scm 107 */
			{
				obj_t BgL_slotsz00_286;

				obj_t BgL_resz00_287;

				BgL_slotsz00_286 = BgL_slotsz00_282;
				BgL_resz00_287 = BNIL;
			BgL_zc3anonymousza31704ze3z83_288:
				if (NULLP(BgL_slotsz00_286))
					{	/* Module/prototype.scm 94 */
						return bgl_reverse_bang(BgL_resz00_287);
					}
				else
					{	/* Module/prototype.scm 94 */
						if (PAIRP(BgL_slotsz00_286))
							{	/* Module/prototype.scm 99 */
								obj_t BgL_slotz00_291;

								BgL_slotz00_291 =
									BGl_parsezd2classzd2slotz00zzmodule_prototypez00(CAR
									(BgL_slotsz00_286), BgL_locz00_668);
								if (CBOOL(BgL_slotz00_291))
									{	/* Module/prototype.scm 106 */
										obj_t BgL_arg1707z00_292;

										obj_t BgL_arg1708z00_293;

										BgL_arg1707z00_292 = CDR(BgL_slotsz00_286);
										BgL_arg1708z00_293 =
											MAKE_PAIR(BgL_slotz00_291, BgL_resz00_287);
										{
											obj_t BgL_resz00_852;

											obj_t BgL_slotsz00_851;

											BgL_slotsz00_851 = BgL_arg1707z00_292;
											BgL_resz00_852 = BgL_arg1708z00_293;
											BgL_resz00_287 = BgL_resz00_852;
											BgL_slotsz00_286 = BgL_slotsz00_851;
											goto BgL_zc3anonymousza31704ze3z83_288;
										}
									}
								else
									{	/* Module/prototype.scm 101 */
										obj_t BgL_arg1711z00_296;

										{	/* Module/prototype.scm 103 */
											bool_t BgL_testz00_853;

											{	/* Module/prototype.scm 103 */
												obj_t BgL_auxz00_854;

												BgL_auxz00_854 = CAR(BgL_slotsz00_286);
												BgL_testz00_853 = PAIRP(BgL_auxz00_854);
											}
											if (BgL_testz00_853)
												{	/* Module/prototype.scm 103 */
													BgL_arg1711z00_296 = CAR(BgL_slotsz00_286);
												}
											else
												{	/* Module/prototype.scm 103 */
													BgL_arg1711z00_296 = BgL_classzd2defzd2_669;
												}
										}
										return
											BGl_userzd2errorzd2zztools_errorz00
											(BGl_string1851z00zzmodule_prototypez00,
											BGl_string1852z00zzmodule_prototypez00,
											BgL_arg1711z00_296, BNIL);
									}
							}
						else
							{	/* Module/prototype.scm 96 */
								return BFALSE;
							}
					}
			}
		}
	}



/* parse-macro */
	obj_t BGl_parsezd2macrozd2zzmodule_prototypez00(obj_t BgL_macrozd2defzd2_7)
	{
		AN_OBJECT;
		{	/* Module/prototype.scm 119 */
			{
				obj_t BgL_idz00_306;

				obj_t BgL_thezd2argszd2_307;

				obj_t BgL_bodyz00_308;

				obj_t BgL_idz00_303;

				obj_t BgL_restz00_304;

				if (PAIRP(BgL_macrozd2defzd2_7))
					{	/* Module/prototype.scm 120 */
						obj_t BgL_carzd21534zd2_313;

						BgL_carzd21534zd2_313 = CAR(BgL_macrozd2defzd2_7);
						if (SYMBOLP(BgL_carzd21534zd2_313))
							{	/* Module/prototype.scm 120 */
								BgL_idz00_303 = BgL_carzd21534zd2_313;
								BgL_restz00_304 = CDR(BgL_macrozd2defzd2_7);
								{
									obj_t BgL_argsz00_323;

									BgL_argsz00_323 = BgL_restz00_304;
								BgL_zc3anonymousza31726ze3z83_324:
									if (NULLP(BgL_argsz00_323))
										{	/* Module/prototype.scm 124 */
											return
												MAKE_PAIR(CNST_TABLE_REF(((long) 10)),
												BgL_macrozd2defzd2_7);
										}
									else
										{	/* Module/prototype.scm 124 */
											if (SYMBOLP(BgL_argsz00_323))
												{	/* Module/prototype.scm 126 */
													return
														MAKE_PAIR(CNST_TABLE_REF(((long) 10)),
														BgL_macrozd2defzd2_7);
												}
											else
												{	/* Module/prototype.scm 126 */
													if (PAIRP(BgL_argsz00_323))
														{	/* Module/prototype.scm 130 */
															bool_t BgL_testz00_874;

															{	/* Module/prototype.scm 130 */
																obj_t BgL_auxz00_875;

																BgL_auxz00_875 = CAR(BgL_argsz00_323);
																BgL_testz00_874 = SYMBOLP(BgL_auxz00_875);
															}
															if (BgL_testz00_874)
																{
																	obj_t BgL_argsz00_878;

																	BgL_argsz00_878 = CDR(BgL_argsz00_323);
																	BgL_argsz00_323 = BgL_argsz00_878;
																	goto BgL_zc3anonymousza31726ze3z83_324;
																}
															else
																{	/* Module/prototype.scm 130 */
																	return
																		BGl_userzd2errorzd2zztools_errorz00
																		(BGl_string1851z00zzmodule_prototypez00,
																		BGl_string1853z00zzmodule_prototypez00,
																		BgL_macrozd2defzd2_7, BNIL);
																}
														}
													else
														{	/* Module/prototype.scm 128 */
															return
																BGl_userzd2errorzd2zztools_errorz00
																(BGl_string1851z00zzmodule_prototypez00,
																BGl_string1853z00zzmodule_prototypez00,
																BgL_macrozd2defzd2_7, BNIL);
														}
												}
										}
								}
							}
						else
							{	/* Module/prototype.scm 120 */
								if (PAIRP(BgL_carzd21534zd2_313))
									{	/* Module/prototype.scm 120 */
										obj_t BgL_carzd21549zd2_318;

										BgL_carzd21549zd2_318 = CAR(BgL_carzd21534zd2_313);
										if (SYMBOLP(BgL_carzd21549zd2_318))
											{	/* Module/prototype.scm 120 */
												BgL_idz00_306 = BgL_carzd21549zd2_318;
												BgL_thezd2argszd2_307 = CDR(BgL_carzd21534zd2_313);
												BgL_bodyz00_308 = CDR(BgL_macrozd2defzd2_7);
												{
													obj_t BgL_argsz00_335;

													BgL_argsz00_335 = BgL_thezd2argszd2_307;
												BgL_zc3anonymousza31735ze3z83_336:
													if (NULLP(BgL_bodyz00_308))
														{	/* Module/prototype.scm 137 */
															return
																BGl_userzd2errorzd2zztools_errorz00
																(BGl_string1851z00zzmodule_prototypez00,
																BGl_string1853z00zzmodule_prototypez00,
																BgL_macrozd2defzd2_7, BNIL);
														}
													else
														{	/* Module/prototype.scm 137 */
															if (NULLP(BgL_argsz00_335))
																{	/* Module/prototype.scm 139 */
																	return
																		MAKE_PAIR(CNST_TABLE_REF(((long) 14)),
																		BgL_macrozd2defzd2_7);
																}
															else
																{	/* Module/prototype.scm 139 */
																	if (SYMBOLP(BgL_argsz00_335))
																		{	/* Module/prototype.scm 141 */
																			return
																				MAKE_PAIR(CNST_TABLE_REF(((long) 14)),
																				BgL_macrozd2defzd2_7);
																		}
																	else
																		{	/* Module/prototype.scm 141 */
																			if (PAIRP(BgL_argsz00_335))
																				{	/* Module/prototype.scm 145 */
																					bool_t BgL_testz00_901;

																					{	/* Module/prototype.scm 145 */
																						obj_t BgL_auxz00_902;

																						BgL_auxz00_902 =
																							CAR(BgL_argsz00_335);
																						BgL_testz00_901 =
																							SYMBOLP(BgL_auxz00_902);
																					}
																					if (BgL_testz00_901)
																						{
																							obj_t BgL_argsz00_905;

																							BgL_argsz00_905 =
																								CDR(BgL_argsz00_335);
																							BgL_argsz00_335 = BgL_argsz00_905;
																							goto
																								BgL_zc3anonymousza31735ze3z83_336;
																						}
																					else
																						{	/* Module/prototype.scm 145 */
																							return
																								BGl_userzd2errorzd2zztools_errorz00
																								(BGl_string1851z00zzmodule_prototypez00,
																								BGl_string1853z00zzmodule_prototypez00,
																								BgL_macrozd2defzd2_7, BNIL);
																						}
																				}
																			else
																				{	/* Module/prototype.scm 143 */
																					return
																						BGl_userzd2errorzd2zztools_errorz00
																						(BGl_string1851z00zzmodule_prototypez00,
																						BGl_string1853z00zzmodule_prototypez00,
																						BgL_macrozd2defzd2_7, BNIL);
																				}
																		}
																}
														}
												}
											}
										else
											{	/* Module/prototype.scm 120 */
											BgL_tagzd21526zd2_310:
												return
													BGl_userzd2errorzd2zztools_errorz00
													(BGl_string1851z00zzmodule_prototypez00,
													BGl_string1853z00zzmodule_prototypez00,
													BgL_macrozd2defzd2_7, BNIL);
											}
									}
								else
									{	/* Module/prototype.scm 120 */
										goto BgL_tagzd21526zd2_310;
									}
							}
					}
				else
					{	/* Module/prototype.scm 120 */
						goto BgL_tagzd21526zd2_310;
					}
			}
		}
	}



/* parse-syntax */
	obj_t BGl_parsezd2syntaxzd2zzmodule_prototypez00(obj_t BgL_syntaxzd2defzd2_8)
	{
		AN_OBJECT;
		{	/* Module/prototype.scm 155 */
			{

				if (PAIRP(BgL_syntaxzd2defzd2_8))
					{	/* Module/prototype.scm 156 */
						obj_t BgL_carzd21566zd2_354;

						BgL_carzd21566zd2_354 = CAR(BgL_syntaxzd2defzd2_8);
						if (SYMBOLP(BgL_carzd21566zd2_354))
							{	/* Module/prototype.scm 156 */
								if (NULLP(CDR(BgL_syntaxzd2defzd2_8)))
									{	/* Module/prototype.scm 156 */
										return
											MAKE_PAIR(CNST_TABLE_REF(((long) 11)),
											BgL_syntaxzd2defzd2_8);
									}
								else
									{	/* Module/prototype.scm 156 */
									BgL_tagzd21562zd2_351:
										return
											BGl_userzd2errorzd2zztools_errorz00
											(BGl_string1851z00zzmodule_prototypez00,
											BGl_string1854z00zzmodule_prototypez00,
											BgL_syntaxzd2defzd2_8, BNIL);
									}
							}
						else
							{	/* Module/prototype.scm 156 */
								goto BgL_tagzd21562zd2_351;
							}
					}
				else
					{	/* Module/prototype.scm 156 */
						goto BgL_tagzd21562zd2_351;
					}
			}
		}
	}



/* parse-expander */
	obj_t BGl_parsezd2expanderzd2zzmodule_prototypez00(obj_t
		BgL_expanderzd2defzd2_9)
	{
		AN_OBJECT;
		{	/* Module/prototype.scm 165 */
			{

				if (PAIRP(BgL_expanderzd2defzd2_9))
					{	/* Module/prototype.scm 166 */
						obj_t BgL_carzd21575zd2_364;

						BgL_carzd21575zd2_364 = CAR(BgL_expanderzd2defzd2_9);
						if (SYMBOLP(BgL_carzd21575zd2_364))
							{	/* Module/prototype.scm 166 */
								if (NULLP(CDR(BgL_expanderzd2defzd2_9)))
									{	/* Module/prototype.scm 166 */
										return
											MAKE_PAIR(CNST_TABLE_REF(((long) 12)),
											BgL_expanderzd2defzd2_9);
									}
								else
									{	/* Module/prototype.scm 166 */
									BgL_tagzd21571zd2_361:
										return
											BGl_userzd2errorzd2zztools_errorz00
											(BGl_string1851z00zzmodule_prototypez00,
											BGl_string1855z00zzmodule_prototypez00,
											BgL_expanderzd2defzd2_9, BNIL);
									}
							}
						else
							{	/* Module/prototype.scm 166 */
								goto BgL_tagzd21571zd2_361;
							}
					}
				else
					{	/* Module/prototype.scm 166 */
						goto BgL_tagzd21571zd2_361;
					}
			}
		}
	}



/* parse-class-slot */
	obj_t BGl_parsezd2classzd2slotz00zzmodule_prototypez00(obj_t BgL_slotz00_10,
		obj_t BgL_locz00_11)
	{
		AN_OBJECT;
		{	/* Module/prototype.scm 175 */
			{	/* Module/prototype.scm 176 */
				obj_t BgL_locz00_369;

				BgL_locz00_369 =
					BGl_findzd2locationzf2locz20zztools_locationz00(BgL_slotz00_10,
					BgL_locz00_11);
				{
					obj_t BgL_idz00_374;

					obj_t BgL_attz00_375;

					obj_t BgL_idz00_371;

					obj_t BgL_attz00_372;

					if (SYMBOLP(BgL_slotz00_10))
						{	/* Module/prototype.scm 177 */
							{	/* Module/prototype.scm 179 */
								obj_t BgL_arg1776z00_398;

								{	/* Module/prototype.scm 179 */
									obj_t BgL_arg1777z00_399;

									obj_t BgL_arg1778z00_400;

									BgL_arg1777z00_399 = CNST_TABLE_REF(((long) 15));
									{	/* Module/prototype.scm 179 */
										obj_t BgL_arg1779z00_401;

										BgL_arg1779z00_401 =
											BGl_parsezd2idzd2zzast_identz00(BgL_slotz00_10,
											BgL_locz00_369);
										{	/* Module/prototype.scm 179 */
											obj_t BgL_list1783z00_403;

											BgL_list1783z00_403 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg1778z00_400 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg1779z00_401, BgL_list1783z00_403);
									}}
									BgL_arg1776z00_398 =
										MAKE_PAIR(BgL_arg1777z00_399, BgL_arg1778z00_400);
								}
								return
									BGl_epairifyz00zztools_miscz00(BgL_arg1776z00_398,
									BgL_slotz00_10);
							}
						}
					else
						{	/* Module/prototype.scm 177 */
							if (PAIRP(BgL_slotz00_10))
								{	/* Module/prototype.scm 177 */
									obj_t BgL_cdrzd21591zd2_381;

									BgL_cdrzd21591zd2_381 = CDR(BgL_slotz00_10);
									if ((CAR(BgL_slotz00_10) == CNST_TABLE_REF(((long) 16))))
										{	/* Module/prototype.scm 177 */
											if (PAIRP(BgL_cdrzd21591zd2_381))
												{	/* Module/prototype.scm 177 */
													obj_t BgL_carzd21594zd2_384;

													BgL_carzd21594zd2_384 = CAR(BgL_cdrzd21591zd2_381);
													if (SYMBOLP(BgL_carzd21594zd2_384))
														{	/* Module/prototype.scm 177 */
															BgL_idz00_371 = BgL_carzd21594zd2_384;
															BgL_attz00_372 = CDR(BgL_cdrzd21591zd2_381);
															if (BGl_correctzd2attributzf3z21zzmodule_prototypez00(BgL_attz00_372))
																{	/* Module/prototype.scm 182 */
																	obj_t BgL_arg1785z00_405;

																	{	/* Module/prototype.scm 182 */
																		obj_t BgL_arg1786z00_406;

																		obj_t BgL_arg1787z00_407;

																		BgL_arg1786z00_406 =
																			CNST_TABLE_REF(((long) 16));
																		{	/* Module/prototype.scm 182 */
																			obj_t BgL_arg1789z00_408;

																			obj_t BgL_arg1790z00_409;

																			{	/* Module/prototype.scm 182 */
																				obj_t BgL_arg1792z00_411;

																				obj_t BgL_arg1793z00_412;

																				BgL_arg1792z00_411 =
																					CNST_TABLE_REF(((long) 15));
																				{	/* Module/prototype.scm 182 */
																					obj_t BgL_arg1794z00_413;

																					BgL_arg1794z00_413 =
																						BGl_parsezd2idzd2zzast_identz00
																						(BgL_idz00_371, BgL_locz00_369);
																					{	/* Module/prototype.scm 182 */
																						obj_t BgL_list1796z00_415;

																						BgL_list1796z00_415 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg1793z00_412 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg1794z00_413,
																							BgL_list1796z00_415);
																				}}
																				BgL_arg1789z00_408 =
																					MAKE_PAIR(BgL_arg1792z00_411,
																					BgL_arg1793z00_412);
																			}
																			BgL_arg1790z00_409 =
																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																				(BgL_attz00_372, BNIL);
																			{	/* Module/prototype.scm 182 */
																				obj_t BgL_list1791z00_410;

																				BgL_list1791z00_410 =
																					MAKE_PAIR(BgL_arg1790z00_409, BNIL);
																				BgL_arg1787z00_407 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg1789z00_408,
																					BgL_list1791z00_410);
																		}}
																		BgL_arg1785z00_405 =
																			MAKE_PAIR(BgL_arg1786z00_406,
																			BgL_arg1787z00_407);
																	}
																	return
																		BGl_epairifyz00zztools_miscz00
																		(BgL_arg1785z00_405, BgL_slotz00_10);
																}
															else
																{	/* Module/prototype.scm 181 */
																	return BFALSE;
																}
														}
													else
														{	/* Module/prototype.scm 177 */
															obj_t BgL_carzd21603zd2_387;

															BgL_carzd21603zd2_387 = CAR(BgL_slotz00_10);
															if (SYMBOLP(BgL_carzd21603zd2_387))
																{	/* Module/prototype.scm 177 */
																	BgL_idz00_374 = BgL_carzd21603zd2_387;
																	BgL_attz00_375 = BgL_cdrzd21591zd2_381;
																BgL_tagzd21581zd2_376:
																	if (BGl_correctzd2attributzf3z21zzmodule_prototypez00(BgL_attz00_375))
																		{	/* Module/prototype.scm 186 */
																			obj_t BgL_arg1798z00_417;

																			{	/* Module/prototype.scm 186 */
																				obj_t BgL_arg1799z00_418;

																				obj_t BgL_arg1800z00_419;

																				{	/* Module/prototype.scm 186 */
																					obj_t BgL_arg1801z00_420;

																					obj_t BgL_arg1803z00_421;

																					BgL_arg1801z00_420 =
																						CNST_TABLE_REF(((long) 15));
																					{	/* Module/prototype.scm 186 */
																						obj_t BgL_arg1804z00_422;

																						BgL_arg1804z00_422 =
																							BGl_parsezd2idzd2zzast_identz00
																							(BgL_idz00_374, BgL_locz00_369);
																						{	/* Module/prototype.scm 186 */
																							obj_t BgL_list1806z00_424;

																							BgL_list1806z00_424 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg1803z00_421 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg1804z00_422,
																								BgL_list1806z00_424);
																					}}
																					BgL_arg1799z00_418 =
																						MAKE_PAIR(BgL_arg1801z00_420,
																						BgL_arg1803z00_421);
																				}
																				BgL_arg1800z00_419 =
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_attz00_375, BNIL);
																				BgL_arg1798z00_417 =
																					MAKE_PAIR(BgL_arg1799z00_418,
																					BgL_arg1800z00_419);
																			}
																			return
																				BGl_epairifyz00zztools_miscz00
																				(BgL_arg1798z00_417, BgL_slotz00_10);
																		}
																	else
																		{	/* Module/prototype.scm 185 */
																			return BFALSE;
																		}
																}
															else
																{	/* Module/prototype.scm 177 */
																	return BFALSE;
																}
														}
												}
											else
												{	/* Module/prototype.scm 177 */
													obj_t BgL_carzd21612zd2_390;

													BgL_carzd21612zd2_390 = CAR(BgL_slotz00_10);
													if (SYMBOLP(BgL_carzd21612zd2_390))
														{
															obj_t BgL_attz00_986;

															obj_t BgL_idz00_985;

															BgL_idz00_985 = BgL_carzd21612zd2_390;
															BgL_attz00_986 = BgL_cdrzd21591zd2_381;
															BgL_attz00_375 = BgL_attz00_986;
															BgL_idz00_374 = BgL_idz00_985;
															goto BgL_tagzd21581zd2_376;
														}
													else
														{	/* Module/prototype.scm 177 */
															return BFALSE;
														}
												}
										}
									else
										{	/* Module/prototype.scm 177 */
											obj_t BgL_carzd21621zd2_393;

											BgL_carzd21621zd2_393 = CAR(BgL_slotz00_10);
											if (SYMBOLP(BgL_carzd21621zd2_393))
												{
													obj_t BgL_attz00_991;

													obj_t BgL_idz00_990;

													BgL_idz00_990 = BgL_carzd21621zd2_393;
													BgL_attz00_991 = BgL_cdrzd21591zd2_381;
													BgL_attz00_375 = BgL_attz00_991;
													BgL_idz00_374 = BgL_idz00_990;
													goto BgL_tagzd21581zd2_376;
												}
											else
												{	/* Module/prototype.scm 177 */
													return BFALSE;
												}
										}
								}
							else
								{	/* Module/prototype.scm 177 */
									return BFALSE;
								}
						}
				}
			}
		}
	}



/* correct-attribut? */
	bool_t BGl_correctzd2attributzf3z21zzmodule_prototypez00(obj_t
		BgL_attributz00_12)
	{
		AN_OBJECT;
		{	/* Module/prototype.scm 194 */
			{
				obj_t BgL_attributz00_426;

				BgL_attributz00_426 = BgL_attributz00_12;
			BgL_zc3anonymousza31807ze3z83_427:
				if (NULLP(BgL_attributz00_426))
					{	/* Module/prototype.scm 197 */
						return ((bool_t) 1);
					}
				else
					{	/* Module/prototype.scm 197 */
						if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR
									(BgL_attributz00_426), CNST_TABLE_REF(((long) 17)))))
							{
								obj_t BgL_attributz00_999;

								BgL_attributz00_999 = CDR(BgL_attributz00_426);
								BgL_attributz00_426 = BgL_attributz00_999;
								goto BgL_zc3anonymousza31807ze3z83_427;
							}
						else
							{

								{	/* Module/prototype.scm 202 */
									obj_t BgL_ezd21635zd2_436;

									BgL_ezd21635zd2_436 = CAR(BgL_attributz00_426);
									if (PAIRP(BgL_ezd21635zd2_436))
										{	/* Module/prototype.scm 202 */
											obj_t BgL_cdrzd21637zd2_438;

											BgL_cdrzd21637zd2_438 = CDR(BgL_ezd21635zd2_436);
											if (
												(CAR(BgL_ezd21635zd2_436) ==
													CNST_TABLE_REF(((long) 18))))
												{	/* Module/prototype.scm 202 */
													if (PAIRP(BgL_cdrzd21637zd2_438))
														{	/* Module/prototype.scm 202 */
															if (NULLP(CDR(BgL_cdrzd21637zd2_438)))
																{	/* Module/prototype.scm 202 */
																	{
																		obj_t BgL_attributz00_1014;

																		BgL_attributz00_1014 =
																			CDR(BgL_attributz00_426);
																		BgL_attributz00_426 = BgL_attributz00_1014;
																		goto BgL_zc3anonymousza31807ze3z83_427;
																	}
																}
															else
																{	/* Module/prototype.scm 202 */
																	return ((bool_t) 0);
																}
														}
													else
														{	/* Module/prototype.scm 202 */
															return ((bool_t) 0);
														}
												}
											else
												{	/* Module/prototype.scm 202 */
													if (
														(CAR(BgL_ezd21635zd2_436) ==
															CNST_TABLE_REF(((long) 19))))
														{	/* Module/prototype.scm 202 */
															if (PAIRP(BgL_cdrzd21637zd2_438))
																{	/* Module/prototype.scm 202 */
																	if (NULLP(CDR(BgL_cdrzd21637zd2_438)))
																		{	/* Module/prototype.scm 202 */
																			{
																				obj_t BgL_attributz00_1025;

																				BgL_attributz00_1025 =
																					CDR(BgL_attributz00_426);
																				BgL_attributz00_426 =
																					BgL_attributz00_1025;
																				goto BgL_zc3anonymousza31807ze3z83_427;
																			}
																		}
																	else
																		{	/* Module/prototype.scm 202 */
																			return ((bool_t) 0);
																		}
																}
															else
																{	/* Module/prototype.scm 202 */
																	return ((bool_t) 0);
																}
														}
													else
														{	/* Module/prototype.scm 202 */
															obj_t BgL_cdrzd21645zd2_448;

															BgL_cdrzd21645zd2_448 = CDR(BgL_ezd21635zd2_436);
															if (
																(CAR(BgL_ezd21635zd2_436) ==
																	CNST_TABLE_REF(((long) 20))))
																{	/* Module/prototype.scm 202 */
																	if (PAIRP(BgL_cdrzd21645zd2_448))
																		{	/* Module/prototype.scm 202 */
																			if (NULLP(CDR(BgL_cdrzd21645zd2_448)))
																				{	/* Module/prototype.scm 202 */
																					{
																						obj_t BgL_attributz00_1037;

																						BgL_attributz00_1037 =
																							CDR(BgL_attributz00_426);
																						BgL_attributz00_426 =
																							BgL_attributz00_1037;
																						goto
																							BgL_zc3anonymousza31807ze3z83_427;
																					}
																				}
																			else
																				{	/* Module/prototype.scm 202 */
																					return ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Module/prototype.scm 202 */
																			return ((bool_t) 0);
																		}
																}
															else
																{	/* Module/prototype.scm 202 */
																	if (
																		(CAR(BgL_ezd21635zd2_436) ==
																			CNST_TABLE_REF(((long) 21))))
																		{	/* Module/prototype.scm 202 */
																			if (PAIRP(BgL_cdrzd21645zd2_448))
																				{	/* Module/prototype.scm 202 */
																					if (NULLP(CDR(BgL_cdrzd21645zd2_448)))
																						{	/* Module/prototype.scm 202 */
																							{
																								obj_t BgL_attributz00_1048;

																								BgL_attributz00_1048 =
																									CDR(BgL_attributz00_426);
																								BgL_attributz00_426 =
																									BgL_attributz00_1048;
																								goto
																									BgL_zc3anonymousza31807ze3z83_427;
																							}
																						}
																					else
																						{	/* Module/prototype.scm 202 */
																							return ((bool_t) 0);
																						}
																				}
																			else
																				{	/* Module/prototype.scm 202 */
																					return ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Module/prototype.scm 202 */
																			return ((bool_t) 0);
																		}
																}
														}
												}
										}
									else
										{	/* Module/prototype.scm 202 */
											return ((bool_t) 0);
										}
								}
							}
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_prototypez00()
	{
		AN_OBJECT;
		{	/* Module/prototype.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_prototypez00()
	{
		AN_OBJECT;
		{	/* Module/prototype.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_prototypez00()
	{
		AN_OBJECT;
		{	/* Module/prototype.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string1856z00zzmodule_prototypez00));
			BGl_modulezd2initializa7ationz75zztools_dssslz00(((long) 315398661),
				BSTRING_TO_STRING(BGl_string1856z00zzmodule_prototypez00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string1856z00zzmodule_prototypez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string1856z00zzmodule_prototypez00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string1856z00zzmodule_prototypez00));
			BGl_modulezd2initializa7ationz75zzmodule_evalz00(((long) 168261208),
				BSTRING_TO_STRING(BGl_string1856z00zzmodule_prototypez00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string1856z00zzmodule_prototypez00));
			return
				BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string1856z00zzmodule_prototypez00));
		}
	}

#ifdef __cplusplus
}
#endif
