/*===========================================================================*/
/*   (SawMill/InlineReturn.scm)                                              */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/InlineReturn.scm)*/
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

	typedef struct BgL_rtl_regz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_varz00;
		obj_t BgL_onexprzf3zf3;
		obj_t BgL_namez00;
		obj_t BgL_keyz00;
		obj_t BgL_hardwarez00;
	}                 *BgL_rtl_regz00_bglt;

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

	typedef struct BgL_dfsz00_bgl
	{
		char dummy;
	}             *BgL_dfsz00_bglt;


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	extern BgL_rtl_insz00_bglt BGl_makezd2rtl_inszd2zzsaw_defsz00(obj_t, obj_t,
		obj_t, BgL_rtl_funz00_bglt, obj_t);
	static obj_t BGl_cnstzd2initzd2zzsaw_inline_returnz00();
	static bool_t BGl_dfsz72z72zzsaw_inline_returnz00(obj_t, obj_t);
	static obj_t
		BGl_structzb2objectzd2ze3objec4021z83zzsaw_inline_returnz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_reallocz00zzsaw_inline_returnz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_inline_returnz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_libz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzsaw_inline_returnz00();
	extern obj_t BGl_blockz00zzsaw_defsz00;
	BGL_EXPORTED_DECL obj_t
		BGl_inlinezd2returnszd2zzsaw_inline_returnz00(BgL_blockz00_bglt);
	extern obj_t BGl_rtl_movz00zzsaw_defsz00;
	static BgL_dfsz00_bglt BGl_wideningzd2dfszd2zzsaw_inline_returnz00();
	extern BgL_rtl_regz00_bglt
		BGl_makezd2rtl_regzd2zzsaw_defsz00(BgL_typez00_bglt, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	static BgL_rtl_insz00_bglt BGl_renamezd2inszd2zzsaw_inline_returnz00(obj_t,
		obj_t);
	static obj_t BGl_dfsz00zzsaw_inline_returnz00 = BUNSPEC;
	static obj_t BGl_z52thezd2dfszd2nilz52zzsaw_inline_returnz00 = BUNSPEC;
	static BgL_dfsz00_bglt BGl_dfszd2nilzd2zzsaw_inline_returnz00();
	static obj_t BGl_methodzd2initzd2zzsaw_inline_returnz00();
	static obj_t BGl_findzd2returnszd2zzsaw_inline_returnz00(BgL_blockz00_bglt);
	static bool_t BGl_simplezd2returnzf3z21zzsaw_inline_returnz00(obj_t, long);
	static obj_t BGl__dfszf3zf3zzsaw_inline_returnz00(obj_t, obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_inline_returnz00 =
		BUNSPEC;
	static BgL_rtl_regz00_bglt BGl_copyzd2regzd2zzsaw_inline_returnz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzsaw_inline_returnz00();
	static bool_t BGl_inlinezd2returnzd2zzsaw_inline_returnz00(BgL_blockz00_bglt);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_inline_returnz00();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	static obj_t BGl__z52allocatezd2dfsz80zzsaw_inline_returnz00(obj_t);
	static obj_t BGl__dfszd2nilzd2zzsaw_inline_returnz00(obj_t);
	extern obj_t BGl_rtl_lastz00zzsaw_defsz00;
	static obj_t BGl__inlinezd2returnszd2zzsaw_inline_returnz00(obj_t, obj_t);
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static long BGl_za2inlinezd2depthza2zd2zzsaw_inline_returnz00;
	static obj_t BGl_objectzd2initzd2zzsaw_inline_returnz00();
	static obj_t BGl_objectzd2ze3structzd2dfs4019ze3zzsaw_inline_returnz00(obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_inline_returnz00();
	BGL_IMPORT obj_t bgl_remq_bang(obj_t, obj_t);
	static obj_t __cnst[1];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4202z00zzsaw_inline_returnz00,
		BgL_bgl_objectza7d2za7e3stru4211z00,
		BGl_objectzd2ze3structzd2dfs4019ze3zzsaw_inline_returnz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4204z00zzsaw_inline_returnz00,
		BgL_bgl_structza7b2objectza74212z00,
		BGl_structzb2objectzd2ze3objec4021z83zzsaw_inline_returnz00, 0L, BUNSPEC,
		2);
	      DEFINE_STRING(BGl_string4203z00zzsaw_inline_returnz00,
		BgL_bgl_string4203za700za7za7s4213za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string4205z00zzsaw_inline_returnz00,
		BgL_bgl_string4205za700za7za7s4214za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string4206z00zzsaw_inline_returnz00,
		BgL_bgl_string4206za700za7za7s4215za7, "saw_inline_return", 17);
	      DEFINE_STRING(BGl_string4207z00zzsaw_inline_returnz00,
		BgL_bgl_string4207za700za7za7s4216za7, "dfs ", 4);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2dfszd2envz52zzsaw_inline_returnz00,
		BgL_bgl__za752allocateza7d2d4217z00,
		BGl__z52allocatezd2dfsz80zzsaw_inline_returnz00, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_dfszf3zd2envz21zzsaw_inline_returnz00,
		BgL_bgl__dfsza7f3za7f3za7za7saw_4218z00,
		BGl__dfszf3zf3zzsaw_inline_returnz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_dfszd2nilzd2envz00zzsaw_inline_returnz00,
		BgL_bgl__dfsza7d2nilza7d2za7za7s4219z00,
		BGl__dfszd2nilzd2zzsaw_inline_returnz00, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inlinezd2returnszd2envz00zzsaw_inline_returnz00,
		BgL_bgl__inlineza7d2return4220za7,
		BGl__inlinezd2returnszd2zzsaw_inline_returnz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzsaw_inline_returnz00(long
		BgL_checksumz00_1966, char *BgL_fromz00_1967)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_inline_returnz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_inline_returnz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzsaw_inline_returnz00();
					BGl_cnstzd2initzd2zzsaw_inline_returnz00();
					BGl_importedzd2moduleszd2initz00zzsaw_inline_returnz00();
					BGl_objectzd2initzd2zzsaw_inline_returnz00();
					BGl_methodzd2initzd2zzsaw_inline_returnz00();
					BGl_toplevelzd2initzd2zzsaw_inline_returnz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_inline_returnz00()
	{
		AN_OBJECT;
		{	/* SawMill/InlineReturn.scm 1 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"saw_inline_return");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"saw_inline_return");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_inline_return");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"saw_inline_return");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_inline_returnz00()
	{
		AN_OBJECT;
		{	/* SawMill/InlineReturn.scm 1 */
			{	/* SawMill/InlineReturn.scm 1 */
				obj_t BgL_cportz00_1950;

				BgL_cportz00_1950 =
					bgl_open_input_string(BGl_string4207z00zzsaw_inline_returnz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1951;

					BgL_iz00_1951 = ((long) 0);
				BgL_loopz00_1952:
					if ((BgL_iz00_1951 == ((long) -1)))
						{	/* SawMill/InlineReturn.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/InlineReturn.scm 1 */
							{	/* SawMill/InlineReturn.scm 1 */
								obj_t BgL_arg4209z00_1954;

								{	/* SawMill/InlineReturn.scm 1 */

									{	/* SawMill/InlineReturn.scm 1 */
										obj_t BgL_locationz00_1956;

										BgL_locationz00_1956 = BBOOL(((bool_t) 0));
										{	/* SawMill/InlineReturn.scm 1 */

											BgL_arg4209z00_1954 =
												BGl_readz00zz__readerz00(BgL_cportz00_1950,
												BgL_locationz00_1956);
										}
									}
								}
								{	/* SawMill/InlineReturn.scm 1 */
									int BgL_auxz00_1987;

									BgL_auxz00_1987 = (int) (BgL_iz00_1951);
									CNST_TABLE_SET(BgL_auxz00_1987, BgL_arg4209z00_1954);
							}}
							{	/* SawMill/InlineReturn.scm 1 */
								int BgL_auxz00_1957;

								BgL_auxz00_1957 = (int) ((BgL_iz00_1951 - ((long) 1)));
								{
									long BgL_iz00_1992;

									BgL_iz00_1992 = (long) (BgL_auxz00_1957);
									BgL_iz00_1951 = BgL_iz00_1992;
									goto BgL_loopz00_1952;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_inline_returnz00()
	{
		AN_OBJECT;
		{	/* SawMill/InlineReturn.scm 1 */
			return (BGl_za2inlinezd2depthza2zd2zzsaw_inline_returnz00 =
				((long) 2), BUNSPEC);
		}
	}



/* inline-returns */
	BGL_EXPORTED_DEF obj_t
		BGl_inlinezd2returnszd2zzsaw_inline_returnz00(BgL_blockz00_bglt BgL_bz00_1)
	{
		AN_OBJECT;
		{	/* SawMill/InlineReturn.scm 7 */
			{	/* SawMill/InlineReturn.scm 8 */
				obj_t BgL_g4005z00_1104;

				BgL_g4005z00_1104 =
					BGl_findzd2returnszd2zzsaw_inline_returnz00(BgL_bz00_1);
				{
					obj_t BgL_l4003z00_1106;

					{	/* SawMill/InlineReturn.scm 8 */
						bool_t BgL_auxz00_1995;

						BgL_l4003z00_1106 = BgL_g4005z00_1104;
					BgL_zc3anonymousza34022ze3z83_1107:
						if (PAIRP(BgL_l4003z00_1106))
							{	/* SawMill/InlineReturn.scm 8 */
								{	/* SawMill/InlineReturn.scm 8 */
									obj_t BgL_arg4024z00_1109;

									BgL_arg4024z00_1109 = CAR(BgL_l4003z00_1106);
									BGl_inlinezd2returnzd2zzsaw_inline_returnz00(
										(BgL_blockz00_bglt) (BgL_arg4024z00_1109));
								}
								{
									obj_t BgL_l4003z00_2001;

									BgL_l4003z00_2001 = CDR(BgL_l4003z00_1106);
									BgL_l4003z00_1106 = BgL_l4003z00_2001;
									goto BgL_zc3anonymousza34022ze3z83_1107;
								}
							}
						else
							{	/* SawMill/InlineReturn.scm 8 */
								BgL_auxz00_1995 = ((bool_t) 1);
							}
						return BBOOL(BgL_auxz00_1995);
					}
				}
			}
		}
	}



/* _inline-returns */
	obj_t BGl__inlinezd2returnszd2zzsaw_inline_returnz00(obj_t BgL_envz00_1930,
		obj_t BgL_bz00_1931)
	{
		AN_OBJECT;
		{	/* SawMill/InlineReturn.scm 7 */
			return
				BGl_inlinezd2returnszd2zzsaw_inline_returnz00(
				(BgL_blockz00_bglt) (BgL_bz00_1931));
		}
	}



/* inline-return */
	bool_t BGl_inlinezd2returnzd2zzsaw_inline_returnz00(BgL_blockz00_bglt
		BgL_bz00_2)
	{
		AN_OBJECT;
		{	/* SawMill/InlineReturn.scm 16 */
			{
				BgL_blockz00_bglt BgL_bz00_1151;

				obj_t BgL_lz00_1152;

				BgL_blockz00_bglt BgL_sz00_1153;

				{	/* SawMill/InlineReturn.scm 36 */
					obj_t BgL_lz00_1115;

					BgL_lz00_1115 =
						(((BgL_blockz00_bglt) CREF(BgL_bz00_2))->BgL_firstz00);
					if (BGl_simplezd2returnzf3z21zzsaw_inline_returnz00(BgL_lz00_1115,
							BGl_za2inlinezd2depthza2zd2zzsaw_inline_returnz00))
						{	/* SawMill/InlineReturn.scm 38 */
							obj_t BgL_g4008z00_1117;

							BgL_g4008z00_1117 =
								(((BgL_blockz00_bglt) CREF(BgL_bz00_2))->BgL_predsz00);
							{
								obj_t BgL_l4006z00_1119;

								BgL_l4006z00_1119 = BgL_g4008z00_1117;
							BgL_zc3anonymousza34027ze3z83_1120:
								if (PAIRP(BgL_l4006z00_1119))
									{	/* SawMill/InlineReturn.scm 40 */
										{	/* SawMill/InlineReturn.scm 38 */
											obj_t BgL_pz00_1122;

											BgL_pz00_1122 = CAR(BgL_l4006z00_1119);
											{	/* SawMill/InlineReturn.scm 38 */
												bool_t BgL_testz00_2013;

												{	/* SawMill/InlineReturn.scm 38 */
													obj_t BgL_auxz00_2014;

													{	/* SawMill/InlineReturn.scm 38 */
														obj_t BgL_pairz00_1820;

														{
															BgL_blockz00_bglt BgL_auxz00_2015;

															BgL_auxz00_2015 =
																(BgL_blockz00_bglt) (BgL_pz00_1122);
															BgL_pairz00_1820 =
																(((BgL_blockz00_bglt) CREF(BgL_auxz00_2015))->
																BgL_succsz00);
														}
														BgL_auxz00_2014 = CDR(BgL_pairz00_1820);
													}
													BgL_testz00_2013 = NULLP(BgL_auxz00_2014);
												}
												if (BgL_testz00_2013)
													{	/* SawMill/InlineReturn.scm 38 */
														BgL_bz00_1151 = (BgL_blockz00_bglt) (BgL_pz00_1122);
														BgL_lz00_1152 = BgL_lz00_1115;
														BgL_sz00_1153 = BgL_bz00_2;
														{	/* SawMill/InlineReturn.scm 32 */
															obj_t BgL_arg4047z00_1155;

															{	/* SawMill/InlineReturn.scm 32 */
																obj_t BgL_arg4048z00_1156;

																BgL_arg4048z00_1156 =
																	bgl_append2(
																	(((BgL_blockz00_bglt) CREF(BgL_bz00_1151))->
																		BgL_firstz00), BgL_lz00_1152);
																BgL_arg4047z00_1155 =
																	BGl_reallocz00zzsaw_inline_returnz00
																	(BgL_arg4048z00_1156, BNIL);
															}
															((((BgL_blockz00_bglt) CREF(BgL_bz00_1151))->
																	BgL_firstz00) =
																((obj_t) BgL_arg4047z00_1155), BUNSPEC);
														}
														((((BgL_blockz00_bglt) CREF(BgL_bz00_1151))->
																BgL_succsz00) = ((obj_t) BNIL), BUNSPEC);
														{	/* SawMill/InlineReturn.scm 34 */
															obj_t BgL_arg4051z00_1159;

															{	/* SawMill/InlineReturn.scm 34 */
																obj_t BgL_arg4052z00_1160;

																BgL_arg4052z00_1160 =
																	(((BgL_blockz00_bglt) CREF(BgL_sz00_1153))->
																	BgL_predsz00);
																BgL_arg4051z00_1159 =
																	bgl_remq_bang((obj_t) (BgL_bz00_1151),
																	BgL_arg4052z00_1160);
															}
															((((BgL_blockz00_bglt) CREF(BgL_sz00_1153))->
																	BgL_predsz00) =
																((obj_t) BgL_arg4051z00_1159), BUNSPEC);
														}
														BGl_inlinezd2returnzd2zzsaw_inline_returnz00
															(BgL_bz00_1151);
													}
												else
													{	/* SawMill/InlineReturn.scm 38 */
														((bool_t) 0);
													}
											}
										}
										{
											obj_t BgL_l4006z00_2031;

											BgL_l4006z00_2031 = CDR(BgL_l4006z00_1119);
											BgL_l4006z00_1119 = BgL_l4006z00_2031;
											goto BgL_zc3anonymousza34027ze3z83_1120;
										}
									}
								else
									{	/* SawMill/InlineReturn.scm 40 */
										return ((bool_t) 1);
									}
							}
						}
					else
						{	/* SawMill/InlineReturn.scm 37 */
							return ((bool_t) 0);
						}
				}
			}
		}
	}



/* realloc */
	obj_t BGl_reallocz00zzsaw_inline_returnz00(obj_t BgL_lz00_1139,
		obj_t BgL_rmapz00_1140)
	{
		AN_OBJECT;
		{	/* SawMill/InlineReturn.scm 30 */
			if (NULLP(BgL_lz00_1139))
				{	/* SawMill/InlineReturn.scm 25 */
					return BgL_lz00_1139;
				}
			else
				{	/* SawMill/InlineReturn.scm 27 */
					obj_t BgL_destz00_1143;

					{	/* SawMill/InlineReturn.scm 27 */
						BgL_rtl_insz00_bglt BgL_obj3903z00_1832;

						{	/* SawMill/InlineReturn.scm 27 */
							obj_t BgL_pairz00_1831;

							BgL_pairz00_1831 = BgL_lz00_1139;
							BgL_obj3903z00_1832 =
								(BgL_rtl_insz00_bglt) (CAR(BgL_pairz00_1831));
						}
						BgL_destz00_1143 =
							(((BgL_rtl_insz00_bglt) CREF(BgL_obj3903z00_1832))->BgL_destz00);
					}
					if (CBOOL(BgL_destz00_1143))
						{	/* SawMill/InlineReturn.scm 28 */
							obj_t BgL_arg4039z00_1144;

							{	/* SawMill/InlineReturn.scm 28 */
								BgL_rtl_regz00_bglt BgL_arg4040z00_1145;

								BgL_arg4040z00_1145 =
									BGl_copyzd2regzd2zzsaw_inline_returnz00(BgL_destz00_1143);
								BgL_arg4039z00_1144 =
									MAKE_PAIR(BgL_destz00_1143, (obj_t) (BgL_arg4040z00_1145));
							}
							BgL_rmapz00_1140 =
								MAKE_PAIR(BgL_arg4039z00_1144, BgL_rmapz00_1140);
						}
					else
						{	/* SawMill/InlineReturn.scm 28 */
							BFALSE;
						}
					{	/* SawMill/InlineReturn.scm 29 */
						BgL_rtl_insz00_bglt BgL_arg4041z00_1146;

						obj_t BgL_arg4042z00_1147;

						{	/* SawMill/InlineReturn.scm 29 */
							obj_t BgL_arg4043z00_1148;

							BgL_arg4043z00_1148 = CAR(BgL_lz00_1139);
							BgL_arg4041z00_1146 =
								BGl_renamezd2inszd2zzsaw_inline_returnz00(BgL_arg4043z00_1148,
								BgL_rmapz00_1140);
						}
						{	/* SawMill/InlineReturn.scm 30 */
							obj_t BgL_arg4044z00_1149;

							BgL_arg4044z00_1149 = CDR(BgL_lz00_1139);
							BgL_arg4042z00_1147 =
								BGl_reallocz00zzsaw_inline_returnz00(BgL_arg4044z00_1149,
								BgL_rmapz00_1140);
						}
						return
							MAKE_PAIR((obj_t) (BgL_arg4041z00_1146), BgL_arg4042z00_1147);
					}
				}
		}
	}



/* simple-return? */
	bool_t BGl_simplezd2returnzf3z21zzsaw_inline_returnz00(obj_t BgL_lz00_1128,
		long BgL_nz00_1129)
	{
		AN_OBJECT;
		{	/* SawMill/InlineReturn.scm 23 */
		BGl_simplezd2returnzf3z21zzsaw_inline_returnz00:
			{	/* SawMill/InlineReturn.scm 18 */
				obj_t BgL_rz00_1131;

				BgL_rz00_1131 = CDR(BgL_lz00_1128);
				{	/* SawMill/InlineReturn.scm 19 */
					bool_t BgL__ortest_3991z00_1132;

					BgL__ortest_3991z00_1132 = NULLP(BgL_rz00_1131);
					if (BgL__ortest_3991z00_1132)
						{	/* SawMill/InlineReturn.scm 19 */
							return BgL__ortest_3991z00_1132;
						}
					else
						{	/* SawMill/InlineReturn.scm 20 */
							bool_t BgL__ortest_3992z00_1133;

							{	/* SawMill/InlineReturn.scm 20 */
								bool_t BgL_testz00_2053;

								{	/* SawMill/InlineReturn.scm 20 */
									BgL_rtl_funz00_bglt BgL_arg4035z00_1137;

									{	/* SawMill/InlineReturn.scm 20 */
										BgL_rtl_insz00_bglt BgL_obj3906z00_1826;

										{	/* SawMill/InlineReturn.scm 20 */
											obj_t BgL_pairz00_1825;

											BgL_pairz00_1825 = BgL_lz00_1128;
											BgL_obj3906z00_1826 =
												(BgL_rtl_insz00_bglt) (CAR(BgL_pairz00_1825));
										}
										BgL_arg4035z00_1137 =
											(((BgL_rtl_insz00_bglt) CREF(BgL_obj3906z00_1826))->
											BgL_funz00);
									}
									{	/* SawMill/InlineReturn.scm 20 */
										obj_t BgL_obj3481z00_1827;

										BgL_obj3481z00_1827 = (obj_t) (BgL_arg4035z00_1137);
										BgL_testz00_2053 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj3481z00_1827,
											BGl_rtl_movz00zzsaw_defsz00);
									}
								}
								if (BgL_testz00_2053)
									{	/* SawMill/InlineReturn.scm 20 */
										BgL__ortest_3992z00_1133 =
											BGl_simplezd2returnzf3z21zzsaw_inline_returnz00
											(BgL_rz00_1131, BgL_nz00_1129);
									}
								else
									{	/* SawMill/InlineReturn.scm 20 */
										BgL__ortest_3992z00_1133 = ((bool_t) 0);
									}
							}
							if (BgL__ortest_3992z00_1133)
								{	/* SawMill/InlineReturn.scm 20 */
									return BgL__ortest_3992z00_1133;
								}
							else
								{	/* SawMill/InlineReturn.scm 20 */
									if ((BgL_nz00_1129 > ((long) 0)))
										{
											long BgL_nz00_2064;

											obj_t BgL_lz00_2063;

											BgL_lz00_2063 = BgL_rz00_1131;
											BgL_nz00_2064 = (BgL_nz00_1129 - ((long) 1));
											BgL_nz00_1129 = BgL_nz00_2064;
											BgL_lz00_1128 = BgL_lz00_2063;
											goto BGl_simplezd2returnzf3z21zzsaw_inline_returnz00;
										}
									else
										{	/* SawMill/InlineReturn.scm 22 */
											return ((bool_t) 0);
										}
								}
						}
				}
			}
		}
	}



/* find-returns */
	obj_t BGl_findzd2returnszd2zzsaw_inline_returnz00(BgL_blockz00_bglt
		BgL_bz00_3)
	{
		AN_OBJECT;
		{	/* SawMill/InlineReturn.scm 45 */
			{	/* SawMill/InlineReturn.scm 46 */
				obj_t BgL_retsz00_1164;

				BgL_retsz00_1164 = MAKE_CELL(BNIL);
				BGl_dfsz72z72zzsaw_inline_returnz00(BgL_retsz00_1164,
					(obj_t) (BgL_bz00_3));
				return CELL_REF(BgL_retsz00_1164);
			}
		}
	}



/* dfs' */
	bool_t BGl_dfsz72z72zzsaw_inline_returnz00(obj_t BgL_retsz00_1948,
		obj_t BgL_bz00_1166)
	{
		AN_OBJECT;
		{	/* SawMill/InlineReturn.scm 47 */
			{	/* SawMill/InlineReturn.scm 48 */
				BgL_blockz00_bglt BgL_obj3995z00_1168;

				BgL_obj3995z00_1168 =
					((BgL_blockz00_bglt) (BgL_blockz00_bglt) (BgL_bz00_1166));
				{	/* SawMill/InlineReturn.scm 48 */
					BgL_dfsz00_bglt BgL_arg4054z00_1169;

					BgL_arg4054z00_1169 = BGl_wideningzd2dfszd2zzsaw_inline_returnz00();
					{	/* SawMill/InlineReturn.scm 48 */
						obj_t BgL_auxz00_2073;

						BgL_objectz00_bglt BgL_auxz00_2071;

						BgL_auxz00_2073 = (obj_t) (BgL_arg4054z00_1169);
						BgL_auxz00_2071 = (BgL_objectz00_bglt) (BgL_obj3995z00_1168);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_2071, BgL_auxz00_2073);
					}
				}
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_obj3995z00_1168),
					BGl_classzd2numzd2zz__objectz00(BGl_dfsz00zzsaw_inline_returnz00));
				BgL_obj3995z00_1168;
			}
			{	/* SawMill/InlineReturn.scm 49 */
				BgL_rtl_funz00_bglt BgL_funz00_1171;

				{	/* SawMill/InlineReturn.scm 49 */
					BgL_rtl_insz00_bglt BgL_obj3906z00_1847;

					{	/* SawMill/InlineReturn.scm 49 */
						obj_t BgL_auxz00_2079;

						{	/* SawMill/InlineReturn.scm 49 */
							obj_t BgL_auxz00_2080;

							{	/* SawMill/InlineReturn.scm 49 */
								obj_t BgL_auxz00_2081;

								{
									BgL_blockz00_bglt BgL_auxz00_2082;

									BgL_auxz00_2082 = (BgL_blockz00_bglt) (BgL_bz00_1166);
									BgL_auxz00_2081 =
										(((BgL_blockz00_bglt) CREF(BgL_auxz00_2082))->BgL_firstz00);
								}
								BgL_auxz00_2080 =
									BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
									(BgL_auxz00_2081);
							}
							BgL_auxz00_2079 = CAR(BgL_auxz00_2080);
						}
						BgL_obj3906z00_1847 = (BgL_rtl_insz00_bglt) (BgL_auxz00_2079);
					}
					BgL_funz00_1171 =
						(((BgL_rtl_insz00_bglt) CREF(BgL_obj3906z00_1847))->BgL_funz00);
				}
				{	/* SawMill/InlineReturn.scm 50 */
					bool_t BgL_testz00_2089;

					{	/* SawMill/InlineReturn.scm 50 */
						obj_t BgL_obj3296z00_1848;

						BgL_obj3296z00_1848 = (obj_t) (BgL_funz00_1171);
						BgL_testz00_2089 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj3296z00_1848,
							BGl_rtl_lastz00zzsaw_defsz00);
					}
					if (BgL_testz00_2089)
						{	/* SawMill/InlineReturn.scm 50 */
							obj_t BgL_auxz00_1949;

							BgL_auxz00_1949 =
								MAKE_PAIR(BgL_bz00_1166, CELL_REF(BgL_retsz00_1948));
							CELL_SET(BgL_retsz00_1948, BgL_auxz00_1949);
						}
					else
						{	/* SawMill/InlineReturn.scm 50 */
							BFALSE;
						}
				}
			}
			{	/* SawMill/InlineReturn.scm 51 */
				obj_t BgL_g4011z00_1176;

				{
					BgL_blockz00_bglt BgL_auxz00_2093;

					BgL_auxz00_2093 = (BgL_blockz00_bglt) (BgL_bz00_1166);
					BgL_g4011z00_1176 =
						(((BgL_blockz00_bglt) CREF(BgL_auxz00_2093))->BgL_succsz00);
				}
				{
					obj_t BgL_l4009z00_1178;

					BgL_l4009z00_1178 = BgL_g4011z00_1176;
				BgL_zc3anonymousza34060ze3z83_1179:
					if (PAIRP(BgL_l4009z00_1178))
						{	/* SawMill/InlineReturn.scm 51 */
							{	/* SawMill/InlineReturn.scm 51 */
								obj_t BgL_sz00_1181;

								BgL_sz00_1181 = CAR(BgL_l4009z00_1178);
								if (BGl_iszd2azf3z21zz__objectz00(BgL_sz00_1181,
										BGl_dfsz00zzsaw_inline_returnz00))
									{	/* SawMill/InlineReturn.scm 51 */
										((bool_t) 0);
									}
								else
									{	/* SawMill/InlineReturn.scm 51 */
										BGl_dfsz72z72zzsaw_inline_returnz00(BgL_retsz00_1948,
											BgL_sz00_1181);
									}
							}
							{
								obj_t BgL_l4009z00_2102;

								BgL_l4009z00_2102 = CDR(BgL_l4009z00_1178);
								BgL_l4009z00_1178 = BgL_l4009z00_2102;
								goto BgL_zc3anonymousza34060ze3z83_1179;
							}
						}
					else
						{	/* SawMill/InlineReturn.scm 51 */
							return ((bool_t) 1);
						}
				}
			}
		}
	}



/* copy-reg */
	BgL_rtl_regz00_bglt BGl_copyzd2regzd2zzsaw_inline_returnz00(obj_t BgL_rz00_4)
	{
		AN_OBJECT;
		{	/* SawMill/InlineReturn.scm 55 */
			{	/* SawMill/InlineReturn.scm 57 */
				BgL_typez00_bglt BgL_arg4064z00_1187;

				obj_t BgL_arg4065z00_1188;

				obj_t BgL_arg4066z00_1189;

				obj_t BgL_arg4067z00_1190;

				{
					BgL_rtl_regz00_bglt BgL_auxz00_2104;

					BgL_auxz00_2104 = (BgL_rtl_regz00_bglt) (BgL_rz00_4);
					BgL_arg4064z00_1187 =
						(((BgL_rtl_regz00_bglt) CREF(BgL_auxz00_2104))->BgL_typez00);
				}
				{
					BgL_rtl_regz00_bglt BgL_auxz00_2107;

					BgL_auxz00_2107 = (BgL_rtl_regz00_bglt) (BgL_rz00_4);
					BgL_arg4065z00_1188 =
						(((BgL_rtl_regz00_bglt) CREF(BgL_auxz00_2107))->BgL_varz00);
				}
				{	/* SawMill/defs.scm 15 */

					{	/* SawMill/defs.scm 15 */

						BgL_arg4066z00_1189 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
					}
				}
				{	/* SawMill/defs.scm 16 */

					{	/* SawMill/defs.scm 16 */

						BgL_arg4067z00_1190 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
					}
				}
				return
					BGl_makezd2rtl_regzd2zzsaw_defsz00(BgL_arg4064z00_1187,
					BgL_arg4065z00_1188, BFALSE, BgL_arg4066z00_1189, BgL_arg4067z00_1190,
					BFALSE);
			}
		}
	}



/* rename-ins */
	BgL_rtl_insz00_bglt BGl_renamezd2inszd2zzsaw_inline_returnz00(obj_t
		BgL_insz00_5, obj_t BgL_rmapz00_6)
	{
		AN_OBJECT;
		{	/* SawMill/InlineReturn.scm 59 */
			{	/* SawMill/InlineReturn.scm 64 */
				obj_t BgL_arg4068z00_1195;

				obj_t BgL_arg4070z00_1197;

				BgL_rtl_funz00_bglt BgL_arg4071z00_1198;

				obj_t BgL_arg4072z00_1199;

				{
					BgL_rtl_insz00_bglt BgL_auxz00_2113;

					BgL_auxz00_2113 = (BgL_rtl_insz00_bglt) (BgL_insz00_5);
					BgL_arg4068z00_1195 =
						(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_2113))->BgL_locz00);
				}
				{	/* SawMill/InlineReturn.scm 65 */
					obj_t BgL__andtest_4002z00_1200;

					{
						BgL_rtl_insz00_bglt BgL_auxz00_2116;

						BgL_auxz00_2116 = (BgL_rtl_insz00_bglt) (BgL_insz00_5);
						BgL__andtest_4002z00_1200 =
							(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_2116))->BgL_destz00);
					}
					if (CBOOL(BgL__andtest_4002z00_1200))
						{	/* SawMill/InlineReturn.scm 65 */
							obj_t BgL_slotz00_1861;

							BgL_slotz00_1861 =
								BGl_assqz00zz__r4_pairs_and_lists_6_3z00
								(BgL__andtest_4002z00_1200, BgL_rmapz00_6);
							if (CBOOL(BgL_slotz00_1861))
								{	/* SawMill/InlineReturn.scm 65 */
									BgL_arg4070z00_1197 = CDR(BgL_slotz00_1861);
								}
							else
								{	/* SawMill/InlineReturn.scm 65 */
									BgL_arg4070z00_1197 = BgL__andtest_4002z00_1200;
								}
						}
					else
						{	/* SawMill/InlineReturn.scm 65 */
							BgL_arg4070z00_1197 = BFALSE;
						}
				}
				{
					BgL_rtl_insz00_bglt BgL_auxz00_2125;

					BgL_auxz00_2125 = (BgL_rtl_insz00_bglt) (BgL_insz00_5);
					BgL_arg4071z00_1198 =
						(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_2125))->BgL_funz00);
				}
				{	/* SawMill/InlineReturn.scm 67 */
					obj_t BgL_l4012z00_1202;

					{
						BgL_rtl_insz00_bglt BgL_auxz00_2128;

						BgL_auxz00_2128 = (BgL_rtl_insz00_bglt) (BgL_insz00_5);
						BgL_l4012z00_1202 =
							(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_2128))->BgL_argsz00);
					}
					if (NULLP(BgL_l4012z00_1202))
						{	/* SawMill/InlineReturn.scm 67 */
							BgL_arg4072z00_1199 = BNIL;
						}
					else
						{	/* SawMill/InlineReturn.scm 67 */
							obj_t BgL_head4014z00_1204;

							BgL_head4014z00_1204 = MAKE_PAIR(BNIL, BNIL);
							{
								obj_t BgL_l4012z00_1206;

								obj_t BgL_tail4015z00_1207;

								BgL_l4012z00_1206 = BgL_l4012z00_1202;
								BgL_tail4015z00_1207 = BgL_head4014z00_1204;
							BgL_zc3anonymousza34075ze3z83_1208:
								if (NULLP(BgL_l4012z00_1206))
									{	/* SawMill/InlineReturn.scm 67 */
										BgL_arg4072z00_1199 = CDR(BgL_head4014z00_1204);
									}
								else
									{	/* SawMill/InlineReturn.scm 67 */
										obj_t BgL_newtail4016z00_1210;

										{	/* SawMill/InlineReturn.scm 67 */
											obj_t BgL_arg4078z00_1212;

											{	/* SawMill/InlineReturn.scm 67 */
												obj_t BgL_xz00_1871;

												BgL_xz00_1871 = CAR(BgL_l4012z00_1206);
												{	/* SawMill/InlineReturn.scm 67 */
													obj_t BgL_slotz00_1873;

													BgL_slotz00_1873 =
														BGl_assqz00zz__r4_pairs_and_lists_6_3z00
														(BgL_xz00_1871, BgL_rmapz00_6);
													if (CBOOL(BgL_slotz00_1873))
														{	/* SawMill/InlineReturn.scm 67 */
															BgL_arg4078z00_1212 = CDR(BgL_slotz00_1873);
														}
													else
														{	/* SawMill/InlineReturn.scm 67 */
															BgL_arg4078z00_1212 = BgL_xz00_1871;
														}
												}
											}
											BgL_newtail4016z00_1210 =
												MAKE_PAIR(BgL_arg4078z00_1212, BNIL);
										}
										SET_CDR(BgL_tail4015z00_1207, BgL_newtail4016z00_1210);
										{
											obj_t BgL_tail4015z00_2146;

											obj_t BgL_l4012z00_2144;

											BgL_l4012z00_2144 = CDR(BgL_l4012z00_1206);
											BgL_tail4015z00_2146 = BgL_newtail4016z00_1210;
											BgL_tail4015z00_1207 = BgL_tail4015z00_2146;
											BgL_l4012z00_1206 = BgL_l4012z00_2144;
											goto BgL_zc3anonymousza34075ze3z83_1208;
										}
									}
							}
						}
				}
				return
					BGl_makezd2rtl_inszd2zzsaw_defsz00(BgL_arg4068z00_1195, BNIL,
					BgL_arg4070z00_1197, BgL_arg4071z00_1198, BgL_arg4072z00_1199);
			}
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_inline_returnz00()
	{
		AN_OBJECT;
		{	/* SawMill/InlineReturn.scm 1 */
			{	/* SawMill/InlineReturn.scm 5 */
				obj_t BgL_arg4081z00_1221;

				obj_t BgL_arg4082z00_1222;

				obj_t BgL_arg4085z00_1225;

				BgL_arg4081z00_1221 = CNST_TABLE_REF(((long) 0));
				BgL_arg4082z00_1222 = BGl_blockz00zzsaw_defsz00;
				{	/* SawMill/InlineReturn.scm 5 */
					obj_t BgL_v4017z00_1226;

					BgL_v4017z00_1226 = create_vector((int) (((long) 0)));
					BgL_arg4085z00_1225 = BgL_v4017z00_1226;
				}
				BGl_dfsz00zzsaw_inline_returnz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4081z00_1221,
					BgL_arg4082z00_1222, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2dfszd2envz52zzsaw_inline_returnz00,
					BGl_dfszd2nilzd2envz00zzsaw_inline_returnz00,
					BGl_dfszf3zd2envz21zzsaw_inline_returnz00, ((long) 9134), BFALSE,
					BFALSE, BgL_arg4085z00_1225);
			}
			return (BGl_z52thezd2dfszd2nilz52zzsaw_inline_returnz00 =
				BUNSPEC, BUNSPEC);
		}
	}



