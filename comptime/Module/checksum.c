/*===========================================================================*/
/*   (Module/checksum.scm)                                                   */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/checksum.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_checksumz00 = BUNSPEC;
	static obj_t BGl__modulezd2checksumzd2zzmodule_checksumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzmodule_checksumz00();
	BGL_IMPORT bool_t fexists(char *);
	BGL_IMPORT obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_externzd2clausezd2checksumz00zzmodule_checksumz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzmodule_checksumz00();
	BGL_IMPORT obj_t bgl_find_runtime_type(obj_t);
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT long BGl_filezd2modificationzd2timez00zz__r4_ports_6_10_1z00(char
		*);
	static obj_t BGl_atomzd2ze3numberz31zzmodule_checksumz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzmodule_checksumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	BGL_IMPORT obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	BGL_IMPORT long BGl_getzd2hashnumberzd2zz__hashz00(obj_t);
	static obj_t BGl_includezd2checksumzd2zzmodule_checksumz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_clausezd2checksumzd2zzmodule_checksumz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t string_to_bstring(char *);
	static obj_t BGl_zc3exitza31520ze3z83zzmodule_checksumz00(obj_t);
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	static long BGl_symbolzd2ze3numberz31zzmodule_checksumz00(obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	static obj_t BGl_listzd2ze3numberz31zzmodule_checksumz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_za2loadzd2pathza2zd2zz__evalz00;
	BGL_IMPORT obj_t real_to_string(double);
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_checksumz00();
	BGL_EXPORTED_DECL long BGl_modulezd2checksumzd2zzmodule_checksumz00(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzmodule_checksumz00();
	static obj_t __cnst[10];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_modulezd2checksumzd2envz00zzmodule_checksumz00,
		BgL_bgl__moduleza7d2checks1654za7,
		BGl__modulezd2checksumzd2zzmodule_checksumz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1648z00zzmodule_checksumz00,
		BgL_bgl_string1648za700za7za7m1655za7, "Can't find include file", 23);
	      DEFINE_STRING(BGl_string1650z00zzmodule_checksumz00,
		BgL_bgl_string1650za700za7za7m1656za7, "module checksum:Unknown clause",
		30);
	      DEFINE_STRING(BGl_string1649z00zzmodule_checksumz00,
		BgL_bgl_string1649za700za7za7m1657za7, " -- ", 4);
	      DEFINE_STRING(BGl_string1651z00zzmodule_checksumz00,
		BgL_bgl_string1651za700za7za7m1658za7,
		"info assert default include java extern foreign export directives include-checksum ",
		83);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzmodule_checksumz00(long
		BgL_checksumz00_464, char *BgL_fromz00_465)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_checksumz00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_checksumz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzmodule_checksumz00();
					BGl_cnstzd2initzd2zzmodule_checksumz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_checksumz00()
	{
		AN_OBJECT;
		{	/* Module/checksum.scm 18 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"module_checksum");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"module_checksum");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"module_checksum");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"module_checksum");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0),
				"module_checksum");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "module_checksum");
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 0),
				"module_checksum");
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0),
				"module_checksum");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_checksumz00()
	{
		AN_OBJECT;
		{	/* Module/checksum.scm 18 */
			{	/* Module/checksum.scm 18 */
				obj_t BgL_cportz00_456;

				BgL_cportz00_456 =
					bgl_open_input_string(BGl_string1651z00zzmodule_checksumz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_457;

					BgL_iz00_457 = ((long) 9);
				BgL_loopz00_458:
					if ((BgL_iz00_457 == ((long) -1)))
						{	/* Module/checksum.scm 18 */
							return BUNSPEC;
						}
					else
						{	/* Module/checksum.scm 18 */
							{	/* Module/checksum.scm 18 */
								obj_t BgL_arg1653z00_460;

								{	/* Module/checksum.scm 18 */

									{	/* Module/checksum.scm 18 */
										obj_t BgL_locationz00_462;

										BgL_locationz00_462 = BBOOL(((bool_t) 0));
										{	/* Module/checksum.scm 18 */

											BgL_arg1653z00_460 =
												BGl_readz00zz__readerz00(BgL_cportz00_456,
												BgL_locationz00_462);
										}
									}
								}
								{	/* Module/checksum.scm 18 */
									int BgL_auxz00_485;

									BgL_auxz00_485 = (int) (BgL_iz00_457);
									CNST_TABLE_SET(BgL_auxz00_485, BgL_arg1653z00_460);
							}}
							{	/* Module/checksum.scm 18 */
								int BgL_auxz00_463;

								BgL_auxz00_463 = (int) ((BgL_iz00_457 - ((long) 1)));
								{
									long BgL_iz00_490;

									BgL_iz00_490 = (long) (BgL_auxz00_463);
									BgL_iz00_457 = BgL_iz00_490;
									goto BgL_loopz00_458;
								}
							}
						}
				}
			}
		}
	}



/* module-checksum */
	BGL_EXPORTED_DEF long BGl_modulezd2checksumzd2zzmodule_checksumz00(obj_t
		BgL_modulez00_1, obj_t BgL_includezd2pathzd2_2)
	{
		AN_OBJECT;
		{	/* Module/checksum.scm 24 */
			{	/* Module/checksum.scm 25 */
				long BgL_arg1511z00_298;

				obj_t BgL_arg1512z00_299;

				BgL_arg1511z00_298 =
					BGl_symbolzd2ze3numberz31zzmodule_checksumz00(CAR(CDR
						(BgL_modulez00_1)));
				BgL_arg1512z00_299 = CDR(CDR(BgL_modulez00_1));
				return
					(long)
					CINT(BGl_clausezd2checksumzd2zzmodule_checksumz00(BINT
						(BgL_arg1511z00_298), BgL_arg1512z00_299, BgL_includezd2pathzd2_2));
		}}
	}



/* _module-checksum */
	obj_t BGl__modulezd2checksumzd2zzmodule_checksumz00(obj_t BgL_envz00_452,
		obj_t BgL_modulez00_453, obj_t BgL_includezd2pathzd2_454)
	{
		AN_OBJECT;
		{	/* Module/checksum.scm 24 */
			return
				BINT(BGl_modulezd2checksumzd2zzmodule_checksumz00(BgL_modulez00_453,
					BgL_includezd2pathzd2_454));
		}
	}



/* include-checksum */
	obj_t BGl_includezd2checksumzd2zzmodule_checksumz00(obj_t BgL_includez00_3,
		obj_t BgL_checksumz00_4, obj_t BgL_includezd2pathzd2_5)
	{
		AN_OBJECT;
		{	/* Module/checksum.scm 30 */
			{	/* Module/checksum.scm 37 */
				obj_t BgL_fiz00_107;

				BgL_fiz00_107 =
					BGl_findzd2filezf2pathz20zz__osz00(BgL_includez00_3,
					BGl_za2loadzd2pathza2zd2zz__evalz00);
				{	/* Module/checksum.scm 38 */
					bool_t BgL_testz00_503;

					if (STRINGP(BgL_fiz00_107))
						{	/* Module/checksum.scm 38 */
							BgL_testz00_503 = fexists(BSTRING_TO_STRING(BgL_fiz00_107));
						}
					else
						{	/* Module/checksum.scm 38 */
							BgL_testz00_503 = ((bool_t) 0);
						}
					if (BgL_testz00_503)
						{	/* Module/checksum.scm 39 */
							obj_t BgL_portz00_109;

							{	/* Module/checksum.scm 39 */
								obj_t BgL_g2673z00_124;

								BgL_g2673z00_124 = BgL_fiz00_107;
								{	/* Module/checksum.scm 39 */

									BgL_portz00_109 =
										BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
										(BgL_g2673z00_124, BTRUE);
								}
							}
							{	/* Module/checksum.scm 39 */
								obj_t BgL_dirz00_110;

								{	/* Module/checksum.scm 40 */
									obj_t BgL_val1508z00_113;

									BgL_val1508z00_113 =
										BGl_zc3exitza31520ze3z83zzmodule_checksumz00
										(BgL_portz00_109);
									bgl_close_input_port(BgL_portz00_109);
									if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
											(BgL_val1508z00_113)))
										{	/* Module/checksum.scm 44 */
											BgL_dirz00_110 =
												BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
												(BgL_val1508z00_113), CDR(BgL_val1508z00_113));
										}
									else
										{	/* Module/checksum.scm 44 */
											BgL_dirz00_110 = BgL_val1508z00_113;
										}
								}
								{	/* Module/checksum.scm 40 */

									if (CBOOL(BgL_dirz00_110))
										{	/* Module/checksum.scm 45 */
											return
												BGl_clausezd2checksumzd2zzmodule_checksumz00
												(BGl_atomzd2ze3numberz31zzmodule_checksumz00
												(BgL_checksumz00_4, BgL_includez00_3),
												CDR(BgL_dirz00_110), BgL_includezd2pathzd2_5);
										}
									else
										{	/* Module/checksum.scm 45 */
											return BgL_checksumz00_4;
										}
								}
							}
						}
					else
						{	/* Module/checksum.scm 38 */
							return
								BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
								BGl_string1648z00zzmodule_checksumz00, BgL_includez00_3);
		}}}}
	}



