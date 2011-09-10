/*===========================================================================*/
/*   (Llib/trace.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Llib/trace.scm -indent -o objs/obj_u/Llib/trace.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_tracezd2marginzd2setz12z12zz__tracez00(obj_t);
	extern obj_t BGl_displayza2za2zz__r4_output_6_10_3z00(obj_t);
	extern obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__tracez00 = BUNSPEC;
	static obj_t BGl__z52withzd2tracez80zz__tracez00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_displayzd2circlezd2zz__pp_circlez00(obj_t, obj_t);
	extern int bgl_debug();
	static obj_t BGl_genericzd2initzd2zz__tracez00();
	static obj_t BGl_tracezd2alistzd2zz__tracez00();
	BGL_EXPORTED_DECL obj_t BGl_tracezd2itemzd2zz__tracez00(obj_t);
	static obj_t BGl_za2tracezd2mutexza2zd2zz__tracez00 = BUNSPEC;
	static obj_t BGl__tracezd2marginzd2setz12z12zz__tracez00(obj_t, obj_t);
	static obj_t BGl_tracezd2alistzd2getz00zz__tracez00(obj_t, obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__tracez00();
	static obj_t BGl__tracezd2stringzd2zz__tracez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_tracezd2colorzd2zz__tracez00(int, obj_t);
	extern obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__tracez00();
	static obj_t BGl_zc3anonymousza31909ze3z83zz__tracez00(obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__tracezd2marginzd2zz__tracez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_tracezd2portzd2setz12z12zz__tracez00(obj_t);
	static obj_t BGl_symbol2248z00zz__tracez00 = BUNSPEC;
	extern obj_t BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_symbol2250z00zz__tracez00 = BUNSPEC;
	static obj_t BGl_symbol2252z00zz__tracez00 = BUNSPEC;
	static obj_t BGl_symbol2255z00zz__tracez00 = BUNSPEC;
	static obj_t BGl_symbol2257z00zz__tracez00 = BUNSPEC;
	static obj_t BGl_symbol2260z00zz__tracez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_tracezd2stringzd2zz__tracez00(obj_t);
	extern obj_t bgl_display_string(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31923ze3z83zz__tracez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__tracez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zz__tracez00();
	BGL_EXPORTED_DECL obj_t BGl_tracezd2marginzd2zz__tracez00();
	static obj_t BGl__tracezd2boldzd2zz__tracez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31932ze3z83zz__tracez00(obj_t);
	static obj_t BGl__tracezd2portzd2setz12z12zz__tracez00(obj_t, obj_t);
	static obj_t BGl__tracezd2portzd2zz__tracez00(obj_t);
	static obj_t BGl__tracezd2colorzd2zz__tracez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza31957ze3z83zz__tracez00(obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_z52withzd2tracez80zz__tracez00(int, obj_t, obj_t);
	extern obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_tracezd2boldzd2zz__tracez00(obj_t);
	static obj_t BGl__tracezd2itemzd2zz__tracez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_tracezd2portzd2zz__tracez00();
	extern bool_t BGl_bigloozd2tracezd2colorz00zz__paramz00();
	static obj_t BGl_methodzd2initzd2zz__tracez00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tracezd2stringzd2envz00zz__tracez00,
		BgL_bgl__traceza7d2stringza72279z00, BGl__tracezd2stringzd2zz__tracez00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tracezd2marginzd2envz00zz__tracez00,
		BgL_bgl__traceza7d2marginza72280z00, BGl__tracezd2marginzd2zz__tracez00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tracezd2boldzd2envz00zz__tracez00,
		BgL_bgl__traceza7d2boldza7d22281z00, va_generic_entry,
		BGl__tracezd2boldzd2zz__tracez00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tracezd2itemzd2envz00zz__tracez00,
		BgL_bgl__traceza7d2itemza7d22282z00, va_generic_entry,
		BGl__tracezd2itemzd2zz__tracez00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tracezd2marginzd2setz12zd2envzc0zz__tracez00,
		BgL_bgl__traceza7d2marginza72283z00,
		BGl__tracezd2marginzd2setz12z12zz__tracez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tracezd2colorzd2envz00zz__tracez00,
		BgL_bgl__traceza7d2colorza7d2284z00, va_generic_entry,
		BGl__tracezd2colorzd2zz__tracez00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string2247z00zz__tracez00,
		BgL_bgl_string2247za700za7za7_2285za7, "trace", 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tracezd2portzd2envz00zz__tracez00,
		BgL_bgl__traceza7d2portza7d22286z00, BGl__tracezd2portzd2zz__tracez00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2249z00zz__tracez00,
		BgL_bgl_string2249za700za7za7_2287za7, "port", 4);
	      DEFINE_STRING(BGl_string2251z00zz__tracez00,
		BgL_bgl_string2251za700za7za7_2288za7, "depth", 5);
	      DEFINE_STRING(BGl_string2253z00zz__tracez00,
		BgL_bgl_string2253za700za7za7_2289za7, "margin", 6);
	      DEFINE_STRING(BGl_string2254z00zz__tracez00,
		BgL_bgl_string2254za700za7za7_2290za7, "", 0);
	      DEFINE_STRING(BGl_string2256z00zz__tracez00,
		BgL_bgl_string2256za700za7za7_2291za7, "margin-level", 12);
	      DEFINE_STRING(BGl_string2258z00zz__tracez00,
		BgL_bgl_string2258za700za7za7_2292za7, "trace-alist-get", 15);
	      DEFINE_STRING(BGl_string2259z00zz__tracez00,
		BgL_bgl_string2259za700za7za7_2293za7, "Can't find trace-value", 22);
	      DEFINE_STRING(BGl_string2261z00zz__tracez00,
		BgL_bgl_string2261za700za7za7_2294za7, "trace-alist-set!", 16);
	      DEFINE_STRING(BGl_string2262z00zz__tracez00,
		BgL_bgl_string2262za700za7za7_2295za7, "/tmp/bigloo/runtime/Llib/trace.scm",
		34);
	      DEFINE_STRING(BGl_string2263z00zz__tracez00,
		BgL_bgl_string2263za700za7za7_2296za7, "_trace-port-set!", 16);
	      DEFINE_STRING(BGl_string2264z00zz__tracez00,
		BgL_bgl_string2264za700za7za7_2297za7, "output-port", 11);
	      DEFINE_STRING(BGl_string2265z00zz__tracez00,
		BgL_bgl_string2265za700za7za7_2298za7, "_trace-margin-set!", 18);
	      DEFINE_STRING(BGl_string2266z00zz__tracez00,
		BgL_bgl_string2266za700za7za7_2299za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2267z00zz__tracez00,
		BgL_bgl_string2267za700za7za7_2300za7, "_trace-color", 12);
	      DEFINE_STRING(BGl_string2268z00zz__tracez00,
		BgL_bgl_string2268za700za7za7_2301za7, "int", 3);
	      DEFINE_STRING(BGl_string2270z00zz__tracez00,
		BgL_bgl_string2270za700za7za7_2302za7, "\033[0m\033[1;", 8);
	      DEFINE_STRING(BGl_string2269z00zz__tracez00,
		BgL_bgl_string2269za700za7za7_2303za7, "m", 1);
	      DEFINE_STRING(BGl_string2271z00zz__tracez00,
		BgL_bgl_string2271za700za7za7_2304za7, "\033[0m", 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52withzd2tracezd2envz52zz__tracez00,
		BgL_bgl__za752withza7d2trace2305z00, BGl__z52withzd2tracez80zz__tracez00,
		0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2272z00zz__tracez00,
		BgL_bgl_string2272za700za7za7_2306za7, "- ", 2);
	      DEFINE_STRING(BGl_string2273z00zz__tracez00,
		BgL_bgl_string2273za700za7za7_2307za7, "_%with-trace", 12);
	      DEFINE_STRING(BGl_string2274z00zz__tracez00,
		BgL_bgl_string2274za700za7za7_2308za7, "procedure", 9);
	      DEFINE_STRING(BGl_string2275z00zz__tracez00,
		BgL_bgl_string2275za700za7za7_2309za7, "  |", 3);
	      DEFINE_STRING(BGl_string2276z00zz__tracez00,
		BgL_bgl_string2276za700za7za7_2310za7, "+ ", 2);
	      DEFINE_STRING(BGl_string2277z00zz__tracez00,
		BgL_bgl_string2277za700za7za7_2311za7, "--+ ", 4);
	      DEFINE_STRING(BGl_string2278z00zz__tracez00,
		BgL_bgl_string2278za700za7za7_2312za7, "__trace", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tracezd2portzd2setz12zd2envzc0zz__tracez00,
		BgL_bgl__traceza7d2portza7d22313z00,
		BGl__tracezd2portzd2setz12z12zz__tracez00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__tracez00(long
		BgL_checksumz00_1736, char *BgL_fromz00_1737)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__tracez00))
				{
					BGl_requirezd2initializa7ationz75zz__tracez00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__tracez00();
					BGl_importedzd2moduleszd2initz00zz__tracez00();
					BGl_toplevelzd2initzd2zz__tracez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__tracez00()
	{
		AN_OBJECT;
		{	/* Llib/trace.scm 15 */
			BGl_symbol2248z00zz__tracez00 =
				bstring_to_symbol(BGl_string2249z00zz__tracez00);
			BGl_symbol2250z00zz__tracez00 =
				bstring_to_symbol(BGl_string2251z00zz__tracez00);
			BGl_symbol2252z00zz__tracez00 =
				bstring_to_symbol(BGl_string2253z00zz__tracez00);
			BGl_symbol2255z00zz__tracez00 =
				bstring_to_symbol(BGl_string2256z00zz__tracez00);
			BGl_symbol2257z00zz__tracez00 =
				bstring_to_symbol(BGl_string2258z00zz__tracez00);
			return (BGl_symbol2260z00zz__tracez00 =
				bstring_to_symbol(BGl_string2261z00zz__tracez00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__tracez00()
	{
		AN_OBJECT;
		{	/* Llib/trace.scm 15 */
			return (BGl_za2tracezd2mutexza2zd2zz__tracez00 =
				bgl_make_mutex(BGl_string2247z00zz__tracez00), BUNSPEC);
		}
	}



/* trace-alist */
	obj_t BGl_tracezd2alistzd2zz__tracez00()
	{
		AN_OBJECT;
		{	/* Llib/trace.scm 79 */
			{	/* Llib/trace.scm 80 */
				obj_t BgL_alz00_751;

				BgL_alz00_751 = BGL_DEBUG_ALIST_GET();
				if (PAIRP(BgL_alz00_751))
					{	/* Llib/trace.scm 81 */
						return BgL_alz00_751;
					}
				else
					{	/* Llib/trace.scm 83 */
						obj_t BgL_newzd2alzd2_753;

						{	/* Llib/trace.scm 83 */
							obj_t BgL_arg1886z00_754;

							obj_t BgL_arg1887z00_755;

							obj_t BgL_arg1888z00_756;

							obj_t BgL_arg1890z00_757;

							{	/* Llib/trace.scm 83 */
								obj_t BgL_arg1895z00_762;

								obj_t BgL_arg1896z00_763;

								BgL_arg1895z00_762 = BGl_symbol2248z00zz__tracez00;
								{	/* Llib/trace.scm 83 */
									obj_t BgL_res2218z00_1302;

									{	/* Llib/trace.scm 83 */
										obj_t BgL_auxz00_1754;

										BgL_auxz00_1754 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2218z00_1302 =
											BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1754);
									}
									BgL_arg1896z00_763 = BgL_res2218z00_1302;
								}
								BgL_arg1886z00_754 =
									MAKE_PAIR(BgL_arg1895z00_762, BgL_arg1896z00_763);
							}
							BgL_arg1887z00_755 =
								MAKE_PAIR(BGl_symbol2250z00zz__tracez00, BINT(((long) 0)));
							BgL_arg1888z00_756 =
								MAKE_PAIR(BGl_symbol2252z00zz__tracez00,
								BGl_string2254z00zz__tracez00);
							BgL_arg1890z00_757 =
								MAKE_PAIR(BGl_symbol2255z00zz__tracez00, BINT(((long) 0)));
							{	/* Llib/trace.scm 83 */
								obj_t BgL_list1891z00_758;

								{	/* Llib/trace.scm 83 */
									obj_t BgL_arg1892z00_759;

									{	/* Llib/trace.scm 83 */
										obj_t BgL_arg1893z00_760;

										{	/* Llib/trace.scm 83 */
											obj_t BgL_arg1894z00_761;

											BgL_arg1894z00_761 = MAKE_PAIR(BgL_arg1890z00_757, BNIL);
											BgL_arg1893z00_760 =
												MAKE_PAIR(BgL_arg1888z00_756, BgL_arg1894z00_761);
										}
										BgL_arg1892z00_759 =
											MAKE_PAIR(BgL_arg1887z00_755, BgL_arg1893z00_760);
									}
									BgL_list1891z00_758 =
										MAKE_PAIR(BgL_arg1886z00_754, BgL_arg1892z00_759);
								}
								BgL_newzd2alzd2_753 = BgL_list1891z00_758;
						}}
						BGL_DEBUG_ALIST_SET(BgL_newzd2alzd2_753);
						BUNSPEC;
						return BgL_newzd2alzd2_753;
					}
			}
		}
	}



/* trace-alist-get */
	obj_t BGl_tracezd2alistzd2getz00zz__tracez00(obj_t BgL_alistz00_1,
		obj_t BgL_keyz00_2)
	{
		AN_OBJECT;
		{	/* Llib/trace.scm 93 */
			{	/* Llib/trace.scm 94 */
				obj_t BgL_cz00_1305;

				BgL_cz00_1305 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_2,
					BgL_alistz00_1);
				if (PAIRP(BgL_cz00_1305))
					{	/* Llib/trace.scm 94 */
						return CDR(BgL_cz00_1305);
					}
				else
					{	/* Llib/trace.scm 94 */
						return
							BGl_errorz00zz__errorz00(BGl_symbol2257z00zz__tracez00,
							BGl_string2259z00zz__tracez00, BgL_keyz00_2);
					}
			}
		}
	}



