/*===========================================================================*/
/*   (Coerce/pproto.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Coerce/pproto.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_variablez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
	}                  *BgL_variablez00_bglt;


	static obj_t BGl_requirezd2initializa7ationz75zzcoerce_pprotoz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzcoerce_pprotoz00();
	BGL_EXPORTED_DECL obj_t BGl_resetzd2ppmargez12zc0zzcoerce_pprotoz00();
	BGL_EXPORTED_DECL obj_t BGl_pvariablezd2protozd2zzcoerce_pprotoz00(long,
		BgL_variablez00_bglt);
	static obj_t BGl__pvariablezd2protozd2zzcoerce_pprotoz00(obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcoerce_pprotoz00();
	static long BGl_za2ppzd2margeza2zd2zzcoerce_pprotoz00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzcoerce_pprotoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_pptypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzcoerce_pprotoz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t make_string(long, unsigned char);
	static obj_t BGl__deczd2ppmargez12zc0zzcoerce_pprotoz00(obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	static obj_t BGl_oldzd2margezd2stringz00zzcoerce_pprotoz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_deczd2ppmargez12zc0zzcoerce_pprotoz00();
	extern obj_t
		BGl_functionzd2typezd2ze3stringze3zztype_pptypez00(BgL_variablez00_bglt);
	static obj_t BGl__inczd2ppmargez12zc0zzcoerce_pprotoz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_pfunctionzd2protozd2zzcoerce_pprotoz00(long,
		BgL_variablez00_bglt);
	extern obj_t
		BGl_variablezd2typezd2ze3stringze3zztype_pptypez00(BgL_variablez00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_inczd2ppmargez12zc0zzcoerce_pprotoz00();
	extern obj_t BGl_za2verboseza2z00zzengine_paramz00;
	static obj_t BGl__pfunctionzd2protozd2zzcoerce_pprotoz00(obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcoerce_pprotoz00();
	static obj_t BGl__resetzd2ppmargez12zc0zzcoerce_pprotoz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzcoerce_pprotoz00();
	static long BGl_oldzd2margezd2zzcoerce_pprotoz00;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_deczd2ppmargez12zd2envz12zzcoerce_pprotoz00,
		BgL_bgl__decza7d2ppmargeza712243z00,
		BGl__deczd2ppmargez12zc0zzcoerce_pprotoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_inczd2ppmargez12zd2envz12zzcoerce_pprotoz00,
		BgL_bgl__incza7d2ppmargeza712244z00,
		BGl__inczd2ppmargez12zc0zzcoerce_pprotoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pvariablezd2protozd2envz00zzcoerce_pprotoz00,
		BgL_bgl__pvariableza7d2pro2245za7,
		BGl__pvariablezd2protozd2zzcoerce_pprotoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pfunctionzd2protozd2envz00zzcoerce_pprotoz00,
		BgL_bgl__pfunctionza7d2pro2246za7,
		BGl__pfunctionzd2protozd2zzcoerce_pprotoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_resetzd2ppmargez12zd2envz12zzcoerce_pprotoz00,
		BgL_bgl__resetza7d2ppmarge2247za7,
		BGl__resetzd2ppmargez12zc0zzcoerce_pprotoz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2240z00zzcoerce_pprotoz00,
		BgL_bgl_string2240za700za7za7c2248za7, "", 0);
	      DEFINE_STRING(BGl_string2241z00zzcoerce_pprotoz00,
		BgL_bgl_string2241za700za7za7c2249za7, " : ", 3);
	      DEFINE_STRING(BGl_string2242z00zzcoerce_pprotoz00,
		BgL_bgl_string2242za700za7za7c2250za7, "coerce_pproto", 13);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcoerce_pprotoz00(long
		BgL_checksumz00_550, char *BgL_fromz00_551)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcoerce_pprotoz00))
				{
					BGl_requirezd2initializa7ationz75zzcoerce_pprotoz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcoerce_pprotoz00();
					BGl_importedzd2moduleszd2initz00zzcoerce_pprotoz00();
					BGl_toplevelzd2initzd2zzcoerce_pprotoz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcoerce_pprotoz00()
	{
		AN_OBJECT;
		{	/* Coerce/pproto.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"coerce_pproto");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"coerce_pproto");
			return BUNSPEC;
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcoerce_pprotoz00()
	{
		AN_OBJECT;
		{	/* Coerce/pproto.scm 15 */
			BGl_za2ppzd2margeza2zd2zzcoerce_pprotoz00 = ((long) 8);
			BGl_oldzd2margezd2zzcoerce_pprotoz00 = ((long) -1);
			return (BGl_oldzd2margezd2stringz00zzcoerce_pprotoz00 =
				BGl_string2240z00zzcoerce_pprotoz00, BUNSPEC);
		}
	}



