/*===========================================================================*/
/*   (Tools/args.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Tools/args.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT bool_t BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztools_argsz00 = BUNSPEC;
	BGL_EXPORTED_DECL long BGl_localzd2arityzd2zztools_argsz00(obj_t);
	static obj_t BGl_genericzd2initzd2zztools_argsz00();
	static obj_t BGl_makezd2fxzd2protoz00zztools_argsz00(obj_t, long);
	static obj_t BGl_makezd2argszd2namez00zztools_argsz00(long);
	BGL_EXPORTED_DECL obj_t BGl_argszd2listzd2ze3argsza2z41zztools_argsz00(obj_t,
		obj_t);
	static obj_t BGl__makezd2argszd2listz00zztools_argsz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zztools_argsz00();
	static obj_t BGl__foreignzd2arityzd2zztools_argsz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zztools_argsz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_zb2zd2arityz60zztools_argsz00(obj_t, obj_t);
	static obj_t BGl_makezd2vazd2protoz00zztools_argsz00(obj_t, long);
	BGL_EXPORTED_DECL bool_t BGl_dssslzd2arityzd2za7erozf3z54zztools_argsz00(int,
		obj_t);
	static obj_t BGl__argsza2zd2ze3argszd2listz41zztools_argsz00(obj_t, obj_t);
	static obj_t BGl__localzd2arityzd2zztools_argsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_foreignzd2arityzd2zztools_argsz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2argszd2listz00zztools_argsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_dssslz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT long bgl_list_length(obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	static obj_t BGl__dssslzd2arityzd2za7erozf3z54zztools_argsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__makezd2nzd2protoz00zztools_argsz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	static obj_t BGl__argszd2listzd2ze3argsza2z41zztools_argsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__globalzd2arityzd2zztools_argsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2nzd2protoz00zztools_argsz00(obj_t);
	static obj_t BGl_loopz00zztools_argsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_loopz72z72zztools_argsz00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_globalzd2arityzd2zztools_argsz00(obj_t);
	static obj_t BGl__soundzd2arityzf3z21zztools_argsz00(obj_t, obj_t, obj_t);
	static obj_t BGl__zb2zd2arityz60zztools_argsz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_dssslzd2arityzd2zztools_dssslz00(obj_t, bool_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zztools_argsz00();
	static obj_t BGl_methodzd2initzd2zztools_argsz00();
	BGL_EXPORTED_DECL bool_t BGl_soundzd2arityzf3z21zztools_argsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_argsza2zd2ze3argszd2listz41zztools_argsz00(obj_t);
	static obj_t __cnst[1];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_soundzd2arityzf3zd2envzf3zztools_argsz00,
		BgL_bgl__soundza7d2arityza7f1586z00,
		BGl__soundzd2arityzf3z21zztools_argsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2argszd2listzd2envzd2zztools_argsz00,
		BgL_bgl__makeza7d2argsza7d2l1587z00,
		BGl__makezd2argszd2listz00zztools_argsz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_argszd2listzd2ze3argsza2zd2envz93zztools_argsz00,
		BgL_bgl__argsza7d2listza7d2za71588za7,
		BGl__argszd2listzd2ze3argsza2z41zztools_argsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzd2arityzd2envz00zztools_argsz00,
		BgL_bgl__localza7d2arityza7d1589z00, BGl__localzd2arityzd2zztools_argsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2nzd2protozd2envzd2zztools_argsz00,
		BgL_bgl__makeza7d2nza7d2prot1590z00,
		BGl__makezd2nzd2protoz00zztools_argsz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1580z00zztools_argsz00,
		BgL_bgl_string1580za700za7za7t1591za7,
		"DSSSL arguments not allowed in foreign", 38);
	      DEFINE_STRING(BGl_string1581z00zztools_argsz00,
		BgL_bgl_string1581za700za7za7t1592za7, "A", 1);
	      DEFINE_STRING(BGl_string1582z00zztools_argsz00,
		BgL_bgl_string1582za700za7za7t1593za7, "tools_args", 10);
	      DEFINE_STRING(BGl_string1583z00zztools_argsz00,
		BgL_bgl_string1583za700za7za7t1594za7, "foreign-arity ", 14);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2arityzd2za7erozf3zd2envz86zztools_argsz00,
		BgL_bgl__dssslza7d2arityza7d1595z00,
		BGl__dssslzd2arityzd2za7erozf3z54zztools_argsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_foreignzd2arityzd2envz00zztools_argsz00,
		BgL_bgl__foreignza7d2arity1596za7, BGl__foreignzd2arityzd2zztools_argsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_zb2zd2arityzd2envzb2zztools_argsz00,
		BgL_bgl__za7b2za7d2arityza760za71597z00, BGl__zb2zd2arityz60zztools_argsz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2arityzd2envz00zztools_argsz00,
		BgL_bgl__globalza7d2arityza71598z00, BGl__globalzd2arityzd2zztools_argsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_argsza2zd2ze3argszd2listzd2envz93zztools_argsz00,
		BgL_bgl__argsza7a2za7d2za7e3ar1599za7,
		BGl__argsza2zd2ze3argszd2listz41zztools_argsz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long
		BgL_checksumz00_326, char *BgL_fromz00_327)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztools_argsz00))
				{
					BGl_requirezd2initializa7ationz75zztools_argsz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zztools_argsz00();
					BGl_cnstzd2initzd2zztools_argsz00();
					BGl_importedzd2moduleszd2initz00zztools_argsz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztools_argsz00()
	{
		AN_OBJECT;
		{	/* Tools/args.scm 15 */
			BGl_modulezd2initializa7ationz75zz__dssslz00(((long) 0), "tools_args");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"tools_args");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "tools_args");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "tools_args");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"tools_args");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztools_argsz00()
	{
		AN_OBJECT;
		{	/* Tools/args.scm 15 */
			{	/* Tools/args.scm 15 */
				obj_t BgL_cportz00_315;

				BgL_cportz00_315 =
					bgl_open_input_string(BGl_string1583z00zztools_argsz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_316;

					BgL_iz00_316 = ((long) 0);
				BgL_loopz00_317:
					if ((BgL_iz00_316 == ((long) -1)))
						{	/* Tools/args.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Tools/args.scm 15 */
							{	/* Tools/args.scm 15 */
								obj_t BgL_arg1585z00_319;

								{	/* Tools/args.scm 15 */

									{	/* Tools/args.scm 15 */
										obj_t BgL_locationz00_321;

										BgL_locationz00_321 = BBOOL(((bool_t) 0));
										{	/* Tools/args.scm 15 */

											BgL_arg1585z00_319 =
												BGl_readz00zz__readerz00(BgL_cportz00_315,
												BgL_locationz00_321);
										}
									}
								}
								{	/* Tools/args.scm 15 */
									int BgL_auxz00_345;

									BgL_auxz00_345 = (int) (BgL_iz00_316);
									CNST_TABLE_SET(BgL_auxz00_345, BgL_arg1585z00_319);
							}}
							{	/* Tools/args.scm 15 */
								int BgL_auxz00_322;

								BgL_auxz00_322 = (int) ((BgL_iz00_316 - ((long) 1)));
								{
									long BgL_iz00_350;

									BgL_iz00_350 = (long) (BgL_auxz00_322);
									BgL_iz00_316 = BgL_iz00_350;
									goto BgL_loopz00_317;
								}
							}
						}
				}
			}
		}
	}



