/*===========================================================================*/
/*   (Cnst/cache.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cnst/cache.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DEF obj_t BGl_za2consza2z00zzcnst_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bstringzd2ze3symbolza2z31zzcnst_cachez00 =
		BUNSPEC;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcnst_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2longzd2ze3intza2z31zzcnst_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2btrueza2z00zzcnst_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2boolzd2ze3bboolza2z31zzcnst_cachez00 = BUNSPEC;
	extern obj_t BGl_getzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzcnst_cachez00();
	BGL_EXPORTED_DEF obj_t BGl_za2llongzd2ze3bllongza2z31zzcnst_cachez00 =
		BUNSPEC;
	static obj_t BGl__stopzd2cnstzd2cachez12z12zzcnst_cachez00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2stringzd2ze3ucs2stringza2z31zzcnst_cachez00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bfalseza2z00zzcnst_cachez00 = BUNSPEC;
	static obj_t BGl_cnstzd2initzd2zzcnst_cachez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcnst_cachez00();
	BGL_EXPORTED_DEF obj_t BGl_za2makezd2vazd2procedureza2z00zzcnst_cachez00 =
		BUNSPEC;
	static bool_t BGl_za2cachezd2startedzf3za2z21zzcnst_cachez00;
	BGL_EXPORTED_DEF obj_t BGl_za2vectorzd2tagzd2setz12za2z12zzcnst_cachez00 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcnst_cachez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_EXPORTED_DEF obj_t BGl_za2makezd2fxzd2procedureza2z00zzcnst_cachez00 =
		BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzcnst_cachez00();
	BGL_EXPORTED_DEF obj_t BGl_za2bstringzd2ze3keywordza2z31zzcnst_cachez00 =
		BUNSPEC;
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_startzd2cnstzd2cachez12z12zzcnst_cachez00();
	BGL_EXPORTED_DEF obj_t BGl_za2cnstzd2tablezd2refza2z00zzcnst_cachez00 =
		BUNSPEC;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_EXPORTED_DEF obj_t BGl_za2doublezd2ze3realza2z31zzcnst_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2listzd2ze3structza2z31zzcnst_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2elongzd2ze3belongza2z31zzcnst_cachez00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2cnstzd2tablezd2setz12za2z12zzcnst_cachez00 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_stopzd2cnstzd2cachez12z12zzcnst_cachez00();
	static obj_t BGl__startzd2cnstzd2cachez12z12zzcnst_cachez00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2listzd2ze3vectorza2z31zzcnst_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2stringzd2ze3bignumza2z31zzcnst_cachez00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2stringzd2ze3bstringza2z31zzcnst_cachez00 =
		BUNSPEC;
	static obj_t BGl_libraryzd2moduleszd2initz00zzcnst_cachez00();
	static obj_t BGl_methodzd2initzd2zzcnst_cachez00();
	static obj_t __cnst[22];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stopzd2cnstzd2cachez12zd2envzc0zzcnst_cachez00,
		BgL_bgl__stopza7d2cnstza7d2c2179z00,
		BGl__stopzd2cnstzd2cachez12z12zzcnst_cachez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_startzd2cnstzd2cachez12zd2envzc0zzcnst_cachez00,
		BgL_bgl__startza7d2cnstza7d22180z00,
		BGl__startzd2cnstzd2cachez12z12zzcnst_cachez00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2173z00zzcnst_cachez00,
		BgL_bgl_string2173za700za7za7c2181za7, "cnst_cache", 10);
	      DEFINE_STRING(BGl_string2174z00zzcnst_cachez00,
		BgL_bgl_string2174za700za7za7c2182za7,
		"__bignum $string->bignum list->struct vector-tag-set! list->vector $llong->bllong $elong->belong $double->real make-va-procedure make-fx-procedure $long->int $bool->bbool c-bstring->keyword c-bstring->symbol c-utf8-string->ucs2-string $string->bstring bfalse btrue c-cons cnst-table-set! foreign cnst-table-ref ",
		311);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcnst_cachez00(long
		BgL_checksumz00_506, char *BgL_fromz00_507)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcnst_cachez00))
				{
					BGl_requirezd2initializa7ationz75zzcnst_cachez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcnst_cachez00();
					BGl_cnstzd2initzd2zzcnst_cachez00();
					BGl_importedzd2moduleszd2initz00zzcnst_cachez00();
					BGl_toplevelzd2initzd2zzcnst_cachez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcnst_cachez00()
	{
		AN_OBJECT;
		{	/* Cnst/cache.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cnst_cache");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcnst_cachez00()
	{
		AN_OBJECT;
		{	/* Cnst/cache.scm 15 */
			{	/* Cnst/cache.scm 15 */
				obj_t BgL_cportz00_498;

				BgL_cportz00_498 =
					bgl_open_input_string(BGl_string2174z00zzcnst_cachez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_499;

					BgL_iz00_499 = ((long) 21);
				BgL_loopz00_500:
					if ((BgL_iz00_499 == ((long) -1)))
						{	/* Cnst/cache.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cnst/cache.scm 15 */
							{	/* Cnst/cache.scm 15 */
								obj_t BgL_arg2178z00_502;

								{	/* Cnst/cache.scm 15 */

									{	/* Cnst/cache.scm 15 */
										obj_t BgL_locationz00_504;

										BgL_locationz00_504 = BBOOL(((bool_t) 0));
										{	/* Cnst/cache.scm 15 */

											BgL_arg2178z00_502 =
												BGl_readz00zz__readerz00(BgL_cportz00_498,
												BgL_locationz00_504);
										}
									}
								}
								{	/* Cnst/cache.scm 15 */
									int BgL_auxz00_522;

									BgL_auxz00_522 = (int) (BgL_iz00_499);
									CNST_TABLE_SET(BgL_auxz00_522, BgL_arg2178z00_502);
							}}
							{	/* Cnst/cache.scm 15 */
								int BgL_auxz00_505;

								BgL_auxz00_505 = (int) ((BgL_iz00_499 - ((long) 1)));
								{
									long BgL_iz00_527;

									BgL_iz00_527 = (long) (BgL_auxz00_505);
									BgL_iz00_499 = BgL_iz00_527;
									goto BgL_loopz00_500;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcnst_cachez00()
	{
		AN_OBJECT;
		{	/* Cnst/cache.scm 15 */
			BGl_za2cachezd2startedzf3za2z21zzcnst_cachez00 = ((bool_t) 0);
			BGl_za2cnstzd2tablezd2refza2z00zzcnst_cachez00 = BFALSE;
			BGl_za2cnstzd2tablezd2setz12za2z12zzcnst_cachez00 = BFALSE;
			BGl_za2consza2z00zzcnst_cachez00 = BFALSE;
			BGl_za2btrueza2z00zzcnst_cachez00 = BFALSE;
			BGl_za2bfalseza2z00zzcnst_cachez00 = BFALSE;
			BGl_za2stringzd2ze3bstringza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2stringzd2ze3ucs2stringza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2bstringzd2ze3symbolza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2bstringzd2ze3keywordza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2boolzd2ze3bboolza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2longzd2ze3intza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2makezd2fxzd2procedureza2z00zzcnst_cachez00 = BFALSE;
			BGl_za2makezd2vazd2procedureza2z00zzcnst_cachez00 = BFALSE;
			BGl_za2doublezd2ze3realza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2elongzd2ze3belongza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2llongzd2ze3bllongza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2listzd2ze3vectorza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2vectorzd2tagzd2setz12za2z12zzcnst_cachez00 = BFALSE;
			BGl_za2listzd2ze3structza2z31zzcnst_cachez00 = BFALSE;
			return (BGl_za2stringzd2ze3bignumza2z31zzcnst_cachez00 = BFALSE, BUNSPEC);
		}
	}



/* start-cnst-cache! */
	BGL_EXPORTED_DEF obj_t BGl_startzd2cnstzd2cachez12z12zzcnst_cachez00()
	{
		AN_OBJECT;
		{	/* Cnst/cache.scm 72 */
			if (BGl_za2cachezd2startedzf3za2z21zzcnst_cachez00)
				{	/* Cnst/cache.scm 73 */
					return BTRUE;
				}
			else
				{	/* Cnst/cache.scm 73 */
					BGl_za2cachezd2startedzf3za2z21zzcnst_cachez00 = ((bool_t) 1);
					BGl_za2cnstzd2tablezd2refza2z00zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 0)),
						CNST_TABLE_REF(((long) 1)));
					BGl_za2cnstzd2tablezd2setz12za2z12zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 2)),
						CNST_TABLE_REF(((long) 1)));
					BGl_za2consza2z00zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 3)),
						CNST_TABLE_REF(((long) 1)));
					BGl_za2btrueza2z00zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 4)),
						CNST_TABLE_REF(((long) 1)));
					BGl_za2bfalseza2z00zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 5)),
						CNST_TABLE_REF(((long) 1)));
					BGl_za2stringzd2ze3bstringza2z31zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 6)),
						CNST_TABLE_REF(((long) 1)));
					BGl_za2stringzd2ze3ucs2stringza2z31zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 7)),
						CNST_TABLE_REF(((long) 1)));
					BGl_za2bstringzd2ze3symbolza2z31zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 8)),
						CNST_TABLE_REF(((long) 1)));
					BGl_za2bstringzd2ze3keywordza2z31zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 9)),
						CNST_TABLE_REF(((long) 1)));
					BGl_za2boolzd2ze3bboolza2z31zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
								10)), CNST_TABLE_REF(((long) 1)));
					BGl_za2longzd2ze3intza2z31zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
								11)), CNST_TABLE_REF(((long) 1)));
					BGl_za2makezd2fxzd2procedureza2z00zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
								12)), CNST_TABLE_REF(((long) 1)));
					BGl_za2makezd2vazd2procedureza2z00zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
								13)), CNST_TABLE_REF(((long) 1)));
					BGl_za2doublezd2ze3realza2z31zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
								14)), CNST_TABLE_REF(((long) 1)));
					BGl_za2elongzd2ze3belongza2z31zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
								15)), CNST_TABLE_REF(((long) 1)));
					BGl_za2llongzd2ze3bllongza2z31zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
								16)), CNST_TABLE_REF(((long) 1)));
					BGl_za2listzd2ze3vectorza2z31zzcnst_cachez00 =
						BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 17)), BNIL);
					BGl_za2vectorzd2tagzd2setz12za2z12zzcnst_cachez00 =
						BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 18)), BNIL);
					BGl_za2listzd2ze3structza2z31zzcnst_cachez00 =
						BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 19)), BNIL);
					{	/* Cnst/cache.scm 115 */
						obj_t BgL__ortest_2091z00_375;

						{	/* Cnst/cache.scm 115 */
							obj_t BgL_list2095z00_376;

							BgL_list2095z00_376 = MAKE_PAIR(CNST_TABLE_REF(((long) 1)), BNIL);
							BgL__ortest_2091z00_375 =
								BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 20)),
								BgL_list2095z00_376);
						}
						if (CBOOL(BgL__ortest_2091z00_375))
							{	/* Cnst/cache.scm 115 */
								BGl_za2stringzd2ze3bignumza2z31zzcnst_cachez00 =
									BgL__ortest_2091z00_375;
							}
						else
							{	/* Cnst/cache.scm 115 */
								BGl_za2stringzd2ze3bignumza2z31zzcnst_cachez00 =
									BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF((
											(long) 20)), CNST_TABLE_REF(((long) 21)));
					}}
					return BTRUE;
				}
		}
	}



