/*===========================================================================*/
/*   (Eval/evutils.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Eval/evutils.scm -indent -o objs/obj_u/Eval/evutils.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_parsezd2formalzd2identz00zz__evutilsz00(obj_t,
		obj_t);
	extern bool_t BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__evutilsz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_argszd2ze3listz31zz__evutilsz00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__evutilsz00();
	BGL_EXPORTED_DECL obj_t BGl_bindingszd2ze3listz31zz__evutilsz00(obj_t);
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_errorzf2sourcezf2zz__errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__evutilsz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__evutilsz00();
	static obj_t BGl_symbol2201z00zz__evutilsz00 = BUNSPEC;
	static obj_t BGl_symbol2204z00zz__evutilsz00 = BUNSPEC;
	static obj_t BGl_symbol2207z00zz__evutilsz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__evutilsz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__macroz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evenvz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__typez00(long, char *);
	extern obj_t c_substring(obj_t, long, long);
	extern obj_t string_to_symbol(char *);
	extern obj_t BGl_errorzf2sourcezd2locationz20zz__errorz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__argszd2ze3listz31zz__evutilsz00(obj_t, obj_t);
	static obj_t BGl__parsezd2formalzd2identz00zz__evutilsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__bindingszd2ze3listz31zz__evutilsz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__evutilsz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bindingszd2ze3listzd2envze3zz__evutilsz00,
		BgL_bgl__bindingsza7d2za7e3l2211z00,
		BGl__bindingszd2ze3listz31zz__evutilsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_argszd2ze3listzd2envze3zz__evutilsz00,
		BgL_bgl__argsza7d2za7e3listza72212za7, BGl__argszd2ze3listz31zz__evutilsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2200z00zz__evutilsz00,
		BgL_bgl_string2200za700za7za7_2213za7, "", 0);
	      DEFINE_STRING(BGl_string2202z00zz__evutilsz00,
		BgL_bgl_string2202za700za7za7_2214za7, "dsssl", 5);
	      DEFINE_STRING(BGl_string2203z00zz__evutilsz00,
		BgL_bgl_string2203za700za7za7_2215za7, "Illegal identifier type", 23);
	      DEFINE_STRING(BGl_string2205z00zz__evutilsz00,
		BgL_bgl_string2205za700za7za7_2216za7, "args->list", 10);
	      DEFINE_STRING(BGl_string2206z00zz__evutilsz00,
		BgL_bgl_string2206za700za7za7_2217za7, "Illegal args list", 17);
	      DEFINE_STRING(BGl_string2208z00zz__evutilsz00,
		BgL_bgl_string2208za700za7za7_2218za7, "bindings->list", 14);
	      DEFINE_STRING(BGl_string2198z00zz__evutilsz00,
		BgL_bgl_string2198za700za7za7_2219za7, "parse-formal-ident", 18);
	      DEFINE_STRING(BGl_string2210z00zz__evutilsz00,
		BgL_bgl_string2210za700za7za7_2220za7, "__evutils", 9);
	      DEFINE_STRING(BGl_string2209z00zz__evutilsz00,
		BgL_bgl_string2209za700za7za7_2221za7, "Illegal bindings list", 21);
	      DEFINE_STRING(BGl_string2199z00zz__evutilsz00,
		BgL_bgl_string2199za700za7za7_2222za7, "Illegal empty identifier type", 29);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_parsezd2formalzd2identzd2envzd2zz__evutilsz00,
		BgL_bgl__parseza7d2formalza72223z00,
		BGl__parsezd2formalzd2identz00zz__evutilsz00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__evutilsz00(long
		BgL_checksumz00_1514, char *BgL_fromz00_1515)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__evutilsz00))
				{
					BGl_requirezd2initializa7ationz75zz__evutilsz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__evutilsz00();
					BGl_importedzd2moduleszd2initz00zz__evutilsz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__evutilsz00()
	{
		AN_OBJECT;
		{	/* Eval/evutils.scm 15 */
			BGl_symbol2201z00zz__evutilsz00 =
				bstring_to_symbol(BGl_string2202z00zz__evutilsz00);
			BGl_symbol2204z00zz__evutilsz00 =
				bstring_to_symbol(BGl_string2205z00zz__evutilsz00);
			return (BGl_symbol2207z00zz__evutilsz00 =
				bstring_to_symbol(BGl_string2208z00zz__evutilsz00), BUNSPEC);
		}
	}



