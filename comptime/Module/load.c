/*===========================================================================*/
/*   (Module/load.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/load.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_ccompz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_producerz00;
		obj_t BgL_consumerz00;
		obj_t BgL_finaliza7erza7;
	}               *BgL_ccompz00_bglt;


	BGL_EXPORTED_DECL obj_t BGl_makezd2loadzd2compilerz00zzmodule_loadz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_loadzd2parserzd2zzmodule_loadz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzmodule_loadz00();
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzmodule_loadz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_loadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__modulez00(long, char *);
	extern obj_t BGl_za2accesszd2filesza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_dirnamez00zz__osz00(obj_t);
	extern BgL_ccompz00_bglt BGl_makezd2ccompzd2zzmodule_modulez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzmodule_loadz00();
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_loadz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzmodule_loadz00();
	extern obj_t BGl_loadzd2modulezd2zzread_loadz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32128ze3z83zzmodule_loadz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32129ze3z83zzmodule_loadz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_loadz00();
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_bigloozd2modulezd2resolverz00zz__modulez00();
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl__loadzd2producerzd2zzmodule_loadz00(obj_t, obj_t);
	static obj_t BGl_loadzd2producerzd2zzmodule_loadz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_loadz00();
	static obj_t BGl__makezd2loadzd2compilerz00zzmodule_loadz00(obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2256z00zzmodule_loadz00,
		BgL_bgl_za7c3anonymousza7a322268z00,
		BGl_zc3anonymousza32129ze3z83zzmodule_loadz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2257z00zzmodule_loadz00,
		BgL_bgl_za7c3anonymousza7a322269z00,
		BGl_zc3anonymousza32128ze3z83zzmodule_loadz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2loadzd2compilerzd2envzd2zzmodule_loadz00,
		BgL_bgl__makeza7d2loadza7d2c2270z00,
		BGl__makezd2loadzd2compilerz00zzmodule_loadz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2258z00zzmodule_loadz00,
		BgL_bgl_string2258za700za7za7m2271za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string2260z00zzmodule_loadz00,
		BgL_bgl_string2260za700za7za7m2272za7, "Illegal load clause", 19);
	      DEFINE_STRING(BGl_string2259z00zzmodule_loadz00,
		BgL_bgl_string2259za700za7za7m2273za7, "Illegal `load' clause", 21);
	      DEFINE_STRING(BGl_string2261z00zzmodule_loadz00,
		BgL_bgl_string2261za700za7za7m2274za7, "load", 4);
	      DEFINE_STRING(BGl_string2262z00zzmodule_loadz00,
		BgL_bgl_string2262za700za7za7m2275za7, "Can't load module", 17);
	      DEFINE_STRING(BGl_string2263z00zzmodule_loadz00,
		BgL_bgl_string2263za700za7za7m2276za7, "module_load", 11);
	      DEFINE_STRING(BGl_string2264z00zzmodule_loadz00,
		BgL_bgl_string2264za700za7za7m2277za7, "void load ", 10);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_loadzd2producerzd2envz00zzmodule_loadz00,
		BgL_bgl__loadza7d2producer2278za7, BGl__loadzd2producerzd2zzmodule_loadz00,
		0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmodule_loadz00(long
		BgL_checksumz00_639, char *BgL_fromz00_640)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_loadz00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_loadz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzmodule_loadz00();
					BGl_cnstzd2initzd2zzmodule_loadz00();
					BGl_importedzd2moduleszd2initz00zzmodule_loadz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_loadz00()
	{
		AN_OBJECT;
		{	/* Module/load.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "module_load");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "module_load");
			BGl_modulezd2initializa7ationz75zz__modulez00(((long) 0), "module_load");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_loadz00()
	{
		AN_OBJECT;
		{	/* Module/load.scm 15 */
			{	/* Module/load.scm 15 */
				obj_t BgL_cportz00_629;

				BgL_cportz00_629 =
					bgl_open_input_string(BGl_string2264z00zzmodule_loadz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_630;

					BgL_iz00_630 = ((long) 1);
				BgL_loopz00_631:
					if ((BgL_iz00_630 == ((long) -1)))
						{	/* Module/load.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/load.scm 15 */
							{	/* Module/load.scm 15 */
								obj_t BgL_arg2267z00_633;

								{	/* Module/load.scm 15 */

									{	/* Module/load.scm 15 */
										obj_t BgL_locationz00_635;

										BgL_locationz00_635 = BBOOL(((bool_t) 0));
										{	/* Module/load.scm 15 */

											BgL_arg2267z00_633 =
												BGl_readz00zz__readerz00(BgL_cportz00_629,
												BgL_locationz00_635);
										}
									}
								}
								{	/* Module/load.scm 15 */
									int BgL_auxz00_656;

									BgL_auxz00_656 = (int) (BgL_iz00_630);
									CNST_TABLE_SET(BgL_auxz00_656, BgL_arg2267z00_633);
							}}
							{	/* Module/load.scm 15 */
								int BgL_auxz00_636;

								BgL_auxz00_636 = (int) ((BgL_iz00_630 - ((long) 1)));
								{
									long BgL_iz00_661;

									BgL_iz00_661 = (long) (BgL_auxz00_636);
									BgL_iz00_630 = BgL_iz00_661;
									goto BgL_loopz00_631;
								}
							}
						}
				}
			}
		}
	}