/* _dfs? */
	obj_t BGl__dfszf3zf3zzsaw_inline_returnz00(obj_t BgL_envz00_1934,
		obj_t BgL_obj3976z00_1935)
	{
		AN_OBJECT;
		{	/* SawMill/InlineReturn.scm 5 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3976z00_1935,
					BGl_dfsz00zzsaw_inline_returnz00));
		}
	}



/* widening-dfs */
	BgL_dfsz00_bglt BGl_wideningzd2dfszd2zzsaw_inline_returnz00()
	{
		AN_OBJECT;
		{	/* SawMill/InlineReturn.scm 5 */
			{	/* SawMill/InlineReturn.scm 5 */
				BgL_dfsz00_bglt BgL_new3959z00_1227;

				BgL_new3959z00_1227 =
					((BgL_dfsz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_dfsz00_bgl))));
				return BgL_new3959z00_1227;
			}
		}
	}



/* _%allocate-dfs */
	obj_t BGl__z52allocatezd2dfsz80zzsaw_inline_returnz00(obj_t BgL_envz00_1932)
	{
		AN_OBJECT;
		{	/* SawMill/InlineReturn.scm 5 */
			{	/* SawMill/InlineReturn.scm 5 */
				BgL_blockz00_bglt BgL_auxz00_2155;

				{	/* SawMill/InlineReturn.scm 5 */
					BgL_blockz00_bglt BgL_res4210z00_1965;

					{	/* SawMill/InlineReturn.scm 5 */
						BgL_blockz00_bglt BgL_new3969z00_1963;

						BgL_new3969z00_1963 =
							((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_blockz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3969z00_1963),
							BGl_classzd2numzd2zz__objectz00
							(BGl_dfsz00zzsaw_inline_returnz00));
						{	/* SawMill/InlineReturn.scm 5 */
							BgL_objectz00_bglt BgL_auxz00_2160;

							BgL_auxz00_2160 = (BgL_objectz00_bglt) (BgL_new3969z00_1963);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2160, BFALSE);
						}
						BgL_res4210z00_1965 = BgL_new3969z00_1963;
					}
					BgL_auxz00_2155 = BgL_res4210z00_1965;
				}
				return (obj_t) (BgL_auxz00_2155);
			}
		}
	}



