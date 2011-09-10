/*===========================================================================*/
/*   (SawMill/collapse.scm)                                                  */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/collapse.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_blockz00_bgl
	{
		header_t header;
		obj_t widening;
		int BgL_labelz00;
		obj_t BgL_predsz00;
		obj_t BgL_succsz00;
		obj_t BgL_firstz00;
	}               *BgL_blockz00_bglt;

	typedef struct BgL_collapsedz00_bgl
	{
		obj_t BgL_lastz00;
	}                   *BgL_collapsedz00_bglt;


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2collapsedz80zzsaw_collapsez00(obj_t);
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_collapsez00zzsaw_collapsez00(BgL_blockz00_bglt);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzsaw_collapsez00();
	static obj_t BGl_structzb2objectzd2ze3objec4013z83zzsaw_collapsez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__collapsez00zzsaw_collapsez00(obj_t, obj_t);
	static obj_t BGl__collapsedzd2nilzd2zzsaw_collapsez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_collapsez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_libz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_blockz00zzsaw_defsz00;
	static BgL_collapsedz00_bglt BGl_collapsedzd2nilzd2zzsaw_collapsez00();
	static obj_t BGl_objectzd2ze3structzd2colla4011ze3zzsaw_collapsez00(obj_t,
		obj_t);
	static bool_t BGl_dfsz00zzsaw_collapsez00(BgL_blockz00_bglt);
	static obj_t BGl_methodzd2initzd2zzsaw_collapsez00();
	extern obj_t BGl_substz00zzsaw_libz00(obj_t, obj_t, obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_collapsez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzsaw_collapsez00();
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_collapsez00();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	static obj_t BGl_collapsedz00zzsaw_collapsez00 = BUNSPEC;
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzsaw_collapsez00();
	static obj_t BGl__collapsedzf3zf3zzsaw_collapsez00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_collapsez00();
	static obj_t BGl_z52thezd2collapsedzd2nilz52zzsaw_collapsez00 = BUNSPEC;
	static obj_t __cnst[1];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4168z00zzsaw_collapsez00,
		BgL_bgl_objectza7d2za7e3stru4177z00,
		BGl_objectzd2ze3structzd2colla4011ze3zzsaw_collapsez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4170z00zzsaw_collapsez00,
		BgL_bgl_structza7b2objectza74178z00,
		BGl_structzb2objectzd2ze3objec4013z83zzsaw_collapsez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_collapsezd2envzd2zzsaw_collapsez00,
		BgL_bgl__collapseza700za7za7sa4179za7, BGl__collapsez00zzsaw_collapsez00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4169z00zzsaw_collapsez00,
		BgL_bgl_string4169za700za7za7s4180za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string4171z00zzsaw_collapsez00,
		BgL_bgl_string4171za700za7za7s4181za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string4172z00zzsaw_collapsez00,
		BgL_bgl_string4172za700za7za7s4182za7, "saw_collapse", 12);
	      DEFINE_STRING(BGl_string4173z00zzsaw_collapsez00,
		BgL_bgl_string4173za700za7za7s4183za7, "collapsed ", 10);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_collapsedzd2nilzd2envz00zzsaw_collapsez00,
		BgL_bgl__collapsedza7d2nil4184za7, BGl__collapsedzd2nilzd2zzsaw_collapsez00,
		0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2collapsedzd2envz52zzsaw_collapsez00,
		BgL_bgl__za752allocateza7d2c4185z00,
		BGl__z52allocatezd2collapsedz80zzsaw_collapsez00, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_collapsedzf3zd2envz21zzsaw_collapsez00,
		BgL_bgl__collapsedza7f3za7f34186z00, BGl__collapsedzf3zf3zzsaw_collapsez00,
		0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_collapsez00(long
		BgL_checksumz00_1891, char *BgL_fromz00_1892)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_collapsez00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_collapsez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzsaw_collapsez00();
					BGl_cnstzd2initzd2zzsaw_collapsez00();
					BGl_importedzd2moduleszd2initz00zzsaw_collapsez00();
					BGl_objectzd2initzd2zzsaw_collapsez00();
					BGl_methodzd2initzd2zzsaw_collapsez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_collapsez00()
	{
		AN_OBJECT;
		{	/* SawMill/collapse.scm 1 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "saw_collapse");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_collapse");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_collapse");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_collapsez00()
	{
		AN_OBJECT;
		{	/* SawMill/collapse.scm 1 */
			{	/* SawMill/collapse.scm 1 */
				obj_t BgL_cportz00_1877;

				BgL_cportz00_1877 =
					bgl_open_input_string(BGl_string4173z00zzsaw_collapsez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1878;

					BgL_iz00_1878 = ((long) 0);
				BgL_loopz00_1879:
					if ((BgL_iz00_1878 == ((long) -1)))
						{	/* SawMill/collapse.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/collapse.scm 1 */
							{	/* SawMill/collapse.scm 1 */
								obj_t BgL_arg4175z00_1881;

								{	/* SawMill/collapse.scm 1 */

									{	/* SawMill/collapse.scm 1 */
										obj_t BgL_locationz00_1883;

										BgL_locationz00_1883 = BBOOL(((bool_t) 0));
										{	/* SawMill/collapse.scm 1 */

											BgL_arg4175z00_1881 =
												BGl_readz00zz__readerz00(BgL_cportz00_1877,
												BgL_locationz00_1883);
										}
									}
								}
								{	/* SawMill/collapse.scm 1 */
									int BgL_auxz00_1910;

									BgL_auxz00_1910 = (int) (BgL_iz00_1878);
									CNST_TABLE_SET(BgL_auxz00_1910, BgL_arg4175z00_1881);
							}}
							{	/* SawMill/collapse.scm 1 */
								int BgL_auxz00_1884;

								BgL_auxz00_1884 = (int) ((BgL_iz00_1878 - ((long) 1)));
								{
									long BgL_iz00_1915;

									BgL_iz00_1915 = (long) (BgL_auxz00_1884);
									BgL_iz00_1878 = BgL_iz00_1915;
									goto BgL_loopz00_1879;
								}
							}
						}
				}
			}
		}
	}