/* make-load-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2loadzd2compilerz00zzmodule_loadz00()
	{
		AN_OBJECT;
		{	/* Module/load.scm 30 */
			{	/* Module/load.scm 31 */
				obj_t BgL_arg2125z00_385;

				BgL_arg2125z00_385 = CNST_TABLE_REF(((long) 0));
				return
					(obj_t) (BGl_makezd2ccompzd2zzmodule_modulez00(BgL_arg2125z00_385,
						BGl_loadzd2producerzd2envz00zzmodule_loadz00,
						BGl_proc2257z00zzmodule_loadz00, BGl_proc2256z00zzmodule_loadz00));
			}
		}
	}



/* _make-load-compiler */
	obj_t BGl__makezd2loadzd2compilerz00zzmodule_loadz00(obj_t BgL_envz00_622)
	{
		AN_OBJECT;
		{	/* Module/load.scm 30 */
			return BGl_makezd2loadzd2compilerz00zzmodule_loadz00();
		}
	}



/* <anonymous:2129> */
	obj_t BGl_zc3anonymousza32129ze3z83zzmodule_loadz00(obj_t BgL_envz00_623)
	{
		AN_OBJECT;
		{	/* Module/module.scm 54 */
			{

				return CNST_TABLE_REF(((long) 1));
		}}
	}



/* <anonymous:2128> */
	obj_t BGl_zc3anonymousza32128ze3z83zzmodule_loadz00(obj_t BgL_envz00_624,
		obj_t BgL_mz00_625, obj_t BgL_cz00_626)
	{
		AN_OBJECT;
		{	/* Module/module.scm 52 */
			return BNIL;
		}
	}



/* load-producer */
	obj_t BGl_loadzd2producerzd2zzmodule_loadz00(obj_t BgL_clausez00_1)
	{
		AN_OBJECT;
		{	/* Module/load.scm 37 */
			{
				obj_t BgL_protosz00_394;

				if (PAIRP(BgL_clausez00_1))
					{	/* Module/load.scm 38 */
						obj_t BgL_arg2139z00_399;

						BgL_arg2139z00_399 = CDR(BgL_clausez00_1);
						{	/* Module/load.scm 38 */
							bool_t BgL_auxz00_671;

							BgL_protosz00_394 = BgL_arg2139z00_399;
							{
								obj_t BgL_l2114z00_401;

								BgL_l2114z00_401 = BgL_protosz00_394;
							BgL_zc3anonymousza32140ze3z83_402:
								if (PAIRP(BgL_l2114z00_401))
									{	/* Module/load.scm 40 */
										BGl_loadzd2parserzd2zzmodule_loadz00(CAR(BgL_l2114z00_401),
											BgL_clausez00_1);
										{
											obj_t BgL_l2114z00_676;

											BgL_l2114z00_676 = CDR(BgL_l2114z00_401);
											BgL_l2114z00_401 = BgL_l2114z00_676;
											goto BgL_zc3anonymousza32140ze3z83_402;
										}
									}
								else
									{	/* Module/load.scm 40 */
										BgL_auxz00_671 = ((bool_t) 1);
									}
							}
							return BBOOL(BgL_auxz00_671);
						}
					}
				else
					{	/* Module/load.scm 38 */
						{	/* Module/load.scm 42 */
							obj_t BgL_list2146z00_407;

							BgL_list2146z00_407 = MAKE_PAIR(BNIL, BNIL);
							return
								BGl_userzd2errorzd2zztools_errorz00
								(BGl_string2258z00zzmodule_loadz00,
								BGl_string2259z00zzmodule_loadz00, BgL_clausez00_1,
								BgL_list2146z00_407);
						}
					}
			}
		}
	}



