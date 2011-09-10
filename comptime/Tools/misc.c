/*===========================================================================*/
/*   (Tools/misc.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Tools/misc.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl__replacez12z12zztools_miscz00(obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t bigloo_strcmp(obj_t, obj_t);
	static obj_t BGl__epairifyz00zztools_miscz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_uncygdrivez00zztools_miscz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztools_miscz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_epairifyza2za2zztools_miscz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zztools_miscz00();
	static obj_t BGl__epairifyzd2propagatezd2zztools_miscz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_getenvz00zz__osz00(char *);
	BGL_EXPORTED_DECL obj_t BGl_epairifyzd2propagatezd2zztools_miscz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	static obj_t BGl__epairifyzd2reczd2zztools_miscz00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_mingwzd2buildzd2pathzd2fromzd2shellzd2variablezd2zztools_miscz00(obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_epairifyzd2reczd2zztools_miscz00(obj_t, obj_t);
	BGL_IMPORT bool_t bigloo_strncmp(obj_t, obj_t, long);
	BGL_IMPORT bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringza2zd2ze3stringz93zztools_miscz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	BGL_IMPORT bool_t BGl_2ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	BGL_IMPORT obj_t rgc_buffer_substring(obj_t, long, long);
	static obj_t BGl_zc3exitza31641ze3z83zztools_miscz00(obj_t);
	BGL_IMPORT obj_t BGl_oszd2classzd2zz__osz00();
	BGL_IMPORT bool_t BGl_za7erozf3z54zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl__stringza2zd2ze3stringz93zztools_miscz00(obj_t, obj_t);
	static obj_t BGl__epairifyza2za2zztools_miscz00(obj_t, obj_t, obj_t);
	static obj_t BGl_loopz00zztools_miscz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_buildzd2pathzd2fromzd2shellzd2variablez00zztools_miscz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_replacez12z12zztools_miscz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2splitzd2charz00zztools_miscz00(obj_t,
		obj_t);
	static obj_t BGl__uncygdrivez00zztools_miscz00(obj_t, obj_t);
	static obj_t
		BGl_unixzd2buildzd2pathzd2fromzd2shellzd2variablezd2zztools_miscz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_epairifyz00zztools_miscz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	BGL_IMPORT bool_t rgc_fill_buffer(obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t BGl_normaliza7ezd2mingwzd2pathza7zztools_miscz00(obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t
		BGl__buildzd2pathzd2fromzd2shellzd2variablez00zztools_miscz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zztools_miscz00();
	static obj_t BGl_ignorez00zztools_miscz00(obj_t);
	BGL_IMPORT obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl__stringzd2splitzd2charz00zztools_miscz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zztools_miscz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_buildzd2pathzd2fromzd2shellzd2variablezd2envzd2zztools_miscz00,
		BgL_bgl__buildza7d2pathza7d21769z00,
		BGl__buildzd2pathzd2fromzd2shellzd2variablez00zztools_miscz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_epairifyzd2propagatezd2envz00zztools_miscz00,
		BgL_bgl__epairifyza7d2prop1770za7,
		BGl__epairifyzd2propagatezd2zztools_miscz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_epairifyzd2reczd2envz00zztools_miscz00,
		BgL_bgl__epairifyza7d2recza71771z00, BGl__epairifyzd2reczd2zztools_miscz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_replacez12zd2envzc0zztools_miscz00,
		BgL_bgl__replaceza712za712za7za71772z00, BGl__replacez12z12zztools_miscz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_epairifyza2zd2envz70zztools_miscz00,
		BgL_bgl__epairifyza7a2za7a2za71773za7, va_generic_entry,
		BGl__epairifyza2za2zztools_miscz00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_uncygdrivezd2envzd2zztools_miscz00,
		BgL_bgl__uncygdriveza700za7za71774za7, BGl__uncygdrivez00zztools_miscz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_epairifyzd2envzd2zztools_miscz00,
		BgL_bgl__epairifyza700za7za7to1775za7, BGl__epairifyz00zztools_miscz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2splitzd2charzd2envzd2zztools_miscz00,
		BgL_bgl__stringza7d2splitza71776z00,
		BGl__stringzd2splitzd2charz00zztools_miscz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1762z00zztools_miscz00,
		BgL_bgl_string1762za700za7za7t1777za7, " ", 1);
	      DEFINE_STRING(BGl_string1763z00zztools_miscz00,
		BgL_bgl_string1763za700za7za7t1778za7, "", 0);
	      DEFINE_STRING(BGl_string1764z00zztools_miscz00,
		BgL_bgl_string1764za700za7za7t1779za7, "mingw", 5);
	      DEFINE_STRING(BGl_string1765z00zztools_miscz00,
		BgL_bgl_string1765za700za7za7t1780za7, ":/", 2);
	      DEFINE_STRING(BGl_string1766z00zztools_miscz00,
		BgL_bgl_string1766za700za7za7t1781za7, "regular-grammar", 15);
	      DEFINE_STRING(BGl_string1767z00zztools_miscz00,
		BgL_bgl_string1767za700za7za7t1782za7, "Illegal match", 13);
	      DEFINE_STRING(BGl_string1768z00zztools_miscz00,
		BgL_bgl_string1768za700za7za7t1783za7, "/cygdrive/", 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringza2zd2ze3stringzd2envz41zztools_miscz00,
		BgL_bgl__stringza7a2za7d2za7e31784za7,
		BGl__stringza2zd2ze3stringz93zztools_miscz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long
		BgL_checksumz00_664, char *BgL_fromz00_665)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztools_miscz00))
				{
					BGl_requirezd2initializa7ationz75zztools_miscz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zztools_miscz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztools_miscz00()
	{
		AN_OBJECT;
		{	/* Tools/misc.scm 15 */
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "tools_misc");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "tools_misc");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "tools_misc");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"tools_misc");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"tools_misc");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"tools_misc");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"tools_misc");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "tools_misc");
			return BUNSPEC;
		}
	}



