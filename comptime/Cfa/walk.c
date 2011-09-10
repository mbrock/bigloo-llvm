/*===========================================================================*/
/*   (Cfa/walk.scm)                                                          */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/walk.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl__cfazd2walkz12zc0zzcfa_walkz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzcfa_walkz00();
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_arithmeticz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_specializa7eza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_closurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_showz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_iteratez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_setupz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_collectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_shrinkifyz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_shrinkifyz12z12zzast_shrinkifyz00(obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_showzd2cfazd2resultsz00zzcfa_showz00(obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern obj_t BGl_collectzd2allzd2approxz12z12zzcfa_collectz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_walkz00();
	extern obj_t BGl_za2profilezd2modeza2zd2zzengine_paramz00;
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_walkz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzcfa_walkz00();
	extern obj_t BGl_typezd2settingsz12zc0zzcfa_typez00(obj_t);
	extern obj_t BGl_vectorzd2ze3tvectorz12z23zzcfa_tvectorz00(obj_t);
	extern obj_t BGl_setzd2initialzd2approxz12z12zzcfa_setupz00(obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	extern obj_t BGl_showzd2cfazd2nbzd2iterationszd2zzcfa_showz00();
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_walkz00();
	extern obj_t BGl_cleanupzd2arithmeticzd2nodesz12z12zzcfa_arithmeticz00();
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	extern obj_t BGl_cfazd2iteratezd2tozd2fixpointz12zc0zzcfa_iteratez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cfazd2walkz12zc0zzcfa_walkz00(obj_t);
	extern obj_t BGl_closurezd2optimiza7ationz12z67zzcfa_closurez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_declarezd2approxzd2setsz12z12zzcfa_approxz00();
	extern obj_t BGl_removezd2varzd2zzast_removez00(obj_t, obj_t);
	extern obj_t BGl_specializa7ez12zb5zzcfa_specializa7eza7(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_walkz00();
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfazd2walkz12zd2envz12zzcfa_walkz00,
		BgL_bgl__cfaza7d2walkza712za7c5315za7, BGl__cfazd2walkz12zc0zzcfa_walkz00,
		0L, BUNSPEC, 1);
	extern obj_t BGl_unpatchzd2vectorzd2setz12zd2envzc0zzcfa_tvectorz00;
	   
		 
		DEFINE_STRING(BGl_string5303z00zzcfa_walkz00,
		BgL_bgl_string5303za700za7za7c5316za7, "Cfa", 3);
	      DEFINE_STRING(BGl_string5304z00zzcfa_walkz00,
		BgL_bgl_string5304za700za7za7c5317za7, "   . ", 5);
	      DEFINE_STRING(BGl_string5305z00zzcfa_walkz00,
		BgL_bgl_string5305za700za7za7c5318za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string5306z00zzcfa_walkz00,
		BgL_bgl_string5306za700za7za7c5319za7, " error", 6);
	      DEFINE_STRING(BGl_string5307z00zzcfa_walkz00,
		BgL_bgl_string5307za700za7za7c5320za7, "s", 1);
	      DEFINE_STRING(BGl_string5308z00zzcfa_walkz00,
		BgL_bgl_string5308za700za7za7c5321za7, "", 0);
	      DEFINE_STRING(BGl_string5310z00zzcfa_walkz00,
		BgL_bgl_string5310za700za7za7c5322za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string5309z00zzcfa_walkz00,
		BgL_bgl_string5309za700za7za7c5323za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string5311z00zzcfa_walkz00,
		BgL_bgl_string5311za700za7za7c5324za7, "cfa_walk", 8);
	      DEFINE_STRING(BGl_string5312z00zzcfa_walkz00,
		BgL_bgl_string5312za700za7za7c5325za7,
		"(unpatch-vector-set!) (cfa inline) pass-started ", 48);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_walkz00(long
		BgL_checksumz00_1781, char *BgL_fromz00_1782)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_walkz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcfa_walkz00();
					BGl_cnstzd2initzd2zzcfa_walkz00();
					BGl_importedzd2moduleszd2initz00zzcfa_walkz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_walkz00()
	{
		AN_OBJECT;
		{	/* Cfa/walk.scm 24 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cfa_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cfa_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"cfa_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_walk");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"cfa_walk");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_walkz00()
	{
		AN_OBJECT;
		{	/* Cfa/walk.scm 24 */
			{	/* Cfa/walk.scm 24 */
				obj_t BgL_cportz00_1773;

				BgL_cportz00_1773 =
					bgl_open_input_string(BGl_string5312z00zzcfa_walkz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1774;

					BgL_iz00_1774 = ((long) 2);
				BgL_loopz00_1775:
					if ((BgL_iz00_1774 == ((long) -1)))
						{	/* Cfa/walk.scm 24 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/walk.scm 24 */
							{	/* Cfa/walk.scm 24 */
								obj_t BgL_arg5314z00_1777;

								{	/* Cfa/walk.scm 24 */

									{	/* Cfa/walk.scm 24 */
										obj_t BgL_locationz00_1779;

										BgL_locationz00_1779 = BBOOL(((bool_t) 0));
										{	/* Cfa/walk.scm 24 */

											BgL_arg5314z00_1777 =
												BGl_readz00zz__readerz00(BgL_cportz00_1773,
												BgL_locationz00_1779);
										}
									}
								}
								{	/* Cfa/walk.scm 24 */
									int BgL_auxz00_1801;

									BgL_auxz00_1801 = (int) (BgL_iz00_1774);
									CNST_TABLE_SET(BgL_auxz00_1801, BgL_arg5314z00_1777);
							}}
							{	/* Cfa/walk.scm 24 */
								int BgL_auxz00_1780;

								BgL_auxz00_1780 = (int) ((BgL_iz00_1774 - ((long) 1)));
								{
									long BgL_iz00_1806;

									BgL_iz00_1806 = (long) (BgL_auxz00_1780);
									BgL_iz00_1774 = BgL_iz00_1806;
									goto BgL_loopz00_1775;
								}
							}
						}
				}
			}
		}
	}



/* cfa-walk! */
	BGL_EXPORTED_DEF obj_t BGl_cfazd2walkz12zc0zzcfa_walkz00(obj_t
		BgL_globalsz00_1)
	{
		AN_OBJECT;
		{	/* Cfa/walk.scm 59 */
			{	/* Cfa/walk.scm 60 */
				obj_t BgL_list5166z00_1123;

				{	/* Cfa/walk.scm 60 */
					obj_t BgL_arg5168z00_1125;

					{	/* Cfa/walk.scm 60 */
						obj_t BgL_arg5170z00_1127;

						BgL_arg5170z00_1127 =
							MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
						BgL_arg5168z00_1125 =
							MAKE_PAIR(BGl_string5303z00zzcfa_walkz00, BgL_arg5170z00_1127);
					}
					BgL_list5166z00_1123 =
						MAKE_PAIR(BGl_string5304z00zzcfa_walkz00, BgL_arg5168z00_1125);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list5166z00_1123);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string5303z00zzcfa_walkz00;
			{
				obj_t BgL_hooksz00_1131;

				obj_t BgL_hnamesz00_1132;

				BgL_hooksz00_1131 = BNIL;
				BgL_hnamesz00_1132 = BNIL;
			BgL_zc3anonymousza35171ze3z83_1133:
				if (NULLP(BgL_hooksz00_1131))
					{	/* Cfa/walk.scm 60 */
						CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Cfa/walk.scm 60 */
						bool_t BgL_testz00_1818;

						{	/* Cfa/walk.scm 60 */
							obj_t BgL_fun5179z00_1141;

							BgL_fun5179z00_1141 = CAR(BgL_hooksz00_1131);
							BgL_testz00_1818 =
								CBOOL(PROCEDURE_ENTRY(BgL_fun5179z00_1141) (BgL_fun5179z00_1141,
									BEOA));
						}
						if (BgL_testz00_1818)
							{
								obj_t BgL_hnamesz00_1825;

								obj_t BgL_hooksz00_1823;

								BgL_hooksz00_1823 = CDR(BgL_hooksz00_1131);
								BgL_hnamesz00_1825 = CDR(BgL_hnamesz00_1132);
								BgL_hnamesz00_1132 = BgL_hnamesz00_1825;
								BgL_hooksz00_1131 = BgL_hooksz00_1823;
								goto BgL_zc3anonymousza35171ze3z83_1133;
							}
						else
							{	/* Cfa/walk.scm 60 */
								BGl_internalzd2errorzd2zztools_errorz00
									(BGl_string5303z00zzcfa_walkz00,
									BGl_string5305z00zzcfa_walkz00, CAR(BgL_hnamesz00_1132));
							}
					}
			}
			BGl_collectzd2allzd2approxz12z12zzcfa_collectz00(BgL_globalsz00_1);
			BGl_declarezd2approxzd2setsz12z12zzcfa_approxz00();
			BGl_setzd2initialzd2approxz12z12zzcfa_setupz00(BgL_globalsz00_1);
			{	/* Cfa/walk.scm 71 */
				obj_t BgL_iterationzd2rootszd2_1144;

				BgL_iterationzd2rootszd2_1144 =
					BGl_cfazd2iteratezd2tozd2fixpointz12zc0zzcfa_iteratez00
					(BgL_globalsz00_1);
				BGl_showzd2cfazd2nbzd2iterationszd2zzcfa_showz00();
				{	/* Cfa/walk.scm 75 */
					obj_t BgL_globalsz00_1145;

					BgL_globalsz00_1145 =
						BGl_removezd2varzd2zzast_removez00(CNST_TABLE_REF(((long) 1)),
						BgL_globalsz00_1);
					BGl_showzd2cfazd2resultsz00zzcfa_showz00(BgL_globalsz00_1145);
					{	/* Cfa/walk.scm 79 */
						obj_t BgL_additionalz00_1146;

						BgL_additionalz00_1146 =
							BGl_vectorzd2ze3tvectorz12z23zzcfa_tvectorz00
							(BgL_globalsz00_1145);
						BGl_typezd2settingsz12zc0zzcfa_typez00(BgL_globalsz00_1145);
						if (
							((long) CINT(BGl_za2profilezd2modeza2zd2zzengine_paramz00) >
								((long) 0)))
							{	/* Cfa/walk.scm 83 */
								BFALSE;
							}
						else
							{	/* Cfa/walk.scm 83 */
								BGl_closurezd2optimiza7ationz12z67zzcfa_closurez00
									(BgL_globalsz00_1145);
							}
						BGl_cleanupzd2arithmeticzd2nodesz12z12zzcfa_arithmeticz00();
						BGl_specializa7ez12zb5zzcfa_specializa7eza7(BgL_globalsz00_1145);
						{	/* Cfa/walk.scm 90 */
							obj_t BgL_valuez00_1148;

							BgL_valuez00_1148 =
								BGl_shrinkifyz12z12zzast_shrinkifyz00(bgl_append2
								(BgL_additionalz00_1146, BgL_globalsz00_1145));
							if (((long)
									CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
									((long) 0)))
								{	/* Cfa/walk.scm 90 */
									{	/* Cfa/walk.scm 90 */
										obj_t BgL_port5165z00_1150;

										{	/* Cfa/walk.scm 90 */
											obj_t BgL_res5301z00_1757;

											{	/* Cfa/walk.scm 90 */
												obj_t BgL_auxz00_1850;

												BgL_auxz00_1850 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res5301z00_1757 =
													BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1850);
											}
											BgL_port5165z00_1150 = BgL_res5301z00_1757;
										}
										bgl_display_obj
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
											BgL_port5165z00_1150);
										bgl_display_string(BGl_string5306z00zzcfa_walkz00,
											BgL_port5165z00_1150);
										{	/* Cfa/walk.scm 90 */
											obj_t BgL_arg5183z00_1151;

											{	/* Cfa/walk.scm 90 */
												bool_t BgL_testz00_1855;

												if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
													{	/* Cfa/walk.scm 90 */
														BgL_testz00_1855 =
															BGl_2ze3ze3zz__r4_numbers_6_5z00
															(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
															BINT(((long) 1)));
													}
												else
													{	/* Cfa/walk.scm 90 */
														BgL_testz00_1855 = ((bool_t) 0);
													}
												if (BgL_testz00_1855)
													{	/* Cfa/walk.scm 90 */
														BgL_arg5183z00_1151 =
															BGl_string5307z00zzcfa_walkz00;
													}
												else
													{	/* Cfa/walk.scm 90 */
														BgL_arg5183z00_1151 =
															BGl_string5308z00zzcfa_walkz00;
													}
											}
											bgl_display_obj(BgL_arg5183z00_1151,
												BgL_port5165z00_1150);
										}
										bgl_display_string(BGl_string5309z00zzcfa_walkz00,
											BgL_port5165z00_1150);
										bgl_display_char(((unsigned char) '\n'),
											BgL_port5165z00_1150);
									}
									{	/* Cfa/walk.scm 90 */
										obj_t BgL_list5186z00_1154;

										BgL_list5186z00_1154 = MAKE_PAIR(BINT(((long) -1)), BNIL);
										return BGl_exitz00zz__errorz00(BgL_list5186z00_1154);
									}
								}
							else
								{	/* Cfa/walk.scm 90 */
									obj_t BgL_g5163z00_1155;

									obj_t BgL_g5164z00_1156;

									{	/* Cfa/walk.scm 90 */
										obj_t BgL_list5195z00_1169;

										BgL_list5195z00_1169 =
											MAKE_PAIR
											(BGl_unpatchzd2vectorzd2setz12zd2envzc0zzcfa_tvectorz00,
											BNIL);
										BgL_g5163z00_1155 = BgL_list5195z00_1169;
									}
									BgL_g5164z00_1156 = CNST_TABLE_REF(((long) 2));
									{
										obj_t BgL_hooksz00_1158;

										obj_t BgL_hnamesz00_1159;

										BgL_hooksz00_1158 = BgL_g5163z00_1155;
										BgL_hnamesz00_1159 = BgL_g5164z00_1156;
									BgL_zc3anonymousza35187ze3z83_1160:
										if (NULLP(BgL_hooksz00_1158))
											{	/* Cfa/walk.scm 90 */
												return BgL_valuez00_1148;
											}
										else
											{	/* Cfa/walk.scm 90 */
												bool_t BgL_testz00_1870;

												{	/* Cfa/walk.scm 90 */
													obj_t BgL_fun5194z00_1167;

													BgL_fun5194z00_1167 = CAR(BgL_hooksz00_1158);
													BgL_testz00_1870 =
														CBOOL(PROCEDURE_ENTRY(BgL_fun5194z00_1167)
														(BgL_fun5194z00_1167, BEOA));
												}
												if (BgL_testz00_1870)
													{
														obj_t BgL_hnamesz00_1877;

														obj_t BgL_hooksz00_1875;

														BgL_hooksz00_1875 = CDR(BgL_hooksz00_1158);
														BgL_hnamesz00_1877 = CDR(BgL_hnamesz00_1159);
														BgL_hnamesz00_1159 = BgL_hnamesz00_1877;
														BgL_hooksz00_1158 = BgL_hooksz00_1875;
														goto BgL_zc3anonymousza35187ze3z83_1160;
													}
												else
													{	/* Cfa/walk.scm 90 */
														obj_t BgL_arg5193z00_1166;

														BgL_arg5193z00_1166 = CAR(BgL_hnamesz00_1159);
														return
															BGl_internalzd2errorzd2zztools_errorz00
															(BGl_za2currentzd2passza2zd2zzengine_passz00,
															BGl_string5310z00zzcfa_walkz00,
															BgL_arg5193z00_1166);
													}
											}
									}
								}
						}
					}
				}
			}
		}
	}



/* _cfa-walk! */
	obj_t BGl__cfazd2walkz12zc0zzcfa_walkz00(obj_t BgL_envz00_1770,
		obj_t BgL_globalsz00_1771)
	{
		AN_OBJECT;
		{	/* Cfa/walk.scm 59 */
			return BGl_cfazd2walkz12zc0zzcfa_walkz00(BgL_globalsz00_1771);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_walkz00()
	{
		AN_OBJECT;
		{	/* Cfa/walk.scm 24 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_walkz00()
	{
		AN_OBJECT;
		{	/* Cfa/walk.scm 24 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_walkz00()
	{
		AN_OBJECT;
		{	/* Cfa/walk.scm 24 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string5311z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string5311z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string5311z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string5311z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string5311z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string5311z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzast_removez00(((long) 52292466),
				BSTRING_TO_STRING(BGl_string5311z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string5311z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string5311z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzast_shrinkifyz00(((long) 520586962),
				BSTRING_TO_STRING(BGl_string5311z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzcfa_collectz00(((long) 25125809),
				BSTRING_TO_STRING(BGl_string5311z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzcfa_setupz00(((long) 212645849),
				BSTRING_TO_STRING(BGl_string5311z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzcfa_iteratez00(((long) 319050990),
				BSTRING_TO_STRING(BGl_string5311z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzcfa_showz00(((long) 274767448),
				BSTRING_TO_STRING(BGl_string5311z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 243010053),
				BSTRING_TO_STRING(BGl_string5311z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string5311z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzcfa_info3z00(((long) 0),
				BSTRING_TO_STRING(BGl_string5311z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 535144917),
				BSTRING_TO_STRING(BGl_string5311z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzcfa_typez00(((long) 179272146),
				BSTRING_TO_STRING(BGl_string5311z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzcfa_closurez00(((long) 416995938),
				BSTRING_TO_STRING(BGl_string5311z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzcfa_specializa7eza7(((long) 37308749),
				BSTRING_TO_STRING(BGl_string5311z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzcfa_tvectorz00(((long) 249450490),
				BSTRING_TO_STRING(BGl_string5311z00zzcfa_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_arithmeticz00(((long) 416199856),
				BSTRING_TO_STRING(BGl_string5311z00zzcfa_walkz00));
		}
	}

#ifdef __cplusplus
}
#endif
