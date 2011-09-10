/*===========================================================================*/
/*   (SawMill/gotos.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/gotos.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_typez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		obj_t BgL_siza7eza7;
		obj_t BgL_classz00;
		obj_t BgL_coercezd2tozd2;
		obj_t BgL_parentsz00;
		bool_t BgL_initzf3zf3;
		bool_t BgL_magiczf3zf3;
		obj_t BgL_z42z42;
		obj_t BgL_aliasz00;
		obj_t BgL_pointedzd2tozd2byz00;
		obj_t BgL_tvectorz00;
		obj_t BgL_locationz00;
		obj_t BgL_importzd2locationzd2;
		int BgL_occurrencez00;
	}              *BgL_typez00_bglt;

	typedef struct BgL_rtl_funz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                 *BgL_rtl_funz00_bglt;

	typedef struct BgL_rtl_ifz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                *BgL_rtl_ifz00_bglt;

	typedef struct BgL_rtl_selectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_patternsz00;
	}                    *BgL_rtl_selectz00_bglt;

	typedef struct BgL_rtl_switchz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_patternsz00;
		obj_t BgL_labelsz00;
	}                    *BgL_rtl_switchz00_bglt;

	typedef struct BgL_rtl_ifeqz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_blockz00_bgl *BgL_thenz00;
	}                  *BgL_rtl_ifeqz00_bglt;

	typedef struct BgL_rtl_ifnez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_blockz00_bgl *BgL_thenz00;
	}                  *BgL_rtl_ifnez00_bglt;

	typedef struct BgL_rtl_goz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_blockz00_bgl *BgL_toz00;
	}                *BgL_rtl_goz00_bglt;

	typedef struct BgL_rtl_insz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_z52spillz52;
		obj_t BgL_destz00;
		struct BgL_rtl_funz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
	}                 *BgL_rtl_insz00_bglt;

	typedef struct BgL_blockz00_bgl
	{
		header_t header;
		obj_t widening;
		int BgL_labelz00;
		obj_t BgL_predsz00;
		obj_t BgL_succsz00;
		obj_t BgL_firstz00;
	}               *BgL_blockz00_bglt;


	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern BgL_rtl_insz00_bglt BGl_makezd2rtl_inszd2zzsaw_defsz00(obj_t, obj_t,
		obj_t, BgL_rtl_funz00_bglt, obj_t);
	static obj_t BGl_cnstzd2initzd2zzsaw_gotosz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_ifz00zzsaw_defsz00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzsaw_gotosz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl__ifz00zzsaw_gotosz00(BgL_rtl_ifz00_bglt, BgL_rtl_insz00_bglt,
		obj_t, obj_t);
	static obj_t BGl_addzd2gotozd2zzsaw_gotosz00(BgL_blockz00_bglt, obj_t);
	extern obj_t BGl_rtl_selectz00zzsaw_defsz00;
	extern BgL_rtl_goz00_bglt BGl_makezd2rtl_gozd2zzsaw_defsz00(obj_t,
		BgL_blockz00_bglt);
	static obj_t BGl_methodzd2initzd2zzsaw_gotosz00();
	static obj_t BGl_makezd2gotozd2zzsaw_gotosz00(BgL_blockz00_bglt, obj_t,
		obj_t);
	extern BgL_rtl_switchz00_bglt BGl_makezd2rtl_switchzd2zzsaw_defsz00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_gotosz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzsaw_gotosz00();
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_gotosz00();
	extern BgL_rtl_ifeqz00_bglt BGl_makezd2rtl_ifeqzd2zzsaw_defsz00(obj_t,
		BgL_blockz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_addzd2gotoszd2zzsaw_gotosz00(obj_t);
	extern BgL_rtl_ifnez00_bglt BGl_makezd2rtl_ifnezd2zzsaw_defsz00(obj_t,
		BgL_blockz00_bglt);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static BgL_rtl_insz00_bglt BGl__gotoz00zzsaw_gotosz00(BgL_blockz00_bglt);
	static obj_t BGl__addzd2gotoszd2zzsaw_gotosz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_gotosz00();
	static obj_t __cnst[1];


	   
		 
		DEFINE_STRING(BGl_string4105z00zzsaw_gotosz00,
		BgL_bgl_string4105za700za7za7s4110za7, "CARE", 4);
	      DEFINE_STRING(BGl_string4106z00zzsaw_gotosz00,
		BgL_bgl_string4106za700za7za7s4111za7, "saw_gotos", 9);
	      DEFINE_STRING(BGl_string4107z00zzsaw_gotosz00,
		BgL_bgl_string4107za700za7za7s4112za7, "add-goto ", 9);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_addzd2gotoszd2envz00zzsaw_gotosz00,
		BgL_bgl__addza7d2gotosza7d2za74113za7, BGl__addzd2gotoszd2zzsaw_gotosz00,
		0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_gotosz00(long
		BgL_checksumz00_1802, char *BgL_fromz00_1803)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_gotosz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_gotosz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzsaw_gotosz00();
					BGl_cnstzd2initzd2zzsaw_gotosz00();
					BGl_importedzd2moduleszd2initz00zzsaw_gotosz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_gotosz00()
	{
		AN_OBJECT;
		{	/* SawMill/gotos.scm 1 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_gotos");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "saw_gotos");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "saw_gotos");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_gotos");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_gotosz00()
	{
		AN_OBJECT;
		{	/* SawMill/gotos.scm 1 */
			{	/* SawMill/gotos.scm 1 */
				obj_t BgL_cportz00_1794;

				BgL_cportz00_1794 =
					bgl_open_input_string(BGl_string4107z00zzsaw_gotosz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1795;

					BgL_iz00_1795 = ((long) 0);
				BgL_loopz00_1796:
					if ((BgL_iz00_1795 == ((long) -1)))
						{	/* SawMill/gotos.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/gotos.scm 1 */
							{	/* SawMill/gotos.scm 1 */
								obj_t BgL_arg4109z00_1798;

								{	/* SawMill/gotos.scm 1 */

									{	/* SawMill/gotos.scm 1 */
										obj_t BgL_locationz00_1800;

										BgL_locationz00_1800 = BBOOL(((bool_t) 0));
										{	/* SawMill/gotos.scm 1 */

											BgL_arg4109z00_1798 =
												BGl_readz00zz__readerz00(BgL_cportz00_1794,
												BgL_locationz00_1800);
										}
									}
								}
								{	/* SawMill/gotos.scm 1 */
									int BgL_auxz00_1820;

									BgL_auxz00_1820 = (int) (BgL_iz00_1795);
									CNST_TABLE_SET(BgL_auxz00_1820, BgL_arg4109z00_1798);
							}}
							{	/* SawMill/gotos.scm 1 */
								int BgL_auxz00_1801;

								BgL_auxz00_1801 = (int) ((BgL_iz00_1795 - ((long) 1)));
								{
									long BgL_iz00_1825;

									BgL_iz00_1825 = (long) (BgL_auxz00_1801);
									BgL_iz00_1795 = BgL_iz00_1825;
									goto BgL_loopz00_1796;
								}
							}
						}
				}
			}
		}
	}



