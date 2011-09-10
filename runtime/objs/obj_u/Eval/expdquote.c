/*===========================================================================*/
/*   (Eval/expdquote.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Eval/expdquote.scm -indent -o objs/obj_u/Eval/expdquote.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_templatez00zz__expander_quotez00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_list2345z00zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_list2350z00zz__expander_quotez00 = BUNSPEC;
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__quasiquotationz00zz__expander_quotez00(obj_t, obj_t, obj_t);
	static obj_t BGl_list2360z00zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_list2359z00zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_list2365z00zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__expander_quotez00();
	static obj_t BGl_templatezd2orzd2splicezd2listzd2zz__expander_quotez00(obj_t,
		obj_t);
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_quasiquotationz00zz__expander_quotez00(obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zz__expander_quotez00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__expander_quotez00();
	static obj_t BGl__expandzd2quotezd2zz__expander_quotez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__expander_quotez00(long, char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_symbol2341z00zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_symbol2343z00zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_symbol2346z00zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_symbol2348z00zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_symbol2351z00zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_symbol2353z00zz__expander_quotez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_expandzd2quotezd2zz__expander_quotez00(obj_t,
		obj_t);
	static obj_t BGl_symbol2355z00zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_symbol2357z00zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_symbol2361z00zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_symbol2363z00zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_vectorzd2templatezd2zz__expander_quotez00(obj_t, obj_t);
	static obj_t BGl_listzd2templatezd2zz__expander_quotez00(obj_t, obj_t);
	static obj_t BGl_templatezd2orzd2splicez00zz__expander_quotez00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__expander_quotez00();
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2366z00zz__expander_quotez00,
		BgL_bgl_string2366za700za7za7_2368za7, "Illegal `unquote-splicing' form",
		31);
	      DEFINE_STRING(BGl_string2367z00zz__expander_quotez00,
		BgL_bgl_string2367za700za7za7_2369za7, "__expander_quote", 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2quotezd2envz00zz__expander_quotez00,
		BgL_bgl__expandza7d2quoteza72370z00,
		BGl__expandzd2quotezd2zz__expander_quotez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_quasiquotationzd2envzd2zz__expander_quotez00,
		BgL_bgl__quasiquotationza72371za7,
		BGl__quasiquotationz00zz__expander_quotez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2337z00zz__expander_quotez00,
		BgL_bgl_string2337za700za7za7_2372za7, "quote", 5);
	      DEFINE_STRING(BGl_string2338z00zz__expander_quotez00,
		BgL_bgl_string2338za700za7za7_2373za7, "Illegal `quote' form", 20);
	      DEFINE_STRING(BGl_string2340z00zz__expander_quotez00,
		BgL_bgl_string2340za700za7za7_2374za7, "illegal `quasiquote' form", 25);
	      DEFINE_STRING(BGl_string2339z00zz__expander_quotez00,
		BgL_bgl_string2339za700za7za7_2375za7, "quasiquotation", 14);
	      DEFINE_STRING(BGl_string2342z00zz__expander_quotez00,
		BgL_bgl_string2342za700za7za7_2376za7, "unquote", 7);
	      DEFINE_STRING(BGl_string2344z00zz__expander_quotez00,
		BgL_bgl_string2344za700za7za7_2377za7, "list", 4);
	      DEFINE_STRING(BGl_string2347z00zz__expander_quotez00,
		BgL_bgl_string2347za700za7za7_2378za7, "Illegal `unquote' form", 22);
	      DEFINE_STRING(BGl_string2349z00zz__expander_quotez00,
		BgL_bgl_string2349za700za7za7_2379za7, "quasiquote", 10);
	      DEFINE_STRING(BGl_string2352z00zz__expander_quotez00,
		BgL_bgl_string2352za700za7za7_2380za7, "cons*", 5);
	      DEFINE_STRING(BGl_string2354z00zz__expander_quotez00,
		BgL_bgl_string2354za700za7za7_2381za7, "list->vector", 12);
	      DEFINE_STRING(BGl_string2356z00zz__expander_quotez00,
		BgL_bgl_string2356za700za7za7_2382za7, "let", 3);
	      DEFINE_STRING(BGl_string2358z00zz__expander_quotez00,
		BgL_bgl_string2358za700za7za7_2383za7, "vector-tag-set!", 15);
	      DEFINE_STRING(BGl_string2362z00zz__expander_quotez00,
		BgL_bgl_string2362za700za7za7_2384za7, "unquote-splicing", 16);
	      DEFINE_STRING(BGl_string2364z00zz__expander_quotez00,
		BgL_bgl_string2364za700za7za7_2385za7, "eappend", 7);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__expander_quotez00(long
		BgL_checksumz00_1723, char *BgL_fromz00_1724)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__expander_quotez00))
				{
					BGl_requirezd2initializa7ationz75zz__expander_quotez00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__expander_quotez00();
					BGl_importedzd2moduleszd2initz00zz__expander_quotez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__expander_quotez00()
	{
		AN_OBJECT;
		{	/* Eval/expdquote.scm 14 */
			BGl_symbol2341z00zz__expander_quotez00 =
				bstring_to_symbol(BGl_string2342z00zz__expander_quotez00);
			BGl_symbol2343z00zz__expander_quotez00 =
				bstring_to_symbol(BGl_string2344z00zz__expander_quotez00);
			BGl_symbol2346z00zz__expander_quotez00 =
				bstring_to_symbol(BGl_string2337z00zz__expander_quotez00);
			BGl_list2345z00zz__expander_quotez00 =
				MAKE_PAIR(BGl_symbol2346z00zz__expander_quotez00,
				MAKE_PAIR(BGl_symbol2341z00zz__expander_quotez00, BNIL));
			BGl_symbol2348z00zz__expander_quotez00 =
				bstring_to_symbol(BGl_string2349z00zz__expander_quotez00);
			BGl_list2350z00zz__expander_quotez00 =
				MAKE_PAIR(BGl_symbol2346z00zz__expander_quotez00,
				MAKE_PAIR(BGl_symbol2348z00zz__expander_quotez00, BNIL));
			BGl_symbol2351z00zz__expander_quotez00 =
				bstring_to_symbol(BGl_string2352z00zz__expander_quotez00);
			BGl_symbol2353z00zz__expander_quotez00 =
				bstring_to_symbol(BGl_string2354z00zz__expander_quotez00);
			BGl_symbol2355z00zz__expander_quotez00 =
				bstring_to_symbol(BGl_string2356z00zz__expander_quotez00);
			BGl_symbol2357z00zz__expander_quotez00 =
				bstring_to_symbol(BGl_string2358z00zz__expander_quotez00);
			BGl_list2360z00zz__expander_quotez00 =
				MAKE_PAIR(BGl_symbol2346z00zz__expander_quotez00,
				MAKE_PAIR(BNIL, BNIL));
			BGl_list2359z00zz__expander_quotez00 =
				MAKE_PAIR(BGl_list2360z00zz__expander_quotez00, BNIL);
			BGl_symbol2361z00zz__expander_quotez00 =
				bstring_to_symbol(BGl_string2362z00zz__expander_quotez00);
			BGl_symbol2363z00zz__expander_quotez00 =
				bstring_to_symbol(BGl_string2364z00zz__expander_quotez00);
			return (BGl_list2365z00zz__expander_quotez00 =
				MAKE_PAIR(BGl_symbol2346z00zz__expander_quotez00,
					MAKE_PAIR(BGl_symbol2361z00zz__expander_quotez00, BNIL)), BUNSPEC);
		}
	}



