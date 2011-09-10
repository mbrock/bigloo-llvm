/*===========================================================================*/
/*   (SawMill/rtl.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/rtl.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_rtl_funz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                 *BgL_rtl_funz00_bglt;

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


	BGL_EXPORTED_DECL obj_t BGl_rtl_dfsz00zzsaw_rtlz00(BgL_blockz00_bglt, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_substzd2appendzd2zzsaw_libz00(obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzsaw_rtlz00();
	static obj_t BGl__neighboursz00zzsaw_rtlz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__rtl_dfsz00zzsaw_rtlz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzsaw_rtlz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_libz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_unlinkz12z12zzsaw_rtlz00(BgL_blockz00_bglt);
	static obj_t BGl_methodzd2initzd2zzsaw_rtlz00();
	extern obj_t BGl_substz00zzsaw_libz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_namez00zzsaw_rtlz00(BgL_rtl_insz00_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_rtlz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzsaw_rtlz00();
	static obj_t BGl__unlinkz12z12zzsaw_rtlz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_rtlz00();
	BGL_EXPORTED_DECL obj_t BGl_neighboursz00zzsaw_rtlz00(BgL_rtl_insz00_bglt);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl__namez00zzsaw_rtlz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_rtlz00();
	static obj_t __cnst[4];


	   
		 
		DEFINE_STRING(BGl_string4102z00zzsaw_rtlz00,
		BgL_bgl_string4102za700za7za7s4107za7, "must have only one successor", 28);
	      DEFINE_STRING(BGl_string4103z00zzsaw_rtlz00,
		BgL_bgl_string4103za700za7za7s4108za7, "saw_rtl", 7);
	      DEFINE_STRING(BGl_string4104z00zzsaw_rtlz00,
		BgL_bgl_string4104za700za7za7s4109za7, "unlink! (to) -> (froms) ", 24);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_neighbourszd2envzd2zzsaw_rtlz00,
		BgL_bgl__neighboursza700za7za74110za7, BGl__neighboursz00zzsaw_rtlz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_namezd2envzd2zzsaw_rtlz00,
		BgL_bgl__nameza700za7za7saw_rt4111za7, BGl__namez00zzsaw_rtlz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_dfszd2envzd2zzsaw_rtlz00,
		BgL_bgl__rtl_dfsza700za7za7saw4112za7, BGl__rtl_dfsz00zzsaw_rtlz00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_unlinkz12zd2envzc0zzsaw_rtlz00,
		BgL_bgl__unlinkza712za712za7za7s4113z00, BGl__unlinkz12z12zzsaw_rtlz00, 0L,
		BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_rtlz00(long
		BgL_checksumz00_1763, char *BgL_fromz00_1764)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_rtlz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_rtlz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzsaw_rtlz00();
					BGl_cnstzd2initzd2zzsaw_rtlz00();
					BGl_importedzd2moduleszd2initz00zzsaw_rtlz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_rtlz00()
	{
		AN_OBJECT;
		{	/* SawMill/rtl.scm 1 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "saw_rtl");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_rtl");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "saw_rtl");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_rtlz00()
	{
		AN_OBJECT;
		{	/* SawMill/rtl.scm 1 */
			{	/* SawMill/rtl.scm 1 */
				obj_t BgL_cportz00_1755;

				BgL_cportz00_1755 =
					bgl_open_input_string(BGl_string4104z00zzsaw_rtlz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1756;

					BgL_iz00_1756 = ((long) 3);
				BgL_loopz00_1757:
					if ((BgL_iz00_1756 == ((long) -1)))
						{	/* SawMill/rtl.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/rtl.scm 1 */
							{	/* SawMill/rtl.scm 1 */
								obj_t BgL_arg4106z00_1759;

								{	/* SawMill/rtl.scm 1 */

									{	/* SawMill/rtl.scm 1 */
										obj_t BgL_locationz00_1761;

										BgL_locationz00_1761 = BBOOL(((bool_t) 0));
										{	/* SawMill/rtl.scm 1 */

											BgL_arg4106z00_1759 =
												BGl_readz00zz__readerz00(BgL_cportz00_1755,
												BgL_locationz00_1761);
										}
									}
								}
								{	/* SawMill/rtl.scm 1 */
									int BgL_auxz00_1780;

									BgL_auxz00_1780 = (int) (BgL_iz00_1756);
									CNST_TABLE_SET(BgL_auxz00_1780, BgL_arg4106z00_1759);
							}}
							{	/* SawMill/rtl.scm 1 */
								int BgL_auxz00_1762;

								BgL_auxz00_1762 = (int) ((BgL_iz00_1756 - ((long) 1)));
								{
									long BgL_iz00_1785;

									BgL_iz00_1785 = (long) (BgL_auxz00_1762);
									BgL_iz00_1756 = BgL_iz00_1785;
									goto BgL_loopz00_1757;
								}
							}
						}
				}
			}
		}
	}