/* string*->string */
	BGL_EXPORTED_DEF obj_t BGl_stringza2zd2ze3stringz93zztools_miscz00(obj_t
		BgL_lz00_1)
	{
		AN_OBJECT;
		{	/* Tools/misc.scm 29 */
			{	/* Tools/misc.scm 30 */
				obj_t BgL_g1508z00_103;

				BgL_g1508z00_103 = bgl_reverse(BgL_lz00_1);
				{
					obj_t BgL_lz00_105;

					obj_t BgL_rz00_106;

					BgL_lz00_105 = BgL_g1508z00_103;
					BgL_rz00_106 = BGl_string1763z00zztools_miscz00;
				BgL_zc3anonymousza31529ze3z83_107:
					if (NULLP(BgL_lz00_105))
						{	/* Tools/misc.scm 32 */
							return BgL_rz00_106;
						}
					else
						{
							obj_t BgL_rz00_683;

							obj_t BgL_lz00_681;

							BgL_lz00_681 = CDR(BgL_lz00_105);
							BgL_rz00_683 =
								string_append_3(CAR(BgL_lz00_105),
								BGl_string1762z00zztools_miscz00, BgL_rz00_106);
							BgL_rz00_106 = BgL_rz00_683;
							BgL_lz00_105 = BgL_lz00_681;
							goto BgL_zc3anonymousza31529ze3z83_107;
						}
				}
			}
		}
	}



/* _string*->string */
	obj_t BGl__stringza2zd2ze3stringz93zztools_miscz00(obj_t BgL_envz00_630,
		obj_t BgL_lz00_631)
	{
		AN_OBJECT;
		{	/* Tools/misc.scm 29 */
			return BGl_stringza2zd2ze3stringz93zztools_miscz00(BgL_lz00_631);
		}
	}



/* replace! */
	BGL_EXPORTED_DEF obj_t BGl_replacez12z12zztools_miscz00(obj_t BgL_p1z00_2,
		obj_t BgL_p2z00_3)
	{
		AN_OBJECT;
		{	/* Tools/misc.scm 40 */
			{	/* Tools/misc.scm 41 */
				bool_t BgL_testz00_687;

				if (PAIRP(BgL_p1z00_2))
					{	/* Tools/misc.scm 41 */
						if (PAIRP(BgL_p2z00_3))
							{	/* Tools/misc.scm 41 */
								if (EXTENDED_PAIRP(BgL_p2z00_3))
									{	/* Tools/misc.scm 41 */
										BgL_testz00_687 = ((bool_t) 0);
									}
								else
									{	/* Tools/misc.scm 41 */
										BgL_testz00_687 = ((bool_t) 1);
									}
							}
						else
							{	/* Tools/misc.scm 41 */
								BgL_testz00_687 = ((bool_t) 0);
							}
					}
				else
					{	/* Tools/misc.scm 41 */
						BgL_testz00_687 = ((bool_t) 0);
					}
				if (BgL_testz00_687)
					{	/* Tools/misc.scm 41 */
						{	/* Tools/misc.scm 43 */
							obj_t BgL_auxz00_694;

							BgL_auxz00_694 = CAR(BgL_p2z00_3);
							SET_CAR(BgL_p1z00_2, BgL_auxz00_694);
						}
						{	/* Tools/misc.scm 44 */
							obj_t BgL_auxz00_697;

							BgL_auxz00_697 = CDR(BgL_p2z00_3);
							SET_CDR(BgL_p1z00_2, BgL_auxz00_697);
						}
						return BgL_p1z00_2;
					}
				else
					{	/* Tools/misc.scm 41 */
						return BgL_p2z00_3;
					}
			}
		}
	}



/* _replace! */
	obj_t BGl__replacez12z12zztools_miscz00(obj_t BgL_envz00_632,
		obj_t BgL_p1z00_633, obj_t BgL_p2z00_634)
	{
		AN_OBJECT;
		{	/* Tools/misc.scm 40 */
			return BGl_replacez12z12zztools_miscz00(BgL_p1z00_633, BgL_p2z00_634);
		}
	}



/* string-split-char */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2splitzd2charz00zztools_miscz00(obj_t
		BgL_strz00_4, obj_t BgL_separatorz00_5)
	{
		AN_OBJECT;
		{	/* Tools/misc.scm 51 */
		BGl_stringzd2splitzd2charz00zztools_miscz00:
			{	/* Tools/misc.scm 52 */
				long BgL_strzd2lengthzd2_120;

				BgL_strzd2lengthzd2_120 = STRING_LENGTH(BgL_strz00_4);
				if ((BgL_strzd2lengthzd2_120 == ((long) 0)))
					{	/* Tools/misc.scm 53 */
						return BNIL;
					}
				else
					{
						obj_t BgL_iz00_123;

						BgL_iz00_123 = BINT(((long) 0));
					BgL_zc3anonymousza31542ze3z83_124:
						if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_123,
								BINT(BgL_strzd2lengthzd2_120)))
							{	/* Tools/misc.scm 57 */
								obj_t BgL_list1544z00_126;

								BgL_list1544z00_126 = MAKE_PAIR(BgL_strz00_4, BNIL);
								return BgL_list1544z00_126;
							}
						else
							{	/* Tools/misc.scm 56 */
								if (
									(STRING_REF(BgL_strz00_4,
											(long) CINT(BgL_iz00_123)) == CCHAR(BgL_separatorz00_5)))
									{	/* Tools/misc.scm 58 */
										if (BGl_za7erozf3z54zz__r4_numbers_6_5z00(BgL_iz00_123))
											{
												obj_t BgL_strz00_715;

												BgL_strz00_715 =
													c_substring(BgL_strz00_4, ((long) 1),
													BgL_strzd2lengthzd2_120);
												BgL_strz00_4 = BgL_strz00_715;
												goto BGl_stringzd2splitzd2charz00zztools_miscz00;
											}
										else
											{	/* Tools/misc.scm 62 */
												obj_t BgL_arg1548z00_130;

												obj_t BgL_arg1549z00_131;

												BgL_arg1548z00_130 =
													c_substring(BgL_strz00_4, ((long) 0),
													(long) CINT(BgL_iz00_123));
												{	/* Tools/misc.scm 64 */
													obj_t BgL_arg1551z00_132;

													{	/* Tools/misc.scm 64 */
														obj_t BgL_arg1552z00_133;

														BgL_arg1552z00_133 =
															BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_123,
															BINT(((long) 1)));
														BgL_arg1551z00_132 =
															c_substring(BgL_strz00_4,
															(long) CINT(BgL_arg1552z00_133),
															BgL_strzd2lengthzd2_120);
													}
													BgL_arg1549z00_131 =
														BGl_stringzd2splitzd2charz00zztools_miscz00
														(BgL_arg1551z00_132, BgL_separatorz00_5);
												}
												return
													MAKE_PAIR(BgL_arg1548z00_130, BgL_arg1549z00_131);
											}
									}
								else
									{
										obj_t BgL_iz00_725;

										BgL_iz00_725 =
											BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_123,
											BINT(((long) 1)));
										BgL_iz00_123 = BgL_iz00_725;
										goto BgL_zc3anonymousza31542ze3z83_124;
									}
							}
					}
			}
		}
	}



