/*===========================================================================*/
/*   (Expand/if.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Expand/if.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_expandzd2orzf2boolz20zzexpand_ifz00(obj_t);
	extern obj_t BGl_lexicalzd2stackzd2zzexpand_epsz00();
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzexpand_ifz00 = BUNSPEC;
	static obj_t BGl_findzd2casezd2expz00zzexpand_ifz00(obj_t);
	static obj_t BGl_valzd2ze3constantz31zzexpand_ifz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzexpand_ifz00();
	static obj_t BGl__expandzd2testzd2zzexpand_ifz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	static obj_t BGl__expandzd2andzd2zzexpand_ifz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__expandzd2notzd2zzexpand_ifz00(obj_t, obj_t, obj_t);
	static obj_t BGl_loopz72z72z00zzexpand_ifz00(obj_t, obj_t);
	static obj_t BGl__expandzd2ifzd2zzexpand_ifz00(obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzexpand_ifz00();
	static obj_t BGl_getzd2newzd2testzd2namezd2zzexpand_ifz00(obj_t);
	static obj_t BGl__expandzd2orzd2zzexpand_ifz00(obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzexpand_ifz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static bool_t BGl_iszd2azd2validzd2constantzf3z21zzexpand_ifz00(obj_t);
	extern obj_t BGl_epairifyzd2reczd2zztools_miscz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzexpand_ifz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzexpand_ifz00();
	BGL_EXPORTED_DECL obj_t BGl_expandzd2andzd2zzexpand_ifz00(obj_t, obj_t);
	static obj_t BGl_expandzd2andzf2boolz20zzexpand_ifz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2notzd2zzexpand_ifz00(obj_t, obj_t);
	static obj_t BGl_newzd2ezd2zzexpand_ifz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_loopz72z72z72z72zzexpand_ifz00(obj_t, obj_t);
	static obj_t BGl_makezd2clausezd2zzexpand_ifz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_za2nilza2z00zz__evalz00;
	static bool_t BGl_za2casezd2enabledzf3za2z21zzexpand_ifz00;
	static obj_t BGl_loopz00zzexpand_ifz00(obj_t, obj_t);
	extern obj_t BGl_replacez12z12zztools_miscz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2ifzd2zzexpand_ifz00(obj_t, obj_t);
	static obj_t BGl_loopz72z72zzexpand_ifz00(obj_t, obj_t);
	static obj_t BGl_iszd2casezf3z21zzexpand_ifz00(obj_t);
	static obj_t BGl_expandzd2ifzd2withz00zzexpand_ifz00(obj_t, obj_t, obj_t,
		bool_t);
	static obj_t BGl_expandzd2testzd2zzexpand_ifz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2orzd2zzexpand_ifz00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_ifzd2ze3casez12z23zzexpand_ifz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzexpand_ifz00();
	static obj_t BGl_methodzd2initzd2zzexpand_ifz00();
	static obj_t __cnst[16];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2orzd2envz00zzexpand_ifz00,
		BgL_bgl__expandza7d2orza7d2za72038za7, BGl__expandzd2orzd2zzexpand_ifz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2ifzd2envz00zzexpand_ifz00,
		BgL_bgl__expandza7d2ifza7d2za72039za7, BGl__expandzd2ifzd2zzexpand_ifz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2notzd2envz00zzexpand_ifz00,
		BgL_bgl__expandza7d2notza7d22040z00, BGl__expandzd2notzd2zzexpand_ifz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2andzd2envz00zzexpand_ifz00,
		BgL_bgl__expandza7d2andza7d22041z00, BGl__expandzd2andzd2zzexpand_ifz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2022z00zzexpand_ifz00,
		BgL_bgl_string2022za700za7za7e2042za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string2023z00zzexpand_ifz00,
		BgL_bgl_string2023za700za7za7e2043za7, "Illegal `if' form", 17);
	      DEFINE_STRING(BGl_string2024z00zzexpand_ifz00,
		BgL_bgl_string2024za700za7za7e2044za7, "_", 1);
	      DEFINE_STRING(BGl_string2025z00zzexpand_ifz00,
		BgL_bgl_string2025za700za7za7e2045za7, "test_", 5);
	      DEFINE_STRING(BGl_string2026z00zzexpand_ifz00,
		BgL_bgl_string2026za700za7za7e2046za7, "or", 2);
	      DEFINE_STRING(BGl_string2027z00zzexpand_ifz00,
		BgL_bgl_string2027za700za7za7e2047za7, "and", 3);
	      DEFINE_STRING(BGl_string2028z00zzexpand_ifz00,
		BgL_bgl_string2028za700za7za7e2048za7, "Illegal `not' form", 18);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_expandzd2testzd2envz00zzexpand_ifz00,
		BgL_bgl__expandza7d2testza7d2049z00, BGl__expandzd2testzd2zzexpand_ifz00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2030z00zzexpand_ifz00,
		BgL_bgl_string2030za700za7za7e2050za7,
		"non-user else quote memq eqv? char=? =fx eq? c-eq? case and or null? let test if ",
		81);
	      DEFINE_STRING(BGl_string2029z00zzexpand_ifz00,
		BgL_bgl_string2029za700za7za7e2051za7, "expand_if", 9);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzexpand_ifz00(long
		BgL_checksumz00_1063, char *BgL_fromz00_1064)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzexpand_ifz00))
				{
					BGl_requirezd2initializa7ationz75zzexpand_ifz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzexpand_ifz00();
					BGl_cnstzd2initzd2zzexpand_ifz00();
					BGl_importedzd2moduleszd2initz00zzexpand_ifz00();
					BGl_toplevelzd2initzd2zzexpand_ifz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzexpand_ifz00()
	{
		AN_OBJECT;
		{	/* Expand/if.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"expand_if");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "expand_if");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"expand_if");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "expand_if");
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "expand_if");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzexpand_ifz00()
	{
		AN_OBJECT;
		{	/* Expand/if.scm 15 */
			{	/* Expand/if.scm 15 */
				obj_t BgL_cportz00_1055;

				BgL_cportz00_1055 =
					bgl_open_input_string(BGl_string2030z00zzexpand_ifz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1056;

					BgL_iz00_1056 = ((long) 15);
				BgL_loopz00_1057:
					if ((BgL_iz00_1056 == ((long) -1)))
						{	/* Expand/if.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Expand/if.scm 15 */
							{	/* Expand/if.scm 15 */
								obj_t BgL_arg2037z00_1059;

								{	/* Expand/if.scm 15 */

									{	/* Expand/if.scm 15 */
										obj_t BgL_locationz00_1061;

										BgL_locationz00_1061 = BBOOL(((bool_t) 0));
										{	/* Expand/if.scm 15 */

											BgL_arg2037z00_1059 =
												BGl_readz00zz__readerz00(BgL_cportz00_1055,
												BgL_locationz00_1061);
										}
									}
								}
								{	/* Expand/if.scm 15 */
									int BgL_auxz00_1083;

									BgL_auxz00_1083 = (int) (BgL_iz00_1056);
									CNST_TABLE_SET(BgL_auxz00_1083, BgL_arg2037z00_1059);
							}}
							{	/* Expand/if.scm 15 */
								int BgL_auxz00_1062;

								BgL_auxz00_1062 = (int) ((BgL_iz00_1056 - ((long) 1)));
								{
									long BgL_iz00_1088;

									BgL_iz00_1088 = (long) (BgL_auxz00_1062);
									BgL_iz00_1056 = BgL_iz00_1088;
									goto BgL_loopz00_1057;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzexpand_ifz00()
	{
		AN_OBJECT;
		{	/* Expand/if.scm 15 */
			return (BGl_za2casezd2enabledzf3za2z21zzexpand_ifz00 =
				((bool_t) 1), BUNSPEC);
		}
	}



/* expand-or/bool */
	obj_t BGl_expandzd2orzf2boolz20zzexpand_ifz00(obj_t BgL_expz00_1)
	{
		AN_OBJECT;
		{	/* Expand/if.scm 28 */
			return
				BGl_replacez12z12zztools_miscz00(BgL_expz00_1,
				BGl_loopz72z72z72z72zzexpand_ifz00(BgL_expz00_1, CDR(BgL_expz00_1)));
		}
	}



/* loop''' */
	obj_t BGl_loopz72z72z72z72zzexpand_ifz00(obj_t BgL_expz00_1054,
		obj_t BgL_sorz00_113)
	{
		AN_OBJECT;
		{	/* Expand/if.scm 29 */
			if (NULLP(BgL_sorz00_113))
				{	/* Expand/if.scm 31 */
					return BFALSE;
				}
			else
				{	/* Expand/if.scm 31 */
					if (PAIRP(BgL_sorz00_113))
						{	/* Expand/if.scm 33 */
							if (NULLP(CDR(BgL_sorz00_113)))
								{	/* Expand/if.scm 35 */
									return CAR(BgL_sorz00_113);
								}
							else
								{	/* Expand/if.scm 38 */
									obj_t BgL_resz00_118;

									{	/* Expand/if.scm 38 */
										obj_t BgL_arg1536z00_125;

										obj_t BgL_arg1537z00_126;

										BgL_arg1536z00_125 = CNST_TABLE_REF(((long) 0));
										{	/* Expand/if.scm 38 */
											obj_t BgL_arg1538z00_127;

											obj_t BgL_arg1539z00_128;

											BgL_arg1538z00_127 = CAR(BgL_sorz00_113);
											BgL_arg1539z00_128 =
												BGl_loopz72z72z72z72zzexpand_ifz00(BgL_expz00_1054,
												CDR(BgL_sorz00_113));
											{	/* Expand/if.scm 38 */
												obj_t BgL_list1541z00_130;

												{	/* Expand/if.scm 38 */
													obj_t BgL_arg1542z00_131;

													{	/* Expand/if.scm 38 */
														obj_t BgL_arg1543z00_132;

														BgL_arg1543z00_132 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg1542z00_131 =
															MAKE_PAIR(BgL_arg1539z00_128, BgL_arg1543z00_132);
													}
													BgL_list1541z00_130 =
														MAKE_PAIR(BTRUE, BgL_arg1542z00_131);
												}
												BgL_arg1537z00_126 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1538z00_127, BgL_list1541z00_130);
										}}
										BgL_resz00_118 =
											MAKE_PAIR(BgL_arg1536z00_125, BgL_arg1537z00_126);
									}
									{	/* Expand/if.scm 40 */
										bool_t BgL_testz00_1110;

										{	/* Expand/if.scm 40 */
											obj_t BgL_auxz00_1111;

											BgL_auxz00_1111 = CAR(BgL_sorz00_113);
											BgL_testz00_1110 = EXTENDED_PAIRP(BgL_auxz00_1111);
										}
										if (BgL_testz00_1110)
											{	/* Expand/if.scm 41 */
												obj_t BgL_arg1531z00_120;

												obj_t BgL_arg1532z00_121;

												obj_t BgL_arg1533z00_122;

												BgL_arg1531z00_120 = CAR(BgL_resz00_118);
												BgL_arg1532z00_121 = CDR(BgL_resz00_118);
												BgL_arg1533z00_122 = CER(CAR(BgL_sorz00_113));
												{	/* Expand/if.scm 41 */
													obj_t BgL_res2013z00_701;

													BgL_res2013z00_701 =
														MAKE_EXTENDED_PAIR(BgL_arg1531z00_120,
														BgL_arg1532z00_121, BgL_arg1533z00_122);
													return BgL_res2013z00_701;
												}
											}
										else
											{	/* Expand/if.scm 40 */
												return BgL_resz00_118;
											}
									}
								}
						}
					else
						{	/* Expand/if.scm 33 */
							return
								BGl_errorz00zz__errorz00(BFALSE,
								BGl_string2022z00zzexpand_ifz00, BgL_expz00_1054);
						}
				}
		}
	}



/* expand-and/bool */
	obj_t BGl_expandzd2andzf2boolz20zzexpand_ifz00(obj_t BgL_expz00_2)
	{
		AN_OBJECT;
		{	/* Expand/if.scm 49 */
			return
				BGl_replacez12z12zztools_miscz00(BgL_expz00_2,
				BGl_loopz72z72z00zzexpand_ifz00(BgL_expz00_2, CDR(BgL_expz00_2)));
		}
	}



/* loop'' */
	obj_t BGl_loopz72z72z00zzexpand_ifz00(obj_t BgL_expz00_1053,
		obj_t BgL_sandz00_139)
	{
		AN_OBJECT;
		{	/* Expand/if.scm 50 */
			if (NULLP(BgL_sandz00_139))
				{	/* Expand/if.scm 52 */
					return BTRUE;
				}
			else
				{	/* Expand/if.scm 52 */
					if (PAIRP(BgL_sandz00_139))
						{	/* Expand/if.scm 54 */
							if (NULLP(CDR(BgL_sandz00_139)))
								{	/* Expand/if.scm 56 */
									return CAR(BgL_sandz00_139);
								}
							else
								{	/* Expand/if.scm 59 */
									obj_t BgL_resz00_144;

									{	/* Expand/if.scm 59 */
										obj_t BgL_arg1556z00_151;

										obj_t BgL_arg1557z00_152;

										BgL_arg1556z00_151 = CNST_TABLE_REF(((long) 0));
										{	/* Expand/if.scm 59 */
											obj_t BgL_arg1559z00_153;

											obj_t BgL_arg1560z00_154;

											BgL_arg1559z00_153 = CAR(BgL_sandz00_139);
											BgL_arg1560z00_154 =
												BGl_loopz72z72z00zzexpand_ifz00(BgL_expz00_1053,
												CDR(BgL_sandz00_139));
											{	/* Expand/if.scm 59 */
												obj_t BgL_list1563z00_156;

												{	/* Expand/if.scm 59 */
													obj_t BgL_arg1564z00_157;

													{	/* Expand/if.scm 59 */
														obj_t BgL_arg1565z00_158;

														BgL_arg1565z00_158 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg1564z00_157 =
															MAKE_PAIR(BFALSE, BgL_arg1565z00_158);
													}
													BgL_list1563z00_156 =
														MAKE_PAIR(BgL_arg1560z00_154, BgL_arg1564z00_157);
												}
												BgL_arg1557z00_152 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1559z00_153, BgL_list1563z00_156);
										}}
										BgL_resz00_144 =
											MAKE_PAIR(BgL_arg1556z00_151, BgL_arg1557z00_152);
									}
									{	/* Expand/if.scm 61 */
										bool_t BgL_testz00_1140;

										{	/* Expand/if.scm 61 */
											obj_t BgL_auxz00_1141;

											BgL_auxz00_1141 = CAR(BgL_sandz00_139);
											BgL_testz00_1140 = EXTENDED_PAIRP(BgL_auxz00_1141);
										}
										if (BgL_testz00_1140)
											{	/* Expand/if.scm 62 */
												obj_t BgL_arg1551z00_146;

												obj_t BgL_arg1552z00_147;

												obj_t BgL_arg1553z00_148;

												BgL_arg1551z00_146 = CAR(BgL_resz00_144);
												BgL_arg1552z00_147 = CDR(BgL_resz00_144);
												BgL_arg1553z00_148 = CER(CAR(BgL_sandz00_139));
												{	/* Expand/if.scm 62 */
													obj_t BgL_res2014z00_719;

													BgL_res2014z00_719 =
														MAKE_EXTENDED_PAIR(BgL_arg1551z00_146,
														BgL_arg1552z00_147, BgL_arg1553z00_148);
													return BgL_res2014z00_719;
												}
											}
										else
											{	/* Expand/if.scm 61 */
												return BgL_resz00_144;
											}
									}
								}
						}
					else
						{	/* Expand/if.scm 54 */
							return
								BGl_errorz00zz__errorz00(BFALSE,
								BGl_string2022z00zzexpand_ifz00, BgL_expz00_1053);
						}
				}
		}
	}



/* expand-test */
	obj_t BGl_expandzd2testzd2zzexpand_ifz00(obj_t BgL_xz00_3, obj_t BgL_ez00_4)
	{
		AN_OBJECT;
		{	/* Expand/if.scm 70 */
			if (CBOOL(BGl_za2nilza2z00zz__evalz00))
				{	/* Expand/if.scm 80 */
					obj_t BgL_resz00_163;

					BgL_resz00_163 = BGl_newzd2ezd2zzexpand_ifz00(BgL_xz00_3, BgL_ez00_4);
					{	/* Expand/if.scm 81 */
						bool_t BgL_testz00_1153;

						if (PAIRP(BgL_xz00_3))
							{	/* Expand/if.scm 81 */
								BgL_testz00_1153 = PAIRP(BgL_resz00_163);
							}
						else
							{	/* Expand/if.scm 81 */
								BgL_testz00_1153 = ((bool_t) 0);
							}
						if (BgL_testz00_1153)
							{	/* Expand/if.scm 81 */
								return
									BGl_replacez12z12zztools_miscz00(BgL_xz00_3, BgL_resz00_163);
							}
						else
							{	/* Expand/if.scm 81 */
								return BgL_resz00_163;
							}
					}
				}
			else
				{	/* Expand/if.scm 84 */
					obj_t BgL_auxz00_166;

					BgL_auxz00_166 =
						BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 1)));
					{	/* Expand/if.scm 85 */
						obj_t BgL_arg1570z00_167;

						obj_t BgL_arg1571z00_168;

						BgL_arg1570z00_167 = CNST_TABLE_REF(((long) 2));
						{	/* Expand/if.scm 85 */
							obj_t BgL_arg1572z00_169;

							obj_t BgL_arg1574z00_170;

							{	/* Expand/if.scm 85 */
								obj_t BgL_arg1578z00_174;

								{	/* Expand/if.scm 85 */
									obj_t BgL_arg1581z00_176;

									{	/* Expand/if.scm 85 */
										obj_t BgL_arg1582z00_177;

										{	/* Expand/if.scm 85 */
											obj_t BgL_resz00_180;

											BgL_resz00_180 =
												BGl_newzd2ezd2zzexpand_ifz00(BgL_xz00_3, BgL_ez00_4);
											if (PAIRP(BgL_resz00_180))
												{	/* Expand/if.scm 89 */
													BgL_arg1582z00_177 =
														MAKE_PAIR(CAR(BgL_resz00_180), CDR(BgL_resz00_180));
												}
											else
												{	/* Expand/if.scm 89 */
													BgL_arg1582z00_177 = BgL_resz00_180;
												}
										}
										{	/* Expand/if.scm 85 */
											obj_t BgL_list1584z00_179;

											BgL_list1584z00_179 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg1581z00_176 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg1582z00_177, BgL_list1584z00_179);
										}
									}
									BgL_arg1578z00_174 =
										MAKE_PAIR(BgL_auxz00_166, BgL_arg1581z00_176);
								}
								BgL_arg1572z00_169 = MAKE_PAIR(BgL_arg1578z00_174, BNIL);
							}
							{	/* Expand/if.scm 92 */
								obj_t BgL_arg1588z00_184;

								obj_t BgL_arg1589z00_185;

								BgL_arg1588z00_184 = CNST_TABLE_REF(((long) 0));
								{	/* Expand/if.scm 93 */
									obj_t BgL_arg1590z00_186;

									{	/* Expand/if.scm 93 */
										obj_t BgL_arg1597z00_191;

										obj_t BgL_arg1598z00_192;

										BgL_arg1597z00_191 = CNST_TABLE_REF(((long) 0));
										{	/* Expand/if.scm 93 */
											obj_t BgL_arg1599z00_193;

											{	/* Expand/if.scm 93 */
												obj_t BgL_arg1604z00_198;

												obj_t BgL_arg1605z00_199;

												BgL_arg1604z00_198 = CNST_TABLE_REF(((long) 3));
												{	/* Expand/if.scm 93 */
													obj_t BgL_list1606z00_200;

													BgL_list1606z00_200 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg1605z00_199 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_auxz00_166, BgL_list1606z00_200);
												}
												BgL_arg1599z00_193 =
													MAKE_PAIR(BgL_arg1604z00_198, BgL_arg1605z00_199);
											}
											{	/* Expand/if.scm 93 */
												obj_t BgL_list1601z00_195;

												{	/* Expand/if.scm 93 */
													obj_t BgL_arg1602z00_196;

													{	/* Expand/if.scm 93 */
														obj_t BgL_arg1603z00_197;

														BgL_arg1603z00_197 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg1602z00_196 =
															MAKE_PAIR(BTRUE, BgL_arg1603z00_197);
													}
													BgL_list1601z00_195 =
														MAKE_PAIR(BFALSE, BgL_arg1602z00_196);
												}
												BgL_arg1598z00_192 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1599z00_193, BgL_list1601z00_195);
										}}
										BgL_arg1590z00_186 =
											MAKE_PAIR(BgL_arg1597z00_191, BgL_arg1598z00_192);
									}
									{	/* Expand/if.scm 92 */
										obj_t BgL_list1592z00_188;

										{	/* Expand/if.scm 92 */
											obj_t BgL_arg1593z00_189;

											{	/* Expand/if.scm 92 */
												obj_t BgL_arg1596z00_190;

												BgL_arg1596z00_190 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg1593z00_189 =
													MAKE_PAIR(BFALSE, BgL_arg1596z00_190);
											}
											BgL_list1592z00_188 =
												MAKE_PAIR(BgL_arg1590z00_186, BgL_arg1593z00_189);
										}
										BgL_arg1589z00_185 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_auxz00_166, BgL_list1592z00_188);
								}}
								BgL_arg1574z00_170 =
									MAKE_PAIR(BgL_arg1588z00_184, BgL_arg1589z00_185);
							}
							{	/* Expand/if.scm 85 */
								obj_t BgL_list1576z00_172;

								{	/* Expand/if.scm 85 */
									obj_t BgL_arg1577z00_173;

									BgL_arg1577z00_173 = MAKE_PAIR(BNIL, BNIL);
									BgL_list1576z00_172 =
										MAKE_PAIR(BgL_arg1574z00_170, BgL_arg1577z00_173);
								}
								BgL_arg1571z00_168 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg1572z00_169, BgL_list1576z00_172);
						}}
						return MAKE_PAIR(BgL_arg1570z00_167, BgL_arg1571z00_168);
					}
				}
		}
	}



