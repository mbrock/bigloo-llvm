/*===========================================================================*/
/*   (Rgc/rgcposix.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Rgc/rgcposix.scm -indent -o objs/obj_u/Rgc/rgcposix.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_parsezd2posixzd2piecez00zz__rgc_posixz00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_list2366z00zz__rgc_posixz00 = BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zz__rgc_posixz00 = BUNSPEC;
	static obj_t BGl_parsezd2posixzd2bracketz00zz__rgc_posixz00(obj_t, long);
	static obj_t BGl_genericzd2initzd2zz__rgc_posixz00();
	static obj_t BGl_parsezd2posixzd2expz00zz__rgc_posixz00(obj_t, long);
	static obj_t BGl_makezd2rgczd2repeatz00zz__rgc_posixz00(obj_t, obj_t, obj_t);
	static obj_t BGl_makezd2rgczd2orz00zz__rgc_posixz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__rgc_posixz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__rgc_posixz00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__rgc_posixz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_makezd2rgczd2sequencez00zz__rgc_posixz00(obj_t);
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_symbol2343z00zz__rgc_posixz00 = BUNSPEC;
	static obj_t BGl_symbol2345z00zz__rgc_posixz00 = BUNSPEC;
	static obj_t BGl_symbol2347z00zz__rgc_posixz00 = BUNSPEC;
	static obj_t BGl_symbol2349z00zz__rgc_posixz00 = BUNSPEC;
	static obj_t BGl_symbol2351z00zz__rgc_posixz00 = BUNSPEC;
	static obj_t BGl_symbol2354z00zz__rgc_posixz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zz__rgc_posixz00();
	static obj_t BGl_symbol2356z00zz__rgc_posixz00 = BUNSPEC;
	static obj_t BGl_symbol2360z00zz__rgc_posixz00 = BUNSPEC;
	static obj_t BGl_symbol2362z00zz__rgc_posixz00 = BUNSPEC;
	static obj_t BGl_symbol2368z00zz__rgc_posixz00 = BUNSPEC;
	static obj_t BGl_symbol2370z00zz__rgc_posixz00 = BUNSPEC;
	static obj_t BGl__posixzd2ze3rgcz31zz__rgc_posixz00(obj_t, obj_t);
	extern obj_t bgl_reverse(obj_t);
	static obj_t BGl_parsezd2posixzd2branchz00zz__rgc_posixz00(obj_t, long);
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_parsezd2posixzd2bracesz00zz__rgc_posixz00(obj_t, obj_t);
	extern obj_t BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_za2errzd2stringza2zd2zz__rgc_posixz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_posixzd2ze3rgcz31zz__rgc_posixz00(obj_t);
	static obj_t BGl_parsezd2posixzd2atomz00zz__rgc_posixz00(obj_t, obj_t);
	extern obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__rgc_posixz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2365z00zz__rgc_posixz00,
		BgL_bgl_string2365za700za7za7_2376za7,
		"RGC:expression may not terminate with a backslash", 49);
	      DEFINE_STRING(BGl_string2367z00zz__rgc_posixz00,
		BgL_bgl_string2367za700za7za7_2377za7,
		"double-bracket regexps not supported.", 37);
	      DEFINE_STRING(BGl_string2369z00zz__rgc_posixz00,
		BgL_bgl_string2369za700za7za7_2378za7, "out", 3);
	      DEFINE_STRING(BGl_string2371z00zz__rgc_posixz00,
		BgL_bgl_string2371za700za7za7_2379za7, "in", 2);
	      DEFINE_STRING(BGl_string2372z00zz__rgc_posixz00,
		BgL_bgl_string2372za700za7za7_2380za7, "Illegal - in [...] regexp", 25);
	      DEFINE_STRING(BGl_string2373z00zz__rgc_posixz00,
		BgL_bgl_string2373za700za7za7_2381za7,
		"Missing close right bracket in regexp", 37);
	      DEFINE_STRING(BGl_string2374z00zz__rgc_posixz00,
		BgL_bgl_string2374za700za7za7_2382za7, "Missing close brace in regexp", 29);
	      DEFINE_STRING(BGl_string2375z00zz__rgc_posixz00,
		BgL_bgl_string2375za700za7za7_2383za7, "__rgc_posix", 11);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_posixzd2ze3rgczd2envze3zz__rgc_posixz00,
		BgL_bgl__posixza7d2za7e3rgcza72384za7,
		BGl__posixzd2ze3rgcz31zz__rgc_posixz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2340z00zz__rgc_posixz00,
		BgL_bgl_string2340za700za7za7_2385za7,
		"/tmp/bigloo/runtime/Rgc/rgcposix.scm", 36);
	      DEFINE_STRING(BGl_string2339z00zz__rgc_posixz00,
		BgL_bgl_string2339za700za7za7_2386za7,
		"RGC:Illegal Posix regexp -- terminated early", 44);
	      DEFINE_STRING(BGl_string2341z00zz__rgc_posixz00,
		BgL_bgl_string2341za700za7za7_2387za7, "_posix->rgc", 11);
	      DEFINE_STRING(BGl_string2342z00zz__rgc_posixz00,
		BgL_bgl_string2342za700za7za7_2388za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2344z00zz__rgc_posixz00,
		BgL_bgl_string2344za700za7za7_2389za7, "*", 1);
	      DEFINE_STRING(BGl_string2346z00zz__rgc_posixz00,
		BgL_bgl_string2346za700za7za7_2390za7, "+", 1);
	      DEFINE_STRING(BGl_string2348z00zz__rgc_posixz00,
		BgL_bgl_string2348za700za7za7_2391za7, "?", 1);
	      DEFINE_STRING(BGl_string2350z00zz__rgc_posixz00,
		BgL_bgl_string2350za700za7za7_2392za7, "**", 2);
	      DEFINE_STRING(BGl_string2352z00zz__rgc_posixz00,
		BgL_bgl_string2352za700za7za7_2393za7, ">=", 2);
	      DEFINE_STRING(BGl_string2353z00zz__rgc_posixz00,
		BgL_bgl_string2353za700za7za7_2394za7, "RGC:Illegal posix string", 24);
	      DEFINE_STRING(BGl_string2355z00zz__rgc_posixz00,
		BgL_bgl_string2355za700za7za7_2395za7, "or", 2);
	      DEFINE_STRING(BGl_string2357z00zz__rgc_posixz00,
		BgL_bgl_string2357za700za7za7_2396za7, ":", 1);
	      DEFINE_STRING(BGl_string2358z00zz__rgc_posixz00,
		BgL_bgl_string2358za700za7za7_2397za7, "RGC: `^' regexps not supported.",
		31);
	      DEFINE_STRING(BGl_string2359z00zz__rgc_posixz00,
		BgL_bgl_string2359za700za7za7_2398za7, "RGC: `$' regexps not supported.",
		31);
	      DEFINE_STRING(BGl_string2361z00zz__rgc_posixz00,
		BgL_bgl_string2361za700za7za7_2399za7, "all", 3);
	      DEFINE_STRING(BGl_string2363z00zz__rgc_posixz00,
		BgL_bgl_string2363za700za7za7_2400za7, "submatch", 8);
	      DEFINE_STRING(BGl_string2364z00zz__rgc_posixz00,
		BgL_bgl_string2364za700za7za7_2401za7,
		"RGC:subexpression has no terminating close parenthesis", 54);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__rgc_posixz00(long
		BgL_checksumz00_2003, char *BgL_fromz00_2004)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__rgc_posixz00))
				{
					BGl_requirezd2initializa7ationz75zz__rgc_posixz00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__rgc_posixz00();
					BGl_importedzd2moduleszd2initz00zz__rgc_posixz00();
					BGl_toplevelzd2initzd2zz__rgc_posixz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__rgc_posixz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcposix.scm 14 */
			BGl_symbol2343z00zz__rgc_posixz00 =
				bstring_to_symbol(BGl_string2344z00zz__rgc_posixz00);
			BGl_symbol2345z00zz__rgc_posixz00 =
				bstring_to_symbol(BGl_string2346z00zz__rgc_posixz00);
			BGl_symbol2347z00zz__rgc_posixz00 =
				bstring_to_symbol(BGl_string2348z00zz__rgc_posixz00);
			BGl_symbol2349z00zz__rgc_posixz00 =
				bstring_to_symbol(BGl_string2350z00zz__rgc_posixz00);
			BGl_symbol2351z00zz__rgc_posixz00 =
				bstring_to_symbol(BGl_string2352z00zz__rgc_posixz00);
			BGl_symbol2354z00zz__rgc_posixz00 =
				bstring_to_symbol(BGl_string2355z00zz__rgc_posixz00);
			BGl_symbol2356z00zz__rgc_posixz00 =
				bstring_to_symbol(BGl_string2357z00zz__rgc_posixz00);
			BGl_symbol2360z00zz__rgc_posixz00 =
				bstring_to_symbol(BGl_string2361z00zz__rgc_posixz00);
			BGl_symbol2362z00zz__rgc_posixz00 =
				bstring_to_symbol(BGl_string2363z00zz__rgc_posixz00);
			BGl_list2366z00zz__rgc_posixz00 =
				MAKE_PAIR(BCHAR(((unsigned char) '.')),
				MAKE_PAIR(BCHAR(((unsigned char) '=')),
					MAKE_PAIR(BCHAR(((unsigned char) ':')), BNIL)));
			BGl_symbol2368z00zz__rgc_posixz00 =
				bstring_to_symbol(BGl_string2369z00zz__rgc_posixz00);
			return (BGl_symbol2370z00zz__rgc_posixz00 =
				bstring_to_symbol(BGl_string2371z00zz__rgc_posixz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__rgc_posixz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcposix.scm 14 */
			return (BGl_za2errzd2stringza2zd2zz__rgc_posixz00 = BUNSPEC, BUNSPEC);
		}
	}