/* _string-split-char */
	obj_t BGl__stringzd2splitzd2charz00zztools_miscz00(obj_t BgL_envz00_635,
		obj_t BgL_strz00_636, obj_t BgL_separatorz00_637)
	{
		AN_OBJECT;
		{	/* Tools/misc.scm 51 */
			return
				BGl_stringzd2splitzd2charz00zztools_miscz00(BgL_strz00_636,
				BgL_separatorz00_637);
		}
	}



/* epairify */
	BGL_EXPORTED_DEF obj_t BGl_epairifyz00zztools_miscz00(obj_t BgL_pairz00_6,
		obj_t BgL_epairz00_7)
	{
		AN_OBJECT;
		{	/* Tools/misc.scm 77 */
			if (EXTENDED_PAIRP(BgL_epairz00_7))
				{	/* Tools/misc.scm 79 */
					obj_t BgL_arg1556z00_138;

					obj_t BgL_arg1557z00_139;

					obj_t BgL_arg1559z00_140;

					BgL_arg1556z00_138 = CAR(BgL_pairz00_6);
					BgL_arg1557z00_139 = CDR(BgL_pairz00_6);
					BgL_arg1559z00_140 = CER(BgL_epairz00_7);
					{	/* Tools/misc.scm 79 */
						obj_t BgL_res1757z00_485;

						BgL_res1757z00_485 =
							MAKE_EXTENDED_PAIR(BgL_arg1556z00_138, BgL_arg1557z00_139,
							BgL_arg1559z00_140);
						return BgL_res1757z00_485;
					}
				}
			else
				{	/* Tools/misc.scm 78 */
					return BgL_pairz00_6;
				}
		}
	}



/* _epairify */
	obj_t BGl__epairifyz00zztools_miscz00(obj_t BgL_envz00_638,
		obj_t BgL_pairz00_639, obj_t BgL_epairz00_640)
	{
		AN_OBJECT;
		{	/* Tools/misc.scm 77 */
			return BGl_epairifyz00zztools_miscz00(BgL_pairz00_639, BgL_epairz00_640);
		}
	}



/* epairify-rec */
	BGL_EXPORTED_DEF obj_t BGl_epairifyzd2reczd2zztools_miscz00(obj_t BgL_pz00_8,
		obj_t BgL_epz00_9)
	{
		AN_OBJECT;
		{	/* Tools/misc.scm 87 */
			if (PAIRP(BgL_pz00_8))
				{	/* Tools/misc.scm 89 */
					if (EXTENDED_PAIRP(BgL_epz00_9))
						{	/* Tools/misc.scm 91 */
							if (EXTENDED_PAIRP(BgL_pz00_8))
								{	/* Tools/misc.scm 93 */
									return BgL_pz00_8;
								}
							else
								{	/* Tools/misc.scm 96 */
									obj_t BgL_arg1563z00_144;

									obj_t BgL_arg1564z00_145;

									obj_t BgL_arg1565z00_146;

									BgL_arg1563z00_144 =
										BGl_epairifyzd2reczd2zztools_miscz00(CAR(BgL_pz00_8),
										CAR(BgL_epz00_9));
									BgL_arg1564z00_145 =
										BGl_epairifyzd2reczd2zztools_miscz00(CDR(BgL_pz00_8),
										CDR(BgL_epz00_9));
									BgL_arg1565z00_146 = CER(BgL_epz00_9);
									{	/* Tools/misc.scm 96 */
										obj_t BgL_res1758z00_497;

										BgL_res1758z00_497 =
											MAKE_EXTENDED_PAIR(BgL_arg1563z00_144, BgL_arg1564z00_145,
											BgL_arg1565z00_146);
										return BgL_res1758z00_497;
									}
								}
						}
					else
						{	/* Tools/misc.scm 91 */
							return BgL_pz00_8;
						}
				}
			else
				{	/* Tools/misc.scm 89 */
					return BgL_pz00_8;
				}
		}
	}



/* _epairify-rec */
	obj_t BGl__epairifyzd2reczd2zztools_miscz00(obj_t BgL_envz00_641,
		obj_t BgL_pz00_642, obj_t BgL_epz00_643)
	{
		AN_OBJECT;
		{	/* Tools/misc.scm 87 */
			return BGl_epairifyzd2reczd2zztools_miscz00(BgL_pz00_642, BgL_epz00_643);
		}
	}



/* epairify-propagate */
	BGL_EXPORTED_DEF obj_t BGl_epairifyzd2propagatezd2zztools_miscz00(obj_t
		BgL_pz00_10, obj_t BgL_epz00_11)
	{
		AN_OBJECT;
		{	/* Tools/misc.scm 105 */
			if (EXTENDED_PAIRP(BgL_epz00_11))
				{	/* Tools/misc.scm 106 */
					return BGl_loopz00zztools_miscz00(BgL_epz00_11, BgL_pz00_10);
				}
			else
				{	/* Tools/misc.scm 106 */
					return BgL_pz00_10;
				}
		}
	}