/* new-e */
	obj_t BGl_newzd2ezd2zzexpand_ifz00(obj_t BgL_xz00_201, obj_t BgL_ez00_202)
	{
		AN_OBJECT;
		{	/* Expand/if.scm 71 */
		BGl_newzd2ezd2zzexpand_ifz00:
			{

				if (PAIRP(BgL_xz00_201))
					{	/* Expand/if.scm 71 */
						if ((CAR(BgL_xz00_201) == CNST_TABLE_REF(((long) 4))))
							{	/* Expand/if.scm 71 */
								{
									obj_t BgL_xz00_1197;

									BgL_xz00_1197 =
										BGl_expandzd2orzf2boolz20zzexpand_ifz00(BgL_xz00_201);
									BgL_xz00_201 = BgL_xz00_1197;
									goto BGl_newzd2ezd2zzexpand_ifz00;
								}
							}
						else
							{	/* Expand/if.scm 71 */
								if ((CAR(BgL_xz00_201) == CNST_TABLE_REF(((long) 5))))
									{	/* Expand/if.scm 71 */
										{
											obj_t BgL_xz00_1203;

											BgL_xz00_1203 =
												BGl_expandzd2andzf2boolz20zzexpand_ifz00(BgL_xz00_201);
											BgL_xz00_201 = BgL_xz00_1203;
											goto BGl_newzd2ezd2zzexpand_ifz00;
										}
									}
								else
									{	/* Expand/if.scm 71 */
									BgL_tagzd21649zd2_206:
										return
											PROCEDURE_ENTRY(BgL_ez00_202) (BgL_ez00_202, BgL_xz00_201,
											BgL_ez00_202, BEOA);
									}
							}
					}
				else
					{	/* Expand/if.scm 71 */
						goto BgL_tagzd21649zd2_206;
					}
			}
		}
	}



/* _expand-test */
	obj_t BGl__expandzd2testzd2zzexpand_ifz00(obj_t BgL_envz00_1036,
		obj_t BgL_xz00_1037, obj_t BgL_ez00_1038)
	{
		AN_OBJECT;
		{	/* Expand/if.scm 70 */
			return BGl_expandzd2testzd2zzexpand_ifz00(BgL_xz00_1037, BgL_ez00_1038);
		}
	}