/* trace-port */
	BGL_EXPORTED_DEF obj_t BGl_tracezd2portzd2zz__tracez00()
	{
		AN_OBJECT;
		{	/* Llib/trace.scm 111 */
			{	/* Llib/trace.scm 112 */
				obj_t BgL_arg1899z00_1314;

				obj_t BgL_arg1900z00_1315;

				BgL_arg1899z00_1314 = BGl_tracezd2alistzd2zz__tracez00();
				BgL_arg1900z00_1315 = BGl_symbol2248z00zz__tracez00;
				{	/* Llib/trace.scm 112 */
					obj_t BgL_cz00_1318;

					BgL_cz00_1318 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg1900z00_1315,
						BgL_arg1899z00_1314);
					if (PAIRP(BgL_cz00_1318))
						{	/* Llib/trace.scm 112 */
							return CDR(BgL_cz00_1318);
						}
					else
						{	/* Llib/trace.scm 112 */
							return
								BGl_errorz00zz__errorz00(BGl_symbol2257z00zz__tracez00,
								BGl_string2259z00zz__tracez00, BgL_arg1900z00_1315);
						}
				}
			}
		}
	}



/* _trace-port */
	obj_t BGl__tracezd2portzd2zz__tracez00(obj_t BgL_envz00_1692)
	{
		AN_OBJECT;
		{	/* Llib/trace.scm 111 */
			return BGl_tracezd2portzd2zz__tracez00();
		}
	}