/* <exit:1520> */
	obj_t BGl_zc3exitza31520ze3z83zzmodule_checksumz00(obj_t BgL_portz00_455)
	{
		AN_OBJECT;
		{	/* Module/checksum.scm 44 */
			{
				obj_t BgL_expz00_127;

				jmp_buf_t jmpbuf;

				void *BgL_an_exit1509z00_118;

				if (SET_EXIT(BgL_an_exit1509z00_118))
					{
						return BGL_EXIT_VALUE();
					}
				else
					{
						BgL_an_exit1509z00_118 = (void *) jmpbuf;
						{	/* Module/checksum.scm 44 */

							PUSH_EXIT(BgL_an_exit1509z00_118, ((long) 0));
							{	/* Module/checksum.scm 40 */
								obj_t BgL_val1510z00_119;

								{	/* Module/checksum.scm 40 */
									obj_t BgL_expz00_120;

									{	/* Module/checksum.scm 40 */

										{	/* Module/checksum.scm 40 */
											obj_t BgL_iportz00_122;

											BgL_iportz00_122 = BgL_portz00_455;
											{	/* Module/checksum.scm 40 */

												BgL_expz00_120 =
													BGl_readz00zz__readerz00(BgL_iportz00_122, BFALSE);
									}}}
									{	/* Module/checksum.scm 41 */
										bool_t BgL_testz00_528;

										BgL_expz00_127 = BgL_expz00_120;
										if (PAIRP(BgL_expz00_127))
											{	/* Module/checksum.scm 36 */
												if ((CAR(BgL_expz00_127) == CNST_TABLE_REF(((long) 1))))
													{	/* Module/checksum.scm 36 */
														BgL_testz00_528 = ((bool_t) 1);
													}
												else
													{	/* Module/checksum.scm 36 */
														BgL_testz00_528 = ((bool_t) 0);
													}
											}
										else
											{	/* Module/checksum.scm 36 */
												BgL_testz00_528 = ((bool_t) 0);
											}
										if (BgL_testz00_528)
											{	/* Module/checksum.scm 41 */
												BgL_val1510z00_119 = BgL_expz00_120;
											}
										else
											{	/* Module/checksum.scm 41 */
												BgL_val1510z00_119 = BFALSE;
											}
									}
								}
								POP_EXIT();
								return BgL_val1510z00_119;
							}
						}
					}
			}
		}
	}