/* expand-if */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2ifzd2zzexpand_ifz00(obj_t BgL_xz00_5,
		obj_t BgL_ez00_6)
	{
		AN_OBJECT;
		{	/* Expand/if.scm 104 */
			{
				obj_t BgL_testz00_228;

				obj_t BgL_alorsz00_229;

				obj_t BgL_testz00_224;

				obj_t BgL_alorsz00_225;

				obj_t BgL_sinonz00_226;

				if (PAIRP(BgL_xz00_5))
					{	/* Expand/if.scm 105 */
						obj_t BgL_cdrzd21667zd2_234;

						BgL_cdrzd21667zd2_234 = CDR(BgL_xz00_5);
						if (PAIRP(BgL_cdrzd21667zd2_234))
							{	/* Expand/if.scm 105 */
								obj_t BgL_cdrzd21671zd2_236;

								BgL_cdrzd21671zd2_236 = CDR(BgL_cdrzd21667zd2_234);
								if ((CAR(BgL_cdrzd21667zd2_234) == BTRUE))
									{	/* Expand/if.scm 105 */
										if (PAIRP(BgL_cdrzd21671zd2_236))
											{	/* Expand/if.scm 105 */
												obj_t BgL_cdrzd21675zd2_239;

												BgL_cdrzd21675zd2_239 = CDR(BgL_cdrzd21671zd2_236);
												if (PAIRP(BgL_cdrzd21675zd2_239))
													{	/* Expand/if.scm 105 */
														if (NULLP(CDR(BgL_cdrzd21675zd2_239)))
															{	/* Expand/if.scm 105 */
																obj_t BgL_arg1625z00_242;

																BgL_arg1625z00_242 = CAR(BgL_cdrzd21671zd2_236);
																{	/* Expand/if.scm 105 */
																	obj_t BgL_arg1667z00_742;

																	BgL_arg1667z00_742 =
																		PROCEDURE_ENTRY(BgL_ez00_6) (BgL_ez00_6,
																		BgL_arg1625z00_242, BgL_ez00_6, BEOA);
																	return
																		BGl_replacez12z12zztools_miscz00(BgL_xz00_5,
																		BgL_arg1667z00_742);
																}
															}
														else
															{	/* Expand/if.scm 105 */
															BgL_tagzd21659zd2_231:
																return
																	BGl_errorz00zz__errorz00(BFALSE,
																	BGl_string2023z00zzexpand_ifz00, BgL_xz00_5);
															}
													}
												else
													{	/* Expand/if.scm 105 */
														obj_t BgL_cdrzd21722zd2_246;

														BgL_cdrzd21722zd2_246 = CDR(BgL_cdrzd21667zd2_234);
														if (NULLP(CDR(BgL_cdrzd21722zd2_246)))
															{	/* Expand/if.scm 105 */
																BgL_testz00_228 = CAR(BgL_cdrzd21667zd2_234);
																BgL_alorsz00_229 = CAR(BgL_cdrzd21722zd2_246);
															BgL_tagzd21658zd2_230:
																{	/* Expand/if.scm 133 */
																	obj_t BgL_resz00_318;

																	{	/* Expand/if.scm 133 */
																		obj_t BgL_arg1696z00_319;

																		obj_t BgL_arg1697z00_320;

																		BgL_arg1696z00_319 =
																			CNST_TABLE_REF(((long) 0));
																		{	/* Expand/if.scm 133 */
																			obj_t BgL_arg1700z00_321;

																			obj_t BgL_arg1701z00_322;

																			BgL_arg1700z00_321 =
																				BGl_expandzd2ifzd2withz00zzexpand_ifz00
																				(BGl_expandzd2testzd2envz00zzexpand_ifz00,
																				BgL_testz00_228, BgL_ez00_6,
																				((bool_t) 1));
																			BgL_arg1701z00_322 =
																				BGl_expandzd2ifzd2withz00zzexpand_ifz00
																				(BgL_ez00_6, BgL_alorsz00_229,
																				BgL_ez00_6, ((bool_t) 1));
																			{	/* Expand/if.scm 133 */
																				obj_t BgL_list1703z00_324;

																				{	/* Expand/if.scm 133 */
																					obj_t BgL_arg1704z00_325;

																					{	/* Expand/if.scm 133 */
																						obj_t BgL_arg1705z00_326;

																						BgL_arg1705z00_326 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg1704z00_325 =
																							MAKE_PAIR(BFALSE,
																							BgL_arg1705z00_326);
																					}
																					BgL_list1703z00_324 =
																						MAKE_PAIR(BgL_arg1701z00_322,
																						BgL_arg1704z00_325);
																				}
																				BgL_arg1697z00_320 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg1700z00_321,
																					BgL_list1703z00_324);
																		}}
																		BgL_resz00_318 =
																			MAKE_PAIR(BgL_arg1696z00_319,
																			BgL_arg1697z00_320);
																	}
																	return
																		BGl_epairifyzd2reczd2zztools_miscz00
																		(BgL_resz00_318, BgL_xz00_5);
																}
															}
														else
															{	/* Expand/if.scm 105 */
																goto BgL_tagzd21659zd2_231;
															}
													}
											}
										else
											{	/* Expand/if.scm 105 */
												goto BgL_tagzd21659zd2_231;
											}
									}
								else
									{	/* Expand/if.scm 105 */
										obj_t BgL_cdrzd21755zd2_252;

										BgL_cdrzd21755zd2_252 = CDR(BgL_cdrzd21667zd2_234);
										if ((CAR(BgL_cdrzd21667zd2_234) == BFALSE))
											{	/* Expand/if.scm 105 */
												if (PAIRP(BgL_cdrzd21755zd2_252))
													{	/* Expand/if.scm 105 */
														obj_t BgL_cdrzd21759zd2_255;

														BgL_cdrzd21759zd2_255 = CDR(BgL_cdrzd21755zd2_252);
														if (PAIRP(BgL_cdrzd21759zd2_255))
															{	/* Expand/if.scm 105 */
																if (NULLP(CDR(BgL_cdrzd21759zd2_255)))
																	{	/* Expand/if.scm 105 */
																		obj_t BgL_arg1639z00_259;

																		BgL_arg1639z00_259 =
																			CAR(BgL_cdrzd21759zd2_255);
																		{	/* Expand/if.scm 105 */
																			obj_t BgL_arg1668z00_761;

																			BgL_arg1668z00_761 =
																				PROCEDURE_ENTRY(BgL_ez00_6) (BgL_ez00_6,
																				BgL_arg1639z00_259, BgL_ez00_6, BEOA);
																			return
																				BGl_replacez12z12zztools_miscz00
																				(BgL_xz00_5, BgL_arg1668z00_761);
																		}
																	}
																else
																	{	/* Expand/if.scm 105 */
																		goto BgL_tagzd21659zd2_231;
																	}
															}
														else
															{	/* Expand/if.scm 105 */
																obj_t BgL_cdrzd21796zd2_262;

																BgL_cdrzd21796zd2_262 =
																	CDR(BgL_cdrzd21667zd2_234);
																if (NULLP(CDR(BgL_cdrzd21796zd2_262)))
																	{
																		obj_t BgL_alorsz00_1267;

																		obj_t BgL_testz00_1265;

																		BgL_testz00_1265 =
																			CAR(BgL_cdrzd21667zd2_234);
																		BgL_alorsz00_1267 =
																			CAR(BgL_cdrzd21796zd2_262);
																		BgL_alorsz00_229 = BgL_alorsz00_1267;
																		BgL_testz00_228 = BgL_testz00_1265;
																		goto BgL_tagzd21658zd2_230;
																	}
																else
																	{	/* Expand/if.scm 105 */
																		goto BgL_tagzd21659zd2_231;
																	}
															}
													}
												else
													{	/* Expand/if.scm 105 */
														goto BgL_tagzd21659zd2_231;
													}
											}
										else
											{	/* Expand/if.scm 105 */
												obj_t BgL_cdrzd21826zd2_268;

												BgL_cdrzd21826zd2_268 = CDR(BgL_cdrzd21667zd2_234);
												if (PAIRP(BgL_cdrzd21826zd2_268))
													{	/* Expand/if.scm 105 */
														obj_t BgL_cdrzd21831zd2_270;

														BgL_cdrzd21831zd2_270 = CDR(BgL_cdrzd21826zd2_268);
														if (PAIRP(BgL_cdrzd21831zd2_270))
															{	/* Expand/if.scm 105 */
																if (NULLP(CDR(BgL_cdrzd21831zd2_270)))
																	{	/* Expand/if.scm 105 */
																		BgL_testz00_224 =
																			CAR(BgL_cdrzd21667zd2_234);
																		BgL_alorsz00_225 =
																			CAR(BgL_cdrzd21826zd2_268);
																		BgL_sinonz00_226 =
																			CAR(BgL_cdrzd21831zd2_270);
																		{	/* Expand/if.scm 111 */
																			obj_t BgL_newzd2testzd2_289;

																			obj_t BgL_newzd2thenzd2_290;

																			obj_t BgL_newzd2elsezd2_291;

																			BgL_newzd2testzd2_289 =
																				BGl_replacez12z12zztools_miscz00
																				(BgL_testz00_224,
																				BGl_expandzd2ifzd2withz00zzexpand_ifz00
																				(BGl_expandzd2testzd2envz00zzexpand_ifz00,
																					BgL_testz00_224, BgL_ez00_6,
																					((bool_t) 1)));
																			BgL_newzd2thenzd2_290 =
																				BGl_replacez12z12zztools_miscz00
																				(BgL_alorsz00_225,
																				BGl_expandzd2ifzd2withz00zzexpand_ifz00
																				(BgL_ez00_6, BgL_alorsz00_225,
																					BgL_ez00_6, ((bool_t) 1)));
																			BgL_newzd2elsezd2_291 =
																				BGl_replacez12z12zztools_miscz00
																				(BgL_sinonz00_226,
																				BGl_expandzd2ifzd2withz00zzexpand_ifz00
																				(BgL_ez00_6, BgL_sinonz00_226,
																					BgL_ez00_6, ((bool_t) 0)));
																			{	/* Expand/if.scm 114 */
																				obj_t BgL_resz00_292;

																				{	/* Expand/if.scm 114 */
																					obj_t BgL_exp0z00_293;

																					{	/* Expand/if.scm 114 */
																						obj_t BgL_arg1688z00_310;

																						obj_t BgL_arg1689z00_311;

																						BgL_arg1688z00_310 =
																							CNST_TABLE_REF(((long) 0));
																						{	/* Expand/if.scm 114 */
																							obj_t BgL_list1690z00_312;

																							{	/* Expand/if.scm 114 */
																								obj_t BgL_arg1691z00_313;

																								{	/* Expand/if.scm 114 */
																									obj_t BgL_arg1692z00_314;

																									BgL_arg1692z00_314 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg1691z00_313 =
																										MAKE_PAIR
																										(BgL_newzd2elsezd2_291,
																										BgL_arg1692z00_314);
																								}
																								BgL_list1690z00_312 =
																									MAKE_PAIR
																									(BgL_newzd2thenzd2_290,
																									BgL_arg1691z00_313);
																							}
																							BgL_arg1689z00_311 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_newzd2testzd2_289,
																								BgL_list1690z00_312);
																						}
																						BgL_exp0z00_293 =
																							MAKE_PAIR(BgL_arg1688z00_310,
																							BgL_arg1689z00_311);
																					}
																					{	/* Expand/if.scm 114 */
																						obj_t BgL_exp1z00_294;

																						BgL_exp1z00_294 =
																							BGl_epairifyzd2reczd2zztools_miscz00
																							(BgL_exp0z00_293, BgL_xz00_5);
																						{	/* Expand/if.scm 115 */
																							obj_t BgL_expz00_295;

																							BgL_expz00_295 =
																								MAKE_PAIR(CAR(BgL_exp1z00_294),
																								CDR(BgL_exp1z00_294));
																							{	/* Expand/if.scm 116 */

																								{	/* Expand/if.scm 117 */
																									bool_t BgL_testz00_1294;

																									if (BGl_za2casezd2enabledzf3za2z21zzexpand_ifz00)
																										{	/* Expand/if.scm 118 */
																											bool_t BgL_testz00_1296;

																											{	/* Expand/if.scm 118 */
																												obj_t
																													BgL_arg1677z00_305;
																												{	/* Expand/if.scm 118 */
																													obj_t
																														BgL_arg1678z00_306;
																													obj_t
																														BgL_arg1680z00_307;
																													BgL_arg1678z00_306 =
																														CNST_TABLE_REF((
																															(long) 6));
																													BgL_arg1680z00_307 =
																														BGl_lexicalzd2stackzd2zzexpand_epsz00
																														();
																													BgL_arg1677z00_305 =
																														BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg1678z00_306,
																														BgL_arg1680z00_307);
																												}
																												BgL_testz00_1296 =
																													PAIRP
																													(BgL_arg1677z00_305);
																											}
																											if (BgL_testz00_1296)
																												{	/* Expand/if.scm 118 */
																													BgL_testz00_1294 =
																														((bool_t) 0);
																												}
																											else
																												{	/* Expand/if.scm 118 */
																													BgL_testz00_1294 =
																														((bool_t) 1);
																												}
																										}
																									else
																										{	/* Expand/if.scm 117 */
																											BgL_testz00_1294 =
																												((bool_t) 0);
																										}
																									if (BgL_testz00_1294)
																										{	/* Expand/if.scm 119 */
																											obj_t
																												BgL_newzd2expzd2_297;
																											BgL_newzd2expzd2_297 =
																												BGl_findzd2casezd2expz00zzexpand_ifz00
																												(BgL_expz00_295);
																											if (CBOOL
																												(BgL_newzd2expzd2_297))
																												{	/* Expand/if.scm 121 */
																													obj_t
																														BgL_newzd2newzd2expz00_298;
																													{	/* Expand/if.scm 122 */
																														obj_t
																															BgL_arg1675z00_303;
																														BgL_arg1675z00_303 =
																															BGl_ifzd2ze3casez12z23zzexpand_ifz00
																															(BgL_newzd2expzd2_297);
																														BgL_newzd2newzd2expz00_298
																															=
																															PROCEDURE_ENTRY
																															(BgL_ez00_6)
																															(BgL_ez00_6,
																															BgL_arg1675z00_303,
																															BgL_ez00_6, BEOA);
																													}
																													{	/* Expand/if.scm 123 */
																														obj_t
																															BgL_auxz00_1309;
																														obj_t
																															BgL_auxz00_1307;
																														BgL_auxz00_1309 =
																															CAR
																															(BgL_newzd2newzd2expz00_298);
																														BgL_auxz00_1307 =
																															CAR
																															(BgL_newzd2expzd2_297);
																														SET_CAR
																															(BgL_auxz00_1307,
																															BgL_auxz00_1309);
																													}
																													{	/* Expand/if.scm 125 */
																														obj_t
																															BgL_auxz00_1314;
																														obj_t
																															BgL_auxz00_1312;
																														BgL_auxz00_1314 =
																															CDR
																															(BgL_newzd2newzd2expz00_298);
																														BgL_auxz00_1312 =
																															CAR
																															(BgL_newzd2expzd2_297);
																														SET_CDR
																															(BgL_auxz00_1312,
																															BgL_auxz00_1314);
																													}
																													BgL_resz00_292 =
																														BgL_expz00_295;
																												}
																											else
																												{	/* Expand/if.scm 120 */
																													BgL_resz00_292 =
																														BgL_expz00_295;
																												}
																										}
																									else
																										{	/* Expand/if.scm 117 */
																											BgL_resz00_292 =
																												BgL_expz00_295;
																										}
																								}
																							}
																						}
																					}
																				}
																				BGl_replacez12z12zztools_miscz00
																					(BgL_xz00_5, BgL_resz00_292);
																			}
																			return BgL_xz00_5;
																		}
																	}
																else
																	{	/* Expand/if.scm 105 */
																		goto BgL_tagzd21659zd2_231;
																	}
															}
														else
															{	/* Expand/if.scm 105 */
																if (NULLP(CDR(BgL_cdrzd21826zd2_268)))
																	{
																		obj_t BgL_alorsz00_1326;

																		obj_t BgL_testz00_1324;

																		BgL_testz00_1324 =
																			CAR(BgL_cdrzd21667zd2_234);
																		BgL_alorsz00_1326 =
																			CAR(BgL_cdrzd21826zd2_268);
																		BgL_alorsz00_229 = BgL_alorsz00_1326;
																		BgL_testz00_228 = BgL_testz00_1324;
																		goto BgL_tagzd21658zd2_230;
																	}
																else
																	{	/* Expand/if.scm 105 */
																		goto BgL_tagzd21659zd2_231;
																	}
															}
													}
												else
													{	/* Expand/if.scm 105 */
														goto BgL_tagzd21659zd2_231;
													}
											}
									}
							}
						else
							{	/* Expand/if.scm 105 */
								goto BgL_tagzd21659zd2_231;
							}
					}
				else
					{	/* Expand/if.scm 105 */
						goto BgL_tagzd21659zd2_231;
					}
			}
		}
	}



