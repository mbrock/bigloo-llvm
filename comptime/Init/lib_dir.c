/*===========================================================================*/
/*   (Init/lib_dir.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Init/lib_dir.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT bool_t bigloo_strcmp(obj_t, obj_t);
	extern obj_t BGl_za2bigloozd2versionza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzinit_libzd2dirzd2 = BUNSPEC;
	static obj_t BGl_readzd2config_schzd2zzinit_libzd2dirzd2(obj_t);
	static obj_t BGl_genericzd2initzd2zzinit_libzd2dirzd2();
	BGL_IMPORT bool_t fexists(char *);
	BGL_IMPORT obj_t BGl_evalz00zz__evalz00(obj_t, obj_t);
	static obj_t BGl__processzd2libzd2dirzd2parameterzd2zzinit_libzd2dirzd2(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_processzd2libzd2configz00zzinit_libzd2dirzd2(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_processzd2libzd2dirzd2parameterzd2zzinit_libzd2dirzd2(obj_t);
	static obj_t BGl_cnstzd2initzd2zzinit_libzd2dirzd2();
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzinit_libzd2dirzd2();
	BGL_IMPORT bool_t directoryp(char *);
	BGL_IMPORT obj_t
		BGl_bigloozd2configurationzd2addzd2entryz12zc0zz__configurez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2libzd2dirza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_defaultzd2environmentzd2zz__evalz00();
	BGL_IMPORT obj_t BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzinit_libzd2dirzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_evalz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long,
		char *);
	extern obj_t BGl_reinitializa7ezd2bigloozd2variablesz12zb5zzengine_paramz00();
	BGL_IMPORT obj_t BGl_makezd2filezd2pathz00zz__osz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	extern obj_t BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_zc3exitza31528ze3z83zzinit_libzd2dirzd2(obj_t, obj_t);
	static obj_t BGl_processzd2libzd2versionz00zzinit_libzd2dirzd2(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	static obj_t BGl_safezd2readzd2zzinit_libzd2dirzd2(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzinit_libzd2dirzd2();
	static obj_t BGl_methodzd2initzd2zzinit_libzd2dirzd2();
	static obj_t __cnst[3];


	   
		 
		DEFINE_STRING(BGl_string1532z00zzinit_libzd2dirzd2,
		BgL_bgl_string1532za700za7za7i1541za7, "Internal Error", 14);
	      DEFINE_STRING(BGl_string1533z00zzinit_libzd2dirzd2,
		BgL_bgl_string1533za700za7za7i1542za7, "Bad bigloo_config.sch file", 26);
	      DEFINE_STRING(BGl_string1534z00zzinit_libzd2dirzd2,
		BgL_bgl_string1534za700za7za7i1543za7,
		"Cross compilation for different Bigloos is risky.", 49);
	      DEFINE_STRING(BGl_string1535z00zzinit_libzd2dirzd2,
		BgL_bgl_string1535za700za7za7i1544za7, "Not a directory", 15);
	      DEFINE_STRING(BGl_string1536z00zzinit_libzd2dirzd2,
		BgL_bgl_string1536za700za7za7i1545za7, "bigloo_config.sch", 17);
	      DEFINE_STRING(BGl_string1537z00zzinit_libzd2dirzd2,
		BgL_bgl_string1537za700za7za7i1546za7, "init_lib-dir", 12);
	      DEFINE_STRING(BGl_string1538z00zzinit_libzd2dirzd2,
		BgL_bgl_string1538za700za7za7i1547za7, "lib-dir pair string ", 20);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_processzd2libzd2dirzd2parameterzd2envz00zzinit_libzd2dirzd2,
		BgL_bgl__processza7d2libza7d1548z00,
		BGl__processzd2libzd2dirzd2parameterzd2zzinit_libzd2dirzd2, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzinit_libzd2dirzd2(long
		BgL_checksumz00_171, char *BgL_fromz00_172)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzinit_libzd2dirzd2))
				{
					BGl_requirezd2initializa7ationz75zzinit_libzd2dirzd2 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzinit_libzd2dirzd2();
					BGl_cnstzd2initzd2zzinit_libzd2dirzd2();
					BGl_importedzd2moduleszd2initz00zzinit_libzd2dirzd2();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzinit_libzd2dirzd2()
	{
		AN_OBJECT;
		{	/* Init/lib_dir.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "init_lib-dir");
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "init_lib-dir");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"init_lib-dir");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "init_lib-dir");
			BGl_modulezd2initializa7ationz75zz__configurez00(((long) 0),
				"init_lib-dir");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "init_lib-dir");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "init_lib-dir");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzinit_libzd2dirzd2()
	{
		AN_OBJECT;
		{	/* Init/lib_dir.scm 15 */
			{	/* Init/lib_dir.scm 15 */
				obj_t BgL_cportz00_163;

				BgL_cportz00_163 =
					bgl_open_input_string(BGl_string1538z00zzinit_libzd2dirzd2,
					(int) (((long) 0)));
				{
					long BgL_iz00_164;

					BgL_iz00_164 = ((long) 2);
				BgL_loopz00_165:
					if ((BgL_iz00_164 == ((long) -1)))
						{	/* Init/lib_dir.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Init/lib_dir.scm 15 */
							{	/* Init/lib_dir.scm 15 */
								obj_t BgL_arg1540z00_167;

								{	/* Init/lib_dir.scm 15 */

									{	/* Init/lib_dir.scm 15 */
										obj_t BgL_locationz00_169;

										BgL_locationz00_169 = BBOOL(((bool_t) 0));
										{	/* Init/lib_dir.scm 15 */

											BgL_arg1540z00_167 =
												BGl_readz00zz__readerz00(BgL_cportz00_163,
												BgL_locationz00_169);
										}
									}
								}
								{	/* Init/lib_dir.scm 15 */
									int BgL_auxz00_192;

									BgL_auxz00_192 = (int) (BgL_iz00_164);
									CNST_TABLE_SET(BgL_auxz00_192, BgL_arg1540z00_167);
							}}
							{	/* Init/lib_dir.scm 15 */
								int BgL_auxz00_170;

								BgL_auxz00_170 = (int) ((BgL_iz00_164 - ((long) 1)));
								{
									long BgL_iz00_197;

									BgL_iz00_197 = (long) (BgL_auxz00_170);
									BgL_iz00_164 = BgL_iz00_197;
									goto BgL_loopz00_165;
								}
							}
						}
				}
			}
		}
	}



