/*===========================================================================*/
/*   (Engine/interp.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Engine/interp.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static bool_t BGl_loadzd2stdinzd2zzengine_interpz00();
	BGL_IMPORT bool_t bigloo_strcmp(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzengine_interpz00 = BUNSPEC;
	extern obj_t BGl_za2accesszd2filezd2defaultza2z00zzengine_paramz00;
	static obj_t BGl_genericzd2initzd2zzengine_interpz00();
	BGL_IMPORT obj_t BGl_modulezd2loadzd2accesszd2filezd2zz__modulez00(obj_t);
	BGL_IMPORT bool_t fexists(char *);
	BGL_IMPORT obj_t BGl_evalz00zz__evalz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_replz00zz__evalz00();
	BGL_IMPORT obj_t BGl_getenvz00zz__osz00(char *);
	BGL_EXPORTED_DECL obj_t BGl_interpz00zzengine_interpz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzengine_interpz00();
	BGL_IMPORT obj_t BGl_defaultzd2environmentzd2zz__evalz00();
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	BGL_IMPORT obj_t command_line;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzengine_interpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__modulez00(long, char *);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_interpzd2parsezd2argsz00zzengine_interpz00(obj_t);
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	BGL_IMPORT obj_t BGl_za2bigloozd2interpreterza2zd2zz__readerz00;
	static obj_t BGl_loadiz00zzengine_interpz00(obj_t);
	BGL_IMPORT obj_t BGl_loadqz00zz__evalz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_dirnamez00zz__osz00(obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	static obj_t BGl__interpz00zzengine_interpz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzengine_interpz00();
	BGL_IMPORT obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzengine_interpz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string1563z00zzengine_interpz00,
		BgL_bgl_string1563za700za7za7e1572za7, "Welcome to the interpreter", 26);
	      DEFINE_STRING(BGl_string1564z00zzengine_interpz00,
		BgL_bgl_string1564za700za7za7e1573za7, "Interpreting files: ", 20);
	      DEFINE_STRING(BGl_string1565z00zzengine_interpz00,
		BgL_bgl_string1565za700za7za7e1574za7, "HOME", 4);
	      DEFINE_STRING(BGl_string1566z00zzengine_interpz00,
		BgL_bgl_string1566za700za7za7e1575za7, "Can't file startup file -- ", 27);
	      DEFINE_STRING(BGl_string1567z00zzengine_interpz00,
		BgL_bgl_string1567za700za7za7e1576za7, "interp", 6);
	      DEFINE_STRING(BGl_string1568z00zzengine_interpz00,
		BgL_bgl_string1568za700za7za7e1577za7, "]", 1);
	      DEFINE_STRING(BGl_string1570z00zzengine_interpz00,
		BgL_bgl_string1570za700za7za7e1578za7, "-i", 2);
	      DEFINE_STRING(BGl_string1569z00zzengine_interpz00,
		BgL_bgl_string1569za700za7za7e1579za7, "      [reading afile ", 21);
	      DEFINE_STRING(BGl_string1571z00zzengine_interpz00,
		BgL_bgl_string1571za700za7za7e1580za7, "engine_interp", 13);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_interpzd2envzd2zzengine_interpz00,
		BgL_bgl__interpza700za7za7engi1581za7, BGl__interpz00zzengine_interpz00, 0L,
		BUNSPEC, 6);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzengine_interpz00(long
		BgL_checksumz00_202, char *BgL_fromz00_203)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzengine_interpz00))
				{
					BGl_requirezd2initializa7ationz75zzengine_interpz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzengine_interpz00();
					BGl_importedzd2moduleszd2initz00zzengine_interpz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzengine_interpz00()
	{
		AN_OBJECT;
		{	/* Engine/interp.scm 15 */
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "engine_interp");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"engine_interp");
			BGl_modulezd2initializa7ationz75zz__modulez00(((long) 0),
				"engine_interp");
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "engine_interp");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"engine_interp");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "engine_interp");
			return BUNSPEC;
		}
	}



