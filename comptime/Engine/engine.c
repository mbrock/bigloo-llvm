/*===========================================================================*/
/*   (Engine/engine.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Engine/engine.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_requirezd2initializa7ationz75zzengine_enginez00 = BUNSPEC;
	extern obj_t BGl_za2helloza2z00zzengine_paramz00;
	static obj_t BGl_genericzd2initzd2zzengine_enginez00();
	extern obj_t BGl_za2interpreterza2z00zzengine_paramz00;
	extern obj_t BGl_dumpzd2heapszd2zzengine_heapz00(obj_t);
	extern obj_t BGl_za2startupzd2fileza2zd2zzengine_paramz00;
	extern obj_t BGl_linkz00zzengine_linkz00();
	static obj_t BGl__enginez00zzengine_enginez00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_interpz00zzengine_interpz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzengine_enginez00();
	extern obj_t BGl_za2ozd2filesza2zd2zzengine_paramz00;
	extern obj_t BGl_cczd2compilerzd2zzbackend_cz00(obj_t, obj_t);
	extern obj_t BGl_za2libzd2dirza2zd2zzengine_paramz00;
	extern obj_t BGl_za2heapzd2dumpzd2namesza2z00zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzengine_enginez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_heapz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_linkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_interpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_compilerz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzwrite_versionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	extern obj_t BGl_userzd2warningzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_hellozd2worldzd2zzengine_enginez00();
	BGL_EXPORTED_DECL obj_t BGl_enginez00zzengine_enginez00();
	extern obj_t BGl_za2bigloozd2argsza2zd2zzengine_paramz00;
	extern obj_t BGl_compilerz00zzengine_compilerz00();
	extern obj_t BGl_za2destza2z00zzengine_paramz00;
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2verboseza2z00zzengine_paramz00;
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	extern obj_t BGl_za2rmzd2tmpzd2filesza2z00zzengine_paramz00;
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzengine_enginez00();
	static obj_t BGl__hellozd2worldzd2zzengine_enginez00(obj_t);
	extern obj_t BGl_za2czd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_methodzd2initzd2zzengine_enginez00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_enginezd2envzd2zzengine_enginez00,
		BgL_bgl__engineza700za7za7engi1548za7, BGl__enginez00zzengine_enginez00, 0L,
		BUNSPEC, 0);
	extern obj_t BGl_versionzd2envzd2zzwrite_versionz00;
	   
		 
		DEFINE_STRING(BGl_string1542z00zzengine_enginez00,
		BgL_bgl_string1542za700za7za7e1549za7, "engine", 6);
	      DEFINE_STRING(BGl_string1543z00zzengine_enginez00,
		BgL_bgl_string1543za700za7za7e1550za7, "Ignoring additional files", 25);
	      DEFINE_STRING(BGl_string1544z00zzengine_enginez00,
		BgL_bgl_string1544za700za7za7e1551za7, "/scheme-files", 13);
	      DEFINE_STRING(BGl_string1545z00zzengine_enginez00,
		BgL_bgl_string1545za700za7za7e1552za7, " ", 1);
	      DEFINE_STRING(BGl_string1546z00zzengine_enginez00,
		BgL_bgl_string1546za700za7za7e1553za7, "", 0);
	      DEFINE_STRING(BGl_string1547z00zzengine_enginez00,
		BgL_bgl_string1547za700za7za7e1554za7, "engine_engine", 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_hellozd2worldzd2envz00zzengine_enginez00,
		BgL_bgl__helloza7d2worldza7d1555z00,
		BGl__hellozd2worldzd2zzengine_enginez00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzengine_enginez00(long
		BgL_checksumz00_150, char *BgL_fromz00_151)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzengine_enginez00))
				{
					BGl_requirezd2initializa7ationz75zzengine_enginez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzengine_enginez00();
					BGl_importedzd2moduleszd2initz00zzengine_enginez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzengine_enginez00()
	{
		AN_OBJECT;
		{	/* Engine/engine.scm 16 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"engine_engine");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"engine_engine");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "engine_engine");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"engine_engine");
			return BUNSPEC;
		}
	}



/* engine */
	BGL_EXPORTED_DEF obj_t BGl_enginez00zzengine_enginez00()
	{
		AN_OBJECT;
		{	/* Engine/engine.scm 33 */
			if (PAIRP(BGl_za2heapzd2dumpzd2namesza2z00zzengine_paramz00))
				{	/* Engine/engine.scm 35 */
					return
						BGl_dumpzd2heapszd2zzengine_heapz00
						(BGl_za2heapzd2dumpzd2namesza2z00zzengine_paramz00);
				}
			else
				{	/* Engine/engine.scm 37 */
					bool_t BgL_testz00_164;

					if (PAIRP(BGl_za2srczd2filesza2zd2zzengine_paramz00))
						{	/* Engine/engine.scm 37 */
							if (CBOOL(BGl_za2interpreterza2z00zzengine_paramz00))
								{	/* Engine/engine.scm 37 */
									BgL_testz00_164 = ((bool_t) 0);
								}
							else
								{	/* Engine/engine.scm 37 */
									BgL_testz00_164 = ((bool_t) 1);
								}
						}
					else
						{	/* Engine/engine.scm 37 */
							BgL_testz00_164 = ((bool_t) 0);
						}
					if (BgL_testz00_164)
						{	/* Engine/engine.scm 37 */
							return BGl_compilerz00zzengine_compilerz00();
						}
					else
						{	/* Engine/engine.scm 37 */
							if (PAIRP(BGl_za2czd2filesza2zd2zzengine_paramz00))
								{	/* Engine/engine.scm 39 */
									{	/* Engine/engine.scm 40 */
										bool_t BgL_testz00_172;

										{	/* Engine/engine.scm 40 */
											obj_t BgL_auxz00_173;

											BgL_auxz00_173 =
												CDR(BGl_za2czd2filesza2zd2zzengine_paramz00);
											BgL_testz00_172 = PAIRP(BgL_auxz00_173);
										}
										if (BgL_testz00_172)
											{	/* Engine/engine.scm 40 */
												BGl_userzd2warningzd2zztools_errorz00
													(BGl_string1542z00zzengine_enginez00,
													BGl_string1543z00zzengine_enginez00,
													CDR(BGl_za2czd2filesza2zd2zzengine_paramz00));
											}
										else
											{	/* Engine/engine.scm 40 */
												BFALSE;
											}
									}
									BGl_za2rmzd2tmpzd2filesza2z00zzengine_paramz00 = BFALSE;
									{	/* Engine/engine.scm 43 */
										obj_t BgL_arg1517z00_94;

										obj_t BgL_arg1518z00_95;

										BgL_arg1517z00_94 =
											BGl_prefixz00zz__osz00(CAR
											(BGl_za2czd2filesza2zd2zzengine_paramz00));
										if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
											{	/* Engine/engine.scm 44 */
												BgL_arg1518z00_95 =
													BGl_prefixz00zz__osz00
													(BGl_za2destza2z00zzengine_paramz00);
											}
										else
											{	/* Engine/engine.scm 44 */
												BgL_arg1518z00_95 = BFALSE;
											}
										return
											BGl_cczd2compilerzd2zzbackend_cz00(BgL_arg1517z00_94,
											BgL_arg1518z00_95);
									}
								}
							else
								{	/* Engine/engine.scm 39 */
									if (NULLP(BGl_za2ozd2filesza2zd2zzengine_paramz00))
										{	/* Engine/engine.scm 52 */
											obj_t BgL_arg1522z00_99;

											BgL_arg1522z00_99 =
												string_append(CAR
												(BGl_za2libzd2dirza2zd2zzengine_paramz00),
												BGl_string1544z00zzengine_enginez00);
											return
												BGl_interpz00zzengine_interpz00
												(BGl_versionzd2envzd2zzwrite_versionz00,
												BGl_za2verboseza2z00zzengine_paramz00,
												BGl_za2srczd2filesza2zd2zzengine_paramz00,
												BGl_za2startupzd2fileza2zd2zzengine_paramz00,
												BgL_arg1522z00_99,
												BGl_za2bigloozd2argsza2zd2zzengine_paramz00);
										}
									else
										{	/* Engine/engine.scm 47 */
											return BGl_linkz00zzengine_linkz00();
										}
								}
						}
				}
		}
	}