/* clause-checksum */
	obj_t BGl_clausezd2checksumzd2zzmodule_checksumz00(obj_t BgL_checksumz00_6,
		obj_t BgL_clausesz00_7, obj_t BgL_includezd2pathzd2_8)
	{
		AN_OBJECT;
		{	/* Module/checksum.scm 55 */
			{
				obj_t BgL_clausesz00_138;

				obj_t BgL_checksumz00_139;

				BgL_clausesz00_138 = BgL_clausesz00_7;
				BgL_checksumz00_139 = BgL_checksumz00_6;
			BgL_zc3anonymousza31528ze3z83_140:
				{
					obj_t BgL_filesz00_148;

					obj_t BgL_restz00_149;

					if (NULLP(BgL_clausesz00_138))
						{	/* Module/checksum.scm 56 */
							return BgL_checksumz00_139;
						}
					else
						{	/* Module/checksum.scm 56 */
							if (PAIRP(BgL_clausesz00_138))
								{	/* Module/checksum.scm 56 */
									obj_t BgL_carzd21408zd2_155;

									BgL_carzd21408zd2_155 = CAR(BgL_clausesz00_138);
									if (PAIRP(BgL_carzd21408zd2_155))
										{	/* Module/checksum.scm 56 */
											if (
												(CAR(BgL_carzd21408zd2_155) ==
													CNST_TABLE_REF(((long) 2))))
												{	/* Module/checksum.scm 56 */
													obj_t BgL_arg1533z00_158;

													obj_t BgL_arg1534z00_159;

													BgL_arg1533z00_158 = CDR(BgL_carzd21408zd2_155);
													BgL_arg1534z00_159 = CDR(BgL_clausesz00_138);
													{
														obj_t BgL_checksumz00_550;

														obj_t BgL_clausesz00_549;

														BgL_clausesz00_549 = BgL_arg1534z00_159;
														BgL_checksumz00_550 =
															BGl_listzd2ze3numberz31zzmodule_checksumz00
															(BgL_checksumz00_139, BgL_arg1533z00_158);
														BgL_checksumz00_139 = BgL_checksumz00_550;
														BgL_clausesz00_138 = BgL_clausesz00_549;
														goto BgL_zc3anonymousza31528ze3z83_140;
													}
												}
											else
												{	/* Module/checksum.scm 56 */
													obj_t BgL_cdrzd21421zd2_161;

													BgL_cdrzd21421zd2_161 = CDR(BgL_clausesz00_138);
													{	/* Module/checksum.scm 56 */
														obj_t BgL_carzd21423zd2_162;

														obj_t BgL_cdrzd21424zd2_163;

														BgL_carzd21423zd2_162 = CAR(BgL_carzd21408zd2_155);
														BgL_cdrzd21424zd2_163 = CDR(BgL_carzd21408zd2_155);
														if (
															(BgL_carzd21423zd2_162 ==
																CNST_TABLE_REF(((long) 3))))
															{
																obj_t BgL_checksumz00_559;

																obj_t BgL_clausesz00_558;

																BgL_clausesz00_558 = BgL_cdrzd21421zd2_161;
																BgL_checksumz00_559 =
																	BGl_externzd2clausezd2checksumz00zzmodule_checksumz00
																	(BgL_checksumz00_139, BgL_cdrzd21424zd2_163,
																	BgL_includezd2pathzd2_8);
																BgL_checksumz00_139 = BgL_checksumz00_559;
																BgL_clausesz00_138 = BgL_clausesz00_558;
																goto BgL_zc3anonymousza31528ze3z83_140;
															}
														else
															{	/* Module/checksum.scm 56 */
																if (
																	(BgL_carzd21423zd2_162 ==
																		CNST_TABLE_REF(((long) 4))))
																	{
																		obj_t BgL_checksumz00_565;

																		obj_t BgL_clausesz00_564;

																		BgL_clausesz00_564 = BgL_cdrzd21421zd2_161;
																		BgL_checksumz00_565 =
																			BGl_externzd2clausezd2checksumz00zzmodule_checksumz00
																			(BgL_checksumz00_139,
																			BgL_cdrzd21424zd2_163,
																			BgL_includezd2pathzd2_8);
																		BgL_checksumz00_139 = BgL_checksumz00_565;
																		BgL_clausesz00_138 = BgL_clausesz00_564;
																		goto BgL_zc3anonymousza31528ze3z83_140;
																	}
																else
																	{	/* Module/checksum.scm 56 */
																		if (
																			(BgL_carzd21423zd2_162 ==
																				CNST_TABLE_REF(((long) 5))))
																			{
																				obj_t BgL_checksumz00_571;

																				obj_t BgL_clausesz00_570;

																				BgL_clausesz00_570 =
																					BgL_cdrzd21421zd2_161;
																				BgL_checksumz00_571 =
																					BGl_externzd2clausezd2checksumz00zzmodule_checksumz00
																					(BgL_checksumz00_139,
																					BgL_cdrzd21424zd2_163,
																					BgL_includezd2pathzd2_8);
																				BgL_checksumz00_139 =
																					BgL_checksumz00_571;
																				BgL_clausesz00_138 = BgL_clausesz00_570;
																				goto BgL_zc3anonymousza31528ze3z83_140;
																			}
																		else
																			{	/* Module/checksum.scm 56 */
																				obj_t BgL_carzd21433zd2_167;

																				BgL_carzd21433zd2_167 =
																					CAR(BgL_clausesz00_138);
																				if (
																					(CAR(BgL_carzd21433zd2_167) ==
																						CNST_TABLE_REF(((long) 6))))
																					{	/* Module/checksum.scm 56 */
																						BgL_filesz00_148 =
																							CDR(BgL_carzd21433zd2_167);
																						BgL_restz00_149 =
																							CDR(BgL_clausesz00_138);
																						{
																							obj_t BgL_filesz00_178;

																							obj_t BgL_checksumz00_179;

																							BgL_filesz00_178 =
																								BgL_filesz00_148;
																							BgL_checksumz00_179 =
																								BgL_checksumz00_139;
																						BgL_zc3anonymousza31547ze3z83_180:
																							if (NULLP(BgL_filesz00_178))
																								{
																									obj_t BgL_checksumz00_581;

																									obj_t BgL_clausesz00_580;

																									BgL_clausesz00_580 =
																										BgL_restz00_149;
																									BgL_checksumz00_581 =
																										BgL_checksumz00_179;
																									BgL_checksumz00_139 =
																										BgL_checksumz00_581;
																									BgL_clausesz00_138 =
																										BgL_clausesz00_580;
																									goto
																										BgL_zc3anonymousza31528ze3z83_140;
																								}
																							else
																								{
																									obj_t BgL_checksumz00_584;

																									obj_t BgL_filesz00_582;

																									BgL_filesz00_582 =
																										CDR(BgL_filesz00_178);
																									BgL_checksumz00_584 =
																										BGl_includezd2checksumzd2zzmodule_checksumz00
																										(CAR(BgL_filesz00_178),
																										BgL_checksumz00_179,
																										BgL_includezd2pathzd2_8);
																									BgL_checksumz00_179 =
																										BgL_checksumz00_584;
																									BgL_filesz00_178 =
																										BgL_filesz00_582;
																									goto
																										BgL_zc3anonymousza31547ze3z83_180;
																								}
																						}
																					}
																				else
																					{	/* Module/checksum.scm 56 */
																					BgL_tagzd21398zd2_151:
																						{
																							obj_t BgL_clausesz00_589;

																							BgL_clausesz00_589 =
																								CDR(BgL_clausesz00_138);
																							BgL_clausesz00_138 =
																								BgL_clausesz00_589;
																							goto
																								BgL_zc3anonymousza31528ze3z83_140;
																						}
																					}
																			}
																	}
															}
													}
												}
										}
									else
										{	/* Module/checksum.scm 56 */
											goto BgL_tagzd21398zd2_151;
										}
								}
							else
								{	/* Module/checksum.scm 56 */
									goto BgL_tagzd21398zd2_151;
								}
						}
				}
			}
		}
	}