/* add-gotos */
	BGL_EXPORTED_DEF obj_t BGl_addzd2gotoszd2zzsaw_gotosz00(obj_t BgL_lz00_1)
	{
		AN_OBJECT;
		{	/* SawMill/gotos.scm 9 */
			{
				obj_t BgL_lz00_1108;

				BgL_lz00_1108 = BgL_lz00_1;
			BgL_zc3anonymousza33970ze3z83_1109:
				if (PAIRP(BgL_lz00_1108))
					{	/* SawMill/gotos.scm 12 */
						obj_t BgL_rz00_1111;

						BgL_rz00_1111 = CDR(BgL_lz00_1108);
						{	/* SawMill/gotos.scm 13 */
							obj_t BgL_arg3972z00_1112;

							BgL_arg3972z00_1112 = CAR(BgL_lz00_1108);
							BGl_addzd2gotozd2zzsaw_gotosz00(
								(BgL_blockz00_bglt) (BgL_arg3972z00_1112), BgL_rz00_1111);
						}
						{
							obj_t BgL_lz00_1833;

							BgL_lz00_1833 = BgL_rz00_1111;
							BgL_lz00_1108 = BgL_lz00_1833;
							goto BgL_zc3anonymousza33970ze3z83_1109;
						}
					}
				else
					{	/* SawMill/gotos.scm 11 */
						return BUNSPEC;
					}
			}
		}
	}



