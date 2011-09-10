/*===========================================================================*/
/*   (Eval/expand.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Eval/expand.scm -indent -o objs/obj_u/Eval/expand.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_parsezd2formalzd2identz00zz__evutilsz00(obj_t, obj_t);
	static obj_t BGl__z52lexicalzd2stackz80zz__expandz00(obj_t);
	static obj_t BGl__expandz12z12zz__expandz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__expandz00 = BUNSPEC;
	static obj_t BGl__expandz00zz__expandz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__expandz00();
	static obj_t BGl__expandzd2oncezd2zz__expandz00(obj_t, obj_t);
	static obj_t BGl_initialzd2expanderz12zc0zz__expandz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_z52lexicalzd2stackz80zz__expandz00();
	extern obj_t BGl_getzd2evalzd2expanderz00zz__macroz00(obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31902ze3z83zz__expandz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_initialzd2expanderzd2zz__expandz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__expandz00();
	static obj_t BGl__initialzd2expanderz12zc0zz__expandz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__applicationzd2evalzd2expanderz00zz__expandz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__z52withzd2lexicalz80zz__expandz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31921ze3z83zz__expandz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__expandz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__macroz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evutilsz00(long, char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
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
	BGL_EXPORTED_DECL obj_t BGl_expandz00zz__expandz00(obj_t);
	extern obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_z52withzd2lexicalz80zz__expandz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandz12z12zz__expandz00(obj_t);
	static obj_t BGl_loopz00zz__expandz00(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_getzd2sourcezd2locationz00zz__readerz00(obj_t);
	static obj_t BGl__initialzd2expanderzd2zz__expandz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2oncezd2zz__expandz00(obj_t);
	extern obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_zc3exitza31956ze3z83zz__expandz00(obj_t, obj_t);
	static obj_t BGl_applicationzd2evalzd2expanderz12z12zz__expandz00(obj_t,
		obj_t);
	static obj_t BGl__identifierzd2evalzd2expanderz00zz__expandz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_initialzd2expanderzf2applicationz20zz__expandz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__applicationzd2evalzd2expanderz12z12zz__expandz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__expandz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_identifierzd2evalzd2expanderzd2envzd2zz__expandz00,
		BgL_bgl__identifierza7d2ev2231za7,
		BGl__identifierzd2evalzd2expanderz00zz__expandz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandz12zd2envzc0zz__expandz00,
		BgL_bgl__expandza712za712za7za7_2232z00, BGl__expandz12z12zz__expandz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52withzd2lexicalzd2envz52zz__expandz00,
		BgL_bgl__za752withza7d2lexic2233z00, BGl__z52withzd2lexicalz80zz__expandz00,
		0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2oncezd2envz00zz__expandz00,
		BgL_bgl__expandza7d2onceza7d2234z00, BGl__expandzd2oncezd2zz__expandz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_initialzd2expanderz12zd2envz12zz__expandz00,
		BgL_bgl__initialza7d2expan2235za7,
		BGl__initialzd2expanderz12zc0zz__expandz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_applicationzd2evalzd2expanderz12zd2envzc0zz__expandz00,
		BgL_bgl__applicationza7d2e2236za7,
		BGl__applicationzd2evalzd2expanderz12z12zz__expandz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_applicationzd2evalzd2expanderzd2envzd2zz__expandz00,
		BgL_bgl__applicationza7d2e2237za7,
		BGl__applicationzd2evalzd2expanderz00zz__expandz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2220z00zz__expandz00,
		BgL_bgl_za7c3anonymousza7a312238z00,
		BGl_zc3anonymousza31902ze3z83zz__expandz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2223z00zz__expandz00,
		BgL_bgl_za7c3anonymousza7a312239z00,
		BGl_zc3anonymousza31921ze3z83zz__expandz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2envzd2zz__expandz00,
		BgL_bgl__expandza700za7za7__ex2240za7, BGl__expandz00zz__expandz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2221z00zz__expandz00,
		BgL_bgl_string2221za700za7za7_2241za7, "expand", 6);
	      DEFINE_STRING(BGl_string2222z00zz__expandz00,
		BgL_bgl_string2222za700za7za7_2242za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string2224z00zz__expandz00,
		BgL_bgl_string2224za700za7za7_2243za7, "application", 11);
	      DEFINE_STRING(BGl_string2225z00zz__expandz00,
		BgL_bgl_string2225za700za7za7_2244za7,
		"/tmp/bigloo/runtime/Eval/expand.scm", 35);
	      DEFINE_STRING(BGl_string2226z00zz__expandz00,
		BgL_bgl_string2226za700za7za7_2245za7, "_%with-lexical", 14);
	      DEFINE_STRING(BGl_string2227z00zz__expandz00,
		BgL_bgl_string2227za700za7za7_2246za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string2228z00zz__expandz00,
		BgL_bgl_string2228za700za7za7_2247za7, "procedure", 9);
	      DEFINE_STRING(BGl_string2229z00zz__expandz00,
		BgL_bgl_string2229za700za7za7_2248za7, "__expand", 8);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_initialzd2expanderzd2envz00zz__expandz00,
		BgL_bgl__initialza7d2expan2249za7, BGl__initialzd2expanderzd2zz__expandz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52lexicalzd2stackzd2envz52zz__expandz00,
		BgL_bgl__za752lexicalza7d2st2250z00,
		BGl__z52lexicalzd2stackz80zz__expandz00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__expandz00(long
		BgL_checksumz00_1653, char *BgL_fromz00_1654)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__expandz00))
				{
					BGl_requirezd2initializa7ationz75zz__expandz00 = BBOOL(((bool_t) 0));
					BGl_importedzd2moduleszd2initz00zz__expandz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* expand */
	BGL_EXPORTED_DEF obj_t BGl_expandz00zz__expandz00(obj_t BgL_xz00_1)
	{
		AN_OBJECT;
		{	/* Eval/expand.scm 69 */
			return
				BGl_initialzd2expanderzf2applicationz20zz__expandz00(BgL_xz00_1,
				BGl_initialzd2expanderzd2envz00zz__expandz00,
				BGl_applicationzd2evalzd2expanderzd2envzd2zz__expandz00);
		}
	}



