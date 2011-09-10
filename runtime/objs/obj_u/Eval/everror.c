/*===========================================================================*/
/*   (Eval/everror.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Eval/everror.scm -indent -o objs/obj_u/Eval/everror.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_z62exceptionz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
	}                      *BgL_z62exceptionz62_bglt;

	typedef struct BgL_z62evalzd2warningzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_argsz00;
	}                           *BgL_z62evalzd2warningzb0_bglt;


	static obj_t BGl__evmeaningzd2errorzd2zz__everrorz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__everrorz00 = BUNSPEC;
	static obj_t BGl__evmeaningzd2resetzd2errorz12z12zz__everrorz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evmeaningzd2resetzd2errorz12z12zz__everrorz00();
	static obj_t BGl__evmeaningzd2warningzd2zz__everrorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__evmeaningzd2exceptionzd2handlerz00zz__everrorz00(obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zz__everrorz00();
	BGL_EXPORTED_DECL obj_t BGl_evmeaningzd2arityzd2errorz00zz__everrorz00(obj_t,
		obj_t, int, int);
	static obj_t BGl_evmeaningzd2annotatezd2exceptionz12z12zz__everrorz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__everrorz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__everrorz00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2237z00zz__everrorz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_evmeaningzd2exceptionzd2handlerz00zz__everrorz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__everrorz00(long,
		char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__typez00(long, char *);
	extern BgL_z62evalzd2warningzb0_bglt
		BGl_makezd2z62evalzd2warningz62zz__objectz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__evmeaningzd2arityzd2errorz00zz__everrorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_warningzd2notifyzd2zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_evmeaningzd2setzd2errorzd2locationz12zc0zz__everrorz00(obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_z62exceptionz62zz__objectz00;
	extern obj_t BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_raisez00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evmeaningzd2errorzd2zz__everrorz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evmeaningzd2warningzd2zz__everrorz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evmeaningzd2typezd2errorz00zz__everrorz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__everrorz00();
	static obj_t
		BGl__evmeaningzd2setzd2errorzd2locationz12zc0zz__everrorz00(obj_t, obj_t);
	static obj_t BGl__evmeaningzd2typezd2errorz00zz__everrorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evmeaningzd2setzd2errorzd2locationz12zd2envz12zz__everrorz00,
		BgL_bgl__evmeaningza7d2set2245za7,
		BGl__evmeaningzd2setzd2errorzd2locationz12zc0zz__everrorz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_evmeaningzd2errorzd2envz00zz__everrorz00,
		BgL_bgl__evmeaningza7d2err2246za7, BGl__evmeaningzd2errorzd2zz__everrorz00,
		0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evmeaningzd2exceptionzd2handlerzd2envzd2zz__everrorz00,
		BgL_bgl__evmeaningza7d2exc2247za7,
		BGl__evmeaningzd2exceptionzd2handlerz00zz__everrorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evmeaningzd2resetzd2errorz12zd2envzc0zz__everrorz00,
		BgL_bgl__evmeaningza7d2res2248za7,
		BGl__evmeaningzd2resetzd2errorz12z12zz__everrorz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_evmeaningzd2warningzd2envz00zz__everrorz00,
		BgL_bgl__evmeaningza7d2war2249za7, va_generic_entry,
		BGl__evmeaningzd2warningzd2zz__everrorz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evmeaningzd2arityzd2errorzd2envzd2zz__everrorz00,
		BgL_bgl__evmeaningza7d2ari2250za7,
		BGl__evmeaningzd2arityzd2errorz00zz__everrorz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evmeaningzd2typezd2errorzd2envzd2zz__everrorz00,
		BgL_bgl__evmeaningza7d2typ2251za7,
		BGl__evmeaningzd2typezd2errorz00zz__everrorz00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string2238z00zz__everrorz00,
		BgL_bgl_string2238za700za7za7_2252za7, "at", 2);
	      DEFINE_STRING(BGl_string2240z00zz__everrorz00,
		BgL_bgl_string2240za700za7za7_2253za7, "eval", 4);
	      DEFINE_STRING(BGl_string2239z00zz__everrorz00,
		BgL_bgl_string2239za700za7za7_2254za7,
		"Wrong number of arguments: ~a expected, ~a provided ", 52);
	      DEFINE_STRING(BGl_string2241z00zz__everrorz00,
		BgL_bgl_string2241za700za7za7_2255za7,
		"/tmp/bigloo/runtime/Eval/everror.scm", 36);
	      DEFINE_STRING(BGl_string2242z00zz__everrorz00,
		BgL_bgl_string2242za700za7za7_2256za7, "_evmeaning-arity-error", 22);
	      DEFINE_STRING(BGl_string2243z00zz__everrorz00,
		BgL_bgl_string2243za700za7za7_2257za7, "int", 3);
	      DEFINE_STRING(BGl_string2244z00zz__everrorz00,
		BgL_bgl_string2244za700za7za7_2258za7, "__everror", 9);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__everrorz00(long
		BgL_checksumz00_1649, char *BgL_fromz00_1650)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__everrorz00))
				{
					BGl_requirezd2initializa7ationz75zz__everrorz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__everrorz00();
					BGl_importedzd2moduleszd2initz00zz__everrorz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__everrorz00()
	{
		AN_OBJECT;
		{	/* Eval/everror.scm 15 */
			return (BGl_symbol2237z00zz__everrorz00 =
				bstring_to_symbol(BGl_string2238z00zz__everrorz00), BUNSPEC);
		}
	}



