/*===========================================================================*/
/*   (Engine/signals.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Engine/signals.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_requirezd2initializa7ationz75zzengine_signalsz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzengine_signalsz00();
	BGL_IMPORT obj_t BGl_signalz00zz__osz00(int, obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzengine_signalsz00();
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzengine_signalsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	static obj_t
		BGl__installzd2compilerzd2signalsz12z12zzengine_signalsz00(obj_t);
	extern obj_t BGl_compilerzd2exitzd2zzinit_mainz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_installzd2compilerzd2signalsz12z12zzengine_signalsz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzengine_signalsz00();
	static obj_t BGl_killzd2myzd2selfz00zzengine_signalsz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzengine_signalsz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_installzd2compilerzd2signalsz12zd2envzc0zzengine_signalsz00,
		BgL_bgl__installza7d2compi1515za7,
		BGl__installzd2compilerzd2signalsz12z12zzengine_signalsz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1511z00zzengine_signalsz00,
		BgL_bgl_killza7d2myza7d2self1516z00,
		BGl_killzd2myzd2selfz00zzengine_signalsz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1512z00zzengine_signalsz00,
		BgL_bgl_string1512za700za7za7e1517za7,
		"*** INTERNAL-ERROR: Illegal signal caught", 41);
	      DEFINE_STRING(BGl_string1513z00zzengine_signalsz00,
		BgL_bgl_string1513za700za7za7e1518za7, " --- aborting...", 16);
	      DEFINE_STRING(BGl_string1514z00zzengine_signalsz00,
		BgL_bgl_string1514za700za7za7e1519za7, "engine_signals", 14);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzengine_signalsz00(long
		BgL_checksumz00_102, char *BgL_fromz00_103)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzengine_signalsz00))
				{
					BGl_requirezd2initializa7ationz75zzengine_signalsz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzengine_signalsz00();
					BGl_importedzd2moduleszd2initz00zzengine_signalsz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzengine_signalsz00()
	{
		AN_OBJECT;
		{	/* Engine/signals.scm 16 */
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "engine_signals");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"engine_signals");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"engine_signals");
			return BUNSPEC;
		}
	}



/* install-compiler-signals! */
	BGL_EXPORTED_DEF obj_t
		BGl_installzd2compilerzd2signalsz12z12zzengine_signalsz00()
	{
		AN_OBJECT;
		{	/* Engine/signals.scm 24 */
			BGl_signalz00zz__osz00(SIGFPE, BGl_proc1511z00zzengine_signalsz00);
			BGl_signalz00zz__osz00(SIGILL, BGl_proc1511z00zzengine_signalsz00);
			BGl_signalz00zz__osz00(SIGBUS, BGl_proc1511z00zzengine_signalsz00);
			return
				BGl_signalz00zz__osz00(SIGSEGV, BGl_proc1511z00zzengine_signalsz00);
		}
	}



/* _install-compiler-signals! */
	obj_t BGl__installzd2compilerzd2signalsz12z12zzengine_signalsz00(obj_t
		BgL_envz00_99)
	{
		AN_OBJECT;
		{	/* Engine/signals.scm 24 */
			return BGl_installzd2compilerzd2signalsz12z12zzengine_signalsz00();
		}
	}



/* kill-my-self */
	obj_t BGl_killzd2myzd2selfz00zzengine_signalsz00(obj_t BgL_envz00_100,
		obj_t BgL_nz00_101)
	{
		AN_OBJECT;
		{	/* Engine/signals.scm 25 */
			{
				obj_t BgL_nz00_87;

				BgL_nz00_87 = BgL_nz00_101;
				{	/* Engine/signals.scm 26 */
					obj_t BgL_port1508z00_89;

					{	/* Engine/signals.scm 26 */
						obj_t BgL_res1510z00_92;

						{	/* Engine/signals.scm 26 */
							obj_t BgL_auxz00_117;

							BgL_auxz00_117 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res1510z00_92 = BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_117);
						}
						BgL_port1508z00_89 = BgL_res1510z00_92;
					}
					bgl_display_string(BGl_string1512z00zzengine_signalsz00,
						BgL_port1508z00_89);
					bgl_display_string(BGl_string1513z00zzengine_signalsz00,
						BgL_port1508z00_89);
					bgl_display_obj(BgL_nz00_87, BgL_port1508z00_89);
					bgl_display_char(((unsigned char) '\n'), BgL_port1508z00_89);
				}
				return BGl_compilerzd2exitzd2zzinit_mainz00(BINT(((long) 2)));
		}}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzengine_signalsz00()
	{
		AN_OBJECT;
		{	/* Engine/signals.scm 16 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzengine_signalsz00()
	{
		AN_OBJECT;
		{	/* Engine/signals.scm 16 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzengine_signalsz00()
	{
		AN_OBJECT;
		{	/* Engine/signals.scm 16 */
			BGl_modulezd2initializa7ationz75zzinit_mainz00(((long) 230845835),
				BSTRING_TO_STRING(BGl_string1514z00zzengine_signalsz00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1514z00zzengine_signalsz00));
		}
	}

#ifdef __cplusplus
}
#endif