/* global-arity */
	BGL_EXPORTED_DEF long BGl_globalzd2arityzd2zztools_argsz00(obj_t
		BgL_argsz00_1)
	{
		AN_OBJECT;
		{	/* Tools/args.scm 37 */
			{
				long BgL_iz00_103;

				obj_t BgL_az00_104;

				{	/* Tools/args.scm 38 */
					obj_t BgL_auxz00_352;

					BgL_iz00_103 = ((long) 0);
					BgL_az00_104 = BgL_argsz00_1;
				BgL_zc3anonymousza31509ze3z83_105:
					if (NULLP(BgL_az00_104))
						{	/* Tools/args.scm 41 */
							BgL_auxz00_352 = BINT(BgL_iz00_103);
						}
					else
						{	/* Tools/args.scm 41 */
							if (PAIRP(BgL_az00_104))
								{	/* Tools/args.scm 43 */
									if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
											(BgL_az00_104)))
										{	/* Tools/args.scm 44 */
											BgL_auxz00_352 =
												BGl_dssslzd2arityzd2zztools_dssslz00(BgL_argsz00_1,
												((bool_t) 1));
										}
									else
										{
											obj_t BgL_az00_364;

											long BgL_iz00_362;

											BgL_iz00_362 = (BgL_iz00_103 + ((long) 1));
											BgL_az00_364 = CDR(BgL_az00_104);
											BgL_az00_104 = BgL_az00_364;
											BgL_iz00_103 = BgL_iz00_362;
											goto BgL_zc3anonymousza31509ze3z83_105;
										}
								}
							else
								{	/* Tools/args.scm 43 */
									BgL_auxz00_352 = BINT(NEG((BgL_iz00_103 + ((long) 1))));
						}}
					return (long) CINT(BgL_auxz00_352);
		}}}
	}