/* evmeaning-reset-error! */
	BGL_EXPORTED_DEF obj_t BGl_evmeaningzd2resetzd2errorz12z12zz__everrorz00()
	{
		AN_OBJECT;
		{	/* Eval/everror.scm 71 */
			{	/* Eval/everror.scm 72 */
				obj_t BgL_auxz00_1657;

				BgL_auxz00_1657 = BGL_CURRENT_DYNAMIC_ENV();
				return BGL_ENV_BYTECODE_SET(BgL_auxz00_1657, BFALSE);
			}
		}
	}



/* _evmeaning-reset-error! */
	obj_t BGl__evmeaningzd2resetzd2errorz12z12zz__everrorz00(obj_t
		BgL_envz00_1622)
	{
		AN_OBJECT;
		{	/* Eval/everror.scm 71 */
			return BGl_evmeaningzd2resetzd2errorz12z12zz__everrorz00();
		}
	}



/* evmeaning-set-error-location! */
	BGL_EXPORTED_DEF obj_t
		BGl_evmeaningzd2setzd2errorzd2locationz12zc0zz__everrorz00(obj_t
		BgL_locz00_1)
	{
		AN_OBJECT;
		{	/* Eval/everror.scm 77 */
			{	/* Eval/everror.scm 78 */
				obj_t BgL_arg1918z00_821;

				obj_t BgL_arg1919z00_822;

				BgL_arg1918z00_821 = BGL_CURRENT_DYNAMIC_ENV();
				{	/* Eval/everror.scm 79 */
					obj_t BgL_v1874z00_823;

					BgL_v1874z00_823 = create_vector((int) (((long) 3)));
					VECTOR_SET(BgL_v1874z00_823, (int) (((long) 2)), BUNSPEC);
					VECTOR_SET(BgL_v1874z00_823, (int) (((long) 1)), BgL_locz00_1);
					VECTOR_SET(BgL_v1874z00_823, (int) (((long) 0)), BINT(((long) -1)));
					BgL_arg1919z00_822 = BgL_v1874z00_823;
				}
				return BGL_ENV_BYTECODE_SET(BgL_arg1918z00_821, BgL_arg1919z00_822);
			}
		}
	}



/* _evmeaning-set-error-location! */
	obj_t BGl__evmeaningzd2setzd2errorzd2locationz12zc0zz__everrorz00(obj_t
		BgL_envz00_1623, obj_t BgL_locz00_1624)
	{
		AN_OBJECT;
		{	/* Eval/everror.scm 77 */
			return
				BGl_evmeaningzd2setzd2errorzd2locationz12zc0zz__everrorz00
				(BgL_locz00_1624);
		}
	}



