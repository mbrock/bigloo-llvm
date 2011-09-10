/*===========================================================================*/
/*   (Read/include.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Read/include.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_zc3exitza31560ze3z83zzread_includez00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzread_includez00 = BUNSPEC;
	static obj_t BGl_za2includezd2readza2zd2zzread_includez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzread_includez00();
	extern obj_t BGl_za2includezd2multipleza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_cnstzd2initzd2zzread_includez00();
	static obj_t BGl__readzd2includezd2zzread_includez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzread_includez00();
	BGL_IMPORT obj_t BGl_readerzd2resetz12zc0zz__readerz00();
	BGL_EXPORTED_DECL obj_t BGl_readzd2includezd2zzread_includez00(obj_t);
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzread_includez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_enginez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzread_includez00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_EXPORTED_DECL obj_t BGl_readzd2directiveszd2zzread_includez00(obj_t);
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	static obj_t BGl_zc3exitza31532ze3z83zzread_includez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_za2loadzd2pathza2zd2zz__evalz00;
	static obj_t BGl__readzd2directiveszd2zzread_includez00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzread_includez00();
	static obj_t BGl_methodzd2initzd2zzread_includez00();
	static obj_t __cnst[2];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_readzd2directiveszd2envz00zzread_includez00,
		BgL_bgl__readza7d2directiv1578za7,
		BGl__readzd2directiveszd2zzread_includez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_readzd2includezd2envz00zzread_includez00,
		BgL_bgl__readza7d2includeza71579z00,
		BGl__readzd2includezd2zzread_includez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1568z00zzread_includez00,
		BgL_bgl_string1568za700za7za7r1580za7, "]", 1);
	      DEFINE_STRING(BGl_string1570z00zzread_includez00,
		BgL_bgl_string1570za700za7za7r1581za7, "read-include", 12);
	      DEFINE_STRING(BGl_string1569z00zzread_includez00,
		BgL_bgl_string1569za700za7za7r1582za7, "      [reading include file ", 28);
	      DEFINE_STRING(BGl_string1571z00zzread_includez00,
		BgL_bgl_string1571za700za7za7r1583za7, "Can't open such file", 20);
	      DEFINE_STRING(BGl_string1572z00zzread_includez00,
		BgL_bgl_string1572za700za7za7r1584za7, "Can't find include file", 23);
	      DEFINE_STRING(BGl_string1573z00zzread_includez00,
		BgL_bgl_string1573za700za7za7r1585za7,
		"      [reading directives include file ", 39);
	      DEFINE_STRING(BGl_string1574z00zzread_includez00,
		BgL_bgl_string1574za700za7za7r1586za7, "read_include", 12);
	      DEFINE_STRING(BGl_string1575z00zzread_includez00,
		BgL_bgl_string1575za700za7za7r1587za7, "read-directives directives ", 27);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzread_includez00(long
		BgL_checksumz00_205, char *BgL_fromz00_206)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzread_includez00))
				{
					BGl_requirezd2initializa7ationz75zzread_includez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzread_includez00();
					BGl_cnstzd2initzd2zzread_includez00();
					BGl_importedzd2moduleszd2initz00zzread_includez00();
					BGl_toplevelzd2initzd2zzread_includez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzread_includez00()
	{
		AN_OBJECT;
		{	/* Read/include.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "read_include");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"read_include");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"read_include");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "read_include");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "read_include");
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "read_include");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzread_includez00()
	{
		AN_OBJECT;
		{	/* Read/include.scm 15 */
			{	/* Read/include.scm 15 */
				obj_t BgL_cportz00_197;

				BgL_cportz00_197 =
					bgl_open_input_string(BGl_string1575z00zzread_includez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_198;

					BgL_iz00_198 = ((long) 1);
				BgL_loopz00_199:
					if ((BgL_iz00_198 == ((long) -1)))
						{	/* Read/include.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Read/include.scm 15 */
							{	/* Read/include.scm 15 */
								obj_t BgL_arg1577z00_201;

								{	/* Read/include.scm 15 */

									{	/* Read/include.scm 15 */
										obj_t BgL_locationz00_203;

										BgL_locationz00_203 = BBOOL(((bool_t) 0));
										{	/* Read/include.scm 15 */

											BgL_arg1577z00_201 =
												BGl_readz00zz__readerz00(BgL_cportz00_197,
												BgL_locationz00_203);
										}
									}
								}
								{	/* Read/include.scm 15 */
									int BgL_auxz00_226;

									BgL_auxz00_226 = (int) (BgL_iz00_198);
									CNST_TABLE_SET(BgL_auxz00_226, BgL_arg1577z00_201);
							}}
							{	/* Read/include.scm 15 */
								int BgL_auxz00_204;

								BgL_auxz00_204 = (int) ((BgL_iz00_198 - ((long) 1)));
								{
									long BgL_iz00_231;

									BgL_iz00_231 = (long) (BgL_auxz00_204);
									BgL_iz00_198 = BgL_iz00_231;
									goto BgL_loopz00_199;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzread_includez00()
	{
		AN_OBJECT;
		{	/* Read/include.scm 15 */
			return (BGl_za2includezd2readza2zd2zzread_includez00 = BNIL, BUNSPEC);
		}
	}



/* read-include */
	BGL_EXPORTED_DEF obj_t BGl_readzd2includezd2zzread_includez00(obj_t
		BgL_filez00_1)
	{
		AN_OBJECT;
		{	/* Read/include.scm 27 */
			{	/* Read/include.scm 28 */
				obj_t BgL_cellz00_91;

				BgL_cellz00_91 =
					BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_filez00_1,
					BGl_za2includezd2readza2zd2zzread_includez00);
				if (PAIRP(BgL_cellz00_91))
					{	/* Read/include.scm 29 */
						if (CBOOL(BGl_za2includezd2multipleza2zd2zzengine_paramz00))
							{	/* Read/include.scm 61 */
								return CDR(BgL_cellz00_91);
							}
						else
							{	/* Read/include.scm 61 */
								return MAKE_PAIR(BNIL, BNIL);
							}
					}
				else
					{	/* Read/include.scm 31 */
						obj_t BgL_fnamez00_93;

						BgL_fnamez00_93 =
							BGl_findzd2filezf2pathz20zz__osz00(BgL_filez00_1,
							BGl_za2loadzd2pathza2zd2zz__evalz00);
						{	/* Read/include.scm 32 */
							obj_t BgL_arg1521z00_96;

							if (CBOOL(BgL_fnamez00_93))
								{	/* Read/include.scm 32 */
									BgL_arg1521z00_96 = BgL_fnamez00_93;
								}
							else
								{	/* Read/include.scm 32 */
									BgL_arg1521z00_96 = BgL_filez00_1;
								}
							{	/* Read/include.scm 32 */
								obj_t BgL_list1523z00_98;

								{	/* Read/include.scm 32 */
									obj_t BgL_arg1524z00_99;

									{	/* Read/include.scm 32 */
										obj_t BgL_arg1525z00_100;

										{	/* Read/include.scm 32 */
											obj_t BgL_arg1526z00_101;

											BgL_arg1526z00_101 =
												MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
											BgL_arg1525z00_100 =
												MAKE_PAIR(BGl_string1568z00zzread_includez00,
												BgL_arg1526z00_101);
										}
										BgL_arg1524z00_99 =
											MAKE_PAIR(BgL_arg1521z00_96, BgL_arg1525z00_100);
									}
									BgL_list1523z00_98 =
										MAKE_PAIR(BGl_string1569z00zzread_includez00,
										BgL_arg1524z00_99);
								}
								BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
									BgL_list1523z00_98);
						}}
						BGl_readerzd2resetz12zc0zz__readerz00();
						if (STRINGP(BgL_fnamez00_93))
							{	/* Read/include.scm 37 */
								obj_t BgL_portz00_104;

								{	/* Read/include.scm 37 */
									obj_t BgL_g2673z00_133;

									BgL_g2673z00_133 = BgL_fnamez00_93;
									{	/* Read/include.scm 37 */

										BgL_portz00_104 =
											BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
											(BgL_g2673z00_133, BTRUE);
									}
								}
								if (INPUT_PORTP(BgL_portz00_104))
									{	/* Read/include.scm 42 */
										obj_t BgL_val1509z00_106;

										BgL_val1509z00_106 =
											BGl_zc3exitza31532ze3z83zzread_includez00(BgL_filez00_1,
											BgL_portz00_104);
										bgl_close_input_port(BgL_portz00_104);
										if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
												(BgL_val1509z00_106)))
											{	/* Read/include.scm 60 */
												return
													BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
													(BgL_val1509z00_106), CDR(BgL_val1509z00_106));
											}
										else
											{	/* Read/include.scm 60 */
												return BgL_val1509z00_106;
											}
									}
								else
									{	/* Read/include.scm 38 */
										return
											BGl_userzd2errorzd2zztools_errorz00
											(BGl_string1570z00zzread_includez00,
											BGl_string1571z00zzread_includez00, BgL_filez00_1, BNIL);
									}
							}
						else
							{	/* Read/include.scm 35 */
								return
									BGl_userzd2errorzd2zztools_errorz00
									(BGl_string1570z00zzread_includez00,
									BGl_string1572z00zzread_includez00, BgL_filez00_1, BNIL);
							}
					}
			}
		}
	}