/* _add-gotos */
	obj_t BGl__addzd2gotoszd2zzsaw_gotosz00(obj_t BgL_envz00_1792,
		obj_t BgL_lz00_1793)
	{
		AN_OBJECT;
		{	/* SawMill/gotos.scm 9 */
			return BGl_addzd2gotoszd2zzsaw_gotosz00(BgL_lz00_1793);
		}
	}



/* add-goto */
	obj_t BGl_addzd2gotozd2zzsaw_gotosz00(BgL_blockz00_bglt BgL_bz00_2,
		obj_t BgL_lz00_3)
	{
		AN_OBJECT;
		{	/* SawMill/gotos.scm 20 */
			{	/* SawMill/gotos.scm 21 */
				obj_t BgL_lastz00_1114;

				BgL_lastz00_1114 =
					BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
					(((BgL_blockz00_bglt) CREF(BgL_bz00_2))->BgL_firstz00));
				{	/* SawMill/gotos.scm 22 */
					obj_t BgL_addedz00_1115;

					BgL_addedz00_1115 =
						BGl_makezd2gotozd2zzsaw_gotosz00(BgL_bz00_2,
						CAR(BgL_lastz00_1114), BgL_lz00_3);
					if (NULLP(BgL_addedz00_1115))
						{	/* SawMill/gotos.scm 23 */
							return BFALSE;
						}
					else
						{	/* SawMill/gotos.scm 23 */
							return SET_CDR(BgL_lastz00_1114, BgL_addedz00_1115);
						}
				}
			}
		}
	}