/* evmeaning-error */
	BGL_EXPORTED_DEF obj_t BGl_evmeaningzd2errorzd2zz__everrorz00(obj_t
		BgL_bcodez00_2, obj_t BgL_procz00_3, obj_t BgL_mesz00_4, obj_t BgL_objz00_5)
	{
		AN_OBJECT;
		{	/* Eval/everror.scm 84 */
			if (VECTORP(BgL_bcodez00_2))
				{	/* Eval/everror.scm 86 */
					obj_t BgL_ezd21544zd2_829;

					BgL_ezd21544zd2_829 = VECTOR_REF(BgL_bcodez00_2, (int) (((long) 1)));
					if (PAIRP(BgL_ezd21544zd2_829))
						{	/* Eval/everror.scm 86 */
							obj_t BgL_cdrzd21550zd2_831;

							BgL_cdrzd21550zd2_831 = CDR(BgL_ezd21544zd2_829);
							if ((CAR(BgL_ezd21544zd2_829) == BGl_symbol2237z00zz__everrorz00))
								{	/* Eval/everror.scm 86 */
									if (PAIRP(BgL_cdrzd21550zd2_831))
										{	/* Eval/everror.scm 86 */
											obj_t BgL_cdrzd21554zd2_834;

											BgL_cdrzd21554zd2_834 = CDR(BgL_cdrzd21550zd2_831);
											if (PAIRP(BgL_cdrzd21554zd2_834))
												{	/* Eval/everror.scm 86 */
													if (NULLP(CDR(BgL_cdrzd21554zd2_834)))
														{	/* Eval/everror.scm 86 */
															return
																BGl_errorzf2locationzf2zz__errorz00
																(BgL_procz00_3, BgL_mesz00_4, BgL_objz00_5,
																CAR(BgL_cdrzd21550zd2_831),
																CAR(BgL_cdrzd21554zd2_834));
														}
													else
														{	/* Eval/everror.scm 86 */
															return
																BGl_errorz00zz__errorz00(BgL_procz00_3,
																BgL_mesz00_4, BgL_objz00_5);
														}
												}
											else
												{	/* Eval/everror.scm 86 */
													return
														BGl_errorz00zz__errorz00(BgL_procz00_3,
														BgL_mesz00_4, BgL_objz00_5);
												}
										}
									else
										{	/* Eval/everror.scm 86 */
											return
												BGl_errorz00zz__errorz00(BgL_procz00_3, BgL_mesz00_4,
												BgL_objz00_5);
										}
								}
							else
								{	/* Eval/everror.scm 86 */
									return
										BGl_errorz00zz__errorz00(BgL_procz00_3, BgL_mesz00_4,
										BgL_objz00_5);
								}
						}
					else
						{	/* Eval/everror.scm 86 */
							return
								BGl_errorz00zz__errorz00(BgL_procz00_3, BgL_mesz00_4,
								BgL_objz00_5);
						}
				}
			else
				{	/* Eval/everror.scm 85 */
					return
						BGl_errorz00zz__errorz00(BgL_procz00_3, BgL_mesz00_4, BgL_objz00_5);
				}
		}
	}



/* _evmeaning-error */
	obj_t BGl__evmeaningzd2errorzd2zz__everrorz00(obj_t BgL_envz00_1625,
		obj_t BgL_bcodez00_1626, obj_t BgL_procz00_1627, obj_t BgL_mesz00_1628,
		obj_t BgL_objz00_1629)
	{
		AN_OBJECT;
		{	/* Eval/everror.scm 84 */
			return
				BGl_evmeaningzd2errorzd2zz__everrorz00(BgL_bcodez00_1626,
				BgL_procz00_1627, BgL_mesz00_1628, BgL_objz00_1629);
		}
	}