/* loop */
	obj_t BGl_loopz00zztools_miscz00(obj_t BgL_epz00_656, obj_t BgL_pz00_153)
	{
		AN_OBJECT;
		{	/* Tools/misc.scm 108 */
			if (PAIRP(BgL_pz00_153))
				{	/* Tools/misc.scm 110 */
					if (EXTENDED_PAIRP(BgL_pz00_153))
						{	/* Tools/misc.scm 112 */
							return BgL_pz00_153;
						}
					else
						{	/* Tools/misc.scm 115 */
							obj_t BgL_arg1575z00_157;

							obj_t BgL_arg1576z00_158;

							obj_t BgL_arg1577z00_159;

							BgL_arg1575z00_157 =
								BGl_loopz00zztools_miscz00(BgL_epz00_656, CAR(BgL_pz00_153));
							BgL_arg1576z00_158 =
								BGl_loopz00zztools_miscz00(BgL_epz00_656, CDR(BgL_pz00_153));
							BgL_arg1577z00_159 = CER(BgL_epz00_656);
							{	/* Tools/misc.scm 115 */
								obj_t BgL_res1759z00_507;

								BgL_res1759z00_507 =
									MAKE_EXTENDED_PAIR(BgL_arg1575z00_157, BgL_arg1576z00_158,
									BgL_arg1577z00_159);
								return BgL_res1759z00_507;
							}
						}
				}
			else
				{	/* Tools/misc.scm 110 */
					return BgL_pz00_153;
				}
		}
	}



/* _epairify-propagate */
	obj_t BGl__epairifyzd2propagatezd2zztools_miscz00(obj_t BgL_envz00_644,
		obj_t BgL_pz00_645, obj_t BgL_epz00_646)
	{
		AN_OBJECT;
		{	/* Tools/misc.scm 105 */
			return
				BGl_epairifyzd2propagatezd2zztools_miscz00(BgL_pz00_645, BgL_epz00_646);
		}
	}



/* epairify* */
	BGL_EXPORTED_DEF obj_t BGl_epairifyza2za2zztools_miscz00(obj_t BgL_defz00_12,
		obj_t BgL_srcsz00_13)
	{
		AN_OBJECT;
		{	/* Tools/misc.scm 122 */
			{
				obj_t BgL_srcsz00_164;

				BgL_srcsz00_164 = BgL_srcsz00_13;
			BgL_zc3anonymousza31581ze3z83_165:
				if (NULLP(BgL_srcsz00_164))
					{	/* Tools/misc.scm 125 */
						return BgL_defz00_12;
					}
				else
					{	/* Tools/misc.scm 127 */
						bool_t BgL_testz00_768;

						{	/* Tools/misc.scm 127 */
							obj_t BgL_auxz00_769;

							BgL_auxz00_769 = CAR(BgL_srcsz00_164);
							BgL_testz00_768 = EXTENDED_PAIRP(BgL_auxz00_769);
						}
						if (BgL_testz00_768)
							{	/* Tools/misc.scm 128 */
								obj_t BgL_arg1584z00_168;

								obj_t BgL_arg1585z00_169;

								obj_t BgL_arg1586z00_170;

								BgL_arg1584z00_168 = CAR(BgL_defz00_12);
								BgL_arg1585z00_169 = CDR(BgL_defz00_12);
								BgL_arg1586z00_170 = CER(CAR(BgL_srcsz00_164));
								{	/* Tools/misc.scm 128 */
									obj_t BgL_res1760z00_518;

									BgL_res1760z00_518 =
										MAKE_EXTENDED_PAIR(BgL_arg1584z00_168, BgL_arg1585z00_169,
										BgL_arg1586z00_170);
									return BgL_res1760z00_518;
								}
							}
						else
							{
								obj_t BgL_srcsz00_777;

								BgL_srcsz00_777 = CDR(BgL_srcsz00_164);
								BgL_srcsz00_164 = BgL_srcsz00_777;
								goto BgL_zc3anonymousza31581ze3z83_165;
							}
					}
			}
		}
	}



/* _epairify* */
	obj_t BGl__epairifyza2za2zztools_miscz00(obj_t BgL_envz00_647,
		obj_t BgL_defz00_648, obj_t BgL_srcsz00_649)
	{
		AN_OBJECT;
		{	/* Tools/misc.scm 122 */
			return BGl_epairifyza2za2zztools_miscz00(BgL_defz00_648, BgL_srcsz00_649);
		}
	}



/* build-path-from-shell-variable */
	BGL_EXPORTED_DEF obj_t
		BGl_buildzd2pathzd2fromzd2shellzd2variablez00zztools_miscz00(obj_t
		BgL_varz00_14)
	{
		AN_OBJECT;
		{	/* Tools/misc.scm 135 */
			if (bigloo_strcmp(BGl_oszd2classzd2zz__osz00(),
					BGl_string1764z00zztools_miscz00))
				{	/* Tools/misc.scm 136 */
					return
						BGl_mingwzd2buildzd2pathzd2fromzd2shellzd2variablezd2zztools_miscz00
						(BgL_varz00_14);
				}
			else
				{	/* Tools/misc.scm 136 */
					return
						BGl_unixzd2buildzd2pathzd2fromzd2shellzd2variablezd2zztools_miscz00
						(BgL_varz00_14);
				}
		}
	}



/* _build-path-from-shell-variable */
	obj_t BGl__buildzd2pathzd2fromzd2shellzd2variablez00zztools_miscz00(obj_t
		BgL_envz00_650, obj_t BgL_varz00_651)
	{
		AN_OBJECT;
		{	/* Tools/misc.scm 135 */
			return
				BGl_buildzd2pathzd2fromzd2shellzd2variablez00zztools_miscz00
				(BgL_varz00_651);
		}
	}



