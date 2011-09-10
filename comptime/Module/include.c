/*===========================================================================*/
/*   (Module/include.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/include.scm)*/
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


	static obj_t BGl__includezd2consumerzd2zzmodule_includez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__includezd2producerzd2zzmodule_includez00(obj_t, obj_t);
	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	static obj_t
		BGl__getzd2includezd2consumedzd2codezd2zzmodule_includez00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_includez00 = BUNSPEC;
	static obj_t BGl_za2toplevelzd2unitza2zd2zzmodule_includez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzmodule_includez00();
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2includezd2consumedzd2codezd2zzmodule_includez00();
	static obj_t BGl_includezd2finaliza7erz75zzmodule_includez00();
	BGL_IMPORT obj_t create_struct(obj_t, int);
	BGL_EXPORTED_DECL obj_t
		BGl_resetzd2includezd2consumedzd2codez12zc0zzmodule_includez00();
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl__getzd2toplevelzd2unitzd2weightzd2zzmodule_includez00(obj_t);
	static obj_t BGl__makezd2includezd2compilerz00zzmodule_includez00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzmodule_includez00();
	BGL_EXPORTED_DECL obj_t BGl_getzd2toplevelzd2unitz00zzmodule_includez00();
	static obj_t BGl_za2producedzd2codeza2zd2zzmodule_includez00 = BUNSPEC;
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_includez00();
	static obj_t BGl__includezd2finaliza7erz75zzmodule_includez00(obj_t);
	extern obj_t BGl_readzd2includezd2zzread_includez00(obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_za2consumedzd2codeza2zd2zzmodule_includez00 = BUNSPEC;
	static obj_t
		BGl__resetzd2includezd2consumedzd2codez12zc0zzmodule_includez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzmodule_includez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_includez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzmodule_includez00();
	static obj_t BGl__getzd2toplevelzd2unitz00zzmodule_includez00(obj_t);
	static obj_t BGl_includezd2consumerzd2zzmodule_includez00(obj_t, obj_t);
	static obj_t BGl_includezd2producerzd2zzmodule_includez00(obj_t);
	static obj_t
		BGl__resetzd2includezd2consumedzd2directivez12zc0zzmodule_includez00(obj_t);
	static obj_t BGl_za2consumedzd2directiveza2zd2zzmodule_includez00 = BUNSPEC;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2toplevelzd2unitzd2weightzd2zzmodule_includez00();
	extern obj_t BGl_consumezd2modulezd2clausez12z12zzmodule_modulez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2includezd2compilerz00zzmodule_includez00();
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2includezd2consumedzd2directivezd2zzmodule_includez00();
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern BgL_ccompz00_bglt BGl_makezd2ccompzd2zzmodule_modulez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl__getzd2includezd2consumedzd2directivezd2zzmodule_includez00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_includez00();
	static obj_t BGl_methodzd2initzd2zzmodule_includez00();
	BGL_EXPORTED_DECL obj_t
		BGl_resetzd2includezd2consumedzd2directivez12zc0zzmodule_includez00();
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2includezd2compilerzd2envzd2zzmodule_includez00,
		BgL_bgl__makeza7d2includeza71585z00,
		BGl__makezd2includezd2compilerz00zzmodule_includez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_resetzd2includezd2consumedzd2codez12zd2envz12zzmodule_includez00,
		BgL_bgl__resetza7d2include1586za7,
		BGl__resetzd2includezd2consumedzd2codez12zc0zzmodule_includez00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2includezd2consumedzd2directivezd2envz00zzmodule_includez00,
		BgL_bgl__getza7d2includeza7d1587z00,
		BGl__getzd2includezd2consumedzd2directivezd2zzmodule_includez00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1580z00zzmodule_includez00,
		BgL_bgl_string1580za700za7za7m1588za7, "Illegal `include' clause", 24);
	      DEFINE_STRING(BGl_string1579z00zzmodule_includez00,
		BgL_bgl_string1579za700za7za7m1589za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string1581z00zzmodule_includez00,
		BgL_bgl_string1581za700za7za7m1590za7, "module_include", 14);
	      DEFINE_STRING(BGl_string1582z00zzmodule_includez00,
		BgL_bgl_string1582za700za7za7m1591za7, "unit toplevel include ", 22);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_includezd2finaliza7erzd2envza7zzmodule_includez00,
		BgL_bgl__includeza7d2final1592za7,
		BGl__includezd2finaliza7erz75zzmodule_includez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2includezd2consumedzd2codezd2envz00zzmodule_includez00,
		BgL_bgl__getza7d2includeza7d1593z00,
		BGl__getzd2includezd2consumedzd2codezd2zzmodule_includez00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_includezd2consumerzd2envz00zzmodule_includez00,
		BgL_bgl__includeza7d2consu1594za7,
		BGl__includezd2consumerzd2zzmodule_includez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2toplevelzd2unitzd2envzd2zzmodule_includez00,
		BgL_bgl__getza7d2toplevelza71595z00,
		BGl__getzd2toplevelzd2unitz00zzmodule_includez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2toplevelzd2unitzd2weightzd2envz00zzmodule_includez00,
		BgL_bgl__getza7d2toplevelza71596z00,
		BGl__getzd2toplevelzd2unitzd2weightzd2zzmodule_includez00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_includezd2producerzd2envz00zzmodule_includez00,
		BgL_bgl__includeza7d2produ1597za7,
		BGl__includezd2producerzd2zzmodule_includez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_resetzd2includezd2consumedzd2directivez12zd2envz12zzmodule_includez00,
		BgL_bgl__resetza7d2include1598za7,
		BGl__resetzd2includezd2consumedzd2directivez12zc0zzmodule_includez00, 0L,
		BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzmodule_includez00(long
		BgL_checksumz00_318, char *BgL_fromz00_319)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_includez00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_includez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzmodule_includez00();
					BGl_cnstzd2initzd2zzmodule_includez00();
					BGl_importedzd2moduleszd2initz00zzmodule_includez00();
					BGl_toplevelzd2initzd2zzmodule_includez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_includez00()
	{
		AN_OBJECT;
		{	/* Module/include.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"module_include");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_include");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_includez00()
	{
		AN_OBJECT;
		{	/* Module/include.scm 15 */
			{	/* Module/include.scm 15 */
				obj_t BgL_cportz00_310;

				BgL_cportz00_310 =
					bgl_open_input_string(BGl_string1582z00zzmodule_includez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_311;

					BgL_iz00_311 = ((long) 2);
				BgL_loopz00_312:
					if ((BgL_iz00_311 == ((long) -1)))
						{	/* Module/include.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/include.scm 15 */
							{	/* Module/include.scm 15 */
								obj_t BgL_arg1584z00_314;

								{	/* Module/include.scm 15 */

									{	/* Module/include.scm 15 */
										obj_t BgL_locationz00_316;

										BgL_locationz00_316 = BBOOL(((bool_t) 0));
										{	/* Module/include.scm 15 */

											BgL_arg1584z00_314 =
												BGl_readz00zz__readerz00(BgL_cportz00_310,
												BgL_locationz00_316);
										}
									}
								}
								{	/* Module/include.scm 15 */
									int BgL_auxz00_335;

									BgL_auxz00_335 = (int) (BgL_iz00_311);
									CNST_TABLE_SET(BgL_auxz00_335, BgL_arg1584z00_314);
							}}
							{	/* Module/include.scm 15 */
								int BgL_auxz00_317;

								BgL_auxz00_317 = (int) ((BgL_iz00_311 - ((long) 1)));
								{
									long BgL_iz00_340;

									BgL_iz00_340 = (long) (BgL_auxz00_317);
									BgL_iz00_311 = BgL_iz00_340;
									goto BgL_loopz00_312;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmodule_includez00()
	{
		AN_OBJECT;
		{	/* Module/include.scm 15 */
			BGl_za2producedzd2codeza2zd2zzmodule_includez00 = BNIL;
			BGl_za2consumedzd2directiveza2zd2zzmodule_includez00 = BNIL;
			BGl_za2consumedzd2codeza2zd2zzmodule_includez00 = BNIL;
			return (BGl_za2toplevelzd2unitza2zd2zzmodule_includez00 =
				BFALSE, BUNSPEC);
		}
	}



/* make-include-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2includezd2compilerz00zzmodule_includez00()
	{
		AN_OBJECT;
		{	/* Module/include.scm 31 */
			return
				(obj_t) (BGl_makezd2ccompzd2zzmodule_modulez00(CNST_TABLE_REF(((long)
							0)), BGl_includezd2producerzd2envz00zzmodule_includez00,
					BGl_includezd2consumerzd2envz00zzmodule_includez00,
					BGl_includezd2finaliza7erzd2envza7zzmodule_includez00));
		}
	}



/* _make-include-compiler */
	obj_t BGl__makezd2includezd2compilerz00zzmodule_includez00(obj_t
		BgL_envz00_296)
	{
		AN_OBJECT;
		{	/* Module/include.scm 31 */
			return BGl_makezd2includezd2compilerz00zzmodule_includez00();
		}
	}



/* include-producer */
	obj_t BGl_includezd2producerzd2zzmodule_includez00(obj_t BgL_clausez00_23)
	{
		AN_OBJECT;
		{	/* Module/include.scm 45 */
			{

				{	/* Module/include.scm 48 */
					obj_t BgL_g1529z00_132;

					BgL_g1529z00_132 = CDR(BgL_clausez00_23);
					{
						obj_t BgL_filesz00_134;

						BgL_filesz00_134 = BgL_g1529z00_132;
					BgL_zc3anonymousza31546ze3z83_135:
						if (NULLP(BgL_filesz00_134))
							{	/* Module/include.scm 50 */
								return BNIL;
							}
						else
							{	/* Module/include.scm 50 */
								if (PAIRP(BgL_filesz00_134))
									{	/* Module/include.scm 55 */
										obj_t BgL_filez00_138;

										BgL_filez00_138 = CAR(BgL_filesz00_134);
										if (STRINGP(BgL_filez00_138))
											{	/* Module/include.scm 58 */
												obj_t BgL_srcz00_140;

												BgL_srcz00_140 =
													BGl_readzd2includezd2zzread_includez00
													(BgL_filez00_138);
												{	/* Module/include.scm 58 */
													obj_t BgL_directivez00_141;

													BgL_directivez00_141 = CAR(BgL_srcz00_140);
													{	/* Module/include.scm 59 */
														obj_t BgL_srczd2codezd2_142;

														BgL_srczd2codezd2_142 =
															bgl_reverse_bang(CDR(BgL_srcz00_140));
														{	/* Module/include.scm 60 */

															if (PAIRP(BgL_directivez00_141))
																{	/* Module/include.scm 63 */
																	obj_t BgL_g1533z00_144;

																	BgL_g1533z00_144 = CDR(BgL_directivez00_141);
																	{
																		obj_t BgL_l1531z00_146;

																		BgL_l1531z00_146 = BgL_g1533z00_144;
																	BgL_zc3anonymousza31551ze3z83_147:
																		if (PAIRP(BgL_l1531z00_146))
																			{	/* Module/include.scm 63 */
																				BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																					(CAR(BgL_l1531z00_146));
																				{
																					obj_t BgL_l1531z00_365;

																					BgL_l1531z00_365 =
																						CDR(BgL_l1531z00_146);
																					BgL_l1531z00_146 = BgL_l1531z00_365;
																					goto
																						BgL_zc3anonymousza31551ze3z83_147;
																				}
																			}
																		else
																			{	/* Module/include.scm 63 */
																				((bool_t) 1);
																			}
																	}
																}
															else
																{	/* Module/include.scm 62 */
																	((bool_t) 0);
																}
															BGl_za2producedzd2codeza2zd2zzmodule_includez00 =
																bgl_append2(BgL_srczd2codezd2_142,
																BGl_za2producedzd2codeza2zd2zzmodule_includez00);
															{
																obj_t BgL_filesz00_368;

																BgL_filesz00_368 = CDR(BgL_filesz00_134);
																BgL_filesz00_134 = BgL_filesz00_368;
																goto BgL_zc3anonymousza31546ze3z83_135;
															}
														}
													}
												}
											}
										else
											{	/* Module/include.scm 56 */
											BgL_zc3anonymousza31557ze3z83_155:
												{	/* Module/include.scm 47 */
													obj_t BgL_list1558z00_156;

													BgL_list1558z00_156 = MAKE_PAIR(BNIL, BNIL);
													return
														BGl_userzd2errorzd2zztools_errorz00
														(BGl_string1579z00zzmodule_includez00,
														BGl_string1580z00zzmodule_includez00,
														BgL_clausez00_23, BgL_list1558z00_156);
												}
											}
									}
								else
									{	/* Module/include.scm 52 */
										goto BgL_zc3anonymousza31557ze3z83_155;
									}
							}
					}
				}
			}
		}
	}



/* _include-producer */
	obj_t BGl__includezd2producerzd2zzmodule_includez00(obj_t BgL_envz00_297,
		obj_t BgL_clausez00_298)
	{
		AN_OBJECT;
		{	/* Module/include.scm 45 */
			return BGl_includezd2producerzd2zzmodule_includez00(BgL_clausez00_298);
		}
	}



/* get-include-consumed-directive */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2includezd2consumedzd2directivezd2zzmodule_includez00()
	{
		AN_OBJECT;
		{	/* Module/include.scm 75 */
			return BGl_za2consumedzd2directiveza2zd2zzmodule_includez00;
		}
	}



/* _get-include-consumed-directive */
	obj_t BGl__getzd2includezd2consumedzd2directivezd2zzmodule_includez00(obj_t
		BgL_envz00_303)
	{
		AN_OBJECT;
		{	/* Module/include.scm 75 */
			return BGl_za2consumedzd2directiveza2zd2zzmodule_includez00;
		}
	}



/* reset-include-consumed-directive! */
	BGL_EXPORTED_DEF obj_t
		BGl_resetzd2includezd2consumedzd2directivez12zc0zzmodule_includez00()
	{
		AN_OBJECT;
		{	/* Module/include.scm 81 */
			return (BGl_za2consumedzd2directiveza2zd2zzmodule_includez00 =
				BNIL, BUNSPEC);
		}
	}



/* _reset-include-consumed-directive! */
	obj_t
		BGl__resetzd2includezd2consumedzd2directivez12zc0zzmodule_includez00(obj_t
		BgL_envz00_304)
	{
		AN_OBJECT;
		{	/* Module/include.scm 81 */
			return
				BGl_resetzd2includezd2consumedzd2directivez12zc0zzmodule_includez00();
		}
	}



/* get-include-consumed-code */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2includezd2consumedzd2codezd2zzmodule_includez00()
	{
		AN_OBJECT;
		{	/* Module/include.scm 92 */
			return BGl_za2consumedzd2codeza2zd2zzmodule_includez00;
		}
	}



/* _get-include-consumed-code */
	obj_t BGl__getzd2includezd2consumedzd2codezd2zzmodule_includez00(obj_t
		BgL_envz00_305)
	{
		AN_OBJECT;
		{	/* Module/include.scm 92 */
			return BGl_za2consumedzd2codeza2zd2zzmodule_includez00;
		}
	}



/* reset-include-consumed-code! */
	BGL_EXPORTED_DEF obj_t
		BGl_resetzd2includezd2consumedzd2codez12zc0zzmodule_includez00()
	{
		AN_OBJECT;
		{	/* Module/include.scm 98 */
			return (BGl_za2consumedzd2codeza2zd2zzmodule_includez00 = BNIL, BUNSPEC);
		}
	}



/* _reset-include-consumed-code! */
	obj_t BGl__resetzd2includezd2consumedzd2codez12zc0zzmodule_includez00(obj_t
		BgL_envz00_306)
	{
		AN_OBJECT;
		{	/* Module/include.scm 98 */
			return BGl_resetzd2includezd2consumedzd2codez12zc0zzmodule_includez00();
		}
	}



/* include-consumer */
	obj_t BGl_includezd2consumerzd2zzmodule_includez00(obj_t BgL_modulez00_24,
		obj_t BgL_clausez00_25)
	{
		AN_OBJECT;
		{	/* Module/include.scm 104 */
			{

				{	/* Module/include.scm 107 */
					obj_t BgL_g1530z00_159;

					BgL_g1530z00_159 = CDR(BgL_clausez00_25);
					{
						obj_t BgL_filesz00_161;

						BgL_filesz00_161 = BgL_g1530z00_159;
					BgL_zc3anonymousza31559ze3z83_162:
						if (NULLP(BgL_filesz00_161))
							{	/* Module/include.scm 109 */
								return BNIL;
							}
						else
							{	/* Module/include.scm 109 */
								if (PAIRP(BgL_filesz00_161))
									{	/* Module/include.scm 114 */
										obj_t BgL_filez00_165;

										BgL_filez00_165 = CAR(BgL_filesz00_161);
										if (STRINGP(BgL_filez00_165))
											{	/* Module/include.scm 117 */
												obj_t BgL_srcz00_167;

												BgL_srcz00_167 =
													BGl_readzd2includezd2zzread_includez00
													(BgL_filez00_165);
												{	/* Module/include.scm 117 */
													obj_t BgL_directivez00_168;

													BgL_directivez00_168 = CAR(BgL_srcz00_167);
													{	/* Module/include.scm 118 */
														obj_t BgL_srczd2codezd2_169;

														BgL_srczd2codezd2_169 = CDR(BgL_srcz00_167);
														{	/* Module/include.scm 119 */

															if (PAIRP(BgL_directivez00_168))
																{	/* Module/include.scm 123 */
																	obj_t BgL_g1536z00_171;

																	BgL_g1536z00_171 = CDR(BgL_directivez00_168);
																	{
																		obj_t BgL_l1534z00_173;

																		BgL_l1534z00_173 = BgL_g1536z00_171;
																	BgL_zc3anonymousza31564ze3z83_174:
																		if (PAIRP(BgL_l1534z00_173))
																			{	/* Module/include.scm 128 */
																				{	/* Module/include.scm 125 */
																					obj_t BgL_dz00_176;

																					BgL_dz00_176 = CAR(BgL_l1534z00_173);
																					{	/* Module/include.scm 126 */
																						obj_t BgL_arg1566z00_177;

																						BgL_arg1566z00_177 =
																							BGl_consumezd2modulezd2clausez12z12zzmodule_modulez00
																							(BgL_modulez00_24, BgL_dz00_176);
																						BGl_za2consumedzd2directiveza2zd2zzmodule_includez00
																							=
																							bgl_append2(BgL_arg1566z00_177,
																							BGl_za2consumedzd2directiveza2zd2zzmodule_includez00);
																					}
																				}
																				{
																					obj_t BgL_l1534z00_394;

																					BgL_l1534z00_394 =
																						CDR(BgL_l1534z00_173);
																					BgL_l1534z00_173 = BgL_l1534z00_394;
																					goto
																						BgL_zc3anonymousza31564ze3z83_174;
																				}
																			}
																		else
																			{	/* Module/include.scm 128 */
																				((bool_t) 1);
																			}
																	}
																}
															else
																{	/* Module/include.scm 122 */
																	((bool_t) 0);
																}
															BGl_za2consumedzd2codeza2zd2zzmodule_includez00 =
																bgl_append2(BgL_srczd2codezd2_169,
																BGl_za2consumedzd2codeza2zd2zzmodule_includez00);
															{
																obj_t BgL_filesz00_397;

																BgL_filesz00_397 = CDR(BgL_filesz00_161);
																BgL_filesz00_161 = BgL_filesz00_397;
																goto BgL_zc3anonymousza31559ze3z83_162;
															}
														}
													}
												}
											}
										else
											{	/* Module/include.scm 115 */
											BgL_zc3anonymousza31569ze3z83_182:
												{	/* Module/include.scm 106 */
													obj_t BgL_list1570z00_183;

													BgL_list1570z00_183 = MAKE_PAIR(BNIL, BNIL);
													return
														BGl_userzd2errorzd2zztools_errorz00
														(BGl_string1579z00zzmodule_includez00,
														BGl_string1580z00zzmodule_includez00,
														BgL_clausez00_25, BgL_list1570z00_183);
												}
											}
									}
								else
									{	/* Module/include.scm 111 */
										goto BgL_zc3anonymousza31569ze3z83_182;
									}
							}
					}
				}
			}
		}
	}



/* _include-consumer */
	obj_t BGl__includezd2consumerzd2zzmodule_includez00(obj_t BgL_envz00_299,
		obj_t BgL_modulez00_300, obj_t BgL_clausez00_301)
	{
		AN_OBJECT;
		{	/* Module/include.scm 104 */
			return
				BGl_includezd2consumerzd2zzmodule_includez00(BgL_modulez00_300,
				BgL_clausez00_301);
		}
	}



/* get-toplevel-unit */
	BGL_EXPORTED_DEF obj_t BGl_getzd2toplevelzd2unitz00zzmodule_includez00()
	{
		AN_OBJECT;
		{	/* Module/include.scm 140 */
			return BGl_za2toplevelzd2unitza2zd2zzmodule_includez00;
		}
	}



/* _get-toplevel-unit */
	obj_t BGl__getzd2toplevelzd2unitz00zzmodule_includez00(obj_t BgL_envz00_307)
	{
		AN_OBJECT;
		{	/* Module/include.scm 140 */
			return BGl_za2toplevelzd2unitza2zd2zzmodule_includez00;
		}
	}



/* get-toplevel-unit-weight */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2toplevelzd2unitzd2weightzd2zzmodule_includez00()
	{
		AN_OBJECT;
		{	/* Module/include.scm 147 */
			return BINT(((long) 100));
		}
	}



/* _get-toplevel-unit-weight */
	obj_t BGl__getzd2toplevelzd2unitzd2weightzd2zzmodule_includez00(obj_t
		BgL_envz00_308)
	{
		AN_OBJECT;
		{	/* Module/include.scm 147 */
			return BGl_getzd2toplevelzd2unitzd2weightzd2zzmodule_includez00();
		}
	}



/* include-finalizer */
	obj_t BGl_includezd2finaliza7erz75zzmodule_includez00()
	{
		AN_OBJECT;
		{	/* Module/include.scm 153 */
			{	/* Module/include.scm 154 */
				obj_t BgL_arg1571z00_185;

				obj_t BgL_arg1574z00_187;

				BgL_arg1571z00_185 = CNST_TABLE_REF(((long) 1));
				BgL_arg1574z00_187 =
					bgl_reverse_bang(BGl_za2producedzd2codeza2zd2zzmodule_includez00);
				{	/* Module/include.scm 154 */
					obj_t BgL_newz00_268;

					BgL_newz00_268 =
						create_struct(CNST_TABLE_REF(((long) 2)), (int) (((long) 5)));
					{	/* Module/include.scm 154 */
						int BgL_auxz00_409;

						BgL_auxz00_409 = (int) (((long) 4));
						STRUCT_SET(BgL_newz00_268, BgL_auxz00_409, BFALSE);
					}
					{	/* Module/include.scm 154 */
						int BgL_auxz00_412;

						BgL_auxz00_412 = (int) (((long) 3));
						STRUCT_SET(BgL_newz00_268, BgL_auxz00_412, BTRUE);
					}
					{	/* Module/include.scm 154 */
						int BgL_auxz00_415;

						BgL_auxz00_415 = (int) (((long) 2));
						STRUCT_SET(BgL_newz00_268, BgL_auxz00_415, BgL_arg1574z00_187);
					}
					{	/* Module/include.scm 154 */
						obj_t BgL_auxz00_420;

						int BgL_auxz00_418;

						BgL_auxz00_420 = BINT(((long) 100));
						BgL_auxz00_418 = (int) (((long) 1));
						STRUCT_SET(BgL_newz00_268, BgL_auxz00_418, BgL_auxz00_420);
					}
					{	/* Module/include.scm 154 */
						int BgL_auxz00_423;

						BgL_auxz00_423 = (int) (((long) 0));
						STRUCT_SET(BgL_newz00_268, BgL_auxz00_423, BgL_arg1571z00_185);
					}
					BGl_za2toplevelzd2unitza2zd2zzmodule_includez00 = BgL_newz00_268;
			}}
			{	/* Module/include.scm 159 */
				obj_t BgL_list1575z00_188;

				BgL_list1575z00_188 =
					MAKE_PAIR(BGl_za2toplevelzd2unitza2zd2zzmodule_includez00, BNIL);
				return BgL_list1575z00_188;
			}
		}
	}



/* _include-finalizer */
	obj_t BGl__includezd2finaliza7erz75zzmodule_includez00(obj_t BgL_envz00_302)
	{
		AN_OBJECT;
		{	/* Module/include.scm 153 */
			return BGl_includezd2finaliza7erz75zzmodule_includez00();
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_includez00()
	{
		AN_OBJECT;
		{	/* Module/include.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_includez00()
	{
		AN_OBJECT;
		{	/* Module/include.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_includez00()
	{
		AN_OBJECT;
		{	/* Module/include.scm 15 */
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string1581z00zzmodule_includez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string1581z00zzmodule_includez00));
			return
				BGl_modulezd2initializa7ationz75zzread_includez00(((long) 273692333),
				BSTRING_TO_STRING(BGl_string1581z00zzmodule_includez00));
		}
	}

#ifdef __cplusplus
}
#endif