/* _expand */
	obj_t BGl__expandz00zz__expandz00(obj_t BgL_envz00_1598, obj_t BgL_xz00_1599)
	{
		AN_OBJECT;
		{	/* Eval/expand.scm 69 */
			return BGl_expandz00zz__expandz00(BgL_xz00_1599);
		}
	}



/* expand! */
	BGL_EXPORTED_DEF obj_t BGl_expandz12z12zz__expandz00(obj_t BgL_xz00_2)
	{
		AN_OBJECT;
		{	/* Eval/expand.scm 75 */
			return
				BGl_initialzd2expanderzf2applicationz20zz__expandz00(BgL_xz00_2,
				BGl_initialzd2expanderz12zd2envz12zz__expandz00,
				BGl_applicationzd2evalzd2expanderz12zd2envzc0zz__expandz00);
		}
	}



/* _expand! */
	obj_t BGl__expandz12z12zz__expandz00(obj_t BgL_envz00_1606,
		obj_t BgL_xz00_1607)
	{
		AN_OBJECT;
		{	/* Eval/expand.scm 75 */
			return BGl_expandz12z12zz__expandz00(BgL_xz00_1607);
		}
	}



/* expand-once */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2oncezd2zz__expandz00(obj_t BgL_xz00_3)
	{
		AN_OBJECT;
		{	/* Eval/expand.scm 81 */
			return
				BGl_initialzd2expanderzf2applicationz20zz__expandz00(BgL_xz00_3,
				BGl_proc2220z00zz__expandz00,
				BGl_applicationzd2evalzd2expanderzd2envzd2zz__expandz00);
		}
	}



/* _expand-once */
	obj_t BGl__expandzd2oncezd2zz__expandz00(obj_t BgL_envz00_1615,
		obj_t BgL_xz00_1616)
	{
		AN_OBJECT;
		{	/* Eval/expand.scm 81 */
			return BGl_expandzd2oncezd2zz__expandz00(BgL_xz00_1616);
		}
	}



