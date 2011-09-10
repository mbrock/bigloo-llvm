/*===========================================================================*/
/*   (Read/load.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Read/load.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzread_loadz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzread_loadz00();
	BGL_EXPORTED_DECL obj_t BGl_loadzd2modulezd2zzread_loadz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzread_loadz00();
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzread_loadz00();
	static obj_t BGl_zc3exitza31623ze3z83zzread_loadz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readerzd2resetz12zc0zz__readerz00();
	BGL_IMPORT obj_t BGl_defaultzd2environmentzd2zz__evalz00();
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzread_loadz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl__loadzd2modulezd2zzread_loadz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_loadqz00zz__evalz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	BGL_IMPORT obj_t BGl_za2loadzd2pathza2zd2zz__evalz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzread_loadz00();
	static obj_t BGl_methodzd2initzd2zzread_loadz00();
	static obj_t __cnst[1];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_loadzd2modulezd2envz00zzread_loadz00,
		BgL_bgl__loadza7d2moduleza7d1668z00, BGl__loadzd2modulezd2zzread_loadz00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1656z00zzread_loadz00,
		BgL_bgl_string1656za700za7za7r1669za7, "]", 1);
	      DEFINE_STRING(BGl_string1657z00zzread_loadz00,
		BgL_bgl_string1657za700za7za7r1670za7, "      [reading loaded module ", 29);
	      DEFINE_STRING(BGl_string1658z00zzread_loadz00,
		BgL_bgl_string1658za700za7za7r1671za7, "load-module", 11);
	      DEFINE_STRING(BGl_string1660z00zzread_loadz00,
		BgL_bgl_string1660za700za7za7r1672za7, "Can't find file", 15);
	      DEFINE_STRING(BGl_string1659z00zzread_loadz00,
		BgL_bgl_string1659za700za7za7r1673za7, "Can't open such file", 20);
	      DEFINE_STRING(BGl_string1661z00zzread_loadz00,
		BgL_bgl_string1661za700za7za7r1674za7, " vs ", 4);
	      DEFINE_STRING(BGl_string1662z00zzread_loadz00,
		BgL_bgl_string1662za700za7za7r1675za7, "conflict in module's name: ", 27);
	      DEFINE_STRING(BGl_string1663z00zzread_loadz00,
		BgL_bgl_string1663za700za7za7r1676za7, "Illegal module declaration", 26);
	      DEFINE_STRING(BGl_string1664z00zzread_loadz00,
		BgL_bgl_string1664za700za7za7r1677za7, "read_load", 9);
	      DEFINE_STRING(BGl_string1665z00zzread_loadz00,
		BgL_bgl_string1665za700za7za7r1678za7, "module ", 7);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzread_loadz00(long
		BgL_checksumz00_256, char *BgL_fromz00_257)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzread_loadz00))
				{
					BGl_requirezd2initializa7ationz75zzread_loadz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzread_loadz00();
					BGl_cnstzd2initzd2zzread_loadz00();
					BGl_importedzd2moduleszd2initz00zzread_loadz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzread_loadz00()
	{
		AN_OBJECT;
		{	/* Read/load.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "read_load");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"read_load");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"read_load");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "read_load");
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "read_load");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "read_load");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzread_loadz00()
	{
		AN_OBJECT;
		{	/* Read/load.scm 15 */
			{	/* Read/load.scm 15 */
				obj_t BgL_cportz00_248;

				BgL_cportz00_248 =
					bgl_open_input_string(BGl_string1665z00zzread_loadz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_249;

					BgL_iz00_249 = ((long) 0);
				BgL_loopz00_250:
					if ((BgL_iz00_249 == ((long) -1)))
						{	/* Read/load.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Read/load.scm 15 */
							{	/* Read/load.scm 15 */
								obj_t BgL_arg1667z00_252;

								{	/* Read/load.scm 15 */

									{	/* Read/load.scm 15 */
										obj_t BgL_locationz00_254;

										BgL_locationz00_254 = BBOOL(((bool_t) 0));
										{	/* Read/load.scm 15 */

											BgL_arg1667z00_252 =
												BGl_readz00zz__readerz00(BgL_cportz00_248,
												BgL_locationz00_254);
										}
									}
								}
								{	/* Read/load.scm 15 */
									int BgL_auxz00_276;

									BgL_auxz00_276 = (int) (BgL_iz00_249);
									CNST_TABLE_SET(BgL_auxz00_276, BgL_arg1667z00_252);
							}}
							{	/* Read/load.scm 15 */
								int BgL_auxz00_255;

								BgL_auxz00_255 = (int) ((BgL_iz00_249 - ((long) 1)));
								{
									long BgL_iz00_281;

									BgL_iz00_281 = (long) (BgL_auxz00_255);
									BgL_iz00_249 = BgL_iz00_281;
									goto BgL_loopz00_250;
								}
							}
						}
				}
			}
		}
	}



