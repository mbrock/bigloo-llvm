/*===========================================================================*/
/*   (Expand/garith.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Expand/garith.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2gmaxzd2zzexpand_garithmetiquez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzexpand_garithmetiquez00 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_expandzd2gminzd2zzexpand_garithmetiquez00(obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzexpand_garithmetiquez00();
	static obj_t BGl__expandzd2gza2z70zzexpand_garithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__expandzd2gzb2z60zzexpand_garithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__expandzd2gzd2z00zzexpand_garithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__expandzd2gzf2z20zzexpand_garithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__expandzd2gzc3zd3zc2zzexpand_garithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__expandzd2gzc3z11zzexpand_garithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__expandzd2gzd3z01zzexpand_garithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__expandzd2gze3z31zzexpand_garithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__expandzd2gze3zd3ze2zzexpand_garithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzexpand_garithmetiquez00();
	static obj_t BGl__expandzd2gmaxzd2zzexpand_garithmetiquez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__expandzd2gminzd2zzexpand_garithmetiquez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_2za2za2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_2zf2zf2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzexpand_garithmetiquez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2gzc3zd3zc2zzexpand_garithmetiquez00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2gze3zd3ze2zzexpand_garithmetiquez00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2gza2z70zzexpand_garithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2gzb2z60zzexpand_garithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2gzd2z00zzexpand_garithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2gzf2z20zzexpand_garithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2gzc3z11zzexpand_garithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2gzd3z01zzexpand_garithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2gze3z31zzexpand_garithmetiquez00(obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzexpand_garithmetiquez00();
	static obj_t BGl_methodzd2initzd2zzexpand_garithmetiquez00();
	static obj_t __cnst[25];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2gminzd2envz00zzexpand_garithmetiquez00,
		BgL_bgl__expandza7d2gminza7d2140z00,
		BGl__expandzd2gminzd2zzexpand_garithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2gzd3zd2envzd3zzexpand_garithmetiquez00,
		BgL_bgl__expandza7d2gza7d3za702141za7,
		BGl__expandzd2gzd3z01zzexpand_garithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2gzc3zd3zd2envz10zzexpand_garithmetiquez00,
		BgL_bgl__expandza7d2gza7c3za7d2142za7,
		BGl__expandzd2gzc3zd3zc2zzexpand_garithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2gza2zd2envza2zzexpand_garithmetiquez00,
		BgL_bgl__expandza7d2gza7a2za772143za7,
		BGl__expandzd2gza2z70zzexpand_garithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2gzf2zd2envzf2zzexpand_garithmetiquez00,
		BgL_bgl__expandza7d2gza7f2za722144za7,
		BGl__expandzd2gzf2z20zzexpand_garithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2gze3zd2envze3zzexpand_garithmetiquez00,
		BgL_bgl__expandza7d2gza7e3za732145za7,
		BGl__expandzd2gze3z31zzexpand_garithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2gzd2zd2envzd2zzexpand_garithmetiquez00,
		BgL_bgl__expandza7d2gza7d2za702146za7,
		BGl__expandzd2gzd2z00zzexpand_garithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2gze3zd3zd2envz30zzexpand_garithmetiquez00,
		BgL_bgl__expandza7d2gza7e3za7d2147za7,
		BGl__expandzd2gze3zd3ze2zzexpand_garithmetiquez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2130z00zzexpand_garithmetiquez00,
		BgL_bgl_string2130za700za7za7e2148za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string2129z00zzexpand_garithmetiquez00,
		BgL_bgl_string2129za700za7za7e2149za7, "=", 1);
	      DEFINE_STRING(BGl_string2131z00zzexpand_garithmetiquez00,
		BgL_bgl_string2131za700za7za7e2150za7, "<", 1);
	      DEFINE_STRING(BGl_string2132z00zzexpand_garithmetiquez00,
		BgL_bgl_string2132za700za7za7e2151za7, ">", 1);
	      DEFINE_STRING(BGl_string2133z00zzexpand_garithmetiquez00,
		BgL_bgl_string2133za700za7za7e2152za7, "<=", 2);
	      DEFINE_STRING(BGl_string2134z00zzexpand_garithmetiquez00,
		BgL_bgl_string2134za700za7za7e2153za7, ">=", 2);
	      DEFINE_STRING(BGl_string2135z00zzexpand_garithmetiquez00,
		BgL_bgl_string2135za700za7za7e2154za7,
		"Incorrect number of arguments for `max'", 39);
	      DEFINE_STRING(BGl_string2136z00zzexpand_garithmetiquez00,
		BgL_bgl_string2136za700za7za7e2155za7,
		"Incorrect number of arguments for `min'", 39);
	      DEFINE_STRING(BGl_string2137z00zzexpand_garithmetiquez00,
		BgL_bgl_string2137za700za7za7e2156za7,
		"min 2min max 2max y x let >= 2>= <= 2<= > 2> < 2< = and 2= 2/ * 2* 2- - + 2+ ",
		77);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2gzc3zd2envzc3zzexpand_garithmetiquez00,
		BgL_bgl__expandza7d2gza7c3za712157za7,
		BGl__expandzd2gzc3z11zzexpand_garithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2gzb2zd2envzb2zzexpand_garithmetiquez00,
		BgL_bgl__expandza7d2gza7b2za762158za7,
		BGl__expandzd2gzb2z60zzexpand_garithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2gmaxzd2envz00zzexpand_garithmetiquez00,
		BgL_bgl__expandza7d2gmaxza7d2159z00,
		BGl__expandzd2gmaxzd2zzexpand_garithmetiquez00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzexpand_garithmetiquez00(long
		BgL_checksumz00_1044, char *BgL_fromz00_1045)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzexpand_garithmetiquez00))
				{
					BGl_requirezd2initializa7ationz75zzexpand_garithmetiquez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzexpand_garithmetiquez00();
					BGl_cnstzd2initzd2zzexpand_garithmetiquez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzexpand_garithmetiquez00()
	{
		AN_OBJECT;
		{	/* Expand/garith.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"expand_garithmetique");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"expand_garithmetique");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"expand_garithmetique");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"expand_garithmetique");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzexpand_garithmetiquez00()
	{
		AN_OBJECT;
		{	/* Expand/garith.scm 15 */
			{	/* Expand/garith.scm 15 */
				obj_t BgL_cportz00_1036;

				BgL_cportz00_1036 =
					bgl_open_input_string(BGl_string2137z00zzexpand_garithmetiquez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1037;

					BgL_iz00_1037 = ((long) 24);
				BgL_loopz00_1038:
					if ((BgL_iz00_1037 == ((long) -1)))
						{	/* Expand/garith.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Expand/garith.scm 15 */
							{	/* Expand/garith.scm 15 */
								obj_t BgL_arg2139z00_1040;

								{	/* Expand/garith.scm 15 */

									{	/* Expand/garith.scm 15 */
										obj_t BgL_locationz00_1042;

										BgL_locationz00_1042 = BBOOL(((bool_t) 0));
										{	/* Expand/garith.scm 15 */

											BgL_arg2139z00_1040 =
												BGl_readz00zz__readerz00(BgL_cportz00_1036,
												BgL_locationz00_1042);
										}
									}
								}
								{	/* Expand/garith.scm 15 */
									int BgL_auxz00_1061;

									BgL_auxz00_1061 = (int) (BgL_iz00_1037);
									CNST_TABLE_SET(BgL_auxz00_1061, BgL_arg2139z00_1040);
							}}
							{	/* Expand/garith.scm 15 */
								int BgL_auxz00_1043;

								BgL_auxz00_1043 = (int) ((BgL_iz00_1037 - ((long) 1)));
								{
									long BgL_iz00_1066;

									BgL_iz00_1066 = (long) (BgL_auxz00_1043);
									BgL_iz00_1037 = BgL_iz00_1066;
									goto BgL_loopz00_1038;
								}
							}
						}
				}
			}
		}
	}



/* expand-g+ */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2gzb2z60zzexpand_garithmetiquez00(obj_t
		BgL_xz00_2, obj_t BgL_ez00_3)
	{
		AN_OBJECT;
		{	/* Expand/garith.scm 37 */
			{
				obj_t BgL_xz00_116;

				obj_t BgL_yz00_117;

				obj_t BgL_xz00_113;

				obj_t BgL_yz00_114;

				if (PAIRP(BgL_xz00_2))
					{	/* Expand/garith.scm 38 */
						if (NULLP(CDR(BgL_xz00_2)))
							{	/* Expand/garith.scm 38 */
								return BINT(((long) 0));
							}
						else
							{	/* Expand/garith.scm 38 */
								obj_t BgL_cdrzd21402zd2_122;

								BgL_cdrzd21402zd2_122 = CDR(BgL_xz00_2);
								if (PAIRP(BgL_cdrzd21402zd2_122))
									{	/* Expand/garith.scm 38 */
										if (NULLP(CDR(BgL_cdrzd21402zd2_122)))
											{	/* Expand/garith.scm 38 */
												obj_t BgL_arg1513z00_125;

												BgL_arg1513z00_125 = CAR(BgL_cdrzd21402zd2_122);
												return
													PROCEDURE_ENTRY(BgL_ez00_3) (BgL_ez00_3,
													BgL_arg1513z00_125, BgL_ez00_3, BEOA);
											}
										else
											{	/* Expand/garith.scm 38 */
												obj_t BgL_cdrzd21418zd2_127;

												BgL_cdrzd21418zd2_127 = CDR(BgL_cdrzd21402zd2_122);
												if (PAIRP(BgL_cdrzd21418zd2_127))
													{	/* Expand/garith.scm 38 */
														if (NULLP(CDR(BgL_cdrzd21418zd2_127)))
															{	/* Expand/garith.scm 38 */
																BgL_xz00_113 = CAR(BgL_cdrzd21402zd2_122);
																BgL_yz00_114 = CAR(BgL_cdrzd21418zd2_127);
																{	/* Expand/garith.scm 45 */
																	bool_t BgL_testz00_1089;

																	{	/* Expand/garith.scm 45 */
																		bool_t BgL_testz00_1090;

																		{	/* Expand/garith.scm 45 */
																			bool_t BgL__ortest_1508z00_723;

																			BgL__ortest_1508z00_723 =
																				INTEGERP(BgL_xz00_113);
																			if (BgL__ortest_1508z00_723)
																				{	/* Expand/garith.scm 45 */
																					BgL_testz00_1090 =
																						BgL__ortest_1508z00_723;
																				}
																			else
																				{	/* Expand/garith.scm 45 */
																					BgL_testz00_1090 =
																						REALP(BgL_xz00_113);
																				}
																		}
																		if (BgL_testz00_1090)
																			{	/* Expand/garith.scm 45 */
																				bool_t BgL__ortest_1508z00_727;

																				BgL__ortest_1508z00_727 =
																					INTEGERP(BgL_yz00_114);
																				if (BgL__ortest_1508z00_727)
																					{	/* Expand/garith.scm 45 */
																						BgL_testz00_1089 =
																							BgL__ortest_1508z00_727;
																					}
																				else
																					{	/* Expand/garith.scm 45 */
																						BgL_testz00_1089 =
																							REALP(BgL_yz00_114);
																					}
																			}
																		else
																			{	/* Expand/garith.scm 45 */
																				BgL_testz00_1089 = ((bool_t) 0);
																			}
																	}
																	if (BgL_testz00_1089)
																		{	/* Expand/garith.scm 45 */
																			return
																				BGl_2zb2zb2zz__r4_numbers_6_5z00
																				(BgL_xz00_113, BgL_yz00_114);
																		}
																	else
																		{	/* Expand/garith.scm 48 */
																			obj_t BgL_arg1526z00_142;

																			{	/* Expand/garith.scm 48 */
																				obj_t BgL_arg1527z00_143;

																				obj_t BgL_arg1529z00_144;

																				BgL_arg1527z00_143 =
																					CNST_TABLE_REF(((long) 0));
																				{	/* Expand/garith.scm 48 */
																					obj_t BgL_list1530z00_145;

																					{	/* Expand/garith.scm 48 */
																						obj_t BgL_arg1531z00_146;

																						BgL_arg1531z00_146 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list1530z00_145 =
																							MAKE_PAIR(BgL_yz00_114,
																							BgL_arg1531z00_146);
																					}
																					BgL_arg1529z00_144 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_xz00_113, BgL_list1530z00_145);
																				}
																				BgL_arg1526z00_142 =
																					MAKE_PAIR(BgL_arg1527z00_143,
																					BgL_arg1529z00_144);
																			}
																			return
																				PROCEDURE_ENTRY(BgL_ez00_3) (BgL_ez00_3,
																				BgL_arg1526z00_142, BgL_ez00_3, BEOA);
																		}
																}
															}
														else
															{	/* Expand/garith.scm 38 */
																BgL_xz00_116 = CAR(BgL_cdrzd21402zd2_122);
																BgL_yz00_117 = CDR(BgL_cdrzd21402zd2_122);
															BgL_tagzd21392zd2_118:
																{	/* Expand/garith.scm 50 */
																	obj_t BgL_arg1533z00_148;

																	{	/* Expand/garith.scm 50 */
																		obj_t BgL_arg1534z00_149;

																		obj_t BgL_arg1535z00_150;

																		BgL_arg1534z00_149 =
																			CNST_TABLE_REF(((long) 0));
																		{	/* Expand/garith.scm 50 */
																			obj_t BgL_arg1536z00_151;

																			{	/* Expand/garith.scm 50 */
																				obj_t BgL_arg1540z00_155;

																				obj_t BgL_arg1541z00_156;

																				BgL_arg1540z00_155 =
																					CNST_TABLE_REF(((long) 1));
																				BgL_arg1541z00_156 =
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_yz00_117, BNIL);
																				BgL_arg1536z00_151 =
																					MAKE_PAIR(BgL_arg1540z00_155,
																					BgL_arg1541z00_156);
																			}
																			{	/* Expand/garith.scm 50 */
																				obj_t BgL_list1538z00_153;

																				{	/* Expand/garith.scm 50 */
																					obj_t BgL_arg1539z00_154;

																					BgL_arg1539z00_154 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list1538z00_153 =
																						MAKE_PAIR(BgL_arg1536z00_151,
																						BgL_arg1539z00_154);
																				}
																				BgL_arg1535z00_150 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_xz00_116, BgL_list1538z00_153);
																		}}
																		BgL_arg1533z00_148 =
																			MAKE_PAIR(BgL_arg1534z00_149,
																			BgL_arg1535z00_150);
																	}
																	return
																		PROCEDURE_ENTRY(BgL_ez00_3) (BgL_ez00_3,
																		BgL_arg1533z00_148, BgL_ez00_3, BEOA);
																}
															}
													}
												else
													{
														obj_t BgL_yz00_1121;

														obj_t BgL_xz00_1119;

														BgL_xz00_1119 = CAR(BgL_cdrzd21402zd2_122);
														BgL_yz00_1121 = CDR(BgL_cdrzd21402zd2_122);
														BgL_yz00_117 = BgL_yz00_1121;
														BgL_xz00_116 = BgL_xz00_1119;
														goto BgL_tagzd21392zd2_118;
													}
											}
									}
								else
									{	/* Expand/garith.scm 38 */
										return BFALSE;
									}
							}
					}
				else
					{	/* Expand/garith.scm 38 */
						return BFALSE;
					}
			}
		}
	}



