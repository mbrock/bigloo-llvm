/*===========================================================================*/
/*   (User/user.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent User/user.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzuser_userz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_userzd2walkzd2zzuser_userz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzuser_userz00();
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzuser_userz00();
	extern obj_t BGl_getzd2toplevelzd2unitz00zzmodule_includez00();
	BGL_IMPORT obj_t BGl_za2userzd2passza2zd2zz__evalz00;
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzuser_userz00();
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzuser_userz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_includez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzuser_userz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	static obj_t BGl__userzd2walkzd2zzuser_userz00(obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_za2userzd2passzd2nameza2z00zz__evalz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzuser_userz00();
	static obj_t BGl_methodzd2initzd2zzuser_userz00();
	static obj_t __cnst[4];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_userzd2walkzd2envz00zzuser_userz00,
		BgL_bgl__userza7d2walkza7d2za71575za7, BGl__userzd2walkzd2zzuser_userz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1563z00zzuser_userz00,
		BgL_bgl_string1563za700za7za7u1576za7, "   . ", 5);
	      DEFINE_STRING(BGl_string1564z00zzuser_userz00,
		BgL_bgl_string1564za700za7za7u1577za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string1565z00zzuser_userz00,
		BgL_bgl_string1565za700za7za7u1578za7, " error", 6);
	      DEFINE_STRING(BGl_string1566z00zzuser_userz00,
		BgL_bgl_string1566za700za7za7u1579za7, "s", 1);
	      DEFINE_STRING(BGl_string1567z00zzuser_userz00,
		BgL_bgl_string1567za700za7za7u1580za7, "", 0);
	      DEFINE_STRING(BGl_string1568z00zzuser_userz00,
		BgL_bgl_string1568za700za7za7u1581za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string1570z00zzuser_userz00,
		BgL_bgl_string1570za700za7za7u1582za7, "user_user", 9);
	      DEFINE_STRING(BGl_string1569z00zzuser_userz00,
		BgL_bgl_string1569za700za7za7u1583za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string1571z00zzuser_userz00,
		BgL_bgl_string1571za700za7za7u1584za7, "done dummy nothing pass-started ",
		32);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzuser_userz00(long
		BgL_checksumz00_219, char *BgL_fromz00_220)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzuser_userz00))
				{
					BGl_requirezd2initializa7ationz75zzuser_userz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzuser_userz00();
					BGl_cnstzd2initzd2zzuser_userz00();
					BGl_importedzd2moduleszd2initz00zzuser_userz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzuser_userz00()
	{
		AN_OBJECT;
		{	/* User/user.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "user_user");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"user_user");
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "user_user");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"user_user");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "user_user");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"user_user");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzuser_userz00()
	{
		AN_OBJECT;
		{	/* User/user.scm 15 */
			{	/* User/user.scm 15 */
				obj_t BgL_cportz00_211;

				BgL_cportz00_211 =
					bgl_open_input_string(BGl_string1571z00zzuser_userz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_212;

					BgL_iz00_212 = ((long) 3);
				BgL_loopz00_213:
					if ((BgL_iz00_212 == ((long) -1)))
						{	/* User/user.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* User/user.scm 15 */
							{	/* User/user.scm 15 */
								obj_t BgL_arg1574z00_215;

								{	/* User/user.scm 15 */

									{	/* User/user.scm 15 */
										obj_t BgL_locationz00_217;

										BgL_locationz00_217 = BBOOL(((bool_t) 0));
										{	/* User/user.scm 15 */

											BgL_arg1574z00_215 =
												BGl_readz00zz__readerz00(BgL_cportz00_211,
												BgL_locationz00_217);
										}
									}
								}
								{	/* User/user.scm 15 */
									int BgL_auxz00_239;

									BgL_auxz00_239 = (int) (BgL_iz00_212);
									CNST_TABLE_SET(BgL_auxz00_239, BgL_arg1574z00_215);
							}}
							{	/* User/user.scm 15 */
								int BgL_auxz00_218;

								BgL_auxz00_218 = (int) ((BgL_iz00_212 - ((long) 1)));
								{
									long BgL_iz00_244;

									BgL_iz00_244 = (long) (BgL_auxz00_218);
									BgL_iz00_212 = BgL_iz00_244;
									goto BgL_loopz00_213;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzuser_userz00()
	{
		AN_OBJECT;
		{	/* User/user.scm 15 */
			return BUNSPEC;
		}
	}



/* user-walk */
	BGL_EXPORTED_DEF obj_t BGl_userzd2walkzd2zzuser_userz00(obj_t BgL_unitsz00_23)
	{
		AN_OBJECT;
		{	/* User/user.scm 27 */
			if (PROCEDUREP(BGl_za2userzd2passza2zd2zz__evalz00))
				{	/* User/user.scm 29 */
					obj_t BgL_unitz00_120;

					BgL_unitz00_120 = BGl_getzd2toplevelzd2unitz00zzmodule_includez00();
					{	/* User/user.scm 30 */
						obj_t BgL_list1527z00_121;

						{	/* User/user.scm 30 */
							obj_t BgL_arg1530z00_123;

							{	/* User/user.scm 30 */
								obj_t BgL_arg1531z00_124;

								BgL_arg1531z00_124 =
									MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
								BgL_arg1530z00_123 =
									MAKE_PAIR(BGl_za2userzd2passzd2nameza2z00zz__evalz00,
									BgL_arg1531z00_124);
							}
							BgL_list1527z00_121 =
								MAKE_PAIR(BGl_string1563z00zzuser_userz00, BgL_arg1530z00_123);
						}
						BGl_verbosez00zztools_speekz00(BINT(((long) 1)),
							BgL_list1527z00_121);
					}
					BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 =
						BINT(((long) 0));
					BGl_za2currentzd2passza2zd2zzengine_passz00 =
						BGl_za2userzd2passzd2nameza2z00zz__evalz00;
					{
						obj_t BgL_hooksz00_128;

						obj_t BgL_hnamesz00_129;

						BgL_hooksz00_128 = BNIL;
						BgL_hnamesz00_129 = BNIL;
					BgL_zc3anonymousza31532ze3z83_130:
						if (NULLP(BgL_hooksz00_128))
							{	/* User/user.scm 30 */
								CNST_TABLE_REF(((long) 0));
							}
						else
							{	/* User/user.scm 30 */
								bool_t BgL_testz00_259;

								{	/* User/user.scm 30 */
									obj_t BgL_fun1539z00_137;

									BgL_fun1539z00_137 = CAR(BgL_hooksz00_128);
									BgL_testz00_259 =
										CBOOL(PROCEDURE_ENTRY(BgL_fun1539z00_137)
										(BgL_fun1539z00_137, BEOA));
								}
								if (BgL_testz00_259)
									{
										obj_t BgL_hnamesz00_266;

										obj_t BgL_hooksz00_264;

										BgL_hooksz00_264 = CDR(BgL_hooksz00_128);
										BgL_hnamesz00_266 = CDR(BgL_hnamesz00_129);
										BgL_hnamesz00_129 = BgL_hnamesz00_266;
										BgL_hooksz00_128 = BgL_hooksz00_264;
										goto BgL_zc3anonymousza31532ze3z83_130;
									}
								else
									{	/* User/user.scm 30 */
										obj_t BgL_arg1538z00_136;

										BgL_arg1538z00_136 = CAR(BgL_hnamesz00_129);
										BGl_internalzd2errorzd2zztools_errorz00
											(BGl_za2userzd2passzd2nameza2z00zz__evalz00,
											BGl_string1564z00zzuser_userz00, BgL_arg1538z00_136);
									}
							}
					}
					{	/* User/user.scm 31 */
						bool_t BgL_testz00_270;

						{	/* User/user.scm 31 */
							obj_t BgL_auxz00_271;

							BgL_auxz00_271 = STRUCT_REF(BgL_unitz00_120, (int) (((long) 2)));
							BgL_testz00_270 = PROCEDUREP(BgL_auxz00_271);
						}
						if (BgL_testz00_270)
							{	/* User/user.scm 31 */
								CNST_TABLE_REF(((long) 1));
							}
						else
							{	/* User/user.scm 35 */
								obj_t BgL_arg1542z00_141;

								{	/* User/user.scm 35 */
									obj_t BgL_arg1543z00_142;

									BgL_arg1543z00_142 =
										STRUCT_REF(BgL_unitz00_120, (int) (((long) 2)));
									BgL_arg1542z00_141 =
										PROCEDURE_ENTRY(BGl_za2userzd2passza2zd2zz__evalz00)
										(BGl_za2userzd2passza2zd2zz__evalz00, BgL_arg1543z00_142,
										BEOA);
								}
								{	/* User/user.scm 35 */
									int BgL_auxz00_280;

									BgL_auxz00_280 = (int) (((long) 2));
									STRUCT_SET(BgL_unitz00_120, BgL_auxz00_280,
										BgL_arg1542z00_141);
					}}}
					{	/* User/user.scm 36 */
						obj_t BgL_valuez00_144;

						BgL_valuez00_144 = CNST_TABLE_REF(((long) 2));
						if (
							((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
								> ((long) 0)))
							{	/* User/user.scm 36 */
								{	/* User/user.scm 36 */
									obj_t BgL_port1516z00_146;

									{	/* User/user.scm 36 */
										obj_t BgL_res1561z00_195;

										{	/* User/user.scm 36 */
											obj_t BgL_auxz00_287;

											BgL_auxz00_287 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_res1561z00_195 =
												BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_287);
										}
										BgL_port1516z00_146 = BgL_res1561z00_195;
									}
									bgl_display_obj
										(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
										BgL_port1516z00_146);
									bgl_display_string(BGl_string1565z00zzuser_userz00,
										BgL_port1516z00_146);
									{	/* User/user.scm 36 */
										obj_t BgL_arg1546z00_147;

										{	/* User/user.scm 36 */
											bool_t BgL_testz00_292;

											if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
												(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
												{	/* User/user.scm 36 */
													BgL_testz00_292 =
														BGl_2ze3ze3zz__r4_numbers_6_5z00
														(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
														BINT(((long) 1)));
												}
											else
												{	/* User/user.scm 36 */
													BgL_testz00_292 = ((bool_t) 0);
												}
											if (BgL_testz00_292)
												{	/* User/user.scm 36 */
													BgL_arg1546z00_147 = BGl_string1566z00zzuser_userz00;
												}
											else
												{	/* User/user.scm 36 */
													BgL_arg1546z00_147 = BGl_string1567z00zzuser_userz00;
												}
										}
										bgl_display_obj(BgL_arg1546z00_147, BgL_port1516z00_146);
									}
									bgl_display_string(BGl_string1568z00zzuser_userz00,
										BgL_port1516z00_146);
									bgl_display_char(((unsigned char) '\n'), BgL_port1516z00_146);
								}
								{	/* User/user.scm 36 */
									obj_t BgL_list1549z00_150;

									BgL_list1549z00_150 = MAKE_PAIR(BINT(((long) -1)), BNIL);
									return BGl_exitz00zz__errorz00(BgL_list1549z00_150);
								}
							}
						else
							{
								obj_t BgL_hooksz00_154;

								obj_t BgL_hnamesz00_155;

								BgL_hooksz00_154 = BNIL;
								BgL_hnamesz00_155 = BNIL;
							BgL_zc3anonymousza31550ze3z83_156:
								if (NULLP(BgL_hooksz00_154))
									{	/* User/user.scm 36 */
										return BgL_valuez00_144;
									}
								else
									{	/* User/user.scm 36 */
										bool_t BgL_testz00_305;

										{	/* User/user.scm 36 */
											obj_t BgL_fun1557z00_163;

											BgL_fun1557z00_163 = CAR(BgL_hooksz00_154);
											BgL_testz00_305 =
												CBOOL(PROCEDURE_ENTRY(BgL_fun1557z00_163)
												(BgL_fun1557z00_163, BEOA));
										}
										if (BgL_testz00_305)
											{
												obj_t BgL_hnamesz00_312;

												obj_t BgL_hooksz00_310;

												BgL_hooksz00_310 = CDR(BgL_hooksz00_154);
												BgL_hnamesz00_312 = CDR(BgL_hnamesz00_155);
												BgL_hnamesz00_155 = BgL_hnamesz00_312;
												BgL_hooksz00_154 = BgL_hooksz00_310;
												goto BgL_zc3anonymousza31550ze3z83_156;
											}
										else
											{	/* User/user.scm 36 */
												obj_t BgL_arg1556z00_162;

												BgL_arg1556z00_162 = CAR(BgL_hnamesz00_155);
												return
													BGl_internalzd2errorzd2zztools_errorz00
													(BGl_za2currentzd2passza2zd2zzengine_passz00,
													BGl_string1569z00zzuser_userz00, BgL_arg1556z00_162);
											}
									}
							}
					}
				}
			else
				{	/* User/user.scm 28 */
					return CNST_TABLE_REF(((long) 3));
		}}
	}



/* _user-walk */
	obj_t BGl__userzd2walkzd2zzuser_userz00(obj_t BgL_envz00_208,
		obj_t BgL_unitsz00_209)
	{
		AN_OBJECT;
		{	/* User/user.scm 27 */
			return BGl_userzd2walkzd2zzuser_userz00(BgL_unitsz00_209);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzuser_userz00()
	{
		AN_OBJECT;
		{	/* User/user.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzuser_userz00()
	{
		AN_OBJECT;
		{	/* User/user.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzuser_userz00()
	{
		AN_OBJECT;
		{	/* User/user.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string1570z00zzuser_userz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string1570z00zzuser_userz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string1570z00zzuser_userz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1570z00zzuser_userz00));
			return
				BGl_modulezd2initializa7ationz75zzmodule_includez00(((long) 256968439),
				BSTRING_TO_STRING(BGl_string1570z00zzuser_userz00));
		}
	}

#ifdef __cplusplus
}
#endif