/* make-goto */
	obj_t BGl_makezd2gotozd2zzsaw_gotosz00(BgL_blockz00_bglt BgL_bz00_4,
		obj_t BgL_insz00_5, obj_t BgL_lz00_6)
	{
		AN_OBJECT;
		{	/* SawMill/gotos.scm 29 */
			if (NULLP((((BgL_blockz00_bglt) CREF(BgL_bz00_4))->BgL_succsz00)))
				{	/* SawMill/gotos.scm 31 */
					return BNIL;
				}
			else
				{	/* SawMill/gotos.scm 33 */
					bool_t BgL_testz00_1845;

					{	/* SawMill/gotos.scm 33 */
						obj_t BgL_auxz00_1846;

						{	/* SawMill/gotos.scm 33 */
							obj_t BgL_pairz00_1725;

							BgL_pairz00_1725 =
								(((BgL_blockz00_bglt) CREF(BgL_bz00_4))->BgL_succsz00);
							BgL_auxz00_1846 = CDR(BgL_pairz00_1725);
						}
						BgL_testz00_1845 = NULLP(BgL_auxz00_1846);
					}
					if (BgL_testz00_1845)
						{	/* SawMill/gotos.scm 34 */
							obj_t BgL_sz00_1122;

							{	/* SawMill/gotos.scm 34 */
								obj_t BgL_pairz00_1728;

								BgL_pairz00_1728 =
									(((BgL_blockz00_bglt) CREF(BgL_bz00_4))->BgL_succsz00);
								BgL_sz00_1122 = CAR(BgL_pairz00_1728);
							}
							{	/* SawMill/gotos.scm 35 */
								bool_t BgL_testz00_1852;

								if (NULLP(BgL_lz00_6))
									{	/* SawMill/gotos.scm 35 */
										BgL_testz00_1852 = ((bool_t) 1);
									}
								else
									{	/* SawMill/gotos.scm 35 */
										if ((CAR(BgL_lz00_6) == BgL_sz00_1122))
											{	/* SawMill/gotos.scm 35 */
												BgL_testz00_1852 = ((bool_t) 0);
											}
										else
											{	/* SawMill/gotos.scm 35 */
												BgL_testz00_1852 = ((bool_t) 1);
											}
									}
								if (BgL_testz00_1852)
									{	/* SawMill/gotos.scm 36 */
										BgL_rtl_insz00_bglt BgL_arg3979z00_1124;

										BgL_arg3979z00_1124 =
											BGl__gotoz00zzsaw_gotosz00(
											(BgL_blockz00_bglt) (BgL_sz00_1122));
										return MAKE_PAIR((obj_t) (BgL_arg3979z00_1124), BNIL);
									}
								else
									{	/* SawMill/gotos.scm 35 */
										return BNIL;
									}
							}
						}
					else
						{	/* SawMill/gotos.scm 41 */
							bool_t BgL_testz00_1862;

							{	/* SawMill/gotos.scm 41 */
								BgL_rtl_funz00_bglt BgL_arg3992z00_1138;

								{
									BgL_rtl_insz00_bglt BgL_auxz00_1863;

									BgL_auxz00_1863 = (BgL_rtl_insz00_bglt) (BgL_insz00_5);
									BgL_arg3992z00_1138 =
										(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_1863))->BgL_funz00);
								}
								{	/* SawMill/gotos.scm 41 */
									obj_t BgL_obj3375z00_1732;

									BgL_obj3375z00_1732 = (obj_t) (BgL_arg3992z00_1138);
									BgL_testz00_1862 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj3375z00_1732,
										BGl_rtl_selectz00zzsaw_defsz00);
								}
							}
							if (BgL_testz00_1862)
								{	/* SawMill/gotos.scm 41 */
									{	/* SawMill/gotos.scm 42 */
										BgL_rtl_funz00_bglt BgL_arg3986z00_1132;

										obj_t BgL_arg3987z00_1133;

										{
											BgL_rtl_insz00_bglt BgL_auxz00_1868;

											BgL_auxz00_1868 = (BgL_rtl_insz00_bglt) (BgL_insz00_5);
											BgL_arg3986z00_1132 =
												(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_1868))->
												BgL_funz00);
										}
										BgL_arg3987z00_1133 =
											(((BgL_blockz00_bglt) CREF(BgL_bz00_4))->BgL_succsz00);
										{	/* SawMill/gotos.scm 42 */
											BgL_rtl_selectz00_bglt BgL_funz00_1735;

											BgL_rtl_insz00_bglt BgL_insz00_1736;

											BgL_funz00_1735 =
												(BgL_rtl_selectz00_bglt) (BgL_arg3986z00_1132);
											BgL_insz00_1736 = (BgL_rtl_insz00_bglt) (BgL_insz00_5);
											{	/* SawMill/gotos.scm 42 */
												BgL_rtl_switchz00_bglt BgL_arg3999z00_1739;

												{	/* SawMill/gotos.scm 42 */
													BgL_typez00_bglt BgL_arg4000z00_1740;

													obj_t BgL_arg4001z00_1741;

													BgL_arg4000z00_1740 =
														(((BgL_rtl_selectz00_bglt) CREF(BgL_funz00_1735))->
														BgL_typez00);
													BgL_arg4001z00_1741 =
														(((BgL_rtl_selectz00_bglt) CREF(BgL_funz00_1735))->
														BgL_patternsz00);
													BgL_arg3999z00_1739 =
														BGl_makezd2rtl_switchzd2zzsaw_defsz00(BFALSE,
														BgL_arg4000z00_1740, BgL_arg4001z00_1741,
														BgL_arg3987z00_1133);
												}
												{
													BgL_rtl_funz00_bglt BgL_auxz00_1877;

													BgL_auxz00_1877 =
														(BgL_rtl_funz00_bglt) (BgL_arg3999z00_1739);
													((((BgL_rtl_insz00_bglt) CREF(BgL_insz00_1736))->
															BgL_funz00) =
														((BgL_rtl_funz00_bglt) BgL_auxz00_1877), BUNSPEC);
												}
											}
										}
									}
									return BNIL;
								}
							else
								{	/* SawMill/gotos.scm 44 */
									bool_t BgL_testz00_1880;

									{	/* SawMill/gotos.scm 44 */
										BgL_rtl_funz00_bglt BgL_arg3991z00_1137;

										{
											BgL_rtl_insz00_bglt BgL_auxz00_1881;

											BgL_auxz00_1881 = (BgL_rtl_insz00_bglt) (BgL_insz00_5);
											BgL_arg3991z00_1137 =
												(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_1881))->
												BgL_funz00);
										}
										{	/* SawMill/gotos.scm 44 */
											obj_t BgL_obj3352z00_1747;

											BgL_obj3352z00_1747 = (obj_t) (BgL_arg3991z00_1137);
											BgL_testz00_1880 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj3352z00_1747,
												BGl_rtl_ifz00zzsaw_defsz00);
										}
									}
									if (BgL_testz00_1880)
										{	/* SawMill/gotos.scm 45 */
											BgL_rtl_funz00_bglt BgL_arg3989z00_1135;

											obj_t BgL_arg3990z00_1136;

											{
												BgL_rtl_insz00_bglt BgL_auxz00_1886;

												BgL_auxz00_1886 = (BgL_rtl_insz00_bglt) (BgL_insz00_5);
												BgL_arg3989z00_1135 =
													(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_1886))->
													BgL_funz00);
											}
											BgL_arg3990z00_1136 =
												(((BgL_blockz00_bglt) CREF(BgL_bz00_4))->BgL_succsz00);
											return
												BGl__ifz00zzsaw_gotosz00(
												(BgL_rtl_ifz00_bglt) (BgL_arg3989z00_1135),
												(BgL_rtl_insz00_bglt) (BgL_insz00_5),
												BgL_arg3990z00_1136, BgL_lz00_6);
										}
									else
										{	/* SawMill/gotos.scm 44 */
											return
												BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
												BGl_string4105z00zzsaw_gotosz00, BgL_insz00_5);
		}}}}}
	}