/* _expand-g+ */
	obj_t BGl__expandzd2gzb2z60zzexpand_garithmetiquez00(obj_t BgL_envz00_1003,
		obj_t BgL_xz00_1004, obj_t BgL_ez00_1005)
	{
		AN_OBJECT;
		{	/* Expand/garith.scm 37 */
			return
				BGl_expandzd2gzb2z60zzexpand_garithmetiquez00(BgL_xz00_1004,
				BgL_ez00_1005);
		}
	}



/* expand-g- */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2gzd2z00zzexpand_garithmetiquez00(obj_t
		BgL_xz00_4, obj_t BgL_ez00_5)
	{
		AN_OBJECT;
		{	/* Expand/garith.scm 55 */
			{
				obj_t BgL_xz00_162;

				obj_t BgL_yz00_163;

				obj_t BgL_xz00_159;

				obj_t BgL_yz00_160;

				obj_t BgL_xz00_157;

				if (PAIRP(BgL_xz00_4))
					{	/* Expand/garith.scm 56 */
						obj_t BgL_cdrzd21482zd2_167;

						BgL_cdrzd21482zd2_167 = CDR(BgL_xz00_4);
						if (PAIRP(BgL_cdrzd21482zd2_167))
							{	/* Expand/garith.scm 56 */
								if (NULLP(CDR(BgL_cdrzd21482zd2_167)))
									{	/* Expand/garith.scm 56 */
										BgL_xz00_157 = CAR(BgL_cdrzd21482zd2_167);
										if (INTEGERP(BgL_xz00_157))
											{	/* Expand/garith.scm 59 */
												return BINT(NEG((long) CINT(BgL_xz00_157)));
											}
										else
											{	/* Expand/garith.scm 59 */
												if (REALP(BgL_xz00_157))
													{	/* Expand/garith.scm 61 */
														return
															DOUBLE_TO_REAL(NEG(REAL_TO_DOUBLE(BgL_xz00_157)));
													}
												else
													{	/* Expand/garith.scm 64 */
														obj_t BgL_arg1559z00_187;

														obj_t BgL_arg1560z00_188;

														BgL_arg1559z00_187 = CNST_TABLE_REF(((long) 2));
														{	/* Expand/garith.scm 64 */
															obj_t BgL_arg1562z00_189;

															BgL_arg1562z00_189 =
																PROCEDURE_ENTRY(BgL_ez00_5) (BgL_ez00_5,
																BgL_xz00_157, BgL_ez00_5, BEOA);
															{	/* Expand/garith.scm 64 */
																obj_t BgL_list1564z00_191;

																BgL_list1564z00_191 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg1560z00_188 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg1562z00_189, BgL_list1564z00_191);
														}}
														return
															MAKE_PAIR(BgL_arg1559z00_187, BgL_arg1560z00_188);
													}
											}
									}
								else
									{	/* Expand/garith.scm 56 */
										obj_t BgL_cdrzd21498zd2_172;

										BgL_cdrzd21498zd2_172 = CDR(BgL_cdrzd21482zd2_167);
										if (PAIRP(BgL_cdrzd21498zd2_172))
											{	/* Expand/garith.scm 56 */
												if (NULLP(CDR(BgL_cdrzd21498zd2_172)))
													{	/* Expand/garith.scm 56 */
														BgL_xz00_159 = CAR(BgL_cdrzd21482zd2_167);
														BgL_yz00_160 = CAR(BgL_cdrzd21498zd2_172);
														{	/* Expand/garith.scm 67 */
															bool_t BgL_testz00_1155;

															{	/* Expand/garith.scm 67 */
																bool_t BgL_testz00_1156;

																{	/* Expand/garith.scm 67 */
																	bool_t BgL__ortest_1508z00_756;

																	BgL__ortest_1508z00_756 =
																		INTEGERP(BgL_xz00_159);
																	if (BgL__ortest_1508z00_756)
																		{	/* Expand/garith.scm 67 */
																			BgL_testz00_1156 =
																				BgL__ortest_1508z00_756;
																		}
																	else
																		{	/* Expand/garith.scm 67 */
																			BgL_testz00_1156 = REALP(BgL_xz00_159);
																		}
																}
																if (BgL_testz00_1156)
																	{	/* Expand/garith.scm 67 */
																		bool_t BgL__ortest_1508z00_760;

																		BgL__ortest_1508z00_760 =
																			INTEGERP(BgL_yz00_160);
																		if (BgL__ortest_1508z00_760)
																			{	/* Expand/garith.scm 67 */
																				BgL_testz00_1155 =
																					BgL__ortest_1508z00_760;
																			}
																		else
																			{	/* Expand/garith.scm 67 */
																				BgL_testz00_1155 = REALP(BgL_yz00_160);
																			}
																	}
																else
																	{	/* Expand/garith.scm 67 */
																		BgL_testz00_1155 = ((bool_t) 0);
																	}
															}
															if (BgL_testz00_1155)
																{	/* Expand/garith.scm 67 */
																	return
																		BGl_2zd2zd2zz__r4_numbers_6_5z00
																		(BgL_xz00_159, BgL_yz00_160);
																}
															else
																{	/* Expand/garith.scm 70 */
																	obj_t BgL_arg1566z00_193;

																	{	/* Expand/garith.scm 70 */
																		obj_t BgL_arg1567z00_194;

																		obj_t BgL_arg1568z00_195;

																		BgL_arg1567z00_194 =
																			CNST_TABLE_REF(((long) 3));
																		{	/* Expand/garith.scm 70 */
																			obj_t BgL_list1569z00_196;

																			{	/* Expand/garith.scm 70 */
																				obj_t BgL_arg1570z00_197;

																				BgL_arg1570z00_197 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list1569z00_196 =
																					MAKE_PAIR(BgL_yz00_160,
																					BgL_arg1570z00_197);
																			}
																			BgL_arg1568z00_195 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_xz00_159, BgL_list1569z00_196);
																		}
																		BgL_arg1566z00_193 =
																			MAKE_PAIR(BgL_arg1567z00_194,
																			BgL_arg1568z00_195);
																	}
																	return
																		PROCEDURE_ENTRY(BgL_ez00_5) (BgL_ez00_5,
																		BgL_arg1566z00_193, BgL_ez00_5, BEOA);
																}
														}
													}
												else
													{	/* Expand/garith.scm 56 */
														BgL_xz00_162 = CAR(BgL_cdrzd21482zd2_167);
														BgL_yz00_163 = CDR(BgL_cdrzd21482zd2_167);
													BgL_tagzd21476zd2_164:
														{	/* Expand/garith.scm 72 */
															obj_t BgL_arg1572z00_199;

															{	/* Expand/garith.scm 72 */
																obj_t BgL_arg1574z00_200;

																obj_t BgL_arg1575z00_201;

																BgL_arg1574z00_200 = CNST_TABLE_REF(((long) 3));
																{	/* Expand/garith.scm 72 */
																	obj_t BgL_arg1576z00_202;

																	{	/* Expand/garith.scm 72 */
																		obj_t BgL_arg1581z00_206;

																		obj_t BgL_arg1582z00_207;

																		BgL_arg1581z00_206 =
																			CNST_TABLE_REF(((long) 1));
																		BgL_arg1582z00_207 =
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_yz00_163, BNIL);
																		BgL_arg1576z00_202 =
																			MAKE_PAIR(BgL_arg1581z00_206,
																			BgL_arg1582z00_207);
																	}
																	{	/* Expand/garith.scm 72 */
																		obj_t BgL_list1578z00_204;

																		{	/* Expand/garith.scm 72 */
																			obj_t BgL_arg1580z00_205;

																			BgL_arg1580z00_205 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list1578z00_204 =
																				MAKE_PAIR(BgL_arg1576z00_202,
																				BgL_arg1580z00_205);
																		}
																		BgL_arg1575z00_201 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_xz00_162, BgL_list1578z00_204);
																}}
																BgL_arg1572z00_199 =
																	MAKE_PAIR(BgL_arg1574z00_200,
																	BgL_arg1575z00_201);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_5) (BgL_ez00_5,
																BgL_arg1572z00_199, BgL_ez00_5, BEOA);
														}
													}
											}
										else
											{
												obj_t BgL_yz00_1187;

												obj_t BgL_xz00_1185;

												BgL_xz00_1185 = CAR(BgL_cdrzd21482zd2_167);
												BgL_yz00_1187 = CDR(BgL_cdrzd21482zd2_167);
												BgL_yz00_163 = BgL_yz00_1187;
												BgL_xz00_162 = BgL_xz00_1185;
												goto BgL_tagzd21476zd2_164;
											}
									}
							}
						else
							{	/* Expand/garith.scm 56 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/garith.scm 56 */
						return BFALSE;
					}
			}
		}
	}



/* _expand-g- */
	obj_t BGl__expandzd2gzd2z00zzexpand_garithmetiquez00(obj_t BgL_envz00_1006,
		obj_t BgL_xz00_1007, obj_t BgL_ez00_1008)
	{
		AN_OBJECT;
		{	/* Expand/garith.scm 55 */
			return
				BGl_expandzd2gzd2z00zzexpand_garithmetiquez00(BgL_xz00_1007,
				BgL_ez00_1008);
		}
	}



