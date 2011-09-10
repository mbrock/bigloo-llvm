/*===========================================================================*/
/*   (Unsafe/crc16.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Unsafe/crc16.scm -indent -o objs/obj_u/Unsafe/crc16.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl__crc16zd2stringzd2zz__crc16z00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__crc16z00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__crc16z00();
	BGL_EXPORTED_DECL int BGl_crc16zd2mmapzd2zz__crc16z00(obj_t);
	BGL_EXPORTED_DECL int BGl_crc16zd2stringzd2zz__crc16z00(obj_t);
	extern obj_t BGl_readzd2bytezd2zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__crc16z00();
	static obj_t BGl__crc16zd2portzd2zz__crc16z00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__crc16z00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31920ze3z83zz__crc16z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__crc16z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_symbol2434z00zz__crc16z00 = BUNSPEC;
	BGL_EXPORTED_DECL int BGl_crc16zd2portzd2zz__crc16z00(obj_t);
	static obj_t BGl__crc16zd2filezd2zz__crc16z00(obj_t, obj_t);
	static long BGl_crczd2valuezd2zz__crc16z00(long, long);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL int BGl_crc16z00zz__crc16z00(obj_t);
	static obj_t BGl__crc16zd2mmapzd2zz__crc16z00(obj_t, obj_t);
	static obj_t BGl__crc16z00zz__crc16z00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__crc16z00();
	BGL_EXPORTED_DECL int BGl_crc16zd2filezd2zz__crc16z00(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2435z00zz__crc16z00,
		BgL_bgl_string2435za700za7za7_2447za7, "crc16", 5);
	      DEFINE_STRING(BGl_string2436z00zz__crc16z00,
		BgL_bgl_string2436za700za7za7_2448za7, "Illegal argument", 16);
	      DEFINE_STRING(BGl_string2437z00zz__crc16z00,
		BgL_bgl_string2437za700za7za7_2449za7,
		"/tmp/bigloo/runtime/Unsafe/crc16.scm", 36);
	      DEFINE_STRING(BGl_string2438z00zz__crc16z00,
		BgL_bgl_string2438za700za7za7_2450za7, "_crc16-mmap", 11);
	      DEFINE_STRING(BGl_string2440z00zz__crc16z00,
		BgL_bgl_string2440za700za7za7_2451za7, "_crc16-string", 13);
	      DEFINE_STRING(BGl_string2439z00zz__crc16z00,
		BgL_bgl_string2439za700za7za7_2452za7, "mmap", 4);
	      DEFINE_STRING(BGl_string2441z00zz__crc16z00,
		BgL_bgl_string2441za700za7za7_2453za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2442z00zz__crc16z00,
		BgL_bgl_string2442za700za7za7_2454za7, "_crc16-port", 11);
	      DEFINE_STRING(BGl_string2443z00zz__crc16z00,
		BgL_bgl_string2443za700za7za7_2455za7, "input-port", 10);
	      DEFINE_STRING(BGl_string2445z00zz__crc16z00,
		BgL_bgl_string2445za700za7za7_2456za7, "_crc16-file", 11);
	      DEFINE_STRING(BGl_string2446z00zz__crc16z00,
		BgL_bgl_string2446za700za7za7_2457za7, "__crc16", 7);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crc16zd2mmapzd2envz00zz__crc16z00,
		BgL_bgl__crc16za7d2mmapza7d22458z00, BGl__crc16zd2mmapzd2zz__crc16z00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crc16zd2portzd2envz00zz__crc16z00,
		BgL_bgl__crc16za7d2portza7d22459z00, BGl__crc16zd2portzd2zz__crc16z00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crc16zd2envzd2zz__crc16z00,
		BgL_bgl__crc16za700za7za7__crc2460za7, BGl__crc16z00zz__crc16z00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crc16zd2stringzd2envz00zz__crc16z00,
		BgL_bgl__crc16za7d2stringza72461z00, BGl__crc16zd2stringzd2zz__crc16z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2444z00zz__crc16z00,
		BgL_bgl_za7c3anonymousza7a312462z00,
		BGl_zc3anonymousza31920ze3z83zz__crc16z00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crc16zd2filezd2envz00zz__crc16z00,
		BgL_bgl__crc16za7d2fileza7d22463z00, BGl__crc16zd2filezd2zz__crc16z00, 0L,
		BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__crc16z00(long
		BgL_checksumz00_2003, char *BgL_fromz00_2004)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__crc16z00))
				{
					BGl_requirezd2initializa7ationz75zz__crc16z00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__crc16z00();
					BGl_importedzd2moduleszd2initz00zz__crc16z00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__crc16z00()
	{
		AN_OBJECT;
		{	/* Unsafe/crc16.scm 17 */
			return (BGl_symbol2434z00zz__crc16z00 =
				bstring_to_symbol(BGl_string2435z00zz__crc16z00), BUNSPEC);
		}
	}



