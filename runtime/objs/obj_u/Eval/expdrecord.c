/*===========================================================================*/
/*   (Eval/expdrecord.scm)                                                   */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Eval/expdrecord.scm -indent -o objs/obj_u/Eval/expdrecord.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__expander_recordz00 =
		BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__expander_recordz00();
	extern obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_evepairifyz00zz__prognz00(obj_t, obj_t);
	static obj_t BGl_recordzd2ze3structz31zz__expander_recordz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__expander_recordz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__expander_recordz00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__expander_recordz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zz__match_normaliza7eza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_symbol2367z00zz__expander_recordz00 = BUNSPEC;
	static obj_t BGl_symbol2369z00zz__expander_recordz00 = BUNSPEC;
	extern long bgl_list_length(obj_t);
	static obj_t BGl_symbol2371z00zz__expander_recordz00 = BUNSPEC;
	static obj_t BGl_symbol2373z00zz__expander_recordz00 = BUNSPEC;
	static obj_t BGl_symbol2375z00zz__expander_recordz00 = BUNSPEC;
	static obj_t BGl_symbol2377z00zz__expander_recordz00 = BUNSPEC;
	static obj_t BGl_symbol2379z00zz__expander_recordz00 = BUNSPEC;
	static obj_t BGl_symbol2381z00zz__expander_recordz00 = BUNSPEC;
	static obj_t BGl_symbol2383z00zz__expander_recordz00 = BUNSPEC;
	static obj_t BGl_symbol2385z00zz__expander_recordz00 = BUNSPEC;
	static obj_t BGl_symbol2387z00zz__expander_recordz00 = BUNSPEC;
	static obj_t BGl_symbol2389z00zz__expander_recordz00 = BUNSPEC;
	static obj_t BGl_symbol2391z00zz__expander_recordz00 = BUNSPEC;
	static obj_t BGl_symbol2393z00zz__expander_recordz00 = BUNSPEC;
	static obj_t BGl_symbol2397z00zz__expander_recordz00 = BUNSPEC;
	static obj_t BGl_symbol2399z00zz__expander_recordz00 = BUNSPEC;
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_expandzd2errorzd2zz__expander_recordz00(bool_t, obj_t,
		obj_t);
	static obj_t BGl_loopz00zz__expander_recordz00(obj_t, obj_t, obj_t, long);
	static obj_t
		BGl__expandzd2definezd2recordzd2typezd2zz__expander_recordz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_loopz72z72zz__expander_recordz00(obj_t, obj_t, obj_t, long);
	extern obj_t BGl_errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2definezd2recordzd2typezd2zz__expander_recordz00(obj_t, obj_t);
	extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__expander_recordz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2366z00zz__expander_recordz00,
		BgL_bgl_string2366za700za7za7_2403za7, "invalid form", 12);
	      DEFINE_STRING(BGl_string2368z00zz__expander_recordz00,
		BgL_bgl_string2368za700za7za7_2404za7, "<", 1);
	      DEFINE_STRING(BGl_string2370z00zz__expander_recordz00,
		BgL_bgl_string2370za700za7za7_2405za7, ">", 1);
	      DEFINE_STRING(BGl_string2372z00zz__expander_recordz00,
		BgL_bgl_string2372za700za7za7_2406za7, "begin", 5);
	      DEFINE_STRING(BGl_string2374z00zz__expander_recordz00,
		BgL_bgl_string2374za700za7za7_2407za7, "define", 6);
	      DEFINE_STRING(BGl_string2376z00zz__expander_recordz00,
		BgL_bgl_string2376za700za7za7_2408za7, "let", 3);
	      DEFINE_STRING(BGl_string2378z00zz__expander_recordz00,
		BgL_bgl_string2378za700za7za7_2409za7, "make-struct", 11);
	      DEFINE_STRING(BGl_string2380z00zz__expander_recordz00,
		BgL_bgl_string2380za700za7za7_2410za7, "quote", 5);
	      DEFINE_STRING(BGl_string2382z00zz__expander_recordz00,
		BgL_bgl_string2382za700za7za7_2411za7, "o", 1);
	      DEFINE_STRING(BGl_string2384z00zz__expander_recordz00,
		BgL_bgl_string2384za700za7za7_2412za7, "and", 3);
	      DEFINE_STRING(BGl_string2386z00zz__expander_recordz00,
		BgL_bgl_string2386za700za7za7_2413za7, "struct?", 7);
	      DEFINE_STRING(BGl_string2388z00zz__expander_recordz00,
		BgL_bgl_string2388za700za7za7_2414za7, "eq?", 3);
	      DEFINE_STRING(BGl_string2400z00zz__expander_recordz00,
		BgL_bgl_string2400za700za7za7_2415za7, "struct-ref", 10);
	      DEFINE_STRING(BGl_string2390z00zz__expander_recordz00,
		BgL_bgl_string2390za700za7za7_2416za7, "struct-key", 10);
	      DEFINE_STRING(BGl_string2401z00zz__expander_recordz00,
		BgL_bgl_string2401za700za7za7_2417za7, "invalid field spec", 18);
	      DEFINE_STRING(BGl_string2402z00zz__expander_recordz00,
		BgL_bgl_string2402za700za7za7_2418za7, "__expander_record", 17);
	      DEFINE_STRING(BGl_string2392z00zz__expander_recordz00,
		BgL_bgl_string2392za700za7za7_2419za7, "=", 1);
	      DEFINE_STRING(BGl_string2394z00zz__expander_recordz00,
		BgL_bgl_string2394za700za7za7_2420za7, "struct-length", 13);
	      DEFINE_STRING(BGl_string2395z00zz__expander_recordz00,
		BgL_bgl_string2395za700za7za7_2421za7, "invalid constructor", 19);
	      DEFINE_STRING(BGl_string2396z00zz__expander_recordz00,
		BgL_bgl_string2396za700za7za7_2422za7, "invalid fields", 14);
	      DEFINE_STRING(BGl_string2398z00zz__expander_recordz00,
		BgL_bgl_string2398za700za7za7_2423za7, "struct-set!", 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2definezd2recordzd2typezd2envz00zz__expander_recordz00,
		BgL_bgl__expandza7d2define2424za7,
		BGl__expandzd2definezd2recordzd2typezd2zz__expander_recordz00, 0L, BUNSPEC,
		2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__expander_recordz00(long
		BgL_checksumz00_1710, char *BgL_fromz00_1711)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__expander_recordz00))
				{
					BGl_requirezd2initializa7ationz75zz__expander_recordz00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__expander_recordz00();
					BGl_importedzd2moduleszd2initz00zz__expander_recordz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__expander_recordz00()
	{
		AN_OBJECT;
		{	/* Eval/expdrecord.scm 18 */
			BGl_symbol2367z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string2368z00zz__expander_recordz00);
			BGl_symbol2369z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string2370z00zz__expander_recordz00);
			BGl_symbol2371z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string2372z00zz__expander_recordz00);
			BGl_symbol2373z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string2374z00zz__expander_recordz00);
			BGl_symbol2375z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string2376z00zz__expander_recordz00);
			BGl_symbol2377z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string2378z00zz__expander_recordz00);
			BGl_symbol2379z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string2380z00zz__expander_recordz00);
			BGl_symbol2381z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string2382z00zz__expander_recordz00);
			BGl_symbol2383z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string2384z00zz__expander_recordz00);
			BGl_symbol2385z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string2386z00zz__expander_recordz00);
			BGl_symbol2387z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string2388z00zz__expander_recordz00);
			BGl_symbol2389z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string2390z00zz__expander_recordz00);
			BGl_symbol2391z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string2392z00zz__expander_recordz00);
			BGl_symbol2393z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string2394z00zz__expander_recordz00);
			BGl_symbol2397z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string2398z00zz__expander_recordz00);
			return (BGl_symbol2399z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string2400z00zz__expander_recordz00), BUNSPEC);
		}
	}