/* reset-ppmarge! */
	BGL_EXPORTED_DEF obj_t BGl_resetzd2ppmargez12zc0zzcoerce_pprotoz00()
	{
		AN_OBJECT;
		{	/* Coerce/pproto.scm 31 */
			return (BGl_za2ppzd2margeza2zd2zzcoerce_pprotoz00 = ((long) 8), BUNSPEC);
		}
	}



/* _reset-ppmarge! */
	obj_t BGl__resetzd2ppmargez12zc0zzcoerce_pprotoz00(obj_t BgL_envz00_541)
	{
		AN_OBJECT;
		{	/* Coerce/pproto.scm 31 */
			return BGl_resetzd2ppmargez12zc0zzcoerce_pprotoz00();
		}
	}



/* inc-ppmarge! */
	BGL_EXPORTED_DEF obj_t BGl_inczd2ppmargez12zc0zzcoerce_pprotoz00()
	{
		AN_OBJECT;
		{	/* Coerce/pproto.scm 37 */
			return (BGl_za2ppzd2margeza2zd2zzcoerce_pprotoz00 =
				(((long) 1) + BGl_za2ppzd2margeza2zd2zzcoerce_pprotoz00), BUNSPEC);
		}
	}



/* _inc-ppmarge! */
	obj_t BGl__inczd2ppmargez12zc0zzcoerce_pprotoz00(obj_t BgL_envz00_542)
	{
		AN_OBJECT;
		{	/* Coerce/pproto.scm 37 */
			return BGl_inczd2ppmargez12zc0zzcoerce_pprotoz00();
		}
	}



/* dec-ppmarge! */
	BGL_EXPORTED_DEF obj_t BGl_deczd2ppmargez12zc0zzcoerce_pprotoz00()
	{
		AN_OBJECT;
		{	/* Coerce/pproto.scm 43 */
			return (BGl_za2ppzd2margeza2zd2zzcoerce_pprotoz00 =
				(BGl_za2ppzd2margeza2zd2zzcoerce_pprotoz00 - ((long) 1)), BUNSPEC);
		}
	}



/* _dec-ppmarge! */
	obj_t BGl__deczd2ppmargez12zc0zzcoerce_pprotoz00(obj_t BgL_envz00_543)
	{
		AN_OBJECT;
		{	/* Coerce/pproto.scm 43 */
			return BGl_deczd2ppmargez12zc0zzcoerce_pprotoz00();
		}
	}