/* name */
	BGL_EXPORTED_DEF obj_t BGl_namez00zzsaw_rtlz00(BgL_rtl_insz00_bglt
		BgL_insz00_1)
	{
		AN_OBJECT;
		{	/* SawMill/rtl.scm 21 */
			{	/* SawMill/rtl.scm 22 */
				obj_t BgL_arg3974z00_1697;

				{	/* SawMill/rtl.scm 22 */
					BgL_rtl_funz00_bglt BgL_arg3975z00_1698;

					BgL_arg3975z00_1698 =
						(((BgL_rtl_insz00_bglt) CREF(BgL_insz00_1))->BgL_funz00);
					{	/* SawMill/rtl.scm 22 */
						BgL_objectz00_bglt BgL_objectz00_1700;

						BgL_objectz00_1700 = (BgL_objectz00_bglt) (BgL_arg3975z00_1698);
						{	/* SawMill/rtl.scm 22 */
							long BgL_arg2646z00_1701;

							{	/* SawMill/rtl.scm 22 */
								long BgL_arg2647z00_1702;

								BgL_arg2647z00_1702 = BGL_OBJECT_CLASS_NUM(BgL_objectz00_1700);
								BgL_arg2646z00_1701 = (BgL_arg2647z00_1702 - OBJECT_TYPE);
							}
							BgL_arg3974z00_1697 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								(int) (BgL_arg2646z00_1701));
				}}}
				return BGl_classzd2namezd2zz__objectz00(BgL_arg3974z00_1697);
			}
		}
	}



/* _name */
	obj_t BGl__namez00zzsaw_rtlz00(obj_t BgL_envz00_1745, obj_t BgL_insz00_1746)
	{
		AN_OBJECT;
		{	/* SawMill/rtl.scm 21 */
			return BGl_namez00zzsaw_rtlz00((BgL_rtl_insz00_bglt) (BgL_insz00_1746));
		}
	}