/* expand-define-record-type */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2definezd2recordzd2typezd2zz__expander_recordz00(obj_t
		BgL_xz00_1, obj_t BgL_ez00_2)
	{
		AN_OBJECT;
		{	/* Eval/expdrecord.scm 58 */
			if (PAIRP(BgL_xz00_1))
				{	/* Eval/expdrecord.scm 59 */
					obj_t BgL_cdrzd21401zd2_785;

					BgL_cdrzd21401zd2_785 = CDR(BgL_xz00_1);
					if (PAIRP(BgL_cdrzd21401zd2_785))
						{	/* Eval/expdrecord.scm 59 */
							obj_t BgL_cdrzd21407zd2_787;

							BgL_cdrzd21407zd2_787 = CDR(BgL_cdrzd21401zd2_785);
							if (PAIRP(BgL_cdrzd21407zd2_787))
								{	/* Eval/expdrecord.scm 59 */
									obj_t BgL_cdrzd21413zd2_789;

									BgL_cdrzd21413zd2_789 = CDR(BgL_cdrzd21407zd2_787);
									if (PAIRP(BgL_cdrzd21413zd2_789))
										{	/* Eval/expdrecord.scm 59 */
											obj_t BgL_arg1893z00_791;

											obj_t BgL_arg1894z00_792;

											obj_t BgL_arg1895z00_793;

											obj_t BgL_arg1896z00_794;

											BgL_arg1893z00_791 = CAR(BgL_cdrzd21401zd2_785);
											BgL_arg1894z00_792 = CAR(BgL_cdrzd21407zd2_787);
											BgL_arg1895z00_793 = CAR(BgL_cdrzd21413zd2_789);
											BgL_arg1896z00_794 = CDR(BgL_cdrzd21413zd2_789);
											{	/* Eval/expdrecord.scm 59 */
												obj_t BgL_arg1898z00_1457;

												{	/* Eval/expdrecord.scm 59 */
													obj_t BgL_arg1899z00_1458;

													BgL_arg1899z00_1458 =
														BGl_recordzd2ze3structz31zz__expander_recordz00
														(BgL_arg1893z00_791, BgL_arg1894z00_792,
														BgL_arg1895z00_793, BgL_arg1896z00_794);
													BgL_arg1898z00_1457 =
														PROCEDURE_ENTRY(BgL_ez00_2) (BgL_ez00_2,
														BgL_arg1899z00_1458, BgL_ez00_2, BEOA);
												}
												return
													BGl_evepairifyz00zz__prognz00(BgL_arg1898z00_1457,
													BgL_xz00_1);
											}
										}
									else
										{	/* Eval/expdrecord.scm 59 */
											return
												BGl_expandzd2errorzd2zz__expander_recordz00(((bool_t)
													0), BGl_string2366z00zz__expander_recordz00,
												BgL_xz00_1);
										}
								}
							else
								{	/* Eval/expdrecord.scm 59 */
									return
										BGl_expandzd2errorzd2zz__expander_recordz00(((bool_t) 0),
										BGl_string2366z00zz__expander_recordz00, BgL_xz00_1);
								}
						}
					else
						{	/* Eval/expdrecord.scm 59 */
							return
								BGl_expandzd2errorzd2zz__expander_recordz00(((bool_t) 0),
								BGl_string2366z00zz__expander_recordz00, BgL_xz00_1);
						}
				}
			else
				{	/* Eval/expdrecord.scm 59 */
					return
						BGl_expandzd2errorzd2zz__expander_recordz00(((bool_t) 0),
						BGl_string2366z00zz__expander_recordz00, BgL_xz00_1);
				}
		}
	}



/* _expand-define-record-type */
	obj_t BGl__expandzd2definezd2recordzd2typezd2zz__expander_recordz00(obj_t
		BgL_envz00_1703, obj_t BgL_xz00_1704, obj_t BgL_ez00_1705)
	{
		AN_OBJECT;
		{	/* Eval/expdrecord.scm 58 */
			return
				BGl_expandzd2definezd2recordzd2typezd2zz__expander_recordz00
				(BgL_xz00_1704, BgL_ez00_1705);
		}
	}