/* _global-arity */
	obj_t BGl__globalzd2arityzd2zztools_argsz00(obj_t BgL_envz00_287,
		obj_t BgL_argsz00_288)
	{
		AN_OBJECT;
		{	/* Tools/args.scm 37 */
			return BINT(BGl_globalzd2arityzd2zztools_argsz00(BgL_argsz00_288));
		}
	}



/* local-arity */
	BGL_EXPORTED_DEF long BGl_localzd2arityzd2zztools_argsz00(obj_t BgL_argsz00_2)
	{
		AN_OBJECT;
		{	/* Tools/args.scm 59 */
			{
				long BgL_iz00_115;

				obj_t BgL_az00_116;

				{	/* Tools/args.scm 60 */
					obj_t BgL_auxz00_372;

					BgL_iz00_115 = ((long) 0);
					BgL_az00_116 = BgL_argsz00_2;
				BgL_zc3anonymousza31517ze3z83_117:
					if (NULLP(BgL_az00_116))
						{	/* Tools/args.scm 63 */
							BgL_auxz00_372 = BINT(BgL_iz00_115);
						}
					else
						{	/* Tools/args.scm 63 */
							if (PAIRP(BgL_az00_116))
								{	/* Tools/args.scm 65 */
									if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
											(BgL_az00_116)))
										{	/* Tools/args.scm 66 */
											BgL_auxz00_372 =
												BGl_dssslzd2arityzd2zztools_dssslz00(BgL_argsz00_2,
												((bool_t) 0));
										}
									else
										{
											obj_t BgL_az00_384;

											long BgL_iz00_382;

											BgL_iz00_382 = (BgL_iz00_115 + ((long) 1));
											BgL_az00_384 = CDR(BgL_az00_116);
											BgL_az00_116 = BgL_az00_384;
											BgL_iz00_115 = BgL_iz00_382;
											goto BgL_zc3anonymousza31517ze3z83_117;
										}
								}
							else
								{	/* Tools/args.scm 65 */
									BgL_auxz00_372 = BINT(NEG((BgL_iz00_115 + ((long) 1))));
						}}
					return (long) CINT(BgL_auxz00_372);
		}}}
	}



/* _local-arity */
	obj_t BGl__localzd2arityzd2zztools_argsz00(obj_t BgL_envz00_289,
		obj_t BgL_argsz00_290)
	{
		AN_OBJECT;
		{	/* Tools/args.scm 59 */
			return BINT(BGl_localzd2arityzd2zztools_argsz00(BgL_argsz00_290));
		}
	}