/* collapse */
	BGL_EXPORTED_DEF obj_t BGl_collapsez00zzsaw_collapsez00(BgL_blockz00_bglt
		BgL_bz00_1)
	{
		AN_OBJECT;
		{	/* SawMill/collapse.scm 13 */
			BGl_dfsz00zzsaw_collapsez00(BgL_bz00_1);
			return BUNSPEC;
		}
	}



/* dfs */
	bool_t BGl_dfsz00zzsaw_collapsez00(BgL_blockz00_bglt BgL_bz00_1106)
	{
		AN_OBJECT;
		{	/* SawMill/collapse.scm 14 */
			{	/* SawMill/collapse.scm 16 */
				BgL_blockz00_bglt BgL_obj4000z00_1109;

				BgL_obj4000z00_1109 = ((BgL_blockz00_bglt) BgL_bz00_1106);
				{	/* SawMill/collapse.scm 16 */
					BgL_collapsedz00_bglt BgL_arg4015z00_1110;

					{	/* SawMill/collapse.scm 16 */
						obj_t BgL_arg4016z00_1111;

						BgL_arg4016z00_1111 =
							BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
							(((BgL_blockz00_bglt) CREF(BgL_bz00_1106))->BgL_firstz00));
						{	/* SawMill/collapse.scm 16 */
							BgL_collapsedz00_bglt BgL_res4156z00_1751;

							{	/* SawMill/collapse.scm 16 */
								BgL_collapsedz00_bglt BgL_new3960z00_1746;

								BgL_new3960z00_1746 =
									((BgL_collapsedz00_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_collapsedz00_bgl))));
								{	/* SawMill/collapse.scm 16 */
									BgL_collapsedz00_bglt BgL_res4155z00_1750;

									{	/* SawMill/collapse.scm 16 */
										BgL_collapsedz00_bglt BgL_new3970z00_1747;

										BgL_new3970z00_1747 = BgL_new3960z00_1746;
										{	/* SawMill/collapse.scm 16 */
											obj_t BgL_last3969z00_1749;

											BgL_last3969z00_1749 = BgL_arg4016z00_1111;
											((((BgL_collapsedz00_bglt) CREF(BgL_new3970z00_1747))->
													BgL_lastz00) =
												((obj_t) BgL_last3969z00_1749), BUNSPEC);
											BgL_res4155z00_1750 = BgL_new3970z00_1747;
									}} BgL_res4155z00_1750;
								}
								BgL_res4156z00_1751 = BgL_new3960z00_1746;
							}
							BgL_arg4015z00_1110 = BgL_res4156z00_1751;
					}}
					{	/* SawMill/collapse.scm 16 */
						obj_t BgL_auxz00_1925;

						BgL_objectz00_bglt BgL_auxz00_1923;

						BgL_auxz00_1925 = (obj_t) (BgL_arg4015z00_1110);
						BgL_auxz00_1923 = (BgL_objectz00_bglt) (BgL_obj4000z00_1109);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_1923, BgL_auxz00_1925);
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_obj4000z00_1109),
					BGl_classzd2numzd2zz__objectz00(BGl_collapsedz00zzsaw_collapsez00));
				BgL_obj4000z00_1109;
			}
			{	/* SawMill/collapse.scm 17 */
				bool_t BgL_testz00_1931;

				{	/* SawMill/collapse.scm 17 */
					bool_t BgL_testz00_1932;

					{	/* SawMill/collapse.scm 17 */
						obj_t BgL_auxz00_1933;

						BgL_auxz00_1933 =
							(((BgL_blockz00_bglt) CREF(BgL_bz00_1106))->BgL_predsz00);
						BgL_testz00_1932 = PAIRP(BgL_auxz00_1933);
					}
					if (BgL_testz00_1932)
						{	/* SawMill/collapse.scm 17 */
							obj_t BgL_auxz00_1936;

							{	/* SawMill/collapse.scm 17 */
								obj_t BgL_pairz00_1757;

								BgL_pairz00_1757 =
									(((BgL_blockz00_bglt) CREF(BgL_bz00_1106))->BgL_predsz00);
								BgL_auxz00_1936 = CDR(BgL_pairz00_1757);
							}
							BgL_testz00_1931 = NULLP(BgL_auxz00_1936);
						}
					else
						{	/* SawMill/collapse.scm 17 */
							BgL_testz00_1931 = ((bool_t) 0);
						}
				}
				if (BgL_testz00_1931)
					{	/* SawMill/collapse.scm 18 */
						obj_t BgL_pz00_1115;

						{	/* SawMill/collapse.scm 18 */
							obj_t BgL_pairz00_1760;

							BgL_pairz00_1760 =
								(((BgL_blockz00_bglt) CREF(BgL_bz00_1106))->BgL_predsz00);
							BgL_pz00_1115 = CAR(BgL_pairz00_1760);
						}
						{	/* SawMill/collapse.scm 18 */
							obj_t BgL_psz00_1116;

							{
								BgL_blockz00_bglt BgL_auxz00_1942;

								BgL_auxz00_1942 = (BgL_blockz00_bglt) (BgL_pz00_1115);
								BgL_psz00_1116 =
									(((BgL_blockz00_bglt) CREF(BgL_auxz00_1942))->BgL_succsz00);
							}
							{	/* SawMill/collapse.scm 18 */

								if (NULLP(CDR(BgL_psz00_1116)))
									{	/* SawMill/collapse.scm 20 */
										{	/* SawMill/collapse.scm 23 */
											obj_t BgL_arg4021z00_1118;

											obj_t BgL_arg4022z00_1119;

											{	/* SawMill/collapse.scm 23 */
												BgL_collapsedz00_bglt BgL_obj3981z00_1764;

												BgL_obj3981z00_1764 =
													(BgL_collapsedz00_bglt) (BgL_pz00_1115);
												{
													obj_t BgL_auxz00_1949;

													{	/* SawMill/collapse.scm 23 */
														BgL_objectz00_bglt BgL_auxz00_1950;

														BgL_auxz00_1950 =
															(BgL_objectz00_bglt) (BgL_obj3981z00_1764);
														BgL_auxz00_1949 =
															BGL_OBJECT_WIDENING(BgL_auxz00_1950);
													}
													BgL_arg4021z00_1118 =
														(((BgL_collapsedz00_bglt) CREF(BgL_auxz00_1949))->
														BgL_lastz00);
												}
											}
											BgL_arg4022z00_1119 =
												(((BgL_blockz00_bglt) CREF(BgL_bz00_1106))->
												BgL_firstz00);
											SET_CDR(BgL_arg4021z00_1118, BgL_arg4022z00_1119);
										}
										{	/* SawMill/collapse.scm 24 */
											obj_t BgL_arg4023z00_1120;

											{	/* SawMill/collapse.scm 24 */
												BgL_collapsedz00_bglt BgL_obj3981z00_1768;

												BgL_obj3981z00_1768 =
													(BgL_collapsedz00_bglt) (BgL_bz00_1106);
												{
													obj_t BgL_auxz00_1957;

													{	/* SawMill/collapse.scm 24 */
														BgL_objectz00_bglt BgL_auxz00_1958;

														BgL_auxz00_1958 =
															(BgL_objectz00_bglt) (BgL_obj3981z00_1768);
														BgL_auxz00_1957 =
															BGL_OBJECT_WIDENING(BgL_auxz00_1958);
													}
													BgL_arg4023z00_1120 =
														(((BgL_collapsedz00_bglt) CREF(BgL_auxz00_1957))->
														BgL_lastz00);
												}
											}
											{	/* SawMill/collapse.scm 24 */
												BgL_collapsedz00_bglt BgL_obj3984z00_1769;

												obj_t BgL_val3982z00_1770;

												BgL_obj3984z00_1769 =
													(BgL_collapsedz00_bglt) (BgL_pz00_1115);
												BgL_val3982z00_1770 = BgL_arg4023z00_1120;
												{
													obj_t BgL_auxz00_1963;

													{	/* SawMill/collapse.scm 24 */
														BgL_objectz00_bglt BgL_auxz00_1964;

														BgL_auxz00_1964 =
															(BgL_objectz00_bglt) (BgL_obj3984z00_1769);
														BgL_auxz00_1963 =
															BGL_OBJECT_WIDENING(BgL_auxz00_1964);
													}
													((((BgL_collapsedz00_bglt) CREF(BgL_auxz00_1963))->
															BgL_lastz00) =
														((obj_t) BgL_val3982z00_1770), BUNSPEC);
												}
											}
										}
										{	/* SawMill/collapse.scm 25 */
											obj_t BgL_arg4024z00_1121;

											BgL_arg4024z00_1121 =
												(((BgL_blockz00_bglt) CREF(BgL_bz00_1106))->
												BgL_succsz00);
											{
												BgL_blockz00_bglt BgL_auxz00_1969;

												BgL_auxz00_1969 = (BgL_blockz00_bglt) (BgL_pz00_1115);
												((((BgL_blockz00_bglt) CREF(BgL_auxz00_1969))->
														BgL_succsz00) =
													((obj_t) BgL_arg4024z00_1121), BUNSPEC);
											}
										}
										{	/* SawMill/collapse.scm 26 */
											obj_t BgL_g4005z00_1122;

											BgL_g4005z00_1122 =
												(((BgL_blockz00_bglt) CREF(BgL_bz00_1106))->
												BgL_succsz00);
											{
												obj_t BgL_l4003z00_1124;

												BgL_l4003z00_1124 = BgL_g4005z00_1122;
											BgL_zc3anonymousza34025ze3z83_1125:
												if (PAIRP(BgL_l4003z00_1124))
													{	/* SawMill/collapse.scm 26 */
														{	/* SawMill/collapse.scm 27 */
															obj_t BgL_sz00_1127;

															BgL_sz00_1127 = CAR(BgL_l4003z00_1124);
															{	/* SawMill/collapse.scm 28 */
																obj_t BgL_arg4027z00_1129;

																{	/* SawMill/collapse.scm 28 */
																	obj_t BgL_arg4028z00_1130;

																	{
																		BgL_blockz00_bglt BgL_auxz00_1976;

																		BgL_auxz00_1976 =
																			(BgL_blockz00_bglt) (BgL_sz00_1127);
																		BgL_arg4028z00_1130 =
																			(((BgL_blockz00_bglt)
																				CREF(BgL_auxz00_1976))->BgL_predsz00);
																	}
																	BgL_arg4027z00_1129 =
																		BGl_substz00zzsaw_libz00
																		(BgL_arg4028z00_1130,
																		(obj_t) (BgL_bz00_1106), BgL_pz00_1115);
																}
																{
																	BgL_blockz00_bglt BgL_auxz00_1981;

																	BgL_auxz00_1981 =
																		(BgL_blockz00_bglt) (BgL_sz00_1127);
																	((((BgL_blockz00_bglt)
																				CREF(BgL_auxz00_1981))->BgL_predsz00) =
																		((obj_t) BgL_arg4027z00_1129), BUNSPEC);
																}
															}
														}
														{
															obj_t BgL_l4003z00_1984;

															BgL_l4003z00_1984 = CDR(BgL_l4003z00_1124);
															BgL_l4003z00_1124 = BgL_l4003z00_1984;
															goto BgL_zc3anonymousza34025ze3z83_1125;
														}
													}
												else
													{	/* SawMill/collapse.scm 26 */
														((bool_t) 1);
													}
											}
										}
									}
								else
									{	/* SawMill/collapse.scm 20 */
										((bool_t) 0);
									}
							}
						}
					}
				else
					{	/* SawMill/collapse.scm 17 */
						((bool_t) 0);
					}
			}
			{	/* SawMill/collapse.scm 30 */
				obj_t BgL_g4008z00_1139;

				BgL_g4008z00_1139 =
					(((BgL_blockz00_bglt) CREF(BgL_bz00_1106))->BgL_succsz00);
				{
					obj_t BgL_l4006z00_1141;

					BgL_l4006z00_1141 = BgL_g4008z00_1139;
				BgL_zc3anonymousza34036ze3z83_1142:
					if (PAIRP(BgL_l4006z00_1141))
						{	/* SawMill/collapse.scm 30 */
							{	/* SawMill/collapse.scm 31 */
								BgL_blockz00_bglt BgL_succz00_1144;

								BgL_succz00_1144 = (BgL_blockz00_bglt) (CAR(BgL_l4006z00_1141));
								{	/* SawMill/collapse.scm 31 */
									bool_t BgL_testz00_1991;

									{	/* SawMill/collapse.scm 31 */
										obj_t BgL_obj3980z00_1784;

										BgL_obj3980z00_1784 = (obj_t) (BgL_succz00_1144);
										BgL_testz00_1991 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj3980z00_1784,
											BGl_collapsedz00zzsaw_collapsez00);
									}
									if (BgL_testz00_1991)
										{	/* SawMill/collapse.scm 31 */
											((bool_t) 0);
										}
									else
										{	/* SawMill/collapse.scm 31 */
											BGl_dfsz00zzsaw_collapsez00(BgL_succz00_1144);
										}
								}
							}
							{
								obj_t BgL_l4006z00_1995;

								BgL_l4006z00_1995 = CDR(BgL_l4006z00_1141);
								BgL_l4006z00_1141 = BgL_l4006z00_1995;
								goto BgL_zc3anonymousza34036ze3z83_1142;
							}
						}
					else
						{	/* SawMill/collapse.scm 30 */
							return ((bool_t) 1);
						}
				}
			}
		}
	}