/* load-module */
	BGL_EXPORTED_DEF obj_t BGl_loadzd2modulezd2zzread_loadz00(obj_t
		BgL_modulez00_1, obj_t BgL_fnamesz00_2)
	{
		AN_OBJECT;
		{	/* Read/load.scm 26 */
			{	/* Read/load.scm 27 */
				obj_t BgL_list1609z00_148;

				{	/* Read/load.scm 27 */
					obj_t BgL_arg1611z00_150;

					{	/* Read/load.scm 27 */
						obj_t BgL_arg1613z00_151;

						{	/* Read/load.scm 27 */
							obj_t BgL_arg1615z00_153;

							BgL_arg1615z00_153 =
								MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
							BgL_arg1613z00_151 =
								MAKE_PAIR(BGl_string1656z00zzread_loadz00, BgL_arg1615z00_153);
						}
						BgL_arg1611z00_150 = MAKE_PAIR(BgL_modulez00_1, BgL_arg1613z00_151);
					}
					BgL_list1609z00_148 =
						MAKE_PAIR(BGl_string1657z00zzread_loadz00, BgL_arg1611z00_150);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1609z00_148);
			}
			{	/* Read/load.scm 28 */
				obj_t BgL_filez00_154;

				BgL_filez00_154 = CAR(BgL_fnamesz00_2);
				{	/* Read/load.scm 28 */
					obj_t BgL_fnamez00_155;

					BgL_fnamez00_155 =
						BGl_findzd2filezf2pathz20zz__osz00(BgL_filez00_154,
						BGl_za2loadzd2pathza2zd2zz__evalz00);
					{	/* Read/load.scm 29 */

						if (STRINGP(BgL_fnamez00_155))
							{	/* Read/load.scm 32 */
								obj_t BgL_portz00_157;

								{	/* Read/load.scm 32 */
									obj_t BgL_g2673z00_189;

									BgL_g2673z00_189 = BgL_fnamez00_155;
									{	/* Read/load.scm 32 */

										BgL_portz00_157 =
											BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
											(BgL_g2673z00_189, BTRUE);
									}
								}
								BGl_readerzd2resetz12zc0zz__readerz00();
								if (INPUT_PORTP(BgL_portz00_157))
									{	/* Read/load.scm 36 */
										obj_t BgL_val1604z00_159;

										BgL_val1604z00_159 =
											BGl_zc3exitza31623ze3z83zzread_loadz00(BgL_modulez00_1,
											BgL_portz00_157);
										bgl_close_input_port(BgL_portz00_157);
										if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
												(BgL_val1604z00_159)))
											{	/* Read/load.scm 52 */
												BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
													(BgL_val1604z00_159), CDR(BgL_val1604z00_159));
											}
										else
											{	/* Read/load.scm 52 */
												BgL_val1604z00_159;
											}
									}
								else
									{	/* Read/load.scm 34 */
										BGl_userzd2errorzd2zztools_errorz00
											(BGl_string1658z00zzread_loadz00,
											BGl_string1659z00zzread_loadz00, BgL_filez00_154, BNIL);
									}
							}
						else
							{	/* Read/load.scm 30 */
								BGl_userzd2errorzd2zztools_errorz00
									(BGl_string1658z00zzread_loadz00,
									BGl_string1660z00zzread_loadz00, BgL_filez00_154, BNIL);
							}
					}
				}
			}
			{
				obj_t BgL_l1607z00_193;

				{	/* Read/load.scm 53 */
					bool_t BgL_auxz00_308;

					BgL_l1607z00_193 = BgL_fnamesz00_2;
				BgL_zc3anonymousza31647ze3z83_194:
					if (PAIRP(BgL_l1607z00_193))
						{	/* Read/load.scm 53 */
							{	/* Read/load.scm 53 */
								obj_t BgL_arg1650z00_196;

								BgL_arg1650z00_196 = CAR(BgL_l1607z00_193);
								{	/* Read/load.scm 53 */
									obj_t BgL_envz00_198;

									BgL_envz00_198 = BGl_defaultzd2environmentzd2zz__evalz00();
									{	/* Read/load.scm 53 */

										BGl_loadqz00zz__evalz00(BgL_arg1650z00_196, BgL_envz00_198);
									}
								}
							}
							{
								obj_t BgL_l1607z00_314;

								BgL_l1607z00_314 = CDR(BgL_l1607z00_193);
								BgL_l1607z00_193 = BgL_l1607z00_314;
								goto BgL_zc3anonymousza31647ze3z83_194;
							}
						}
					else
						{	/* Read/load.scm 53 */
							BgL_auxz00_308 = ((bool_t) 1);
						}
					return BBOOL(BgL_auxz00_308);
				}
			}
		}
	}