/* trace-port-set! */
	BGL_EXPORTED_DEF obj_t BGl_tracezd2portzd2setz12z12zz__tracez00(obj_t
		BgL_pz00_6)
	{
		AN_OBJECT;
		{	/* Llib/trace.scm 117 */
			{	/* Llib/trace.scm 118 */
				obj_t BgL_arg1901z00_1322;

				obj_t BgL_arg1902z00_1323;

				BgL_arg1901z00_1322 = BGl_tracezd2alistzd2zz__tracez00();
				BgL_arg1902z00_1323 = BGl_symbol2248z00zz__tracez00;
				{	/* Llib/trace.scm 118 */
					obj_t BgL_cz00_1327;

					BgL_cz00_1327 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg1902z00_1323,
						BgL_arg1901z00_1322);
					if (PAIRP(BgL_cz00_1327))
						{	/* Llib/trace.scm 118 */
							return SET_CDR(BgL_cz00_1327, BgL_pz00_6);
						}
					else
						{	/* Llib/trace.scm 118 */
							return
								BGl_errorz00zz__errorz00(BGl_symbol2260z00zz__tracez00,
								BGl_string2259z00zz__tracez00, BgL_arg1902z00_1323);
						}
				}
			}
		}
	}



/* _trace-port-set! */
	obj_t BGl__tracezd2portzd2setz12z12zz__tracez00(obj_t BgL_envz00_1693,
		obj_t BgL_pz00_1694)
	{
		AN_OBJECT;
		{	/* Llib/trace.scm 117 */
			{	/* Llib/trace.scm 118 */
				obj_t BgL_auxz00_1786;

				if (OUTPUT_PORTP(BgL_pz00_1694))
					{	/* Llib/trace.scm 118 */
						BgL_auxz00_1786 = BgL_pz00_1694;
					}
				else
					{
						obj_t BgL_auxz00_1789;

						BgL_auxz00_1789 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2262z00zz__tracez00,
							BINT(((long) 4474)), BGl_string2263z00zz__tracez00,
							BGl_string2264z00zz__tracez00, BgL_pz00_1694);
						FAILURE(BgL_auxz00_1789, BFALSE, BFALSE);
					}
				return BGl_tracezd2portzd2setz12z12zz__tracez00(BgL_auxz00_1786);
			}
		}
	}



/* trace-margin */
	BGL_EXPORTED_DEF obj_t BGl_tracezd2marginzd2zz__tracez00()
	{
		AN_OBJECT;
		{	/* Llib/trace.scm 123 */
			{	/* Llib/trace.scm 124 */
				obj_t BgL_arg1903z00_1332;

				obj_t BgL_arg1904z00_1333;

				BgL_arg1903z00_1332 = BGl_tracezd2alistzd2zz__tracez00();
				BgL_arg1904z00_1333 = BGl_symbol2252z00zz__tracez00;
				{	/* Llib/trace.scm 124 */
					obj_t BgL_cz00_1336;

					BgL_cz00_1336 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg1904z00_1333,
						BgL_arg1903z00_1332);
					if (PAIRP(BgL_cz00_1336))
						{	/* Llib/trace.scm 124 */
							return CDR(BgL_cz00_1336);
						}
					else
						{	/* Llib/trace.scm 124 */
							return
								BGl_errorz00zz__errorz00(BGl_symbol2257z00zz__tracez00,
								BGl_string2259z00zz__tracez00, BgL_arg1904z00_1333);
						}
				}
			}
		}
	}



/* _trace-margin */
	obj_t BGl__tracezd2marginzd2zz__tracez00(obj_t BgL_envz00_1695)
	{
		AN_OBJECT;
		{	/* Llib/trace.scm 123 */
			return BGl_tracezd2marginzd2zz__tracez00();
		}
	}



/* trace-margin-set! */
	BGL_EXPORTED_DEF obj_t BGl_tracezd2marginzd2setz12z12zz__tracez00(obj_t
		BgL_mz00_7)
	{
		AN_OBJECT;
		{	/* Llib/trace.scm 129 */
			{	/* Llib/trace.scm 130 */
				obj_t BgL_arg1905z00_1340;

				obj_t BgL_arg1906z00_1341;

				BgL_arg1905z00_1340 = BGl_tracezd2alistzd2zz__tracez00();
				BgL_arg1906z00_1341 = BGl_symbol2252z00zz__tracez00;
				{	/* Llib/trace.scm 130 */
					obj_t BgL_cz00_1345;

					BgL_cz00_1345 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg1906z00_1341,
						BgL_arg1905z00_1340);
					if (PAIRP(BgL_cz00_1345))
						{	/* Llib/trace.scm 130 */
							return SET_CDR(BgL_cz00_1345, BgL_mz00_7);
						}
					else
						{	/* Llib/trace.scm 130 */
							return
								BGl_errorz00zz__errorz00(BGl_symbol2260z00zz__tracez00,
								BGl_string2259z00zz__tracez00, BgL_arg1906z00_1341);
						}
				}
			}
		}
	}



/* _trace-margin-set! */
	obj_t BGl__tracezd2marginzd2setz12z12zz__tracez00(obj_t BgL_envz00_1696,
		obj_t BgL_mz00_1697)
	{
		AN_OBJECT;
		{	/* Llib/trace.scm 129 */
			{	/* Llib/trace.scm 130 */
				obj_t BgL_auxz00_1807;

				if (STRINGP(BgL_mz00_1697))
					{	/* Llib/trace.scm 130 */
						BgL_auxz00_1807 = BgL_mz00_1697;
					}
				else
					{
						obj_t BgL_auxz00_1810;

						BgL_auxz00_1810 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2262z00zz__tracez00,
							BINT(((long) 5062)), BGl_string2265z00zz__tracez00,
							BGl_string2266z00zz__tracez00, BgL_mz00_1697);
						FAILURE(BgL_auxz00_1810, BFALSE, BFALSE);
					}
				return BGl_tracezd2marginzd2setz12z12zz__tracez00(BgL_auxz00_1807);
			}
		}
	}