/* record->struct */
	obj_t BGl_recordzd2ze3structz31zz__expander_recordz00(obj_t BgL_namez00_3,
		obj_t BgL_constrz00_4, obj_t BgL_predicatez00_5, obj_t BgL_fieldsz00_6)
	{
		AN_OBJECT;
		{	/* Eval/expdrecord.scm 68 */
			if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_fieldsz00_6))
				{	/* Eval/expdrecord.scm 70 */
					if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_constrz00_4))
						{	/* Eval/expdrecord.scm 75 */
							obj_t BgL_tmpz00_799;

							obj_t BgL_valz00_800;

							obj_t BgL_keyz00_801;

							{	/* Eval/expdrecord.scm 75 */

								{	/* Eval/expdrecord.scm 75 */

									BgL_tmpz00_799 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
								}
							}
							{	/* Eval/expdrecord.scm 76 */

								{	/* Eval/expdrecord.scm 76 */

									BgL_valz00_800 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
								}
							}
							{	/* Eval/expdrecord.scm 77 */
								obj_t BgL_list2090z00_985;

								{	/* Eval/expdrecord.scm 77 */
									obj_t BgL_arg2091z00_986;

									obj_t BgL_arg2092z00_987;

									BgL_arg2091z00_986 = BGl_symbol2367z00zz__expander_recordz00;
									{	/* Eval/expdrecord.scm 77 */
										obj_t BgL_arg2093z00_988;

										BgL_arg2093z00_988 =
											MAKE_PAIR(BGl_symbol2369z00zz__expander_recordz00, BNIL);
										BgL_arg2092z00_987 =
											MAKE_PAIR(BgL_namez00_3, BgL_arg2093z00_988);
									}
									BgL_list2090z00_985 =
										MAKE_PAIR(BgL_arg2091z00_986, BgL_arg2092z00_987);
								}
								BgL_keyz00_801 =
									BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
									(BgL_list2090z00_985);
							}
							{	/* Eval/expdrecord.scm 78 */
								obj_t BgL_arg1902z00_802;

								obj_t BgL_arg1903z00_803;

								BgL_arg1902z00_802 = BGl_symbol2371z00zz__expander_recordz00;
								{	/* Eval/expdrecord.scm 79 */
									obj_t BgL_arg1904z00_804;

									obj_t BgL_arg1905z00_805;

									obj_t BgL_arg1906z00_806;

									{	/* Eval/expdrecord.scm 79 */
										obj_t BgL_arg1909z00_809;

										obj_t BgL_arg1910z00_810;

										BgL_arg1909z00_809 =
											BGl_symbol2373z00zz__expander_recordz00;
										{	/* Eval/expdrecord.scm 80 */
											obj_t BgL_arg1911z00_811;

											{	/* Eval/expdrecord.scm 80 */
												obj_t BgL_arg1915z00_815;

												obj_t BgL_arg1916z00_816;

												BgL_arg1915z00_815 =
													BGl_symbol2375z00zz__expander_recordz00;
												{	/* Eval/expdrecord.scm 80 */
													obj_t BgL_arg1918z00_817;

													obj_t BgL_arg1919z00_818;

													{	/* Eval/expdrecord.scm 80 */
														obj_t BgL_arg1923z00_822;

														{	/* Eval/expdrecord.scm 80 */
															obj_t BgL_arg1925z00_824;

															{	/* Eval/expdrecord.scm 80 */
																obj_t BgL_arg1926z00_825;

																{	/* Eval/expdrecord.scm 80 */
																	obj_t BgL_arg1929z00_828;

																	obj_t BgL_arg1930z00_829;

																	BgL_arg1929z00_828 =
																		BGl_symbol2377z00zz__expander_recordz00;
																	{	/* Eval/expdrecord.scm 80 */
																		obj_t BgL_arg1931z00_830;

																		long BgL_arg1932z00_831;

																		{	/* Eval/expdrecord.scm 80 */
																			obj_t BgL_arg1940z00_836;

																			obj_t BgL_arg1941z00_837;

																			BgL_arg1940z00_836 =
																				BGl_symbol2379z00zz__expander_recordz00;
																			{	/* Eval/expdrecord.scm 80 */
																				obj_t BgL_list1942z00_838;

																				BgL_list1942z00_838 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg1941z00_837 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_keyz00_801, BgL_list1942z00_838);
																			}
																			BgL_arg1931z00_830 =
																				MAKE_PAIR(BgL_arg1940z00_836,
																				BgL_arg1941z00_837);
																		}
																		BgL_arg1932z00_831 =
																			bgl_list_length(BgL_fieldsz00_6);
																		{	/* Eval/expdrecord.scm 80 */
																			obj_t BgL_list1936z00_833;

																			{	/* Eval/expdrecord.scm 80 */
																				obj_t BgL_arg1937z00_834;

																				{	/* Eval/expdrecord.scm 80 */
																					obj_t BgL_arg1938z00_835;

																					BgL_arg1938z00_835 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg1937z00_834 =
																						MAKE_PAIR(BUNSPEC,
																						BgL_arg1938z00_835);
																				}
																				BgL_list1936z00_833 =
																					MAKE_PAIR(BINT(BgL_arg1932z00_831),
																					BgL_arg1937z00_834);
																			}
																			BgL_arg1930z00_829 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg1931z00_830,
																				BgL_list1936z00_833);
																	}}
																	BgL_arg1926z00_825 =
																		MAKE_PAIR(BgL_arg1929z00_828,
																		BgL_arg1930z00_829);
																}
																{	/* Eval/expdrecord.scm 80 */
																	obj_t BgL_list1928z00_827;

																	BgL_list1928z00_827 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg1925z00_824 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg1926z00_825, BgL_list1928z00_827);
															}}
															BgL_arg1923z00_822 =
																MAKE_PAIR(BgL_tmpz00_799, BgL_arg1925z00_824);
														}
														BgL_arg1918z00_817 =
															MAKE_PAIR(BgL_arg1923z00_822, BNIL);
													}
													{	/* Eval/expdrecord.scm 81 */
														obj_t BgL_arg1943z00_839;

														obj_t BgL_arg1944z00_840;

														BgL_arg1943z00_839 =
															BGl_symbol2371z00zz__expander_recordz00;
														{	/* Eval/expdrecord.scm 85 */
															obj_t BgL_arg1945z00_841;

															obj_t BgL_arg1946z00_842;

															BgL_arg1945z00_841 =
																BGl_loopz00zz__expander_recordz00
																(BgL_constrz00_4, BgL_tmpz00_799,
																BgL_fieldsz00_6, ((long) 0));
															BgL_arg1946z00_842 =
																MAKE_PAIR(BgL_tmpz00_799, BNIL);
															BgL_arg1944z00_840 =
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg1945z00_841, BgL_arg1946z00_842);
														}
														BgL_arg1919z00_818 =
															MAKE_PAIR(BgL_arg1943z00_839, BgL_arg1944z00_840);
													}
													{	/* Eval/expdrecord.scm 80 */
														obj_t BgL_list1921z00_820;

														{	/* Eval/expdrecord.scm 80 */
															obj_t BgL_arg1922z00_821;

															BgL_arg1922z00_821 = MAKE_PAIR(BNIL, BNIL);
															BgL_list1921z00_820 =
																MAKE_PAIR(BgL_arg1919z00_818,
																BgL_arg1922z00_821);
														}
														BgL_arg1916z00_816 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg1918z00_817, BgL_list1921z00_820);
												}}
												BgL_arg1911z00_811 =
													MAKE_PAIR(BgL_arg1915z00_815, BgL_arg1916z00_816);
											}
											{	/* Eval/expdrecord.scm 79 */
												obj_t BgL_list1913z00_813;

												{	/* Eval/expdrecord.scm 79 */
													obj_t BgL_arg1914z00_814;

													BgL_arg1914z00_814 = MAKE_PAIR(BNIL, BNIL);
													BgL_list1913z00_813 =
														MAKE_PAIR(BgL_arg1911z00_811, BgL_arg1914z00_814);
												}
												BgL_arg1910z00_810 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_constrz00_4, BgL_list1913z00_813);
										}}
										BgL_arg1904z00_804 =
											MAKE_PAIR(BgL_arg1909z00_809, BgL_arg1910z00_810);
									}
									{	/* Eval/expdrecord.scm 93 */
										obj_t BgL_arg1966z00_865;

										obj_t BgL_arg1967z00_866;

										BgL_arg1966z00_865 =
											BGl_symbol2373z00zz__expander_recordz00;
										{	/* Eval/expdrecord.scm 93 */
											obj_t BgL_arg1968z00_867;

											obj_t BgL_arg1969z00_868;

											{	/* Eval/expdrecord.scm 93 */
												obj_t BgL_arg1973z00_872;

												{	/* Eval/expdrecord.scm 93 */
													obj_t BgL_list1974z00_873;

													BgL_list1974z00_873 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg1973z00_872 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BGl_symbol2381z00zz__expander_recordz00,
														BgL_list1974z00_873);
												}
												BgL_arg1968z00_867 =
													MAKE_PAIR(BgL_predicatez00_5, BgL_arg1973z00_872);
											}
											{	/* Eval/expdrecord.scm 94 */
												obj_t BgL_arg1975z00_874;

												obj_t BgL_arg1976z00_875;

												BgL_arg1975z00_874 =
													BGl_symbol2383z00zz__expander_recordz00;
												{	/* Eval/expdrecord.scm 94 */
													obj_t BgL_arg1977z00_876;

													obj_t BgL_arg1979z00_877;

													obj_t BgL_arg1980z00_878;

													{	/* Eval/expdrecord.scm 94 */
														obj_t BgL_arg1985z00_883;

														obj_t BgL_arg1986z00_884;

														BgL_arg1985z00_883 =
															BGl_symbol2385z00zz__expander_recordz00;
														{	/* Eval/expdrecord.scm 94 */
															obj_t BgL_list1987z00_885;

															BgL_list1987z00_885 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg1986z00_884 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BGl_symbol2381z00zz__expander_recordz00,
																BgL_list1987z00_885);
														}
														BgL_arg1977z00_876 =
															MAKE_PAIR(BgL_arg1985z00_883, BgL_arg1986z00_884);
													}
													{	/* Eval/expdrecord.scm 95 */
														obj_t BgL_arg1988z00_886;

														obj_t BgL_arg1989z00_887;

														BgL_arg1988z00_886 =
															BGl_symbol2387z00zz__expander_recordz00;
														{	/* Eval/expdrecord.scm 95 */
															obj_t BgL_arg1990z00_888;

															obj_t BgL_arg1991z00_889;

															{	/* Eval/expdrecord.scm 95 */
																obj_t BgL_arg1995z00_893;

																obj_t BgL_arg1996z00_894;

																BgL_arg1995z00_893 =
																	BGl_symbol2389z00zz__expander_recordz00;
																{	/* Eval/expdrecord.scm 95 */
																	obj_t BgL_list1997z00_895;

																	BgL_list1997z00_895 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg1996z00_894 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BGl_symbol2381z00zz__expander_recordz00,
																		BgL_list1997z00_895);
																}
																BgL_arg1990z00_888 =
																	MAKE_PAIR(BgL_arg1995z00_893,
																	BgL_arg1996z00_894);
															}
															{	/* Eval/expdrecord.scm 95 */
																obj_t BgL_arg1998z00_896;

																obj_t BgL_arg1999z00_897;

																BgL_arg1998z00_896 =
																	BGl_symbol2379z00zz__expander_recordz00;
																{	/* Eval/expdrecord.scm 95 */
																	obj_t BgL_list2000z00_898;

																	BgL_list2000z00_898 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg1999z00_897 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_keyz00_801, BgL_list2000z00_898);
																}
																BgL_arg1991z00_889 =
																	MAKE_PAIR(BgL_arg1998z00_896,
																	BgL_arg1999z00_897);
															}
															{	/* Eval/expdrecord.scm 95 */
																obj_t BgL_list1993z00_891;

																{	/* Eval/expdrecord.scm 95 */
																	obj_t BgL_arg1994z00_892;

																	BgL_arg1994z00_892 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list1993z00_891 =
																		MAKE_PAIR(BgL_arg1991z00_889,
																		BgL_arg1994z00_892);
																}
																BgL_arg1989z00_887 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg1990z00_888, BgL_list1993z00_891);
														}}
														BgL_arg1979z00_877 =
															MAKE_PAIR(BgL_arg1988z00_886, BgL_arg1989z00_887);
													}
													{	/* Eval/expdrecord.scm 96 */
														obj_t BgL_arg2001z00_899;

														obj_t BgL_arg2002z00_900;

														BgL_arg2001z00_899 =
															BGl_symbol2391z00zz__expander_recordz00;
														{	/* Eval/expdrecord.scm 96 */
															obj_t BgL_arg2003z00_901;

															long BgL_arg2004z00_902;

															{	/* Eval/expdrecord.scm 96 */
																obj_t BgL_arg2008z00_906;

																obj_t BgL_arg2009z00_907;

																BgL_arg2008z00_906 =
																	BGl_symbol2393z00zz__expander_recordz00;
																{	/* Eval/expdrecord.scm 96 */
																	obj_t BgL_list2010z00_908;

																	BgL_list2010z00_908 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg2009z00_907 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BGl_symbol2381z00zz__expander_recordz00,
																		BgL_list2010z00_908);
																}
																BgL_arg2003z00_901 =
																	MAKE_PAIR(BgL_arg2008z00_906,
																	BgL_arg2009z00_907);
															}
															BgL_arg2004z00_902 =
																bgl_list_length(BgL_fieldsz00_6);
															{	/* Eval/expdrecord.scm 96 */
																obj_t BgL_list2006z00_904;

																{	/* Eval/expdrecord.scm 96 */
																	obj_t BgL_arg2007z00_905;

																	BgL_arg2007z00_905 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list2006z00_904 =
																		MAKE_PAIR(BINT(BgL_arg2004z00_902),
																		BgL_arg2007z00_905);
																}
																BgL_arg2002z00_900 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2003z00_901, BgL_list2006z00_904);
														}}
														BgL_arg1980z00_878 =
															MAKE_PAIR(BgL_arg2001z00_899, BgL_arg2002z00_900);
													}
													{	/* Eval/expdrecord.scm 94 */
														obj_t BgL_list1982z00_880;

														{	/* Eval/expdrecord.scm 94 */
															obj_t BgL_arg1983z00_881;

															{	/* Eval/expdrecord.scm 94 */
																obj_t BgL_arg1984z00_882;

																BgL_arg1984z00_882 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg1983z00_881 =
																	MAKE_PAIR(BgL_arg1980z00_878,
																	BgL_arg1984z00_882);
															}
															BgL_list1982z00_880 =
																MAKE_PAIR(BgL_arg1979z00_877,
																BgL_arg1983z00_881);
														}
														BgL_arg1976z00_875 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg1977z00_876, BgL_list1982z00_880);
												}}
												BgL_arg1969z00_868 =
													MAKE_PAIR(BgL_arg1975z00_874, BgL_arg1976z00_875);
											}
											{	/* Eval/expdrecord.scm 93 */
												obj_t BgL_list1971z00_870;

												{	/* Eval/expdrecord.scm 93 */
													obj_t BgL_arg1972z00_871;

													BgL_arg1972z00_871 = MAKE_PAIR(BNIL, BNIL);
													BgL_list1971z00_870 =
														MAKE_PAIR(BgL_arg1969z00_868, BgL_arg1972z00_871);
												}
												BgL_arg1967z00_866 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1968z00_867, BgL_list1971z00_870);
										}}
										BgL_arg1905z00_805 =
											MAKE_PAIR(BgL_arg1966z00_865, BgL_arg1967z00_866);
									}
									BgL_arg1906z00_806 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BGl_loopz72z72zz__expander_recordz00(BgL_valz00_800,
											BgL_tmpz00_799, BgL_fieldsz00_6, ((long) 0)), BNIL);
									{	/* Eval/expdrecord.scm 78 */
										obj_t BgL_list1907z00_807;

										{	/* Eval/expdrecord.scm 78 */
											obj_t BgL_arg1908z00_808;

											BgL_arg1908z00_808 = MAKE_PAIR(BgL_arg1906z00_806, BNIL);
											BgL_list1907z00_807 =
												MAKE_PAIR(BgL_arg1905z00_805, BgL_arg1908z00_808);
										}
										BgL_arg1903z00_803 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg1904z00_804, BgL_list1907z00_807);
								}}
								return MAKE_PAIR(BgL_arg1902z00_802, BgL_arg1903z00_803);
							}
						}
					else
						{	/* Eval/expdrecord.scm 72 */
							return
								BGl_expandzd2errorzd2zz__expander_recordz00(((bool_t) 0),
								BGl_string2395z00zz__expander_recordz00, BgL_constrz00_4);
						}
				}
			else
				{	/* Eval/expdrecord.scm 70 */
					return
						BGl_expandzd2errorzd2zz__expander_recordz00(((bool_t) 0),
						BGl_string2396z00zz__expander_recordz00, BgL_fieldsz00_6);
				}
		}
	}



