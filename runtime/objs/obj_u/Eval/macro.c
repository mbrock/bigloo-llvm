/*===========================================================================*/
/*   (Eval/macro.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Eval/macro.scm -indent -o objs/obj_u/Eval/macro.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_modulezd2macrozd2tablez00zz__macroz00();
	static obj_t BGl_requirezd2initializa7ationz75zz__macroz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_getzd2compilerzd2expanderz00zz__macroz00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__macroz00();
	extern obj_t BGl_evalzd2modulezd2zz__evmodulez00();
	static obj_t BGl__installzd2expanderzd2zz__macroz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_evmodulezd2macrozd2tablez00zz__evmodulez00(obj_t);
	static obj_t BGl_za2evalzd2macrozd2mutexza2z00zz__macroz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_getzd2evalzd2expanderz00zz__macroz00(obj_t);
	static obj_t BGl_za2evalzd2macrozd2tableza2z00zz__macroz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_installzd2evalzd2expanderz00zz__macroz00(obj_t,
		obj_t);
	extern bool_t BGl_evmodulezf3zf3zz__evmodulez00(obj_t);
	static obj_t BGl_zc3anonymousza31905ze3z83zz__macroz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__macroz00();
	extern obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
	static obj_t BGl__getzd2evalzd2expanderz00zz__macroz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__macroz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__everrorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zz__macroz00();
	static obj_t BGl__installzd2compilerzd2expanderz00zz__macroz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__getzd2compilerzd2expanderz00zz__macroz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_installzd2expanderzd2zz__macroz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31905ze3_2182z83zz__macroz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31905ze3_2183z83zz__macroz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_installzd2compilerzd2expanderz00zz__macroz00(obj_t, obj_t);
	extern obj_t BGl_hashtablezd2updatez12zc0zz__hashz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_za2compilerzd2macrozd2mutexza2z00zz__macroz00 = BUNSPEC;
	static obj_t BGl__installzd2evalzd2expanderz00zz__macroz00(obj_t, obj_t,
		obj_t);
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	extern obj_t BGl_evmeaningzd2warningzd2zz__everrorz00(obj_t, obj_t);
	static obj_t BGl_za2compilerzd2macrozd2tableza2z00zz__macroz00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zz__macroz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2evalzd2expanderzd2envzd2zz__macroz00,
		BgL_bgl__getza7d2evalza7d2ex2196z00,
		BGl__getzd2evalzd2expanderz00zz__macroz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2compilerzd2expanderzd2envzd2zz__macroz00,
		BgL_bgl__getza7d2compilerza72197z00,
		BGl__getzd2compilerzd2expanderz00zz__macroz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_installzd2expanderzd2envz00zz__macroz00,
		BgL_bgl__installza7d2expan2198za7, BGl__installzd2expanderzd2zz__macroz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_installzd2compilerzd2expanderzd2envzd2zz__macroz00,
		BgL_bgl__installza7d2compi2199za7,
		BGl__installzd2compilerzd2expanderz00zz__macroz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_installzd2evalzd2expanderzd2envzd2zz__macroz00,
		BgL_bgl__installza7d2evalza72200z00,
		BGl__installzd2evalzd2expanderz00zz__macroz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2184z00zz__macroz00,
		BgL_bgl_string2184za700za7za7_2201za7, "eval-macros", 11);
	      DEFINE_STRING(BGl_string2185z00zz__macroz00,
		BgL_bgl_string2185za700za7za7_2202za7, "compiler-macros", 15);
	      DEFINE_STRING(BGl_string2186z00zz__macroz00,
		BgL_bgl_string2186za700za7za7_2203za7, "eval", 4);
	      DEFINE_STRING(BGl_string2187z00zz__macroz00,
		BgL_bgl_string2187za700za7za7_2204za7, "Redefinition of expander -- ", 28);
	      DEFINE_STRING(BGl_string2188z00zz__macroz00,
		BgL_bgl_string2188za700za7za7_2205za7, "install-eval-expander", 21);
	      DEFINE_STRING(BGl_string2190z00zz__macroz00,
		BgL_bgl_string2190za700za7za7_2206za7, "Illegal expander keyword", 24);
	      DEFINE_STRING(BGl_string2189z00zz__macroz00,
		BgL_bgl_string2189za700za7za7_2207za7, "Illegal expander expander", 25);
	      DEFINE_STRING(BGl_string2191z00zz__macroz00,
		BgL_bgl_string2191za700za7za7_2208za7, "Redefinition of ", 16);
	      DEFINE_STRING(BGl_string2192z00zz__macroz00,
		BgL_bgl_string2192za700za7za7_2209za7, " expander -- ", 13);
	      DEFINE_STRING(BGl_string2193z00zz__macroz00,
		BgL_bgl_string2193za700za7za7_2210za7, "install-expander", 16);
	      DEFINE_STRING(BGl_string2194z00zz__macroz00,
		BgL_bgl_string2194za700za7za7_2211za7, "compiler", 8);
	      DEFINE_STRING(BGl_string2195z00zz__macroz00,
		BgL_bgl_string2195za700za7za7_2212za7, "__macro", 7);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__macroz00(long
		BgL_checksumz00_1571, char *BgL_fromz00_1572)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__macroz00))
				{
					BGl_requirezd2initializa7ationz75zz__macroz00 = BBOOL(((bool_t) 0));
					BGl_importedzd2moduleszd2initz00zz__macroz00();
					BGl_toplevelzd2initzd2zz__macroz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__macroz00()
	{
		AN_OBJECT;
		{	/* Eval/macro.scm 14 */
			BGl_za2evalzd2macrozd2mutexza2z00zz__macroz00 =
				bgl_make_mutex(BGl_string2184z00zz__macroz00);
			BGl_za2compilerzd2macrozd2mutexza2z00zz__macroz00 =
				bgl_make_mutex(BGl_string2185z00zz__macroz00);
			BGl_za2evalzd2macrozd2tableza2z00zz__macroz00 =
				BGl_makezd2hashtablezd2zz__hashz00(BNIL);
			return (BGl_za2compilerzd2macrozd2tableza2z00zz__macroz00 =
				BGl_makezd2hashtablezd2zz__hashz00(BNIL), BUNSPEC);
		}
	}