/* _load-producer */
	obj_t BGl__loadzd2producerzd2zzmodule_loadz00(obj_t BgL_envz00_627,
		obj_t BgL_clausez00_628)
	{
		AN_OBJECT;
		{	/* Module/load.scm 37 */
			return BGl_loadzd2producerzd2zzmodule_loadz00(BgL_clausez00_628);
		}
	}



/* load-parser */
	obj_t BGl_loadzd2parserzd2zzmodule_loadz00(obj_t BgL_protoz00_2,
		obj_t BgL_clausez00_3)
	{
		AN_OBJECT;
		{	/* Module/load.scm 50 */
			{
				obj_t BgL_modulez00_408;

				obj_t BgL_filez00_409;

				obj_t BgL_filesz00_410;

				if (PAIRP(BgL_protoz00_2))
					{	/* Module/load.scm 51 */
						obj_t BgL_carzd21407zd2_416;

						obj_t BgL_cdrzd21408zd2_417;

						BgL_carzd21407zd2_416 = CAR(BgL_protoz00_2);
						BgL_cdrzd21408zd2_417 = CDR(BgL_protoz00_2);
						if (SYMBOLP(BgL_carzd21407zd2_416))
							{	/* Module/load.scm 51 */
								if (PAIRP(BgL_cdrzd21408zd2_417))
									{	/* Module/load.scm 51 */
										obj_t BgL_carzd21413zd2_420;

										BgL_carzd21413zd2_420 = CAR(BgL_cdrzd21408zd2_417);
										if (STRINGP(BgL_carzd21413zd2_420))
											{	/* Module/load.scm 51 */
												BgL_modulez00_408 = BgL_carzd21407zd2_416;
												BgL_filez00_409 = BgL_carzd21413zd2_420;
												BgL_filesz00_410 = CDR(BgL_cdrzd21408zd2_417);
												{
													obj_t BgL_fz00_428;

													BgL_fz00_428 = BgL_filesz00_410;
												BgL_zc3anonymousza32156ze3z83_429:
													if (NULLP(BgL_fz00_428))
														{	/* Module/load.scm 56 */
															obj_t BgL_arg2159z00_431;

															BgL_arg2159z00_431 =
																MAKE_PAIR(BgL_filez00_409, BgL_filesz00_410);
															return
																BGl_loadzd2modulezd2zzread_loadz00
																(BgL_modulez00_408, BgL_arg2159z00_431);
														}
													else
														{	/* Module/load.scm 57 */
															bool_t BgL_testz00_697;

															{	/* Module/load.scm 57 */
																obj_t BgL_auxz00_698;

																BgL_auxz00_698 = CAR(BgL_fz00_428);
																BgL_testz00_697 = STRINGP(BgL_auxz00_698);
															}
															if (BgL_testz00_697)
																{
																	obj_t BgL_fz00_701;

																	BgL_fz00_701 = CDR(BgL_fz00_428);
																	BgL_fz00_428 = BgL_fz00_701;
																	goto BgL_zc3anonymousza32156ze3z83_429;
																}
															else
																{	/* Module/load.scm 58 */
																	obj_t BgL_list2166z00_434;

																	BgL_list2166z00_434 = MAKE_PAIR(BNIL, BNIL);
																	return
																		BGl_userzd2errorzd2zztools_errorz00
																		(BGl_string2258z00zzmodule_loadz00,
																		BGl_string2260z00zzmodule_loadz00,
																		BgL_clausez00_3, BgL_list2166z00_434);
																}
														}
												}
											}
										else
											{	/* Module/load.scm 51 */
											BgL_tagzd21399zd2_413:
												{	/* Module/load.scm 68 */
													obj_t BgL_list2209z00_460;

													BgL_list2209z00_460 = MAKE_PAIR(BNIL, BNIL);
													return
														BGl_userzd2errorzd2zztools_errorz00
														(BGl_string2258z00zzmodule_loadz00,
														BGl_string2260z00zzmodule_loadz00, BgL_clausez00_3,
														BgL_list2209z00_460);
												}
											}
									}
								else
									{	/* Module/load.scm 51 */
										goto BgL_tagzd21399zd2_413;
									}
							}
						else
							{	/* Module/load.scm 51 */
								goto BgL_tagzd21399zd2_413;
							}
					}
				else
					{	/* Module/load.scm 51 */
						if (SYMBOLP(BgL_protoz00_2))
							{	/* Module/load.scm 51 */
								{	/* Module/load.scm 62 */
									obj_t BgL_abasez00_437;

									{	/* Module/load.scm 62 */
										obj_t BgL_l2116z00_442;

										BgL_l2116z00_442 =
											BGl_za2accesszd2filesza2zd2zzengine_paramz00;
										if (NULLP(BgL_l2116z00_442))
											{	/* Module/load.scm 62 */
												BgL_abasez00_437 = BNIL;
											}
										else
											{	/* Module/load.scm 62 */
												obj_t BgL_head2118z00_444;

												BgL_head2118z00_444 =
													MAKE_PAIR(BGl_dirnamez00zz__osz00(CAR
														(BgL_l2116z00_442)), BNIL);
												{	/* Module/load.scm 62 */
													obj_t BgL_g2121z00_445;

													BgL_g2121z00_445 = CDR(BgL_l2116z00_442);
													{
														obj_t BgL_l2116z00_447;

														obj_t BgL_tail2119z00_448;

														BgL_l2116z00_447 = BgL_g2121z00_445;
														BgL_tail2119z00_448 = BgL_head2118z00_444;
													BgL_zc3anonymousza32177ze3z83_449:
														if (NULLP(BgL_l2116z00_447))
															{	/* Module/load.scm 62 */
																BgL_abasez00_437 = BgL_head2118z00_444;
															}
														else
															{	/* Module/load.scm 62 */
																obj_t BgL_newtail2120z00_451;

																BgL_newtail2120z00_451 =
																	MAKE_PAIR(BGl_dirnamez00zz__osz00(CAR
																		(BgL_l2116z00_447)), BNIL);
																SET_CDR(BgL_tail2119z00_448,
																	BgL_newtail2120z00_451);
																{
																	obj_t BgL_tail2119z00_724;

																	obj_t BgL_l2116z00_722;

																	BgL_l2116z00_722 = CDR(BgL_l2116z00_447);
																	BgL_tail2119z00_724 = BgL_newtail2120z00_451;
																	BgL_tail2119z00_448 = BgL_tail2119z00_724;
																	BgL_l2116z00_447 = BgL_l2116z00_722;
																	goto BgL_zc3anonymousza32177ze3z83_449;
																}
															}
													}
												}
											}
									}
									{	/* Module/load.scm 62 */
										obj_t BgL_bz00_438;

										{	/* Module/load.scm 63 */
											obj_t BgL_fun2175z00_441;

											BgL_fun2175z00_441 =
												BGl_bigloozd2modulezd2resolverz00zz__modulez00();
											BgL_bz00_438 =
												PROCEDURE_ENTRY(BgL_fun2175z00_441) (BgL_fun2175z00_441,
												BgL_protoz00_2, BgL_abasez00_437, BEOA);
										}
										{	/* Module/load.scm 63 */

											if (PAIRP(BgL_bz00_438))
												{	/* Module/load.scm 64 */
													return
														BGl_loadzd2modulezd2zzread_loadz00(BgL_protoz00_2,
														BgL_bz00_438);
												}
											else
												{	/* Module/load.scm 64 */
													return
														BGl_userzd2errorzd2zztools_errorz00
														(BGl_string2261z00zzmodule_loadz00,
														BGl_string2262z00zzmodule_loadz00, BgL_protoz00_2,
														BNIL);
												}
										}
									}
								}
							}
						else
							{	/* Module/load.scm 51 */
								goto BgL_tagzd21399zd2_413;
							}
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_loadz00()
	{
		AN_OBJECT;
		{	/* Module/load.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_loadz00()
	{
		AN_OBJECT;
		{	/* Module/load.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_loadz00()
	{
		AN_OBJECT;
		{	/* Module/load.scm 15 */
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string2263z00zzmodule_loadz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string2263z00zzmodule_loadz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string2263z00zzmodule_loadz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2263z00zzmodule_loadz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string2263z00zzmodule_loadz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string2263z00zzmodule_loadz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string2263z00zzmodule_loadz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string2263z00zzmodule_loadz00));
			return
				BGl_modulezd2initializa7ationz75zzread_loadz00(((long) 255602387),
				BSTRING_TO_STRING(BGl_string2263z00zzmodule_loadz00));
		}
	}

#ifdef __cplusplus
}
#endif