/* crc16 */
	BGL_EXPORTED_DEF int BGl_crc16z00zz__crc16z00(obj_t BgL_objz00_1)
	{
		AN_OBJECT;
		{	/* Unsafe/crc16.scm 65 */
			if (BGL_MMAPP(BgL_objz00_1))
				{	/* Unsafe/crc16.scm 67 */
					return BGl_crc16zd2mmapzd2zz__crc16z00(BgL_objz00_1);
				}
			else
				{	/* Unsafe/crc16.scm 67 */
					if (STRINGP(BgL_objz00_1))
						{	/* Unsafe/crc16.scm 69 */
							return BGl_crc16zd2stringzd2zz__crc16z00(BgL_objz00_1);
						}
					else
						{	/* Unsafe/crc16.scm 69 */
							if (INPUT_PORTP(BgL_objz00_1))
								{	/* Unsafe/crc16.scm 71 */
									return BGl_crc16zd2portzd2zz__crc16z00(BgL_objz00_1);
								}
							else
								{	/* Unsafe/crc16.scm 71 */
									return
										CINT(BGl_errorz00zz__errorz00(BGl_symbol2434z00zz__crc16z00,
											BGl_string2436z00zz__crc16z00, BgL_objz00_1));
								}
						}
				}
		}
	}



/* _crc16 */
	obj_t BGl__crc16z00zz__crc16z00(obj_t BgL_envz00_1983, obj_t BgL_objz00_1984)
	{
		AN_OBJECT;
		{	/* Unsafe/crc16.scm 65 */
			return BINT(BGl_crc16z00zz__crc16z00(BgL_objz00_1984));
		}
	}



/* crc-value */
	long BGl_crczd2valuezd2zz__crc16z00(long BgL_valz00_2, long BgL_crcz00_3)
	{
		AN_OBJECT;
		{	/* Unsafe/crc16.scm 79 */
			{
				long BgL_iz00_898;

				long BgL_valuez00_899;

				long BgL_crcz00_900;

				BgL_iz00_898 = ((long) 0);
				BgL_valuez00_899 = (BgL_valz00_2 << (int) (((long) 8)));
				BgL_crcz00_900 = BgL_crcz00_3;
			BgL_zc3anonymousza31893ze3z83_901:
				if ((BgL_iz00_898 == ((long) 8)))
					{	/* Unsafe/crc16.scm 83 */
						return BgL_crcz00_900;
					}
				else
					{	/* Unsafe/crc16.scm 85 */
						long BgL_valuez00_903;

						long BgL_crcz00_904;

						BgL_valuez00_903 = (BgL_valuez00_899 << (int) (((long) 1)));
						BgL_crcz00_904 = (BgL_crcz00_900 << (int) (((long) 1)));
						{
							long BgL_crcz00_2033;

							long BgL_valuez00_2032;

							long BgL_iz00_2030;

							BgL_iz00_2030 = (BgL_iz00_898 + ((long) 1));
							BgL_valuez00_2032 = BgL_valuez00_903;
							if (
								(((long) 0) ==
									(((long) 65536) & (BgL_crcz00_904 ^ BgL_valuez00_903))))
								{	/* Unsafe/crc16.scm 89 */
									BgL_crcz00_2033 = BgL_crcz00_904;
								}
							else
								{	/* Unsafe/crc16.scm 89 */
									BgL_crcz00_2033 = (BgL_crcz00_904 ^ ((long) 32773));
								}
							BgL_crcz00_900 = BgL_crcz00_2033;
							BgL_valuez00_899 = BgL_valuez00_2032;
							BgL_iz00_898 = BgL_iz00_2030;
							goto BgL_zc3anonymousza31893ze3z83_901;
						}
					}
			}
		}
	}