/* module-macro-table */
	obj_t BGl_modulezd2macrozd2tablez00zz__macroz00()
	{
		AN_OBJECT;
		{	/* Eval/macro.scm 75 */
			{	/* Eval/macro.scm 76 */
				obj_t BgL_mz00_808;

				BgL_mz00_808 = BGl_evalzd2modulezd2zz__evmodulez00();
				if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_mz00_808))
					{	/* Eval/macro.scm 77 */
						return BGl_evmodulezd2macrozd2tablez00zz__evmodulez00(BgL_mz00_808);
					}
				else
					{	/* Eval/macro.scm 77 */
						return BFALSE;
					}
			}
		}
	}



/* install-eval-expander */
	BGL_EXPORTED_DEF obj_t BGl_installzd2evalzd2expanderz00zz__macroz00(obj_t
		BgL_keywordz00_19, obj_t BgL_expanderz00_20)
	{
		AN_OBJECT;
		{	/* Eval/macro.scm 101 */
			if (SYMBOLP(BgL_keywordz00_19))
				{	/* Eval/macro.scm 103 */
					if (PROCEDUREP(BgL_expanderz00_20))
						{	/* Eval/macro.scm 105 */
							{	/* Eval/macro.scm 108 */
								obj_t BgL_g1883z00_821;

								BgL_g1883z00_821 =
									BGl_za2evalzd2macrozd2mutexza2z00zz__macroz00;
								{	/* Llib/thread.scm 201 */

									if ((((long) 0) == ((long) 0)))
										{	/* Llib/thread.scm 201 */
											bgl_mutex_lock(BgL_g1883z00_821);
										}
									else
										{	/* Llib/thread.scm 201 */
											bgl_mutex_timed_lock(BgL_g1883z00_821, ((long) 0));
							}}}
							{	/* Eval/macro.scm 109 */
								obj_t BgL_mtablez00_823;

								BgL_mtablez00_823 = BGl_modulezd2macrozd2tablez00zz__macroz00();
								if (CBOOL(BgL_mtablez00_823))
									{	/* Eval/macro.scm 110 */
										{	/* Eval/macro.scm 112 */
											obj_t BgL_keyz00_1305;

											obj_t BgL_expanderz00_1306;

											BgL_keyz00_1305 = BgL_keywordz00_19;
											BgL_expanderz00_1306 = BgL_expanderz00_20;
											{	/* Eval/macro.scm 112 */
												obj_t BgL_zc3anonymousza31905ze3z83_1539;

												BgL_zc3anonymousza31905ze3z83_1539 =
													make_fx_procedure
													(BGl_zc3anonymousza31905ze3z83zz__macroz00,
													(int) (((long) 1)), (int) (((long) 3)));
												PROCEDURE_SET(BgL_zc3anonymousza31905ze3z83_1539,
													(int) (((long) 0)), BGl_string2186z00zz__macroz00);
												PROCEDURE_SET(BgL_zc3anonymousza31905ze3z83_1539,
													(int) (((long) 1)), BgL_keyz00_1305);
												PROCEDURE_SET(BgL_zc3anonymousza31905ze3z83_1539,
													(int) (((long) 2)), BgL_expanderz00_1306);
												BGl_hashtablezd2updatez12zc0zz__hashz00
													(BgL_mtablez00_823, BgL_keyz00_1305,
													BgL_zc3anonymousza31905ze3z83_1539,
													BgL_expanderz00_1306);
										}}
										if (CBOOL(BGl_hashtablezd2getzd2zz__hashz00
												(BGl_za2evalzd2macrozd2tableza2z00zz__macroz00,
													BgL_keywordz00_19)))
											{	/* Eval/macro.scm 114 */
												obj_t BgL_list1914z00_825;

												{	/* Eval/macro.scm 114 */
													obj_t BgL_arg1916z00_827;

													{	/* Eval/macro.scm 114 */
														obj_t BgL_arg1919z00_829;

														BgL_arg1919z00_829 =
															MAKE_PAIR(BgL_keywordz00_19, BNIL);
														BgL_arg1916z00_827 =
															MAKE_PAIR(BGl_string2187z00zz__macroz00,
															BgL_arg1919z00_829);
													}
													BgL_list1914z00_825 =
														MAKE_PAIR(BGl_string2188z00zz__macroz00,
														BgL_arg1916z00_827);
												}
												BGl_evmeaningzd2warningzd2zz__everrorz00(BFALSE,
													BgL_list1914z00_825);
											}
										else
											{	/* Eval/macro.scm 113 */
												BFALSE;
											}
									}
								else
									{	/* Eval/macro.scm 118 */
										obj_t BgL_tablez00_1315;

										obj_t BgL_keyz00_1316;

										obj_t BgL_expanderz00_1317;

										BgL_tablez00_1315 =
											BGl_za2evalzd2macrozd2tableza2z00zz__macroz00;
										BgL_keyz00_1316 = BgL_keywordz00_19;
										BgL_expanderz00_1317 = BgL_expanderz00_20;
										{	/* Eval/macro.scm 118 */
											obj_t BgL_zc3anonymousza31905ze3z83_1540;

											BgL_zc3anonymousza31905ze3z83_1540 =
												make_fx_procedure
												(BGl_zc3anonymousza31905ze3_2182z83zz__macroz00,
												(int) (((long) 1)), (int) (((long) 3)));
											PROCEDURE_SET(BgL_zc3anonymousza31905ze3z83_1540,
												(int) (((long) 0)), BGl_string2186z00zz__macroz00);
											PROCEDURE_SET(BgL_zc3anonymousza31905ze3z83_1540,
												(int) (((long) 1)), BgL_keyz00_1316);
											PROCEDURE_SET(BgL_zc3anonymousza31905ze3z83_1540,
												(int) (((long) 2)), BgL_expanderz00_1317);
											BGl_hashtablezd2updatez12zc0zz__hashz00(BgL_tablez00_1315,
												BgL_keyz00_1316, BgL_zc3anonymousza31905ze3z83_1540,
												BgL_expanderz00_1317);
							}}}
							{	/* Eval/macro.scm 119 */
								obj_t BgL_mz00_1326;

								BgL_mz00_1326 = BGl_za2evalzd2macrozd2mutexza2z00zz__macroz00;
								return BBOOL(bgl_mutex_unlock(BgL_mz00_1326));
							}
						}
					else
						{	/* Eval/macro.scm 105 */
							return
								BGl_errorz00zz__errorz00(BGl_string2188z00zz__macroz00,
								BGl_string2189z00zz__macroz00, BgL_expanderz00_20);
						}
				}
			else
				{	/* Eval/macro.scm 103 */
					return
						BGl_errorz00zz__errorz00(BGl_string2188z00zz__macroz00,
						BGl_string2190z00zz__macroz00, BgL_keywordz00_19);
				}
		}
	}



