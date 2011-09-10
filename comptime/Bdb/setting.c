/*===========================================================================*/
/*   (Bdb/setting.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Bdb/setting.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DEF obj_t BGl_za2bdbzd2moduleza2zd2zzbdb_settingz00 = BUNSPEC;
	extern obj_t BGl_za2czd2debugza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbdb_settingz00 = BUNSPEC;
	BGL_IMPORT obj_t
		BGl_libraryzd2translationzd2tablezd2addz12zc0zz__libraryz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzbdb_settingz00();
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2debugzd2moduleza2z00zzbdb_settingz00 =
		BUNSPEC;
	static obj_t BGl_cnstzd2initzd2zzbdb_settingz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzbdb_settingz00();
	extern obj_t BGl_za2indentza2z00zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzbdb_settingz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__libraryz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzbdb_settingz00();
	extern obj_t BGl_za2stripza2z00zzengine_paramz00;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl__bdbzd2settingz12zc0zzbdb_settingz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_bdbzd2settingz12zc0zzbdb_settingz00();
	extern obj_t BGl_za2inliningzf3za2zf3zzengine_paramz00;
	extern obj_t BGl_za2rmzd2tmpzd2filesza2z00zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzbdb_settingz00();
	static obj_t BGl_methodzd2initzd2zzbdb_settingz00();
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bdbzd2settingz12zd2envz12zzbdb_settingz00,
		BgL_bgl__bdbza7d2settingza711514z00,
		BGl__bdbzd2settingz12zc0zzbdb_settingz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1510z00zzbdb_settingz00,
		BgL_bgl_string1510za700za7za7b1515za7, "bdb_setting", 11);
	      DEFINE_STRING(BGl_string1509z00zzbdb_settingz00,
		BgL_bgl_string1509za700za7za7b1516za7, "bigloobdb", 9);
	      DEFINE_STRING(BGl_string1511z00zzbdb_settingz00,
		BgL_bgl_string1511za700za7za7b1517za7, "bdb (__pp_circle) (__bdb) ", 26);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzbdb_settingz00(long
		BgL_checksumz00_96, char *BgL_fromz00_97)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbdb_settingz00))
				{
					BGl_requirezd2initializa7ationz75zzbdb_settingz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzbdb_settingz00();
					BGl_cnstzd2initzd2zzbdb_settingz00();
					BGl_importedzd2moduleszd2initz00zzbdb_settingz00();
					BGl_toplevelzd2initzd2zzbdb_settingz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbdb_settingz00()
	{
		AN_OBJECT;
		{	/* Bdb/setting.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "bdb_setting");
			BGl_modulezd2initializa7ationz75zz__libraryz00(((long) 0), "bdb_setting");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbdb_settingz00()
	{
		AN_OBJECT;
		{	/* Bdb/setting.scm 15 */
			{	/* Bdb/setting.scm 15 */
				obj_t BgL_cportz00_88;

				BgL_cportz00_88 =
					bgl_open_input_string(BGl_string1511z00zzbdb_settingz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_89;

					BgL_iz00_89 = ((long) 2);
				BgL_loopz00_90:
					if ((BgL_iz00_89 == ((long) -1)))
						{	/* Bdb/setting.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Bdb/setting.scm 15 */
							{	/* Bdb/setting.scm 15 */
								obj_t BgL_arg1513z00_92;

								{	/* Bdb/setting.scm 15 */

									{	/* Bdb/setting.scm 15 */
										obj_t BgL_locationz00_94;

										BgL_locationz00_94 = BBOOL(((bool_t) 0));
										{	/* Bdb/setting.scm 15 */

											BgL_arg1513z00_92 =
												BGl_readz00zz__readerz00(BgL_cportz00_88,
												BgL_locationz00_94);
										}
									}
								}
								{	/* Bdb/setting.scm 15 */
									int BgL_auxz00_113;

									BgL_auxz00_113 = (int) (BgL_iz00_89);
									CNST_TABLE_SET(BgL_auxz00_113, BgL_arg1513z00_92);
							}}
							{	/* Bdb/setting.scm 15 */
								int BgL_auxz00_95;

								BgL_auxz00_95 = (int) ((BgL_iz00_89 - ((long) 1)));
								{
									long BgL_iz00_118;

									BgL_iz00_118 = (long) (BgL_auxz00_95);
									BgL_iz00_89 = BgL_iz00_118;
									goto BgL_loopz00_90;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbdb_settingz00()
	{
		AN_OBJECT;
		{	/* Bdb/setting.scm 15 */
			BGl_za2bdbzd2moduleza2zd2zzbdb_settingz00 = CNST_TABLE_REF(((long) 0));
			return (BGl_za2jvmzd2debugzd2moduleza2z00zzbdb_settingz00 =
				CNST_TABLE_REF(((long) 1)), BUNSPEC);
		}
	}



/* bdb-setting! */
	BGL_EXPORTED_DEF obj_t BGl_bdbzd2settingz12zc0zzbdb_settingz00()
	{
		AN_OBJECT;
		{	/* Bdb/setting.scm 35 */
			BGl_za2rmzd2tmpzd2filesza2z00zzengine_paramz00 = BFALSE;
			BGl_za2czd2debugza2zd2zzengine_paramz00 = BTRUE;
			BGl_za2stripza2z00zzengine_paramz00 = BFALSE;
			BGl_za2indentza2z00zzengine_paramz00 = BFALSE;
			BGl_za2inliningzf3za2zf3zzengine_paramz00 = BFALSE;
			return
				BGl_libraryzd2translationzd2tablezd2addz12zc0zz__libraryz00
				(CNST_TABLE_REF(((long) 2)), BGl_string1509z00zzbdb_settingz00, BNIL);
		}
	}



/* _bdb-setting! */
	obj_t BGl__bdbzd2settingz12zc0zzbdb_settingz00(obj_t BgL_envz00_87)
	{
		AN_OBJECT;
		{	/* Bdb/setting.scm 35 */
			return BGl_bdbzd2settingz12zc0zzbdb_settingz00();
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbdb_settingz00()
	{
		AN_OBJECT;
		{	/* Bdb/setting.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbdb_settingz00()
	{
		AN_OBJECT;
		{	/* Bdb/setting.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbdb_settingz00()
	{
		AN_OBJECT;
		{	/* Bdb/setting.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1510z00zzbdb_settingz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string1510z00zzbdb_settingz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string1510z00zzbdb_settingz00));
			return
				BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string1510z00zzbdb_settingz00));
		}
	}

#ifdef __cplusplus
}
#endif