/* safe-read */
	obj_t BGl_safezd2readzd2zzinit_libzd2dirzd2(obj_t BgL_pz00_1,
		obj_t BgL_typez00_2, obj_t BgL_fz00_3)
	{
		AN_OBJECT;
		{	/* Init/lib_dir.scm 23 */
			{
				obj_t BgL_objz00_100;

				{	/* Init/lib_dir.scm 31 */
					obj_t BgL_tmpz00_96;

					{	/* Init/lib_dir.scm 31 */

						{	/* Init/lib_dir.scm 31 */
							obj_t BgL_iportz00_98;

							BgL_iportz00_98 = BgL_pz00_1;
							{	/* Init/lib_dir.scm 31 */

								BgL_tmpz00_96 =
									BGl_readz00zz__readerz00(BgL_iportz00_98, BFALSE);
							}
						}
					}
					{	/* Init/lib_dir.scm 32 */
						bool_t BgL_testz00_200;

						{	/* Init/lib_dir.scm 32 */
							obj_t BgL_auxz00_201;

							BgL_objz00_100 = BgL_tmpz00_96;
							if ((BgL_typez00_2 == CNST_TABLE_REF(((long) 0))))
								{	/* Init/lib_dir.scm 26 */
									BgL_auxz00_201 = BBOOL(STRINGP(BgL_objz00_100));
								}
							else
								{	/* Init/lib_dir.scm 26 */
									if ((BgL_typez00_2 == CNST_TABLE_REF(((long) 1))))
										{	/* Init/lib_dir.scm 26 */
											BgL_auxz00_201 = BBOOL(PAIRP(BgL_objz00_100));
										}
									else
										{	/* Init/lib_dir.scm 26 */
											BgL_auxz00_201 =
												BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 2)),
												BGl_string1532z00zzinit_libzd2dirzd2, BgL_typez00_2);
								}}
							BgL_testz00_200 = CBOOL(BgL_auxz00_201);
						}
						if (BgL_testz00_200)
							{	/* Init/lib_dir.scm 32 */
								BFALSE;
							}
						else
							{	/* Init/lib_dir.scm 32 */
								BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 2)),
									BGl_string1533z00zzinit_libzd2dirzd2, BgL_fz00_3);
					}}
					return BgL_tmpz00_96;
				}
			}
		}
	}