/* _install-eval-expander */
	obj_t BGl__installzd2evalzd2expanderz00zz__macroz00(obj_t BgL_envz00_1541,
		obj_t BgL_keywordz00_1542, obj_t BgL_expanderz00_1543)
	{
		AN_OBJECT;
		{	/* Eval/macro.scm 101 */
			return
				BGl_installzd2evalzd2expanderz00zz__macroz00(BgL_keywordz00_1542,
				BgL_expanderz00_1543);
		}
	}



/* <anonymous:1905> */
	obj_t BGl_zc3anonymousza31905ze3z83zz__macroz00(obj_t BgL_envz00_1544,
		obj_t BgL_xz00_1548)
	{
		AN_OBJECT;
		{	/* Eval/macro.scm 86 */
			{	/* Eval/macro.scm 112 */
				obj_t BgL_wherez00_1545;

				obj_t BgL_keyz00_1546;

				obj_t BgL_expanderz00_1547;

				BgL_wherez00_1545 = PROCEDURE_REF(BgL_envz00_1544, (int) (((long) 0)));
				BgL_keyz00_1546 = PROCEDURE_REF(BgL_envz00_1544, (int) (((long) 1)));
				BgL_expanderz00_1547 =
					PROCEDURE_REF(BgL_envz00_1544, (int) (((long) 2)));
				{
					obj_t BgL_xz00_1309;

					BgL_xz00_1309 = BgL_xz00_1548;
					{	/* Eval/macro.scm 112 */
						obj_t BgL_arg1907z00_1311;

						BgL_arg1907z00_1311 =
							string_append_3(BGl_string2191z00zz__macroz00, BgL_wherez00_1545,
							BGl_string2192z00zz__macroz00);
						{	/* Eval/macro.scm 112 */
							obj_t BgL_list1908z00_1312;

							{	/* Eval/macro.scm 112 */
								obj_t BgL_arg1909z00_1313;

								{	/* Eval/macro.scm 112 */
									obj_t BgL_arg1910z00_1314;

									BgL_arg1910z00_1314 = MAKE_PAIR(BgL_keyz00_1546, BNIL);
									BgL_arg1909z00_1313 =
										MAKE_PAIR(BgL_arg1907z00_1311, BgL_arg1910z00_1314);
								}
								BgL_list1908z00_1312 =
									MAKE_PAIR(BGl_string2193z00zz__macroz00, BgL_arg1909z00_1313);
							}
							BGl_evmeaningzd2warningzd2zz__everrorz00(BFALSE,
								BgL_list1908z00_1312);
					}}
					return BgL_expanderz00_1547;
				}
			}
		}
	}