/* pfunction-proto */
	BGL_EXPORTED_DEF obj_t BGl_pfunctionzd2protozd2zzcoerce_pprotoz00(long
		BgL_levelz00_1, BgL_variablez00_bglt BgL_variablez00_2)
	{
		AN_OBJECT;
		{	/* Coerce/pproto.scm 56 */
			{	/* Coerce/pproto.scm 57 */
				obj_t BgL_margez00_376;

				if (
					(BGl_oldzd2margezd2zzcoerce_pprotoz00 ==
						BGl_za2ppzd2margeza2zd2zzcoerce_pprotoz00))
					{	/* Coerce/pproto.scm 57 */
						BgL_margez00_376 = BGl_oldzd2margezd2stringz00zzcoerce_pprotoz00;
					}
				else
					{	/* Coerce/pproto.scm 59 */
						obj_t BgL_margez00_388;

						{	/* Coerce/pproto.scm 59 */
							obj_t BgL_list2147z00_389;

							BgL_list2147z00_389 =
								MAKE_PAIR(BCHAR(((unsigned char) ' ')), BNIL);
							{	/* Coerce/pproto.scm 59 */
								obj_t BgL_res2238z00_533;

								{	/* Coerce/pproto.scm 59 */
									long BgL_kz00_527;

									BgL_kz00_527 = BGl_za2ppzd2margeza2zd2zzcoerce_pprotoz00;
									{	/* Coerce/pproto.scm 59 */
										obj_t BgL_arg2006z00_530;

										BgL_arg2006z00_530 = CAR(BgL_list2147z00_389);
										BgL_res2238z00_533 =
											make_string(BgL_kz00_527, CCHAR(BgL_arg2006z00_530));
								}}
								BgL_margez00_388 = BgL_res2238z00_533;
						}}
						BGl_oldzd2margezd2zzcoerce_pprotoz00 =
							BGl_za2ppzd2margeza2zd2zzcoerce_pprotoz00;
						BGl_oldzd2margezd2stringz00zzcoerce_pprotoz00 = BgL_margez00_388;
						BgL_margez00_376 = BgL_margez00_388;
					}
				if (BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BINT(BgL_levelz00_1),
						BGl_za2verboseza2z00zzengine_paramz00))
					{	/* Coerce/pproto.scm 65 */
						obj_t BgL_arg2118z00_379;

						obj_t BgL_arg2125z00_381;

						BgL_arg2118z00_379 =
							BGl_shapez00zztools_shapez00((obj_t) (BgL_variablez00_2));
						BgL_arg2125z00_381 =
							BGl_functionzd2typezd2ze3stringze3zztype_pptypez00
							(BgL_variablez00_2);
						{	/* Coerce/pproto.scm 63 */
							obj_t BgL_list2126z00_382;

							{	/* Coerce/pproto.scm 63 */
								obj_t BgL_arg2127z00_383;

								{	/* Coerce/pproto.scm 63 */
									obj_t BgL_arg2139z00_384;

									{	/* Coerce/pproto.scm 63 */
										obj_t BgL_arg2141z00_385;

										{	/* Coerce/pproto.scm 63 */
											obj_t BgL_arg2145z00_386;

											BgL_arg2145z00_386 =
												MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
											BgL_arg2141z00_385 =
												MAKE_PAIR(BgL_arg2125z00_381, BgL_arg2145z00_386);
										}
										BgL_arg2139z00_384 =
											MAKE_PAIR(BGl_string2241z00zzcoerce_pprotoz00,
											BgL_arg2141z00_385);
									}
									BgL_arg2127z00_383 =
										MAKE_PAIR(BgL_arg2118z00_379, BgL_arg2139z00_384);
								}
								BgL_list2126z00_382 =
									MAKE_PAIR(BgL_margez00_376, BgL_arg2127z00_383);
							}
							return
								BGl_verbosez00zztools_speekz00(BINT(BgL_levelz00_1),
								BgL_list2126z00_382);
						}
					}
				else
					{	/* Coerce/pproto.scm 63 */
						return BUNSPEC;
					}
			}
		}
	}



/* _pfunction-proto */
	obj_t BGl__pfunctionzd2protozd2zzcoerce_pprotoz00(obj_t BgL_envz00_544,
		obj_t BgL_levelz00_545, obj_t BgL_variablez00_546)
	{
		AN_OBJECT;
		{	/* Coerce/pproto.scm 56 */
			return
				BGl_pfunctionzd2protozd2zzcoerce_pprotoz00(
				(long) CINT(BgL_levelz00_545),
				(BgL_variablez00_bglt) (BgL_variablez00_546));
		}
	}



