/*===========================================================================*/
/*   (Write/scheme.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Write/scheme.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t
		BGl_writezd2schemezd2filezd2headerzd2zzwrite_schemez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzwrite_schemez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_writezd2schemezd2commentz00zzwrite_schemez00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzwrite_schemez00();
	static obj_t BGl__writezd2schemezd2commentz00zzwrite_schemez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2bigloozd2nameza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzwrite_schemez00();
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzwrite_schemez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern obj_t BGl_za2bigloozd2authorza2zd2zzengine_paramz00;
	static obj_t BGl__writezd2schemezd2filezd2headerzd2zzwrite_schemez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2bigloozd2dateza2zd2zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzwrite_schemez00();
	static obj_t BGl_methodzd2initzd2zzwrite_schemez00();
	BGL_IMPORT obj_t BGl_fprintz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_writezd2schemezd2filezd2headerzd2envz00zzwrite_schemez00,
		BgL_bgl__writeza7d2schemeza71529z00,
		BGl__writezd2schemezd2filezd2headerzd2zzwrite_schemez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1524z00zzwrite_schemez00,
		BgL_bgl_string1524za700za7za7w1530za7,
		";; =========================================================", 60);
	      DEFINE_STRING(BGl_string1525z00zzwrite_schemez00,
		BgL_bgl_string1525za700za7za7w1531za7, ";; ", 3);
	      DEFINE_STRING(BGl_string1526z00zzwrite_schemez00,
		BgL_bgl_string1526za700za7za7w1532za7, "       ", 7);
	      DEFINE_STRING(BGl_string1527z00zzwrite_schemez00,
		BgL_bgl_string1527za700za7za7w1533za7, ";;", 2);
	      DEFINE_STRING(BGl_string1528z00zzwrite_schemez00,
		BgL_bgl_string1528za700za7za7w1534za7, "write_scheme", 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_writezd2schemezd2commentzd2envzd2zzwrite_schemez00,
		BgL_bgl__writeza7d2schemeza71535z00, va_generic_entry,
		BGl__writezd2schemezd2commentz00zzwrite_schemez00, BUNSPEC, -2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzwrite_schemez00(long
		BgL_checksumz00_142, char *BgL_fromz00_143)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzwrite_schemez00))
				{
					BGl_requirezd2initializa7ationz75zzwrite_schemez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzwrite_schemez00();
					BGl_importedzd2moduleszd2initz00zzwrite_schemez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzwrite_schemez00()
	{
		AN_OBJECT;
		{	/* Write/scheme.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"write_scheme");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"write_scheme");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "write_scheme");
			return BUNSPEC;
		}
	}



/* write-scheme-file-header */
	BGL_EXPORTED_DEF obj_t
		BGl_writezd2schemezd2filezd2headerzd2zzwrite_schemez00(obj_t BgL_portz00_1,
		obj_t BgL_stringz00_2)
	{
		AN_OBJECT;
		{	/* Write/scheme.scm 23 */
			bgl_display_string(BGl_string1524z00zzwrite_schemez00, BgL_portz00_1);
			bgl_display_char(((unsigned char) '\n'), BgL_portz00_1);
			bgl_display_string(BGl_string1525z00zzwrite_schemez00, BgL_portz00_1);
			bgl_display_obj(BgL_stringz00_2, BgL_portz00_1);
			bgl_display_char(((unsigned char) '\n'), BgL_portz00_1);
			bgl_display_string(BGl_string1525z00zzwrite_schemez00, BgL_portz00_1);
			bgl_display_obj(BGl_za2bigloozd2nameza2zd2zzengine_paramz00,
				BgL_portz00_1);
			bgl_display_char(((unsigned char) '\n'), BgL_portz00_1);
			bgl_display_string(BGl_string1525z00zzwrite_schemez00, BgL_portz00_1);
			bgl_display_obj(BGl_za2bigloozd2authorza2zd2zzengine_paramz00,
				BgL_portz00_1);
			bgl_display_string(BGl_string1526z00zzwrite_schemez00, BgL_portz00_1);
			bgl_display_obj(BGl_za2bigloozd2dateza2zd2zzengine_paramz00,
				BgL_portz00_1);
			bgl_display_char(((unsigned char) '\n'), BgL_portz00_1);
			bgl_display_string(BGl_string1524z00zzwrite_schemez00, BgL_portz00_1);
			bgl_display_char(((unsigned char) '\n'), BgL_portz00_1);
			return bgl_display_char(((unsigned char) '\n'), BgL_portz00_1);
		}
	}