/* <anonymous:1902> */
	obj_t BGl_zc3anonymousza31902ze3z83zz__expandz00(obj_t BgL_envz00_1617,
		obj_t BgL_xz00_1618, obj_t BgL_ez00_1619)
	{
		AN_OBJECT;
		{	/* Eval/expand.scm 82 */
			return BgL_xz00_1618;
		}
	}



/* initial-expander */
	obj_t BGl_initialzd2expanderzd2zz__expandz00(obj_t BgL_xz00_4,
		obj_t BgL_ez00_5)
	{
		AN_OBJECT;
		{	/* Eval/expand.scm 87 */
			return
				BGl_initialzd2expanderzf2applicationz20zz__expandz00(BgL_xz00_4,
				BgL_ez00_5, BGl_applicationzd2evalzd2expanderzd2envzd2zz__expandz00);
		}
	}



/* _initial-expander */
	obj_t BGl__initialzd2expanderzd2zz__expandz00(obj_t BgL_envz00_1600,
		obj_t BgL_xz00_1601, obj_t BgL_ez00_1602)
	{
		AN_OBJECT;
		{	/* Eval/expand.scm 87 */
			return
				BGl_initialzd2expanderzd2zz__expandz00(BgL_xz00_1601, BgL_ez00_1602);
		}
	}



/* initial-expander! */
	obj_t BGl_initialzd2expanderz12zc0zz__expandz00(obj_t BgL_xz00_6,
		obj_t BgL_ez00_7)
	{
		AN_OBJECT;
		{	/* Eval/expand.scm 93 */
			return
				BGl_initialzd2expanderzf2applicationz20zz__expandz00(BgL_xz00_6,
				BgL_ez00_7, BGl_applicationzd2evalzd2expanderz12zd2envzc0zz__expandz00);
		}
	}



/* _initial-expander! */
	obj_t BGl__initialzd2expanderz12zc0zz__expandz00(obj_t BgL_envz00_1608,
		obj_t BgL_xz00_1609, obj_t BgL_ez00_1610)
	{
		AN_OBJECT;
		{	/* Eval/expand.scm 93 */
			return
				BGl_initialzd2expanderz12zc0zz__expandz00(BgL_xz00_1609, BgL_ez00_1610);
		}
	}



