/*===========================================================================*/
/*   (Write/expanded.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Write/expanded.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_writezd2schemezd2filezd2headerzd2zzwrite_schemez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_ppz00zz__ppz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzwrite_expandedz00 = BUNSPEC;
	extern obj_t BGl_writezd2schemezd2commentz00zzwrite_schemez00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzwrite_expandedz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzwrite_expandedz00();
	extern obj_t BGl_za2modulezd2clauseza2zd2zzmodule_modulez00;
	static obj_t BGl__writezd2expandedzd2zzwrite_expandedz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzwrite_expandedz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzwrite_expandedz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_unitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzwrite_schemez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__ppz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzwrite_expandedz00();
	BGL_IMPORT obj_t bgl_close_output_port(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_writezd2expandedzd2zzwrite_expandedz00(obj_t);
	BGL_IMPORT obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_za2destza2z00zzengine_paramz00;
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzwrite_expandedz00();
	static obj_t BGl_methodzd2initzd2zzwrite_expandedz00();
	static obj_t BGl_zc3exitza31553ze3z83zzwrite_expandedz00(obj_t, obj_t);
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_writezd2expandedzd2envz00zzwrite_expandedz00,
		BgL_bgl__writeza7d2expande1660za7,
		BGl__writezd2expandedzd2zzwrite_expandedz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1640z00zzwrite_expandedz00,
		BgL_bgl_string1640za700za7za7w1661za7, ".escm", 5);
	      DEFINE_STRING(BGl_string1641z00zzwrite_expandedz00,
		BgL_bgl_string1641za700za7za7w1662za7, "write-expanded", 14);
	      DEFINE_STRING(BGl_string1642z00zzwrite_expandedz00,
		BgL_bgl_string1642za700za7za7w1663za7, "Can't open output file", 22);
	      DEFINE_STRING(BGl_string1643z00zzwrite_expandedz00,
		BgL_bgl_string1643za700za7za7w1664za7, "The expanded module", 19);
	      DEFINE_STRING(BGl_string1644z00zzwrite_expandedz00,
		BgL_bgl_string1644za700za7za7w1665za7,
		"---------------------------------------------------------", 57);
	      DEFINE_STRING(BGl_string1645z00zzwrite_expandedz00,
		BgL_bgl_string1645za700za7za7w1666za7,
		"!!! WARNING !!!      !!! WARNING !!!      !!! WARNING !!!", 57);
	      DEFINE_STRING(BGl_string1646z00zzwrite_expandedz00,
		BgL_bgl_string1646za700za7za7w1667za7,
		"This expanded file cannot be compiled \"as is\". In order to", 58);
	      DEFINE_STRING(BGl_string1647z00zzwrite_expandedz00,
		BgL_bgl_string1647za700za7za7w1668za7, "compile it:", 11);
	      DEFINE_STRING(BGl_string1648z00zzwrite_expandedz00,
		BgL_bgl_string1648za700za7za7w1669za7,
		"   - the explicit call to the MODULE-INITIALIZATION ", 52);
	      DEFINE_STRING(BGl_string1650z00zzwrite_expandedz00,
		BgL_bgl_string1650za700za7za7w1670za7,
		"   - If the source module was INCLUDING files,", 46);
	      DEFINE_STRING(BGl_string1649z00zzwrite_expandedz00,
		BgL_bgl_string1649za700za7za7w1671za7, "     must be removed.", 21);
	      DEFINE_STRING(BGl_string1651z00zzwrite_expandedz00,
		BgL_bgl_string1651za700za7za7w1672za7,
		"     you must select manually which files still have to", 55);
	      DEFINE_STRING(BGl_string1652z00zzwrite_expandedz00,
		BgL_bgl_string1652za700za7za7w1673za7,
		"     be included in the expanded forms.", 39);
	      DEFINE_STRING(BGl_string1653z00zzwrite_expandedz00,
		BgL_bgl_string1653za700za7za7w1674za7, "The module clause", 17);
	      DEFINE_STRING(BGl_string1654z00zzwrite_expandedz00,
		BgL_bgl_string1654za700za7za7w1675za7, "unit: ", 6);
	      DEFINE_STRING(BGl_string1655z00zzwrite_expandedz00,
		BgL_bgl_string1655za700za7za7w1676za7, "write_expanded", 14);
	      DEFINE_STRING(BGl_string1656z00zzwrite_expandedz00,
		BgL_bgl_string1656za700za7za7w1677za7, "define-inline define --to-stdout ",
		33);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzwrite_expandedz00(long
		BgL_checksumz00_361, char *BgL_fromz00_362)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzwrite_expandedz00))
				{
					BGl_requirezd2initializa7ationz75zzwrite_expandedz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzwrite_expandedz00();
					BGl_cnstzd2initzd2zzwrite_expandedz00();
					BGl_importedzd2moduleszd2initz00zzwrite_expandedz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzwrite_expandedz00()
	{
		AN_OBJECT;
		{	/* Write/expanded.scm 15 */
			BGl_modulezd2initializa7ationz75zz__ppz00(((long) 0), "write_expanded");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"write_expanded");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"write_expanded");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"write_expanded");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0),
				"write_expanded");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"write_expanded");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "write_expanded");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzwrite_expandedz00()
	{
		AN_OBJECT;
		{	/* Write/expanded.scm 15 */
			{	/* Write/expanded.scm 15 */
				obj_t BgL_cportz00_353;

				BgL_cportz00_353 =
					bgl_open_input_string(BGl_string1656z00zzwrite_expandedz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_354;

					BgL_iz00_354 = ((long) 2);
				BgL_loopz00_355:
					if ((BgL_iz00_354 == ((long) -1)))
						{	/* Write/expanded.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Write/expanded.scm 15 */
							{	/* Write/expanded.scm 15 */
								obj_t BgL_arg1659z00_357;

								{	/* Write/expanded.scm 15 */

									{	/* Write/expanded.scm 15 */
										obj_t BgL_locationz00_359;

										BgL_locationz00_359 = BBOOL(((bool_t) 0));
										{	/* Write/expanded.scm 15 */

											BgL_arg1659z00_357 =
												BGl_readz00zz__readerz00(BgL_cportz00_353,
												BgL_locationz00_359);
										}
									}
								}
								{	/* Write/expanded.scm 15 */
									int BgL_auxz00_382;

									BgL_auxz00_382 = (int) (BgL_iz00_354);
									CNST_TABLE_SET(BgL_auxz00_382, BgL_arg1659z00_357);
							}}
							{	/* Write/expanded.scm 15 */
								int BgL_auxz00_360;

								BgL_auxz00_360 = (int) ((BgL_iz00_354 - ((long) 1)));
								{
									long BgL_iz00_387;

									BgL_iz00_387 = (long) (BgL_auxz00_360);
									BgL_iz00_354 = BgL_iz00_387;
									goto BgL_loopz00_355;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzwrite_expandedz00()
	{
		AN_OBJECT;
		{	/* Write/expanded.scm 15 */
			return BUNSPEC;
		}
	}



/* write-expanded */
	BGL_EXPORTED_DEF obj_t BGl_writezd2expandedzd2zzwrite_expandedz00(obj_t
		BgL_unitsz00_23)
	{
		AN_OBJECT;
		{	/* Write/expanded.scm 27 */
			{	/* Write/expanded.scm 28 */
				obj_t BgL_outputzd2namezd2_129;

				if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
					{	/* Write/expanded.scm 29 */
						BgL_outputzd2namezd2_129 = BGl_za2destza2z00zzengine_paramz00;
					}
				else
					{	/* Write/expanded.scm 29 */
						if (
							(BGl_za2destza2z00zzengine_paramz00 ==
								CNST_TABLE_REF(((long) 0))))
							{	/* Write/expanded.scm 31 */
								BgL_outputzd2namezd2_129 = BFALSE;
							}
						else
							{	/* Write/expanded.scm 33 */
								bool_t BgL_testz00_394;

								if (PAIRP(BGl_za2srczd2filesza2zd2zzengine_paramz00))
									{	/* Write/expanded.scm 34 */
										obj_t BgL_auxz00_397;

										BgL_auxz00_397 =
											CAR(BGl_za2srczd2filesza2zd2zzengine_paramz00);
										BgL_testz00_394 = STRINGP(BgL_auxz00_397);
									}
								else
									{	/* Write/expanded.scm 33 */
										BgL_testz00_394 = ((bool_t) 0);
									}
								if (BgL_testz00_394)
									{	/* Write/expanded.scm 33 */
										BgL_outputzd2namezd2_129 =
											string_append(BGl_prefixz00zz__osz00(CAR
												(BGl_za2srczd2filesza2zd2zzengine_paramz00)),
											BGl_string1640z00zzwrite_expandedz00);
									}
								else
									{	/* Write/expanded.scm 33 */
										BgL_outputzd2namezd2_129 = BFALSE;
									}
							}
					}
				{	/* Write/expanded.scm 28 */
					obj_t BgL_portz00_130;

					if (STRINGP(BgL_outputzd2namezd2_129))
						{	/* Write/expanded.scm 40 */
							obj_t BgL_g2679z00_238;

							BgL_g2679z00_238 = BgL_outputzd2namezd2_129;
							{	/* Write/expanded.scm 40 */

								BgL_portz00_130 =
									BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00
									(BgL_g2679z00_238, BTRUE);
							}
						}
					else
						{	/* Write/expanded.scm 41 */
							obj_t BgL_res1637z00_268;

							{	/* Write/expanded.scm 41 */
								obj_t BgL_auxz00_406;

								BgL_auxz00_406 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res1637z00_268 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_406);
							}
							BgL_portz00_130 = BgL_res1637z00_268;
						}
					{	/* Write/expanded.scm 39 */

						if (OUTPUT_PORTP(BgL_portz00_130))
							{	/* Write/expanded.scm 44 */
								obj_t BgL_val1528z00_132;

								BgL_val1528z00_132 =
									BGl_zc3exitza31553ze3z83zzwrite_expandedz00(BgL_unitsz00_23,
									BgL_portz00_130);
								{	/* Write/expanded.scm 115 */
									bool_t BgL_testz00_412;

									{	/* Write/expanded.scm 116 */
										bool_t BgL_testz00_413;

										{	/* Write/expanded.scm 116 */
											obj_t BgL_arg1549z00_136;

											{	/* Write/expanded.scm 116 */
												obj_t BgL_res1639z00_344;

												{	/* Write/expanded.scm 116 */
													obj_t BgL_auxz00_414;

													BgL_auxz00_414 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res1639z00_344 =
														BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_414);
												}
												BgL_arg1549z00_136 = BgL_res1639z00_344;
											}
											BgL_testz00_413 = (BgL_portz00_130 == BgL_arg1549z00_136);
										}
										if (BgL_testz00_413)
											{	/* Write/expanded.scm 116 */
												BgL_testz00_412 = ((bool_t) 0);
											}
										else
											{	/* Write/expanded.scm 116 */
												BgL_testz00_412 = ((bool_t) 1);
											}
									}
									if (BgL_testz00_412)
										{	/* Write/expanded.scm 115 */
											bgl_close_output_port(BgL_portz00_130);
										}
									else
										{	/* Write/expanded.scm 115 */
											BFALSE;
										}
								}
								if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
										(BgL_val1528z00_132)))
									{	/* Write/expanded.scm 115 */
										return
											BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
											(BgL_val1528z00_132), CDR(BgL_val1528z00_132));
									}
								else
									{	/* Write/expanded.scm 115 */
										return BgL_val1528z00_132;
									}
							}
						else
							{	/* Write/expanded.scm 42 */
								return
									BGl_errorz00zz__errorz00(BGl_string1641z00zzwrite_expandedz00,
									BGl_string1642z00zzwrite_expandedz00,
									BgL_outputzd2namezd2_129);
							}
					}
				}
			}
		}
	}



/* <exit:1553> */
	obj_t BGl_zc3exitza31553ze3z83zzwrite_expandedz00(obj_t BgL_unitsz00_351,
		obj_t BgL_portz00_350)
	{
		AN_OBJECT;
		{	/* Write/expanded.scm 115 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1529z00_141;

			if (SET_EXIT(BgL_an_exit1529z00_141))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1529z00_141 = (void *) jmpbuf;
					{	/* Write/expanded.scm 115 */

						PUSH_EXIT(BgL_an_exit1529z00_141, ((long) 0));
						{	/* Write/expanded.scm 82 */
							bool_t BgL_val1530z00_142;

							BGl_writezd2schemezd2filezd2headerzd2zzwrite_schemez00
								(BgL_portz00_350, BGl_string1643z00zzwrite_expandedz00);
							{	/* Write/expanded.scm 47 */
								obj_t BgL_list1554z00_143;

								BgL_list1554z00_143 =
									MAKE_PAIR(BGl_string1644z00zzwrite_expandedz00, BNIL);
								BGl_writezd2schemezd2commentz00zzwrite_schemez00
									(BgL_portz00_350, BgL_list1554z00_143);
							}
							{	/* Write/expanded.scm 50 */
								obj_t BgL_list1555z00_144;

								BgL_list1555z00_144 =
									MAKE_PAIR(BGl_string1645z00zzwrite_expandedz00, BNIL);
								BGl_writezd2schemezd2commentz00zzwrite_schemez00
									(BgL_portz00_350, BgL_list1555z00_144);
							}
							{	/* Write/expanded.scm 53 */
								obj_t BgL_list1556z00_145;

								BgL_list1556z00_145 =
									MAKE_PAIR(BGl_string1644z00zzwrite_expandedz00, BNIL);
								BGl_writezd2schemezd2commentz00zzwrite_schemez00
									(BgL_portz00_350, BgL_list1556z00_145);
							}
							{	/* Write/expanded.scm 56 */
								obj_t BgL_list1557z00_146;

								BgL_list1557z00_146 =
									MAKE_PAIR(BGl_string1646z00zzwrite_expandedz00, BNIL);
								BGl_writezd2schemezd2commentz00zzwrite_schemez00
									(BgL_portz00_350, BgL_list1557z00_146);
							}
							{	/* Write/expanded.scm 59 */
								obj_t BgL_list1558z00_147;

								BgL_list1558z00_147 =
									MAKE_PAIR(BGl_string1647z00zzwrite_expandedz00, BNIL);
								BGl_writezd2schemezd2commentz00zzwrite_schemez00
									(BgL_portz00_350, BgL_list1558z00_147);
							}
							{	/* Write/expanded.scm 62 */
								obj_t BgL_list1559z00_148;

								BgL_list1559z00_148 =
									MAKE_PAIR(BGl_string1648z00zzwrite_expandedz00, BNIL);
								BGl_writezd2schemezd2commentz00zzwrite_schemez00
									(BgL_portz00_350, BgL_list1559z00_148);
							}
							{	/* Write/expanded.scm 65 */
								obj_t BgL_list1560z00_149;

								BgL_list1560z00_149 =
									MAKE_PAIR(BGl_string1649z00zzwrite_expandedz00, BNIL);
								BGl_writezd2schemezd2commentz00zzwrite_schemez00
									(BgL_portz00_350, BgL_list1560z00_149);
							}
							{	/* Write/expanded.scm 68 */
								obj_t BgL_list1561z00_150;

								BgL_list1561z00_150 =
									MAKE_PAIR(BGl_string1650z00zzwrite_expandedz00, BNIL);
								BGl_writezd2schemezd2commentz00zzwrite_schemez00
									(BgL_portz00_350, BgL_list1561z00_150);
							}
							{	/* Write/expanded.scm 71 */
								obj_t BgL_list1562z00_151;

								BgL_list1562z00_151 =
									MAKE_PAIR(BGl_string1651z00zzwrite_expandedz00, BNIL);
								BGl_writezd2schemezd2commentz00zzwrite_schemez00
									(BgL_portz00_350, BgL_list1562z00_151);
							}
							{	/* Write/expanded.scm 74 */
								obj_t BgL_list1563z00_152;

								BgL_list1563z00_152 =
									MAKE_PAIR(BGl_string1652z00zzwrite_expandedz00, BNIL);
								BGl_writezd2schemezd2commentz00zzwrite_schemez00
									(BgL_portz00_350, BgL_list1563z00_152);
							}
							{	/* Write/expanded.scm 77 */
								obj_t BgL_list1564z00_153;

								BgL_list1564z00_153 =
									MAKE_PAIR(BGl_string1644z00zzwrite_expandedz00, BNIL);
								BGl_writezd2schemezd2commentz00zzwrite_schemez00
									(BgL_portz00_350, BgL_list1564z00_153);
							}
							{	/* Write/expanded.scm 80 */
								obj_t BgL_list1565z00_154;

								BgL_list1565z00_154 =
									MAKE_PAIR(BGl_string1653z00zzwrite_expandedz00, BNIL);
								BGl_writezd2schemezd2commentz00zzwrite_schemez00
									(BgL_portz00_350, BgL_list1565z00_154);
							}
							{	/* Write/expanded.scm 81 */
								obj_t BgL_list1566z00_155;

								BgL_list1566z00_155 = MAKE_PAIR(BgL_portz00_350, BNIL);
								BGl_ppz00zz__ppz00
									(BGl_za2modulezd2clauseza2zd2zzmodule_modulez00,
									BgL_list1566z00_155);
							}
							bgl_display_char(((unsigned char) '\n'), BgL_portz00_350);
							{
								obj_t BgL_l1534z00_157;

								BgL_l1534z00_157 = BgL_unitsz00_351;
							BgL_zc3anonymousza31567ze3z83_158:
								if (PAIRP(BgL_l1534z00_157))
									{	/* Write/expanded.scm 83 */
										{	/* Write/expanded.scm 85 */
											obj_t BgL_uz00_160;

											BgL_uz00_160 = CAR(BgL_l1534z00_157);
											{	/* Write/expanded.scm 85 */
												bool_t BgL_testz00_460;

												{	/* Write/expanded.scm 85 */
													obj_t BgL_sz00_274;

													BgL_sz00_274 = BgL_uz00_160;
													BgL_testz00_460 =
														CBOOL(STRUCT_REF(BgL_sz00_274, (int) (((long) 3))));
												}
												if (BgL_testz00_460)
													{	/* Write/expanded.scm 85 */
														{	/* Write/expanded.scm 87 */
															bool_t BgL_testz00_464;

															{	/* Write/expanded.scm 87 */
																obj_t BgL_auxz00_465;

																BgL_auxz00_465 =
																	STRUCT_REF(BgL_uz00_160, (int) (((long) 2)));
																BgL_testz00_464 = PAIRP(BgL_auxz00_465);
															}
															if (BgL_testz00_464)
																{	/* Write/expanded.scm 89 */
																	obj_t BgL_arg1571z00_163;

																	{	/* Write/expanded.scm 89 */
																		obj_t BgL_arg1575z00_166;

																		{	/* Write/expanded.scm 92 */
																			obj_t BgL_arg1576z00_167;

																			BgL_arg1576z00_167 =
																				STRUCT_REF(BgL_uz00_160,
																				(int) (((long) 0)));
																			{	/* Write/expanded.scm 91 */
																				obj_t BgL_res1638z00_285;

																				{	/* Write/expanded.scm 91 */
																					obj_t BgL_symbolz00_283;

																					BgL_symbolz00_283 =
																						BgL_arg1576z00_167;
																					{	/* Write/expanded.scm 91 */
																						obj_t BgL_arg2063z00_284;

																						BgL_arg2063z00_284 =
																							SYMBOL_TO_STRING
																							(BgL_symbolz00_283);
																						BgL_res1638z00_285 =
																							BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																							(BgL_arg2063z00_284);
																				}}
																				BgL_arg1575z00_166 = BgL_res1638z00_285;
																		}}
																		BgL_arg1571z00_163 =
																			string_append
																			(BGl_string1654z00zzwrite_expandedz00,
																			BgL_arg1575z00_166);
																	}
																	{	/* Write/expanded.scm 88 */
																		obj_t BgL_list1572z00_164;

																		BgL_list1572z00_164 =
																			MAKE_PAIR(BgL_arg1571z00_163, BNIL);
																		BGl_writezd2schemezd2commentz00zzwrite_schemez00
																			(BgL_portz00_350, BgL_list1572z00_164);
																}}
															else
																{	/* Write/expanded.scm 87 */
																	BFALSE;
																}
														}
														{	/* Write/expanded.scm 94 */
															obj_t BgL_g1533z00_169;

															{	/* Write/expanded.scm 109 */
																obj_t BgL_codez00_233;

																BgL_codez00_233 =
																	STRUCT_REF(BgL_uz00_160, (int) (((long) 2)));
																if (PROCEDUREP(BgL_codez00_233))
																	{	/* Write/expanded.scm 110 */
																		BgL_g1533z00_169 =
																			PROCEDURE_ENTRY(BgL_codez00_233)
																			(BgL_codez00_233, BEOA);
																	}
																else
																	{	/* Write/expanded.scm 110 */
																		BgL_g1533z00_169 = BgL_codez00_233;
																	}
															}
															{
																obj_t BgL_l1531z00_171;

																BgL_l1531z00_171 = BgL_g1533z00_169;
															BgL_zc3anonymousza31578ze3z83_172:
																if (PAIRP(BgL_l1531z00_171))
																	{	/* Write/expanded.scm 109 */
																		{	/* Write/expanded.scm 97 */
																			obj_t BgL_codez00_174;

																			BgL_codez00_174 = CAR(BgL_l1531z00_171);
																			{
																				obj_t BgL_namez00_179;

																				obj_t BgL_valuez00_180;

																				if (PAIRP(BgL_codez00_174))
																					{	/* Write/expanded.scm 97 */
																						obj_t BgL_cdrzd21401zd2_189;

																						BgL_cdrzd21401zd2_189 =
																							CDR(BgL_codez00_174);
																						if (
																							(CAR(BgL_codez00_174) ==
																								CNST_TABLE_REF(((long) 1))))
																							{	/* Write/expanded.scm 97 */
																								if (PAIRP
																									(BgL_cdrzd21401zd2_189))
																									{	/* Write/expanded.scm 97 */
																										obj_t BgL_carzd21405zd2_192;

																										obj_t BgL_cdrzd21406zd2_193;

																										BgL_carzd21405zd2_192 =
																											CAR
																											(BgL_cdrzd21401zd2_189);
																										BgL_cdrzd21406zd2_193 =
																											CDR
																											(BgL_cdrzd21401zd2_189);
																										if (PAIRP
																											(BgL_carzd21405zd2_192))
																											{	/* Write/expanded.scm 97 */
																												if (PAIRP
																													(BgL_cdrzd21406zd2_193))
																													{	/* Write/expanded.scm 97 */
																														if (NULLP(CDR
																																(BgL_cdrzd21406zd2_193)))
																															{	/* Write/expanded.scm 97 */
																																obj_t
																																	BgL_arg1586z00_197;
																																BgL_arg1586z00_197
																																	=
																																	CAR
																																	(BgL_carzd21405zd2_192);
																																{	/* Write/expanded.scm 97 */
																																	obj_t
																																		BgL_list1612z00_309;
																																	BgL_list1612z00_309
																																		=
																																		MAKE_PAIR
																																		(BgL_arg1586z00_197,
																																		BNIL);
																																	BGl_writezd2schemezd2commentz00zzwrite_schemez00
																																		(BgL_portz00_350,
																																		BgL_list1612z00_309);
																																}
																																{	/* Write/expanded.scm 97 */
																																	obj_t
																																		BgL_list1613z00_310;
																																	BgL_list1613z00_310
																																		=
																																		MAKE_PAIR
																																		(BgL_portz00_350,
																																		BNIL);
																																	BGl_ppz00zz__ppz00
																																		(BgL_codez00_174,
																																		BgL_list1613z00_310);
																																}
																															}
																														else
																															{	/* Write/expanded.scm 97 */
																															BgL_tagzd21392zd2_186:
																																{	/* Write/expanded.scm 108 */
																																	obj_t
																																		BgL_list1618z00_230;
																																	BgL_list1618z00_230
																																		=
																																		MAKE_PAIR
																																		(BgL_portz00_350,
																																		BNIL);
																																	BGl_ppz00zz__ppz00
																																		(BgL_codez00_174,
																																		BgL_list1618z00_230);
																																}
																															}
																													}
																												else
																													{	/* Write/expanded.scm 97 */
																														goto
																															BgL_tagzd21392zd2_186;
																													}
																											}
																										else
																											{	/* Write/expanded.scm 97 */
																												obj_t
																													BgL_cdrzd21450zd2_202;
																												BgL_cdrzd21450zd2_202 =
																													CDR
																													(BgL_cdrzd21401zd2_189);
																												if (PAIRP
																													(BgL_cdrzd21450zd2_202))
																													{	/* Write/expanded.scm 97 */
																														if (NULLP(CDR
																																(BgL_cdrzd21450zd2_202)))
																															{	/* Write/expanded.scm 97 */
																																BgL_namez00_179
																																	=
																																	CAR
																																	(BgL_cdrzd21401zd2_189);
																																BgL_valuez00_180
																																	=
																																	CAR
																																	(BgL_cdrzd21450zd2_202);
																																{	/* Write/expanded.scm 102 */
																																	obj_t
																																		BgL_list1614z00_226;
																																	BgL_list1614z00_226
																																		=
																																		MAKE_PAIR
																																		(BgL_namez00_179,
																																		BNIL);
																																	BGl_writezd2schemezd2commentz00zzwrite_schemez00
																																		(BgL_portz00_350,
																																		BgL_list1614z00_226);
																																}
																																{	/* Write/expanded.scm 103 */
																																	obj_t
																																		BgL_list1615z00_227;
																																	BgL_list1615z00_227
																																		=
																																		MAKE_PAIR
																																		(BgL_portz00_350,
																																		BNIL);
																																	BGl_ppz00zz__ppz00
																																		(BgL_codez00_174,
																																		BgL_list1615z00_227);
																																}
																															}
																														else
																															{	/* Write/expanded.scm 97 */
																																goto
																																	BgL_tagzd21392zd2_186;
																															}
																													}
																												else
																													{	/* Write/expanded.scm 97 */
																														goto
																															BgL_tagzd21392zd2_186;
																													}
																											}
																									}
																								else
																									{	/* Write/expanded.scm 97 */
																										goto BgL_tagzd21392zd2_186;
																									}
																							}
																						else
																							{	/* Write/expanded.scm 97 */
																								if (
																									(CAR(BgL_codez00_174) ==
																										CNST_TABLE_REF(((long) 2))))
																									{	/* Write/expanded.scm 97 */
																										if (PAIRP
																											(BgL_cdrzd21401zd2_189))
																											{	/* Write/expanded.scm 97 */
																												obj_t
																													BgL_carzd21495zd2_211;
																												obj_t
																													BgL_cdrzd21496zd2_212;
																												BgL_carzd21495zd2_211 =
																													CAR
																													(BgL_cdrzd21401zd2_189);
																												BgL_cdrzd21496zd2_212 =
																													CDR
																													(BgL_cdrzd21401zd2_189);
																												if (PAIRP
																													(BgL_carzd21495zd2_211))
																													{	/* Write/expanded.scm 97 */
																														if (PAIRP
																															(BgL_cdrzd21496zd2_212))
																															{	/* Write/expanded.scm 97 */
																																if (NULLP(CDR
																																		(BgL_cdrzd21496zd2_212)))
																																	{	/* Write/expanded.scm 97 */
																																		obj_t
																																			BgL_arg1603z00_216;
																																		BgL_arg1603z00_216
																																			=
																																			CAR
																																			(BgL_carzd21495zd2_211);
																																		{	/* Write/expanded.scm 97 */
																																			obj_t
																																				BgL_list1616z00_333;
																																			BgL_list1616z00_333
																																				=
																																				MAKE_PAIR
																																				(BgL_arg1603z00_216,
																																				BNIL);
																																			BGl_writezd2schemezd2commentz00zzwrite_schemez00
																																				(BgL_portz00_350,
																																				BgL_list1616z00_333);
																																		}
																																		{	/* Write/expanded.scm 97 */
																																			obj_t
																																				BgL_list1617z00_334;
																																			BgL_list1617z00_334
																																				=
																																				MAKE_PAIR
																																				(BgL_portz00_350,
																																				BNIL);
																																			BGl_ppz00zz__ppz00
																																				(BgL_codez00_174,
																																				BgL_list1617z00_334);
																																		}
																																	}
																																else
																																	{	/* Write/expanded.scm 97 */
																																		goto
																																			BgL_tagzd21392zd2_186;
																																	}
																															}
																														else
																															{	/* Write/expanded.scm 97 */
																																goto
																																	BgL_tagzd21392zd2_186;
																															}
																													}
																												else
																													{	/* Write/expanded.scm 97 */
																														goto
																															BgL_tagzd21392zd2_186;
																													}
																											}
																										else
																											{	/* Write/expanded.scm 97 */
																												goto
																													BgL_tagzd21392zd2_186;
																											}
																									}
																								else
																									{	/* Write/expanded.scm 97 */
																										goto BgL_tagzd21392zd2_186;
																									}
																							}
																					}
																				else
																					{	/* Write/expanded.scm 97 */
																						goto BgL_tagzd21392zd2_186;
																					}
																			}
																		}
																		{
																			obj_t BgL_l1531z00_542;

																			BgL_l1531z00_542 = CDR(BgL_l1531z00_171);
																			BgL_l1531z00_171 = BgL_l1531z00_542;
																			goto BgL_zc3anonymousza31578ze3z83_172;
																		}
																	}
																else
																	{	/* Write/expanded.scm 109 */
																		((bool_t) 1);
																	}
															}
														}
														bgl_display_char(((unsigned char) '\n'),
															BgL_portz00_350);
													}
												else
													{	/* Write/expanded.scm 85 */
														BFALSE;
													}
											}
										}
										{
											obj_t BgL_l1534z00_545;

											BgL_l1534z00_545 = CDR(BgL_l1534z00_157);
											BgL_l1534z00_157 = BgL_l1534z00_545;
											goto BgL_zc3anonymousza31567ze3z83_158;
										}
									}
								else
									{	/* Write/expanded.scm 83 */
										BgL_val1530z00_142 = ((bool_t) 1);
									}
							}
							POP_EXIT();
							return BBOOL(BgL_val1530z00_142);
						}
					}
				}
		}
	}