/* expand-g* */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2gza2z70zzexpand_garithmetiquez00(obj_t
		BgL_xz00_6, obj_t BgL_ez00_7)
	{
		AN_OBJECT;
		{	/* Expand/garith.scm 77 */
			{
				obj_t BgL_xz00_214;

				obj_t BgL_yz00_215;

				obj_t BgL_xz00_211;

				obj_t BgL_yz00_212;

				if (PAIRP(BgL_xz00_6))
					{	/* Expand/garith.scm 78 */
						if (NULLP(CDR(BgL_xz00_6)))
							{	/* Expand/garith.scm 78 */
								return BINT(((long) 1));
							}
						else
							{	/* Expand/garith.scm 78 */
								obj_t BgL_cdrzd21564zd2_220;

								BgL_cdrzd21564zd2_220 = CDR(BgL_xz00_6);
								if (PAIRP(BgL_cdrzd21564zd2_220))
									{	/* Expand/garith.scm 78 */
										if (NULLP(CDR(BgL_cdrzd21564zd2_220)))
											{	/* Expand/garith.scm 78 */
												obj_t BgL_arg1587z00_223;

												BgL_arg1587z00_223 = CAR(BgL_cdrzd21564zd2_220);
												return
													PROCEDURE_ENTRY(BgL_ez00_7) (BgL_ez00_7,
													BgL_arg1587z00_223, BgL_ez00_7, BEOA);
											}
										else
											{	/* Expand/garith.scm 78 */
												obj_t BgL_cdrzd21580zd2_225;

												BgL_cdrzd21580zd2_225 = CDR(BgL_cdrzd21564zd2_220);
												if (PAIRP(BgL_cdrzd21580zd2_225))
													{	/* Expand/garith.scm 78 */
														if (NULLP(CDR(BgL_cdrzd21580zd2_225)))
															{	/* Expand/garith.scm 78 */
																BgL_xz00_211 = CAR(BgL_cdrzd21564zd2_220);
																BgL_yz00_212 = CAR(BgL_cdrzd21580zd2_225);
																{	/* Expand/garith.scm 85 */
																	bool_t BgL_testz00_1211;

																	{	/* Expand/garith.scm 85 */
																		bool_t BgL_testz00_1212;

																		{	/* Expand/garith.scm 85 */
																			bool_t BgL__ortest_1508z00_786;

																			BgL__ortest_1508z00_786 =
																				INTEGERP(BgL_xz00_211);
																			if (BgL__ortest_1508z00_786)
																				{	/* Expand/garith.scm 85 */
																					BgL_testz00_1212 =
																						BgL__ortest_1508z00_786;
																				}
																			else
																				{	/* Expand/garith.scm 85 */
																					BgL_testz00_1212 =
																						REALP(BgL_xz00_211);
																				}
																		}
																		if (BgL_testz00_1212)
																			{	/* Expand/garith.scm 85 */
																				bool_t BgL__ortest_1508z00_790;

																				BgL__ortest_1508z00_790 =
																					INTEGERP(BgL_yz00_212);
																				if (BgL__ortest_1508z00_790)
																					{	/* Expand/garith.scm 85 */
																						BgL_testz00_1211 =
																							BgL__ortest_1508z00_790;
																					}
																				else
																					{	/* Expand/garith.scm 85 */
																						BgL_testz00_1211 =
																							REALP(BgL_yz00_212);
																					}
																			}
																		else
																			{	/* Expand/garith.scm 85 */
																				BgL_testz00_1211 = ((bool_t) 0);
																			}
																	}
																	if (BgL_testz00_1211)
																		{	/* Expand/garith.scm 85 */
																			return
																				BGl_2za2za2zz__r4_numbers_6_5z00
																				(BgL_xz00_211, BgL_yz00_212);
																		}
																	else
																		{	/* Expand/garith.scm 88 */
																			obj_t BgL_arg1603z00_240;

																			{	/* Expand/garith.scm 88 */
																				obj_t BgL_arg1604z00_241;

																				obj_t BgL_arg1605z00_242;

																				BgL_arg1604z00_241 =
																					CNST_TABLE_REF(((long) 4));
																				{	/* Expand/garith.scm 88 */
																					obj_t BgL_list1606z00_243;

																					{	/* Expand/garith.scm 88 */
																						obj_t BgL_arg1607z00_244;

																						BgL_arg1607z00_244 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list1606z00_243 =
																							MAKE_PAIR(BgL_yz00_212,
																							BgL_arg1607z00_244);
																					}
																					BgL_arg1605z00_242 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_xz00_211, BgL_list1606z00_243);
																				}
																				BgL_arg1603z00_240 =
																					MAKE_PAIR(BgL_arg1604z00_241,
																					BgL_arg1605z00_242);
																			}
																			return
																				PROCEDURE_ENTRY(BgL_ez00_7) (BgL_ez00_7,
																				BgL_arg1603z00_240, BgL_ez00_7, BEOA);
																		}
																}
															}
														else
															{	/* Expand/garith.scm 78 */
																BgL_xz00_214 = CAR(BgL_cdrzd21564zd2_220);
																BgL_yz00_215 = CDR(BgL_cdrzd21564zd2_220);
															BgL_tagzd21554zd2_216:
																{	/* Expand/garith.scm 90 */
																	obj_t BgL_arg1610z00_246;

																	{	/* Expand/garith.scm 90 */
																		obj_t BgL_arg1611z00_247;

																		obj_t BgL_arg1613z00_248;

																		BgL_arg1611z00_247 =
																			CNST_TABLE_REF(((long) 4));
																		{	/* Expand/garith.scm 90 */
																			obj_t BgL_arg1614z00_249;

																			{	/* Expand/garith.scm 90 */
																				obj_t BgL_arg1621z00_253;

																				obj_t BgL_arg1622z00_254;

																				BgL_arg1621z00_253 =
																					CNST_TABLE_REF(((long) 5));
																				BgL_arg1622z00_254 =
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_yz00_215, BNIL);
																				BgL_arg1614z00_249 =
																					MAKE_PAIR(BgL_arg1621z00_253,
																					BgL_arg1622z00_254);
																			}
																			{	/* Expand/garith.scm 90 */
																				obj_t BgL_list1616z00_251;

																				{	/* Expand/garith.scm 90 */
																					obj_t BgL_arg1618z00_252;

																					BgL_arg1618z00_252 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list1616z00_251 =
																						MAKE_PAIR(BgL_arg1614z00_249,
																						BgL_arg1618z00_252);
																				}
																				BgL_arg1613z00_248 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_xz00_214, BgL_list1616z00_251);
																		}}
																		BgL_arg1610z00_246 =
																			MAKE_PAIR(BgL_arg1611z00_247,
																			BgL_arg1613z00_248);
																	}
																	return
																		PROCEDURE_ENTRY(BgL_ez00_7) (BgL_ez00_7,
																		BgL_arg1610z00_246, BgL_ez00_7, BEOA);
																}
															}
													}
												else
													{
														obj_t BgL_yz00_1243;

														obj_t BgL_xz00_1241;

														BgL_xz00_1241 = CAR(BgL_cdrzd21564zd2_220);
														BgL_yz00_1243 = CDR(BgL_cdrzd21564zd2_220);
														BgL_yz00_215 = BgL_yz00_1243;
														BgL_xz00_214 = BgL_xz00_1241;
														goto BgL_tagzd21554zd2_216;
													}
											}
									}
								else
									{	/* Expand/garith.scm 78 */
										return BFALSE;
									}
							}
					}
				else
					{	/* Expand/garith.scm 78 */
						return BFALSE;
					}
			}
		}
	}



/* _expand-g* */
	obj_t BGl__expandzd2gza2z70zzexpand_garithmetiquez00(obj_t BgL_envz00_1009,
		obj_t BgL_xz00_1010, obj_t BgL_ez00_1011)
	{
		AN_OBJECT;
		{	/* Expand/garith.scm 77 */
			return
				BGl_expandzd2gza2z70zzexpand_garithmetiquez00(BgL_xz00_1010,
				BgL_ez00_1011);
		}
	}



/* expand-g/ */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2gzf2z20zzexpand_garithmetiquez00(obj_t
		BgL_xz00_8, obj_t BgL_ez00_9)
	{
		AN_OBJECT;
		{	/* Expand/garith.scm 95 */
			{
				obj_t BgL_xz00_260;

				obj_t BgL_yz00_261;

				obj_t BgL_xz00_257;

				obj_t BgL_yz00_258;

				obj_t BgL_xz00_255;

				if (PAIRP(BgL_xz00_8))
					{	/* Expand/garith.scm 96 */
						obj_t BgL_cdrzd21644zd2_265;

						BgL_cdrzd21644zd2_265 = CDR(BgL_xz00_8);
						if (PAIRP(BgL_cdrzd21644zd2_265))
							{	/* Expand/garith.scm 96 */
								if (NULLP(CDR(BgL_cdrzd21644zd2_265)))
									{	/* Expand/garith.scm 96 */
										BgL_xz00_255 = CAR(BgL_cdrzd21644zd2_265);
										{	/* Expand/garith.scm 98 */
											obj_t BgL_arg1640z00_283;

											obj_t BgL_arg1643z00_284;

											BgL_arg1640z00_283 = CNST_TABLE_REF(((long) 6));
											{	/* Expand/garith.scm 98 */
												obj_t BgL_arg1645z00_286;

												BgL_arg1645z00_286 =
													PROCEDURE_ENTRY(BgL_ez00_9) (BgL_ez00_9, BgL_xz00_255,
													BgL_ez00_9, BEOA);
												{	/* Expand/garith.scm 98 */
													obj_t BgL_list1647z00_288;

													{	/* Expand/garith.scm 98 */
														obj_t BgL_arg1650z00_289;

														BgL_arg1650z00_289 = MAKE_PAIR(BNIL, BNIL);
														BgL_list1647z00_288 =
															MAKE_PAIR(BgL_arg1645z00_286, BgL_arg1650z00_289);
													}
													BgL_arg1643z00_284 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT((
																(long) 1)), BgL_list1647z00_288);
											}}
											return MAKE_PAIR(BgL_arg1640z00_283, BgL_arg1643z00_284);
										}
									}
								else
									{	/* Expand/garith.scm 96 */
										obj_t BgL_cdrzd21660zd2_270;

										BgL_cdrzd21660zd2_270 = CDR(BgL_cdrzd21644zd2_265);
										if (PAIRP(BgL_cdrzd21660zd2_270))
											{	/* Expand/garith.scm 96 */
												if (NULLP(CDR(BgL_cdrzd21660zd2_270)))
													{	/* Expand/garith.scm 96 */
														BgL_xz00_257 = CAR(BgL_cdrzd21644zd2_265);
														BgL_yz00_258 = CAR(BgL_cdrzd21660zd2_270);
														{	/* Expand/garith.scm 101 */
															bool_t BgL_testz00_1269;

															{	/* Expand/garith.scm 101 */
																bool_t BgL_testz00_1270;

																{	/* Expand/garith.scm 101 */
																	bool_t BgL__ortest_1508z00_813;

																	BgL__ortest_1508z00_813 =
																		INTEGERP(BgL_xz00_257);
																	if (BgL__ortest_1508z00_813)
																		{	/* Expand/garith.scm 101 */
																			BgL_testz00_1270 =
																				BgL__ortest_1508z00_813;
																		}
																	else
																		{	/* Expand/garith.scm 101 */
																			BgL_testz00_1270 = REALP(BgL_xz00_257);
																		}
																}
																if (BgL_testz00_1270)
																	{	/* Expand/garith.scm 101 */
																		bool_t BgL__ortest_1508z00_817;

																		BgL__ortest_1508z00_817 =
																			INTEGERP(BgL_yz00_258);
																		if (BgL__ortest_1508z00_817)
																			{	/* Expand/garith.scm 101 */
																				BgL_testz00_1269 =
																					BgL__ortest_1508z00_817;
																			}
																		else
																			{	/* Expand/garith.scm 101 */
																				BgL_testz00_1269 = REALP(BgL_yz00_258);
																			}
																	}
																else
																	{	/* Expand/garith.scm 101 */
																		BgL_testz00_1269 = ((bool_t) 0);
																	}
															}
															if (BgL_testz00_1269)
																{	/* Expand/garith.scm 101 */
																	if (BGl_2zd3zd3zz__r4_numbers_6_5z00
																		(BgL_yz00_258, BINT(((long) 0))))
																		{	/* Expand/garith.scm 103 */
																			obj_t BgL_arg1653z00_292;

																			{	/* Expand/garith.scm 103 */
																				obj_t BgL_arg1654z00_293;

																				obj_t BgL_arg1655z00_294;

																				BgL_arg1654z00_293 =
																					CNST_TABLE_REF(((long) 6));
																				{	/* Expand/garith.scm 103 */
																					obj_t BgL_list1656z00_295;

																					{	/* Expand/garith.scm 103 */
																						obj_t BgL_arg1657z00_296;

																						BgL_arg1657z00_296 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list1656z00_295 =
																							MAKE_PAIR(BgL_yz00_258,
																							BgL_arg1657z00_296);
																					}
																					BgL_arg1655z00_294 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_xz00_257, BgL_list1656z00_295);
																				}
																				BgL_arg1653z00_292 =
																					MAKE_PAIR(BgL_arg1654z00_293,
																					BgL_arg1655z00_294);
																			}
																			return
																				PROCEDURE_ENTRY(BgL_ez00_9) (BgL_ez00_9,
																				BgL_arg1653z00_292, BgL_ez00_9, BEOA);
																		}
																	else
																		{	/* Expand/garith.scm 102 */
																			return
																				BGl_2zf2zf2zz__r4_numbers_6_5z00
																				(BgL_xz00_257, BgL_yz00_258);
																		}
																}
															else
																{	/* Expand/garith.scm 106 */
																	obj_t BgL_arg1659z00_297;

																	{	/* Expand/garith.scm 106 */
																		obj_t BgL_arg1660z00_298;

																		obj_t BgL_arg1662z00_299;

																		BgL_arg1660z00_298 =
																			CNST_TABLE_REF(((long) 6));
																		{	/* Expand/garith.scm 106 */
																			obj_t BgL_list1663z00_300;

																			{	/* Expand/garith.scm 106 */
																				obj_t BgL_arg1664z00_301;

																				BgL_arg1664z00_301 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list1663z00_300 =
																					MAKE_PAIR(BgL_yz00_258,
																					BgL_arg1664z00_301);
																			}
																			BgL_arg1662z00_299 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_xz00_257, BgL_list1663z00_300);
																		}
																		BgL_arg1659z00_297 =
																			MAKE_PAIR(BgL_arg1660z00_298,
																			BgL_arg1662z00_299);
																	}
																	return
																		PROCEDURE_ENTRY(BgL_ez00_9) (BgL_ez00_9,
																		BgL_arg1659z00_297, BgL_ez00_9, BEOA);
																}
														}
													}
												else
													{	/* Expand/garith.scm 96 */
														BgL_xz00_260 = CAR(BgL_cdrzd21644zd2_265);
														BgL_yz00_261 = CDR(BgL_cdrzd21644zd2_265);
													BgL_tagzd21638zd2_262:
														{	/* Expand/garith.scm 108 */
															obj_t BgL_arg1666z00_303;

															{	/* Expand/garith.scm 108 */
																obj_t BgL_arg1667z00_304;

																obj_t BgL_arg1668z00_305;

																BgL_arg1667z00_304 = CNST_TABLE_REF(((long) 6));
																{	/* Expand/garith.scm 108 */
																	obj_t BgL_arg1669z00_306;

																	{	/* Expand/garith.scm 108 */
																		obj_t BgL_arg1673z00_310;

																		obj_t BgL_arg1674z00_311;

																		BgL_arg1673z00_310 =
																			CNST_TABLE_REF(((long) 5));
																		BgL_arg1674z00_311 =
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_yz00_261, BNIL);
																		BgL_arg1669z00_306 =
																			MAKE_PAIR(BgL_arg1673z00_310,
																			BgL_arg1674z00_311);
																	}
																	{	/* Expand/garith.scm 108 */
																		obj_t BgL_list1671z00_308;

																		{	/* Expand/garith.scm 108 */
																			obj_t BgL_arg1672z00_309;

																			BgL_arg1672z00_309 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list1671z00_308 =
																				MAKE_PAIR(BgL_arg1669z00_306,
																				BgL_arg1672z00_309);
																		}
																		BgL_arg1668z00_305 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_xz00_260, BgL_list1671z00_308);
																}}
																BgL_arg1666z00_303 =
																	MAKE_PAIR(BgL_arg1667z00_304,
																	BgL_arg1668z00_305);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_9) (BgL_ez00_9,
																BgL_arg1666z00_303, BgL_ez00_9, BEOA);
														}
													}
											}
										else
											{
												obj_t BgL_yz00_1311;

												obj_t BgL_xz00_1309;

												BgL_xz00_1309 = CAR(BgL_cdrzd21644zd2_265);
												BgL_yz00_1311 = CDR(BgL_cdrzd21644zd2_265);
												BgL_yz00_261 = BgL_yz00_1311;
												BgL_xz00_260 = BgL_xz00_1309;
												goto BgL_tagzd21638zd2_262;
											}
									}
							}
						else
							{	/* Expand/garith.scm 96 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/garith.scm 96 */
						return BFALSE;
					}
			}
		}
	}