/* symbol->number */
	long BGl_symbolzd2ze3numberz31zzmodule_checksumz00(obj_t BgL_symbolz00_9)
	{
		AN_OBJECT;
		{	/* Module/checksum.scm 79 */
			{
				char *BgL_strz00_191;

				{	/* Module/checksum.scm 94 */
					obj_t BgL_arg1554z00_189;

					{	/* Module/checksum.scm 94 */
						obj_t BgL_arg1555z00_190;

						{	/* Module/checksum.scm 94 */
							obj_t BgL_res1646z00_352;

							{	/* Module/checksum.scm 94 */
								obj_t BgL_symbolz00_350;

								BgL_symbolz00_350 = BgL_symbolz00_9;
								{	/* Module/checksum.scm 94 */
									obj_t BgL_arg2063z00_351;

									BgL_arg2063z00_351 = SYMBOL_TO_STRING(BgL_symbolz00_350);
									BgL_res1646z00_352 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2063z00_351);
							}}
							BgL_arg1555z00_190 = BgL_res1646z00_352;
						}
						BgL_strz00_191 = BSTRING_TO_STRING(BgL_arg1555z00_190);
						{	/* Module/checksum.scm 81 */
							long BgL_lenz00_193;

							BgL_lenz00_193 =
								(STRING_LENGTH(string_to_bstring(BgL_strz00_191)) - ((long) 1));
							{
								long BgL_iz00_195;

								bool_t BgL_armedzf3zf3_196;

								BgL_iz00_195 = ((long) 0);
								BgL_armedzf3zf3_196 = ((bool_t) 0);
							BgL_zc3anonymousza31557ze3z83_197:
								if ((BgL_iz00_195 == BgL_lenz00_193))
									{	/* Module/checksum.scm 86 */
										BgL_arg1554z00_189 = string_to_bstring(BgL_strz00_191);
									}
								else
									{	/* Module/checksum.scm 86 */
										if (
											(STRING_REF(string_to_bstring(BgL_strz00_191),
													BgL_iz00_195) == ((unsigned char) ':')))
											{	/* Module/checksum.scm 88 */
												if (BgL_armedzf3zf3_196)
													{	/* Module/checksum.scm 89 */
														BgL_arg1554z00_189 =
															c_substring(string_to_bstring(BgL_strz00_191),
															(BgL_iz00_195 + ((long) 1)),
															(BgL_lenz00_193 + ((long) 1)));
													}
												else
													{
														bool_t BgL_armedzf3zf3_610;

														long BgL_iz00_608;

														BgL_iz00_608 = (BgL_iz00_195 + ((long) 1));
														BgL_armedzf3zf3_610 = ((bool_t) 1);
														BgL_armedzf3zf3_196 = BgL_armedzf3zf3_610;
														BgL_iz00_195 = BgL_iz00_608;
														goto BgL_zc3anonymousza31557ze3z83_197;
													}
											}
										else
											{
												bool_t BgL_armedzf3zf3_613;

												long BgL_iz00_611;

												BgL_iz00_611 = (BgL_iz00_195 + ((long) 1));
												BgL_armedzf3zf3_613 = ((bool_t) 0);
												BgL_armedzf3zf3_196 = BgL_armedzf3zf3_613;
												BgL_iz00_195 = BgL_iz00_611;
												goto BgL_zc3anonymousza31557ze3z83_197;
											}
									}
							}
						}
					}
					return BGl_getzd2hashnumberzd2zz__hashz00(BgL_arg1554z00_189);
				}
			}
		}
	}