/* foreign-arity */
	BGL_EXPORTED_DEF long BGl_foreignzd2arityzd2zztools_argsz00(obj_t
		BgL_argsz00_3)
	{
		AN_OBJECT;
		{	/* Tools/args.scm 81 */
			{
				long BgL_iz00_127;

				obj_t BgL_az00_128;

				{	/* Tools/args.scm 82 */
					obj_t BgL_auxz00_392;

					BgL_iz00_127 = ((long) 0);
					BgL_az00_128 = BgL_argsz00_3;
				BgL_zc3anonymousza31525ze3z83_129:
					if (NULLP(BgL_az00_128))
						{	/* Tools/args.scm 85 */
							BgL_auxz00_392 = BINT(BgL_iz00_127);
						}
					else
						{	/* Tools/args.scm 85 */
							if (PAIRP(BgL_az00_128))
								{	/* Tools/args.scm 87 */
									if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
											(BgL_az00_128)))
										{	/* Tools/args.scm 88 */
											BgL_auxz00_392 =
												BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
												BGl_string1580z00zztools_argsz00, BgL_argsz00_3);
										}
									else
										{
											obj_t BgL_az00_405;

											long BgL_iz00_403;

											BgL_iz00_403 = (BgL_iz00_127 + ((long) 1));
											BgL_az00_405 = CDR(BgL_az00_128);
											BgL_az00_128 = BgL_az00_405;
											BgL_iz00_127 = BgL_iz00_403;
											goto BgL_zc3anonymousza31525ze3z83_129;
										}
								}
							else
								{	/* Tools/args.scm 87 */
									BgL_auxz00_392 = BINT(NEG((BgL_iz00_127 + ((long) 1))));
						}}
					return (long) CINT(BgL_auxz00_392);
		}}}
	}



/* _foreign-arity */
	obj_t BGl__foreignzd2arityzd2zztools_argsz00(obj_t BgL_envz00_291,
		obj_t BgL_argsz00_292)
	{
		AN_OBJECT;
		{	/* Tools/args.scm 81 */
			return BINT(BGl_foreignzd2arityzd2zztools_argsz00(BgL_argsz00_292));
		}
	}



/* dsssl-arity-zero? */
	BGL_EXPORTED_DEF bool_t BGl_dssslzd2arityzd2za7erozf3z54zztools_argsz00(int
		BgL_arityz00_4, obj_t BgL_argsz00_5)
	{
		AN_OBJECT;
		{	/* Tools/args.scm 99 */
			if (((long) (BgL_arityz00_4) < ((long) 0)))
				{	/* Tools/args.scm 100 */
					return NULLP(BgL_argsz00_5);
				}
			else
				{	/* Tools/args.scm 100 */
					return ((bool_t) 0);
				}
		}
	}



/* _dsssl-arity-zero? */
	obj_t BGl__dssslzd2arityzd2za7erozf3z54zztools_argsz00(obj_t BgL_envz00_293,
		obj_t BgL_arityz00_294, obj_t BgL_argsz00_295)
	{
		AN_OBJECT;
		{	/* Tools/args.scm 99 */
			return
				BBOOL(BGl_dssslzd2arityzd2za7erozf3z54zztools_argsz00(CINT
					(BgL_arityz00_294), BgL_argsz00_295));
		}
	}



/* args*->args-list */
	BGL_EXPORTED_DEF obj_t BGl_argsza2zd2ze3argszd2listz41zztools_argsz00(obj_t
		BgL_expz00_6)
	{
		AN_OBJECT;
		{	/* Tools/args.scm 106 */
			if (NULLP(BgL_expz00_6))
				{	/* Tools/args.scm 108 */
					return BNIL;
				}
			else
				{	/* Tools/args.scm 108 */
					if (PAIRP(BgL_expz00_6))
						{	/* Tools/args.scm 110 */
							return
								MAKE_PAIR(CAR(BgL_expz00_6),
								BGl_argsza2zd2ze3argszd2listz41zztools_argsz00(CDR
									(BgL_expz00_6)));
						}
					else
						{	/* Tools/args.scm 111 */
							obj_t BgL_list1538z00_144;

							BgL_list1538z00_144 = MAKE_PAIR(BgL_expz00_6, BNIL);
							return BgL_list1538z00_144;
						}
				}
		}
	}



/* _args*->args-list */
	obj_t BGl__argsza2zd2ze3argszd2listz41zztools_argsz00(obj_t BgL_envz00_296,
		obj_t BgL_expz00_297)
	{
		AN_OBJECT;
		{	/* Tools/args.scm 106 */
			return BGl_argsza2zd2ze3argszd2listz41zztools_argsz00(BgL_expz00_297);
		}
	}