/* _expand-g/ */
	obj_t BGl__expandzd2gzf2z20zzexpand_garithmetiquez00(obj_t BgL_envz00_1012,
		obj_t BgL_xz00_1013, obj_t BgL_ez00_1014)
	{
		AN_OBJECT;
		{	/* Expand/garith.scm 95 */
			return
				BGl_expandzd2gzf2z20zzexpand_garithmetiquez00(BgL_xz00_1013,
				BgL_ez00_1014);
		}
	}



/* expand-g= */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2gzd3z01zzexpand_garithmetiquez00(obj_t
		BgL_xz00_10, obj_t BgL_ez00_11)
	{
		AN_OBJECT;
		{	/* Expand/garith.scm 113 */
			{
				obj_t BgL_xz00_316;

				obj_t BgL_yz00_317;

				obj_t BgL_xz00_312;

				obj_t BgL_yz00_313;

				if (PAIRP(BgL_xz00_10))
					{	/* Expand/garith.scm 114 */
						obj_t BgL_cdrzd21722zd2_321;

						BgL_cdrzd21722zd2_321 = CDR(BgL_xz00_10);
						if (PAIRP(BgL_cdrzd21722zd2_321))
							{	/* Expand/garith.scm 114 */
								obj_t BgL_cdrzd21726zd2_323;

								BgL_cdrzd21726zd2_323 = CDR(BgL_cdrzd21722zd2_321);
								if (PAIRP(BgL_cdrzd21726zd2_323))
									{	/* Expand/garith.scm 114 */
										if (NULLP(CDR(BgL_cdrzd21726zd2_323)))
											{	/* Expand/garith.scm 114 */
												BgL_xz00_312 = CAR(BgL_cdrzd21722zd2_321);
												BgL_yz00_313 = CAR(BgL_cdrzd21726zd2_323);
												{	/* Expand/garith.scm 117 */
													bool_t BgL_testz00_1325;

													{	/* Expand/garith.scm 117 */
														bool_t BgL_testz00_1326;

														{	/* Expand/garith.scm 117 */
															bool_t BgL__ortest_1508z00_839;

															BgL__ortest_1508z00_839 = INTEGERP(BgL_xz00_312);
															if (BgL__ortest_1508z00_839)
																{	/* Expand/garith.scm 117 */
																	BgL_testz00_1326 = BgL__ortest_1508z00_839;
																}
															else
																{	/* Expand/garith.scm 117 */
																	BgL_testz00_1326 = REALP(BgL_xz00_312);
																}
														}
														if (BgL_testz00_1326)
															{	/* Expand/garith.scm 117 */
																bool_t BgL__ortest_1508z00_843;

																BgL__ortest_1508z00_843 =
																	INTEGERP(BgL_yz00_313);
																if (BgL__ortest_1508z00_843)
																	{	/* Expand/garith.scm 117 */
																		BgL_testz00_1325 = BgL__ortest_1508z00_843;
																	}
																else
																	{	/* Expand/garith.scm 117 */
																		BgL_testz00_1325 = REALP(BgL_yz00_313);
																	}
															}
														else
															{	/* Expand/garith.scm 117 */
																BgL_testz00_1325 = ((bool_t) 0);
															}
													}
													if (BgL_testz00_1325)
														{	/* Expand/garith.scm 117 */
															return
																BBOOL(BGl_2zd3zd3zz__r4_numbers_6_5z00
																(BgL_xz00_312, BgL_yz00_313));
														}
													else
														{	/* Expand/garith.scm 120 */
															obj_t BgL_arg1696z00_339;

															{	/* Expand/garith.scm 120 */
																obj_t BgL_arg1697z00_340;

																obj_t BgL_arg1700z00_341;

																BgL_arg1697z00_340 = CNST_TABLE_REF(((long) 7));
																{	/* Expand/garith.scm 120 */
																	obj_t BgL_list1701z00_342;

																	{	/* Expand/garith.scm 120 */
																		obj_t BgL_arg1702z00_343;

																		BgL_arg1702z00_343 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list1701z00_342 =
																			MAKE_PAIR(BgL_yz00_313,
																			BgL_arg1702z00_343);
																	}
																	BgL_arg1700z00_341 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_xz00_312, BgL_list1701z00_342);
																}
																BgL_arg1696z00_339 =
																	MAKE_PAIR(BgL_arg1697z00_340,
																	BgL_arg1700z00_341);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_11) (BgL_ez00_11,
																BgL_arg1696z00_339, BgL_ez00_11, BEOA);
														}
												}
											}
										else
											{	/* Expand/garith.scm 114 */
												BgL_xz00_316 = CAR(BgL_cdrzd21722zd2_321);
												BgL_yz00_317 = CDR(BgL_cdrzd21722zd2_321);
											BgL_tagzd21715zd2_318:
												{	/* Expand/garith.scm 124 */
													obj_t BgL_arg1704z00_345;

													{	/* Expand/garith.scm 124 */
														obj_t BgL_arg1705z00_346;

														obj_t BgL_arg1706z00_347;

														BgL_arg1705z00_346 = CNST_TABLE_REF(((long) 8));
														{	/* Expand/garith.scm 124 */
															obj_t BgL_arg1707z00_348;

															obj_t BgL_arg1708z00_349;

															{	/* Expand/garith.scm 124 */
																obj_t BgL_arg1713z00_353;

																obj_t BgL_arg1714z00_354;

																BgL_arg1713z00_353 = CNST_TABLE_REF(((long) 7));
																{	/* Expand/garith.scm 124 */
																	obj_t BgL_arg1715z00_355;

																	BgL_arg1715z00_355 = CAR(BgL_yz00_317);
																	{	/* Expand/garith.scm 124 */
																		obj_t BgL_list1719z00_357;

																		{	/* Expand/garith.scm 124 */
																			obj_t BgL_arg1724z00_358;

																			BgL_arg1724z00_358 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list1719z00_357 =
																				MAKE_PAIR(BgL_arg1715z00_355,
																				BgL_arg1724z00_358);
																		}
																		BgL_arg1714z00_354 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_xz00_316, BgL_list1719z00_357);
																}}
																BgL_arg1707z00_348 =
																	MAKE_PAIR(BgL_arg1713z00_353,
																	BgL_arg1714z00_354);
															}
															{	/* Expand/garith.scm 124 */
																obj_t BgL_arg1725z00_359;

																obj_t BgL_arg1729z00_360;

																BgL_arg1725z00_359 = CNST_TABLE_REF(((long) 9));
																BgL_arg1729z00_360 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_yz00_317, BNIL);
																BgL_arg1708z00_349 =
																	MAKE_PAIR(BgL_arg1725z00_359,
																	BgL_arg1729z00_360);
															}
															{	/* Expand/garith.scm 124 */
																obj_t BgL_list1710z00_351;

																{	/* Expand/garith.scm 124 */
																	obj_t BgL_arg1711z00_352;

																	BgL_arg1711z00_352 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list1710z00_351 =
																		MAKE_PAIR(BgL_arg1708z00_349,
																		BgL_arg1711z00_352);
																}
																BgL_arg1706z00_347 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg1707z00_348, BgL_list1710z00_351);
														}}
														BgL_arg1704z00_345 =
															MAKE_PAIR(BgL_arg1705z00_346, BgL_arg1706z00_347);
													}
													return
														PROCEDURE_ENTRY(BgL_ez00_11) (BgL_ez00_11,
														BgL_arg1704z00_345, BgL_ez00_11, BEOA);
												}
											}
									}
								else
									{	/* Expand/garith.scm 114 */
										if (NULLP(CDR(BgL_cdrzd21722zd2_321)))
											{	/* Expand/garith.scm 114 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string2129z00zzexpand_garithmetiquez00,
													BGl_string2130z00zzexpand_garithmetiquez00,
													BgL_xz00_10);
											}
										else
											{
												obj_t BgL_yz00_1368;

												obj_t BgL_xz00_1366;

												BgL_xz00_1366 = CAR(BgL_cdrzd21722zd2_321);
												BgL_yz00_1368 = CDR(BgL_cdrzd21722zd2_321);
												BgL_yz00_317 = BgL_yz00_1368;
												BgL_xz00_316 = BgL_xz00_1366;
												goto BgL_tagzd21715zd2_318;
											}
									}
							}
						else
							{	/* Expand/garith.scm 114 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/garith.scm 114 */
						return BFALSE;
					}
			}
		}
	}



/* _expand-g= */
	obj_t BGl__expandzd2gzd3z01zzexpand_garithmetiquez00(obj_t BgL_envz00_1015,
		obj_t BgL_xz00_1016, obj_t BgL_ez00_1017)
	{
		AN_OBJECT;
		{	/* Expand/garith.scm 113 */
			return
				BGl_expandzd2gzd3z01zzexpand_garithmetiquez00(BgL_xz00_1016,
				BgL_ez00_1017);
		}
	}