/* _expand-if */
	obj_t BGl__expandzd2ifzd2zzexpand_ifz00(obj_t BgL_envz00_1039,
		obj_t BgL_xz00_1040, obj_t BgL_ez00_1041)
	{
		AN_OBJECT;
		{	/* Expand/if.scm 104 */
			return BGl_expandzd2ifzd2zzexpand_ifz00(BgL_xz00_1040, BgL_ez00_1041);
		}
	}



/* expand-if-with */
	obj_t BGl_expandzd2ifzd2withz00zzexpand_ifz00(obj_t BgL_e1z00_7,
		obj_t BgL_xz00_8, obj_t BgL_e2z00_9, bool_t BgL_casezf3zf3_10)
	{
		AN_OBJECT;
		{	/* Expand/if.scm 148 */
			{	/* Expand/if.scm 149 */
				bool_t BgL_casezd2enabledzf3z21_327;

				BgL_casezd2enabledzf3z21_327 =
					BGl_za2casezd2enabledzf3za2z21zzexpand_ifz00;
				BGl_za2casezd2enabledzf3za2z21zzexpand_ifz00 = BgL_casezf3zf3_10;
				{	/* Expand/if.scm 151 */
					obj_t BgL_resz00_328;

					BgL_resz00_328 =
						PROCEDURE_ENTRY(BgL_e1z00_7) (BgL_e1z00_7, BgL_xz00_8, BgL_e2z00_9,
						BEOA);
					BGl_za2casezd2enabledzf3za2z21zzexpand_ifz00 =
						BgL_casezd2enabledzf3z21_327;
					{	/* Expand/if.scm 153 */
						bool_t BgL_testz00_1331;

						if (PAIRP(BgL_xz00_8))
							{	/* Expand/if.scm 153 */
								BgL_testz00_1331 = PAIRP(BgL_resz00_328);
							}
						else
							{	/* Expand/if.scm 153 */
								BgL_testz00_1331 = ((bool_t) 0);
							}
						if (BgL_testz00_1331)
							{	/* Expand/if.scm 153 */
								return
									BGl_replacez12z12zztools_miscz00(BgL_xz00_8, BgL_resz00_328);
							}
						else
							{	/* Expand/if.scm 153 */
								return BgL_resz00_328;
							}
					}
				}
			}
		}
	}



/* find-case-exp */
	obj_t BGl_findzd2casezd2expz00zzexpand_ifz00(obj_t BgL_expz00_11)
	{
		AN_OBJECT;
		{	/* Expand/if.scm 164 */
		BGl_findzd2casezd2expz00zzexpand_ifz00:
			{	/* Expand/if.scm 166 */
				obj_t BgL_iszd2casezd2_331;

				BgL_iszd2casezd2_331 = BGl_iszd2casezf3z21zzexpand_ifz00(BgL_expz00_11);
				if (CBOOL(BgL_iszd2casezd2_331))
					{	/* Expand/if.scm 167 */
						return BgL_iszd2casezd2_331;
					}
				else
					{	/* Expand/if.scm 167 */
						if (PAIRP(BgL_expz00_11))
							{	/* Expand/if.scm 169 */
								obj_t BgL_cdrzd21906zd2_337;

								BgL_cdrzd21906zd2_337 = CDR(BgL_expz00_11);
								if ((CAR(BgL_expz00_11) == CNST_TABLE_REF(((long) 0))))
									{	/* Expand/if.scm 169 */
										if (PAIRP(BgL_cdrzd21906zd2_337))
											{	/* Expand/if.scm 169 */
												obj_t BgL_cdrzd21909zd2_340;

												BgL_cdrzd21909zd2_340 = CDR(BgL_cdrzd21906zd2_337);
												if (PAIRP(BgL_cdrzd21909zd2_340))
													{	/* Expand/if.scm 169 */
														obj_t BgL_cdrzd21912zd2_342;

														BgL_cdrzd21912zd2_342 = CDR(BgL_cdrzd21909zd2_340);
														if (PAIRP(BgL_cdrzd21912zd2_342))
															{	/* Expand/if.scm 169 */
																if (NULLP(CDR(BgL_cdrzd21912zd2_342)))
																	{
																		obj_t BgL_expz00_1357;

																		BgL_expz00_1357 =
																			CAR(BgL_cdrzd21912zd2_342);
																		BgL_expz00_11 = BgL_expz00_1357;
																		goto BGl_findzd2casezd2expz00zzexpand_ifz00;
																	}
																else
																	{	/* Expand/if.scm 169 */
																		return BFALSE;
																	}
															}
														else
															{	/* Expand/if.scm 169 */
																return BFALSE;
															}
													}
												else
													{	/* Expand/if.scm 169 */
														return BFALSE;
													}
											}
										else
											{	/* Expand/if.scm 169 */
												return BFALSE;
											}
									}
								else
									{	/* Expand/if.scm 169 */
										return BFALSE;
									}
							}
						else
							{	/* Expand/if.scm 169 */
								return BFALSE;
							}
					}
			}
		}
	}