/* parse-formal-ident */
	BGL_EXPORTED_DEF obj_t BGl_parsezd2formalzd2identz00zz__evutilsz00(obj_t
		BgL_identz00_1, obj_t BgL_locz00_2)
	{
		AN_OBJECT;
		{	/* Eval/evutils.scm 56 */
			{
				obj_t BgL_identz00_782;

				if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(BgL_identz00_1))
					{	/* Eval/evutils.scm 83 */
						return
							MAKE_PAIR(BGl_gensymz00zz__r4_symbols_6_4z00
							(BGl_symbol2201z00zz__evutilsz00), BNIL);
					}
				else
					{	/* Eval/evutils.scm 85 */
						bool_t BgL_testz00_1528;

						if (PAIRP(BgL_identz00_1))
							{	/* Eval/evutils.scm 85 */
								obj_t BgL_auxz00_1531;

								BgL_auxz00_1531 = CAR(BgL_identz00_1);
								BgL_testz00_1528 = SYMBOLP(BgL_auxz00_1531);
							}
						else
							{	/* Eval/evutils.scm 85 */
								BgL_testz00_1528 = ((bool_t) 0);
							}
						if (BgL_testz00_1528)
							{	/* Eval/evutils.scm 85 */
								return MAKE_PAIR(BgL_identz00_1, BNIL);
							}
						else
							{	/* Eval/evutils.scm 85 */
								if (SYMBOLP(BgL_identz00_1))
									{	/* Eval/evutils.scm 87 */
										BgL_identz00_782 = BgL_identz00_1;
										{	/* Eval/evutils.scm 59 */
											obj_t BgL_strz00_784;

											BgL_strz00_784 = SYMBOL_TO_STRING(BgL_identz00_782);
											{	/* Eval/evutils.scm 59 */
												long BgL_lenz00_785;

												BgL_lenz00_785 = STRING_LENGTH(BgL_strz00_784);
												{	/* Eval/evutils.scm 60 */

													{
														long BgL_iz00_787;

														BgL_iz00_787 = ((long) 0);
													BgL_zc3anonymousza31898ze3z83_788:
														if ((BgL_iz00_787 == BgL_lenz00_785))
															{	/* Eval/evutils.scm 63 */
																return MAKE_PAIR(BgL_identz00_782, BNIL);
															}
														else
															{	/* Eval/evutils.scm 65 */
																bool_t BgL_testz00_1542;

																if (
																	(STRING_REF(BgL_strz00_784,
																			BgL_iz00_787) == ((unsigned char) ':')))
																	{	/* Eval/evutils.scm 65 */
																		if (
																			(BgL_iz00_787 <
																				(BgL_lenz00_785 - ((long) 1))))
																			{	/* Eval/evutils.scm 66 */
																				BgL_testz00_1542 =
																					(STRING_REF(BgL_strz00_784,
																						(BgL_iz00_787 + ((long) 1))) ==
																					((unsigned char) ':'));
																			}
																		else
																			{	/* Eval/evutils.scm 66 */
																				BgL_testz00_1542 = ((bool_t) 0);
																			}
																	}
																else
																	{	/* Eval/evutils.scm 65 */
																		BgL_testz00_1542 = ((bool_t) 0);
																	}
																if (BgL_testz00_1542)
																	{	/* Eval/evutils.scm 65 */
																		if (
																			(BgL_iz00_787 ==
																				(BgL_lenz00_785 - ((long) 2))))
																			{	/* Eval/evutils.scm 69 */
																				return
																					BGl_errorzf2sourcezd2locationz20zz__errorz00
																					(BGl_string2198z00zz__evutilsz00,
																					BGl_string2199z00zz__evutilsz00,
																					BgL_identz00_782, BgL_locz00_2);
																			}
																		else
																			{	/* Eval/evutils.scm 69 */
																				if ((BgL_iz00_787 == ((long) 0)))
																					{	/* Eval/evutils.scm 74 */
																						return
																							MAKE_PAIR(string_to_symbol
																							(BSTRING_TO_STRING
																								(BGl_string2200z00zz__evutilsz00)),
																							BgL_identz00_782);
																					}
																				else
																					{	/* Eval/evutils.scm 77 */
																						obj_t BgL_arg1904z00_794;

																						obj_t BgL_arg1905z00_795;

																						{	/* Eval/evutils.scm 77 */
																							obj_t BgL_arg1906z00_796;

																							BgL_arg1906z00_796 =
																								c_substring(BgL_strz00_784,
																								((long) 0), BgL_iz00_787);
																							BgL_arg1904z00_794 =
																								string_to_symbol
																								(BSTRING_TO_STRING
																								(BgL_arg1906z00_796));
																						}
																						{	/* Eval/evutils.scm 78 */
																							obj_t BgL_arg1907z00_797;

																							BgL_arg1907z00_797 =
																								c_substring(BgL_strz00_784,
																								(BgL_iz00_787 + ((long) 2)),
																								BgL_lenz00_785);
																							BgL_arg1905z00_795 =
																								string_to_symbol
																								(BSTRING_TO_STRING
																								(BgL_arg1907z00_797));
																						}
																						return
																							MAKE_PAIR(BgL_arg1904z00_794,
																							BgL_arg1905z00_795);
																					}
																			}
																	}
																else
																	{
																		long BgL_iz00_1569;

																		BgL_iz00_1569 = (BgL_iz00_787 + ((long) 1));
																		BgL_iz00_787 = BgL_iz00_1569;
																		goto BgL_zc3anonymousza31898ze3z83_788;
																	}
															}
													}
												}
											}
										}
									}
								else
									{	/* Eval/evutils.scm 87 */
										return
											BGl_errorzf2sourcezd2locationz20zz__errorz00
											(BGl_string2198z00zz__evutilsz00,
											BGl_string2203z00zz__evutilsz00, BgL_identz00_1,
											BgL_locz00_2);
									}
							}
					}
			}
		}
	}