/* expand-quote */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2quotezd2zz__expander_quotez00(obj_t
		BgL_xz00_1, obj_t BgL_ez00_2)
	{
		AN_OBJECT;
		{	/* Eval/expdquote.scm 51 */
			if (PAIRP(BgL_xz00_1))
				{	/* Eval/expdquote.scm 52 */
					obj_t BgL_cdrzd21395zd2_788;

					BgL_cdrzd21395zd2_788 = CDR(BgL_xz00_1);
					if (PAIRP(BgL_cdrzd21395zd2_788))
						{	/* Eval/expdquote.scm 52 */
							if (NULLP(CDR(BgL_cdrzd21395zd2_788)))
								{	/* Eval/expdquote.scm 52 */
									return BgL_xz00_1;
								}
							else
								{	/* Eval/expdquote.scm 52 */
									return
										BGl_errorz00zz__errorz00
										(BGl_string2337z00zz__expander_quotez00,
										BGl_string2338z00zz__expander_quotez00, BgL_xz00_1);
								}
						}
					else
						{	/* Eval/expdquote.scm 52 */
							return
								BGl_errorz00zz__errorz00(BGl_string2337z00zz__expander_quotez00,
								BGl_string2338z00zz__expander_quotez00, BgL_xz00_1);
						}
				}
			else
				{	/* Eval/expdquote.scm 52 */
					return
						BGl_errorz00zz__errorz00(BGl_string2337z00zz__expander_quotez00,
						BGl_string2338z00zz__expander_quotez00, BgL_xz00_1);
				}
		}
	}



/* _expand-quote */
	obj_t BGl__expandzd2quotezd2zz__expander_quotez00(obj_t BgL_envz00_1717,
		obj_t BgL_xz00_1718, obj_t BgL_ez00_1719)
	{
		AN_OBJECT;
		{	/* Eval/expdquote.scm 51 */
			return
				BGl_expandzd2quotezd2zz__expander_quotez00(BgL_xz00_1718,
				BgL_ez00_1719);
		}
	}



/* quasiquotation */
	BGL_EXPORTED_DEF obj_t BGl_quasiquotationz00zz__expander_quotez00(obj_t
		BgL_dz00_3, obj_t BgL_expz00_4)
	{
		AN_OBJECT;
		{	/* Eval/expdquote.scm 79 */
			{	/* Eval/expdquote.scm 80 */
				bool_t BgL_testz00_1761;

				if (PAIRP(BgL_expz00_4))
					{	/* Eval/expdquote.scm 80 */
						bool_t BgL_testz00_1764;

						{	/* Eval/expdquote.scm 80 */
							obj_t BgL_auxz00_1765;

							BgL_auxz00_1765 = CDR(BgL_expz00_4);
							BgL_testz00_1764 = PAIRP(BgL_auxz00_1765);
						}
						if (BgL_testz00_1764)
							{	/* Eval/expdquote.scm 80 */
								BgL_testz00_1761 = NULLP(CDR(CDR(BgL_expz00_4)));
							}
						else
							{	/* Eval/expdquote.scm 80 */
								BgL_testz00_1761 = ((bool_t) 0);
							}
					}
				else
					{	/* Eval/expdquote.scm 80 */
						BgL_testz00_1761 = ((bool_t) 0);
					}
				if (BgL_testz00_1761)
					{	/* Eval/expdquote.scm 80 */
						return
							BGl_templatez00zz__expander_quotez00(BgL_dz00_3,
							CAR(CDR(BgL_expz00_4)));
					}
				else
					{	/* Eval/expdquote.scm 80 */
						return
							BGl_errorz00zz__errorz00(BGl_string2339z00zz__expander_quotez00,
							BGl_string2340z00zz__expander_quotez00, BgL_expz00_4);
					}
			}
		}
	}