/* <exit:1532> */
	obj_t BGl_zc3exitza31532ze3z83zzread_includez00(obj_t BgL_filez00_196,
		obj_t BgL_portz00_195)
	{
		AN_OBJECT;
		{	/* Read/include.scm 60 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1510z00_111;

			if (SET_EXIT(BgL_an_exit1510z00_111))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1510z00_111 = (void *) jmpbuf;
					{	/* Read/include.scm 60 */

						PUSH_EXIT(BgL_an_exit1510z00_111, ((long) 0));
						{	/* Read/include.scm 43 */
							obj_t BgL_val1511z00_112;

							{	/* Read/include.scm 43 */
								obj_t BgL_firstz00_113;

								BgL_firstz00_113 =
									BGl_readz00zz__readerz00(BgL_portz00_195, BTRUE);
								{	/* Read/include.scm 43 */
									obj_t BgL_direcz00_114;

									{	/* Read/include.scm 44 */
										bool_t BgL_testz00_270;

										if (PAIRP(BgL_firstz00_113))
											{	/* Read/include.scm 44 */
												BgL_testz00_270 =
													(CAR(BgL_firstz00_113) == CNST_TABLE_REF(((long) 0)));
											}
										else
											{	/* Read/include.scm 44 */
												BgL_testz00_270 = ((bool_t) 0);
											}
										if (BgL_testz00_270)
											{	/* Read/include.scm 44 */
												BgL_direcz00_114 = BgL_firstz00_113;
											}
										else
											{	/* Read/include.scm 44 */
												BgL_direcz00_114 = BNIL;
											}
									}
									{	/* Read/include.scm 44 */

										{	/* Read/include.scm 49 */
											obj_t BgL_g1512z00_115;

											if (PAIRP(BgL_direcz00_114))
												{	/* Read/include.scm 49 */
													BgL_g1512z00_115 =
														BGl_readz00zz__readerz00(BgL_portz00_195, BTRUE);
												}
											else
												{	/* Read/include.scm 49 */
													BgL_g1512z00_115 = BgL_firstz00_113;
												}
											{
												obj_t BgL_auxz00_118;

												obj_t BgL_sexpz00_119;

												BgL_auxz00_118 = BgL_g1512z00_115;
												BgL_sexpz00_119 = BNIL;
											BgL_zc3anonymousza31533ze3z83_120:
												if (EOF_OBJECTP(BgL_auxz00_118))
													{	/* Read/include.scm 54 */
														obj_t BgL_rz00_122;

														BgL_rz00_122 =
															MAKE_PAIR(BgL_direcz00_114,
															bgl_reverse_bang(BgL_sexpz00_119));
														{	/* Read/include.scm 56 */
															obj_t BgL_arg1567z00_177;

															BgL_arg1567z00_177 =
																MAKE_PAIR(BgL_filez00_196, BgL_rz00_122);
															BGl_za2includezd2readza2zd2zzread_includez00 =
																MAKE_PAIR(BgL_arg1567z00_177,
																BGl_za2includezd2readza2zd2zzread_includez00);
														}
														BgL_val1511z00_112 = BgL_rz00_122;
													}
												else
													{	/* Read/include.scm 58 */
														obj_t BgL_arg1536z00_124;

														obj_t BgL_arg1537z00_125;

														BgL_arg1536z00_124 =
															BGl_readz00zz__readerz00(BgL_portz00_195, BTRUE);
														BgL_arg1537z00_125 =
															MAKE_PAIR(BgL_auxz00_118, BgL_sexpz00_119);
														{
															obj_t BgL_sexpz00_288;

															obj_t BgL_auxz00_287;

															BgL_auxz00_287 = BgL_arg1536z00_124;
															BgL_sexpz00_288 = BgL_arg1537z00_125;
															BgL_sexpz00_119 = BgL_sexpz00_288;
															BgL_auxz00_118 = BgL_auxz00_287;
															goto BgL_zc3anonymousza31533ze3z83_120;
														}
													}
											}
										}
									}
								}
							}
							POP_EXIT();
							return BgL_val1511z00_112;
						}
					}
				}
		}
	}



