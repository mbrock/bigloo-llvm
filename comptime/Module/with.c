/*===========================================================================*/
/*   (Module/with.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/with.scm)*/
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


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_withzd2parserzd2zzmodule_withz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_withz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzmodule_withz00();
	extern obj_t BGl_withzd2libraryzd2modulez12z12zzmodule_libraryz00(obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static obj_t BGl__withzd2producerzd2zzmodule_withz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl__earlyzd2withzd2clausesz00zzmodule_withz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzmodule_withz00();
	extern obj_t BGl_za2modulezd2clauseza2zd2zzmodule_modulez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_withz00();
	extern obj_t BGl_za2withzd2filesza2zd2zzengine_paramz00;
	extern obj_t BGl_za2earlyzd2withzd2modulesza2z00zzengine_paramz00;
	static obj_t BGl_withzd2producerzd2zzmodule_withz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_earlyzd2withzd2clausesz00zzmodule_withz00();
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	static obj_t BGl__makezd2withzd2compilerz00zzmodule_withz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzmodule_withz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzheap_restorez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_accessz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_libraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_impusez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__modulez00(long, char *);
	extern obj_t BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_bigloozd2modulezd2resolverz00zz__modulez00();
	BGL_EXPORTED_DECL obj_t BGl_makezd2withzd2compilerz00zzmodule_withz00();
	extern obj_t BGl_importzd2withzd2modulez12z12zzmodule_impusez00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_modulezd2addzd2accessz12z12zz__modulez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31535ze3z83zzmodule_withz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza31536ze3z83zzmodule_withz00(obj_t);
	extern obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	extern obj_t BGl_heapzd2modulezd2listz00zzheap_restorez00(obj_t);
	extern BgL_ccompz00_bglt BGl_makezd2ccompzd2zzmodule_modulez00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_withz00();
	static obj_t BGl_methodzd2initzd2zzmodule_withz00();
	static obj_t __cnst[2];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_earlyzd2withzd2clauseszd2envzd2zzmodule_withz00,
		BgL_bgl__earlyza7d2withza7d21598z00,
		BGl__earlyzd2withzd2clausesz00zzmodule_withz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1588z00zzmodule_withz00,
		BgL_bgl_za7c3anonymousza7a311599z00,
		BGl_zc3anonymousza31536ze3z83zzmodule_withz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1589z00zzmodule_withz00,
		BgL_bgl_za7c3anonymousza7a311600z00,
		BGl_zc3anonymousza31535ze3z83zzmodule_withz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1590z00zzmodule_withz00,
		BgL_bgl_string1590za700za7za7m1601za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string1591z00zzmodule_withz00,
		BgL_bgl_string1591za700za7za7m1602za7, "Illegal `with' clause", 21);
	      DEFINE_STRING(BGl_string1592z00zzmodule_withz00,
		BgL_bgl_string1592za700za7za7m1603za7, ".", 1);
	      DEFINE_STRING(BGl_string1593z00zzmodule_withz00,
		BgL_bgl_string1593za700za7za7m1604za7, "can't access module", 19);
	      DEFINE_STRING(BGl_string1594z00zzmodule_withz00,
		BgL_bgl_string1594za700za7za7m1605za7, "module_with", 11);
	      DEFINE_STRING(BGl_string1595z00zzmodule_withz00,
		BgL_bgl_string1595za700za7za7m1606za7, "void with ", 10);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_withzd2producerzd2envz00zzmodule_withz00,
		BgL_bgl__withza7d2producer1607za7, BGl__withzd2producerzd2zzmodule_withz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2withzd2compilerzd2envzd2zzmodule_withz00,
		BgL_bgl__makeza7d2withza7d2c1608z00,
		BGl__makezd2withzd2compilerz00zzmodule_withz00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmodule_withz00(long
		BgL_checksumz00_235, char *BgL_fromz00_236)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_withz00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_withz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzmodule_withz00();
					BGl_cnstzd2initzd2zzmodule_withz00();
					BGl_importedzd2moduleszd2initz00zzmodule_withz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_withz00()
	{
		AN_OBJECT;
		{	/* Module/with.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_with");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "module_with");
			BGl_modulezd2initializa7ationz75zz__modulez00(((long) 0), "module_with");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "module_with");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_withz00()
	{
		AN_OBJECT;
		{	/* Module/with.scm 15 */
			{	/* Module/with.scm 15 */
				obj_t BgL_cportz00_225;

				BgL_cportz00_225 =
					bgl_open_input_string(BGl_string1595z00zzmodule_withz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_226;

					BgL_iz00_226 = ((long) 1);
				BgL_loopz00_227:
					if ((BgL_iz00_226 == ((long) -1)))
						{	/* Module/with.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/with.scm 15 */
							{	/* Module/with.scm 15 */
								obj_t BgL_arg1597z00_229;

								{	/* Module/with.scm 15 */

									{	/* Module/with.scm 15 */
										obj_t BgL_locationz00_231;

										BgL_locationz00_231 = BBOOL(((bool_t) 0));
										{	/* Module/with.scm 15 */

											BgL_arg1597z00_229 =
												BGl_readz00zz__readerz00(BgL_cportz00_225,
												BgL_locationz00_231);
										}
									}
								}
								{	/* Module/with.scm 15 */
									int BgL_auxz00_253;

									BgL_auxz00_253 = (int) (BgL_iz00_226);
									CNST_TABLE_SET(BgL_auxz00_253, BgL_arg1597z00_229);
							}}
							{	/* Module/with.scm 15 */
								int BgL_auxz00_232;

								BgL_auxz00_232 = (int) ((BgL_iz00_226 - ((long) 1)));
								{
									long BgL_iz00_258;

									BgL_iz00_258 = (long) (BgL_auxz00_232);
									BgL_iz00_226 = BgL_iz00_258;
									goto BgL_loopz00_227;
								}
							}
						}
				}
			}
		}
	}