/* evmeaning-type-error */
	BGL_EXPORTED_DEF obj_t BGl_evmeaningzd2typezd2errorz00zz__everrorz00(obj_t
		BgL_bcodez00_6, obj_t BgL_procz00_7, obj_t BgL_mesz00_8, obj_t BgL_objz00_9)
	{
		AN_OBJECT;
		{	/* Eval/everror.scm 96 */
			if (VECTORP(BgL_bcodez00_6))
				{	/* Eval/everror.scm 98 */
					obj_t BgL_ezd21562zd2_847;

					BgL_ezd21562zd2_847 = VECTOR_REF(BgL_bcodez00_6, (int) (((long) 1)));
					if (PAIRP(BgL_ezd21562zd2_847))
						{	/* Eval/everror.scm 98 */
							obj_t BgL_cdrzd21568zd2_849;

							BgL_cdrzd21568zd2_849 = CDR(BgL_ezd21562zd2_847);
							if ((CAR(BgL_ezd21562zd2_847) == BGl_symbol2237z00zz__everrorz00))
								{	/* Eval/everror.scm 98 */
									if (PAIRP(BgL_cdrzd21568zd2_849))
										{	/* Eval/everror.scm 98 */
											obj_t BgL_cdrzd21572zd2_852;

											BgL_cdrzd21572zd2_852 = CDR(BgL_cdrzd21568zd2_849);
											if (PAIRP(BgL_cdrzd21572zd2_852))
												{	/* Eval/everror.scm 98 */
													if (NULLP(CDR(BgL_cdrzd21572zd2_852)))
														{	/* Eval/everror.scm 98 */
															return
																BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00
																(BgL_procz00_7, BgL_mesz00_8, BgL_objz00_9,
																CAR(BgL_cdrzd21568zd2_849),
																CAR(BgL_cdrzd21572zd2_852));
														}
													else
														{	/* Eval/everror.scm 98 */
															return
																BGl_bigloozd2typezd2errorz00zz__errorz00
																(BgL_procz00_7, BgL_mesz00_8, BgL_objz00_9);
														}
												}
											else
												{	/* Eval/everror.scm 98 */
													return
														BGl_bigloozd2typezd2errorz00zz__errorz00
														(BgL_procz00_7, BgL_mesz00_8, BgL_objz00_9);
												}
										}
									else
										{	/* Eval/everror.scm 98 */
											return
												BGl_bigloozd2typezd2errorz00zz__errorz00(BgL_procz00_7,
												BgL_mesz00_8, BgL_objz00_9);
										}
								}
							else
								{	/* Eval/everror.scm 98 */
									return
										BGl_bigloozd2typezd2errorz00zz__errorz00(BgL_procz00_7,
										BgL_mesz00_8, BgL_objz00_9);
								}
						}
					else
						{	/* Eval/everror.scm 98 */
							return
								BGl_bigloozd2typezd2errorz00zz__errorz00(BgL_procz00_7,
								BgL_mesz00_8, BgL_objz00_9);
						}
				}
			else
				{	/* Eval/everror.scm 97 */
					return
						BGl_bigloozd2typezd2errorz00zz__errorz00(BgL_procz00_7,
						BgL_mesz00_8, BgL_objz00_9);
				}
		}
	}



/* _evmeaning-type-error */
	obj_t BGl__evmeaningzd2typezd2errorz00zz__everrorz00(obj_t BgL_envz00_1630,
		obj_t BgL_bcodez00_1631, obj_t BgL_procz00_1632, obj_t BgL_mesz00_1633,
		obj_t BgL_objz00_1634)
	{
		AN_OBJECT;
		{	/* Eval/everror.scm 96 */
			return
				BGl_evmeaningzd2typezd2errorz00zz__everrorz00(BgL_bcodez00_1631,
				BgL_procz00_1632, BgL_mesz00_1633, BgL_objz00_1634);
		}
	}