/* pvariable-proto */
	BGL_EXPORTED_DEF obj_t BGl_pvariablezd2protozd2zzcoerce_pprotoz00(long
		BgL_levelz00_3, BgL_variablez00_bglt BgL_variablez00_4)
	{
		AN_OBJECT;
		{	/* Coerce/pproto.scm 72 */
			{	/* Coerce/pproto.scm 73 */
				obj_t BgL_margez00_390;

				{	/* Coerce/pproto.scm 73 */
					obj_t BgL_list2186z00_401;

					BgL_list2186z00_401 = MAKE_PAIR(BCHAR(((unsigned char) ' ')), BNIL);
					{	/* Coerce/pproto.scm 73 */
						obj_t BgL_res2239z00_540;

						{	/* Coerce/pproto.scm 73 */
							long BgL_kz00_534;

							BgL_kz00_534 = BGl_za2ppzd2margeza2zd2zzcoerce_pprotoz00;
							{	/* Coerce/pproto.scm 73 */
								obj_t BgL_arg2006z00_537;

								BgL_arg2006z00_537 = CAR(BgL_list2186z00_401);
								BgL_res2239z00_540 =
									make_string(BgL_kz00_534, CCHAR(BgL_arg2006z00_537));
						}}
						BgL_margez00_390 = BgL_res2239z00_540;
				}}
				if (BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BINT(BgL_levelz00_3),
						BGl_za2verboseza2z00zzengine_paramz00))
					{	/* Coerce/pproto.scm 76 */
						obj_t BgL_arg2151z00_393;

						obj_t BgL_arg2159z00_395;

						BgL_arg2151z00_393 =
							BGl_shapez00zztools_shapez00((obj_t) (BgL_variablez00_4));
						BgL_arg2159z00_395 =
							BGl_variablezd2typezd2ze3stringze3zztype_pptypez00
							(BgL_variablez00_4);
						{	/* Coerce/pproto.scm 74 */
							obj_t BgL_list2160z00_396;

							{	/* Coerce/pproto.scm 74 */
								obj_t BgL_arg2165z00_397;

								{	/* Coerce/pproto.scm 74 */
									obj_t BgL_arg2172z00_398;

									{	/* Coerce/pproto.scm 74 */
										obj_t BgL_arg2178z00_399;

										{	/* Coerce/pproto.scm 74 */
											obj_t BgL_arg2185z00_400;

											BgL_arg2185z00_400 =
												MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
											BgL_arg2178z00_399 =
												MAKE_PAIR(BgL_arg2159z00_395, BgL_arg2185z00_400);
										}
										BgL_arg2172z00_398 =
											MAKE_PAIR(BGl_string2241z00zzcoerce_pprotoz00,
											BgL_arg2178z00_399);
									}
									BgL_arg2165z00_397 =
										MAKE_PAIR(BgL_arg2151z00_393, BgL_arg2172z00_398);
								}
								BgL_list2160z00_396 =
									MAKE_PAIR(BgL_margez00_390, BgL_arg2165z00_397);
							}
							return
								BGl_verbosez00zztools_speekz00(BINT(BgL_levelz00_3),
								BgL_list2160z00_396);
						}
					}
				else
					{	/* Coerce/pproto.scm 74 */
						return BUNSPEC;
					}
			}
		}
	}



/* _pvariable-proto */
	obj_t BGl__pvariablezd2protozd2zzcoerce_pprotoz00(obj_t BgL_envz00_547,
		obj_t BgL_levelz00_548, obj_t BgL_variablez00_549)
	{
		AN_OBJECT;
		{	/* Coerce/pproto.scm 72 */
			return
				BGl_pvariablezd2protozd2zzcoerce_pprotoz00(
				(long) CINT(BgL_levelz00_548),
				(BgL_variablez00_bglt) (BgL_variablez00_549));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcoerce_pprotoz00()
	{
		AN_OBJECT;
		{	/* Coerce/pproto.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcoerce_pprotoz00()
	{
		AN_OBJECT;
		{	/* Coerce/pproto.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcoerce_pprotoz00()
	{
		AN_OBJECT;
		{	/* Coerce/pproto.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string2242z00zzcoerce_pprotoz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string2242z00zzcoerce_pprotoz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string2242z00zzcoerce_pprotoz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2242z00zzcoerce_pprotoz00));
			BGl_modulezd2initializa7ationz75zztype_pptypez00(((long) 366837795),
				BSTRING_TO_STRING(BGl_string2242z00zzcoerce_pprotoz00));
			return
				BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string2242z00zzcoerce_pprotoz00));
		}
	}

#ifdef __cplusplus
}
#endif
