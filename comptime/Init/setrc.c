/*===========================================================================*/
/*   (Init/setrc.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Init/setrc.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_requirezd2initializa7ationz75zzinit_setrcz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzinit_setrcz00();
	static obj_t BGl__loadzd2libraryzd2initz00zzinit_setrcz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_getenvz00zz__osz00(char *);
	BGL_EXPORTED_DECL obj_t BGl_setupzd2defaultzd2valuesz00zzinit_setrcz00();
	static obj_t BGl__setupzd2defaultzd2valuesz00zzinit_setrcz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzinit_setrcz00();
	extern obj_t BGl_za2libzd2dirza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_defaultzd2environmentzd2zz__evalz00();
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzinit_setrcz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzinit_setrcz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_loadqz00zz__evalz00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t BGl_za2libraryzd2initza2zd2zzinit_setrcz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_setupzd2libraryzd2valuesz00zzinit_setrcz00(obj_t);
	static obj_t BGl__setupzd2libraryzd2valuesz00zzinit_setrcz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzinit_setrcz00();
	static obj_t BGl_methodzd2initzd2zzinit_setrcz00();
	BGL_EXPORTED_DECL obj_t BGl_loadzd2libraryzd2initz00zzinit_setrcz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_loadzd2libraryzd2initzd2envzd2zzinit_setrcz00,
		BgL_bgl__loadza7d2libraryza71529z00,
		BGl__loadzd2libraryzd2initz00zzinit_setrcz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1523z00zzinit_setrcz00,
		BgL_bgl_string1523za700za7za7i1530za7, "HOME", 4);
	      DEFINE_STRING(BGl_string1524z00zzinit_setrcz00,
		BgL_bgl_string1524za700za7za7i1531za7, ".bigloorc", 9);
	      DEFINE_STRING(BGl_string1525z00zzinit_setrcz00,
		BgL_bgl_string1525za700za7za7i1532za7, ".init", 5);
	      DEFINE_STRING(BGl_string1526z00zzinit_setrcz00,
		BgL_bgl_string1526za700za7za7i1533za7, "]", 1);
	      DEFINE_STRING(BGl_string1527z00zzinit_setrcz00,
		BgL_bgl_string1527za700za7za7i1534za7, "      [reading ", 15);
	      DEFINE_STRING(BGl_string1528z00zzinit_setrcz00,
		BgL_bgl_string1528za700za7za7i1535za7, "init_setrc", 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setupzd2defaultzd2valueszd2envzd2zzinit_setrcz00,
		BgL_bgl__setupza7d2default1536za7,
		BGl__setupzd2defaultzd2valuesz00zzinit_setrcz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setupzd2libraryzd2valueszd2envzd2zzinit_setrcz00,
		BgL_bgl__setupza7d2library1537za7,
		BGl__setupzd2libraryzd2valuesz00zzinit_setrcz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzinit_setrcz00(long
		BgL_checksumz00_123, char *BgL_fromz00_124)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzinit_setrcz00))
				{
					BGl_requirezd2initializa7ationz75zzinit_setrcz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzinit_setrcz00();
					BGl_importedzd2moduleszd2initz00zzinit_setrcz00();
					BGl_toplevelzd2initzd2zzinit_setrcz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzinit_setrcz00()
	{
		AN_OBJECT;
		{	/* Init/setrc.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"init_setrc");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "init_setrc");
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "init_setrc");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "init_setrc");
			return BUNSPEC;
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzinit_setrcz00()
	{
		AN_OBJECT;
		{	/* Init/setrc.scm 15 */
			return (BGl_za2libraryzd2initza2zd2zzinit_setrcz00 = BNIL, BUNSPEC);
		}
	}



