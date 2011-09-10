/*===========================================================================*/
/*   (Expand/lambda.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Expand/lambda.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_zc3anonymousza31575ze3z83zzexpand_lambdaz00(obj_t);
	static obj_t BGl_zc3anonymousza31578ze3z83zzexpand_lambdaz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31591ze3z83zzexpand_lambdaz00(obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2argszd2zzexpand_lambdaz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31597ze3z83zzexpand_lambdaz00(obj_t, obj_t);
	static obj_t BGl__expandzd2lambdazd2zzexpand_lambdaz00(obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzexpand_lambdaz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2lambdazd2zzexpand_lambdaz00(obj_t,
		obj_t);
	extern obj_t BGl_withzd2lexicalzd2zzexpand_epsz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzexpand_lambdaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzexpand_lambdaz00();
	static obj_t BGl__expandzd2argszd2zzexpand_lambdaz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	static obj_t BGl_lambdazd2defineszd2zzexpand_lambdaz00(obj_t);
	static obj_t BGl_loopz00zzexpand_lambdaz00(obj_t, obj_t);
	extern obj_t BGl_replacez12z12zztools_miscz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t);
	BGL_IMPORT bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl__internalzd2beginzd2expanderz00zzexpand_lambdaz00(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzexpand_lambdaz00();
	extern obj_t BGl_argsza2zd2ze3argszd2listz41zztools_argsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00(obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzexpand_lambdaz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzexpand_lambdaz00();
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 =
		BUNSPEC;
	static obj_t BGl_importedzd2moduleszd2initz00zzexpand_lambdaz00();
	extern obj_t BGl_emapz00zztools_prognz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_zc3anonymousza31552ze3z83zzexpand_lambdaz00(obj_t);
	static obj_t BGl_zc3anonymousza31561ze3z83zzexpand_lambdaz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzexpand_lambdaz00();
	static obj_t BGl_beginzd2bindingszd2zzexpand_lambdaz00(obj_t);
	static obj_t __cnst[4];


	   
		 
		DEFINE_STRING(BGl_string1661z00zzexpand_lambdaz00,
		BgL_bgl_string1661za700za7za7e1669za7, "expand", 6);
	      DEFINE_STRING(BGl_string1662z00zzexpand_lambdaz00,
		BgL_bgl_string1662za700za7za7e1670za7, "Illegal argument", 16);
	      DEFINE_STRING(BGl_string1663z00zzexpand_lambdaz00,
		BgL_bgl_string1663za700za7za7e1671za7, "Illegal `lambda' form", 21);
	      DEFINE_STRING(BGl_string1664z00zzexpand_lambdaz00,
		BgL_bgl_string1664za700za7za7e1672za7, "Illegal `begin' form", 20);
	      DEFINE_STRING(BGl_string1665z00zzexpand_lambdaz00,
		BgL_bgl_string1665za700za7za7e1673za7, "expand_lambda", 13);
	      DEFINE_STRING(BGl_string1666z00zzexpand_lambdaz00,
		BgL_bgl_string1666za700za7za7e1674za7, "letrec* define begin _ ", 23);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2lambdazd2envz00zzexpand_lambdaz00,
		BgL_bgl__expandza7d2lambda1675za7,
		BGl__expandzd2lambdazd2zzexpand_lambdaz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2argszd2envz00zzexpand_lambdaz00,
		BgL_bgl__expandza7d2argsza7d1676z00,
		BGl__expandzd2argszd2zzexpand_lambdaz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_internalzd2beginzd2expanderzd2envzd2zzexpand_lambdaz00,
		BgL_bgl__internalza7d2begi1677za7,
		BGl__internalzd2beginzd2expanderz00zzexpand_lambdaz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzexpand_lambdaz00(long
		BgL_checksumz00_409, char *BgL_fromz00_410)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzexpand_lambdaz00))
				{
					BGl_requirezd2initializa7ationz75zzexpand_lambdaz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzexpand_lambdaz00();
					BGl_cnstzd2initzd2zzexpand_lambdaz00();
					BGl_importedzd2moduleszd2initz00zzexpand_lambdaz00();
					BGl_toplevelzd2initzd2zzexpand_lambdaz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzexpand_lambdaz00()
	{
		AN_OBJECT;
		{	/* Expand/lambda.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"expand_lambda");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "expand_lambda");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"expand_lambda");
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 0), "expand_lambda");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzexpand_lambdaz00()
	{
		AN_OBJECT;
		{	/* Expand/lambda.scm 15 */
			{	/* Expand/lambda.scm 15 */
				obj_t BgL_cportz00_397;

				BgL_cportz00_397 =
					bgl_open_input_string(BGl_string1666z00zzexpand_lambdaz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_398;

					BgL_iz00_398 = ((long) 3);
				BgL_loopz00_399:
					if ((BgL_iz00_398 == ((long) -1)))
						{	/* Expand/lambda.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Expand/lambda.scm 15 */
							{	/* Expand/lambda.scm 15 */
								obj_t BgL_arg1668z00_401;

								{	/* Expand/lambda.scm 15 */

									{	/* Expand/lambda.scm 15 */
										obj_t BgL_locationz00_403;

										BgL_locationz00_403 = BBOOL(((bool_t) 0));
										{	/* Expand/lambda.scm 15 */

											BgL_arg1668z00_401 =
												BGl_readz00zz__readerz00(BgL_cportz00_397,
												BgL_locationz00_403);
										}
									}
								}
								{	/* Expand/lambda.scm 15 */
									int BgL_auxz00_428;

									BgL_auxz00_428 = (int) (BgL_iz00_398);
									CNST_TABLE_SET(BgL_auxz00_428, BgL_arg1668z00_401);
							}}
							{	/* Expand/lambda.scm 15 */
								int BgL_auxz00_404;

								BgL_auxz00_404 = (int) ((BgL_iz00_398 - ((long) 1)));
								{
									long BgL_iz00_433;

									BgL_iz00_433 = (long) (BgL_auxz00_404);
									BgL_iz00_398 = BgL_iz00_433;
									goto BgL_loopz00_399;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzexpand_lambdaz00()
	{
		AN_OBJECT;
		{	/* Expand/lambda.scm 15 */
			return (BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 =
				BFALSE, BUNSPEC);
		}
	}



/* expand-args */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2argszd2zzexpand_lambdaz00(obj_t
		BgL_argsz00_1, obj_t BgL_ez00_2)
	{
		AN_OBJECT;
		{	/* Expand/lambda.scm 37 */
			return BGl_loopz00zzexpand_lambdaz00(BgL_ez00_2, BgL_argsz00_1);
		}
	}



/* loop */
	obj_t BGl_loopz00zzexpand_lambdaz00(obj_t BgL_ez00_396, obj_t BgL_argsz00_94)
	{
		AN_OBJECT;
		{	/* Expand/lambda.scm 38 */
			if (NULLP(BgL_argsz00_94))
				{	/* Expand/lambda.scm 40 */
					return BNIL;
				}
			else
				{	/* Expand/lambda.scm 40 */
					if (SYMBOLP(BgL_argsz00_94))
						{	/* Expand/lambda.scm 42 */
							return BgL_argsz00_94;
						}
					else
						{	/* Expand/lambda.scm 42 */
							if (PAIRP(BgL_argsz00_94))
								{	/* Expand/lambda.scm 46 */
									bool_t BgL_testz00_442;

									{	/* Expand/lambda.scm 46 */
										bool_t BgL_testz00_443;

										{	/* Expand/lambda.scm 46 */
											obj_t BgL_auxz00_444;

											BgL_auxz00_444 = CAR(BgL_argsz00_94);
											BgL_testz00_443 = PAIRP(BgL_auxz00_444);
										}
										if (BgL_testz00_443)
											{	/* Expand/lambda.scm 47 */
												bool_t BgL_testz00_447;

												{	/* Expand/lambda.scm 47 */
													obj_t BgL_auxz00_448;

													BgL_auxz00_448 = CDR(CAR(BgL_argsz00_94));
													BgL_testz00_447 = PAIRP(BgL_auxz00_448);
												}
												if (BgL_testz00_447)
													{	/* Expand/lambda.scm 48 */
														obj_t BgL_auxz00_452;

														{	/* Expand/lambda.scm 48 */
															obj_t BgL_pairz00_295;

															BgL_pairz00_295 = CAR(BgL_argsz00_94);
															BgL_auxz00_452 = CDR(CDR(BgL_pairz00_295));
														}
														BgL_testz00_442 = NULLP(BgL_auxz00_452);
													}
												else
													{	/* Expand/lambda.scm 47 */
														BgL_testz00_442 = ((bool_t) 0);
													}
											}
										else
											{	/* Expand/lambda.scm 46 */
												BgL_testz00_442 = ((bool_t) 0);
											}
									}
									if (BgL_testz00_442)
										{	/* Expand/lambda.scm 51 */
											obj_t BgL_arg1521z00_100;

											obj_t BgL_arg1522z00_101;

											{	/* Expand/lambda.scm 51 */
												obj_t BgL_arg1523z00_102;

												obj_t BgL_arg1524z00_103;

												BgL_arg1523z00_102 = CAR(CAR(BgL_argsz00_94));
												{	/* Expand/lambda.scm 51 */
													obj_t BgL_arg1529z00_107;

													{	/* Expand/lambda.scm 51 */
														obj_t BgL_pairz00_303;

														BgL_pairz00_303 = CAR(BgL_argsz00_94);
														BgL_arg1529z00_107 = CAR(CDR(BgL_pairz00_303));
													}
													BgL_arg1524z00_103 =
														PROCEDURE_ENTRY(BgL_ez00_396) (BgL_ez00_396,
														BgL_arg1529z00_107, BgL_ez00_396, BEOA);
												}
												{	/* Expand/lambda.scm 51 */
													obj_t BgL_list1525z00_104;

													{	/* Expand/lambda.scm 51 */
														obj_t BgL_arg1526z00_105;

														BgL_arg1526z00_105 =
															MAKE_PAIR(BgL_arg1524z00_103, BNIL);
														BgL_list1525z00_104 =
															MAKE_PAIR(BgL_arg1523z00_102, BgL_arg1526z00_105);
													}
													BgL_arg1521z00_100 = BgL_list1525z00_104;
												}
											}
											BgL_arg1522z00_101 =
												BGl_loopz00zzexpand_lambdaz00(BgL_ez00_396,
												CDR(BgL_argsz00_94));
											return MAKE_PAIR(BgL_arg1521z00_100, BgL_arg1522z00_101);
										}
									else
										{	/* Expand/lambda.scm 46 */
											return
												MAKE_PAIR(CAR(BgL_argsz00_94),
												BGl_loopz00zzexpand_lambdaz00(BgL_ez00_396,
													CDR(BgL_argsz00_94)));
										}
								}
							else
								{	/* Expand/lambda.scm 44 */
									return
										BGl_errorz00zz__errorz00
										(BGl_string1661z00zzexpand_lambdaz00,
										BGl_string1662z00zzexpand_lambdaz00, BgL_argsz00_94);
								}
						}
				}
		}
	}



/* _expand-args */
	obj_t BGl__expandzd2argszd2zzexpand_lambdaz00(obj_t BgL_envz00_361,
		obj_t BgL_argsz00_362, obj_t BgL_ez00_363)
	{
		AN_OBJECT;
		{	/* Expand/lambda.scm 37 */
			return BGl_loopz00zzexpand_lambdaz00(BgL_ez00_363, BgL_argsz00_362);
		}
	}



/* expand-lambda */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2lambdazd2zzexpand_lambdaz00(obj_t
		BgL_xz00_3, obj_t BgL_ez00_4)
	{
		AN_OBJECT;
		{	/* Expand/lambda.scm 57 */
			{	/* Expand/lambda.scm 58 */
				obj_t BgL_oldzd2internalzd2_121;

				BgL_oldzd2internalzd2_121 =
					BGl_internalzd2definitionzf3z21zzexpand_lambdaz00;
				BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 = BTRUE;
				{	/* Expand/lambda.scm 60 */
					obj_t BgL_resz00_122;

					{
						obj_t BgL_lamz00_123;

						obj_t BgL_argsz00_124;

						obj_t BgL_bodyz00_125;

						if (PAIRP(BgL_xz00_3))
							{	/* Expand/lambda.scm 60 */
								obj_t BgL_cdrzd21657zd2_130;

								BgL_cdrzd21657zd2_130 = CDR(BgL_xz00_3);
								if (PAIRP(BgL_cdrzd21657zd2_130))
									{	/* Expand/lambda.scm 60 */
										obj_t BgL_cdrzd21662zd2_132;

										BgL_cdrzd21662zd2_132 = CDR(BgL_cdrzd21657zd2_130);
										if (NULLP(BgL_cdrzd21662zd2_132))
											{	/* Expand/lambda.scm 60 */
											BgL_tagzd21648zd2_127:
												BgL_resz00_122 =
													BGl_errorz00zz__errorz00(BFALSE,
													BGl_string1663z00zzexpand_lambdaz00, BgL_xz00_3);
											}
										else
											{	/* Expand/lambda.scm 60 */
												BgL_lamz00_123 = CAR(BgL_xz00_3);
												BgL_argsz00_124 = CAR(BgL_cdrzd21657zd2_130);
												BgL_bodyz00_125 = BgL_cdrzd21662zd2_132;
												{	/* Expand/lambda.scm 62 */
													obj_t BgL_arg1547z00_136;

													obj_t BgL_arg1548z00_137;

													obj_t BgL_arg1549z00_138;

													BgL_arg1547z00_136 =
														BGl_argsza2zd2ze3argszd2listz41zztools_argsz00
														(BgL_argsz00_124);
													BgL_arg1548z00_137 = CNST_TABLE_REF(((long) 0));
													BgL_arg1549z00_138 =
														BGl_findzd2locationzd2zztools_locationz00
														(BgL_xz00_3);
													{	/* Expand/lambda.scm 66 */
														obj_t BgL_zc3anonymousza31552ze3z83_364;

														BgL_zc3anonymousza31552ze3z83_364 =
															make_fx_procedure
															(BGl_zc3anonymousza31552ze3z83zzexpand_lambdaz00,
															(int) (((long) 0)), (int) (((long) 4)));
														PROCEDURE_SET(BgL_zc3anonymousza31552ze3z83_364,
															(int) (((long) 0)), BgL_ez00_4);
														PROCEDURE_SET(BgL_zc3anonymousza31552ze3z83_364,
															(int) (((long) 1)), BgL_argsz00_124);
														PROCEDURE_SET(BgL_zc3anonymousza31552ze3z83_364,
															(int) (((long) 2)), BgL_bodyz00_125);
														PROCEDURE_SET(BgL_zc3anonymousza31552ze3z83_364,
															(int) (((long) 3)), BgL_lamz00_123);
														BgL_resz00_122 =
															BGl_withzd2lexicalzd2zzexpand_epsz00
															(BgL_arg1547z00_136, BgL_arg1548z00_137,
															BgL_arg1549z00_138,
															BgL_zc3anonymousza31552ze3z83_364);
									}}}}
								else
									{	/* Expand/lambda.scm 60 */
										goto BgL_tagzd21648zd2_127;
									}
							}
						else
							{	/* Expand/lambda.scm 60 */
								goto BgL_tagzd21648zd2_127;
							}
					}
					BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 =
						BgL_oldzd2internalzd2_121;
					return BGl_replacez12z12zztools_miscz00(BgL_xz00_3, BgL_resz00_122);
				}
			}
		}
	}



/* _expand-lambda */
	obj_t BGl__expandzd2lambdazd2zzexpand_lambdaz00(obj_t BgL_envz00_365,
		obj_t BgL_xz00_366, obj_t BgL_ez00_367)
	{
		AN_OBJECT;
		{	/* Expand/lambda.scm 57 */
			return
				BGl_expandzd2lambdazd2zzexpand_lambdaz00(BgL_xz00_366, BgL_ez00_367);
		}
	}



/* <anonymous:1552> */
	obj_t BGl_zc3anonymousza31552ze3z83zzexpand_lambdaz00(obj_t BgL_envz00_368)
	{
		AN_OBJECT;
		{	/* Expand/lambda.scm 65 */
			{	/* Expand/lambda.scm 66 */
				obj_t BgL_ez00_369;

				obj_t BgL_argsz00_370;

				obj_t BgL_bodyz00_371;

				obj_t BgL_lamz00_372;

				BgL_ez00_369 = PROCEDURE_REF(BgL_envz00_368, (int) (((long) 0)));
				BgL_argsz00_370 = PROCEDURE_REF(BgL_envz00_368, (int) (((long) 1)));
				BgL_bodyz00_371 = PROCEDURE_REF(BgL_envz00_368, (int) (((long) 2)));
				BgL_lamz00_372 = PROCEDURE_REF(BgL_envz00_368, (int) (((long) 3)));
				{

					{	/* Expand/lambda.scm 66 */
						obj_t BgL_ez00_141;

						BgL_ez00_141 =
							BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00
							(BgL_ez00_369);
						{	/* Expand/lambda.scm 67 */
							obj_t BgL_arg1553z00_142;

							{	/* Expand/lambda.scm 67 */
								obj_t BgL_arg1554z00_143;

								obj_t BgL_arg1555z00_144;

								BgL_arg1554z00_143 =
									BGl_loopz00zzexpand_lambdaz00(BgL_ez00_141, BgL_argsz00_370);
								{	/* Expand/lambda.scm 68 */
									obj_t BgL_arg1560z00_148;

									BgL_arg1560z00_148 =
										BGl_expandzd2prognzd2zz__prognz00(BgL_bodyz00_371);
									BgL_arg1555z00_144 =
										PROCEDURE_ENTRY(BgL_ez00_141) (BgL_ez00_141,
										BgL_arg1560z00_148, BgL_ez00_141, BEOA);
								}
								{	/* Expand/lambda.scm 67 */
									obj_t BgL_list1557z00_146;

									{	/* Expand/lambda.scm 67 */
										obj_t BgL_arg1559z00_147;

										BgL_arg1559z00_147 = MAKE_PAIR(BNIL, BNIL);
										BgL_list1557z00_146 =
											MAKE_PAIR(BgL_arg1555z00_144, BgL_arg1559z00_147);
									}
									BgL_arg1553z00_142 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg1554z00_143, BgL_list1557z00_146);
							}}
							return MAKE_PAIR(BgL_lamz00_372, BgL_arg1553z00_142);
						}
					}
				}
			}
		}
	}



/* internal-begin-expander */
	BGL_EXPORTED_DEF obj_t
		BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00(obj_t
		BgL_oldzd2expanderzd2_5)
	{
		AN_OBJECT;
		{	/* Expand/lambda.scm 77 */
			{	/* Expand/lambda.scm 78 */
				obj_t BgL_zc3anonymousza31561ze3z83_377;

				BgL_zc3anonymousza31561ze3z83_377 =
					make_fx_procedure(BGl_zc3anonymousza31561ze3z83zzexpand_lambdaz00,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3anonymousza31561ze3z83_377,
					(int) (((long) 0)), BgL_oldzd2expanderzd2_5);
				return BgL_zc3anonymousza31561ze3z83_377;
			}
		}
	}



/* _internal-begin-expander */
	obj_t BGl__internalzd2beginzd2expanderz00zzexpand_lambdaz00(obj_t
		BgL_envz00_378, obj_t BgL_oldzd2expanderzd2_379)
	{
		AN_OBJECT;
		{	/* Expand/lambda.scm 77 */
			return
				BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00
				(BgL_oldzd2expanderzd2_379);
		}
	}



/* <anonymous:1561> */
	obj_t BGl_zc3anonymousza31561ze3z83zzexpand_lambdaz00(obj_t BgL_envz00_380,
		obj_t BgL_exprz00_382, obj_t BgL_expanderz00_383)
	{
		AN_OBJECT;
		{	/* Expand/lambda.scm 78 */
			{	/* Expand/lambda.scm 78 */
				obj_t BgL_oldzd2expanderzd2_381;

				BgL_oldzd2expanderzd2_381 =
					PROCEDURE_REF(BgL_envz00_380, (int) (((long) 0)));
				{
					obj_t BgL_exprz00_150;

					obj_t BgL_expanderz00_151;

					BgL_exprz00_150 = BgL_exprz00_382;
					BgL_expanderz00_151 = BgL_expanderz00_383;
					{
						obj_t BgL_restz00_154;

						if (PAIRP(BgL_exprz00_150))
							{	/* Expand/lambda.scm 78 */
								if ((CAR(BgL_exprz00_150) == CNST_TABLE_REF(((long) 1))))
									{	/* Expand/lambda.scm 78 */
										if (NULLP(CDR(BgL_exprz00_150)))
											{	/* Expand/lambda.scm 78 */
												return BUNSPEC;
											}
										else
											{	/* Expand/lambda.scm 78 */
												BgL_restz00_154 = CDR(BgL_exprz00_150);
												if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
													(BgL_restz00_154))
													{	/* Expand/lambda.scm 86 */
														obj_t BgL_arg1570z00_166;

														obj_t BgL_arg1571z00_167;

														obj_t BgL_arg1572z00_168;

														BgL_arg1570z00_166 =
															BGl_beginzd2bindingszd2zzexpand_lambdaz00
															(BgL_restz00_154);
														BgL_arg1571z00_167 = CNST_TABLE_REF(((long) 0));
														BgL_arg1572z00_168 =
															BGl_findzd2locationzd2zztools_locationz00
															(BgL_exprz00_150);
														{	/* Expand/lambda.scm 91 */
															obj_t BgL_zc3anonymousza31575ze3z83_374;

															BgL_zc3anonymousza31575ze3z83_374 =
																make_fx_procedure
																(BGl_zc3anonymousza31575ze3z83zzexpand_lambdaz00,
																(int) (((long) 0)), (int) (((long) 2)));
															PROCEDURE_SET(BgL_zc3anonymousza31575ze3z83_374,
																(int) (((long) 0)), BgL_oldzd2expanderzd2_381);
															PROCEDURE_SET(BgL_zc3anonymousza31575ze3z83_374,
																(int) (((long) 1)), BgL_restz00_154);
															return
																BGl_withzd2lexicalzd2zzexpand_epsz00
																(BgL_arg1570z00_166, BgL_arg1571z00_167,
																BgL_arg1572z00_168,
																BgL_zc3anonymousza31575ze3z83_374);
														}
													}
												else
													{	/* Expand/lambda.scm 83 */
														return
															BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long)
																	1)), BGl_string1664z00zzexpand_lambdaz00,
															BgL_exprz00_150);
									}}}
								else
									{	/* Expand/lambda.scm 78 */
									BgL_tagzd21668zd2_156:
										{	/* Expand/lambda.scm 93 */
											obj_t BgL_nexprz00_177;

											BgL_nexprz00_177 =
												PROCEDURE_ENTRY(BgL_oldzd2expanderzd2_381)
												(BgL_oldzd2expanderzd2_381, BgL_exprz00_150,
												BgL_oldzd2expanderzd2_381, BEOA);
											{
												obj_t BgL_restz00_179;

												if (PAIRP(BgL_nexprz00_177))
													{	/* Expand/lambda.scm 94 */
														if (
															(CAR(BgL_nexprz00_177) ==
																CNST_TABLE_REF(((long) 1))))
															{	/* Expand/lambda.scm 94 */
																if (NULLP(CDR(BgL_nexprz00_177)))
																	{	/* Expand/lambda.scm 94 */
																		return BUNSPEC;
																	}
																else
																	{	/* Expand/lambda.scm 94 */
																		BgL_restz00_179 = CDR(BgL_nexprz00_177);
																		if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_restz00_179))
																			{	/* Expand/lambda.scm 101 */
																				obj_t BgL_arg1587z00_191;

																				obj_t BgL_arg1588z00_192;

																				obj_t BgL_arg1589z00_193;

																				BgL_arg1587z00_191 =
																					BGl_beginzd2bindingszd2zzexpand_lambdaz00
																					(BgL_restz00_179);
																				BgL_arg1588z00_192 =
																					CNST_TABLE_REF(((long) 0));
																				BgL_arg1589z00_193 =
																					BGl_findzd2locationzd2zztools_locationz00
																					(BgL_exprz00_150);
																				{	/* Expand/lambda.scm 106 */
																					obj_t
																						BgL_zc3anonymousza31591ze3z83_376;
																					BgL_zc3anonymousza31591ze3z83_376 =
																						make_fx_procedure
																						(BGl_zc3anonymousza31591ze3z83zzexpand_lambdaz00,
																						(int) (((long) 0)),
																						(int) (((long) 2)));
																					PROCEDURE_SET
																						(BgL_zc3anonymousza31591ze3z83_376,
																						(int) (((long) 0)),
																						BgL_oldzd2expanderzd2_381);
																					PROCEDURE_SET
																						(BgL_zc3anonymousza31591ze3z83_376,
																						(int) (((long) 1)),
																						BgL_restz00_179);
																					return
																						BGl_withzd2lexicalzd2zzexpand_epsz00
																						(BgL_arg1587z00_191,
																						BgL_arg1588z00_192,
																						BgL_arg1589z00_193,
																						BgL_zc3anonymousza31591ze3z83_376);
																				}
																			}
																		else
																			{	/* Expand/lambda.scm 98 */
																				return
																					BGl_errorz00zz__errorz00
																					(CNST_TABLE_REF(((long) 1)),
																					BGl_string1664z00zzexpand_lambdaz00,
																					BgL_exprz00_150);
															}}}
														else
															{	/* Expand/lambda.scm 94 */
																return BgL_nexprz00_177;
															}
													}
												else
													{	/* Expand/lambda.scm 94 */
														return BgL_nexprz00_177;
													}
											}
										}
									}
							}
						else
							{	/* Expand/lambda.scm 78 */
								goto BgL_tagzd21668zd2_156;
							}
					}
				}
			}
		}
	}