/* _write-expanded */
	obj_t BGl__writezd2expandedzd2zzwrite_expandedz00(obj_t BgL_envz00_348,
		obj_t BgL_unitsz00_349)
	{
		AN_OBJECT;
		{	/* Write/expanded.scm 27 */
			return BGl_writezd2expandedzd2zzwrite_expandedz00(BgL_unitsz00_349);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzwrite_expandedz00()
	{
		AN_OBJECT;
		{	/* Write/expanded.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzwrite_expandedz00()
	{
		AN_OBJECT;
		{	/* Write/expanded.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzwrite_expandedz00()
	{
		AN_OBJECT;
		{	/* Write/expanded.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1655z00zzwrite_expandedz00));
			BGl_modulezd2initializa7ationz75zzwrite_schemez00(((long) 242728873),
				BSTRING_TO_STRING(BGl_string1655z00zzwrite_expandedz00));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 320731191),
				BSTRING_TO_STRING(BGl_string1655z00zzwrite_expandedz00));
			BGl_modulezd2initializa7ationz75zzast_unitz00(((long) 386858258),
				BSTRING_TO_STRING(BGl_string1655z00zzwrite_expandedz00));
			return
				BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string1655z00zzwrite_expandedz00));
		}
	}

#ifdef __cplusplus
}
#endif