/* args-list->args* */
	BGL_EXPORTED_DEF obj_t BGl_argszd2listzd2ze3argsza2z41zztools_argsz00(obj_t
		BgL_listz00_7, obj_t BgL_arityz00_8)
	{
		AN_OBJECT;
		{	/* Tools/args.scm 119 */
			if (((long) CINT(BgL_arityz00_8) >= ((long) 0)))
				{	/* Tools/args.scm 121 */
					return BgL_listz00_7;
				}
			else
				{	/* Tools/args.scm 121 */
					if (((long) CINT(BgL_arityz00_8) == ((long) -1)))
						{	/* Tools/args.scm 123 */
							return CAR(BgL_listz00_7);
						}
					else
						{	/* Tools/args.scm 123 */
							return
								BGl_loopz72z72zztools_argsz00(BgL_listz00_7, BgL_arityz00_8);
						}
				}
		}
	}



/* loop' */
	obj_t BGl_loopz72z72zztools_argsz00(obj_t BgL_listz00_148,
		obj_t BgL_arityz00_149)
	{
		AN_OBJECT;
		{	/* Tools/args.scm 126 */
			if (((long) CINT(BgL_arityz00_149) == ((long) -1)))
				{	/* Tools/args.scm 128 */
					return CAR(BgL_listz00_148);
				}
			else
				{	/* Tools/args.scm 130 */
					obj_t BgL_arg1543z00_152;

					obj_t BgL_arg1544z00_153;

					BgL_arg1543z00_152 = CAR(BgL_listz00_148);
					{	/* Tools/args.scm 130 */
						obj_t BgL_arg1545z00_154;

						long BgL_arg1546z00_155;

						BgL_arg1545z00_154 = CDR(BgL_listz00_148);
						BgL_arg1546z00_155 = ((long) CINT(BgL_arityz00_149) + ((long) 1));
						BgL_arg1544z00_153 =
							BGl_loopz72z72zztools_argsz00(BgL_arg1545z00_154,
							BINT(BgL_arg1546z00_155));
					}
					return MAKE_PAIR(BgL_arg1543z00_152, BgL_arg1544z00_153);
				}
		}
	}



/* _args-list->args* */
	obj_t BGl__argszd2listzd2ze3argsza2z41zztools_argsz00(obj_t BgL_envz00_298,
		obj_t BgL_listz00_299, obj_t BgL_arityz00_300)
	{
		AN_OBJECT;
		{	/* Tools/args.scm 119 */
			return
				BGl_argszd2listzd2ze3argsza2z41zztools_argsz00(BgL_listz00_299,
				BgL_arityz00_300);
		}
	}



/* sound-arity? */
	BGL_EXPORTED_DEF bool_t BGl_soundzd2arityzf3z21zztools_argsz00(obj_t
		BgL_arityz00_9, obj_t BgL_argsz00_10)
	{
		AN_OBJECT;
		{	/* Tools/args.scm 135 */
			{	/* Tools/args.scm 136 */
				long BgL_lenz00_157;

				BgL_lenz00_157 = bgl_list_length(BgL_argsz00_10);
				if (((long) CINT(BgL_arityz00_9) >= ((long) 0)))
					{	/* Tools/args.scm 137 */
						return ((long) CINT(BgL_arityz00_9) == BgL_lenz00_157);
					}
				else
					{	/* Tools/args.scm 137 */
						return
							(NEG(
								(long) CINT(BgL_arityz00_9)) <= (BgL_lenz00_157 + ((long) 1)));
		}}}
	}



/* _sound-arity? */
	obj_t BGl__soundzd2arityzf3z21zztools_argsz00(obj_t BgL_envz00_301,
		obj_t BgL_arityz00_302, obj_t BgL_argsz00_303)
	{
		AN_OBJECT;
		{	/* Tools/args.scm 135 */
			return
				BBOOL(BGl_soundzd2arityzf3z21zztools_argsz00(BgL_arityz00_302,
					BgL_argsz00_303));
		}
	}



/* make-args-list */
	BGL_EXPORTED_DEF obj_t BGl_makezd2argszd2listz00zztools_argsz00(obj_t
		BgL_argsz00_11, obj_t BgL_nilz00_12, obj_t BgL_consz00_13)
	{
		AN_OBJECT;
		{	/* Tools/args.scm 144 */
			return
				BGl_loopz00zztools_argsz00(BgL_nilz00_12, BgL_consz00_13,
				BgL_argsz00_11);
		}
	}