/* neighbours */
	BGL_EXPORTED_DEF obj_t BGl_neighboursz00zzsaw_rtlz00(BgL_rtl_insz00_bglt
		BgL_insz00_2)
	{
		AN_OBJECT;
		{	/* SawMill/rtl.scm 27 */
			{	/* SawMill/rtl.scm 29 */
				obj_t BgL_arg3976z00_1099;

				obj_t BgL_arg3977z00_1100;

				obj_t BgL_arg3978z00_1101;

				obj_t BgL_arg3979z00_1102;

				obj_t BgL_arg3980z00_1103;

				BgL_arg3976z00_1099 = CNST_TABLE_REF(((long) 0));
				BgL_arg3977z00_1100 = CNST_TABLE_REF(((long) 1));
				{	/* SawMill/rtl.scm 31 */
					obj_t BgL_res4100z00_1720;

					{	/* SawMill/rtl.scm 31 */
						obj_t BgL_arg3974z00_1709;

						{	/* SawMill/rtl.scm 31 */
							BgL_rtl_funz00_bglt BgL_arg3975z00_1710;

							BgL_arg3975z00_1710 =
								(((BgL_rtl_insz00_bglt) CREF(BgL_insz00_2))->BgL_funz00);
							{	/* SawMill/rtl.scm 31 */
								BgL_objectz00_bglt BgL_objectz00_1712;

								BgL_objectz00_1712 = (BgL_objectz00_bglt) (BgL_arg3975z00_1710);
								{	/* SawMill/rtl.scm 31 */
									long BgL_arg2646z00_1713;

									{	/* SawMill/rtl.scm 31 */
										long BgL_arg2647z00_1714;

										BgL_arg2647z00_1714 =
											BGL_OBJECT_CLASS_NUM(BgL_objectz00_1712);
										BgL_arg2646z00_1713 = (BgL_arg2647z00_1714 - OBJECT_TYPE);
									}
									BgL_arg3974z00_1709 =
										VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
										(int) (BgL_arg2646z00_1713));
						}}}
						BgL_res4100z00_1720 =
							BGl_classzd2namezd2zz__objectz00(BgL_arg3974z00_1709);
					}
					BgL_arg3978z00_1101 = BgL_res4100z00_1720;
				}
				BgL_arg3979z00_1102 = CNST_TABLE_REF(((long) 1));
				BgL_arg3980z00_1103 = CNST_TABLE_REF(((long) 2));
				{	/* SawMill/rtl.scm 29 */
					obj_t BgL_list3981z00_1104;

					{	/* SawMill/rtl.scm 29 */
						obj_t BgL_arg3982z00_1105;

						{	/* SawMill/rtl.scm 29 */
							obj_t BgL_arg3983z00_1106;

							{	/* SawMill/rtl.scm 29 */
								obj_t BgL_arg3984z00_1107;

								{	/* SawMill/rtl.scm 29 */
									obj_t BgL_arg3985z00_1108;

									BgL_arg3985z00_1108 = MAKE_PAIR(BgL_arg3980z00_1103, BNIL);
									BgL_arg3984z00_1107 =
										MAKE_PAIR(BgL_arg3979z00_1102, BgL_arg3985z00_1108);
								}
								BgL_arg3983z00_1106 =
									MAKE_PAIR(BgL_arg3978z00_1101, BgL_arg3984z00_1107);
							}
							BgL_arg3982z00_1105 =
								MAKE_PAIR(BgL_arg3977z00_1100, BgL_arg3983z00_1106);
						}
						BgL_list3981z00_1104 =
							MAKE_PAIR(BgL_arg3976z00_1099, BgL_arg3982z00_1105);
					}
					return BgL_list3981z00_1104;
				}
			}
		}
	}



/* _neighbours */
	obj_t BGl__neighboursz00zzsaw_rtlz00(obj_t BgL_envz00_1747,
		obj_t BgL_insz00_1748)
	{
		AN_OBJECT;
		{	/* SawMill/rtl.scm 27 */
			return
				BGl_neighboursz00zzsaw_rtlz00((BgL_rtl_insz00_bglt) (BgL_insz00_1748));
		}
	}