/* trace-color */
	BGL_EXPORTED_DEF obj_t BGl_tracezd2colorzd2zz__tracez00(int BgL_colz00_8,
		obj_t BgL_oz00_9)
	{
		AN_OBJECT;
		{	/* Llib/trace.scm 135 */
			{	/* Llib/trace.scm 137 */
				obj_t BgL_arg1907z00_776;

				if (BGl_bigloozd2tracezd2colorz00zz__paramz00())
					{	/* Llib/trace.scm 138 */
						obj_t BgL_zc3anonymousza31909ze3z83_1698;

						BgL_zc3anonymousza31909ze3z83_1698 =
							make_fx_procedure(BGl_zc3anonymousza31909ze3z83zz__tracez00,
							(int) (((long) 0)), (int) (((long) 2)));
						PROCEDURE_SET(BgL_zc3anonymousza31909ze3z83_1698,
							(int) (((long) 0)), BINT(BgL_colz00_8));
						PROCEDURE_SET(BgL_zc3anonymousza31909ze3z83_1698,
							(int) (((long) 1)), BgL_oz00_9);
						BgL_arg1907z00_776 = BgL_zc3anonymousza31909ze3z83_1698;
					}
				else
					{	/* Llib/trace.scm 142 */
						obj_t BgL_zc3anonymousza31923ze3z83_1699;

						BgL_zc3anonymousza31923ze3z83_1699 =
							make_fx_procedure(BGl_zc3anonymousza31923ze3z83zz__tracez00,
							(int) (((long) 0)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3anonymousza31923ze3z83_1699,
							(int) (((long) 0)), BgL_oz00_9);
						BgL_arg1907z00_776 = BgL_zc3anonymousza31923ze3z83_1699;
					}
				return
					BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
					(BgL_arg1907z00_776);
			}
		}
	}



/* _trace-color */
	obj_t BGl__tracezd2colorzd2zz__tracez00(obj_t BgL_envz00_1700,
		obj_t BgL_colz00_1701, obj_t BgL_oz00_1702)
	{
		AN_OBJECT;
		{	/* Llib/trace.scm 135 */
			{	/* Llib/trace.scm 137 */
				int BgL_auxz00_1831;

				{	/* Llib/trace.scm 137 */
					obj_t BgL_auxz00_1832;

					if (INTEGERP(BgL_colz00_1701))
						{	/* Llib/trace.scm 137 */
							BgL_auxz00_1832 = BgL_colz00_1701;
						}
					else
						{
							obj_t BgL_auxz00_1835;

							BgL_auxz00_1835 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2262z00zz__tracez00,
								BINT(((long) 5378)), BGl_string2267z00zz__tracez00,
								BGl_string2268z00zz__tracez00, BgL_colz00_1701);
							FAILURE(BgL_auxz00_1835, BFALSE, BFALSE);
						}
					BgL_auxz00_1831 = CINT(BgL_auxz00_1832);
				}
				return BGl_tracezd2colorzd2zz__tracez00(BgL_auxz00_1831, BgL_oz00_1702);
			}
		}
	}



/* <anonymous:1909> */
	obj_t BGl_zc3anonymousza31909ze3z83zz__tracez00(obj_t BgL_envz00_1703)
	{
		AN_OBJECT;
		{	/* Llib/trace.scm 138 */
			{	/* Llib/trace.scm 139 */
				obj_t BgL_colz00_1704;

				obj_t BgL_oz00_1705;

				BgL_colz00_1704 = PROCEDURE_REF(BgL_envz00_1703, (int) (((long) 0)));
				BgL_oz00_1705 = PROCEDURE_REF(BgL_envz00_1703, (int) (((long) 1)));
				{

					{	/* Llib/trace.scm 139 */
						long BgL_arg1911z00_780;

						BgL_arg1911z00_780 = (((long) 31) + (long) CINT(BgL_colz00_1704));
						{	/* Llib/trace.scm 139 */
							obj_t BgL_list1913z00_782;

							{	/* Llib/trace.scm 139 */
								obj_t BgL_arg1914z00_783;

								{	/* Llib/trace.scm 139 */
									obj_t BgL_arg1915z00_784;

									BgL_arg1915z00_784 =
										MAKE_PAIR(BGl_string2269z00zz__tracez00, BNIL);
									BgL_arg1914z00_783 =
										MAKE_PAIR(BINT(BgL_arg1911z00_780), BgL_arg1915z00_784);
								}
								BgL_list1913z00_782 =
									MAKE_PAIR(BGl_string2270z00zz__tracez00, BgL_arg1914z00_783);
							}
							BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list1913z00_782);
					}}
					{
						obj_t BgL_l1844z00_786;

						BgL_l1844z00_786 = BgL_oz00_1705;
					BgL_zc3anonymousza31916ze3z83_787:
						if (PAIRP(BgL_l1844z00_786))
							{	/* Llib/trace.scm 140 */
								{	/* Llib/trace.scm 140 */
									obj_t BgL_arg1918z00_789;

									BgL_arg1918z00_789 = CAR(BgL_l1844z00_786);
									{	/* Pp/circle.scm 70 */
										obj_t BgL_portz00_791;

										{	/* Pp/circle.scm 70 */
											obj_t BgL_res2220z00_1355;

											{	/* Pp/circle.scm 70 */
												obj_t BgL_auxz00_1855;

												BgL_auxz00_1855 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res2220z00_1355 =
													BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1855);
											}
											BgL_portz00_791 = BgL_res2220z00_1355;
										}
										{	/* Pp/circle.scm 70 */

											BGl_displayzd2circlezd2zz__pp_circlez00
												(BgL_arg1918z00_789, BgL_portz00_791);
										}
									}
								}
								{
									obj_t BgL_l1844z00_1859;

									BgL_l1844z00_1859 = CDR(BgL_l1844z00_786);
									BgL_l1844z00_786 = BgL_l1844z00_1859;
									goto BgL_zc3anonymousza31916ze3z83_787;
								}
							}
						else
							{	/* Llib/trace.scm 140 */
								((bool_t) 1);
							}
					}
					{	/* Llib/trace.scm 141 */
						obj_t BgL_arg1922z00_795;

						{	/* Llib/trace.scm 141 */
							obj_t BgL_res2221z00_1358;

							{	/* Llib/trace.scm 141 */
								obj_t BgL_auxz00_1861;

								BgL_auxz00_1861 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2221z00_1358 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1861);
							}
							BgL_arg1922z00_795 = BgL_res2221z00_1358;
						}
						return
							bgl_display_string(BGl_string2271z00zz__tracez00,
							BgL_arg1922z00_795);
					}
				}
			}
		}
	}



/* <anonymous:1923> */
	obj_t BGl_zc3anonymousza31923ze3z83zz__tracez00(obj_t BgL_envz00_1706)
	{
		AN_OBJECT;
		{	/* Llib/trace.scm 142 */
			{	/* Llib/trace.scm 143 */
				obj_t BgL_oz00_1707;

				BgL_oz00_1707 = PROCEDURE_REF(BgL_envz00_1706, (int) (((long) 0)));
				{

					{	/* Llib/trace.scm 143 */
						bool_t BgL_auxz00_1867;

						{
							obj_t BgL_l1846z00_798;

							BgL_l1846z00_798 = BgL_oz00_1707;
						BgL_zc3anonymousza31924ze3z83_799:
							if (PAIRP(BgL_l1846z00_798))
								{	/* Llib/trace.scm 143 */
									{	/* Llib/trace.scm 143 */
										obj_t BgL_arg1926z00_801;

										BgL_arg1926z00_801 = CAR(BgL_l1846z00_798);
										{	/* Pp/circle.scm 70 */
											obj_t BgL_portz00_803;

											{	/* Pp/circle.scm 70 */
												obj_t BgL_res2222z00_1364;

												{	/* Pp/circle.scm 70 */
													obj_t BgL_auxz00_1871;

													BgL_auxz00_1871 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res2222z00_1364 =
														BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1871);
												}
												BgL_portz00_803 = BgL_res2222z00_1364;
											}
											{	/* Pp/circle.scm 70 */

												BGl_displayzd2circlezd2zz__pp_circlez00
													(BgL_arg1926z00_801, BgL_portz00_803);
											}
										}
									}
									{
										obj_t BgL_l1846z00_1875;

										BgL_l1846z00_1875 = CDR(BgL_l1846z00_798);
										BgL_l1846z00_798 = BgL_l1846z00_1875;
										goto BgL_zc3anonymousza31924ze3z83_799;
									}
								}
							else
								{	/* Llib/trace.scm 143 */
									BgL_auxz00_1867 = ((bool_t) 1);
								}
						}
						return BBOOL(BgL_auxz00_1867);
					}
				}
			}
		}
	}