/* expand-g< */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2gzc3z11zzexpand_garithmetiquez00(obj_t
		BgL_xz00_12, obj_t BgL_ez00_13)
	{
		AN_OBJECT;
		{	/* Expand/garith.scm 129 */
			{
				obj_t BgL_xz00_365;

				obj_t BgL_yz00_366;

				obj_t BgL_xz00_361;

				obj_t BgL_yz00_362;

				if (PAIRP(BgL_xz00_12))
					{	/* Expand/garith.scm 130 */
						obj_t BgL_cdrzd21791zd2_370;

						BgL_cdrzd21791zd2_370 = CDR(BgL_xz00_12);
						if (PAIRP(BgL_cdrzd21791zd2_370))
							{	/* Expand/garith.scm 130 */
								obj_t BgL_cdrzd21795zd2_372;

								BgL_cdrzd21795zd2_372 = CDR(BgL_cdrzd21791zd2_370);
								if (PAIRP(BgL_cdrzd21795zd2_372))
									{	/* Expand/garith.scm 130 */
										if (NULLP(CDR(BgL_cdrzd21795zd2_372)))
											{	/* Expand/garith.scm 130 */
												BgL_xz00_361 = CAR(BgL_cdrzd21791zd2_370);
												BgL_yz00_362 = CAR(BgL_cdrzd21795zd2_372);
												{	/* Expand/garith.scm 133 */
													bool_t BgL_testz00_1382;

													{	/* Expand/garith.scm 133 */
														bool_t BgL_testz00_1383;

														{	/* Expand/garith.scm 133 */
															bool_t BgL__ortest_1508z00_866;

															BgL__ortest_1508z00_866 = INTEGERP(BgL_xz00_361);
															if (BgL__ortest_1508z00_866)
																{	/* Expand/garith.scm 133 */
																	BgL_testz00_1383 = BgL__ortest_1508z00_866;
																}
															else
																{	/* Expand/garith.scm 133 */
																	BgL_testz00_1383 = REALP(BgL_xz00_361);
																}
														}
														if (BgL_testz00_1383)
															{	/* Expand/garith.scm 133 */
																bool_t BgL__ortest_1508z00_870;

																BgL__ortest_1508z00_870 =
																	INTEGERP(BgL_yz00_362);
																if (BgL__ortest_1508z00_870)
																	{	/* Expand/garith.scm 133 */
																		BgL_testz00_1382 = BgL__ortest_1508z00_870;
																	}
																else
																	{	/* Expand/garith.scm 133 */
																		BgL_testz00_1382 = REALP(BgL_yz00_362);
																	}
															}
														else
															{	/* Expand/garith.scm 133 */
																BgL_testz00_1382 = ((bool_t) 0);
															}
													}
													if (BgL_testz00_1382)
														{	/* Expand/garith.scm 133 */
															return
																BBOOL(BGl_2zc3zc3zz__r4_numbers_6_5z00
																(BgL_xz00_361, BgL_yz00_362));
														}
													else
														{	/* Expand/garith.scm 136 */
															obj_t BgL_arg1746z00_388;

															{	/* Expand/garith.scm 136 */
																obj_t BgL_arg1747z00_389;

																obj_t BgL_arg1748z00_390;

																BgL_arg1747z00_389 =
																	CNST_TABLE_REF(((long) 10));
																{	/* Expand/garith.scm 136 */
																	obj_t BgL_list1749z00_391;

																	{	/* Expand/garith.scm 136 */
																		obj_t BgL_arg1750z00_392;

																		BgL_arg1750z00_392 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list1749z00_391 =
																			MAKE_PAIR(BgL_yz00_362,
																			BgL_arg1750z00_392);
																	}
																	BgL_arg1748z00_390 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_xz00_361, BgL_list1749z00_391);
																}
																BgL_arg1746z00_388 =
																	MAKE_PAIR(BgL_arg1747z00_389,
																	BgL_arg1748z00_390);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_13) (BgL_ez00_13,
																BgL_arg1746z00_388, BgL_ez00_13, BEOA);
														}
												}
											}
										else
											{	/* Expand/garith.scm 130 */
												BgL_xz00_365 = CAR(BgL_cdrzd21791zd2_370);
												BgL_yz00_366 = CDR(BgL_cdrzd21791zd2_370);
											BgL_tagzd21784zd2_367:
												{	/* Expand/garith.scm 140 */
													obj_t BgL_arg1753z00_394;

													{	/* Expand/garith.scm 140 */
														obj_t BgL_arg1754z00_395;

														obj_t BgL_arg1755z00_396;

														BgL_arg1754z00_395 = CNST_TABLE_REF(((long) 8));
														{	/* Expand/garith.scm 140 */
															obj_t BgL_arg1756z00_397;

															obj_t BgL_arg1757z00_398;

															{	/* Expand/garith.scm 140 */
																obj_t BgL_arg1767z00_402;

																obj_t BgL_arg1768z00_403;

																BgL_arg1767z00_402 =
																	CNST_TABLE_REF(((long) 10));
																{	/* Expand/garith.scm 140 */
																	obj_t BgL_arg1769z00_404;

																	BgL_arg1769z00_404 = CAR(BgL_yz00_366);
																	{	/* Expand/garith.scm 140 */
																		obj_t BgL_list1771z00_406;

																		{	/* Expand/garith.scm 140 */
																			obj_t BgL_arg1772z00_407;

																			BgL_arg1772z00_407 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list1771z00_406 =
																				MAKE_PAIR(BgL_arg1769z00_404,
																				BgL_arg1772z00_407);
																		}
																		BgL_arg1768z00_403 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_xz00_365, BgL_list1771z00_406);
																}}
																BgL_arg1756z00_397 =
																	MAKE_PAIR(BgL_arg1767z00_402,
																	BgL_arg1768z00_403);
															}
															{	/* Expand/garith.scm 140 */
																obj_t BgL_arg1775z00_408;

																obj_t BgL_arg1776z00_409;

																BgL_arg1775z00_408 =
																	CNST_TABLE_REF(((long) 11));
																BgL_arg1776z00_409 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_yz00_366, BNIL);
																BgL_arg1757z00_398 =
																	MAKE_PAIR(BgL_arg1775z00_408,
																	BgL_arg1776z00_409);
															}
															{	/* Expand/garith.scm 140 */
																obj_t BgL_list1759z00_400;

																{	/* Expand/garith.scm 140 */
																	obj_t BgL_arg1764z00_401;

																	BgL_arg1764z00_401 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list1759z00_400 =
																		MAKE_PAIR(BgL_arg1757z00_398,
																		BgL_arg1764z00_401);
																}
																BgL_arg1755z00_396 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg1756z00_397, BgL_list1759z00_400);
														}}
														BgL_arg1753z00_394 =
															MAKE_PAIR(BgL_arg1754z00_395, BgL_arg1755z00_396);
													}
													return
														PROCEDURE_ENTRY(BgL_ez00_13) (BgL_ez00_13,
														BgL_arg1753z00_394, BgL_ez00_13, BEOA);
												}
											}
									}
								else
									{	/* Expand/garith.scm 130 */
										if (NULLP(CDR(BgL_cdrzd21791zd2_370)))
											{	/* Expand/garith.scm 130 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string2131z00zzexpand_garithmetiquez00,
													BGl_string2130z00zzexpand_garithmetiquez00,
													BgL_xz00_12);
											}
										else
											{
												obj_t BgL_yz00_1425;

												obj_t BgL_xz00_1423;

												BgL_xz00_1423 = CAR(BgL_cdrzd21791zd2_370);
												BgL_yz00_1425 = CDR(BgL_cdrzd21791zd2_370);
												BgL_yz00_366 = BgL_yz00_1425;
												BgL_xz00_365 = BgL_xz00_1423;
												goto BgL_tagzd21784zd2_367;
											}
									}
							}
						else
							{	/* Expand/garith.scm 130 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/garith.scm 130 */
						return BFALSE;
					}
			}
		}
	}



/* _expand-g< */
	obj_t BGl__expandzd2gzc3z11zzexpand_garithmetiquez00(obj_t BgL_envz00_1018,
		obj_t BgL_xz00_1019, obj_t BgL_ez00_1020)
	{
		AN_OBJECT;
		{	/* Expand/garith.scm 129 */
			return
				BGl_expandzd2gzc3z11zzexpand_garithmetiquez00(BgL_xz00_1019,
				BgL_ez00_1020);
		}
	}



/* expand-g> */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2gze3z31zzexpand_garithmetiquez00(obj_t
		BgL_xz00_14, obj_t BgL_ez00_15)
	{
		AN_OBJECT;
		{	/* Expand/garith.scm 145 */
			{
				obj_t BgL_xz00_414;

				obj_t BgL_yz00_415;

				obj_t BgL_xz00_410;

				obj_t BgL_yz00_411;

				if (PAIRP(BgL_xz00_14))
					{	/* Expand/garith.scm 146 */
						obj_t BgL_cdrzd21860zd2_419;

						BgL_cdrzd21860zd2_419 = CDR(BgL_xz00_14);
						if (PAIRP(BgL_cdrzd21860zd2_419))
							{	/* Expand/garith.scm 146 */
								obj_t BgL_cdrzd21864zd2_421;

								BgL_cdrzd21864zd2_421 = CDR(BgL_cdrzd21860zd2_419);
								if (PAIRP(BgL_cdrzd21864zd2_421))
									{	/* Expand/garith.scm 146 */
										if (NULLP(CDR(BgL_cdrzd21864zd2_421)))
											{	/* Expand/garith.scm 146 */
												BgL_xz00_410 = CAR(BgL_cdrzd21860zd2_419);
												BgL_yz00_411 = CAR(BgL_cdrzd21864zd2_421);
												{	/* Expand/garith.scm 149 */
													bool_t BgL_testz00_1439;

													{	/* Expand/garith.scm 149 */
														bool_t BgL_testz00_1440;

														{	/* Expand/garith.scm 149 */
															bool_t BgL__ortest_1508z00_893;

															BgL__ortest_1508z00_893 = INTEGERP(BgL_xz00_410);
															if (BgL__ortest_1508z00_893)
																{	/* Expand/garith.scm 149 */
																	BgL_testz00_1440 = BgL__ortest_1508z00_893;
																}
															else
																{	/* Expand/garith.scm 149 */
																	BgL_testz00_1440 = REALP(BgL_xz00_410);
																}
														}
														if (BgL_testz00_1440)
															{	/* Expand/garith.scm 149 */
																bool_t BgL__ortest_1508z00_897;

																BgL__ortest_1508z00_897 =
																	INTEGERP(BgL_yz00_411);
																if (BgL__ortest_1508z00_897)
																	{	/* Expand/garith.scm 149 */
																		BgL_testz00_1439 = BgL__ortest_1508z00_897;
																	}
																else
																	{	/* Expand/garith.scm 149 */
																		BgL_testz00_1439 = REALP(BgL_yz00_411);
																	}
															}
														else
															{	/* Expand/garith.scm 149 */
																BgL_testz00_1439 = ((bool_t) 0);
															}
													}
													if (BgL_testz00_1439)
														{	/* Expand/garith.scm 149 */
															return
																BBOOL(BGl_2ze3ze3zz__r4_numbers_6_5z00
																(BgL_xz00_410, BgL_yz00_411));
														}
													else
														{	/* Expand/garith.scm 152 */
															obj_t BgL_arg1794z00_437;

															{	/* Expand/garith.scm 152 */
																obj_t BgL_arg1795z00_438;

																obj_t BgL_arg1796z00_439;

																BgL_arg1795z00_438 =
																	CNST_TABLE_REF(((long) 12));
																{	/* Expand/garith.scm 152 */
																	obj_t BgL_list1797z00_440;

																	{	/* Expand/garith.scm 152 */
																		obj_t BgL_arg1798z00_441;

																		BgL_arg1798z00_441 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list1797z00_440 =
																			MAKE_PAIR(BgL_yz00_411,
																			BgL_arg1798z00_441);
																	}
																	BgL_arg1796z00_439 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_xz00_410, BgL_list1797z00_440);
																}
																BgL_arg1794z00_437 =
																	MAKE_PAIR(BgL_arg1795z00_438,
																	BgL_arg1796z00_439);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_15) (BgL_ez00_15,
																BgL_arg1794z00_437, BgL_ez00_15, BEOA);
														}
												}
											}
										else
											{	/* Expand/garith.scm 146 */
												BgL_xz00_414 = CAR(BgL_cdrzd21860zd2_419);
												BgL_yz00_415 = CDR(BgL_cdrzd21860zd2_419);
											BgL_tagzd21853zd2_416:
												{	/* Expand/garith.scm 156 */
													obj_t BgL_arg1800z00_443;

													{	/* Expand/garith.scm 156 */
														obj_t BgL_arg1801z00_444;

														obj_t BgL_arg1803z00_445;

														BgL_arg1801z00_444 = CNST_TABLE_REF(((long) 8));
														{	/* Expand/garith.scm 156 */
															obj_t BgL_arg1804z00_446;

															obj_t BgL_arg1805z00_447;

															{	/* Expand/garith.scm 156 */
																obj_t BgL_arg1810z00_451;

																obj_t BgL_arg1811z00_452;

																BgL_arg1810z00_451 =
																	CNST_TABLE_REF(((long) 12));
																{	/* Expand/garith.scm 156 */
																	obj_t BgL_arg1812z00_453;

																	BgL_arg1812z00_453 = CAR(BgL_yz00_415);
																	{	/* Expand/garith.scm 156 */
																		obj_t BgL_list1814z00_455;

																		{	/* Expand/garith.scm 156 */
																			obj_t BgL_arg1815z00_456;

																			BgL_arg1815z00_456 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list1814z00_455 =
																				MAKE_PAIR(BgL_arg1812z00_453,
																				BgL_arg1815z00_456);
																		}
																		BgL_arg1811z00_452 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_xz00_414, BgL_list1814z00_455);
																}}
																BgL_arg1804z00_446 =
																	MAKE_PAIR(BgL_arg1810z00_451,
																	BgL_arg1811z00_452);
															}
															{	/* Expand/garith.scm 156 */
																obj_t BgL_arg1816z00_457;

																obj_t BgL_arg1817z00_458;

																BgL_arg1816z00_457 =
																	CNST_TABLE_REF(((long) 13));
																BgL_arg1817z00_458 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_yz00_415, BNIL);
																BgL_arg1805z00_447 =
																	MAKE_PAIR(BgL_arg1816z00_457,
																	BgL_arg1817z00_458);
															}
															{	/* Expand/garith.scm 156 */
																obj_t BgL_list1807z00_449;

																{	/* Expand/garith.scm 156 */
																	obj_t BgL_arg1809z00_450;

																	BgL_arg1809z00_450 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list1807z00_449 =
																		MAKE_PAIR(BgL_arg1805z00_447,
																		BgL_arg1809z00_450);
																}
																BgL_arg1803z00_445 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg1804z00_446, BgL_list1807z00_449);
														}}
														BgL_arg1800z00_443 =
															MAKE_PAIR(BgL_arg1801z00_444, BgL_arg1803z00_445);
													}
													return
														PROCEDURE_ENTRY(BgL_ez00_15) (BgL_ez00_15,
														BgL_arg1800z00_443, BgL_ez00_15, BEOA);
												}
											}
									}
								else
									{	/* Expand/garith.scm 146 */
										if (NULLP(CDR(BgL_cdrzd21860zd2_419)))
											{	/* Expand/garith.scm 146 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string2132z00zzexpand_garithmetiquez00,
													BGl_string2130z00zzexpand_garithmetiquez00,
													BgL_xz00_14);
											}
										else
											{
												obj_t BgL_yz00_1482;

												obj_t BgL_xz00_1480;

												BgL_xz00_1480 = CAR(BgL_cdrzd21860zd2_419);
												BgL_yz00_1482 = CDR(BgL_cdrzd21860zd2_419);
												BgL_yz00_415 = BgL_yz00_1482;
												BgL_xz00_414 = BgL_xz00_1480;
												goto BgL_tagzd21853zd2_416;
											}
									}
							}
						else
							{	/* Expand/garith.scm 146 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/garith.scm 146 */
						return BFALSE;
					}
			}
		}
	}



