/*===========================================================================*/
/*   (Lalr/rewrite.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Lalr/rewrite.scm -indent -o objs/obj_u/Lalr/rewrite.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_list2254z00zz__lalr_rewritez00 = BUNSPEC;
	static bool_t BGl_makezd2symzd2tablez00zz__lalr_rewritez00();
	static obj_t BGl_list2263z00zz__lalr_rewritez00 = BUNSPEC;
	static obj_t BGl__rewritezd2grammarz12zc0zz__lalr_rewritez00(obj_t, obj_t);
	static obj_t BGl_list2272z00zz__lalr_rewritez00 = BUNSPEC;
	static long BGl_za2maxzd2ntza2zd2zz__lalr_rewritez00;
	extern obj_t BGl_zb2zb2zz__r4_numbers_6_5z00(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__lalr_rewritez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__lalr_rewritez00();
	extern obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static long BGl_setzd2ntzd2noz12z12zz__lalr_rewritez00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__lalr_rewritez00();
	extern obj_t BGl_nsymsz00zz__lalr_globalz00;
	static obj_t BGl_setzd2symzd2noz12z12zz__lalr_rewritez00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__lalr_rewritez00();
	extern obj_t BGl_ntermsz00zz__lalr_globalz00;
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_nrulesz00zz__lalr_globalz00;
	static obj_t BGl_symbol2245z00zz__lalr_rewritez00 = BUNSPEC;
	static obj_t BGl_symbol2247z00zz__lalr_rewritez00 = BUNSPEC;
	static obj_t BGl_symbol2249z00zz__lalr_rewritez00 = BUNSPEC;
	static obj_t BGl_symbol2251z00zz__lalr_rewritez00 = BUNSPEC;
	static obj_t BGl_symbol2255z00zz__lalr_rewritez00 = BUNSPEC;
	static obj_t BGl_symbol2257z00zz__lalr_rewritez00 = BUNSPEC;
	extern obj_t bstring_to_keyword(obj_t);
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__lalr_rewritez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__lalr_globalz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zz__lalr_rewritez00();
	extern long bgl_list_length(obj_t);
	extern obj_t BGl_rempropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rewritezd2grammarz12zc0zz__lalr_rewritez00(obj_t);
	extern obj_t BGl_nitemsz00zz__lalr_globalz00;
	extern obj_t string_to_symbol(char *);
	static obj_t BGl_keyword2264z00zz__lalr_rewritez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_cleanzd2plistzd2zz__lalr_rewritez00();
	extern obj_t bgl_reverse(obj_t);
	static obj_t BGl_keyword2266z00zz__lalr_rewritez00 = BUNSPEC;
	static obj_t BGl_keyword2268z00zz__lalr_rewritez00 = BUNSPEC;
	extern obj_t BGl_nvarsz00zz__lalr_globalz00;
	BGL_EXPORTED_DEF obj_t BGl_za2symvza2z00zz__lalr_rewritez00 = BUNSPEC;
	extern obj_t make_vector(int, obj_t);
	static obj_t BGl_symbolzd2ze3symbolzf2bindingzc3zz__lalr_rewritez00(obj_t);
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static long BGl_za2maxzd2termza2zd2zz__lalr_rewritez00;
	extern obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	extern obj_t BGl_stringzd2ze3listz31zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_za2plistza2z00zz__lalr_rewritez00 = BUNSPEC;
	static obj_t BGl__cleanzd2plistzd2zz__lalr_rewritez00(obj_t);
	extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__lalr_rewritez00();
	extern obj_t BGl_grammarz00zz__lalr_globalz00;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rewritezd2grammarz12zd2envz12zz__lalr_rewritez00,
		BgL_bgl__rewriteza7d2gramm2277za7,
		BGl__rewritezd2grammarz12zc0zz__lalr_rewritez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cleanzd2plistzd2envz00zz__lalr_rewritez00,
		BgL_bgl__cleanza7d2plistza7d2278z00,
		BGl__cleanzd2plistzd2zz__lalr_rewritez00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2246z00zz__lalr_rewritez00,
		BgL_bgl_string2246za700za7za7_2279za7, "nt?", 3);
	      DEFINE_STRING(BGl_string2248z00zz__lalr_rewritez00,
		BgL_bgl_string2248za700za7za7_2280za7, "prec", 4);
	      DEFINE_STRING(BGl_string2250z00zz__lalr_rewritez00,
		BgL_bgl_string2250za700za7za7_2281za7, "sym-no", 6);
	      DEFINE_STRING(BGl_string2252z00zz__lalr_rewritez00,
		BgL_bgl_string2252za700za7za7_2282za7, "lalr-grammar", 12);
	      DEFINE_STRING(BGl_string2253z00zz__lalr_rewritez00,
		BgL_bgl_string2253za700za7za7_2283za7, "Grammar symbol already defined",
		30);
	      DEFINE_STRING(BGl_string2256z00zz__lalr_rewritez00,
		BgL_bgl_string2256za700za7za7_2284za7, "*eoi*", 5);
	      DEFINE_STRING(BGl_string2258z00zz__lalr_rewritez00,
		BgL_bgl_string2258za700za7za7_2285za7, "*start*", 7);
	      DEFINE_STRING(BGl_string2260z00zz__lalr_rewritez00,
		BgL_bgl_string2260za700za7za7_2286za7, "LHS must be a symbol", 20);
	      DEFINE_STRING(BGl_string2259z00zz__lalr_rewritez00,
		BgL_bgl_string2259za700za7za7_2287za7, "Non-terminal defined twice", 26);
	      DEFINE_STRING(BGl_string2261z00zz__lalr_rewritez00,
		BgL_bgl_string2261za700za7za7_2288za7, "Bad rule specification", 22);
	      DEFINE_STRING(BGl_string2262z00zz__lalr_rewritez00,
		BgL_bgl_string2262za700za7za7_2289za7, "Ill-formed grammar", 18);
	      DEFINE_STRING(BGl_string2265z00zz__lalr_rewritez00,
		BgL_bgl_string2265za700za7za7_2290za7, "left", 4);
	      DEFINE_STRING(BGl_string2267z00zz__lalr_rewritez00,
		BgL_bgl_string2267za700za7za7_2291za7, "right", 5);
	      DEFINE_STRING(BGl_string2270z00zz__lalr_rewritez00,
		BgL_bgl_string2270za700za7za7_2292za7, "Bad terminal", 12);
	      DEFINE_STRING(BGl_string2269z00zz__lalr_rewritez00,
		BgL_bgl_string2269za700za7za7_2293za7, "none", 4);
	      DEFINE_STRING(BGl_string2271z00zz__lalr_rewritez00,
		BgL_bgl_string2271za700za7za7_2294za7, "Invalid semantic action", 23);
	      DEFINE_STRING(BGl_string2273z00zz__lalr_rewritez00,
		BgL_bgl_string2273za700za7za7_2295za7, "Undefined symbol", 16);
	      DEFINE_STRING(BGl_string2274z00zz__lalr_rewritez00,
		BgL_bgl_string2274za700za7za7_2296za7, "Invalid symbol in right-hand side",
		33);
	      DEFINE_STRING(BGl_string2275z00zz__lalr_rewritez00,
		BgL_bgl_string2275za700za7za7_2297za7, "Bad right-hand side", 19);
	      DEFINE_STRING(BGl_string2276z00zz__lalr_rewritez00,
		BgL_bgl_string2276za700za7za7_2298za7, "__lalr_rewrite", 14);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__lalr_rewritez00(long
		BgL_checksumz00_1610, char *BgL_fromz00_1611)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__lalr_rewritez00))
				{
					BGl_requirezd2initializa7ationz75zz__lalr_rewritez00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__lalr_rewritez00();
					BGl_importedzd2moduleszd2initz00zz__lalr_rewritez00();
					BGl_toplevelzd2initzd2zz__lalr_rewritez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__lalr_rewritez00()
	{
		AN_OBJECT;
		{	/* Lalr/rewrite.scm 11 */
			BGl_symbol2245z00zz__lalr_rewritez00 =
				bstring_to_symbol(BGl_string2246z00zz__lalr_rewritez00);
			BGl_symbol2247z00zz__lalr_rewritez00 =
				bstring_to_symbol(BGl_string2248z00zz__lalr_rewritez00);
			BGl_symbol2249z00zz__lalr_rewritez00 =
				bstring_to_symbol(BGl_string2250z00zz__lalr_rewritez00);
			BGl_symbol2251z00zz__lalr_rewritez00 =
				bstring_to_symbol(BGl_string2252z00zz__lalr_rewritez00);
			BGl_symbol2255z00zz__lalr_rewritez00 =
				bstring_to_symbol(BGl_string2256z00zz__lalr_rewritez00);
			BGl_symbol2257z00zz__lalr_rewritez00 =
				bstring_to_symbol(BGl_string2258z00zz__lalr_rewritez00);
			BGl_list2254z00zz__lalr_rewritez00 =
				MAKE_PAIR(BGl_symbol2255z00zz__lalr_rewritez00,
				MAKE_PAIR(BGl_symbol2257z00zz__lalr_rewritez00, BNIL));
			BGl_keyword2264z00zz__lalr_rewritez00 =
				bstring_to_keyword(BGl_string2265z00zz__lalr_rewritez00);
			BGl_keyword2266z00zz__lalr_rewritez00 =
				bstring_to_keyword(BGl_string2267z00zz__lalr_rewritez00);
			BGl_keyword2268z00zz__lalr_rewritez00 =
				bstring_to_keyword(BGl_string2269z00zz__lalr_rewritez00);
			BGl_list2263z00zz__lalr_rewritez00 =
				MAKE_PAIR(BGl_keyword2264z00zz__lalr_rewritez00,
				MAKE_PAIR(BGl_keyword2266z00zz__lalr_rewritez00,
					MAKE_PAIR(BGl_keyword2268z00zz__lalr_rewritez00, BNIL)));
			return (BGl_list2272z00zz__lalr_rewritez00 =
				MAKE_PAIR(BBOOL(((bool_t) 0)), BNIL), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__lalr_rewritez00()
	{
		AN_OBJECT;
		{	/* Lalr/rewrite.scm 11 */
			BGl_za2plistza2z00zz__lalr_rewritez00 = BFALSE;
			BGl_za2symvza2z00zz__lalr_rewritez00 = BFALSE;
			BGl_za2maxzd2termza2zd2zz__lalr_rewritez00 = ((long) 0);
			return (BGl_za2maxzd2ntza2zd2zz__lalr_rewritez00 = ((long) 1), BUNSPEC);
		}
	}



/* clean-plist */
	BGL_EXPORTED_DEF obj_t BGl_cleanzd2plistzd2zz__lalr_rewritez00()
	{
		AN_OBJECT;
		{	/* Lalr/rewrite.scm 53 */
			{
				obj_t BgL_lz00_774;

				{	/* Lalr/rewrite.scm 54 */
					bool_t BgL_auxz00_1634;

					BgL_lz00_774 = BGl_za2plistza2z00zz__lalr_rewritez00;
				BgL_zc3anonymousza31898ze3z83_775:
					if (PAIRP(BgL_lz00_774))
						{	/* Lalr/rewrite.scm 56 */
							obj_t BgL_symz00_777;

							BgL_symz00_777 = CAR(BgL_lz00_774);
							if (CBOOL(BGl_getpropz00zz__r4_symbols_6_4z00(BgL_symz00_777,
										BGl_symbol2245z00zz__lalr_rewritez00)))
								{	/* Lalr/rewrite.scm 57 */
									BGl_rempropz12z12zz__r4_symbols_6_4z00(BgL_symz00_777,
										BGl_symbol2245z00zz__lalr_rewritez00);
								}
							else
								{	/* Lalr/rewrite.scm 57 */
									BFALSE;
								}
							if (CBOOL(BGl_getpropz00zz__r4_symbols_6_4z00(BgL_symz00_777,
										BGl_symbol2247z00zz__lalr_rewritez00)))
								{	/* Lalr/rewrite.scm 59 */
									BGl_rempropz12z12zz__r4_symbols_6_4z00(BgL_symz00_777,
										BGl_symbol2247z00zz__lalr_rewritez00);
								}
							else
								{	/* Lalr/rewrite.scm 59 */
									BFALSE;
								}
							BGl_rempropz12z12zz__r4_symbols_6_4z00(BgL_symz00_777,
								BGl_symbol2249z00zz__lalr_rewritez00);
							{
								obj_t BgL_lz00_1647;

								BgL_lz00_1647 = CDR(BgL_lz00_774);
								BgL_lz00_774 = BgL_lz00_1647;
								goto BgL_zc3anonymousza31898ze3z83_775;
							}
						}
					else
						{	/* Lalr/rewrite.scm 55 */
							BgL_auxz00_1634 = ((bool_t) 0);
						}
					return BBOOL(BgL_auxz00_1634);
				}
			}
		}
	}



/* _clean-plist */
	obj_t BGl__cleanzd2plistzd2zz__lalr_rewritez00(obj_t BgL_envz00_1607)
	{
		AN_OBJECT;
		{	/* Lalr/rewrite.scm 53 */
			return BGl_cleanzd2plistzd2zz__lalr_rewritez00();
		}
	}



/* make-sym-table */
	bool_t BGl_makezd2symzd2tablez00zz__lalr_rewritez00()
	{
		AN_OBJECT;
		{	/* Lalr/rewrite.scm 67 */
			BGl_za2symvza2z00zz__lalr_rewritez00 =
				make_vector((int) (BGl_za2maxzd2termza2zd2zz__lalr_rewritez00), BFALSE);
			{
				obj_t BgL_lz00_783;

				BgL_lz00_783 = BGl_za2plistza2z00zz__lalr_rewritez00;
			BgL_zc3anonymousza31903ze3z83_784:
				if (PAIRP(BgL_lz00_783))
					{	/* Lalr/rewrite.scm 71 */
						obj_t BgL_symz00_786;

						BgL_symz00_786 = CAR(BgL_lz00_783);
						{	/* Lalr/rewrite.scm 72 */
							obj_t BgL_arg1905z00_787;

							BgL_arg1905z00_787 =
								BGl_getpropz00zz__r4_symbols_6_4z00(BgL_symz00_786,
								BGl_symbol2249z00zz__lalr_rewritez00);
							VECTOR_SET(BGl_za2symvza2z00zz__lalr_rewritez00,
								CINT(BgL_arg1905z00_787), BgL_symz00_786);
						}
						{
							obj_t BgL_lz00_1659;

							BgL_lz00_1659 = CDR(BgL_lz00_783);
							BgL_lz00_783 = BgL_lz00_1659;
							goto BgL_zc3anonymousza31903ze3z83_784;
						}
					}
				else
					{	/* Lalr/rewrite.scm 70 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* set-nt-no! */
	long BGl_setzd2ntzd2noz12z12zz__lalr_rewritez00(obj_t BgL_symz00_1)
	{
		AN_OBJECT;
		{	/* Lalr/rewrite.scm 82 */
			{	/* Lalr/rewrite.scm 83 */
				long BgL_xz00_790;

				BgL_xz00_790 = BGl_za2maxzd2ntza2zd2zz__lalr_rewritez00;
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_symz00_1,
					BGl_symbol2245z00zz__lalr_rewritez00, BTRUE);
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_symz00_1,
					BGl_symbol2249z00zz__lalr_rewritez00,
					BINT(BGl_za2maxzd2ntza2zd2zz__lalr_rewritez00));
				BGl_za2maxzd2ntza2zd2zz__lalr_rewritez00 =
					(long)
					CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT
						(BGl_za2maxzd2ntza2zd2zz__lalr_rewritez00), BINT(((long) 1))));
				BGl_za2plistza2z00zz__lalr_rewritez00 =
					MAKE_PAIR(BgL_symz00_1, BGl_za2plistza2z00zz__lalr_rewritez00);
				return BgL_xz00_790;
			}
		}
	}



/* set-sym-no! */
	obj_t BGl_setzd2symzd2noz12z12zz__lalr_rewritez00(obj_t BgL_symz00_2)
	{
		AN_OBJECT;
		{	/* Lalr/rewrite.scm 90 */
			{	/* Lalr/rewrite.scm 91 */
				obj_t BgL_xz00_791;

				BgL_xz00_791 =
					BGl_getpropz00zz__r4_symbols_6_4z00(BgL_symz00_2,
					BGl_symbol2249z00zz__lalr_rewritez00);
				if (CBOOL(BgL_xz00_791))
					{	/* Lalr/rewrite.scm 92 */
						return
							BGl_errorz00zz__errorz00(BGl_symbol2251z00zz__lalr_rewritez00,
							BGl_string2253z00zz__lalr_rewritez00, BgL_symz00_2);
					}
				else
					{	/* Lalr/rewrite.scm 94 */
						long BgL_yz00_792;

						BgL_yz00_792 = BGl_za2maxzd2termza2zd2zz__lalr_rewritez00;
						BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_symz00_2,
							BGl_symbol2249z00zz__lalr_rewritez00,
							BINT(BGl_za2maxzd2termza2zd2zz__lalr_rewritez00));
						BGl_za2plistza2z00zz__lalr_rewritez00 =
							MAKE_PAIR(BgL_symz00_2, BGl_za2plistza2z00zz__lalr_rewritez00);
						BGl_za2maxzd2termza2zd2zz__lalr_rewritez00 =
							(long)
							CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT
								(BGl_za2maxzd2termza2zd2zz__lalr_rewritez00),
								BINT(((long) 1))));
						return BINT(BgL_yz00_792);
					}
			}
		}
	}



