/*===========================================================================*/
/*   (Cc/exec.scm)                                                           */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cc/exec.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl__unixzd2filenamezd2zzcc_execz00(obj_t, obj_t);
	BGL_IMPORT bool_t bigloo_strcmp(obj_t, obj_t);
	static obj_t BGl__execz00zzcc_execz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcc_execz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzcc_execz00();
	BGL_IMPORT obj_t BGl_stringzd2indexzd2zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_unixzd2filenamezd2zzcc_execz00(obj_t);
	static obj_t BGl_systemzf2killzf2zzcc_execz00(obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcc_execz00();
	BGL_EXPORTED_DECL obj_t BGl_execz00zzcc_execz00(obj_t, bool_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcc_execz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_oszd2classzd2zz__osz00();
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_za2shellza2z00zzengine_paramz00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_systemz00zz__osz00(obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	extern obj_t BGl_compilerzd2exitzd2zzinit_mainz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcc_execz00();
	static obj_t BGl_methodzd2initzd2zzcc_execz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string1528z00zzcc_execz00,
		BgL_bgl_string1528za700za7za7c1534za7, "\"", 1);
	      DEFINE_STRING(BGl_string1530z00zzcc_execz00,
		BgL_bgl_string1530za700za7za7c1535za7, "-c", 2);
	      DEFINE_STRING(BGl_string1529z00zzcc_execz00,
		BgL_bgl_string1529za700za7za7c1536za7, "mingw", 5);
	      DEFINE_STRING(BGl_string1531z00zzcc_execz00,
		BgL_bgl_string1531za700za7za7c1537za7, "system/kill", 11);
	      DEFINE_STRING(BGl_string1532z00zzcc_execz00,
		BgL_bgl_string1532za700za7za7c1538za7, "Can't execute cmd", 17);
	      DEFINE_STRING(BGl_string1533z00zzcc_execz00,
		BgL_bgl_string1533za700za7za7c1539za7, "cc_exec", 7);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_execzd2envzd2zzcc_execz00,
		BgL_bgl__execza700za7za7cc_exe1540za7, BGl__execz00zzcc_execz00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_unixzd2filenamezd2envz00zzcc_execz00,
		BgL_bgl__unixza7d2filename1541za7, va_generic_entry,
		BGl__unixzd2filenamezd2zzcc_execz00, BUNSPEC, -1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcc_execz00(long
		BgL_checksumz00_127, char *BgL_fromz00_128)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcc_execz00))
				{
					BGl_requirezd2initializa7ationz75zzcc_execz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcc_execz00();
					BGl_importedzd2moduleszd2initz00zzcc_execz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcc_execz00()
	{
		AN_OBJECT;
		{	/* Cc/exec.scm 20 */
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cc_exec");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"cc_exec");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "cc_exec");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cc_exec");
			return BUNSPEC;
		}
	}



/* unix-filename */
	BGL_EXPORTED_DEF obj_t BGl_unixzd2filenamezd2zzcc_execz00(obj_t BgL_argsz00_1)
	{
		AN_OBJECT;
		{	/* Cc/exec.scm 33 */
			{	/* Cc/exec.scm 34 */
				obj_t BgL_sz00_91;

				BgL_sz00_91 =
					BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_argsz00_1);
				{	/* Cc/exec.scm 35 */
					bool_t BgL_testz00_139;

					{	/* Cc/exec.scm 35 */

						BgL_testz00_139 =
							CBOOL(BGl_stringzd2indexzd2zz__r4_strings_6_7z00(BgL_sz00_91,
								BCHAR(((unsigned char) ' ')), BINT(((long) 0))));
					}
					if (BgL_testz00_139)
						{	/* Cc/exec.scm 35 */
							return
								string_append_3(BGl_string1528z00zzcc_execz00, BgL_sz00_91,
								BGl_string1528z00zzcc_execz00);
						}
					else
						{	/* Cc/exec.scm 35 */
							return BgL_sz00_91;
						}
				}
			}
		}
	}



/* _unix-filename */
	obj_t BGl__unixzd2filenamezd2zzcc_execz00(obj_t BgL_envz00_121,
		obj_t BgL_argsz00_122)
	{
		AN_OBJECT;
		{	/* Cc/exec.scm 33 */
			return BGl_unixzd2filenamezd2zzcc_execz00(BgL_argsz00_122);
		}
	}



/* exec */
	BGL_EXPORTED_DEF obj_t BGl_execz00zzcc_execz00(obj_t BgL_cmdz00_2,
		bool_t BgL_comezd2backzd2_3, obj_t BgL_namez00_4)
	{
		AN_OBJECT;
		{	/* Cc/exec.scm 48 */
			{	/* Cc/exec.scm 49 */
				bool_t BgL_testz00_146;

				if (BgL_comezd2backzd2_3)
					{	/* Cc/exec.scm 49 */
						BgL_testz00_146 = ((bool_t) 1);
					}
				else
					{	/* Cc/exec.scm 49 */
						if (STRINGP(BGl_za2shellza2z00zzengine_paramz00))
							{	/* Cc/exec.scm 49 */
								BgL_testz00_146 = ((bool_t) 0);
							}
						else
							{	/* Cc/exec.scm 49 */
								BgL_testz00_146 = ((bool_t) 1);
							}
					}
				if (BgL_testz00_146)
					{	/* Cc/exec.scm 49 */
						{	/* Cc/exec.scm 52 */
							obj_t BgL_resz00_98;

							{	/* Cc/exec.scm 52 */
								obj_t BgL_list1518z00_100;

								BgL_list1518z00_100 = MAKE_PAIR(BgL_cmdz00_2, BNIL);
								BgL_resz00_98 = BGl_systemz00zz__osz00(BgL_list1518z00_100);
							}
							if (((long) CINT(BgL_resz00_98) == ((long) 0)))
								{	/* Cc/exec.scm 53 */
									return BgL_resz00_98;
								}
							else
								{	/* Cc/exec.scm 53 */
									return BGl_compilerzd2exitzd2zzinit_mainz00(BINT(((long) 1)));
					}}}
				else
					{	/* Cc/exec.scm 49 */
						return BGl_systemzf2killzf2zzcc_execz00(BgL_cmdz00_2);
					}
			}
		}
	}



