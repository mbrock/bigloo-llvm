/*===========================================================================*/
/*   (Engine/pass.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Engine/pass.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_requirezd2initializa7ationz75zzengine_passz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzengine_passz00();
	static obj_t BGl__stopzd2onzd2passz00zzengine_passz00(obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzengine_passz00();
	BGL_EXPORTED_DECL obj_t BGl_stopzd2onzd2passz00zzengine_passz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzengine_passz00();
	BGL_EXPORTED_DEF obj_t BGl_za2currentzd2passza2zd2zzengine_passz00 = BUNSPEC;
	extern obj_t BGl_za2passza2z00zzengine_paramz00;
	extern obj_t BGl_compilerzd2exitzd2zzinit_mainz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzengine_passz00();
	static obj_t BGl_methodzd2initzd2zzengine_passz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string1509z00zzengine_passz00,
		BgL_bgl_string1509za700za7za7e1510za7, "engine_pass", 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_stopzd2onzd2passzd2envzd2zzengine_passz00,
		BgL_bgl__stopza7d2onza7d2pas1511z00,
		BGl__stopzd2onzd2passz00zzengine_passz00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long
		BgL_checksumz00_93, char *BgL_fromz00_94)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzengine_passz00))
				{
					BGl_requirezd2initializa7ationz75zzengine_passz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzengine_passz00();
					BGl_importedzd2moduleszd2initz00zzengine_passz00();
					BGl_toplevelzd2initzd2zzengine_passz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzengine_passz00()
	{
		AN_OBJECT;
		{	/* Engine/pass.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "engine_pass");
			return BUNSPEC;
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzengine_passz00()
	{
		AN_OBJECT;
		{	/* Engine/pass.scm 15 */
			return (BGl_za2currentzd2passza2zd2zzengine_passz00 = BNIL, BUNSPEC);
		}
	}



/* stop-on-pass */
	BGL_EXPORTED_DEF obj_t BGl_stopzd2onzd2passz00zzengine_passz00(obj_t
		BgL_passz00_1, obj_t BgL_thunkz00_2)
	{
		AN_OBJECT;
		{	/* Engine/pass.scm 29 */
			if ((BGl_za2passza2z00zzengine_paramz00 == BgL_passz00_1))
				{	/* Engine/pass.scm 30 */
					PROCEDURE_ENTRY(BgL_thunkz00_2) (BgL_thunkz00_2, BEOA);
					return BGl_compilerzd2exitzd2zzinit_mainz00(BINT(((long) 0)));
				}
			else
				{	/* Engine/pass.scm 30 */
					return BFALSE;
				}
		}
	}



/* _stop-on-pass */
	obj_t BGl__stopzd2onzd2passz00zzengine_passz00(obj_t BgL_envz00_90,
		obj_t BgL_passz00_91, obj_t BgL_thunkz00_92)
	{
		AN_OBJECT;
		{	/* Engine/pass.scm 29 */
			return
				BGl_stopzd2onzd2passz00zzengine_passz00(BgL_passz00_91,
				BgL_thunkz00_92);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzengine_passz00()
	{
		AN_OBJECT;
		{	/* Engine/pass.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzengine_passz00()
	{
		AN_OBJECT;
		{	/* Engine/pass.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzengine_passz00()
	{
		AN_OBJECT;
		{	/* Engine/pass.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1509z00zzengine_passz00));
			return
				BGl_modulezd2initializa7ationz75zzinit_mainz00(((long) 230845835),
				BSTRING_TO_STRING(BGl_string1509z00zzengine_passz00));
		}
	}

#ifdef __cplusplus
}
#endif