/* trace-bold */
	BGL_EXPORTED_DEF obj_t BGl_tracezd2boldzd2zz__tracez00(obj_t BgL_oz00_10)
	{
		AN_OBJECT;
		{	/* Llib/trace.scm 148 */
			{	/* Llib/trace.scm 149 */
				obj_t BgL_runner1930z00_1366;

				{	/* Llib/trace.scm 149 */
					obj_t BgL_list1928z00_1367;

					BgL_list1928z00_1367 = MAKE_PAIR(BgL_oz00_10, BNIL);
					BgL_runner1930z00_1366 =
						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) -30)),
						BgL_list1928z00_1367);
				}
				{	/* Llib/trace.scm 149 */
					int BgL_aux1929z00_1368;

					{	/* Llib/trace.scm 149 */
						obj_t BgL_pairz00_1369;

						BgL_pairz00_1369 = BgL_runner1930z00_1366;
						BgL_aux1929z00_1368 = CINT(CAR(BgL_pairz00_1369));
					}
					BgL_runner1930z00_1366 = CDR(BgL_runner1930z00_1366);
					return
						BGl_tracezd2colorzd2zz__tracez00(BgL_aux1929z00_1368,
						BgL_runner1930z00_1366);
				}
			}
		}
	}



/* _trace-bold */
	obj_t BGl__tracezd2boldzd2zz__tracez00(obj_t BgL_envz00_1708,
		obj_t BgL_oz00_1709)
	{
		AN_OBJECT;
		{	/* Llib/trace.scm 148 */
			return BGl_tracezd2boldzd2zz__tracez00(BgL_oz00_1709);
		}
	}



/* trace-string */
	BGL_EXPORTED_DEF obj_t BGl_tracezd2stringzd2zz__tracez00(obj_t BgL_oz00_11)
	{
		AN_OBJECT;
		{	/* Llib/trace.scm 154 */
			{	/* Llib/trace.scm 157 */
				obj_t BgL_zc3anonymousza31932ze3z83_1710;

				BgL_zc3anonymousza31932ze3z83_1710 =
					make_fx_procedure(BGl_zc3anonymousza31932ze3z83zz__tracez00,
					(int) (((long) 0)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3anonymousza31932ze3z83_1710,
					(int) (((long) 0)), BgL_oz00_11);
				return
					BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
					(BgL_zc3anonymousza31932ze3z83_1710);
			}
		}
	}



/* _trace-string */
	obj_t BGl__tracezd2stringzd2zz__tracez00(obj_t BgL_envz00_1711,
		obj_t BgL_oz00_1712)
	{
		AN_OBJECT;
		{	/* Llib/trace.scm 154 */
			return BGl_tracezd2stringzd2zz__tracez00(BgL_oz00_1712);
		}
	}



/* <anonymous:1932> */
	obj_t BGl_zc3anonymousza31932ze3z83zz__tracez00(obj_t BgL_envz00_1713)
	{
		AN_OBJECT;
		{	/* Llib/trace.scm 156 */
			{	/* Llib/trace.scm 157 */
				obj_t BgL_oz00_1714;

				BgL_oz00_1714 = PROCEDURE_REF(BgL_envz00_1713, (int) (((long) 0)));
				{

					return BGl_writez00zz__r4_output_6_10_3z00(BgL_oz00_1714, BNIL);
				}
			}
		}
	}



/* trace-item */
	BGL_EXPORTED_DEF obj_t BGl_tracezd2itemzd2zz__tracez00(obj_t BgL_argsz00_12)
	{
		AN_OBJECT;
		{	/* Llib/trace.scm 162 */
			{	/* Llib/trace.scm 163 */
				bool_t BgL_testz00_1896;

				{	/* Llib/trace.scm 163 */
					int BgL_arg1951z00_834;

					BgL_arg1951z00_834 = bgl_debug();
					BgL_testz00_1896 = ((long) (BgL_arg1951z00_834) > ((long) 0));
				}
				if (BgL_testz00_1896)
					{	/* Llib/trace.scm 164 */
						obj_t BgL_alz00_814;

						BgL_alz00_814 = BGl_tracezd2alistzd2zz__tracez00();
						{	/* Llib/trace.scm 165 */
							bool_t BgL_testz00_1901;

							{	/* Llib/trace.scm 165 */
								int BgL_arg1949z00_832;

								obj_t BgL_arg1950z00_833;

								BgL_arg1949z00_832 = bgl_debug();
								{	/* Llib/trace.scm 165 */
									obj_t BgL_keyz00_1377;

									BgL_keyz00_1377 = BGl_symbol2255z00zz__tracez00;
									{	/* Llib/trace.scm 165 */
										obj_t BgL_cz00_1378;

										BgL_cz00_1378 =
											BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1377,
											BgL_alz00_814);
										if (PAIRP(BgL_cz00_1378))
											{	/* Llib/trace.scm 165 */
												BgL_arg1950z00_833 = CDR(BgL_cz00_1378);
											}
										else
											{	/* Llib/trace.scm 165 */
												BgL_arg1950z00_833 =
													BGl_errorz00zz__errorz00
													(BGl_symbol2257z00zz__tracez00,
													BGl_string2259z00zz__tracez00, BgL_keyz00_1377);
											}
									}
								}
								BgL_testz00_1901 =
									(
									(long) (BgL_arg1949z00_832) >=
									(long) CINT(BgL_arg1950z00_833));
							}
							if (BgL_testz00_1901)
								{	/* Llib/trace.scm 166 */
									obj_t BgL_pz00_816;

									BgL_pz00_816 =
										BGl_tracezd2alistzd2getz00zz__tracez00
										(BGl_tracezd2alistzd2zz__tracez00(),
										BGl_symbol2248z00zz__tracez00);
									{	/* Llib/trace.scm 167 */
										obj_t BgL_arg1937z00_817;

										{	/* Llib/trace.scm 167 */
											obj_t BgL_keyz00_1388;

											BgL_keyz00_1388 = BGl_symbol2252z00zz__tracez00;
											{	/* Llib/trace.scm 167 */
												obj_t BgL_cz00_1389;

												BgL_cz00_1389 =
													BGl_assqz00zz__r4_pairs_and_lists_6_3z00
													(BgL_keyz00_1388, BgL_alz00_814);
												if (PAIRP(BgL_cz00_1389))
													{	/* Llib/trace.scm 167 */
														BgL_arg1937z00_817 = CDR(BgL_cz00_1389);
													}
												else
													{	/* Llib/trace.scm 167 */
														BgL_arg1937z00_817 =
															BGl_errorz00zz__errorz00
															(BGl_symbol2257z00zz__tracez00,
															BGl_string2259z00zz__tracez00, BgL_keyz00_1388);
													}
											}
										}
										bgl_display_obj(BgL_arg1937z00_817, BgL_pz00_816);
									}
									{	/* Llib/trace.scm 168 */
										obj_t BgL_arg1938z00_818;

										obj_t BgL_arg1940z00_819;

										{	/* Llib/trace.scm 168 */
											long BgL_arg1941z00_820;

											{	/* Llib/trace.scm 168 */
												obj_t BgL_arg1944z00_823;

												{	/* Llib/trace.scm 168 */
													obj_t BgL_keyz00_1394;

													BgL_keyz00_1394 = BGl_symbol2250z00zz__tracez00;
													{	/* Llib/trace.scm 168 */
														obj_t BgL_cz00_1395;

														BgL_cz00_1395 =
															BGl_assqz00zz__r4_pairs_and_lists_6_3z00
															(BgL_keyz00_1394, BgL_alz00_814);
														if (PAIRP(BgL_cz00_1395))
															{	/* Llib/trace.scm 168 */
																BgL_arg1944z00_823 = CDR(BgL_cz00_1395);
															}
														else
															{	/* Llib/trace.scm 168 */
																BgL_arg1944z00_823 =
																	BGl_errorz00zz__errorz00
																	(BGl_symbol2257z00zz__tracez00,
																	BGl_string2259z00zz__tracez00,
																	BgL_keyz00_1394);
															}
													}
												}
												BgL_arg1941z00_820 =
													((long) CINT(BgL_arg1944z00_823) - ((long) 1));
											}
											{	/* Llib/trace.scm 168 */
												obj_t BgL_list1943z00_822;

												BgL_list1943z00_822 =
													MAKE_PAIR(BGl_string2272z00zz__tracez00, BNIL);
												BgL_arg1938z00_818 =
													BGl_tracezd2colorzd2zz__tracez00(
													(int) (BgL_arg1941z00_820), BgL_list1943z00_822);
										}}
										{	/* Llib/trace.scm 168 */
											obj_t BgL_res2224z00_1402;

											{	/* Llib/trace.scm 168 */
												obj_t BgL_auxz00_1929;

												BgL_auxz00_1929 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res2224z00_1402 =
													BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1929);
											}
											BgL_arg1940z00_819 = BgL_res2224z00_1402;
										}
										bgl_display_obj(BgL_arg1938z00_818, BgL_arg1940z00_819);
									}
									{
										obj_t BgL_l1848z00_1404;

										BgL_l1848z00_1404 = BgL_argsz00_12;
									BgL_zc3anonymousza31946ze3z83_1403:
										if (PAIRP(BgL_l1848z00_1404))
											{	/* Llib/trace.scm 169 */
												BGl_displayzd2circlezd2zz__pp_circlez00(CAR
													(BgL_l1848z00_1404), BgL_pz00_816);
												{
													obj_t BgL_l1848z00_1937;

													BgL_l1848z00_1937 = CDR(BgL_l1848z00_1404);
													BgL_l1848z00_1404 = BgL_l1848z00_1937;
													goto BgL_zc3anonymousza31946ze3z83_1403;
												}
											}
										else
											{	/* Llib/trace.scm 169 */
												((bool_t) 1);
											}
									}
									return bgl_display_char(((unsigned char) '\n'), BgL_pz00_816);
								}
							else
								{	/* Llib/trace.scm 165 */
									return BFALSE;
								}
						}
					}
				else
					{	/* Llib/trace.scm 163 */
						return BFALSE;
					}
			}
		}
	}