/* _exec */
	obj_t BGl__execz00zzcc_execz00(obj_t BgL_envz00_123, obj_t BgL_cmdz00_124,
		obj_t BgL_comezd2backzd2_125, obj_t BgL_namez00_126)
	{
		AN_OBJECT;
		{	/* Cc/exec.scm 48 */
			return
				BGl_execz00zzcc_execz00(BgL_cmdz00_124,
				CBOOL(BgL_comezd2backzd2_125), BgL_namez00_126);
		}
	}



/* system/kill */
	obj_t BGl_systemzf2killzf2zzcc_execz00(obj_t BgL_cmdz00_5)
	{
		AN_OBJECT;
		{	/* Cc/exec.scm 63 */
			if (bigloo_strcmp(BGl_oszd2classzd2zz__osz00(),
					BGl_string1529z00zzcc_execz00))
				{	/* Cc/exec.scm 66 */
					obj_t BgL_port1512z00_103;

					{	/* Cc/exec.scm 66 */
						obj_t BgL_res1526z00_116;

						{	/* Cc/exec.scm 66 */
							obj_t BgL_auxz00_163;

							BgL_auxz00_163 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res1526z00_116 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_163);
						}
						BgL_port1512z00_103 = BgL_res1526z00_116;
					}
					{	/* Cc/exec.scm 66 */
						obj_t BgL_arg1521z00_104;

						{	/* Cc/exec.scm 66 */
							obj_t BgL_list1522z00_105;

							BgL_list1522z00_105 = MAKE_PAIR(BgL_cmdz00_5, BNIL);
							BgL_arg1521z00_104 = BGl_systemz00zz__osz00(BgL_list1522z00_105);
						}
						bgl_display_obj(BgL_arg1521z00_104, BgL_port1512z00_103);
					}
					return bgl_display_char(((unsigned char) '\n'), BgL_port1512z00_103);
				}
			else
				{	/* Cc/exec.scm 64 */
					{	/* Cc/exec.scm 74 */
						obj_t BgL_port1513z00_106;

						{	/* Cc/exec.scm 74 */
							obj_t BgL_res1527z00_119;

							{	/* Cc/exec.scm 74 */
								obj_t BgL_auxz00_170;

								BgL_auxz00_170 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res1527z00_119 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_170);
							}
							BgL_port1513z00_106 = BgL_res1527z00_119;
						}
						{	/* Cc/exec.scm 74 */
							int BgL_arg1523z00_107;

							{	/* Cc/exec.scm 74 */
								char *BgL_auxz00_179;

								char *BgL_auxz00_177;

								char *BgL_auxz00_175;

								char *BgL_auxz00_173;

								BgL_auxz00_179 = BSTRING_TO_STRING(BgL_cmdz00_5);
								BgL_auxz00_177 =
									BSTRING_TO_STRING(BGl_string1530z00zzcc_execz00);
								BgL_auxz00_175 =
									BSTRING_TO_STRING(BGl_za2shellza2z00zzengine_paramz00);
								BgL_auxz00_173 =
									BSTRING_TO_STRING(BGl_za2shellza2z00zzengine_paramz00);
								BgL_arg1523z00_107 =
									execl(BgL_auxz00_173, BgL_auxz00_175, BgL_auxz00_177,
									BgL_auxz00_179, ((long) 0));
							}
							bgl_display_obj(BINT(BgL_arg1523z00_107), BgL_port1513z00_106);
						}
						bgl_display_char(((unsigned char) '\n'), BgL_port1513z00_106);
					}
					return
						BGl_internalzd2errorzd2zztools_errorz00
						(BGl_string1531z00zzcc_execz00, BGl_string1532z00zzcc_execz00,
						BgL_cmdz00_5);
				}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcc_execz00()
	{
		AN_OBJECT;
		{	/* Cc/exec.scm 20 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcc_execz00()
	{
		AN_OBJECT;
		{	/* Cc/exec.scm 20 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcc_execz00()
	{
		AN_OBJECT;
		{	/* Cc/exec.scm 20 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string1533z00zzcc_execz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string1533z00zzcc_execz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1533z00zzcc_execz00));
			return
				BGl_modulezd2initializa7ationz75zzinit_mainz00(((long) 230845835),
				BSTRING_TO_STRING(BGl_string1533z00zzcc_execz00));
		}
	}

#ifdef __cplusplus
}
#endif