/* crc16-mmap */
	BGL_EXPORTED_DEF int BGl_crc16zd2mmapzd2zz__crc16z00(obj_t BgL_mmapz00_4)
	{
		AN_OBJECT;
		{	/* Unsafe/crc16.scm 96 */
			{	/* Unsafe/crc16.scm 97 */
				long BgL_lenz00_914;

				BgL_lenz00_914 = BGL_MMAP_LENGTH(BgL_mmapz00_4);
				{
					long BgL_iz00_1678;

					long BgL_crcz00_1679;

					{	/* Unsafe/crc16.scm 98 */
						long BgL_auxz00_2042;

						BgL_iz00_1678 = ((long) 0);
						BgL_crcz00_1679 = ((long) 65535);
					BgL_loopz00_1677:
						{	/* Unsafe/crc16.scm 98 */
							bool_t BgL_testz00_2043;

							{	/* Unsafe/crc16.scm 98 */
								long BgL_n2z00_1691;

								BgL_n2z00_1691 = ELONG_TO_LONG(BgL_lenz00_914);
								BgL_testz00_2043 = (BgL_iz00_1678 == BgL_n2z00_1691);
							}
							if (BgL_testz00_2043)
								{	/* Unsafe/crc16.scm 98 */
									BgL_auxz00_2042 = (BgL_crcz00_1679 & ((long) 65535));
								}
							else
								{	/* Unsafe/crc16.scm 98 */
									long BgL_arg1905z00_1686;

									long BgL_arg1906z00_1687;

									BgL_arg1905z00_1686 = (BgL_iz00_1678 + ((long) 1));
									{	/* Unsafe/crc16.scm 98 */
										long BgL_arg1907z00_1688;

										{	/* Unsafe/crc16.scm 98 */
											unsigned char BgL_arg1908z00_1689;

											{	/* Unsafe/crc16.scm 98 */
												long BgL_auxz00_2048;

												BgL_auxz00_2048 = LONG_TO_ELONG(BgL_iz00_1678);
												BgL_arg1908z00_1689 =
													BGL_MMAP_REF(BgL_mmapz00_4, BgL_auxz00_2048);
											}
											BgL_arg1907z00_1688 = (BgL_arg1908z00_1689);
										}
										BgL_arg1906z00_1687 =
											BGl_crczd2valuezd2zz__crc16z00(BgL_arg1907z00_1688,
											BgL_crcz00_1679);
									}
									{
										long BgL_crcz00_2054;

										long BgL_iz00_2053;

										BgL_iz00_2053 = BgL_arg1905z00_1686;
										BgL_crcz00_2054 = BgL_arg1906z00_1687;
										BgL_crcz00_1679 = BgL_crcz00_2054;
										BgL_iz00_1678 = BgL_iz00_2053;
										goto BgL_loopz00_1677;
									}
								}
						}
						return (int) (BgL_auxz00_2042);
		}}}}
	}



/* _crc16-mmap */
	obj_t BGl__crc16zd2mmapzd2zz__crc16z00(obj_t BgL_envz00_1985,
		obj_t BgL_mmapz00_1986)
	{
		AN_OBJECT;
		{	/* Unsafe/crc16.scm 96 */
			{	/* Unsafe/crc16.scm 97 */
				int BgL_auxz00_2056;

				{	/* Unsafe/crc16.scm 97 */
					obj_t BgL_auxz00_2057;

					if (BGL_MMAPP(BgL_mmapz00_1986))
						{	/* Unsafe/crc16.scm 97 */
							BgL_auxz00_2057 = BgL_mmapz00_1986;
						}
					else
						{
							obj_t BgL_auxz00_2060;

							BgL_auxz00_2060 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2437z00zz__crc16z00,
								BINT(((long) 3417)), BGl_string2438z00zz__crc16z00,
								BGl_string2439z00zz__crc16z00, BgL_mmapz00_1986);
							FAILURE(BgL_auxz00_2060, BFALSE, BFALSE);
						}
					BgL_auxz00_2056 = BGl_crc16zd2mmapzd2zz__crc16z00(BgL_auxz00_2057);
				}
				return BINT(BgL_auxz00_2056);
			}
		}
	}