/* _collapse */
	obj_t BGl__collapsez00zzsaw_collapsez00(obj_t BgL_envz00_1859,
		obj_t BgL_bz00_1860)
	{
		AN_OBJECT;
		{	/* SawMill/collapse.scm 13 */
			return
				BGl_collapsez00zzsaw_collapsez00((BgL_blockz00_bglt) (BgL_bz00_1860));
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_collapsez00()
	{
		AN_OBJECT;
		{	/* SawMill/collapse.scm 1 */
			{	/* SawMill/collapse.scm 7 */
				obj_t BgL_arg4040z00_1149;

				obj_t BgL_arg4041z00_1150;

				obj_t BgL_arg4044z00_1153;

				BgL_arg4040z00_1149 = CNST_TABLE_REF(((long) 0));
				BgL_arg4041z00_1150 = BGl_blockz00zzsaw_defsz00;
				{	/* SawMill/collapse.scm 7 */
					obj_t BgL_v4009z00_1154;

					BgL_v4009z00_1154 = create_vector((int) (((long) 0)));
					BgL_arg4044z00_1153 = BgL_v4009z00_1154;
				}
				BGl_collapsedz00zzsaw_collapsez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4040z00_1149,
					BgL_arg4041z00_1150, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2collapsedzd2envz52zzsaw_collapsez00,
					BGl_collapsedzd2nilzd2envz00zzsaw_collapsez00,
					BGl_collapsedzf3zd2envz21zzsaw_collapsez00, ((long) 25242469), BFALSE,
					BFALSE, BgL_arg4044z00_1153);
			}
			return (BGl_z52thezd2collapsedzd2nilz52zzsaw_collapsez00 =
				BUNSPEC, BUNSPEC);
		}
	}



/* _collapsed? */
	obj_t BGl__collapsedzf3zf3zzsaw_collapsez00(obj_t BgL_envz00_1863,
		obj_t BgL_obj3980z00_1864)
	{
		AN_OBJECT;
		{	/* SawMill/collapse.scm 7 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3980z00_1864,
					BGl_collapsedz00zzsaw_collapsez00));
		}
	}



/* _%allocate-collapsed */
	obj_t BGl__z52allocatezd2collapsedz80zzsaw_collapsez00(obj_t BgL_envz00_1861)
	{
		AN_OBJECT;
		{	/* SawMill/collapse.scm 7 */
			{	/* SawMill/collapse.scm 7 */
				BgL_blockz00_bglt BgL_auxz00_2005;

				{	/* SawMill/collapse.scm 7 */
					BgL_blockz00_bglt BgL_res4176z00_1890;

					{	/* SawMill/collapse.scm 7 */
						BgL_blockz00_bglt BgL_new3973z00_1888;

						BgL_new3973z00_1888 =
							((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_blockz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3973z00_1888),
							BGl_classzd2numzd2zz__objectz00
							(BGl_collapsedz00zzsaw_collapsez00));
						{	/* SawMill/collapse.scm 7 */
							BgL_objectz00_bglt BgL_auxz00_2010;

							BgL_auxz00_2010 = (BgL_objectz00_bglt) (BgL_new3973z00_1888);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2010, BFALSE);
						}
						BgL_res4176z00_1890 = BgL_new3973z00_1888;
					}
					BgL_auxz00_2005 = BgL_res4176z00_1890;
				}
				return (obj_t) (BgL_auxz00_2005);
			}
		}
	}



/* collapsed-nil */
	BgL_collapsedz00_bglt BGl_collapsedzd2nilzd2zzsaw_collapsez00()
	{
		AN_OBJECT;
		{	/* SawMill/collapse.scm 7 */
			if ((BGl_z52thezd2collapsedzd2nilz52zzsaw_collapsez00 == BUNSPEC))
				{	/* SawMill/collapse.scm 7 */
					{	/* SawMill/collapse.scm 7 */
						BgL_blockz00_bglt BgL_res4158z00_1800;

						{	/* SawMill/collapse.scm 7 */
							BgL_blockz00_bglt BgL_new3957z00_1796;

							BgL_new3957z00_1796 =
								((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_blockz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3957z00_1796),
								BGl_classzd2numzd2zz__objectz00(BGl_blockz00zzsaw_defsz00));
							{	/* SawMill/collapse.scm 7 */
								BgL_objectz00_bglt BgL_auxz00_2020;

								BgL_auxz00_2020 = (BgL_objectz00_bglt) (BgL_new3957z00_1796);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2020, BFALSE);
							}
							BgL_res4158z00_1800 = BgL_new3957z00_1796;
						}
						BGl_z52thezd2collapsedzd2nilz52zzsaw_collapsez00 =
							(obj_t) (BgL_res4158z00_1800);
					}
					{	/* SawMill/collapse.scm 7 */
						obj_t BgL_arg4052z00_1167;

						BgL_arg4052z00_1167 = MAKE_PAIR(BFALSE, BFALSE);
						{	/* SawMill/collapse.scm 7 */
							BgL_blockz00_bglt BgL_res4159z00_1810;

							{	/* SawMill/collapse.scm 7 */
								BgL_blockz00_bglt BgL_new3951z00_1801;

								int BgL_label3947z00_1802;

								BgL_new3951z00_1801 =
									(BgL_blockz00_bglt)
									(BGl_z52thezd2collapsedzd2nilz52zzsaw_collapsez00);
								BgL_label3947z00_1802 = (int) (((long) 0));
								{	/* SawMill/collapse.scm 7 */
									int BgL_label3947z00_1806;

									obj_t BgL_preds3948z00_1807;

									obj_t BgL_succs3949z00_1808;

									obj_t BgL_first3950z00_1809;

									BgL_label3947z00_1806 = BgL_label3947z00_1802;
									BgL_preds3948z00_1807 = BNIL;
									BgL_succs3949z00_1808 = BNIL;
									BgL_first3950z00_1809 = BgL_arg4052z00_1167;
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_1801))->
											BgL_labelz00) = ((int) BgL_label3947z00_1806), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_1801))->
											BgL_predsz00) = ((obj_t) BgL_preds3948z00_1807), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_1801))->
											BgL_succsz00) = ((obj_t) BgL_succs3949z00_1808), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_1801))->
											BgL_firstz00) = ((obj_t) BgL_first3950z00_1809), BUNSPEC);
									BgL_res4159z00_1810 = BgL_new3951z00_1801;
							}} BgL_res4159z00_1810;
					}}
					{	/* SawMill/collapse.scm 7 */
						long BgL_arg4053z00_1168;

						BgL_arg4053z00_1168 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_collapsedz00zzsaw_collapsez00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2collapsedzd2nilz52zzsaw_collapsez00),
							BgL_arg4053z00_1168);
					}
					{	/* SawMill/collapse.scm 7 */
						BgL_collapsedz00_bglt BgL_arg4054z00_1169;

						{	/* SawMill/collapse.scm 7 */
							BgL_collapsedz00_bglt BgL_res4161z00_1819;

							{	/* SawMill/collapse.scm 7 */
								BgL_collapsedz00_bglt BgL_new3960z00_1814;

								BgL_new3960z00_1814 =
									((BgL_collapsedz00_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_collapsedz00_bgl))));
								{	/* SawMill/collapse.scm 7 */
									BgL_collapsedz00_bglt BgL_res4160z00_1818;

									{	/* SawMill/collapse.scm 7 */
										BgL_collapsedz00_bglt BgL_new3970z00_1815;

										BgL_new3970z00_1815 = BgL_new3960z00_1814;
										{	/* SawMill/collapse.scm 7 */
											obj_t BgL_last3969z00_1817;

											BgL_last3969z00_1817 = BUNSPEC;
											((((BgL_collapsedz00_bglt) CREF(BgL_new3970z00_1815))->
													BgL_lastz00) =
												((obj_t) BgL_last3969z00_1817), BUNSPEC);
											BgL_res4160z00_1818 = BgL_new3970z00_1815;
									}} BgL_res4160z00_1818;
								}
								BgL_res4161z00_1819 = BgL_new3960z00_1814;
							}
							BgL_arg4054z00_1169 = BgL_res4161z00_1819;
						}
						{	/* SawMill/collapse.scm 7 */
							obj_t BgL_auxz00_2038;

							BgL_objectz00_bglt BgL_auxz00_2036;

							BgL_auxz00_2038 = (obj_t) (BgL_arg4054z00_1169);
							BgL_auxz00_2036 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2collapsedzd2nilz52zzsaw_collapsez00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2036, BgL_auxz00_2038);
				}}}
			else
				{	/* SawMill/collapse.scm 7 */
					BFALSE;
				}
			return
				(BgL_collapsedz00_bglt)
				(BGl_z52thezd2collapsedzd2nilz52zzsaw_collapsez00);
		}
	}