/* _goto */
	BgL_rtl_insz00_bglt BGl__gotoz00zzsaw_gotosz00(BgL_blockz00_bglt BgL_bz00_7)
	{
		AN_OBJECT;
		{	/* SawMill/gotos.scm 49 */
			{	/* SawMill/defs.scm 69 */
				BgL_rtl_goz00_bglt BgL_arg3997z00_1143;

				BgL_arg3997z00_1143 =
					BGl_makezd2rtl_gozd2zzsaw_defsz00(BFALSE, BgL_bz00_7);
				return
					BGl_makezd2rtl_inszd2zzsaw_defsz00(BFALSE, BNIL, BFALSE,
					(BgL_rtl_funz00_bglt) (BgL_arg3997z00_1143), BNIL);
			}
		}
	}



/* _if */
	obj_t BGl__ifz00zzsaw_gotosz00(BgL_rtl_ifz00_bglt BgL_funz00_11,
		BgL_rtl_insz00_bglt BgL_insz00_12, obj_t BgL_succsz00_13,
		obj_t BgL_nextsz00_14)
	{
		AN_OBJECT;
		{	/* SawMill/gotos.scm 64 */
			{	/* SawMill/gotos.scm 65 */
				obj_t BgL_thenz00_1149;

				obj_t BgL_elsez00_1150;

				BgL_thenz00_1149 = CAR(BgL_succsz00_13);
				{	/* SawMill/gotos.scm 65 */
					obj_t BgL_pairz00_1759;

					BgL_pairz00_1759 = BgL_succsz00_13;
					BgL_elsez00_1150 = CAR(CDR(BgL_pairz00_1759));
				}
				if (NULLP(BgL_nextsz00_14))
					{	/* SawMill/gotos.scm 66 */
						{	/* SawMill/gotos.scm 67 */
							BgL_blockz00_bglt BgL_thenz00_1765;

							BgL_thenz00_1765 = (BgL_blockz00_bglt) (BgL_elsez00_1150);
							{	/* SawMill/gotos.scm 67 */
								BgL_rtl_ifeqz00_bglt BgL_arg4011z00_1766;

								BgL_arg4011z00_1766 =
									BGl_makezd2rtl_ifeqzd2zzsaw_defsz00(BFALSE, BgL_thenz00_1765);
								{
									BgL_rtl_funz00_bglt BgL_auxz00_1905;

									BgL_auxz00_1905 = (BgL_rtl_funz00_bglt) (BgL_arg4011z00_1766);
									((((BgL_rtl_insz00_bglt) CREF(BgL_insz00_12))->BgL_funz00) =
										((BgL_rtl_funz00_bglt) BgL_auxz00_1905), BUNSPEC);
								}
							}
						}
						{	/* SawMill/gotos.scm 68 */
							BgL_rtl_insz00_bglt BgL_arg4003z00_1152;

							BgL_arg4003z00_1152 =
								BGl__gotoz00zzsaw_gotosz00(
								(BgL_blockz00_bglt) (BgL_thenz00_1149));
							return MAKE_PAIR((obj_t) (BgL_arg4003z00_1152), BNIL);
						}
					}
				else
					{	/* SawMill/gotos.scm 66 */
						if ((BgL_thenz00_1149 == CAR(BgL_nextsz00_14)))
							{	/* SawMill/gotos.scm 69 */
								{	/* SawMill/gotos.scm 70 */
									BgL_blockz00_bglt BgL_thenz00_1771;

									BgL_thenz00_1771 = (BgL_blockz00_bglt) (BgL_elsez00_1150);
									{	/* SawMill/gotos.scm 70 */
										BgL_rtl_ifeqz00_bglt BgL_arg4011z00_1772;

										BgL_arg4011z00_1772 =
											BGl_makezd2rtl_ifeqzd2zzsaw_defsz00(BFALSE,
											BgL_thenz00_1771);
										{
											BgL_rtl_funz00_bglt BgL_auxz00_1917;

											BgL_auxz00_1917 =
												(BgL_rtl_funz00_bglt) (BgL_arg4011z00_1772);
											((((BgL_rtl_insz00_bglt) CREF(BgL_insz00_12))->
													BgL_funz00) =
												((BgL_rtl_funz00_bglt) BgL_auxz00_1917), BUNSPEC);
										}
									}
								}
								return BNIL;
							}
						else
							{	/* SawMill/gotos.scm 69 */
								if ((BgL_elsez00_1150 == CAR(BgL_nextsz00_14)))
									{	/* SawMill/gotos.scm 72 */
										{	/* SawMill/gotos.scm 73 */
											BgL_blockz00_bglt BgL_thenz00_1777;

											BgL_thenz00_1777 = (BgL_blockz00_bglt) (BgL_thenz00_1149);
											{	/* SawMill/gotos.scm 73 */
												BgL_rtl_ifnez00_bglt BgL_arg4012z00_1778;

												BgL_arg4012z00_1778 =
													BGl_makezd2rtl_ifnezd2zzsaw_defsz00(BFALSE,
													BgL_thenz00_1777);
												{
													BgL_rtl_funz00_bglt BgL_auxz00_1925;

													BgL_auxz00_1925 =
														(BgL_rtl_funz00_bglt) (BgL_arg4012z00_1778);
													((((BgL_rtl_insz00_bglt) CREF(BgL_insz00_12))->
															BgL_funz00) =
														((BgL_rtl_funz00_bglt) BgL_auxz00_1925), BUNSPEC);
												}
											}
										}
										return BNIL;
									}
								else
									{	/* SawMill/gotos.scm 72 */
										{	/* SawMill/gotos.scm 76 */
											BgL_blockz00_bglt BgL_thenz00_1782;

											BgL_thenz00_1782 = (BgL_blockz00_bglt) (BgL_elsez00_1150);
											{	/* SawMill/gotos.scm 76 */
												BgL_rtl_ifeqz00_bglt BgL_arg4011z00_1783;

												BgL_arg4011z00_1783 =
													BGl_makezd2rtl_ifeqzd2zzsaw_defsz00(BFALSE,
													BgL_thenz00_1782);
												{
													BgL_rtl_funz00_bglt BgL_auxz00_1930;

													BgL_auxz00_1930 =
														(BgL_rtl_funz00_bglt) (BgL_arg4011z00_1783);
													((((BgL_rtl_insz00_bglt) CREF(BgL_insz00_12))->
															BgL_funz00) =
														((BgL_rtl_funz00_bglt) BgL_auxz00_1930), BUNSPEC);
												}
											}
										}
										{	/* SawMill/gotos.scm 77 */
											BgL_rtl_insz00_bglt BgL_arg4007z00_1156;

											BgL_arg4007z00_1156 =
												BGl__gotoz00zzsaw_gotosz00(
												(BgL_blockz00_bglt) (BgL_thenz00_1149));
											return MAKE_PAIR((obj_t) (BgL_arg4007z00_1156), BNIL);
										}
									}
							}
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_gotosz00()
	{
		AN_OBJECT;
		{	/* SawMill/gotos.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_gotosz00()
	{
		AN_OBJECT;
		{	/* SawMill/gotos.scm 1 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_gotosz00()
	{
		AN_OBJECT;
		{	/* SawMill/gotos.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4106z00zzsaw_gotosz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4106z00zzsaw_gotosz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4106z00zzsaw_gotosz00));
			return
				BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 192042637),
				BSTRING_TO_STRING(BGl_string4106z00zzsaw_gotosz00));
		}
	}

#ifdef __cplusplus
}
#endif