/* unlink! */
	BGL_EXPORTED_DEF obj_t BGl_unlinkz12z12zzsaw_rtlz00(BgL_blockz00_bglt
		BgL_bz00_3)
	{
		AN_OBJECT;
		{	/* SawMill/rtl.scm 39 */
			{	/* SawMill/rtl.scm 41 */
				bool_t BgL_testz00_1814;

				if (NULLP((((BgL_blockz00_bglt) CREF(BgL_bz00_3))->BgL_succsz00)))
					{	/* SawMill/rtl.scm 41 */
						BgL_testz00_1814 = ((bool_t) 1);
					}
				else
					{	/* SawMill/rtl.scm 41 */
						obj_t BgL_auxz00_1818;

						{	/* SawMill/rtl.scm 41 */
							obj_t BgL_pairz00_1726;

							BgL_pairz00_1726 =
								(((BgL_blockz00_bglt) CREF(BgL_bz00_3))->BgL_succsz00);
							BgL_auxz00_1818 = CDR(BgL_pairz00_1726);
						}
						BgL_testz00_1814 = PAIRP(BgL_auxz00_1818);
					}
				if (BgL_testz00_1814)
					{	/* SawMill/rtl.scm 41 */
						BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 3)),
							BGl_string4102z00zzsaw_rtlz00, (obj_t) (BgL_bz00_3));
					}
				else
					{	/* SawMill/rtl.scm 41 */
						BFALSE;
					}
			}
			{	/* SawMill/rtl.scm 43 */
				obj_t BgL_sz00_1115;

				{	/* SawMill/rtl.scm 43 */
					obj_t BgL_pairz00_1729;

					BgL_pairz00_1729 =
						(((BgL_blockz00_bglt) CREF(BgL_bz00_3))->BgL_succsz00);
					BgL_sz00_1115 = CAR(BgL_pairz00_1729);
				}
				{	/* SawMill/rtl.scm 44 */
					obj_t BgL_g3970z00_1116;

					BgL_g3970z00_1116 =
						(((BgL_blockz00_bglt) CREF(BgL_bz00_3))->BgL_predsz00);
					{
						obj_t BgL_l3968z00_1118;

						BgL_l3968z00_1118 = BgL_g3970z00_1116;
					BgL_zc3anonymousza33991ze3z83_1119:
						if (PAIRP(BgL_l3968z00_1118))
							{	/* SawMill/rtl.scm 44 */
								{	/* SawMill/rtl.scm 44 */
									obj_t BgL_pz00_1121;

									BgL_pz00_1121 = CAR(BgL_l3968z00_1118);
									{	/* SawMill/rtl.scm 45 */
										obj_t BgL_arg3993z00_1123;

										{	/* SawMill/rtl.scm 45 */
											obj_t BgL_arg3994z00_1124;

											{
												BgL_blockz00_bglt BgL_auxz00_1831;

												BgL_auxz00_1831 = (BgL_blockz00_bglt) (BgL_pz00_1121);
												BgL_arg3994z00_1124 =
													(((BgL_blockz00_bglt) CREF(BgL_auxz00_1831))->
													BgL_succsz00);
											}
											BgL_arg3993z00_1123 =
												BGl_substz00zzsaw_libz00(BgL_arg3994z00_1124,
												(obj_t) (BgL_bz00_3), BgL_sz00_1115);
										}
										{
											BgL_blockz00_bglt BgL_auxz00_1836;

											BgL_auxz00_1836 = (BgL_blockz00_bglt) (BgL_pz00_1121);
											((((BgL_blockz00_bglt) CREF(BgL_auxz00_1836))->
													BgL_succsz00) =
												((obj_t) BgL_arg3993z00_1123), BUNSPEC);
										}
									}
								}
								{
									obj_t BgL_l3968z00_1839;

									BgL_l3968z00_1839 = CDR(BgL_l3968z00_1118);
									BgL_l3968z00_1118 = BgL_l3968z00_1839;
									goto BgL_zc3anonymousza33991ze3z83_1119;
								}
							}
						else
							{	/* SawMill/rtl.scm 44 */
								((bool_t) 1);
							}
					}
				}
				{	/* SawMill/rtl.scm 47 */
					obj_t BgL_arg3996z00_1127;

					{	/* SawMill/rtl.scm 47 */
						obj_t BgL_arg3997z00_1128;

						obj_t BgL_arg3998z00_1129;

						{
							BgL_blockz00_bglt BgL_auxz00_1841;

							BgL_auxz00_1841 = (BgL_blockz00_bglt) (BgL_sz00_1115);
							BgL_arg3997z00_1128 =
								(((BgL_blockz00_bglt) CREF(BgL_auxz00_1841))->BgL_predsz00);
						}
						BgL_arg3998z00_1129 =
							(((BgL_blockz00_bglt) CREF(BgL_bz00_3))->BgL_predsz00);
						BgL_arg3996z00_1127 =
							BGl_substzd2appendzd2zzsaw_libz00(BgL_arg3997z00_1128,
							(obj_t) (BgL_bz00_3), BgL_arg3998z00_1129);
					}
					{
						BgL_blockz00_bglt BgL_auxz00_1847;

						BgL_auxz00_1847 = (BgL_blockz00_bglt) (BgL_sz00_1115);
						return
							((((BgL_blockz00_bglt) CREF(BgL_auxz00_1847))->BgL_predsz00) =
							((obj_t) BgL_arg3996z00_1127), BUNSPEC);
					}
				}
			}
		}
	}