/* make-with-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2withzd2compilerz00zzmodule_withz00()
	{
		AN_OBJECT;
		{	/* Module/with.scm 30 */
			{	/* Module/with.scm 31 */
				obj_t BgL_arg1532z00_100;

				BgL_arg1532z00_100 = CNST_TABLE_REF(((long) 0));
				return
					(obj_t) (BGl_makezd2ccompzd2zzmodule_modulez00(BgL_arg1532z00_100,
						BGl_withzd2producerzd2envz00zzmodule_withz00,
						BGl_proc1589z00zzmodule_withz00, BGl_proc1588z00zzmodule_withz00));
			}
		}
	}



/* _make-with-compiler */
	obj_t BGl__makezd2withzd2compilerz00zzmodule_withz00(obj_t BgL_envz00_217)
	{
		AN_OBJECT;
		{	/* Module/with.scm 30 */
			return BGl_makezd2withzd2compilerz00zzmodule_withz00();
		}
	}



/* <anonymous:1536> */
	obj_t BGl_zc3anonymousza31536ze3z83zzmodule_withz00(obj_t BgL_envz00_218)
	{
		AN_OBJECT;
		{	/* Module/module.scm 54 */
			{

				return CNST_TABLE_REF(((long) 1));
		}}
	}



/* <anonymous:1535> */
	obj_t BGl_zc3anonymousza31535ze3z83zzmodule_withz00(obj_t BgL_envz00_219,
		obj_t BgL_mz00_220, obj_t BgL_cz00_221)
	{
		AN_OBJECT;
		{	/* Module/module.scm 52 */
			return BNIL;
		}
	}



/* with-producer */
	obj_t BGl_withzd2producerzd2zzmodule_withz00(obj_t BgL_clausez00_1)
	{
		AN_OBJECT;
		{	/* Module/with.scm 36 */
			{
				obj_t BgL_protosz00_109;

				if (PAIRP(BgL_clausez00_1))
					{	/* Module/with.scm 37 */
						obj_t BgL_arg1538z00_114;

						BgL_arg1538z00_114 = CDR(BgL_clausez00_1);
						{	/* Module/with.scm 37 */
							bool_t BgL_auxz00_268;

							BgL_protosz00_109 = BgL_arg1538z00_114;
							{
								obj_t BgL_l1530z00_116;

								BgL_l1530z00_116 = BgL_protosz00_109;
							BgL_zc3anonymousza31539ze3z83_117:
								if (PAIRP(BgL_l1530z00_116))
									{	/* Module/with.scm 39 */
										BGl_withzd2parserzd2zzmodule_withz00(CAR(BgL_l1530z00_116),
											BgL_clausez00_1);
										{
											obj_t BgL_l1530z00_273;

											BgL_l1530z00_273 = CDR(BgL_l1530z00_116);
											BgL_l1530z00_116 = BgL_l1530z00_273;
											goto BgL_zc3anonymousza31539ze3z83_117;
										}
									}
								else
									{	/* Module/with.scm 39 */
										BgL_auxz00_268 = ((bool_t) 1);
									}
							}
							return BBOOL(BgL_auxz00_268);
						}
					}
				else
					{	/* Module/with.scm 37 */
						{	/* Module/with.scm 42 */
							obj_t BgL_arg1542z00_122;

							BgL_arg1542z00_122 =
								BGl_findzd2locationzf2locz20zztools_locationz00(BgL_clausez00_1,
								BGl_findzd2locationzd2zztools_locationz00
								(BGl_za2modulezd2clauseza2zd2zzmodule_modulez00));
							{	/* Module/with.scm 41 */
								obj_t BgL_list1546z00_126;

								BgL_list1546z00_126 = MAKE_PAIR(BNIL, BNIL);
								return
									BGl_userzd2errorzf2locationz20zztools_errorz00
									(BgL_arg1542z00_122, BGl_string1590z00zzmodule_withz00,
									BGl_string1591z00zzmodule_withz00, BgL_clausez00_1,
									BgL_list1546z00_126);
							}
						}
					}
			}
		}
	}