/* _read-include */
	obj_t BGl__readzd2includezd2zzread_includez00(obj_t BgL_envz00_190,
		obj_t BgL_filez00_191)
	{
		AN_OBJECT;
		{	/* Read/include.scm 27 */
			return BGl_readzd2includezd2zzread_includez00(BgL_filez00_191);
		}
	}



/* read-directives */
	BGL_EXPORTED_DEF obj_t BGl_readzd2directiveszd2zzread_includez00(obj_t
		BgL_filez00_2)
	{
		AN_OBJECT;
		{	/* Read/include.scm 68 */
			{	/* Read/include.scm 69 */
				obj_t BgL_fnamez00_136;

				BgL_fnamez00_136 =
					BGl_findzd2filezf2pathz20zz__osz00(BgL_filez00_2,
					BGl_za2loadzd2pathza2zd2zz__evalz00);
				{	/* Read/include.scm 70 */
					obj_t BgL_arg1547z00_139;

					if (CBOOL(BgL_fnamez00_136))
						{	/* Read/include.scm 70 */
							BgL_arg1547z00_139 = BgL_fnamez00_136;
						}
					else
						{	/* Read/include.scm 70 */
							BgL_arg1547z00_139 = BgL_filez00_2;
						}
					{	/* Read/include.scm 70 */
						obj_t BgL_list1549z00_141;

						{	/* Read/include.scm 70 */
							obj_t BgL_arg1551z00_142;

							{	/* Read/include.scm 70 */
								obj_t BgL_arg1552z00_143;

								{	/* Read/include.scm 70 */
									obj_t BgL_arg1553z00_144;

									BgL_arg1553z00_144 =
										MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
									BgL_arg1552z00_143 =
										MAKE_PAIR(BGl_string1568z00zzread_includez00,
										BgL_arg1553z00_144);
								}
								BgL_arg1551z00_142 =
									MAKE_PAIR(BgL_arg1547z00_139, BgL_arg1552z00_143);
							}
							BgL_list1549z00_141 =
								MAKE_PAIR(BGl_string1573z00zzread_includez00,
								BgL_arg1551z00_142);
						}
						BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
							BgL_list1549z00_141);
				}}
				BGl_readerzd2resetz12zc0zz__readerz00();
				if (STRINGP(BgL_fnamez00_136))
					{	/* Read/include.scm 75 */
						obj_t BgL_portz00_147;

						{	/* Read/include.scm 75 */
							obj_t BgL_g2673z00_162;

							BgL_g2673z00_162 = BgL_fnamez00_136;
							{	/* Read/include.scm 75 */

								BgL_portz00_147 =
									BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
									(BgL_g2673z00_162, BTRUE);
							}
						}
						if (INPUT_PORTP(BgL_portz00_147))
							{	/* Read/include.scm 78 */
								obj_t BgL_val1515z00_149;

								BgL_val1515z00_149 =
									BGl_zc3exitza31560ze3z83zzread_includez00(BgL_portz00_147);
								bgl_close_input_port(BgL_portz00_147);
								if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
										(BgL_val1515z00_149)))
									{	/* Read/include.scm 83 */
										return
											BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
											(BgL_val1515z00_149), CDR(BgL_val1515z00_149));
									}
								else
									{	/* Read/include.scm 83 */
										return BgL_val1515z00_149;
									}
							}
						else
							{	/* Read/include.scm 76 */
								return
									BGl_userzd2errorzd2zztools_errorz00(CNST_TABLE_REF(((long)
											1)), BGl_string1571z00zzread_includez00, BgL_filez00_2,
									BNIL);
					}}
				else
					{	/* Read/include.scm 73 */
						return
							BGl_userzd2errorzd2zztools_errorz00(CNST_TABLE_REF(((long) 1)),
							BGl_string1572z00zzread_includez00, BgL_filez00_2, BNIL);
		}}}
	}