/* _parse-formal-ident */
	obj_t BGl__parsezd2formalzd2identz00zz__evutilsz00(obj_t BgL_envz00_1507,
		obj_t BgL_identz00_1508, obj_t BgL_locz00_1509)
	{
		AN_OBJECT;
		{	/* Eval/evutils.scm 56 */
			return
				BGl_parsezd2formalzd2identz00zz__evutilsz00(BgL_identz00_1508,
				BgL_locz00_1509);
		}
	}



/* args->list */
	BGL_EXPORTED_DEF obj_t BGl_argszd2ze3listz31zz__evutilsz00(obj_t
		BgL_argsz00_3)
	{
		AN_OBJECT;
		{	/* Eval/evutils.scm 98 */
			if (NULLP(BgL_argsz00_3))
				{	/* Eval/evutils.scm 100 */
					return BNIL;
				}
			else
				{	/* Eval/evutils.scm 100 */
					if (SYMBOLP(BgL_argsz00_3))
						{	/* Eval/evutils.scm 103 */
							obj_t BgL_list1921z00_811;

							BgL_list1921z00_811 = MAKE_PAIR(BgL_argsz00_3, BNIL);
							return BgL_list1921z00_811;
						}
					else
						{	/* Eval/evutils.scm 102 */
							if (PAIRP(BgL_argsz00_3))
								{	/* Eval/evutils.scm 104 */
									return
										MAKE_PAIR(CAR(BgL_argsz00_3),
										BGl_argszd2ze3listz31zz__evutilsz00(CDR(BgL_argsz00_3)));
								}
							else
								{	/* Eval/evutils.scm 104 */
									return
										BGl_errorzf2sourcezf2zz__errorz00
										(BGl_symbol2204z00zz__evutilsz00,
										BGl_string2206z00zz__evutilsz00, BgL_argsz00_3,
										BgL_argsz00_3);
								}
						}
				}
		}
	}



/* _args->list */
	obj_t BGl__argszd2ze3listz31zz__evutilsz00(obj_t BgL_envz00_1510,
		obj_t BgL_argsz00_1511)
	{
		AN_OBJECT;
		{	/* Eval/evutils.scm 98 */
			return BGl_argszd2ze3listz31zz__evutilsz00(BgL_argsz00_1511);
		}
	}