/* _with-producer */
	obj_t BGl__withzd2producerzd2zzmodule_withz00(obj_t BgL_envz00_222,
		obj_t BgL_clausez00_223)
	{
		AN_OBJECT;
		{	/* Module/with.scm 36 */
			return BGl_withzd2producerzd2zzmodule_withz00(BgL_clausez00_223);
		}
	}



/* with-parser */
	obj_t BGl_withzd2parserzd2zzmodule_withz00(obj_t BgL_protoz00_2,
		obj_t BgL_clausez00_3)
	{
		AN_OBJECT;
		{	/* Module/with.scm 51 */
			{	/* Module/with.scm 52 */
				obj_t BgL_locz00_128;

				BgL_locz00_128 =
					BGl_findzd2locationzf2locz20zztools_locationz00(BgL_protoz00_2,
					BGl_findzd2locationzf2locz20zztools_locationz00(BgL_clausez00_3,
						BGl_findzd2locationzd2zztools_locationz00
						(BGl_za2modulezd2clauseza2zd2zzmodule_modulez00)));
				{
					obj_t BgL_namez00_129;

					obj_t BgL_filez00_130;

					obj_t BgL_restz00_131;

					if (PAIRP(BgL_protoz00_2))
						{	/* Module/with.scm 55 */
							obj_t BgL_carzd21406zd2_136;

							obj_t BgL_cdrzd21407zd2_137;

							BgL_carzd21406zd2_136 = CAR(BgL_protoz00_2);
							BgL_cdrzd21407zd2_137 = CDR(BgL_protoz00_2);
							if (SYMBOLP(BgL_carzd21406zd2_136))
								{	/* Module/with.scm 55 */
									if (PAIRP(BgL_cdrzd21407zd2_137))
										{	/* Module/with.scm 55 */
											obj_t BgL_carzd21412zd2_140;

											BgL_carzd21412zd2_140 = CAR(BgL_cdrzd21407zd2_137);
											if (STRINGP(BgL_carzd21412zd2_140))
												{	/* Module/with.scm 55 */
													BgL_namez00_129 = BgL_carzd21406zd2_136;
													BgL_filez00_130 = BgL_carzd21412zd2_140;
													BgL_restz00_131 = CDR(BgL_cdrzd21407zd2_137);
													{	/* Module/with.scm 57 */
														obj_t BgL_g1529z00_143;

														{	/* Module/with.scm 58 */
															obj_t BgL_list1565z00_158;

															BgL_list1565z00_158 =
																MAKE_PAIR(BgL_filez00_130, BNIL);
															BgL_g1529z00_143 = BgL_list1565z00_158;
														}
														{
															obj_t BgL_restz00_145;

															obj_t BgL_fnamesz00_146;

															BgL_restz00_145 = BgL_restz00_131;
															BgL_fnamesz00_146 = BgL_g1529z00_143;
														BgL_zc3anonymousza31553ze3z83_147:
															if (NULLP(BgL_restz00_145))
																{	/* Module/with.scm 60 */
																	BGl_modulezd2addzd2accessz12z12zz__modulez00
																		(BgL_namez00_129,
																		bgl_reverse_bang(BgL_fnamesz00_146),
																		BGl_string1592z00zzmodule_withz00);
																}
															else
																{	/* Module/with.scm 62 */
																	bool_t BgL_testz00_300;

																	{	/* Module/with.scm 62 */
																		obj_t BgL_auxz00_301;

																		BgL_auxz00_301 = CAR(BgL_restz00_145);
																		BgL_testz00_300 = STRINGP(BgL_auxz00_301);
																	}
																	if (BgL_testz00_300)
																		{	/* Module/with.scm 63 */
																			obj_t BgL_arg1559z00_152;

																			obj_t BgL_arg1560z00_153;

																			BgL_arg1559z00_152 = CDR(BgL_restz00_145);
																			BgL_arg1560z00_153 =
																				MAKE_PAIR(CAR(BgL_restz00_145),
																				BgL_fnamesz00_146);
																			{
																				obj_t BgL_fnamesz00_308;

																				obj_t BgL_restz00_307;

																				BgL_restz00_307 = BgL_arg1559z00_152;
																				BgL_fnamesz00_308 = BgL_arg1560z00_153;
																				BgL_fnamesz00_146 = BgL_fnamesz00_308;
																				BgL_restz00_145 = BgL_restz00_307;
																				goto BgL_zc3anonymousza31553ze3z83_147;
																			}
																		}
																	else
																		{	/* Module/with.scm 66 */
																			obj_t BgL_list1563z00_155;

																			BgL_list1563z00_155 =
																				MAKE_PAIR(BNIL, BNIL);
																			BGl_userzd2errorzf2locationz20zztools_errorz00
																				(BgL_locz00_128,
																				BGl_string1590z00zzmodule_withz00,
																				BGl_string1591z00zzmodule_withz00,
																				BgL_clausez00_3, BgL_list1563z00_155);
																		}
																}
														}
													}
													{	/* Module/with.scm 71 */
														obj_t BgL_arg1566z00_159;

														{	/* Module/with.scm 71 */
															obj_t BgL_arg1582z00_205;

															BgL_arg1582z00_205 =
																BGl_prefixz00zz__osz00(BgL_filez00_130);
															BgL_arg1566z00_159 =
																string_append_3(BgL_arg1582z00_205,
																BGl_string1592z00zzmodule_withz00,
																BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00);
														}
														BGl_za2withzd2filesza2zd2zzengine_paramz00 =
															MAKE_PAIR(BgL_arg1566z00_159,
															BGl_za2withzd2filesza2zd2zzengine_paramz00);
													}
													return
														BGl_importzd2withzd2modulez12z12zzmodule_impusez00
														(BgL_namez00_129, BgL_protoz00_2);
												}
											else
												{	/* Module/with.scm 55 */
												BgL_tagzd21398zd2_133:
													if (SYMBOLP(BgL_protoz00_2))
														{	/* Module/with.scm 80 */
															obj_t BgL_bz00_161;

															{	/* Module/with.scm 80 */
																obj_t BgL_fun1577z00_169;

																BgL_fun1577z00_169 =
																	BGl_bigloozd2modulezd2resolverz00zz__modulez00
																	();
																BgL_bz00_161 =
																	PROCEDURE_ENTRY(BgL_fun1577z00_169)
																	(BgL_fun1577z00_169, BgL_protoz00_2,
																	BGl_string1592z00zzmodule_withz00, BEOA);
															}
															if (PAIRP(BgL_bz00_161))
																{	/* Module/with.scm 82 */
																	{	/* Module/with.scm 93 */
																		obj_t BgL_arg1570z00_163;

																		{	/* Module/with.scm 93 */
																			obj_t BgL_arg1571z00_164;

																			BgL_arg1571z00_164 = CAR(BgL_bz00_161);
																			{	/* Module/with.scm 93 */
																				obj_t BgL_arg1582z00_211;

																				BgL_arg1582z00_211 =
																					BGl_prefixz00zz__osz00
																					(BgL_arg1571z00_164);
																				BgL_arg1570z00_163 =
																					string_append_3(BgL_arg1582z00_211,
																					BGl_string1592z00zzmodule_withz00,
																					BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00);
																			}
																		}
																		BGl_za2withzd2filesza2zd2zzengine_paramz00 =
																			MAKE_PAIR(BgL_arg1570z00_163,
																			BGl_za2withzd2filesza2zd2zzengine_paramz00);
																	}
																	return
																		BGl_importzd2withzd2modulez12z12zzmodule_impusez00
																		(BgL_protoz00_2, BgL_protoz00_2);
																}
															else
																{	/* Module/with.scm 83 */
																	bool_t BgL_testz00_328;

																	{	/* Module/with.scm 83 */
																		obj_t BgL_arg1574z00_167;

																		BgL_arg1574z00_167 =
																			BGl_heapzd2modulezd2listz00zzheap_restorez00
																			(BNIL);
																		BgL_testz00_328 =
																			CBOOL
																			(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																			(BgL_protoz00_2, BgL_arg1574z00_167));
																	}
																	if (BgL_testz00_328)
																		{	/* Module/with.scm 83 */
																			return
																				BGl_withzd2libraryzd2modulez12z12zzmodule_libraryz00
																				(BgL_protoz00_2);
																		}
																	else
																		{	/* Module/with.scm 86 */
																			obj_t BgL_list1573z00_166;

																			BgL_list1573z00_166 =
																				MAKE_PAIR(BNIL, BNIL);
																			return
																				BGl_userzd2errorzf2locationz20zztools_errorz00
																				(BgL_locz00_128, BgL_protoz00_2,
																				BGl_string1593z00zzmodule_withz00,
																				BgL_protoz00_2, BgL_list1573z00_166);
																		}
																}
														}
													else
														{	/* Module/with.scm 75 */
															obj_t BgL_list1578z00_171;

															BgL_list1578z00_171 = MAKE_PAIR(BNIL, BNIL);
															return
																BGl_userzd2errorzf2locationz20zztools_errorz00
																(BgL_locz00_128,
																BGl_string1590z00zzmodule_withz00,
																BGl_string1591z00zzmodule_withz00,
																BgL_clausez00_3, BgL_list1578z00_171);
														}
												}
										}
									else
										{	/* Module/with.scm 55 */
											goto BgL_tagzd21398zd2_133;
										}
								}
							else
								{	/* Module/with.scm 55 */
									goto BgL_tagzd21398zd2_133;
								}
						}
					else
						{	/* Module/with.scm 55 */
							goto BgL_tagzd21398zd2_133;
						}
				}
			}
		}
	}