/* <exit:1623> */
	obj_t BGl_zc3exitza31623ze3z83zzread_loadz00(obj_t BgL_modulez00_247,
		obj_t BgL_portz00_246)
	{
		AN_OBJECT;
		{	/* Read/load.scm 52 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1605z00_164;

			if (SET_EXIT(BgL_an_exit1605z00_164))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1605z00_164 = (void *) jmpbuf;
					{	/* Read/load.scm 52 */

						PUSH_EXIT(BgL_an_exit1605z00_164, ((long) 0));
						{	/* Read/load.scm 36 */
							obj_t BgL_val1606z00_165;

							{	/* Read/load.scm 36 */
								obj_t BgL_declz00_166;

								{	/* Read/load.scm 36 */

									{	/* Read/load.scm 36 */
										obj_t BgL_iportz00_186;

										BgL_iportz00_186 = BgL_portz00_246;
										{	/* Read/load.scm 36 */

											BgL_declz00_166 =
												BGl_readz00zz__readerz00(BgL_iportz00_186, BFALSE);
								}}}
								{	/* Read/load.scm 37 */
									bool_t BgL_testz00_321;

									if (PAIRP(BgL_declz00_166))
										{	/* Read/load.scm 37 */
											BgL_testz00_321 =
												(CAR(BgL_declz00_166) == CNST_TABLE_REF(((long) 0)));
										}
									else
										{	/* Read/load.scm 37 */
											BgL_testz00_321 = ((bool_t) 0);
										}
									if (BgL_testz00_321)
										{	/* Read/load.scm 37 */
											if ((CAR(CDR(BgL_declz00_166)) == BgL_modulez00_247))
												{	/* Read/load.scm 44 */
													BgL_val1606z00_165 = BFALSE;
												}
											else
												{	/* Read/load.scm 45 */
													obj_t BgL_arg1627z00_170;

													{	/* Read/load.scm 47 */
														obj_t BgL_arg1631z00_173;

														obj_t BgL_arg1633z00_175;

														{	/* Read/load.scm 49 */
															obj_t BgL_res1654z00_229;

															{	/* Read/load.scm 49 */
																obj_t BgL_arg2063z00_228;

																BgL_arg2063z00_228 =
																	SYMBOL_TO_STRING(BgL_modulez00_247);
																BgL_res1654z00_229 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_228);
															}
															BgL_arg1631z00_173 = BgL_res1654z00_229;
														}
														{	/* Read/load.scm 50 */
															obj_t BgL_arg1639z00_180;

															BgL_arg1639z00_180 = CAR(CDR(BgL_declz00_166));
															{	/* Read/load.scm 50 */
																obj_t BgL_res1655z00_236;

																{	/* Read/load.scm 50 */
																	obj_t BgL_symbolz00_234;

																	BgL_symbolz00_234 = BgL_arg1639z00_180;
																	{	/* Read/load.scm 50 */
																		obj_t BgL_arg2063z00_235;

																		BgL_arg2063z00_235 =
																			SYMBOL_TO_STRING(BgL_symbolz00_234);
																		BgL_res1655z00_236 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2063z00_235);
																	}
																}
																BgL_arg1633z00_175 = BgL_res1655z00_236;
															}
														}
														{	/* Read/load.scm 47 */
															obj_t BgL_list1634z00_176;

															{	/* Read/load.scm 47 */
																obj_t BgL_arg1635z00_177;

																{	/* Read/load.scm 47 */
																	obj_t BgL_arg1636z00_178;

																	{	/* Read/load.scm 47 */
																		obj_t BgL_arg1637z00_179;

																		BgL_arg1637z00_179 =
																			MAKE_PAIR(BgL_arg1633z00_175, BNIL);
																		BgL_arg1636z00_178 =
																			MAKE_PAIR(BGl_string1661z00zzread_loadz00,
																			BgL_arg1637z00_179);
																	}
																	BgL_arg1635z00_177 =
																		MAKE_PAIR(BgL_arg1631z00_173,
																		BgL_arg1636z00_178);
																}
																BgL_list1634z00_176 =
																	MAKE_PAIR(BGl_string1662z00zzread_loadz00,
																	BgL_arg1635z00_177);
															}
															BgL_arg1627z00_170 =
																BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																(BgL_list1634z00_176);
														}
													}
													BgL_val1606z00_165 =
														BGl_userzd2errorzd2zztools_errorz00
														(BGl_string1658z00zzread_loadz00,
														BgL_arg1627z00_170, BgL_declz00_166, BNIL);
												}
										}
									else
										{	/* Read/load.scm 37 */
											BgL_val1606z00_165 =
												BGl_userzd2errorzd2zztools_errorz00
												(BGl_string1658z00zzread_loadz00,
												BGl_string1663z00zzread_loadz00, BgL_declz00_166, BNIL);
										}
								}
							}
							POP_EXIT();
							return BgL_val1606z00_165;
						}
					}
				}
		}
	}



/* _load-module */
	obj_t BGl__loadzd2modulezd2zzread_loadz00(obj_t BgL_envz00_243,
		obj_t BgL_modulez00_244, obj_t BgL_fnamesz00_245)
	{
		AN_OBJECT;
		{	/* Read/load.scm 26 */
			return
				BGl_loadzd2modulezd2zzread_loadz00(BgL_modulez00_244,
				BgL_fnamesz00_245);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzread_loadz00()
	{
		AN_OBJECT;
		{	/* Read/load.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzread_loadz00()
	{
		AN_OBJECT;
		{	/* Read/load.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzread_loadz00()
	{
		AN_OBJECT;
		{	/* Read/load.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string1664z00zzread_loadz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string1664z00zzread_loadz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string1664z00zzread_loadz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string1664z00zzread_loadz00));
			return
				BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string1664z00zzread_loadz00));
		}
	}

#ifdef __cplusplus
}
#endif