/* <exit:1560> */
	obj_t BGl_zc3exitza31560ze3z83zzread_includez00(obj_t BgL_portz00_194)
	{
		AN_OBJECT;
		{	/* Read/include.scm 83 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1516z00_154;

			if (SET_EXIT(BgL_an_exit1516z00_154))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1516z00_154 = (void *) jmpbuf;
					{	/* Read/include.scm 83 */

						PUSH_EXIT(BgL_an_exit1516z00_154, ((long) 0));
						{	/* Read/include.scm 79 */
							obj_t BgL_val1517z00_155;

							{	/* Read/include.scm 79 */
								obj_t BgL_firstz00_156;

								BgL_firstz00_156 =
									BGl_readz00zz__readerz00(BgL_portz00_194, BTRUE);
								{	/* Read/include.scm 80 */
									bool_t BgL_testz00_323;

									if (PAIRP(BgL_firstz00_156))
										{	/* Read/include.scm 80 */
											BgL_testz00_323 =
												(CAR(BgL_firstz00_156) == CNST_TABLE_REF(((long) 0)));
										}
									else
										{	/* Read/include.scm 80 */
											BgL_testz00_323 = ((bool_t) 0);
										}
									if (BgL_testz00_323)
										{	/* Read/include.scm 80 */
											BgL_val1517z00_155 = CDR(BgL_firstz00_156);
										}
									else
										{	/* Read/include.scm 80 */
											BgL_val1517z00_155 = BNIL;
										}
								}
							}
							POP_EXIT();
							return BgL_val1517z00_155;
						}
					}
				}
		}
	}



/* _read-directives */
	obj_t BGl__readzd2directiveszd2zzread_includez00(obj_t BgL_envz00_192,
		obj_t BgL_filez00_193)
	{
		AN_OBJECT;
		{	/* Read/include.scm 68 */
			return BGl_readzd2directiveszd2zzread_includez00(BgL_filez00_193);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzread_includez00()
	{
		AN_OBJECT;
		{	/* Read/include.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzread_includez00()
	{
		AN_OBJECT;
		{	/* Read/include.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzread_includez00()
	{
		AN_OBJECT;
		{	/* Read/include.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1574z00zzread_includez00));
			BGl_modulezd2initializa7ationz75zzengine_enginez00(((long) 528201616),
				BSTRING_TO_STRING(BGl_string1574z00zzread_includez00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string1574z00zzread_includez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string1574z00zzread_includez00));
			return
				BGl_modulezd2initializa7ationz75zzinit_mainz00(((long) 230845835),
				BSTRING_TO_STRING(BGl_string1574z00zzread_includez00));
		}
	}

#ifdef __cplusplus
}
#endif