/* early-with-clauses */
	BGL_EXPORTED_DEF obj_t BGl_earlyzd2withzd2clausesz00zzmodule_withz00()
	{
		AN_OBJECT;
		{	/* Module/with.scm 109 */
			{	/* Module/with.scm 110 */
				obj_t BgL_arg1584z00_176;

				obj_t BgL_arg1585z00_177;

				BgL_arg1584z00_176 = CNST_TABLE_REF(((long) 0));
				BgL_arg1585z00_177 =
					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
					(BGl_za2earlyzd2withzd2modulesza2z00zzengine_paramz00, BNIL);
				return MAKE_PAIR(BgL_arg1584z00_176, BgL_arg1585z00_177);
			}
		}
	}



/* _early-with-clauses */
	obj_t BGl__earlyzd2withzd2clausesz00zzmodule_withz00(obj_t BgL_envz00_224)
	{
		AN_OBJECT;
		{	/* Module/with.scm 109 */
			return BGl_earlyzd2withzd2clausesz00zzmodule_withz00();
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_withz00()
	{
		AN_OBJECT;
		{	/* Module/with.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_withz00()
	{
		AN_OBJECT;
		{	/* Module/with.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_withz00()
	{
		AN_OBJECT;
		{	/* Module/with.scm 15 */
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string1594z00zzmodule_withz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1594z00zzmodule_withz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string1594z00zzmodule_withz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string1594z00zzmodule_withz00));
			BGl_modulezd2initializa7ationz75zzmodule_impusez00(((long) 468691571),
				BSTRING_TO_STRING(BGl_string1594z00zzmodule_withz00));
			BGl_modulezd2initializa7ationz75zzmodule_libraryz00(((long) 79490170),
				BSTRING_TO_STRING(BGl_string1594z00zzmodule_withz00));
			BGl_modulezd2initializa7ationz75zzread_accessz00(((long) 514536036),
				BSTRING_TO_STRING(BGl_string1594z00zzmodule_withz00));
			return
				BGl_modulezd2initializa7ationz75zzheap_restorez00(((long) 307873065),
				BSTRING_TO_STRING(BGl_string1594z00zzmodule_withz00));
		}
	}

#ifdef __cplusplus
}
#endif