/* _trace-item */
	obj_t BGl__tracezd2itemzd2zz__tracez00(obj_t BgL_envz00_1715,
		obj_t BgL_argsz00_1716)
	{
		AN_OBJECT;
		{	/* Llib/trace.scm 162 */
			return BGl_tracezd2itemzd2zz__tracez00(BgL_argsz00_1716);
		}
	}



/* %with-trace */
	BGL_EXPORTED_DEF obj_t BGl_z52withzd2tracez80zz__tracez00(int BgL_lvlz00_13,
		obj_t BgL_lblz00_14, obj_t BgL_thunkz00_15)
	{
		AN_OBJECT;
		{	/* Llib/trace.scm 175 */
			{	/* Llib/trace.scm 176 */
				obj_t BgL_arg1953z00_836;

				BgL_arg1953z00_836 = BGl_za2tracezd2mutexza2zd2zz__tracez00;
				{	/* Llib/thread.scm 201 */

					if ((((long) 0) == ((long) 0)))
						{	/* Llib/thread.scm 201 */
							bgl_mutex_lock(BgL_arg1953z00_836);
						}
					else
						{	/* Llib/thread.scm 201 */
							bgl_mutex_timed_lock(BgL_arg1953z00_836, ((long) 0));
			}}}
			{	/* Llib/trace.scm 177 */
				obj_t BgL_alz00_839;

				BgL_alz00_839 = BGl_tracezd2alistzd2zz__tracez00();
				{	/* Llib/trace.scm 177 */
					obj_t BgL_olz00_840;

					{	/* Llib/trace.scm 178 */
						obj_t BgL_keyz00_1434;

						BgL_keyz00_1434 = BGl_symbol2255z00zz__tracez00;
						{	/* Llib/trace.scm 178 */
							obj_t BgL_cz00_1435;

							BgL_cz00_1435 =
								BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1434,
								BgL_alz00_839);
							if (PAIRP(BgL_cz00_1435))
								{	/* Llib/trace.scm 178 */
									BgL_olz00_840 = CDR(BgL_cz00_1435);
								}
							else
								{	/* Llib/trace.scm 178 */
									BgL_olz00_840 =
										BGl_errorz00zz__errorz00(BGl_symbol2257z00zz__tracez00,
										BGl_string2259z00zz__tracez00, BgL_keyz00_1434);
								}
						}
					}
					{	/* Llib/trace.scm 178 */

						{	/* Llib/trace.scm 179 */
							obj_t BgL_keyz00_1440;

							BgL_keyz00_1440 = BGl_symbol2255z00zz__tracez00;
							{	/* Llib/trace.scm 179 */
								obj_t BgL_cz00_1442;

								BgL_cz00_1442 =
									BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1440,
									BgL_alz00_839);
								if (PAIRP(BgL_cz00_1442))
									{	/* Llib/trace.scm 179 */
										obj_t BgL_auxz00_1954;

										BgL_auxz00_1954 = BINT(BgL_lvlz00_13);
										SET_CDR(BgL_cz00_1442, BgL_auxz00_1954);
									}
								else
									{	/* Llib/trace.scm 179 */
										BGl_errorz00zz__errorz00(BGl_symbol2260z00zz__tracez00,
											BGl_string2259z00zz__tracez00, BgL_keyz00_1440);
									}
							}
						}
						{	/* Llib/trace.scm 180 */
							obj_t BgL_rz00_841;

							{	/* Llib/trace.scm 180 */
								bool_t BgL_testz00_1958;

								{	/* Llib/trace.scm 180 */
									int BgL_arg1979z00_871;

									BgL_arg1979z00_871 = bgl_debug();
									BgL_testz00_1958 =
										((long) (BgL_arg1979z00_871) >= (long) (BgL_lvlz00_13));
								}
								if (BgL_testz00_1958)
									{	/* Llib/trace.scm 181 */
										obj_t BgL_arg1955z00_843;

										BgL_arg1955z00_843 =
											BGl_tracezd2alistzd2getz00zz__tracez00
											(BGl_tracezd2alistzd2zz__tracez00(),
											BGl_symbol2248z00zz__tracez00);
										{	/* Llib/trace.scm 183 */
											obj_t BgL_zc3anonymousza31957ze3z83_1717;

											BgL_zc3anonymousza31957ze3z83_1717 =
												make_fx_procedure
												(BGl_zc3anonymousza31957ze3z83zz__tracez00,
												(int) (((long) 0)), (int) (((long) 3)));
											PROCEDURE_SET(BgL_zc3anonymousza31957ze3z83_1717,
												(int) (((long) 0)), BgL_alz00_839);
											PROCEDURE_SET(BgL_zc3anonymousza31957ze3z83_1717,
												(int) (((long) 1)), BgL_lblz00_14);
											PROCEDURE_SET(BgL_zc3anonymousza31957ze3z83_1717,
												(int) (((long) 2)), BgL_thunkz00_15);
											BgL_rz00_841 =
												BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00
												(BgL_arg1955z00_843,
												BgL_zc3anonymousza31957ze3z83_1717);
									}}
								else
									{	/* Llib/trace.scm 180 */
										bgl_mutex_unlock(BGl_za2tracezd2mutexza2zd2zz__tracez00);
										BgL_rz00_841 =
											PROCEDURE_ENTRY(BgL_thunkz00_15) (BgL_thunkz00_15, BEOA);
									}
							}
							{	/* Llib/trace.scm 202 */
								obj_t BgL_keyz00_1522;

								BgL_keyz00_1522 = BGl_symbol2255z00zz__tracez00;
								{	/* Llib/trace.scm 202 */
									obj_t BgL_cz00_1524;

									BgL_cz00_1524 =
										BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1522,
										BgL_alz00_839);
									if (PAIRP(BgL_cz00_1524))
										{	/* Llib/trace.scm 202 */
											SET_CDR(BgL_cz00_1524, BgL_olz00_840);
										}
									else
										{	/* Llib/trace.scm 202 */
											BGl_errorz00zz__errorz00(BGl_symbol2260z00zz__tracez00,
												BGl_string2259z00zz__tracez00, BgL_keyz00_1522);
										}
								}
							}
							return BgL_rz00_841;
						}
					}
				}
			}
		}
	}