/* _quasiquotation */
	obj_t BGl__quasiquotationz00zz__expander_quotez00(obj_t BgL_envz00_1720,
		obj_t BgL_dz00_1721, obj_t BgL_expz00_1722)
	{
		AN_OBJECT;
		{	/* Eval/expdquote.scm 79 */
			return
				BGl_quasiquotationz00zz__expander_quotez00(BgL_dz00_1721,
				BgL_expz00_1722);
		}
	}



/* template */
	obj_t BGl_templatez00zz__expander_quotez00(obj_t BgL_dz00_5,
		obj_t BgL_expz00_6)
	{
		AN_OBJECT;
		{	/* Eval/expdquote.scm 87 */
		BGl_templatez00zz__expander_quotez00:
			if (((long) CINT(BgL_dz00_5) == ((long) 0)))
				{	/* Eval/expdquote.scm 88 */
					return BgL_expz00_6;
				}
			else
				{	/* Eval/expdquote.scm 90 */
					bool_t BgL_testz00_1779;

					if (PAIRP(BgL_expz00_6))
						{	/* Eval/expdquote.scm 90 */
							BgL_testz00_1779 =
								(CAR(BgL_expz00_6) == BGl_symbol2341z00zz__expander_quotez00);
						}
					else
						{	/* Eval/expdquote.scm 90 */
							BgL_testz00_1779 = ((bool_t) 0);
						}
					if (BgL_testz00_1779)
						{	/* Eval/expdquote.scm 91 */
							bool_t BgL_testz00_1784;

							{	/* Eval/expdquote.scm 91 */
								bool_t BgL_testz00_1785;

								{	/* Eval/expdquote.scm 91 */
									obj_t BgL_auxz00_1786;

									BgL_auxz00_1786 = CDR(BgL_expz00_6);
									BgL_testz00_1785 = PAIRP(BgL_auxz00_1786);
								}
								if (BgL_testz00_1785)
									{	/* Eval/expdquote.scm 91 */
										BgL_testz00_1784 = NULLP(CDR(CDR(BgL_expz00_6)));
									}
								else
									{	/* Eval/expdquote.scm 91 */
										BgL_testz00_1784 = ((bool_t) 0);
									}
							}
							if (BgL_testz00_1784)
								{	/* Eval/expdquote.scm 91 */
									if ((BgL_dz00_5 == BINT(((long) 1))))
										{	/* Eval/expdquote.scm 93 */
											long BgL_arg1910z00_809;

											obj_t BgL_arg1911z00_810;

											BgL_arg1910z00_809 =
												((long) CINT(BgL_dz00_5) - ((long) 1));
											BgL_arg1911z00_810 = CAR(CDR(BgL_expz00_6));
											{
												obj_t BgL_expz00_1801;

												obj_t BgL_dz00_1799;

												BgL_dz00_1799 = BINT(BgL_arg1910z00_809);
												BgL_expz00_1801 = BgL_arg1911z00_810;
												BgL_expz00_6 = BgL_expz00_1801;
												BgL_dz00_5 = BgL_dz00_1799;
												goto BGl_templatez00zz__expander_quotez00;
											}
										}
									else
										{	/* Eval/expdquote.scm 94 */
											obj_t BgL_arg1912z00_811;

											obj_t BgL_arg1914z00_812;

											obj_t BgL_arg1915z00_813;

											BgL_arg1912z00_811 =
												BGl_symbol2343z00zz__expander_quotez00;
											BgL_arg1914z00_812 = BGl_list2345z00zz__expander_quotez00;
											{	/* Eval/expdquote.scm 94 */
												long BgL_arg1920z00_817;

												obj_t BgL_arg1921z00_818;

												BgL_arg1920z00_817 =
													((long) CINT(BgL_dz00_5) - ((long) 1));
												BgL_arg1921z00_818 = CAR(CDR(BgL_expz00_6));
												BgL_arg1915z00_813 =
													BGl_templatez00zz__expander_quotez00(BINT
													(BgL_arg1920z00_817), BgL_arg1921z00_818);
											}
											{	/* Eval/expdquote.scm 94 */
												obj_t BgL_list1916z00_814;

												{	/* Eval/expdquote.scm 94 */
													obj_t BgL_arg1918z00_815;

													{	/* Eval/expdquote.scm 94 */
														obj_t BgL_arg1919z00_816;

														BgL_arg1919z00_816 =
															MAKE_PAIR(BgL_arg1915z00_813, BNIL);
														BgL_arg1918z00_815 =
															MAKE_PAIR(BgL_arg1914z00_812, BgL_arg1919z00_816);
													}
													BgL_list1916z00_814 =
														MAKE_PAIR(BgL_arg1912z00_811, BgL_arg1918z00_815);
												}
												return BgL_list1916z00_814;
											}
										}
								}
							else
								{	/* Eval/expdquote.scm 91 */
									return
										BGl_errorz00zz__errorz00
										(BGl_string2342z00zz__expander_quotez00,
										BGl_string2347z00zz__expander_quotez00, BgL_expz00_6);
								}
						}
					else
						{	/* Eval/expdquote.scm 90 */
							if (VECTORP(BgL_expz00_6))
								{	/* Eval/expdquote.scm 96 */
									return
										BGl_vectorzd2templatezd2zz__expander_quotez00(BgL_dz00_5,
										BgL_expz00_6);
								}
							else
								{	/* Eval/expdquote.scm 96 */
									if (PAIRP(BgL_expz00_6))
										{	/* Eval/expdquote.scm 98 */
											return
												BGl_listzd2templatezd2zz__expander_quotez00(BgL_dz00_5,
												BgL_expz00_6);
										}
									else
										{	/* Eval/expdquote.scm 98 */
											if (NULLP(BgL_expz00_6))
												{	/* Eval/expdquote.scm 101 */
													obj_t BgL_list1928z00_825;

													{	/* Eval/expdquote.scm 101 */
														obj_t BgL_arg1929z00_826;

														obj_t BgL_arg1930z00_827;

														BgL_arg1929z00_826 =
															BGl_symbol2346z00zz__expander_quotez00;
														BgL_arg1930z00_827 = MAKE_PAIR(BgL_expz00_6, BNIL);
														BgL_list1928z00_825 =
															MAKE_PAIR(BgL_arg1929z00_826, BgL_arg1930z00_827);
													}
													return BgL_list1928z00_825;
												}
											else
												{	/* Eval/expdquote.scm 102 */
													bool_t BgL_testz00_1822;

													if (CHARP(BgL_expz00_6))
														{	/* Eval/expdquote.scm 102 */
															BgL_testz00_1822 = ((bool_t) 1);
														}
													else
														{	/* Eval/expdquote.scm 102 */
															if (INTEGERP(BgL_expz00_6))
																{	/* Eval/expdquote.scm 102 */
																	BgL_testz00_1822 = ((bool_t) 1);
																}
															else
																{	/* Eval/expdquote.scm 102 */
																	if (STRINGP(BgL_expz00_6))
																		{	/* Eval/expdquote.scm 102 */
																			BgL_testz00_1822 = ((bool_t) 1);
																		}
																	else
																		{	/* Eval/expdquote.scm 102 */
																			BgL_testz00_1822 = CNSTP(BgL_expz00_6);
																		}
																}
														}
													if (BgL_testz00_1822)
														{	/* Eval/expdquote.scm 102 */
															return BgL_expz00_6;
														}
													else
														{	/* Eval/expdquote.scm 105 */
															obj_t BgL_list1932z00_829;

															{	/* Eval/expdquote.scm 105 */
																obj_t BgL_arg1935z00_830;

																obj_t BgL_arg1937z00_831;

																BgL_arg1935z00_830 =
																	BGl_symbol2346z00zz__expander_quotez00;
																BgL_arg1937z00_831 =
																	MAKE_PAIR(BgL_expz00_6, BNIL);
																BgL_list1932z00_829 =
																	MAKE_PAIR(BgL_arg1935z00_830,
																	BgL_arg1937z00_831);
															}
															return BgL_list1932z00_829;
														}
												}
										}
								}
						}
				}
		}
	}