/* initial-expander/application */
	obj_t BGl_initialzd2expanderzf2applicationz20zz__expandz00(obj_t BgL_xz00_8,
		obj_t BgL_ez00_9, obj_t BgL_aez00_10)
	{
		AN_OBJECT;
		{	/* Eval/expand.scm 99 */
			{	/* Eval/expand.scm 100 */
				obj_t BgL_e1z00_795;

				if (SYMBOLP(BgL_xz00_8))
					{	/* Eval/expand.scm 101 */
						BgL_e1z00_795 =
							BGl_identifierzd2evalzd2expanderzd2envzd2zz__expandz00;
					}
				else
					{	/* Eval/expand.scm 101 */
						if (NULLP(BgL_xz00_8))
							{	/* Eval/expand.scm 103 */
								BgL_e1z00_795 =
									BGl_errorz00zz__errorz00(BGl_string2221z00zz__expandz00,
									BGl_string2222z00zz__expandz00, BNIL);
							}
						else
							{	/* Eval/expand.scm 103 */
								if (PAIRP(BgL_xz00_8))
									{	/* Eval/expand.scm 107 */
										bool_t BgL_testz00_1676;

										{	/* Eval/expand.scm 107 */
											obj_t BgL_auxz00_1677;

											BgL_auxz00_1677 = CAR(BgL_xz00_8);
											BgL_testz00_1676 = SYMBOLP(BgL_auxz00_1677);
										}
										if (BgL_testz00_1676)
											{	/* Eval/expand.scm 109 */
												obj_t BgL_g1824z00_807;

												BgL_g1824z00_807 =
													BGl_getzd2evalzd2expanderz00zz__macroz00(CAR
													(BgL_xz00_8));
												if (CBOOL(BgL_g1824z00_807))
													{	/* Eval/expand.scm 109 */
														BgL_e1z00_795 = BgL_g1824z00_807;
													}
												else
													{	/* Eval/expand.scm 113 */
														obj_t BgL_locz00_810;

														BgL_locz00_810 =
															BGl_getzd2sourcezd2locationz00zz__readerz00
															(BgL_xz00_8);
														{	/* Eval/expand.scm 113 */
															obj_t BgL_idz00_811;

															BgL_idz00_811 =
																CAR(BGl_parsezd2formalzd2identz00zz__evutilsz00
																(CAR(BgL_xz00_8), BgL_locz00_810));
															{	/* Eval/expand.scm 114 */

																{	/* Eval/expand.scm 116 */
																	bool_t BgL_testz00_1688;

																	{	/* Eval/expand.scm 116 */
																		obj_t BgL_arg1914z00_816;

																		{	/* Eval/expand.scm 116 */
																			obj_t BgL_arg1915z00_817;

																			BgL_arg1915z00_817 = BGL_LEXICAL_STACK();
																			BgL_arg1914z00_816 =
																				BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																				(BgL_idz00_811, BgL_arg1915z00_817);
																		}
																		BgL_testz00_1688 =
																			PAIRP(BgL_arg1914z00_816);
																	}
																	if (BgL_testz00_1688)
																		{	/* Eval/expand.scm 116 */
																			BgL_e1z00_795 = BgL_aez00_10;
																		}
																	else
																		{	/* Eval/expand.scm 118 */
																			obj_t BgL_g1826z00_813;

																			BgL_g1826z00_813 =
																				BGl_getzd2evalzd2expanderz00zz__macroz00
																				(BgL_idz00_811);
																			if (CBOOL(BgL_g1826z00_813))
																				{	/* Eval/expand.scm 118 */
																					BgL_e1z00_795 = BgL_g1826z00_813;
																				}
																			else
																				{	/* Eval/expand.scm 118 */
																					BgL_e1z00_795 = BgL_aez00_10;
																				}
																		}
																}
															}
														}
													}
											}
										else
											{	/* Eval/expand.scm 107 */
												BgL_e1z00_795 = BgL_aez00_10;
											}
									}
								else
									{	/* Eval/expand.scm 105 */
										BgL_e1z00_795 = BGl_proc2223z00zz__expandz00;
									}
							}
					}
				{	/* Eval/expand.scm 125 */
					obj_t BgL_newz00_796;

					BgL_newz00_796 =
						PROCEDURE_ENTRY(BgL_e1z00_795) (BgL_e1z00_795, BgL_xz00_8,
						BgL_ez00_9, BEOA);
					{	/* Eval/expand.scm 126 */
						bool_t BgL_testz00_1697;

						if (PAIRP(BgL_newz00_796))
							{	/* Eval/expand.scm 126 */
								if (EXTENDED_PAIRP(BgL_newz00_796))
									{	/* Eval/expand.scm 126 */
										BgL_testz00_1697 = ((bool_t) 0);
									}
								else
									{	/* Eval/expand.scm 126 */
										BgL_testz00_1697 = EXTENDED_PAIRP(BgL_xz00_8);
									}
							}
						else
							{	/* Eval/expand.scm 126 */
								BgL_testz00_1697 = ((bool_t) 0);
							}
						if (BgL_testz00_1697)
							{	/* Eval/expand.scm 127 */
								obj_t BgL_arg1904z00_798;

								obj_t BgL_arg1905z00_799;

								obj_t BgL_arg1906z00_800;

								BgL_arg1904z00_798 = CAR(BgL_newz00_796);
								BgL_arg1905z00_799 = CDR(BgL_newz00_796);
								BgL_arg1906z00_800 = CER(BgL_xz00_8);
								{	/* Eval/expand.scm 127 */
									obj_t BgL_res2205z00_1343;

									BgL_res2205z00_1343 =
										MAKE_EXTENDED_PAIR(BgL_arg1904z00_798, BgL_arg1905z00_799,
										BgL_arg1906z00_800);
									return BgL_res2205z00_1343;
								}
							}
						else
							{	/* Eval/expand.scm 126 */
								return BgL_newz00_796;
							}
					}
				}
			}
		}
	}