/* _write-scheme-file-header */
	obj_t BGl__writezd2schemezd2filezd2headerzd2zzwrite_schemez00(obj_t
		BgL_envz00_136, obj_t BgL_portz00_137, obj_t BgL_stringz00_138)
	{
		AN_OBJECT;
		{	/* Write/scheme.scm 23 */
			return
				BGl_writezd2schemezd2filezd2headerzd2zzwrite_schemez00(BgL_portz00_137,
				BgL_stringz00_138);
		}
	}



/* write-scheme-comment */
	BGL_EXPORTED_DEF obj_t BGl_writezd2schemezd2commentz00zzwrite_schemez00(obj_t
		BgL_portz00_3, obj_t BgL_sexpz00_4)
	{
		AN_OBJECT;
		{	/* Write/scheme.scm 34 */
			if (NULLP(BgL_sexpz00_4))
				{	/* Write/scheme.scm 36 */
					bgl_display_string(BGl_string1527z00zzwrite_schemez00, BgL_portz00_3);
					return bgl_display_char(((unsigned char) '\n'), BgL_portz00_3);
				}
			else
				{	/* Write/scheme.scm 36 */
					if (NULLP(CDR(BgL_sexpz00_4)))
						{	/* Write/scheme.scm 38 */
							bgl_display_string(BGl_string1525z00zzwrite_schemez00,
								BgL_portz00_3);
							bgl_display_obj(CAR(BgL_sexpz00_4), BgL_portz00_3);
							return bgl_display_char(((unsigned char) '\n'), BgL_portz00_3);
						}
					else
						{	/* Write/scheme.scm 41 */
							obj_t BgL_runner1522z00_104;

							{	/* Write/scheme.scm 41 */
								obj_t BgL_list1518z00_100;

								{	/* Write/scheme.scm 41 */
									obj_t BgL_arg1520z00_102;

									BgL_arg1520z00_102 = MAKE_PAIR(BgL_sexpz00_4, BNIL);
									BgL_list1518z00_100 =
										MAKE_PAIR(BGl_string1525z00zzwrite_schemez00,
										BgL_arg1520z00_102);
								}
								BgL_runner1522z00_104 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_portz00_3,
									BgL_list1518z00_100);
							}
							{	/* Write/scheme.scm 41 */
								obj_t BgL_aux1521z00_103;

								BgL_aux1521z00_103 = CAR(BgL_runner1522z00_104);
								BgL_runner1522z00_104 = CDR(BgL_runner1522z00_104);
								return
									BGl_fprintz00zz__r4_output_6_10_3z00(BgL_aux1521z00_103,
									BgL_runner1522z00_104);
							}
						}
				}
		}
	}



/* _write-scheme-comment */
	obj_t BGl__writezd2schemezd2commentz00zzwrite_schemez00(obj_t BgL_envz00_139,
		obj_t BgL_portz00_140, obj_t BgL_sexpz00_141)
	{
		AN_OBJECT;
		{	/* Write/scheme.scm 34 */
			return
				BGl_writezd2schemezd2commentz00zzwrite_schemez00(BgL_portz00_140,
				BgL_sexpz00_141);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzwrite_schemez00()
	{
		AN_OBJECT;
		{	/* Write/scheme.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzwrite_schemez00()
	{
		AN_OBJECT;
		{	/* Write/scheme.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzwrite_schemez00()
	{
		AN_OBJECT;
		{	/* Write/scheme.scm 15 */
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1528z00zzwrite_schemez00));
		}
	}

#ifdef __cplusplus
}
#endif