/* atom->number */
	obj_t BGl_atomzd2ze3numberz31zzmodule_checksumz00(obj_t BgL_checksumz00_11,
		obj_t BgL_clausez00_12)
	{
		AN_OBJECT;
		{	/* Module/checksum.scm 105 */
		BGl_atomzd2ze3numberz31zzmodule_checksumz00:
			if (INTEGERP(BgL_clausez00_12))
				{	/* Module/checksum.scm 107 */
					return
						BINT(
						((long) CINT(BgL_checksumz00_11) ^ (long) CINT(BgL_clausez00_12)));
				}
			else
				{	/* Module/checksum.scm 107 */
					if (REALP(BgL_clausez00_12))
						{	/* Module/checksum.scm 110 */
							obj_t BgL_arg1570z00_211;

							{	/* Module/checksum.scm 110 */
								obj_t BgL_realz00_377;

								BgL_realz00_377 = BgL_clausez00_12;
								BgL_arg1570z00_211 =
									real_to_string(REAL_TO_DOUBLE(BgL_realz00_377));
							}
							{
								obj_t BgL_clausez00_626;

								BgL_clausez00_626 = BgL_arg1570z00_211;
								BgL_clausez00_12 = BgL_clausez00_626;
								goto BGl_atomzd2ze3numberz31zzmodule_checksumz00;
							}
						}
					else
						{	/* Module/checksum.scm 109 */
							if (CHARP(BgL_clausez00_12))
								{	/* Module/checksum.scm 111 */
									return
										BINT(
										((long) CINT(BgL_checksumz00_11) ^
											(((long) 23) + (CCHAR(BgL_clausez00_12)))));
								}
							else
								{	/* Module/checksum.scm 111 */
									if (CNSTP(BgL_clausez00_12))
										{	/* Module/checksum.scm 114 */
											long BgL_arg1577z00_217;

											BgL_arg1577z00_217 =
												(((long) 90) + CCNST(BgL_clausez00_12));
											return
												BINT(
												((long) CINT(BgL_checksumz00_11) ^ BgL_arg1577z00_217));
										}
									else
										{	/* Module/checksum.scm 113 */
											if (STRINGP(BgL_clausez00_12))
												{	/* Module/checksum.scm 116 */
													long BgL_arg1582z00_221;

													BgL_arg1582z00_221 =
														(((long) 4) +
														BGl_getzd2hashnumberzd2zz__hashz00
														(BgL_clausez00_12));
													return BINT(((long) CINT(BgL_checksumz00_11) ^
															BgL_arg1582z00_221));
												}
											else
												{	/* Module/checksum.scm 115 */
													if (SYMBOLP(BgL_clausez00_12))
														{	/* Module/checksum.scm 118 */
															long BgL_arg1586z00_225;

															BgL_arg1586z00_225 =
																(((long) 150) +
																BGl_symbolzd2ze3numberz31zzmodule_checksumz00
																(BgL_clausez00_12));
															return BINT(((long) CINT(BgL_checksumz00_11) ^
																	BgL_arg1586z00_225));
														}
													else
														{	/* Module/checksum.scm 117 */
															if (KEYWORDP(BgL_clausez00_12))
																{	/* Module/checksum.scm 119 */
																	return
																		BINT(
																		((long) CINT(BgL_checksumz00_11) ^
																			(((long) 151) + ((long) 0))));
																}
															else
																{	/* Module/checksum.scm 119 */
																	if (PAIRP(BgL_clausez00_12))
																		{	/* Module/checksum.scm 121 */
																			return
																				BGl_listzd2ze3numberz31zzmodule_checksumz00
																				(BgL_checksumz00_11, BgL_clausez00_12);
																		}
																	else
																		{	/* Module/checksum.scm 121 */
																			if (ELONGP(BgL_clausez00_12))
																				{	/* Module/checksum.scm 124 */
																					long BgL_arg1596z00_234;

																					{	/* Module/checksum.scm 124 */
																						long BgL_res1647z00_408;

																						{	/* Module/checksum.scm 124 */
																							long BgL_xz00_407;

																							BgL_xz00_407 =
																								BELONG_TO_LONG
																								(BgL_clausez00_12);
																							{	/* Module/checksum.scm 124 */
																								long BgL_auxz00_668;

																								{	/* Module/checksum.scm 124 */
																									long BgL_auxz00_669;

																									BgL_auxz00_669 =
																										ELONG_TO_LONG(BgL_xz00_407);
																									BgL_auxz00_668 =
																										ELONG_TO_LONG
																										(BgL_auxz00_669);
																								}
																								BgL_res1647z00_408 =
																									ELONG_TO_LONG(BgL_auxz00_668);
																						}}
																						BgL_arg1596z00_234 =
																							BgL_res1647z00_408;
																					}
																					return
																						BINT(
																						((long) CINT(BgL_checksumz00_11) ^
																							BgL_arg1596z00_234));
																				}
																			else
																				{	/* Module/checksum.scm 123 */
																					if (LLONGP(BgL_clausez00_12))
																						{	/* Module/checksum.scm 127 */
																							BGL_LONGLONG_T BgL_arg1598z00_236;

																							BgL_arg1598z00_236 =
																								(
																								(BLLONG_TO_LLONG
																									(BgL_clausez00_12) >>
																									(int) (((long) 32))) ^
																								((BLLONG_TO_LLONG
																										(BgL_clausez00_12) <<
																										(int) (((long) 32))) >>
																									(int) (((long) 32))));
																							{	/* Module/checksum.scm 126 */
																								long BgL_xz00_420;

																								long BgL_yz00_421;

																								BgL_xz00_420 =
																									(long)
																									CINT(BgL_checksumz00_11);
																								BgL_yz00_421 =
																									LLONG_TO_LONG
																									(BgL_arg1598z00_236);
																								return BINT((BgL_xz00_420 ^
																										BgL_yz00_421));
																							}
																						}
																					else
																						{	/* Module/checksum.scm 125 */
																							{	/* Module/checksum.scm 130 */
																								obj_t BgL_arg1605z00_243;

																								BgL_arg1605z00_243 =
																									bgl_find_runtime_type
																									(BgL_clausez00_12);
																								{	/* Module/checksum.scm 130 */
																									obj_t BgL_list1606z00_244;

																									{	/* Module/checksum.scm 130 */
																										obj_t BgL_arg1607z00_245;

																										{	/* Module/checksum.scm 130 */
																											obj_t BgL_arg1608z00_246;

																											{	/* Module/checksum.scm 130 */
																												obj_t
																													BgL_arg1610z00_247;
																												BgL_arg1610z00_247 =
																													MAKE_PAIR
																													(BgL_arg1605z00_243,
																													BNIL);
																												BgL_arg1608z00_246 =
																													MAKE_PAIR
																													(BGl_string1649z00zzmodule_checksumz00,
																													BgL_arg1610z00_247);
																											}
																											BgL_arg1607z00_245 =
																												MAKE_PAIR
																												(BgL_clausez00_12,
																												BgL_arg1608z00_246);
																										}
																										BgL_list1606z00_244 =
																											MAKE_PAIR
																											(BGl_string1650z00zzmodule_checksumz00,
																											BgL_arg1607z00_245);
																									}
																									BGl_warningz00zz__errorz00
																										(BgL_list1606z00_244);
																								}
																							}
																							return BINT(((long) 0));
		}}}}}}}}}}}
	}