/* mingw-build-path-from-shell-variable */
	obj_t
		BGl_mingwzd2buildzd2pathzd2fromzd2shellzd2variablezd2zztools_miscz00(obj_t
		BgL_varz00_15)
	{
		AN_OBJECT;
		{	/* Tools/misc.scm 143 */
			{	/* Tools/misc.scm 156 */
				obj_t BgL_valz00_179;

				obj_t BgL_resz00_180;

				BgL_valz00_179 =
					BGl_getenvz00zz__osz00(BSTRING_TO_STRING(BgL_varz00_15));
				BgL_resz00_180 = BNIL;
				if (STRINGP(BgL_valz00_179))
					{	/* Tools/misc.scm 160 */
						long BgL_nz00_182;

						obj_t BgL_kz00_183;

						BgL_nz00_182 = STRING_LENGTH(BgL_valz00_179);
						BgL_kz00_183 = BINT(((long) 0));
						{
							obj_t BgL_iz00_213;

							{
								obj_t BgL_iz00_186;

								BgL_iz00_186 = BINT(((long) 0));
							BgL_zc3anonymousza31595ze3z83_187:
								if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_186,
										BINT(BgL_nz00_182)))
									{	/* Tools/misc.scm 171 */
										obj_t BgL_l1521z00_189;

										{	/* Tools/misc.scm 172 */
											obj_t BgL_arg1607z00_207;

											{	/* Tools/misc.scm 172 */
												obj_t BgL_arg1608z00_208;

												BgL_arg1608z00_208 =
													c_substring(BgL_valz00_179,
													(long) CINT(BgL_kz00_183), (long) CINT(BgL_iz00_186));
												BgL_arg1607z00_207 =
													MAKE_PAIR(BgL_arg1608z00_208, BgL_resz00_180);
											}
											BgL_l1521z00_189 = bgl_reverse(BgL_arg1607z00_207);
										}
										if (NULLP(BgL_l1521z00_189))
											{	/* Tools/misc.scm 171 */
												return BNIL;
											}
										else
											{	/* Tools/misc.scm 171 */
												obj_t BgL_head1523z00_191;

												BgL_head1523z00_191 =
													MAKE_PAIR
													(BGl_normaliza7ezd2mingwzd2pathza7zztools_miscz00(CAR
														(BgL_l1521z00_189)), BNIL);
												{	/* Tools/misc.scm 171 */
													obj_t BgL_g1526z00_192;

													BgL_g1526z00_192 = CDR(BgL_l1521z00_189);
													{
														obj_t BgL_l1521z00_194;

														obj_t BgL_tail1524z00_195;

														BgL_l1521z00_194 = BgL_g1526z00_192;
														BgL_tail1524z00_195 = BgL_head1523z00_191;
													BgL_zc3anonymousza31598ze3z83_196:
														if (NULLP(BgL_l1521z00_194))
															{	/* Tools/misc.scm 171 */
																return BgL_head1523z00_191;
															}
														else
															{	/* Tools/misc.scm 171 */
																obj_t BgL_newtail1525z00_198;

																BgL_newtail1525z00_198 =
																	MAKE_PAIR
																	(BGl_normaliza7ezd2mingwzd2pathza7zztools_miscz00
																	(CAR(BgL_l1521z00_194)), BNIL);
																SET_CDR(BgL_tail1524z00_195,
																	BgL_newtail1525z00_198);
																{
																	obj_t BgL_tail1524z00_814;

																	obj_t BgL_l1521z00_812;

																	BgL_l1521z00_812 = CDR(BgL_l1521z00_194);
																	BgL_tail1524z00_814 = BgL_newtail1525z00_198;
																	BgL_tail1524z00_195 = BgL_tail1524z00_814;
																	BgL_l1521z00_194 = BgL_l1521z00_812;
																	goto BgL_zc3anonymousza31598ze3z83_196;
																}
															}
													}
												}
											}
									}
								else
									{	/* Tools/misc.scm 170 */
										{	/* Tools/misc.scm 173 */
											bool_t BgL_testz00_815;

											BgL_iz00_213 = BgL_iz00_186;
											if (
												(STRING_REF(BgL_valz00_179,
														(long) CINT(BgL_iz00_213)) ==
													((unsigned char) ':')))
												{	/* Tools/misc.scm 163 */
													if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_iz00_213,
															BINT((BgL_nz00_182 - ((long) 1)))))
														{	/* Tools/misc.scm 165 */
															bool_t BgL_testz00_824;

															if (
																(STRING_REF(BgL_valz00_179,
																		(long)
																		CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00
																			(BgL_iz00_213,
																				BINT(((long) 1))))) ==
																	((unsigned char) '/')))
																{	/* Tools/misc.scm 166 */
																	BgL_testz00_824 = ((bool_t) 1);
																}
															else
																{	/* Tools/misc.scm 166 */
																	BgL_testz00_824 =
																		(STRING_REF(BgL_valz00_179,
																			(long)
																			CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00
																				(BgL_iz00_213,
																					BINT(((long) 1))))) ==
																		((unsigned char) '\\'));
																}
															if (BgL_testz00_824)
																{	/* Tools/misc.scm 165 */
																	BgL_testz00_815 = ((bool_t) 0);
																}
															else
																{	/* Tools/misc.scm 165 */
																	BgL_testz00_815 = ((bool_t) 1);
																}
														}
													else
														{	/* Tools/misc.scm 164 */
															BgL_testz00_815 = ((bool_t) 0);
														}
												}
											else
												{	/* Tools/misc.scm 163 */
													BgL_testz00_815 = ((bool_t) 0);
												}
											if (BgL_testz00_815)
												{	/* Tools/misc.scm 173 */
													{	/* Tools/misc.scm 175 */
														obj_t BgL_arg1610z00_210;

														BgL_arg1610z00_210 =
															c_substring(BgL_valz00_179,
															(long) CINT(BgL_kz00_183),
															(long) CINT(BgL_iz00_186));
														BgL_resz00_180 =
															MAKE_PAIR(BgL_arg1610z00_210, BgL_resz00_180);
													}
													BgL_kz00_183 =
														BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_186,
														BINT(((long) 1)));
												}
											else
												{	/* Tools/misc.scm 173 */
													BFALSE;
												}
										}
										{
											obj_t BgL_iz00_842;

											BgL_iz00_842 =
												BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_186,
												BINT(((long) 1)));
											BgL_iz00_186 = BgL_iz00_842;
											goto BgL_zc3anonymousza31595ze3z83_187;
										}
									}
							}
						}
					}
				else
					{	/* Tools/misc.scm 158 */
						return BNIL;
					}
			}
		}
	}