/* dfs-nil */
	BgL_dfsz00_bglt BGl_dfszd2nilzd2zzsaw_inline_returnz00()
	{
		AN_OBJECT;
		{	/* SawMill/InlineReturn.scm 5 */
			if ((BGl_z52thezd2dfszd2nilz52zzsaw_inline_returnz00 == BUNSPEC))
				{	/* SawMill/InlineReturn.scm 5 */
					{	/* SawMill/InlineReturn.scm 5 */
						BgL_blockz00_bglt BgL_res4196z00_1891;

						{	/* SawMill/InlineReturn.scm 5 */
							BgL_blockz00_bglt BgL_new3957z00_1887;

							BgL_new3957z00_1887 =
								((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_blockz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3957z00_1887),
								BGl_classzd2numzd2zz__objectz00(BGl_blockz00zzsaw_defsz00));
							{	/* SawMill/InlineReturn.scm 5 */
								BgL_objectz00_bglt BgL_auxz00_2170;

								BgL_auxz00_2170 = (BgL_objectz00_bglt) (BgL_new3957z00_1887);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2170, BFALSE);
							}
							BgL_res4196z00_1891 = BgL_new3957z00_1887;
						}
						BGl_z52thezd2dfszd2nilz52zzsaw_inline_returnz00 =
							(obj_t) (BgL_res4196z00_1891);
					}
					{	/* SawMill/InlineReturn.scm 5 */
						obj_t BgL_arg4094z00_1238;

						BgL_arg4094z00_1238 = MAKE_PAIR(BFALSE, BFALSE);
						{	/* SawMill/InlineReturn.scm 5 */
							BgL_blockz00_bglt BgL_res4197z00_1901;

							{	/* SawMill/InlineReturn.scm 5 */
								BgL_blockz00_bglt BgL_new3951z00_1892;

								int BgL_label3947z00_1893;

								BgL_new3951z00_1892 =
									(BgL_blockz00_bglt)
									(BGl_z52thezd2dfszd2nilz52zzsaw_inline_returnz00);
								BgL_label3947z00_1893 = (int) (((long) 0));
								{	/* SawMill/InlineReturn.scm 5 */
									int BgL_label3947z00_1897;

									obj_t BgL_preds3948z00_1898;

									obj_t BgL_succs3949z00_1899;

									obj_t BgL_first3950z00_1900;

									BgL_label3947z00_1897 = BgL_label3947z00_1893;
									BgL_preds3948z00_1898 = BNIL;
									BgL_succs3949z00_1899 = BNIL;
									BgL_first3950z00_1900 = BgL_arg4094z00_1238;
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_1892))->
											BgL_labelz00) = ((int) BgL_label3947z00_1897), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_1892))->
											BgL_predsz00) = ((obj_t) BgL_preds3948z00_1898), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_1892))->
											BgL_succsz00) = ((obj_t) BgL_succs3949z00_1899), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_1892))->
											BgL_firstz00) = ((obj_t) BgL_first3950z00_1900), BUNSPEC);
									BgL_res4197z00_1901 = BgL_new3951z00_1892;
							}} BgL_res4197z00_1901;
					}}
					{	/* SawMill/InlineReturn.scm 5 */
						long BgL_arg4096z00_1239;

						BgL_arg4096z00_1239 =
							BGl_classzd2numzd2zz__objectz00(BGl_dfsz00zzsaw_inline_returnz00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2dfszd2nilz52zzsaw_inline_returnz00),
							BgL_arg4096z00_1239);
					}
					{	/* SawMill/InlineReturn.scm 5 */
						BgL_dfsz00_bglt BgL_arg4097z00_1240;

						BgL_arg4097z00_1240 = BGl_wideningzd2dfszd2zzsaw_inline_returnz00();
						{	/* SawMill/InlineReturn.scm 5 */
							obj_t BgL_auxz00_2187;

							BgL_objectz00_bglt BgL_auxz00_2185;

							BgL_auxz00_2187 = (obj_t) (BgL_arg4097z00_1240);
							BgL_auxz00_2185 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2dfszd2nilz52zzsaw_inline_returnz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2185, BgL_auxz00_2187);
				}}}
			else
				{	/* SawMill/InlineReturn.scm 5 */
					BFALSE;
				}
			return
				(BgL_dfsz00_bglt) (BGl_z52thezd2dfszd2nilz52zzsaw_inline_returnz00);
		}
	}