/* evmeaning-warning */
	BGL_EXPORTED_DEF obj_t BGl_evmeaningzd2warningzd2zz__everrorz00(obj_t
		BgL_bcodez00_10, obj_t BgL_argsz00_11)
	{
		AN_OBJECT;
		{	/* Eval/everror.scm 108 */
			if (VECTORP(BgL_bcodez00_10))
				{	/* Eval/everror.scm 110 */
					obj_t BgL_ezd21580zd2_865;

					BgL_ezd21580zd2_865 = VECTOR_REF(BgL_bcodez00_10, (int) (((long) 1)));
					if (PAIRP(BgL_ezd21580zd2_865))
						{	/* Eval/everror.scm 110 */
							obj_t BgL_cdrzd21586zd2_867;

							BgL_cdrzd21586zd2_867 = CDR(BgL_ezd21580zd2_865);
							if ((CAR(BgL_ezd21580zd2_865) == BGl_symbol2237z00zz__everrorz00))
								{	/* Eval/everror.scm 110 */
									if (PAIRP(BgL_cdrzd21586zd2_867))
										{	/* Eval/everror.scm 110 */
											obj_t BgL_cdrzd21590zd2_870;

											BgL_cdrzd21590zd2_870 = CDR(BgL_cdrzd21586zd2_867);
											if (PAIRP(BgL_cdrzd21590zd2_870))
												{	/* Eval/everror.scm 110 */
													if (NULLP(CDR(BgL_cdrzd21590zd2_870)))
														{	/* Eval/everror.scm 110 */
															obj_t BgL_arg1950z00_873;

															obj_t BgL_arg1951z00_874;

															BgL_arg1950z00_873 = CAR(BgL_cdrzd21586zd2_867);
															BgL_arg1951z00_874 = CAR(BgL_cdrzd21590zd2_870);
															{	/* Eval/everror.scm 110 */
																BgL_z62evalzd2warningzb0_bglt
																	BgL_arg1955z00_1407;
																BgL_arg1955z00_1407 =
																	BGl_makezd2z62evalzd2warningz62zz__objectz00
																	(BgL_arg1950z00_873, BgL_arg1951z00_874,
																	BFALSE, BgL_argsz00_11);
																return
																	BGl_warningzd2notifyzd2zz__errorz00((obj_t)
																	(BgL_arg1955z00_1407));
															}
														}
													else
														{	/* Eval/everror.scm 110 */
															BgL_z62evalzd2warningzb0_bglt BgL_arg1956z00_1408;

															BgL_arg1956z00_1408 =
																BGl_makezd2z62evalzd2warningz62zz__objectz00
																(BFALSE, BFALSE, BFALSE, BgL_argsz00_11);
															return
																BGl_warningzd2notifyzd2zz__errorz00((obj_t)
																(BgL_arg1956z00_1408));
														}
												}
											else
												{	/* Eval/everror.scm 110 */
													BgL_z62evalzd2warningzb0_bglt BgL_arg1956z00_1409;

													BgL_arg1956z00_1409 =
														BGl_makezd2z62evalzd2warningz62zz__objectz00(BFALSE,
														BFALSE, BFALSE, BgL_argsz00_11);
													return
														BGl_warningzd2notifyzd2zz__errorz00((obj_t)
														(BgL_arg1956z00_1409));
												}
										}
									else
										{	/* Eval/everror.scm 110 */
											BgL_z62evalzd2warningzb0_bglt BgL_arg1956z00_1410;

											BgL_arg1956z00_1410 =
												BGl_makezd2z62evalzd2warningz62zz__objectz00(BFALSE,
												BFALSE, BFALSE, BgL_argsz00_11);
											return
												BGl_warningzd2notifyzd2zz__errorz00((obj_t)
												(BgL_arg1956z00_1410));
										}
								}
							else
								{	/* Eval/everror.scm 110 */
									BgL_z62evalzd2warningzb0_bglt BgL_arg1956z00_1411;

									BgL_arg1956z00_1411 =
										BGl_makezd2z62evalzd2warningz62zz__objectz00(BFALSE, BFALSE,
										BFALSE, BgL_argsz00_11);
									return
										BGl_warningzd2notifyzd2zz__errorz00((obj_t)
										(BgL_arg1956z00_1411));
								}
						}
					else
						{	/* Eval/everror.scm 110 */
							BgL_z62evalzd2warningzb0_bglt BgL_arg1956z00_1412;

							BgL_arg1956z00_1412 =
								BGl_makezd2z62evalzd2warningz62zz__objectz00(BFALSE, BFALSE,
								BFALSE, BgL_argsz00_11);
							return
								BGl_warningzd2notifyzd2zz__errorz00((obj_t)
								(BgL_arg1956z00_1412));
						}
				}
			else
				{	/* Eval/everror.scm 115 */
					BgL_z62evalzd2warningzb0_bglt BgL_arg1957z00_880;

					BgL_arg1957z00_880 =
						BGl_makezd2z62evalzd2warningz62zz__objectz00(BFALSE, BFALSE, BFALSE,
						BgL_argsz00_11);
					return
						BGl_warningzd2notifyzd2zz__errorz00((obj_t) (BgL_arg1957z00_880));
				}
		}
	}