/* loop */
	obj_t BGl_loopz00zz__expander_recordz00(obj_t BgL_constrz00_1707,
		obj_t BgL_tmpz00_1706, obj_t BgL_fieldsz00_844, long BgL_iz00_845)
	{
		AN_OBJECT;
		{	/* Eval/expdrecord.scm 82 */
		BGl_loopz00zz__expander_recordz00:
			if (NULLP(BgL_fieldsz00_844))
				{	/* Eval/expdrecord.scm 85 */
					return BNIL;
				}
			else
				{	/* Eval/expdrecord.scm 87 */
					bool_t BgL_testz00_1837;

					{	/* Eval/expdrecord.scm 87 */
						obj_t BgL_auxz00_1838;

						{	/* Eval/expdrecord.scm 87 */
							obj_t BgL_auxz00_1839;

							{	/* Eval/expdrecord.scm 87 */
								obj_t BgL_pairz00_1462;

								BgL_pairz00_1462 = BgL_fieldsz00_844;
								BgL_auxz00_1839 = CAR(CAR(BgL_pairz00_1462));
							}
							BgL_auxz00_1838 =
								BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_1839,
								CDR(BgL_constrz00_1707));
						}
						BgL_testz00_1837 = CBOOL(BgL_auxz00_1838);
					}
					if (BgL_testz00_1837)
						{	/* Eval/expdrecord.scm 88 */
							obj_t BgL_arg1950z00_849;

							obj_t BgL_arg1951z00_850;

							{	/* Eval/expdrecord.scm 88 */
								obj_t BgL_arg1952z00_851;

								obj_t BgL_arg1953z00_852;

								BgL_arg1952z00_851 = BGl_symbol2397z00zz__expander_recordz00;
								{	/* Eval/expdrecord.scm 88 */
									obj_t BgL_arg1954z00_853;

									{	/* Eval/expdrecord.scm 88 */
										obj_t BgL_pairz00_1467;

										BgL_pairz00_1467 = BgL_fieldsz00_844;
										BgL_arg1954z00_853 = CAR(CAR(BgL_pairz00_1467));
									}
									{	/* Eval/expdrecord.scm 88 */
										obj_t BgL_list1956z00_855;

										{	/* Eval/expdrecord.scm 88 */
											obj_t BgL_arg1957z00_856;

											{	/* Eval/expdrecord.scm 88 */
												obj_t BgL_arg1958z00_857;

												BgL_arg1958z00_857 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg1957z00_856 =
													MAKE_PAIR(BgL_arg1954z00_853, BgL_arg1958z00_857);
											}
											BgL_list1956z00_855 =
												MAKE_PAIR(BINT(BgL_iz00_845), BgL_arg1957z00_856);
										}
										BgL_arg1953z00_852 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_tmpz00_1706, BgL_list1956z00_855);
									}
								}
								BgL_arg1950z00_849 =
									MAKE_PAIR(BgL_arg1952z00_851, BgL_arg1953z00_852);
							}
							BgL_arg1951z00_850 =
								BGl_loopz00zz__expander_recordz00(BgL_constrz00_1707,
								BgL_tmpz00_1706, CDR(BgL_fieldsz00_844),
								(long) CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(BgL_iz00_845),
										BINT(((long) 1)))));
							return MAKE_PAIR(BgL_arg1950z00_849, BgL_arg1951z00_850);
						}
					else
						{
							long BgL_iz00_1862;

							obj_t BgL_fieldsz00_1860;

							BgL_fieldsz00_1860 = CDR(BgL_fieldsz00_844);
							BgL_iz00_1862 =
								(long) CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(BgL_iz00_845),
									BINT(((long) 1))));
							BgL_iz00_845 = BgL_iz00_1862;
							BgL_fieldsz00_844 = BgL_fieldsz00_1860;
							goto BGl_loopz00zz__expander_recordz00;
						}
				}
		}
	}