/* <anonymous:1921> */
	obj_t BGl_zc3anonymousza31921ze3z83zz__expandz00(obj_t BgL_envz00_1621,
		obj_t BgL_xz00_1622, obj_t BgL_ez00_1623)
	{
		AN_OBJECT;
		{	/* Eval/expand.scm 106 */
			return BgL_xz00_1622;
		}
	}



/* _identifier-eval-expander */
	obj_t BGl__identifierzd2evalzd2expanderz00zz__expandz00(obj_t BgL_envz00_1624,
		obj_t BgL_xz00_1625, obj_t BgL_ez00_1626)
	{
		AN_OBJECT;
		{	/* Eval/expand.scm 133 */
			return BgL_xz00_1625;
		}
	}



/* loop */
	obj_t BGl_loopz00zz__expandz00(obj_t BgL_ez00_1635, obj_t BgL_xz00_826)
	{
		AN_OBJECT;
		{	/* Eval/expand.scm 140 */
			if (NULLP(BgL_xz00_826))
				{	/* Eval/expand.scm 142 */
					return BNIL;
				}
			else
				{	/* Eval/expand.scm 142 */
					if (PAIRP(BgL_xz00_826))
						{	/* Eval/expand.scm 144 */
							if (EXTENDED_PAIRP(BgL_xz00_826))
								{	/* Eval/expand.scm 147 */
									obj_t BgL_arg1926z00_831;

									obj_t BgL_arg1927z00_832;

									obj_t BgL_arg1929z00_833;

									{	/* Eval/expand.scm 147 */
										obj_t BgL_arg1930z00_834;

										BgL_arg1930z00_834 = CAR(BgL_xz00_826);
										BgL_arg1926z00_831 =
											PROCEDURE_ENTRY(BgL_ez00_1635) (BgL_ez00_1635,
											BgL_arg1930z00_834, BgL_ez00_1635, BEOA);
									}
									BgL_arg1927z00_832 =
										BGl_loopz00zz__expandz00(BgL_ez00_1635, CDR(BgL_xz00_826));
									BgL_arg1929z00_833 = CER(BgL_xz00_826);
									{	/* Eval/expand.scm 147 */
										obj_t BgL_res2206z00_1353;

										BgL_res2206z00_1353 =
											MAKE_EXTENDED_PAIR(BgL_arg1926z00_831, BgL_arg1927z00_832,
											BgL_arg1929z00_833);
										return BgL_res2206z00_1353;
									}
								}
							else
								{	/* Eval/expand.scm 149 */
									obj_t BgL_arg1932z00_836;

									obj_t BgL_arg1935z00_837;

									{	/* Eval/expand.scm 149 */
										obj_t BgL_arg1937z00_838;

										BgL_arg1937z00_838 = CAR(BgL_xz00_826);
										BgL_arg1932z00_836 =
											PROCEDURE_ENTRY(BgL_ez00_1635) (BgL_ez00_1635,
											BgL_arg1937z00_838, BgL_ez00_1635, BEOA);
									}
									BgL_arg1935z00_837 =
										BGl_loopz00zz__expandz00(BgL_ez00_1635, CDR(BgL_xz00_826));
									return MAKE_PAIR(BgL_arg1932z00_836, BgL_arg1935z00_837);
								}
						}
					else
						{	/* Eval/expand.scm 144 */
							return
								BGl_errorz00zz__errorz00(BGl_string2224z00zz__expandz00,
								BGl_string2222z00zz__expandz00, BgL_xz00_826);
						}
				}
		}
	}



/* _application-eval-expander */
	obj_t BGl__applicationzd2evalzd2expanderz00zz__expandz00(obj_t
		BgL_envz00_1603, obj_t BgL_xz00_1604, obj_t BgL_ez00_1605)
	{
		AN_OBJECT;
		{	/* Eval/expand.scm 139 */
			return BGl_loopz00zz__expandz00(BgL_ez00_1605, BgL_xz00_1604);
		}
	}



