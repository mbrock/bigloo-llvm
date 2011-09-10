/*===========================================================================*/
/*   (Tools/trace.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Tools/trace.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_stopzd2tracezd2zztools_tracez00();
	BGL_EXPORTED_DEF obj_t BGl_za2tracezd2portza2zd2zztools_tracez00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztools_tracez00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_displayzd2circlezd2zz__pp_circlez00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zztools_tracez00();
	static obj_t BGl_za2tracezd2passza2zd2zztools_tracez00 = BUNSPEC;
	extern obj_t BGl_za2bigloozd2nameza2zd2zzengine_paramz00;
	static obj_t BGl__startzd2tracezd2zztools_tracez00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zztools_tracez00();
	static obj_t BGl__tracezd2satisfyzf3z21zztools_tracez00(obj_t, obj_t, obj_t);
	static obj_t BGl_za2levelza2z00zztools_tracez00 = BUNSPEC;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zztools_tracez00();
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__pp_circlez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zztools_tracez00();
	BGL_EXPORTED_DECL obj_t BGl_tracezd2satisfyzf3z21zztools_tracez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_close_output_port(obj_t);
	BGL_IMPORT long bgl_current_seconds();
	BGL_IMPORT obj_t bgl_seconds_to_date(long);
	static obj_t BGl_zc3anonymousza31518ze3z83zztools_tracez00(obj_t);
	static bool_t BGl_za2tracezd2modeza2zd2zztools_tracez00;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_printzd2tracezd2zztools_tracez00(obj_t);
	static obj_t BGl__stopzd2tracezd2zztools_tracez00(obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_commandzd2linezd2zz__osz00();
	extern obj_t BGl_za2tracezd2nameza2zd2zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_startzd2tracezd2zztools_tracez00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zztools_tracez00();
	extern obj_t BGl_za2additionalzd2tracesza2zd2zzengine_paramz00;
	static obj_t BGl_methodzd2initzd2zztools_tracez00();
	static obj_t BGl__printzd2tracezd2zztools_tracez00(obj_t, obj_t);
	static obj_t __cnst[1];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_startzd2tracezd2envz00zztools_tracez00,
		BgL_bgl__startza7d2traceza7d1537z00, BGl__startzd2tracezd2zztools_tracez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1529z00zztools_tracez00,
		BgL_bgl_za7c3anonymousza7a311538z00,
		BGl_zc3anonymousza31518ze3z83zztools_tracez00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1530z00zztools_tracez00,
		BgL_bgl_string1530za700za7za7t1539za7, "start-trace", 11);
	      DEFINE_STRING(BGl_string1531z00zztools_tracez00,
		BgL_bgl_string1531za700za7za7t1540za7, "Can't open trace file", 21);
	      DEFINE_STRING(BGl_string1532z00zztools_tracez00,
		BgL_bgl_string1532za700za7za7t1541za7, ";; ", 3);
	      DEFINE_STRING(BGl_string1533z00zztools_tracez00,
		BgL_bgl_string1533za700za7za7t1542za7, "tools_trace", 11);
	      DEFINE_STRING(BGl_string1534z00zztools_tracez00,
		BgL_bgl_string1534za700za7za7t1543za7, "none ", 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_printzd2tracezd2envz00zztools_tracez00,
		BgL_bgl__printza7d2traceza7d1544z00, va_generic_entry,
		BGl__printzd2tracezd2zztools_tracez00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tracezd2satisfyzf3zd2envzf3zztools_tracez00,
		BgL_bgl__traceza7d2satisfy1545za7,
		BGl__tracezd2satisfyzf3z21zztools_tracez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_stopzd2tracezd2envz00zztools_tracez00,
		BgL_bgl__stopza7d2traceza7d21546z00, BGl__stopzd2tracezd2zztools_tracez00,
		0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long
		BgL_checksumz00_159, char *BgL_fromz00_160)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztools_tracez00))
				{
					BGl_requirezd2initializa7ationz75zztools_tracez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zztools_tracez00();
					BGl_cnstzd2initzd2zztools_tracez00();
					BGl_importedzd2moduleszd2initz00zztools_tracez00();
					BGl_toplevelzd2initzd2zztools_tracez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztools_tracez00()
	{
		AN_OBJECT;
		{	/* Tools/trace.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "tools_trace");
			BGl_modulezd2initializa7ationz75zz__pp_circlez00(((long) 0),
				"tools_trace");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"tools_trace");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"tools_trace");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"tools_trace");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "tools_trace");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztools_tracez00()
	{
		AN_OBJECT;
		{	/* Tools/trace.scm 15 */
			{	/* Tools/trace.scm 15 */
				obj_t BgL_cportz00_151;

				BgL_cportz00_151 =
					bgl_open_input_string(BGl_string1534z00zztools_tracez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_152;

					BgL_iz00_152 = ((long) 0);
				BgL_loopz00_153:
					if ((BgL_iz00_152 == ((long) -1)))
						{	/* Tools/trace.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Tools/trace.scm 15 */
							{	/* Tools/trace.scm 15 */
								obj_t BgL_arg1536z00_155;

								{	/* Tools/trace.scm 15 */

									{	/* Tools/trace.scm 15 */
										obj_t BgL_locationz00_157;

										BgL_locationz00_157 = BBOOL(((bool_t) 0));
										{	/* Tools/trace.scm 15 */

											BgL_arg1536z00_155 =
												BGl_readz00zz__readerz00(BgL_cportz00_151,
												BgL_locationz00_157);
										}
									}
								}
								{	/* Tools/trace.scm 15 */
									int BgL_auxz00_180;

									BgL_auxz00_180 = (int) (BgL_iz00_152);
									CNST_TABLE_SET(BgL_auxz00_180, BgL_arg1536z00_155);
							}}
							{	/* Tools/trace.scm 15 */
								int BgL_auxz00_158;

								BgL_auxz00_158 = (int) ((BgL_iz00_152 - ((long) 1)));
								{
									long BgL_iz00_185;

									BgL_iz00_185 = (long) (BgL_auxz00_158);
									BgL_iz00_152 = BgL_iz00_185;
									goto BgL_loopz00_153;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztools_tracez00()
	{
		AN_OBJECT;
		{	/* Tools/trace.scm 15 */
			BGl_za2tracezd2portza2zd2zztools_tracez00 = BFALSE;
			BGl_za2tracezd2passza2zd2zztools_tracez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2levelza2z00zztools_tracez00 = BINT(((long) 0));
			return (BGl_za2tracezd2modeza2zd2zztools_tracez00 =
				((bool_t) 0), BUNSPEC);
		}
	}



/* start-trace */
	BGL_EXPORTED_DEF obj_t BGl_startzd2tracezd2zztools_tracez00(obj_t
		BgL_levelz00_1, obj_t BgL_passz00_2)
	{
		AN_OBJECT;
		{	/* Tools/trace.scm 35 */
			if (BGl_za2tracezd2modeza2zd2zztools_tracez00)
				{	/* Tools/trace.scm 37 */
					obj_t BgL_tracezd2namezd2_91;

					BgL_tracezd2namezd2_91 = BGl_za2tracezd2nameza2zd2zzengine_paramz00;
					BGl_za2tracezd2passza2zd2zztools_tracez00 = BgL_passz00_2;
					{	/* Tools/trace.scm 39 */

						BGl_za2tracezd2portza2zd2zztools_tracez00 =
							BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00
							(BgL_tracezd2namezd2_91, BTRUE);
					}
					if (OUTPUT_PORTP(BGl_za2tracezd2portza2zd2zztools_tracez00))
						{	/* Tools/trace.scm 40 */
							BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00
								(BGl_za2tracezd2portza2zd2zztools_tracez00,
								BGl_proc1529z00zztools_tracez00);
							return (BGl_za2levelza2z00zztools_tracez00 =
								BgL_levelz00_1, BUNSPEC);
						}
					else
						{	/* Tools/trace.scm 40 */
							return
								BGl_internalzd2errorzd2zztools_errorz00
								(BGl_string1530z00zztools_tracez00,
								BGl_string1531z00zztools_tracez00, BgL_tracezd2namezd2_91);
						}
				}
			else
				{	/* Tools/trace.scm 36 */
					return BFALSE;
				}
		}
	}



/* _start-trace */
	obj_t BGl__startzd2tracezd2zztools_tracez00(obj_t BgL_envz00_141,
		obj_t BgL_levelz00_142, obj_t BgL_passz00_143)
	{
		AN_OBJECT;
		{	/* Tools/trace.scm 35 */
			return
				BGl_startzd2tracezd2zztools_tracez00(BgL_levelz00_142, BgL_passz00_143);
		}
	}



/* <anonymous:1518> */
	obj_t BGl_zc3anonymousza31518ze3z83zztools_tracez00(obj_t BgL_envz00_144)
	{
		AN_OBJECT;
		{	/* Tools/trace.scm 46 */
			{

				{	/* Tools/trace.scm 47 */
					obj_t BgL_port1511z00_97;

					{	/* Tools/trace.scm 47 */
						obj_t BgL_res1525z00_116;

						{	/* Tools/trace.scm 47 */
							obj_t BgL_auxz00_196;

							BgL_auxz00_196 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res1525z00_116 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_196);
						}
						BgL_port1511z00_97 = BgL_res1525z00_116;
					}
					bgl_display_string(BGl_string1532z00zztools_tracez00,
						BgL_port1511z00_97);
					bgl_display_obj(BGl_za2bigloozd2nameza2zd2zzengine_paramz00,
						BgL_port1511z00_97);
					bgl_display_char(((unsigned char) '\n'), BgL_port1511z00_97);
				}
				{	/* Tools/trace.scm 48 */
					obj_t BgL_port1512z00_98;

					{	/* Tools/trace.scm 48 */
						obj_t BgL_res1526z00_121;

						{	/* Tools/trace.scm 48 */
							obj_t BgL_auxz00_202;

							BgL_auxz00_202 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res1526z00_121 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_202);
						}
						BgL_port1512z00_98 = BgL_res1526z00_121;
					}
					bgl_display_string(BGl_string1532z00zztools_tracez00,
						BgL_port1512z00_98);
					bgl_display_obj(bgl_seconds_to_date(bgl_current_seconds()),
						BgL_port1512z00_98);
					bgl_display_char(((unsigned char) '\n'), BgL_port1512z00_98);
				}
				{	/* Tools/trace.scm 49 */
					obj_t BgL_port1513z00_100;

					{	/* Tools/trace.scm 49 */
						obj_t BgL_res1528z00_128;

						{	/* Tools/trace.scm 49 */
							obj_t BgL_auxz00_210;

							BgL_auxz00_210 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res1528z00_128 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_210);
						}
						BgL_port1513z00_100 = BgL_res1528z00_128;
					}
					bgl_display_string(BGl_string1532z00zztools_tracez00,
						BgL_port1513z00_100);
					bgl_display_obj(BGl_commandzd2linezd2zz__osz00(),
						BgL_port1513z00_100);
					return bgl_display_char(((unsigned char) '\n'), BgL_port1513z00_100);
		}}}
	}



/* stop-trace */
	BGL_EXPORTED_DEF obj_t BGl_stopzd2tracezd2zztools_tracez00()
	{
		AN_OBJECT;
		{	/* Tools/trace.scm 55 */
			if (BGl_za2tracezd2modeza2zd2zztools_tracez00)
				{	/* Tools/trace.scm 56 */
					if (OUTPUT_PORTP(BGl_za2tracezd2portza2zd2zztools_tracez00))
						{	/* Tools/trace.scm 57 */
							return
								bgl_close_output_port
								(BGl_za2tracezd2portza2zd2zztools_tracez00);
						}
					else
						{	/* Tools/trace.scm 57 */
							return BFALSE;
						}
				}
			else
				{	/* Tools/trace.scm 56 */
					return BFALSE;
				}
		}
	}



/* _stop-trace */
	obj_t BGl__stopzd2tracezd2zztools_tracez00(obj_t BgL_envz00_145)
	{
		AN_OBJECT;
		{	/* Tools/trace.scm 55 */
			return BGl_stopzd2tracezd2zztools_tracez00();
		}
	}



/* trace-satisfy? */
	BGL_EXPORTED_DEF obj_t BGl_tracezd2satisfyzf3z21zztools_tracez00(obj_t
		BgL_passz00_3, obj_t BgL_levelz00_4)
	{
		AN_OBJECT;
		{	/* Tools/trace.scm 63 */
			if (BGl_za2tracezd2modeza2zd2zztools_tracez00)
				{	/* Tools/trace.scm 65 */
					obj_t BgL__andtest_1509z00_105;

					{	/* Tools/trace.scm 65 */
						bool_t BgL__ortest_1510z00_106;

						BgL__ortest_1510z00_106 =
							(BgL_passz00_3 == BGl_za2tracezd2passza2zd2zztools_tracez00);
						if (BgL__ortest_1510z00_106)
							{	/* Tools/trace.scm 65 */
								BgL__andtest_1509z00_105 = BBOOL(BgL__ortest_1510z00_106);
							}
						else
							{	/* Tools/trace.scm 65 */
								BgL__andtest_1509z00_105 =
									BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_passz00_3,
									BGl_za2additionalzd2tracesza2zd2zzengine_paramz00);
							}
					}
					if (CBOOL(BgL__andtest_1509z00_105))
						{	/* Tools/trace.scm 66 */
							long BgL_n1z00_134;

							long BgL_n2z00_135;

							BgL_n1z00_134 = (long) CINT(BgL_levelz00_4);
							BgL_n2z00_135 = (long) CINT(BGl_za2levelza2z00zztools_tracez00);
							return BBOOL((BgL_n1z00_134 <= BgL_n2z00_135));
						}
					else
						{	/* Tools/trace.scm 65 */
							return BFALSE;
						}
				}
			else
				{	/* Tools/trace.scm 64 */
					return BFALSE;
				}
		}
	}



/* _trace-satisfy? */
	obj_t BGl__tracezd2satisfyzf3z21zztools_tracez00(obj_t BgL_envz00_146,
		obj_t BgL_passz00_147, obj_t BgL_levelz00_148)
	{
		AN_OBJECT;
		{	/* Tools/trace.scm 63 */
			return
				BGl_tracezd2satisfyzf3z21zztools_tracez00(BgL_passz00_147,
				BgL_levelz00_148);
		}
	}



/* print-trace */
	BGL_EXPORTED_DEF obj_t BGl_printzd2tracezd2zztools_tracez00(obj_t
		BgL_expz00_5)
	{
		AN_OBJECT;
		{	/* Tools/trace.scm 71 */
			if (BGl_za2tracezd2modeza2zd2zztools_tracez00)
				{	/* Tools/trace.scm 72 */
					{
						obj_t BgL_l1514z00_108;

						BgL_l1514z00_108 = BgL_expz00_5;
					BgL_zc3anonymousza31522ze3z83_109:
						if (PAIRP(BgL_l1514z00_108))
							{	/* Tools/trace.scm 74 */
								{	/* Tools/trace.scm 74 */
									obj_t BgL_ez00_111;

									BgL_ez00_111 = CAR(BgL_l1514z00_108);
									BGl_displayzd2circlezd2zz__pp_circlez00(BgL_ez00_111,
										BGl_za2tracezd2portza2zd2zztools_tracez00);
								}
								{
									obj_t BgL_l1514z00_239;

									BgL_l1514z00_239 = CDR(BgL_l1514z00_108);
									BgL_l1514z00_108 = BgL_l1514z00_239;
									goto BgL_zc3anonymousza31522ze3z83_109;
								}
							}
						else
							{	/* Tools/trace.scm 74 */
								((bool_t) 1);
							}
					}
					return FLUSH_OUTPUT_PORT(BGl_za2tracezd2portza2zd2zztools_tracez00);
				}
			else
				{	/* Tools/trace.scm 72 */
					return BFALSE;
				}
		}
	}



/* _print-trace */
	obj_t BGl__printzd2tracezd2zztools_tracez00(obj_t BgL_envz00_149,
		obj_t BgL_expz00_150)
	{
		AN_OBJECT;
		{	/* Tools/trace.scm 71 */
			return BGl_printzd2tracezd2zztools_tracez00(BgL_expz00_150);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztools_tracez00()
	{
		AN_OBJECT;
		{	/* Tools/trace.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztools_tracez00()
	{
		AN_OBJECT;
		{	/* Tools/trace.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztools_tracez00()
	{
		AN_OBJECT;
		{	/* Tools/trace.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1533z00zztools_tracez00));
			return
				BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string1533z00zztools_tracez00));
		}
	}

#ifdef __cplusplus
}
#endif