/* process-lib-version */
	obj_t BGl_processzd2libzd2versionz00zzinit_libzd2dirzd2(obj_t BgL_pz00_4,
		obj_t BgL_fz00_5)
	{
		AN_OBJECT;
		{	/* Init/lib_dir.scm 39 */
			{	/* Init/lib_dir.scm 40 */
				obj_t BgL_libzd2versionzd2_106;

				BgL_libzd2versionzd2_106 =
					BGl_safezd2readzd2zzinit_libzd2dirzd2(BgL_pz00_4,
					CNST_TABLE_REF(((long) 0)), BgL_fz00_5);
				{	/* Init/lib_dir.scm 40 */
					obj_t BgL_libzd2specificzd2versionz00_107;

					BgL_libzd2specificzd2versionz00_107 =
						BGl_safezd2readzd2zzinit_libzd2dirzd2(BgL_pz00_4,
						CNST_TABLE_REF(((long) 0)), BgL_fz00_5);
					{	/* Init/lib_dir.scm 41 */

						{	/* Init/lib_dir.scm 42 */
							bool_t BgL_testz00_221;

							if (bigloo_strcmp(BGl_za2bigloozd2versionza2zd2zzengine_paramz00,
									BgL_libzd2versionzd2_106))
								{	/* Init/lib_dir.scm 42 */
									BgL_testz00_221 =
										bigloo_strcmp
										(BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00,
										BgL_libzd2specificzd2versionz00_107);
								}
							else
								{	/* Init/lib_dir.scm 42 */
									BgL_testz00_221 = ((bool_t) 0);
								}
							if (BgL_testz00_221)
								{	/* Init/lib_dir.scm 42 */
									return BFALSE;
								}
							else
								{	/* Init/lib_dir.scm 46 */
									obj_t BgL_list1518z00_109;

									BgL_list1518z00_109 =
										MAKE_PAIR(BGl_string1534z00zzinit_libzd2dirzd2, BNIL);
									return BGl_warningz00zz__errorz00(BgL_list1518z00_109);
								}
						}
					}
				}
			}
		}
	}



/* process-lib-config */
	obj_t BGl_processzd2libzd2configz00zzinit_libzd2dirzd2(obj_t BgL_pz00_6,
		obj_t BgL_fz00_7)
	{
		AN_OBJECT;
		{	/* Init/lib_dir.scm 51 */
			{	/* Init/lib_dir.scm 53 */
				obj_t BgL_readzd2configzd2_111;

				BgL_readzd2configzd2_111 =
					BGl_safezd2readzd2zzinit_libzd2dirzd2(BgL_pz00_6,
					CNST_TABLE_REF(((long) 1)), BgL_fz00_7);
				{	/* Init/lib_dir.scm 53 */
					obj_t BgL_libzd2configzd2_112;

					{	/* Init/lib_dir.scm 54 */
						obj_t BgL_envz00_123;

						BgL_envz00_123 = BGl_defaultzd2environmentzd2zz__evalz00();
						{	/* Init/lib_dir.scm 54 */

							BgL_libzd2configzd2_112 =
								BGl_evalz00zz__evalz00(BgL_readzd2configzd2_111,
								BgL_envz00_123);
					}}
					{	/* Init/lib_dir.scm 54 */

						{
							obj_t BgL_l1511z00_114;

							BgL_l1511z00_114 = BgL_libzd2configzd2_112;
						BgL_zc3anonymousza31520ze3z83_115:
							if (PAIRP(BgL_l1511z00_114))
								{	/* Init/lib_dir.scm 56 */
									{	/* Init/lib_dir.scm 56 */
										obj_t BgL_cz00_117;

										BgL_cz00_117 = CAR(BgL_l1511z00_114);
										BGl_bigloozd2configurationzd2addzd2entryz12zc0zz__configurez00
											(CAR(BgL_cz00_117), CDR(BgL_cz00_117));
									}
									{
										obj_t BgL_l1511z00_237;

										BgL_l1511z00_237 = CDR(BgL_l1511z00_114);
										BgL_l1511z00_114 = BgL_l1511z00_237;
										goto BgL_zc3anonymousza31520ze3z83_115;
									}
								}
							else
								{	/* Init/lib_dir.scm 56 */
									((bool_t) 1);
								}
						}
						return
							BGl_reinitializa7ezd2bigloozd2variablesz12zb5zzengine_paramz00();
					}
				}
			}
		}
	}