/* application-eval-expander! */
	obj_t BGl_applicationzd2evalzd2expanderz12z12zz__expandz00(obj_t BgL_xz00_15,
		obj_t BgL_ez00_16)
	{
		AN_OBJECT;
		{	/* Eval/expand.scm 154 */
			{
				obj_t BgL_yz00_842;

				BgL_yz00_842 = BgL_xz00_15;
			BgL_zc3anonymousza31939ze3z83_843:
				if (NULLP(BgL_yz00_842))
					{	/* Eval/expand.scm 157 */
						return BgL_xz00_15;
					}
				else
					{	/* Eval/expand.scm 157 */
						if (PAIRP(BgL_yz00_842))
							{	/* Eval/expand.scm 159 */
								{	/* Eval/expand.scm 162 */
									obj_t BgL_arg1942z00_846;

									{	/* Eval/expand.scm 162 */
										obj_t BgL_arg1943z00_847;

										BgL_arg1943z00_847 = CAR(BgL_yz00_842);
										BgL_arg1942z00_846 =
											PROCEDURE_ENTRY(BgL_ez00_16) (BgL_ez00_16,
											BgL_arg1943z00_847, BgL_ez00_16, BEOA);
									}
									SET_CAR(BgL_yz00_842, BgL_arg1942z00_846);
								}
								{
									obj_t BgL_yz00_1736;

									BgL_yz00_1736 = CDR(BgL_yz00_842);
									BgL_yz00_842 = BgL_yz00_1736;
									goto BgL_zc3anonymousza31939ze3z83_843;
								}
							}
						else
							{	/* Eval/expand.scm 159 */
								return
									BGl_errorz00zz__errorz00(BGl_string2224z00zz__expandz00,
									BGl_string2222z00zz__expandz00, BgL_yz00_842);
							}
					}
			}
		}
	}



/* _application-eval-expander! */
	obj_t BGl__applicationzd2evalzd2expanderz12z12zz__expandz00(obj_t
		BgL_envz00_1611, obj_t BgL_xz00_1612, obj_t BgL_ez00_1613)
	{
		AN_OBJECT;
		{	/* Eval/expand.scm 154 */
			return
				BGl_applicationzd2evalzd2expanderz12z12zz__expandz00(BgL_xz00_1612,
				BgL_ez00_1613);
		}
	}



/* %lexical-stack */
	BGL_EXPORTED_DEF obj_t BGl_z52lexicalzd2stackz80zz__expandz00()
	{
		AN_OBJECT;
		{	/* Eval/expand.scm 168 */
			return BGL_LEXICAL_STACK();
		}
	}



/* _%lexical-stack */
	obj_t BGl__z52lexicalzd2stackz80zz__expandz00(obj_t BgL_envz00_1627)
	{
		AN_OBJECT;
		{	/* Eval/expand.scm 168 */
			return BGL_LEXICAL_STACK();
		}
	}



