/*===========================================================================*/
/*   (Read/access.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Read/access.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_requirezd2initializa7ationz75zzread_accessz00 = BUNSPEC;
	extern obj_t BGl_za2accesszd2filezd2defaultza2z00zzengine_paramz00;
	static obj_t BGl_genericzd2initzd2zzread_accessz00();
	BGL_IMPORT obj_t BGl_modulezd2loadzd2accesszd2filezd2zz__modulez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_readzd2accesszd2filesz00zzread_accessz00();
	BGL_IMPORT bool_t fexists(char *);
	static obj_t BGl_innerzd2readzd2accesszd2filezd2zzread_accessz00(obj_t);
	static obj_t BGl__readzd2accesszd2filesz00zzread_accessz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzread_accessz00();
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzread_accessz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_enginez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__modulez00(long, char *);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_za2accesszd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzread_accessz00();
	static obj_t BGl_methodzd2initzd2zzread_accessz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string1524z00zzread_accessz00,
		BgL_bgl_string1524za700za7za7r1529za7, "read-access-file", 16);
	      DEFINE_STRING(BGl_string1525z00zzread_accessz00,
		BgL_bgl_string1525za700za7za7r1530za7, "Can't find access file", 22);
	      DEFINE_STRING(BGl_string1526z00zzread_accessz00,
		BgL_bgl_string1526za700za7za7r1531za7, "]", 1);
	      DEFINE_STRING(BGl_string1527z00zzread_accessz00,
		BgL_bgl_string1527za700za7za7r1532za7, "      [reading afile ", 21);
	      DEFINE_STRING(BGl_string1528z00zzread_accessz00,
		BgL_bgl_string1528za700za7za7r1533za7, "read_access", 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_readzd2accesszd2fileszd2envzd2zzread_accessz00,
		BgL_bgl__readza7d2accessza7d1534z00,
		BGl__readzd2accesszd2filesz00zzread_accessz00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzread_accessz00(long
		BgL_checksumz00_114, char *BgL_fromz00_115)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzread_accessz00))
				{
					BGl_requirezd2initializa7ationz75zzread_accessz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzread_accessz00();
					BGl_importedzd2moduleszd2initz00zzread_accessz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzread_accessz00()
	{
		AN_OBJECT;
		{	/* Read/access.scm 15 */
			BGl_modulezd2initializa7ationz75zz__modulez00(((long) 0), "read_access");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "read_access");
			return BUNSPEC;
		}
	}



/* read-access-files */
	BGL_EXPORTED_DEF obj_t BGl_readzd2accesszd2filesz00zzread_accessz00()
	{
		AN_OBJECT;
		{	/* Read/access.scm 26 */
			if (NULLP(BGl_za2accesszd2filesza2zd2zzengine_paramz00))
				{	/* Read/access.scm 30 */
					if (fexists(BSTRING_TO_STRING
							(BGl_za2accesszd2filezd2defaultza2z00zzengine_paramz00)))
						{	/* Read/access.scm 31 */
							return
								BGl_innerzd2readzd2accesszd2filezd2zzread_accessz00
								(BGl_za2accesszd2filezd2defaultza2z00zzengine_paramz00);
						}
					else
						{	/* Read/access.scm 31 */
							return BFALSE;
						}
				}
			else
				{
					obj_t BgL_l1508z00_90;

					{	/* Read/access.scm 33 */
						bool_t BgL_auxz00_129;

						BgL_l1508z00_90 = BGl_za2accesszd2filesza2zd2zzengine_paramz00;
					BgL_zc3anonymousza31512ze3z83_91:
						if (PAIRP(BgL_l1508z00_90))
							{	/* Read/access.scm 33 */
								{	/* Read/access.scm 34 */
									obj_t BgL_fz00_93;

									BgL_fz00_93 = CAR(BgL_l1508z00_90);
									if (fexists(BSTRING_TO_STRING(BgL_fz00_93)))
										{	/* Read/access.scm 34 */
											BGl_innerzd2readzd2accesszd2filezd2zzread_accessz00
												(BgL_fz00_93);
										}
									else
										{	/* Read/access.scm 34 */
											BGl_userzd2errorzd2zztools_errorz00
												(BGl_string1524z00zzread_accessz00,
												BGl_string1525z00zzread_accessz00, BgL_fz00_93, BNIL);
										}
								}
								{
									obj_t BgL_l1508z00_138;

									BgL_l1508z00_138 = CDR(BgL_l1508z00_90);
									BgL_l1508z00_90 = BgL_l1508z00_138;
									goto BgL_zc3anonymousza31512ze3z83_91;
								}
							}
						else
							{	/* Read/access.scm 33 */
								BgL_auxz00_129 = ((bool_t) 1);
							}
						return BBOOL(BgL_auxz00_129);
					}
				}
		}
	}



/* inner-read-access-file */
	obj_t BGl_innerzd2readzd2accesszd2filezd2zzread_accessz00(obj_t
		BgL_namez00_98)
	{
		AN_OBJECT;
		{	/* Read/access.scm 28 */
			{	/* Read/access.scm 28 */
				obj_t BgL_list1518z00_100;

				{	/* Read/access.scm 28 */
					obj_t BgL_arg1520z00_102;

					{	/* Read/access.scm 28 */
						obj_t BgL_arg1521z00_103;

						{	/* Read/access.scm 28 */
							obj_t BgL_arg1523z00_105;

							BgL_arg1523z00_105 =
								MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
							BgL_arg1521z00_103 =
								MAKE_PAIR(BGl_string1526z00zzread_accessz00,
								BgL_arg1523z00_105);
						}
						BgL_arg1520z00_102 = MAKE_PAIR(BgL_namez00_98, BgL_arg1521z00_103);
					}
					BgL_list1518z00_100 =
						MAKE_PAIR(BGl_string1527z00zzread_accessz00, BgL_arg1520z00_102);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list1518z00_100);
			}
			return BGl_modulezd2loadzd2accesszd2filezd2zz__modulez00(BgL_namez00_98);
		}
	}



/* _read-access-files */
	obj_t BGl__readzd2accesszd2filesz00zzread_accessz00(obj_t BgL_envz00_113)
	{
		AN_OBJECT;
		{	/* Read/access.scm 26 */
			return BGl_readzd2accesszd2filesz00zzread_accessz00();
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzread_accessz00()
	{
		AN_OBJECT;
		{	/* Read/access.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzread_accessz00()
	{
		AN_OBJECT;
		{	/* Read/access.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzread_accessz00()
	{
		AN_OBJECT;
		{	/* Read/access.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1528z00zzread_accessz00));
			BGl_modulezd2initializa7ationz75zzengine_enginez00(((long) 528201616),
				BSTRING_TO_STRING(BGl_string1528z00zzread_accessz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string1528z00zzread_accessz00));
			BGl_modulezd2initializa7ationz75zzinit_mainz00(((long) 230845835),
				BSTRING_TO_STRING(BGl_string1528z00zzread_accessz00));
			return
				BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string1528z00zzread_accessz00));
		}
	}

#ifdef __cplusplus
}
#endif