/* _dfs-nil */
	obj_t BGl__dfszd2nilzd2zzsaw_inline_returnz00(obj_t BgL_envz00_1933)
	{
		AN_OBJECT;
		{	/* SawMill/InlineReturn.scm 5 */
			return (obj_t) (BGl_dfszd2nilzd2zzsaw_inline_returnz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_inline_returnz00()
	{
		AN_OBJECT;
		{	/* SawMill/InlineReturn.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_inline_returnz00()
	{
		AN_OBJECT;
		{	/* SawMill/InlineReturn.scm 1 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_dfsz00zzsaw_inline_returnz00, BGl_proc4202z00zzsaw_inline_returnz00,
				BGl_string4203z00zzsaw_inline_returnz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_dfsz00zzsaw_inline_returnz00, BGl_proc4204z00zzsaw_inline_returnz00,
				BGl_string4205z00zzsaw_inline_returnz00);
		}
	}



/* struct+object->objec4021 */
	obj_t BGl_structzb2objectzd2ze3objec4021z83zzsaw_inline_returnz00(obj_t
		BgL_envz00_1943, obj_t BgL_oz00_1944, obj_t BgL_sz00_1945)
	{
		AN_OBJECT;
		{	/* SawMill/InlineReturn.scm 5 */
			{
				BgL_dfsz00_bglt BgL_oz00_1801;

				obj_t BgL_sz00_1802;

				{	/* SawMill/InlineReturn.scm 5 */
					BgL_dfsz00_bglt BgL_auxz00_2195;

					BgL_oz00_1801 = (BgL_dfsz00_bglt) (BgL_oz00_1944);
					BgL_sz00_1802 = BgL_sz00_1945;
					{

						{	/* SawMill/InlineReturn.scm 5 */
							obj_t BgL_old3973z00_1805;

							{	/* SawMill/InlineReturn.scm 5 */
								obj_t BgL_nextzd2method4020zd2_1810;

								BgL_nextzd2method4020zd2_1810 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1801),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_dfsz00zzsaw_inline_returnz00);
								if (PROCEDUREP(BgL_nextzd2method4020zd2_1810))
									{	/* SawMill/InlineReturn.scm 5 */
										BgL_old3973z00_1805 =
											PROCEDURE_ENTRY(BgL_nextzd2method4020zd2_1810)
											(BgL_nextzd2method4020zd2_1810, (obj_t) (BgL_oz00_1801),
											BgL_sz00_1802, BEOA);
									}
								else
									{	/* SawMill/InlineReturn.scm 5 */
										BgL_old3973z00_1805 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1801), BgL_sz00_1802));
									}
							}
							{	/* SawMill/InlineReturn.scm 5 */
								BgL_dfsz00_bglt BgL_new3975z00_1807;

								BgL_new3975z00_1807 = ((BgL_dfsz00_bglt) (BgL_old3973z00_1805));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3975z00_1807),
									BGl_classzd2numzd2zz__objectz00
									(BGl_dfsz00zzsaw_inline_returnz00));
								{	/* SawMill/InlineReturn.scm 5 */
									BgL_dfsz00_bglt BgL_arg4194z00_1809;

									BgL_arg4194z00_1809 =
										BGl_wideningzd2dfszd2zzsaw_inline_returnz00();
									{	/* SawMill/InlineReturn.scm 5 */
										obj_t BgL_auxz00_2213;

										BgL_objectz00_bglt BgL_auxz00_2211;

										BgL_auxz00_2213 = (obj_t) (BgL_arg4194z00_1809);
										BgL_auxz00_2211 =
											(BgL_objectz00_bglt) (BgL_new3975z00_1807);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_2211, BgL_auxz00_2213);
									}
								}
								BgL_auxz00_2195 = BgL_new3975z00_1807;
							}
						}
					}
					return (obj_t) (BgL_auxz00_2195);
				}
			}
		}
	}



