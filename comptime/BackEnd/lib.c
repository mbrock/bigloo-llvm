/*===========================================================================*/
/*   (BackEnd/lib.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent BackEnd/lib.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_requirezd2initializa7ationz75zzbackend_libz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzbackend_libz00();
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzbackend_libz00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzbackend_libz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzbackend_libz00();
	static obj_t BGl_methodzd2initzd2zzbackend_libz00();
	static obj_t *__cnst;





/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzbackend_libz00(long
		BgL_checksumz00_86, char *BgL_fromz00_87)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbackend_libz00))
				{
					BGl_requirezd2initializa7ationz75zzbackend_libz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzbackend_libz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbackend_libz00()
	{
		AN_OBJECT;
		{	/* BackEnd/lib.scm 2 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "backend_lib");
			return BUNSPEC;
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbackend_libz00()
	{
		AN_OBJECT;
		{	/* BackEnd/lib.scm 2 */
			return BUNSPEC;
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbackend_libz00()
	{
		AN_OBJECT;
		{	/* BackEnd/lib.scm 2 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbackend_libz00()
	{
		AN_OBJECT;
		{	/* BackEnd/lib.scm 2 */
			return BUNSPEC;
		}
	}

#ifdef __cplusplus
}
#endif