/* posix->rgc */
	BGL_EXPORTED_DEF obj_t BGl_posixzd2ze3rgcz31zz__rgc_posixz00(obj_t BgL_sz00_1)
	{
		AN_OBJECT;
		{	/* Rgc/rgcposix.scm 49 */
			BGl_za2errzd2stringza2zd2zz__rgc_posixz00 = BgL_sz00_1;
			{	/* Rgc/rgcposix.scm 51 */
				obj_t BgL_rgcz00_785;

				BgL_rgcz00_785 =
					BGl_parsezd2posixzd2expz00zz__rgc_posixz00(BgL_sz00_1, ((long) 0));
				{	/* Rgc/rgcposix.scm 53 */
					obj_t BgL_iz00_786;

					{	/* Rgc/rgcposix.scm 53 */
						int BgL_auxz00_2029;

						BgL_auxz00_2029 = (int) (((long) 1));
						BgL_iz00_786 = BGL_MVALUES_VAL(BgL_auxz00_2029);
					}
					if (((long) CINT(BgL_iz00_786) == STRING_LENGTH(BgL_sz00_1)))
						{	/* Rgc/rgcposix.scm 53 */
							return BgL_rgcz00_785;
						}
					else
						{	/* Rgc/rgcposix.scm 53 */
							return
								BGl_errorz00zz__errorz00(BFALSE,
								BGl_string2339z00zz__rgc_posixz00,
								BGl_za2errzd2stringza2zd2zz__rgc_posixz00);
						}
				}
			}
		}
	}



/* _posix->rgc */
	obj_t BGl__posixzd2ze3rgcz31zz__rgc_posixz00(obj_t BgL_envz00_1999,
		obj_t BgL_sz00_2000)
	{
		AN_OBJECT;
		{	/* Rgc/rgcposix.scm 49 */
			{	/* Rgc/rgcposix.scm 55 */
				obj_t BgL_auxz00_2037;

				if (STRINGP(BgL_sz00_2000))
					{	/* Rgc/rgcposix.scm 55 */
						BgL_auxz00_2037 = BgL_sz00_2000;
					}
				else
					{
						obj_t BgL_auxz00_2040;

						BgL_auxz00_2040 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2340z00zz__rgc_posixz00,
							BINT(((long) 1932)), BGl_string2341z00zz__rgc_posixz00,
							BGl_string2342z00zz__rgc_posixz00, BgL_sz00_2000);
						FAILURE(BgL_auxz00_2040, BFALSE, BFALSE);
					}
				return BGl_posixzd2ze3rgcz31zz__rgc_posixz00(BgL_auxz00_2037);
			}
		}
	}



/* make-rgc-repeat */
	obj_t BGl_makezd2rgczd2repeatz00zz__rgc_posixz00(obj_t BgL_minz00_3,
		obj_t BgL_maxz00_4, obj_t BgL_rgcz00_5)
	{
		AN_OBJECT;
		{	/* Rgc/rgcposix.scm 74 */
			{	/* Rgc/rgcposix.scm 76 */
				bool_t BgL_testz00_2045;

				if ((BgL_minz00_3 == BINT(((long) 0))))
					{	/* Rgc/rgcposix.scm 76 */
						if (CBOOL(BgL_maxz00_4))
							{	/* Rgc/rgcposix.scm 76 */
								BgL_testz00_2045 = ((bool_t) 0);
							}
						else
							{	/* Rgc/rgcposix.scm 76 */
								BgL_testz00_2045 = ((bool_t) 1);
							}
					}
				else
					{	/* Rgc/rgcposix.scm 76 */
						BgL_testz00_2045 = ((bool_t) 0);
					}
				if (BgL_testz00_2045)
					{	/* Rgc/rgcposix.scm 77 */
						obj_t BgL_arg1958z00_790;

						obj_t BgL_arg1959z00_791;

						BgL_arg1958z00_790 = BGl_symbol2343z00zz__rgc_posixz00;
						{	/* Rgc/rgcposix.scm 77 */
							obj_t BgL_list1960z00_792;

							BgL_list1960z00_792 = MAKE_PAIR(BNIL, BNIL);
							BgL_arg1959z00_791 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_rgcz00_5,
								BgL_list1960z00_792);
						}
						return MAKE_PAIR(BgL_arg1958z00_790, BgL_arg1959z00_791);
					}
				else
					{	/* Rgc/rgcposix.scm 78 */
						bool_t BgL_testz00_2054;

						if ((BgL_minz00_3 == BINT(((long) 1))))
							{	/* Rgc/rgcposix.scm 78 */
								if (CBOOL(BgL_maxz00_4))
									{	/* Rgc/rgcposix.scm 78 */
										BgL_testz00_2054 = ((bool_t) 0);
									}
								else
									{	/* Rgc/rgcposix.scm 78 */
										BgL_testz00_2054 = ((bool_t) 1);
									}
							}
						else
							{	/* Rgc/rgcposix.scm 78 */
								BgL_testz00_2054 = ((bool_t) 0);
							}
						if (BgL_testz00_2054)
							{	/* Rgc/rgcposix.scm 79 */
								obj_t BgL_arg1962z00_794;

								obj_t BgL_arg1963z00_795;

								BgL_arg1962z00_794 = BGl_symbol2345z00zz__rgc_posixz00;
								{	/* Rgc/rgcposix.scm 79 */
									obj_t BgL_list1964z00_796;

									BgL_list1964z00_796 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg1963z00_795 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_rgcz00_5,
										BgL_list1964z00_796);
								}
								return MAKE_PAIR(BgL_arg1962z00_794, BgL_arg1963z00_795);
							}
						else
							{	/* Rgc/rgcposix.scm 80 */
								bool_t BgL_testz00_2063;

								if ((BgL_minz00_3 == BINT(((long) 0))))
									{	/* Rgc/rgcposix.scm 80 */
										BgL_testz00_2063 = (BgL_maxz00_4 == BINT(((long) 1)));
									}
								else
									{	/* Rgc/rgcposix.scm 80 */
										BgL_testz00_2063 = ((bool_t) 0);
									}
								if (BgL_testz00_2063)
									{	/* Rgc/rgcposix.scm 81 */
										obj_t BgL_arg1966z00_798;

										obj_t BgL_arg1967z00_799;

										BgL_arg1966z00_798 = BGl_symbol2347z00zz__rgc_posixz00;
										{	/* Rgc/rgcposix.scm 81 */
											obj_t BgL_list1968z00_800;

											BgL_list1968z00_800 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg1967z00_799 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_rgcz00_5, BgL_list1968z00_800);
										}
										return MAKE_PAIR(BgL_arg1966z00_798, BgL_arg1967z00_799);
									}
								else
									{	/* Rgc/rgcposix.scm 80 */
										if (CBOOL(BgL_maxz00_4))
											{	/* Rgc/rgcposix.scm 85 */
												obj_t BgL_arg1969z00_801;

												obj_t BgL_arg1970z00_802;

												BgL_arg1969z00_801 = BGl_symbol2349z00zz__rgc_posixz00;
												{	/* Rgc/rgcposix.scm 85 */
													obj_t BgL_list1971z00_803;

													{	/* Rgc/rgcposix.scm 85 */
														obj_t BgL_arg1972z00_804;

														{	/* Rgc/rgcposix.scm 85 */
															obj_t BgL_arg1973z00_805;

															BgL_arg1973z00_805 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg1972z00_804 =
																MAKE_PAIR(BgL_rgcz00_5, BgL_arg1973z00_805);
														}
														BgL_list1971z00_803 =
															MAKE_PAIR(BgL_maxz00_4, BgL_arg1972z00_804);
													}
													BgL_arg1970z00_802 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_minz00_3, BgL_list1971z00_803);
												}
												return
													MAKE_PAIR(BgL_arg1969z00_801, BgL_arg1970z00_802);
											}
										else
											{	/* Rgc/rgcposix.scm 83 */
												obj_t BgL_arg1974z00_806;

												obj_t BgL_arg1975z00_807;

												BgL_arg1974z00_806 = BGl_symbol2351z00zz__rgc_posixz00;
												{	/* Rgc/rgcposix.scm 83 */
													obj_t BgL_list1976z00_808;

													{	/* Rgc/rgcposix.scm 83 */
														obj_t BgL_arg1977z00_809;

														BgL_arg1977z00_809 = MAKE_PAIR(BNIL, BNIL);
														BgL_list1976z00_808 =
															MAKE_PAIR(BgL_rgcz00_5, BgL_arg1977z00_809);
													}
													BgL_arg1975z00_807 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_minz00_3, BgL_list1976z00_808);
												}
												return
													MAKE_PAIR(BgL_arg1974z00_806, BgL_arg1975z00_807);
											}
									}
							}
					}
			}
		}
	}