/* is-case? */
	obj_t BGl_iszd2casezf3z21zzexpand_ifz00(obj_t BgL_expz00_12)
	{
		AN_OBJECT;
		{	/* Expand/if.scm 190 */
			{
				obj_t BgL_varz00_351;

				obj_t BgL_expz72z72_352;

				long BgL_nbzd2clauseszd2_353;

				BgL_varz00_351 = BNIL;
				BgL_expz72z72_352 = BgL_expz00_12;
				BgL_nbzd2clauseszd2_353 = ((long) 1);
			BgL_zc3anonymousza31720ze3z83_354:
				{
					obj_t BgL_testz00_355;

					obj_t BgL_sinonz00_356;

					if (PAIRP(BgL_expz72z72_352))
						{	/* Expand/if.scm 191 */
							obj_t BgL_cdrzd21925zd2_361;

							BgL_cdrzd21925zd2_361 = CDR(BgL_expz72z72_352);
							if ((CAR(BgL_expz72z72_352) == CNST_TABLE_REF(((long) 0))))
								{	/* Expand/if.scm 191 */
									if (PAIRP(BgL_cdrzd21925zd2_361))
										{	/* Expand/if.scm 191 */
											obj_t BgL_cdrzd21929zd2_364;

											BgL_cdrzd21929zd2_364 = CDR(BgL_cdrzd21925zd2_361);
											if (PAIRP(BgL_cdrzd21929zd2_364))
												{	/* Expand/if.scm 191 */
													obj_t BgL_cdrzd21933zd2_366;

													BgL_cdrzd21933zd2_366 = CDR(BgL_cdrzd21929zd2_364);
													if (PAIRP(BgL_cdrzd21933zd2_366))
														{	/* Expand/if.scm 191 */
															if (NULLP(CDR(BgL_cdrzd21933zd2_366)))
																{	/* Expand/if.scm 191 */
																	BgL_testz00_355 = CAR(BgL_cdrzd21925zd2_361);
																	BgL_sinonz00_356 = CAR(BgL_cdrzd21933zd2_366);
																	{
																		obj_t BgL_newzd2varzd2_377;

																		obj_t BgL_exp1z00_378;

																		obj_t BgL_exp1z00_374;

																		obj_t BgL_exp2z00_375;

																		if (PAIRP(BgL_testz00_355))
																			{	/* Expand/if.scm 191 */
																				obj_t BgL_carzd21946zd2_382;

																				obj_t BgL_cdrzd21947zd2_383;

																				BgL_carzd21946zd2_382 =
																					CAR(BgL_testz00_355);
																				BgL_cdrzd21947zd2_383 =
																					CDR(BgL_testz00_355);
																				{

																					if (
																						(BgL_carzd21946zd2_382 ==
																							CNST_TABLE_REF(((long) 7))))
																						{	/* Expand/if.scm 191 */
																						BgL_kapzd21948zd2_384:
																							if (PAIRP(BgL_cdrzd21947zd2_383))
																								{	/* Expand/if.scm 191 */
																									obj_t BgL_cdrzd21952zd2_412;

																									BgL_cdrzd21952zd2_412 =
																										CDR(BgL_cdrzd21947zd2_383);
																									if (PAIRP
																										(BgL_cdrzd21952zd2_412))
																										{	/* Expand/if.scm 191 */
																											if (NULLP(CDR
																													(BgL_cdrzd21952zd2_412)))
																												{	/* Expand/if.scm 191 */
																													BgL_exp1z00_374 =
																														CAR
																														(BgL_cdrzd21947zd2_383);
																													BgL_exp2z00_375 =
																														CAR
																														(BgL_cdrzd21952zd2_412);
																													if (BGl_iszd2azd2validzd2constantzf3z21zzexpand_ifz00(BgL_exp1z00_374))
																														{	/* Expand/if.scm 199 */
																															if (NULLP
																																(BgL_varz00_351))
																																{
																																	long
																																		BgL_nbzd2clauseszd2_1398;
																																	obj_t
																																		BgL_expz72z72_1397;
																																	obj_t
																																		BgL_varz00_1396;
																																	BgL_varz00_1396
																																		=
																																		BgL_exp2z00_375;
																																	BgL_expz72z72_1397
																																		=
																																		BgL_sinonz00_356;
																																	BgL_nbzd2clauseszd2_1398
																																		=
																																		(BgL_nbzd2clauseszd2_353
																																		+
																																		((long) 1));
																																	BgL_nbzd2clauseszd2_353
																																		=
																																		BgL_nbzd2clauseszd2_1398;
																																	BgL_expz72z72_352
																																		=
																																		BgL_expz72z72_1397;
																																	BgL_varz00_351
																																		=
																																		BgL_varz00_1396;
																																	goto
																																		BgL_zc3anonymousza31720ze3z83_354;
																																}
																															else
																																{	/* Expand/if.scm 201 */
																																	if (
																																		(BgL_varz00_351
																																			==
																																			BgL_exp2z00_375))
																																		{
																																			long
																																				BgL_nbzd2clauseszd2_1404;
																																			obj_t
																																				BgL_expz72z72_1403;
																																			obj_t
																																				BgL_varz00_1402;
																																			BgL_varz00_1402
																																				=
																																				BgL_exp2z00_375;
																																			BgL_expz72z72_1403
																																				=
																																				BgL_sinonz00_356;
																																			BgL_nbzd2clauseszd2_1404
																																				=
																																				(BgL_nbzd2clauseszd2_353
																																				+
																																				((long)
																																					1));
																																			BgL_nbzd2clauseszd2_353
																																				=
																																				BgL_nbzd2clauseszd2_1404;
																																			BgL_expz72z72_352
																																				=
																																				BgL_expz72z72_1403;
																																			BgL_varz00_351
																																				=
																																				BgL_varz00_1402;
																																			goto
																																				BgL_zc3anonymousza31720ze3z83_354;
																																		}
																																	else
																																		{	/* Expand/if.scm 203 */
																																			if (
																																				(BgL_nbzd2clauseszd2_353
																																					>
																																					((long) 3)))
																																				{	/* Expand/if.scm 207 */
																																					obj_t
																																						BgL_list1777z00_424;
																																					{	/* Expand/if.scm 207 */
																																						obj_t
																																							BgL_arg1778z00_425;
																																						{	/* Expand/if.scm 207 */
																																							obj_t
																																								BgL_arg1779z00_426;
																																							BgL_arg1779z00_426
																																								=
																																								MAKE_PAIR
																																								(BgL_expz72z72_352,
																																								BNIL);
																																							BgL_arg1778z00_425
																																								=
																																								MAKE_PAIR
																																								(BgL_varz00_351,
																																								BgL_arg1779z00_426);
																																						}
																																						BgL_list1777z00_424
																																							=
																																							MAKE_PAIR
																																							(BgL_expz00_12,
																																							BgL_arg1778z00_425);
																																					}
																																					return
																																						BgL_list1777z00_424;
																																				}
																																			else
																																				{	/* Expand/if.scm 206 */
																																					return
																																						BFALSE;
																																				}
																																		}
																																}
																														}
																													else
																														{	/* Expand/if.scm 199 */
																															if (BGl_iszd2azd2validzd2constantzf3z21zzexpand_ifz00(BgL_exp2z00_375))
																																{	/* Expand/if.scm 209 */
																																	if (NULLP
																																		(BgL_varz00_351))
																																		{
																																			long
																																				BgL_nbzd2clauseszd2_1417;
																																			obj_t
																																				BgL_expz72z72_1416;
																																			obj_t
																																				BgL_varz00_1415;
																																			BgL_varz00_1415
																																				=
																																				BgL_exp1z00_374;
																																			BgL_expz72z72_1416
																																				=
																																				BgL_sinonz00_356;
																																			BgL_nbzd2clauseszd2_1417
																																				=
																																				(BgL_nbzd2clauseszd2_353
																																				+
																																				((long)
																																					1));
																																			BgL_nbzd2clauseszd2_353
																																				=
																																				BgL_nbzd2clauseszd2_1417;
																																			BgL_expz72z72_352
																																				=
																																				BgL_expz72z72_1416;
																																			BgL_varz00_351
																																				=
																																				BgL_varz00_1415;
																																			goto
																																				BgL_zc3anonymousza31720ze3z83_354;
																																		}
																																	else
																																		{	/* Expand/if.scm 211 */
																																			if (
																																				(BgL_varz00_351
																																					==
																																					BgL_exp1z00_374))
																																				{
																																					long
																																						BgL_nbzd2clauseszd2_1423;
																																					obj_t
																																						BgL_expz72z72_1422;
																																					obj_t
																																						BgL_varz00_1421;
																																					BgL_varz00_1421
																																						=
																																						BgL_exp1z00_374;
																																					BgL_expz72z72_1422
																																						=
																																						BgL_sinonz00_356;
																																					BgL_nbzd2clauseszd2_1423
																																						=
																																						(BgL_nbzd2clauseszd2_353
																																						+
																																						((long) 1));
																																					BgL_nbzd2clauseszd2_353
																																						=
																																						BgL_nbzd2clauseszd2_1423;
																																					BgL_expz72z72_352
																																						=
																																						BgL_expz72z72_1422;
																																					BgL_varz00_351
																																						=
																																						BgL_varz00_1421;
																																					goto
																																						BgL_zc3anonymousza31720ze3z83_354;
																																				}
																																			else
																																				{	/* Expand/if.scm 213 */
																																					if (
																																						(BgL_nbzd2clauseszd2_353
																																							>
																																							((long) 3)))
																																						{	/* Expand/if.scm 217 */
																																							obj_t
																																								BgL_list1786z00_433;
																																							{	/* Expand/if.scm 217 */
																																								obj_t
																																									BgL_arg1787z00_434;
																																								{	/* Expand/if.scm 217 */
																																									obj_t
																																										BgL_arg1789z00_435;
																																									BgL_arg1789z00_435
																																										=
																																										MAKE_PAIR
																																										(BgL_expz72z72_352,
																																										BNIL);
																																									BgL_arg1787z00_434
																																										=
																																										MAKE_PAIR
																																										(BgL_varz00_351,
																																										BgL_arg1789z00_435);
																																								}
																																								BgL_list1786z00_433
																																									=
																																									MAKE_PAIR
																																									(BgL_expz00_12,
																																									BgL_arg1787z00_434);
																																							}
																																							return
																																								BgL_list1786z00_433;
																																						}
																																					else
																																						{	/* Expand/if.scm 216 */
																																							return
																																								BFALSE;
																																						}
																																				}
																																		}
																																}
																															else
																																{	/* Expand/if.scm 209 */
																																	return BFALSE;
																																}
																														}
																												}
																											else
																												{	/* Expand/if.scm 191 */
																													return BFALSE;
																												}
																										}
																									else
																										{	/* Expand/if.scm 191 */
																											return BFALSE;
																										}
																								}
																							else
																								{	/* Expand/if.scm 191 */
																									return BFALSE;
																								}
																						}
																					else
																						{	/* Expand/if.scm 191 */
																							if (
																								(BgL_carzd21946zd2_382 ==
																									CNST_TABLE_REF(((long) 8))))
																								{	/* Expand/if.scm 191 */
																									goto BgL_kapzd21948zd2_384;
																								}
																							else
																								{	/* Expand/if.scm 191 */
																									if (
																										(BgL_carzd21946zd2_382 ==
																											CNST_TABLE_REF(((long)
																													9))))
																										{	/* Expand/if.scm 191 */
																											goto
																												BgL_kapzd21948zd2_384;
																										}
																									else
																										{	/* Expand/if.scm 191 */
																											if (
																												(BgL_carzd21946zd2_382
																													==
																													CNST_TABLE_REF(((long)
																															10))))
																												{	/* Expand/if.scm 191 */
																													goto
																														BgL_kapzd21948zd2_384;
																												}
																											else
																												{	/* Expand/if.scm 191 */
																													if (
																														(BgL_carzd21946zd2_382
																															==
																															CNST_TABLE_REF((
																																	(long) 11))))
																														{	/* Expand/if.scm 191 */
																															goto
																																BgL_kapzd21948zd2_384;
																														}
																													else
																														{	/* Expand/if.scm 191 */
																															if (
																																(CAR
																																	(BgL_testz00_355)
																																	==
																																	CNST_TABLE_REF
																																	(((long)
																																			12))))
																																{	/* Expand/if.scm 191 */
																																	if (PAIRP
																																		(BgL_cdrzd21947zd2_383))
																																		{	/* Expand/if.scm 191 */
																																			obj_t
																																				BgL_cdrzd21984zd2_394;
																																			BgL_cdrzd21984zd2_394
																																				=
																																				CDR
																																				(BgL_cdrzd21947zd2_383);
																																			if (PAIRP
																																				(BgL_cdrzd21984zd2_394))
																																				{	/* Expand/if.scm 191 */
																																					obj_t
																																						BgL_carzd21987zd2_396;
																																					BgL_carzd21987zd2_396
																																						=
																																						CAR
																																						(BgL_cdrzd21984zd2_394);
																																					if (PAIRP(BgL_carzd21987zd2_396))
																																						{	/* Expand/if.scm 191 */
																																							obj_t
																																								BgL_cdrzd21991zd2_398;
																																							BgL_cdrzd21991zd2_398
																																								=
																																								CDR
																																								(BgL_carzd21987zd2_396);
																																							if ((CAR(BgL_carzd21987zd2_396) == CNST_TABLE_REF(((long) 13))))
																																								{	/* Expand/if.scm 191 */
																																									if (PAIRP(BgL_cdrzd21991zd2_398))
																																										{	/* Expand/if.scm 191 */
																																											if (NULLP(CDR(BgL_cdrzd21991zd2_398)))
																																												{	/* Expand/if.scm 191 */
																																													if (NULLP(CDR(BgL_cdrzd21984zd2_394)))
																																														{	/* Expand/if.scm 191 */
																																															BgL_newzd2varzd2_377
																																																=
																																																CAR
																																																(BgL_cdrzd21947zd2_383);
																																															BgL_exp1z00_378
																																																=
																																																CAR
																																																(BgL_cdrzd21991zd2_398);
																																															{	/* Expand/if.scm 223 */
																																																bool_t
																																																	BgL_testz00_1469;
																																																if (PAIRP(BgL_exp1z00_378))
																																																	{
																																																		obj_t
																																																			BgL_exp1z00_451;
																																																		BgL_exp1z00_451
																																																			=
																																																			BgL_exp1z00_378;
																																																	BgL_zc3anonymousza31805ze3z83_452:
																																																		if (NULLP(BgL_exp1z00_451))
																																																			{	/* Expand/if.scm 226 */
																																																				BgL_testz00_1469
																																																					=
																																																					(
																																																					(bool_t)
																																																					1);
																																																			}
																																																		else
																																																			{	/* Expand/if.scm 226 */
																																																				if (BGl_iszd2azd2validzd2constantzf3z21zzexpand_ifz00(CAR(BgL_exp1z00_451)))
																																																					{
																																																						obj_t
																																																							BgL_exp1z00_1477;
																																																						BgL_exp1z00_1477
																																																							=
																																																							CDR
																																																							(BgL_exp1z00_451);
																																																						BgL_exp1z00_451
																																																							=
																																																							BgL_exp1z00_1477;
																																																						goto
																																																							BgL_zc3anonymousza31805ze3z83_452;
																																																					}
																																																				else
																																																					{	/* Expand/if.scm 228 */
																																																						BgL_testz00_1469
																																																							=
																																																							(
																																																							(bool_t)
																																																							0);
																																																					}
																																																			}
																																																	}
																																																else
																																																	{	/* Expand/if.scm 223 */
																																																		BgL_testz00_1469
																																																			=
																																																			(
																																																			(bool_t)
																																																			0);
																																																	}
																																																if (BgL_testz00_1469)
																																																	{	/* Expand/if.scm 223 */
																																																		if (NULLP(BgL_varz00_351))
																																																			{
																																																				long
																																																					BgL_nbzd2clauseszd2_1483;
																																																				obj_t
																																																					BgL_expz72z72_1482;
																																																				obj_t
																																																					BgL_varz00_1481;
																																																				BgL_varz00_1481
																																																					=
																																																					BgL_newzd2varzd2_377;
																																																				BgL_expz72z72_1482
																																																					=
																																																					BgL_sinonz00_356;
																																																				BgL_nbzd2clauseszd2_1483
																																																					=
																																																					(BgL_nbzd2clauseszd2_353
																																																					+
																																																					((long) 1));
																																																				BgL_nbzd2clauseszd2_353
																																																					=
																																																					BgL_nbzd2clauseszd2_1483;
																																																				BgL_expz72z72_352
																																																					=
																																																					BgL_expz72z72_1482;
																																																				BgL_varz00_351
																																																					=
																																																					BgL_varz00_1481;
																																																				goto
																																																					BgL_zc3anonymousza31720ze3z83_354;
																																																			}
																																																		else
																																																			{	/* Expand/if.scm 233 */
																																																				if ((BgL_newzd2varzd2_377 == BgL_varz00_351))
																																																					{
																																																						long
																																																							BgL_nbzd2clauseszd2_1489;
																																																						obj_t
																																																							BgL_expz72z72_1488;
																																																						obj_t
																																																							BgL_varz00_1487;
																																																						BgL_varz00_1487
																																																							=
																																																							BgL_newzd2varzd2_377;
																																																						BgL_expz72z72_1488
																																																							=
																																																							BgL_sinonz00_356;
																																																						BgL_nbzd2clauseszd2_1489
																																																							=
																																																							(BgL_nbzd2clauseszd2_353
																																																							+
																																																							((long) 1));
																																																						BgL_nbzd2clauseszd2_353
																																																							=
																																																							BgL_nbzd2clauseszd2_1489;
																																																						BgL_expz72z72_352
																																																							=
																																																							BgL_expz72z72_1488;
																																																						BgL_varz00_351
																																																							=
																																																							BgL_varz00_1487;
																																																						goto
																																																							BgL_zc3anonymousza31720ze3z83_354;
																																																					}
																																																				else
																																																					{	/* Expand/if.scm 235 */
																																																						if ((BgL_nbzd2clauseszd2_353 > ((long) 3)))
																																																							{	/* Expand/if.scm 239 */
																																																								obj_t
																																																									BgL_list1796z00_442;
																																																								{	/* Expand/if.scm 239 */
																																																									obj_t
																																																										BgL_arg1797z00_443;
																																																									{	/* Expand/if.scm 239 */
																																																										obj_t
																																																											BgL_arg1798z00_444;
																																																										BgL_arg1798z00_444
																																																											=
																																																											MAKE_PAIR
																																																											(BgL_expz72z72_352,
																																																											BNIL);
																																																										BgL_arg1797z00_443
																																																											=
																																																											MAKE_PAIR
																																																											(BgL_varz00_351,
																																																											BgL_arg1798z00_444);
																																																									}
																																																									BgL_list1796z00_442
																																																										=
																																																										MAKE_PAIR
																																																										(BgL_expz00_12,
																																																										BgL_arg1797z00_443);
																																																								}
																																																								return
																																																									BgL_list1796z00_442;
																																																							}
																																																						else
																																																							{	/* Expand/if.scm 238 */
																																																								return
																																																									BFALSE;
																																																							}
																																																					}
																																																			}
																																																	}
																																																else
																																																	{	/* Expand/if.scm 223 */
																																																		if ((BgL_nbzd2clauseszd2_353 > ((long) 3)))
																																																			{	/* Expand/if.scm 243 */
																																																				obj_t
																																																					BgL_list1800z00_446;
																																																				{	/* Expand/if.scm 243 */
																																																					obj_t
																																																						BgL_arg1801z00_447;
																																																					{	/* Expand/if.scm 243 */
																																																						obj_t
																																																							BgL_arg1803z00_448;
																																																						BgL_arg1803z00_448
																																																							=
																																																							MAKE_PAIR
																																																							(BgL_expz72z72_352,
																																																							BNIL);
																																																						BgL_arg1801z00_447
																																																							=
																																																							MAKE_PAIR
																																																							(BgL_varz00_351,
																																																							BgL_arg1803z00_448);
																																																					}
																																																					BgL_list1800z00_446
																																																						=
																																																						MAKE_PAIR
																																																						(BgL_expz00_12,
																																																						BgL_arg1801z00_447);
																																																				}
																																																				return
																																																					BgL_list1800z00_446;
																																																			}
																																																		else
																																																			{	/* Expand/if.scm 242 */
																																																				return
																																																					BFALSE;
																																																			}
																																																	}
																																															}
																																														}
																																													else
																																														{	/* Expand/if.scm 191 */
																																															return
																																																BFALSE;
																																														}
																																												}
																																											else
																																												{	/* Expand/if.scm 191 */
																																													return
																																														BFALSE;
																																												}
																																										}
																																									else
																																										{	/* Expand/if.scm 191 */
																																											return
																																												BFALSE;
																																										}
																																								}
																																							else
																																								{	/* Expand/if.scm 191 */
																																									return
																																										BFALSE;
																																								}
																																						}
																																					else
																																						{	/* Expand/if.scm 191 */
																																							return
																																								BFALSE;
																																						}
																																				}
																																			else
																																				{	/* Expand/if.scm 191 */
																																					return
																																						BFALSE;
																																				}
																																		}
																																	else
																																		{	/* Expand/if.scm 191 */
																																			return
																																				BFALSE;
																																		}
																																}
																															else
																																{	/* Expand/if.scm 191 */
																																	return BFALSE;
																																}
																														}
																												}
																										}
																								}
																						}
																				}
																			}
																		else
																			{	/* Expand/if.scm 191 */
																				return BFALSE;
																			}
																	}
																}
															else
																{	/* Expand/if.scm 191 */
																BgL_tagzd21918zd2_358:
																	if ((BgL_nbzd2clauseszd2_353 > ((long) 3)))
																		{	/* Expand/if.scm 247 */
																			obj_t BgL_list1812z00_459;

																			{	/* Expand/if.scm 247 */
																				obj_t BgL_arg1813z00_460;

																				{	/* Expand/if.scm 247 */
																					obj_t BgL_arg1815z00_461;

																					BgL_arg1815z00_461 =
																						MAKE_PAIR(BgL_expz72z72_352, BNIL);
																					BgL_arg1813z00_460 =
																						MAKE_PAIR(BgL_varz00_351,
																						BgL_arg1815z00_461);
																				}
																				BgL_list1812z00_459 =
																					MAKE_PAIR(BgL_expz00_12,
																					BgL_arg1813z00_460);
																			}
																			return BgL_list1812z00_459;
																		}
																	else
																		{	/* Expand/if.scm 246 */
																			return BFALSE;
																		}
																}
														}
													else
														{	/* Expand/if.scm 191 */
															goto BgL_tagzd21918zd2_358;
														}
												}
											else
												{	/* Expand/if.scm 191 */
													goto BgL_tagzd21918zd2_358;
												}
										}
									else
										{	/* Expand/if.scm 191 */
											goto BgL_tagzd21918zd2_358;
										}
								}
							else
								{	/* Expand/if.scm 191 */
									goto BgL_tagzd21918zd2_358;
								}
						}
					else
						{	/* Expand/if.scm 191 */
							goto BgL_tagzd21918zd2_358;
						}
				}
			}
		}
	}