/* <anonymous:1905>_2182 */
	obj_t BGl_zc3anonymousza31905ze3_2182z83zz__macroz00(obj_t BgL_envz00_1549,
		obj_t BgL_xz00_1553)
	{
		AN_OBJECT;
		{	/* Eval/macro.scm 86 */
			{	/* Eval/macro.scm 118 */
				obj_t BgL_wherez00_1550;

				obj_t BgL_keyz00_1551;

				obj_t BgL_expanderz00_1552;

				BgL_wherez00_1550 = PROCEDURE_REF(BgL_envz00_1549, (int) (((long) 0)));
				BgL_keyz00_1551 = PROCEDURE_REF(BgL_envz00_1549, (int) (((long) 1)));
				BgL_expanderz00_1552 =
					PROCEDURE_REF(BgL_envz00_1549, (int) (((long) 2)));
				{
					obj_t BgL_xz00_1320;

					BgL_xz00_1320 = BgL_xz00_1553;
					{	/* Eval/macro.scm 118 */
						obj_t BgL_arg1907z00_1322;

						BgL_arg1907z00_1322 =
							string_append_3(BGl_string2191z00zz__macroz00, BgL_wherez00_1550,
							BGl_string2192z00zz__macroz00);
						{	/* Eval/macro.scm 118 */
							obj_t BgL_list1908z00_1323;

							{	/* Eval/macro.scm 118 */
								obj_t BgL_arg1909z00_1324;

								{	/* Eval/macro.scm 118 */
									obj_t BgL_arg1910z00_1325;

									BgL_arg1910z00_1325 = MAKE_PAIR(BgL_keyz00_1551, BNIL);
									BgL_arg1909z00_1324 =
										MAKE_PAIR(BgL_arg1907z00_1322, BgL_arg1910z00_1325);
								}
								BgL_list1908z00_1323 =
									MAKE_PAIR(BGl_string2193z00zz__macroz00, BgL_arg1909z00_1324);
							}
							BGl_evmeaningzd2warningzd2zz__everrorz00(BFALSE,
								BgL_list1908z00_1323);
					}}
					return BgL_expanderz00_1552;
				}
			}
		}
	}