/* setup-default-values */
	BGL_EXPORTED_DEF obj_t BGl_setupzd2defaultzd2valuesz00zzinit_setrcz00()
	{
		AN_OBJECT;
		{	/* Init/setrc.scm 25 */
			{	/* Init/setrc.scm 26 */
				obj_t BgL_pathz00_87;

				{	/* Init/setrc.scm 26 */
					obj_t BgL_homez00_91;

					BgL_homez00_91 =
						BGl_getenvz00zz__osz00(BSTRING_TO_STRING
						(BGl_string1523z00zzinit_setrcz00));
					if (STRINGP(BgL_homez00_91))
						{	/* Init/setrc.scm 27 */
							BgL_pathz00_87 =
								MAKE_PAIR(BgL_homez00_91,
								BGl_za2libzd2dirza2zd2zzengine_paramz00);
						}
					else
						{	/* Init/setrc.scm 27 */
							BgL_pathz00_87 = BGl_za2libzd2dirza2zd2zzengine_paramz00;
						}
				}
				{	/* Init/setrc.scm 26 */
					obj_t BgL_fnamez00_88;

					BgL_fnamez00_88 =
						BGl_findzd2filezf2pathz20zz__osz00(BGl_string1524z00zzinit_setrcz00,
						BgL_pathz00_87);
					{	/* Init/setrc.scm 30 */

						if (CBOOL(BgL_fnamez00_88))
							{	/* Init/setrc.scm 32 */
								obj_t BgL_envz00_90;

								BgL_envz00_90 = BGl_defaultzd2environmentzd2zz__evalz00();
								{	/* Init/setrc.scm 32 */

									return
										BGl_loadqz00zz__evalz00(BgL_fnamez00_88, BgL_envz00_90);
								}
							}
						else
							{	/* Init/setrc.scm 31 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* _setup-default-values */
	obj_t BGl__setupzd2defaultzd2valuesz00zzinit_setrcz00(obj_t BgL_envz00_119)
	{
		AN_OBJECT;
		{	/* Init/setrc.scm 25 */
			return BGl_setupzd2defaultzd2valuesz00zzinit_setrcz00();
		}
	}



/* setup-library-values */
	BGL_EXPORTED_DEF obj_t BGl_setupzd2libraryzd2valuesz00zzinit_setrcz00(obj_t
		BgL_libraryz00_1)
	{
		AN_OBJECT;
		{	/* Init/setrc.scm 37 */
			{	/* Init/setrc.scm 38 */
				obj_t BgL_initzd2namezd2_93;

				{	/* Init/setrc.scm 38 */
					obj_t BgL_arg1511z00_95;

					{	/* Init/setrc.scm 38 */
						obj_t BgL_res1522z00_115;

						{	/* Init/setrc.scm 38 */
							obj_t BgL_arg2063z00_114;

							BgL_arg2063z00_114 = SYMBOL_TO_STRING(BgL_libraryz00_1);
							BgL_res1522z00_115 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2063z00_114);
						}
						BgL_arg1511z00_95 = BgL_res1522z00_115;
					}
					BgL_initzd2namezd2_93 =
						string_append(BgL_arg1511z00_95, BGl_string1525z00zzinit_setrcz00);
				}
				{	/* Init/setrc.scm 38 */
					obj_t BgL_fnamez00_94;

					BgL_fnamez00_94 =
						BGl_findzd2filezf2pathz20zz__osz00(BgL_initzd2namezd2_93,
						BGl_za2libzd2dirza2zd2zzengine_paramz00);
					{	/* Init/setrc.scm 39 */

						if (CBOOL(BgL_fnamez00_94))
							{	/* Init/setrc.scm 40 */
								return (BGl_za2libraryzd2initza2zd2zzinit_setrcz00 =
									MAKE_PAIR(BgL_fnamez00_94,
										BGl_za2libraryzd2initza2zd2zzinit_setrcz00), BUNSPEC);
							}
						else
							{	/* Init/setrc.scm 40 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* _setup-library-values */
	obj_t BGl__setupzd2libraryzd2valuesz00zzinit_setrcz00(obj_t BgL_envz00_120,
		obj_t BgL_libraryz00_121)
	{
		AN_OBJECT;
		{	/* Init/setrc.scm 37 */
			return BGl_setupzd2libraryzd2valuesz00zzinit_setrcz00(BgL_libraryz00_121);
		}
	}



/* load-library-init */
	BGL_EXPORTED_DEF obj_t BGl_loadzd2libraryzd2initz00zzinit_setrcz00()
	{
		AN_OBJECT;
		{	/* Init/setrc.scm 52 */
			{
				obj_t BgL_l1508z00_98;

				BgL_l1508z00_98 = BGl_za2libraryzd2initza2zd2zzinit_setrcz00;
			BgL_zc3anonymousza31513ze3z83_99:
				if (PAIRP(BgL_l1508z00_98))
					{	/* Init/setrc.scm 53 */
						{	/* Init/setrc.scm 55 */
							obj_t BgL_fnamez00_101;

							BgL_fnamez00_101 = CAR(BgL_l1508z00_98);
							{	/* Init/setrc.scm 54 */
								obj_t BgL_list1515z00_102;

								{	/* Init/setrc.scm 54 */
									obj_t BgL_arg1517z00_104;

									{	/* Init/setrc.scm 54 */
										obj_t BgL_arg1518z00_105;

										{	/* Init/setrc.scm 54 */
											obj_t BgL_arg1520z00_107;

											BgL_arg1520z00_107 =
												MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
											BgL_arg1518z00_105 =
												MAKE_PAIR(BGl_string1526z00zzinit_setrcz00,
												BgL_arg1520z00_107);
										}
										BgL_arg1517z00_104 =
											MAKE_PAIR(BgL_fnamez00_101, BgL_arg1518z00_105);
									}
									BgL_list1515z00_102 =
										MAKE_PAIR(BGl_string1527z00zzinit_setrcz00,
										BgL_arg1517z00_104);
								}
								BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
									BgL_list1515z00_102);
							}
							{	/* Init/setrc.scm 55 */
								obj_t BgL_envz00_109;

								BgL_envz00_109 = BGl_defaultzd2environmentzd2zz__evalz00();
								{	/* Init/setrc.scm 55 */

									BGl_loadqz00zz__evalz00(BgL_fnamez00_101, BgL_envz00_109);
						}}}
						{
							obj_t BgL_l1508z00_166;

							BgL_l1508z00_166 = CDR(BgL_l1508z00_98);
							BgL_l1508z00_98 = BgL_l1508z00_166;
							goto BgL_zc3anonymousza31513ze3z83_99;
						}
					}
				else
					{	/* Init/setrc.scm 53 */
						((bool_t) 1);
					}
			}
			return (BGl_za2libraryzd2initza2zd2zzinit_setrcz00 = BNIL, BUNSPEC);
		}
	}



/* _load-library-init */
	obj_t BGl__loadzd2libraryzd2initz00zzinit_setrcz00(obj_t BgL_envz00_122)
	{
		AN_OBJECT;
		{	/* Init/setrc.scm 52 */
			return BGl_loadzd2libraryzd2initz00zzinit_setrcz00();
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzinit_setrcz00()
	{
		AN_OBJECT;
		{	/* Init/setrc.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzinit_setrcz00()
	{
		AN_OBJECT;
		{	/* Init/setrc.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzinit_setrcz00()
	{
		AN_OBJECT;
		{	/* Init/setrc.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1528z00zzinit_setrcz00));
			return
				BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string1528z00zzinit_setrcz00));
		}
	}

#ifdef __cplusplus
}
#endif