/* loop' */
	obj_t BGl_loopz72z72zz__expander_recordz00(obj_t BgL_valz00_1709,
		obj_t BgL_tmpz00_1708, obj_t BgL_fieldsz00_912, long BgL_iz00_913)
	{
		AN_OBJECT;
		{	/* Eval/expdrecord.scm 97 */
			if (NULLP(BgL_fieldsz00_912))
				{	/* Eval/expdrecord.scm 99 */
					return BNIL;
				}
			else
				{	/* Eval/expdrecord.scm 101 */
					obj_t BgL_fieldz00_916;

					BgL_fieldz00_916 = CAR(BgL_fieldsz00_912);
					if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(bgl_list_length
								(BgL_fieldz00_916)), BINT(((long) 2))))
						{	/* Eval/expdrecord.scm 104 */
							obj_t BgL_arg2016z00_918;

							obj_t BgL_arg2017z00_919;

							{	/* Eval/expdrecord.scm 104 */
								obj_t BgL_arg2018z00_920;

								obj_t BgL_arg2019z00_921;

								BgL_arg2018z00_920 = BGl_symbol2373z00zz__expander_recordz00;
								{	/* Eval/expdrecord.scm 104 */
									obj_t BgL_arg2021z00_922;

									obj_t BgL_arg2022z00_923;

									{	/* Eval/expdrecord.scm 104 */
										obj_t BgL_arg2027z00_927;

										obj_t BgL_arg2028z00_928;

										{	/* Eval/expdrecord.scm 104 */
											obj_t BgL_pairz00_1475;

											BgL_pairz00_1475 = BgL_fieldz00_916;
											BgL_arg2027z00_927 = CAR(CDR(BgL_pairz00_1475));
										}
										{	/* Eval/expdrecord.scm 104 */
											obj_t BgL_list2029z00_929;

											BgL_list2029z00_929 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg2028z00_928 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_tmpz00_1708, BgL_list2029z00_929);
										}
										BgL_arg2021z00_922 =
											MAKE_PAIR(BgL_arg2027z00_927, BgL_arg2028z00_928);
									}
									{	/* Eval/expdrecord.scm 105 */
										obj_t BgL_arg2030z00_930;

										obj_t BgL_arg2031z00_931;

										BgL_arg2030z00_930 =
											BGl_symbol2399z00zz__expander_recordz00;
										{	/* Eval/expdrecord.scm 105 */
											obj_t BgL_list2032z00_932;

											{	/* Eval/expdrecord.scm 105 */
												obj_t BgL_arg2033z00_933;

												BgL_arg2033z00_933 = MAKE_PAIR(BNIL, BNIL);
												BgL_list2032z00_932 =
													MAKE_PAIR(BINT(BgL_iz00_913), BgL_arg2033z00_933);
											}
											BgL_arg2031z00_931 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_tmpz00_1708, BgL_list2032z00_932);
										}
										BgL_arg2022z00_923 =
											MAKE_PAIR(BgL_arg2030z00_930, BgL_arg2031z00_931);
									}
									{	/* Eval/expdrecord.scm 104 */
										obj_t BgL_list2024z00_925;

										{	/* Eval/expdrecord.scm 104 */
											obj_t BgL_arg2025z00_926;

											BgL_arg2025z00_926 = MAKE_PAIR(BNIL, BNIL);
											BgL_list2024z00_925 =
												MAKE_PAIR(BgL_arg2022z00_923, BgL_arg2025z00_926);
										}
										BgL_arg2019z00_921 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg2021z00_922, BgL_list2024z00_925);
								}}
								BgL_arg2016z00_918 =
									MAKE_PAIR(BgL_arg2018z00_920, BgL_arg2019z00_921);
							}
							BgL_arg2017z00_919 =
								BGl_loopz72z72zz__expander_recordz00(BgL_valz00_1709,
								BgL_tmpz00_1708, CDR(BgL_fieldsz00_912),
								(long) CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(BgL_iz00_913),
										BINT(((long) 1)))));
							return MAKE_PAIR(BgL_arg2016z00_918, BgL_arg2017z00_919);
						}
					else
						{	/* Eval/expdrecord.scm 103 */
							if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(bgl_list_length
										(BgL_fieldz00_916)), BINT(((long) 3))))
								{	/* Eval/expdrecord.scm 108 */
									obj_t BgL_arg2038z00_937;

									obj_t BgL_arg2039z00_938;

									{	/* Eval/expdrecord.scm 108 */
										obj_t BgL_arg2040z00_939;

										obj_t BgL_arg2041z00_940;

										BgL_arg2040z00_939 =
											BGl_symbol2371z00zz__expander_recordz00;
										{	/* Eval/expdrecord.scm 109 */
											obj_t BgL_arg2042z00_941;

											obj_t BgL_arg2043z00_942;

											{	/* Eval/expdrecord.scm 109 */
												obj_t BgL_arg2047z00_946;

												obj_t BgL_arg2048z00_947;

												BgL_arg2047z00_946 =
													BGl_symbol2373z00zz__expander_recordz00;
												{	/* Eval/expdrecord.scm 109 */
													obj_t BgL_arg2051z00_948;

													obj_t BgL_arg2052z00_949;

													{	/* Eval/expdrecord.scm 109 */
														obj_t BgL_arg2056z00_953;

														obj_t BgL_arg2057z00_954;

														{	/* Eval/expdrecord.scm 109 */
															obj_t BgL_pairz00_1480;

															BgL_pairz00_1480 = BgL_fieldz00_916;
															BgL_arg2056z00_953 = CAR(CDR(BgL_pairz00_1480));
														}
														{	/* Eval/expdrecord.scm 109 */
															obj_t BgL_list2058z00_955;

															BgL_list2058z00_955 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg2057z00_954 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_tmpz00_1708, BgL_list2058z00_955);
														}
														BgL_arg2051z00_948 =
															MAKE_PAIR(BgL_arg2056z00_953, BgL_arg2057z00_954);
													}
													{	/* Eval/expdrecord.scm 110 */
														obj_t BgL_arg2059z00_956;

														obj_t BgL_arg2060z00_957;

														BgL_arg2059z00_956 =
															BGl_symbol2399z00zz__expander_recordz00;
														{	/* Eval/expdrecord.scm 110 */
															obj_t BgL_list2061z00_958;

															{	/* Eval/expdrecord.scm 110 */
																obj_t BgL_arg2062z00_959;

																BgL_arg2062z00_959 = MAKE_PAIR(BNIL, BNIL);
																BgL_list2061z00_958 =
																	MAKE_PAIR(BINT(BgL_iz00_913),
																	BgL_arg2062z00_959);
															}
															BgL_arg2060z00_957 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_tmpz00_1708, BgL_list2061z00_958);
														}
														BgL_arg2052z00_949 =
															MAKE_PAIR(BgL_arg2059z00_956, BgL_arg2060z00_957);
													}
													{	/* Eval/expdrecord.scm 109 */
														obj_t BgL_list2054z00_951;

														{	/* Eval/expdrecord.scm 109 */
															obj_t BgL_arg2055z00_952;

															BgL_arg2055z00_952 = MAKE_PAIR(BNIL, BNIL);
															BgL_list2054z00_951 =
																MAKE_PAIR(BgL_arg2052z00_949,
																BgL_arg2055z00_952);
														}
														BgL_arg2048z00_947 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg2051z00_948, BgL_list2054z00_951);
												}}
												BgL_arg2042z00_941 =
													MAKE_PAIR(BgL_arg2047z00_946, BgL_arg2048z00_947);
											}
											{	/* Eval/expdrecord.scm 111 */
												obj_t BgL_arg2063z00_960;

												obj_t BgL_arg2064z00_961;

												BgL_arg2063z00_960 =
													BGl_symbol2373z00zz__expander_recordz00;
												{	/* Eval/expdrecord.scm 111 */
													obj_t BgL_arg2065z00_962;

													obj_t BgL_arg2066z00_963;

													{	/* Eval/expdrecord.scm 111 */
														obj_t BgL_arg2070z00_967;

														obj_t BgL_arg2072z00_968;

														{	/* Eval/expdrecord.scm 111 */
															obj_t BgL_pairz00_1484;

															BgL_pairz00_1484 = BgL_fieldz00_916;
															BgL_arg2070z00_967 =
																CAR(CDR(CDR(BgL_pairz00_1484)));
														}
														{	/* Eval/expdrecord.scm 111 */
															obj_t BgL_list2073z00_969;

															{	/* Eval/expdrecord.scm 111 */
																obj_t BgL_arg2076z00_970;

																BgL_arg2076z00_970 = MAKE_PAIR(BNIL, BNIL);
																BgL_list2073z00_969 =
																	MAKE_PAIR(BgL_valz00_1709,
																	BgL_arg2076z00_970);
															}
															BgL_arg2072z00_968 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_tmpz00_1708, BgL_list2073z00_969);
														}
														BgL_arg2065z00_962 =
															MAKE_PAIR(BgL_arg2070z00_967, BgL_arg2072z00_968);
													}
													{	/* Eval/expdrecord.scm 112 */
														obj_t BgL_arg2077z00_971;

														obj_t BgL_arg2078z00_972;

														BgL_arg2077z00_971 =
															BGl_symbol2397z00zz__expander_recordz00;
														{	/* Eval/expdrecord.scm 112 */
															obj_t BgL_list2079z00_973;

															{	/* Eval/expdrecord.scm 112 */
																obj_t BgL_arg2080z00_974;

																{	/* Eval/expdrecord.scm 112 */
																	obj_t BgL_arg2081z00_975;

																	BgL_arg2081z00_975 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg2080z00_974 =
																		MAKE_PAIR(BgL_valz00_1709,
																		BgL_arg2081z00_975);
																}
																BgL_list2079z00_973 =
																	MAKE_PAIR(BINT(BgL_iz00_913),
																	BgL_arg2080z00_974);
															}
															BgL_arg2078z00_972 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_tmpz00_1708, BgL_list2079z00_973);
														}
														BgL_arg2066z00_963 =
															MAKE_PAIR(BgL_arg2077z00_971, BgL_arg2078z00_972);
													}
													{	/* Eval/expdrecord.scm 111 */
														obj_t BgL_list2068z00_965;

														{	/* Eval/expdrecord.scm 111 */
															obj_t BgL_arg2069z00_966;

															BgL_arg2069z00_966 = MAKE_PAIR(BNIL, BNIL);
															BgL_list2068z00_965 =
																MAKE_PAIR(BgL_arg2066z00_963,
																BgL_arg2069z00_966);
														}
														BgL_arg2064z00_961 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg2065z00_962, BgL_list2068z00_965);
												}}
												BgL_arg2043z00_942 =
													MAKE_PAIR(BgL_arg2063z00_960, BgL_arg2064z00_961);
											}
											{	/* Eval/expdrecord.scm 108 */
												obj_t BgL_list2045z00_944;

												{	/* Eval/expdrecord.scm 108 */
													obj_t BgL_arg2046z00_945;

													BgL_arg2046z00_945 = MAKE_PAIR(BNIL, BNIL);
													BgL_list2045z00_944 =
														MAKE_PAIR(BgL_arg2043z00_942, BgL_arg2046z00_945);
												}
												BgL_arg2041z00_940 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg2042z00_941, BgL_list2045z00_944);
										}}
										BgL_arg2038z00_937 =
											MAKE_PAIR(BgL_arg2040z00_939, BgL_arg2041z00_940);
									}
									BgL_arg2039z00_938 =
										BGl_loopz72z72zz__expander_recordz00(BgL_valz00_1709,
										BgL_tmpz00_1708, CDR(BgL_fieldsz00_912),
										(long)
										CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(BgL_iz00_913),
												BINT(((long) 1)))));
									return MAKE_PAIR(BgL_arg2038z00_937, BgL_arg2039z00_938);
								}
							else
								{	/* Eval/expdrecord.scm 107 */
									return
										BGl_expandzd2errorzd2zz__expander_recordz00(((bool_t) 0),
										BGl_string2401z00zz__expander_recordz00, BgL_fieldz00_916);
								}
						}
				}
		}
	}