/* install-compiler-expander */
	BGL_EXPORTED_DEF obj_t BGl_installzd2compilerzd2expanderz00zz__macroz00(obj_t
		BgL_keywordz00_21, obj_t BgL_expanderz00_22)
	{
		AN_OBJECT;
		{	/* Eval/macro.scm 126 */
			if (SYMBOLP(BgL_keywordz00_21))
				{	/* Eval/macro.scm 128 */
					if (PROCEDUREP(BgL_expanderz00_22))
						{	/* Eval/macro.scm 130 */
							{	/* Eval/macro.scm 133 */
								obj_t BgL_g1883z00_832;

								BgL_g1883z00_832 =
									BGl_za2compilerzd2macrozd2mutexza2z00zz__macroz00;
								{	/* Llib/thread.scm 201 */

									if ((((long) 0) == ((long) 0)))
										{	/* Llib/thread.scm 201 */
											bgl_mutex_lock(BgL_g1883z00_832);
										}
									else
										{	/* Llib/thread.scm 201 */
											bgl_mutex_timed_lock(BgL_g1883z00_832, ((long) 0));
							}}}
							{	/* Eval/macro.scm 134 */
								obj_t BgL_tablez00_1334;

								obj_t BgL_keyz00_1335;

								obj_t BgL_expanderz00_1336;

								BgL_tablez00_1334 =
									BGl_za2compilerzd2macrozd2tableza2z00zz__macroz00;
								BgL_keyz00_1335 = BgL_keywordz00_21;
								BgL_expanderz00_1336 = BgL_expanderz00_22;
								{	/* Eval/macro.scm 134 */
									obj_t BgL_zc3anonymousza31905ze3z83_1554;

									BgL_zc3anonymousza31905ze3z83_1554 =
										make_fx_procedure
										(BGl_zc3anonymousza31905ze3_2183z83zz__macroz00,
										(int) (((long) 1)), (int) (((long) 3)));
									PROCEDURE_SET(BgL_zc3anonymousza31905ze3z83_1554,
										(int) (((long) 0)), BGl_string2194z00zz__macroz00);
									PROCEDURE_SET(BgL_zc3anonymousza31905ze3z83_1554,
										(int) (((long) 1)), BgL_keyz00_1335);
									PROCEDURE_SET(BgL_zc3anonymousza31905ze3z83_1554,
										(int) (((long) 2)), BgL_expanderz00_1336);
									BGl_hashtablezd2updatez12zc0zz__hashz00(BgL_tablez00_1334,
										BgL_keyz00_1335, BgL_zc3anonymousza31905ze3z83_1554,
										BgL_expanderz00_1336);
							}}
							{	/* Eval/macro.scm 135 */
								obj_t BgL_mz00_1345;

								BgL_mz00_1345 =
									BGl_za2compilerzd2macrozd2mutexza2z00zz__macroz00;
								return BBOOL(bgl_mutex_unlock(BgL_mz00_1345));
							}
						}
					else
						{	/* Eval/macro.scm 130 */
							return
								BGl_errorz00zz__errorz00(BGl_string2188z00zz__macroz00,
								BGl_string2189z00zz__macroz00, BgL_expanderz00_22);
						}
				}
			else
				{	/* Eval/macro.scm 128 */
					return
						BGl_errorz00zz__errorz00(BGl_string2188z00zz__macroz00,
						BGl_string2190z00zz__macroz00, BgL_keywordz00_21);
				}
		}
	}