/* is-a-valid-constant? */
	bool_t BGl_iszd2azd2validzd2constantzf3z21zzexpand_ifz00(obj_t BgL_cnstz00_13)
	{
		AN_OBJECT;
		{	/* Expand/if.scm 255 */
			{	/* Expand/if.scm 256 */
				bool_t BgL__ortest_1515z00_463;

				BgL__ortest_1515z00_463 = INTEGERP(BgL_cnstz00_13);
				if (BgL__ortest_1515z00_463)
					{	/* Expand/if.scm 256 */
						return BgL__ortest_1515z00_463;
					}
				else
					{	/* Expand/if.scm 257 */
						bool_t BgL__ortest_1516z00_464;

						BgL__ortest_1516z00_464 = CHARP(BgL_cnstz00_13);
						if (BgL__ortest_1516z00_464)
							{	/* Expand/if.scm 257 */
								return BgL__ortest_1516z00_464;
							}
						else
							{	/* Expand/if.scm 258 */
								bool_t BgL__ortest_1517z00_465;

								BgL__ortest_1517z00_465 = CNSTP(BgL_cnstz00_13);
								if (BgL__ortest_1517z00_465)
									{	/* Expand/if.scm 258 */
										return BgL__ortest_1517z00_465;
									}
								else
									{	/* Expand/if.scm 259 */
										bool_t BgL__ortest_1518z00_466;

										BgL__ortest_1518z00_466 = KEYWORDP(BgL_cnstz00_13);
										if (BgL__ortest_1518z00_466)
											{	/* Expand/if.scm 259 */
												return BgL__ortest_1518z00_466;
											}
										else
											{	/* Expand/if.scm 259 */
												if (PAIRP(BgL_cnstz00_13))
													{	/* Expand/if.scm 260 */
														if (
															(CAR(BgL_cnstz00_13) ==
																CNST_TABLE_REF(((long) 13))))
															{	/* Expand/if.scm 262 */
																bool_t BgL_testz00_1524;

																{	/* Expand/if.scm 262 */
																	obj_t BgL_auxz00_1525;

																	BgL_auxz00_1525 = CDR(BgL_cnstz00_13);
																	BgL_testz00_1524 = PAIRP(BgL_auxz00_1525);
																}
																if (BgL_testz00_1524)
																	{	/* Expand/if.scm 263 */
																		bool_t BgL_testz00_1528;

																		{	/* Expand/if.scm 263 */
																			obj_t BgL_auxz00_1529;

																			BgL_auxz00_1529 =
																				CAR(CDR(BgL_cnstz00_13));
																			BgL_testz00_1528 =
																				SYMBOLP(BgL_auxz00_1529);
																		}
																		if (BgL_testz00_1528)
																			{	/* Expand/if.scm 263 */
																				return NULLP(CDR(CDR(BgL_cnstz00_13)));
																			}
																		else
																			{	/* Expand/if.scm 263 */
																				return ((bool_t) 0);
																			}
																	}
																else
																	{	/* Expand/if.scm 262 */
																		return ((bool_t) 0);
																	}
															}
														else
															{	/* Expand/if.scm 261 */
																return ((bool_t) 0);
															}
													}
												else
													{	/* Expand/if.scm 260 */
														return ((bool_t) 0);
													}
											}
									}
							}
					}
			}
		}
	}



/* if->case! */
	obj_t BGl_ifzd2ze3casez12z23zzexpand_ifz00(obj_t BgL_expze2varze2endz00_14)
	{
		AN_OBJECT;
		{	/* Expand/if.scm 273 */
			{	/* Expand/if.scm 275 */
				obj_t BgL_expz00_476;

				BgL_expz00_476 = CAR(BgL_expze2varze2endz00_14);
				{	/* Expand/if.scm 275 */
					obj_t BgL_varz00_477;

					{	/* Expand/if.scm 276 */
						obj_t BgL_pairz00_917;

						BgL_pairz00_917 = BgL_expze2varze2endz00_14;
						BgL_varz00_477 = CAR(CDR(BgL_pairz00_917));
					}
					{	/* Expand/if.scm 276 */
						obj_t BgL_endzd2expzd2_478;

						{	/* Expand/if.scm 277 */
							obj_t BgL_pairz00_921;

							BgL_pairz00_921 = BgL_expze2varze2endz00_14;
							BgL_endzd2expzd2_478 = CAR(CDR(CDR(BgL_pairz00_921)));
						}
						{	/* Expand/if.scm 277 */
							obj_t BgL_newzd2expzd2_479;

							{	/* Expand/if.scm 278 */
								obj_t BgL_arg1823z00_482;

								obj_t BgL_arg1824z00_483;

								BgL_arg1823z00_482 = CNST_TABLE_REF(((long) 6));
								{	/* Expand/if.scm 279 */
									obj_t BgL_arg1825z00_484;

									{	/* Expand/if.scm 279 */
										obj_t BgL_arg1827z00_486;

										{
											obj_t BgL_expz00_490;

											obj_t BgL_clausesz00_491;

											BgL_expz00_490 = BgL_expz00_476;
											BgL_clausesz00_491 = BNIL;
										BgL_zc3anonymousza31829ze3z83_492:
											if ((BgL_expz00_490 == BgL_endzd2expzd2_478))
												{	/* Expand/if.scm 285 */
													obj_t BgL_arg1831z00_494;

													{	/* Expand/if.scm 285 */
														obj_t BgL_arg1832z00_495;

														{	/* Expand/if.scm 285 */
															obj_t BgL_arg1834z00_496;

															obj_t BgL_arg1835z00_497;

															BgL_arg1834z00_496 = CNST_TABLE_REF(((long) 14));
															{	/* Expand/if.scm 285 */
																obj_t BgL_list1836z00_498;

																BgL_list1836z00_498 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg1835z00_497 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_endzd2expzd2_478, BgL_list1836z00_498);
															}
															BgL_arg1832z00_495 =
																MAKE_PAIR(BgL_arg1834z00_496,
																BgL_arg1835z00_497);
														}
														BgL_arg1831z00_494 =
															MAKE_PAIR(BgL_arg1832z00_495, BgL_clausesz00_491);
													}
													BgL_arg1827z00_486 =
														bgl_reverse_bang(BgL_arg1831z00_494);
												}
											else
												{	/* Expand/if.scm 284 */
													if (PAIRP(BgL_expz00_490))
														{	/* Expand/if.scm 286 */
															obj_t BgL_cdrzd22009zd2_505;

															BgL_cdrzd22009zd2_505 = CDR(BgL_expz00_490);
															if (
																(CAR(BgL_expz00_490) ==
																	CNST_TABLE_REF(((long) 0))))
																{	/* Expand/if.scm 286 */
																	if (PAIRP(BgL_cdrzd22009zd2_505))
																		{	/* Expand/if.scm 286 */
																			obj_t BgL_cdrzd22014zd2_508;

																			BgL_cdrzd22014zd2_508 =
																				CDR(BgL_cdrzd22009zd2_505);
																			if (PAIRP(BgL_cdrzd22014zd2_508))
																				{	/* Expand/if.scm 286 */
																					obj_t BgL_cdrzd22019zd2_510;

																					BgL_cdrzd22019zd2_510 =
																						CDR(BgL_cdrzd22014zd2_508);
																					if (PAIRP(BgL_cdrzd22019zd2_510))
																						{	/* Expand/if.scm 286 */
																							if (NULLP(CDR
																									(BgL_cdrzd22019zd2_510)))
																								{	/* Expand/if.scm 286 */
																									obj_t BgL_arg1845z00_513;

																									obj_t BgL_arg1846z00_514;

																									obj_t BgL_arg1847z00_515;

																									BgL_arg1845z00_513 =
																										CAR(BgL_cdrzd22009zd2_505);
																									BgL_arg1846z00_514 =
																										CAR(BgL_cdrzd22014zd2_508);
																									BgL_arg1847z00_515 =
																										CAR(BgL_cdrzd22019zd2_510);
																									{	/* Expand/if.scm 286 */
																										obj_t BgL_arg1852z00_943;

																										BgL_arg1852z00_943 =
																											MAKE_PAIR
																											(BGl_makezd2clausezd2zzexpand_ifz00
																											(BgL_varz00_477,
																												BgL_arg1845z00_513,
																												BgL_arg1846z00_514),
																											BgL_clausesz00_491);
																										{
																											obj_t BgL_clausesz00_1575;

																											obj_t BgL_expz00_1574;

																											BgL_expz00_1574 =
																												BgL_arg1847z00_515;
																											BgL_clausesz00_1575 =
																												BgL_arg1852z00_943;
																											BgL_clausesz00_491 =
																												BgL_clausesz00_1575;
																											BgL_expz00_490 =
																												BgL_expz00_1574;
																											goto
																												BgL_zc3anonymousza31829ze3z83_492;
																										}
																									}
																								}
																							else
																								{	/* Expand/if.scm 286 */
																									BgL_arg1827z00_486 = BFALSE;
																								}
																						}
																					else
																						{	/* Expand/if.scm 286 */
																							BgL_arg1827z00_486 = BFALSE;
																						}
																				}
																			else
																				{	/* Expand/if.scm 286 */
																					BgL_arg1827z00_486 = BFALSE;
																				}
																		}
																	else
																		{	/* Expand/if.scm 286 */
																			BgL_arg1827z00_486 = BFALSE;
																		}
																}
															else
																{	/* Expand/if.scm 286 */
																	BgL_arg1827z00_486 = BFALSE;
																}
														}
													else
														{	/* Expand/if.scm 286 */
															BgL_arg1827z00_486 = BFALSE;
														}
												}
										}
										BgL_arg1825z00_484 =
											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg1827z00_486, BNIL);
									}
									{	/* Expand/if.scm 278 */
										obj_t BgL_list1826z00_485;

										BgL_list1826z00_485 = MAKE_PAIR(BgL_arg1825z00_484, BNIL);
										BgL_arg1824z00_483 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_varz00_477, BgL_list1826z00_485);
									}
								}
								BgL_newzd2expzd2_479 =
									MAKE_PAIR(BgL_arg1823z00_482, BgL_arg1824z00_483);
							}
							{	/* Expand/if.scm 278 */

								{	/* Expand/if.scm 292 */
									obj_t BgL_auxz00_1580;

									BgL_auxz00_1580 = CAR(BgL_newzd2expzd2_479);
									SET_CAR(BgL_expz00_476, BgL_auxz00_1580);
								}
								{	/* Expand/if.scm 293 */
									obj_t BgL_auxz00_1583;

									BgL_auxz00_1583 = CDR(BgL_newzd2expzd2_479);
									SET_CDR(BgL_expz00_476, BgL_auxz00_1583);
								}
								return BgL_expz00_476;
							}
						}
					}
				}
			}
		}
	}