/* interp */
	BGL_EXPORTED_DEF obj_t BGl_interpz00zzengine_interpz00(obj_t BgL_versionz00_1,
		obj_t BgL_verbz00_2, obj_t BgL_filesz00_3, obj_t BgL_startupz00_4,
		obj_t BgL_pathz00_5, obj_t BgL_argsz00_6)
	{
		AN_OBJECT;
		{	/* Engine/interp.scm 23 */
			BGl_za2bigloozd2interpreterza2zd2zz__readerz00 = BTRUE;
			{	/* Engine/interp.scm 25 */
				bool_t BgL_testz00_215;

				if (((long) CINT(BgL_verbz00_2) >= ((long) 0)))
					{	/* Engine/interp.scm 25 */
						if (PAIRP(BgL_filesz00_3))
							{	/* Engine/interp.scm 25 */
								BgL_testz00_215 = ((bool_t) 0);
							}
						else
							{	/* Engine/interp.scm 25 */
								BgL_testz00_215 = ((bool_t) 1);
							}
					}
				else
					{	/* Engine/interp.scm 25 */
						BgL_testz00_215 = ((bool_t) 0);
					}
				if (BgL_testz00_215)
					{	/* Engine/interp.scm 25 */
						PROCEDURE_ENTRY(BgL_versionz00_1) (BgL_versionz00_1, BEOA);
						{	/* Engine/interp.scm 28 */
							obj_t BgL_list1514z00_95;

							BgL_list1514z00_95 =
								MAKE_PAIR(BGl_string1563z00zzengine_interpz00, BNIL);
							BGl_verbosez00zztools_speekz00(BINT(((long) 1)),
								BgL_list1514z00_95);
					}}
				else
					{	/* Engine/interp.scm 29 */
						obj_t BgL_list1515z00_96;

						{	/* Engine/interp.scm 29 */
							obj_t BgL_arg1517z00_98;

							{	/* Engine/interp.scm 29 */
								obj_t BgL_arg1518z00_99;

								BgL_arg1518z00_99 =
									MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
								BgL_arg1517z00_98 =
									MAKE_PAIR(BgL_filesz00_3, BgL_arg1518z00_99);
							}
							BgL_list1515z00_96 =
								MAKE_PAIR(BGl_string1564z00zzengine_interpz00,
								BgL_arg1517z00_98);
						}
						BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
							BgL_list1515z00_96);
			}}
			command_line =
				BGl_interpzd2parsezd2argsz00zzengine_interpz00(BgL_argsz00_6);
			if (STRINGP(BgL_startupz00_4))
				{	/* Engine/interp.scm 34 */
					obj_t BgL_pathz00_103;

					{	/* Engine/interp.scm 34 */
						obj_t BgL_homez00_113;

						BgL_homez00_113 =
							BGl_getenvz00zz__osz00(BSTRING_TO_STRING
							(BGl_string1565z00zzengine_interpz00));
						if (STRINGP(BgL_homez00_113))
							{	/* Engine/interp.scm 35 */
								BgL_pathz00_103 = MAKE_PAIR(BgL_homez00_113, BgL_pathz00_5);
							}
						else
							{	/* Engine/interp.scm 35 */
								BgL_pathz00_103 = BgL_pathz00_5;
							}
					}
					{	/* Engine/interp.scm 38 */
						obj_t BgL_fstartupz00_104;

						BgL_fstartupz00_104 =
							BGl_findzd2filezf2pathz20zz__osz00(BgL_startupz00_4,
							BgL_pathz00_103);
						if (CBOOL(BgL_fstartupz00_104))
							{	/* Engine/interp.scm 40 */
								obj_t BgL_zc3stringze3z20_105;

								BgL_zc3stringze3z20_105 = BgL_startupz00_4;
								{	/* Engine/interp.scm 40 */
									obj_t BgL_envz00_106;

									BgL_envz00_106 = BGl_defaultzd2environmentzd2zz__evalz00();
									{	/* Engine/interp.scm 40 */

										BGl_loadqz00zz__evalz00(BgL_zc3stringze3z20_105,
											BgL_envz00_106);
									}
								}
							}
						else
							{	/* Engine/interp.scm 41 */
								obj_t BgL_list1522z00_107;

								{	/* Engine/interp.scm 41 */
									obj_t BgL_arg1524z00_109;

									{	/* Engine/interp.scm 41 */
										obj_t BgL_arg1525z00_110;

										{	/* Engine/interp.scm 41 */
											obj_t BgL_arg1527z00_112;

											BgL_arg1527z00_112 = MAKE_PAIR(BgL_startupz00_4, BNIL);
											BgL_arg1525z00_110 =
												MAKE_PAIR(BGl_string1566z00zzengine_interpz00,
												BgL_arg1527z00_112);
										}
										BgL_arg1524z00_109 =
											MAKE_PAIR(BCHAR(((unsigned char) '\n')),
											BgL_arg1525z00_110);
									}
									BgL_list1522z00_107 =
										MAKE_PAIR(BGl_string1567z00zzengine_interpz00,
										BgL_arg1524z00_109);
								}
								BGl_warningz00zz__errorz00(BgL_list1522z00_107);
				}}}
			else
				{	/* Engine/interp.scm 33 */
					BFALSE;
				}
			if (PAIRP(BgL_filesz00_3))
				{
					obj_t BgL_l1511z00_117;

					{	/* Engine/interp.scm 46 */
						bool_t BgL_auxz00_253;

						BgL_l1511z00_117 = BgL_filesz00_3;
					BgL_zc3anonymousza31530ze3z83_118:
						if (PAIRP(BgL_l1511z00_117))
							{	/* Engine/interp.scm 46 */
								{	/* Engine/interp.scm 46 */
									obj_t BgL_fz00_120;

									BgL_fz00_120 = CAR(BgL_l1511z00_117);
									if (STRINGP(BgL_fz00_120))
										{	/* Engine/interp.scm 46 */
											BGl_loadiz00zzengine_interpz00(BgL_fz00_120);
										}
									else
										{	/* Engine/interp.scm 46 */
											BBOOL(BGl_loadzd2stdinzd2zzengine_interpz00());
										}
								}
								{
									obj_t BgL_l1511z00_262;

									BgL_l1511z00_262 = CDR(BgL_l1511z00_117);
									BgL_l1511z00_117 = BgL_l1511z00_262;
									goto BgL_zc3anonymousza31530ze3z83_118;
								}
							}
						else
							{	/* Engine/interp.scm 46 */
								BgL_auxz00_253 = ((bool_t) 1);
							}
						BBOOL(BgL_auxz00_253);
					}
				}
			else
				{	/* Engine/interp.scm 45 */
					BGl_replz00zz__evalz00();
				}
			return BINT(((long) 0));
		}
	}