/* _%with-trace */
	obj_t BGl__z52withzd2tracez80zz__tracez00(obj_t BgL_envz00_1718,
		obj_t BgL_lvlz00_1719, obj_t BgL_lblz00_1720, obj_t BgL_thunkz00_1721)
	{
		AN_OBJECT;
		{	/* Llib/trace.scm 175 */
			{	/* Llib/trace.scm 203 */
				obj_t BgL_auxz00_1992;

				int BgL_auxz00_1983;

				if (PROCEDUREP(BgL_thunkz00_1721))
					{	/* Llib/trace.scm 203 */
						BgL_auxz00_1992 = BgL_thunkz00_1721;
					}
				else
					{
						obj_t BgL_auxz00_1995;

						BgL_auxz00_1995 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2262z00zz__tracez00,
							BINT(((long) 7981)), BGl_string2273z00zz__tracez00,
							BGl_string2274z00zz__tracez00, BgL_thunkz00_1721);
						FAILURE(BgL_auxz00_1995, BFALSE, BFALSE);
					}
				{	/* Llib/trace.scm 203 */
					obj_t BgL_auxz00_1984;

					if (INTEGERP(BgL_lvlz00_1719))
						{	/* Llib/trace.scm 203 */
							BgL_auxz00_1984 = BgL_lvlz00_1719;
						}
					else
						{
							obj_t BgL_auxz00_1987;

							BgL_auxz00_1987 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2262z00zz__tracez00,
								BINT(((long) 7981)), BGl_string2273z00zz__tracez00,
								BGl_string2268z00zz__tracez00, BgL_lvlz00_1719);
							FAILURE(BgL_auxz00_1987, BFALSE, BFALSE);
						}
					BgL_auxz00_1983 = CINT(BgL_auxz00_1984);
				}
				return
					BGl_z52withzd2tracez80zz__tracez00(BgL_auxz00_1983, BgL_lblz00_1720,
					BgL_auxz00_1992);
			}
		}
	}