/* _engine */
	obj_t BGl__enginez00zzengine_enginez00(obj_t BgL_envz00_147)
	{
		AN_OBJECT;
		{	/* Engine/engine.scm 33 */
			return BGl_enginez00zzengine_enginez00();
		}
	}



/* hello-world */
	BGL_EXPORTED_DEF obj_t BGl_hellozd2worldzd2zzengine_enginez00()
	{
		AN_OBJECT;
		{	/* Engine/engine.scm 60 */
			if (CBOOL(BGl_za2helloza2z00zzengine_paramz00))
				{	/* Engine/engine.scm 62 */
					obj_t BgL_g1508z00_103;

					BgL_g1508z00_103 =
						bgl_reverse_bang(BGl_za2srczd2filesza2zd2zzengine_paramz00);
					{
						obj_t BgL_srcz00_105;

						obj_t BgL_strz00_106;

						BgL_srcz00_105 = BgL_g1508z00_103;
						BgL_strz00_106 = BGl_string1546z00zzengine_enginez00;
					BgL_zc3anonymousza31526ze3z83_107:
						if (NULLP(BgL_srcz00_105))
							{	/* Engine/engine.scm 64 */
								{	/* Engine/engine.scm 66 */
									long BgL_auxz00_196;

									BgL_auxz00_196 = (STRING_LENGTH(BgL_strz00_106) - ((long) 1));
									STRING_SET(BgL_strz00_106, BgL_auxz00_196,
										((unsigned char) ':'));
								}
								{	/* Engine/engine.scm 67 */
									obj_t BgL_list1532z00_112;

									{	/* Engine/engine.scm 67 */
										obj_t BgL_arg1533z00_113;

										BgL_arg1533z00_113 =
											MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
										BgL_list1532z00_112 =
											MAKE_PAIR(BgL_strz00_106, BgL_arg1533z00_113);
									}
									return
										BGl_verbosez00zztools_speekz00(BINT(((long) 0)),
										BgL_list1532z00_112);
							}}
						else
							{	/* Engine/engine.scm 68 */
								obj_t BgL_arg1534z00_114;

								obj_t BgL_arg1535z00_115;

								BgL_arg1534z00_114 = CDR(BgL_srcz00_105);
								{	/* Engine/engine.scm 69 */
									obj_t BgL_arg1536z00_116;

									{	/* Engine/engine.scm 69 */
										bool_t BgL_testz00_206;

										{	/* Engine/engine.scm 69 */
											obj_t BgL_auxz00_207;

											BgL_auxz00_207 = CAR(BgL_srcz00_105);
											BgL_testz00_206 = STRINGP(BgL_auxz00_207);
										}
										if (BgL_testz00_206)
											{	/* Engine/engine.scm 69 */
												BgL_arg1536z00_116 = CAR(BgL_srcz00_105);
											}
										else
											{	/* Engine/engine.scm 71 */
												obj_t BgL_arg1539z00_119;

												BgL_arg1539z00_119 = CAR(BgL_srcz00_105);
												{	/* Engine/engine.scm 71 */
													obj_t BgL_res1541z00_146;

													{	/* Engine/engine.scm 71 */
														obj_t BgL_symbolz00_144;

														BgL_symbolz00_144 = BgL_arg1539z00_119;
														{	/* Engine/engine.scm 71 */
															obj_t BgL_arg2063z00_145;

															BgL_arg2063z00_145 =
																SYMBOL_TO_STRING(BgL_symbolz00_144);
															BgL_res1541z00_146 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_145);
														}
													}
													BgL_arg1536z00_116 = BgL_res1541z00_146;
												}
											}
									}
									BgL_arg1535z00_115 =
										string_append_3(BgL_arg1536z00_116,
										BGl_string1545z00zzengine_enginez00, BgL_strz00_106);
								}
								{
									obj_t BgL_strz00_216;

									obj_t BgL_srcz00_215;

									BgL_srcz00_215 = BgL_arg1534z00_114;
									BgL_strz00_216 = BgL_arg1535z00_115;
									BgL_strz00_106 = BgL_strz00_216;
									BgL_srcz00_105 = BgL_srcz00_215;
									goto BgL_zc3anonymousza31526ze3z83_107;
								}
							}
					}
				}
			else
				{	/* Engine/engine.scm 61 */
					return BFALSE;
				}
		}
	}