/* list->number */
	obj_t BGl_listzd2ze3numberz31zzmodule_checksumz00(obj_t BgL_checksumz00_13,
		obj_t BgL_clausez00_14)
	{
		AN_OBJECT;
		{	/* Module/checksum.scm 137 */
		BGl_listzd2ze3numberz31zzmodule_checksumz00:
			{

				if (NULLP(BgL_clausez00_14))
					{	/* Module/checksum.scm 138 */
						return BgL_checksumz00_13;
					}
				else
					{	/* Module/checksum.scm 138 */
						if (PAIRP(BgL_clausez00_14))
							{	/* Module/checksum.scm 138 */
								obj_t BgL_carzd21462zd2_254;

								BgL_carzd21462zd2_254 = CAR(BgL_clausez00_14);
								if ((BgL_carzd21462zd2_254 == CNST_TABLE_REF(((long) 7))))
									{	/* Module/checksum.scm 138 */
										return BINT(((long) 0));
									}
								else
									{	/* Module/checksum.scm 138 */
										if ((BgL_carzd21462zd2_254 == CNST_TABLE_REF(((long) 8))))
											{	/* Module/checksum.scm 138 */
												return BINT(((long) 0));
											}
										else
											{	/* Module/checksum.scm 138 */
												if (
													(BgL_carzd21462zd2_254 == CNST_TABLE_REF(((long) 9))))
													{	/* Module/checksum.scm 138 */
														return BINT(((long) 0));
													}
												else
													{	/* Module/checksum.scm 138 */
													BgL_tagzd21460zd2_250:
														if (PAIRP(BgL_clausez00_14))
															{
																obj_t BgL_clausez00_720;

																obj_t BgL_checksumz00_717;

																BgL_checksumz00_717 =
																	BGl_atomzd2ze3numberz31zzmodule_checksumz00
																	(BgL_checksumz00_13, CAR(BgL_clausez00_14));
																BgL_clausez00_720 = CDR(BgL_clausez00_14);
																BgL_clausez00_14 = BgL_clausez00_720;
																BgL_checksumz00_13 = BgL_checksumz00_717;
																goto
																	BGl_listzd2ze3numberz31zzmodule_checksumz00;
															}
														else
															{	/* Module/checksum.scm 144 */
																return
																	BGl_atomzd2ze3numberz31zzmodule_checksumz00
																	(BgL_checksumz00_13, BgL_clausez00_14);
															}
													}
											}
									}
							}
						else
							{	/* Module/checksum.scm 138 */
								goto BgL_tagzd21460zd2_250;
							}
					}
			}
		}
	}



