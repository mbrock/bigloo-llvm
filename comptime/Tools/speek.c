/*===========================================================================*/
/*   (Tools/speek.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Tools/speek.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_requirezd2initializa7ationz75zztools_speekz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_displayzd2circlezd2zz__pp_circlez00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zztools_speekz00();
	static obj_t BGl_importedzd2moduleszd2initz00zztools_speekz00();
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__pp_circlez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zztools_speekz00();
	BGL_EXPORTED_DECL obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_speekz00zztools_speekz00(obj_t, bool_t, obj_t);
	extern obj_t BGl_za2verboseza2z00zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zztools_speekz00();
	static obj_t BGl_methodzd2initzd2zztools_speekz00();
	static obj_t BGl_za2stdoutza2z00zztools_speekz00 = BUNSPEC;
	static obj_t BGl__verbosez00zztools_speekz00(obj_t, obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string1515z00zztools_speekz00,
		BgL_bgl_string1515za700za7za7t1516za7, "tools_speek", 11);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_verbosezd2envzd2zztools_speekz00,
		BgL_bgl__verboseza700za7za7too1517za7, va_generic_entry,
		BGl__verbosez00zztools_speekz00, BUNSPEC, -2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long
		BgL_checksumz00_109, char *BgL_fromz00_110)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztools_speekz00))
				{
					BGl_requirezd2initializa7ationz75zztools_speekz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zztools_speekz00();
					BGl_importedzd2moduleszd2initz00zztools_speekz00();
					BGl_toplevelzd2initzd2zztools_speekz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztools_speekz00()
	{
		AN_OBJECT;
		{	/* Tools/speek.scm 15 */
			BGl_modulezd2initializa7ationz75zz__pp_circlez00(((long) 0),
				"tools_speek");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"tools_speek");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "tools_speek");
			return BUNSPEC;
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztools_speekz00()
	{
		AN_OBJECT;
		{	/* Tools/speek.scm 15 */
			{	/* Tools/speek.scm 22 */
				obj_t BgL_res1514z00_100;

				{	/* Tools/speek.scm 22 */
					obj_t BgL_auxz00_120;

					BgL_auxz00_120 = BGL_CURRENT_DYNAMIC_ENV();
					BgL_res1514z00_100 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_120);
				}
				return (BGl_za2stdoutza2z00zztools_speekz00 =
					BgL_res1514z00_100, BUNSPEC);
			}
		}
	}



/* speek */
	obj_t BGl_speekz00zztools_speekz00(obj_t BgL_portz00_1, bool_t BgL_flagz00_2,
		obj_t BgL_argsz00_3)
	{
		AN_OBJECT;
		{	/* Tools/speek.scm 27 */
			if (BgL_flagz00_2)
				{	/* Tools/speek.scm 28 */
					{
						obj_t BgL_l1508z00_92;

						BgL_l1508z00_92 = BgL_argsz00_3;
					BgL_zc3anonymousza31510ze3z83_93:
						if (PAIRP(BgL_l1508z00_92))
							{	/* Tools/speek.scm 30 */
								BGl_displayzd2circlezd2zz__pp_circlez00(CAR(BgL_l1508z00_92),
									BgL_portz00_1);
								{
									obj_t BgL_l1508z00_128;

									BgL_l1508z00_128 = CDR(BgL_l1508z00_92);
									BgL_l1508z00_92 = BgL_l1508z00_128;
									goto BgL_zc3anonymousza31510ze3z83_93;
								}
							}
						else
							{	/* Tools/speek.scm 30 */
								((bool_t) 1);
							}
					}
					return FLUSH_OUTPUT_PORT(BgL_portz00_1);
				}
			else
				{	/* Tools/speek.scm 28 */
					return BFALSE;
				}
		}
	}



/* verbose */
	BGL_EXPORTED_DEF obj_t BGl_verbosez00zztools_speekz00(obj_t BgL_levelz00_4,
		obj_t BgL_argsz00_5)
	{
		AN_OBJECT;
		{	/* Tools/speek.scm 36 */
			{	/* Tools/speek.scm 37 */
				bool_t BgL_arg1513z00_105;

				BgL_arg1513z00_105 =
					BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BgL_levelz00_4,
					BGl_za2verboseza2z00zzengine_paramz00);
				return BGl_speekz00zztools_speekz00(BGl_za2stdoutza2z00zztools_speekz00,
					BgL_arg1513z00_105, BgL_argsz00_5);
			}
		}
	}



/* _verbose */
	obj_t BGl__verbosez00zztools_speekz00(obj_t BgL_envz00_106,
		obj_t BgL_levelz00_107, obj_t BgL_argsz00_108)
	{
		AN_OBJECT;
		{	/* Tools/speek.scm 36 */
			return BGl_verbosez00zztools_speekz00(BgL_levelz00_107, BgL_argsz00_108);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztools_speekz00()
	{
		AN_OBJECT;
		{	/* Tools/speek.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztools_speekz00()
	{
		AN_OBJECT;
		{	/* Tools/speek.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztools_speekz00()
	{
		AN_OBJECT;
		{	/* Tools/speek.scm 15 */
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1515z00zztools_speekz00));
		}
	}

#ifdef __cplusplus
}
#endif