/* _expand-g> */
	obj_t BGl__expandzd2gze3z31zzexpand_garithmetiquez00(obj_t BgL_envz00_1021,
		obj_t BgL_xz00_1022, obj_t BgL_ez00_1023)
	{
		AN_OBJECT;
		{	/* Expand/garith.scm 145 */
			return
				BGl_expandzd2gze3z31zzexpand_garithmetiquez00(BgL_xz00_1022,
				BgL_ez00_1023);
		}
	}



/* expand-g<= */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2gzc3zd3zc2zzexpand_garithmetiquez00(obj_t
		BgL_xz00_16, obj_t BgL_ez00_17)
	{
		AN_OBJECT;
		{	/* Expand/garith.scm 161 */
			{
				obj_t BgL_xz00_463;

				obj_t BgL_yz00_464;

				obj_t BgL_xz00_459;

				obj_t BgL_yz00_460;

				if (PAIRP(BgL_xz00_16))
					{	/* Expand/garith.scm 162 */
						obj_t BgL_cdrzd21929zd2_468;

						BgL_cdrzd21929zd2_468 = CDR(BgL_xz00_16);
						if (PAIRP(BgL_cdrzd21929zd2_468))
							{	/* Expand/garith.scm 162 */
								obj_t BgL_cdrzd21933zd2_470;

								BgL_cdrzd21933zd2_470 = CDR(BgL_cdrzd21929zd2_468);
								if (PAIRP(BgL_cdrzd21933zd2_470))
									{	/* Expand/garith.scm 162 */
										if (NULLP(CDR(BgL_cdrzd21933zd2_470)))
											{	/* Expand/garith.scm 162 */
												BgL_xz00_459 = CAR(BgL_cdrzd21929zd2_468);
												BgL_yz00_460 = CAR(BgL_cdrzd21933zd2_470);
												{	/* Expand/garith.scm 165 */
													bool_t BgL_testz00_1496;

													{	/* Expand/garith.scm 165 */
														bool_t BgL_testz00_1497;

														{	/* Expand/garith.scm 165 */
															bool_t BgL__ortest_1508z00_920;

															BgL__ortest_1508z00_920 = INTEGERP(BgL_xz00_459);
															if (BgL__ortest_1508z00_920)
																{	/* Expand/garith.scm 165 */
																	BgL_testz00_1497 = BgL__ortest_1508z00_920;
																}
															else
																{	/* Expand/garith.scm 165 */
																	BgL_testz00_1497 = REALP(BgL_xz00_459);
																}
														}
														if (BgL_testz00_1497)
															{	/* Expand/garith.scm 165 */
																bool_t BgL__ortest_1508z00_924;

																BgL__ortest_1508z00_924 =
																	INTEGERP(BgL_yz00_460);
																if (BgL__ortest_1508z00_924)
																	{	/* Expand/garith.scm 165 */
																		BgL_testz00_1496 = BgL__ortest_1508z00_924;
																	}
																else
																	{	/* Expand/garith.scm 165 */
																		BgL_testz00_1496 = REALP(BgL_yz00_460);
																	}
															}
														else
															{	/* Expand/garith.scm 165 */
																BgL_testz00_1496 = ((bool_t) 0);
															}
													}
													if (BgL_testz00_1496)
														{	/* Expand/garith.scm 165 */
															return
																BBOOL(BGl_2zc3zd3z10zz__r4_numbers_6_5z00
																(BgL_xz00_459, BgL_yz00_460));
														}
													else
														{	/* Expand/garith.scm 168 */
															obj_t BgL_arg1834z00_486;

															{	/* Expand/garith.scm 168 */
																obj_t BgL_arg1835z00_487;

																obj_t BgL_arg1836z00_488;

																BgL_arg1835z00_487 =
																	CNST_TABLE_REF(((long) 14));
																{	/* Expand/garith.scm 168 */
																	obj_t BgL_list1837z00_489;

																	{	/* Expand/garith.scm 168 */
																		obj_t BgL_arg1839z00_490;

																		BgL_arg1839z00_490 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list1837z00_489 =
																			MAKE_PAIR(BgL_yz00_460,
																			BgL_arg1839z00_490);
																	}
																	BgL_arg1836z00_488 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_xz00_459, BgL_list1837z00_489);
																}
																BgL_arg1834z00_486 =
																	MAKE_PAIR(BgL_arg1835z00_487,
																	BgL_arg1836z00_488);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_17) (BgL_ez00_17,
																BgL_arg1834z00_486, BgL_ez00_17, BEOA);
														}
												}
											}
										else
											{	/* Expand/garith.scm 162 */
												BgL_xz00_463 = CAR(BgL_cdrzd21929zd2_468);
												BgL_yz00_464 = CDR(BgL_cdrzd21929zd2_468);
											BgL_tagzd21922zd2_465:
												{	/* Expand/garith.scm 172 */
													obj_t BgL_arg1841z00_492;

													{	/* Expand/garith.scm 172 */
														obj_t BgL_arg1842z00_493;

														obj_t BgL_arg1845z00_494;

														BgL_arg1842z00_493 = CNST_TABLE_REF(((long) 8));
														{	/* Expand/garith.scm 172 */
															obj_t BgL_arg1846z00_495;

															obj_t BgL_arg1847z00_496;

															{	/* Expand/garith.scm 172 */
																obj_t BgL_arg1852z00_500;

																obj_t BgL_arg1853z00_501;

																BgL_arg1852z00_500 =
																	CNST_TABLE_REF(((long) 14));
																{	/* Expand/garith.scm 172 */
																	obj_t BgL_arg1854z00_502;

																	BgL_arg1854z00_502 = CAR(BgL_yz00_464);
																	{	/* Expand/garith.scm 172 */
																		obj_t BgL_list1856z00_504;

																		{	/* Expand/garith.scm 172 */
																			obj_t BgL_arg1857z00_505;

																			BgL_arg1857z00_505 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list1856z00_504 =
																				MAKE_PAIR(BgL_arg1854z00_502,
																				BgL_arg1857z00_505);
																		}
																		BgL_arg1853z00_501 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_xz00_463, BgL_list1856z00_504);
																}}
																BgL_arg1846z00_495 =
																	MAKE_PAIR(BgL_arg1852z00_500,
																	BgL_arg1853z00_501);
															}
															{	/* Expand/garith.scm 172 */
																obj_t BgL_arg1858z00_506;

																obj_t BgL_arg1860z00_507;

																BgL_arg1858z00_506 =
																	CNST_TABLE_REF(((long) 15));
																BgL_arg1860z00_507 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_yz00_464, BNIL);
																BgL_arg1847z00_496 =
																	MAKE_PAIR(BgL_arg1858z00_506,
																	BgL_arg1860z00_507);
															}
															{	/* Expand/garith.scm 172 */
																obj_t BgL_list1849z00_498;

																{	/* Expand/garith.scm 172 */
																	obj_t BgL_arg1851z00_499;

																	BgL_arg1851z00_499 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list1849z00_498 =
																		MAKE_PAIR(BgL_arg1847z00_496,
																		BgL_arg1851z00_499);
																}
																BgL_arg1845z00_494 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg1846z00_495, BgL_list1849z00_498);
														}}
														BgL_arg1841z00_492 =
															MAKE_PAIR(BgL_arg1842z00_493, BgL_arg1845z00_494);
													}
													return
														PROCEDURE_ENTRY(BgL_ez00_17) (BgL_ez00_17,
														BgL_arg1841z00_492, BgL_ez00_17, BEOA);
												}
											}
									}
								else
									{	/* Expand/garith.scm 162 */
										if (NULLP(CDR(BgL_cdrzd21929zd2_468)))
											{	/* Expand/garith.scm 162 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string2133z00zzexpand_garithmetiquez00,
													BGl_string2130z00zzexpand_garithmetiquez00,
													BgL_xz00_16);
											}
										else
											{
												obj_t BgL_yz00_1539;

												obj_t BgL_xz00_1537;

												BgL_xz00_1537 = CAR(BgL_cdrzd21929zd2_468);
												BgL_yz00_1539 = CDR(BgL_cdrzd21929zd2_468);
												BgL_yz00_464 = BgL_yz00_1539;
												BgL_xz00_463 = BgL_xz00_1537;
												goto BgL_tagzd21922zd2_465;
											}
									}
							}
						else
							{	/* Expand/garith.scm 162 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/garith.scm 162 */
						return BFALSE;
					}
			}
		}
	}



/* _expand-g<= */
	obj_t BGl__expandzd2gzc3zd3zc2zzexpand_garithmetiquez00(obj_t BgL_envz00_1024,
		obj_t BgL_xz00_1025, obj_t BgL_ez00_1026)
	{
		AN_OBJECT;
		{	/* Expand/garith.scm 161 */
			return
				BGl_expandzd2gzc3zd3zc2zzexpand_garithmetiquez00(BgL_xz00_1025,
				BgL_ez00_1026);
		}
	}