/* %with-lexical */
	BGL_EXPORTED_DEF obj_t BGl_z52withzd2lexicalz80zz__expandz00(obj_t
		BgL_newz00_17, obj_t BgL_formz00_18, obj_t BgL_ez00_19, obj_t BgL_keyz00_20)
	{
		AN_OBJECT;
		{	/* Eval/expand.scm 174 */
			{	/* Eval/expand.scm 175 */
				obj_t BgL_oldzd2lexicalzd2stackz00_850;

				BgL_oldzd2lexicalzd2stackz00_850 = BGL_LEXICAL_STACK();
				{	/* Eval/expand.scm 176 */
					obj_t BgL_arg1945z00_851;

					{	/* Eval/expand.scm 176 */
						obj_t BgL_arg1946z00_852;

						if (NULLP(BgL_newz00_17))
							{	/* Eval/expand.scm 176 */
								BgL_arg1946z00_852 = BNIL;
							}
						else
							{	/* Eval/expand.scm 176 */
								obj_t BgL_head1857z00_855;

								BgL_head1857z00_855 = MAKE_PAIR(BNIL, BNIL);
								{
									obj_t BgL_l1855z00_1366;

									obj_t BgL_tail1858z00_1367;

									BgL_l1855z00_1366 = BgL_newz00_17;
									BgL_tail1858z00_1367 = BgL_head1857z00_855;
								BgL_zc3anonymousza31948ze3z83_1365:
									if (NULLP(BgL_l1855z00_1366))
										{	/* Eval/expand.scm 176 */
											BgL_arg1946z00_852 = CDR(BgL_head1857z00_855);
										}
									else
										{	/* Eval/expand.scm 176 */
											obj_t BgL_newtail1859z00_1375;

											{	/* Eval/expand.scm 176 */
												obj_t BgL_arg1951z00_1376;

												BgL_arg1951z00_1376 =
													MAKE_PAIR(CAR(BgL_l1855z00_1366), BgL_keyz00_20);
												BgL_newtail1859z00_1375 =
													MAKE_PAIR(BgL_arg1951z00_1376, BNIL);
											}
											SET_CDR(BgL_tail1858z00_1367, BgL_newtail1859z00_1375);
											{
												obj_t BgL_tail1858z00_1755;

												obj_t BgL_l1855z00_1753;

												BgL_l1855z00_1753 = CDR(BgL_l1855z00_1366);
												BgL_tail1858z00_1755 = BgL_newtail1859z00_1375;
												BgL_tail1858z00_1367 = BgL_tail1858z00_1755;
												BgL_l1855z00_1366 = BgL_l1855z00_1753;
												goto BgL_zc3anonymousza31948ze3z83_1365;
											}
										}
								}
							}
						BgL_arg1945z00_851 =
							bgl_append2(BgL_arg1946z00_852, BgL_oldzd2lexicalzd2stackz00_850);
					}
					BGL_LEXICAL_STACK_SET(BgL_arg1945z00_851);
					BUNSPEC;
				}
				{	/* Eval/expand.scm 178 */
					obj_t BgL_val1828z00_867;

					BgL_val1828z00_867 =
						BGl_zc3exitza31956ze3z83zz__expandz00(BgL_formz00_18, BgL_ez00_19);
					BGL_LEXICAL_STACK_SET(BgL_oldzd2lexicalzd2stackz00_850);
					BUNSPEC;
					if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
							(BgL_val1828z00_867)))
						{	/* Eval/expand.scm 180 */
							return
								BGl_unwindzd2untilz12zc0zz__bexitz00(CAR(BgL_val1828z00_867),
								CDR(BgL_val1828z00_867));
						}
					else
						{	/* Eval/expand.scm 180 */
							return BgL_val1828z00_867;
						}
				}
			}
		}
	}



/* <exit:1956> */
	obj_t BGl_zc3exitza31956ze3z83zz__expandz00(obj_t BgL_formz00_1634,
		obj_t BgL_ez00_1633)
	{
		AN_OBJECT;
		{	/* Eval/expand.scm 180 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1829z00_872;

			if (SET_EXIT(BgL_an_exit1829z00_872))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1829z00_872 = (void *) jmpbuf;
					{	/* Eval/expand.scm 180 */

						PUSH_EXIT(BgL_an_exit1829z00_872, ((long) 0));
						{	/* Eval/expand.scm 179 */
							obj_t BgL_val1830z00_873;

							BgL_val1830z00_873 =
								PROCEDURE_ENTRY(BgL_ez00_1633) (BgL_ez00_1633, BgL_formz00_1634,
								BgL_ez00_1633, BEOA);
							POP_EXIT();
							return BgL_val1830z00_873;
						}
					}
				}
		}
	}