/* _evmeaning-warning */
	obj_t BGl__evmeaningzd2warningzd2zz__everrorz00(obj_t BgL_envz00_1635,
		obj_t BgL_bcodez00_1636, obj_t BgL_argsz00_1637)
	{
		AN_OBJECT;
		{	/* Eval/everror.scm 108 */
			return
				BGl_evmeaningzd2warningzd2zz__everrorz00(BgL_bcodez00_1636,
				BgL_argsz00_1637);
		}
	}



/* evmeaning-annotate-exception! */
	obj_t BGl_evmeaningzd2annotatezd2exceptionz12z12zz__everrorz00(obj_t
		BgL_ez00_12)
	{
		AN_OBJECT;
		{	/* Eval/everror.scm 120 */
			{	/* Eval/everror.scm 121 */
				bool_t BgL_testz00_1771;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_ez00_12,
						BGl_z62exceptionz62zz__objectz00))
					{	/* Eval/everror.scm 122 */
						bool_t BgL_testz00_1774;

						{	/* Eval/everror.scm 122 */
							BgL_z62exceptionz62_bglt BgL_obj1102z00_1416;

							BgL_obj1102z00_1416 = (BgL_z62exceptionz62_bglt) (BgL_ez00_12);
							BgL_testz00_1774 =
								CBOOL(
								(((BgL_z62exceptionz62_bglt) CREF(BgL_obj1102z00_1416))->
									BgL_fnamez00));
						}
						if (BgL_testz00_1774)
							{	/* Eval/everror.scm 122 */
								BgL_testz00_1771 = ((bool_t) 0);
							}
						else
							{	/* Eval/everror.scm 123 */
								obj_t BgL_arg1975z00_904;

								{	/* Eval/everror.scm 123 */
									obj_t BgL_auxz00_1778;

									BgL_auxz00_1778 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_arg1975z00_904 = BGL_ENV_BYTECODE(BgL_auxz00_1778);
								}
								BgL_testz00_1771 = VECTORP(BgL_arg1975z00_904);
							}
					}
				else
					{	/* Eval/everror.scm 121 */
						BgL_testz00_1771 = ((bool_t) 0);
					}
				if (BgL_testz00_1771)
					{	/* Eval/everror.scm 124 */
						obj_t BgL_ezd21598zd2_886;

						{	/* Eval/everror.scm 124 */
							obj_t BgL_arg1970z00_899;

							{	/* Eval/everror.scm 124 */
								obj_t BgL_auxz00_1782;

								BgL_auxz00_1782 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_arg1970z00_899 = BGL_ENV_BYTECODE(BgL_auxz00_1782);
							}
							BgL_ezd21598zd2_886 =
								VECTOR_REF(BgL_arg1970z00_899, (int) (((long) 1)));
						}
						if (PAIRP(BgL_ezd21598zd2_886))
							{	/* Eval/everror.scm 124 */
								obj_t BgL_cdrzd21604zd2_888;

								BgL_cdrzd21604zd2_888 = CDR(BgL_ezd21598zd2_886);
								if (
									(CAR(BgL_ezd21598zd2_886) == BGl_symbol2237z00zz__everrorz00))
									{	/* Eval/everror.scm 124 */
										if (PAIRP(BgL_cdrzd21604zd2_888))
											{	/* Eval/everror.scm 124 */
												obj_t BgL_cdrzd21608zd2_891;

												BgL_cdrzd21608zd2_891 = CDR(BgL_cdrzd21604zd2_888);
												if (PAIRP(BgL_cdrzd21608zd2_891))
													{	/* Eval/everror.scm 124 */
														if (NULLP(CDR(BgL_cdrzd21608zd2_891)))
															{	/* Eval/everror.scm 124 */
																obj_t BgL_arg1965z00_894;

																obj_t BgL_arg1966z00_895;

																BgL_arg1965z00_894 = CAR(BgL_cdrzd21604zd2_888);
																BgL_arg1966z00_895 = CAR(BgL_cdrzd21608zd2_891);
																{
																	BgL_z62exceptionz62_bglt BgL_auxz00_1803;

																	BgL_auxz00_1803 =
																		(BgL_z62exceptionz62_bglt) (BgL_ez00_12);
																	((((BgL_z62exceptionz62_bglt)
																				CREF(BgL_auxz00_1803))->BgL_fnamez00) =
																		((obj_t) BgL_arg1965z00_894), BUNSPEC);
																}
																{
																	BgL_z62exceptionz62_bglt BgL_auxz00_1806;

																	BgL_auxz00_1806 =
																		(BgL_z62exceptionz62_bglt) (BgL_ez00_12);
																	((((BgL_z62exceptionz62_bglt)
																				CREF(BgL_auxz00_1806))->
																			BgL_locationz00) =
																		((obj_t) BgL_arg1966z00_895), BUNSPEC);
																}
																return BgL_ez00_12;
															}
														else
															{	/* Eval/everror.scm 124 */
																return BgL_ez00_12;
															}
													}
												else
													{	/* Eval/everror.scm 124 */
														return BgL_ez00_12;
													}
											}
										else
											{	/* Eval/everror.scm 124 */
												return BgL_ez00_12;
											}
									}
								else
									{	/* Eval/everror.scm 124 */
										return BgL_ez00_12;
									}
							}
						else
							{	/* Eval/everror.scm 124 */
								return BgL_ez00_12;
							}
					}
				else
					{	/* Eval/everror.scm 121 */
						return BgL_ez00_12;
					}
			}
		}
	}