/* bindings->list */
	BGL_EXPORTED_DEF obj_t BGl_bindingszd2ze3listz31zz__evutilsz00(obj_t
		BgL_bindingsz00_4)
	{
		AN_OBJECT;
		{	/* Eval/evutils.scm 112 */
			if (NULLP(BgL_bindingsz00_4))
				{	/* Eval/evutils.scm 114 */
					return BNIL;
				}
			else
				{	/* Eval/evutils.scm 114 */
					if (PAIRP(BgL_bindingsz00_4))
						{	/* Eval/evutils.scm 118 */
							bool_t BgL_testz00_1590;

							{	/* Eval/evutils.scm 118 */
								obj_t BgL_auxz00_1591;

								BgL_auxz00_1591 = CAR(BgL_bindingsz00_4);
								BgL_testz00_1590 = SYMBOLP(BgL_auxz00_1591);
							}
							if (BgL_testz00_1590)
								{	/* Eval/evutils.scm 118 */
									return
										MAKE_PAIR(BgL_bindingsz00_4,
										BGl_bindingszd2ze3listz31zz__evutilsz00(CDR
											(BgL_bindingsz00_4)));
								}
							else
								{	/* Eval/evutils.scm 120 */
									bool_t BgL_testz00_1597;

									{	/* Eval/evutils.scm 120 */
										obj_t BgL_auxz00_1598;

										BgL_auxz00_1598 = CAR(BgL_bindingsz00_4);
										BgL_testz00_1597 = PAIRP(BgL_auxz00_1598);
									}
									if (BgL_testz00_1597)
										{	/* Eval/evutils.scm 120 */
											return
												MAKE_PAIR(CAR(BgL_bindingsz00_4),
												BGl_bindingszd2ze3listz31zz__evutilsz00(CDR
													(BgL_bindingsz00_4)));
										}
									else
										{	/* Eval/evutils.scm 120 */
											return
												BGl_errorzf2sourcezf2zz__errorz00
												(BGl_symbol2207z00zz__evutilsz00,
												BGl_string2209z00zz__evutilsz00, BgL_bindingsz00_4,
												BgL_bindingsz00_4);
										}
								}
						}
					else
						{	/* Eval/evutils.scm 116 */
							return
								BGl_errorzf2sourcezf2zz__errorz00
								(BGl_symbol2207z00zz__evutilsz00,
								BGl_string2209z00zz__evutilsz00, BgL_bindingsz00_4,
								BgL_bindingsz00_4);
						}
				}
		}
	}



/* _bindings->list */
	obj_t BGl__bindingszd2ze3listz31zz__evutilsz00(obj_t BgL_envz00_1512,
		obj_t BgL_bindingsz00_1513)
	{
		AN_OBJECT;
		{	/* Eval/evutils.scm 112 */
			return BGl_bindingszd2ze3listz31zz__evutilsz00(BgL_bindingsz00_1513);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__evutilsz00()
	{
		AN_OBJECT;
		{	/* Eval/evutils.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__evutilsz00()
	{
		AN_OBJECT;
		{	/* Eval/evutils.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__evutilsz00()
	{
		AN_OBJECT;
		{	/* Eval/evutils.scm 15 */
			BGl_modulezd2initializa7ationz75zz__typez00(((long) 70840631),
				BSTRING_TO_STRING(BGl_string2210z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2210z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 36880833),
				BSTRING_TO_STRING(BGl_string2210z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 89651882),
				BSTRING_TO_STRING(BGl_string2210z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 333500458),
				BSTRING_TO_STRING(BGl_string2210z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string2210z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 318625392),
				BSTRING_TO_STRING(BGl_string2210z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 393249273),
				BSTRING_TO_STRING(BGl_string2210z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2210z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2210z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2210z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__dssslz00(((long) 319567328),
				BSTRING_TO_STRING(BGl_string2210z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 271566986),
				BSTRING_TO_STRING(BGl_string2210z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					234579753), BSTRING_TO_STRING(BGl_string2210z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					170547433), BSTRING_TO_STRING(BGl_string2210z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					400650732), BSTRING_TO_STRING(BGl_string2210z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					459721289), BSTRING_TO_STRING(BGl_string2210z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 123701502),
				BSTRING_TO_STRING(BGl_string2210z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 504082187),
				BSTRING_TO_STRING(BGl_string2210z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 497320869),
				BSTRING_TO_STRING(BGl_string2210z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					485908420), BSTRING_TO_STRING(BGl_string2210z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 28131980),
				BSTRING_TO_STRING(BGl_string2210z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					159305184), BSTRING_TO_STRING(BGl_string2210z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 236383033),
				BSTRING_TO_STRING(BGl_string2210z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 466504979),
				BSTRING_TO_STRING(BGl_string2210z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					164543289), BSTRING_TO_STRING(BGl_string2210z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__evenvz00(((long) 535170906),
				BSTRING_TO_STRING(BGl_string2210z00zz__evutilsz00));
			return BGl_modulezd2initializa7ationz75zz__macroz00(((long) 508636713),
				BSTRING_TO_STRING(BGl_string2210z00zz__evutilsz00));
		}
	}

#ifdef __cplusplus
}
#endif