/* normalize-mingw-path */
	obj_t BGl_normaliza7ezd2mingwzd2pathza7zztools_miscz00(obj_t BgL_pathz00_226)
	{
		AN_OBJECT;
		{	/* Tools/misc.scm 155 */
			{	/* Tools/misc.scm 145 */
				long BgL_nz00_228;

				BgL_nz00_228 = STRING_LENGTH(BgL_pathz00_226);
				if ((BgL_nz00_228 < ((long) 3)))
					{	/* Tools/misc.scm 147 */
						return BgL_pathz00_226;
					}
				else
					{	/* Tools/misc.scm 147 */
						if (
							(STRING_REF(BgL_pathz00_226,
									((long) 0)) == ((unsigned char) '/')))
							{	/* Tools/misc.scm 149 */
								if (
									(STRING_REF(BgL_pathz00_226,
											((long) 2)) == ((unsigned char) '/')))
									{	/* Tools/misc.scm 151 */
										obj_t BgL_arg1630z00_233;

										obj_t BgL_arg1632z00_235;

										{	/* Tools/misc.scm 151 */
											unsigned char BgL_arg1633z00_236;

											BgL_arg1633z00_236 =
												STRING_REF(BgL_pathz00_226, ((long) 1));
											{	/* Tools/misc.scm 151 */
												obj_t BgL_list1634z00_237;

												BgL_list1634z00_237 =
													MAKE_PAIR(BCHAR(BgL_arg1633z00_236), BNIL);
												BgL_arg1630z00_233 =
													BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
													(BgL_list1634z00_237);
										}}
										BgL_arg1632z00_235 =
											c_substring(BgL_pathz00_226, ((long) 3), BgL_nz00_228);
										return
											string_append_3(BgL_arg1630z00_233,
											BGl_string1765z00zztools_miscz00, BgL_arg1632z00_235);
									}
								else
									{	/* Tools/misc.scm 150 */
										return BgL_pathz00_226;
									}
							}
						else
							{	/* Tools/misc.scm 149 */
								return BgL_pathz00_226;
							}
					}
			}
		}
	}



/* unix-build-path-from-shell-variable */
	obj_t
		BGl_unixzd2buildzd2pathzd2fromzd2shellzd2variablezd2zztools_miscz00(obj_t
		BgL_varz00_16)
	{
		AN_OBJECT;
		{	/* Tools/misc.scm 181 */
			{	/* Tools/misc.scm 182 */
				obj_t BgL_valz00_241;

				BgL_valz00_241 =
					BGl_getenvz00zz__osz00(BSTRING_TO_STRING(BgL_varz00_16));
				if (STRINGP(BgL_valz00_241))
					{	/* Tools/misc.scm 184 */
						obj_t BgL_port1510z00_243;

						{	/* Tools/misc.scm 184 */
							obj_t BgL_g2739z00_432;

							BgL_g2739z00_432 = BgL_valz00_241;
							{	/* Tools/misc.scm 184 */

								BgL_port1510z00_243 =
									BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
									(BgL_g2739z00_432, BINT(((long) 0)));
						}}
						{	/* Tools/misc.scm 184 */
							obj_t BgL_val1511z00_244;

							BgL_val1511z00_244 =
								BGl_zc3exitza31641ze3z83zztools_miscz00(BgL_port1510z00_243);
							bgl_close_input_port(BgL_port1510z00_243);
							if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
									(BgL_val1511z00_244)))
								{	/* Tools/misc.scm 184 */
									return
										BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
										(BgL_val1511z00_244), CDR(BgL_val1511z00_244));
								}
							else
								{	/* Tools/misc.scm 184 */
									return BgL_val1511z00_244;
								}
						}
					}
				else
					{	/* Tools/misc.scm 183 */
						return BNIL;
					}
			}
		}
	}