/* evmeaning-exception-handler */
	BGL_EXPORTED_DEF obj_t
		BGl_evmeaningzd2exceptionzd2handlerz00zz__everrorz00(obj_t BgL_ez00_13)
	{
		AN_OBJECT;
		{	/* Eval/everror.scm 139 */
			return
				BGl_raisez00zz__errorz00
				(BGl_evmeaningzd2annotatezd2exceptionz12z12zz__everrorz00(BgL_ez00_13));
		}
	}



/* _evmeaning-exception-handler */
	obj_t BGl__evmeaningzd2exceptionzd2handlerz00zz__everrorz00(obj_t
		BgL_envz00_1638, obj_t BgL_ez00_1639)
	{
		AN_OBJECT;
		{	/* Eval/everror.scm 139 */
			return
				BGl_evmeaningzd2exceptionzd2handlerz00zz__everrorz00(BgL_ez00_1639);
		}
	}



/* evmeaning-arity-error */
	BGL_EXPORTED_DEF obj_t BGl_evmeaningzd2arityzd2errorz00zz__everrorz00(obj_t
		BgL_codez00_14, obj_t BgL_namez00_15, int BgL_providez00_16,
		int BgL_expectz00_17)
	{
		AN_OBJECT;
		{	/* Eval/everror.scm 145 */
			{	/* Eval/everror.scm 146 */
				obj_t BgL_msgz00_1441;

				{	/* Eval/everror.scm 146 */
					obj_t BgL_list1978z00_1442;

					{	/* Eval/everror.scm 146 */
						obj_t BgL_arg1979z00_1443;

						BgL_arg1979z00_1443 = MAKE_PAIR(BINT(BgL_providez00_16), BNIL);
						BgL_list1978z00_1442 =
							MAKE_PAIR(BINT(BgL_expectz00_17), BgL_arg1979z00_1443);
					}
					BgL_msgz00_1441 =
						BGl_formatz00zz__r4_output_6_10_3z00
						(BGl_string2239z00zz__everrorz00, BgL_list1978z00_1442);
				}
				return
					BGl_evmeaningzd2errorzd2zz__everrorz00(BgL_codez00_14,
					BGl_string2240z00zz__everrorz00, BgL_msgz00_1441, BgL_namez00_15);
			}
		}
	}