/* list-template */
	obj_t BGl_listzd2templatezd2zz__expander_quotez00(obj_t BgL_dz00_7,
		obj_t BgL_expz00_8)
	{
		AN_OBJECT;
		{	/* Eval/expdquote.scm 110 */
			{	/* Eval/expdquote.scm 111 */
				bool_t BgL_testz00_1832;

				{	/* Eval/expdquote.scm 111 */
					bool_t BgL_testz00_1833;

					{	/* Eval/expdquote.scm 111 */
						bool_t BgL_testz00_1834;

						{	/* Eval/expdquote.scm 111 */
							obj_t BgL_auxz00_1835;

							BgL_auxz00_1835 = CDR(BgL_expz00_8);
							BgL_testz00_1834 = PAIRP(BgL_auxz00_1835);
						}
						if (BgL_testz00_1834)
							{	/* Eval/expdquote.scm 111 */
								BgL_testz00_1833 = NULLP(CDR(CDR(BgL_expz00_8)));
							}
						else
							{	/* Eval/expdquote.scm 111 */
								BgL_testz00_1833 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_1833)
						{	/* Eval/expdquote.scm 111 */
							if ((CAR(BgL_expz00_8) == BGl_symbol2346z00zz__expander_quotez00))
								{	/* Eval/expdquote.scm 112 */
									bool_t BgL_testz00_1844;

									{	/* Eval/expdquote.scm 112 */
										obj_t BgL_auxz00_1845;

										BgL_auxz00_1845 = CAR(CDR(BgL_expz00_8));
										BgL_testz00_1844 = PAIRP(BgL_auxz00_1845);
									}
									if (BgL_testz00_1844)
										{	/* Eval/expdquote.scm 112 */
											BgL_testz00_1832 =
												(CAR(CAR(CDR(BgL_expz00_8))) ==
												BGl_symbol2348z00zz__expander_quotez00);
										}
									else
										{	/* Eval/expdquote.scm 112 */
											BgL_testz00_1832 = ((bool_t) 0);
										}
								}
							else
								{	/* Eval/expdquote.scm 112 */
									BgL_testz00_1832 = ((bool_t) 0);
								}
						}
					else
						{	/* Eval/expdquote.scm 111 */
							BgL_testz00_1832 = ((bool_t) 0);
						}
				}
				if (BgL_testz00_1832)
					{	/* Eval/expdquote.scm 111 */
						return
							BGl_quasiquotationz00zz__expander_quotez00(BgL_dz00_7,
							CAR(CDR(BgL_expz00_8)));
					}
				else
					{	/* Eval/expdquote.scm 111 */
						if ((CAR(BgL_expz00_8) == BGl_symbol2348z00zz__expander_quotez00))
							{	/* Eval/expdquote.scm 115 */
								if ((BgL_dz00_7 == BINT(((long) 0))))
									{	/* Eval/expdquote.scm 116 */
										return
											BGl_quasiquotationz00zz__expander_quotez00
											(BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_dz00_7,
												BINT(((long) 1))), BgL_expz00_8);
									}
								else
									{	/* Eval/expdquote.scm 118 */
										obj_t BgL_arg1949z00_843;

										obj_t BgL_arg1950z00_844;

										obj_t BgL_arg1951z00_845;

										BgL_arg1949z00_843 = BGl_symbol2343z00zz__expander_quotez00;
										BgL_arg1950z00_844 = BGl_list2350z00zz__expander_quotez00;
										BgL_arg1951z00_845 =
											BGl_quasiquotationz00zz__expander_quotez00
											(BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_dz00_7,
												BINT(((long) 1))), BgL_expz00_8);
										{	/* Eval/expdquote.scm 118 */
											obj_t BgL_list1952z00_846;

											{	/* Eval/expdquote.scm 118 */
												obj_t BgL_arg1953z00_847;

												{	/* Eval/expdquote.scm 118 */
													obj_t BgL_arg1954z00_848;

													BgL_arg1954z00_848 =
														MAKE_PAIR(BgL_arg1951z00_845, BNIL);
													BgL_arg1953z00_847 =
														MAKE_PAIR(BgL_arg1950z00_844, BgL_arg1954z00_848);
												}
												BgL_list1952z00_846 =
													MAKE_PAIR(BgL_arg1949z00_843, BgL_arg1953z00_847);
											}
											return BgL_list1952z00_846;
										}
									}
							}
						else
							{	/* Eval/expdquote.scm 115 */
								if (EXTENDED_PAIRP(BgL_expz00_8))
									{	/* Eval/expdquote.scm 121 */
										obj_t BgL_erz00_851;

										BgL_erz00_851 = CER(BgL_expz00_8);
										{	/* Eval/expdquote.scm 122 */
											obj_t BgL_arg1957z00_852;

											obj_t BgL_arg1958z00_853;

											BgL_arg1957z00_852 =
												BGl_symbol2351z00zz__expander_quotez00;
											BgL_arg1958z00_853 =
												BGl_templatezd2orzd2splicezd2listzd2zz__expander_quotez00
												(BgL_dz00_7, BgL_expz00_8);
											{	/* Eval/expdquote.scm 122 */
												obj_t BgL_res2320z00_1482;

												BgL_res2320z00_1482 =
													MAKE_EXTENDED_PAIR(BgL_arg1957z00_852,
													BgL_arg1958z00_853, BgL_erz00_851);
												return BgL_res2320z00_1482;
											}
										}
									}
								else
									{	/* Eval/expdquote.scm 120 */
										return
											MAKE_PAIR(BGl_symbol2351z00zz__expander_quotez00,
											BGl_templatezd2orzd2splicezd2listzd2zz__expander_quotez00
											(BgL_dz00_7, BgL_expz00_8));
									}
							}
					}
			}
		}
	}