/* extern-clause-checksum */
	obj_t BGl_externzd2clausezd2checksumz00zzmodule_checksumz00(obj_t
		BgL_checksumz00_15, obj_t BgL_clausesz00_16, obj_t BgL_includezd2pathzd2_17)
	{
		AN_OBJECT;
		{	/* Module/checksum.scm 151 */
			{
				obj_t BgL_clausesz00_264;

				obj_t BgL_checksumz00_265;

				BgL_clausesz00_264 = BgL_clausesz00_16;
				BgL_checksumz00_265 = BgL_checksumz00_15;
			BgL_zc3anonymousza31623ze3z83_266:
				{
					obj_t BgL_filez00_268;

					obj_t BgL_restz00_269;

					if (NULLP(BgL_clausesz00_264))
						{	/* Module/checksum.scm 152 */
							return BgL_checksumz00_265;
						}
					else
						{	/* Module/checksum.scm 152 */
							if (PAIRP(BgL_clausesz00_264))
								{	/* Module/checksum.scm 152 */
									obj_t BgL_carzd21476zd2_275;

									BgL_carzd21476zd2_275 = CAR(BgL_clausesz00_264);
									if (PAIRP(BgL_carzd21476zd2_275))
										{	/* Module/checksum.scm 152 */
											obj_t BgL_cdrzd21480zd2_277;

											BgL_cdrzd21480zd2_277 = CDR(BgL_carzd21476zd2_275);
											if (
												(CAR(BgL_carzd21476zd2_275) ==
													CNST_TABLE_REF(((long) 6))))
												{	/* Module/checksum.scm 152 */
													if (PAIRP(BgL_cdrzd21480zd2_277))
														{	/* Module/checksum.scm 152 */
															if (NULLP(CDR(BgL_cdrzd21480zd2_277)))
																{	/* Module/checksum.scm 152 */
																	BgL_filez00_268 = CAR(BgL_cdrzd21480zd2_277);
																	BgL_restz00_269 = CDR(BgL_clausesz00_264);
																	{	/* Module/checksum.scm 160 */
																		obj_t BgL_fullnamez00_286;

																		BgL_fullnamez00_286 =
																			BGl_findzd2filezf2pathz20zz__osz00
																			(BgL_filez00_268,
																			BgL_includezd2pathzd2_17);
																		{	/* Module/checksum.scm 160 */
																			long BgL_timez00_287;

																			{	/* Module/checksum.scm 161 */
																				bool_t BgL_testz00_741;

																				if (STRINGP(BgL_fullnamez00_286))
																					{	/* Module/checksum.scm 161 */
																						BgL_testz00_741 =
																							fexists(BSTRING_TO_STRING
																							(BgL_fullnamez00_286));
																					}
																				else
																					{	/* Module/checksum.scm 161 */
																						BgL_testz00_741 = ((bool_t) 0);
																					}
																				if (BgL_testz00_741)
																					{	/* Module/checksum.scm 164 */
																						double BgL_arg1639z00_291;

																						BgL_arg1639z00_291 =
																							(double)
																							(BGl_filezd2modificationzd2timez00zz__r4_ports_6_10_1z00
																							(BSTRING_TO_STRING
																								(BgL_fullnamez00_286)));
																						BgL_timez00_287 =
																							(long) (BgL_arg1639z00_291);
																					}
																				else
																					{	/* Module/checksum.scm 161 */
																						BgL_timez00_287 = ((long) 0);
																			}}
																			{	/* Module/checksum.scm 161 */

																				{
																					obj_t BgL_checksumz00_752;

																					obj_t BgL_clausesz00_750;

																					BgL_clausesz00_750 =
																						CDR(BgL_clausesz00_264);
																					BgL_checksumz00_752 =
																						BGl_atomzd2ze3numberz31zzmodule_checksumz00
																						(BgL_checksumz00_265,
																						BINT(BgL_timez00_287));
																					BgL_checksumz00_265 =
																						BgL_checksumz00_752;
																					BgL_clausesz00_264 =
																						BgL_clausesz00_750;
																					goto
																						BgL_zc3anonymousza31623ze3z83_266;
																				}
																			}
																		}
																	}
																}
															else
																{	/* Module/checksum.scm 152 */
																BgL_tagzd21468zd2_271:
																	{
																		obj_t BgL_checksumz00_759;

																		obj_t BgL_clausesz00_757;

																		BgL_clausesz00_757 =
																			CDR(BgL_clausesz00_264);
																		BgL_checksumz00_759 =
																			BGl_atomzd2ze3numberz31zzmodule_checksumz00
																			(BgL_checksumz00_265,
																			CAR(BgL_clausesz00_264));
																		BgL_checksumz00_265 = BgL_checksumz00_759;
																		BgL_clausesz00_264 = BgL_clausesz00_757;
																		goto BgL_zc3anonymousza31623ze3z83_266;
																	}
																}
														}
													else
														{	/* Module/checksum.scm 152 */
															goto BgL_tagzd21468zd2_271;
														}
												}
											else
												{	/* Module/checksum.scm 152 */
													goto BgL_tagzd21468zd2_271;
												}
										}
									else
										{	/* Module/checksum.scm 152 */
											goto BgL_tagzd21468zd2_271;
										}
								}
							else
								{	/* Module/checksum.scm 152 */
									goto BgL_tagzd21468zd2_271;
								}
						}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_checksumz00()
	{
		AN_OBJECT;
		{	/* Module/checksum.scm 18 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_checksumz00()
	{
		AN_OBJECT;
		{	/* Module/checksum.scm 18 */
			return BUNSPEC;
		}
	}

#ifdef __cplusplus
}
#endif