/* make-clause */
	obj_t BGl_makezd2clausezd2zzexpand_ifz00(obj_t BgL_varz00_15,
		obj_t BgL_testz00_16, obj_t BgL_alorsz00_17)
	{
		AN_OBJECT;
		{	/* Expand/if.scm 300 */
			{
				obj_t BgL_exp1z00_523;

				obj_t BgL_exp2z00_524;

				obj_t BgL_expz00_526;

				if (PAIRP(BgL_testz00_16))
					{	/* Expand/if.scm 306 */
						obj_t BgL_carzd22033zd2_530;

						obj_t BgL_cdrzd22034zd2_531;

						BgL_carzd22033zd2_530 = CAR(BgL_testz00_16);
						BgL_cdrzd22034zd2_531 = CDR(BgL_testz00_16);
						{

							if ((BgL_carzd22033zd2_530 == CNST_TABLE_REF(((long) 8))))
								{	/* Expand/if.scm 306 */
								BgL_kapzd22035zd2_532:
									if (PAIRP(BgL_cdrzd22034zd2_531))
										{	/* Expand/if.scm 306 */
											obj_t BgL_cdrzd22039zd2_559;

											BgL_cdrzd22039zd2_559 = CDR(BgL_cdrzd22034zd2_531);
											if (PAIRP(BgL_cdrzd22039zd2_559))
												{	/* Expand/if.scm 306 */
													if (NULLP(CDR(BgL_cdrzd22039zd2_559)))
														{	/* Expand/if.scm 306 */
															BgL_exp1z00_523 = CAR(BgL_cdrzd22034zd2_531);
															BgL_exp2z00_524 = CAR(BgL_cdrzd22039zd2_559);
															if ((BgL_exp1z00_523 == BgL_varz00_15))
																{	/* Expand/if.scm 309 */
																	obj_t BgL_arg1882z00_566;

																	obj_t BgL_arg1883z00_567;

																	BgL_arg1882z00_566 =
																		MAKE_PAIR
																		(BGl_valzd2ze3constantz31zzexpand_ifz00
																		(BgL_exp2z00_524), BNIL);
																	{	/* Expand/if.scm 309 */
																		obj_t BgL_list1887z00_570;

																		BgL_list1887z00_570 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg1883z00_567 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_alorsz00_17, BgL_list1887z00_570);
																	}
																	return
																		MAKE_PAIR(BgL_arg1882z00_566,
																		BgL_arg1883z00_567);
																}
															else
																{	/* Expand/if.scm 310 */
																	obj_t BgL_arg1888z00_571;

																	obj_t BgL_arg1890z00_572;

																	BgL_arg1888z00_571 =
																		MAKE_PAIR
																		(BGl_valzd2ze3constantz31zzexpand_ifz00
																		(BgL_exp1z00_523), BNIL);
																	{	/* Expand/if.scm 310 */
																		obj_t BgL_list1894z00_575;

																		BgL_list1894z00_575 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg1890z00_572 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_alorsz00_17, BgL_list1894z00_575);
																	}
																	return
																		MAKE_PAIR(BgL_arg1888z00_571,
																		BgL_arg1890z00_572);
																}
														}
													else
														{	/* Expand/if.scm 306 */
															return BFALSE;
														}
												}
											else
												{	/* Expand/if.scm 306 */
													return BFALSE;
												}
										}
									else
										{	/* Expand/if.scm 306 */
											return BFALSE;
										}
								}
							else
								{	/* Expand/if.scm 306 */
									if ((BgL_carzd22033zd2_530 == CNST_TABLE_REF(((long) 7))))
										{	/* Expand/if.scm 306 */
											goto BgL_kapzd22035zd2_532;
										}
									else
										{	/* Expand/if.scm 306 */
											if (
												(BgL_carzd22033zd2_530 == CNST_TABLE_REF(((long) 11))))
												{	/* Expand/if.scm 306 */
													goto BgL_kapzd22035zd2_532;
												}
											else
												{	/* Expand/if.scm 306 */
													if (
														(BgL_carzd22033zd2_530 ==
															CNST_TABLE_REF(((long) 9))))
														{	/* Expand/if.scm 306 */
															goto BgL_kapzd22035zd2_532;
														}
													else
														{	/* Expand/if.scm 306 */
															if (
																(BgL_carzd22033zd2_530 ==
																	CNST_TABLE_REF(((long) 10))))
																{	/* Expand/if.scm 306 */
																	goto BgL_kapzd22035zd2_532;
																}
															else
																{	/* Expand/if.scm 306 */
																	if (
																		(CAR(BgL_testz00_16) ==
																			CNST_TABLE_REF(((long) 12))))
																		{	/* Expand/if.scm 306 */
																			if (PAIRP(BgL_cdrzd22034zd2_531))
																				{	/* Expand/if.scm 306 */
																					obj_t BgL_cdrzd22060zd2_542;

																					BgL_cdrzd22060zd2_542 =
																						CDR(BgL_cdrzd22034zd2_531);
																					if (PAIRP(BgL_cdrzd22060zd2_542))
																						{	/* Expand/if.scm 306 */
																							obj_t BgL_carzd22062zd2_544;

																							BgL_carzd22062zd2_544 =
																								CAR(BgL_cdrzd22060zd2_542);
																							if (PAIRP(BgL_carzd22062zd2_544))
																								{	/* Expand/if.scm 306 */
																									obj_t BgL_cdrzd22066zd2_546;

																									BgL_cdrzd22066zd2_546 =
																										CDR(BgL_carzd22062zd2_544);
																									if (
																										(CAR(BgL_carzd22062zd2_544)
																											==
																											CNST_TABLE_REF(((long)
																													13))))
																										{	/* Expand/if.scm 306 */
																											if (PAIRP
																												(BgL_cdrzd22066zd2_546))
																												{	/* Expand/if.scm 306 */
																													if (NULLP(CDR
																															(BgL_cdrzd22066zd2_546)))
																														{	/* Expand/if.scm 306 */
																															if (NULLP(CDR
																																	(BgL_cdrzd22060zd2_542)))
																																{	/* Expand/if.scm 306 */
																																	BgL_expz00_526
																																		=
																																		CAR
																																		(BgL_cdrzd22066zd2_546);
																																	{	/* Expand/if.scm 312 */
																																		obj_t
																																			BgL_arg1895z00_576;
																																		{	/* Expand/if.scm 312 */
																																			obj_t
																																				BgL_list1896z00_577;
																																			BgL_list1896z00_577
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_arg1895z00_576
																																				=
																																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																				(BgL_alorsz00_17,
																																				BgL_list1896z00_577);
																																		}
																																		return
																																			MAKE_PAIR
																																			(BgL_expz00_526,
																																			BgL_arg1895z00_576);
																																	}
																																}
																															else
																																{	/* Expand/if.scm 306 */
																																	return BFALSE;
																																}
																														}
																													else
																														{	/* Expand/if.scm 306 */
																															return BFALSE;
																														}
																												}
																											else
																												{	/* Expand/if.scm 306 */
																													return BFALSE;
																												}
																										}
																									else
																										{	/* Expand/if.scm 306 */
																											return BFALSE;
																										}
																								}
																							else
																								{	/* Expand/if.scm 306 */
																									return BFALSE;
																								}
																						}
																					else
																						{	/* Expand/if.scm 306 */
																							return BFALSE;
																						}
																				}
																			else
																				{	/* Expand/if.scm 306 */
																					return BFALSE;
																				}
																		}
																	else
																		{	/* Expand/if.scm 306 */
																			return BFALSE;
																		}
																}
														}
												}
										}
								}
						}
					}
				else
					{	/* Expand/if.scm 306 */
						return BFALSE;
					}
			}
		}
	}



/* val->constant */
	obj_t BGl_valzd2ze3constantz31zzexpand_ifz00(obj_t BgL_vz00_578)
	{
		AN_OBJECT;
		{	/* Expand/if.scm 305 */
			{	/* Expand/if.scm 302 */
				bool_t BgL_testz00_1656;

				if (PAIRP(BgL_vz00_578))
					{	/* Expand/if.scm 302 */
						BgL_testz00_1656 =
							(CAR(BgL_vz00_578) == CNST_TABLE_REF(((long) 13)));
					}
				else
					{	/* Expand/if.scm 302 */
						BgL_testz00_1656 = ((bool_t) 0);
					}
				if (BgL_testz00_1656)
					{	/* Expand/if.scm 302 */
						return CAR(CDR(BgL_vz00_578));
					}
				else
					{	/* Expand/if.scm 302 */
						return BgL_vz00_578;
					}
			}
		}
	}



/* get-new-test-name */
	obj_t BGl_getzd2newzd2testzd2namezd2zzexpand_ifz00(obj_t BgL_stringz00_18)
	{
		AN_OBJECT;
		{	/* Expand/if.scm 317 */
			{	/* Expand/if.scm 318 */
				obj_t BgL_symbolz00_585;

				BgL_symbolz00_585 =
					BGl_gensymz00zz__r4_symbols_6_4z00(string_append_3
					(BGl_string2024z00zzexpand_ifz00, BgL_stringz00_18,
						BGl_string2025z00zzexpand_ifz00));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_symbolz00_585,
					CNST_TABLE_REF(((long) 15)), BTRUE);
				return BgL_symbolz00_585;
			}
		}
	}



/* expand-or */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2orzd2zzexpand_ifz00(obj_t BgL_xz00_19,
		obj_t BgL_ez00_20)
	{
		AN_OBJECT;
		{	/* Expand/if.scm 329 */
			{	/* Expand/if.scm 330 */
				obj_t BgL_resz00_587;

				BgL_resz00_587 =
					BGl_loopz72z72zzexpand_ifz00(BgL_xz00_19, CDR(BgL_xz00_19));
				{	/* Expand/if.scm 347 */
					obj_t BgL_arg1903z00_588;

					BgL_arg1903z00_588 =
						PROCEDURE_ENTRY(BgL_ez00_20) (BgL_ez00_20, BgL_resz00_587,
						BgL_ez00_20, BEOA);
					return BGl_replacez12z12zztools_miscz00(BgL_xz00_19,
						BgL_arg1903z00_588);
				}
			}
		}
	}



/* loop' */
	obj_t BGl_loopz72z72zzexpand_ifz00(obj_t BgL_xz00_1052, obj_t BgL_sorz00_591)
	{
		AN_OBJECT;
		{	/* Expand/if.scm 330 */
			if (NULLP(BgL_sorz00_591))
				{	/* Expand/if.scm 332 */
					return BFALSE;
				}
			else
				{	/* Expand/if.scm 332 */
					if (PAIRP(BgL_sorz00_591))
						{	/* Expand/if.scm 334 */
							if (NULLP(CDR(BgL_sorz00_591)))
								{	/* Expand/if.scm 336 */
									return CAR(BgL_sorz00_591);
								}
							else
								{	/* Expand/if.scm 339 */
									obj_t BgL_testz00_596;

									BgL_testz00_596 =
										BGl_getzd2newzd2testzd2namezd2zzexpand_ifz00
										(BGl_string2026z00zzexpand_ifz00);
									{	/* Expand/if.scm 339 */
										obj_t BgL_resz00_597;

										{	/* Expand/if.scm 340 */
											obj_t BgL_arg1915z00_604;

											obj_t BgL_arg1916z00_605;

											BgL_arg1915z00_604 = CNST_TABLE_REF(((long) 2));
											{	/* Expand/if.scm 340 */
												obj_t BgL_arg1918z00_606;

												obj_t BgL_arg1919z00_607;

												{	/* Expand/if.scm 340 */
													obj_t BgL_arg1923z00_611;

													{	/* Expand/if.scm 340 */
														obj_t BgL_arg1925z00_613;

														{	/* Expand/if.scm 340 */
															obj_t BgL_arg1926z00_614;

															BgL_arg1926z00_614 = CAR(BgL_sorz00_591);
															{	/* Expand/if.scm 340 */
																obj_t BgL_list1928z00_616;

																BgL_list1928z00_616 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg1925z00_613 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg1926z00_614, BgL_list1928z00_616);
														}}
														BgL_arg1923z00_611 =
															MAKE_PAIR(BgL_testz00_596, BgL_arg1925z00_613);
													}
													BgL_arg1918z00_606 =
														MAKE_PAIR(BgL_arg1923z00_611, BNIL);
												}
												{	/* Expand/if.scm 341 */
													obj_t BgL_arg1929z00_617;

													obj_t BgL_arg1930z00_618;

													BgL_arg1929z00_617 = CNST_TABLE_REF(((long) 0));
													{	/* Expand/if.scm 341 */
														obj_t BgL_arg1931z00_619;

														BgL_arg1931z00_619 =
															BGl_loopz72z72zzexpand_ifz00(BgL_xz00_1052,
															CDR(BgL_sorz00_591));
														{	/* Expand/if.scm 341 */
															obj_t BgL_list1933z00_621;

															{	/* Expand/if.scm 341 */
																obj_t BgL_arg1935z00_622;

																{	/* Expand/if.scm 341 */
																	obj_t BgL_arg1937z00_623;

																	BgL_arg1937z00_623 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg1935z00_622 =
																		MAKE_PAIR(BgL_arg1931z00_619,
																		BgL_arg1937z00_623);
																}
																BgL_list1933z00_621 =
																	MAKE_PAIR(BgL_testz00_596,
																	BgL_arg1935z00_622);
															}
															BgL_arg1930z00_618 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_testz00_596, BgL_list1933z00_621);
													}}
													BgL_arg1919z00_607 =
														MAKE_PAIR(BgL_arg1929z00_617, BgL_arg1930z00_618);
												}
												{	/* Expand/if.scm 340 */
													obj_t BgL_list1921z00_609;

													{	/* Expand/if.scm 340 */
														obj_t BgL_arg1922z00_610;

														BgL_arg1922z00_610 = MAKE_PAIR(BNIL, BNIL);
														BgL_list1921z00_609 =
															MAKE_PAIR(BgL_arg1919z00_607, BgL_arg1922z00_610);
													}
													BgL_arg1916z00_605 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg1918z00_606, BgL_list1921z00_609);
											}}
											BgL_resz00_597 =
												MAKE_PAIR(BgL_arg1915z00_604, BgL_arg1916z00_605);
										}
										{	/* Expand/if.scm 340 */

											{	/* Expand/if.scm 343 */
												bool_t BgL_testz00_1700;

												{	/* Expand/if.scm 343 */
													obj_t BgL_auxz00_1701;

													BgL_auxz00_1701 = CAR(BgL_sorz00_591);
													BgL_testz00_1700 = EXTENDED_PAIRP(BgL_auxz00_1701);
												}
												if (BgL_testz00_1700)
													{	/* Expand/if.scm 344 */
														obj_t BgL_arg1909z00_599;

														obj_t BgL_arg1910z00_600;

														obj_t BgL_arg1911z00_601;

														BgL_arg1909z00_599 = CAR(BgL_resz00_597);
														BgL_arg1910z00_600 = CDR(BgL_resz00_597);
														BgL_arg1911z00_601 = CER(CAR(BgL_sorz00_591));
														{	/* Expand/if.scm 344 */
															obj_t BgL_res2020z00_1011;

															BgL_res2020z00_1011 =
																MAKE_EXTENDED_PAIR(BgL_arg1909z00_599,
																BgL_arg1910z00_600, BgL_arg1911z00_601);
															return BgL_res2020z00_1011;
														}
													}
												else
													{	/* Expand/if.scm 343 */
														return BgL_resz00_597;
													}
											}
										}
									}
								}
						}
					else
						{	/* Expand/if.scm 334 */
							return
								BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 4)),
								BGl_string2022z00zzexpand_ifz00, BgL_xz00_1052);
		}}}
	}