/* vector-template */
	obj_t BGl_vectorzd2templatezd2zz__expander_quotez00(obj_t BgL_dz00_9,
		obj_t BgL_expz00_10)
	{
		AN_OBJECT;
		{	/* Eval/expdquote.scm 128 */
			{	/* Eval/expdquote.scm 129 */
				int BgL_tagzd2valzd2_871;

				obj_t BgL_reszd2valzd2_872;

				BgL_tagzd2valzd2_871 = VECTOR_TAG(BgL_expz00_10);
				{	/* Eval/expdquote.scm 130 */
					obj_t BgL_arg1994z00_892;

					obj_t BgL_arg1995z00_893;

					BgL_arg1994z00_892 = BGl_symbol2353z00zz__expander_quotez00;
					BgL_arg1995z00_893 =
						MAKE_PAIR(BGl_symbol2351z00zz__expander_quotez00,
						BGl_templatezd2orzd2splicezd2listzd2zz__expander_quotez00
						(BgL_dz00_9,
							BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(BgL_expz00_10)));
					{	/* Eval/expdquote.scm 130 */
						obj_t BgL_list1996z00_894;

						{	/* Eval/expdquote.scm 130 */
							obj_t BgL_arg1998z00_895;

							BgL_arg1998z00_895 = MAKE_PAIR(BgL_arg1995z00_893, BNIL);
							BgL_list1996z00_894 =
								MAKE_PAIR(BgL_arg1994z00_892, BgL_arg1998z00_895);
						}
						BgL_reszd2valzd2_872 = BgL_list1996z00_894;
				}}
				if (((long) (BgL_tagzd2valzd2_871) == ((long) 0)))
					{	/* Eval/expdquote.scm 134 */
						return BgL_reszd2valzd2_872;
					}
				else
					{	/* Eval/expdquote.scm 136 */
						obj_t BgL_reszd2varzd2_874;

						{	/* Eval/expdquote.scm 136 */

							{	/* Eval/expdquote.scm 136 */

								BgL_reszd2varzd2_874 =
									BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
							}
						}
						{	/* Eval/expdquote.scm 137 */
							obj_t BgL_arg1977z00_875;

							obj_t BgL_arg1979z00_876;

							BgL_arg1977z00_875 = BGl_symbol2355z00zz__expander_quotez00;
							{	/* Eval/expdquote.scm 137 */
								obj_t BgL_arg1980z00_877;

								obj_t BgL_arg1981z00_878;

								{	/* Eval/expdquote.scm 137 */
									obj_t BgL_arg1986z00_883;

									{	/* Eval/expdquote.scm 137 */
										obj_t BgL_arg1988z00_885;

										{	/* Eval/expdquote.scm 137 */
											obj_t BgL_list1989z00_886;

											BgL_list1989z00_886 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg1988z00_885 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_reszd2valzd2_872, BgL_list1989z00_886);
										}
										BgL_arg1986z00_883 =
											MAKE_PAIR(BgL_reszd2varzd2_874, BgL_arg1988z00_885);
									}
									BgL_arg1980z00_877 = MAKE_PAIR(BgL_arg1986z00_883, BNIL);
								}
								{	/* Eval/expdquote.scm 138 */
									obj_t BgL_arg1990z00_887;

									obj_t BgL_arg1991z00_888;

									BgL_arg1990z00_887 = BGl_symbol2357z00zz__expander_quotez00;
									{	/* Eval/expdquote.scm 138 */
										obj_t BgL_list1992z00_889;

										{	/* Eval/expdquote.scm 138 */
											obj_t BgL_arg1993z00_890;

											BgL_arg1993z00_890 = MAKE_PAIR(BNIL, BNIL);
											BgL_list1992z00_889 =
												MAKE_PAIR(BINT(BgL_tagzd2valzd2_871),
												BgL_arg1993z00_890);
										}
										BgL_arg1991z00_888 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_reszd2varzd2_874, BgL_list1992z00_889);
									}
									BgL_arg1981z00_878 =
										MAKE_PAIR(BgL_arg1990z00_887, BgL_arg1991z00_888);
								}
								{	/* Eval/expdquote.scm 137 */
									obj_t BgL_list1983z00_880;

									{	/* Eval/expdquote.scm 137 */
										obj_t BgL_arg1984z00_881;

										{	/* Eval/expdquote.scm 137 */
											obj_t BgL_arg1985z00_882;

											BgL_arg1985z00_882 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg1984z00_881 =
												MAKE_PAIR(BgL_reszd2varzd2_874, BgL_arg1985z00_882);
										}
										BgL_list1983z00_880 =
											MAKE_PAIR(BgL_arg1981z00_878, BgL_arg1984z00_881);
									}
									BgL_arg1979z00_876 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg1980z00_877, BgL_list1983z00_880);
								}
							}
							return MAKE_PAIR(BgL_arg1977z00_875, BgL_arg1979z00_876);
						}
					}
			}
		}
	}