/* expand-g>= */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2gze3zd3ze2zzexpand_garithmetiquez00(obj_t
		BgL_xz00_18, obj_t BgL_ez00_19)
	{
		AN_OBJECT;
		{	/* Expand/garith.scm 177 */
			{
				obj_t BgL_xz00_512;

				obj_t BgL_yz00_513;

				obj_t BgL_xz00_508;

				obj_t BgL_yz00_509;

				if (PAIRP(BgL_xz00_18))
					{	/* Expand/garith.scm 178 */
						obj_t BgL_cdrzd21998zd2_517;

						BgL_cdrzd21998zd2_517 = CDR(BgL_xz00_18);
						if (PAIRP(BgL_cdrzd21998zd2_517))
							{	/* Expand/garith.scm 178 */
								obj_t BgL_cdrzd22002zd2_519;

								BgL_cdrzd22002zd2_519 = CDR(BgL_cdrzd21998zd2_517);
								if (PAIRP(BgL_cdrzd22002zd2_519))
									{	/* Expand/garith.scm 178 */
										if (NULLP(CDR(BgL_cdrzd22002zd2_519)))
											{	/* Expand/garith.scm 178 */
												BgL_xz00_508 = CAR(BgL_cdrzd21998zd2_517);
												BgL_yz00_509 = CAR(BgL_cdrzd22002zd2_519);
												{	/* Expand/garith.scm 181 */
													bool_t BgL_testz00_1553;

													{	/* Expand/garith.scm 181 */
														bool_t BgL_testz00_1554;

														{	/* Expand/garith.scm 181 */
															bool_t BgL__ortest_1508z00_947;

															BgL__ortest_1508z00_947 = INTEGERP(BgL_xz00_508);
															if (BgL__ortest_1508z00_947)
																{	/* Expand/garith.scm 181 */
																	BgL_testz00_1554 = BgL__ortest_1508z00_947;
																}
															else
																{	/* Expand/garith.scm 181 */
																	BgL_testz00_1554 = REALP(BgL_xz00_508);
																}
														}
														if (BgL_testz00_1554)
															{	/* Expand/garith.scm 181 */
																bool_t BgL__ortest_1508z00_951;

																BgL__ortest_1508z00_951 =
																	INTEGERP(BgL_yz00_509);
																if (BgL__ortest_1508z00_951)
																	{	/* Expand/garith.scm 181 */
																		BgL_testz00_1553 = BgL__ortest_1508z00_951;
																	}
																else
																	{	/* Expand/garith.scm 181 */
																		BgL_testz00_1553 = REALP(BgL_yz00_509);
																	}
															}
														else
															{	/* Expand/garith.scm 181 */
																BgL_testz00_1553 = ((bool_t) 0);
															}
													}
													if (BgL_testz00_1553)
														{	/* Expand/garith.scm 181 */
															return
																BBOOL(BGl_2ze3zd3z30zz__r4_numbers_6_5z00
																(BgL_xz00_508, BgL_yz00_509));
														}
													else
														{	/* Expand/garith.scm 184 */
															obj_t BgL_arg1876z00_535;

															{	/* Expand/garith.scm 184 */
																obj_t BgL_arg1877z00_536;

																obj_t BgL_arg1878z00_537;

																BgL_arg1877z00_536 =
																	CNST_TABLE_REF(((long) 16));
																{	/* Expand/garith.scm 184 */
																	obj_t BgL_list1879z00_538;

																	{	/* Expand/garith.scm 184 */
																		obj_t BgL_arg1880z00_539;

																		BgL_arg1880z00_539 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list1879z00_538 =
																			MAKE_PAIR(BgL_yz00_509,
																			BgL_arg1880z00_539);
																	}
																	BgL_arg1878z00_537 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_xz00_508, BgL_list1879z00_538);
																}
																BgL_arg1876z00_535 =
																	MAKE_PAIR(BgL_arg1877z00_536,
																	BgL_arg1878z00_537);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_19) (BgL_ez00_19,
																BgL_arg1876z00_535, BgL_ez00_19, BEOA);
														}
												}
											}
										else
											{	/* Expand/garith.scm 178 */
												BgL_xz00_512 = CAR(BgL_cdrzd21998zd2_517);
												BgL_yz00_513 = CDR(BgL_cdrzd21998zd2_517);
											BgL_tagzd21991zd2_514:
												{	/* Expand/garith.scm 188 */
													obj_t BgL_arg1882z00_541;

													{	/* Expand/garith.scm 188 */
														obj_t BgL_arg1883z00_542;

														obj_t BgL_arg1884z00_543;

														BgL_arg1883z00_542 = CNST_TABLE_REF(((long) 8));
														{	/* Expand/garith.scm 188 */
															obj_t BgL_arg1886z00_544;

															obj_t BgL_arg1887z00_545;

															{	/* Expand/garith.scm 188 */
																obj_t BgL_arg1892z00_549;

																obj_t BgL_arg1893z00_550;

																BgL_arg1892z00_549 =
																	CNST_TABLE_REF(((long) 16));
																{	/* Expand/garith.scm 188 */
																	obj_t BgL_arg1894z00_551;

																	BgL_arg1894z00_551 = CAR(BgL_yz00_513);
																	{	/* Expand/garith.scm 188 */
																		obj_t BgL_list1896z00_553;

																		{	/* Expand/garith.scm 188 */
																			obj_t BgL_arg1898z00_554;

																			BgL_arg1898z00_554 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list1896z00_553 =
																				MAKE_PAIR(BgL_arg1894z00_551,
																				BgL_arg1898z00_554);
																		}
																		BgL_arg1893z00_550 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_xz00_512, BgL_list1896z00_553);
																}}
																BgL_arg1886z00_544 =
																	MAKE_PAIR(BgL_arg1892z00_549,
																	BgL_arg1893z00_550);
															}
															{	/* Expand/garith.scm 188 */
																obj_t BgL_arg1899z00_555;

																obj_t BgL_arg1900z00_556;

																BgL_arg1899z00_555 =
																	CNST_TABLE_REF(((long) 17));
																BgL_arg1900z00_556 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_yz00_513, BNIL);
																BgL_arg1887z00_545 =
																	MAKE_PAIR(BgL_arg1899z00_555,
																	BgL_arg1900z00_556);
															}
															{	/* Expand/garith.scm 188 */
																obj_t BgL_list1889z00_547;

																{	/* Expand/garith.scm 188 */
																	obj_t BgL_arg1890z00_548;

																	BgL_arg1890z00_548 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list1889z00_547 =
																		MAKE_PAIR(BgL_arg1887z00_545,
																		BgL_arg1890z00_548);
																}
																BgL_arg1884z00_543 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg1886z00_544, BgL_list1889z00_547);
														}}
														BgL_arg1882z00_541 =
															MAKE_PAIR(BgL_arg1883z00_542, BgL_arg1884z00_543);
													}
													return
														PROCEDURE_ENTRY(BgL_ez00_19) (BgL_ez00_19,
														BgL_arg1882z00_541, BgL_ez00_19, BEOA);
												}
											}
									}
								else
									{	/* Expand/garith.scm 178 */
										if (NULLP(CDR(BgL_cdrzd21998zd2_517)))
											{	/* Expand/garith.scm 178 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string2134z00zzexpand_garithmetiquez00,
													BGl_string2130z00zzexpand_garithmetiquez00,
													BgL_xz00_18);
											}
										else
											{
												obj_t BgL_yz00_1596;

												obj_t BgL_xz00_1594;

												BgL_xz00_1594 = CAR(BgL_cdrzd21998zd2_517);
												BgL_yz00_1596 = CDR(BgL_cdrzd21998zd2_517);
												BgL_yz00_513 = BgL_yz00_1596;
												BgL_xz00_512 = BgL_xz00_1594;
												goto BgL_tagzd21991zd2_514;
											}
									}
							}
						else
							{	/* Expand/garith.scm 178 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/garith.scm 178 */
						return BFALSE;
					}
			}
		}
	}



/* _expand-g>= */
	obj_t BGl__expandzd2gze3zd3ze2zzexpand_garithmetiquez00(obj_t BgL_envz00_1027,
		obj_t BgL_xz00_1028, obj_t BgL_ez00_1029)
	{
		AN_OBJECT;
		{	/* Expand/garith.scm 177 */
			return
				BGl_expandzd2gze3zd3ze2zzexpand_garithmetiquez00(BgL_xz00_1028,
				BgL_ez00_1029);
		}
	}



/* expand-gmax */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2gmaxzd2zzexpand_garithmetiquez00(obj_t
		BgL_xz00_20, obj_t BgL_ez00_21)
	{
		AN_OBJECT;
		{	/* Expand/garith.scm 193 */
			{
				obj_t BgL_xz00_562;

				obj_t BgL_yz00_563;

				obj_t BgL_xz00_559;

				obj_t BgL_yz00_560;

				if (PAIRP(BgL_xz00_20))
					{	/* Expand/garith.scm 194 */
						obj_t BgL_cdrzd22067zd2_568;

						BgL_cdrzd22067zd2_568 = CDR(BgL_xz00_20);
						if (PAIRP(BgL_cdrzd22067zd2_568))
							{	/* Expand/garith.scm 194 */
								if (NULLP(CDR(BgL_cdrzd22067zd2_568)))
									{	/* Expand/garith.scm 194 */
										obj_t BgL_arg1904z00_571;

										BgL_arg1904z00_571 = CAR(BgL_cdrzd22067zd2_568);
										return
											PROCEDURE_ENTRY(BgL_ez00_21) (BgL_ez00_21,
											BgL_arg1904z00_571, BgL_ez00_21, BEOA);
									}
								else
									{	/* Expand/garith.scm 194 */
										obj_t BgL_cdrzd22083zd2_573;

										BgL_cdrzd22083zd2_573 = CDR(BgL_cdrzd22067zd2_568);
										if (PAIRP(BgL_cdrzd22083zd2_573))
											{	/* Expand/garith.scm 194 */
												if (NULLP(CDR(BgL_cdrzd22083zd2_573)))
													{	/* Expand/garith.scm 194 */
														BgL_xz00_559 = CAR(BgL_cdrzd22067zd2_568);
														BgL_yz00_560 = CAR(BgL_cdrzd22083zd2_573);
														{	/* Expand/garith.scm 199 */
															bool_t BgL_testz00_1616;

															if (INTEGERP(BgL_xz00_559))
																{	/* Expand/garith.scm 199 */
																	BgL_testz00_1616 = INTEGERP(BgL_yz00_560);
																}
															else
																{	/* Expand/garith.scm 199 */
																	BgL_testz00_1616 = ((bool_t) 0);
																}
															if (BgL_testz00_1616)
																{	/* Expand/garith.scm 200 */
																	obj_t BgL_xz00_587;

																	obj_t BgL_yz00_588;

																	BgL_xz00_587 = BgL_xz00_559;
																	BgL_yz00_588 = BgL_yz00_560;
																	if (
																		((long) CINT(BgL_xz00_587) >
																			(long) CINT(BgL_yz00_588)))
																		{	/* Expand/garith.scm 200 */
																			return BgL_xz00_587;
																		}
																	else
																		{	/* Expand/garith.scm 200 */
																			return BgL_yz00_588;
																		}
																}
															else
																{	/* Expand/garith.scm 202 */
																	obj_t BgL_arg1918z00_590;

																	obj_t BgL_arg1919z00_591;

																	BgL_arg1918z00_590 =
																		CNST_TABLE_REF(((long) 18));
																	{	/* Expand/garith.scm 202 */
																		obj_t BgL_arg1920z00_592;

																		obj_t BgL_arg1921z00_593;

																		{	/* Expand/garith.scm 202 */
																			obj_t BgL_arg1925z00_597;

																			obj_t BgL_arg1926z00_598;

																			{	/* Expand/garith.scm 202 */
																				obj_t BgL_arg1927z00_599;

																				obj_t BgL_arg1929z00_600;

																				BgL_arg1927z00_599 =
																					CNST_TABLE_REF(((long) 19));
																				{	/* Expand/garith.scm 202 */
																					obj_t BgL_arg1930z00_601;

																					BgL_arg1930z00_601 =
																						PROCEDURE_ENTRY(BgL_ez00_21)
																						(BgL_ez00_21, BgL_xz00_559,
																						BgL_ez00_21, BEOA);
																					{	/* Expand/garith.scm 202 */
																						obj_t BgL_list1932z00_603;

																						BgL_list1932z00_603 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg1929z00_600 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg1930z00_601,
																							BgL_list1932z00_603);
																				}}
																				BgL_arg1925z00_597 =
																					MAKE_PAIR(BgL_arg1927z00_599,
																					BgL_arg1929z00_600);
																			}
																			{	/* Expand/garith.scm 203 */
																				obj_t BgL_arg1935z00_604;

																				{	/* Expand/garith.scm 203 */
																					obj_t BgL_arg1940z00_607;

																					obj_t BgL_arg1941z00_608;

																					BgL_arg1940z00_607 =
																						CNST_TABLE_REF(((long) 20));
																					{	/* Expand/garith.scm 203 */
																						obj_t BgL_arg1942z00_609;

																						BgL_arg1942z00_609 =
																							PROCEDURE_ENTRY(BgL_ez00_21)
																							(BgL_ez00_21, BgL_yz00_560,
																							BgL_ez00_21, BEOA);
																						{	/* Expand/garith.scm 203 */
																							obj_t BgL_list1944z00_611;

																							BgL_list1944z00_611 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg1941z00_608 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg1942z00_609,
																								BgL_list1944z00_611);
																					}}
																					BgL_arg1935z00_604 =
																						MAKE_PAIR(BgL_arg1940z00_607,
																						BgL_arg1941z00_608);
																				}
																				{	/* Expand/garith.scm 202 */
																					obj_t BgL_list1938z00_606;

																					BgL_list1938z00_606 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg1926z00_598 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg1935z00_604,
																						BgL_list1938z00_606);
																			}}
																			BgL_arg1920z00_592 =
																				MAKE_PAIR(BgL_arg1925z00_597,
																				BgL_arg1926z00_598);
																		}
																		{	/* Expand/garith.scm 204 */
																			obj_t BgL_arg1945z00_612;

																			obj_t BgL_arg1946z00_613;

																			BgL_arg1945z00_612 =
																				CNST_TABLE_REF(((long) 21));
																			{	/* Expand/garith.scm 204 */
																				obj_t BgL_list1947z00_614;

																				{	/* Expand/garith.scm 204 */
																					obj_t BgL_arg1948z00_615;

																					obj_t BgL_arg1949z00_616;

																					BgL_arg1948z00_615 =
																						CNST_TABLE_REF(((long) 20));
																					BgL_arg1949z00_616 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list1947z00_614 =
																						MAKE_PAIR(BgL_arg1948z00_615,
																						BgL_arg1949z00_616);
																				}
																				BgL_arg1946z00_613 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(CNST_TABLE_REF(((long) 19)),
																					BgL_list1947z00_614);
																			}
																			BgL_arg1921z00_593 =
																				MAKE_PAIR(BgL_arg1945z00_612,
																				BgL_arg1946z00_613);
																		}
																		{	/* Expand/garith.scm 202 */
																			obj_t BgL_list1923z00_595;

																			{	/* Expand/garith.scm 202 */
																				obj_t BgL_arg1924z00_596;

																				BgL_arg1924z00_596 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list1923z00_595 =
																					MAKE_PAIR(BgL_arg1921z00_593,
																					BgL_arg1924z00_596);
																			}
																			BgL_arg1919z00_591 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg1920z00_592,
																				BgL_list1923z00_595);
																	}}
																	return
																		MAKE_PAIR(BgL_arg1918z00_590,
																		BgL_arg1919z00_591);
																}
														}
													}
												else
													{	/* Expand/garith.scm 194 */
														BgL_xz00_562 = CAR(BgL_cdrzd22067zd2_568);
														BgL_yz00_563 = CDR(BgL_cdrzd22067zd2_568);
													BgL_tagzd22060zd2_564:
														{	/* Expand/garith.scm 206 */
															obj_t BgL_arg1952z00_618;

															{	/* Expand/garith.scm 206 */
																obj_t BgL_arg1955z00_619;

																obj_t BgL_arg1957z00_620;

																BgL_arg1955z00_619 =
																	CNST_TABLE_REF(((long) 21));
																{	/* Expand/garith.scm 206 */
																	obj_t BgL_arg1958z00_621;

																	{	/* Expand/garith.scm 206 */
																		obj_t BgL_arg1968z00_625;

																		obj_t BgL_arg1969z00_626;

																		BgL_arg1968z00_625 =
																			CNST_TABLE_REF(((long) 22));
																		BgL_arg1969z00_626 =
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_yz00_563, BNIL);
																		BgL_arg1958z00_621 =
																			MAKE_PAIR(BgL_arg1968z00_625,
																			BgL_arg1969z00_626);
																	}
																	{	/* Expand/garith.scm 206 */
																		obj_t BgL_list1963z00_623;

																		{	/* Expand/garith.scm 206 */
																			obj_t BgL_arg1967z00_624;

																			BgL_arg1967z00_624 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list1963z00_623 =
																				MAKE_PAIR(BgL_arg1958z00_621,
																				BgL_arg1967z00_624);
																		}
																		BgL_arg1957z00_620 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_xz00_562, BgL_list1963z00_623);
																}}
																BgL_arg1952z00_618 =
																	MAKE_PAIR(BgL_arg1955z00_619,
																	BgL_arg1957z00_620);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_21) (BgL_ez00_21,
																BgL_arg1952z00_618, BgL_ez00_21, BEOA);
														}
													}
											}
										else
											{
												obj_t BgL_yz00_1667;

												obj_t BgL_xz00_1665;

												BgL_xz00_1665 = CAR(BgL_cdrzd22067zd2_568);
												BgL_yz00_1667 = CDR(BgL_cdrzd22067zd2_568);
												BgL_yz00_563 = BgL_yz00_1667;
												BgL_xz00_562 = BgL_xz00_1665;
												goto BgL_tagzd22060zd2_564;
											}
									}
							}
						else
							{	/* Expand/garith.scm 194 */
							BgL_tagzd22061zd2_565:
								return
									BGl_errorz00zz__errorz00(BFALSE,
									BGl_string2135z00zzexpand_garithmetiquez00, BgL_xz00_20);
							}
					}
				else
					{	/* Expand/garith.scm 194 */
						goto BgL_tagzd22061zd2_565;
					}
			}
		}
	}