/* ignore */
	obj_t BGl_ignorez00zztools_miscz00(obj_t BgL_inputzd2portzd2_654)
	{
		AN_OBJECT;
		{	/* Tools/misc.scm 184 */
		BGl_ignorez00zztools_miscz00:
			{
				obj_t BgL_inputzd2portzd2_282;

				long BgL_lastzd2matchzd2_283;

				obj_t BgL_inputzd2portzd2_290;

				long BgL_lastzd2matchzd2_291;

				obj_t BgL_inputzd2portzd2_303;

				long BgL_lastzd2matchzd2_304;

				RGC_START_MATCH(BgL_inputzd2portzd2_654);
				{	/* Tools/misc.scm 184 */
					long BgL_matchz00_394;

					BgL_inputzd2portzd2_282 = BgL_inputzd2portzd2_654;
					BgL_lastzd2matchzd2_283 = ((long) 2);
				BgL_zc3anonymousza31642ze3z83_284:
					{	/* Tools/misc.scm 184 */
						int BgL_currentzd2charzd2_285;

						BgL_currentzd2charzd2_285 =
							RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_282);
						if (((long) (BgL_currentzd2charzd2_285) == ((long) 0)))
							{	/* Tools/misc.scm 184 */
								if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_282))
									{	/* Tools/misc.scm 184 */
										if (rgc_fill_buffer(BgL_inputzd2portzd2_282))
											{

												goto BgL_zc3anonymousza31642ze3z83_284;
											}
										else
											{	/* Tools/misc.scm 184 */
												BgL_matchz00_394 = BgL_lastzd2matchzd2_283;
											}
									}
								else
									{	/* Tools/misc.scm 184 */
										BgL_inputzd2portzd2_290 = BgL_inputzd2portzd2_282;
										BgL_lastzd2matchzd2_291 = BgL_lastzd2matchzd2_283;
									BgL_zc3anonymousza31647ze3z83_292:
										{	/* Tools/misc.scm 184 */
											long BgL_newzd2matchzd2_293;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_290);
											BgL_newzd2matchzd2_293 = ((long) 0);
											{	/* Tools/misc.scm 184 */
												int BgL_currentzd2charzd2_294;

												BgL_currentzd2charzd2_294 =
													RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_290);
												if (((long) (BgL_currentzd2charzd2_294) == ((long) 0)))
													{	/* Tools/misc.scm 184 */
														if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_290))
															{	/* Tools/misc.scm 184 */
																if (rgc_fill_buffer(BgL_inputzd2portzd2_290))
																	{

																		goto BgL_zc3anonymousza31647ze3z83_292;
																	}
																else
																	{	/* Tools/misc.scm 184 */
																		BgL_matchz00_394 = BgL_newzd2matchzd2_293;
																	}
															}
														else
															{	/* Tools/misc.scm 184 */
																BgL_inputzd2portzd2_303 =
																	BgL_inputzd2portzd2_290;
																BgL_lastzd2matchzd2_304 =
																	BgL_newzd2matchzd2_293;
															BgL_zc3anonymousza31653ze3z83_305:
																{	/* Tools/misc.scm 184 */
																	long BgL_newzd2matchzd2_306;

																	RGC_STOP_MATCH(BgL_inputzd2portzd2_303);
																	BgL_newzd2matchzd2_306 = ((long) 0);
																	{	/* Tools/misc.scm 184 */
																		int BgL_currentzd2charzd2_307;

																		BgL_currentzd2charzd2_307 =
																			RGC_BUFFER_GET_CHAR
																			(BgL_inputzd2portzd2_303);
																		if (((long) (BgL_currentzd2charzd2_307) ==
																				((long) 0)))
																			{	/* Tools/misc.scm 184 */
																				if (RGC_BUFFER_EMPTY
																					(BgL_inputzd2portzd2_303))
																					{	/* Tools/misc.scm 184 */
																						if (rgc_fill_buffer
																							(BgL_inputzd2portzd2_303))
																							{

																								goto
																									BgL_zc3anonymousza31653ze3z83_305;
																							}
																						else
																							{	/* Tools/misc.scm 184 */
																								BgL_matchz00_394 =
																									BgL_newzd2matchzd2_306;
																							}
																					}
																				else
																					{
																						long BgL_lastzd2matchzd2_902;

																						BgL_lastzd2matchzd2_902 =
																							BgL_newzd2matchzd2_306;
																						BgL_lastzd2matchzd2_304 =
																							BgL_lastzd2matchzd2_902;
																						goto
																							BgL_zc3anonymousza31653ze3z83_305;
																					}
																			}
																		else
																			{	/* Tools/misc.scm 184 */
																				if (
																					((long) (BgL_currentzd2charzd2_307) ==
																						((long) 58)))
																					{	/* Tools/misc.scm 184 */
																						BgL_matchz00_394 =
																							BgL_newzd2matchzd2_306;
																					}
																				else
																					{
																						long BgL_lastzd2matchzd2_906;

																						BgL_lastzd2matchzd2_906 =
																							BgL_newzd2matchzd2_306;
																						BgL_lastzd2matchzd2_304 =
																							BgL_lastzd2matchzd2_906;
																						goto
																							BgL_zc3anonymousza31653ze3z83_305;
																					}
																			}
																	}
																}
															}
													}
												else
													{	/* Tools/misc.scm 184 */
														if (
															((long) (BgL_currentzd2charzd2_294) ==
																((long) 58)))
															{	/* Tools/misc.scm 184 */
																BgL_matchz00_394 = BgL_newzd2matchzd2_293;
															}
														else
															{
																long BgL_lastzd2matchzd2_911;

																obj_t BgL_inputzd2portzd2_910;

																BgL_inputzd2portzd2_910 =
																	BgL_inputzd2portzd2_290;
																BgL_lastzd2matchzd2_911 =
																	BgL_newzd2matchzd2_293;
																BgL_lastzd2matchzd2_304 =
																	BgL_lastzd2matchzd2_911;
																BgL_inputzd2portzd2_303 =
																	BgL_inputzd2portzd2_910;
																goto BgL_zc3anonymousza31653ze3z83_305;
															}
													}
											}
										}
									}
							}
						else
							{	/* Tools/misc.scm 184 */
								if (((long) (BgL_currentzd2charzd2_285) == ((long) 58)))
									{	/* Tools/misc.scm 184 */
										long BgL_newzd2matchzd2_579;

										RGC_STOP_MATCH(BgL_inputzd2portzd2_282);
										BgL_newzd2matchzd2_579 = ((long) 1);
										BgL_matchz00_394 = BgL_newzd2matchzd2_579;
									}
								else
									{
										long BgL_lastzd2matchzd2_917;

										obj_t BgL_inputzd2portzd2_916;

										BgL_inputzd2portzd2_916 = BgL_inputzd2portzd2_282;
										BgL_lastzd2matchzd2_917 = BgL_lastzd2matchzd2_283;
										BgL_lastzd2matchzd2_291 = BgL_lastzd2matchzd2_917;
										BgL_inputzd2portzd2_290 = BgL_inputzd2portzd2_916;
										goto BgL_zc3anonymousza31647ze3z83_292;
									}
							}
					}
					RGC_SET_FILEPOS(BgL_inputzd2portzd2_654);
					{

						{	/* Tools/misc.scm 184 */
							obj_t BgL_aux1528z00_399;

							BgL_aux1528z00_399 = BINT(BgL_matchz00_394);
							switch ((long) CINT(BgL_aux1528z00_399))
								{
								case ((long) 2):

									return BNIL;
									break;
								case ((long) 1):

									{

										goto BGl_ignorez00zztools_miscz00;
									}
									break;
								case ((long) 0):

									{	/* Tools/misc.scm 186 */
										obj_t BgL_strz00_401;

										{	/* Tools/misc.scm 184 */
											int BgL_arg1666z00_322;

											{	/* Tools/misc.scm 184 */
												int BgL_res1761z00_600;

												{	/* Tools/misc.scm 184 */
													obj_t BgL_inputzd2portzd2_599;

													BgL_inputzd2portzd2_599 = BgL_inputzd2portzd2_654;
													BgL_res1761z00_600 =
														(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_599));
												}
												BgL_arg1666z00_322 = BgL_res1761z00_600;
											}
											BgL_strz00_401 =
												rgc_buffer_substring(BgL_inputzd2portzd2_654,
												((long) 0), (long) (BgL_arg1666z00_322));
										}
										{	/* Tools/misc.scm 186 */
											obj_t BgL_resz00_402;

											BgL_resz00_402 =
												BGl_ignorez00zztools_miscz00(BgL_inputzd2portzd2_654);
											{	/* Tools/misc.scm 187 */

												return MAKE_PAIR(BgL_strz00_401, BgL_resz00_402);
											}
										}
									}
									break;
								default:
									return
										BGl_errorz00zz__errorz00(BGl_string1766z00zztools_miscz00,
										BGl_string1767z00zztools_miscz00, BINT(BgL_matchz00_394));
								}
						}
					}
				}
			}
		}
	}