/* template-or-splice-list */
	obj_t BGl_templatezd2orzd2splicezd2listzd2zz__expander_quotez00(obj_t
		BgL_dz00_11, obj_t BgL_expz00_12)
	{
		AN_OBJECT;
		{	/* Eval/expdquote.scm 144 */
			if (NULLP(BgL_expz00_12))
				{	/* Eval/expdquote.scm 145 */
					return BGl_list2359z00zz__expander_quotez00;
				}
			else
				{	/* Eval/expdquote.scm 145 */
					if (PAIRP(BgL_expz00_12))
						{	/* Eval/expdquote.scm 146 */
							if (
								(CAR(BgL_expz00_12) == BGl_symbol2341z00zz__expander_quotez00))
								{	/* Eval/expdquote.scm 148 */
									obj_t BgL_arg2005z00_902;

									BgL_arg2005z00_902 =
										BGl_templatez00zz__expander_quotez00(BgL_dz00_11,
										BgL_expz00_12);
									{	/* Eval/expdquote.scm 148 */
										obj_t BgL_list2006z00_903;

										BgL_list2006z00_903 = MAKE_PAIR(BgL_arg2005z00_902, BNIL);
										return BgL_list2006z00_903;
									}
								}
							else
								{	/* Eval/expdquote.scm 149 */
									bool_t BgL_testz00_1911;

									{	/* Eval/expdquote.scm 149 */
										bool_t BgL_testz00_1912;

										{	/* Eval/expdquote.scm 149 */
											obj_t BgL_auxz00_1913;

											BgL_auxz00_1913 = CAR(BgL_expz00_12);
											BgL_testz00_1912 = PAIRP(BgL_auxz00_1913);
										}
										if (BgL_testz00_1912)
											{	/* Eval/expdquote.scm 149 */
												BgL_testz00_1911 =
													(CAR(CAR(BgL_expz00_12)) ==
													BGl_symbol2361z00zz__expander_quotez00);
											}
										else
											{	/* Eval/expdquote.scm 149 */
												BgL_testz00_1911 = ((bool_t) 0);
											}
									}
									if (BgL_testz00_1911)
										{	/* Eval/expdquote.scm 151 */
											obj_t BgL_arg2008z00_905;

											{	/* Eval/expdquote.scm 151 */
												obj_t BgL_arg2010z00_907;

												obj_t BgL_arg2011z00_908;

												obj_t BgL_arg2012z00_909;

												BgL_arg2010z00_907 =
													BGl_symbol2363z00zz__expander_quotez00;
												BgL_arg2011z00_908 =
													BGl_templatezd2orzd2splicez00zz__expander_quotez00
													(BgL_dz00_11, CAR(BgL_expz00_12));
												BgL_arg2012z00_909 =
													MAKE_PAIR(BGl_symbol2351z00zz__expander_quotez00,
													BGl_templatezd2orzd2splicezd2listzd2zz__expander_quotez00
													(BgL_dz00_11, CDR(BgL_expz00_12)));
												{	/* Eval/expdquote.scm 151 */
													obj_t BgL_list2013z00_910;

													{	/* Eval/expdquote.scm 151 */
														obj_t BgL_arg2015z00_911;

														{	/* Eval/expdquote.scm 151 */
															obj_t BgL_arg2016z00_912;

															BgL_arg2016z00_912 =
																MAKE_PAIR(BgL_arg2012z00_909, BNIL);
															BgL_arg2015z00_911 =
																MAKE_PAIR(BgL_arg2011z00_908,
																BgL_arg2016z00_912);
														}
														BgL_list2013z00_910 =
															MAKE_PAIR(BgL_arg2010z00_907, BgL_arg2015z00_911);
													}
													BgL_arg2008z00_905 = BgL_list2013z00_910;
												}
											}
											{	/* Eval/expdquote.scm 151 */
												obj_t BgL_list2009z00_906;

												BgL_list2009z00_906 =
													MAKE_PAIR(BgL_arg2008z00_905, BNIL);
												return BgL_list2009z00_906;
											}
										}
									else
										{	/* Eval/expdquote.scm 149 */
											return
												MAKE_PAIR
												(BGl_templatezd2orzd2splicez00zz__expander_quotez00
												(BgL_dz00_11, CAR(BgL_expz00_12)),
												BGl_templatezd2orzd2splicezd2listzd2zz__expander_quotez00
												(BgL_dz00_11, CDR(BgL_expz00_12)));
										}
								}
						}
					else
						{	/* Eval/expdquote.scm 157 */
							obj_t BgL_arg2034z00_928;

							BgL_arg2034z00_928 =
								BGl_templatezd2orzd2splicez00zz__expander_quotez00(BgL_dz00_11,
								BgL_expz00_12);
							{	/* Eval/expdquote.scm 157 */
								obj_t BgL_list2035z00_929;

								BgL_list2035z00_929 = MAKE_PAIR(BgL_arg2034z00_928, BNIL);
								return BgL_list2035z00_929;
							}
						}
				}
		}
	}