/* object->struct-dfs4019 */
	obj_t BGl_objectzd2ze3structzd2dfs4019ze3zzsaw_inline_returnz00(obj_t
		BgL_envz00_1946, obj_t BgL_obj3970z00_1947)
	{
		AN_OBJECT;
		{	/* SawMill/InlineReturn.scm 5 */
			{
				BgL_dfsz00_bglt BgL_obj3970z00_1793;

				BgL_obj3970z00_1793 = (BgL_dfsz00_bglt) (BgL_obj3970z00_1947);
				{

					{	/* SawMill/InlineReturn.scm 5 */
						obj_t BgL_res3971z00_1796;

						{	/* SawMill/InlineReturn.scm 5 */
							obj_t BgL_nextzd2method4018zd2_1799;

							BgL_nextzd2method4018zd2_1799 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3970z00_1793),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_dfsz00zzsaw_inline_returnz00);
							if (PROCEDUREP(BgL_nextzd2method4018zd2_1799))
								{	/* SawMill/InlineReturn.scm 5 */
									BgL_res3971z00_1796 =
										PROCEDURE_ENTRY(BgL_nextzd2method4018zd2_1799)
										(BgL_nextzd2method4018zd2_1799,
										(obj_t) (BgL_obj3970z00_1793), BEOA);
								}
							else
								{	/* SawMill/InlineReturn.scm 5 */
									BgL_res3971z00_1796 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3970z00_1793));
								}
						}
						{	/* SawMill/InlineReturn.scm 5 */
							obj_t BgL_aux3972z00_1797;

							{	/* SawMill/InlineReturn.scm 5 */
								obj_t BgL_keyz00_1912;

								BgL_keyz00_1912 = CNST_TABLE_REF(((long) 0));
								BgL_aux3972z00_1797 =
									make_struct(BgL_keyz00_1912, (int) (((long) 0)), BUNSPEC);
							}
							{	/* SawMill/InlineReturn.scm 5 */
								int BgL_auxz00_2230;

								BgL_auxz00_2230 = (int) (((long) 0));
								STRUCT_SET(BgL_res3971z00_1796, BgL_auxz00_2230,
									BgL_aux3972z00_1797);
							}
							{	/* SawMill/InlineReturn.scm 5 */
								obj_t BgL_auxz00_2233;

								BgL_auxz00_2233 = STRUCT_KEY(BgL_res3971z00_1796);
								STRUCT_KEY_SET(BgL_aux3972z00_1797, BgL_auxz00_2233);
							}
							{	/* SawMill/InlineReturn.scm 5 */
								obj_t BgL_kz00_1923;

								BgL_kz00_1923 = CNST_TABLE_REF(((long) 0));
								STRUCT_KEY_SET(BgL_res3971z00_1796, BgL_kz00_1923);
							}
							return BgL_res3971z00_1796;
						}
					}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_inline_returnz00()
	{
		AN_OBJECT;
		{	/* SawMill/InlineReturn.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4206z00zzsaw_inline_returnz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4206z00zzsaw_inline_returnz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4206z00zzsaw_inline_returnz00));
			BGl_modulezd2initializa7ationz75zzsaw_libz00(((long) 123885324),
				BSTRING_TO_STRING(BGl_string4206z00zzsaw_inline_returnz00));
			return
				BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 192042637),
				BSTRING_TO_STRING(BGl_string4206z00zzsaw_inline_returnz00));
		}
	}

#ifdef __cplusplus
}
#endif