/* crc16-string */
	BGL_EXPORTED_DEF int BGl_crc16zd2stringzd2zz__crc16z00(obj_t BgL_stringz00_5)
	{
		AN_OBJECT;
		{	/* Unsafe/crc16.scm 108 */
			{	/* Unsafe/crc16.scm 109 */
				long BgL_lenz00_925;

				BgL_lenz00_925 = STRING_LENGTH(BgL_stringz00_5);
				{
					long BgL_iz00_1725;

					long BgL_crcz00_1726;

					{	/* Unsafe/crc16.scm 110 */
						long BgL_auxz00_2067;

						BgL_iz00_1725 = ((long) 0);
						BgL_crcz00_1726 = ((long) 65535);
					BgL_loopz00_1724:
						if ((BgL_iz00_1725 == BgL_lenz00_925))
							{	/* Unsafe/crc16.scm 110 */
								BgL_auxz00_2067 = (BgL_crcz00_1726 & ((long) 65535));
							}
						else
							{
								long BgL_crcz00_2073;

								long BgL_iz00_2071;

								BgL_iz00_2071 = (BgL_iz00_1725 + ((long) 1));
								BgL_crcz00_2073 =
									BGl_crczd2valuezd2zz__crc16z00(
									(STRING_REF(BgL_stringz00_5, BgL_iz00_1725)),
									BgL_crcz00_1726);
								BgL_crcz00_1726 = BgL_crcz00_2073;
								BgL_iz00_1725 = BgL_iz00_2071;
								goto BgL_loopz00_1724;
							}
						return (int) (BgL_auxz00_2067);
		}}}}
	}



/* _crc16-string */
	obj_t BGl__crc16zd2stringzd2zz__crc16z00(obj_t BgL_envz00_1987,
		obj_t BgL_stringz00_1988)
	{
		AN_OBJECT;
		{	/* Unsafe/crc16.scm 108 */
			{	/* Unsafe/crc16.scm 109 */
				int BgL_auxz00_2078;

				{	/* Unsafe/crc16.scm 109 */
					obj_t BgL_auxz00_2079;

					if (STRINGP(BgL_stringz00_1988))
						{	/* Unsafe/crc16.scm 109 */
							BgL_auxz00_2079 = BgL_stringz00_1988;
						}
					else
						{
							obj_t BgL_auxz00_2082;

							BgL_auxz00_2082 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2437z00zz__crc16z00,
								BINT(((long) 3879)), BGl_string2440z00zz__crc16z00,
								BGl_string2441z00zz__crc16z00, BgL_stringz00_1988);
							FAILURE(BgL_auxz00_2082, BFALSE, BFALSE);
						}
					BgL_auxz00_2078 = BGl_crc16zd2stringzd2zz__crc16z00(BgL_auxz00_2079);
				}
				return BINT(BgL_auxz00_2078);
			}
		}
	}



/* crc16-port */
	BGL_EXPORTED_DEF int BGl_crc16zd2portzd2zz__crc16z00(obj_t BgL_portz00_6)
	{
		AN_OBJECT;
		{	/* Unsafe/crc16.scm 120 */
			{
				long BgL_crcz00_1777;

				{	/* Unsafe/crc16.scm 121 */
					long BgL_auxz00_2088;

					BgL_crcz00_1777 = ((long) 65535);
				BgL_loopz00_1776:
					{	/* Unsafe/crc16.scm 121 */
						long BgL_bytez00_1781;

						BgL_bytez00_1781 =
							(long)
							CINT(BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_portz00_6));
						{	/* Unsafe/crc16.scm 121 */
							bool_t BgL_testz00_2091;

							{	/* Unsafe/crc16.scm 121 */
								obj_t BgL_auxz00_2092;

								BgL_auxz00_2092 = BINT(BgL_bytez00_1781);
								BgL_testz00_2091 = EOF_OBJECTP(BgL_auxz00_2092);
							}
							if (BgL_testz00_2091)
								{	/* Unsafe/crc16.scm 121 */
									BgL_auxz00_2088 = (BgL_crcz00_1777 & ((long) 65535));
								}
							else
								{
									long BgL_crcz00_2096;

									BgL_crcz00_2096 =
										BGl_crczd2valuezd2zz__crc16z00(BgL_bytez00_1781,
										BgL_crcz00_1777);
									BgL_crcz00_1777 = BgL_crcz00_2096;
									goto BgL_loopz00_1776;
								}
						}
					}
					return (int) (BgL_auxz00_2088);
		}}}
	}



