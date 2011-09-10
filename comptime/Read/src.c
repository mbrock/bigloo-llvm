/*===========================================================================*/
/*   (Read/src.scm)                                                          */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Read/src.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT bool_t BGl_z62errorzf3z91zz__objectz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzread_srcz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_withzd2exceptionzd2handlerz00zz__errorz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzread_srcz00();
	BGL_IMPORT obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl__readzd2srczd2zzread_srcz00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_cnstzd2initzd2zzread_srcz00();
	static obj_t BGl_readzd2modulezd2clausez00zzread_srcz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzread_srcz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_compilerzd2readzd2srcz00zzread_readerz00(obj_t);
	static obj_t BGl_openzd2srczd2filez00zzread_srcz00(obj_t);
	BGL_IMPORT obj_t BGl_readerzd2resetz12zc0zz__readerz00();
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzread_srcz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_enginez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_readzd2srczf2portz20zzread_srcz00();
	static obj_t BGl_toplevelzd2initzd2zzread_srcz00();
	BGL_IMPORT obj_t BGl_errorzd2notifyzd2zz__errorz00(obj_t);
	BGL_IMPORT obj_t BGl_za2bigloozd2interpreterza2zd2zz__readerz00;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_za2portza2z00zzread_srcz00 = BUNSPEC;
	extern obj_t BGl_hellozd2worldzd2zzengine_enginez00();
	static obj_t BGl_zc3anonymousza31523ze3z83zzread_srcz00(obj_t);
	static obj_t BGl_zc3anonymousza31527ze3z83zzread_srcz00(obj_t);
	static obj_t BGl_closezd2srczd2portz00zzread_srcz00();
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	static obj_t BGl__readzd2handlerzd2zzread_srcz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_raisez00zz__errorz00(obj_t);
	extern obj_t BGl_compilerzd2exitzd2zzinit_mainz00(obj_t);
	BGL_IMPORT obj_t BGl_za2loadzd2pathza2zd2zz__evalz00;
	static obj_t BGl_readzd2handlerzd2zzread_srcz00(obj_t);
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzread_srcz00();
	BGL_EXPORTED_DECL obj_t BGl_readzd2srczd2zzread_srcz00();
	static obj_t BGl_methodzd2initzd2zzread_srcz00();
	static obj_t __cnst[1];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1544z00zzread_srcz00,
		BgL_bgl_za7c3anonymousza7a311552z00,
		BGl_zc3anonymousza31523ze3z83zzread_srcz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_readzd2handlerzd2envz00zzread_srcz00,
		BgL_bgl__readza7d2handlerza71553z00, BGl__readzd2handlerzd2zzread_srcz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1545z00zzread_srcz00,
		BgL_bgl_string1545za700za7za7r1554za7, "Can't open such file", 20);
	      DEFINE_STRING(BGl_string1546z00zzread_srcz00,
		BgL_bgl_string1546za700za7za7r1555za7, "Can't find such file", 20);
	      DEFINE_STRING(BGl_string1547z00zzread_srcz00,
		BgL_bgl_string1547za700za7za7r1556za7, "read_src", 8);
	      DEFINE_STRING(BGl_string1548z00zzread_srcz00,
		BgL_bgl_string1548za700za7za7r1557za7, "src-file->memory ", 17);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_readzd2srczd2envz00zzread_srcz00,
		BgL_bgl__readza7d2srcza7d2za7za71558z00, BGl__readzd2srczd2zzread_srcz00,
		0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzread_srcz00(long
		BgL_checksumz00_172, char *BgL_fromz00_173)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzread_srcz00))
				{
					BGl_requirezd2initializa7ationz75zzread_srcz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzread_srcz00();
					BGl_cnstzd2initzd2zzread_srcz00();
					BGl_importedzd2moduleszd2initz00zzread_srcz00();
					BGl_toplevelzd2initzd2zzread_srcz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzread_srcz00()
	{
		AN_OBJECT;
		{	/* Read/src.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "read_src");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "read_src");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "read_src");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"read_src");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"read_src");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "read_src");
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "read_src");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzread_srcz00()
	{
		AN_OBJECT;
		{	/* Read/src.scm 15 */
			{	/* Read/src.scm 15 */
				obj_t BgL_cportz00_164;

				BgL_cportz00_164 =
					bgl_open_input_string(BGl_string1548z00zzread_srcz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_165;

					BgL_iz00_165 = ((long) 0);
				BgL_loopz00_166:
					if ((BgL_iz00_165 == ((long) -1)))
						{	/* Read/src.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Read/src.scm 15 */
							{	/* Read/src.scm 15 */
								obj_t BgL_arg1551z00_168;

								{	/* Read/src.scm 15 */

									{	/* Read/src.scm 15 */
										obj_t BgL_locationz00_170;

										BgL_locationz00_170 = BBOOL(((bool_t) 0));
										{	/* Read/src.scm 15 */

											BgL_arg1551z00_168 =
												BGl_readz00zz__readerz00(BgL_cportz00_164,
												BgL_locationz00_170);
										}
									}
								}
								{	/* Read/src.scm 15 */
									int BgL_auxz00_194;

									BgL_auxz00_194 = (int) (BgL_iz00_165);
									CNST_TABLE_SET(BgL_auxz00_194, BgL_arg1551z00_168);
							}}
							{	/* Read/src.scm 15 */
								int BgL_auxz00_171;

								BgL_auxz00_171 = (int) ((BgL_iz00_165 - ((long) 1)));
								{
									long BgL_iz00_199;

									BgL_iz00_199 = (long) (BgL_auxz00_171);
									BgL_iz00_165 = BgL_iz00_199;
									goto BgL_loopz00_166;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzread_srcz00()
	{
		AN_OBJECT;
		{	/* Read/src.scm 15 */
			return (BGl_za2portza2z00zzread_srcz00 = BFALSE, BUNSPEC);
		}
	}



/* read-src */
	BGL_EXPORTED_DEF obj_t BGl_readzd2srczd2zzread_srcz00()
	{
		AN_OBJECT;
		{	/* Read/src.scm 31 */
			{	/* Read/src.scm 35 */
				obj_t BgL_modz00_89;

				BgL_modz00_89 = BGl_readzd2modulezd2clausez00zzread_srcz00();
				if (PAIRP(BgL_modz00_89))
					{	/* Read/src.scm 38 */
						obj_t BgL_g1508z00_91;

						obj_t BgL_g1509z00_92;

						BgL_g1508z00_91 = BGl_readzd2srczf2portz20zzread_srcz00();
						BgL_g1509z00_92 = CDR(BGl_za2srczd2filesza2zd2zzengine_paramz00);
						{
							obj_t BgL_srcz00_94;

							obj_t BgL_sfilesz00_95;

							BgL_srcz00_94 = BgL_g1508z00_91;
							BgL_sfilesz00_95 = BgL_g1509z00_92;
						BgL_zc3anonymousza31513ze3z83_96:
							if (NULLP(BgL_sfilesz00_95))
								{	/* Read/src.scm 40 */
									return
										MAKE_PAIR(BgL_modz00_89, bgl_reverse_bang(BgL_srcz00_94));
								}
							else
								{	/* Read/src.scm 42 */
									obj_t BgL_arg1516z00_99;

									obj_t BgL_arg1517z00_100;

									{	/* Read/src.scm 42 */
										obj_t BgL_arg1518z00_101;

										{	/* Read/src.scm 42 */
											obj_t BgL_arg1519z00_102;

											BgL_arg1519z00_102 = CAR(BgL_sfilesz00_95);
											BGl_openzd2srczd2filez00zzread_srcz00(BgL_arg1519z00_102);
											BgL_arg1518z00_101 =
												BGl_readzd2srczf2portz20zzread_srcz00();
										}
										BgL_arg1516z00_99 =
											bgl_append2(BgL_arg1518z00_101, BgL_srcz00_94);
									}
									BgL_arg1517z00_100 = CDR(BgL_sfilesz00_95);
									{
										obj_t BgL_sfilesz00_216;

										obj_t BgL_srcz00_215;

										BgL_srcz00_215 = BgL_arg1516z00_99;
										BgL_sfilesz00_216 = BgL_arg1517z00_100;
										BgL_sfilesz00_95 = BgL_sfilesz00_216;
										BgL_srcz00_94 = BgL_srcz00_215;
										goto BgL_zc3anonymousza31513ze3z83_96;
									}
								}
						}
					}
				else
					{	/* Read/src.scm 36 */
						return BgL_modz00_89;
					}
			}
		}
	}



/* _read-src */
	obj_t BGl__readzd2srczd2zzread_srcz00(obj_t BgL_envz00_156)
	{
		AN_OBJECT;
		{	/* Read/src.scm 31 */
			return BGl_readzd2srczd2zzread_srcz00();
		}
	}



/* read-handler */
	obj_t BGl_readzd2handlerzd2zzread_srcz00(obj_t BgL_ez00_1)
	{
		AN_OBJECT;
		{	/* Read/src.scm 48 */
			if (BGl_z62errorzf3z91zz__objectz00(BgL_ez00_1))
				{	/* Read/src.scm 49 */
					BGl_hellozd2worldzd2zzengine_enginez00();
					BGl_errorzd2notifyzd2zz__errorz00(BgL_ez00_1);
					BGl_closezd2srczd2portz00zzread_srcz00();
					return BGl_compilerzd2exitzd2zzinit_mainz00(BINT(((long) 3)));
				}
			else
				{	/* Read/src.scm 49 */
					return BGl_raisez00zz__errorz00(BgL_ez00_1);
				}
		}
	}



/* _read-handler */
	obj_t BGl__readzd2handlerzd2zzread_srcz00(obj_t BgL_envz00_157,
		obj_t BgL_ez00_158)
	{
		AN_OBJECT;
		{	/* Read/src.scm 48 */
			return BGl_readzd2handlerzd2zzread_srcz00(BgL_ez00_158);
		}
	}



/* read-module-clause */
	obj_t BGl_readzd2modulezd2clausez00zzread_srcz00()
	{
		AN_OBJECT;
		{	/* Read/src.scm 63 */
			BGl_openzd2srczd2filez00zzread_srcz00(CAR
				(BGl_za2srczd2filesza2zd2zzengine_paramz00));
			{	/* Read/src.scm 65 */
				obj_t BgL_modz00_106;

				BgL_modz00_106 =
					BGl_withzd2exceptionzd2handlerz00zz__errorz00
					(BGl_readzd2handlerzd2envz00zzread_srcz00,
					BGl_proc1544z00zzread_srcz00);
				if (CBOOL(BGl_za2bigloozd2interpreterza2zd2zz__readerz00))
					{	/* Read/src.scm 69 */
						return BFALSE;
					}
				else
					{	/* Read/src.scm 69 */
						return BgL_modz00_106;
					}
			}
		}
	}



/* <anonymous:1523> */
	obj_t BGl_zc3anonymousza31523ze3z83zzread_srcz00(obj_t BgL_envz00_160)
	{
		AN_OBJECT;
		{	/* Read/src.scm 67 */
			{

				{	/* Read/src.scm 68 */
					obj_t BgL_list1524z00_109;

					{	/* Read/src.scm 68 */
						obj_t BgL_arg1525z00_110;

						BgL_arg1525z00_110 = MAKE_PAIR(BTRUE, BNIL);
						BgL_list1524z00_109 =
							MAKE_PAIR(BGl_za2portza2z00zzread_srcz00, BgL_arg1525z00_110);
					}
					return
						BGl_compilerzd2readzd2srcz00zzread_readerz00(BgL_list1524z00_109);
				}
			}
		}
	}



/* read-src/port */
	obj_t BGl_readzd2srczf2portz20zzread_srcz00()
	{
		AN_OBJECT;
		{	/* Read/src.scm 78 */
			{	/* Read/src.scm 79 */
				obj_t BgL_portz00_112;

				BgL_portz00_112 = BGl_za2portza2z00zzread_srcz00;
				{	/* Read/src.scm 83 */
					obj_t BgL_zc3anonymousza31527ze3z83_161;

					BgL_zc3anonymousza31527ze3z83_161 =
						make_fx_procedure(BGl_zc3anonymousza31527ze3z83zzread_srcz00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza31527ze3z83_161,
						(int) (((long) 0)), BgL_portz00_112);
					return
						BGl_withzd2exceptionzd2handlerz00zz__errorz00
						(BGl_readzd2handlerzd2envz00zzread_srcz00,
						BgL_zc3anonymousza31527ze3z83_161);
				}
			}
		}
	}



/* <anonymous:1527> */
	obj_t BGl_zc3anonymousza31527ze3z83zzread_srcz00(obj_t BgL_envz00_162)
	{
		AN_OBJECT;
		{	/* Read/src.scm 82 */
			{	/* Read/src.scm 83 */
				obj_t BgL_portz00_163;

				BgL_portz00_163 = PROCEDURE_REF(BgL_envz00_162, (int) (((long) 0)));
				{

					{	/* Read/src.scm 83 */
						obj_t BgL_g1510z00_115;

						{	/* Read/src.scm 83 */
							obj_t BgL_list1534z00_127;

							{	/* Read/src.scm 83 */
								obj_t BgL_arg1535z00_128;

								BgL_arg1535z00_128 = MAKE_PAIR(BTRUE, BNIL);
								BgL_list1534z00_127 =
									MAKE_PAIR(BgL_portz00_163, BgL_arg1535z00_128);
							}
							BgL_g1510z00_115 =
								BGl_compilerzd2readzd2srcz00zzread_readerz00
								(BgL_list1534z00_127);
						}
						{
							obj_t BgL_rz00_118;

							obj_t BgL_accz00_119;

							BgL_rz00_118 = BgL_g1510z00_115;
							BgL_accz00_119 = BNIL;
						BgL_zc3anonymousza31528ze3z83_120:
							if (EOF_OBJECTP(BgL_rz00_118))
								{	/* Read/src.scm 85 */
									BGl_closezd2srczd2portz00zzread_srcz00();
									return BgL_accz00_119;
								}
							else
								{	/* Read/src.scm 89 */
									obj_t BgL_arg1530z00_122;

									obj_t BgL_arg1531z00_123;

									{	/* Read/src.scm 89 */
										obj_t BgL_list1532z00_124;

										{	/* Read/src.scm 89 */
											obj_t BgL_arg1533z00_125;

											BgL_arg1533z00_125 = MAKE_PAIR(BTRUE, BNIL);
											BgL_list1532z00_124 =
												MAKE_PAIR(BgL_portz00_163, BgL_arg1533z00_125);
										}
										BgL_arg1530z00_122 =
											BGl_compilerzd2readzd2srcz00zzread_readerz00
											(BgL_list1532z00_124);
									}
									BgL_arg1531z00_123 = MAKE_PAIR(BgL_rz00_118, BgL_accz00_119);
									{
										obj_t BgL_accz00_254;

										obj_t BgL_rz00_253;

										BgL_rz00_253 = BgL_arg1530z00_122;
										BgL_accz00_254 = BgL_arg1531z00_123;
										BgL_accz00_119 = BgL_accz00_254;
										BgL_rz00_118 = BgL_rz00_253;
										goto BgL_zc3anonymousza31528ze3z83_120;
									}
								}
						}
					}
				}
			}
		}
	}



/* open-src-file */
	obj_t BGl_openzd2srczd2filez00zzread_srcz00(obj_t BgL_sfilez00_3)
	{
		AN_OBJECT;
		{	/* Read/src.scm 107 */
			BGl_readerzd2resetz12zc0zz__readerz00();
			if (STRINGP(BgL_sfilez00_3))
				{	/* Read/src.scm 111 */
					obj_t BgL_foundz00_131;

					BgL_foundz00_131 =
						BGl_findzd2filezf2pathz20zz__osz00(BgL_sfilez00_3,
						BGl_za2loadzd2pathza2zd2zz__evalz00);
					if (CBOOL(BgL_foundz00_131))
						{	/* Read/src.scm 113 */
							obj_t BgL_portz00_132;

							{	/* Read/src.scm 113 */

								BgL_portz00_132 =
									BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
									(BgL_foundz00_131, BTRUE);
							}
							if (INPUT_PORTP(BgL_portz00_132))
								{	/* Read/src.scm 114 */
									BGl_readerzd2resetz12zc0zz__readerz00();
									return (BGl_za2portza2z00zzread_srcz00 =
										BgL_portz00_132, BUNSPEC);
								}
							else
								{	/* Read/src.scm 114 */
									return (BGl_za2portza2z00zzread_srcz00 =
										BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
											BGl_string1545z00zzread_srcz00, BgL_foundz00_131),
										BUNSPEC);
						}}
					else
						{	/* Read/src.scm 112 */
							return (BGl_za2portza2z00zzread_srcz00 =
								BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
									BGl_string1546z00zzread_srcz00, BgL_sfilez00_3), BUNSPEC);
				}}
			else
				{	/* Read/src.scm 124 */
					obj_t BgL_res1542z00_151;

					{	/* Read/src.scm 124 */
						obj_t BgL_auxz00_269;

						BgL_auxz00_269 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1542z00_151 = BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_269);
					}
					return (BGl_za2portza2z00zzread_srcz00 = BgL_res1542z00_151, BUNSPEC);
				}
		}
	}



/* close-src-port */
	obj_t BGl_closezd2srczd2portz00zzread_srcz00()
	{
		AN_OBJECT;
		{	/* Read/src.scm 129 */
			{	/* Read/src.scm 130 */
				bool_t BgL_testz00_272;

				if (INPUT_PORTP(BGl_za2portza2z00zzread_srcz00))
					{	/* Read/src.scm 130 */
						bool_t BgL_testz00_275;

						{	/* Read/src.scm 130 */
							obj_t BgL_arg1541z00_139;

							{	/* Read/src.scm 130 */
								obj_t BgL_res1543z00_154;

								{	/* Read/src.scm 130 */
									obj_t BgL_auxz00_276;

									BgL_auxz00_276 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res1543z00_154 =
										BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_276);
								}
								BgL_arg1541z00_139 = BgL_res1543z00_154;
							}
							BgL_testz00_275 =
								(BGl_za2portza2z00zzread_srcz00 == BgL_arg1541z00_139);
						}
						if (BgL_testz00_275)
							{	/* Read/src.scm 130 */
								BgL_testz00_272 = ((bool_t) 0);
							}
						else
							{	/* Read/src.scm 130 */
								BgL_testz00_272 = ((bool_t) 1);
							}
					}
				else
					{	/* Read/src.scm 130 */
						BgL_testz00_272 = ((bool_t) 0);
					}
				if (BgL_testz00_272)
					{	/* Read/src.scm 130 */
						return bgl_close_input_port(BGl_za2portza2z00zzread_srcz00);
					}
				else
					{	/* Read/src.scm 130 */
						return BFALSE;
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzread_srcz00()
	{
		AN_OBJECT;
		{	/* Read/src.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzread_srcz00()
	{
		AN_OBJECT;
		{	/* Read/src.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzread_srcz00()
	{
		AN_OBJECT;
		{	/* Read/src.scm 15 */
			BGl_modulezd2initializa7ationz75zzread_readerz00(((long) 182269387),
				BSTRING_TO_STRING(BGl_string1547z00zzread_srcz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1547z00zzread_srcz00));
			BGl_modulezd2initializa7ationz75zzengine_enginez00(((long) 528201616),
				BSTRING_TO_STRING(BGl_string1547z00zzread_srcz00));
			return
				BGl_modulezd2initializa7ationz75zzinit_mainz00(((long) 230845835),
				BSTRING_TO_STRING(BGl_string1547z00zzread_srcz00));
		}
	}

#ifdef __cplusplus
}
#endif