/* read-config_sch */
	obj_t BGl_readzd2config_schzd2zzinit_libzd2dirzd2(obj_t BgL_fz00_8)
	{
		AN_OBJECT;
		{	/* Init/lib_dir.scm 63 */
			{	/* Init/lib_dir.scm 64 */
				obj_t BgL_portz00_124;

				{	/* Init/lib_dir.scm 64 */

					BgL_portz00_124 =
						BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_fz00_8, BTRUE);
				}
				{	/* Init/lib_dir.scm 65 */
					obj_t BgL_val1508z00_125;

					BgL_val1508z00_125 =
						BGl_zc3exitza31528ze3z83zzinit_libzd2dirzd2(BgL_fz00_8,
						BgL_portz00_124);
					bgl_close_input_port(BgL_portz00_124);
					if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
							(BgL_val1508z00_125)))
						{	/* Init/lib_dir.scm 71 */
							return
								BGl_unwindzd2untilz12zc0zz__bexitz00(CAR(BgL_val1508z00_125),
								CDR(BgL_val1508z00_125));
						}
					else
						{	/* Init/lib_dir.scm 71 */
							return BgL_val1508z00_125;
						}
				}
			}
		}
	}



/* <exit:1528> */
	obj_t BGl_zc3exitza31528ze3z83zzinit_libzd2dirzd2(obj_t BgL_fz00_162,
		obj_t BgL_portz00_161)
	{
		AN_OBJECT;
		{	/* Init/lib_dir.scm 71 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1509z00_130;

			if (SET_EXIT(BgL_an_exit1509z00_130))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1509z00_130 = (void *) jmpbuf;
					{	/* Init/lib_dir.scm 71 */

						PUSH_EXIT(BgL_an_exit1509z00_130, ((long) 0));
						{	/* Init/lib_dir.scm 67 */
							obj_t BgL_val1510z00_131;

							BGl_processzd2libzd2versionz00zzinit_libzd2dirzd2(BgL_portz00_161,
								BgL_fz00_162);
							BgL_val1510z00_131 =
								BGl_processzd2libzd2configz00zzinit_libzd2dirzd2
								(BgL_portz00_161, BgL_fz00_162);
							POP_EXIT();
							return BgL_val1510z00_131;
						}
					}
				}
		}
	}



/* process-lib-dir-parameter */
	BGL_EXPORTED_DEF obj_t
		BGl_processzd2libzd2dirzd2parameterzd2zzinit_libzd2dirzd2(obj_t
		BgL_paramz00_9)
	{
		AN_OBJECT;
		{	/* Init/lib_dir.scm 76 */
			{	/* Init/lib_dir.scm 77 */
				obj_t BgL_dirz00_134;

				BgL_dirz00_134 =
					BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00(BgL_paramz00_9);
				if (directoryp(BSTRING_TO_STRING(BgL_dirz00_134)))
					{	/* Init/lib_dir.scm 78 */
						BFALSE;
					}
				else
					{	/* Init/lib_dir.scm 78 */
						BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 2)),
							BGl_string1535z00zzinit_libzd2dirzd2, BgL_dirz00_134);
					}
				{	/* Init/lib_dir.scm 80 */
					obj_t BgL_config_schz00_136;

					BgL_config_schz00_136 =
						BGl_makezd2filezd2pathz00zz__osz00(BgL_dirz00_134,
						BGl_string1536z00zzinit_libzd2dirzd2, BNIL);
					if (fexists(BSTRING_TO_STRING(BgL_config_schz00_136)))
						{	/* Init/lib_dir.scm 81 */
							BGl_readzd2config_schzd2zzinit_libzd2dirzd2
								(BgL_config_schz00_136);
						}
					else
						{	/* Init/lib_dir.scm 81 */
							BFALSE;
						}
					return (BGl_za2libzd2dirza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_dirz00_134, BGl_za2libzd2dirza2zd2zzengine_paramz00),
						BUNSPEC);
				}
			}
		}
	}



/* _process-lib-dir-parameter */
	obj_t BGl__processzd2libzd2dirzd2parameterzd2zzinit_libzd2dirzd2(obj_t
		BgL_envz00_159, obj_t BgL_paramz00_160)
	{
		AN_OBJECT;
		{	/* Init/lib_dir.scm 76 */
			return
				BGl_processzd2libzd2dirzd2parameterzd2zzinit_libzd2dirzd2
				(BgL_paramz00_160);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzinit_libzd2dirzd2()
	{
		AN_OBJECT;
		{	/* Init/lib_dir.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzinit_libzd2dirzd2()
	{
		AN_OBJECT;
		{	/* Init/lib_dir.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzinit_libzd2dirzd2()
	{
		AN_OBJECT;
		{	/* Init/lib_dir.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1537z00zzinit_libzd2dirzd2));
			return
				BGl_modulezd2initializa7ationz75zzmodule_evalz00(((long) 168261208),
				BSTRING_TO_STRING(BGl_string1537z00zzinit_libzd2dirzd2));
		}
	}

#ifdef __cplusplus
}
#endif