/* loop */
	obj_t BGl_loopz00zztools_argsz00(obj_t BgL_nilz00_314, obj_t BgL_consz00_313,
		obj_t BgL_argsz00_162)
	{
		AN_OBJECT;
		{	/* Tools/args.scm 145 */
			if (NULLP(BgL_argsz00_162))
				{	/* Tools/args.scm 146 */
					return BgL_nilz00_314;
				}
			else
				{	/* Tools/args.scm 148 */
					obj_t BgL_arg1552z00_165;

					{	/* Tools/args.scm 148 */
						obj_t BgL_arg1553z00_166;

						obj_t BgL_arg1554z00_167;

						BgL_arg1553z00_166 = CAR(BgL_argsz00_162);
						BgL_arg1554z00_167 =
							BGl_loopz00zztools_argsz00(BgL_nilz00_314, BgL_consz00_313,
							CDR(BgL_argsz00_162));
						{	/* Tools/args.scm 148 */
							obj_t BgL_list1556z00_169;

							{	/* Tools/args.scm 148 */
								obj_t BgL_arg1557z00_170;

								BgL_arg1557z00_170 = MAKE_PAIR(BNIL, BNIL);
								BgL_list1556z00_169 =
									MAKE_PAIR(BgL_arg1554z00_167, BgL_arg1557z00_170);
							}
							BgL_arg1552z00_165 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg1553z00_166,
								BgL_list1556z00_169);
						}
					}
					return MAKE_PAIR(BgL_consz00_313, BgL_arg1552z00_165);
				}
		}
	}



/* _make-args-list */
	obj_t BGl__makezd2argszd2listz00zztools_argsz00(obj_t BgL_envz00_304,
		obj_t BgL_argsz00_305, obj_t BgL_nilz00_306, obj_t BgL_consz00_307)
	{
		AN_OBJECT;
		{	/* Tools/args.scm 144 */
			return
				BGl_loopz00zztools_argsz00(BgL_nilz00_306, BgL_consz00_307,
				BgL_argsz00_305);
		}
	}



/* make-n-proto */
	BGL_EXPORTED_DEF obj_t BGl_makezd2nzd2protoz00zztools_argsz00(obj_t
		BgL_nz00_14)
	{
		AN_OBJECT;
		{	/* Tools/args.scm 155 */
			if (((long) CINT(BgL_nz00_14) < ((long) 0)))
				{	/* Tools/args.scm 168 */
					return
						BGl_makezd2vazd2protoz00zztools_argsz00(BgL_nz00_14, ((long) 0));
				}
			else
				{	/* Tools/args.scm 168 */
					return
						BGl_makezd2fxzd2protoz00zztools_argsz00(BgL_nz00_14, ((long) 0));
		}}
	}



/* make-va-proto */
	obj_t BGl_makezd2vazd2protoz00zztools_argsz00(obj_t BgL_nz00_184,
		long BgL_countz00_185)
	{
		AN_OBJECT;
		{	/* Tools/args.scm 162 */
			if (((long) CINT(BgL_nz00_184) == ((long) -1)))
				{	/* Tools/args.scm 159 */
					return BGl_makezd2argszd2namez00zztools_argsz00(BgL_countz00_185);
				}
			else
				{	/* Tools/args.scm 161 */
					obj_t BgL_arg1567z00_188;

					obj_t BgL_arg1568z00_189;

					BgL_arg1567z00_188 =
						BGl_makezd2argszd2namez00zztools_argsz00(BgL_countz00_185);
					{	/* Tools/args.scm 162 */
						long BgL_arg1570z00_190;

						long BgL_arg1571z00_191;

						BgL_arg1570z00_190 = ((long) CINT(BgL_nz00_184) + ((long) 1));
						BgL_arg1571z00_191 = (BgL_countz00_185 + ((long) 1));
						BgL_arg1568z00_189 =
							BGl_makezd2vazd2protoz00zztools_argsz00(BINT(BgL_arg1570z00_190),
							BgL_arg1571z00_191);
					}
					return MAKE_PAIR(BgL_arg1567z00_188, BgL_arg1568z00_189);
				}
		}
	}



