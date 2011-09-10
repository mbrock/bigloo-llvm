/*===========================================================================*/
/*   (Expand/struct.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Expand/struct.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t
		BGl_matchzd2definezd2structurez12z12zz__match_normaliza7eza7(obj_t);
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzexpand_structz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzexpand_structz00();
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzexpand_structz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzexpand_structz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2unsafezd2structza2zd2zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzexpand_structz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__match_normaliza7eza7(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT long bgl_list_length(obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl__expandzd2structzd2zzexpand_structz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_epairifyz00zztools_miscz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2structzd2zzexpand_structz00(obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzexpand_structz00();
	static obj_t BGl_methodzd2initzd2zzexpand_structz00();
	static obj_t __cnst[33];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2structzd2envz00zzexpand_structz00,
		BgL_bgl__expandza7d2struct2238za7,
		BGl__expandzd2structzd2zzexpand_structz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2230z00zzexpand_structz00,
		BgL_bgl_string2230za700za7za7e2239za7, "Too many argument provided", 26);
	      DEFINE_STRING(BGl_string2229z00zzexpand_structz00,
		BgL_bgl_string2229za700za7za7e2240za7, "Illegal `define-struct' form", 28);
	      DEFINE_STRING(BGl_string2231z00zzexpand_structz00,
		BgL_bgl_string2231za700za7za7e2241za7, "struct-ref:not an instance of", 29);
	      DEFINE_STRING(BGl_string2232z00zzexpand_structz00,
		BgL_bgl_string2232za700za7za7e2242za7, "struct-set!:not an instance of",
		30);
	      DEFINE_STRING(BGl_string2233z00zzexpand_structz00,
		BgL_bgl_string2233za700za7za7e2243za7, "expand_struct", 13);
	      DEFINE_STRING(BGl_string2234z00zzexpand_structz00,
		BgL_bgl_string2234za700za7za7e2244za7,
		"u-struct-set! struct-set! v u-struct-ref struct-ref s ((unspecified)) struct-key eq? struct? o ? -set! - c-create-struct new let car make-struct __structure @ quote error cdr null? not pair? if init make- define-inline begin (quote ()) ",
		236);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzexpand_structz00(long
		BgL_checksumz00_707, char *BgL_fromz00_708)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzexpand_structz00))
				{
					BGl_requirezd2initializa7ationz75zzexpand_structz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzexpand_structz00();
					BGl_cnstzd2initzd2zzexpand_structz00();
					BGl_importedzd2moduleszd2initz00zzexpand_structz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzexpand_structz00()
	{
		AN_OBJECT;
		{	/* Expand/struct.scm 15 */
			BGl_modulezd2initializa7ationz75zz__match_normaliza7eza7(((long) 0),
				"expand_struct");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"expand_struct");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"expand_struct");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"expand_struct");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"expand_struct");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "expand_struct");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzexpand_structz00()
	{
		AN_OBJECT;
		{	/* Expand/struct.scm 15 */
			{	/* Expand/struct.scm 15 */
				obj_t BgL_cportz00_699;

				BgL_cportz00_699 =
					bgl_open_input_string(BGl_string2234z00zzexpand_structz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_700;

					BgL_iz00_700 = ((long) 32);
				BgL_loopz00_701:
					if ((BgL_iz00_700 == ((long) -1)))
						{	/* Expand/struct.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Expand/struct.scm 15 */
							{	/* Expand/struct.scm 15 */
								obj_t BgL_arg2237z00_703;

								{	/* Expand/struct.scm 15 */

									{	/* Expand/struct.scm 15 */
										obj_t BgL_locationz00_705;

										BgL_locationz00_705 = BBOOL(((bool_t) 0));
										{	/* Expand/struct.scm 15 */

											BgL_arg2237z00_703 =
												BGl_readz00zz__readerz00(BgL_cportz00_699,
												BgL_locationz00_705);
										}
									}
								}
								{	/* Expand/struct.scm 15 */
									int BgL_auxz00_727;

									BgL_auxz00_727 = (int) (BgL_iz00_700);
									CNST_TABLE_SET(BgL_auxz00_727, BgL_arg2237z00_703);
							}}
							{	/* Expand/struct.scm 15 */
								int BgL_auxz00_706;

								BgL_auxz00_706 = (int) ((BgL_iz00_700 - ((long) 1)));
								{
									long BgL_iz00_732;

									BgL_iz00_732 = (long) (BgL_auxz00_706);
									BgL_iz00_700 = BgL_iz00_732;
									goto BgL_loopz00_701;
								}
							}
						}
				}
			}
		}
	}