/* make-rgc-or */
	obj_t BGl_makezd2rgczd2orz00zz__rgc_posixz00(obj_t BgL_rgcsz00_6)
	{
		AN_OBJECT;
		{	/* Rgc/rgcposix.scm 90 */
			if (NULLP(BgL_rgcsz00_6))
				{	/* Rgc/rgcposix.scm 92 */
					return
						BGl_errorz00zz__errorz00(BFALSE, BGl_string2353z00zz__rgc_posixz00,
						BGl_za2errzd2stringza2zd2zz__rgc_posixz00);
				}
			else
				{	/* Rgc/rgcposix.scm 92 */
					if (NULLP(CDR(BgL_rgcsz00_6)))
						{	/* Rgc/rgcposix.scm 94 */
							return CAR(BgL_rgcsz00_6);
						}
					else
						{	/* Rgc/rgcposix.scm 94 */
							return
								MAKE_PAIR(BGl_symbol2354z00zz__rgc_posixz00,
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_rgcsz00_6,
									BNIL));
						}
				}
		}
	}



/* make-rgc-sequence */
	obj_t BGl_makezd2rgczd2sequencez00zz__rgc_posixz00(obj_t BgL_rgcsz00_7)
	{
		AN_OBJECT;
		{	/* Rgc/rgcposix.scm 102 */
			if (NULLP(BgL_rgcsz00_7))
				{	/* Rgc/rgcposix.scm 104 */
					return
						BGl_errorz00zz__errorz00(BFALSE, BGl_string2353z00zz__rgc_posixz00,
						BGl_za2errzd2stringza2zd2zz__rgc_posixz00);
				}
			else
				{	/* Rgc/rgcposix.scm 104 */
					if (NULLP(CDR(BgL_rgcsz00_7)))
						{	/* Rgc/rgcposix.scm 106 */
							return CAR(BgL_rgcsz00_7);
						}
					else
						{	/* Rgc/rgcposix.scm 106 */
							return
								MAKE_PAIR(BGl_symbol2356z00zz__rgc_posixz00,
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_rgcsz00_7,
									BNIL));
						}
				}
		}
	}



/* parse-posix-exp */
	obj_t BGl_parsezd2posixzd2expz00zz__rgc_posixz00(obj_t BgL_sz00_8,
		long BgL_iz00_9)
	{
		AN_OBJECT;
		{	/* Rgc/rgcposix.scm 116 */
			{	/* Rgc/rgcposix.scm 117 */
				long BgL_lenz00_823;

				BgL_lenz00_823 = STRING_LENGTH(BgL_sz00_8);
				if ((BgL_iz00_9 < BgL_lenz00_823))
					{
						long BgL_iz00_827;

						obj_t BgL_branchesz00_828;

						BgL_iz00_827 = BgL_iz00_9;
						BgL_branchesz00_828 = BNIL;
					BgL_zc3anonymousza31992ze3z83_829:
						{	/* Rgc/rgcposix.scm 121 */
							obj_t BgL_branchz00_830;

							BgL_branchz00_830 =
								BGl_parsezd2posixzd2branchz00zz__rgc_posixz00(BgL_sz00_8,
								BgL_iz00_827);
							{	/* Rgc/rgcposix.scm 123 */
								obj_t BgL_iz00_831;

								{	/* Rgc/rgcposix.scm 123 */
									int BgL_auxz00_2105;

									BgL_auxz00_2105 = (int) (((long) 1));
									BgL_iz00_831 = BGL_MVALUES_VAL(BgL_auxz00_2105);
								}
								{	/* Rgc/rgcposix.scm 123 */
									obj_t BgL_branchesz00_832;

									BgL_branchesz00_832 =
										MAKE_PAIR(BgL_branchz00_830, BgL_branchesz00_828);
									{	/* Rgc/rgcposix.scm 124 */
										bool_t BgL_testz00_2109;

										if (((long) CINT(BgL_iz00_831) < BgL_lenz00_823))
											{	/* Rgc/rgcposix.scm 124 */
												BgL_testz00_2109 =
													(((unsigned char) '|') ==
													STRING_REF(BgL_sz00_8, (long) CINT(BgL_iz00_831)));
											}
										else
											{	/* Rgc/rgcposix.scm 124 */
												BgL_testz00_2109 = ((bool_t) 0);
											}
										if (BgL_testz00_2109)
											{
												obj_t BgL_branchesz00_2119;

												long BgL_iz00_2116;

												BgL_iz00_2116 =
													((long) CINT(BgL_iz00_831) + ((long) 1));
												BgL_branchesz00_2119 = BgL_branchesz00_832;
												BgL_branchesz00_828 = BgL_branchesz00_2119;
												BgL_iz00_827 = BgL_iz00_2116;
												goto BgL_zc3anonymousza31992ze3z83_829;
											}
										else
											{	/* Rgc/rgcposix.scm 126 */
												obj_t BgL_val0_1864z00_835;

												BgL_val0_1864z00_835 =
													BGl_makezd2rgczd2orz00zz__rgc_posixz00(bgl_reverse
													(BgL_branchesz00_832));
												{	/* Rgc/rgcposix.scm 126 */
													int BgL_auxz00_2122;

													BgL_auxz00_2122 = (int) (((long) 2));
													BGL_MVALUES_NUMBER_SET(BgL_auxz00_2122);
												}
												{	/* Rgc/rgcposix.scm 126 */
													int BgL_auxz00_2125;

													BgL_auxz00_2125 = (int) (((long) 1));
													BGL_MVALUES_VAL_SET(BgL_auxz00_2125, BgL_iz00_831);
												}
												return BgL_val0_1864z00_835;
											}
									}
								}
							}
						}
					}
				else
					{	/* Rgc/rgcposix.scm 118 */
						{	/* Rgc/rgcposix.scm 127 */
							int BgL_auxz00_2128;

							BgL_auxz00_2128 = (int) (((long) 2));
							BGL_MVALUES_NUMBER_SET(BgL_auxz00_2128);
						}
						{	/* Rgc/rgcposix.scm 127 */
							obj_t BgL_auxz00_2133;

							int BgL_auxz00_2131;

							BgL_auxz00_2133 = BINT(BgL_iz00_9);
							BgL_auxz00_2131 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_auxz00_2131, BgL_auxz00_2133);
						}
						return BNIL;
					}
			}
		}
	}