/* _expand-or */
	obj_t BGl__expandzd2orzd2zzexpand_ifz00(obj_t BgL_envz00_1042,
		obj_t BgL_xz00_1043, obj_t BgL_ez00_1044)
	{
		AN_OBJECT;
		{	/* Expand/if.scm 329 */
			return BGl_expandzd2orzd2zzexpand_ifz00(BgL_xz00_1043, BgL_ez00_1044);
		}
	}



/* expand-and */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2andzd2zzexpand_ifz00(obj_t BgL_xz00_21,
		obj_t BgL_ez00_22)
	{
		AN_OBJECT;
		{	/* Expand/if.scm 352 */
			{	/* Expand/if.scm 353 */
				obj_t BgL_resz00_627;

				BgL_resz00_627 =
					BGl_loopz00zzexpand_ifz00(BgL_xz00_21, CDR(BgL_xz00_21));
				{	/* Expand/if.scm 370 */
					obj_t BgL_arg1941z00_628;

					BgL_arg1941z00_628 =
						PROCEDURE_ENTRY(BgL_ez00_22) (BgL_ez00_22, BgL_resz00_627,
						BgL_ez00_22, BEOA);
					return BGl_replacez12z12zztools_miscz00(BgL_xz00_21,
						BgL_arg1941z00_628);
				}
			}
		}
	}



/* loop */
	obj_t BGl_loopz00zzexpand_ifz00(obj_t BgL_xz00_1051, obj_t BgL_sandz00_631)
	{
		AN_OBJECT;
		{	/* Expand/if.scm 353 */
			if (NULLP(BgL_sandz00_631))
				{	/* Expand/if.scm 355 */
					return BTRUE;
				}
			else
				{	/* Expand/if.scm 355 */
					if (PAIRP(BgL_sandz00_631))
						{	/* Expand/if.scm 357 */
							if (NULLP(CDR(BgL_sandz00_631)))
								{	/* Expand/if.scm 359 */
									return CAR(BgL_sandz00_631);
								}
							else
								{	/* Expand/if.scm 362 */
									obj_t BgL_testz00_636;

									BgL_testz00_636 =
										BGl_getzd2newzd2testzd2namezd2zzexpand_ifz00
										(BGl_string2027z00zzexpand_ifz00);
									{	/* Expand/if.scm 362 */
										obj_t BgL_resz00_637;

										{	/* Expand/if.scm 363 */
											obj_t BgL_arg1957z00_644;

											obj_t BgL_arg1958z00_645;

											BgL_arg1957z00_644 = CNST_TABLE_REF(((long) 2));
											{	/* Expand/if.scm 363 */
												obj_t BgL_arg1962z00_646;

												obj_t BgL_arg1963z00_647;

												{	/* Expand/if.scm 363 */
													obj_t BgL_arg1970z00_651;

													{	/* Expand/if.scm 363 */
														obj_t BgL_arg1972z00_653;

														{	/* Expand/if.scm 363 */
															obj_t BgL_arg1976z00_654;

															BgL_arg1976z00_654 = CAR(BgL_sandz00_631);
															{	/* Expand/if.scm 363 */
																obj_t BgL_list1978z00_656;

																BgL_list1978z00_656 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg1972z00_653 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg1976z00_654, BgL_list1978z00_656);
														}}
														BgL_arg1970z00_651 =
															MAKE_PAIR(BgL_testz00_636, BgL_arg1972z00_653);
													}
													BgL_arg1962z00_646 =
														MAKE_PAIR(BgL_arg1970z00_651, BNIL);
												}
												{	/* Expand/if.scm 364 */
													obj_t BgL_arg1984z00_657;

													obj_t BgL_arg1987z00_658;

													BgL_arg1984z00_657 = CNST_TABLE_REF(((long) 0));
													{	/* Expand/if.scm 364 */
														obj_t BgL_arg1988z00_659;

														BgL_arg1988z00_659 =
															BGl_loopz00zzexpand_ifz00(BgL_xz00_1051,
															CDR(BgL_sandz00_631));
														{	/* Expand/if.scm 364 */
															obj_t BgL_list1990z00_661;

															{	/* Expand/if.scm 364 */
																obj_t BgL_arg1991z00_662;

																{	/* Expand/if.scm 364 */
																	obj_t BgL_arg1992z00_663;

																	BgL_arg1992z00_663 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg1991z00_662 =
																		MAKE_PAIR(BFALSE, BgL_arg1992z00_663);
																}
																BgL_list1990z00_661 =
																	MAKE_PAIR(BgL_arg1988z00_659,
																	BgL_arg1991z00_662);
															}
															BgL_arg1987z00_658 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_testz00_636, BgL_list1990z00_661);
													}}
													BgL_arg1963z00_647 =
														MAKE_PAIR(BgL_arg1984z00_657, BgL_arg1987z00_658);
												}
												{	/* Expand/if.scm 363 */
													obj_t BgL_list1968z00_649;

													{	/* Expand/if.scm 363 */
														obj_t BgL_arg1969z00_650;

														BgL_arg1969z00_650 = MAKE_PAIR(BNIL, BNIL);
														BgL_list1968z00_649 =
															MAKE_PAIR(BgL_arg1963z00_647, BgL_arg1969z00_650);
													}
													BgL_arg1958z00_645 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg1962z00_646, BgL_list1968z00_649);
											}}
											BgL_resz00_637 =
												MAKE_PAIR(BgL_arg1957z00_644, BgL_arg1958z00_645);
										}
										{	/* Expand/if.scm 363 */

											{	/* Expand/if.scm 366 */
												bool_t BgL_testz00_1744;

												{	/* Expand/if.scm 366 */
													obj_t BgL_auxz00_1745;

													BgL_auxz00_1745 = CAR(BgL_sandz00_631);
													BgL_testz00_1744 = EXTENDED_PAIRP(BgL_auxz00_1745);
												}
												if (BgL_testz00_1744)
													{	/* Expand/if.scm 367 */
														obj_t BgL_arg1948z00_639;

														obj_t BgL_arg1949z00_640;

														obj_t BgL_arg1950z00_641;

														BgL_arg1948z00_639 = CAR(BgL_resz00_637);
														BgL_arg1949z00_640 = CDR(BgL_resz00_637);
														BgL_arg1950z00_641 = CER(CAR(BgL_sandz00_631));
														{	/* Expand/if.scm 367 */
															obj_t BgL_res2021z00_1029;

															BgL_res2021z00_1029 =
																MAKE_EXTENDED_PAIR(BgL_arg1948z00_639,
																BgL_arg1949z00_640, BgL_arg1950z00_641);
															return BgL_res2021z00_1029;
														}
													}
												else
													{	/* Expand/if.scm 366 */
														return BgL_resz00_637;
													}
											}
										}
									}
								}
						}
					else
						{	/* Expand/if.scm 357 */
							return
								BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 5)),
								BGl_string2022z00zzexpand_ifz00, BgL_xz00_1051);
		}}}
	}



/* _expand-and */
	obj_t BGl__expandzd2andzd2zzexpand_ifz00(obj_t BgL_envz00_1045,
		obj_t BgL_xz00_1046, obj_t BgL_ez00_1047)
	{
		AN_OBJECT;
		{	/* Expand/if.scm 352 */
			return BGl_expandzd2andzd2zzexpand_ifz00(BgL_xz00_1046, BgL_ez00_1047);
		}
	}



/* expand-not */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2notzd2zzexpand_ifz00(obj_t BgL_xz00_23,
		obj_t BgL_ez00_24)
	{
		AN_OBJECT;
		{	/* Expand/if.scm 375 */
			{
				obj_t BgL_expz00_667;

				if (PAIRP(BgL_xz00_23))
					{	/* Expand/if.scm 376 */
						obj_t BgL_cdrzd22079zd2_672;

						BgL_cdrzd22079zd2_672 = CDR(BgL_xz00_23);
						if (PAIRP(BgL_cdrzd22079zd2_672))
							{	/* Expand/if.scm 376 */
								if (NULLP(CDR(BgL_cdrzd22079zd2_672)))
									{	/* Expand/if.scm 376 */
										BgL_expz00_667 = CAR(BgL_cdrzd22079zd2_672);
										{	/* Expand/if.scm 378 */
											obj_t BgL_resz00_677;

											{	/* Expand/if.scm 378 */
												obj_t BgL_arg2001z00_678;

												{	/* Expand/if.scm 378 */
													obj_t BgL_arg2002z00_679;

													obj_t BgL_arg2003z00_680;

													BgL_arg2002z00_679 = CNST_TABLE_REF(((long) 0));
													{	/* Expand/if.scm 378 */
														obj_t BgL_list2004z00_681;

														{	/* Expand/if.scm 378 */
															obj_t BgL_arg2005z00_682;

															{	/* Expand/if.scm 378 */
																obj_t BgL_arg2012z00_683;

																BgL_arg2012z00_683 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2005z00_682 =
																	MAKE_PAIR(BTRUE, BgL_arg2012z00_683);
															}
															BgL_list2004z00_681 =
																MAKE_PAIR(BFALSE, BgL_arg2005z00_682);
														}
														BgL_arg2003z00_680 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_expz00_667, BgL_list2004z00_681);
													}
													BgL_arg2001z00_678 =
														MAKE_PAIR(BgL_arg2002z00_679, BgL_arg2003z00_680);
												}
												BgL_resz00_677 =
													PROCEDURE_ENTRY(BgL_ez00_24) (BgL_ez00_24,
													BgL_arg2001z00_678, BgL_ez00_24, BEOA);
											}
											return
												BGl_replacez12z12zztools_miscz00(BgL_xz00_23,
												BgL_resz00_677);
										}
									}
								else
									{	/* Expand/if.scm 376 */
									BgL_tagzd22074zd2_669:
										return
											BGl_errorz00zz__errorz00(BFALSE,
											BGl_string2028z00zzexpand_ifz00, BgL_xz00_23);
									}
							}
						else
							{	/* Expand/if.scm 376 */
								goto BgL_tagzd22074zd2_669;
							}
					}
				else
					{	/* Expand/if.scm 376 */
						goto BgL_tagzd22074zd2_669;
					}
			}
		}
	}



/* _expand-not */
	obj_t BGl__expandzd2notzd2zzexpand_ifz00(obj_t BgL_envz00_1048,
		obj_t BgL_xz00_1049, obj_t BgL_ez00_1050)
	{
		AN_OBJECT;
		{	/* Expand/if.scm 375 */
			return BGl_expandzd2notzd2zzexpand_ifz00(BgL_xz00_1049, BgL_ez00_1050);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzexpand_ifz00()
	{
		AN_OBJECT;
		{	/* Expand/if.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzexpand_ifz00()
	{
		AN_OBJECT;
		{	/* Expand/if.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzexpand_ifz00()
	{
		AN_OBJECT;
		{	/* Expand/if.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string2029z00zzexpand_ifz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string2029z00zzexpand_ifz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string2029z00zzexpand_ifz00));
			return
				BGl_modulezd2initializa7ationz75zzexpand_epsz00(((long) 46603742),
				BSTRING_TO_STRING(BGl_string2029z00zzexpand_ifz00));
		}
	}

#ifdef __cplusplus
}
#endif