/* _collapsed-nil */
	obj_t BGl__collapsedzd2nilzd2zzsaw_collapsez00(obj_t BgL_envz00_1862)
	{
		AN_OBJECT;
		{	/* SawMill/collapse.scm 7 */
			return (obj_t) (BGl_collapsedzd2nilzd2zzsaw_collapsez00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_collapsez00()
	{
		AN_OBJECT;
		{	/* SawMill/collapse.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_collapsez00()
	{
		AN_OBJECT;
		{	/* SawMill/collapse.scm 1 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_collapsedz00zzsaw_collapsez00, BGl_proc4168z00zzsaw_collapsez00,
				BGl_string4169z00zzsaw_collapsez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_collapsedz00zzsaw_collapsez00, BGl_proc4170z00zzsaw_collapsez00,
				BGl_string4171z00zzsaw_collapsez00);
		}
	}



/* struct+object->objec4013 */
	obj_t BGl_structzb2objectzd2ze3objec4013z83zzsaw_collapsez00(obj_t
		BgL_envz00_1872, obj_t BgL_oz00_1873, obj_t BgL_sz00_1874)
	{
		AN_OBJECT;
		{	/* SawMill/collapse.scm 7 */
			{
				BgL_collapsedz00_bglt BgL_oz00_1732;

				obj_t BgL_sz00_1733;

				{	/* SawMill/collapse.scm 7 */
					BgL_collapsedz00_bglt BgL_auxz00_2046;

					BgL_oz00_1732 = (BgL_collapsedz00_bglt) (BgL_oz00_1873);
					BgL_sz00_1733 = BgL_sz00_1874;
					{

						{	/* SawMill/collapse.scm 7 */
							obj_t BgL_old3977z00_1736;

							obj_t BgL_aux3978z00_1737;

							{	/* SawMill/collapse.scm 7 */
								obj_t BgL_nextzd2method4012zd2_1742;

								BgL_nextzd2method4012zd2_1742 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1732),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_collapsedz00zzsaw_collapsez00);
								if (PROCEDUREP(BgL_nextzd2method4012zd2_1742))
									{	/* SawMill/collapse.scm 7 */
										BgL_old3977z00_1736 =
											PROCEDURE_ENTRY(BgL_nextzd2method4012zd2_1742)
											(BgL_nextzd2method4012zd2_1742, (obj_t) (BgL_oz00_1732),
											BgL_sz00_1733, BEOA);
									}
								else
									{	/* SawMill/collapse.scm 7 */
										BgL_old3977z00_1736 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1732), BgL_sz00_1733));
									}
							}
							BgL_aux3978z00_1737 =
								STRUCT_REF(BgL_sz00_1733, (int) (((long) 0)));
							{	/* SawMill/collapse.scm 7 */
								BgL_collapsedz00_bglt BgL_new3979z00_1738;

								BgL_new3979z00_1738 =
									((BgL_collapsedz00_bglt) (BgL_old3977z00_1736));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3979z00_1738),
									BGl_classzd2numzd2zz__objectz00
									(BGl_collapsedz00zzsaw_collapsez00));
								{	/* SawMill/collapse.scm 7 */
									BgL_collapsedz00_bglt BgL_arg4152z00_1740;

									{	/* SawMill/collapse.scm 7 */
										obj_t BgL_arg4153z00_1741;

										BgL_arg4153z00_1741 =
											STRUCT_REF(BgL_aux3978z00_1737, (int) (((long) 0)));
										{	/* SawMill/collapse.scm 7 */
											BgL_collapsedz00_bglt BgL_res4164z00_1857;

											{	/* SawMill/collapse.scm 7 */
												BgL_collapsedz00_bglt BgL_new3960z00_1852;

												BgL_new3960z00_1852 =
													((BgL_collapsedz00_bglt) BREF(GC_MALLOC(sizeof(struct
																BgL_collapsedz00_bgl))));
												{	/* SawMill/collapse.scm 7 */
													BgL_collapsedz00_bglt BgL_res4163z00_1856;

													{	/* SawMill/collapse.scm 7 */
														BgL_collapsedz00_bglt BgL_new3970z00_1853;

														BgL_new3970z00_1853 = BgL_new3960z00_1852;
														{	/* SawMill/collapse.scm 7 */
															obj_t BgL_last3969z00_1855;

															BgL_last3969z00_1855 = BgL_arg4153z00_1741;
															((((BgL_collapsedz00_bglt)
																		CREF(BgL_new3970z00_1853))->BgL_lastz00) =
																((obj_t) BgL_last3969z00_1855), BUNSPEC);
															BgL_res4163z00_1856 = BgL_new3970z00_1853;
													}} BgL_res4163z00_1856;
												}
												BgL_res4164z00_1857 = BgL_new3960z00_1852;
											}
											BgL_arg4152z00_1740 = BgL_res4164z00_1857;
									}}
									{	/* SawMill/collapse.scm 7 */
										obj_t BgL_auxz00_2069;

										BgL_objectz00_bglt BgL_auxz00_2067;

										BgL_auxz00_2069 = (obj_t) (BgL_arg4152z00_1740);
										BgL_auxz00_2067 =
											(BgL_objectz00_bglt) (BgL_new3979z00_1738);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_2067, BgL_auxz00_2069);
								}}
								BgL_auxz00_2046 = BgL_new3979z00_1738;
					}}}
					return (obj_t) (BgL_auxz00_2046);
				}
			}
		}
	}