/* <anonymous:1591> */
	obj_t BGl_zc3anonymousza31591ze3z83zzexpand_lambdaz00(obj_t BgL_envz00_384)
	{
		AN_OBJECT;
		{	/* Expand/lambda.scm 104 */
			{	/* Expand/lambda.scm 106 */
				obj_t BgL_oldzd2expanderzd2_385;

				obj_t BgL_restz00_386;

				BgL_oldzd2expanderzd2_385 =
					PROCEDURE_REF(BgL_envz00_384, (int) (((long) 0)));
				BgL_restz00_386 = PROCEDURE_REF(BgL_envz00_384, (int) (((long) 1)));
				{

					{	/* Expand/lambda.scm 106 */
						obj_t BgL_arg1593z00_196;

						{	/* Expand/lambda.scm 106 */
							obj_t BgL_zc3anonymousza31597ze3z83_375;

							BgL_zc3anonymousza31597ze3z83_375 =
								make_fx_procedure
								(BGl_zc3anonymousza31597ze3z83zzexpand_lambdaz00,
								(int) (((long) 1)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3anonymousza31597ze3z83_375,
								(int) (((long) 0)), BgL_oldzd2expanderzd2_385);
							BgL_arg1593z00_196 =
								BGl_emapz00zztools_prognz00(BgL_zc3anonymousza31597ze3z83_375,
								BgL_restz00_386);
						}
						return
							BGl_lambdazd2defineszd2zzexpand_lambdaz00(BgL_arg1593z00_196);
					}
				}
			}
		}
	}



/* <anonymous:1597> */
	obj_t BGl_zc3anonymousza31597ze3z83zzexpand_lambdaz00(obj_t BgL_envz00_387,
		obj_t BgL_xz00_389)
	{
		AN_OBJECT;
		{	/* Expand/lambda.scm 106 */
			{	/* Expand/lambda.scm 106 */
				obj_t BgL_oldzd2expanderzd2_388;

				BgL_oldzd2expanderzd2_388 =
					PROCEDURE_REF(BgL_envz00_387, (int) (((long) 0)));
				{
					obj_t BgL_xz00_198;

					BgL_xz00_198 = BgL_xz00_389;
					return
						PROCEDURE_ENTRY(BgL_oldzd2expanderzd2_388)
						(BgL_oldzd2expanderzd2_388, BgL_xz00_198, BgL_oldzd2expanderzd2_388,
						BEOA);
				}
			}
		}
	}



/* <anonymous:1575> */
	obj_t BGl_zc3anonymousza31575ze3z83zzexpand_lambdaz00(obj_t BgL_envz00_390)
	{
		AN_OBJECT;
		{	/* Expand/lambda.scm 89 */
			{	/* Expand/lambda.scm 91 */
				obj_t BgL_oldzd2expanderzd2_391;

				obj_t BgL_restz00_392;

				BgL_oldzd2expanderzd2_391 =
					PROCEDURE_REF(BgL_envz00_390, (int) (((long) 0)));
				BgL_restz00_392 = PROCEDURE_REF(BgL_envz00_390, (int) (((long) 1)));
				{

					{	/* Expand/lambda.scm 91 */
						obj_t BgL_arg1576z00_171;

						{	/* Expand/lambda.scm 91 */
							obj_t BgL_zc3anonymousza31578ze3z83_373;

							BgL_zc3anonymousza31578ze3z83_373 =
								make_fx_procedure
								(BGl_zc3anonymousza31578ze3z83zzexpand_lambdaz00,
								(int) (((long) 1)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3anonymousza31578ze3z83_373,
								(int) (((long) 0)), BgL_oldzd2expanderzd2_391);
							BgL_arg1576z00_171 =
								BGl_emapz00zztools_prognz00(BgL_zc3anonymousza31578ze3z83_373,
								BgL_restz00_392);
						}
						return
							BGl_lambdazd2defineszd2zzexpand_lambdaz00(BgL_arg1576z00_171);
					}
				}
			}
		}
	}



/* <anonymous:1578> */
	obj_t BGl_zc3anonymousza31578ze3z83zzexpand_lambdaz00(obj_t BgL_envz00_393,
		obj_t BgL_xz00_395)
	{
		AN_OBJECT;
		{	/* Expand/lambda.scm 91 */
			{	/* Expand/lambda.scm 91 */
				obj_t BgL_oldzd2expanderzd2_394;

				BgL_oldzd2expanderzd2_394 =
					PROCEDURE_REF(BgL_envz00_393, (int) (((long) 0)));
				{
					obj_t BgL_xz00_173;

					BgL_xz00_173 = BgL_xz00_395;
					return
						PROCEDURE_ENTRY(BgL_oldzd2expanderzd2_394)
						(BgL_oldzd2expanderzd2_394, BgL_xz00_173, BgL_oldzd2expanderzd2_394,
						BEOA);
				}
			}
		}
	}



/* begin-bindings */
	obj_t BGl_beginzd2bindingszd2zzexpand_lambdaz00(obj_t BgL_bodyz00_6)
	{
		AN_OBJECT;
		{	/* Expand/lambda.scm 113 */
			{
				obj_t BgL_oldformsz00_204;

				obj_t BgL_varsz00_205;

				BgL_oldformsz00_204 = BgL_bodyz00_6;
				BgL_varsz00_205 = BNIL;
			BgL_zc3anonymousza31598ze3z83_206:
				if (PAIRP(BgL_oldformsz00_204))
					{	/* Expand/lambda.scm 119 */
						obj_t BgL_formz00_208;

						BgL_formz00_208 = CAR(BgL_oldformsz00_204);
						{
							obj_t BgL_varz00_211;

							obj_t BgL_varz00_209;

							if (PAIRP(BgL_formz00_208))
								{	/* Expand/lambda.scm 120 */
									obj_t BgL_cdrzd21705zd2_216;

									BgL_cdrzd21705zd2_216 = CDR(BgL_formz00_208);
									if ((CAR(BgL_formz00_208) == CNST_TABLE_REF(((long) 2))))
										{	/* Expand/lambda.scm 120 */
											if (PAIRP(BgL_cdrzd21705zd2_216))
												{	/* Expand/lambda.scm 120 */
													obj_t BgL_carzd21707zd2_219;

													BgL_carzd21707zd2_219 = CAR(BgL_cdrzd21705zd2_216);
													if (PAIRP(BgL_carzd21707zd2_219))
														{	/* Expand/lambda.scm 120 */
															BgL_varz00_209 = CAR(BgL_carzd21707zd2_219);
															{	/* Expand/lambda.scm 122 */
																obj_t BgL_arg1610z00_226;

																obj_t BgL_arg1611z00_227;

																BgL_arg1610z00_226 = CDR(BgL_oldformsz00_204);
																BgL_arg1611z00_227 =
																	MAKE_PAIR(BgL_varz00_209, BgL_varsz00_205);
																{
																	obj_t BgL_varsz00_628;

																	obj_t BgL_oldformsz00_627;

																	BgL_oldformsz00_627 = BgL_arg1610z00_226;
																	BgL_varsz00_628 = BgL_arg1611z00_227;
																	BgL_varsz00_205 = BgL_varsz00_628;
																	BgL_oldformsz00_204 = BgL_oldformsz00_627;
																	goto BgL_zc3anonymousza31598ze3z83_206;
																}
															}
														}
													else
														{	/* Expand/lambda.scm 120 */
															BgL_varz00_211 = CAR(BgL_cdrzd21705zd2_216);
															{	/* Expand/lambda.scm 124 */
																obj_t BgL_arg1613z00_228;

																obj_t BgL_arg1614z00_229;

																BgL_arg1613z00_228 = CDR(BgL_oldformsz00_204);
																BgL_arg1614z00_229 =
																	MAKE_PAIR(BgL_varz00_211, BgL_varsz00_205);
																{
																	obj_t BgL_varsz00_633;

																	obj_t BgL_oldformsz00_632;

																	BgL_oldformsz00_632 = BgL_arg1613z00_228;
																	BgL_varsz00_633 = BgL_arg1614z00_229;
																	BgL_varsz00_205 = BgL_varsz00_633;
																	BgL_oldformsz00_204 = BgL_oldformsz00_632;
																	goto BgL_zc3anonymousza31598ze3z83_206;
																}
															}
														}
												}
											else
												{	/* Expand/lambda.scm 120 */
												BgL_tagzd21700zd2_213:
													{
														obj_t BgL_oldformsz00_635;

														BgL_oldformsz00_635 = CDR(BgL_oldformsz00_204);
														BgL_oldformsz00_204 = BgL_oldformsz00_635;
														goto BgL_zc3anonymousza31598ze3z83_206;
													}
												}
										}
									else
										{	/* Expand/lambda.scm 120 */
											goto BgL_tagzd21700zd2_213;
										}
								}
							else
								{	/* Expand/lambda.scm 120 */
									goto BgL_tagzd21700zd2_213;
								}
						}
					}
				else
					{	/* Expand/lambda.scm 118 */
						return BgL_varsz00_205;
					}
			}
		}
	}



/* lambda-defines */
	obj_t BGl_lambdazd2defineszd2zzexpand_lambdaz00(obj_t BgL_bodyz00_7)
	{
		AN_OBJECT;
		{	/* Expand/lambda.scm 132 */
			{
				obj_t BgL_oldformsz00_236;

				obj_t BgL_newformsz00_237;

				obj_t BgL_varsz00_238;

				obj_t BgL_declsz00_239;

				BgL_oldformsz00_236 = BgL_bodyz00_7;
				BgL_newformsz00_237 = BNIL;
				BgL_varsz00_238 = BNIL;
				BgL_declsz00_239 = BNIL;
			BgL_zc3anonymousza31616ze3z83_240:
				if (PAIRP(BgL_oldformsz00_236))
					{	/* Expand/lambda.scm 138 */
						obj_t BgL_formz00_242;

						BgL_formz00_242 = CAR(BgL_oldformsz00_236);
						{
							obj_t BgL_bodyz00_246;

							obj_t BgL_varz00_243;

							obj_t BgL_valz00_244;

							if (PAIRP(BgL_formz00_242))
								{	/* Expand/lambda.scm 139 */
									obj_t BgL_cdrzd21737zd2_251;

									BgL_cdrzd21737zd2_251 = CDR(BgL_formz00_242);
									if ((CAR(BgL_formz00_242) == CNST_TABLE_REF(((long) 2))))
										{	/* Expand/lambda.scm 139 */
											if (PAIRP(BgL_cdrzd21737zd2_251))
												{	/* Expand/lambda.scm 139 */
													obj_t BgL_cdrzd21741zd2_254;

													BgL_cdrzd21741zd2_254 = CDR(BgL_cdrzd21737zd2_251);
													if (PAIRP(BgL_cdrzd21741zd2_254))
														{	/* Expand/lambda.scm 139 */
															if (NULLP(CDR(BgL_cdrzd21741zd2_254)))
																{	/* Expand/lambda.scm 139 */
																	BgL_varz00_243 = CAR(BgL_cdrzd21737zd2_251);
																	BgL_valz00_244 = CAR(BgL_cdrzd21741zd2_254);
																	{	/* Expand/lambda.scm 141 */
																		obj_t BgL_arg1633z00_266;

																		obj_t BgL_arg1635z00_267;

																		obj_t BgL_arg1636z00_268;

																		BgL_arg1633z00_266 =
																			CDR(BgL_oldformsz00_236);
																		BgL_arg1635z00_267 =
																			MAKE_PAIR(BgL_varz00_243,
																			BgL_varsz00_238);
																		{	/* Expand/lambda.scm 144 */
																			obj_t BgL_arg1637z00_269;

																			{	/* Expand/lambda.scm 144 */
																				obj_t BgL_arg1639z00_270;

																				{	/* Expand/lambda.scm 144 */
																					obj_t BgL_list1640z00_271;

																					BgL_list1640z00_271 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg1639z00_270 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_valz00_244,
																						BgL_list1640z00_271);
																				}
																				BgL_arg1637z00_269 =
																					MAKE_PAIR(BgL_varz00_243,
																					BgL_arg1639z00_270);
																			}
																			BgL_arg1636z00_268 =
																				MAKE_PAIR(BgL_arg1637z00_269,
																				BgL_declsz00_239);
																		}
																		{
																			obj_t BgL_declsz00_663;

																			obj_t BgL_varsz00_662;

																			obj_t BgL_oldformsz00_661;

																			BgL_oldformsz00_661 = BgL_arg1633z00_266;
																			BgL_varsz00_662 = BgL_arg1635z00_267;
																			BgL_declsz00_663 = BgL_arg1636z00_268;
																			BgL_declsz00_239 = BgL_declsz00_663;
																			BgL_varsz00_238 = BgL_varsz00_662;
																			BgL_oldformsz00_236 = BgL_oldformsz00_661;
																			goto BgL_zc3anonymousza31616ze3z83_240;
																		}
																	}
																}
															else
																{	/* Expand/lambda.scm 139 */
																BgL_tagzd21729zd2_248:
																	{	/* Expand/lambda.scm 151 */
																		obj_t BgL_arg1645z00_274;

																		obj_t BgL_arg1646z00_275;

																		BgL_arg1645z00_274 =
																			CDR(BgL_oldformsz00_236);
																		BgL_arg1646z00_275 =
																			MAKE_PAIR(BgL_formz00_242,
																			BgL_newformsz00_237);
																		{
																			obj_t BgL_newformsz00_669;

																			obj_t BgL_oldformsz00_668;

																			BgL_oldformsz00_668 = BgL_arg1645z00_274;
																			BgL_newformsz00_669 = BgL_arg1646z00_275;
																			BgL_newformsz00_237 = BgL_newformsz00_669;
																			BgL_oldformsz00_236 = BgL_oldformsz00_668;
																			goto BgL_zc3anonymousza31616ze3z83_240;
																		}
																	}
																}
														}
													else
														{	/* Expand/lambda.scm 139 */
															goto BgL_tagzd21729zd2_248;
														}
												}
											else
												{	/* Expand/lambda.scm 139 */
													goto BgL_tagzd21729zd2_248;
												}
										}
									else
										{	/* Expand/lambda.scm 139 */
											if ((CAR(BgL_formz00_242) == CNST_TABLE_REF(((long) 1))))
												{	/* Expand/lambda.scm 139 */
													BgL_bodyz00_246 = BgL_cdrzd21737zd2_251;
													{
														obj_t BgL_oldformsz00_674;

														BgL_oldformsz00_674 =
															bgl_append2(BgL_bodyz00_246,
															CDR(BgL_oldformsz00_236));
														BgL_oldformsz00_236 = BgL_oldformsz00_674;
														goto BgL_zc3anonymousza31616ze3z83_240;
													}
												}
											else
												{	/* Expand/lambda.scm 139 */
													goto BgL_tagzd21729zd2_248;
												}
										}
								}
							else
								{	/* Expand/lambda.scm 139 */
									goto BgL_tagzd21729zd2_248;
								}
						}
					}
				else
					{	/* Expand/lambda.scm 137 */
						if (NULLP(BgL_varsz00_238))
							{	/* Expand/lambda.scm 156 */
								return BGl_expandzd2prognzd2zz__prognz00(BgL_bodyz00_7);
							}
						else
							{	/* Expand/lambda.scm 157 */
								obj_t BgL_arg1650z00_277;

								obj_t BgL_arg1651z00_278;

								BgL_arg1650z00_277 = CNST_TABLE_REF(((long) 3));
								{	/* Expand/lambda.scm 157 */
									obj_t BgL_arg1653z00_279;

									obj_t BgL_arg1654z00_280;

									BgL_arg1653z00_279 = bgl_reverse_bang(BgL_declsz00_239);
									BgL_arg1654z00_280 =
										BGl_expandzd2prognzd2zz__prognz00(bgl_reverse
										(BgL_newformsz00_237));
									{	/* Expand/lambda.scm 157 */
										obj_t BgL_list1656z00_282;

										{	/* Expand/lambda.scm 157 */
											obj_t BgL_arg1657z00_283;

											BgL_arg1657z00_283 = MAKE_PAIR(BNIL, BNIL);
											BgL_list1656z00_282 =
												MAKE_PAIR(BgL_arg1654z00_280, BgL_arg1657z00_283);
										}
										BgL_arg1651z00_278 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg1653z00_279, BgL_list1656z00_282);
								}}
								return MAKE_PAIR(BgL_arg1650z00_277, BgL_arg1651z00_278);
							}
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzexpand_lambdaz00()
	{
		AN_OBJECT;
		{	/* Expand/lambda.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzexpand_lambdaz00()
	{
		AN_OBJECT;
		{	/* Expand/lambda.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzexpand_lambdaz00()
	{
		AN_OBJECT;
		{	/* Expand/lambda.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string1665z00zzexpand_lambdaz00));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 320731191),
				BSTRING_TO_STRING(BGl_string1665z00zzexpand_lambdaz00));
			BGl_modulezd2initializa7ationz75zztools_prognz00(((long) 139728077),
				BSTRING_TO_STRING(BGl_string1665z00zzexpand_lambdaz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string1665z00zzexpand_lambdaz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string1665z00zzexpand_lambdaz00));
			BGl_modulezd2initializa7ationz75zzexpand_epsz00(((long) 46603742),
				BSTRING_TO_STRING(BGl_string1665z00zzexpand_lambdaz00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1665z00zzexpand_lambdaz00));
		}
	}

#ifdef __cplusplus
}
#endif