/* parse-posix-branch */
	obj_t BGl_parsezd2posixzd2branchz00zz__rgc_posixz00(obj_t BgL_sz00_10,
		long BgL_iz00_11)
	{
		AN_OBJECT;
		{	/* Rgc/rgcposix.scm 135 */
			{	/* Rgc/rgcposix.scm 136 */
				long BgL_lenz00_843;

				BgL_lenz00_843 = STRING_LENGTH(BgL_sz00_10);
				{
					obj_t BgL_iz00_846;

					obj_t BgL_piecesz00_847;

					BgL_iz00_846 = BINT(BgL_iz00_11);
					BgL_piecesz00_847 = BNIL;
				BgL_zc3anonymousza31999ze3z83_848:
					if (((long) CINT(BgL_iz00_846) < BgL_lenz00_843))
						{	/* Rgc/rgcposix.scm 140 */
							obj_t BgL_piecez00_850;

							BgL_piecez00_850 =
								BGl_parsezd2posixzd2piecez00zz__rgc_posixz00(BgL_sz00_10,
								BgL_iz00_846);
							{	/* Rgc/rgcposix.scm 142 */
								obj_t BgL_iz00_851;

								{	/* Rgc/rgcposix.scm 142 */
									int BgL_auxz00_2141;

									BgL_auxz00_2141 = (int) (((long) 1));
									BgL_iz00_851 = BGL_MVALUES_VAL(BgL_auxz00_2141);
								}
								{	/* Rgc/rgcposix.scm 142 */
									obj_t BgL_piecesz00_852;

									BgL_piecesz00_852 =
										MAKE_PAIR(BgL_piecez00_850, BgL_piecesz00_847);
									if (((long) CINT(BgL_iz00_851) < BgL_lenz00_843))
										{	/* Rgc/rgcposix.scm 144 */
											unsigned char BgL_aux1827z00_855;

											BgL_aux1827z00_855 =
												STRING_REF(BgL_sz00_10, (long) CINT(BgL_iz00_851));
											switch (BgL_aux1827z00_855)
												{
												case ((unsigned char) ')'):
												case ((unsigned char) '|'):

													{	/* Rgc/rgcposix.scm 146 */
														obj_t BgL_val0_1868z00_857;

														BgL_val0_1868z00_857 =
															BGl_makezd2rgczd2sequencez00zz__rgc_posixz00
															(bgl_reverse(BgL_piecesz00_852));
														{	/* Rgc/rgcposix.scm 146 */
															int BgL_auxz00_2152;

															BgL_auxz00_2152 = (int) (((long) 2));
															BGL_MVALUES_NUMBER_SET(BgL_auxz00_2152);
														}
														{	/* Rgc/rgcposix.scm 146 */
															int BgL_auxz00_2155;

															BgL_auxz00_2155 = (int) (((long) 1));
															BGL_MVALUES_VAL_SET(BgL_auxz00_2155,
																BgL_iz00_851);
														}
														return BgL_val0_1868z00_857;
													}
													break;
												default:
													{
														obj_t BgL_piecesz00_2159;

														obj_t BgL_iz00_2158;

														BgL_iz00_2158 = BgL_iz00_851;
														BgL_piecesz00_2159 = BgL_piecesz00_852;
														BgL_piecesz00_847 = BgL_piecesz00_2159;
														BgL_iz00_846 = BgL_iz00_2158;
														goto BgL_zc3anonymousza31999ze3z83_848;
													}
												}
										}
									else
										{	/* Rgc/rgcposix.scm 149 */
											obj_t BgL_val0_1870z00_860;

											BgL_val0_1870z00_860 =
												BGl_makezd2rgczd2sequencez00zz__rgc_posixz00(bgl_reverse
												(BgL_piecesz00_852));
											{	/* Rgc/rgcposix.scm 149 */
												int BgL_auxz00_2163;

												BgL_auxz00_2163 = (int) (((long) 2));
												BGL_MVALUES_NUMBER_SET(BgL_auxz00_2163);
											}
											{	/* Rgc/rgcposix.scm 149 */
												int BgL_auxz00_2166;

												BgL_auxz00_2166 = (int) (((long) 1));
												BGL_MVALUES_VAL_SET(BgL_auxz00_2166, BgL_iz00_851);
											}
											return BgL_val0_1870z00_860;
										}
								}
							}
						}
					else
						{	/* Rgc/rgcposix.scm 150 */
							obj_t BgL_val0_1872z00_863;

							BgL_val0_1872z00_863 =
								BGl_makezd2rgczd2sequencez00zz__rgc_posixz00(bgl_reverse
								(BgL_piecesz00_847));
							{	/* Rgc/rgcposix.scm 150 */
								int BgL_auxz00_2171;

								BgL_auxz00_2171 = (int) (((long) 2));
								BGL_MVALUES_NUMBER_SET(BgL_auxz00_2171);
							}
							{	/* Rgc/rgcposix.scm 150 */
								int BgL_auxz00_2174;

								BgL_auxz00_2174 = (int) (((long) 1));
								BGL_MVALUES_VAL_SET(BgL_auxz00_2174, BgL_iz00_846);
							}
							return BgL_val0_1872z00_863;
						}
				}
			}
		}
	}



/* parse-posix-piece */
	obj_t BGl_parsezd2posixzd2piecez00zz__rgc_posixz00(obj_t BgL_sz00_12,
		obj_t BgL_iz00_13)
	{
		AN_OBJECT;
		{	/* Rgc/rgcposix.scm 158 */
			{	/* Rgc/rgcposix.scm 159 */
				long BgL_lenz00_867;

				BgL_lenz00_867 = STRING_LENGTH(BgL_sz00_12);
				{	/* Rgc/rgcposix.scm 160 */
					obj_t BgL_atomz00_868;

					BgL_atomz00_868 =
						BGl_parsezd2posixzd2atomz00zz__rgc_posixz00(BgL_sz00_12,
						BgL_iz00_13);
					{	/* Rgc/rgcposix.scm 162 */
						obj_t BgL_iz00_869;

						{	/* Rgc/rgcposix.scm 162 */
							int BgL_auxz00_2180;

							BgL_auxz00_2180 = (int) (((long) 1));
							BgL_iz00_869 = BGL_MVALUES_VAL(BgL_auxz00_2180);
						}
						if (((long) CINT(BgL_iz00_869) < BgL_lenz00_867))
							{

								{	/* Rgc/rgcposix.scm 163 */
									unsigned char BgL_aux1829z00_872;

									BgL_aux1829z00_872 =
										STRING_REF(BgL_sz00_12, (long) CINT(BgL_iz00_869));
									switch (BgL_aux1829z00_872)
										{
										case ((unsigned char) '*'):
										case ((unsigned char) '+'):
										case ((unsigned char) '?'):

											{	/* Rgc/rgcposix.scm 165 */
												obj_t BgL_fromz00_874;

												switch (BgL_aux1829z00_872)
													{
													case ((unsigned char) '*'):

														{	/* Rgc/rgcposix.scm 167 */
															int BgL_auxz00_2188;

															BgL_auxz00_2188 = (int) (((long) 2));
															BGL_MVALUES_NUMBER_SET(BgL_auxz00_2188);
														}
														{	/* Rgc/rgcposix.scm 167 */
															int BgL_auxz00_2191;

															BgL_auxz00_2191 = (int) (((long) 1));
															BGL_MVALUES_VAL_SET(BgL_auxz00_2191, BFALSE);
														}
														BgL_fromz00_874 = BINT(((long) 0));
														break;
													case ((unsigned char) '+'):

														{	/* Rgc/rgcposix.scm 168 */
															int BgL_auxz00_2195;

															BgL_auxz00_2195 = (int) (((long) 2));
															BGL_MVALUES_NUMBER_SET(BgL_auxz00_2195);
														}
														{	/* Rgc/rgcposix.scm 168 */
															int BgL_auxz00_2198;

															BgL_auxz00_2198 = (int) (((long) 1));
															BGL_MVALUES_VAL_SET(BgL_auxz00_2198, BFALSE);
														}
														BgL_fromz00_874 = BINT(((long) 1));
														break;
													case ((unsigned char) '?'):

														{	/* Rgc/rgcposix.scm 169 */
															int BgL_auxz00_2202;

															BgL_auxz00_2202 = (int) (((long) 2));
															BGL_MVALUES_NUMBER_SET(BgL_auxz00_2202);
														}
														{	/* Rgc/rgcposix.scm 169 */
															obj_t BgL_auxz00_2207;

															int BgL_auxz00_2205;

															BgL_auxz00_2207 = BINT(((long) 1));
															BgL_auxz00_2205 = (int) (((long) 1));
															BGL_MVALUES_VAL_SET(BgL_auxz00_2205,
																BgL_auxz00_2207);
														}
														BgL_fromz00_874 = BINT(((long) 0));
														break;
													default:
														BgL_fromz00_874 = BUNSPEC;
													}
												{	/* Rgc/rgcposix.scm 170 */
													obj_t BgL_toz00_875;

													{	/* Rgc/rgcposix.scm 170 */
														int BgL_auxz00_2212;

														BgL_auxz00_2212 = (int) (((long) 1));
														BgL_toz00_875 = BGL_MVALUES_VAL(BgL_auxz00_2212);
													}
													{	/* Rgc/rgcposix.scm 170 */
														obj_t BgL_val0_1882z00_876;

														long BgL_val1_1883z00_877;

														BgL_val0_1882z00_876 =
															BGl_makezd2rgczd2repeatz00zz__rgc_posixz00
															(BgL_fromz00_874, BgL_toz00_875, BgL_atomz00_868);
														BgL_val1_1883z00_877 =
															((long) CINT(BgL_iz00_869) + ((long) 1));
														{	/* Rgc/rgcposix.scm 170 */
															int BgL_auxz00_2218;

															BgL_auxz00_2218 = (int) (((long) 2));
															BGL_MVALUES_NUMBER_SET(BgL_auxz00_2218);
														}
														{	/* Rgc/rgcposix.scm 170 */
															obj_t BgL_auxz00_2223;

															int BgL_auxz00_2221;

															BgL_auxz00_2223 = BINT(BgL_val1_1883z00_877);
															BgL_auxz00_2221 = (int) (((long) 1));
															BGL_MVALUES_VAL_SET(BgL_auxz00_2221,
																BgL_auxz00_2223);
														}
														return BgL_val0_1882z00_876;
													}
												}
											}
											break;
										case ((unsigned char) '{'):

											{	/* Rgc/rgcposix.scm 172 */
												obj_t BgL_fromz00_887;

												BgL_fromz00_887 =
													BGl_parsezd2posixzd2bracesz00zz__rgc_posixz00
													(BgL_sz00_12,
													BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_869,
														BINT(((long) 1))));
												{	/* Rgc/rgcposix.scm 174 */
													obj_t BgL_toz00_888;

													obj_t BgL_iz00_889;

													{	/* Rgc/rgcposix.scm 174 */
														int BgL_auxz00_2229;

														BgL_auxz00_2229 = (int) (((long) 1));
														BgL_toz00_888 = BGL_MVALUES_VAL(BgL_auxz00_2229);
													}
													{	/* Rgc/rgcposix.scm 174 */
														int BgL_auxz00_2232;

														BgL_auxz00_2232 = (int) (((long) 2));
														BgL_iz00_889 = BGL_MVALUES_VAL(BgL_auxz00_2232);
													}
													{	/* Rgc/rgcposix.scm 174 */
														obj_t BgL_val0_1884z00_890;

														BgL_val0_1884z00_890 =
															BGl_makezd2rgczd2repeatz00zz__rgc_posixz00
															(BgL_fromz00_887, BgL_toz00_888, BgL_atomz00_868);
														{	/* Rgc/rgcposix.scm 174 */
															int BgL_auxz00_2236;

															BgL_auxz00_2236 = (int) (((long) 2));
															BGL_MVALUES_NUMBER_SET(BgL_auxz00_2236);
														}
														{	/* Rgc/rgcposix.scm 174 */
															int BgL_auxz00_2239;

															BgL_auxz00_2239 = (int) (((long) 1));
															BGL_MVALUES_VAL_SET(BgL_auxz00_2239,
																BgL_iz00_889);
														}
														return BgL_val0_1884z00_890;
													}
												}
											}
											break;
										default:
											{	/* Rgc/rgcposix.scm 175 */
												int BgL_auxz00_2242;

												BgL_auxz00_2242 = (int) (((long) 2));
												BGL_MVALUES_NUMBER_SET(BgL_auxz00_2242);
											}
											{	/* Rgc/rgcposix.scm 175 */
												int BgL_auxz00_2245;

												BgL_auxz00_2245 = (int) (((long) 1));
												BGL_MVALUES_VAL_SET(BgL_auxz00_2245, BgL_iz00_869);
											}
											return BgL_atomz00_868;
										}
								}
							}
						else
							{	/* Rgc/rgcposix.scm 162 */
								{	/* Rgc/rgcposix.scm 176 */
									int BgL_auxz00_2249;

									BgL_auxz00_2249 = (int) (((long) 2));
									BGL_MVALUES_NUMBER_SET(BgL_auxz00_2249);
								}
								{	/* Rgc/rgcposix.scm 176 */
									int BgL_auxz00_2252;

									BgL_auxz00_2252 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_auxz00_2252, BgL_iz00_869);
								}
								return BgL_atomz00_868;
							}
					}
				}
			}
		}
	}