/* _hello-world */
	obj_t BGl__hellozd2worldzd2zzengine_enginez00(obj_t BgL_envz00_149)
	{
		AN_OBJECT;
		{	/* Engine/engine.scm 60 */
			return BGl_hellozd2worldzd2zzengine_enginez00();
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzengine_enginez00()
	{
		AN_OBJECT;
		{	/* Engine/engine.scm 16 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzengine_enginez00()
	{
		AN_OBJECT;
		{	/* Engine/engine.scm 16 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzengine_enginez00()
	{
		AN_OBJECT;
		{	/* Engine/engine.scm 16 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string1547z00zzengine_enginez00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string1547z00zzengine_enginez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string1547z00zzengine_enginez00));
			BGl_modulezd2initializa7ationz75zzwrite_versionz00(((long) 269324200),
				BSTRING_TO_STRING(BGl_string1547z00zzengine_enginez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1547z00zzengine_enginez00));
			BGl_modulezd2initializa7ationz75zzengine_compilerz00(((long) 450629069),
				BSTRING_TO_STRING(BGl_string1547z00zzengine_enginez00));
			BGl_modulezd2initializa7ationz75zzengine_interpz00(((long) 427574288),
				BSTRING_TO_STRING(BGl_string1547z00zzengine_enginez00));
			BGl_modulezd2initializa7ationz75zzengine_linkz00(((long) 392051205),
				BSTRING_TO_STRING(BGl_string1547z00zzengine_enginez00));
			BGl_modulezd2initializa7ationz75zzengine_heapz00(((long) 13649315),
				BSTRING_TO_STRING(BGl_string1547z00zzengine_enginez00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_cz00(((long) 460817208),
				BSTRING_TO_STRING(BGl_string1547z00zzengine_enginez00));
		}
	}

#ifdef __cplusplus
}
#endif
