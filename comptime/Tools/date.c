/*===========================================================================*/
/*   (Tools/date.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Tools/date.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_requirezd2initializa7ationz75zztools_datez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zztools_datez00();
	BGL_EXPORTED_DECL obj_t BGl_bigloozd2datezd2zztools_datez00();
	static obj_t BGl__bigloozd2datezd2zztools_datez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztools_datez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_libraryzd2moduleszd2initz00zztools_datez00();
	static obj_t BGl_methodzd2initzd2zztools_datez00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bigloozd2datezd2envz00zztools_datez00,
		BgL_bgl__biglooza7d2dateza7d1509z00, BGl__bigloozd2datezd2zztools_datez00,
		0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1508z00zztools_datez00,
		BgL_bgl_string1508za700za7za7t1510za7, " Sun Jan 23 07:38:25 CET 2011 ",
		30);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztools_datez00(long
		BgL_checksumz00_87, char *BgL_fromz00_88)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztools_datez00))
				{
					BGl_requirezd2initializa7ationz75zztools_datez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zztools_datez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztools_datez00()
	{
		AN_OBJECT;
		{	/* Tools/date.scm 2 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "tools_date");
			return BUNSPEC;
		}
	}



/* bigloo-date */
	BGL_EXPORTED_DEF obj_t BGl_bigloozd2datezd2zztools_datez00()
	{
		AN_OBJECT;
		{	/* Tools/date.scm 4 */
			return BGl_string1508z00zztools_datez00;
		}
	}



/* _bigloo-date */
	obj_t BGl__bigloozd2datezd2zztools_datez00(obj_t BgL_envz00_86)
	{
		AN_OBJECT;
		{	/* Tools/date.scm 4 */
			return BGl_string1508z00zztools_datez00;
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztools_datez00()
	{
		AN_OBJECT;
		{	/* Tools/date.scm 2 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztools_datez00()
	{
		AN_OBJECT;
		{	/* Tools/date.scm 2 */
			return BUNSPEC;
		}
	}

#ifdef __cplusplus
}
#endif