/* expand-struct */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2structzd2zzexpand_structz00(obj_t
		BgL_xz00_1, obj_t BgL_ez00_2)
	{
		AN_OBJECT;
		{	/* Expand/struct.scm 23 */
			{
				obj_t BgL_namez00_88;

				obj_t BgL_slotsz00_89;

				if (PAIRP(BgL_xz00_1))
					{	/* Expand/struct.scm 24 */
						obj_t BgL_cdrzd21397zd2_94;

						BgL_cdrzd21397zd2_94 = CDR(BgL_xz00_1);
						if (PAIRP(BgL_cdrzd21397zd2_94))
							{	/* Expand/struct.scm 24 */
								BgL_namez00_88 = CAR(BgL_cdrzd21397zd2_94);
								BgL_slotsz00_89 = CDR(BgL_cdrzd21397zd2_94);
								BGl_matchzd2definezd2structurez12z12zz__match_normaliza7eza7
									(BgL_xz00_1);
								{	/* Expand/struct.scm 27 */
									long BgL_lenz00_98;

									BgL_lenz00_98 = bgl_list_length(BgL_slotsz00_89);
									{	/* Expand/struct.scm 27 */
										obj_t BgL_slotszd2namezd2_99;

										if (NULLP(BgL_slotsz00_89))
											{	/* Expand/struct.scm 28 */
												BgL_slotszd2namezd2_99 = BNIL;
											}
										else
											{	/* Expand/struct.scm 28 */
												obj_t BgL_head1512z00_575;

												BgL_head1512z00_575 = MAKE_PAIR(BNIL, BNIL);
												{
													obj_t BgL_l1510z00_577;

													obj_t BgL_tail1513z00_578;

													BgL_l1510z00_577 = BgL_slotsz00_89;
													BgL_tail1513z00_578 = BgL_head1512z00_575;
												BgL_zc3anonymousza32189ze3z83_579:
													if (NULLP(BgL_l1510z00_577))
														{	/* Expand/struct.scm 28 */
															BgL_slotszd2namezd2_99 = CDR(BgL_head1512z00_575);
														}
													else
														{	/* Expand/struct.scm 28 */
															obj_t BgL_newtail1514z00_581;

															{	/* Expand/struct.scm 28 */
																obj_t BgL_arg2198z00_583;

																{	/* Expand/struct.scm 28 */
																	obj_t BgL_sz00_585;

																	BgL_sz00_585 = CAR(BgL_l1510z00_577);
																	{

																		if (PAIRP(BgL_sz00_585))
																			{	/* Expand/struct.scm 29 */
																				obj_t BgL_cdrzd21413zd2_593;

																				BgL_cdrzd21413zd2_593 =
																					CDR(BgL_sz00_585);
																				if (PAIRP(BgL_cdrzd21413zd2_593))
																					{	/* Expand/struct.scm 29 */
																						if (NULLP(CDR
																								(BgL_cdrzd21413zd2_593)))
																							{	/* Expand/struct.scm 29 */
																								BgL_arg2198z00_583 =
																									CAR(BgL_sz00_585);
																							}
																						else
																							{	/* Expand/struct.scm 29 */
																							BgL_tagzd21406zd2_590:
																								BgL_arg2198z00_583 =
																									BGl_errorz00zz__errorz00
																									(BFALSE,
																									BGl_string2229z00zzexpand_structz00,
																									BgL_xz00_1);
																							}
																					}
																				else
																					{	/* Expand/struct.scm 29 */
																						goto BgL_tagzd21406zd2_590;
																					}
																			}
																		else
																			{	/* Expand/struct.scm 29 */
																				if (SYMBOLP(BgL_sz00_585))
																					{	/* Expand/struct.scm 29 */
																						BgL_arg2198z00_583 = BgL_sz00_585;
																					}
																				else
																					{	/* Expand/struct.scm 29 */
																						goto BgL_tagzd21406zd2_590;
																					}
																			}
																	}
																}
																BgL_newtail1514z00_581 =
																	MAKE_PAIR(BgL_arg2198z00_583, BNIL);
															}
															SET_CDR(BgL_tail1513z00_578,
																BgL_newtail1514z00_581);
															{
																obj_t BgL_tail1513z00_764;

																obj_t BgL_l1510z00_762;

																BgL_l1510z00_762 = CDR(BgL_l1510z00_577);
																BgL_tail1513z00_764 = BgL_newtail1514z00_581;
																BgL_tail1513z00_578 = BgL_tail1513z00_764;
																BgL_l1510z00_577 = BgL_l1510z00_762;
																goto BgL_zc3anonymousza32189ze3z83_579;
															}
														}
												}
											}
										{	/* Expand/struct.scm 28 */
											bool_t BgL_slotszd2valzf3z21_100;

											BgL_slotszd2valzf3z21_100 = ((bool_t) 0);
											{	/* Expand/struct.scm 39 */
												obj_t BgL_slotszd2valzd2_101;

												if (NULLP(BgL_slotsz00_89))
													{	/* Expand/struct.scm 40 */
														BgL_slotszd2valzd2_101 = BNIL;
													}
												else
													{	/* Expand/struct.scm 40 */
														obj_t BgL_head1517z00_547;

														BgL_head1517z00_547 = MAKE_PAIR(BNIL, BNIL);
														{
															obj_t BgL_l1515z00_549;

															obj_t BgL_tail1518z00_550;

															BgL_l1515z00_549 = BgL_slotsz00_89;
															BgL_tail1518z00_550 = BgL_head1517z00_547;
														BgL_zc3anonymousza32157ze3z83_551:
															if (NULLP(BgL_l1515z00_549))
																{	/* Expand/struct.scm 40 */
																	BgL_slotszd2valzd2_101 =
																		CDR(BgL_head1517z00_547);
																}
															else
																{	/* Expand/struct.scm 40 */
																	obj_t BgL_newtail1519z00_553;

																	{	/* Expand/struct.scm 40 */
																		obj_t BgL_arg2165z00_555;

																		{	/* Expand/struct.scm 40 */
																			obj_t BgL_sz00_557;

																			BgL_sz00_557 = CAR(BgL_l1515z00_549);
																			{

																				if (PAIRP(BgL_sz00_557))
																					{	/* Expand/struct.scm 41 */
																						obj_t BgL_cdrzd21426zd2_564;

																						BgL_cdrzd21426zd2_564 =
																							CDR(BgL_sz00_557);
																						if (PAIRP(BgL_cdrzd21426zd2_564))
																							{	/* Expand/struct.scm 41 */
																								if (NULLP(CDR
																										(BgL_cdrzd21426zd2_564)))
																									{	/* Expand/struct.scm 41 */
																										obj_t BgL_arg2178z00_567;

																										BgL_arg2178z00_567 =
																											CAR
																											(BgL_cdrzd21426zd2_564);
																										BgL_slotszd2valzf3z21_100 =
																											((bool_t) 1);
																										BgL_arg2165z00_555 =
																											BgL_arg2178z00_567;
																									}
																								else
																									{	/* Expand/struct.scm 41 */
																									BgL_tagzd21421zd2_561:
																										BgL_arg2165z00_555 =
																											BGl_errorz00zz__errorz00
																											(BFALSE,
																											BGl_string2229z00zzexpand_structz00,
																											BgL_xz00_1);
																									}
																							}
																						else
																							{	/* Expand/struct.scm 41 */
																								goto BgL_tagzd21421zd2_561;
																							}
																					}
																				else
																					{	/* Expand/struct.scm 41 */
																						if (SYMBOLP(BgL_sz00_557))
																							{	/* Expand/struct.scm 41 */
																								BgL_arg2165z00_555 =
																									CNST_TABLE_REF(((long) 0));
																							}
																						else
																							{	/* Expand/struct.scm 41 */
																								goto BgL_tagzd21421zd2_561;
																							}
																					}
																			}
																		}
																		BgL_newtail1519z00_553 =
																			MAKE_PAIR(BgL_arg2165z00_555, BNIL);
																	}
																	SET_CDR(BgL_tail1518z00_550,
																		BgL_newtail1519z00_553);
																	{
																		obj_t BgL_tail1518z00_789;

																		obj_t BgL_l1515z00_787;

																		BgL_l1515z00_787 = CDR(BgL_l1515z00_549);
																		BgL_tail1518z00_789 =
																			BgL_newtail1519z00_553;
																		BgL_tail1518z00_550 = BgL_tail1518z00_789;
																		BgL_l1515z00_549 = BgL_l1515z00_787;
																		goto BgL_zc3anonymousza32157ze3z83_551;
																	}
																}
														}
													}
												{	/* Expand/struct.scm 40 */

													{	/* Expand/struct.scm 53 */
														obj_t BgL_arg1524z00_102;

														obj_t BgL_arg1525z00_103;

														BgL_arg1524z00_102 = CNST_TABLE_REF(((long) 1));
														{	/* Expand/struct.scm 57 */
															obj_t BgL_arg1526z00_104;

															obj_t BgL_arg1527z00_105;

															{	/* Expand/struct.scm 57 */
																obj_t BgL_arg1529z00_106;

																{	/* Expand/struct.scm 57 */
																	obj_t BgL_arg1530z00_107;

																	{	/* Expand/struct.scm 57 */
																		obj_t BgL_arg1531z00_108;

																		obj_t BgL_arg1532z00_109;

																		BgL_arg1531z00_108 =
																			CNST_TABLE_REF(((long) 2));
																		{	/* Expand/struct.scm 57 */
																			obj_t BgL_arg1533z00_110;

																			obj_t BgL_arg1534z00_111;

																			{	/* Expand/struct.scm 57 */
																				obj_t BgL_arg1538z00_115;

																				obj_t BgL_arg1539z00_116;

																				{	/* Expand/struct.scm 57 */
																					obj_t BgL_arg1540z00_117;

																					{	/* Expand/struct.scm 57 */
																						obj_t BgL_arg1541z00_118;

																						obj_t BgL_arg1542z00_119;

																						{	/* Expand/struct.scm 57 */
																							obj_t BgL_res2219z00_654;

																							{	/* Expand/struct.scm 57 */
																								obj_t BgL_symbolz00_652;

																								BgL_symbolz00_652 =
																									CNST_TABLE_REF(((long) 3));
																								{	/* Expand/struct.scm 57 */
																									obj_t BgL_arg2063z00_653;

																									BgL_arg2063z00_653 =
																										SYMBOL_TO_STRING
																										(BgL_symbolz00_652);
																									BgL_res2219z00_654 =
																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																										(BgL_arg2063z00_653);
																							}}
																							BgL_arg1541z00_118 =
																								BgL_res2219z00_654;
																						}
																						{	/* Expand/struct.scm 57 */
																							obj_t BgL_res2220z00_657;

																							{	/* Expand/struct.scm 57 */
																								obj_t BgL_symbolz00_655;

																								BgL_symbolz00_655 =
																									BgL_namez00_88;
																								{	/* Expand/struct.scm 57 */
																									obj_t BgL_arg2063z00_656;

																									BgL_arg2063z00_656 =
																										SYMBOL_TO_STRING
																										(BgL_symbolz00_655);
																									BgL_res2220z00_657 =
																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																										(BgL_arg2063z00_656);
																							}}
																							BgL_arg1542z00_119 =
																								BgL_res2220z00_657;
																						}
																						{	/* Expand/struct.scm 57 */
																							obj_t BgL_list1543z00_120;

																							{	/* Expand/struct.scm 57 */
																								obj_t BgL_arg1544z00_121;

																								BgL_arg1544z00_121 =
																									MAKE_PAIR(BgL_arg1542z00_119,
																									BNIL);
																								BgL_list1543z00_120 =
																									MAKE_PAIR(BgL_arg1541z00_118,
																									BgL_arg1544z00_121);
																							}
																							BgL_arg1540z00_117 =
																								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																								(BgL_list1543z00_120);
																					}}
																					BgL_arg1538z00_115 =
																						string_to_symbol(BSTRING_TO_STRING
																						(BgL_arg1540z00_117));
																				}
																				BgL_arg1539z00_116 =
																					CNST_TABLE_REF(((long) 4));
																				BgL_arg1533z00_110 =
																					MAKE_PAIR(BgL_arg1538z00_115,
																					BgL_arg1539z00_116);
																			}
																			if (BgL_slotszd2valzf3z21_100)
																				{	/* Expand/struct.scm 59 */
																					obj_t BgL_arg1545z00_122;

																					obj_t BgL_arg1546z00_123;

																					BgL_arg1545z00_122 =
																						CNST_TABLE_REF(((long) 5));
																					{	/* Expand/struct.scm 59 */
																						obj_t BgL_arg1547z00_124;

																						obj_t BgL_arg1548z00_125;

																						obj_t BgL_arg1549z00_126;

																						{	/* Expand/struct.scm 59 */
																							obj_t BgL_arg1555z00_131;

																							obj_t BgL_arg1556z00_132;

																							BgL_arg1555z00_131 =
																								CNST_TABLE_REF(((long) 6));
																							{	/* Expand/struct.scm 59 */
																								obj_t BgL_list1557z00_133;

																								BgL_list1557z00_133 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg1556z00_132 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(CNST_TABLE_REF(((long) 4)),
																									BgL_list1557z00_133);
																							}
																							BgL_arg1547z00_124 =
																								MAKE_PAIR(BgL_arg1555z00_131,
																								BgL_arg1556z00_132);
																						}
																						{	/* Expand/struct.scm 60 */
																							obj_t BgL_arg1559z00_134;

																							obj_t BgL_arg1560z00_135;

																							BgL_arg1559z00_134 =
																								CNST_TABLE_REF(((long) 5));
																							{	/* Expand/struct.scm 60 */
																								obj_t BgL_arg1562z00_136;

																								obj_t BgL_arg1563z00_137;

																								obj_t BgL_arg1564z00_138;

																								{	/* Expand/struct.scm 60 */
																									obj_t BgL_arg1570z00_143;

																									obj_t BgL_arg1571z00_144;

																									BgL_arg1570z00_143 =
																										CNST_TABLE_REF(((long) 7));
																									{	/* Expand/struct.scm 60 */
																										obj_t BgL_arg1572z00_145;

																										{	/* Expand/struct.scm 60 */
																											obj_t BgL_arg1576z00_148;

																											obj_t BgL_arg1577z00_149;

																											BgL_arg1576z00_148 =
																												CNST_TABLE_REF(((long)
																													8));
																											{	/* Expand/struct.scm 60 */
																												obj_t
																													BgL_arg1578z00_150;
																												{	/* Expand/struct.scm 60 */
																													obj_t
																														BgL_arg1582z00_153;
																													obj_t
																														BgL_arg1583z00_154;
																													BgL_arg1582z00_153 =
																														CNST_TABLE_REF((
																															(long) 9));
																													{	/* Expand/struct.scm 60 */
																														obj_t
																															BgL_list1584z00_155;
																														BgL_list1584z00_155
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg1583z00_154 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(CNST_TABLE_REF((
																																	(long) 4)),
																															BgL_list1584z00_155);
																													}
																													BgL_arg1578z00_150 =
																														MAKE_PAIR
																														(BgL_arg1582z00_153,
																														BgL_arg1583z00_154);
																												}
																												{	/* Expand/struct.scm 60 */
																													obj_t
																														BgL_list1581z00_152;
																													BgL_list1581z00_152 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg1577z00_149 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg1578z00_150,
																														BgL_list1581z00_152);
																											}}
																											BgL_arg1572z00_145 =
																												MAKE_PAIR
																												(BgL_arg1576z00_148,
																												BgL_arg1577z00_149);
																										}
																										{	/* Expand/struct.scm 60 */
																											obj_t BgL_list1575z00_147;

																											BgL_list1575z00_147 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg1571z00_144 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg1572z00_145,
																												BgL_list1575z00_147);
																									}}
																									BgL_arg1562z00_136 =
																										MAKE_PAIR
																										(BgL_arg1570z00_143,
																										BgL_arg1571z00_144);
																								}
																								{	/* Expand/struct.scm 61 */
																									obj_t BgL_arg1585z00_156;

																									obj_t BgL_arg1586z00_157;

																									BgL_arg1585z00_156 =
																										CNST_TABLE_REF(((long) 10));
																									{	/* Expand/struct.scm 61 */
																										obj_t BgL_arg1587z00_158;

																										obj_t BgL_arg1589z00_160;

																										{	/* Expand/struct.scm 61 */
																											obj_t BgL_arg1597z00_165;

																											obj_t BgL_arg1598z00_166;

																											BgL_arg1597z00_165 =
																												CNST_TABLE_REF(((long)
																													11));
																											{	/* Expand/struct.scm 61 */
																												obj_t
																													BgL_arg1599z00_167;
																												{	/* Expand/struct.scm 61 */
																													obj_t
																														BgL_arg1602z00_170;
																													{	/* Expand/struct.scm 61 */
																														obj_t
																															BgL_arg1603z00_171;
																														obj_t
																															BgL_arg1604z00_172;
																														{	/* Expand/struct.scm 61 */
																															obj_t
																																BgL_res2221z00_661;
																															{	/* Expand/struct.scm 61 */
																																obj_t
																																	BgL_symbolz00_659;
																																BgL_symbolz00_659
																																	=
																																	CNST_TABLE_REF
																																	(((long) 3));
																																{	/* Expand/struct.scm 61 */
																																	obj_t
																																		BgL_arg2063z00_660;
																																	BgL_arg2063z00_660
																																		=
																																		SYMBOL_TO_STRING
																																		(BgL_symbolz00_659);
																																	BgL_res2221z00_661
																																		=
																																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																		(BgL_arg2063z00_660);
																															}}
																															BgL_arg1603z00_171
																																=
																																BgL_res2221z00_661;
																														}
																														{	/* Expand/struct.scm 61 */
																															obj_t
																																BgL_res2222z00_664;
																															{	/* Expand/struct.scm 61 */
																																obj_t
																																	BgL_symbolz00_662;
																																BgL_symbolz00_662
																																	=
																																	BgL_namez00_88;
																																{	/* Expand/struct.scm 61 */
																																	obj_t
																																		BgL_arg2063z00_663;
																																	BgL_arg2063z00_663
																																		=
																																		SYMBOL_TO_STRING
																																		(BgL_symbolz00_662);
																																	BgL_res2222z00_664
																																		=
																																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																		(BgL_arg2063z00_663);
																															}}
																															BgL_arg1604z00_172
																																=
																																BgL_res2222z00_664;
																														}
																														{	/* Expand/struct.scm 61 */
																															obj_t
																																BgL_list1605z00_173;
																															{	/* Expand/struct.scm 61 */
																																obj_t
																																	BgL_arg1606z00_174;
																																BgL_arg1606z00_174
																																	=
																																	MAKE_PAIR
																																	(BgL_arg1604z00_172,
																																	BNIL);
																																BgL_list1605z00_173
																																	=
																																	MAKE_PAIR
																																	(BgL_arg1603z00_171,
																																	BgL_arg1606z00_174);
																															}
																															BgL_arg1602z00_170
																																=
																																BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																(BgL_list1605z00_173);
																													}}
																													BgL_arg1599z00_167 =
																														string_to_symbol
																														(BSTRING_TO_STRING
																														(BgL_arg1602z00_170));
																												}
																												{	/* Expand/struct.scm 61 */
																													obj_t
																														BgL_list1601z00_169;
																													BgL_list1601z00_169 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg1598z00_166 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg1599z00_167,
																														BgL_list1601z00_169);
																											}}
																											BgL_arg1587z00_158 =
																												MAKE_PAIR
																												(BgL_arg1597z00_165,
																												BgL_arg1598z00_166);
																										}
																										BgL_arg1589z00_160 =
																											CNST_TABLE_REF(((long)
																												4));
																										{	/* Expand/struct.scm 61 */
																											obj_t BgL_list1591z00_162;

																											{	/* Expand/struct.scm 61 */
																												obj_t
																													BgL_arg1593z00_163;
																												{	/* Expand/struct.scm 61 */
																													obj_t
																														BgL_arg1596z00_164;
																													BgL_arg1596z00_164 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg1593z00_163 =
																														MAKE_PAIR
																														(BgL_arg1589z00_160,
																														BgL_arg1596z00_164);
																												}
																												BgL_list1591z00_162 =
																													MAKE_PAIR
																													(BGl_string2230z00zzexpand_structz00,
																													BgL_arg1593z00_163);
																											}
																											BgL_arg1586z00_157 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg1587z00_158,
																												BgL_list1591z00_162);
																									}}
																									BgL_arg1563z00_137 =
																										MAKE_PAIR
																										(BgL_arg1585z00_156,
																										BgL_arg1586z00_157);
																								}
																								{	/* Expand/struct.scm 64 */
																									obj_t BgL_arg1607z00_175;

																									obj_t BgL_arg1608z00_176;

																									{	/* Expand/struct.scm 64 */
																										obj_t BgL_arg1610z00_177;

																										obj_t BgL_arg1611z00_178;

																										BgL_arg1610z00_177 =
																											CNST_TABLE_REF(((long)
																												12));
																										{	/* Expand/struct.scm 64 */
																											obj_t BgL_list1612z00_179;

																											{	/* Expand/struct.scm 64 */
																												obj_t
																													BgL_arg1613z00_180;
																												obj_t
																													BgL_arg1614z00_181;
																												BgL_arg1613z00_180 =
																													CNST_TABLE_REF(((long)
																														13));
																												BgL_arg1614z00_181 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_list1612z00_179 =
																													MAKE_PAIR
																													(BgL_arg1613z00_180,
																													BgL_arg1614z00_181);
																											}
																											BgL_arg1611z00_178 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(CNST_TABLE_REF(((long)
																														14)),
																												BgL_list1612z00_179);
																										}
																										BgL_arg1607z00_175 =
																											MAKE_PAIR
																											(BgL_arg1610z00_177,
																											BgL_arg1611z00_178);
																									}
																									{	/* Expand/struct.scm 65 */
																										obj_t BgL_arg1615z00_182;

																										obj_t BgL_arg1616z00_183;

																										{	/* Expand/struct.scm 65 */
																											obj_t BgL_arg1623z00_188;

																											obj_t BgL_arg1624z00_189;

																											BgL_arg1623z00_188 =
																												CNST_TABLE_REF(((long)
																													11));
																											{	/* Expand/struct.scm 65 */
																												obj_t
																													BgL_list1625z00_190;
																												BgL_list1625z00_190 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg1624z00_189 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_namez00_88,
																													BgL_list1625z00_190);
																											}
																											BgL_arg1615z00_182 =
																												MAKE_PAIR
																												(BgL_arg1623z00_188,
																												BgL_arg1624z00_189);
																										}
																										{	/* Expand/struct.scm 65 */
																											obj_t BgL_arg1626z00_191;

																											obj_t BgL_arg1627z00_192;

																											BgL_arg1626z00_191 =
																												CNST_TABLE_REF(((long)
																													15));
																											{	/* Expand/struct.scm 65 */
																												obj_t
																													BgL_list1628z00_193;
																												BgL_list1628z00_193 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg1627z00_192 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(CNST_TABLE_REF((
																															(long) 4)),
																													BgL_list1628z00_193);
																											}
																											BgL_arg1616z00_183 =
																												MAKE_PAIR
																												(BgL_arg1626z00_191,
																												BgL_arg1627z00_192);
																										}
																										{	/* Expand/struct.scm 64 */
																											obj_t BgL_list1619z00_185;

																											{	/* Expand/struct.scm 64 */
																												obj_t
																													BgL_arg1621z00_186;
																												{	/* Expand/struct.scm 64 */
																													obj_t
																														BgL_arg1622z00_187;
																													BgL_arg1622z00_187 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg1621z00_186 =
																														MAKE_PAIR
																														(BgL_arg1616z00_183,
																														BgL_arg1622z00_187);
																												}
																												BgL_list1619z00_185 =
																													MAKE_PAIR(BINT
																													(BgL_lenz00_98),
																													BgL_arg1621z00_186);
																											}
																											BgL_arg1608z00_176 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg1615z00_182,
																												BgL_list1619z00_185);
																									}}
																									BgL_arg1564z00_138 =
																										MAKE_PAIR
																										(BgL_arg1607z00_175,
																										BgL_arg1608z00_176);
																								}
																								{	/* Expand/struct.scm 60 */
																									obj_t BgL_list1566z00_140;

																									{	/* Expand/struct.scm 60 */
																										obj_t BgL_arg1567z00_141;

																										{	/* Expand/struct.scm 60 */
																											obj_t BgL_arg1568z00_142;

																											BgL_arg1568z00_142 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg1567z00_141 =
																												MAKE_PAIR
																												(BgL_arg1564z00_138,
																												BgL_arg1568z00_142);
																										}
																										BgL_list1566z00_140 =
																											MAKE_PAIR
																											(BgL_arg1563z00_137,
																											BgL_arg1567z00_141);
																									}
																									BgL_arg1560z00_135 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg1562z00_136,
																										BgL_list1566z00_140);
																							}}
																							BgL_arg1548z00_125 =
																								MAKE_PAIR(BgL_arg1559z00_134,
																								BgL_arg1560z00_135);
																						}
																						BgL_arg1549z00_126 =
																							MAKE_PAIR(BgL_namez00_88,
																							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																							(BgL_slotszd2valzd2_101, BNIL));
																						{	/* Expand/struct.scm 59 */
																							obj_t BgL_list1552z00_128;

																							{	/* Expand/struct.scm 59 */
																								obj_t BgL_arg1553z00_129;

																								{	/* Expand/struct.scm 59 */
																									obj_t BgL_arg1554z00_130;

																									BgL_arg1554z00_130 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg1553z00_129 =
																										MAKE_PAIR
																										(BgL_arg1549z00_126,
																										BgL_arg1554z00_130);
																								}
																								BgL_list1552z00_128 =
																									MAKE_PAIR(BgL_arg1548z00_125,
																									BgL_arg1553z00_129);
																							}
																							BgL_arg1546z00_123 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg1547z00_124,
																								BgL_list1552z00_128);
																					}}
																					BgL_arg1534z00_111 =
																						MAKE_PAIR(BgL_arg1545z00_122,
																						BgL_arg1546z00_123);
																				}
																			else
																				{	/* Expand/struct.scm 67 */
																					obj_t BgL_arg1631z00_195;

																					obj_t BgL_arg1632z00_196;

																					BgL_arg1631z00_195 =
																						CNST_TABLE_REF(((long) 5));
																					{	/* Expand/struct.scm 67 */
																						obj_t BgL_arg1633z00_197;

																						obj_t BgL_arg1635z00_198;

																						obj_t BgL_arg1636z00_199;

																						{	/* Expand/struct.scm 67 */
																							obj_t BgL_arg1643z00_204;

																							obj_t BgL_arg1644z00_205;

																							BgL_arg1643z00_204 =
																								CNST_TABLE_REF(((long) 6));
																							{	/* Expand/struct.scm 67 */
																								obj_t BgL_list1645z00_206;

																								BgL_list1645z00_206 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg1644z00_205 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(CNST_TABLE_REF(((long) 4)),
																									BgL_list1645z00_206);
																							}
																							BgL_arg1633z00_197 =
																								MAKE_PAIR(BgL_arg1643z00_204,
																								BgL_arg1644z00_205);
																						}
																						{	/* Expand/struct.scm 68 */
																							obj_t BgL_arg1646z00_207;

																							obj_t BgL_arg1647z00_208;

																							BgL_arg1646z00_207 =
																								CNST_TABLE_REF(((long) 5));
																							{	/* Expand/struct.scm 68 */
																								obj_t BgL_arg1650z00_209;

																								obj_t BgL_arg1651z00_210;

																								obj_t BgL_arg1653z00_211;

																								{	/* Expand/struct.scm 68 */
																									obj_t BgL_arg1660z00_216;

																									obj_t BgL_arg1662z00_217;

																									BgL_arg1660z00_216 =
																										CNST_TABLE_REF(((long) 7));
																									{	/* Expand/struct.scm 68 */
																										obj_t BgL_arg1663z00_218;

																										{	/* Expand/struct.scm 68 */
																											obj_t BgL_arg1666z00_221;

																											obj_t BgL_arg1667z00_222;

																											BgL_arg1666z00_221 =
																												CNST_TABLE_REF(((long)
																													8));
																											{	/* Expand/struct.scm 68 */
																												obj_t
																													BgL_arg1668z00_223;
																												{	/* Expand/struct.scm 68 */
																													obj_t
																														BgL_arg1672z00_226;
																													obj_t
																														BgL_arg1673z00_227;
																													BgL_arg1672z00_226 =
																														CNST_TABLE_REF((
																															(long) 9));
																													{	/* Expand/struct.scm 68 */
																														obj_t
																															BgL_list1674z00_228;
																														BgL_list1674z00_228
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg1673z00_227 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(CNST_TABLE_REF((
																																	(long) 4)),
																															BgL_list1674z00_228);
																													}
																													BgL_arg1668z00_223 =
																														MAKE_PAIR
																														(BgL_arg1672z00_226,
																														BgL_arg1673z00_227);
																												}
																												{	/* Expand/struct.scm 68 */
																													obj_t
																														BgL_list1670z00_225;
																													BgL_list1670z00_225 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg1667z00_222 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg1668z00_223,
																														BgL_list1670z00_225);
																											}}
																											BgL_arg1663z00_218 =
																												MAKE_PAIR
																												(BgL_arg1666z00_221,
																												BgL_arg1667z00_222);
																										}
																										{	/* Expand/struct.scm 68 */
																											obj_t BgL_list1665z00_220;

																											BgL_list1665z00_220 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg1662z00_217 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg1663z00_218,
																												BgL_list1665z00_220);
																									}}
																									BgL_arg1650z00_209 =
																										MAKE_PAIR
																										(BgL_arg1660z00_216,
																										BgL_arg1662z00_217);
																								}
																								{	/* Expand/struct.scm 69 */
																									obj_t BgL_arg1675z00_229;

																									obj_t BgL_arg1676z00_230;

																									BgL_arg1675z00_229 =
																										CNST_TABLE_REF(((long) 10));
																									{	/* Expand/struct.scm 69 */
																										obj_t BgL_arg1677z00_231;

																										obj_t BgL_arg1680z00_233;

																										{	/* Expand/struct.scm 69 */
																											obj_t BgL_arg1690z00_238;

																											obj_t BgL_arg1691z00_239;

																											BgL_arg1690z00_238 =
																												CNST_TABLE_REF(((long)
																													11));
																											{	/* Expand/struct.scm 69 */
																												obj_t
																													BgL_arg1692z00_240;
																												{	/* Expand/struct.scm 69 */
																													obj_t
																														BgL_arg1695z00_243;
																													{	/* Expand/struct.scm 69 */
																														obj_t
																															BgL_arg1696z00_244;
																														obj_t
																															BgL_arg1697z00_245;
																														{	/* Expand/struct.scm 69 */
																															obj_t
																																BgL_res2223z00_668;
																															{	/* Expand/struct.scm 69 */
																																obj_t
																																	BgL_symbolz00_666;
																																BgL_symbolz00_666
																																	=
																																	CNST_TABLE_REF
																																	(((long) 3));
																																{	/* Expand/struct.scm 69 */
																																	obj_t
																																		BgL_arg2063z00_667;
																																	BgL_arg2063z00_667
																																		=
																																		SYMBOL_TO_STRING
																																		(BgL_symbolz00_666);
																																	BgL_res2223z00_668
																																		=
																																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																		(BgL_arg2063z00_667);
																															}}
																															BgL_arg1696z00_244
																																=
																																BgL_res2223z00_668;
																														}
																														{	/* Expand/struct.scm 69 */
																															obj_t
																																BgL_res2224z00_671;
																															{	/* Expand/struct.scm 69 */
																																obj_t
																																	BgL_symbolz00_669;
																																BgL_symbolz00_669
																																	=
																																	BgL_namez00_88;
																																{	/* Expand/struct.scm 69 */
																																	obj_t
																																		BgL_arg2063z00_670;
																																	BgL_arg2063z00_670
																																		=
																																		SYMBOL_TO_STRING
																																		(BgL_symbolz00_669);
																																	BgL_res2224z00_671
																																		=
																																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																		(BgL_arg2063z00_670);
																															}}
																															BgL_arg1697z00_245
																																=
																																BgL_res2224z00_671;
																														}
																														{	/* Expand/struct.scm 69 */
																															obj_t
																																BgL_list1698z00_246;
																															{	/* Expand/struct.scm 69 */
																																obj_t
																																	BgL_arg1700z00_247;
																																BgL_arg1700z00_247
																																	=
																																	MAKE_PAIR
																																	(BgL_arg1697z00_245,
																																	BNIL);
																																BgL_list1698z00_246
																																	=
																																	MAKE_PAIR
																																	(BgL_arg1696z00_244,
																																	BgL_arg1700z00_247);
																															}
																															BgL_arg1695z00_243
																																=
																																BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																(BgL_list1698z00_246);
																													}}
																													BgL_arg1692z00_240 =
																														string_to_symbol
																														(BSTRING_TO_STRING
																														(BgL_arg1695z00_243));
																												}
																												{	/* Expand/struct.scm 69 */
																													obj_t
																														BgL_list1694z00_242;
																													BgL_list1694z00_242 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg1691z00_239 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg1692z00_240,
																														BgL_list1694z00_242);
																											}}
																											BgL_arg1677z00_231 =
																												MAKE_PAIR
																												(BgL_arg1690z00_238,
																												BgL_arg1691z00_239);
																										}
																										BgL_arg1680z00_233 =
																											CNST_TABLE_REF(((long)
																												4));
																										{	/* Expand/struct.scm 69 */
																											obj_t BgL_list1685z00_235;

																											{	/* Expand/struct.scm 69 */
																												obj_t
																													BgL_arg1688z00_236;
																												{	/* Expand/struct.scm 69 */
																													obj_t
																														BgL_arg1689z00_237;
																													BgL_arg1689z00_237 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg1688z00_236 =
																														MAKE_PAIR
																														(BgL_arg1680z00_233,
																														BgL_arg1689z00_237);
																												}
																												BgL_list1685z00_235 =
																													MAKE_PAIR
																													(BGl_string2230z00zzexpand_structz00,
																													BgL_arg1688z00_236);
																											}
																											BgL_arg1676z00_230 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg1677z00_231,
																												BgL_list1685z00_235);
																									}}
																									BgL_arg1651z00_210 =
																										MAKE_PAIR
																										(BgL_arg1675z00_229,
																										BgL_arg1676z00_230);
																								}
																								{	/* Expand/struct.scm 72 */
																									obj_t BgL_arg1701z00_248;

																									obj_t BgL_arg1702z00_249;

																									{	/* Expand/struct.scm 72 */
																										obj_t BgL_arg1703z00_250;

																										obj_t BgL_arg1704z00_251;

																										BgL_arg1703z00_250 =
																											CNST_TABLE_REF(((long)
																												12));
																										{	/* Expand/struct.scm 72 */
																											obj_t BgL_list1705z00_252;

																											{	/* Expand/struct.scm 72 */
																												obj_t
																													BgL_arg1706z00_253;
																												obj_t
																													BgL_arg1707z00_254;
																												BgL_arg1706z00_253 =
																													CNST_TABLE_REF(((long)
																														13));
																												BgL_arg1707z00_254 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_list1705z00_252 =
																													MAKE_PAIR
																													(BgL_arg1706z00_253,
																													BgL_arg1707z00_254);
																											}
																											BgL_arg1704z00_251 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(CNST_TABLE_REF(((long)
																														14)),
																												BgL_list1705z00_252);
																										}
																										BgL_arg1701z00_248 =
																											MAKE_PAIR
																											(BgL_arg1703z00_250,
																											BgL_arg1704z00_251);
																									}
																									{	/* Expand/struct.scm 73 */
																										obj_t BgL_arg1708z00_255;

																										obj_t BgL_arg1709z00_256;

																										{	/* Expand/struct.scm 73 */
																											obj_t BgL_arg1715z00_261;

																											obj_t BgL_arg1718z00_262;

																											BgL_arg1715z00_261 =
																												CNST_TABLE_REF(((long)
																													11));
																											{	/* Expand/struct.scm 73 */
																												obj_t
																													BgL_list1719z00_263;
																												BgL_list1719z00_263 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg1718z00_262 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_namez00_88,
																													BgL_list1719z00_263);
																											}
																											BgL_arg1708z00_255 =
																												MAKE_PAIR
																												(BgL_arg1715z00_261,
																												BgL_arg1718z00_262);
																										}
																										{	/* Expand/struct.scm 73 */
																											obj_t BgL_arg1724z00_264;

																											obj_t BgL_arg1725z00_265;

																											BgL_arg1724z00_264 =
																												CNST_TABLE_REF(((long)
																													15));
																											{	/* Expand/struct.scm 73 */
																												obj_t
																													BgL_list1726z00_266;
																												BgL_list1726z00_266 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg1725z00_265 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(CNST_TABLE_REF((
																															(long) 4)),
																													BgL_list1726z00_266);
																											}
																											BgL_arg1709z00_256 =
																												MAKE_PAIR
																												(BgL_arg1724z00_264,
																												BgL_arg1725z00_265);
																										}
																										{	/* Expand/struct.scm 72 */
																											obj_t BgL_list1711z00_258;

																											{	/* Expand/struct.scm 72 */
																												obj_t
																													BgL_arg1713z00_259;
																												{	/* Expand/struct.scm 72 */
																													obj_t
																														BgL_arg1714z00_260;
																													BgL_arg1714z00_260 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg1713z00_259 =
																														MAKE_PAIR
																														(BgL_arg1709z00_256,
																														BgL_arg1714z00_260);
																												}
																												BgL_list1711z00_258 =
																													MAKE_PAIR(BINT
																													(BgL_lenz00_98),
																													BgL_arg1713z00_259);
																											}
																											BgL_arg1702z00_249 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg1708z00_255,
																												BgL_list1711z00_258);
																									}}
																									BgL_arg1653z00_211 =
																										MAKE_PAIR
																										(BgL_arg1701z00_248,
																										BgL_arg1702z00_249);
																								}
																								{	/* Expand/struct.scm 68 */
																									obj_t BgL_list1655z00_213;

																									{	/* Expand/struct.scm 68 */
																										obj_t BgL_arg1657z00_214;

																										{	/* Expand/struct.scm 68 */
																											obj_t BgL_arg1659z00_215;

																											BgL_arg1659z00_215 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg1657z00_214 =
																												MAKE_PAIR
																												(BgL_arg1653z00_211,
																												BgL_arg1659z00_215);
																										}
																										BgL_list1655z00_213 =
																											MAKE_PAIR
																											(BgL_arg1651z00_210,
																											BgL_arg1657z00_214);
																									}
																									BgL_arg1647z00_208 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg1650z00_209,
																										BgL_list1655z00_213);
																							}}
																							BgL_arg1635z00_198 =
																								MAKE_PAIR(BgL_arg1646z00_207,
																								BgL_arg1647z00_208);
																						}
																						{	/* Expand/struct.scm 74 */
																							obj_t BgL_arg1729z00_267;

																							obj_t BgL_arg1730z00_268;

																							{	/* Expand/struct.scm 74 */
																								obj_t BgL_arg1731z00_269;

																								obj_t BgL_arg1732z00_270;

																								BgL_arg1731z00_269 =
																									CNST_TABLE_REF(((long) 12));
																								{	/* Expand/struct.scm 74 */
																									obj_t BgL_list1733z00_271;

																									{	/* Expand/struct.scm 74 */
																										obj_t BgL_arg1734z00_272;

																										obj_t BgL_arg1735z00_273;

																										BgL_arg1734z00_272 =
																											CNST_TABLE_REF(((long)
																												13));
																										BgL_arg1735z00_273 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list1733z00_271 =
																											MAKE_PAIR
																											(BgL_arg1734z00_272,
																											BgL_arg1735z00_273);
																									}
																									BgL_arg1732z00_270 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(CNST_TABLE_REF(((long)
																												14)),
																										BgL_list1733z00_271);
																								}
																								BgL_arg1729z00_267 =
																									MAKE_PAIR(BgL_arg1731z00_269,
																									BgL_arg1732z00_270);
																							}
																							{	/* Expand/struct.scm 75 */
																								obj_t BgL_arg1736z00_274;

																								obj_t BgL_arg1738z00_275;

																								{	/* Expand/struct.scm 75 */
																									obj_t BgL_arg1743z00_280;

																									obj_t BgL_arg1744z00_281;

																									BgL_arg1743z00_280 =
																										CNST_TABLE_REF(((long) 11));
																									{	/* Expand/struct.scm 75 */
																										obj_t BgL_list1745z00_282;

																										BgL_list1745z00_282 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg1744z00_281 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_namez00_88,
																											BgL_list1745z00_282);
																									}
																									BgL_arg1736z00_274 =
																										MAKE_PAIR
																										(BgL_arg1743z00_280,
																										BgL_arg1744z00_281);
																								}
																								{	/* Expand/struct.scm 75 */
																									obj_t BgL_arg1746z00_283;

																									obj_t BgL_arg1747z00_284;

																									BgL_arg1746z00_283 =
																										CNST_TABLE_REF(((long) 11));
																									{	/* Expand/struct.scm 75 */
																										obj_t BgL_list1748z00_285;

																										BgL_list1748z00_285 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg1747z00_284 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BNIL,
																											BgL_list1748z00_285);
																									}
																									BgL_arg1738z00_275 =
																										MAKE_PAIR
																										(BgL_arg1746z00_283,
																										BgL_arg1747z00_284);
																								}
																								{	/* Expand/struct.scm 74 */
																									obj_t BgL_list1740z00_277;

																									{	/* Expand/struct.scm 74 */
																										obj_t BgL_arg1741z00_278;

																										{	/* Expand/struct.scm 74 */
																											obj_t BgL_arg1742z00_279;

																											BgL_arg1742z00_279 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg1741z00_278 =
																												MAKE_PAIR
																												(BgL_arg1738z00_275,
																												BgL_arg1742z00_279);
																										}
																										BgL_list1740z00_277 =
																											MAKE_PAIR(BINT
																											(BgL_lenz00_98),
																											BgL_arg1741z00_278);
																									}
																									BgL_arg1730z00_268 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg1736z00_274,
																										BgL_list1740z00_277);
																							}}
																							BgL_arg1636z00_199 =
																								MAKE_PAIR(BgL_arg1729z00_267,
																								BgL_arg1730z00_268);
																						}
																						{	/* Expand/struct.scm 67 */
																							obj_t BgL_list1638z00_201;

																							{	/* Expand/struct.scm 67 */
																								obj_t BgL_arg1639z00_202;

																								{	/* Expand/struct.scm 67 */
																									obj_t BgL_arg1640z00_203;

																									BgL_arg1640z00_203 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg1639z00_202 =
																										MAKE_PAIR
																										(BgL_arg1636z00_199,
																										BgL_arg1640z00_203);
																								}
																								BgL_list1638z00_201 =
																									MAKE_PAIR(BgL_arg1635z00_198,
																									BgL_arg1639z00_202);
																							}
																							BgL_arg1632z00_196 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg1633z00_197,
																								BgL_list1638z00_201);
																					}}
																					BgL_arg1534z00_111 =
																						MAKE_PAIR(BgL_arg1631z00_195,
																						BgL_arg1632z00_196);
																				}
																			{	/* Expand/struct.scm 57 */
																				obj_t BgL_list1536z00_113;

																				{	/* Expand/struct.scm 57 */
																					obj_t BgL_arg1537z00_114;

																					BgL_arg1537z00_114 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list1536z00_113 =
																						MAKE_PAIR(BgL_arg1534z00_111,
																						BgL_arg1537z00_114);
																				}
																				BgL_arg1532z00_109 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg1533z00_110,
																					BgL_list1536z00_113);
																		}}
																		BgL_arg1530z00_107 =
																			MAKE_PAIR(BgL_arg1531z00_108,
																			BgL_arg1532z00_109);
																	}
																	BgL_arg1529z00_106 =
																		BGl_epairifyz00zztools_miscz00
																		(BgL_arg1530z00_107, BgL_xz00_1);
																}
																BgL_arg1526z00_104 =
																	PROCEDURE_ENTRY(BgL_ez00_2) (BgL_ez00_2,
																	BgL_arg1529z00_106, BgL_ez00_2, BEOA);
															}
															{	/* Expand/struct.scm 80 */
																obj_t BgL_arg1749z00_286;

																obj_t BgL_arg1750z00_287;

																{	/* Expand/struct.scm 80 */
																	obj_t BgL_arg1751z00_288;

																	{	/* Expand/struct.scm 80 */
																		obj_t BgL_arg1753z00_289;

																		{	/* Expand/struct.scm 80 */
																			obj_t BgL_arg1754z00_290;

																			obj_t BgL_arg1755z00_291;

																			BgL_arg1754z00_290 =
																				CNST_TABLE_REF(((long) 2));
																			{	/* Expand/struct.scm 80 */
																				obj_t BgL_arg1756z00_292;

																				obj_t BgL_arg1757z00_293;

																				BgL_arg1756z00_292 =
																					MAKE_PAIR(BgL_namez00_88,
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_slotszd2namezd2_99, BNIL));
																				{	/* Expand/struct.scm 81 */
																					obj_t BgL_arg1768z00_298;

																					obj_t BgL_arg1769z00_299;

																					BgL_arg1768z00_298 =
																						CNST_TABLE_REF(((long) 16));
																					{	/* Expand/struct.scm 81 */
																						obj_t BgL_arg1770z00_300;

																						obj_t BgL_arg1771z00_301;

																						{	/* Expand/struct.scm 81 */
																							obj_t BgL_arg1775z00_303;

																							{	/* Expand/struct.scm 81 */
																								obj_t BgL_arg1777z00_305;

																								obj_t BgL_arg1778z00_306;

																								BgL_arg1777z00_305 =
																									CNST_TABLE_REF(((long) 17));
																								{	/* Expand/struct.scm 81 */
																									obj_t BgL_arg1779z00_307;

																									{	/* Expand/struct.scm 81 */
																										obj_t BgL_arg1784z00_310;

																										obj_t BgL_arg1785z00_311;

																										BgL_arg1784z00_310 =
																											CNST_TABLE_REF(((long)
																												18));
																										{	/* Expand/struct.scm 81 */
																											obj_t BgL_arg1786z00_312;

																											{	/* Expand/struct.scm 81 */
																												obj_t
																													BgL_arg1790z00_316;
																												obj_t
																													BgL_arg1791z00_317;
																												BgL_arg1790z00_316 =
																													CNST_TABLE_REF(((long)
																														11));
																												{	/* Expand/struct.scm 81 */
																													obj_t
																														BgL_list1792z00_318;
																													BgL_list1792z00_318 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg1791z00_317 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_namez00_88,
																														BgL_list1792z00_318);
																												}
																												BgL_arg1786z00_312 =
																													MAKE_PAIR
																													(BgL_arg1790z00_316,
																													BgL_arg1791z00_317);
																											}
																											{	/* Expand/struct.scm 81 */
																												obj_t
																													BgL_list1788z00_314;
																												{	/* Expand/struct.scm 81 */
																													obj_t
																														BgL_arg1789z00_315;
																													BgL_arg1789z00_315 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_list1788z00_314 =
																														MAKE_PAIR(BINT
																														(BgL_lenz00_98),
																														BgL_arg1789z00_315);
																												}
																												BgL_arg1785z00_311 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_arg1786z00_312,
																													BgL_list1788z00_314);
																										}}
																										BgL_arg1779z00_307 =
																											MAKE_PAIR
																											(BgL_arg1784z00_310,
																											BgL_arg1785z00_311);
																									}
																									{	/* Expand/struct.scm 81 */
																										obj_t BgL_list1783z00_309;

																										BgL_list1783z00_309 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg1778z00_306 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg1779z00_307,
																											BgL_list1783z00_309);
																								}}
																								BgL_arg1775z00_303 =
																									MAKE_PAIR(BgL_arg1777z00_305,
																									BgL_arg1778z00_306);
																							}
																							BgL_arg1770z00_300 =
																								MAKE_PAIR(BgL_arg1775z00_303,
																								BNIL);
																						}
																						{	/* Expand/struct.scm 82 */
																							obj_t BgL_arg1793z00_319;

																							obj_t BgL_arg1794z00_320;

																							{
																								obj_t BgL_slotsz00_323;

																								obj_t BgL_resz00_324;

																								BgL_slotsz00_323 =
																									BgL_slotszd2namezd2_99;
																								BgL_resz00_324 = BNIL;
																							BgL_zc3anonymousza31795ze3z83_325:
																								if (NULLP
																									(BgL_slotsz00_323))
																									{	/* Expand/struct.scm 84 */
																										BgL_arg1793z00_319 =
																											BgL_resz00_324;
																									}
																								else
																									{	/* Expand/struct.scm 86 */
																										obj_t BgL_arg1797z00_327;

																										obj_t BgL_arg1798z00_328;

																										BgL_arg1797z00_327 =
																											CDR(BgL_slotsz00_323);
																										{	/* Expand/struct.scm 88 */
																											obj_t BgL_arg1799z00_329;

																											{	/* Expand/struct.scm 88 */
																												obj_t
																													BgL_arg1800z00_330;
																												obj_t
																													BgL_arg1801z00_331;
																												{	/* Expand/struct.scm 88 */
																													obj_t
																														BgL_arg1803z00_332;
																													obj_t
																														BgL_arg1804z00_333;
																													obj_t
																														BgL_arg1805z00_334;
																													BgL_arg1803z00_332 =
																														CNST_TABLE_REF((
																															(long) 19));
																													BgL_arg1804z00_333 =
																														CAR
																														(BgL_slotsz00_323);
																													BgL_arg1805z00_334 =
																														CNST_TABLE_REF((
																															(long) 20));
																													{	/* Expand/struct.scm 87 */
																														obj_t
																															BgL_list1806z00_335;
																														{	/* Expand/struct.scm 87 */
																															obj_t
																																BgL_arg1807z00_336;
																															{	/* Expand/struct.scm 87 */
																																obj_t
																																	BgL_arg1809z00_337;
																																{	/* Expand/struct.scm 87 */
																																	obj_t
																																		BgL_arg1810z00_338;
																																	BgL_arg1810z00_338
																																		=
																																		MAKE_PAIR
																																		(BgL_arg1805z00_334,
																																		BNIL);
																																	BgL_arg1809z00_337
																																		=
																																		MAKE_PAIR
																																		(BgL_arg1804z00_333,
																																		BgL_arg1810z00_338);
																																}
																																BgL_arg1807z00_336
																																	=
																																	MAKE_PAIR
																																	(BgL_arg1803z00_332,
																																	BgL_arg1809z00_337);
																															}
																															BgL_list1806z00_335
																																=
																																MAKE_PAIR
																																(BgL_namez00_88,
																																BgL_arg1807z00_336);
																														}
																														BgL_arg1800z00_330 =
																															BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																															(BgL_list1806z00_335);
																												}}
																												{	/* Expand/struct.scm 87 */
																													obj_t
																														BgL_arg1811z00_339;
																													obj_t
																														BgL_arg1812z00_340;
																													BgL_arg1811z00_339 =
																														CNST_TABLE_REF((
																															(long) 17));
																													BgL_arg1812z00_340 =
																														CAR
																														(BgL_slotsz00_323);
																													{	/* Expand/struct.scm 87 */
																														obj_t
																															BgL_list1814z00_342;
																														{	/* Expand/struct.scm 87 */
																															obj_t
																																BgL_arg1815z00_343;
																															BgL_arg1815z00_343
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_list1814z00_342
																																=
																																MAKE_PAIR
																																(BgL_arg1812z00_340,
																																BgL_arg1815z00_343);
																														}
																														BgL_arg1801z00_331 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_arg1811z00_339,
																															BgL_list1814z00_342);
																												}}
																												BgL_arg1799z00_329 =
																													MAKE_PAIR
																													(BgL_arg1800z00_330,
																													BgL_arg1801z00_331);
																											}
																											BgL_arg1798z00_328 =
																												MAKE_PAIR
																												(BgL_arg1799z00_329,
																												BgL_resz00_324);
																										}
																										{
																											obj_t BgL_resz00_1019;

																											obj_t BgL_slotsz00_1018;

																											BgL_slotsz00_1018 =
																												BgL_arg1797z00_327;
																											BgL_resz00_1019 =
																												BgL_arg1798z00_328;
																											BgL_resz00_324 =
																												BgL_resz00_1019;
																											BgL_slotsz00_323 =
																												BgL_slotsz00_1018;
																											goto
																												BgL_zc3anonymousza31795ze3z83_325;
																										}
																									}
																							}
																							BgL_arg1794z00_320 =
																								MAKE_PAIR(CNST_TABLE_REF(((long)
																										17)), BNIL);
																							BgL_arg1771z00_301 =
																								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg1793z00_319,
																								BgL_arg1794z00_320);
																						}
																						{	/* Expand/struct.scm 81 */
																							obj_t BgL_list1772z00_302;

																							BgL_list1772z00_302 =
																								MAKE_PAIR(BgL_arg1771z00_301,
																								BNIL);
																							BgL_arg1769z00_299 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg1770z00_300,
																								BgL_list1772z00_302);
																					}}
																					BgL_arg1757z00_293 =
																						MAKE_PAIR(BgL_arg1768z00_298,
																						BgL_arg1769z00_299);
																				}
																				{	/* Expand/struct.scm 80 */
																					obj_t BgL_list1759z00_295;

																					{	/* Expand/struct.scm 80 */
																						obj_t BgL_arg1764z00_296;

																						BgL_arg1764z00_296 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list1759z00_295 =
																							MAKE_PAIR(BgL_arg1757z00_293,
																							BgL_arg1764z00_296);
																					}
																					BgL_arg1755z00_291 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg1756z00_292,
																						BgL_list1759z00_295);
																			}}
																			BgL_arg1753z00_289 =
																				MAKE_PAIR(BgL_arg1754z00_290,
																				BgL_arg1755z00_291);
																		}
																		BgL_arg1751z00_288 =
																			BGl_epairifyz00zztools_miscz00
																			(BgL_arg1753z00_289, BgL_xz00_1);
																	}
																	BgL_arg1749z00_286 =
																		PROCEDURE_ENTRY(BgL_ez00_2) (BgL_ez00_2,
																		BgL_arg1751z00_288, BgL_ez00_2, BEOA);
																}
																{	/* Expand/struct.scm 100 */
																	obj_t BgL_arg1816z00_345;

																	obj_t BgL_arg1817z00_346;

																	{	/* Expand/struct.scm 100 */
																		obj_t BgL_arg1818z00_347;

																		{	/* Expand/struct.scm 100 */
																			obj_t BgL_arg1819z00_348;

																			{	/* Expand/struct.scm 100 */
																				obj_t BgL_arg1820z00_349;

																				obj_t BgL_arg1821z00_350;

																				BgL_arg1820z00_349 =
																					CNST_TABLE_REF(((long) 2));
																				{	/* Expand/struct.scm 100 */
																					obj_t BgL_arg1822z00_351;

																					obj_t BgL_arg1823z00_352;

																					{	/* Expand/struct.scm 100 */
																						obj_t BgL_arg1827z00_356;

																						obj_t BgL_arg1828z00_357;

																						{	/* Expand/struct.scm 100 */
																							obj_t BgL_arg1829z00_358;

																							{	/* Expand/struct.scm 100 */
																								obj_t BgL_arg1830z00_359;

																								obj_t BgL_arg1831z00_360;

																								{	/* Expand/struct.scm 100 */
																									obj_t BgL_res2225z00_679;

																									{	/* Expand/struct.scm 100 */
																										obj_t BgL_symbolz00_677;

																										BgL_symbolz00_677 =
																											BgL_namez00_88;
																										{	/* Expand/struct.scm 100 */
																											obj_t BgL_arg2063z00_678;

																											BgL_arg2063z00_678 =
																												SYMBOL_TO_STRING
																												(BgL_symbolz00_677);
																											BgL_res2225z00_679 =
																												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																												(BgL_arg2063z00_678);
																									}}
																									BgL_arg1830z00_359 =
																										BgL_res2225z00_679;
																								}
																								{	/* Expand/struct.scm 100 */
																									obj_t BgL_res2226z00_682;

																									{	/* Expand/struct.scm 100 */
																										obj_t BgL_symbolz00_680;

																										BgL_symbolz00_680 =
																											CNST_TABLE_REF(((long)
																												21));
																										{	/* Expand/struct.scm 100 */
																											obj_t BgL_arg2063z00_681;

																											BgL_arg2063z00_681 =
																												SYMBOL_TO_STRING
																												(BgL_symbolz00_680);
																											BgL_res2226z00_682 =
																												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																												(BgL_arg2063z00_681);
																									}}
																									BgL_arg1831z00_360 =
																										BgL_res2226z00_682;
																								}
																								{	/* Expand/struct.scm 100 */
																									obj_t BgL_list1832z00_361;

																									{	/* Expand/struct.scm 100 */
																										obj_t BgL_arg1834z00_362;

																										BgL_arg1834z00_362 =
																											MAKE_PAIR
																											(BgL_arg1831z00_360,
																											BNIL);
																										BgL_list1832z00_361 =
																											MAKE_PAIR
																											(BgL_arg1830z00_359,
																											BgL_arg1834z00_362);
																									}
																									BgL_arg1829z00_358 =
																										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																										(BgL_list1832z00_361);
																							}}
																							BgL_arg1827z00_356 =
																								string_to_symbol
																								(BSTRING_TO_STRING
																								(BgL_arg1829z00_358));
																						}
																						{	/* Expand/struct.scm 100 */
																							obj_t BgL_list1835z00_363;

																							BgL_list1835z00_363 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg1828z00_357 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(CNST_TABLE_REF(((long) 22)),
																								BgL_list1835z00_363);
																						}
																						BgL_arg1822z00_351 =
																							MAKE_PAIR(BgL_arg1827z00_356,
																							BgL_arg1828z00_357);
																					}
																					{	/* Expand/struct.scm 101 */
																						obj_t BgL_arg1836z00_364;

																						obj_t BgL_arg1837z00_365;

																						BgL_arg1836z00_364 =
																							CNST_TABLE_REF(((long) 5));
																						{	/* Expand/struct.scm 101 */
																							obj_t BgL_arg1839z00_366;

																							obj_t BgL_arg1840z00_367;

																							{	/* Expand/struct.scm 101 */
																								obj_t BgL_arg1847z00_372;

																								obj_t BgL_arg1848z00_373;

																								BgL_arg1847z00_372 =
																									CNST_TABLE_REF(((long) 23));
																								{	/* Expand/struct.scm 101 */
																									obj_t BgL_list1849z00_374;

																									BgL_list1849z00_374 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg1848z00_373 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(CNST_TABLE_REF(((long)
																												22)),
																										BgL_list1849z00_374);
																								}
																								BgL_arg1839z00_366 =
																									MAKE_PAIR(BgL_arg1847z00_372,
																									BgL_arg1848z00_373);
																							}
																							{	/* Expand/struct.scm 102 */
																								obj_t BgL_arg1851z00_375;

																								obj_t BgL_arg1852z00_376;

																								BgL_arg1851z00_375 =
																									CNST_TABLE_REF(((long) 24));
																								{	/* Expand/struct.scm 102 */
																									obj_t BgL_arg1853z00_377;

																									obj_t BgL_arg1854z00_378;

																									{	/* Expand/struct.scm 102 */
																										obj_t BgL_arg1858z00_382;

																										obj_t BgL_arg1860z00_383;

																										{	/* Expand/struct.scm 102 */
																											obj_t BgL_arg1861z00_384;

																											obj_t BgL_arg1862z00_385;

																											BgL_arg1861z00_384 =
																												CNST_TABLE_REF(((long)
																													12));
																											{	/* Expand/struct.scm 102 */
																												obj_t
																													BgL_list1863z00_386;
																												{	/* Expand/struct.scm 102 */
																													obj_t
																														BgL_arg1864z00_387;
																													obj_t
																														BgL_arg1865z00_388;
																													BgL_arg1864z00_387 =
																														CNST_TABLE_REF((
																															(long) 13));
																													BgL_arg1865z00_388 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_list1863z00_386 =
																														MAKE_PAIR
																														(BgL_arg1864z00_387,
																														BgL_arg1865z00_388);
																												}
																												BgL_arg1862z00_385 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(CNST_TABLE_REF((
																															(long) 25)),
																													BgL_list1863z00_386);
																											}
																											BgL_arg1858z00_382 =
																												MAKE_PAIR
																												(BgL_arg1861z00_384,
																												BgL_arg1862z00_385);
																										}
																										{	/* Expand/struct.scm 102 */
																											obj_t BgL_list1866z00_389;

																											BgL_list1866z00_389 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg1860z00_383 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(CNST_TABLE_REF(((long)
																														22)),
																												BgL_list1866z00_389);
																										}
																										BgL_arg1853z00_377 =
																											MAKE_PAIR
																											(BgL_arg1858z00_382,
																											BgL_arg1860z00_383);
																									}
																									{	/* Expand/struct.scm 102 */
																										obj_t BgL_arg1867z00_390;

																										obj_t BgL_arg1868z00_391;

																										BgL_arg1867z00_390 =
																											CNST_TABLE_REF(((long)
																												11));
																										{	/* Expand/struct.scm 102 */
																											obj_t BgL_list1869z00_392;

																											BgL_list1869z00_392 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg1868z00_391 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_namez00_88,
																												BgL_list1869z00_392);
																										}
																										BgL_arg1854z00_378 =
																											MAKE_PAIR
																											(BgL_arg1867z00_390,
																											BgL_arg1868z00_391);
																									}
																									{	/* Expand/struct.scm 102 */
																										obj_t BgL_list1856z00_380;

																										{	/* Expand/struct.scm 102 */
																											obj_t BgL_arg1857z00_381;

																											BgL_arg1857z00_381 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_list1856z00_380 =
																												MAKE_PAIR
																												(BgL_arg1854z00_378,
																												BgL_arg1857z00_381);
																										}
																										BgL_arg1852z00_376 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg1853z00_377,
																											BgL_list1856z00_380);
																								}}
																								BgL_arg1840z00_367 =
																									MAKE_PAIR(BgL_arg1851z00_375,
																									BgL_arg1852z00_376);
																							}
																							{	/* Expand/struct.scm 101 */
																								obj_t BgL_list1842z00_369;

																								{	/* Expand/struct.scm 101 */
																									obj_t BgL_arg1845z00_370;

																									{	/* Expand/struct.scm 101 */
																										obj_t BgL_arg1846z00_371;

																										BgL_arg1846z00_371 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg1845z00_370 =
																											MAKE_PAIR(BFALSE,
																											BgL_arg1846z00_371);
																									}
																									BgL_list1842z00_369 =
																										MAKE_PAIR
																										(BgL_arg1840z00_367,
																										BgL_arg1845z00_370);
																								}
																								BgL_arg1837z00_365 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg1839z00_366,
																									BgL_list1842z00_369);
																						}}
																						BgL_arg1823z00_352 =
																							MAKE_PAIR(BgL_arg1836z00_364,
																							BgL_arg1837z00_365);
																					}
																					{	/* Expand/struct.scm 100 */
																						obj_t BgL_list1825z00_354;

																						{	/* Expand/struct.scm 100 */
																							obj_t BgL_arg1826z00_355;

																							BgL_arg1826z00_355 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list1825z00_354 =
																								MAKE_PAIR(BgL_arg1823z00_352,
																								BgL_arg1826z00_355);
																						}
																						BgL_arg1821z00_350 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg1822z00_351,
																							BgL_list1825z00_354);
																				}}
																				BgL_arg1819z00_348 =
																					MAKE_PAIR(BgL_arg1820z00_349,
																					BgL_arg1821z00_350);
																			}
																			BgL_arg1818z00_347 =
																				BGl_epairifyz00zztools_miscz00
																				(BgL_arg1819z00_348, BgL_xz00_1);
																		}
																		BgL_arg1816z00_345 =
																			PROCEDURE_ENTRY(BgL_ez00_2) (BgL_ez00_2,
																			BgL_arg1818z00_347, BgL_ez00_2, BEOA);
																	}
																	{	/* Expand/struct.scm 107 */
																		obj_t BgL_g1509z00_393;

																		BgL_g1509z00_393 =
																			CNST_TABLE_REF(((long) 26));
																		{
																			long BgL_iz00_395;

																			obj_t BgL_slotsz00_396;

																			obj_t BgL_resz00_397;

																			BgL_iz00_395 = ((long) 0);
																			BgL_slotsz00_396 = BgL_slotszd2namezd2_99;
																			BgL_resz00_397 = BgL_g1509z00_393;
																		BgL_zc3anonymousza31870ze3z83_398:
																			if ((BgL_iz00_395 == BgL_lenz00_98))
																				{	/* Expand/struct.scm 110 */
																					BgL_arg1817z00_346 = BgL_resz00_397;
																				}
																			else
																				{	/* Expand/struct.scm 112 */
																					obj_t BgL_prz00_400;

																					BgL_prz00_400 = CAR(BgL_slotsz00_396);
																					{	/* Expand/struct.scm 113 */
																						long BgL_arg1872z00_401;

																						obj_t BgL_arg1873z00_402;

																						obj_t BgL_arg1874z00_403;

																						BgL_arg1872z00_401 =
																							(BgL_iz00_395 + ((long) 1));
																						BgL_arg1873z00_402 =
																							CDR(BgL_slotsz00_396);
																						{	/* Expand/struct.scm 119 */
																							obj_t BgL_arg1875z00_404;

																							obj_t BgL_arg1876z00_405;

																							{	/* Expand/struct.scm 119 */
																								obj_t BgL_arg1877z00_406;

																								{	/* Expand/struct.scm 119 */
																									obj_t BgL_arg1878z00_407;

																									{	/* Expand/struct.scm 119 */
																										obj_t BgL_arg1879z00_408;

																										obj_t BgL_arg1880z00_409;

																										BgL_arg1879z00_408 =
																											CNST_TABLE_REF(((long)
																												2));
																										{	/* Expand/struct.scm 120 */
																											obj_t BgL_arg1881z00_410;

																											obj_t BgL_arg1882z00_411;

																											{	/* Expand/struct.scm 120 */
																												obj_t
																													BgL_arg1887z00_415;
																												obj_t
																													BgL_arg1888z00_416;
																												{	/* Expand/struct.scm 120 */
																													obj_t
																														BgL_list1889z00_417;
																													{	/* Expand/struct.scm 120 */
																														obj_t
																															BgL_arg1890z00_418;
																														{	/* Expand/struct.scm 120 */
																															obj_t
																																BgL_arg1892z00_419;
																															obj_t
																																BgL_arg1893z00_420;
																															BgL_arg1892z00_419
																																=
																																CNST_TABLE_REF((
																																	(long) 19));
																															BgL_arg1893z00_420
																																=
																																MAKE_PAIR
																																(BgL_prz00_400,
																																BNIL);
																															BgL_arg1890z00_418
																																=
																																MAKE_PAIR
																																(BgL_arg1892z00_419,
																																BgL_arg1893z00_420);
																														}
																														BgL_list1889z00_417
																															=
																															MAKE_PAIR
																															(BgL_namez00_88,
																															BgL_arg1890z00_418);
																													}
																													BgL_arg1887z00_415 =
																														BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																														(BgL_list1889z00_417);
																												}
																												{	/* Expand/struct.scm 120 */
																													obj_t
																														BgL_list1894z00_421;
																													BgL_list1894z00_421 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg1888z00_416 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(CNST_TABLE_REF((
																																(long) 27)),
																														BgL_list1894z00_421);
																												}
																												BgL_arg1881z00_410 =
																													MAKE_PAIR
																													(BgL_arg1887z00_415,
																													BgL_arg1888z00_416);
																											}
																											if (CBOOL
																												(BGl_za2unsafezd2structza2zd2zzengine_paramz00))
																												{	/* Expand/struct.scm 122 */
																													obj_t
																														BgL_arg1895z00_422;
																													obj_t
																														BgL_arg1896z00_423;
																													{	/* Expand/struct.scm 122 */
																														obj_t
																															BgL_arg1898z00_424;
																														obj_t
																															BgL_arg1899z00_425;
																														BgL_arg1898z00_424 =
																															CNST_TABLE_REF((
																																(long) 12));
																														{	/* Expand/struct.scm 122 */
																															obj_t
																																BgL_list1900z00_426;
																															{	/* Expand/struct.scm 122 */
																																obj_t
																																	BgL_arg1901z00_427;
																																obj_t
																																	BgL_arg1902z00_428;
																																BgL_arg1901z00_427
																																	=
																																	CNST_TABLE_REF
																																	(((long) 13));
																																BgL_arg1902z00_428
																																	=
																																	MAKE_PAIR
																																	(BNIL, BNIL);
																																BgL_list1900z00_426
																																	=
																																	MAKE_PAIR
																																	(BgL_arg1901z00_427,
																																	BgL_arg1902z00_428);
																															}
																															BgL_arg1899z00_425
																																=
																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																(CNST_TABLE_REF(
																																	((long) 28)),
																																BgL_list1900z00_426);
																														}
																														BgL_arg1895z00_422 =
																															MAKE_PAIR
																															(BgL_arg1898z00_424,
																															BgL_arg1899z00_425);
																													}
																													{	/* Expand/struct.scm 122 */
																														obj_t
																															BgL_list1903z00_429;
																														{	/* Expand/struct.scm 122 */
																															obj_t
																																BgL_arg1904z00_430;
																															BgL_arg1904z00_430
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_list1903z00_429
																																=
																																MAKE_PAIR(BINT
																																(BgL_iz00_395),
																																BgL_arg1904z00_430);
																														}
																														BgL_arg1896z00_423 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(CNST_TABLE_REF((
																																	(long) 27)),
																															BgL_list1903z00_429);
																													}
																													BgL_arg1882z00_411 =
																														MAKE_PAIR
																														(BgL_arg1895z00_422,
																														BgL_arg1896z00_423);
																												}
																											else
																												{	/* Expand/struct.scm 123 */
																													obj_t
																														BgL_arg1905z00_431;
																													obj_t
																														BgL_arg1906z00_432;
																													BgL_arg1905z00_431 =
																														CNST_TABLE_REF((
																															(long) 5));
																													{	/* Expand/struct.scm 123 */
																														obj_t
																															BgL_arg1907z00_433;
																														obj_t
																															BgL_arg1908z00_434;
																														obj_t
																															BgL_arg1909z00_435;
																														{	/* Expand/struct.scm 123 */
																															obj_t
																																BgL_arg1915z00_440;
																															obj_t
																																BgL_arg1916z00_441;
																															BgL_arg1915z00_440
																																=
																																CNST_TABLE_REF((
																																	(long) 24));
																															{	/* Expand/struct.scm 123 */
																																obj_t
																																	BgL_arg1918z00_442;
																																obj_t
																																	BgL_arg1919z00_443;
																																{	/* Expand/struct.scm 123 */
																																	obj_t
																																		BgL_arg1923z00_447;
																																	obj_t
																																		BgL_arg1924z00_448;
																																	{	/* Expand/struct.scm 123 */
																																		obj_t
																																			BgL_arg1925z00_449;
																																		obj_t
																																			BgL_arg1926z00_450;
																																		BgL_arg1925z00_449
																																			=
																																			CNST_TABLE_REF
																																			(((long)
																																				12));
																																		{	/* Expand/struct.scm 123 */
																																			obj_t
																																				BgL_list1927z00_451;
																																			{	/* Expand/struct.scm 123 */
																																				obj_t
																																					BgL_arg1929z00_452;
																																				obj_t
																																					BgL_arg1930z00_453;
																																				BgL_arg1929z00_452
																																					=
																																					CNST_TABLE_REF
																																					(((long) 13));
																																				BgL_arg1930z00_453
																																					=
																																					MAKE_PAIR
																																					(BNIL,
																																					BNIL);
																																				BgL_list1927z00_451
																																					=
																																					MAKE_PAIR
																																					(BgL_arg1929z00_452,
																																					BgL_arg1930z00_453);
																																			}
																																			BgL_arg1926z00_450
																																				=
																																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																				(CNST_TABLE_REF
																																				(((long)
																																						25)),
																																				BgL_list1927z00_451);
																																		}
																																		BgL_arg1923z00_447
																																			=
																																			MAKE_PAIR
																																			(BgL_arg1925z00_449,
																																			BgL_arg1926z00_450);
																																	}
																																	{	/* Expand/struct.scm 123 */
																																		obj_t
																																			BgL_list1931z00_454;
																																		BgL_list1931z00_454
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		BgL_arg1924z00_448
																																			=
																																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																			(CNST_TABLE_REF
																																			(((long)
																																					27)),
																																			BgL_list1931z00_454);
																																	}
																																	BgL_arg1918z00_442
																																		=
																																		MAKE_PAIR
																																		(BgL_arg1923z00_447,
																																		BgL_arg1924z00_448);
																																}
																																{	/* Expand/struct.scm 123 */
																																	obj_t
																																		BgL_arg1932z00_455;
																																	obj_t
																																		BgL_arg1935z00_456;
																																	BgL_arg1932z00_455
																																		=
																																		CNST_TABLE_REF
																																		(((long)
																																			11));
																																	{	/* Expand/struct.scm 123 */
																																		obj_t
																																			BgL_list1936z00_457;
																																		BgL_list1936z00_457
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		BgL_arg1935z00_456
																																			=
																																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																			(BgL_namez00_88,
																																			BgL_list1936z00_457);
																																	}
																																	BgL_arg1919z00_443
																																		=
																																		MAKE_PAIR
																																		(BgL_arg1932z00_455,
																																		BgL_arg1935z00_456);
																																}
																																{	/* Expand/struct.scm 123 */
																																	obj_t
																																		BgL_list1921z00_445;
																																	{	/* Expand/struct.scm 123 */
																																		obj_t
																																			BgL_arg1922z00_446;
																																		BgL_arg1922z00_446
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		BgL_list1921z00_445
																																			=
																																			MAKE_PAIR
																																			(BgL_arg1919z00_443,
																																			BgL_arg1922z00_446);
																																	}
																																	BgL_arg1916z00_441
																																		=
																																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_arg1918z00_442,
																																		BgL_list1921z00_445);
																															}}
																															BgL_arg1907z00_433
																																=
																																MAKE_PAIR
																																(BgL_arg1915z00_440,
																																BgL_arg1916z00_441);
																														}
																														{	/* Expand/struct.scm 124 */
																															obj_t
																																BgL_arg1937z00_458;
																															obj_t
																																BgL_arg1938z00_459;
																															BgL_arg1937z00_458
																																=
																																CNST_TABLE_REF((
																																	(long) 29));
																															{	/* Expand/struct.scm 124 */
																																obj_t
																																	BgL_list1939z00_460;
																																{	/* Expand/struct.scm 124 */
																																	obj_t
																																		BgL_arg1940z00_461;
																																	BgL_arg1940z00_461
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_list1939z00_460
																																		=
																																		MAKE_PAIR
																																		(BINT
																																		(BgL_iz00_395),
																																		BgL_arg1940z00_461);
																																}
																																BgL_arg1938z00_459
																																	=
																																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																	(CNST_TABLE_REF
																																	(((long) 27)),
																																	BgL_list1939z00_460);
																															}
																															BgL_arg1908z00_434
																																=
																																MAKE_PAIR
																																(BgL_arg1937z00_458,
																																BgL_arg1938z00_459);
																														}
																														{	/* Expand/struct.scm 125 */
																															obj_t
																																BgL_arg1941z00_462;
																															obj_t
																																BgL_arg1942z00_463;
																															BgL_arg1941z00_462
																																=
																																CNST_TABLE_REF((
																																	(long) 10));
																															{	/* Expand/struct.scm 125 */
																																obj_t
																																	BgL_arg1944z00_465;
																																obj_t
																																	BgL_arg1945z00_466;
																																{	/* Expand/struct.scm 127 */
																																	obj_t
																																		BgL_res2227z00_692;
																																	{	/* Expand/struct.scm 127 */
																																		obj_t
																																			BgL_symbolz00_690;
																																		BgL_symbolz00_690
																																			=
																																			BgL_namez00_88;
																																		{	/* Expand/struct.scm 127 */
																																			obj_t
																																				BgL_arg2063z00_691;
																																			BgL_arg2063z00_691
																																				=
																																				SYMBOL_TO_STRING
																																				(BgL_symbolz00_690);
																																			BgL_res2227z00_692
																																				=
																																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																				(BgL_arg2063z00_691);
																																	}}
																																	BgL_arg1944z00_465
																																		=
																																		BgL_res2227z00_692;
																																}
																																BgL_arg1945z00_466
																																	=
																																	CNST_TABLE_REF
																																	(((long) 27));
																																{	/* Expand/struct.scm 125 */
																																	obj_t
																																		BgL_list1947z00_468;
																																	{	/* Expand/struct.scm 125 */
																																		obj_t
																																			BgL_arg1948z00_469;
																																		{	/* Expand/struct.scm 125 */
																																			obj_t
																																				BgL_arg1949z00_470;
																																			BgL_arg1949z00_470
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_arg1948z00_469
																																				=
																																				MAKE_PAIR
																																				(BgL_arg1945z00_466,
																																				BgL_arg1949z00_470);
																																		}
																																		BgL_list1947z00_468
																																			=
																																			MAKE_PAIR
																																			(BgL_arg1944z00_465,
																																			BgL_arg1948z00_469);
																																	}
																																	BgL_arg1942z00_463
																																		=
																																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																		(BGl_string2231z00zzexpand_structz00,
																																		BgL_list1947z00_468);
																															}}
																															BgL_arg1909z00_435
																																=
																																MAKE_PAIR
																																(BgL_arg1941z00_462,
																																BgL_arg1942z00_463);
																														}
																														{	/* Expand/struct.scm 123 */
																															obj_t
																																BgL_list1911z00_437;
																															{	/* Expand/struct.scm 123 */
																																obj_t
																																	BgL_arg1912z00_438;
																																{	/* Expand/struct.scm 123 */
																																	obj_t
																																		BgL_arg1914z00_439;
																																	BgL_arg1914z00_439
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_arg1912z00_438
																																		=
																																		MAKE_PAIR
																																		(BgL_arg1909z00_435,
																																		BgL_arg1914z00_439);
																																}
																																BgL_list1911z00_437
																																	=
																																	MAKE_PAIR
																																	(BgL_arg1908z00_434,
																																	BgL_arg1912z00_438);
																															}
																															BgL_arg1906z00_432
																																=
																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																(BgL_arg1907z00_433,
																																BgL_list1911z00_437);
																													}}
																													BgL_arg1882z00_411 =
																														MAKE_PAIR
																														(BgL_arg1905z00_431,
																														BgL_arg1906z00_432);
																												}
																											{	/* Expand/struct.scm 119 */
																												obj_t
																													BgL_list1884z00_413;
																												{	/* Expand/struct.scm 119 */
																													obj_t
																														BgL_arg1886z00_414;
																													BgL_arg1886z00_414 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_list1884z00_413 =
																														MAKE_PAIR
																														(BgL_arg1882z00_411,
																														BgL_arg1886z00_414);
																												}
																												BgL_arg1880z00_409 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_arg1881z00_410,
																													BgL_list1884z00_413);
																										}}
																										BgL_arg1878z00_407 =
																											MAKE_PAIR
																											(BgL_arg1879z00_408,
																											BgL_arg1880z00_409);
																									}
																									BgL_arg1877z00_406 =
																										BGl_epairifyz00zztools_miscz00
																										(BgL_arg1878z00_407,
																										BgL_xz00_1);
																								}
																								BgL_arg1875z00_404 =
																									PROCEDURE_ENTRY(BgL_ez00_2)
																									(BgL_ez00_2,
																									BgL_arg1877z00_406,
																									BgL_ez00_2, BEOA);
																							}
																							{	/* Expand/struct.scm 135 */
																								obj_t BgL_arg1950z00_471;

																								{	/* Expand/struct.scm 135 */
																									obj_t BgL_arg1952z00_472;

																									{	/* Expand/struct.scm 135 */
																										obj_t BgL_arg1955z00_473;

																										{	/* Expand/struct.scm 135 */
																											obj_t BgL_arg1957z00_474;

																											obj_t BgL_arg1958z00_475;

																											BgL_arg1957z00_474 =
																												CNST_TABLE_REF(((long)
																													2));
																											{	/* Expand/struct.scm 136 */
																												obj_t
																													BgL_arg1962z00_476;
																												obj_t
																													BgL_arg1963z00_477;
																												{	/* Expand/struct.scm 136 */
																													obj_t
																														BgL_arg1970z00_481;
																													obj_t
																														BgL_arg1971z00_482;
																													{	/* Expand/struct.scm 136 */
																														obj_t
																															BgL_list1972z00_483;
																														{	/* Expand/struct.scm 136 */
																															obj_t
																																BgL_arg1976z00_484;
																															{	/* Expand/struct.scm 136 */
																																obj_t
																																	BgL_arg1977z00_485;
																																obj_t
																																	BgL_arg1984z00_486;
																																BgL_arg1977z00_485
																																	=
																																	CNST_TABLE_REF
																																	(((long) 19));
																																{	/* Expand/struct.scm 136 */
																																	obj_t
																																		BgL_arg1987z00_487;
																																	BgL_arg1987z00_487
																																		=
																																		MAKE_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				20)),
																																		BNIL);
																																	BgL_arg1984z00_486
																																		=
																																		MAKE_PAIR
																																		(BgL_prz00_400,
																																		BgL_arg1987z00_487);
																																}
																																BgL_arg1976z00_484
																																	=
																																	MAKE_PAIR
																																	(BgL_arg1977z00_485,
																																	BgL_arg1984z00_486);
																															}
																															BgL_list1972z00_483
																																=
																																MAKE_PAIR
																																(BgL_namez00_88,
																																BgL_arg1976z00_484);
																														}
																														BgL_arg1970z00_481 =
																															BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																															(BgL_list1972z00_483);
																													}
																													{	/* Expand/struct.scm 136 */
																														obj_t
																															BgL_list1988z00_488;
																														{	/* Expand/struct.scm 136 */
																															obj_t
																																BgL_arg1989z00_489;
																															obj_t
																																BgL_arg1990z00_490;
																															BgL_arg1989z00_489
																																=
																																CNST_TABLE_REF((
																																	(long) 30));
																															BgL_arg1990z00_490
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_list1988z00_488
																																=
																																MAKE_PAIR
																																(BgL_arg1989z00_489,
																																BgL_arg1990z00_490);
																														}
																														BgL_arg1971z00_482 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(CNST_TABLE_REF((
																																	(long) 27)),
																															BgL_list1988z00_488);
																													}
																													BgL_arg1962z00_476 =
																														MAKE_PAIR
																														(BgL_arg1970z00_481,
																														BgL_arg1971z00_482);
																												}
																												if (CBOOL
																													(BGl_za2unsafezd2structza2zd2zzengine_paramz00))
																													{	/* Expand/struct.scm 138 */
																														obj_t
																															BgL_arg1991z00_491;
																														obj_t
																															BgL_arg1992z00_492;
																														{	/* Expand/struct.scm 138 */
																															obj_t
																																BgL_arg1993z00_493;
																															obj_t
																																BgL_arg1994z00_494;
																															BgL_arg1993z00_493
																																=
																																CNST_TABLE_REF((
																																	(long) 12));
																															{	/* Expand/struct.scm 138 */
																																obj_t
																																	BgL_list1995z00_495;
																																{	/* Expand/struct.scm 138 */
																																	obj_t
																																		BgL_arg1996z00_496;
																																	obj_t
																																		BgL_arg1998z00_497;
																																	BgL_arg1996z00_496
																																		=
																																		CNST_TABLE_REF
																																		(((long)
																																			13));
																																	BgL_arg1998z00_497
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_list1995z00_495
																																		=
																																		MAKE_PAIR
																																		(BgL_arg1996z00_496,
																																		BgL_arg1998z00_497);
																																}
																																BgL_arg1994z00_494
																																	=
																																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																	(CNST_TABLE_REF
																																	(((long) 31)),
																																	BgL_list1995z00_495);
																															}
																															BgL_arg1991z00_491
																																=
																																MAKE_PAIR
																																(BgL_arg1993z00_493,
																																BgL_arg1994z00_494);
																														}
																														{	/* Expand/struct.scm 138 */
																															obj_t
																																BgL_list1999z00_498;
																															{	/* Expand/struct.scm 138 */
																																obj_t
																																	BgL_arg2000z00_499;
																																{	/* Expand/struct.scm 138 */
																																	obj_t
																																		BgL_arg2001z00_500;
																																	obj_t
																																		BgL_arg2002z00_501;
																																	BgL_arg2001z00_500
																																		=
																																		CNST_TABLE_REF
																																		(((long)
																																			30));
																																	BgL_arg2002z00_501
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_arg2000z00_499
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2001z00_500,
																																		BgL_arg2002z00_501);
																																}
																																BgL_list1999z00_498
																																	=
																																	MAKE_PAIR(BINT
																																	(BgL_iz00_395),
																																	BgL_arg2000z00_499);
																															}
																															BgL_arg1992z00_492
																																=
																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																(CNST_TABLE_REF(
																																	((long) 27)),
																																BgL_list1999z00_498);
																														}
																														BgL_arg1963z00_477 =
																															MAKE_PAIR
																															(BgL_arg1991z00_491,
																															BgL_arg1992z00_492);
																													}
																												else
																													{	/* Expand/struct.scm 139 */
																														obj_t
																															BgL_arg2003z00_502;
																														obj_t
																															BgL_arg2004z00_503;
																														BgL_arg2003z00_502 =
																															CNST_TABLE_REF((
																																(long) 5));
																														{	/* Expand/struct.scm 139 */
																															obj_t
																																BgL_arg2005z00_504;
																															obj_t
																																BgL_arg2012z00_505;
																															obj_t
																																BgL_arg2021z00_506;
																															{	/* Expand/struct.scm 139 */
																																obj_t
																																	BgL_arg2029z00_511;
																																obj_t
																																	BgL_arg2031z00_512;
																																BgL_arg2029z00_511
																																	=
																																	CNST_TABLE_REF
																																	(((long) 24));
																																{	/* Expand/struct.scm 139 */
																																	obj_t
																																		BgL_arg2033z00_513;
																																	obj_t
																																		BgL_arg2034z00_514;
																																	{	/* Expand/struct.scm 139 */
																																		obj_t
																																			BgL_arg2048z00_518;
																																		obj_t
																																			BgL_arg2051z00_519;
																																		{	/* Expand/struct.scm 139 */
																																			obj_t
																																				BgL_arg2052z00_520;
																																			obj_t
																																				BgL_arg2053z00_521;
																																			BgL_arg2052z00_520
																																				=
																																				CNST_TABLE_REF
																																				(((long)
																																					12));
																																			{	/* Expand/struct.scm 139 */
																																				obj_t
																																					BgL_list2054z00_522;
																																				{	/* Expand/struct.scm 139 */
																																					obj_t
																																						BgL_arg2055z00_523;
																																					obj_t
																																						BgL_arg2056z00_524;
																																					BgL_arg2055z00_523
																																						=
																																						CNST_TABLE_REF
																																						(((long) 13));
																																					BgL_arg2056z00_524
																																						=
																																						MAKE_PAIR
																																						(BNIL,
																																						BNIL);
																																					BgL_list2054z00_522
																																						=
																																						MAKE_PAIR
																																						(BgL_arg2055z00_523,
																																						BgL_arg2056z00_524);
																																				}
																																				BgL_arg2053z00_521
																																					=
																																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																					(CNST_TABLE_REF
																																					(((long) 25)), BgL_list2054z00_522);
																																			}
																																			BgL_arg2048z00_518
																																				=
																																				MAKE_PAIR
																																				(BgL_arg2052z00_520,
																																				BgL_arg2053z00_521);
																																		}
																																		{	/* Expand/struct.scm 139 */
																																			obj_t
																																				BgL_list2057z00_525;
																																			BgL_list2057z00_525
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_arg2051z00_519
																																				=
																																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																				(CNST_TABLE_REF
																																				(((long)
																																						27)),
																																				BgL_list2057z00_525);
																																		}
																																		BgL_arg2033z00_513
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2048z00_518,
																																			BgL_arg2051z00_519);
																																	}
																																	{	/* Expand/struct.scm 139 */
																																		obj_t
																																			BgL_arg2058z00_526;
																																		obj_t
																																			BgL_arg2059z00_527;
																																		BgL_arg2058z00_526
																																			=
																																			CNST_TABLE_REF
																																			(((long)
																																				11));
																																		{	/* Expand/struct.scm 139 */
																																			obj_t
																																				BgL_list2060z00_528;
																																			BgL_list2060z00_528
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_arg2059z00_527
																																				=
																																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																				(BgL_namez00_88,
																																				BgL_list2060z00_528);
																																		}
																																		BgL_arg2034z00_514
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2058z00_526,
																																			BgL_arg2059z00_527);
																																	}
																																	{	/* Expand/struct.scm 139 */
																																		obj_t
																																			BgL_list2038z00_516;
																																		{	/* Expand/struct.scm 139 */
																																			obj_t
																																				BgL_arg2045z00_517;
																																			BgL_arg2045z00_517
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_list2038z00_516
																																				=
																																				MAKE_PAIR
																																				(BgL_arg2034z00_514,
																																				BgL_arg2045z00_517);
																																		}
																																		BgL_arg2031z00_512
																																			=
																																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																			(BgL_arg2033z00_513,
																																			BgL_list2038z00_516);
																																}}
																																BgL_arg2005z00_504
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2029z00_511,
																																	BgL_arg2031z00_512);
																															}
																															{	/* Expand/struct.scm 140 */
																																obj_t
																																	BgL_arg2061z00_529;
																																obj_t
																																	BgL_arg2062z00_530;
																																BgL_arg2061z00_529
																																	=
																																	CNST_TABLE_REF
																																	(((long) 32));
																																{	/* Expand/struct.scm 140 */
																																	obj_t
																																		BgL_list2063z00_531;
																																	{	/* Expand/struct.scm 140 */
																																		obj_t
																																			BgL_arg2070z00_532;
																																		{	/* Expand/struct.scm 140 */
																																			obj_t
																																				BgL_arg2118z00_533;
																																			obj_t
																																				BgL_arg2119z00_534;
																																			BgL_arg2118z00_533
																																				=
																																				CNST_TABLE_REF
																																				(((long)
																																					30));
																																			BgL_arg2119z00_534
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_arg2070z00_532
																																				=
																																				MAKE_PAIR
																																				(BgL_arg2118z00_533,
																																				BgL_arg2119z00_534);
																																		}
																																		BgL_list2063z00_531
																																			=
																																			MAKE_PAIR
																																			(BINT
																																			(BgL_iz00_395),
																																			BgL_arg2070z00_532);
																																	}
																																	BgL_arg2062z00_530
																																		=
																																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																		(CNST_TABLE_REF
																																		(((long)
																																				27)),
																																		BgL_list2063z00_531);
																																}
																																BgL_arg2012z00_505
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2061z00_529,
																																	BgL_arg2062z00_530);
																															}
																															{	/* Expand/struct.scm 141 */
																																obj_t
																																	BgL_arg2125z00_535;
																																obj_t
																																	BgL_arg2126z00_536;
																																BgL_arg2125z00_535
																																	=
																																	CNST_TABLE_REF
																																	(((long) 10));
																																{	/* Expand/struct.scm 141 */
																																	obj_t
																																		BgL_arg2139z00_538;
																																	obj_t
																																		BgL_arg2141z00_539;
																																	{	/* Expand/struct.scm 143 */
																																		obj_t
																																			BgL_res2228z00_695;
																																		{	/* Expand/struct.scm 143 */
																																			obj_t
																																				BgL_symbolz00_693;
																																			BgL_symbolz00_693
																																				=
																																				BgL_namez00_88;
																																			{	/* Expand/struct.scm 143 */
																																				obj_t
																																					BgL_arg2063z00_694;
																																				BgL_arg2063z00_694
																																					=
																																					SYMBOL_TO_STRING
																																					(BgL_symbolz00_693);
																																				BgL_res2228z00_695
																																					=
																																					BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																					(BgL_arg2063z00_694);
																																		}}
																																		BgL_arg2139z00_538
																																			=
																																			BgL_res2228z00_695;
																																	}
																																	BgL_arg2141z00_539
																																		=
																																		CNST_TABLE_REF
																																		(((long)
																																			27));
																																	{	/* Expand/struct.scm 141 */
																																		obj_t
																																			BgL_list2146z00_541;
																																		{	/* Expand/struct.scm 141 */
																																			obj_t
																																				BgL_arg2151z00_542;
																																			{	/* Expand/struct.scm 141 */
																																				obj_t
																																					BgL_arg2155z00_543;
																																				BgL_arg2155z00_543
																																					=
																																					MAKE_PAIR
																																					(BNIL,
																																					BNIL);
																																				BgL_arg2151z00_542
																																					=
																																					MAKE_PAIR
																																					(BgL_arg2141z00_539,
																																					BgL_arg2155z00_543);
																																			}
																																			BgL_list2146z00_541
																																				=
																																				MAKE_PAIR
																																				(BgL_arg2139z00_538,
																																				BgL_arg2151z00_542);
																																		}
																																		BgL_arg2126z00_536
																																			=
																																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																			(BGl_string2232z00zzexpand_structz00,
																																			BgL_list2146z00_541);
																																}}
																																BgL_arg2021z00_506
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2125z00_535,
																																	BgL_arg2126z00_536);
																															}
																															{	/* Expand/struct.scm 139 */
																																obj_t
																																	BgL_list2023z00_508;
																																{	/* Expand/struct.scm 139 */
																																	obj_t
																																		BgL_arg2027z00_509;
																																	{	/* Expand/struct.scm 139 */
																																		obj_t
																																			BgL_arg2028z00_510;
																																		BgL_arg2028z00_510
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		BgL_arg2027z00_509
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2021z00_506,
																																			BgL_arg2028z00_510);
																																	}
																																	BgL_list2023z00_508
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2012z00_505,
																																		BgL_arg2027z00_509);
																																}
																																BgL_arg2004z00_503
																																	=
																																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																	(BgL_arg2005z00_504,
																																	BgL_list2023z00_508);
																														}}
																														BgL_arg1963z00_477 =
																															MAKE_PAIR
																															(BgL_arg2003z00_502,
																															BgL_arg2004z00_503);
																													}
																												{	/* Expand/struct.scm 135 */
																													obj_t
																														BgL_list1968z00_479;
																													{	/* Expand/struct.scm 135 */
																														obj_t
																															BgL_arg1969z00_480;
																														BgL_arg1969z00_480 =
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_list1968z00_479
																															=
																															MAKE_PAIR
																															(BgL_arg1963z00_477,
																															BgL_arg1969z00_480);
																													}
																													BgL_arg1958z00_475 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg1962z00_476,
																														BgL_list1968z00_479);
																											}}
																											BgL_arg1955z00_473 =
																												MAKE_PAIR
																												(BgL_arg1957z00_474,
																												BgL_arg1958z00_475);
																										}
																										BgL_arg1952z00_472 =
																											BGl_epairifyz00zztools_miscz00
																											(BgL_arg1955z00_473,
																											BgL_xz00_1);
																									}
																									BgL_arg1950z00_471 =
																										PROCEDURE_ENTRY(BgL_ez00_2)
																										(BgL_ez00_2,
																										BgL_arg1952z00_472,
																										BgL_ez00_2, BEOA);
																								}
																								BgL_arg1876z00_405 =
																									MAKE_PAIR(BgL_arg1950z00_471,
																									BgL_resz00_397);
																							}
																							BgL_arg1874z00_403 =
																								MAKE_PAIR(BgL_arg1875z00_404,
																								BgL_arg1876z00_405);
																						}
																						{
																							obj_t BgL_resz00_1252;

																							obj_t BgL_slotsz00_1251;

																							long BgL_iz00_1250;

																							BgL_iz00_1250 =
																								BgL_arg1872z00_401;
																							BgL_slotsz00_1251 =
																								BgL_arg1873z00_402;
																							BgL_resz00_1252 =
																								BgL_arg1874z00_403;
																							BgL_resz00_397 = BgL_resz00_1252;
																							BgL_slotsz00_396 =
																								BgL_slotsz00_1251;
																							BgL_iz00_395 = BgL_iz00_1250;
																							goto
																								BgL_zc3anonymousza31870ze3z83_398;
																						}
																					}
																				}
																		}
																	}
																	BgL_arg1750z00_287 =
																		MAKE_PAIR(BgL_arg1816z00_345,
																		BgL_arg1817z00_346);
																}
																BgL_arg1527z00_105 =
																	MAKE_PAIR(BgL_arg1749z00_286,
																	BgL_arg1750z00_287);
															}
															BgL_arg1525z00_103 =
																MAKE_PAIR(BgL_arg1526z00_104,
																BgL_arg1527z00_105);
														}
														return
															MAKE_PAIR(BgL_arg1524z00_102, BgL_arg1525z00_103);
													}
												}
											}
										}
									}
								}
							}
						else
							{	/* Expand/struct.scm 24 */
							BgL_tagzd21390zd2_91:
								return
									BGl_errorz00zz__errorz00(BFALSE,
									BGl_string2229z00zzexpand_structz00, BgL_xz00_1);
							}
					}
				else
					{	/* Expand/struct.scm 24 */
						goto BgL_tagzd21390zd2_91;
					}
			}
		}
	}



/* _expand-struct */
	obj_t BGl__expandzd2structzd2zzexpand_structz00(obj_t BgL_envz00_696,
		obj_t BgL_xz00_697, obj_t BgL_ez00_698)
	{
		AN_OBJECT;
		{	/* Expand/struct.scm 23 */
			return
				BGl_expandzd2structzd2zzexpand_structz00(BgL_xz00_697, BgL_ez00_698);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzexpand_structz00()
	{
		AN_OBJECT;
		{	/* Expand/struct.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzexpand_structz00()
	{
		AN_OBJECT;
		{	/* Expand/struct.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzexpand_structz00()
	{
		AN_OBJECT;
		{	/* Expand/struct.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string2233z00zzexpand_structz00));
			return
				BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string2233z00zzexpand_structz00));
		}
	}

#ifdef __cplusplus
}
#endif