/* _unlink! */
	obj_t BGl__unlinkz12z12zzsaw_rtlz00(obj_t BgL_envz00_1749,
		obj_t BgL_bz00_1750)
	{
		AN_OBJECT;
		{	/* SawMill/rtl.scm 39 */
			return BGl_unlinkz12z12zzsaw_rtlz00((BgL_blockz00_bglt) (BgL_bz00_1750));
		}
	}



/* rtl_dfs */
	BGL_EXPORTED_DEF obj_t BGl_rtl_dfsz00zzsaw_rtlz00(BgL_blockz00_bglt
		BgL_bz00_5, obj_t BgL_visitz00_6, obj_t BgL_visitzf3zf3_7)
	{
		AN_OBJECT;
		{	/* SawMill/rtl.scm 89 */
			PROCEDURE_ENTRY(BgL_visitz00_6) (BgL_visitz00_6,
				(obj_t) (BgL_bz00_5), BEOA);
			{	/* SawMill/rtl.scm 91 */
				obj_t BgL_g3973z00_1136;

				BgL_g3973z00_1136 =
					(((BgL_blockz00_bglt) CREF(BgL_bz00_5))->BgL_succsz00);
				{
					obj_t BgL_l3971z00_1138;

					{	/* SawMill/rtl.scm 93 */
						bool_t BgL_auxz00_1856;

						BgL_l3971z00_1138 = BgL_g3973z00_1136;
					BgL_zc3anonymousza34004ze3z83_1139:
						if (PAIRP(BgL_l3971z00_1138))
							{	/* SawMill/rtl.scm 93 */
								{	/* SawMill/rtl.scm 92 */
									obj_t BgL_succz00_1141;

									BgL_succz00_1141 = CAR(BgL_l3971z00_1138);
									if (CBOOL(PROCEDURE_ENTRY(BgL_visitzf3zf3_7)
											(BgL_visitzf3zf3_7, BgL_succz00_1141, BEOA)))
										{	/* SawMill/rtl.scm 92 */
											BFALSE;
										}
									else
										{	/* SawMill/rtl.scm 92 */
											BGl_rtl_dfsz00zzsaw_rtlz00(
												(BgL_blockz00_bglt) (BgL_succz00_1141), BgL_visitz00_6,
												BgL_visitzf3zf3_7);
										}
								}
								{
									obj_t BgL_l3971z00_1866;

									BgL_l3971z00_1866 = CDR(BgL_l3971z00_1138);
									BgL_l3971z00_1138 = BgL_l3971z00_1866;
									goto BgL_zc3anonymousza34004ze3z83_1139;
								}
							}
						else
							{	/* SawMill/rtl.scm 93 */
								BgL_auxz00_1856 = ((bool_t) 1);
							}
						return BBOOL(BgL_auxz00_1856);
					}
				}
			}
		}
	}



/* _rtl_dfs */
	obj_t BGl__rtl_dfsz00zzsaw_rtlz00(obj_t BgL_envz00_1751, obj_t BgL_bz00_1752,
		obj_t BgL_visitz00_1753, obj_t BgL_visitzf3zf3_1754)
	{
		AN_OBJECT;
		{	/* SawMill/rtl.scm 89 */
			return
				BGl_rtl_dfsz00zzsaw_rtlz00(
				(BgL_blockz00_bglt) (BgL_bz00_1752), BgL_visitz00_1753,
				BgL_visitzf3zf3_1754);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_rtlz00()
	{
		AN_OBJECT;
		{	/* SawMill/rtl.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_rtlz00()
	{
		AN_OBJECT;
		{	/* SawMill/rtl.scm 1 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_rtlz00()
	{
		AN_OBJECT;
		{	/* SawMill/rtl.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4103z00zzsaw_rtlz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4103z00zzsaw_rtlz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4103z00zzsaw_rtlz00));
			BGl_modulezd2initializa7ationz75zzsaw_libz00(((long) 123885324),
				BSTRING_TO_STRING(BGl_string4103z00zzsaw_rtlz00));
			return
				BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 192042637),
				BSTRING_TO_STRING(BGl_string4103z00zzsaw_rtlz00));
		}
	}

#ifdef __cplusplus
}
#endif