/* make-args-name */
	obj_t BGl_makezd2argszd2namez00zztools_argsz00(long BgL_nz00_177)
	{
		AN_OBJECT;
		{	/* Tools/args.scm 157 */
			{	/* Tools/args.scm 157 */
				obj_t BgL_arg1562z00_179;

				{	/* Tools/args.scm 157 */
					obj_t BgL_arg1564z00_181;

					{	/* Tools/args.scm 157 */

						BgL_arg1564z00_181 =
							BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
							(BgL_nz00_177, ((long) 10));
					}
					BgL_arg1562z00_179 =
						string_append(BGl_string1581z00zztools_argsz00, BgL_arg1564z00_181);
				}
				return string_to_symbol(BSTRING_TO_STRING(BgL_arg1562z00_179));
			}
		}
	}



/* make-fx-proto */
	obj_t BGl_makezd2fxzd2protoz00zztools_argsz00(obj_t BgL_nz00_192,
		long BgL_countz00_193)
	{
		AN_OBJECT;
		{	/* Tools/args.scm 167 */
			if (((long) CINT(BgL_nz00_192) == ((long) 0)))
				{	/* Tools/args.scm 164 */
					return BNIL;
				}
			else
				{	/* Tools/args.scm 166 */
					obj_t BgL_arg1574z00_196;

					obj_t BgL_arg1575z00_197;

					BgL_arg1574z00_196 =
						BGl_makezd2argszd2namez00zztools_argsz00(BgL_countz00_193);
					{	/* Tools/args.scm 167 */
						long BgL_arg1576z00_198;

						long BgL_arg1577z00_199;

						BgL_arg1576z00_198 = ((long) CINT(BgL_nz00_192) - ((long) 1));
						BgL_arg1577z00_199 = (BgL_countz00_193 + ((long) 1));
						BgL_arg1575z00_197 =
							BGl_makezd2fxzd2protoz00zztools_argsz00(BINT(BgL_arg1576z00_198),
							BgL_arg1577z00_199);
					}
					return MAKE_PAIR(BgL_arg1574z00_196, BgL_arg1575z00_197);
				}
		}
	}



/* _make-n-proto */
	obj_t BGl__makezd2nzd2protoz00zztools_argsz00(obj_t BgL_envz00_308,
		obj_t BgL_nz00_309)
	{
		AN_OBJECT;
		{	/* Tools/args.scm 155 */
			return BGl_makezd2nzd2protoz00zztools_argsz00(BgL_nz00_309);
		}
	}



/* +-arity */
	BGL_EXPORTED_DEF obj_t BGl_zb2zd2arityz60zztools_argsz00(obj_t
		BgL_arityz00_15, obj_t BgL_addz00_16)
	{
		AN_OBJECT;
		{	/* Tools/args.scm 176 */
			if (((long) CINT(BgL_arityz00_15) >= ((long) 0)))
				{	/* Tools/args.scm 177 */
					return
						BINT(((long) CINT(BgL_addz00_16) + (long) CINT(BgL_arityz00_15)));
				}
			else
				{	/* Tools/args.scm 177 */
					return
						BINT(((long) CINT(BgL_arityz00_15) - (long) CINT(BgL_addz00_16)));
		}}
	}



/* _+-arity */
	obj_t BGl__zb2zd2arityz60zztools_argsz00(obj_t BgL_envz00_310,
		obj_t BgL_arityz00_311, obj_t BgL_addz00_312)
	{
		AN_OBJECT;
		{	/* Tools/args.scm 176 */
			return
				BGl_zb2zd2arityz60zztools_argsz00(BgL_arityz00_311, BgL_addz00_312);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztools_argsz00()
	{
		AN_OBJECT;
		{	/* Tools/args.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztools_argsz00()
	{
		AN_OBJECT;
		{	/* Tools/args.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztools_argsz00()
	{
		AN_OBJECT;
		{	/* Tools/args.scm 15 */
			return
				BGl_modulezd2initializa7ationz75zztools_dssslz00(((long) 315398661),
				BSTRING_TO_STRING(BGl_string1582z00zztools_argsz00));
		}
	}

#ifdef __cplusplus
}
#endif