/* _install-compiler-expander */
	obj_t BGl__installzd2compilerzd2expanderz00zz__macroz00(obj_t BgL_envz00_1555,
		obj_t BgL_keywordz00_1556, obj_t BgL_expanderz00_1557)
	{
		AN_OBJECT;
		{	/* Eval/macro.scm 126 */
			return
				BGl_installzd2compilerzd2expanderz00zz__macroz00(BgL_keywordz00_1556,
				BgL_expanderz00_1557);
		}
	}



/* <anonymous:1905>_2183 */
	obj_t BGl_zc3anonymousza31905ze3_2183z83zz__macroz00(obj_t BgL_envz00_1558,
		obj_t BgL_xz00_1562)
	{
		AN_OBJECT;
		{	/* Eval/macro.scm 86 */
			{	/* Eval/macro.scm 134 */
				obj_t BgL_wherez00_1559;

				obj_t BgL_keyz00_1560;

				obj_t BgL_expanderz00_1561;

				BgL_wherez00_1559 = PROCEDURE_REF(BgL_envz00_1558, (int) (((long) 0)));
				BgL_keyz00_1560 = PROCEDURE_REF(BgL_envz00_1558, (int) (((long) 1)));
				BgL_expanderz00_1561 =
					PROCEDURE_REF(BgL_envz00_1558, (int) (((long) 2)));
				{
					obj_t BgL_xz00_1339;

					BgL_xz00_1339 = BgL_xz00_1562;
					{	/* Eval/macro.scm 134 */
						obj_t BgL_arg1907z00_1341;

						BgL_arg1907z00_1341 =
							string_append_3(BGl_string2191z00zz__macroz00, BgL_wherez00_1559,
							BGl_string2192z00zz__macroz00);
						{	/* Eval/macro.scm 134 */
							obj_t BgL_list1908z00_1342;

							{	/* Eval/macro.scm 134 */
								obj_t BgL_arg1909z00_1343;

								{	/* Eval/macro.scm 134 */
									obj_t BgL_arg1910z00_1344;

									BgL_arg1910z00_1344 = MAKE_PAIR(BgL_keyz00_1560, BNIL);
									BgL_arg1909z00_1343 =
										MAKE_PAIR(BgL_arg1907z00_1341, BgL_arg1910z00_1344);
								}
								BgL_list1908z00_1342 =
									MAKE_PAIR(BGl_string2193z00zz__macroz00, BgL_arg1909z00_1343);
							}
							BGl_evmeaningzd2warningzd2zz__everrorz00(BFALSE,
								BgL_list1908z00_1342);
					}}
					return BgL_expanderz00_1561;
				}
			}
		}
	}



/* install-expander */
	BGL_EXPORTED_DEF obj_t BGl_installzd2expanderzd2zz__macroz00(obj_t
		BgL_keywordz00_23, obj_t BgL_expanderz00_24)
	{
		AN_OBJECT;
		{	/* Eval/macro.scm 142 */
			BGl_installzd2evalzd2expanderz00zz__macroz00(BgL_keywordz00_23,
				BgL_expanderz00_24);
			return BGl_installzd2compilerzd2expanderz00zz__macroz00(BgL_keywordz00_23,
				BgL_expanderz00_24);
		}
	}



/* _install-expander */
	obj_t BGl__installzd2expanderzd2zz__macroz00(obj_t BgL_envz00_1563,
		obj_t BgL_keywordz00_1564, obj_t BgL_expanderz00_1565)
	{
		AN_OBJECT;
		{	/* Eval/macro.scm 142 */
			return
				BGl_installzd2expanderzd2zz__macroz00(BgL_keywordz00_1564,
				BgL_expanderz00_1565);
		}
	}



