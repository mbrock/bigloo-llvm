/*===========================================================================*/
/*   (Expand/expander.scm)                                                   */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Expand/expander.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl__checkzd2tozd2bezd2macroszd2zzexpand_expanderz00(obj_t);
	static obj_t BGl__findzd2Ozd2expanderz00zzexpand_expanderz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_unbindzd2Gzd2expanderz12z12zzexpand_expanderz00(obj_t);
	static obj_t BGl__unbindzd2Ozd2expanderz12z12zzexpand_expanderz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzexpand_expanderz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_checkzd2tozd2bezd2macroszd2zzexpand_expanderz00();
	BGL_IMPORT obj_t BGl_getzd2compilerzd2expanderz00zz__macroz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzexpand_expanderz00();
	extern obj_t BGl_za2compilerzd2debugza2zd2zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t
		BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_unbindzd2Ozd2expanderz12z12zzexpand_expanderz00(obj_t);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	BGL_EXPORTED_DECL obj_t BGl_initializa7ezd2Oenvz12z67zzexpand_expanderz00();
	static obj_t
		BGl__installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzexpand_expanderz00();
	BGL_EXPORTED_DECL obj_t BGl_findzd2Gzd2expanderz00zzexpand_expanderz00(obj_t);
	static obj_t BGl_za2tozd2bezd2macrosza2z00zzexpand_expanderz00 = BUNSPEC;
	BGL_IMPORT bool_t BGl_hashtablezd2removez12zc0zz__hashz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzexpand_expanderz00();
	static obj_t BGl__tozd2bezd2macroz12z12zzexpand_expanderz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	extern obj_t BGl_za2optimzd2Ozd2macrozf3za2zf3zzengine_paramz00;
	static obj_t BGl__initializa7ezd2Genvz12z67zzexpand_expanderz00(obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
	static obj_t BGl__findzd2Gzd2expanderz00zzexpand_expanderz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_tozd2bezd2macroz12z12zzexpand_expanderz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzexpand_expanderz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__macroz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzexpand_expanderz00();
	static obj_t BGl_za2Genvza2z00zzexpand_expanderz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_zc3anonymousza31525ze3z83zzexpand_expanderz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__initializa7ezd2Oenvz12z67zzexpand_expanderz00(obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_za2Oenvza2z00zzexpand_expanderz00 = BUNSPEC;
	extern obj_t BGl_epairifyz00zztools_miscz00(obj_t, obj_t);
	static obj_t
		BGl__installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_findzd2Ozd2expanderz00zzexpand_expanderz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzexpand_expanderz00();
	static obj_t BGl__unbindzd2Gzd2expanderz12z12zzexpand_expanderz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_initializa7ezd2Genvz12z67zzexpand_expanderz00();
	static obj_t BGl_methodzd2initzd2zzexpand_expanderz00();
	static obj_t __cnst[2];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tozd2bezd2macroz12zd2envzc0zzexpand_expanderz00,
		BgL_bgl__toza7d2beza7d2macro1573z00,
		BGl__tozd2bezd2macroz12z12zzexpand_expanderz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unbindzd2Ozd2expanderz12zd2envzc0zzexpand_expanderz00,
		BgL_bgl__unbindza7d2oza7d2ex1574z00,
		BGl__unbindzd2Ozd2expanderz12z12zzexpand_expanderz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_initializa7ezd2Genvz12zd2envzb5zzexpand_expanderz00,
		BgL_bgl__initializa7a7eza7d21575z00,
		BGl__initializa7ezd2Genvz12z67zzexpand_expanderz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_checkzd2tozd2bezd2macroszd2envz00zzexpand_expanderz00,
		BgL_bgl__checkza7d2toza7d2be1576z00,
		BGl__checkzd2tozd2bezd2macroszd2zzexpand_expanderz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_findzd2Ozd2expanderzd2envzd2zzexpand_expanderz00,
		BgL_bgl__findza7d2oza7d2expa1577z00,
		BGl__findzd2Ozd2expanderz00zzexpand_expanderz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1562z00zzexpand_expanderz00,
		BgL_bgl_string1562za700za7za7e1578za7, "install-O-comptime-expander", 27);
	      DEFINE_STRING(BGl_string1563z00zzexpand_expanderz00,
		BgL_bgl_string1563za700za7za7e1579za7,
		"Illegal re-installation of O-expander", 37);
	      DEFINE_STRING(BGl_string1564z00zzexpand_expanderz00,
		BgL_bgl_string1564za700za7za7e1580za7, "install-G-comptime-expander", 27);
	      DEFINE_STRING(BGl_string1565z00zzexpand_expanderz00,
		BgL_bgl_string1565za700za7za7e1581za7,
		"Illegal re-installation of G-expander", 37);
	      DEFINE_STRING(BGl_string1566z00zzexpand_expanderz00,
		BgL_bgl_string1566za700za7za7e1582za7, "expand", 6);
	      DEFINE_STRING(BGl_string1567z00zzexpand_expanderz00,
		BgL_bgl_string1567za700za7za7e1583za7, "Can't find syntax definition", 28);
	      DEFINE_STRING(BGl_string1568z00zzexpand_expanderz00,
		BgL_bgl_string1568za700za7za7e1584za7, "Can't find macro definition", 27);
	      DEFINE_STRING(BGl_string1570z00zzexpand_expanderz00,
		BgL_bgl_string1570za700za7za7e1585za7, "syntax expander ", 16);
	      DEFINE_STRING(BGl_string1569z00zzexpand_expanderz00,
		BgL_bgl_string1569za700za7za7e1586za7, "expand_expander", 15);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_findzd2Gzd2expanderzd2envzd2zzexpand_expanderz00,
		BgL_bgl__findza7d2gza7d2expa1587z00,
		BGl__findzd2Gzd2expanderz00zzexpand_expanderz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unbindzd2Gzd2expanderz12zd2envzc0zzexpand_expanderz00,
		BgL_bgl__unbindza7d2gza7d2ex1588z00,
		BGl__unbindzd2Gzd2expanderz12z12zzexpand_expanderz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_initializa7ezd2Oenvz12zd2envzb5zzexpand_expanderz00,
		BgL_bgl__initializa7a7eza7d21589z00,
		BGl__initializa7ezd2Oenvz12z67zzexpand_expanderz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_installzd2Ozd2comptimezd2expanderzd2envz00zzexpand_expanderz00,
		BgL_bgl__installza7d2oza7d2c1590z00,
		BGl__installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_installzd2Gzd2comptimezd2expanderzd2envz00zzexpand_expanderz00,
		BgL_bgl__installza7d2gza7d2c1591z00,
		BGl__installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00, 0L, BUNSPEC,
		2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzexpand_expanderz00(long
		BgL_checksumz00_291, char *BgL_fromz00_292)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzexpand_expanderz00))
				{
					BGl_requirezd2initializa7ationz75zzexpand_expanderz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzexpand_expanderz00();
					BGl_cnstzd2initzd2zzexpand_expanderz00();
					BGl_importedzd2moduleszd2initz00zzexpand_expanderz00();
					BGl_toplevelzd2initzd2zzexpand_expanderz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzexpand_expanderz00()
	{
		AN_OBJECT;
		{	/* Expand/expander.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"expand_expander");
			BGl_modulezd2initializa7ationz75zz__macroz00(((long) 0),
				"expand_expander");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"expand_expander");
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 0),
				"expand_expander");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"expand_expander");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"expand_expander");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzexpand_expanderz00()
	{
		AN_OBJECT;
		{	/* Expand/expander.scm 15 */
			{	/* Expand/expander.scm 15 */
				obj_t BgL_cportz00_283;

				BgL_cportz00_283 =
					bgl_open_input_string(BGl_string1570z00zzexpand_expanderz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_284;

					BgL_iz00_284 = ((long) 1);
				BgL_loopz00_285:
					if ((BgL_iz00_284 == ((long) -1)))
						{	/* Expand/expander.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Expand/expander.scm 15 */
							{	/* Expand/expander.scm 15 */
								obj_t BgL_arg1572z00_287;

								{	/* Expand/expander.scm 15 */

									{	/* Expand/expander.scm 15 */
										obj_t BgL_locationz00_289;

										BgL_locationz00_289 = BBOOL(((bool_t) 0));
										{	/* Expand/expander.scm 15 */

											BgL_arg1572z00_287 =
												BGl_readz00zz__readerz00(BgL_cportz00_283,
												BgL_locationz00_289);
										}
									}
								}
								{	/* Expand/expander.scm 15 */
									int BgL_auxz00_312;

									BgL_auxz00_312 = (int) (BgL_iz00_284);
									CNST_TABLE_SET(BgL_auxz00_312, BgL_arg1572z00_287);
							}}
							{	/* Expand/expander.scm 15 */
								int BgL_auxz00_290;

								BgL_auxz00_290 = (int) ((BgL_iz00_284 - ((long) 1)));
								{
									long BgL_iz00_317;

									BgL_iz00_317 = (long) (BgL_auxz00_290);
									BgL_iz00_284 = BgL_iz00_317;
									goto BgL_loopz00_285;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzexpand_expanderz00()
	{
		AN_OBJECT;
		{	/* Expand/expander.scm 15 */
			BGl_za2Oenvza2z00zzexpand_expanderz00 = BNIL;
			BGl_za2Genvza2z00zzexpand_expanderz00 = BNIL;
			return (BGl_za2tozd2bezd2macrosza2z00zzexpand_expanderz00 =
				BNIL, BUNSPEC);
		}
	}



/* initialize-Oenv! */
	BGL_EXPORTED_DEF obj_t BGl_initializa7ezd2Oenvz12z67zzexpand_expanderz00()
	{
		AN_OBJECT;
		{	/* Expand/expander.scm 39 */
			return (BGl_za2Oenvza2z00zzexpand_expanderz00 =
				BGl_makezd2hashtablezd2zz__hashz00(BNIL), BUNSPEC);
		}
	}



/* _initialize-Oenv! */
	obj_t BGl__initializa7ezd2Oenvz12z67zzexpand_expanderz00(obj_t BgL_envz00_257)
	{
		AN_OBJECT;
		{	/* Expand/expander.scm 39 */
			return BGl_initializa7ezd2Oenvz12z67zzexpand_expanderz00();
		}
	}



/* install-O-comptime-expander */
	BGL_EXPORTED_DEF obj_t
		BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00(obj_t
		BgL_keywordz00_11, obj_t BgL_functionz00_12)
	{
		AN_OBJECT;
		{	/* Expand/expander.scm 49 */
			{	/* Expand/expander.scm 50 */
				bool_t BgL_testz00_321;

				{	/* Expand/expander.scm 50 */
					obj_t BgL_arg1527z00_126;

					{	/* Expand/expander.scm 50 */
						obj_t BgL__andtest_1508z00_198;

						BgL__andtest_1508z00_198 =
							BGl_za2optimzd2Ozd2macrozf3za2zf3zzengine_paramz00;
						if (CBOOL(BgL__andtest_1508z00_198))
							{	/* Expand/expander.scm 50 */
								BgL_arg1527z00_126 =
									BGl_hashtablezd2getzd2zz__hashz00
									(BGl_za2Oenvza2z00zzexpand_expanderz00, BgL_keywordz00_11);
							}
						else
							{	/* Expand/expander.scm 50 */
								BgL_arg1527z00_126 = BFALSE;
							}
					}
					if (STRUCTP(BgL_arg1527z00_126))
						{	/* Expand/expander.scm 50 */
							BgL_testz00_321 =
								(STRUCT_KEY(BgL_arg1527z00_126) == CNST_TABLE_REF(((long) 0)));
						}
					else
						{	/* Expand/expander.scm 50 */
							BgL_testz00_321 = ((bool_t) 0);
						}
				}
				if (BgL_testz00_321)
					{	/* Expand/expander.scm 50 */
						return
							BGl_internalzd2errorzd2zztools_errorz00
							(BGl_string1562z00zzexpand_expanderz00,
							BGl_string1563z00zzexpand_expanderz00, BgL_keywordz00_11);
					}
				else
					{	/* Expand/expander.scm 54 */
						obj_t BgL_newz00_118;

						{	/* Expand/expander.scm 55 */
							obj_t BgL_zc3anonymousza31525ze3z83_258;

							BgL_zc3anonymousza31525ze3z83_258 =
								make_fx_procedure
								(BGl_zc3anonymousza31525ze3z83zzexpand_expanderz00,
								(int) (((long) 2)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3anonymousza31525ze3z83_258,
								(int) (((long) 0)), BgL_functionz00_12);
							{	/* Expand/expander.scm 54 */
								obj_t BgL_newz00_207;

								BgL_newz00_207 =
									create_struct(CNST_TABLE_REF(((long) 0)), (int) (((long) 2)));
								{	/* Expand/expander.scm 54 */
									int BgL_auxz00_339;

									BgL_auxz00_339 = (int) (((long) 1));
									STRUCT_SET(BgL_newz00_207, BgL_auxz00_339,
										BgL_zc3anonymousza31525ze3z83_258);
								}
								{	/* Expand/expander.scm 54 */
									int BgL_auxz00_342;

									BgL_auxz00_342 = (int) (((long) 0));
									STRUCT_SET(BgL_newz00_207, BgL_auxz00_342, BgL_keywordz00_11);
								}
								BgL_newz00_118 = BgL_newz00_207;
						}}
						BGl_hashtablezd2putz12zc0zz__hashz00
							(BGl_za2Oenvza2z00zzexpand_expanderz00, BgL_keywordz00_11,
							BgL_newz00_118);
						return BgL_newz00_118;
					}
			}
		}
	}



/* _install-O-comptime-expander */
	obj_t BGl__installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00(obj_t
		BgL_envz00_259, obj_t BgL_keywordz00_260, obj_t BgL_functionz00_261)
	{
		AN_OBJECT;
		{	/* Expand/expander.scm 49 */
			return
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(BgL_keywordz00_260, BgL_functionz00_261);
		}
	}



/* <anonymous:1525> */
	obj_t BGl_zc3anonymousza31525ze3z83zzexpand_expanderz00(obj_t BgL_envz00_262,
		obj_t BgL_xz00_264, obj_t BgL_ez00_265)
	{
		AN_OBJECT;
		{	/* Expand/expander.scm 54 */
			{	/* Expand/expander.scm 55 */
				obj_t BgL_functionz00_263;

				BgL_functionz00_263 = PROCEDURE_REF(BgL_envz00_262, (int) (((long) 0)));
				{
					obj_t BgL_xz00_120;

					obj_t BgL_ez00_121;

					BgL_xz00_120 = BgL_xz00_264;
					BgL_ez00_121 = BgL_ez00_265;
					{	/* Expand/expander.scm 55 */
						obj_t BgL_newxz00_123;

						BgL_newxz00_123 =
							PROCEDURE_ENTRY(BgL_functionz00_263) (BgL_functionz00_263,
							BgL_xz00_120, BgL_ez00_121, BEOA);
						if (PAIRP(BgL_newxz00_123))
							{	/* Expand/expander.scm 56 */
								return
									BGl_epairifyz00zztools_miscz00(BgL_newxz00_123, BgL_xz00_120);
							}
						else
							{	/* Expand/expander.scm 56 */
								return BgL_newxz00_123;
							}
					}
				}
			}
		}
	}



/* find-O-expander */
	BGL_EXPORTED_DEF obj_t BGl_findzd2Ozd2expanderz00zzexpand_expanderz00(obj_t
		BgL_symbolz00_13)
	{
		AN_OBJECT;
		{	/* Expand/expander.scm 68 */
			{	/* Expand/expander.scm 69 */
				obj_t BgL__andtest_1508z00_217;

				BgL__andtest_1508z00_217 =
					BGl_za2optimzd2Ozd2macrozf3za2zf3zzengine_paramz00;
				if (CBOOL(BgL__andtest_1508z00_217))
					{	/* Expand/expander.scm 69 */
						return
							BGl_hashtablezd2getzd2zz__hashz00
							(BGl_za2Oenvza2z00zzexpand_expanderz00, BgL_symbolz00_13);
					}
				else
					{	/* Expand/expander.scm 69 */
						return BFALSE;
					}
			}
		}
	}



/* _find-O-expander */
	obj_t BGl__findzd2Ozd2expanderz00zzexpand_expanderz00(obj_t BgL_envz00_266,
		obj_t BgL_symbolz00_267)
	{
		AN_OBJECT;
		{	/* Expand/expander.scm 68 */
			return BGl_findzd2Ozd2expanderz00zzexpand_expanderz00(BgL_symbolz00_267);
		}
	}



/* unbind-O-expander! */
	BGL_EXPORTED_DEF obj_t
		BGl_unbindzd2Ozd2expanderz12z12zzexpand_expanderz00(obj_t BgL_symbolz00_14)
	{
		AN_OBJECT;
		{	/* Expand/expander.scm 74 */
			return
				BBOOL(BGl_hashtablezd2removez12zc0zz__hashz00
				(BGl_za2Oenvza2z00zzexpand_expanderz00, BgL_symbolz00_14));
		}
	}



/* _unbind-O-expander! */
	obj_t BGl__unbindzd2Ozd2expanderz12z12zzexpand_expanderz00(obj_t
		BgL_envz00_268, obj_t BgL_symbolz00_269)
	{
		AN_OBJECT;
		{	/* Expand/expander.scm 74 */
			return
				BGl_unbindzd2Ozd2expanderz12z12zzexpand_expanderz00(BgL_symbolz00_269);
		}
	}



/* initialize-Genv! */
	BGL_EXPORTED_DEF obj_t BGl_initializa7ezd2Genvz12z67zzexpand_expanderz00()
	{
		AN_OBJECT;
		{	/* Expand/expander.scm 85 */
			return (BGl_za2Genvza2z00zzexpand_expanderz00 =
				BGl_makezd2hashtablezd2zz__hashz00(BNIL), BUNSPEC);
		}
	}



/* _initialize-Genv! */
	obj_t BGl__initializa7ezd2Genvz12z67zzexpand_expanderz00(obj_t BgL_envz00_270)
	{
		AN_OBJECT;
		{	/* Expand/expander.scm 85 */
			return BGl_initializa7ezd2Genvz12z67zzexpand_expanderz00();
		}
	}



/* install-G-comptime-expander */
	BGL_EXPORTED_DEF obj_t
		BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00(obj_t
		BgL_keywordz00_15, obj_t BgL_functionz00_16)
	{
		AN_OBJECT;
		{	/* Expand/expander.scm 95 */
			{	/* Expand/expander.scm 96 */
				bool_t BgL_testz00_363;

				{	/* Expand/expander.scm 96 */
					obj_t BgL_arg1530z00_131;

					BgL_arg1530z00_131 =
						BGl_findzd2Gzd2expanderz00zzexpand_expanderz00(BgL_keywordz00_15);
					if (STRUCTP(BgL_arg1530z00_131))
						{	/* Expand/expander.scm 96 */
							BgL_testz00_363 =
								(STRUCT_KEY(BgL_arg1530z00_131) == CNST_TABLE_REF(((long) 0)));
						}
					else
						{	/* Expand/expander.scm 96 */
							BgL_testz00_363 = ((bool_t) 0);
						}
				}
				if (BgL_testz00_363)
					{	/* Expand/expander.scm 96 */
						return
							BGl_internalzd2errorzd2zztools_errorz00
							(BGl_string1564z00zzexpand_expanderz00,
							BGl_string1565z00zzexpand_expanderz00, BgL_keywordz00_15);
					}
				else
					{	/* Expand/expander.scm 100 */
						obj_t BgL_newz00_130;

						{	/* Expand/expander.scm 100 */
							obj_t BgL_newz00_227;

							BgL_newz00_227 =
								create_struct(CNST_TABLE_REF(((long) 0)), (int) (((long) 2)));
							{	/* Expand/expander.scm 100 */
								int BgL_auxz00_374;

								BgL_auxz00_374 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_227, BgL_auxz00_374, BgL_functionz00_16);
							}
							{	/* Expand/expander.scm 100 */
								int BgL_auxz00_377;

								BgL_auxz00_377 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_227, BgL_auxz00_377, BgL_keywordz00_15);
							}
							BgL_newz00_130 = BgL_newz00_227;
						}
						BGl_hashtablezd2putz12zc0zz__hashz00
							(BGl_za2Genvza2z00zzexpand_expanderz00, BgL_keywordz00_15,
							BgL_newz00_130);
						return BgL_newz00_130;
					}
			}
		}
	}



/* _install-G-comptime-expander */
	obj_t BGl__installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00(obj_t
		BgL_envz00_271, obj_t BgL_keywordz00_272, obj_t BgL_functionz00_273)
	{
		AN_OBJECT;
		{	/* Expand/expander.scm 95 */
			return
				BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00
				(BgL_keywordz00_272, BgL_functionz00_273);
		}
	}



/* find-G-expander */
	BGL_EXPORTED_DEF obj_t BGl_findzd2Gzd2expanderz00zzexpand_expanderz00(obj_t
		BgL_symbolz00_17)
	{
		AN_OBJECT;
		{	/* Expand/expander.scm 110 */
			if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
				(BGl_za2compilerzd2debugza2zd2zzengine_paramz00))
				{	/* Expand/expander.scm 111 */
					if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00
						(BGl_za2compilerzd2debugza2zd2zzengine_paramz00, BINT(((long) 1))))
						{	/* Expand/expander.scm 111 */
							return
								BGl_hashtablezd2getzd2zz__hashz00
								(BGl_za2Genvza2z00zzexpand_expanderz00, BgL_symbolz00_17);
						}
					else
						{	/* Expand/expander.scm 111 */
							return BFALSE;
						}
				}
			else
				{	/* Expand/expander.scm 111 */
					return BFALSE;
				}
		}
	}



/* _find-G-expander */
	obj_t BGl__findzd2Gzd2expanderz00zzexpand_expanderz00(obj_t BgL_envz00_274,
		obj_t BgL_symbolz00_275)
	{
		AN_OBJECT;
		{	/* Expand/expander.scm 110 */
			return BGl_findzd2Gzd2expanderz00zzexpand_expanderz00(BgL_symbolz00_275);
		}
	}



/* unbind-G-expander! */
	BGL_EXPORTED_DEF obj_t
		BGl_unbindzd2Gzd2expanderz12z12zzexpand_expanderz00(obj_t BgL_symbolz00_18)
	{
		AN_OBJECT;
		{	/* Expand/expander.scm 117 */
			return
				BBOOL(BGl_hashtablezd2removez12zc0zz__hashz00
				(BGl_za2Genvza2z00zzexpand_expanderz00, BgL_symbolz00_18));
		}
	}



/* _unbind-G-expander! */
	obj_t BGl__unbindzd2Gzd2expanderz12z12zzexpand_expanderz00(obj_t
		BgL_envz00_276, obj_t BgL_symbolz00_277)
	{
		AN_OBJECT;
		{	/* Expand/expander.scm 117 */
			return
				BGl_unbindzd2Gzd2expanderz12z12zzexpand_expanderz00(BgL_symbolz00_277);
		}
	}



/* to-be-macro! */
	BGL_EXPORTED_DEF obj_t BGl_tozd2bezd2macroz12z12zzexpand_expanderz00(obj_t
		BgL_idz00_19, obj_t BgL_srcz00_20)
	{
		AN_OBJECT;
		{	/* Expand/expander.scm 128 */
			if (CBOOL(BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_19,
						BGl_za2tozd2bezd2macrosza2z00zzexpand_expanderz00)))
				{	/* Expand/expander.scm 129 */
					return BFALSE;
				}
			else
				{	/* Expand/expander.scm 130 */
					obj_t BgL_arg1532z00_135;

					BgL_arg1532z00_135 = MAKE_PAIR(BgL_idz00_19, BgL_srcz00_20);
					return (BGl_za2tozd2bezd2macrosza2z00zzexpand_expanderz00 =
						MAKE_PAIR(BgL_arg1532z00_135,
							BGl_za2tozd2bezd2macrosza2z00zzexpand_expanderz00), BUNSPEC);
				}
		}
	}



/* _to-be-macro! */
	obj_t BGl__tozd2bezd2macroz12z12zzexpand_expanderz00(obj_t BgL_envz00_278,
		obj_t BgL_idz00_279, obj_t BgL_srcz00_280)
	{
		AN_OBJECT;
		{	/* Expand/expander.scm 128 */
			return
				BGl_tozd2bezd2macroz12z12zzexpand_expanderz00(BgL_idz00_279,
				BgL_srcz00_280);
		}
	}



/* check-to-be-macros */
	BGL_EXPORTED_DEF obj_t BGl_checkzd2tozd2bezd2macroszd2zzexpand_expanderz00()
	{
		AN_OBJECT;
		{	/* Expand/expander.scm 135 */
			{
				obj_t BgL_l1511z00_137;

				{	/* Expand/expander.scm 136 */
					bool_t BgL_auxz00_398;

					BgL_l1511z00_137 = BGl_za2tozd2bezd2macrosza2z00zzexpand_expanderz00;
				BgL_zc3anonymousza31533ze3z83_138:
					if (PAIRP(BgL_l1511z00_137))
						{	/* Expand/expander.scm 136 */
							{	/* Expand/expander.scm 137 */
								obj_t BgL_mz00_140;

								BgL_mz00_140 = CAR(BgL_l1511z00_137);
								{
									obj_t BgL_idz00_143;

									obj_t BgL_idz00_141;

									{	/* Expand/expander.scm 137 */
										obj_t BgL_ezd21392zd2_146;

										BgL_ezd21392zd2_146 = CDR(BgL_mz00_140);
										if (PAIRP(BgL_ezd21392zd2_146))
											{	/* Expand/expander.scm 137 */
												obj_t BgL_cdrzd21396zd2_148;

												BgL_cdrzd21396zd2_148 = CDR(BgL_ezd21392zd2_146);
												if (
													(CAR(BgL_ezd21392zd2_146) ==
														CNST_TABLE_REF(((long) 1))))
													{	/* Expand/expander.scm 137 */
														if (PAIRP(BgL_cdrzd21396zd2_148))
															{	/* Expand/expander.scm 137 */
																if (NULLP(CDR(BgL_cdrzd21396zd2_148)))
																	{	/* Expand/expander.scm 137 */
																		BgL_idz00_141 = CAR(BgL_cdrzd21396zd2_148);
																		if (CBOOL
																			(BGl_getzd2compilerzd2expanderz00zz__macroz00
																				(BgL_idz00_141)))
																			{	/* Expand/expander.scm 139 */
																				BFALSE;
																			}
																		else
																			{	/* Expand/expander.scm 139 */
																				BGl_errorz00zz__errorz00
																					(BGl_string1566z00zzexpand_expanderz00,
																					BGl_string1567z00zzexpand_expanderz00,
																					BgL_idz00_141);
																			}
																	}
																else
																	{	/* Expand/expander.scm 137 */
																	BgL_tagzd21391zd2_145:
																		{	/* Expand/expander.scm 149 */
																			bool_t BgL_testz00_420;

																			{	/* Expand/expander.scm 149 */
																				obj_t BgL_arg1556z00_170;

																				BgL_arg1556z00_170 = CAR(BgL_mz00_140);
																				BgL_testz00_420 =
																					CBOOL
																					(BGl_getzd2compilerzd2expanderz00zz__macroz00
																					(BgL_arg1556z00_170));
																			}
																			if (BgL_testz00_420)
																				{	/* Expand/expander.scm 149 */
																					BFALSE;
																				}
																			else
																				{	/* Expand/expander.scm 149 */
																					BGl_errorz00zz__errorz00
																						(BGl_string1566z00zzexpand_expanderz00,
																						BGl_string1568z00zzexpand_expanderz00,
																						CDR(BgL_mz00_140));
																				}
																		}
																	}
															}
														else
															{	/* Expand/expander.scm 137 */
																goto BgL_tagzd21391zd2_145;
															}
													}
												else
													{	/* Expand/expander.scm 137 */
														if (
															(CAR(BgL_ezd21392zd2_146) ==
																CNST_TABLE_REF(((long) 0))))
															{	/* Expand/expander.scm 137 */
																if (PAIRP(BgL_cdrzd21396zd2_148))
																	{	/* Expand/expander.scm 137 */
																		if (NULLP(CDR(BgL_cdrzd21396zd2_148)))
																			{	/* Expand/expander.scm 137 */
																				BgL_idz00_143 =
																					CAR(BgL_cdrzd21396zd2_148);
																				if (CBOOL
																					(BGl_getzd2compilerzd2expanderz00zz__macroz00
																						(BgL_idz00_143)))
																					{	/* Expand/expander.scm 144 */
																						BFALSE;
																					}
																				else
																					{	/* Expand/expander.scm 144 */
																						BGl_errorz00zz__errorz00
																							(BGl_string1566z00zzexpand_expanderz00,
																							BGl_string1567z00zzexpand_expanderz00,
																							BgL_idz00_143);
																					}
																			}
																		else
																			{	/* Expand/expander.scm 137 */
																				goto BgL_tagzd21391zd2_145;
																			}
																	}
																else
																	{	/* Expand/expander.scm 137 */
																		goto BgL_tagzd21391zd2_145;
																	}
															}
														else
															{	/* Expand/expander.scm 137 */
																goto BgL_tagzd21391zd2_145;
															}
													}
											}
										else
											{	/* Expand/expander.scm 137 */
												goto BgL_tagzd21391zd2_145;
											}
									}
								}
							}
							{
								obj_t BgL_l1511z00_440;

								BgL_l1511z00_440 = CDR(BgL_l1511z00_137);
								BgL_l1511z00_137 = BgL_l1511z00_440;
								goto BgL_zc3anonymousza31533ze3z83_138;
							}
						}
					else
						{	/* Expand/expander.scm 136 */
							BgL_auxz00_398 = ((bool_t) 1);
						}
					return BBOOL(BgL_auxz00_398);
				}
			}
		}
	}



/* _check-to-be-macros */
	obj_t BGl__checkzd2tozd2bezd2macroszd2zzexpand_expanderz00(obj_t
		BgL_envz00_281)
	{
		AN_OBJECT;
		{	/* Expand/expander.scm 135 */
			return BGl_checkzd2tozd2bezd2macroszd2zzexpand_expanderz00();
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzexpand_expanderz00()
	{
		AN_OBJECT;
		{	/* Expand/expander.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzexpand_expanderz00()
	{
		AN_OBJECT;
		{	/* Expand/expander.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzexpand_expanderz00()
	{
		AN_OBJECT;
		{	/* Expand/expander.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string1569z00zzexpand_expanderz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1569z00zzexpand_expanderz00));
			return
				BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string1569z00zzexpand_expanderz00));
		}
	}

#ifdef __cplusplus
}
#endif