/* template-or-splice */
	obj_t BGl_templatezd2orzd2splicez00zz__expander_quotez00(obj_t BgL_dz00_13,
		obj_t BgL_expz00_14)
	{
		AN_OBJECT;
		{	/* Eval/expdquote.scm 162 */
			{	/* Eval/expdquote.scm 163 */
				bool_t BgL_testz00_1935;

				if (PAIRP(BgL_expz00_14))
					{	/* Eval/expdquote.scm 163 */
						BgL_testz00_1935 =
							(CAR(BgL_expz00_14) == BGl_symbol2361z00zz__expander_quotez00);
					}
				else
					{	/* Eval/expdquote.scm 163 */
						BgL_testz00_1935 = ((bool_t) 0);
					}
				if (BgL_testz00_1935)
					{	/* Eval/expdquote.scm 164 */
						bool_t BgL_testz00_1940;

						{	/* Eval/expdquote.scm 164 */
							bool_t BgL_testz00_1941;

							{	/* Eval/expdquote.scm 164 */
								obj_t BgL_auxz00_1942;

								BgL_auxz00_1942 = CDR(BgL_expz00_14);
								BgL_testz00_1941 = PAIRP(BgL_auxz00_1942);
							}
							if (BgL_testz00_1941)
								{	/* Eval/expdquote.scm 164 */
									BgL_testz00_1940 = NULLP(CDR(CDR(BgL_expz00_14)));
								}
							else
								{	/* Eval/expdquote.scm 164 */
									BgL_testz00_1940 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_1940)
							{	/* Eval/expdquote.scm 164 */
								if ((BgL_dz00_13 == BINT(((long) 1))))
									{	/* Eval/expdquote.scm 166 */
										long BgL_arg2039z00_933;

										obj_t BgL_arg2040z00_934;

										BgL_arg2039z00_933 =
											((long) CINT(BgL_dz00_13) - ((long) 1));
										BgL_arg2040z00_934 = CAR(CDR(BgL_expz00_14));
										return
											BGl_templatez00zz__expander_quotez00(BINT
											(BgL_arg2039z00_933), BgL_arg2040z00_934);
									}
								else
									{	/* Eval/expdquote.scm 167 */
										obj_t BgL_arg2041z00_935;

										obj_t BgL_arg2042z00_936;

										BgL_arg2041z00_935 = BGl_symbol2343z00zz__expander_quotez00;
										{	/* Eval/expdquote.scm 167 */
											obj_t BgL_arg2045z00_939;

											obj_t BgL_arg2046z00_940;

											obj_t BgL_arg2047z00_941;

											BgL_arg2045z00_939 =
												BGl_symbol2343z00zz__expander_quotez00;
											BgL_arg2046z00_940 = BGl_list2365z00zz__expander_quotez00;
											{	/* Eval/expdquote.scm 168 */
												long BgL_arg2053z00_945;

												obj_t BgL_arg2054z00_946;

												BgL_arg2053z00_945 =
													((long) CINT(BgL_dz00_13) - ((long) 1));
												BgL_arg2054z00_946 = CAR(CDR(BgL_expz00_14));
												BgL_arg2047z00_941 =
													BGl_templatez00zz__expander_quotez00(BINT
													(BgL_arg2053z00_945), BgL_arg2054z00_946);
											}
											{	/* Eval/expdquote.scm 167 */
												obj_t BgL_list2048z00_942;

												{	/* Eval/expdquote.scm 167 */
													obj_t BgL_arg2051z00_943;

													{	/* Eval/expdquote.scm 167 */
														obj_t BgL_arg2052z00_944;

														BgL_arg2052z00_944 =
															MAKE_PAIR(BgL_arg2047z00_941, BNIL);
														BgL_arg2051z00_943 =
															MAKE_PAIR(BgL_arg2046z00_940, BgL_arg2052z00_944);
													}
													BgL_list2048z00_942 =
														MAKE_PAIR(BgL_arg2045z00_939, BgL_arg2051z00_943);
												}
												BgL_arg2042z00_936 = BgL_list2048z00_942;
										}}
										{	/* Eval/expdquote.scm 167 */
											obj_t BgL_list2043z00_937;

											{	/* Eval/expdquote.scm 167 */
												obj_t BgL_arg2044z00_938;

												BgL_arg2044z00_938 =
													MAKE_PAIR(BgL_arg2042z00_936, BNIL);
												BgL_list2043z00_937 =
													MAKE_PAIR(BgL_arg2041z00_935, BgL_arg2044z00_938);
											}
											return BgL_list2043z00_937;
										}
									}
							}
						else
							{	/* Eval/expdquote.scm 164 */
								return
									BGl_errorz00zz__errorz00
									(BGl_string2362z00zz__expander_quotez00,
									BGl_string2366z00zz__expander_quotez00, BgL_expz00_14);
							}
					}
				else
					{	/* Eval/expdquote.scm 163 */
						return
							BGl_templatez00zz__expander_quotez00(BgL_dz00_13, BgL_expz00_14);
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__expander_quotez00()
	{
		AN_OBJECT;
		{	/* Eval/expdquote.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__expander_quotez00()
	{
		AN_OBJECT;
		{	/* Eval/expdquote.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__expander_quotez00()
	{
		AN_OBJECT;
		{	/* Eval/expdquote.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2367z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 36880833),
				BSTRING_TO_STRING(BGl_string2367z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 89651882),
				BSTRING_TO_STRING(BGl_string2367z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 333500458),
				BSTRING_TO_STRING(BGl_string2367z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string2367z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 318625392),
				BSTRING_TO_STRING(BGl_string2367z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2367z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2367z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2367z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 271566986),
				BSTRING_TO_STRING(BGl_string2367z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					234579753),
				BSTRING_TO_STRING(BGl_string2367z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					170547433),
				BSTRING_TO_STRING(BGl_string2367z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					400650732),
				BSTRING_TO_STRING(BGl_string2367z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					459721289),
				BSTRING_TO_STRING(BGl_string2367z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 123701502),
				BSTRING_TO_STRING(BGl_string2367z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 504082187),
				BSTRING_TO_STRING(BGl_string2367z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 497320869),
				BSTRING_TO_STRING(BGl_string2367z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					485908420),
				BSTRING_TO_STRING(BGl_string2367z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 28131980),
				BSTRING_TO_STRING(BGl_string2367z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					159305184),
				BSTRING_TO_STRING(BGl_string2367z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 236383033),
				BSTRING_TO_STRING(BGl_string2367z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 466504979),
				BSTRING_TO_STRING(BGl_string2367z00zz__expander_quotez00));
			return BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					164543289),
				BSTRING_TO_STRING(BGl_string2367z00zz__expander_quotez00));
		}
	}

#ifdef __cplusplus
}
#endif