/* object->struct-colla4011 */
	obj_t BGl_objectzd2ze3structzd2colla4011ze3zzsaw_collapsez00(obj_t
		BgL_envz00_1875, obj_t BgL_obj3974z00_1876)
	{
		AN_OBJECT;
		{	/* SawMill/collapse.scm 7 */
			{
				BgL_collapsedz00_bglt BgL_obj3974z00_1722;

				BgL_obj3974z00_1722 = (BgL_collapsedz00_bglt) (BgL_obj3974z00_1876);
				{

					{	/* SawMill/collapse.scm 7 */
						obj_t BgL_res3975z00_1725;

						{	/* SawMill/collapse.scm 7 */
							obj_t BgL_nextzd2method4010zd2_1730;

							BgL_nextzd2method4010zd2_1730 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3974z00_1722),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_collapsedz00zzsaw_collapsez00);
							if (PROCEDUREP(BgL_nextzd2method4010zd2_1730))
								{	/* SawMill/collapse.scm 7 */
									BgL_res3975z00_1725 =
										PROCEDURE_ENTRY(BgL_nextzd2method4010zd2_1730)
										(BgL_nextzd2method4010zd2_1730,
										(obj_t) (BgL_obj3974z00_1722), BEOA);
								}
							else
								{	/* SawMill/collapse.scm 7 */
									BgL_res3975z00_1725 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3974z00_1722));
								}
						}
						{	/* SawMill/collapse.scm 7 */
							obj_t BgL_aux3976z00_1726;

							{	/* SawMill/collapse.scm 7 */
								obj_t BgL_keyz00_1828;

								BgL_keyz00_1828 = CNST_TABLE_REF(((long) 0));
								BgL_aux3976z00_1726 =
									make_struct(BgL_keyz00_1828, (int) (((long) 1)), BUNSPEC);
							}
							{	/* SawMill/collapse.scm 7 */
								obj_t BgL_arg4148z00_1728;

								{
									obj_t BgL_auxz00_2086;

									{	/* SawMill/collapse.scm 7 */
										BgL_objectz00_bglt BgL_auxz00_2087;

										BgL_auxz00_2087 =
											(BgL_objectz00_bglt) (BgL_obj3974z00_1722);
										BgL_auxz00_2086 = BGL_OBJECT_WIDENING(BgL_auxz00_2087);
									}
									BgL_arg4148z00_1728 =
										(((BgL_collapsedz00_bglt) CREF(BgL_auxz00_2086))->
										BgL_lastz00);
								}
								{	/* SawMill/collapse.scm 7 */
									int BgL_auxz00_2091;

									BgL_auxz00_2091 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3976z00_1726, BgL_auxz00_2091,
										BgL_arg4148z00_1728);
							}}
							{	/* SawMill/collapse.scm 7 */
								int BgL_auxz00_2094;

								BgL_auxz00_2094 = (int) (((long) 0));
								STRUCT_SET(BgL_res3975z00_1725, BgL_auxz00_2094,
									BgL_aux3976z00_1726);
							}
							{	/* SawMill/collapse.scm 7 */
								obj_t BgL_auxz00_2097;

								BgL_auxz00_2097 = STRUCT_KEY(BgL_res3975z00_1725);
								STRUCT_KEY_SET(BgL_aux3976z00_1726, BgL_auxz00_2097);
							}
							{	/* SawMill/collapse.scm 7 */
								obj_t BgL_kz00_1843;

								BgL_kz00_1843 = CNST_TABLE_REF(((long) 0));
								STRUCT_KEY_SET(BgL_res3975z00_1725, BgL_kz00_1843);
							}
							return BgL_res3975z00_1725;
						}
					}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_collapsez00()
	{
		AN_OBJECT;
		{	/* SawMill/collapse.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4172z00zzsaw_collapsez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4172z00zzsaw_collapsez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4172z00zzsaw_collapsez00));
			BGl_modulezd2initializa7ationz75zzsaw_libz00(((long) 123885324),
				BSTRING_TO_STRING(BGl_string4172z00zzsaw_collapsez00));
			return
				BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 192042637),
				BSTRING_TO_STRING(BGl_string4172z00zzsaw_collapsez00));
		}
	}

#ifdef __cplusplus
}
#endif