/* _crc16-port */
	obj_t BGl__crc16zd2portzd2zz__crc16z00(obj_t BgL_envz00_1989,
		obj_t BgL_portz00_1990)
	{
		AN_OBJECT;
		{	/* Unsafe/crc16.scm 120 */
			{	/* Unsafe/crc16.scm 121 */
				int BgL_auxz00_2099;

				{	/* Unsafe/crc16.scm 121 */
					obj_t BgL_auxz00_2100;

					if (INPUT_PORTP(BgL_portz00_1990))
						{	/* Unsafe/crc16.scm 121 */
							BgL_auxz00_2100 = BgL_portz00_1990;
						}
					else
						{
							obj_t BgL_auxz00_2103;

							BgL_auxz00_2103 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2437z00zz__crc16z00,
								BINT(((long) 4344)), BGl_string2442z00zz__crc16z00,
								BGl_string2443z00zz__crc16z00, BgL_portz00_1990);
							FAILURE(BgL_auxz00_2103, BFALSE, BFALSE);
						}
					BgL_auxz00_2099 = BGl_crc16zd2portzd2zz__crc16z00(BgL_auxz00_2100);
				}
				return BINT(BgL_auxz00_2099);
			}
		}
	}



/* crc16-file */
	BGL_EXPORTED_DEF int BGl_crc16zd2filezd2zz__crc16z00(obj_t BgL_filez00_7)
	{
		AN_OBJECT;
		{	/* Unsafe/crc16.scm 130 */
			return
				CINT(BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00
				(BgL_filez00_7, BGl_proc2444z00zz__crc16z00));
		}
	}



/* _crc16-file */
	obj_t BGl__crc16zd2filezd2zz__crc16z00(obj_t BgL_envz00_1992,
		obj_t BgL_filez00_1993)
	{
		AN_OBJECT;
		{	/* Unsafe/crc16.scm 130 */
			{	/* Unsafe/crc16.scm 132 */
				int BgL_auxz00_2111;

				{	/* Unsafe/crc16.scm 132 */
					obj_t BgL_auxz00_2112;

					if (STRINGP(BgL_filez00_1993))
						{	/* Unsafe/crc16.scm 132 */
							BgL_auxz00_2112 = BgL_filez00_1993;
						}
					else
						{
							obj_t BgL_auxz00_2115;

							BgL_auxz00_2115 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2437z00zz__crc16z00,
								BINT(((long) 4816)), BGl_string2445z00zz__crc16z00,
								BGl_string2441z00zz__crc16z00, BgL_filez00_1993);
							FAILURE(BgL_auxz00_2115, BFALSE, BFALSE);
						}
					BgL_auxz00_2111 = BGl_crc16zd2filezd2zz__crc16z00(BgL_auxz00_2112);
				}
				return BINT(BgL_auxz00_2111);
			}
		}
	}



/* <anonymous:1920> */
	obj_t BGl_zc3anonymousza31920ze3z83zz__crc16z00(obj_t BgL_envz00_1994)
	{
		AN_OBJECT;
		{	/* Unsafe/crc16.scm 132 */
			{

				{	/* Unsafe/crc16.scm 132 */
					int BgL_auxz00_2121;

					{	/* Unsafe/crc16.scm 132 */
						obj_t BgL_arg1921z00_1802;

						{	/* Unsafe/crc16.scm 132 */
							obj_t BgL_res2416z00_1804;

							{	/* Unsafe/crc16.scm 132 */
								obj_t BgL_auxz00_2122;

								BgL_auxz00_2122 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2416z00_1804 =
									BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_2122);
							}
							BgL_arg1921z00_1802 = BgL_res2416z00_1804;
						}
						BgL_auxz00_2121 =
							BGl_crc16zd2portzd2zz__crc16z00(BgL_arg1921z00_1802);
					}
					return BINT(BgL_auxz00_2121);
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__crc16z00()
	{
		AN_OBJECT;
		{	/* Unsafe/crc16.scm 17 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__crc16z00()
	{
		AN_OBJECT;
		{	/* Unsafe/crc16.scm 17 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__crc16z00()
	{
		AN_OBJECT;
		{	/* Unsafe/crc16.scm 17 */
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2446z00zz__crc16z00));
		}
	}

#ifdef __cplusplus
}
#endif