/* _interp */
	obj_t BGl__interpz00zzengine_interpz00(obj_t BgL_envz00_195,
		obj_t BgL_versionz00_196, obj_t BgL_verbz00_197, obj_t BgL_filesz00_198,
		obj_t BgL_startupz00_199, obj_t BgL_pathz00_200, obj_t BgL_argsz00_201)
	{
		AN_OBJECT;
		{	/* Engine/interp.scm 23 */
			return
				BGl_interpz00zzengine_interpz00(BgL_versionz00_196, BgL_verbz00_197,
				BgL_filesz00_198, BgL_startupz00_199, BgL_pathz00_200, BgL_argsz00_201);
		}
	}



/* loadi */
	obj_t BGl_loadiz00zzengine_interpz00(obj_t BgL_fz00_7)
	{
		AN_OBJECT;
		{	/* Engine/interp.scm 53 */
			{	/* Engine/interp.scm 54 */
				obj_t BgL_afilez00_124;

				{	/* Engine/interp.scm 54 */
					obj_t BgL_arg1541z00_134;

					BgL_arg1541z00_134 = BGl_dirnamez00zz__osz00(BgL_fz00_7);
					BgL_afilez00_124 =
						BGl_makezd2filezd2namez00zz__osz00(BgL_arg1541z00_134,
						BGl_za2accesszd2filezd2defaultza2z00zzengine_paramz00);
				}
				if (fexists(BSTRING_TO_STRING(BgL_afilez00_124)))
					{	/* Engine/interp.scm 55 */
						{	/* Engine/interp.scm 56 */
							obj_t BgL_list1535z00_126;

							{	/* Engine/interp.scm 56 */
								obj_t BgL_arg1537z00_128;

								{	/* Engine/interp.scm 56 */
									obj_t BgL_arg1538z00_129;

									{	/* Engine/interp.scm 56 */
										obj_t BgL_arg1540z00_131;

										BgL_arg1540z00_131 =
											MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
										BgL_arg1538z00_129 =
											MAKE_PAIR(BGl_string1568z00zzengine_interpz00,
											BgL_arg1540z00_131);
									}
									BgL_arg1537z00_128 =
										MAKE_PAIR(BgL_afilez00_124, BgL_arg1538z00_129);
								}
								BgL_list1535z00_126 =
									MAKE_PAIR(BGl_string1569z00zzengine_interpz00,
									BgL_arg1537z00_128);
							}
							BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
								BgL_list1535z00_126);
						}
						BGl_modulezd2loadzd2accesszd2filezd2zz__modulez00(BgL_afilez00_124);
					}
				else
					{	/* Engine/interp.scm 55 */
						BFALSE;
					}
				{	/* Engine/interp.scm 58 */
					obj_t BgL_envz00_133;

					BgL_envz00_133 = BGl_defaultzd2environmentzd2zz__evalz00();
					{	/* Engine/interp.scm 58 */

						return BGl_loadqz00zz__evalz00(BgL_fz00_7, BgL_envz00_133);
					}
				}
			}
		}
	}