/* parse-posix-atom */
	obj_t BGl_parsezd2posixzd2atomz00zz__rgc_posixz00(obj_t BgL_sz00_14,
		obj_t BgL_iz00_15)
	{
		AN_OBJECT;
		{	/* Rgc/rgcposix.scm 184 */
			{	/* Rgc/rgcposix.scm 185 */
				long BgL_lenz00_897;

				BgL_lenz00_897 = STRING_LENGTH(BgL_sz00_14);
				if (((long) CINT(BgL_iz00_15) < BgL_lenz00_897))
					{	/* Rgc/rgcposix.scm 187 */
						unsigned char BgL_cz00_899;

						BgL_cz00_899 = STRING_REF(BgL_sz00_14, (long) CINT(BgL_iz00_15));
						{

							switch (BgL_cz00_899)
								{
								case ((unsigned char) '^'):

									return
										BGl_errorz00zz__errorz00(BFALSE,
										BGl_string2358z00zz__rgc_posixz00,
										BGl_za2errzd2stringza2zd2zz__rgc_posixz00);
									break;
								case ((unsigned char) '$'):

									return
										BGl_errorz00zz__errorz00(BFALSE,
										BGl_string2359z00zz__rgc_posixz00,
										BGl_za2errzd2stringza2zd2zz__rgc_posixz00);
									break;
								case ((unsigned char) '.'):

									{	/* Rgc/rgcposix.scm 191 */
										obj_t BgL_val0_1890z00_903;

										long BgL_val1_1891z00_904;

										BgL_val0_1890z00_903 = BGl_symbol2360z00zz__rgc_posixz00;
										BgL_val1_1891z00_904 =
											((long) CINT(BgL_iz00_15) + ((long) 1));
										{	/* Rgc/rgcposix.scm 191 */
											int BgL_auxz00_2265;

											BgL_auxz00_2265 = (int) (((long) 2));
											BGL_MVALUES_NUMBER_SET(BgL_auxz00_2265);
										}
										{	/* Rgc/rgcposix.scm 191 */
											obj_t BgL_auxz00_2270;

											int BgL_auxz00_2268;

											BgL_auxz00_2270 = BINT(BgL_val1_1891z00_904);
											BgL_auxz00_2268 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_auxz00_2268, BgL_auxz00_2270);
										}
										return BgL_val0_1890z00_903;
									}
									break;
								case ((unsigned char) '['):

									return
										BGl_parsezd2posixzd2bracketz00zz__rgc_posixz00(BgL_sz00_14,
										((long) CINT(BgL_iz00_15) + ((long) 1)));
									break;
								case ((unsigned char) '('):

									{	/* Rgc/rgcposix.scm 193 */
										obj_t BgL_rez00_906;

										BgL_rez00_906 =
											BGl_parsezd2posixzd2expz00zz__rgc_posixz00(BgL_sz00_14,
											((long) CINT(BgL_iz00_15) + ((long) 1)));
										{	/* Rgc/rgcposix.scm 195 */
											obj_t BgL_iz00_907;

											{	/* Rgc/rgcposix.scm 195 */
												int BgL_auxz00_2279;

												BgL_auxz00_2279 = (int) (((long) 1));
												BgL_iz00_907 = BGL_MVALUES_VAL(BgL_auxz00_2279);
											}
											{	/* Rgc/rgcposix.scm 195 */
												bool_t BgL_testz00_2282;

												if (((long) CINT(BgL_iz00_907) < BgL_lenz00_897))
													{	/* Rgc/rgcposix.scm 195 */
														BgL_testz00_2282 =
															(((unsigned char) ')') ==
															STRING_REF(BgL_sz00_14,
																(long) CINT(BgL_iz00_907)));
													}
												else
													{	/* Rgc/rgcposix.scm 195 */
														BgL_testz00_2282 = ((bool_t) 0);
													}
												if (BgL_testz00_2282)
													{	/* Rgc/rgcposix.scm 196 */
														obj_t BgL_val0_1892z00_909;

														long BgL_val1_1893z00_910;

														{	/* Rgc/rgcposix.scm 196 */
															obj_t BgL_arg2015z00_911;

															obj_t BgL_arg2016z00_912;

															BgL_arg2015z00_911 =
																BGl_symbol2362z00zz__rgc_posixz00;
															{	/* Rgc/rgcposix.scm 196 */
																obj_t BgL_list2017z00_913;

																BgL_list2017z00_913 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2016z00_912 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_rez00_906, BgL_list2017z00_913);
															}
															BgL_val0_1892z00_909 =
																MAKE_PAIR(BgL_arg2015z00_911,
																BgL_arg2016z00_912);
														}
														BgL_val1_1893z00_910 =
															((long) CINT(BgL_iz00_907) + ((long) 1));
														{	/* Rgc/rgcposix.scm 196 */
															int BgL_auxz00_2294;

															BgL_auxz00_2294 = (int) (((long) 2));
															BGL_MVALUES_NUMBER_SET(BgL_auxz00_2294);
														}
														{	/* Rgc/rgcposix.scm 196 */
															obj_t BgL_auxz00_2299;

															int BgL_auxz00_2297;

															BgL_auxz00_2299 = BINT(BgL_val1_1893z00_910);
															BgL_auxz00_2297 = (int) (((long) 1));
															BGL_MVALUES_VAL_SET(BgL_auxz00_2297,
																BgL_auxz00_2299);
														}
														return BgL_val0_1892z00_909;
													}
												else
													{	/* Rgc/rgcposix.scm 195 */
														return
															BGl_errorz00zz__errorz00(BFALSE,
															BGl_string2364z00zz__rgc_posixz00,
															BGl_za2errzd2stringza2zd2zz__rgc_posixz00);
													}
											}
										}
									}
									break;
								case ((unsigned char) '\\'):

									{	/* Rgc/rgcposix.scm 198 */
										long BgL_iz00_917;

										BgL_iz00_917 = ((long) CINT(BgL_iz00_15) + ((long) 1));
										if ((BgL_iz00_917 < BgL_lenz00_897))
											{	/* Rgc/rgcposix.scm 200 */
												obj_t BgL_val0_1894z00_919;

												long BgL_val1_1895z00_920;

												{	/* Rgc/rgcposix.scm 200 */
													unsigned char BgL_arg2023z00_921;

													BgL_arg2023z00_921 =
														STRING_REF(BgL_sz00_14, BgL_iz00_917);
													{	/* Rgc/rgcposix.scm 200 */
														obj_t BgL_list2024z00_922;

														BgL_list2024z00_922 =
															MAKE_PAIR(BCHAR(BgL_arg2023z00_921), BNIL);
														BgL_val0_1894z00_919 =
															BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
															(BgL_list2024z00_922);
												}}
												BgL_val1_1895z00_920 = (BgL_iz00_917 + ((long) 1));
												{	/* Rgc/rgcposix.scm 200 */
													int BgL_auxz00_2312;

													BgL_auxz00_2312 = (int) (((long) 2));
													BGL_MVALUES_NUMBER_SET(BgL_auxz00_2312);
												}
												{	/* Rgc/rgcposix.scm 200 */
													obj_t BgL_auxz00_2317;

													int BgL_auxz00_2315;

													BgL_auxz00_2317 = BINT(BgL_val1_1895z00_920);
													BgL_auxz00_2315 = (int) (((long) 1));
													BGL_MVALUES_VAL_SET(BgL_auxz00_2315, BgL_auxz00_2317);
												}
												return BgL_val0_1894z00_919;
											}
										else
											{	/* Rgc/rgcposix.scm 199 */
												return
													BGl_errorz00zz__errorz00(BFALSE,
													BGl_string2365z00zz__rgc_posixz00,
													BGl_za2errzd2stringza2zd2zz__rgc_posixz00);
											}
									}
									break;
								case ((unsigned char) ')'):
								case ((unsigned char) '|'):
								case ((unsigned char) '*'):
								case ((unsigned char) '+'):
								case ((unsigned char) '?'):
								case ((unsigned char) '{'):

									{	/* Rgc/rgcposix.scm 203 */
										int BgL_auxz00_2321;

										BgL_auxz00_2321 = (int) (((long) 2));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_2321);
									}
									{	/* Rgc/rgcposix.scm 203 */
										int BgL_auxz00_2324;

										BgL_auxz00_2324 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_2324, BgL_iz00_15);
									}
									return BNIL;
									break;
								default:
									{	/* Rgc/rgcposix.scm 204 */
										obj_t BgL_val0_1888z00_925;

										long BgL_val1_1889z00_926;

										{	/* Rgc/rgcposix.scm 204 */
											obj_t BgL_list2025z00_927;

											BgL_list2025z00_927 =
												MAKE_PAIR(BCHAR(BgL_cz00_899), BNIL);
											BgL_val0_1888z00_925 =
												BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
												(BgL_list2025z00_927);
										}
										BgL_val1_1889z00_926 =
											((long) CINT(BgL_iz00_15) + ((long) 1));
										{	/* Rgc/rgcposix.scm 204 */
											int BgL_auxz00_2332;

											BgL_auxz00_2332 = (int) (((long) 2));
											BGL_MVALUES_NUMBER_SET(BgL_auxz00_2332);
										}
										{	/* Rgc/rgcposix.scm 204 */
											obj_t BgL_auxz00_2337;

											int BgL_auxz00_2335;

											BgL_auxz00_2337 = BINT(BgL_val1_1889z00_926);
											BgL_auxz00_2335 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_auxz00_2335, BgL_auxz00_2337);
										}
										return BgL_val0_1888z00_925;
									}
								}
						}
					}
				else
					{	/* Rgc/rgcposix.scm 186 */
						{	/* Rgc/rgcposix.scm 205 */
							int BgL_auxz00_2341;

							BgL_auxz00_2341 = (int) (((long) 2));
							BGL_MVALUES_NUMBER_SET(BgL_auxz00_2341);
						}
						{	/* Rgc/rgcposix.scm 205 */
							int BgL_auxz00_2344;

							BgL_auxz00_2344 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_auxz00_2344, BgL_iz00_15);
						}
						return BNIL;
					}
			}
		}
	}