/* symbol->symbol/binding */
	obj_t BGl_symbolzd2ze3symbolzf2bindingzc3zz__lalr_rewritez00(obj_t
		BgL_symz00_4)
	{
		AN_OBJECT;
		{	/* Lalr/rewrite.scm 104 */
			{	/* Lalr/rewrite.scm 105 */
				obj_t BgL_g1824z00_794;

				{	/* Lalr/rewrite.scm 105 */
					obj_t BgL_arg1920z00_812;

					{	/* Lalr/rewrite.scm 105 */
						obj_t BgL_res2235z00_1362;

						{	/* Lalr/rewrite.scm 105 */
							obj_t BgL_arg2150z00_1361;

							BgL_arg2150z00_1361 = SYMBOL_TO_STRING(BgL_symz00_4);
							BgL_res2235z00_1362 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2150z00_1361);
						}
						BgL_arg1920z00_812 = BgL_res2235z00_1362;
					}
					BgL_g1824z00_794 =
						BGl_stringzd2ze3listz31zz__r4_strings_6_7z00(BgL_arg1920z00_812);
				}
				{
					obj_t BgL_lz00_797;

					obj_t BgL_prefixz00_798;

					BgL_lz00_797 = BgL_g1824z00_794;
					BgL_prefixz00_798 = BNIL;
				BgL_zc3anonymousza31908ze3z83_799:
					if (NULLP(BgL_lz00_797))
						{	/* Lalr/rewrite.scm 107 */
							return BgL_symz00_4;
						}
					else
						{	/* Lalr/rewrite.scm 109 */
							obj_t BgL_cz00_801;

							obj_t BgL_rz00_802;

							BgL_cz00_801 = CAR(BgL_lz00_797);
							BgL_rz00_802 = CDR(BgL_lz00_797);
							if ((CCHAR(BgL_cz00_801) == ((unsigned char) '@')))
								{	/* Lalr/rewrite.scm 111 */
									if (NULLP(BgL_rz00_802))
										{	/* Lalr/rewrite.scm 112 */
											return BgL_symz00_4;
										}
									else
										{	/* Lalr/rewrite.scm 114 */
											obj_t BgL_arg1912z00_805;

											obj_t BgL_arg1914z00_806;

											{	/* Lalr/rewrite.scm 114 */
												obj_t BgL_arg1915z00_807;

												BgL_arg1915z00_807 =
													BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
													(bgl_reverse(BgL_prefixz00_798));
												BgL_arg1912z00_805 =
													string_to_symbol(BSTRING_TO_STRING
													(BgL_arg1915z00_807));
											}
											{	/* Lalr/rewrite.scm 115 */
												obj_t BgL_arg1918z00_809;

												BgL_arg1918z00_809 =
													BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
													(BgL_rz00_802);
												BgL_arg1914z00_806 =
													string_to_symbol(BSTRING_TO_STRING
													(BgL_arg1918z00_809));
											}
											return MAKE_PAIR(BgL_arg1912z00_805, BgL_arg1914z00_806);
										}
								}
							else
								{	/* Lalr/rewrite.scm 116 */
									obj_t BgL_arg1919z00_810;

									BgL_arg1919z00_810 =
										MAKE_PAIR(BgL_cz00_801, BgL_prefixz00_798);
									{
										obj_t BgL_prefixz00_1703;

										obj_t BgL_lz00_1702;

										BgL_lz00_1702 = BgL_rz00_802;
										BgL_prefixz00_1703 = BgL_arg1919z00_810;
										BgL_prefixz00_798 = BgL_prefixz00_1703;
										BgL_lz00_797 = BgL_lz00_1702;
										goto BgL_zc3anonymousza31908ze3z83_799;
									}
								}
						}
				}
			}
		}
	}