/* load-stdin */
	bool_t BGl_loadzd2stdinzd2zzengine_interpz00()
	{
		AN_OBJECT;
		{	/* Engine/interp.scm 63 */
			{	/* Engine/interp.scm 64 */
				obj_t BgL_g1508z00_135;

				{	/* Engine/interp.scm 64 */
					obj_t BgL_arg1546z00_147;

					{	/* Engine/interp.scm 64 */
						obj_t BgL_res1561z00_181;

						{	/* Engine/interp.scm 64 */
							obj_t BgL_auxz00_283;

							BgL_auxz00_283 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res1561z00_181 = BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_283);
						}
						BgL_arg1546z00_147 = BgL_res1561z00_181;
					}
					{	/* Engine/interp.scm 64 */

						{	/* Engine/interp.scm 64 */

							BgL_g1508z00_135 =
								BGl_readz00zz__readerz00(BgL_arg1546z00_147, BFALSE);
						}
					}
				}
				{
					obj_t BgL_ez00_137;

					BgL_ez00_137 = BgL_g1508z00_135;
				BgL_zc3anonymousza31542ze3z83_138:
					if (EOF_OBJECTP(BgL_ez00_137))
						{	/* Engine/interp.scm 65 */
							return ((bool_t) 0);
						}
					else
						{	/* Engine/interp.scm 65 */
							{	/* Engine/interp.scm 67 */
								obj_t BgL_envz00_141;

								BgL_envz00_141 = BGl_defaultzd2environmentzd2zz__evalz00();
								{	/* Engine/interp.scm 67 */

									BGl_evalz00zz__evalz00(BgL_ez00_137, BgL_envz00_141);
								}
							}
							{	/* Engine/interp.scm 68 */
								obj_t BgL_arg1544z00_142;

								{	/* Engine/interp.scm 68 */
									obj_t BgL_arg1545z00_143;

									{	/* Engine/interp.scm 68 */
										obj_t BgL_res1562z00_184;

										{	/* Engine/interp.scm 68 */
											obj_t BgL_auxz00_291;

											BgL_auxz00_291 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_res1562z00_184 =
												BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_291);
										}
										BgL_arg1545z00_143 = BgL_res1562z00_184;
									}
									{	/* Engine/interp.scm 68 */

										{	/* Engine/interp.scm 68 */

											BgL_arg1544z00_142 =
												BGl_readz00zz__readerz00(BgL_arg1545z00_143, BFALSE);
										}
									}
								}
								{
									obj_t BgL_ez00_295;

									BgL_ez00_295 = BgL_arg1544z00_142;
									BgL_ez00_137 = BgL_ez00_295;
									goto BgL_zc3anonymousza31542ze3z83_138;
								}
							}
						}
				}
			}
		}
	}