/* _evmeaning-arity-error */
	obj_t BGl__evmeaningzd2arityzd2errorz00zz__everrorz00(obj_t BgL_envz00_1640,
		obj_t BgL_codez00_1641, obj_t BgL_namez00_1642, obj_t BgL_providez00_1643,
		obj_t BgL_expectz00_1644)
	{
		AN_OBJECT;
		{	/* Eval/everror.scm 145 */
			{	/* Eval/everror.scm 146 */
				int BgL_auxz00_1827;

				int BgL_auxz00_1818;

				{	/* Eval/everror.scm 146 */
					obj_t BgL_auxz00_1828;

					if (INTEGERP(BgL_expectz00_1644))
						{	/* Eval/everror.scm 146 */
							BgL_auxz00_1828 = BgL_expectz00_1644;
						}
					else
						{
							obj_t BgL_auxz00_1831;

							BgL_auxz00_1831 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2241z00zz__everrorz00,
								BINT(((long) 5896)), BGl_string2242z00zz__everrorz00,
								BGl_string2243z00zz__everrorz00, BgL_expectz00_1644);
							FAILURE(BgL_auxz00_1831, BFALSE, BFALSE);
						}
					BgL_auxz00_1827 = CINT(BgL_auxz00_1828);
				}
				{	/* Eval/everror.scm 146 */
					obj_t BgL_auxz00_1819;

					if (INTEGERP(BgL_providez00_1643))
						{	/* Eval/everror.scm 146 */
							BgL_auxz00_1819 = BgL_providez00_1643;
						}
					else
						{
							obj_t BgL_auxz00_1822;

							BgL_auxz00_1822 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2241z00zz__everrorz00,
								BINT(((long) 5896)), BGl_string2242z00zz__everrorz00,
								BGl_string2243z00zz__everrorz00, BgL_providez00_1643);
							FAILURE(BgL_auxz00_1822, BFALSE, BFALSE);
						}
					BgL_auxz00_1818 = CINT(BgL_auxz00_1819);
				}
				return
					BGl_evmeaningzd2arityzd2errorz00zz__everrorz00(BgL_codez00_1641,
					BgL_namez00_1642, BgL_auxz00_1818, BgL_auxz00_1827);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__everrorz00()
	{
		AN_OBJECT;
		{	/* Eval/everror.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__everrorz00()
	{
		AN_OBJECT;
		{	/* Eval/everror.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__everrorz00()
	{
		AN_OBJECT;
		{	/* Eval/everror.scm 15 */
			BGl_modulezd2initializa7ationz75zz__typez00(((long) 70840631),
				BSTRING_TO_STRING(BGl_string2244z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2244z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2244z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 36880833),
				BSTRING_TO_STRING(BGl_string2244z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 89651882),
				BSTRING_TO_STRING(BGl_string2244z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 333500458),
				BSTRING_TO_STRING(BGl_string2244z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string2244z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 318625392),
				BSTRING_TO_STRING(BGl_string2244z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 393249273),
				BSTRING_TO_STRING(BGl_string2244z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 32719508),
				BSTRING_TO_STRING(BGl_string2244z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2244z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2244z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 271566986),
				BSTRING_TO_STRING(BGl_string2244z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					234579753), BSTRING_TO_STRING(BGl_string2244z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					170547433), BSTRING_TO_STRING(BGl_string2244z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					400650732), BSTRING_TO_STRING(BGl_string2244z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					459721289), BSTRING_TO_STRING(BGl_string2244z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 123701502),
				BSTRING_TO_STRING(BGl_string2244z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 504082187),
				BSTRING_TO_STRING(BGl_string2244z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 497320869),
				BSTRING_TO_STRING(BGl_string2244z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					485908420), BSTRING_TO_STRING(BGl_string2244z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 28131980),
				BSTRING_TO_STRING(BGl_string2244z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					159305184), BSTRING_TO_STRING(BGl_string2244z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 236383033),
				BSTRING_TO_STRING(BGl_string2244z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 466504979),
				BSTRING_TO_STRING(BGl_string2244z00zz__everrorz00));
			return BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					164543289), BSTRING_TO_STRING(BGl_string2244z00zz__everrorz00));
		}
	}

#ifdef __cplusplus
}
#endif