/* parse-posix-bracket */
	obj_t BGl_parsezd2posixzd2bracketz00zz__rgc_posixz00(obj_t BgL_sz00_16,
		long BgL_iz00_17)
	{
		AN_OBJECT;
		{	/* Rgc/rgcposix.scm 213 */
			{	/* Rgc/rgcposix.scm 214 */
				long BgL_lenz00_931;

				BgL_lenz00_931 = STRING_LENGTH(BgL_sz00_16);
				if ((BgL_iz00_17 < BgL_lenz00_931))
					{	/* Rgc/rgcposix.scm 216 */
						bool_t BgL_negatezf3zf3_933;

						{	/* Rgc/rgcposix.scm 217 */
							unsigned char BgL_cz00_991;

							BgL_cz00_991 = STRING_REF(BgL_sz00_16, BgL_iz00_17);
							if ((BgL_cz00_991 == ((unsigned char) '^')))
								{	/* Rgc/rgcposix.scm 219 */
									long BgL_val1_1901z00_994;

									BgL_val1_1901z00_994 = (BgL_iz00_17 + ((long) 1));
									{	/* Rgc/rgcposix.scm 219 */
										int BgL_auxz00_2354;

										BgL_auxz00_2354 = (int) (((long) 2));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_2354);
									}
									{	/* Rgc/rgcposix.scm 219 */
										obj_t BgL_auxz00_2359;

										int BgL_auxz00_2357;

										BgL_auxz00_2359 = BINT(BgL_val1_1901z00_994);
										BgL_auxz00_2357 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_2357, BgL_auxz00_2359);
									}
									BgL_negatezf3zf3_933 = ((bool_t) 1);
								}
							else
								{	/* Rgc/rgcposix.scm 218 */
									{	/* Rgc/rgcposix.scm 220 */
										int BgL_auxz00_2362;

										BgL_auxz00_2362 = (int) (((long) 2));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_2362);
									}
									{	/* Rgc/rgcposix.scm 220 */
										obj_t BgL_auxz00_2367;

										int BgL_auxz00_2365;

										BgL_auxz00_2367 = BINT(BgL_iz00_17);
										BgL_auxz00_2365 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_2365, BgL_auxz00_2367);
									}
									BgL_negatezf3zf3_933 = ((bool_t) 0);
						}}
						{	/* Rgc/rgcposix.scm 221 */
							obj_t BgL_i0z00_934;

							{	/* Rgc/rgcposix.scm 221 */
								int BgL_auxz00_2370;

								BgL_auxz00_2370 = (int) (((long) 1));
								BgL_i0z00_934 = BGL_MVALUES_VAL(BgL_auxz00_2370);
							}
							{
								obj_t BgL_iz00_937;

								obj_t BgL_csetz00_938;

								BgL_iz00_937 = BgL_i0z00_934;
								BgL_csetz00_938 = BNIL;
							BgL_zc3anonymousza32029ze3z83_939:
								if (((long) CINT(BgL_iz00_937) < BgL_lenz00_931))
									{	/* Rgc/rgcposix.scm 224 */
										unsigned char BgL_cz00_941;

										BgL_cz00_941 =
											STRING_REF(BgL_sz00_16, (long) CINT(BgL_iz00_937));
										{

											switch (BgL_cz00_941)
												{
												case ((unsigned char) '['):

													{	/* Rgc/rgcposix.scm 228 */
														long BgL_i1z00_945;

														BgL_i1z00_945 =
															((long) CINT(BgL_iz00_937) + ((long) 1));
														{	/* Rgc/rgcposix.scm 230 */
															bool_t BgL_testz00_2380;

															if ((BgL_i1z00_945 < BgL_lenz00_931))
																{	/* Rgc/rgcposix.scm 230 */
																	BgL_testz00_2380 =
																		CBOOL
																		(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																		(BCHAR(STRING_REF(BgL_sz00_16,
																					BgL_i1z00_945)),
																			BGl_list2366z00zz__rgc_posixz00));
																}
															else
																{	/* Rgc/rgcposix.scm 230 */
																	BgL_testz00_2380 = ((bool_t) 0);
																}
															if (BgL_testz00_2380)
																{	/* Rgc/rgcposix.scm 230 */
																	return
																		BGl_errorz00zz__errorz00(BFALSE,
																		BGl_string2367z00zz__rgc_posixz00,
																		BGl_za2errzd2stringza2zd2zz__rgc_posixz00);
																}
															else
																{	/* Rgc/rgcposix.scm 235 */
																	obj_t BgL_arg2033z00_947;

																	BgL_arg2033z00_947 =
																		MAKE_PAIR(BCHAR(((unsigned char) '[')),
																		BgL_csetz00_938);
																	{
																		obj_t BgL_csetz00_2392;

																		obj_t BgL_iz00_2390;

																		BgL_iz00_2390 = BINT(BgL_i1z00_945);
																		BgL_csetz00_2392 = BgL_arg2033z00_947;
																		BgL_csetz00_938 = BgL_csetz00_2392;
																		BgL_iz00_937 = BgL_iz00_2390;
																		goto BgL_zc3anonymousza32029ze3z83_939;
																	}
																}
														}
													}
													break;
												case ((unsigned char) ']'):

													if (
														((long) CINT(BgL_iz00_937) ==
															(long) CINT(BgL_i0z00_934)))
														{	/* Rgc/rgcposix.scm 239 */
															long BgL_arg2039z00_952;

															obj_t BgL_arg2040z00_953;

															BgL_arg2039z00_952 =
																((long) CINT(BgL_iz00_937) + ((long) 1));
															BgL_arg2040z00_953 =
																MAKE_PAIR(BCHAR(((unsigned char) ']')),
																BgL_csetz00_938);
															{
																obj_t BgL_csetz00_2403;

																obj_t BgL_iz00_2401;

																BgL_iz00_2401 = BINT(BgL_arg2039z00_952);
																BgL_csetz00_2403 = BgL_arg2040z00_953;
																BgL_csetz00_938 = BgL_csetz00_2403;
																BgL_iz00_937 = BgL_iz00_2401;
																goto BgL_zc3anonymousza32029ze3z83_939;
															}
														}
													else
														{	/* Rgc/rgcposix.scm 238 */
															if (BgL_negatezf3zf3_933)
																{	/* Rgc/rgcposix.scm 243 */
																	obj_t BgL_val0_1904z00_954;

																	long BgL_val1_1905z00_955;

																	BgL_val0_1904z00_954 =
																		MAKE_PAIR(BGl_symbol2368z00zz__rgc_posixz00,
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_csetz00_938, BNIL));
																	BgL_val1_1905z00_955 =
																		((long) CINT(BgL_iz00_937) + ((long) 1));
																	{	/* Rgc/rgcposix.scm 243 */
																		int BgL_auxz00_2409;

																		BgL_auxz00_2409 = (int) (((long) 2));
																		BGL_MVALUES_NUMBER_SET(BgL_auxz00_2409);
																	}
																	{	/* Rgc/rgcposix.scm 243 */
																		obj_t BgL_auxz00_2414;

																		int BgL_auxz00_2412;

																		BgL_auxz00_2414 =
																			BINT(BgL_val1_1905z00_955);
																		BgL_auxz00_2412 = (int) (((long) 1));
																		BGL_MVALUES_VAL_SET(BgL_auxz00_2412,
																			BgL_auxz00_2414);
																	}
																	return BgL_val0_1904z00_954;
																}
															else
																{	/* Rgc/rgcposix.scm 244 */
																	obj_t BgL_val0_1906z00_958;

																	long BgL_val1_1907z00_959;

																	BgL_val0_1906z00_958 =
																		MAKE_PAIR(BGl_symbol2370z00zz__rgc_posixz00,
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_csetz00_938, BNIL));
																	BgL_val1_1907z00_959 =
																		((long) CINT(BgL_iz00_937) + ((long) 1));
																	{	/* Rgc/rgcposix.scm 244 */
																		int BgL_auxz00_2421;

																		BgL_auxz00_2421 = (int) (((long) 2));
																		BGL_MVALUES_NUMBER_SET(BgL_auxz00_2421);
																	}
																	{	/* Rgc/rgcposix.scm 244 */
																		obj_t BgL_auxz00_2426;

																		int BgL_auxz00_2424;

																		BgL_auxz00_2426 =
																			BINT(BgL_val1_1907z00_959);
																		BgL_auxz00_2424 = (int) (((long) 1));
																		BGL_MVALUES_VAL_SET(BgL_auxz00_2424,
																			BgL_auxz00_2426);
																	}
																	return BgL_val0_1906z00_958;
																}
														}
													break;
												case ((unsigned char) '-'):

													{	/* Rgc/rgcposix.scm 247 */
														bool_t BgL_testz00_2429;

														if (
															((long) CINT(BgL_iz00_937) ==
																(long) CINT(BgL_i0z00_934)))
															{	/* Rgc/rgcposix.scm 247 */
																BgL_testz00_2429 = ((bool_t) 1);
															}
														else
															{	/* Rgc/rgcposix.scm 247 */
																if (
																	(((long) CINT(BgL_iz00_937) + ((long) 1)) <
																		BgL_lenz00_931))
																	{	/* Rgc/rgcposix.scm 248 */
																		BgL_testz00_2429 =
																			(((unsigned char) ']') ==
																			STRING_REF(BgL_sz00_16,
																				((long) CINT(BgL_iz00_937) +
																					((long) 1))));
																	}
																else
																	{	/* Rgc/rgcposix.scm 248 */
																		BgL_testz00_2429 = ((bool_t) 0);
																	}
															}
														if (BgL_testz00_2429)
															{	/* Rgc/rgcposix.scm 250 */
																long BgL_arg2046z00_963;

																obj_t BgL_arg2047z00_964;

																BgL_arg2046z00_963 =
																	((long) CINT(BgL_iz00_937) + ((long) 1));
																BgL_arg2047z00_964 =
																	MAKE_PAIR(BCHAR(((unsigned char) '-')),
																	BgL_csetz00_938);
																{
																	obj_t BgL_csetz00_2448;

																	obj_t BgL_iz00_2446;

																	BgL_iz00_2446 = BINT(BgL_arg2046z00_963);
																	BgL_csetz00_2448 = BgL_arg2047z00_964;
																	BgL_csetz00_938 = BgL_csetz00_2448;
																	BgL_iz00_937 = BgL_iz00_2446;
																	goto BgL_zc3anonymousza32029ze3z83_939;
																}
															}
														else
															{	/* Rgc/rgcposix.scm 247 */
																return
																	BGl_errorz00zz__errorz00(BFALSE,
																	BGl_string2372z00zz__rgc_posixz00,
																	BGl_za2errzd2stringza2zd2zz__rgc_posixz00);
															}
													}
													break;
												default:
													{	/* Rgc/rgcposix.scm 257 */
														long BgL_iz00_970;

														BgL_iz00_970 =
															((long) CINT(BgL_iz00_937) + ((long) 1));
														{	/* Rgc/rgcposix.scm 258 */
															bool_t BgL_testz00_2452;

															if (
																((BgL_iz00_970 + ((long) 1)) < BgL_lenz00_931))
																{	/* Rgc/rgcposix.scm 258 */
																	BgL_testz00_2452 =
																		(((unsigned char) '-') ==
																		STRING_REF(BgL_sz00_16, BgL_iz00_970));
																}
															else
																{	/* Rgc/rgcposix.scm 258 */
																	BgL_testz00_2452 = ((bool_t) 0);
																}
															if (BgL_testz00_2452)
																{	/* Rgc/rgcposix.scm 261 */
																	long BgL_iz00_972;

																	BgL_iz00_972 = (BgL_iz00_970 + ((long) 1));
																	{	/* Rgc/rgcposix.scm 261 */
																		long BgL_toz00_973;

																		BgL_toz00_973 =
																			(STRING_REF(BgL_sz00_16, BgL_iz00_972));
																		{	/* Rgc/rgcposix.scm 262 */

																			{	/* Rgc/rgcposix.scm 263 */
																				long BgL_g1835z00_974;

																				BgL_g1835z00_974 = (BgL_cz00_941);
																				{
																					long BgL_jz00_1688;

																					obj_t BgL_csetz00_1689;

																					BgL_jz00_1688 = BgL_g1835z00_974;
																					BgL_csetz00_1689 = BgL_csetz00_938;
																				BgL_laapz00_1687:
																					if ((BgL_jz00_1688 > BgL_toz00_973))
																						{	/* Rgc/rgcposix.scm 263 */
																							long BgL_arg2057z00_1696;

																							BgL_arg2057z00_1696 =
																								(BgL_iz00_972 + ((long) 1));
																							{
																								obj_t BgL_csetz00_2467;

																								obj_t BgL_iz00_2465;

																								BgL_iz00_2465 =
																									BINT(BgL_arg2057z00_1696);
																								BgL_csetz00_2467 =
																									BgL_csetz00_1689;
																								BgL_csetz00_938 =
																									BgL_csetz00_2467;
																								BgL_iz00_937 = BgL_iz00_2465;
																								goto
																									BgL_zc3anonymousza32029ze3z83_939;
																							}
																						}
																					else
																						{	/* Rgc/rgcposix.scm 263 */
																							long BgL_arg2058z00_1697;

																							obj_t BgL_arg2059z00_1698;

																							BgL_arg2058z00_1697 =
																								(BgL_jz00_1688 + ((long) 1));
																							{	/* Rgc/rgcposix.scm 263 */
																								unsigned char
																									BgL_arg2060z00_1699;
																								BgL_arg2060z00_1699 =
																									(BgL_jz00_1688);
																								BgL_arg2059z00_1698 =
																									MAKE_PAIR(BCHAR
																									(BgL_arg2060z00_1699),
																									BgL_csetz00_1689);
																							}
																							{
																								obj_t BgL_csetz00_2473;

																								long BgL_jz00_2472;

																								BgL_jz00_2472 =
																									BgL_arg2058z00_1697;
																								BgL_csetz00_2473 =
																									BgL_arg2059z00_1698;
																								BgL_csetz00_1689 =
																									BgL_csetz00_2473;
																								BgL_jz00_1688 = BgL_jz00_2472;
																								goto BgL_laapz00_1687;
																							}
																						}
																				}
																			}
																		}
																	}
																}
															else
																{	/* Rgc/rgcposix.scm 272 */
																	obj_t BgL_arg2062z00_986;

																	BgL_arg2062z00_986 =
																		MAKE_PAIR(BCHAR(BgL_cz00_941),
																		BgL_csetz00_938);
																	{
																		obj_t BgL_csetz00_2478;

																		obj_t BgL_iz00_2476;

																		BgL_iz00_2476 = BINT(BgL_iz00_970);
																		BgL_csetz00_2478 = BgL_arg2062z00_986;
																		BgL_csetz00_938 = BgL_csetz00_2478;
																		BgL_iz00_937 = BgL_iz00_2476;
																		goto BgL_zc3anonymousza32029ze3z83_939;
																	}
																}
														}
													}
												}
										}
									}
								else
									{	/* Rgc/rgcposix.scm 223 */
										return
											BGl_errorz00zz__errorz00(BFALSE,
											BGl_string2373z00zz__rgc_posixz00,
											BGl_za2errzd2stringza2zd2zz__rgc_posixz00);
									}
							}
						}
					}
				else
					{	/* Rgc/rgcposix.scm 215 */
						return
							BGl_errorz00zz__errorz00(BFALSE,
							BGl_string2373z00zz__rgc_posixz00,
							BGl_za2errzd2stringza2zd2zz__rgc_posixz00);
					}
			}
		}
	}