/* interp-parse-args */
	obj_t BGl_interpzd2parsezd2argsz00zzengine_interpz00(obj_t BgL_argsz00_8)
	{
		AN_OBJECT;
		{	/* Engine/interp.scm 73 */
			{	/* Engine/interp.scm 74 */
				obj_t BgL_g1509z00_150;

				BgL_g1509z00_150 = CDR(BgL_argsz00_8);
				{
					obj_t BgL_argsz00_153;

					obj_t BgL_resz00_154;

					BgL_argsz00_153 = BgL_g1509z00_150;
					BgL_resz00_154 = BNIL;
				BgL_zc3anonymousza31547ze3z83_155:
					if (NULLP(BgL_argsz00_153))
						{	/* Engine/interp.scm 78 */
							obj_t BgL_arg1549z00_157;

							BgL_arg1549z00_157 = bgl_reverse(BgL_resz00_154);
							return
								bgl_append2(BGl_za2srczd2filesza2zd2zzengine_paramz00,
								BgL_arg1549z00_157);
						}
					else
						{	/* Engine/interp.scm 77 */
							if (bigloo_strcmp(CAR(BgL_argsz00_153),
									BGl_string1570z00zzengine_interpz00))
								{
									obj_t BgL_argsz00_304;

									BgL_argsz00_304 = CDR(BgL_argsz00_153);
									BgL_argsz00_153 = BgL_argsz00_304;
									goto BgL_zc3anonymousza31547ze3z83_155;
								}
							else
								{	/* Engine/interp.scm 81 */
									bool_t BgL_testz00_306;

									{	/* Engine/interp.scm 81 */
										obj_t BgL_arg1557z00_165;

										BgL_arg1557z00_165 = CAR(BgL_argsz00_153);
										BgL_testz00_306 =
											CBOOL(BGl_memberz00zz__r4_pairs_and_lists_6_3z00
											(BgL_arg1557z00_165,
												BGl_za2srczd2filesza2zd2zzengine_paramz00));
									}
									if (BgL_testz00_306)
										{
											obj_t BgL_argsz00_310;

											BgL_argsz00_310 = CDR(BgL_argsz00_153);
											BgL_argsz00_153 = BgL_argsz00_310;
											goto BgL_zc3anonymousza31547ze3z83_155;
										}
									else
										{	/* Engine/interp.scm 84 */
											obj_t BgL_arg1554z00_162;

											obj_t BgL_arg1555z00_163;

											BgL_arg1554z00_162 = CDR(BgL_argsz00_153);
											BgL_arg1555z00_163 =
												MAKE_PAIR(CAR(BgL_argsz00_153), BgL_resz00_154);
											{
												obj_t BgL_resz00_316;

												obj_t BgL_argsz00_315;

												BgL_argsz00_315 = BgL_arg1554z00_162;
												BgL_resz00_316 = BgL_arg1555z00_163;
												BgL_resz00_154 = BgL_resz00_316;
												BgL_argsz00_153 = BgL_argsz00_315;
												goto BgL_zc3anonymousza31547ze3z83_155;
											}
										}
								}
						}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzengine_interpz00()
	{
		AN_OBJECT;
		{	/* Engine/interp.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzengine_interpz00()
	{
		AN_OBJECT;
		{	/* Engine/interp.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzengine_interpz00()
	{
		AN_OBJECT;
		{	/* Engine/interp.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1571z00zzengine_interpz00));
			return
				BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string1571z00zzengine_interpz00));
		}
	}

#ifdef __cplusplus
}
#endif