/* _%with-lexical */
	obj_t BGl__z52withzd2lexicalz80zz__expandz00(obj_t BgL_envz00_1628,
		obj_t BgL_newz00_1629, obj_t BgL_formz00_1630, obj_t BgL_ez00_1631,
		obj_t BgL_keyz00_1632)
	{
		AN_OBJECT;
		{	/* Eval/expand.scm 174 */
			{	/* Eval/expand.scm 175 */
				obj_t BgL_auxz00_1781;

				obj_t BgL_auxz00_1772;

				if (PROCEDUREP(BgL_ez00_1631))
					{	/* Eval/expand.scm 175 */
						BgL_auxz00_1781 = BgL_ez00_1631;
					}
				else
					{
						obj_t BgL_auxz00_1784;

						BgL_auxz00_1784 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2225z00zz__expandz00,
							BINT(((long) 6212)), BGl_string2226z00zz__expandz00,
							BGl_string2228z00zz__expandz00, BgL_ez00_1631);
						FAILURE(BgL_auxz00_1784, BFALSE, BFALSE);
					}
				{	/* Eval/expand.scm 175 */
					bool_t BgL_testz00_1773;

					if (PAIRP(BgL_newz00_1629))
						{	/* Eval/expand.scm 175 */
							BgL_testz00_1773 = ((bool_t) 1);
						}
					else
						{	/* Eval/expand.scm 175 */
							BgL_testz00_1773 = NULLP(BgL_newz00_1629);
						}
					if (BgL_testz00_1773)
						{	/* Eval/expand.scm 175 */
							BgL_auxz00_1772 = BgL_newz00_1629;
						}
					else
						{
							obj_t BgL_auxz00_1777;

							BgL_auxz00_1777 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2225z00zz__expandz00,
								BINT(((long) 6212)), BGl_string2226z00zz__expandz00,
								BGl_string2227z00zz__expandz00, BgL_newz00_1629);
							FAILURE(BgL_auxz00_1777, BFALSE, BFALSE);
				}}
				return
					BGl_z52withzd2lexicalz80zz__expandz00(BgL_auxz00_1772,
					BgL_formz00_1630, BgL_auxz00_1781, BgL_keyz00_1632);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__expandz00()
	{
		AN_OBJECT;
		{	/* Eval/expand.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__expandz00()
	{
		AN_OBJECT;
		{	/* Eval/expand.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__expandz00()
	{
		AN_OBJECT;
		{	/* Eval/expand.scm 14 */
			BGl_modulezd2initializa7ationz75zz__typez00(((long) 70840631),
				BSTRING_TO_STRING(BGl_string2229z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2229z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 36880833),
				BSTRING_TO_STRING(BGl_string2229z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 89651882),
				BSTRING_TO_STRING(BGl_string2229z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 333500458),
				BSTRING_TO_STRING(BGl_string2229z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string2229z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 318625392),
				BSTRING_TO_STRING(BGl_string2229z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 393249273),
				BSTRING_TO_STRING(BGl_string2229z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2229z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2229z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2229z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 32372471),
				BSTRING_TO_STRING(BGl_string2229z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 271566986),
				BSTRING_TO_STRING(BGl_string2229z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					234579753), BSTRING_TO_STRING(BGl_string2229z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					170547433), BSTRING_TO_STRING(BGl_string2229z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					400650732), BSTRING_TO_STRING(BGl_string2229z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					459721289), BSTRING_TO_STRING(BGl_string2229z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 123701502),
				BSTRING_TO_STRING(BGl_string2229z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 504082187),
				BSTRING_TO_STRING(BGl_string2229z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 497320869),
				BSTRING_TO_STRING(BGl_string2229z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					485908420), BSTRING_TO_STRING(BGl_string2229z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 28131980),
				BSTRING_TO_STRING(BGl_string2229z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					159305184), BSTRING_TO_STRING(BGl_string2229z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 236383033),
				BSTRING_TO_STRING(BGl_string2229z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 466504979),
				BSTRING_TO_STRING(BGl_string2229z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					164543289), BSTRING_TO_STRING(BGl_string2229z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__evenvz00(((long) 535170906),
				BSTRING_TO_STRING(BGl_string2229z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__evutilsz00(((long) 130886107),
				BSTRING_TO_STRING(BGl_string2229z00zz__expandz00));
			return BGl_modulezd2initializa7ationz75zz__macroz00(((long) 508636713),
				BSTRING_TO_STRING(BGl_string2229z00zz__expandz00));
		}
	}

#ifdef __cplusplus
}
#endif