/* <exit:1641> */
	obj_t BGl_zc3exitza31641ze3z83zztools_miscz00(obj_t BgL_port1510z00_655)
	{
		AN_OBJECT;
		{	/* Tools/misc.scm 184 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1512z00_249;

			if (SET_EXIT(BgL_an_exit1512z00_249))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1512z00_249 = (void *) jmpbuf;
					{	/* Tools/misc.scm 184 */

						PUSH_EXIT(BgL_an_exit1512z00_249, ((long) 0));
						{	/* Tools/misc.scm 184 */
							obj_t BgL_val1513z00_250;

							BgL_val1513z00_250 =
								BGl_ignorez00zztools_miscz00(BgL_port1510z00_655);
							POP_EXIT();
							return BgL_val1513z00_250;
						}
					}
				}
		}
	}



/* uncygdrive */
	BGL_EXPORTED_DEF obj_t BGl_uncygdrivez00zztools_miscz00(obj_t BgL_strz00_17)
	{
		AN_OBJECT;
		{	/* Tools/misc.scm 201 */
			if (bigloo_strncmp(BGl_string1768z00zztools_miscz00, BgL_strz00_17,
					((long) 10)))
				{	/* Tools/misc.scm 203 */
					bool_t BgL_testz00_937;

					if ((STRING_LENGTH(BgL_strz00_17) > ((long) 12)))
						{	/* Tools/misc.scm 204 */
							bool_t BgL_testz00_941;

							{	/* Tools/misc.scm 204 */
								unsigned char BgL_auxz00_942;

								BgL_auxz00_942 = STRING_REF(BgL_strz00_17, ((long) 10));
								BgL_testz00_941 = isalpha(BgL_auxz00_942);
							}
							if (BgL_testz00_941)
								{	/* Tools/misc.scm 204 */
									BgL_testz00_937 =
										(STRING_REF(BgL_strz00_17,
											((long) 11)) == ((unsigned char) '/'));
								}
							else
								{	/* Tools/misc.scm 204 */
									BgL_testz00_937 = ((bool_t) 0);
								}
						}
					else
						{	/* Tools/misc.scm 203 */
							BgL_testz00_937 = ((bool_t) 0);
						}
					if (BgL_testz00_937)
						{	/* Tools/misc.scm 206 */
							obj_t BgL_arg1741z00_436;

							obj_t BgL_arg1742z00_437;

							{	/* Tools/misc.scm 206 */
								unsigned char BgL_arg1743z00_438;

								BgL_arg1743z00_438 = STRING_REF(BgL_strz00_17, ((long) 10));
								{	/* Tools/misc.scm 206 */
									obj_t BgL_list1744z00_439;

									{	/* Tools/misc.scm 206 */
										obj_t BgL_arg1745z00_440;

										{	/* Tools/misc.scm 206 */
											obj_t BgL_arg1746z00_441;

											BgL_arg1746z00_441 =
												MAKE_PAIR(BCHAR(((unsigned char) '/')), BNIL);
											BgL_arg1745z00_440 =
												MAKE_PAIR(BCHAR(((unsigned char) ':')),
												BgL_arg1746z00_441);
										}
										BgL_list1744z00_439 =
											MAKE_PAIR(BCHAR(BgL_arg1743z00_438), BgL_arg1745z00_440);
									}
									BgL_arg1741z00_436 =
										BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
										(BgL_list1744z00_439);
							}}
							BgL_arg1742z00_437 =
								c_substring(BgL_strz00_17, ((long) 12),
								STRING_LENGTH(BgL_strz00_17));
							return string_append(BgL_arg1741z00_436, BgL_arg1742z00_437);
						}
					else
						{	/* Tools/misc.scm 203 */
							return BgL_strz00_17;
						}
				}
			else
				{	/* Tools/misc.scm 202 */
					return BgL_strz00_17;
				}
		}
	}



/* _uncygdrive */
	obj_t BGl__uncygdrivez00zztools_miscz00(obj_t BgL_envz00_652,
		obj_t BgL_strz00_653)
	{
		AN_OBJECT;
		{	/* Tools/misc.scm 201 */
			return BGl_uncygdrivez00zztools_miscz00(BgL_strz00_653);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztools_miscz00()
	{
		AN_OBJECT;
		{	/* Tools/misc.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztools_miscz00()
	{
		AN_OBJECT;
		{	/* Tools/misc.scm 15 */
			return BUNSPEC;
		}
	}

#ifdef __cplusplus
}
#endif