/* get-eval-expander */
	BGL_EXPORTED_DEF obj_t BGl_getzd2evalzd2expanderz00zz__macroz00(obj_t
		BgL_keywordz00_25)
	{
		AN_OBJECT;
		{	/* Eval/macro.scm 151 */
			{	/* Eval/macro.scm 152 */
				obj_t BgL_g1883z00_834;

				BgL_g1883z00_834 = BGl_za2evalzd2macrozd2mutexza2z00zz__macroz00;
				{	/* Llib/thread.scm 201 */

					if ((((long) 0) == ((long) 0)))
						{	/* Llib/thread.scm 201 */
							bgl_mutex_lock(BgL_g1883z00_834);
						}
					else
						{	/* Llib/thread.scm 201 */
							bgl_mutex_timed_lock(BgL_g1883z00_834, ((long) 0));
			}}}
			{	/* Eval/macro.scm 153 */
				obj_t BgL_mtablez00_836;

				BgL_mtablez00_836 = BGl_modulezd2macrozd2tablez00zz__macroz00();
				{	/* Eval/macro.scm 153 */
					obj_t BgL_mz00_837;

					{	/* Eval/macro.scm 154 */
						obj_t BgL__ortest_1824z00_838;

						if (CBOOL(BgL_mtablez00_836))
							{	/* Eval/macro.scm 154 */
								BgL__ortest_1824z00_838 =
									BGl_hashtablezd2getzd2zz__hashz00(BgL_mtablez00_836,
									BgL_keywordz00_25);
							}
						else
							{	/* Eval/macro.scm 154 */
								BgL__ortest_1824z00_838 = BFALSE;
							}
						if (CBOOL(BgL__ortest_1824z00_838))
							{	/* Eval/macro.scm 154 */
								BgL_mz00_837 = BgL__ortest_1824z00_838;
							}
						else
							{	/* Eval/macro.scm 154 */
								BgL_mz00_837 =
									BGl_hashtablezd2getzd2zz__hashz00
									(BGl_za2evalzd2macrozd2tableza2z00zz__macroz00,
									BgL_keywordz00_25);
							}
					}
					{	/* Eval/macro.scm 154 */

						bgl_mutex_unlock(BGl_za2evalzd2macrozd2mutexza2z00zz__macroz00);
						return BgL_mz00_837;
					}
				}
			}
		}
	}



/* _get-eval-expander */
	obj_t BGl__getzd2evalzd2expanderz00zz__macroz00(obj_t BgL_envz00_1566,
		obj_t BgL_keywordz00_1567)
	{
		AN_OBJECT;
		{	/* Eval/macro.scm 151 */
			return BGl_getzd2evalzd2expanderz00zz__macroz00(BgL_keywordz00_1567);
		}
	}



/* get-compiler-expander */
	BGL_EXPORTED_DEF obj_t BGl_getzd2compilerzd2expanderz00zz__macroz00(obj_t
		BgL_keywordz00_26)
	{
		AN_OBJECT;
		{	/* Eval/macro.scm 167 */
			{	/* Eval/macro.scm 168 */
				obj_t BgL_g1883z00_1352;

				BgL_g1883z00_1352 = BGl_za2compilerzd2macrozd2mutexza2z00zz__macroz00;
				{	/* Eval/macro.scm 168 */

					if ((((long) 0) == ((long) 0)))
						{	/* Eval/macro.scm 168 */
							bgl_mutex_lock(BgL_g1883z00_1352);
						}
					else
						{	/* Eval/macro.scm 168 */
							bgl_mutex_timed_lock(BgL_g1883z00_1352, ((long) 0));
			}}}
			{	/* Eval/macro.scm 168 */
				obj_t BgL_mz00_1354;

				BgL_mz00_1354 =
					BGl_hashtablezd2getzd2zz__hashz00
					(BGl_za2compilerzd2macrozd2tableza2z00zz__macroz00,
					BgL_keywordz00_26);
				bgl_mutex_unlock(BGl_za2compilerzd2macrozd2mutexza2z00zz__macroz00);
				return BgL_mz00_1354;
			}
		}
	}



/* _get-compiler-expander */
	obj_t BGl__getzd2compilerzd2expanderz00zz__macroz00(obj_t BgL_envz00_1568,
		obj_t BgL_keywordz00_1569)
	{
		AN_OBJECT;
		{	/* Eval/macro.scm 167 */
			return BGl_getzd2compilerzd2expanderz00zz__macroz00(BgL_keywordz00_1569);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__macroz00()
	{
		AN_OBJECT;
		{	/* Eval/macro.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__macroz00()
	{
		AN_OBJECT;
		{	/* Eval/macro.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__macroz00()
	{
		AN_OBJECT;
		{	/* Eval/macro.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2195z00zz__macroz00));
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 81619416),
				BSTRING_TO_STRING(BGl_string2195z00zz__macroz00));
			BGl_modulezd2initializa7ationz75zz__everrorz00(((long) 357788136),
				BSTRING_TO_STRING(BGl_string2195z00zz__macroz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2195z00zz__macroz00));
			return
				BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2195z00zz__macroz00));
		}
	}

#ifdef __cplusplus
}
#endif