/* <anonymous:1957> */
	obj_t BGl_zc3anonymousza31957ze3z83zz__tracez00(obj_t BgL_envz00_1722)
	{
		AN_OBJECT;
		{	/* Llib/trace.scm 182 */
			{	/* Llib/trace.scm 183 */
				obj_t BgL_alz00_1723;

				obj_t BgL_lblz00_1724;

				obj_t BgL_thunkz00_1725;

				BgL_alz00_1723 = PROCEDURE_REF(BgL_envz00_1722, (int) (((long) 0)));
				BgL_lblz00_1724 = PROCEDURE_REF(BgL_envz00_1722, (int) (((long) 1)));
				BgL_thunkz00_1725 = PROCEDURE_REF(BgL_envz00_1722, (int) (((long) 2)));
				{

					{	/* Llib/trace.scm 183 */
						obj_t BgL_dz00_846;

						{	/* Llib/trace.scm 183 */
							obj_t BgL_keyz00_1453;

							BgL_keyz00_1453 = BGl_symbol2250z00zz__tracez00;
							{	/* Llib/trace.scm 183 */
								obj_t BgL_cz00_1454;

								BgL_cz00_1454 =
									BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1453,
									BgL_alz00_1723);
								if (PAIRP(BgL_cz00_1454))
									{	/* Llib/trace.scm 183 */
										BgL_dz00_846 = CDR(BgL_cz00_1454);
									}
								else
									{	/* Llib/trace.scm 183 */
										BgL_dz00_846 =
											BGl_errorz00zz__errorz00(BGl_symbol2257z00zz__tracez00,
											BGl_string2259z00zz__tracez00, BgL_keyz00_1453);
									}
							}
						}
						{	/* Llib/trace.scm 183 */
							obj_t BgL_omz00_847;

							{	/* Llib/trace.scm 184 */
								obj_t BgL_keyz00_1459;

								BgL_keyz00_1459 = BGl_symbol2252z00zz__tracez00;
								{	/* Llib/trace.scm 184 */
									obj_t BgL_cz00_1460;

									BgL_cz00_1460 =
										BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1459,
										BgL_alz00_1723);
									if (PAIRP(BgL_cz00_1460))
										{	/* Llib/trace.scm 184 */
											BgL_omz00_847 = CDR(BgL_cz00_1460);
										}
									else
										{	/* Llib/trace.scm 184 */
											BgL_omz00_847 =
												BGl_errorz00zz__errorz00(BGl_symbol2257z00zz__tracez00,
												BGl_string2259z00zz__tracez00, BgL_keyz00_1459);
										}
								}
							}
							{	/* Llib/trace.scm 184 */
								obj_t BgL_dez00_848;

								{	/* Llib/trace.scm 185 */
									obj_t BgL_keyz00_1465;

									BgL_keyz00_1465 = BGl_symbol2250z00zz__tracez00;
									{	/* Llib/trace.scm 185 */
										obj_t BgL_cz00_1466;

										BgL_cz00_1466 =
											BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1465,
											BgL_alz00_1723);
										if (PAIRP(BgL_cz00_1466))
											{	/* Llib/trace.scm 185 */
												BgL_dez00_848 = CDR(BgL_cz00_1466);
											}
										else
											{	/* Llib/trace.scm 185 */
												BgL_dez00_848 =
													BGl_errorz00zz__errorz00
													(BGl_symbol2257z00zz__tracez00,
													BGl_string2259z00zz__tracez00, BgL_keyz00_1465);
											}
									}
								}
								{	/* Llib/trace.scm 185 */
									obj_t BgL_maz00_849;

									{	/* Llib/trace.scm 186 */
										obj_t BgL_list1976z00_868;

										BgL_list1976z00_868 =
											MAKE_PAIR(BGl_string2275z00zz__tracez00, BNIL);
										BgL_maz00_849 =
											BGl_tracezd2colorzd2zz__tracez00(CINT(BgL_dez00_848),
											BgL_list1976z00_868);
									}
									{	/* Llib/trace.scm 186 */

										{	/* Llib/trace.scm 187 */
											obj_t BgL_arg1958z00_850;

											obj_t BgL_arg1959z00_851;

											{	/* Llib/trace.scm 187 */
												obj_t BgL_keyz00_1471;

												BgL_keyz00_1471 = BGl_symbol2252z00zz__tracez00;
												{	/* Llib/trace.scm 187 */
													obj_t BgL_cz00_1472;

													BgL_cz00_1472 =
														BGl_assqz00zz__r4_pairs_and_lists_6_3z00
														(BgL_keyz00_1471, BgL_alz00_1723);
													if (PAIRP(BgL_cz00_1472))
														{	/* Llib/trace.scm 187 */
															BgL_arg1958z00_850 = CDR(BgL_cz00_1472);
														}
													else
														{	/* Llib/trace.scm 187 */
															BgL_arg1958z00_850 =
																BGl_errorz00zz__errorz00
																(BGl_symbol2257z00zz__tracez00,
																BGl_string2259z00zz__tracez00, BgL_keyz00_1471);
														}
												}
											}
											{	/* Llib/trace.scm 187 */
												obj_t BgL_res2226z00_1477;

												{	/* Llib/trace.scm 187 */
													obj_t BgL_auxz00_2029;

													BgL_auxz00_2029 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res2226z00_1477 =
														BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2029);
												}
												BgL_arg1959z00_851 = BgL_res2226z00_1477;
											}
											bgl_display_obj(BgL_arg1958z00_850, BgL_arg1959z00_851);
										}
										{	/* Llib/trace.scm 188 */
											obj_t BgL_arg1960z00_852;

											obj_t BgL_arg1961z00_853;

											if (((long) CINT(BgL_dz00_846) == ((long) 0)))
												{	/* Llib/trace.scm 189 */
													obj_t BgL_list1963z00_855;

													{	/* Llib/trace.scm 189 */
														obj_t BgL_arg1966z00_857;

														BgL_arg1966z00_857 =
															MAKE_PAIR(BgL_lblz00_1724, BNIL);
														BgL_list1963z00_855 =
															MAKE_PAIR(BGl_string2276z00zz__tracez00,
															BgL_arg1966z00_857);
													}
													BgL_arg1960z00_852 =
														BGl_tracezd2colorzd2zz__tracez00(CINT(BgL_dz00_846),
														BgL_list1963z00_855);
												}
											else
												{	/* Llib/trace.scm 190 */
													obj_t BgL_list1967z00_858;

													{	/* Llib/trace.scm 190 */
														obj_t BgL_arg1969z00_860;

														BgL_arg1969z00_860 =
															MAKE_PAIR(BgL_lblz00_1724, BNIL);
														BgL_list1967z00_858 =
															MAKE_PAIR(BGl_string2277z00zz__tracez00,
															BgL_arg1969z00_860);
													}
													BgL_arg1960z00_852 =
														BGl_tracezd2colorzd2zz__tracez00(CINT(BgL_dz00_846),
														BgL_list1967z00_858);
												}
											{	/* Llib/trace.scm 188 */
												obj_t BgL_res2227z00_1481;

												{	/* Llib/trace.scm 188 */
													obj_t BgL_auxz00_2044;

													BgL_auxz00_2044 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res2227z00_1481 =
														BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2044);
												}
												BgL_arg1961z00_853 = BgL_res2227z00_1481;
											}
											bgl_display_obj(BgL_arg1960z00_852, BgL_arg1961z00_853);
										}
										{	/* Llib/trace.scm 191 */
											obj_t BgL_arg1970z00_861;

											{	/* Llib/trace.scm 191 */
												obj_t BgL_res2228z00_1483;

												{	/* Llib/trace.scm 191 */
													obj_t BgL_auxz00_2048;

													BgL_auxz00_2048 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res2228z00_1483 =
														BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2048);
												}
												BgL_arg1970z00_861 = BgL_res2228z00_1483;
											}
											bgl_display_char(((unsigned char) '\n'),
												BgL_arg1970z00_861);
										}
										{	/* Llib/trace.scm 192 */
											obj_t BgL_arg1971z00_862;

											long BgL_arg1972z00_863;

											BgL_arg1971z00_862 = BGl_symbol2250z00zz__tracez00;
											BgL_arg1972z00_863 =
												((long) CINT(BgL_dez00_848) + ((long) 1));
											{	/* Llib/trace.scm 192 */
												obj_t BgL_cz00_1490;

												BgL_cz00_1490 =
													BGl_assqz00zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1971z00_862, BgL_alz00_1723);
												if (PAIRP(BgL_cz00_1490))
													{	/* Llib/trace.scm 192 */
														obj_t BgL_auxz00_2057;

														BgL_auxz00_2057 = BINT(BgL_arg1972z00_863);
														SET_CDR(BgL_cz00_1490, BgL_auxz00_2057);
													}
												else
													{	/* Llib/trace.scm 192 */
														BGl_errorz00zz__errorz00
															(BGl_symbol2260z00zz__tracez00,
															BGl_string2259z00zz__tracez00,
															BgL_arg1971z00_862);
													}
											}
										}
										{	/* Llib/trace.scm 193 */
											obj_t BgL_arg1973z00_864;

											obj_t BgL_arg1974z00_865;

											BgL_arg1973z00_864 = BGl_symbol2252z00zz__tracez00;
											BgL_arg1974z00_865 =
												string_append(BgL_omz00_847, BgL_maz00_849);
											{	/* Llib/trace.scm 193 */
												obj_t BgL_cz00_1498;

												BgL_cz00_1498 =
													BGl_assqz00zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1973z00_864, BgL_alz00_1723);
												if (PAIRP(BgL_cz00_1498))
													{	/* Llib/trace.scm 193 */
														SET_CDR(BgL_cz00_1498, BgL_arg1974z00_865);
													}
												else
													{	/* Llib/trace.scm 193 */
														BGl_errorz00zz__errorz00
															(BGl_symbol2260z00zz__tracez00,
															BGl_string2259z00zz__tracez00,
															BgL_arg1973z00_864);
													}
											}
										}
										bgl_mutex_unlock(BGl_za2tracezd2mutexza2zd2zz__tracez00);
										{	/* Llib/trace.scm 195 */
											obj_t BgL_resz00_867;

											BgL_resz00_867 =
												PROCEDURE_ENTRY(BgL_thunkz00_1725) (BgL_thunkz00_1725,
												BEOA);
											{	/* Llib/trace.scm 196 */
												obj_t BgL_keyz00_1505;

												BgL_keyz00_1505 = BGl_symbol2250z00zz__tracez00;
												{	/* Llib/trace.scm 196 */
													obj_t BgL_cz00_1507;

													BgL_cz00_1507 =
														BGl_assqz00zz__r4_pairs_and_lists_6_3z00
														(BgL_keyz00_1505, BgL_alz00_1723);
													if (PAIRP(BgL_cz00_1507))
														{	/* Llib/trace.scm 196 */
															SET_CDR(BgL_cz00_1507, BgL_dez00_848);
														}
													else
														{	/* Llib/trace.scm 196 */
															BGl_errorz00zz__errorz00
																(BGl_symbol2260z00zz__tracez00,
																BGl_string2259z00zz__tracez00, BgL_keyz00_1505);
														}
												}
											}
											{	/* Llib/trace.scm 197 */
												obj_t BgL_keyz00_1513;

												BgL_keyz00_1513 = BGl_symbol2252z00zz__tracez00;
												{	/* Llib/trace.scm 197 */
													obj_t BgL_cz00_1515;

													BgL_cz00_1515 =
														BGl_assqz00zz__r4_pairs_and_lists_6_3z00
														(BgL_keyz00_1513, BgL_alz00_1723);
													if (PAIRP(BgL_cz00_1515))
														{	/* Llib/trace.scm 197 */
															SET_CDR(BgL_cz00_1515, BgL_omz00_847);
														}
													else
														{	/* Llib/trace.scm 197 */
															BGl_errorz00zz__errorz00
																(BGl_symbol2260z00zz__tracez00,
																BGl_string2259z00zz__tracez00, BgL_keyz00_1513);
														}
												}
											}
											return BgL_resz00_867;
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



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__tracez00()
	{
		AN_OBJECT;
		{	/* Llib/trace.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__tracez00()
	{
		AN_OBJECT;
		{	/* Llib/trace.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__tracez00()
	{
		AN_OBJECT;
		{	/* Llib/trace.scm 15 */
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2278z00zz__tracez00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2278z00zz__tracez00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2278z00zz__tracez00));
			return
				BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					164543289), BSTRING_TO_STRING(BGl_string2278z00zz__tracez00));
		}
	}

#ifdef __cplusplus
}
#endif