/* parse-posix-braces */
	obj_t BGl_parsezd2posixzd2bracesz00zz__rgc_posixz00(obj_t BgL_sz00_18,
		obj_t BgL_iz00_19)
	{
		AN_OBJECT;
		{	/* Rgc/rgcposix.scm 282 */
			{	/* Rgc/rgcposix.scm 293 */
				obj_t BgL_commaz00_998;

				obj_t BgL_rbz00_999;

				{	/* Rgc/rgcposix.scm 293 */
					long BgL_lenz00_1738;

					BgL_lenz00_1738 = STRING_LENGTH(BgL_sz00_18);
					{
						obj_t BgL_offsetz00_1740;

						BgL_offsetz00_1740 = BgL_iz00_19;
					BgL_loopz00_1739:
						if (((long) CINT(BgL_offsetz00_1740) >= BgL_lenz00_1738))
							{	/* Rgc/rgcposix.scm 293 */
								BgL_commaz00_998 = BFALSE;
							}
						else
							{	/* Rgc/rgcposix.scm 293 */
								if (
									(STRING_REF(BgL_sz00_18,
											(long) CINT(BgL_offsetz00_1740)) ==
										((unsigned char) ',')))
									{	/* Rgc/rgcposix.scm 293 */
										BgL_commaz00_998 = BgL_offsetz00_1740;
									}
								else
									{
										obj_t BgL_offsetz00_2490;

										BgL_offsetz00_2490 =
											BINT(((long) CINT(BgL_offsetz00_1740) + ((long) 1)));
										BgL_offsetz00_1740 = BgL_offsetz00_2490;
										goto BgL_loopz00_1739;
									}
							}
					}
				}
				{	/* Rgc/rgcposix.scm 294 */
					long BgL_lenz00_1757;

					BgL_lenz00_1757 = STRING_LENGTH(BgL_sz00_18);
					{
						obj_t BgL_offsetz00_1759;

						BgL_offsetz00_1759 = BgL_iz00_19;
					BgL_loopz00_1758:
						if (((long) CINT(BgL_offsetz00_1759) >= BgL_lenz00_1757))
							{	/* Rgc/rgcposix.scm 294 */
								BgL_rbz00_999 = BFALSE;
							}
						else
							{	/* Rgc/rgcposix.scm 294 */
								if (
									(STRING_REF(BgL_sz00_18,
											(long) CINT(BgL_offsetz00_1759)) ==
										((unsigned char) '}')))
									{	/* Rgc/rgcposix.scm 294 */
										BgL_rbz00_999 = BgL_offsetz00_1759;
									}
								else
									{
										obj_t BgL_offsetz00_2502;

										BgL_offsetz00_2502 =
											BINT(((long) CINT(BgL_offsetz00_1759) + ((long) 1)));
										BgL_offsetz00_1759 = BgL_offsetz00_2502;
										goto BgL_loopz00_1758;
									}
							}
					}
				}
				if (CBOOL(BgL_rbz00_999))
					{	/* Rgc/rgcposix.scm 296 */
						bool_t BgL_testz00_2508;

						if (CBOOL(BgL_commaz00_998))
							{	/* Rgc/rgcposix.scm 296 */
								BgL_testz00_2508 =
									((long) CINT(BgL_commaz00_998) < (long) CINT(BgL_rbz00_999));
							}
						else
							{	/* Rgc/rgcposix.scm 296 */
								BgL_testz00_2508 = ((bool_t) 0);
							}
						if (BgL_testz00_2508)
							{	/* Rgc/rgcposix.scm 297 */
								obj_t BgL_val0_1908z00_1001;

								obj_t BgL_val1_1909z00_1002;

								long BgL_val2_1910z00_1003;

								{	/* Rgc/rgcposix.scm 297 */
									obj_t BgL_arg2068z00_1004;

									BgL_arg2068z00_1004 =
										c_substring(BgL_sz00_18,
										(long) CINT(BgL_iz00_19), (long) CINT(BgL_commaz00_998));
									{	/* Ieee/number.scm 134 */

										BgL_val0_1908z00_1001 =
											BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
											(BgL_arg2068z00_1004, BINT(((long) 10)));
								}}
								{	/* Rgc/rgcposix.scm 298 */
									bool_t BgL_testz00_2519;

									if (
										(((long) CINT(BgL_commaz00_998) + ((long) 1)) ==
											(long) CINT(BgL_rbz00_999)))
										{	/* Rgc/rgcposix.scm 298 */
											BgL_testz00_2519 = ((bool_t) 0);
										}
									else
										{	/* Rgc/rgcposix.scm 298 */
											BgL_testz00_2519 = ((bool_t) 1);
										}
									if (BgL_testz00_2519)
										{	/* Rgc/rgcposix.scm 299 */
											obj_t BgL_arg2069z00_1008;

											BgL_arg2069z00_1008 =
												c_substring(BgL_sz00_18,
												((long) CINT(BgL_commaz00_998) + ((long) 1)),
												(long) CINT(BgL_rbz00_999));
											{	/* Ieee/number.scm 134 */

												BgL_val1_1909z00_1002 =
													BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
													(BgL_arg2069z00_1008, BINT(((long) 10)));
										}}
									else
										{	/* Rgc/rgcposix.scm 298 */
											BgL_val1_1909z00_1002 = BFALSE;
										}
								}
								BgL_val2_1910z00_1003 =
									((long) CINT(BgL_rbz00_999) + ((long) 1));
								{	/* Rgc/rgcposix.scm 297 */
									int BgL_auxz00_2533;

									BgL_auxz00_2533 = (int) (((long) 3));
									BGL_MVALUES_NUMBER_SET(BgL_auxz00_2533);
								}
								{	/* Rgc/rgcposix.scm 297 */
									int BgL_auxz00_2536;

									BgL_auxz00_2536 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_auxz00_2536, BgL_val1_1909z00_1002);
								}
								{	/* Rgc/rgcposix.scm 297 */
									obj_t BgL_auxz00_2541;

									int BgL_auxz00_2539;

									BgL_auxz00_2541 = BINT(BgL_val2_1910z00_1003);
									BgL_auxz00_2539 = (int) (((long) 2));
									BGL_MVALUES_VAL_SET(BgL_auxz00_2539, BgL_auxz00_2541);
								}
								return BgL_val0_1908z00_1001;
							}
						else
							{	/* Rgc/rgcposix.scm 301 */
								obj_t BgL_mz00_1014;

								{	/* Rgc/rgcposix.scm 301 */
									obj_t BgL_arg2073z00_1018;

									BgL_arg2073z00_1018 =
										c_substring(BgL_sz00_18,
										(long) CINT(BgL_iz00_19), (long) CINT(BgL_rbz00_999));
									{	/* Ieee/number.scm 134 */

										BgL_mz00_1014 =
											BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
											(BgL_arg2073z00_1018, BINT(((long) 10)));
								}}
								{	/* Rgc/rgcposix.scm 302 */
									long BgL_val2_1913z00_1017;

									BgL_val2_1913z00_1017 =
										((long) CINT(BgL_rbz00_999) + ((long) 1));
									{	/* Rgc/rgcposix.scm 302 */
										int BgL_auxz00_2551;

										BgL_auxz00_2551 = (int) (((long) 3));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_2551);
									}
									{	/* Rgc/rgcposix.scm 302 */
										int BgL_auxz00_2554;

										BgL_auxz00_2554 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_2554, BgL_mz00_1014);
									}
									{	/* Rgc/rgcposix.scm 302 */
										obj_t BgL_auxz00_2559;

										int BgL_auxz00_2557;

										BgL_auxz00_2559 = BINT(BgL_val2_1913z00_1017);
										BgL_auxz00_2557 = (int) (((long) 2));
										BGL_MVALUES_VAL_SET(BgL_auxz00_2557, BgL_auxz00_2559);
									}
									return BgL_mz00_1014;
								}
							}
					}
				else
					{	/* Rgc/rgcposix.scm 295 */
						return
							BGl_errorz00zz__errorz00(BFALSE,
							BGl_string2374z00zz__rgc_posixz00,
							BGl_za2errzd2stringza2zd2zz__rgc_posixz00);
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__rgc_posixz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcposix.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__rgc_posixz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcposix.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__rgc_posixz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcposix.scm 14 */
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2375z00zz__rgc_posixz00));
		}
	}

#ifdef __cplusplus
}
#endif