/* _expand-gmax */
	obj_t BGl__expandzd2gmaxzd2zzexpand_garithmetiquez00(obj_t BgL_envz00_1030,
		obj_t BgL_xz00_1031, obj_t BgL_ez00_1032)
	{
		AN_OBJECT;
		{	/* Expand/garith.scm 193 */
			return
				BGl_expandzd2gmaxzd2zzexpand_garithmetiquez00(BgL_xz00_1031,
				BgL_ez00_1032);
		}
	}



/* expand-gmin */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2gminzd2zzexpand_garithmetiquez00(obj_t
		BgL_xz00_22, obj_t BgL_ez00_23)
	{
		AN_OBJECT;
		{	/* Expand/garith.scm 213 */
			{
				obj_t BgL_xz00_632;

				obj_t BgL_yz00_633;

				obj_t BgL_xz00_629;

				obj_t BgL_yz00_630;

				if (PAIRP(BgL_xz00_22))
					{	/* Expand/garith.scm 214 */
						obj_t BgL_cdrzd22145zd2_638;

						BgL_cdrzd22145zd2_638 = CDR(BgL_xz00_22);
						if (PAIRP(BgL_cdrzd22145zd2_638))
							{	/* Expand/garith.scm 214 */
								if (NULLP(CDR(BgL_cdrzd22145zd2_638)))
									{	/* Expand/garith.scm 214 */
										obj_t BgL_arg1976z00_641;

										BgL_arg1976z00_641 = CAR(BgL_cdrzd22145zd2_638);
										return
											PROCEDURE_ENTRY(BgL_ez00_23) (BgL_ez00_23,
											BgL_arg1976z00_641, BgL_ez00_23, BEOA);
									}
								else
									{	/* Expand/garith.scm 214 */
										obj_t BgL_cdrzd22161zd2_643;

										BgL_cdrzd22161zd2_643 = CDR(BgL_cdrzd22145zd2_638);
										if (PAIRP(BgL_cdrzd22161zd2_643))
											{	/* Expand/garith.scm 214 */
												if (NULLP(CDR(BgL_cdrzd22161zd2_643)))
													{	/* Expand/garith.scm 214 */
														BgL_xz00_629 = CAR(BgL_cdrzd22145zd2_638);
														BgL_yz00_630 = CAR(BgL_cdrzd22161zd2_643);
														{	/* Expand/garith.scm 219 */
															bool_t BgL_testz00_1688;

															if (INTEGERP(BgL_xz00_629))
																{	/* Expand/garith.scm 219 */
																	BgL_testz00_1688 = INTEGERP(BgL_yz00_630);
																}
															else
																{	/* Expand/garith.scm 219 */
																	BgL_testz00_1688 = ((bool_t) 0);
																}
															if (BgL_testz00_1688)
																{	/* Expand/garith.scm 220 */
																	obj_t BgL_xz00_657;

																	obj_t BgL_yz00_658;

																	BgL_xz00_657 = BgL_xz00_629;
																	BgL_yz00_658 = BgL_yz00_630;
																	if (
																		((long) CINT(BgL_xz00_657) <
																			(long) CINT(BgL_yz00_658)))
																		{	/* Expand/garith.scm 220 */
																			return BgL_xz00_657;
																		}
																	else
																		{	/* Expand/garith.scm 220 */
																			return BgL_yz00_658;
																		}
																}
															else
																{	/* Expand/garith.scm 222 */
																	obj_t BgL_arg1998z00_660;

																	obj_t BgL_arg1999z00_661;

																	BgL_arg1998z00_660 =
																		CNST_TABLE_REF(((long) 18));
																	{	/* Expand/garith.scm 222 */
																		obj_t BgL_arg2000z00_662;

																		obj_t BgL_arg2001z00_663;

																		{	/* Expand/garith.scm 222 */
																			obj_t BgL_arg2005z00_667;

																			obj_t BgL_arg2012z00_668;

																			{	/* Expand/garith.scm 222 */
																				obj_t BgL_arg2021z00_669;

																				obj_t BgL_arg2022z00_670;

																				BgL_arg2021z00_669 =
																					CNST_TABLE_REF(((long) 19));
																				{	/* Expand/garith.scm 222 */
																					obj_t BgL_arg2023z00_671;

																					BgL_arg2023z00_671 =
																						PROCEDURE_ENTRY(BgL_ez00_23)
																						(BgL_ez00_23, BgL_xz00_629,
																						BgL_ez00_23, BEOA);
																					{	/* Expand/garith.scm 222 */
																						obj_t BgL_list2028z00_673;

																						BgL_list2028z00_673 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg2022z00_670 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2023z00_671,
																							BgL_list2028z00_673);
																				}}
																				BgL_arg2005z00_667 =
																					MAKE_PAIR(BgL_arg2021z00_669,
																					BgL_arg2022z00_670);
																			}
																			{	/* Expand/garith.scm 223 */
																				obj_t BgL_arg2029z00_674;

																				{	/* Expand/garith.scm 223 */
																					obj_t BgL_arg2033z00_677;

																					obj_t BgL_arg2034z00_678;

																					BgL_arg2033z00_677 =
																						CNST_TABLE_REF(((long) 20));
																					{	/* Expand/garith.scm 223 */
																						obj_t BgL_arg2037z00_679;

																						BgL_arg2037z00_679 =
																							PROCEDURE_ENTRY(BgL_ez00_23)
																							(BgL_ez00_23, BgL_yz00_630,
																							BgL_ez00_23, BEOA);
																						{	/* Expand/garith.scm 223 */
																							obj_t BgL_list2039z00_681;

																							BgL_list2039z00_681 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2034z00_678 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2037z00_679,
																								BgL_list2039z00_681);
																					}}
																					BgL_arg2029z00_674 =
																						MAKE_PAIR(BgL_arg2033z00_677,
																						BgL_arg2034z00_678);
																				}
																				{	/* Expand/garith.scm 222 */
																					obj_t BgL_list2032z00_676;

																					BgL_list2032z00_676 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2012z00_668 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2029z00_674,
																						BgL_list2032z00_676);
																			}}
																			BgL_arg2000z00_662 =
																				MAKE_PAIR(BgL_arg2005z00_667,
																				BgL_arg2012z00_668);
																		}
																		{	/* Expand/garith.scm 224 */
																			obj_t BgL_arg2045z00_682;

																			obj_t BgL_arg2048z00_683;

																			BgL_arg2045z00_682 =
																				CNST_TABLE_REF(((long) 23));
																			{	/* Expand/garith.scm 224 */
																				obj_t BgL_list2049z00_684;

																				{	/* Expand/garith.scm 224 */
																					obj_t BgL_arg2051z00_685;

																					obj_t BgL_arg2052z00_686;

																					BgL_arg2051z00_685 =
																						CNST_TABLE_REF(((long) 20));
																					BgL_arg2052z00_686 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list2049z00_684 =
																						MAKE_PAIR(BgL_arg2051z00_685,
																						BgL_arg2052z00_686);
																				}
																				BgL_arg2048z00_683 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(CNST_TABLE_REF(((long) 19)),
																					BgL_list2049z00_684);
																			}
																			BgL_arg2001z00_663 =
																				MAKE_PAIR(BgL_arg2045z00_682,
																				BgL_arg2048z00_683);
																		}
																		{	/* Expand/garith.scm 222 */
																			obj_t BgL_list2003z00_665;

																			{	/* Expand/garith.scm 222 */
																				obj_t BgL_arg2004z00_666;

																				BgL_arg2004z00_666 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list2003z00_665 =
																					MAKE_PAIR(BgL_arg2001z00_663,
																					BgL_arg2004z00_666);
																			}
																			BgL_arg1999z00_661 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2000z00_662,
																				BgL_list2003z00_665);
																	}}
																	return
																		MAKE_PAIR(BgL_arg1998z00_660,
																		BgL_arg1999z00_661);
																}
														}
													}
												else
													{	/* Expand/garith.scm 214 */
														BgL_xz00_632 = CAR(BgL_cdrzd22145zd2_638);
														BgL_yz00_633 = CDR(BgL_cdrzd22145zd2_638);
													BgL_tagzd22138zd2_634:
														{	/* Expand/garith.scm 226 */
															obj_t BgL_arg2061z00_688;

															{	/* Expand/garith.scm 226 */
																obj_t BgL_arg2062z00_689;

																obj_t BgL_arg2070z00_690;

																BgL_arg2062z00_689 =
																	CNST_TABLE_REF(((long) 23));
																{	/* Expand/garith.scm 226 */
																	obj_t BgL_arg2118z00_691;

																	{	/* Expand/garith.scm 226 */
																		obj_t BgL_arg2126z00_695;

																		obj_t BgL_arg2127z00_696;

																		BgL_arg2126z00_695 =
																			CNST_TABLE_REF(((long) 24));
																		BgL_arg2127z00_696 =
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_yz00_633, BNIL);
																		BgL_arg2118z00_691 =
																			MAKE_PAIR(BgL_arg2126z00_695,
																			BgL_arg2127z00_696);
																	}
																	{	/* Expand/garith.scm 226 */
																		obj_t BgL_list2120z00_693;

																		{	/* Expand/garith.scm 226 */
																			obj_t BgL_arg2125z00_694;

																			BgL_arg2125z00_694 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2120z00_693 =
																				MAKE_PAIR(BgL_arg2118z00_691,
																				BgL_arg2125z00_694);
																		}
																		BgL_arg2070z00_690 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_xz00_632, BgL_list2120z00_693);
																}}
																BgL_arg2061z00_688 =
																	MAKE_PAIR(BgL_arg2062z00_689,
																	BgL_arg2070z00_690);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_23) (BgL_ez00_23,
																BgL_arg2061z00_688, BgL_ez00_23, BEOA);
														}
													}
											}
										else
											{
												obj_t BgL_yz00_1739;

												obj_t BgL_xz00_1737;

												BgL_xz00_1737 = CAR(BgL_cdrzd22145zd2_638);
												BgL_yz00_1739 = CDR(BgL_cdrzd22145zd2_638);
												BgL_yz00_633 = BgL_yz00_1739;
												BgL_xz00_632 = BgL_xz00_1737;
												goto BgL_tagzd22138zd2_634;
											}
									}
							}
						else
							{	/* Expand/garith.scm 214 */
							BgL_tagzd22139zd2_635:
								return
									BGl_errorz00zz__errorz00(BFALSE,
									BGl_string2136z00zzexpand_garithmetiquez00, BgL_xz00_22);
							}
					}
				else
					{	/* Expand/garith.scm 214 */
						goto BgL_tagzd22139zd2_635;
					}
			}
		}
	}



/* _expand-gmin */
	obj_t BGl__expandzd2gminzd2zzexpand_garithmetiquez00(obj_t BgL_envz00_1033,
		obj_t BgL_xz00_1034, obj_t BgL_ez00_1035)
	{
		AN_OBJECT;
		{	/* Expand/garith.scm 213 */
			return
				BGl_expandzd2gminzd2zzexpand_garithmetiquez00(BgL_xz00_1034,
				BgL_ez00_1035);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzexpand_garithmetiquez00()
	{
		AN_OBJECT;
		{	/* Expand/garith.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzexpand_garithmetiquez00()
	{
		AN_OBJECT;
		{	/* Expand/garith.scm 15 */
			return BUNSPEC;
		}
	}

#ifdef __cplusplus
}
#endif