/* _start-cnst-cache! */
	obj_t BGl__startzd2cnstzd2cachez12z12zzcnst_cachez00(obj_t BgL_envz00_496)
	{
		AN_OBJECT;
		{	/* Cnst/cache.scm 72 */
			return BGl_startzd2cnstzd2cachez12z12zzcnst_cachez00();
		}
	}



/* stop-cnst-cache! */
	BGL_EXPORTED_DEF obj_t BGl_stopzd2cnstzd2cachez12z12zzcnst_cachez00()
	{
		AN_OBJECT;
		{	/* Cnst/cache.scm 123 */
			BGl_za2stringzd2ze3bignumza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2stringzd2ze3bstringza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2stringzd2ze3ucs2stringza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2bstringzd2ze3symbolza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2bstringzd2ze3keywordza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2boolzd2ze3bboolza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2longzd2ze3intza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2makezd2fxzd2procedureza2z00zzcnst_cachez00 = BFALSE;
			BGl_za2makezd2vazd2procedureza2z00zzcnst_cachez00 = BFALSE;
			BGl_za2doublezd2ze3realza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2consza2z00zzcnst_cachez00 = BFALSE;
			BGl_za2btrueza2z00zzcnst_cachez00 = BFALSE;
			BGl_za2bfalseza2z00zzcnst_cachez00 = BFALSE;
			return BTRUE;
		}
	}



/* _stop-cnst-cache! */
	obj_t BGl__stopzd2cnstzd2cachez12z12zzcnst_cachez00(obj_t BgL_envz00_497)
	{
		AN_OBJECT;
		{	/* Cnst/cache.scm 123 */
			return BGl_stopzd2cnstzd2cachez12z12zzcnst_cachez00();
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcnst_cachez00()
	{
		AN_OBJECT;
		{	/* Cnst/cache.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcnst_cachez00()
	{
		AN_OBJECT;
		{	/* Cnst/cache.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcnst_cachez00()
	{
		AN_OBJECT;
		{	/* Cnst/cache.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2173z00zzcnst_cachez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string2173z00zzcnst_cachez00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string2173z00zzcnst_cachez00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string2173z00zzcnst_cachez00));
		}
	}

#ifdef __cplusplus
}
#endif