/* rewrite-grammar! */
	BGL_EXPORTED_DEF obj_t BGl_rewritezd2grammarz12zc0zz__lalr_rewritez00(obj_t
		BgL_gramz00_5)
	{
		AN_OBJECT;
		{	/* Lalr/rewrite.scm 122 */
			{	/* Lalr/rewrite.scm 123 */
				obj_t BgL_thezd2ruleszd2_813;

				obj_t BgL_terminalsz00_814;

				obj_t BgL_nozd2itemszd2_815;

				obj_t BgL_nozd2ruleszd2_816;

				obj_t BgL_preczd2levelzd2_817;

				BgL_thezd2ruleszd2_813 = BUNSPEC;
				BgL_terminalsz00_814 = BUNSPEC;
				BgL_nozd2itemszd2_815 = BUNSPEC;
				BgL_nozd2ruleszd2_816 = BUNSPEC;
				BgL_preczd2levelzd2_817 = BUNSPEC;
				BgL_thezd2ruleszd2_813 = CDR(BgL_gramz00_5);
				BgL_terminalsz00_814 = CAR(BgL_gramz00_5);
				BgL_nozd2itemszd2_815 = BINT(((long) 0));
				BgL_nozd2ruleszd2_816 = BINT(((long) 0));
				BgL_preczd2levelzd2_817 = BINT(((long) 0));
				BGl_za2plistza2z00zz__lalr_rewritez00 =
					BGl_list2254z00zz__lalr_rewritez00;
				BGl_za2maxzd2ntza2zd2zz__lalr_rewritez00 = ((long) 1);
				{
					obj_t BgL_lz00_819;

					BgL_lz00_819 = BgL_thezd2ruleszd2_813;
				BgL_zc3anonymousza31921ze3z83_820:
					if (PAIRP(BgL_lz00_819))
						{	/* Lalr/rewrite.scm 136 */
							obj_t BgL_prodsz00_822;

							BgL_prodsz00_822 = CAR(BgL_lz00_819);
							if (PAIRP(BgL_prodsz00_822))
								{	/* Lalr/rewrite.scm 138 */
									obj_t BgL_lhsz00_824;

									BgL_lhsz00_824 = CAR(BgL_prodsz00_822);
									if (SYMBOLP(BgL_lhsz00_824))
										{	/* Lalr/rewrite.scm 139 */
											if (CBOOL(BGl_getpropz00zz__r4_symbols_6_4z00
													(BgL_lhsz00_824,
														BGl_symbol2245z00zz__lalr_rewritez00)))
												{	/* Lalr/rewrite.scm 140 */
													BGl_errorz00zz__errorz00
														(BGl_symbol2251z00zz__lalr_rewritez00,
														BGl_string2259z00zz__lalr_rewritez00,
														BgL_lhsz00_824);
												}
											else
												{	/* Lalr/rewrite.scm 140 */
													BGl_setzd2ntzd2noz12z12zz__lalr_rewritez00
														(BgL_lhsz00_824);
													{
														obj_t BgL_lz00_1722;

														BgL_lz00_1722 = CDR(BgL_lz00_819);
														BgL_lz00_819 = BgL_lz00_1722;
														goto BgL_zc3anonymousza31921ze3z83_820;
													}
												}
										}
									else
										{	/* Lalr/rewrite.scm 139 */
											BGl_errorz00zz__errorz00
												(BGl_symbol2251z00zz__lalr_rewritez00,
												BGl_string2260z00zz__lalr_rewritez00, BgL_lhsz00_824);
										}
								}
							else
								{	/* Lalr/rewrite.scm 137 */
									BGl_errorz00zz__errorz00(BGl_symbol2251z00zz__lalr_rewritez00,
										BGl_string2261z00zz__lalr_rewritez00, BgL_prodsz00_822);
								}
						}
					else
						{	/* Lalr/rewrite.scm 135 */
							if (NULLP(BgL_lz00_819))
								{	/* Lalr/rewrite.scm 153 */
									BFALSE;
								}
							else
								{	/* Lalr/rewrite.scm 153 */
									BGl_errorz00zz__errorz00(BGl_symbol2251z00zz__lalr_rewritez00,
										BGl_string2262z00zz__lalr_rewritez00, BgL_lz00_819);
								}
						}
				}
				BGl_za2maxzd2termza2zd2zz__lalr_rewritez00 =
					(long)
					CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT
						(BGl_za2maxzd2ntza2zd2zz__lalr_rewritez00), BINT(((long) 1))));
				BGl_putpropz12z12zz__r4_symbols_6_4z00
					(BGl_symbol2255z00zz__lalr_rewritez00,
					BGl_symbol2249z00zz__lalr_rewritez00,
					BINT(BGl_za2maxzd2ntza2zd2zz__lalr_rewritez00));
				BGl_putpropz12z12zz__r4_symbols_6_4z00
					(BGl_symbol2257z00zz__lalr_rewritez00,
					BGl_symbol2249z00zz__lalr_rewritez00, BINT(((long) 0)));
				BGl_putpropz12z12zz__r4_symbols_6_4z00
					(BGl_symbol2257z00zz__lalr_rewritez00,
					BGl_symbol2245z00zz__lalr_rewritez00, BTRUE);
				{
					obj_t BgL_l1855z00_831;

					BgL_l1855z00_831 = BgL_terminalsz00_814;
				BgL_zc3anonymousza31928ze3z83_832:
					if (PAIRP(BgL_l1855z00_831))
						{	/* Lalr/rewrite.scm 165 */
							{	/* Lalr/rewrite.scm 168 */
								obj_t BgL_tz00_834;

								BgL_tz00_834 = CAR(BgL_l1855z00_831);
								if (SYMBOLP(BgL_tz00_834))
									{	/* Lalr/rewrite.scm 168 */
										BGl_setzd2symzd2noz12z12zz__lalr_rewritez00(BgL_tz00_834);
									}
								else
									{	/* Lalr/rewrite.scm 170 */
										bool_t BgL_testz00_1744;

										if (PAIRP(BgL_tz00_834))
											{	/* Lalr/rewrite.scm 170 */
												BgL_testz00_1744 =
													CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR
														(BgL_tz00_834),
														BGl_list2263z00zz__lalr_rewritez00));
											}
										else
											{	/* Lalr/rewrite.scm 170 */
												BgL_testz00_1744 = ((bool_t) 0);
											}
										if (BgL_testz00_1744)
											{	/* Lalr/rewrite.scm 170 */
												{	/* Lalr/rewrite.scm 171 */
													long BgL_za71za7_1385;

													BgL_za71za7_1385 =
														(long) CINT(BgL_preczd2levelzd2_817);
													BgL_preczd2levelzd2_817 =
														BINT((BgL_za71za7_1385 + ((long) 1)));
												}
												{	/* Lalr/rewrite.scm 172 */
													obj_t BgL_g1854z00_837;

													BgL_g1854z00_837 = CDR(BgL_tz00_834);
													{
														obj_t BgL_l1852z00_839;

														{	/* Lalr/rewrite.scm 178 */
															bool_t BgL_auxz00_1754;

															BgL_l1852z00_839 = BgL_g1854z00_837;
														BgL_zc3anonymousza31932ze3z83_840:
															if (PAIRP(BgL_l1852z00_839))
																{	/* Lalr/rewrite.scm 178 */
																	{	/* Lalr/rewrite.scm 177 */
																		obj_t BgL_innerzd2tzd2_842;

																		BgL_innerzd2tzd2_842 =
																			CAR(BgL_l1852z00_839);
																		if (SYMBOLP(BgL_innerzd2tzd2_842))
																			{	/* Lalr/rewrite.scm 174 */
																				BFALSE;
																			}
																		else
																			{	/* Lalr/rewrite.scm 174 */
																				BGl_errorz00zz__errorz00
																					(BGl_symbol2251z00zz__lalr_rewritez00,
																					BGl_string2270z00zz__lalr_rewritez00,
																					BgL_innerzd2tzd2_842);
																			}
																		BGl_setzd2symzd2noz12z12zz__lalr_rewritez00
																			(BgL_innerzd2tzd2_842);
																		{	/* Lalr/rewrite.scm 177 */
																			obj_t BgL_arg1935z00_844;

																			obj_t BgL_arg1937z00_845;

																			BgL_arg1935z00_844 =
																				BGl_symbol2247z00zz__lalr_rewritez00;
																			{	/* Lalr/rewrite.scm 177 */
																				obj_t BgL_arg1938z00_846;

																				BgL_arg1938z00_846 = CAR(BgL_tz00_834);
																				BgL_arg1937z00_845 =
																					MAKE_PAIR(BgL_arg1938z00_846,
																					BgL_preczd2levelzd2_817);
																			}
																			BGl_putpropz12z12zz__r4_symbols_6_4z00
																				(BgL_innerzd2tzd2_842,
																				BgL_arg1935z00_844, BgL_arg1937z00_845);
																		}
																	}
																	{
																		obj_t BgL_l1852z00_1765;

																		BgL_l1852z00_1765 = CDR(BgL_l1852z00_839);
																		BgL_l1852z00_839 = BgL_l1852z00_1765;
																		goto BgL_zc3anonymousza31932ze3z83_840;
																	}
																}
															else
																{	/* Lalr/rewrite.scm 178 */
																	BgL_auxz00_1754 = ((bool_t) 1);
																}
															BBOOL(BgL_auxz00_1754);
														}
													}
												}
											}
										else
											{	/* Lalr/rewrite.scm 170 */
												BGl_errorz00zz__errorz00
													(BGl_symbol2251z00zz__lalr_rewritez00,
													BGl_string2270z00zz__lalr_rewritez00, BgL_tz00_834);
											}
									}
							}
							{
								obj_t BgL_l1855z00_1769;

								BgL_l1855z00_1769 = CDR(BgL_l1855z00_831);
								BgL_l1855z00_831 = BgL_l1855z00_1769;
								goto BgL_zc3anonymousza31928ze3z83_832;
							}
						}
					else
						{	/* Lalr/rewrite.scm 165 */
							((bool_t) 1);
						}
				}
				{
					obj_t BgL_lz00_855;

					BgL_lz00_855 = BgL_thezd2ruleszd2_813;
				BgL_zc3anonymousza31945ze3z83_856:
					if (PAIRP(BgL_lz00_855))
						{	/* Lalr/rewrite.scm 187 */
							obj_t BgL_rulesz00_858;

							BgL_rulesz00_858 = CAR(BgL_lz00_855);
							{	/* Lalr/rewrite.scm 188 */

								{	/* Lalr/rewrite.scm 189 */
									obj_t BgL_g1826z00_860;

									BgL_g1826z00_860 = CDR(BgL_rulesz00_858);
									{
										obj_t BgL_rhszd2lzd2_862;

										BgL_rhszd2lzd2_862 = BgL_g1826z00_860;
									BgL_zc3anonymousza31947ze3z83_863:
										if (NULLP(BgL_rhszd2lzd2_862))
											{
												obj_t BgL_lz00_1777;

												BgL_lz00_1777 = CDR(BgL_lz00_855);
												BgL_lz00_855 = BgL_lz00_1777;
												goto BgL_zc3anonymousza31945ze3z83_856;
											}
										else
											{	/* Lalr/rewrite.scm 191 */
												if (PAIRP(BgL_rhszd2lzd2_862))
													{	/* Lalr/rewrite.scm 194 */
														obj_t BgL_rhszf2actionzf2_867;

														BgL_rhszf2actionzf2_867 = CAR(BgL_rhszd2lzd2_862);
														BgL_nozd2ruleszd2_816 =
															BGl_2zb2zb2zz__r4_numbers_6_5z00
															(BgL_nozd2ruleszd2_816, BINT(((long) 1)));
														if (PAIRP(BgL_rhszf2actionzf2_867))
															{	/* Lalr/rewrite.scm 197 */
																obj_t BgL_actionz00_869;

																BgL_actionz00_869 =
																	CDR(BgL_rhszf2actionzf2_867);
																if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
																	(BgL_actionz00_869))
																	{	/* Lalr/rewrite.scm 198 */
																		BFALSE;
																	}
																else
																	{	/* Lalr/rewrite.scm 198 */
																		BGl_errorz00zz__errorz00
																			(BGl_symbol2251z00zz__lalr_rewritez00,
																			BGl_string2271z00zz__lalr_rewritez00,
																			BgL_rhszf2actionzf2_867);
																	}
																if (NULLP(BgL_actionz00_869))
																	{	/* Lalr/rewrite.scm 200 */
																		SET_CDR(BgL_rhszf2actionzf2_867,
																			BGl_list2272z00zz__lalr_rewritez00);
																	}
																else
																	{	/* Lalr/rewrite.scm 200 */
																		BFALSE;
																	}
																{	/* Lalr/rewrite.scm 202 */
																	obj_t BgL_g1827z00_872;

																	BgL_g1827z00_872 =
																		CAR(BgL_rhszf2actionzf2_867);
																	{
																		obj_t BgL_rhsz00_874;

																		BgL_rhsz00_874 = BgL_g1827z00_872;
																	BgL_zc3anonymousza31954ze3z83_875:
																		if (NULLP(BgL_rhsz00_874))
																			{	/* Lalr/rewrite.scm 204 */
																				{	/* Lalr/rewrite.scm 206 */
																					obj_t BgL_arg1956z00_877;

																					{	/* Lalr/rewrite.scm 206 */
																						long BgL_arg1957z00_878;

																						BgL_arg1957z00_878 =
																							bgl_list_length(CAR
																							(BgL_rhszf2actionzf2_867));
																						{	/* Lalr/rewrite.scm 206 */
																							obj_t BgL_list1959z00_880;

																							{	/* Lalr/rewrite.scm 206 */
																								obj_t BgL_arg1960z00_881;

																								BgL_arg1960z00_881 =
																									MAKE_PAIR(BINT(((long) 1)),
																									BNIL);
																								BgL_list1959z00_880 =
																									MAKE_PAIR(BINT
																									(BgL_arg1957z00_878),
																									BgL_arg1960z00_881);
																							}
																							BgL_arg1956z00_877 =
																								BGl_zb2zb2zz__r4_numbers_6_5z00
																								(BgL_list1959z00_880);
																					}}
																					BgL_nozd2itemszd2_815 =
																						BGl_2zb2zb2zz__r4_numbers_6_5z00
																						(BgL_nozd2itemszd2_815,
																						BgL_arg1956z00_877);
																				}
																				{
																					obj_t BgL_rhszd2lzd2_1804;

																					BgL_rhszd2lzd2_1804 =
																						CDR(BgL_rhszd2lzd2_862);
																					BgL_rhszd2lzd2_862 =
																						BgL_rhszd2lzd2_1804;
																					goto
																						BgL_zc3anonymousza31947ze3z83_863;
																				}
																			}
																		else
																			{	/* Lalr/rewrite.scm 204 */
																				if (PAIRP(BgL_rhsz00_874))
																					{	/* Lalr/rewrite.scm 209 */
																						obj_t BgL_symz00_885;

																						BgL_symz00_885 =
																							CAR(BgL_rhsz00_874);
																						if (SYMBOLP(BgL_symz00_885))
																							{	/* Lalr/rewrite.scm 211 */
																								obj_t BgL_symzf2varzf2_887;

																								BgL_symzf2varzf2_887 =
																									BGl_symbolzd2ze3symbolzf2bindingzc3zz__lalr_rewritez00
																									(BgL_symz00_885);
																								{	/* Lalr/rewrite.scm 211 */
																									obj_t BgL_thezd2symzd2_888;

																									if (SYMBOLP
																										(BgL_symzf2varzf2_887))
																										{	/* Lalr/rewrite.scm 212 */
																											BgL_thezd2symzd2_888 =
																												BgL_symzf2varzf2_887;
																										}
																									else
																										{	/* Lalr/rewrite.scm 212 */
																											BgL_thezd2symzd2_888 =
																												CAR
																												(BgL_symzf2varzf2_887);
																										}
																									{	/* Lalr/rewrite.scm 212 */

																										SET_CAR(BgL_rhsz00_874,
																											BgL_symzf2varzf2_887);
																										if (CBOOL
																											(BGl_getpropz00zz__r4_symbols_6_4z00
																												(BgL_thezd2symzd2_888,
																													BGl_symbol2249z00zz__lalr_rewritez00)))
																											{	/* Lalr/rewrite.scm 216 */
																												BFALSE;
																											}
																										else
																											{	/* Lalr/rewrite.scm 216 */
																												BGl_errorz00zz__errorz00
																													(BGl_symbol2251z00zz__lalr_rewritez00,
																													BGl_string2273z00zz__lalr_rewritez00,
																													BgL_thezd2symzd2_888);
																											}
																										{
																											obj_t BgL_rhsz00_1820;

																											BgL_rhsz00_1820 =
																												CDR(BgL_rhsz00_874);
																											BgL_rhsz00_874 =
																												BgL_rhsz00_1820;
																											goto
																												BgL_zc3anonymousza31954ze3z83_875;
																										}
																									}
																								}
																							}
																						else
																							{	/* Lalr/rewrite.scm 210 */
																								BGl_errorz00zz__errorz00
																									(BGl_symbol2251z00zz__lalr_rewritez00,
																									BGl_string2274z00zz__lalr_rewritez00,
																									BgL_rhsz00_874);
																							}
																					}
																				else
																					{	/* Lalr/rewrite.scm 208 */
																						BGl_errorz00zz__errorz00
																							(BGl_symbol2251z00zz__lalr_rewritez00,
																							BGl_string2275z00zz__lalr_rewritez00,
																							BgL_rhsz00_874);
																					}
																			}
																	}
																}
															}
														else
															{	/* Lalr/rewrite.scm 196 */
																BFALSE;
															}
													}
												else
													{	/* Lalr/rewrite.scm 193 */
														BGl_errorz00zz__errorz00
															(BGl_symbol2251z00zz__lalr_rewritez00,
															BGl_string2261z00zz__lalr_rewritez00,
															BgL_lz00_855);
													}
											}
									}
								}
							}
						}
					else
						{	/* Lalr/rewrite.scm 186 */
							BFALSE;
						}
				}
				BGl_makezd2symzd2tablez00zz__lalr_rewritez00();
				{	/* Lalr/rewrite.scm 231 */
					obj_t BgL_startzd2symzd2_894;

					{	/* Lalr/rewrite.scm 231 */
						obj_t BgL_pairz00_1421;

						BgL_pairz00_1421 = BgL_thezd2ruleszd2_813;
						BgL_startzd2symzd2_894 = CAR(CAR(BgL_pairz00_1421));
					}
					{	/* Lalr/rewrite.scm 233 */
						obj_t BgL_arg1967z00_895;

						{	/* Lalr/rewrite.scm 233 */
							obj_t BgL_arg1968z00_896;

							obj_t BgL_arg1969z00_897;

							BgL_arg1968z00_896 = BGl_symbol2257z00zz__lalr_rewritez00;
							{	/* Lalr/rewrite.scm 233 */
								obj_t BgL_arg1970z00_898;

								{	/* Lalr/rewrite.scm 233 */
									obj_t BgL_arg1973z00_901;

									obj_t BgL_arg1974z00_902;

									{	/* Lalr/rewrite.scm 233 */
										obj_t BgL_arg1975z00_903;

										{	/* Lalr/rewrite.scm 233 */
											obj_t BgL_list1976z00_904;

											BgL_list1976z00_904 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg1975z00_903 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BGl_symbol2255z00zz__lalr_rewritez00,
												BgL_list1976z00_904);
										}
										BgL_arg1973z00_901 =
											MAKE_PAIR(BgL_startzd2symzd2_894, BgL_arg1975z00_903);
									}
									{	/* Lalr/rewrite.scm 233 */
										obj_t BgL_list1977z00_905;

										BgL_list1977z00_905 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg1974z00_902 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_startzd2symzd2_894, BgL_list1977z00_905);
									}
									BgL_arg1970z00_898 =
										MAKE_PAIR(BgL_arg1973z00_901, BgL_arg1974z00_902);
								}
								{	/* Lalr/rewrite.scm 233 */
									obj_t BgL_list1972z00_900;

									BgL_list1972z00_900 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg1969z00_897 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg1970z00_898, BgL_list1972z00_900);
								}
							}
							BgL_arg1967z00_895 =
								MAKE_PAIR(BgL_arg1968z00_896, BgL_arg1969z00_897);
						}
						BGl_grammarz00zz__lalr_globalz00 =
							MAKE_PAIR(BgL_arg1967z00_895, BgL_thezd2ruleszd2_813);
					}
				}
				BGl_nrulesz00zz__lalr_globalz00 =
					BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_nozd2ruleszd2_816,
					BINT(((long) 2)));
				BGl_nitemsz00zz__lalr_globalz00 =
					BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_nozd2itemszd2_815,
					BINT(((long) 3)));
				BGl_ntermsz00zz__lalr_globalz00 =
					BINT(BGl_za2maxzd2termza2zd2zz__lalr_rewritez00);
				BGl_nvarsz00zz__lalr_globalz00 =
					BINT(BGl_za2maxzd2ntza2zd2zz__lalr_rewritez00);
				return (BGl_nsymsz00zz__lalr_globalz00 =
					BGl_2zb2zb2zz__r4_numbers_6_5z00(BGl_ntermsz00zz__lalr_globalz00,
						BGl_nvarsz00zz__lalr_globalz00), BUNSPEC);
			}
		}
	}



/* _rewrite-grammar! */
	obj_t BGl__rewritezd2grammarz12zc0zz__lalr_rewritez00(obj_t BgL_envz00_1608,
		obj_t BgL_gramz00_1609)
	{
		AN_OBJECT;
		{	/* Lalr/rewrite.scm 122 */
			return BGl_rewritezd2grammarz12zc0zz__lalr_rewritez00(BgL_gramz00_1609);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__lalr_rewritez00()
	{
		AN_OBJECT;
		{	/* Lalr/rewrite.scm 11 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__lalr_rewritez00()
	{
		AN_OBJECT;
		{	/* Lalr/rewrite.scm 11 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__lalr_rewritez00()
	{
		AN_OBJECT;
		{	/* Lalr/rewrite.scm 11 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2276z00zz__lalr_rewritez00));
			BGl_modulezd2initializa7ationz75zz__lalr_globalz00(((long) 45247587),
				BSTRING_TO_STRING(BGl_string2276z00zz__lalr_rewritez00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2276z00zz__lalr_rewritez00));
		}
	}

#ifdef __cplusplus
}
#endif