/* expand-error */
	obj_t BGl_expandzd2errorzd2zz__expander_recordz00(bool_t BgL_pz00_7,
		obj_t BgL_mz00_8, obj_t BgL_xz00_9)
	{
		AN_OBJECT;
		{	/* Eval/expdrecord.scm 122 */
			{	/* Eval/expdrecord.scm 123 */
				obj_t BgL_locz00_989;

				if (EXTENDED_PAIRP(BgL_xz00_9))
					{	/* Eval/expdrecord.scm 123 */
						BgL_locz00_989 = CER(BgL_xz00_9);
					}
				else
					{	/* Eval/expdrecord.scm 123 */
						BgL_locz00_989 = BFALSE;
					}
				{	/* Eval/expdrecord.scm 124 */
					bool_t BgL_testz00_1947;

					if (PAIRP(BgL_locz00_989))
						{	/* Eval/expdrecord.scm 124 */
							bool_t BgL_testz00_1950;

							{	/* Eval/expdrecord.scm 124 */
								obj_t BgL_auxz00_1951;

								BgL_auxz00_1951 = CDR(BgL_locz00_989);
								BgL_testz00_1950 = PAIRP(BgL_auxz00_1951);
							}
							if (BgL_testz00_1950)
								{	/* Eval/expdrecord.scm 124 */
									obj_t BgL_auxz00_1954;

									BgL_auxz00_1954 = CDR(CDR(BgL_locz00_989));
									BgL_testz00_1947 = PAIRP(BgL_auxz00_1954);
								}
							else
								{	/* Eval/expdrecord.scm 124 */
									BgL_testz00_1947 = ((bool_t) 0);
								}
						}
					else
						{	/* Eval/expdrecord.scm 124 */
							BgL_testz00_1947 = ((bool_t) 0);
						}
					if (BgL_testz00_1947)
						{	/* Eval/expdrecord.scm 124 */
							return
								BGl_errorzf2locationzf2zz__errorz00(BBOOL(BgL_pz00_7),
								BgL_mz00_8, BgL_xz00_9, CAR(CDR(BgL_locz00_989)),
								CAR(CDR(CDR(BgL_locz00_989))));
						}
					else
						{	/* Eval/expdrecord.scm 124 */
							return
								BGl_errorz00zz__errorz00(BBOOL(BgL_pz00_7), BgL_mz00_8,
								BgL_xz00_9);
						}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__expander_recordz00()
	{
		AN_OBJECT;
		{	/* Eval/expdrecord.scm 18 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__expander_recordz00()
	{
		AN_OBJECT;
		{	/* Eval/expdrecord.scm 18 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__expander_recordz00()
	{
		AN_OBJECT;
		{	/* Eval/expdrecord.scm 18 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2402z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 36880833),
				BSTRING_TO_STRING(BGl_string2402z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 89651882),
				BSTRING_TO_STRING(BGl_string2402z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 333500458),
				BSTRING_TO_STRING(BGl_string2402z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string2402z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 318625392),
				BSTRING_TO_STRING(BGl_string2402z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2402z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2402z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2402z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__match_normaliza7eza7(((long)
					123685331),
				BSTRING_TO_STRING(BGl_string2402z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 271566986),
				BSTRING_TO_STRING(BGl_string2402z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					234579753),
				BSTRING_TO_STRING(BGl_string2402z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					170547433),
				BSTRING_TO_STRING(BGl_string2402z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					400650732),
				BSTRING_TO_STRING(BGl_string2402z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					459721289),
				BSTRING_TO_STRING(BGl_string2402z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 123701502),
				BSTRING_TO_STRING(BGl_string2402z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 504082187),
				BSTRING_TO_STRING(BGl_string2402z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 497320869),
				BSTRING_TO_STRING(BGl_string2402z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					485908420),
				BSTRING_TO_STRING(BGl_string2402z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 28131980),
				BSTRING_TO_STRING(BGl_string2402z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					159305184),
				BSTRING_TO_STRING(BGl_string2402z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 236383033),
				BSTRING_TO_STRING(BGl_string2402z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 466504979),
				BSTRING_TO_STRING(BGl_string2402z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					164543289),
				BSTRING_TO_STRING(BGl_string2402z00zz__expander_recordz00));
			return BGl_modulezd2initializa7ationz75zz__prognz00(((long) 361745055),
				BSTRING_TO_STRING(BGl_string2402z00zz__expander_recordz00));
		}
	}

#ifdef __cplusplus
}
#endif
