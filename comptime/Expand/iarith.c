/*===========================================================================*/
/*   (Expand/iarith.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Expand/iarith.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl__expandzd2minfxzd2zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__expandzd2zd2fxz00zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzexpand_iarithmetiquez00 =
		BUNSPEC;
	static obj_t BGl__expandzd2maxfxzd2zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzexpand_iarithmetiquez00();
	BGL_EXPORTED_DECL obj_t BGl_expandzd2minfxzd2zzexpand_iarithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2zb2fxz60zzexpand_iarithmetiquez00(obj_t,
		obj_t);
	static obj_t BGl__expandzd2iza2z70zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__expandzd2izb2z60zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__expandzd2izd2z00zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__expandzd2izf2z20zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__expandzd2izc3z11zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2maxfxzd2zzexpand_iarithmetiquez00(obj_t,
		obj_t);
	static obj_t BGl__expandzd2izd3z01zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__expandzd2ize3z31zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzexpand_iarithmetiquez00();
	BGL_EXPORTED_DECL obj_t BGl_expandzd2zd2fxz00zzexpand_iarithmetiquez00(obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzexpand_iarithmetiquez00();
	static obj_t BGl__expandzd2izc3zd3zc2zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__expandzd2ize3zd3ze2zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzexpand_iarithmetiquez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_userzd2warningzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__expandzd2eqzf3z21zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t string_to_bstring(char *);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2izc3zd3zc2zzexpand_iarithmetiquez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2ize3zd3ze2zzexpand_iarithmetiquez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2iza2z70zzexpand_iarithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2izb2z60zzexpand_iarithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2izd2z00zzexpand_iarithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2izf2z20zzexpand_iarithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2izc3z11zzexpand_iarithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2izd3z01zzexpand_iarithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2ize3z31zzexpand_iarithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2eqzf3z21zzexpand_iarithmetiquez00(obj_t,
		obj_t);
	BGL_IMPORT char *BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__expandzd2zb2fxz60zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzexpand_iarithmetiquez00();
	static obj_t BGl_methodzd2initzd2zzexpand_iarithmetiquez00();
	static obj_t __cnst[26];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2maxfxzd2envz00zzexpand_iarithmetiquez00,
		BgL_bgl__expandza7d2maxfxza73082z00,
		BGl__expandzd2maxfxzd2zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2izd2zd2envzd2zzexpand_iarithmetiquez00,
		BgL_bgl__expandza7d2iza7d2za703083za7,
		BGl__expandzd2izd2z00zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2minfxzd2envz00zzexpand_iarithmetiquez00,
		BgL_bgl__expandza7d2minfxza73084z00,
		BGl__expandzd2minfxzd2zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2izc3zd2envzc3zzexpand_iarithmetiquez00,
		BgL_bgl__expandza7d2iza7c3za713085za7,
		BGl__expandzd2izc3z11zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2zd2fxzd2envzd2zzexpand_iarithmetiquez00,
		BgL_bgl__expandza7d2za7d2fxza73086za7,
		BGl__expandzd2zd2fxz00zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2izb2zd2envzb2zzexpand_iarithmetiquez00,
		BgL_bgl__expandza7d2iza7b2za763087za7,
		BGl__expandzd2izb2z60zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2zb2fxzd2envzb2zzexpand_iarithmetiquez00,
		BgL_bgl__expandza7d2za7b2fxza73088za7,
		BGl__expandzd2zb2fxz60zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2izc3zd3zd2envz10zzexpand_iarithmetiquez00,
		BgL_bgl__expandza7d2iza7c3za7d3089za7,
		BGl__expandzd2izc3zd3zc2zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3064z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3064za700za7za7e3090za7,
		"Incorrect number of arguments for `eq?'", 39);
	      DEFINE_STRING(BGl_string3065z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3065za700za7za7e3091za7, "/", 1);
	      DEFINE_STRING(BGl_string3066z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3066za700za7za7e3092za7,
		"Turning \"(/ ...)\" into \"(/fx ...)\" which may result in precision penalty",
		72);
	      DEFINE_STRING(BGl_string3067z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3067za700za7za7e3093za7,
		"\" which may result in precision penalty", 39);
	      DEFINE_STRING(BGl_string3068z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3068za700za7za7e3094za7, ")\" into \"", 9);
	      DEFINE_STRING(BGl_string3070z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3070za700za7za7e3095za7, "Turning \"(/ ", 12);
	      DEFINE_STRING(BGl_string3069z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3069za700za7za7e3096za7, " ", 1);
	      DEFINE_STRING(BGl_string3071z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3071za700za7za7e3097za7,
		"Turning \"(/ ... ...)\" into \"(/fx ... ...)\" which may result in precision penalty",
		80);
	      DEFINE_STRING(BGl_string3072z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3072za700za7za7e3098za7,
		"Turning \"(/ ... ... ...)\" into \"(/fx ... (* ... ...))\" which may result in precision penalty",
		92);
	      DEFINE_STRING(BGl_string3073z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3073za700za7za7e3099za7,
		"Incorrect number of arguments for `+fx'", 39);
	      DEFINE_STRING(BGl_string3074z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3074za700za7za7e3100za7,
		"Incorrect number of arguments for `-fx'", 39);
	      DEFINE_STRING(BGl_string3075z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3075za700za7za7e3101za7,
		"Incorrect number of arguments for `maxfx'", 41);
	      DEFINE_STRING(BGl_string3076z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3076za700za7za7e3102za7,
		"Incorrect number of arguments for `minfx'", 41);
	      DEFINE_STRING(BGl_string3077z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3077za700za7za7e3103za7, "expand_iarithmetique", 20);
	      DEFINE_STRING(BGl_string3078z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3078za700za7za7e3104za7,
		"minfx maxfx if y x let >= >=fx <= <=fx > >fx < <fx = and =fx /fx * *fx -fx negfx + +fx quote c-eq? ",
		99);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2eqzf3zd2envzf3zzexpand_iarithmetiquez00,
		BgL_bgl__expandza7d2eqza7f3za73105za7,
		BGl__expandzd2eqzf3z21zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2izd3zd2envzd3zzexpand_iarithmetiquez00,
		BgL_bgl__expandza7d2iza7d3za703106za7,
		BGl__expandzd2izd3z01zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2ize3zd3zd2envz30zzexpand_iarithmetiquez00,
		BgL_bgl__expandza7d2iza7e3za7d3107za7,
		BGl__expandzd2ize3zd3ze2zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2iza2zd2envza2zzexpand_iarithmetiquez00,
		BgL_bgl__expandza7d2iza7a2za773108za7,
		BGl__expandzd2iza2z70zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2izf2zd2envzf2zzexpand_iarithmetiquez00,
		BgL_bgl__expandza7d2iza7f2za723109za7,
		BGl__expandzd2izf2z20zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2ize3zd2envze3zzexpand_iarithmetiquez00,
		BgL_bgl__expandza7d2iza7e3za733110za7,
		BGl__expandzd2ize3z31zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzexpand_iarithmetiquez00(long
		BgL_checksumz00_2589, char *BgL_fromz00_2590)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzexpand_iarithmetiquez00))
				{
					BGl_requirezd2initializa7ationz75zzexpand_iarithmetiquez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzexpand_iarithmetiquez00();
					BGl_cnstzd2initzd2zzexpand_iarithmetiquez00();
					BGl_importedzd2moduleszd2initz00zzexpand_iarithmetiquez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzexpand_iarithmetiquez00()
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"expand_iarithmetique");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"expand_iarithmetique");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"expand_iarithmetique");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"expand_iarithmetique");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"expand_iarithmetique");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzexpand_iarithmetiquez00()
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 15 */
			{	/* Expand/iarith.scm 15 */
				obj_t BgL_cportz00_2581;

				BgL_cportz00_2581 =
					bgl_open_input_string(BGl_string3078z00zzexpand_iarithmetiquez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2582;

					BgL_iz00_2582 = ((long) 25);
				BgL_loopz00_2583:
					if ((BgL_iz00_2582 == ((long) -1)))
						{	/* Expand/iarith.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Expand/iarith.scm 15 */
							{	/* Expand/iarith.scm 15 */
								obj_t BgL_arg3081z00_2585;

								{	/* Expand/iarith.scm 15 */

									{	/* Expand/iarith.scm 15 */
										obj_t BgL_locationz00_2587;

										BgL_locationz00_2587 = BBOOL(((bool_t) 0));
										{	/* Expand/iarith.scm 15 */

											BgL_arg3081z00_2585 =
												BGl_readz00zz__readerz00(BgL_cportz00_2581,
												BgL_locationz00_2587);
										}
									}
								}
								{	/* Expand/iarith.scm 15 */
									int BgL_auxz00_2608;

									BgL_auxz00_2608 = (int) (BgL_iz00_2582);
									CNST_TABLE_SET(BgL_auxz00_2608, BgL_arg3081z00_2585);
							}}
							{	/* Expand/iarith.scm 15 */
								int BgL_auxz00_2588;

								BgL_auxz00_2588 = (int) ((BgL_iz00_2582 - ((long) 1)));
								{
									long BgL_iz00_2613;

									BgL_iz00_2613 = (long) (BgL_auxz00_2588);
									BgL_iz00_2582 = BgL_iz00_2613;
									goto BgL_loopz00_2583;
								}
							}
						}
				}
			}
		}
	}



/* expand-eq? */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2eqzf3z21zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_1, obj_t BgL_ez00_2)
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 35 */
			{
				obj_t BgL_xz00_120;

				obj_t BgL_yz00_121;

				if (PAIRP(BgL_xz00_1))
					{	/* Expand/iarith.scm 36 */
						obj_t BgL_cdrzd21400zd2_126;

						BgL_cdrzd21400zd2_126 = CDR(BgL_xz00_1);
						if (PAIRP(BgL_cdrzd21400zd2_126))
							{	/* Expand/iarith.scm 36 */
								obj_t BgL_carzd21402zd2_128;

								obj_t BgL_cdrzd21403zd2_129;

								BgL_carzd21402zd2_128 = CAR(BgL_cdrzd21400zd2_126);
								BgL_cdrzd21403zd2_129 = CDR(BgL_cdrzd21400zd2_126);
								{	/* Expand/iarith.scm 36 */
									bool_t BgL_testz00_2622;

									{	/* Expand/iarith.scm 36 */
										bool_t BgL__ortest_1508z00_871;

										BgL__ortest_1508z00_871 = INTEGERP(BgL_carzd21402zd2_128);
										if (BgL__ortest_1508z00_871)
											{	/* Expand/iarith.scm 36 */
												BgL_testz00_2622 = BgL__ortest_1508z00_871;
											}
										else
											{	/* Expand/iarith.scm 36 */
												BgL_testz00_2622 = CHARP(BgL_carzd21402zd2_128);
											}
									}
									if (BgL_testz00_2622)
										{	/* Expand/iarith.scm 36 */
											if (PAIRP(BgL_cdrzd21403zd2_129))
												{	/* Expand/iarith.scm 36 */
													if (
														(BgL_carzd21402zd2_128 ==
															CAR(BgL_cdrzd21403zd2_129)))
														{	/* Expand/iarith.scm 36 */
															if (NULLP(CDR(BgL_cdrzd21403zd2_129)))
																{	/* Expand/iarith.scm 36 */
																	return BTRUE;
																}
															else
																{	/* Expand/iarith.scm 36 */
																BgL_tagzd21394zd2_123:
																	return
																		BGl_errorz00zz__errorz00(BFALSE,
																		BGl_string3064z00zzexpand_iarithmetiquez00,
																		BgL_xz00_1);
																}
														}
													else
														{	/* Expand/iarith.scm 36 */
															obj_t BgL_carzd21429zd2_137;

															obj_t BgL_cdrzd21430zd2_138;

															BgL_carzd21429zd2_137 =
																CAR(BgL_cdrzd21400zd2_126);
															BgL_cdrzd21430zd2_138 =
																CDR(BgL_cdrzd21400zd2_126);
															if (PAIRP(BgL_carzd21429zd2_137))
																{	/* Expand/iarith.scm 36 */
																	obj_t BgL_cdrzd21433zd2_140;

																	BgL_cdrzd21433zd2_140 =
																		CDR(BgL_carzd21429zd2_137);
																	if (
																		(CAR(BgL_carzd21429zd2_137) ==
																			CNST_TABLE_REF(((long) 1))))
																		{	/* Expand/iarith.scm 36 */
																			if (PAIRP(BgL_cdrzd21433zd2_140))
																				{	/* Expand/iarith.scm 36 */
																					obj_t BgL_yz00_143;

																					BgL_yz00_143 =
																						CAR(BgL_cdrzd21433zd2_140);
																					if (NULLP(CDR(BgL_cdrzd21433zd2_140)))
																						{	/* Expand/iarith.scm 36 */
																							obj_t BgL_carzd21439zd2_145;

																							BgL_carzd21439zd2_145 =
																								CAR(BgL_cdrzd21430zd2_138);
																							if (PAIRP(BgL_carzd21439zd2_145))
																								{	/* Expand/iarith.scm 36 */
																									obj_t BgL_cdrzd21443zd2_147;

																									BgL_cdrzd21443zd2_147 =
																										CDR(BgL_carzd21439zd2_145);
																									if (
																										(CAR(BgL_carzd21439zd2_145)
																											==
																											CNST_TABLE_REF(((long)
																													1))))
																										{	/* Expand/iarith.scm 36 */
																											if (PAIRP
																												(BgL_cdrzd21443zd2_147))
																												{	/* Expand/iarith.scm 36 */
																													if (
																														(BgL_yz00_143 ==
																															CAR
																															(BgL_cdrzd21443zd2_147)))
																														{	/* Expand/iarith.scm 36 */
																															if (NULLP(CDR
																																	(BgL_cdrzd21443zd2_147)))
																																{	/* Expand/iarith.scm 36 */
																																	if (NULLP(CDR
																																			(BgL_cdrzd21430zd2_138)))
																																		{	/* Expand/iarith.scm 36 */
																																			return
																																				BTRUE;
																																		}
																																	else
																																		{	/* Expand/iarith.scm 36 */
																																			goto
																																				BgL_tagzd21394zd2_123;
																																		}
																																}
																															else
																																{	/* Expand/iarith.scm 36 */
																																	obj_t
																																		BgL_cdrzd21461zd2_154;
																																	BgL_cdrzd21461zd2_154
																																		=
																																		CDR
																																		(BgL_xz00_1);
																																	{	/* Expand/iarith.scm 36 */
																																		obj_t
																																			BgL_cdrzd21463zd2_155;
																																		BgL_cdrzd21463zd2_155
																																			=
																																			CDR
																																			(BgL_cdrzd21461zd2_154);
																																		{	/* Expand/iarith.scm 36 */
																																			bool_t
																																				BgL_testz00_2671;
																																			{	/* Expand/iarith.scm 36 */
																																				obj_t
																																					BgL_auxz00_2672;
																																				BgL_auxz00_2672
																																					=
																																					CAR
																																					(BgL_cdrzd21461zd2_154);
																																				BgL_testz00_2671
																																					=
																																					CHARP
																																					(BgL_auxz00_2672);
																																			}
																																			if (BgL_testz00_2671)
																																				{	/* Expand/iarith.scm 36 */
																																					bool_t
																																						BgL_testz00_2675;
																																					{	/* Expand/iarith.scm 36 */
																																						obj_t
																																							BgL_auxz00_2676;
																																						BgL_auxz00_2676
																																							=
																																							CAR
																																							(BgL_cdrzd21463zd2_155);
																																						BgL_testz00_2675
																																							=
																																							CHARP
																																							(BgL_auxz00_2676);
																																					}
																																					if (BgL_testz00_2675)
																																						{	/* Expand/iarith.scm 36 */
																																							if (NULLP(CDR(BgL_cdrzd21463zd2_155)))
																																								{	/* Expand/iarith.scm 36 */
																																									return
																																										BFALSE;
																																								}
																																							else
																																								{	/* Expand/iarith.scm 36 */
																																									goto
																																										BgL_tagzd21394zd2_123;
																																								}
																																						}
																																					else
																																						{	/* Expand/iarith.scm 36 */
																																							if (NULLP(CDR(BgL_cdrzd21463zd2_155)))
																																								{	/* Expand/iarith.scm 36 */
																																									BgL_xz00_120
																																										=
																																										CAR
																																										(BgL_cdrzd21461zd2_154);
																																									BgL_yz00_121
																																										=
																																										CAR
																																										(BgL_cdrzd21463zd2_155);
																																								BgL_tagzd21393zd2_122:
																																									{	/* Expand/iarith.scm 46 */
																																										obj_t
																																											BgL_arg2383z00_872;
																																										obj_t
																																											BgL_arg2390z00_873;
																																										BgL_arg2383z00_872
																																											=
																																											CNST_TABLE_REF
																																											(
																																											((long) 0));
																																										{	/* Expand/iarith.scm 46 */
																																											obj_t
																																												BgL_arg2396z00_874;
																																											obj_t
																																												BgL_arg2403z00_875;
																																											BgL_arg2396z00_874
																																												=
																																												PROCEDURE_ENTRY
																																												(BgL_ez00_2)
																																												(BgL_ez00_2,
																																												BgL_xz00_120,
																																												BgL_ez00_2,
																																												BEOA);
																																											BgL_arg2403z00_875
																																												=
																																												PROCEDURE_ENTRY
																																												(BgL_ez00_2)
																																												(BgL_ez00_2,
																																												BgL_yz00_121,
																																												BgL_ez00_2,
																																												BEOA);
																																											{	/* Expand/iarith.scm 46 */
																																												obj_t
																																													BgL_list2410z00_877;
																																												{	/* Expand/iarith.scm 46 */
																																													obj_t
																																														BgL_arg2416z00_878;
																																													BgL_arg2416z00_878
																																														=
																																														MAKE_PAIR
																																														(BNIL,
																																														BNIL);
																																													BgL_list2410z00_877
																																														=
																																														MAKE_PAIR
																																														(BgL_arg2403z00_875,
																																														BgL_arg2416z00_878);
																																												}
																																												BgL_arg2390z00_873
																																													=
																																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																													(BgL_arg2396z00_874,
																																													BgL_list2410z00_877);
																																										}}
																																										return
																																											MAKE_PAIR
																																											(BgL_arg2383z00_872,
																																											BgL_arg2390z00_873);
																																									}
																																								}
																																							else
																																								{	/* Expand/iarith.scm 36 */
																																									goto
																																										BgL_tagzd21394zd2_123;
																																								}
																																						}
																																				}
																																			else
																																				{	/* Expand/iarith.scm 36 */
																																					if (NULLP(CDR(BgL_cdrzd21463zd2_155)))
																																						{
																																							obj_t
																																								BgL_yz00_2701;
																																							obj_t
																																								BgL_xz00_2699;
																																							BgL_xz00_2699
																																								=
																																								CAR
																																								(BgL_cdrzd21461zd2_154);
																																							BgL_yz00_2701
																																								=
																																								CAR
																																								(BgL_cdrzd21463zd2_155);
																																							BgL_yz00_121
																																								=
																																								BgL_yz00_2701;
																																							BgL_xz00_120
																																								=
																																								BgL_xz00_2699;
																																							goto
																																								BgL_tagzd21393zd2_122;
																																						}
																																					else
																																						{	/* Expand/iarith.scm 36 */
																																							goto
																																								BgL_tagzd21394zd2_123;
																																						}
																																				}
																																		}
																																	}
																																}
																														}
																													else
																														{	/* Expand/iarith.scm 36 */
																															obj_t
																																BgL_cdrzd21503zd2_175;
																															BgL_cdrzd21503zd2_175
																																=
																																CDR(BgL_xz00_1);
																															{	/* Expand/iarith.scm 36 */
																																obj_t
																																	BgL_cdrzd21505zd2_176;
																																BgL_cdrzd21505zd2_176
																																	=
																																	CDR
																																	(BgL_cdrzd21503zd2_175);
																																{	/* Expand/iarith.scm 36 */
																																	bool_t
																																		BgL_testz00_2705;
																																	{	/* Expand/iarith.scm 36 */
																																		obj_t
																																			BgL_auxz00_2706;
																																		BgL_auxz00_2706
																																			=
																																			CAR(CDR
																																			(CAR
																																				(BgL_cdrzd21503zd2_175)));
																																		BgL_testz00_2705
																																			=
																																			SYMBOLP
																																			(BgL_auxz00_2706);
																																	}
																																	if (BgL_testz00_2705)
																																		{	/* Expand/iarith.scm 36 */
																																			obj_t
																																				BgL_cdrzd21513zd2_178;
																																			BgL_cdrzd21513zd2_178
																																				=
																																				CDR(CAR
																																				(BgL_cdrzd21505zd2_176));
																																			{	/* Expand/iarith.scm 36 */
																																				bool_t
																																					BgL_testz00_2713;
																																				{	/* Expand/iarith.scm 36 */
																																					obj_t
																																						BgL_auxz00_2714;
																																					BgL_auxz00_2714
																																						=
																																						CAR
																																						(BgL_cdrzd21513zd2_178);
																																					BgL_testz00_2713
																																						=
																																						SYMBOLP
																																						(BgL_auxz00_2714);
																																				}
																																				if (BgL_testz00_2713)
																																					{	/* Expand/iarith.scm 36 */
																																						if (NULLP(CDR(BgL_cdrzd21513zd2_178)))
																																							{	/* Expand/iarith.scm 36 */
																																								if (NULLP(CDR(BgL_cdrzd21505zd2_176)))
																																									{	/* Expand/iarith.scm 36 */
																																										return
																																											BFALSE;
																																									}
																																								else
																																									{	/* Expand/iarith.scm 36 */
																																										goto
																																											BgL_tagzd21394zd2_123;
																																									}
																																							}
																																						else
																																							{	/* Expand/iarith.scm 36 */
																																								bool_t
																																									BgL_testz00_2723;
																																								{	/* Expand/iarith.scm 36 */
																																									obj_t
																																										BgL_auxz00_2724;
																																									BgL_auxz00_2724
																																										=
																																										CAR
																																										(BgL_cdrzd21503zd2_175);
																																									BgL_testz00_2723
																																										=
																																										CHARP
																																										(BgL_auxz00_2724);
																																								}
																																								if (BgL_testz00_2723)
																																									{	/* Expand/iarith.scm 36 */
																																										bool_t
																																											BgL_testz00_2727;
																																										{	/* Expand/iarith.scm 36 */
																																											obj_t
																																												BgL_auxz00_2728;
																																											BgL_auxz00_2728
																																												=
																																												CAR
																																												(BgL_cdrzd21505zd2_176);
																																											BgL_testz00_2727
																																												=
																																												CHARP
																																												(BgL_auxz00_2728);
																																										}
																																										if (BgL_testz00_2727)
																																											{	/* Expand/iarith.scm 36 */
																																												if (NULLP(CDR(BgL_cdrzd21505zd2_176)))
																																													{	/* Expand/iarith.scm 36 */
																																														return
																																															BFALSE;
																																													}
																																												else
																																													{	/* Expand/iarith.scm 36 */
																																														goto
																																															BgL_tagzd21394zd2_123;
																																													}
																																											}
																																										else
																																											{	/* Expand/iarith.scm 36 */
																																												obj_t
																																													BgL_cdrzd21539zd2_189;
																																												BgL_cdrzd21539zd2_189
																																													=
																																													CDR
																																													(BgL_xz00_1);
																																												{	/* Expand/iarith.scm 36 */
																																													obj_t
																																														BgL_cdrzd21543zd2_190;
																																													BgL_cdrzd21543zd2_190
																																														=
																																														CDR
																																														(BgL_cdrzd21539zd2_189);
																																													if (NULLP(CDR(BgL_cdrzd21543zd2_190)))
																																														{
																																															obj_t
																																																BgL_yz00_2741;
																																															obj_t
																																																BgL_xz00_2739;
																																															BgL_xz00_2739
																																																=
																																																CAR
																																																(BgL_cdrzd21539zd2_189);
																																															BgL_yz00_2741
																																																=
																																																CAR
																																																(BgL_cdrzd21543zd2_190);
																																															BgL_yz00_121
																																																=
																																																BgL_yz00_2741;
																																															BgL_xz00_120
																																																=
																																																BgL_xz00_2739;
																																															goto
																																																BgL_tagzd21393zd2_122;
																																														}
																																													else
																																														{	/* Expand/iarith.scm 36 */
																																															goto
																																																BgL_tagzd21394zd2_123;
																																														}
																																												}
																																											}
																																									}
																																								else
																																									{	/* Expand/iarith.scm 36 */
																																										obj_t
																																											BgL_cdrzd21554zd2_196;
																																										BgL_cdrzd21554zd2_196
																																											=
																																											CDR
																																											(BgL_xz00_1);
																																										{	/* Expand/iarith.scm 36 */
																																											obj_t
																																												BgL_cdrzd21558zd2_197;
																																											BgL_cdrzd21558zd2_197
																																												=
																																												CDR
																																												(BgL_cdrzd21554zd2_196);
																																											if (NULLP(CDR(BgL_cdrzd21558zd2_197)))
																																												{
																																													obj_t
																																														BgL_yz00_2750;
																																													obj_t
																																														BgL_xz00_2748;
																																													BgL_xz00_2748
																																														=
																																														CAR
																																														(BgL_cdrzd21554zd2_196);
																																													BgL_yz00_2750
																																														=
																																														CAR
																																														(BgL_cdrzd21558zd2_197);
																																													BgL_yz00_121
																																														=
																																														BgL_yz00_2750;
																																													BgL_xz00_120
																																														=
																																														BgL_xz00_2748;
																																													goto
																																														BgL_tagzd21393zd2_122;
																																												}
																																											else
																																												{	/* Expand/iarith.scm 36 */
																																													goto
																																														BgL_tagzd21394zd2_123;
																																												}
																																										}
																																									}
																																							}
																																					}
																																				else
																																					{	/* Expand/iarith.scm 36 */
																																						bool_t
																																							BgL_testz00_2752;
																																						{	/* Expand/iarith.scm 36 */
																																							obj_t
																																								BgL_auxz00_2753;
																																							BgL_auxz00_2753
																																								=
																																								CAR
																																								(BgL_cdrzd21503zd2_175);
																																							BgL_testz00_2752
																																								=
																																								CHARP
																																								(BgL_auxz00_2753);
																																						}
																																						if (BgL_testz00_2752)
																																							{	/* Expand/iarith.scm 36 */
																																								bool_t
																																									BgL_testz00_2756;
																																								{	/* Expand/iarith.scm 36 */
																																									obj_t
																																										BgL_auxz00_2757;
																																									BgL_auxz00_2757
																																										=
																																										CAR
																																										(BgL_cdrzd21505zd2_176);
																																									BgL_testz00_2756
																																										=
																																										CHARP
																																										(BgL_auxz00_2757);
																																								}
																																								if (BgL_testz00_2756)
																																									{	/* Expand/iarith.scm 36 */
																																										if (NULLP(CDR(BgL_cdrzd21505zd2_176)))
																																											{	/* Expand/iarith.scm 36 */
																																												return
																																													BFALSE;
																																											}
																																										else
																																											{	/* Expand/iarith.scm 36 */
																																												goto
																																													BgL_tagzd21394zd2_123;
																																											}
																																									}
																																								else
																																									{	/* Expand/iarith.scm 36 */
																																										obj_t
																																											BgL_cdrzd21581zd2_210;
																																										BgL_cdrzd21581zd2_210
																																											=
																																											CDR
																																											(BgL_xz00_1);
																																										{	/* Expand/iarith.scm 36 */
																																											obj_t
																																												BgL_cdrzd21585zd2_211;
																																											BgL_cdrzd21585zd2_211
																																												=
																																												CDR
																																												(BgL_cdrzd21581zd2_210);
																																											if (NULLP(CDR(BgL_cdrzd21585zd2_211)))
																																												{
																																													obj_t
																																														BgL_yz00_2770;
																																													obj_t
																																														BgL_xz00_2768;
																																													BgL_xz00_2768
																																														=
																																														CAR
																																														(BgL_cdrzd21581zd2_210);
																																													BgL_yz00_2770
																																														=
																																														CAR
																																														(BgL_cdrzd21585zd2_211);
																																													BgL_yz00_121
																																														=
																																														BgL_yz00_2770;
																																													BgL_xz00_120
																																														=
																																														BgL_xz00_2768;
																																													goto
																																														BgL_tagzd21393zd2_122;
																																												}
																																											else
																																												{	/* Expand/iarith.scm 36 */
																																													goto
																																														BgL_tagzd21394zd2_123;
																																												}
																																										}
																																									}
																																							}
																																						else
																																							{	/* Expand/iarith.scm 36 */
																																								obj_t
																																									BgL_cdrzd21596zd2_217;
																																								BgL_cdrzd21596zd2_217
																																									=
																																									CDR
																																									(BgL_xz00_1);
																																								{	/* Expand/iarith.scm 36 */
																																									obj_t
																																										BgL_cdrzd21600zd2_218;
																																									BgL_cdrzd21600zd2_218
																																										=
																																										CDR
																																										(BgL_cdrzd21596zd2_217);
																																									if (NULLP(CDR(BgL_cdrzd21600zd2_218)))
																																										{
																																											obj_t
																																												BgL_yz00_2779;
																																											obj_t
																																												BgL_xz00_2777;
																																											BgL_xz00_2777
																																												=
																																												CAR
																																												(BgL_cdrzd21596zd2_217);
																																											BgL_yz00_2779
																																												=
																																												CAR
																																												(BgL_cdrzd21600zd2_218);
																																											BgL_yz00_121
																																												=
																																												BgL_yz00_2779;
																																											BgL_xz00_120
																																												=
																																												BgL_xz00_2777;
																																											goto
																																												BgL_tagzd21393zd2_122;
																																										}
																																									else
																																										{	/* Expand/iarith.scm 36 */
																																											goto
																																												BgL_tagzd21394zd2_123;
																																										}
																																								}
																																							}
																																					}
																																			}
																																		}
																																	else
																																		{	/* Expand/iarith.scm 36 */
																																			bool_t
																																				BgL_testz00_2781;
																																			{	/* Expand/iarith.scm 36 */
																																				obj_t
																																					BgL_auxz00_2782;
																																				BgL_auxz00_2782
																																					=
																																					CAR
																																					(BgL_cdrzd21503zd2_175);
																																				BgL_testz00_2781
																																					=
																																					CHARP
																																					(BgL_auxz00_2782);
																																			}
																																			if (BgL_testz00_2781)
																																				{	/* Expand/iarith.scm 36 */
																																					bool_t
																																						BgL_testz00_2785;
																																					{	/* Expand/iarith.scm 36 */
																																						obj_t
																																							BgL_auxz00_2786;
																																						BgL_auxz00_2786
																																							=
																																							CAR
																																							(BgL_cdrzd21505zd2_176);
																																						BgL_testz00_2785
																																							=
																																							CHARP
																																							(BgL_auxz00_2786);
																																					}
																																					if (BgL_testz00_2785)
																																						{	/* Expand/iarith.scm 36 */
																																							if (NULLP(CDR(BgL_cdrzd21505zd2_176)))
																																								{	/* Expand/iarith.scm 36 */
																																									return
																																										BFALSE;
																																								}
																																							else
																																								{	/* Expand/iarith.scm 36 */
																																									goto
																																										BgL_tagzd21394zd2_123;
																																								}
																																						}
																																					else
																																						{	/* Expand/iarith.scm 36 */
																																							obj_t
																																								BgL_cdrzd21623zd2_232;
																																							BgL_cdrzd21623zd2_232
																																								=
																																								CDR
																																								(BgL_xz00_1);
																																							{	/* Expand/iarith.scm 36 */
																																								obj_t
																																									BgL_cdrzd21627zd2_233;
																																								BgL_cdrzd21627zd2_233
																																									=
																																									CDR
																																									(BgL_cdrzd21623zd2_232);
																																								if (NULLP(CDR(BgL_cdrzd21627zd2_233)))
																																									{
																																										obj_t
																																											BgL_yz00_2799;
																																										obj_t
																																											BgL_xz00_2797;
																																										BgL_xz00_2797
																																											=
																																											CAR
																																											(BgL_cdrzd21623zd2_232);
																																										BgL_yz00_2799
																																											=
																																											CAR
																																											(BgL_cdrzd21627zd2_233);
																																										BgL_yz00_121
																																											=
																																											BgL_yz00_2799;
																																										BgL_xz00_120
																																											=
																																											BgL_xz00_2797;
																																										goto
																																											BgL_tagzd21393zd2_122;
																																									}
																																								else
																																									{	/* Expand/iarith.scm 36 */
																																										goto
																																											BgL_tagzd21394zd2_123;
																																									}
																																							}
																																						}
																																				}
																																			else
																																				{	/* Expand/iarith.scm 36 */
																																					obj_t
																																						BgL_cdrzd21638zd2_239;
																																					BgL_cdrzd21638zd2_239
																																						=
																																						CDR
																																						(BgL_xz00_1);
																																					{	/* Expand/iarith.scm 36 */
																																						obj_t
																																							BgL_cdrzd21642zd2_240;
																																						BgL_cdrzd21642zd2_240
																																							=
																																							CDR
																																							(BgL_cdrzd21638zd2_239);
																																						if (NULLP(CDR(BgL_cdrzd21642zd2_240)))
																																							{
																																								obj_t
																																									BgL_yz00_2808;
																																								obj_t
																																									BgL_xz00_2806;
																																								BgL_xz00_2806
																																									=
																																									CAR
																																									(BgL_cdrzd21638zd2_239);
																																								BgL_yz00_2808
																																									=
																																									CAR
																																									(BgL_cdrzd21642zd2_240);
																																								BgL_yz00_121
																																									=
																																									BgL_yz00_2808;
																																								BgL_xz00_120
																																									=
																																									BgL_xz00_2806;
																																								goto
																																									BgL_tagzd21393zd2_122;
																																							}
																																						else
																																							{	/* Expand/iarith.scm 36 */
																																								goto
																																									BgL_tagzd21394zd2_123;
																																							}
																																					}
																																				}
																																		}
																																}
																															}
																														}
																												}
																											else
																												{	/* Expand/iarith.scm 36 */
																													obj_t
																														BgL_cdrzd21653zd2_250;
																													BgL_cdrzd21653zd2_250
																														= CDR(BgL_xz00_1);
																													{	/* Expand/iarith.scm 36 */
																														obj_t
																															BgL_cdrzd21655zd2_251;
																														BgL_cdrzd21655zd2_251
																															=
																															CDR
																															(BgL_cdrzd21653zd2_250);
																														{	/* Expand/iarith.scm 36 */
																															bool_t
																																BgL_testz00_2812;
																															{	/* Expand/iarith.scm 36 */
																																obj_t
																																	BgL_auxz00_2813;
																																BgL_auxz00_2813
																																	=
																																	CAR
																																	(BgL_cdrzd21653zd2_250);
																																BgL_testz00_2812
																																	=
																																	CHARP
																																	(BgL_auxz00_2813);
																															}
																															if (BgL_testz00_2812)
																																{	/* Expand/iarith.scm 36 */
																																	bool_t
																																		BgL_testz00_2816;
																																	{	/* Expand/iarith.scm 36 */
																																		obj_t
																																			BgL_auxz00_2817;
																																		BgL_auxz00_2817
																																			=
																																			CAR
																																			(BgL_cdrzd21655zd2_251);
																																		BgL_testz00_2816
																																			=
																																			CHARP
																																			(BgL_auxz00_2817);
																																	}
																																	if (BgL_testz00_2816)
																																		{	/* Expand/iarith.scm 36 */
																																			if (NULLP
																																				(CDR
																																					(BgL_cdrzd21655zd2_251)))
																																				{	/* Expand/iarith.scm 36 */
																																					return
																																						BFALSE;
																																				}
																																			else
																																				{	/* Expand/iarith.scm 36 */
																																					goto
																																						BgL_tagzd21394zd2_123;
																																				}
																																		}
																																	else
																																		{	/* Expand/iarith.scm 36 */
																																			if (NULLP
																																				(CDR
																																					(BgL_cdrzd21655zd2_251)))
																																				{
																																					obj_t
																																						BgL_yz00_2828;
																																					obj_t
																																						BgL_xz00_2826;
																																					BgL_xz00_2826
																																						=
																																						CAR
																																						(BgL_cdrzd21653zd2_250);
																																					BgL_yz00_2828
																																						=
																																						CAR
																																						(BgL_cdrzd21655zd2_251);
																																					BgL_yz00_121
																																						=
																																						BgL_yz00_2828;
																																					BgL_xz00_120
																																						=
																																						BgL_xz00_2826;
																																					goto
																																						BgL_tagzd21393zd2_122;
																																				}
																																			else
																																				{	/* Expand/iarith.scm 36 */
																																					goto
																																						BgL_tagzd21394zd2_123;
																																				}
																																		}
																																}
																															else
																																{	/* Expand/iarith.scm 36 */
																																	if (NULLP(CDR
																																			(BgL_cdrzd21655zd2_251)))
																																		{
																																			obj_t
																																				BgL_yz00_2835;
																																			obj_t
																																				BgL_xz00_2833;
																																			BgL_xz00_2833
																																				=
																																				CAR
																																				(BgL_cdrzd21653zd2_250);
																																			BgL_yz00_2835
																																				=
																																				CAR
																																				(BgL_cdrzd21655zd2_251);
																																			BgL_yz00_121
																																				=
																																				BgL_yz00_2835;
																																			BgL_xz00_120
																																				=
																																				BgL_xz00_2833;
																																			goto
																																				BgL_tagzd21393zd2_122;
																																		}
																																	else
																																		{	/* Expand/iarith.scm 36 */
																																			goto
																																				BgL_tagzd21394zd2_123;
																																		}
																																}
																														}
																													}
																												}
																										}
																									else
																										{	/* Expand/iarith.scm 36 */
																											obj_t
																												BgL_cdrzd21697zd2_270;
																											BgL_cdrzd21697zd2_270 =
																												CDR(BgL_xz00_1);
																											{	/* Expand/iarith.scm 36 */
																												obj_t
																													BgL_cdrzd21699zd2_271;
																												BgL_cdrzd21699zd2_271 =
																													CDR
																													(BgL_cdrzd21697zd2_270);
																												{	/* Expand/iarith.scm 36 */
																													bool_t
																														BgL_testz00_2839;
																													{	/* Expand/iarith.scm 36 */
																														obj_t
																															BgL_auxz00_2840;
																														BgL_auxz00_2840 =
																															CAR
																															(BgL_cdrzd21697zd2_270);
																														BgL_testz00_2839 =
																															CHARP
																															(BgL_auxz00_2840);
																													}
																													if (BgL_testz00_2839)
																														{	/* Expand/iarith.scm 36 */
																															bool_t
																																BgL_testz00_2843;
																															{	/* Expand/iarith.scm 36 */
																																obj_t
																																	BgL_auxz00_2844;
																																BgL_auxz00_2844
																																	=
																																	CAR
																																	(BgL_cdrzd21699zd2_271);
																																BgL_testz00_2843
																																	=
																																	CHARP
																																	(BgL_auxz00_2844);
																															}
																															if (BgL_testz00_2843)
																																{	/* Expand/iarith.scm 36 */
																																	if (NULLP(CDR
																																			(BgL_cdrzd21699zd2_271)))
																																		{	/* Expand/iarith.scm 36 */
																																			return
																																				BFALSE;
																																		}
																																	else
																																		{	/* Expand/iarith.scm 36 */
																																			goto
																																				BgL_tagzd21394zd2_123;
																																		}
																																}
																															else
																																{	/* Expand/iarith.scm 36 */
																																	if (NULLP(CDR
																																			(BgL_cdrzd21699zd2_271)))
																																		{
																																			obj_t
																																				BgL_yz00_2855;
																																			obj_t
																																				BgL_xz00_2853;
																																			BgL_xz00_2853
																																				=
																																				CAR
																																				(BgL_cdrzd21697zd2_270);
																																			BgL_yz00_2855
																																				=
																																				CAR
																																				(BgL_cdrzd21699zd2_271);
																																			BgL_yz00_121
																																				=
																																				BgL_yz00_2855;
																																			BgL_xz00_120
																																				=
																																				BgL_xz00_2853;
																																			goto
																																				BgL_tagzd21393zd2_122;
																																		}
																																	else
																																		{	/* Expand/iarith.scm 36 */
																																			goto
																																				BgL_tagzd21394zd2_123;
																																		}
																																}
																														}
																													else
																														{	/* Expand/iarith.scm 36 */
																															if (NULLP(CDR
																																	(BgL_cdrzd21699zd2_271)))
																																{
																																	obj_t
																																		BgL_yz00_2862;
																																	obj_t
																																		BgL_xz00_2860;
																																	BgL_xz00_2860
																																		=
																																		CAR
																																		(BgL_cdrzd21697zd2_270);
																																	BgL_yz00_2862
																																		=
																																		CAR
																																		(BgL_cdrzd21699zd2_271);
																																	BgL_yz00_121 =
																																		BgL_yz00_2862;
																																	BgL_xz00_120 =
																																		BgL_xz00_2860;
																																	goto
																																		BgL_tagzd21393zd2_122;
																																}
																															else
																																{	/* Expand/iarith.scm 36 */
																																	goto
																																		BgL_tagzd21394zd2_123;
																																}
																														}
																												}
																											}
																										}
																								}
																							else
																								{	/* Expand/iarith.scm 36 */
																									obj_t BgL_cdrzd21741zd2_292;

																									BgL_cdrzd21741zd2_292 =
																										CDR(BgL_xz00_1);
																									{	/* Expand/iarith.scm 36 */
																										obj_t BgL_cdrzd21743zd2_293;

																										BgL_cdrzd21743zd2_293 =
																											CDR
																											(BgL_cdrzd21741zd2_292);
																										{	/* Expand/iarith.scm 36 */
																											bool_t BgL_testz00_2866;

																											{	/* Expand/iarith.scm 36 */
																												obj_t BgL_auxz00_2867;

																												BgL_auxz00_2867 =
																													CAR
																													(BgL_cdrzd21741zd2_292);
																												BgL_testz00_2866 =
																													CHARP
																													(BgL_auxz00_2867);
																											}
																											if (BgL_testz00_2866)
																												{	/* Expand/iarith.scm 36 */
																													bool_t
																														BgL_testz00_2870;
																													{	/* Expand/iarith.scm 36 */
																														obj_t
																															BgL_auxz00_2871;
																														BgL_auxz00_2871 =
																															CAR
																															(BgL_cdrzd21743zd2_293);
																														BgL_testz00_2870 =
																															CHARP
																															(BgL_auxz00_2871);
																													}
																													if (BgL_testz00_2870)
																														{	/* Expand/iarith.scm 36 */
																															if (NULLP(CDR
																																	(BgL_cdrzd21743zd2_293)))
																																{	/* Expand/iarith.scm 36 */
																																	return BFALSE;
																																}
																															else
																																{	/* Expand/iarith.scm 36 */
																																	goto
																																		BgL_tagzd21394zd2_123;
																																}
																														}
																													else
																														{	/* Expand/iarith.scm 36 */
																															if (NULLP(CDR
																																	(BgL_cdrzd21743zd2_293)))
																																{
																																	obj_t
																																		BgL_yz00_2882;
																																	obj_t
																																		BgL_xz00_2880;
																																	BgL_xz00_2880
																																		=
																																		CAR
																																		(BgL_cdrzd21741zd2_292);
																																	BgL_yz00_2882
																																		=
																																		CAR
																																		(BgL_cdrzd21743zd2_293);
																																	BgL_yz00_121 =
																																		BgL_yz00_2882;
																																	BgL_xz00_120 =
																																		BgL_xz00_2880;
																																	goto
																																		BgL_tagzd21393zd2_122;
																																}
																															else
																																{	/* Expand/iarith.scm 36 */
																																	goto
																																		BgL_tagzd21394zd2_123;
																																}
																														}
																												}
																											else
																												{	/* Expand/iarith.scm 36 */
																													if (NULLP(CDR
																															(BgL_cdrzd21743zd2_293)))
																														{
																															obj_t
																																BgL_yz00_2889;
																															obj_t
																																BgL_xz00_2887;
																															BgL_xz00_2887 =
																																CAR
																																(BgL_cdrzd21741zd2_292);
																															BgL_yz00_2889 =
																																CAR
																																(BgL_cdrzd21743zd2_293);
																															BgL_yz00_121 =
																																BgL_yz00_2889;
																															BgL_xz00_120 =
																																BgL_xz00_2887;
																															goto
																																BgL_tagzd21393zd2_122;
																														}
																													else
																														{	/* Expand/iarith.scm 36 */
																															goto
																																BgL_tagzd21394zd2_123;
																														}
																												}
																										}
																									}
																								}
																						}
																					else
																						{	/* Expand/iarith.scm 36 */
																							obj_t BgL_cdrzd21785zd2_312;

																							BgL_cdrzd21785zd2_312 =
																								CDR(BgL_xz00_1);
																							{	/* Expand/iarith.scm 36 */
																								obj_t BgL_cdrzd21787zd2_313;

																								BgL_cdrzd21787zd2_313 =
																									CDR(BgL_cdrzd21785zd2_312);
																								{	/* Expand/iarith.scm 36 */
																									bool_t BgL_testz00_2893;

																									{	/* Expand/iarith.scm 36 */
																										obj_t BgL_auxz00_2894;

																										BgL_auxz00_2894 =
																											CAR
																											(BgL_cdrzd21785zd2_312);
																										BgL_testz00_2893 =
																											CHARP(BgL_auxz00_2894);
																									}
																									if (BgL_testz00_2893)
																										{	/* Expand/iarith.scm 36 */
																											bool_t BgL_testz00_2897;

																											{	/* Expand/iarith.scm 36 */
																												obj_t BgL_auxz00_2898;

																												BgL_auxz00_2898 =
																													CAR
																													(BgL_cdrzd21787zd2_313);
																												BgL_testz00_2897 =
																													CHARP
																													(BgL_auxz00_2898);
																											}
																											if (BgL_testz00_2897)
																												{	/* Expand/iarith.scm 36 */
																													if (NULLP(CDR
																															(BgL_cdrzd21787zd2_313)))
																														{	/* Expand/iarith.scm 36 */
																															return BFALSE;
																														}
																													else
																														{	/* Expand/iarith.scm 36 */
																															goto
																																BgL_tagzd21394zd2_123;
																														}
																												}
																											else
																												{	/* Expand/iarith.scm 36 */
																													if (NULLP(CDR
																															(BgL_cdrzd21787zd2_313)))
																														{
																															obj_t
																																BgL_yz00_2909;
																															obj_t
																																BgL_xz00_2907;
																															BgL_xz00_2907 =
																																CAR
																																(BgL_cdrzd21785zd2_312);
																															BgL_yz00_2909 =
																																CAR
																																(BgL_cdrzd21787zd2_313);
																															BgL_yz00_121 =
																																BgL_yz00_2909;
																															BgL_xz00_120 =
																																BgL_xz00_2907;
																															goto
																																BgL_tagzd21393zd2_122;
																														}
																													else
																														{	/* Expand/iarith.scm 36 */
																															goto
																																BgL_tagzd21394zd2_123;
																														}
																												}
																										}
																									else
																										{	/* Expand/iarith.scm 36 */
																											if (NULLP(CDR
																													(BgL_cdrzd21787zd2_313)))
																												{
																													obj_t BgL_yz00_2916;

																													obj_t BgL_xz00_2914;

																													BgL_xz00_2914 =
																														CAR
																														(BgL_cdrzd21785zd2_312);
																													BgL_yz00_2916 =
																														CAR
																														(BgL_cdrzd21787zd2_313);
																													BgL_yz00_121 =
																														BgL_yz00_2916;
																													BgL_xz00_120 =
																														BgL_xz00_2914;
																													goto
																														BgL_tagzd21393zd2_122;
																												}
																											else
																												{	/* Expand/iarith.scm 36 */
																													goto
																														BgL_tagzd21394zd2_123;
																												}
																										}
																								}
																							}
																						}
																				}
																			else
																				{	/* Expand/iarith.scm 36 */
																					obj_t BgL_cdrzd21829zd2_333;

																					BgL_cdrzd21829zd2_333 =
																						CDR(BgL_xz00_1);
																					{	/* Expand/iarith.scm 36 */
																						obj_t BgL_cdrzd21831zd2_334;

																						BgL_cdrzd21831zd2_334 =
																							CDR(BgL_cdrzd21829zd2_333);
																						{	/* Expand/iarith.scm 36 */
																							bool_t BgL_testz00_2920;

																							{	/* Expand/iarith.scm 36 */
																								obj_t BgL_auxz00_2921;

																								BgL_auxz00_2921 =
																									CAR(BgL_cdrzd21829zd2_333);
																								BgL_testz00_2920 =
																									CHARP(BgL_auxz00_2921);
																							}
																							if (BgL_testz00_2920)
																								{	/* Expand/iarith.scm 36 */
																									bool_t BgL_testz00_2924;

																									{	/* Expand/iarith.scm 36 */
																										obj_t BgL_auxz00_2925;

																										BgL_auxz00_2925 =
																											CAR
																											(BgL_cdrzd21831zd2_334);
																										BgL_testz00_2924 =
																											CHARP(BgL_auxz00_2925);
																									}
																									if (BgL_testz00_2924)
																										{	/* Expand/iarith.scm 36 */
																											if (NULLP(CDR
																													(BgL_cdrzd21831zd2_334)))
																												{	/* Expand/iarith.scm 36 */
																													return BFALSE;
																												}
																											else
																												{	/* Expand/iarith.scm 36 */
																													goto
																														BgL_tagzd21394zd2_123;
																												}
																										}
																									else
																										{	/* Expand/iarith.scm 36 */
																											if (NULLP(CDR
																													(BgL_cdrzd21831zd2_334)))
																												{
																													obj_t BgL_yz00_2936;

																													obj_t BgL_xz00_2934;

																													BgL_xz00_2934 =
																														CAR
																														(BgL_cdrzd21829zd2_333);
																													BgL_yz00_2936 =
																														CAR
																														(BgL_cdrzd21831zd2_334);
																													BgL_yz00_121 =
																														BgL_yz00_2936;
																													BgL_xz00_120 =
																														BgL_xz00_2934;
																													goto
																														BgL_tagzd21393zd2_122;
																												}
																											else
																												{	/* Expand/iarith.scm 36 */
																													goto
																														BgL_tagzd21394zd2_123;
																												}
																										}
																								}
																							else
																								{	/* Expand/iarith.scm 36 */
																									if (NULLP(CDR
																											(BgL_cdrzd21831zd2_334)))
																										{
																											obj_t BgL_yz00_2943;

																											obj_t BgL_xz00_2941;

																											BgL_xz00_2941 =
																												CAR
																												(BgL_cdrzd21829zd2_333);
																											BgL_yz00_2943 =
																												CAR
																												(BgL_cdrzd21831zd2_334);
																											BgL_yz00_121 =
																												BgL_yz00_2943;
																											BgL_xz00_120 =
																												BgL_xz00_2941;
																											goto
																												BgL_tagzd21393zd2_122;
																										}
																									else
																										{	/* Expand/iarith.scm 36 */
																											goto
																												BgL_tagzd21394zd2_123;
																										}
																								}
																						}
																					}
																				}
																		}
																	else
																		{	/* Expand/iarith.scm 36 */
																			obj_t BgL_cdrzd21873zd2_353;

																			BgL_cdrzd21873zd2_353 = CDR(BgL_xz00_1);
																			{	/* Expand/iarith.scm 36 */
																				obj_t BgL_cdrzd21875zd2_354;

																				BgL_cdrzd21875zd2_354 =
																					CDR(BgL_cdrzd21873zd2_353);
																				{	/* Expand/iarith.scm 36 */
																					bool_t BgL_testz00_2947;

																					{	/* Expand/iarith.scm 36 */
																						obj_t BgL_auxz00_2948;

																						BgL_auxz00_2948 =
																							CAR(BgL_cdrzd21873zd2_353);
																						BgL_testz00_2947 =
																							CHARP(BgL_auxz00_2948);
																					}
																					if (BgL_testz00_2947)
																						{	/* Expand/iarith.scm 36 */
																							bool_t BgL_testz00_2951;

																							{	/* Expand/iarith.scm 36 */
																								obj_t BgL_auxz00_2952;

																								BgL_auxz00_2952 =
																									CAR(BgL_cdrzd21875zd2_354);
																								BgL_testz00_2951 =
																									CHARP(BgL_auxz00_2952);
																							}
																							if (BgL_testz00_2951)
																								{	/* Expand/iarith.scm 36 */
																									if (NULLP(CDR
																											(BgL_cdrzd21875zd2_354)))
																										{	/* Expand/iarith.scm 36 */
																											return BFALSE;
																										}
																									else
																										{	/* Expand/iarith.scm 36 */
																											goto
																												BgL_tagzd21394zd2_123;
																										}
																								}
																							else
																								{	/* Expand/iarith.scm 36 */
																									if (NULLP(CDR
																											(BgL_cdrzd21875zd2_354)))
																										{
																											obj_t BgL_yz00_2963;

																											obj_t BgL_xz00_2961;

																											BgL_xz00_2961 =
																												CAR
																												(BgL_cdrzd21873zd2_353);
																											BgL_yz00_2963 =
																												CAR
																												(BgL_cdrzd21875zd2_354);
																											BgL_yz00_121 =
																												BgL_yz00_2963;
																											BgL_xz00_120 =
																												BgL_xz00_2961;
																											goto
																												BgL_tagzd21393zd2_122;
																										}
																									else
																										{	/* Expand/iarith.scm 36 */
																											goto
																												BgL_tagzd21394zd2_123;
																										}
																								}
																						}
																					else
																						{	/* Expand/iarith.scm 36 */
																							if (NULLP(CDR
																									(BgL_cdrzd21875zd2_354)))
																								{
																									obj_t BgL_yz00_2970;

																									obj_t BgL_xz00_2968;

																									BgL_xz00_2968 =
																										CAR(BgL_cdrzd21873zd2_353);
																									BgL_yz00_2970 =
																										CAR(BgL_cdrzd21875zd2_354);
																									BgL_yz00_121 = BgL_yz00_2970;
																									BgL_xz00_120 = BgL_xz00_2968;
																									goto BgL_tagzd21393zd2_122;
																								}
																							else
																								{	/* Expand/iarith.scm 36 */
																									goto BgL_tagzd21394zd2_123;
																								}
																						}
																				}
																			}
																		}
																}
															else
																{	/* Expand/iarith.scm 36 */
																	obj_t BgL_carzd21916zd2_376;

																	obj_t BgL_cdrzd21917zd2_377;

																	BgL_carzd21916zd2_376 =
																		CAR(BgL_cdrzd21400zd2_126);
																	BgL_cdrzd21917zd2_377 =
																		CDR(BgL_cdrzd21400zd2_126);
																	if (PAIRP(BgL_carzd21916zd2_376))
																		{	/* Expand/iarith.scm 36 */
																			obj_t BgL_cdrzd21919zd2_379;

																			BgL_cdrzd21919zd2_379 =
																				CDR(BgL_carzd21916zd2_376);
																			if (
																				(CAR(BgL_carzd21916zd2_376) ==
																					CNST_TABLE_REF(((long) 1))))
																				{	/* Expand/iarith.scm 36 */
																					if (PAIRP(BgL_cdrzd21919zd2_379))
																						{	/* Expand/iarith.scm 36 */
																							bool_t BgL_testz00_2983;

																							{	/* Expand/iarith.scm 36 */
																								obj_t BgL_auxz00_2984;

																								BgL_auxz00_2984 =
																									CAR(BgL_cdrzd21919zd2_379);
																								BgL_testz00_2983 =
																									SYMBOLP(BgL_auxz00_2984);
																							}
																							if (BgL_testz00_2983)
																								{	/* Expand/iarith.scm 36 */
																									if (NULLP(CDR
																											(BgL_cdrzd21919zd2_379)))
																										{	/* Expand/iarith.scm 36 */
																											obj_t
																												BgL_carzd21922zd2_384;
																											BgL_carzd21922zd2_384 =
																												CAR
																												(BgL_cdrzd21917zd2_377);
																											if (PAIRP
																												(BgL_carzd21922zd2_384))
																												{	/* Expand/iarith.scm 36 */
																													obj_t
																														BgL_cdrzd21925zd2_386;
																													BgL_cdrzd21925zd2_386
																														=
																														CDR
																														(BgL_carzd21922zd2_384);
																													if ((CAR
																															(BgL_carzd21922zd2_384)
																															==
																															CNST_TABLE_REF((
																																	(long) 1))))
																														{	/* Expand/iarith.scm 36 */
																															if (PAIRP
																																(BgL_cdrzd21925zd2_386))
																																{	/* Expand/iarith.scm 36 */
																																	bool_t
																																		BgL_testz00_3000;
																																	{	/* Expand/iarith.scm 36 */
																																		obj_t
																																			BgL_auxz00_3001;
																																		BgL_auxz00_3001
																																			=
																																			CAR
																																			(BgL_cdrzd21925zd2_386);
																																		BgL_testz00_3000
																																			=
																																			SYMBOLP
																																			(BgL_auxz00_3001);
																																	}
																																	if (BgL_testz00_3000)
																																		{	/* Expand/iarith.scm 36 */
																																			if (NULLP
																																				(CDR
																																					(BgL_cdrzd21925zd2_386)))
																																				{	/* Expand/iarith.scm 36 */
																																					if (NULLP(CDR(BgL_cdrzd21917zd2_377)))
																																						{	/* Expand/iarith.scm 36 */
																																							return
																																								BFALSE;
																																						}
																																					else
																																						{	/* Expand/iarith.scm 36 */
																																							goto
																																								BgL_tagzd21394zd2_123;
																																						}
																																				}
																																			else
																																				{	/* Expand/iarith.scm 36 */
																																					obj_t
																																						BgL_cdrzd21939zd2_394;
																																					BgL_cdrzd21939zd2_394
																																						=
																																						CDR
																																						(BgL_cdrzd21400zd2_126);
																																					{	/* Expand/iarith.scm 36 */
																																						bool_t
																																							BgL_testz00_3011;
																																						{	/* Expand/iarith.scm 36 */
																																							obj_t
																																								BgL_auxz00_3012;
																																							BgL_auxz00_3012
																																								=
																																								CAR
																																								(BgL_cdrzd21400zd2_126);
																																							BgL_testz00_3011
																																								=
																																								CHARP
																																								(BgL_auxz00_3012);
																																						}
																																						if (BgL_testz00_3011)
																																							{	/* Expand/iarith.scm 36 */
																																								bool_t
																																									BgL_testz00_3015;
																																								{	/* Expand/iarith.scm 36 */
																																									obj_t
																																										BgL_auxz00_3016;
																																									BgL_auxz00_3016
																																										=
																																										CAR
																																										(BgL_cdrzd21939zd2_394);
																																									BgL_testz00_3015
																																										=
																																										CHARP
																																										(BgL_auxz00_3016);
																																								}
																																								if (BgL_testz00_3015)
																																									{	/* Expand/iarith.scm 36 */
																																										if (NULLP(CDR(BgL_cdrzd21939zd2_394)))
																																											{	/* Expand/iarith.scm 36 */
																																												return
																																													BFALSE;
																																											}
																																										else
																																											{	/* Expand/iarith.scm 36 */
																																												goto
																																													BgL_tagzd21394zd2_123;
																																											}
																																									}
																																								else
																																									{	/* Expand/iarith.scm 36 */
																																										obj_t
																																											BgL_cdrzd21951zd2_399;
																																										BgL_cdrzd21951zd2_399
																																											=
																																											CDR
																																											(BgL_xz00_1);
																																										{	/* Expand/iarith.scm 36 */
																																											obj_t
																																												BgL_cdrzd21955zd2_400;
																																											BgL_cdrzd21955zd2_400
																																												=
																																												CDR
																																												(BgL_cdrzd21951zd2_399);
																																											if (NULLP(CDR(BgL_cdrzd21955zd2_400)))
																																												{
																																													obj_t
																																														BgL_yz00_3029;
																																													obj_t
																																														BgL_xz00_3027;
																																													BgL_xz00_3027
																																														=
																																														CAR
																																														(BgL_cdrzd21951zd2_399);
																																													BgL_yz00_3029
																																														=
																																														CAR
																																														(BgL_cdrzd21955zd2_400);
																																													BgL_yz00_121
																																														=
																																														BgL_yz00_3029;
																																													BgL_xz00_120
																																														=
																																														BgL_xz00_3027;
																																													goto
																																														BgL_tagzd21393zd2_122;
																																												}
																																											else
																																												{	/* Expand/iarith.scm 36 */
																																													goto
																																														BgL_tagzd21394zd2_123;
																																												}
																																										}
																																									}
																																							}
																																						else
																																							{	/* Expand/iarith.scm 36 */
																																								obj_t
																																									BgL_cdrzd21966zd2_406;
																																								BgL_cdrzd21966zd2_406
																																									=
																																									CDR
																																									(BgL_xz00_1);
																																								{	/* Expand/iarith.scm 36 */
																																									obj_t
																																										BgL_cdrzd21970zd2_407;
																																									BgL_cdrzd21970zd2_407
																																										=
																																										CDR
																																										(BgL_cdrzd21966zd2_406);
																																									if (NULLP(CDR(BgL_cdrzd21970zd2_407)))
																																										{
																																											obj_t
																																												BgL_yz00_3038;
																																											obj_t
																																												BgL_xz00_3036;
																																											BgL_xz00_3036
																																												=
																																												CAR
																																												(BgL_cdrzd21966zd2_406);
																																											BgL_yz00_3038
																																												=
																																												CAR
																																												(BgL_cdrzd21970zd2_407);
																																											BgL_yz00_121
																																												=
																																												BgL_yz00_3038;
																																											BgL_xz00_120
																																												=
																																												BgL_xz00_3036;
																																											goto
																																												BgL_tagzd21393zd2_122;
																																										}
																																									else
																																										{	/* Expand/iarith.scm 36 */
																																											goto
																																												BgL_tagzd21394zd2_123;
																																										}
																																								}
																																							}
																																					}
																																				}
																																		}
																																	else
																																		{	/* Expand/iarith.scm 36 */
																																			obj_t
																																				BgL_cdrzd21981zd2_415;
																																			BgL_cdrzd21981zd2_415
																																				=
																																				CDR
																																				(BgL_cdrzd21400zd2_126);
																																			{	/* Expand/iarith.scm 36 */
																																				bool_t
																																					BgL_testz00_3041;
																																				{	/* Expand/iarith.scm 36 */
																																					obj_t
																																						BgL_auxz00_3042;
																																					BgL_auxz00_3042
																																						=
																																						CAR
																																						(BgL_cdrzd21400zd2_126);
																																					BgL_testz00_3041
																																						=
																																						CHARP
																																						(BgL_auxz00_3042);
																																				}
																																				if (BgL_testz00_3041)
																																					{	/* Expand/iarith.scm 36 */
																																						bool_t
																																							BgL_testz00_3045;
																																						{	/* Expand/iarith.scm 36 */
																																							obj_t
																																								BgL_auxz00_3046;
																																							BgL_auxz00_3046
																																								=
																																								CAR
																																								(BgL_cdrzd21981zd2_415);
																																							BgL_testz00_3045
																																								=
																																								CHARP
																																								(BgL_auxz00_3046);
																																						}
																																						if (BgL_testz00_3045)
																																							{	/* Expand/iarith.scm 36 */
																																								if (NULLP(CDR(BgL_cdrzd21981zd2_415)))
																																									{	/* Expand/iarith.scm 36 */
																																										return
																																											BFALSE;
																																									}
																																								else
																																									{	/* Expand/iarith.scm 36 */
																																										goto
																																											BgL_tagzd21394zd2_123;
																																									}
																																							}
																																						else
																																							{	/* Expand/iarith.scm 36 */
																																								obj_t
																																									BgL_cdrzd21993zd2_420;
																																								BgL_cdrzd21993zd2_420
																																									=
																																									CDR
																																									(BgL_xz00_1);
																																								{	/* Expand/iarith.scm 36 */
																																									obj_t
																																										BgL_cdrzd21997zd2_421;
																																									BgL_cdrzd21997zd2_421
																																										=
																																										CDR
																																										(BgL_cdrzd21993zd2_420);
																																									if (NULLP(CDR(BgL_cdrzd21997zd2_421)))
																																										{
																																											obj_t
																																												BgL_yz00_3059;
																																											obj_t
																																												BgL_xz00_3057;
																																											BgL_xz00_3057
																																												=
																																												CAR
																																												(BgL_cdrzd21993zd2_420);
																																											BgL_yz00_3059
																																												=
																																												CAR
																																												(BgL_cdrzd21997zd2_421);
																																											BgL_yz00_121
																																												=
																																												BgL_yz00_3059;
																																											BgL_xz00_120
																																												=
																																												BgL_xz00_3057;
																																											goto
																																												BgL_tagzd21393zd2_122;
																																										}
																																									else
																																										{	/* Expand/iarith.scm 36 */
																																											goto
																																												BgL_tagzd21394zd2_123;
																																										}
																																								}
																																							}
																																					}
																																				else
																																					{	/* Expand/iarith.scm 36 */
																																						obj_t
																																							BgL_cdrzd22008zd2_427;
																																						BgL_cdrzd22008zd2_427
																																							=
																																							CDR
																																							(BgL_xz00_1);
																																						{	/* Expand/iarith.scm 36 */
																																							obj_t
																																								BgL_cdrzd22012zd2_428;
																																							BgL_cdrzd22012zd2_428
																																								=
																																								CDR
																																								(BgL_cdrzd22008zd2_427);
																																							if (NULLP(CDR(BgL_cdrzd22012zd2_428)))
																																								{
																																									obj_t
																																										BgL_yz00_3068;
																																									obj_t
																																										BgL_xz00_3066;
																																									BgL_xz00_3066
																																										=
																																										CAR
																																										(BgL_cdrzd22008zd2_427);
																																									BgL_yz00_3068
																																										=
																																										CAR
																																										(BgL_cdrzd22012zd2_428);
																																									BgL_yz00_121
																																										=
																																										BgL_yz00_3068;
																																									BgL_xz00_120
																																										=
																																										BgL_xz00_3066;
																																									goto
																																										BgL_tagzd21393zd2_122;
																																								}
																																							else
																																								{	/* Expand/iarith.scm 36 */
																																									goto
																																										BgL_tagzd21394zd2_123;
																																								}
																																						}
																																					}
																																			}
																																		}
																																}
																															else
																																{	/* Expand/iarith.scm 36 */
																																	obj_t
																																		BgL_cdrzd22023zd2_436;
																																	BgL_cdrzd22023zd2_436
																																		=
																																		CDR
																																		(BgL_cdrzd21400zd2_126);
																																	{	/* Expand/iarith.scm 36 */
																																		bool_t
																																			BgL_testz00_3071;
																																		{	/* Expand/iarith.scm 36 */
																																			obj_t
																																				BgL_auxz00_3072;
																																			BgL_auxz00_3072
																																				=
																																				CAR
																																				(BgL_cdrzd21400zd2_126);
																																			BgL_testz00_3071
																																				=
																																				CHARP
																																				(BgL_auxz00_3072);
																																		}
																																		if (BgL_testz00_3071)
																																			{	/* Expand/iarith.scm 36 */
																																				bool_t
																																					BgL_testz00_3075;
																																				{	/* Expand/iarith.scm 36 */
																																					obj_t
																																						BgL_auxz00_3076;
																																					BgL_auxz00_3076
																																						=
																																						CAR
																																						(BgL_cdrzd22023zd2_436);
																																					BgL_testz00_3075
																																						=
																																						CHARP
																																						(BgL_auxz00_3076);
																																				}
																																				if (BgL_testz00_3075)
																																					{	/* Expand/iarith.scm 36 */
																																						if (NULLP(CDR(BgL_cdrzd22023zd2_436)))
																																							{	/* Expand/iarith.scm 36 */
																																								return
																																									BFALSE;
																																							}
																																						else
																																							{	/* Expand/iarith.scm 36 */
																																								goto
																																									BgL_tagzd21394zd2_123;
																																							}
																																					}
																																				else
																																					{	/* Expand/iarith.scm 36 */
																																						obj_t
																																							BgL_cdrzd22035zd2_441;
																																						BgL_cdrzd22035zd2_441
																																							=
																																							CDR
																																							(BgL_xz00_1);
																																						{	/* Expand/iarith.scm 36 */
																																							obj_t
																																								BgL_cdrzd22039zd2_442;
																																							BgL_cdrzd22039zd2_442
																																								=
																																								CDR
																																								(BgL_cdrzd22035zd2_441);
																																							if (NULLP(CDR(BgL_cdrzd22039zd2_442)))
																																								{
																																									obj_t
																																										BgL_yz00_3089;
																																									obj_t
																																										BgL_xz00_3087;
																																									BgL_xz00_3087
																																										=
																																										CAR
																																										(BgL_cdrzd22035zd2_441);
																																									BgL_yz00_3089
																																										=
																																										CAR
																																										(BgL_cdrzd22039zd2_442);
																																									BgL_yz00_121
																																										=
																																										BgL_yz00_3089;
																																									BgL_xz00_120
																																										=
																																										BgL_xz00_3087;
																																									goto
																																										BgL_tagzd21393zd2_122;
																																								}
																																							else
																																								{	/* Expand/iarith.scm 36 */
																																									goto
																																										BgL_tagzd21394zd2_123;
																																								}
																																						}
																																					}
																																			}
																																		else
																																			{	/* Expand/iarith.scm 36 */
																																				obj_t
																																					BgL_cdrzd22050zd2_448;
																																				BgL_cdrzd22050zd2_448
																																					=
																																					CDR
																																					(BgL_xz00_1);
																																				{	/* Expand/iarith.scm 36 */
																																					obj_t
																																						BgL_cdrzd22054zd2_449;
																																					BgL_cdrzd22054zd2_449
																																						=
																																						CDR
																																						(BgL_cdrzd22050zd2_448);
																																					if (NULLP(CDR(BgL_cdrzd22054zd2_449)))
																																						{
																																							obj_t
																																								BgL_yz00_3098;
																																							obj_t
																																								BgL_xz00_3096;
																																							BgL_xz00_3096
																																								=
																																								CAR
																																								(BgL_cdrzd22050zd2_448);
																																							BgL_yz00_3098
																																								=
																																								CAR
																																								(BgL_cdrzd22054zd2_449);
																																							BgL_yz00_121
																																								=
																																								BgL_yz00_3098;
																																							BgL_xz00_120
																																								=
																																								BgL_xz00_3096;
																																							goto
																																								BgL_tagzd21393zd2_122;
																																						}
																																					else
																																						{	/* Expand/iarith.scm 36 */
																																							goto
																																								BgL_tagzd21394zd2_123;
																																						}
																																				}
																																			}
																																	}
																																}
																														}
																													else
																														{	/* Expand/iarith.scm 36 */
																															obj_t
																																BgL_cdrzd22065zd2_456;
																															BgL_cdrzd22065zd2_456
																																=
																																CDR
																																(BgL_cdrzd21400zd2_126);
																															{	/* Expand/iarith.scm 36 */
																																bool_t
																																	BgL_testz00_3101;
																																{	/* Expand/iarith.scm 36 */
																																	obj_t
																																		BgL_auxz00_3102;
																																	BgL_auxz00_3102
																																		=
																																		CAR
																																		(BgL_cdrzd21400zd2_126);
																																	BgL_testz00_3101
																																		=
																																		CHARP
																																		(BgL_auxz00_3102);
																																}
																																if (BgL_testz00_3101)
																																	{	/* Expand/iarith.scm 36 */
																																		bool_t
																																			BgL_testz00_3105;
																																		{	/* Expand/iarith.scm 36 */
																																			obj_t
																																				BgL_auxz00_3106;
																																			BgL_auxz00_3106
																																				=
																																				CAR
																																				(BgL_cdrzd22065zd2_456);
																																			BgL_testz00_3105
																																				=
																																				CHARP
																																				(BgL_auxz00_3106);
																																		}
																																		if (BgL_testz00_3105)
																																			{	/* Expand/iarith.scm 36 */
																																				if (NULLP(CDR(BgL_cdrzd22065zd2_456)))
																																					{	/* Expand/iarith.scm 36 */
																																						return
																																							BFALSE;
																																					}
																																				else
																																					{	/* Expand/iarith.scm 36 */
																																						goto
																																							BgL_tagzd21394zd2_123;
																																					}
																																			}
																																		else
																																			{	/* Expand/iarith.scm 36 */
																																				obj_t
																																					BgL_cdrzd22077zd2_461;
																																				BgL_cdrzd22077zd2_461
																																					=
																																					CDR
																																					(BgL_xz00_1);
																																				{	/* Expand/iarith.scm 36 */
																																					obj_t
																																						BgL_cdrzd22081zd2_462;
																																					BgL_cdrzd22081zd2_462
																																						=
																																						CDR
																																						(BgL_cdrzd22077zd2_461);
																																					if (NULLP(CDR(BgL_cdrzd22081zd2_462)))
																																						{
																																							obj_t
																																								BgL_yz00_3119;
																																							obj_t
																																								BgL_xz00_3117;
																																							BgL_xz00_3117
																																								=
																																								CAR
																																								(BgL_cdrzd22077zd2_461);
																																							BgL_yz00_3119
																																								=
																																								CAR
																																								(BgL_cdrzd22081zd2_462);
																																							BgL_yz00_121
																																								=
																																								BgL_yz00_3119;
																																							BgL_xz00_120
																																								=
																																								BgL_xz00_3117;
																																							goto
																																								BgL_tagzd21393zd2_122;
																																						}
																																					else
																																						{	/* Expand/iarith.scm 36 */
																																							goto
																																								BgL_tagzd21394zd2_123;
																																						}
																																				}
																																			}
																																	}
																																else
																																	{	/* Expand/iarith.scm 36 */
																																		obj_t
																																			BgL_cdrzd22092zd2_468;
																																		BgL_cdrzd22092zd2_468
																																			=
																																			CDR
																																			(BgL_xz00_1);
																																		{	/* Expand/iarith.scm 36 */
																																			obj_t
																																				BgL_cdrzd22096zd2_469;
																																			BgL_cdrzd22096zd2_469
																																				=
																																				CDR
																																				(BgL_cdrzd22092zd2_468);
																																			if (NULLP
																																				(CDR
																																					(BgL_cdrzd22096zd2_469)))
																																				{
																																					obj_t
																																						BgL_yz00_3128;
																																					obj_t
																																						BgL_xz00_3126;
																																					BgL_xz00_3126
																																						=
																																						CAR
																																						(BgL_cdrzd22092zd2_468);
																																					BgL_yz00_3128
																																						=
																																						CAR
																																						(BgL_cdrzd22096zd2_469);
																																					BgL_yz00_121
																																						=
																																						BgL_yz00_3128;
																																					BgL_xz00_120
																																						=
																																						BgL_xz00_3126;
																																					goto
																																						BgL_tagzd21393zd2_122;
																																				}
																																			else
																																				{	/* Expand/iarith.scm 36 */
																																					goto
																																						BgL_tagzd21394zd2_123;
																																				}
																																		}
																																	}
																															}
																														}
																												}
																											else
																												{	/* Expand/iarith.scm 36 */
																													obj_t
																														BgL_cdrzd22107zd2_478;
																													BgL_cdrzd22107zd2_478
																														=
																														CDR
																														(BgL_cdrzd21400zd2_126);
																													{	/* Expand/iarith.scm 36 */
																														bool_t
																															BgL_testz00_3131;
																														{	/* Expand/iarith.scm 36 */
																															obj_t
																																BgL_auxz00_3132;
																															BgL_auxz00_3132 =
																																CAR
																																(BgL_cdrzd21400zd2_126);
																															BgL_testz00_3131 =
																																CHARP
																																(BgL_auxz00_3132);
																														}
																														if (BgL_testz00_3131)
																															{	/* Expand/iarith.scm 36 */
																																bool_t
																																	BgL_testz00_3135;
																																{	/* Expand/iarith.scm 36 */
																																	obj_t
																																		BgL_auxz00_3136;
																																	BgL_auxz00_3136
																																		=
																																		CAR
																																		(BgL_cdrzd22107zd2_478);
																																	BgL_testz00_3135
																																		=
																																		CHARP
																																		(BgL_auxz00_3136);
																																}
																																if (BgL_testz00_3135)
																																	{	/* Expand/iarith.scm 36 */
																																		if (NULLP
																																			(CDR
																																				(BgL_cdrzd22107zd2_478)))
																																			{	/* Expand/iarith.scm 36 */
																																				return
																																					BFALSE;
																																			}
																																		else
																																			{	/* Expand/iarith.scm 36 */
																																				goto
																																					BgL_tagzd21394zd2_123;
																																			}
																																	}
																																else
																																	{	/* Expand/iarith.scm 36 */
																																		obj_t
																																			BgL_cdrzd22119zd2_483;
																																		BgL_cdrzd22119zd2_483
																																			=
																																			CDR
																																			(BgL_xz00_1);
																																		{	/* Expand/iarith.scm 36 */
																																			obj_t
																																				BgL_cdrzd22123zd2_484;
																																			BgL_cdrzd22123zd2_484
																																				=
																																				CDR
																																				(BgL_cdrzd22119zd2_483);
																																			if (NULLP
																																				(CDR
																																					(BgL_cdrzd22123zd2_484)))
																																				{
																																					obj_t
																																						BgL_yz00_3149;
																																					obj_t
																																						BgL_xz00_3147;
																																					BgL_xz00_3147
																																						=
																																						CAR
																																						(BgL_cdrzd22119zd2_483);
																																					BgL_yz00_3149
																																						=
																																						CAR
																																						(BgL_cdrzd22123zd2_484);
																																					BgL_yz00_121
																																						=
																																						BgL_yz00_3149;
																																					BgL_xz00_120
																																						=
																																						BgL_xz00_3147;
																																					goto
																																						BgL_tagzd21393zd2_122;
																																				}
																																			else
																																				{	/* Expand/iarith.scm 36 */
																																					goto
																																						BgL_tagzd21394zd2_123;
																																				}
																																		}
																																	}
																															}
																														else
																															{	/* Expand/iarith.scm 36 */
																																obj_t
																																	BgL_cdrzd22134zd2_490;
																																BgL_cdrzd22134zd2_490
																																	=
																																	CDR
																																	(BgL_xz00_1);
																																{	/* Expand/iarith.scm 36 */
																																	obj_t
																																		BgL_cdrzd22138zd2_491;
																																	BgL_cdrzd22138zd2_491
																																		=
																																		CDR
																																		(BgL_cdrzd22134zd2_490);
																																	if (NULLP(CDR
																																			(BgL_cdrzd22138zd2_491)))
																																		{
																																			obj_t
																																				BgL_yz00_3158;
																																			obj_t
																																				BgL_xz00_3156;
																																			BgL_xz00_3156
																																				=
																																				CAR
																																				(BgL_cdrzd22134zd2_490);
																																			BgL_yz00_3158
																																				=
																																				CAR
																																				(BgL_cdrzd22138zd2_491);
																																			BgL_yz00_121
																																				=
																																				BgL_yz00_3158;
																																			BgL_xz00_120
																																				=
																																				BgL_xz00_3156;
																																			goto
																																				BgL_tagzd21393zd2_122;
																																		}
																																	else
																																		{	/* Expand/iarith.scm 36 */
																																			goto
																																				BgL_tagzd21394zd2_123;
																																		}
																																}
																															}
																													}
																												}
																										}
																									else
																										{	/* Expand/iarith.scm 36 */
																											obj_t
																												BgL_cdrzd22149zd2_498;
																											BgL_cdrzd22149zd2_498 =
																												CDR
																												(BgL_cdrzd21400zd2_126);
																											{	/* Expand/iarith.scm 36 */
																												bool_t BgL_testz00_3161;

																												{	/* Expand/iarith.scm 36 */
																													obj_t BgL_auxz00_3162;

																													BgL_auxz00_3162 =
																														CAR
																														(BgL_cdrzd21400zd2_126);
																													BgL_testz00_3161 =
																														CHARP
																														(BgL_auxz00_3162);
																												}
																												if (BgL_testz00_3161)
																													{	/* Expand/iarith.scm 36 */
																														bool_t
																															BgL_testz00_3165;
																														{	/* Expand/iarith.scm 36 */
																															obj_t
																																BgL_auxz00_3166;
																															BgL_auxz00_3166 =
																																CAR
																																(BgL_cdrzd22149zd2_498);
																															BgL_testz00_3165 =
																																CHARP
																																(BgL_auxz00_3166);
																														}
																														if (BgL_testz00_3165)
																															{	/* Expand/iarith.scm 36 */
																																if (NULLP(CDR
																																		(BgL_cdrzd22149zd2_498)))
																																	{	/* Expand/iarith.scm 36 */
																																		return
																																			BFALSE;
																																	}
																																else
																																	{	/* Expand/iarith.scm 36 */
																																		goto
																																			BgL_tagzd21394zd2_123;
																																	}
																															}
																														else
																															{	/* Expand/iarith.scm 36 */
																																obj_t
																																	BgL_cdrzd22161zd2_503;
																																BgL_cdrzd22161zd2_503
																																	=
																																	CDR
																																	(BgL_xz00_1);
																																{	/* Expand/iarith.scm 36 */
																																	obj_t
																																		BgL_cdrzd22165zd2_504;
																																	BgL_cdrzd22165zd2_504
																																		=
																																		CDR
																																		(BgL_cdrzd22161zd2_503);
																																	if (NULLP(CDR
																																			(BgL_cdrzd22165zd2_504)))
																																		{
																																			obj_t
																																				BgL_yz00_3179;
																																			obj_t
																																				BgL_xz00_3177;
																																			BgL_xz00_3177
																																				=
																																				CAR
																																				(BgL_cdrzd22161zd2_503);
																																			BgL_yz00_3179
																																				=
																																				CAR
																																				(BgL_cdrzd22165zd2_504);
																																			BgL_yz00_121
																																				=
																																				BgL_yz00_3179;
																																			BgL_xz00_120
																																				=
																																				BgL_xz00_3177;
																																			goto
																																				BgL_tagzd21393zd2_122;
																																		}
																																	else
																																		{	/* Expand/iarith.scm 36 */
																																			goto
																																				BgL_tagzd21394zd2_123;
																																		}
																																}
																															}
																													}
																												else
																													{	/* Expand/iarith.scm 36 */
																														obj_t
																															BgL_cdrzd22176zd2_510;
																														BgL_cdrzd22176zd2_510
																															= CDR(BgL_xz00_1);
																														{	/* Expand/iarith.scm 36 */
																															obj_t
																																BgL_cdrzd22180zd2_511;
																															BgL_cdrzd22180zd2_511
																																=
																																CDR
																																(BgL_cdrzd22176zd2_510);
																															if (NULLP(CDR
																																	(BgL_cdrzd22180zd2_511)))
																																{
																																	obj_t
																																		BgL_yz00_3188;
																																	obj_t
																																		BgL_xz00_3186;
																																	BgL_xz00_3186
																																		=
																																		CAR
																																		(BgL_cdrzd22176zd2_510);
																																	BgL_yz00_3188
																																		=
																																		CAR
																																		(BgL_cdrzd22180zd2_511);
																																	BgL_yz00_121 =
																																		BgL_yz00_3188;
																																	BgL_xz00_120 =
																																		BgL_xz00_3186;
																																	goto
																																		BgL_tagzd21393zd2_122;
																																}
																															else
																																{	/* Expand/iarith.scm 36 */
																																	goto
																																		BgL_tagzd21394zd2_123;
																																}
																														}
																													}
																											}
																										}
																								}
																							else
																								{	/* Expand/iarith.scm 36 */
																									obj_t BgL_cdrzd22191zd2_519;

																									BgL_cdrzd22191zd2_519 =
																										CDR(BgL_cdrzd21400zd2_126);
																									{	/* Expand/iarith.scm 36 */
																										bool_t BgL_testz00_3191;

																										{	/* Expand/iarith.scm 36 */
																											obj_t BgL_auxz00_3192;

																											BgL_auxz00_3192 =
																												CAR
																												(BgL_cdrzd21400zd2_126);
																											BgL_testz00_3191 =
																												CHARP(BgL_auxz00_3192);
																										}
																										if (BgL_testz00_3191)
																											{	/* Expand/iarith.scm 36 */
																												bool_t BgL_testz00_3195;

																												{	/* Expand/iarith.scm 36 */
																													obj_t BgL_auxz00_3196;

																													BgL_auxz00_3196 =
																														CAR
																														(BgL_cdrzd22191zd2_519);
																													BgL_testz00_3195 =
																														CHARP
																														(BgL_auxz00_3196);
																												}
																												if (BgL_testz00_3195)
																													{	/* Expand/iarith.scm 36 */
																														if (NULLP(CDR
																																(BgL_cdrzd22191zd2_519)))
																															{	/* Expand/iarith.scm 36 */
																																return BFALSE;
																															}
																														else
																															{	/* Expand/iarith.scm 36 */
																																goto
																																	BgL_tagzd21394zd2_123;
																															}
																													}
																												else
																													{	/* Expand/iarith.scm 36 */
																														obj_t
																															BgL_cdrzd22203zd2_524;
																														BgL_cdrzd22203zd2_524
																															= CDR(BgL_xz00_1);
																														{	/* Expand/iarith.scm 36 */
																															obj_t
																																BgL_cdrzd22207zd2_525;
																															BgL_cdrzd22207zd2_525
																																=
																																CDR
																																(BgL_cdrzd22203zd2_524);
																															if (NULLP(CDR
																																	(BgL_cdrzd22207zd2_525)))
																																{
																																	obj_t
																																		BgL_yz00_3209;
																																	obj_t
																																		BgL_xz00_3207;
																																	BgL_xz00_3207
																																		=
																																		CAR
																																		(BgL_cdrzd22203zd2_524);
																																	BgL_yz00_3209
																																		=
																																		CAR
																																		(BgL_cdrzd22207zd2_525);
																																	BgL_yz00_121 =
																																		BgL_yz00_3209;
																																	BgL_xz00_120 =
																																		BgL_xz00_3207;
																																	goto
																																		BgL_tagzd21393zd2_122;
																																}
																															else
																																{	/* Expand/iarith.scm 36 */
																																	goto
																																		BgL_tagzd21394zd2_123;
																																}
																														}
																													}
																											}
																										else
																											{	/* Expand/iarith.scm 36 */
																												obj_t
																													BgL_cdrzd22218zd2_531;
																												BgL_cdrzd22218zd2_531 =
																													CDR(BgL_xz00_1);
																												{	/* Expand/iarith.scm 36 */
																													obj_t
																														BgL_cdrzd22222zd2_532;
																													BgL_cdrzd22222zd2_532
																														=
																														CDR
																														(BgL_cdrzd22218zd2_531);
																													if (NULLP(CDR
																															(BgL_cdrzd22222zd2_532)))
																														{
																															obj_t
																																BgL_yz00_3218;
																															obj_t
																																BgL_xz00_3216;
																															BgL_xz00_3216 =
																																CAR
																																(BgL_cdrzd22218zd2_531);
																															BgL_yz00_3218 =
																																CAR
																																(BgL_cdrzd22222zd2_532);
																															BgL_yz00_121 =
																																BgL_yz00_3218;
																															BgL_xz00_120 =
																																BgL_xz00_3216;
																															goto
																																BgL_tagzd21393zd2_122;
																														}
																													else
																														{	/* Expand/iarith.scm 36 */
																															goto
																																BgL_tagzd21394zd2_123;
																														}
																												}
																											}
																									}
																								}
																						}
																					else
																						{	/* Expand/iarith.scm 36 */
																							obj_t BgL_cdrzd22233zd2_540;

																							BgL_cdrzd22233zd2_540 =
																								CDR(BgL_cdrzd21400zd2_126);
																							{	/* Expand/iarith.scm 36 */
																								bool_t BgL_testz00_3221;

																								{	/* Expand/iarith.scm 36 */
																									obj_t BgL_auxz00_3222;

																									BgL_auxz00_3222 =
																										CAR(BgL_cdrzd21400zd2_126);
																									BgL_testz00_3221 =
																										CHARP(BgL_auxz00_3222);
																								}
																								if (BgL_testz00_3221)
																									{	/* Expand/iarith.scm 36 */
																										bool_t BgL_testz00_3225;

																										{	/* Expand/iarith.scm 36 */
																											obj_t BgL_auxz00_3226;

																											BgL_auxz00_3226 =
																												CAR
																												(BgL_cdrzd22233zd2_540);
																											BgL_testz00_3225 =
																												CHARP(BgL_auxz00_3226);
																										}
																										if (BgL_testz00_3225)
																											{	/* Expand/iarith.scm 36 */
																												if (NULLP(CDR
																														(BgL_cdrzd22233zd2_540)))
																													{	/* Expand/iarith.scm 36 */
																														return BFALSE;
																													}
																												else
																													{	/* Expand/iarith.scm 36 */
																														goto
																															BgL_tagzd21394zd2_123;
																													}
																											}
																										else
																											{	/* Expand/iarith.scm 36 */
																												obj_t
																													BgL_cdrzd22245zd2_545;
																												BgL_cdrzd22245zd2_545 =
																													CDR(BgL_xz00_1);
																												{	/* Expand/iarith.scm 36 */
																													obj_t
																														BgL_cdrzd22249zd2_546;
																													BgL_cdrzd22249zd2_546
																														=
																														CDR
																														(BgL_cdrzd22245zd2_545);
																													if (NULLP(CDR
																															(BgL_cdrzd22249zd2_546)))
																														{
																															obj_t
																																BgL_yz00_3239;
																															obj_t
																																BgL_xz00_3237;
																															BgL_xz00_3237 =
																																CAR
																																(BgL_cdrzd22245zd2_545);
																															BgL_yz00_3239 =
																																CAR
																																(BgL_cdrzd22249zd2_546);
																															BgL_yz00_121 =
																																BgL_yz00_3239;
																															BgL_xz00_120 =
																																BgL_xz00_3237;
																															goto
																																BgL_tagzd21393zd2_122;
																														}
																													else
																														{	/* Expand/iarith.scm 36 */
																															goto
																																BgL_tagzd21394zd2_123;
																														}
																												}
																											}
																									}
																								else
																									{	/* Expand/iarith.scm 36 */
																										obj_t BgL_cdrzd22260zd2_552;

																										BgL_cdrzd22260zd2_552 =
																											CDR(BgL_xz00_1);
																										{	/* Expand/iarith.scm 36 */
																											obj_t
																												BgL_cdrzd22264zd2_553;
																											BgL_cdrzd22264zd2_553 =
																												CDR
																												(BgL_cdrzd22260zd2_552);
																											if (NULLP(CDR
																													(BgL_cdrzd22264zd2_553)))
																												{
																													obj_t BgL_yz00_3248;

																													obj_t BgL_xz00_3246;

																													BgL_xz00_3246 =
																														CAR
																														(BgL_cdrzd22260zd2_552);
																													BgL_yz00_3248 =
																														CAR
																														(BgL_cdrzd22264zd2_553);
																													BgL_yz00_121 =
																														BgL_yz00_3248;
																													BgL_xz00_120 =
																														BgL_xz00_3246;
																													goto
																														BgL_tagzd21393zd2_122;
																												}
																											else
																												{	/* Expand/iarith.scm 36 */
																													goto
																														BgL_tagzd21394zd2_123;
																												}
																										}
																									}
																							}
																						}
																				}
																			else
																				{	/* Expand/iarith.scm 36 */
																					obj_t BgL_cdrzd22275zd2_560;

																					BgL_cdrzd22275zd2_560 =
																						CDR(BgL_cdrzd21400zd2_126);
																					{	/* Expand/iarith.scm 36 */
																						bool_t BgL_testz00_3251;

																						{	/* Expand/iarith.scm 36 */
																							obj_t BgL_auxz00_3252;

																							BgL_auxz00_3252 =
																								CAR(BgL_cdrzd21400zd2_126);
																							BgL_testz00_3251 =
																								CHARP(BgL_auxz00_3252);
																						}
																						if (BgL_testz00_3251)
																							{	/* Expand/iarith.scm 36 */
																								bool_t BgL_testz00_3255;

																								{	/* Expand/iarith.scm 36 */
																									obj_t BgL_auxz00_3256;

																									BgL_auxz00_3256 =
																										CAR(BgL_cdrzd22275zd2_560);
																									BgL_testz00_3255 =
																										CHARP(BgL_auxz00_3256);
																								}
																								if (BgL_testz00_3255)
																									{	/* Expand/iarith.scm 36 */
																										if (NULLP(CDR
																												(BgL_cdrzd22275zd2_560)))
																											{	/* Expand/iarith.scm 36 */
																												return BFALSE;
																											}
																										else
																											{	/* Expand/iarith.scm 36 */
																												goto
																													BgL_tagzd21394zd2_123;
																											}
																									}
																								else
																									{	/* Expand/iarith.scm 36 */
																										obj_t BgL_cdrzd22287zd2_565;

																										BgL_cdrzd22287zd2_565 =
																											CDR(BgL_xz00_1);
																										{	/* Expand/iarith.scm 36 */
																											obj_t
																												BgL_cdrzd22291zd2_566;
																											BgL_cdrzd22291zd2_566 =
																												CDR
																												(BgL_cdrzd22287zd2_565);
																											if (NULLP(CDR
																													(BgL_cdrzd22291zd2_566)))
																												{
																													obj_t BgL_yz00_3269;

																													obj_t BgL_xz00_3267;

																													BgL_xz00_3267 =
																														CAR
																														(BgL_cdrzd22287zd2_565);
																													BgL_yz00_3269 =
																														CAR
																														(BgL_cdrzd22291zd2_566);
																													BgL_yz00_121 =
																														BgL_yz00_3269;
																													BgL_xz00_120 =
																														BgL_xz00_3267;
																													goto
																														BgL_tagzd21393zd2_122;
																												}
																											else
																												{	/* Expand/iarith.scm 36 */
																													goto
																														BgL_tagzd21394zd2_123;
																												}
																										}
																									}
																							}
																						else
																							{	/* Expand/iarith.scm 36 */
																								obj_t BgL_cdrzd22302zd2_572;

																								BgL_cdrzd22302zd2_572 =
																									CDR(BgL_xz00_1);
																								{	/* Expand/iarith.scm 36 */
																									obj_t BgL_cdrzd22306zd2_573;

																									BgL_cdrzd22306zd2_573 =
																										CDR(BgL_cdrzd22302zd2_572);
																									if (NULLP(CDR
																											(BgL_cdrzd22306zd2_573)))
																										{
																											obj_t BgL_yz00_3278;

																											obj_t BgL_xz00_3276;

																											BgL_xz00_3276 =
																												CAR
																												(BgL_cdrzd22302zd2_572);
																											BgL_yz00_3278 =
																												CAR
																												(BgL_cdrzd22306zd2_573);
																											BgL_yz00_121 =
																												BgL_yz00_3278;
																											BgL_xz00_120 =
																												BgL_xz00_3276;
																											goto
																												BgL_tagzd21393zd2_122;
																										}
																									else
																										{	/* Expand/iarith.scm 36 */
																											goto
																												BgL_tagzd21394zd2_123;
																										}
																								}
																							}
																					}
																				}
																		}
																	else
																		{	/* Expand/iarith.scm 36 */
																			bool_t BgL_testz00_3280;

																			{	/* Expand/iarith.scm 36 */
																				obj_t BgL_auxz00_3281;

																				BgL_auxz00_3281 =
																					CAR(BgL_cdrzd21400zd2_126);
																				BgL_testz00_3280 =
																					CHARP(BgL_auxz00_3281);
																			}
																			if (BgL_testz00_3280)
																				{	/* Expand/iarith.scm 36 */
																					bool_t BgL_testz00_3284;

																					{	/* Expand/iarith.scm 36 */
																						obj_t BgL_auxz00_3285;

																						BgL_auxz00_3285 =
																							CAR(BgL_cdrzd21917zd2_377);
																						BgL_testz00_3284 =
																							CHARP(BgL_auxz00_3285);
																					}
																					if (BgL_testz00_3284)
																						{	/* Expand/iarith.scm 36 */
																							if (NULLP(CDR
																									(BgL_cdrzd21917zd2_377)))
																								{	/* Expand/iarith.scm 36 */
																									return BFALSE;
																								}
																							else
																								{	/* Expand/iarith.scm 36 */
																									goto BgL_tagzd21394zd2_123;
																								}
																						}
																					else
																						{	/* Expand/iarith.scm 36 */
																							obj_t BgL_cdrzd22331zd2_587;

																							BgL_cdrzd22331zd2_587 =
																								CDR(BgL_xz00_1);
																							{	/* Expand/iarith.scm 36 */
																								obj_t BgL_cdrzd22336zd2_588;

																								BgL_cdrzd22336zd2_588 =
																									CDR(BgL_cdrzd22331zd2_587);
																								if (NULLP(CDR
																										(BgL_cdrzd22336zd2_588)))
																									{
																										obj_t BgL_yz00_3298;

																										obj_t BgL_xz00_3296;

																										BgL_xz00_3296 =
																											CAR
																											(BgL_cdrzd22331zd2_587);
																										BgL_yz00_3298 =
																											CAR
																											(BgL_cdrzd22336zd2_588);
																										BgL_yz00_121 =
																											BgL_yz00_3298;
																										BgL_xz00_120 =
																											BgL_xz00_3296;
																										goto BgL_tagzd21393zd2_122;
																									}
																								else
																									{	/* Expand/iarith.scm 36 */
																										goto BgL_tagzd21394zd2_123;
																									}
																							}
																						}
																				}
																			else
																				{	/* Expand/iarith.scm 36 */
																					obj_t BgL_cdrzd22349zd2_594;

																					BgL_cdrzd22349zd2_594 =
																						CDR(BgL_xz00_1);
																					{	/* Expand/iarith.scm 36 */
																						obj_t BgL_cdrzd22354zd2_595;

																						BgL_cdrzd22354zd2_595 =
																							CDR(BgL_cdrzd22349zd2_594);
																						if (NULLP(CDR
																								(BgL_cdrzd22354zd2_595)))
																							{
																								obj_t BgL_yz00_3307;

																								obj_t BgL_xz00_3305;

																								BgL_xz00_3305 =
																									CAR(BgL_cdrzd22349zd2_594);
																								BgL_yz00_3307 =
																									CAR(BgL_cdrzd22354zd2_595);
																								BgL_yz00_121 = BgL_yz00_3307;
																								BgL_xz00_120 = BgL_xz00_3305;
																								goto BgL_tagzd21393zd2_122;
																							}
																						else
																							{	/* Expand/iarith.scm 36 */
																								goto BgL_tagzd21394zd2_123;
																							}
																					}
																				}
																		}
																}
														}
												}
											else
												{	/* Expand/iarith.scm 36 */
													goto BgL_tagzd21394zd2_123;
												}
										}
									else
										{	/* Expand/iarith.scm 36 */
											obj_t BgL_carzd22379zd2_603;

											obj_t BgL_cdrzd22380zd2_604;

											BgL_carzd22379zd2_603 = CAR(BgL_cdrzd21400zd2_126);
											BgL_cdrzd22380zd2_604 = CDR(BgL_cdrzd21400zd2_126);
											if (PAIRP(BgL_carzd22379zd2_603))
												{	/* Expand/iarith.scm 36 */
													obj_t BgL_cdrzd22383zd2_606;

													BgL_cdrzd22383zd2_606 = CDR(BgL_carzd22379zd2_603);
													if (
														(CAR(BgL_carzd22379zd2_603) ==
															CNST_TABLE_REF(((long) 1))))
														{	/* Expand/iarith.scm 36 */
															if (PAIRP(BgL_cdrzd22383zd2_606))
																{	/* Expand/iarith.scm 36 */
																	obj_t BgL_yz00_609;

																	BgL_yz00_609 = CAR(BgL_cdrzd22383zd2_606);
																	if (NULLP(CDR(BgL_cdrzd22383zd2_606)))
																		{	/* Expand/iarith.scm 36 */
																			if (PAIRP(BgL_cdrzd22380zd2_604))
																				{	/* Expand/iarith.scm 36 */
																					obj_t BgL_carzd22389zd2_612;

																					BgL_carzd22389zd2_612 =
																						CAR(BgL_cdrzd22380zd2_604);
																					if (PAIRP(BgL_carzd22389zd2_612))
																						{	/* Expand/iarith.scm 36 */
																							obj_t BgL_cdrzd22393zd2_614;

																							BgL_cdrzd22393zd2_614 =
																								CDR(BgL_carzd22389zd2_612);
																							if (
																								(CAR(BgL_carzd22389zd2_612) ==
																									CNST_TABLE_REF(((long) 1))))
																								{	/* Expand/iarith.scm 36 */
																									if (PAIRP
																										(BgL_cdrzd22393zd2_614))
																										{	/* Expand/iarith.scm 36 */
																											if (
																												(BgL_yz00_609 ==
																													CAR
																													(BgL_cdrzd22393zd2_614)))
																												{	/* Expand/iarith.scm 36 */
																													if (NULLP(CDR
																															(BgL_cdrzd22393zd2_614)))
																														{	/* Expand/iarith.scm 36 */
																															if (NULLP(CDR
																																	(BgL_cdrzd22380zd2_604)))
																																{	/* Expand/iarith.scm 36 */
																																	return BTRUE;
																																}
																															else
																																{	/* Expand/iarith.scm 36 */
																																	goto
																																		BgL_tagzd21394zd2_123;
																																}
																														}
																													else
																														{	/* Expand/iarith.scm 36 */
																															obj_t
																																BgL_cdrzd22411zd2_621;
																															BgL_cdrzd22411zd2_621
																																=
																																CDR(BgL_xz00_1);
																															{	/* Expand/iarith.scm 36 */
																																obj_t
																																	BgL_cdrzd22413zd2_622;
																																BgL_cdrzd22413zd2_622
																																	=
																																	CDR
																																	(BgL_cdrzd22411zd2_621);
																																{	/* Expand/iarith.scm 36 */
																																	bool_t
																																		BgL_testz00_3347;
																																	{	/* Expand/iarith.scm 36 */
																																		obj_t
																																			BgL_auxz00_3348;
																																		BgL_auxz00_3348
																																			=
																																			CAR
																																			(BgL_cdrzd22411zd2_621);
																																		BgL_testz00_3347
																																			=
																																			CHARP
																																			(BgL_auxz00_3348);
																																	}
																																	if (BgL_testz00_3347)
																																		{	/* Expand/iarith.scm 36 */
																																			bool_t
																																				BgL_testz00_3351;
																																			{	/* Expand/iarith.scm 36 */
																																				obj_t
																																					BgL_auxz00_3352;
																																				BgL_auxz00_3352
																																					=
																																					CAR
																																					(BgL_cdrzd22413zd2_622);
																																				BgL_testz00_3351
																																					=
																																					CHARP
																																					(BgL_auxz00_3352);
																																			}
																																			if (BgL_testz00_3351)
																																				{	/* Expand/iarith.scm 36 */
																																					if (NULLP(CDR(BgL_cdrzd22413zd2_622)))
																																						{	/* Expand/iarith.scm 36 */
																																							return
																																								BFALSE;
																																						}
																																					else
																																						{	/* Expand/iarith.scm 36 */
																																							goto
																																								BgL_tagzd21394zd2_123;
																																						}
																																				}
																																			else
																																				{	/* Expand/iarith.scm 36 */
																																					if (NULLP(CDR(BgL_cdrzd22413zd2_622)))
																																						{
																																							obj_t
																																								BgL_yz00_3363;
																																							obj_t
																																								BgL_xz00_3361;
																																							BgL_xz00_3361
																																								=
																																								CAR
																																								(BgL_cdrzd22411zd2_621);
																																							BgL_yz00_3363
																																								=
																																								CAR
																																								(BgL_cdrzd22413zd2_622);
																																							BgL_yz00_121
																																								=
																																								BgL_yz00_3363;
																																							BgL_xz00_120
																																								=
																																								BgL_xz00_3361;
																																							goto
																																								BgL_tagzd21393zd2_122;
																																						}
																																					else
																																						{	/* Expand/iarith.scm 36 */
																																							goto
																																								BgL_tagzd21394zd2_123;
																																						}
																																				}
																																		}
																																	else
																																		{	/* Expand/iarith.scm 36 */
																																			if (NULLP
																																				(CDR
																																					(BgL_cdrzd22413zd2_622)))
																																				{
																																					obj_t
																																						BgL_yz00_3370;
																																					obj_t
																																						BgL_xz00_3368;
																																					BgL_xz00_3368
																																						=
																																						CAR
																																						(BgL_cdrzd22411zd2_621);
																																					BgL_yz00_3370
																																						=
																																						CAR
																																						(BgL_cdrzd22413zd2_622);
																																					BgL_yz00_121
																																						=
																																						BgL_yz00_3370;
																																					BgL_xz00_120
																																						=
																																						BgL_xz00_3368;
																																					goto
																																						BgL_tagzd21393zd2_122;
																																				}
																																			else
																																				{	/* Expand/iarith.scm 36 */
																																					goto
																																						BgL_tagzd21394zd2_123;
																																				}
																																		}
																																}
																															}
																														}
																												}
																											else
																												{	/* Expand/iarith.scm 36 */
																													obj_t
																														BgL_cdrzd22453zd2_642;
																													BgL_cdrzd22453zd2_642
																														= CDR(BgL_xz00_1);
																													{	/* Expand/iarith.scm 36 */
																														obj_t
																															BgL_cdrzd22455zd2_643;
																														BgL_cdrzd22455zd2_643
																															=
																															CDR
																															(BgL_cdrzd22453zd2_642);
																														{	/* Expand/iarith.scm 36 */
																															bool_t
																																BgL_testz00_3374;
																															{	/* Expand/iarith.scm 36 */
																																obj_t
																																	BgL_auxz00_3375;
																																BgL_auxz00_3375
																																	=
																																	CAR(CDR(CAR
																																		(BgL_cdrzd22453zd2_642)));
																																BgL_testz00_3374
																																	=
																																	SYMBOLP
																																	(BgL_auxz00_3375);
																															}
																															if (BgL_testz00_3374)
																																{	/* Expand/iarith.scm 36 */
																																	obj_t
																																		BgL_cdrzd22463zd2_645;
																																	BgL_cdrzd22463zd2_645
																																		=
																																		CDR(CAR
																																		(BgL_cdrzd22455zd2_643));
																																	{	/* Expand/iarith.scm 36 */
																																		bool_t
																																			BgL_testz00_3382;
																																		{	/* Expand/iarith.scm 36 */
																																			obj_t
																																				BgL_auxz00_3383;
																																			BgL_auxz00_3383
																																				=
																																				CAR
																																				(BgL_cdrzd22463zd2_645);
																																			BgL_testz00_3382
																																				=
																																				SYMBOLP
																																				(BgL_auxz00_3383);
																																		}
																																		if (BgL_testz00_3382)
																																			{	/* Expand/iarith.scm 36 */
																																				if (NULLP(CDR(BgL_cdrzd22463zd2_645)))
																																					{	/* Expand/iarith.scm 36 */
																																						if (NULLP(CDR(BgL_cdrzd22455zd2_643)))
																																							{	/* Expand/iarith.scm 36 */
																																								return
																																									BFALSE;
																																							}
																																						else
																																							{	/* Expand/iarith.scm 36 */
																																								goto
																																									BgL_tagzd21394zd2_123;
																																							}
																																					}
																																				else
																																					{	/* Expand/iarith.scm 36 */
																																						bool_t
																																							BgL_testz00_3392;
																																						{	/* Expand/iarith.scm 36 */
																																							obj_t
																																								BgL_auxz00_3393;
																																							BgL_auxz00_3393
																																								=
																																								CAR
																																								(BgL_cdrzd22453zd2_642);
																																							BgL_testz00_3392
																																								=
																																								CHARP
																																								(BgL_auxz00_3393);
																																						}
																																						if (BgL_testz00_3392)
																																							{	/* Expand/iarith.scm 36 */
																																								bool_t
																																									BgL_testz00_3396;
																																								{	/* Expand/iarith.scm 36 */
																																									obj_t
																																										BgL_auxz00_3397;
																																									BgL_auxz00_3397
																																										=
																																										CAR
																																										(BgL_cdrzd22455zd2_643);
																																									BgL_testz00_3396
																																										=
																																										CHARP
																																										(BgL_auxz00_3397);
																																								}
																																								if (BgL_testz00_3396)
																																									{	/* Expand/iarith.scm 36 */
																																										if (NULLP(CDR(BgL_cdrzd22455zd2_643)))
																																											{	/* Expand/iarith.scm 36 */
																																												return
																																													BFALSE;
																																											}
																																										else
																																											{	/* Expand/iarith.scm 36 */
																																												goto
																																													BgL_tagzd21394zd2_123;
																																											}
																																									}
																																								else
																																									{	/* Expand/iarith.scm 36 */
																																										obj_t
																																											BgL_cdrzd22489zd2_656;
																																										BgL_cdrzd22489zd2_656
																																											=
																																											CDR
																																											(BgL_xz00_1);
																																										{	/* Expand/iarith.scm 36 */
																																											obj_t
																																												BgL_cdrzd22493zd2_657;
																																											BgL_cdrzd22493zd2_657
																																												=
																																												CDR
																																												(BgL_cdrzd22489zd2_656);
																																											if (NULLP(CDR(BgL_cdrzd22493zd2_657)))
																																												{
																																													obj_t
																																														BgL_yz00_3410;
																																													obj_t
																																														BgL_xz00_3408;
																																													BgL_xz00_3408
																																														=
																																														CAR
																																														(BgL_cdrzd22489zd2_656);
																																													BgL_yz00_3410
																																														=
																																														CAR
																																														(BgL_cdrzd22493zd2_657);
																																													BgL_yz00_121
																																														=
																																														BgL_yz00_3410;
																																													BgL_xz00_120
																																														=
																																														BgL_xz00_3408;
																																													goto
																																														BgL_tagzd21393zd2_122;
																																												}
																																											else
																																												{	/* Expand/iarith.scm 36 */
																																													goto
																																														BgL_tagzd21394zd2_123;
																																												}
																																										}
																																									}
																																							}
																																						else
																																							{	/* Expand/iarith.scm 36 */
																																								obj_t
																																									BgL_cdrzd22504zd2_663;
																																								BgL_cdrzd22504zd2_663
																																									=
																																									CDR
																																									(BgL_xz00_1);
																																								{	/* Expand/iarith.scm 36 */
																																									obj_t
																																										BgL_cdrzd22508zd2_664;
																																									BgL_cdrzd22508zd2_664
																																										=
																																										CDR
																																										(BgL_cdrzd22504zd2_663);
																																									if (NULLP(CDR(BgL_cdrzd22508zd2_664)))
																																										{
																																											obj_t
																																												BgL_yz00_3419;
																																											obj_t
																																												BgL_xz00_3417;
																																											BgL_xz00_3417
																																												=
																																												CAR
																																												(BgL_cdrzd22504zd2_663);
																																											BgL_yz00_3419
																																												=
																																												CAR
																																												(BgL_cdrzd22508zd2_664);
																																											BgL_yz00_121
																																												=
																																												BgL_yz00_3419;
																																											BgL_xz00_120
																																												=
																																												BgL_xz00_3417;
																																											goto
																																												BgL_tagzd21393zd2_122;
																																										}
																																									else
																																										{	/* Expand/iarith.scm 36 */
																																											goto
																																												BgL_tagzd21394zd2_123;
																																										}
																																								}
																																							}
																																					}
																																			}
																																		else
																																			{	/* Expand/iarith.scm 36 */
																																				bool_t
																																					BgL_testz00_3421;
																																				{	/* Expand/iarith.scm 36 */
																																					obj_t
																																						BgL_auxz00_3422;
																																					BgL_auxz00_3422
																																						=
																																						CAR
																																						(BgL_cdrzd22453zd2_642);
																																					BgL_testz00_3421
																																						=
																																						CHARP
																																						(BgL_auxz00_3422);
																																				}
																																				if (BgL_testz00_3421)
																																					{	/* Expand/iarith.scm 36 */
																																						bool_t
																																							BgL_testz00_3425;
																																						{	/* Expand/iarith.scm 36 */
																																							obj_t
																																								BgL_auxz00_3426;
																																							BgL_auxz00_3426
																																								=
																																								CAR
																																								(BgL_cdrzd22455zd2_643);
																																							BgL_testz00_3425
																																								=
																																								CHARP
																																								(BgL_auxz00_3426);
																																						}
																																						if (BgL_testz00_3425)
																																							{	/* Expand/iarith.scm 36 */
																																								if (NULLP(CDR(BgL_cdrzd22455zd2_643)))
																																									{	/* Expand/iarith.scm 36 */
																																										return
																																											BFALSE;
																																									}
																																								else
																																									{	/* Expand/iarith.scm 36 */
																																										goto
																																											BgL_tagzd21394zd2_123;
																																									}
																																							}
																																						else
																																							{	/* Expand/iarith.scm 36 */
																																								obj_t
																																									BgL_cdrzd22531zd2_677;
																																								BgL_cdrzd22531zd2_677
																																									=
																																									CDR
																																									(BgL_xz00_1);
																																								{	/* Expand/iarith.scm 36 */
																																									obj_t
																																										BgL_cdrzd22535zd2_678;
																																									BgL_cdrzd22535zd2_678
																																										=
																																										CDR
																																										(BgL_cdrzd22531zd2_677);
																																									if (NULLP(CDR(BgL_cdrzd22535zd2_678)))
																																										{
																																											obj_t
																																												BgL_yz00_3439;
																																											obj_t
																																												BgL_xz00_3437;
																																											BgL_xz00_3437
																																												=
																																												CAR
																																												(BgL_cdrzd22531zd2_677);
																																											BgL_yz00_3439
																																												=
																																												CAR
																																												(BgL_cdrzd22535zd2_678);
																																											BgL_yz00_121
																																												=
																																												BgL_yz00_3439;
																																											BgL_xz00_120
																																												=
																																												BgL_xz00_3437;
																																											goto
																																												BgL_tagzd21393zd2_122;
																																										}
																																									else
																																										{	/* Expand/iarith.scm 36 */
																																											goto
																																												BgL_tagzd21394zd2_123;
																																										}
																																								}
																																							}
																																					}
																																				else
																																					{	/* Expand/iarith.scm 36 */
																																						obj_t
																																							BgL_cdrzd22546zd2_684;
																																						BgL_cdrzd22546zd2_684
																																							=
																																							CDR
																																							(BgL_xz00_1);
																																						{	/* Expand/iarith.scm 36 */
																																							obj_t
																																								BgL_cdrzd22550zd2_685;
																																							BgL_cdrzd22550zd2_685
																																								=
																																								CDR
																																								(BgL_cdrzd22546zd2_684);
																																							if (NULLP(CDR(BgL_cdrzd22550zd2_685)))
																																								{
																																									obj_t
																																										BgL_yz00_3448;
																																									obj_t
																																										BgL_xz00_3446;
																																									BgL_xz00_3446
																																										=
																																										CAR
																																										(BgL_cdrzd22546zd2_684);
																																									BgL_yz00_3448
																																										=
																																										CAR
																																										(BgL_cdrzd22550zd2_685);
																																									BgL_yz00_121
																																										=
																																										BgL_yz00_3448;
																																									BgL_xz00_120
																																										=
																																										BgL_xz00_3446;
																																									goto
																																										BgL_tagzd21393zd2_122;
																																								}
																																							else
																																								{	/* Expand/iarith.scm 36 */
																																									goto
																																										BgL_tagzd21394zd2_123;
																																								}
																																						}
																																					}
																																			}
																																	}
																																}
																															else
																																{	/* Expand/iarith.scm 36 */
																																	bool_t
																																		BgL_testz00_3450;
																																	{	/* Expand/iarith.scm 36 */
																																		obj_t
																																			BgL_auxz00_3451;
																																		BgL_auxz00_3451
																																			=
																																			CAR
																																			(BgL_cdrzd22453zd2_642);
																																		BgL_testz00_3450
																																			=
																																			CHARP
																																			(BgL_auxz00_3451);
																																	}
																																	if (BgL_testz00_3450)
																																		{	/* Expand/iarith.scm 36 */
																																			bool_t
																																				BgL_testz00_3454;
																																			{	/* Expand/iarith.scm 36 */
																																				obj_t
																																					BgL_auxz00_3455;
																																				BgL_auxz00_3455
																																					=
																																					CAR
																																					(BgL_cdrzd22455zd2_643);
																																				BgL_testz00_3454
																																					=
																																					CHARP
																																					(BgL_auxz00_3455);
																																			}
																																			if (BgL_testz00_3454)
																																				{	/* Expand/iarith.scm 36 */
																																					if (NULLP(CDR(BgL_cdrzd22455zd2_643)))
																																						{	/* Expand/iarith.scm 36 */
																																							return
																																								BFALSE;
																																						}
																																					else
																																						{	/* Expand/iarith.scm 36 */
																																							goto
																																								BgL_tagzd21394zd2_123;
																																						}
																																				}
																																			else
																																				{	/* Expand/iarith.scm 36 */
																																					obj_t
																																						BgL_cdrzd22573zd2_699;
																																					BgL_cdrzd22573zd2_699
																																						=
																																						CDR
																																						(BgL_xz00_1);
																																					{	/* Expand/iarith.scm 36 */
																																						obj_t
																																							BgL_cdrzd22577zd2_700;
																																						BgL_cdrzd22577zd2_700
																																							=
																																							CDR
																																							(BgL_cdrzd22573zd2_699);
																																						if (NULLP(CDR(BgL_cdrzd22577zd2_700)))
																																							{
																																								obj_t
																																									BgL_yz00_3468;
																																								obj_t
																																									BgL_xz00_3466;
																																								BgL_xz00_3466
																																									=
																																									CAR
																																									(BgL_cdrzd22573zd2_699);
																																								BgL_yz00_3468
																																									=
																																									CAR
																																									(BgL_cdrzd22577zd2_700);
																																								BgL_yz00_121
																																									=
																																									BgL_yz00_3468;
																																								BgL_xz00_120
																																									=
																																									BgL_xz00_3466;
																																								goto
																																									BgL_tagzd21393zd2_122;
																																							}
																																						else
																																							{	/* Expand/iarith.scm 36 */
																																								goto
																																									BgL_tagzd21394zd2_123;
																																							}
																																					}
																																				}
																																		}
																																	else
																																		{	/* Expand/iarith.scm 36 */
																																			obj_t
																																				BgL_cdrzd22588zd2_706;
																																			BgL_cdrzd22588zd2_706
																																				=
																																				CDR
																																				(BgL_xz00_1);
																																			{	/* Expand/iarith.scm 36 */
																																				obj_t
																																					BgL_cdrzd22592zd2_707;
																																				BgL_cdrzd22592zd2_707
																																					=
																																					CDR
																																					(BgL_cdrzd22588zd2_706);
																																				if (NULLP(CDR(BgL_cdrzd22592zd2_707)))
																																					{
																																						obj_t
																																							BgL_yz00_3477;
																																						obj_t
																																							BgL_xz00_3475;
																																						BgL_xz00_3475
																																							=
																																							CAR
																																							(BgL_cdrzd22588zd2_706);
																																						BgL_yz00_3477
																																							=
																																							CAR
																																							(BgL_cdrzd22592zd2_707);
																																						BgL_yz00_121
																																							=
																																							BgL_yz00_3477;
																																						BgL_xz00_120
																																							=
																																							BgL_xz00_3475;
																																						goto
																																							BgL_tagzd21393zd2_122;
																																					}
																																				else
																																					{	/* Expand/iarith.scm 36 */
																																						goto
																																							BgL_tagzd21394zd2_123;
																																					}
																																			}
																																		}
																																}
																														}
																													}
																												}
																										}
																									else
																										{	/* Expand/iarith.scm 36 */
																											obj_t
																												BgL_cdrzd22603zd2_717;
																											BgL_cdrzd22603zd2_717 =
																												CDR(BgL_xz00_1);
																											{	/* Expand/iarith.scm 36 */
																												obj_t
																													BgL_cdrzd22605zd2_718;
																												BgL_cdrzd22605zd2_718 =
																													CDR
																													(BgL_cdrzd22603zd2_717);
																												{	/* Expand/iarith.scm 36 */
																													bool_t
																														BgL_testz00_3481;
																													{	/* Expand/iarith.scm 36 */
																														obj_t
																															BgL_auxz00_3482;
																														BgL_auxz00_3482 =
																															CAR
																															(BgL_cdrzd22603zd2_717);
																														BgL_testz00_3481 =
																															CHARP
																															(BgL_auxz00_3482);
																													}
																													if (BgL_testz00_3481)
																														{	/* Expand/iarith.scm 36 */
																															bool_t
																																BgL_testz00_3485;
																															{	/* Expand/iarith.scm 36 */
																																obj_t
																																	BgL_auxz00_3486;
																																BgL_auxz00_3486
																																	=
																																	CAR
																																	(BgL_cdrzd22605zd2_718);
																																BgL_testz00_3485
																																	=
																																	CHARP
																																	(BgL_auxz00_3486);
																															}
																															if (BgL_testz00_3485)
																																{	/* Expand/iarith.scm 36 */
																																	if (NULLP(CDR
																																			(BgL_cdrzd22605zd2_718)))
																																		{	/* Expand/iarith.scm 36 */
																																			return
																																				BFALSE;
																																		}
																																	else
																																		{	/* Expand/iarith.scm 36 */
																																			goto
																																				BgL_tagzd21394zd2_123;
																																		}
																																}
																															else
																																{	/* Expand/iarith.scm 36 */
																																	if (NULLP(CDR
																																			(BgL_cdrzd22605zd2_718)))
																																		{
																																			obj_t
																																				BgL_yz00_3497;
																																			obj_t
																																				BgL_xz00_3495;
																																			BgL_xz00_3495
																																				=
																																				CAR
																																				(BgL_cdrzd22603zd2_717);
																																			BgL_yz00_3497
																																				=
																																				CAR
																																				(BgL_cdrzd22605zd2_718);
																																			BgL_yz00_121
																																				=
																																				BgL_yz00_3497;
																																			BgL_xz00_120
																																				=
																																				BgL_xz00_3495;
																																			goto
																																				BgL_tagzd21393zd2_122;
																																		}
																																	else
																																		{	/* Expand/iarith.scm 36 */
																																			goto
																																				BgL_tagzd21394zd2_123;
																																		}
																																}
																														}
																													else
																														{	/* Expand/iarith.scm 36 */
																															if (NULLP(CDR
																																	(BgL_cdrzd22605zd2_718)))
																																{
																																	obj_t
																																		BgL_yz00_3504;
																																	obj_t
																																		BgL_xz00_3502;
																																	BgL_xz00_3502
																																		=
																																		CAR
																																		(BgL_cdrzd22603zd2_717);
																																	BgL_yz00_3504
																																		=
																																		CAR
																																		(BgL_cdrzd22605zd2_718);
																																	BgL_yz00_121 =
																																		BgL_yz00_3504;
																																	BgL_xz00_120 =
																																		BgL_xz00_3502;
																																	goto
																																		BgL_tagzd21393zd2_122;
																																}
																															else
																																{	/* Expand/iarith.scm 36 */
																																	goto
																																		BgL_tagzd21394zd2_123;
																																}
																														}
																												}
																											}
																										}
																								}
																							else
																								{	/* Expand/iarith.scm 36 */
																									obj_t BgL_cdrzd22647zd2_737;

																									BgL_cdrzd22647zd2_737 =
																										CDR(BgL_xz00_1);
																									{	/* Expand/iarith.scm 36 */
																										obj_t BgL_cdrzd22649zd2_738;

																										BgL_cdrzd22649zd2_738 =
																											CDR
																											(BgL_cdrzd22647zd2_737);
																										{	/* Expand/iarith.scm 36 */
																											bool_t BgL_testz00_3508;

																											{	/* Expand/iarith.scm 36 */
																												obj_t BgL_auxz00_3509;

																												BgL_auxz00_3509 =
																													CAR
																													(BgL_cdrzd22647zd2_737);
																												BgL_testz00_3508 =
																													CHARP
																													(BgL_auxz00_3509);
																											}
																											if (BgL_testz00_3508)
																												{	/* Expand/iarith.scm 36 */
																													bool_t
																														BgL_testz00_3512;
																													{	/* Expand/iarith.scm 36 */
																														obj_t
																															BgL_auxz00_3513;
																														BgL_auxz00_3513 =
																															CAR
																															(BgL_cdrzd22649zd2_738);
																														BgL_testz00_3512 =
																															CHARP
																															(BgL_auxz00_3513);
																													}
																													if (BgL_testz00_3512)
																														{	/* Expand/iarith.scm 36 */
																															if (NULLP(CDR
																																	(BgL_cdrzd22649zd2_738)))
																																{	/* Expand/iarith.scm 36 */
																																	return BFALSE;
																																}
																															else
																																{	/* Expand/iarith.scm 36 */
																																	goto
																																		BgL_tagzd21394zd2_123;
																																}
																														}
																													else
																														{	/* Expand/iarith.scm 36 */
																															if (NULLP(CDR
																																	(BgL_cdrzd22649zd2_738)))
																																{
																																	obj_t
																																		BgL_yz00_3524;
																																	obj_t
																																		BgL_xz00_3522;
																																	BgL_xz00_3522
																																		=
																																		CAR
																																		(BgL_cdrzd22647zd2_737);
																																	BgL_yz00_3524
																																		=
																																		CAR
																																		(BgL_cdrzd22649zd2_738);
																																	BgL_yz00_121 =
																																		BgL_yz00_3524;
																																	BgL_xz00_120 =
																																		BgL_xz00_3522;
																																	goto
																																		BgL_tagzd21393zd2_122;
																																}
																															else
																																{	/* Expand/iarith.scm 36 */
																																	goto
																																		BgL_tagzd21394zd2_123;
																																}
																														}
																												}
																											else
																												{	/* Expand/iarith.scm 36 */
																													if (NULLP(CDR
																															(BgL_cdrzd22649zd2_738)))
																														{
																															obj_t
																																BgL_yz00_3531;
																															obj_t
																																BgL_xz00_3529;
																															BgL_xz00_3529 =
																																CAR
																																(BgL_cdrzd22647zd2_737);
																															BgL_yz00_3531 =
																																CAR
																																(BgL_cdrzd22649zd2_738);
																															BgL_yz00_121 =
																																BgL_yz00_3531;
																															BgL_xz00_120 =
																																BgL_xz00_3529;
																															goto
																																BgL_tagzd21393zd2_122;
																														}
																													else
																														{	/* Expand/iarith.scm 36 */
																															goto
																																BgL_tagzd21394zd2_123;
																														}
																												}
																										}
																									}
																								}
																						}
																					else
																						{	/* Expand/iarith.scm 36 */
																							obj_t BgL_cdrzd22691zd2_759;

																							BgL_cdrzd22691zd2_759 =
																								CDR(BgL_xz00_1);
																							{	/* Expand/iarith.scm 36 */
																								obj_t BgL_cdrzd22693zd2_760;

																								BgL_cdrzd22693zd2_760 =
																									CDR(BgL_cdrzd22691zd2_759);
																								{	/* Expand/iarith.scm 36 */
																									bool_t BgL_testz00_3535;

																									{	/* Expand/iarith.scm 36 */
																										obj_t BgL_auxz00_3536;

																										BgL_auxz00_3536 =
																											CAR
																											(BgL_cdrzd22691zd2_759);
																										BgL_testz00_3535 =
																											CHARP(BgL_auxz00_3536);
																									}
																									if (BgL_testz00_3535)
																										{	/* Expand/iarith.scm 36 */
																											bool_t BgL_testz00_3539;

																											{	/* Expand/iarith.scm 36 */
																												obj_t BgL_auxz00_3540;

																												BgL_auxz00_3540 =
																													CAR
																													(BgL_cdrzd22693zd2_760);
																												BgL_testz00_3539 =
																													CHARP
																													(BgL_auxz00_3540);
																											}
																											if (BgL_testz00_3539)
																												{	/* Expand/iarith.scm 36 */
																													if (NULLP(CDR
																															(BgL_cdrzd22693zd2_760)))
																														{	/* Expand/iarith.scm 36 */
																															return BFALSE;
																														}
																													else
																														{	/* Expand/iarith.scm 36 */
																															goto
																																BgL_tagzd21394zd2_123;
																														}
																												}
																											else
																												{	/* Expand/iarith.scm 36 */
																													if (NULLP(CDR
																															(BgL_cdrzd22693zd2_760)))
																														{
																															obj_t
																																BgL_yz00_3551;
																															obj_t
																																BgL_xz00_3549;
																															BgL_xz00_3549 =
																																CAR
																																(BgL_cdrzd22691zd2_759);
																															BgL_yz00_3551 =
																																CAR
																																(BgL_cdrzd22693zd2_760);
																															BgL_yz00_121 =
																																BgL_yz00_3551;
																															BgL_xz00_120 =
																																BgL_xz00_3549;
																															goto
																																BgL_tagzd21393zd2_122;
																														}
																													else
																														{	/* Expand/iarith.scm 36 */
																															goto
																																BgL_tagzd21394zd2_123;
																														}
																												}
																										}
																									else
																										{	/* Expand/iarith.scm 36 */
																											if (NULLP(CDR
																													(BgL_cdrzd22693zd2_760)))
																												{
																													obj_t BgL_yz00_3558;

																													obj_t BgL_xz00_3556;

																													BgL_xz00_3556 =
																														CAR
																														(BgL_cdrzd22691zd2_759);
																													BgL_yz00_3558 =
																														CAR
																														(BgL_cdrzd22693zd2_760);
																													BgL_yz00_121 =
																														BgL_yz00_3558;
																													BgL_xz00_120 =
																														BgL_xz00_3556;
																													goto
																														BgL_tagzd21393zd2_122;
																												}
																											else
																												{	/* Expand/iarith.scm 36 */
																													goto
																														BgL_tagzd21394zd2_123;
																												}
																										}
																								}
																							}
																						}
																				}
																			else
																				{	/* Expand/iarith.scm 36 */
																					goto BgL_tagzd21394zd2_123;
																				}
																		}
																	else
																		{	/* Expand/iarith.scm 36 */
																			obj_t BgL_cdrzd22743zd2_779;

																			BgL_cdrzd22743zd2_779 = CDR(BgL_xz00_1);
																			{	/* Expand/iarith.scm 36 */
																				obj_t BgL_cdrzd22745zd2_780;

																				BgL_cdrzd22745zd2_780 =
																					CDR(BgL_cdrzd22743zd2_779);
																				{	/* Expand/iarith.scm 36 */
																					bool_t BgL_testz00_3562;

																					{	/* Expand/iarith.scm 36 */
																						obj_t BgL_auxz00_3563;

																						BgL_auxz00_3563 =
																							CAR(BgL_cdrzd22743zd2_779);
																						BgL_testz00_3562 =
																							CHARP(BgL_auxz00_3563);
																					}
																					if (BgL_testz00_3562)
																						{	/* Expand/iarith.scm 36 */
																							if (PAIRP(BgL_cdrzd22745zd2_780))
																								{	/* Expand/iarith.scm 36 */
																									bool_t BgL_testz00_3568;

																									{	/* Expand/iarith.scm 36 */
																										obj_t BgL_auxz00_3569;

																										BgL_auxz00_3569 =
																											CAR
																											(BgL_cdrzd22745zd2_780);
																										BgL_testz00_3568 =
																											CHARP(BgL_auxz00_3569);
																									}
																									if (BgL_testz00_3568)
																										{	/* Expand/iarith.scm 36 */
																											if (NULLP(CDR
																													(BgL_cdrzd22745zd2_780)))
																												{	/* Expand/iarith.scm 36 */
																													return BFALSE;
																												}
																											else
																												{	/* Expand/iarith.scm 36 */
																													goto
																														BgL_tagzd21394zd2_123;
																												}
																										}
																									else
																										{	/* Expand/iarith.scm 36 */
																											if (NULLP(CDR
																													(BgL_cdrzd22745zd2_780)))
																												{
																													obj_t BgL_yz00_3580;

																													obj_t BgL_xz00_3578;

																													BgL_xz00_3578 =
																														CAR
																														(BgL_cdrzd22743zd2_779);
																													BgL_yz00_3580 =
																														CAR
																														(BgL_cdrzd22745zd2_780);
																													BgL_yz00_121 =
																														BgL_yz00_3580;
																													BgL_xz00_120 =
																														BgL_xz00_3578;
																													goto
																														BgL_tagzd21393zd2_122;
																												}
																											else
																												{	/* Expand/iarith.scm 36 */
																													goto
																														BgL_tagzd21394zd2_123;
																												}
																										}
																								}
																							else
																								{	/* Expand/iarith.scm 36 */
																									goto BgL_tagzd21394zd2_123;
																								}
																						}
																					else
																						{	/* Expand/iarith.scm 36 */
																							if (PAIRP(BgL_cdrzd22745zd2_780))
																								{	/* Expand/iarith.scm 36 */
																									if (NULLP(CDR
																											(BgL_cdrzd22745zd2_780)))
																										{
																											obj_t BgL_yz00_3589;

																											obj_t BgL_xz00_3587;

																											BgL_xz00_3587 =
																												CAR
																												(BgL_cdrzd22743zd2_779);
																											BgL_yz00_3589 =
																												CAR
																												(BgL_cdrzd22745zd2_780);
																											BgL_yz00_121 =
																												BgL_yz00_3589;
																											BgL_xz00_120 =
																												BgL_xz00_3587;
																											goto
																												BgL_tagzd21393zd2_122;
																										}
																									else
																										{	/* Expand/iarith.scm 36 */
																											goto
																												BgL_tagzd21394zd2_123;
																										}
																								}
																							else
																								{	/* Expand/iarith.scm 36 */
																									goto BgL_tagzd21394zd2_123;
																								}
																						}
																				}
																			}
																		}
																}
															else
																{	/* Expand/iarith.scm 36 */
																	obj_t BgL_cdrzd22791zd2_802;

																	BgL_cdrzd22791zd2_802 = CDR(BgL_xz00_1);
																	{	/* Expand/iarith.scm 36 */
																		obj_t BgL_cdrzd22793zd2_803;

																		BgL_cdrzd22793zd2_803 =
																			CDR(BgL_cdrzd22791zd2_802);
																		{	/* Expand/iarith.scm 36 */
																			bool_t BgL_testz00_3593;

																			{	/* Expand/iarith.scm 36 */
																				obj_t BgL_auxz00_3594;

																				BgL_auxz00_3594 =
																					CAR(BgL_cdrzd22791zd2_802);
																				BgL_testz00_3593 =
																					CHARP(BgL_auxz00_3594);
																			}
																			if (BgL_testz00_3593)
																				{	/* Expand/iarith.scm 36 */
																					if (PAIRP(BgL_cdrzd22793zd2_803))
																						{	/* Expand/iarith.scm 36 */
																							bool_t BgL_testz00_3599;

																							{	/* Expand/iarith.scm 36 */
																								obj_t BgL_auxz00_3600;

																								BgL_auxz00_3600 =
																									CAR(BgL_cdrzd22793zd2_803);
																								BgL_testz00_3599 =
																									CHARP(BgL_auxz00_3600);
																							}
																							if (BgL_testz00_3599)
																								{	/* Expand/iarith.scm 36 */
																									if (NULLP(CDR
																											(BgL_cdrzd22793zd2_803)))
																										{	/* Expand/iarith.scm 36 */
																											return BFALSE;
																										}
																									else
																										{	/* Expand/iarith.scm 36 */
																											goto
																												BgL_tagzd21394zd2_123;
																										}
																								}
																							else
																								{	/* Expand/iarith.scm 36 */
																									if (NULLP(CDR
																											(BgL_cdrzd22793zd2_803)))
																										{
																											obj_t BgL_yz00_3611;

																											obj_t BgL_xz00_3609;

																											BgL_xz00_3609 =
																												CAR
																												(BgL_cdrzd22791zd2_802);
																											BgL_yz00_3611 =
																												CAR
																												(BgL_cdrzd22793zd2_803);
																											BgL_yz00_121 =
																												BgL_yz00_3611;
																											BgL_xz00_120 =
																												BgL_xz00_3609;
																											goto
																												BgL_tagzd21393zd2_122;
																										}
																									else
																										{	/* Expand/iarith.scm 36 */
																											goto
																												BgL_tagzd21394zd2_123;
																										}
																								}
																						}
																					else
																						{	/* Expand/iarith.scm 36 */
																							goto BgL_tagzd21394zd2_123;
																						}
																				}
																			else
																				{	/* Expand/iarith.scm 36 */
																					if (PAIRP(BgL_cdrzd22793zd2_803))
																						{	/* Expand/iarith.scm 36 */
																							if (NULLP(CDR
																									(BgL_cdrzd22793zd2_803)))
																								{
																									obj_t BgL_yz00_3620;

																									obj_t BgL_xz00_3618;

																									BgL_xz00_3618 =
																										CAR(BgL_cdrzd22791zd2_802);
																									BgL_yz00_3620 =
																										CAR(BgL_cdrzd22793zd2_803);
																									BgL_yz00_121 = BgL_yz00_3620;
																									BgL_xz00_120 = BgL_xz00_3618;
																									goto BgL_tagzd21393zd2_122;
																								}
																							else
																								{	/* Expand/iarith.scm 36 */
																									goto BgL_tagzd21394zd2_123;
																								}
																						}
																					else
																						{	/* Expand/iarith.scm 36 */
																							goto BgL_tagzd21394zd2_123;
																						}
																				}
																		}
																	}
																}
														}
													else
														{	/* Expand/iarith.scm 36 */
															obj_t BgL_cdrzd22839zd2_824;

															BgL_cdrzd22839zd2_824 = CDR(BgL_xz00_1);
															{	/* Expand/iarith.scm 36 */
																obj_t BgL_cdrzd22841zd2_825;

																BgL_cdrzd22841zd2_825 =
																	CDR(BgL_cdrzd22839zd2_824);
																{	/* Expand/iarith.scm 36 */
																	bool_t BgL_testz00_3624;

																	{	/* Expand/iarith.scm 36 */
																		obj_t BgL_auxz00_3625;

																		BgL_auxz00_3625 =
																			CAR(BgL_cdrzd22839zd2_824);
																		BgL_testz00_3624 = CHARP(BgL_auxz00_3625);
																	}
																	if (BgL_testz00_3624)
																		{	/* Expand/iarith.scm 36 */
																			if (PAIRP(BgL_cdrzd22841zd2_825))
																				{	/* Expand/iarith.scm 36 */
																					bool_t BgL_testz00_3630;

																					{	/* Expand/iarith.scm 36 */
																						obj_t BgL_auxz00_3631;

																						BgL_auxz00_3631 =
																							CAR(BgL_cdrzd22841zd2_825);
																						BgL_testz00_3630 =
																							CHARP(BgL_auxz00_3631);
																					}
																					if (BgL_testz00_3630)
																						{	/* Expand/iarith.scm 36 */
																							if (NULLP(CDR
																									(BgL_cdrzd22841zd2_825)))
																								{	/* Expand/iarith.scm 36 */
																									return BFALSE;
																								}
																							else
																								{	/* Expand/iarith.scm 36 */
																									goto BgL_tagzd21394zd2_123;
																								}
																						}
																					else
																						{	/* Expand/iarith.scm 36 */
																							if (NULLP(CDR
																									(BgL_cdrzd22841zd2_825)))
																								{
																									obj_t BgL_yz00_3642;

																									obj_t BgL_xz00_3640;

																									BgL_xz00_3640 =
																										CAR(BgL_cdrzd22839zd2_824);
																									BgL_yz00_3642 =
																										CAR(BgL_cdrzd22841zd2_825);
																									BgL_yz00_121 = BgL_yz00_3642;
																									BgL_xz00_120 = BgL_xz00_3640;
																									goto BgL_tagzd21393zd2_122;
																								}
																							else
																								{	/* Expand/iarith.scm 36 */
																									goto BgL_tagzd21394zd2_123;
																								}
																						}
																				}
																			else
																				{	/* Expand/iarith.scm 36 */
																					goto BgL_tagzd21394zd2_123;
																				}
																		}
																	else
																		{	/* Expand/iarith.scm 36 */
																			if (PAIRP(BgL_cdrzd22841zd2_825))
																				{	/* Expand/iarith.scm 36 */
																					if (NULLP(CDR(BgL_cdrzd22841zd2_825)))
																						{
																							obj_t BgL_yz00_3651;

																							obj_t BgL_xz00_3649;

																							BgL_xz00_3649 =
																								CAR(BgL_cdrzd22839zd2_824);
																							BgL_yz00_3651 =
																								CAR(BgL_cdrzd22841zd2_825);
																							BgL_yz00_121 = BgL_yz00_3651;
																							BgL_xz00_120 = BgL_xz00_3649;
																							goto BgL_tagzd21393zd2_122;
																						}
																					else
																						{	/* Expand/iarith.scm 36 */
																							goto BgL_tagzd21394zd2_123;
																						}
																				}
																			else
																				{	/* Expand/iarith.scm 36 */
																					goto BgL_tagzd21394zd2_123;
																				}
																		}
																}
															}
														}
												}
											else
												{	/* Expand/iarith.scm 36 */
													obj_t BgL_cdrzd22889zd2_849;

													BgL_cdrzd22889zd2_849 = CDR(BgL_cdrzd21400zd2_126);
													{	/* Expand/iarith.scm 36 */
														bool_t BgL_testz00_3654;

														{	/* Expand/iarith.scm 36 */
															obj_t BgL_auxz00_3655;

															BgL_auxz00_3655 = CAR(BgL_cdrzd21400zd2_126);
															BgL_testz00_3654 = CHARP(BgL_auxz00_3655);
														}
														if (BgL_testz00_3654)
															{	/* Expand/iarith.scm 36 */
																if (PAIRP(BgL_cdrzd22889zd2_849))
																	{	/* Expand/iarith.scm 36 */
																		bool_t BgL_testz00_3660;

																		{	/* Expand/iarith.scm 36 */
																			obj_t BgL_auxz00_3661;

																			BgL_auxz00_3661 =
																				CAR(BgL_cdrzd22889zd2_849);
																			BgL_testz00_3660 = CHARP(BgL_auxz00_3661);
																		}
																		if (BgL_testz00_3660)
																			{	/* Expand/iarith.scm 36 */
																				if (NULLP(CDR(BgL_cdrzd22889zd2_849)))
																					{	/* Expand/iarith.scm 36 */
																						return BFALSE;
																					}
																				else
																					{	/* Expand/iarith.scm 36 */
																						goto BgL_tagzd21394zd2_123;
																					}
																			}
																		else
																			{	/* Expand/iarith.scm 36 */
																				if (NULLP(CDR(BgL_cdrzd22889zd2_849)))
																					{
																						obj_t BgL_yz00_3672;

																						obj_t BgL_xz00_3670;

																						BgL_xz00_3670 =
																							CAR(BgL_cdrzd21400zd2_126);
																						BgL_yz00_3672 =
																							CAR(BgL_cdrzd22889zd2_849);
																						BgL_yz00_121 = BgL_yz00_3672;
																						BgL_xz00_120 = BgL_xz00_3670;
																						goto BgL_tagzd21393zd2_122;
																					}
																				else
																					{	/* Expand/iarith.scm 36 */
																						goto BgL_tagzd21394zd2_123;
																					}
																			}
																	}
																else
																	{	/* Expand/iarith.scm 36 */
																		goto BgL_tagzd21394zd2_123;
																	}
															}
														else
															{	/* Expand/iarith.scm 36 */
																if (PAIRP(BgL_cdrzd22889zd2_849))
																	{	/* Expand/iarith.scm 36 */
																		if (NULLP(CDR(BgL_cdrzd22889zd2_849)))
																			{
																				obj_t BgL_yz00_3681;

																				obj_t BgL_xz00_3679;

																				BgL_xz00_3679 =
																					CAR(BgL_cdrzd21400zd2_126);
																				BgL_yz00_3681 =
																					CAR(BgL_cdrzd22889zd2_849);
																				BgL_yz00_121 = BgL_yz00_3681;
																				BgL_xz00_120 = BgL_xz00_3679;
																				goto BgL_tagzd21393zd2_122;
																			}
																		else
																			{	/* Expand/iarith.scm 36 */
																				goto BgL_tagzd21394zd2_123;
																			}
																	}
																else
																	{	/* Expand/iarith.scm 36 */
																		goto BgL_tagzd21394zd2_123;
																	}
															}
													}
												}
										}
								}
							}
						else
							{	/* Expand/iarith.scm 36 */
								goto BgL_tagzd21394zd2_123;
							}
					}
				else
					{	/* Expand/iarith.scm 36 */
						goto BgL_tagzd21394zd2_123;
					}
			}
		}
	}



/* _expand-eq? */
	obj_t BGl__expandzd2eqzf3z21zzexpand_iarithmetiquez00(obj_t BgL_envz00_2539,
		obj_t BgL_xz00_2540, obj_t BgL_ez00_2541)
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 35 */
			return
				BGl_expandzd2eqzf3z21zzexpand_iarithmetiquez00(BgL_xz00_2540,
				BgL_ez00_2541);
		}
	}



/* expand-i+ */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2izb2z60zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_3, obj_t BgL_ez00_4)
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 53 */
			{
				obj_t BgL_xz00_885;

				obj_t BgL_yz00_886;

				obj_t BgL_xz00_882;

				obj_t BgL_yz00_883;

				if (PAIRP(BgL_xz00_3))
					{	/* Expand/iarith.scm 54 */
						if (NULLP(CDR(BgL_xz00_3)))
							{	/* Expand/iarith.scm 54 */
								return BINT(((long) 0));
							}
						else
							{	/* Expand/iarith.scm 54 */
								obj_t BgL_cdrzd22965zd2_891;

								BgL_cdrzd22965zd2_891 = CDR(BgL_xz00_3);
								if (PAIRP(BgL_cdrzd22965zd2_891))
									{	/* Expand/iarith.scm 54 */
										if (NULLP(CDR(BgL_cdrzd22965zd2_891)))
											{	/* Expand/iarith.scm 54 */
												obj_t BgL_arg2422z00_894;

												BgL_arg2422z00_894 = CAR(BgL_cdrzd22965zd2_891);
												return
													PROCEDURE_ENTRY(BgL_ez00_4) (BgL_ez00_4,
													BgL_arg2422z00_894, BgL_ez00_4, BEOA);
											}
										else
											{	/* Expand/iarith.scm 54 */
												obj_t BgL_cdrzd22981zd2_896;

												BgL_cdrzd22981zd2_896 = CDR(BgL_cdrzd22965zd2_891);
												if (PAIRP(BgL_cdrzd22981zd2_896))
													{	/* Expand/iarith.scm 54 */
														if (NULLP(CDR(BgL_cdrzd22981zd2_896)))
															{	/* Expand/iarith.scm 54 */
																BgL_xz00_882 = CAR(BgL_cdrzd22965zd2_891);
																BgL_yz00_883 = CAR(BgL_cdrzd22981zd2_896);
																{	/* Expand/iarith.scm 61 */
																	bool_t BgL_testz00_3705;

																	if (INTEGERP(BgL_xz00_882))
																		{	/* Expand/iarith.scm 61 */
																			BgL_testz00_3705 = INTEGERP(BgL_yz00_883);
																		}
																	else
																		{	/* Expand/iarith.scm 61 */
																			BgL_testz00_3705 = ((bool_t) 0);
																		}
																	if (BgL_testz00_3705)
																		{	/* Expand/iarith.scm 61 */
																			return
																				BINT(
																				((long) CINT(BgL_xz00_882) +
																					(long) CINT(BgL_yz00_883)));
																		}
																	else
																		{	/* Expand/iarith.scm 64 */
																			obj_t BgL_arg2453z00_911;

																			{	/* Expand/iarith.scm 64 */
																				obj_t BgL_arg2454z00_912;

																				obj_t BgL_arg2459z00_913;

																				BgL_arg2454z00_912 =
																					CNST_TABLE_REF(((long) 2));
																				{	/* Expand/iarith.scm 64 */
																					obj_t BgL_list2460z00_914;

																					{	/* Expand/iarith.scm 64 */
																						obj_t BgL_arg2461z00_915;

																						BgL_arg2461z00_915 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list2460z00_914 =
																							MAKE_PAIR(BgL_yz00_883,
																							BgL_arg2461z00_915);
																					}
																					BgL_arg2459z00_913 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_xz00_882, BgL_list2460z00_914);
																				}
																				BgL_arg2453z00_911 =
																					MAKE_PAIR(BgL_arg2454z00_912,
																					BgL_arg2459z00_913);
																			}
																			return
																				PROCEDURE_ENTRY(BgL_ez00_4) (BgL_ez00_4,
																				BgL_arg2453z00_911, BgL_ez00_4, BEOA);
																		}
																}
															}
														else
															{	/* Expand/iarith.scm 54 */
																BgL_xz00_885 = CAR(BgL_cdrzd22965zd2_891);
																BgL_yz00_886 = CDR(BgL_cdrzd22965zd2_891);
															BgL_tagzd22955zd2_887:
																{	/* Expand/iarith.scm 66 */
																	obj_t BgL_arg2470z00_917;

																	{	/* Expand/iarith.scm 66 */
																		obj_t BgL_arg2471z00_918;

																		obj_t BgL_arg2472z00_919;

																		BgL_arg2471z00_918 =
																			CNST_TABLE_REF(((long) 2));
																		{	/* Expand/iarith.scm 66 */
																			obj_t BgL_arg2476z00_920;

																			{	/* Expand/iarith.scm 66 */
																				obj_t BgL_arg2492z00_924;

																				obj_t BgL_arg2493z00_925;

																				BgL_arg2492z00_924 =
																					CNST_TABLE_REF(((long) 3));
																				BgL_arg2493z00_925 =
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_yz00_886, BNIL);
																				BgL_arg2476z00_920 =
																					MAKE_PAIR(BgL_arg2492z00_924,
																					BgL_arg2493z00_925);
																			}
																			{	/* Expand/iarith.scm 66 */
																				obj_t BgL_list2478z00_922;

																				{	/* Expand/iarith.scm 66 */
																					obj_t BgL_arg2491z00_923;

																					BgL_arg2491z00_923 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list2478z00_922 =
																						MAKE_PAIR(BgL_arg2476z00_920,
																						BgL_arg2491z00_923);
																				}
																				BgL_arg2472z00_919 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_xz00_885, BgL_list2478z00_922);
																		}}
																		BgL_arg2470z00_917 =
																			MAKE_PAIR(BgL_arg2471z00_918,
																			BgL_arg2472z00_919);
																	}
																	return
																		PROCEDURE_ENTRY(BgL_ez00_4) (BgL_ez00_4,
																		BgL_arg2470z00_917, BgL_ez00_4, BEOA);
																}
															}
													}
												else
													{
														obj_t BgL_yz00_3736;

														obj_t BgL_xz00_3734;

														BgL_xz00_3734 = CAR(BgL_cdrzd22965zd2_891);
														BgL_yz00_3736 = CDR(BgL_cdrzd22965zd2_891);
														BgL_yz00_886 = BgL_yz00_3736;
														BgL_xz00_885 = BgL_xz00_3734;
														goto BgL_tagzd22955zd2_887;
													}
											}
									}
								else
									{	/* Expand/iarith.scm 54 */
										return BFALSE;
									}
							}
					}
				else
					{	/* Expand/iarith.scm 54 */
						return BFALSE;
					}
			}
		}
	}



/* _expand-i+ */
	obj_t BGl__expandzd2izb2z60zzexpand_iarithmetiquez00(obj_t BgL_envz00_2542,
		obj_t BgL_xz00_2543, obj_t BgL_ez00_2544)
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 53 */
			return
				BGl_expandzd2izb2z60zzexpand_iarithmetiquez00(BgL_xz00_2543,
				BgL_ez00_2544);
		}
	}



/* expand-i- */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2izd2z00zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_5, obj_t BgL_ez00_6)
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 71 */
			{
				obj_t BgL_xz00_931;

				obj_t BgL_yz00_932;

				obj_t BgL_xz00_928;

				obj_t BgL_yz00_929;

				obj_t BgL_xz00_926;

				if (PAIRP(BgL_xz00_5))
					{	/* Expand/iarith.scm 72 */
						obj_t BgL_cdrzd23045zd2_936;

						BgL_cdrzd23045zd2_936 = CDR(BgL_xz00_5);
						if (PAIRP(BgL_cdrzd23045zd2_936))
							{	/* Expand/iarith.scm 72 */
								if (NULLP(CDR(BgL_cdrzd23045zd2_936)))
									{	/* Expand/iarith.scm 72 */
										BgL_xz00_926 = CAR(BgL_cdrzd23045zd2_936);
										if (INTEGERP(BgL_xz00_926))
											{	/* Expand/iarith.scm 75 */
												return BINT(NEG((long) CINT(BgL_xz00_926)));
											}
										else
											{	/* Expand/iarith.scm 78 */
												obj_t BgL_arg2557z00_955;

												obj_t BgL_arg2558z00_956;

												BgL_arg2557z00_955 = CNST_TABLE_REF(((long) 4));
												{	/* Expand/iarith.scm 78 */
													obj_t BgL_arg2559z00_957;

													BgL_arg2559z00_957 =
														PROCEDURE_ENTRY(BgL_ez00_6) (BgL_ez00_6,
														BgL_xz00_926, BgL_ez00_6, BEOA);
													{	/* Expand/iarith.scm 78 */
														obj_t BgL_list2561z00_959;

														BgL_list2561z00_959 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2558z00_956 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg2559z00_957, BgL_list2561z00_959);
												}}
												return
													MAKE_PAIR(BgL_arg2557z00_955, BgL_arg2558z00_956);
											}
									}
								else
									{	/* Expand/iarith.scm 72 */
										obj_t BgL_cdrzd23061zd2_941;

										BgL_cdrzd23061zd2_941 = CDR(BgL_cdrzd23045zd2_936);
										if (PAIRP(BgL_cdrzd23061zd2_941))
											{	/* Expand/iarith.scm 72 */
												if (NULLP(CDR(BgL_cdrzd23061zd2_941)))
													{	/* Expand/iarith.scm 72 */
														BgL_xz00_928 = CAR(BgL_cdrzd23045zd2_936);
														BgL_yz00_929 = CAR(BgL_cdrzd23061zd2_941);
														{	/* Expand/iarith.scm 81 */
															bool_t BgL_testz00_3765;

															if (INTEGERP(BgL_xz00_928))
																{	/* Expand/iarith.scm 81 */
																	BgL_testz00_3765 = INTEGERP(BgL_yz00_929);
																}
															else
																{	/* Expand/iarith.scm 81 */
																	BgL_testz00_3765 = ((bool_t) 0);
																}
															if (BgL_testz00_3765)
																{	/* Expand/iarith.scm 81 */
																	return
																		BINT(
																		((long) CINT(BgL_xz00_928) -
																			(long) CINT(BgL_yz00_929)));
																}
															else
																{	/* Expand/iarith.scm 84 */
																	obj_t BgL_arg2563z00_961;

																	{	/* Expand/iarith.scm 84 */
																		obj_t BgL_arg2564z00_962;

																		obj_t BgL_arg2565z00_963;

																		BgL_arg2564z00_962 =
																			CNST_TABLE_REF(((long) 5));
																		{	/* Expand/iarith.scm 84 */
																			obj_t BgL_list2566z00_964;

																			{	/* Expand/iarith.scm 84 */
																				obj_t BgL_arg2571z00_965;

																				BgL_arg2571z00_965 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list2566z00_964 =
																					MAKE_PAIR(BgL_yz00_929,
																					BgL_arg2571z00_965);
																			}
																			BgL_arg2565z00_963 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_xz00_928, BgL_list2566z00_964);
																		}
																		BgL_arg2563z00_961 =
																			MAKE_PAIR(BgL_arg2564z00_962,
																			BgL_arg2565z00_963);
																	}
																	return
																		PROCEDURE_ENTRY(BgL_ez00_6) (BgL_ez00_6,
																		BgL_arg2563z00_961, BgL_ez00_6, BEOA);
																}
														}
													}
												else
													{	/* Expand/iarith.scm 72 */
														BgL_xz00_931 = CAR(BgL_cdrzd23045zd2_936);
														BgL_yz00_932 = CDR(BgL_cdrzd23045zd2_936);
													BgL_tagzd23039zd2_933:
														{	/* Expand/iarith.scm 86 */
															obj_t BgL_arg2576z00_967;

															{	/* Expand/iarith.scm 86 */
																obj_t BgL_arg2586z00_968;

																obj_t BgL_arg2587z00_969;

																BgL_arg2586z00_968 = CNST_TABLE_REF(((long) 5));
																{	/* Expand/iarith.scm 86 */
																	obj_t BgL_arg2589z00_970;

																	{	/* Expand/iarith.scm 86 */
																		obj_t BgL_arg2595z00_974;

																		obj_t BgL_arg2602z00_975;

																		BgL_arg2595z00_974 =
																			CNST_TABLE_REF(((long) 3));
																		BgL_arg2602z00_975 =
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_yz00_932, BNIL);
																		BgL_arg2589z00_970 =
																			MAKE_PAIR(BgL_arg2595z00_974,
																			BgL_arg2602z00_975);
																	}
																	{	/* Expand/iarith.scm 86 */
																		obj_t BgL_list2591z00_972;

																		{	/* Expand/iarith.scm 86 */
																			obj_t BgL_arg2594z00_973;

																			BgL_arg2594z00_973 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2591z00_972 =
																				MAKE_PAIR(BgL_arg2589z00_970,
																				BgL_arg2594z00_973);
																		}
																		BgL_arg2587z00_969 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_xz00_931, BgL_list2591z00_972);
																}}
																BgL_arg2576z00_967 =
																	MAKE_PAIR(BgL_arg2586z00_968,
																	BgL_arg2587z00_969);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_6) (BgL_ez00_6,
																BgL_arg2576z00_967, BgL_ez00_6, BEOA);
														}
													}
											}
										else
											{
												obj_t BgL_yz00_3796;

												obj_t BgL_xz00_3794;

												BgL_xz00_3794 = CAR(BgL_cdrzd23045zd2_936);
												BgL_yz00_3796 = CDR(BgL_cdrzd23045zd2_936);
												BgL_yz00_932 = BgL_yz00_3796;
												BgL_xz00_931 = BgL_xz00_3794;
												goto BgL_tagzd23039zd2_933;
											}
									}
							}
						else
							{	/* Expand/iarith.scm 72 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/iarith.scm 72 */
						return BFALSE;
					}
			}
		}
	}



/* _expand-i- */
	obj_t BGl__expandzd2izd2z00zzexpand_iarithmetiquez00(obj_t BgL_envz00_2545,
		obj_t BgL_xz00_2546, obj_t BgL_ez00_2547)
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 71 */
			return
				BGl_expandzd2izd2z00zzexpand_iarithmetiquez00(BgL_xz00_2546,
				BgL_ez00_2547);
		}
	}



/* expand-i* */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2iza2z70zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_7, obj_t BgL_ez00_8)
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 91 */
			{
				obj_t BgL_xz00_982;

				obj_t BgL_yz00_983;

				obj_t BgL_xz00_979;

				obj_t BgL_yz00_980;

				if (PAIRP(BgL_xz00_7))
					{	/* Expand/iarith.scm 92 */
						if (NULLP(CDR(BgL_xz00_7)))
							{	/* Expand/iarith.scm 92 */
								return BINT(((long) 1));
							}
						else
							{	/* Expand/iarith.scm 92 */
								obj_t BgL_cdrzd23127zd2_988;

								BgL_cdrzd23127zd2_988 = CDR(BgL_xz00_7);
								if (PAIRP(BgL_cdrzd23127zd2_988))
									{	/* Expand/iarith.scm 92 */
										if (NULLP(CDR(BgL_cdrzd23127zd2_988)))
											{	/* Expand/iarith.scm 92 */
												obj_t BgL_arg2608z00_991;

												BgL_arg2608z00_991 = CAR(BgL_cdrzd23127zd2_988);
												return
													PROCEDURE_ENTRY(BgL_ez00_8) (BgL_ez00_8,
													BgL_arg2608z00_991, BgL_ez00_8, BEOA);
											}
										else
											{	/* Expand/iarith.scm 92 */
												obj_t BgL_cdrzd23143zd2_993;

												BgL_cdrzd23143zd2_993 = CDR(BgL_cdrzd23127zd2_988);
												if (PAIRP(BgL_cdrzd23143zd2_993))
													{	/* Expand/iarith.scm 92 */
														if (NULLP(CDR(BgL_cdrzd23143zd2_993)))
															{	/* Expand/iarith.scm 92 */
																BgL_xz00_979 = CAR(BgL_cdrzd23127zd2_988);
																BgL_yz00_980 = CAR(BgL_cdrzd23143zd2_993);
																{	/* Expand/iarith.scm 99 */
																	bool_t BgL_testz00_3820;

																	if (INTEGERP(BgL_xz00_979))
																		{	/* Expand/iarith.scm 99 */
																			BgL_testz00_3820 = INTEGERP(BgL_yz00_980);
																		}
																	else
																		{	/* Expand/iarith.scm 99 */
																			BgL_testz00_3820 = ((bool_t) 0);
																		}
																	if (BgL_testz00_3820)
																		{	/* Expand/iarith.scm 99 */
																			return
																				BINT(
																				((long) CINT(BgL_xz00_979) *
																					(long) CINT(BgL_yz00_980)));
																		}
																	else
																		{	/* Expand/iarith.scm 102 */
																			obj_t BgL_arg2652z00_1008;

																			{	/* Expand/iarith.scm 102 */
																				obj_t BgL_arg2655z00_1009;

																				obj_t BgL_arg2656z00_1010;

																				BgL_arg2655z00_1009 =
																					CNST_TABLE_REF(((long) 6));
																				{	/* Expand/iarith.scm 102 */
																					obj_t BgL_list2657z00_1011;

																					{	/* Expand/iarith.scm 102 */
																						obj_t BgL_arg2658z00_1012;

																						BgL_arg2658z00_1012 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list2657z00_1011 =
																							MAKE_PAIR(BgL_yz00_980,
																							BgL_arg2658z00_1012);
																					}
																					BgL_arg2656z00_1010 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_xz00_979,
																						BgL_list2657z00_1011);
																				}
																				BgL_arg2652z00_1008 =
																					MAKE_PAIR(BgL_arg2655z00_1009,
																					BgL_arg2656z00_1010);
																			}
																			return
																				PROCEDURE_ENTRY(BgL_ez00_8) (BgL_ez00_8,
																				BgL_arg2652z00_1008, BgL_ez00_8, BEOA);
																		}
																}
															}
														else
															{	/* Expand/iarith.scm 92 */
																BgL_xz00_982 = CAR(BgL_cdrzd23127zd2_988);
																BgL_yz00_983 = CDR(BgL_cdrzd23127zd2_988);
															BgL_tagzd23117zd2_984:
																{	/* Expand/iarith.scm 104 */
																	obj_t BgL_arg2660z00_1014;

																	{	/* Expand/iarith.scm 104 */
																		obj_t BgL_arg2661z00_1015;

																		obj_t BgL_arg2663z00_1016;

																		BgL_arg2661z00_1015 =
																			CNST_TABLE_REF(((long) 6));
																		{	/* Expand/iarith.scm 104 */
																			obj_t BgL_arg2664z00_1017;

																			{	/* Expand/iarith.scm 104 */
																				obj_t BgL_arg2668z00_1021;

																				obj_t BgL_arg2669z00_1022;

																				BgL_arg2668z00_1021 =
																					CNST_TABLE_REF(((long) 7));
																				BgL_arg2669z00_1022 =
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_yz00_983, BNIL);
																				BgL_arg2664z00_1017 =
																					MAKE_PAIR(BgL_arg2668z00_1021,
																					BgL_arg2669z00_1022);
																			}
																			{	/* Expand/iarith.scm 104 */
																				obj_t BgL_list2666z00_1019;

																				{	/* Expand/iarith.scm 104 */
																					obj_t BgL_arg2667z00_1020;

																					BgL_arg2667z00_1020 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list2666z00_1019 =
																						MAKE_PAIR(BgL_arg2664z00_1017,
																						BgL_arg2667z00_1020);
																				}
																				BgL_arg2663z00_1016 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_xz00_982, BgL_list2666z00_1019);
																		}}
																		BgL_arg2660z00_1014 =
																			MAKE_PAIR(BgL_arg2661z00_1015,
																			BgL_arg2663z00_1016);
																	}
																	return
																		PROCEDURE_ENTRY(BgL_ez00_8) (BgL_ez00_8,
																		BgL_arg2660z00_1014, BgL_ez00_8, BEOA);
																}
															}
													}
												else
													{
														obj_t BgL_yz00_3851;

														obj_t BgL_xz00_3849;

														BgL_xz00_3849 = CAR(BgL_cdrzd23127zd2_988);
														BgL_yz00_3851 = CDR(BgL_cdrzd23127zd2_988);
														BgL_yz00_983 = BgL_yz00_3851;
														BgL_xz00_982 = BgL_xz00_3849;
														goto BgL_tagzd23117zd2_984;
													}
											}
									}
								else
									{	/* Expand/iarith.scm 92 */
										return BFALSE;
									}
							}
					}
				else
					{	/* Expand/iarith.scm 92 */
						return BFALSE;
					}
			}
		}
	}



/* _expand-i* */
	obj_t BGl__expandzd2iza2z70zzexpand_iarithmetiquez00(obj_t BgL_envz00_2548,
		obj_t BgL_xz00_2549, obj_t BgL_ez00_2550)
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 91 */
			return
				BGl_expandzd2iza2z70zzexpand_iarithmetiquez00(BgL_xz00_2549,
				BgL_ez00_2550);
		}
	}



/* expand-i/ */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2izf2z20zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_9, obj_t BgL_ez00_10)
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 109 */
			{
				obj_t BgL_az00_1028;

				obj_t BgL_yz00_1029;

				obj_t BgL_az00_1025;

				obj_t BgL_yz00_1026;

				obj_t BgL_az00_1023;

				if (PAIRP(BgL_xz00_9))
					{	/* Expand/iarith.scm 110 */
						obj_t BgL_cdrzd23207zd2_1033;

						BgL_cdrzd23207zd2_1033 = CDR(BgL_xz00_9);
						if (PAIRP(BgL_cdrzd23207zd2_1033))
							{	/* Expand/iarith.scm 110 */
								if (NULLP(CDR(BgL_cdrzd23207zd2_1033)))
									{	/* Expand/iarith.scm 110 */
										BgL_az00_1023 = CAR(BgL_cdrzd23207zd2_1033);
										BGl_userzd2warningzd2zztools_errorz00
											(BGl_string3065z00zzexpand_iarithmetiquez00,
											BGl_string3066z00zzexpand_iarithmetiquez00, BgL_xz00_9);
										{	/* Expand/iarith.scm 115 */
											obj_t BgL_arg2684z00_1051;

											obj_t BgL_arg2685z00_1052;

											BgL_arg2684z00_1051 = CNST_TABLE_REF(((long) 8));
											{	/* Expand/iarith.scm 115 */
												obj_t BgL_arg2687z00_1054;

												BgL_arg2687z00_1054 =
													PROCEDURE_ENTRY(BgL_ez00_10) (BgL_ez00_10,
													BgL_az00_1023, BgL_ez00_10, BEOA);
												{	/* Expand/iarith.scm 115 */
													obj_t BgL_list2689z00_1056;

													{	/* Expand/iarith.scm 115 */
														obj_t BgL_arg2690z00_1057;

														BgL_arg2690z00_1057 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2689z00_1056 =
															MAKE_PAIR(BgL_arg2687z00_1054,
															BgL_arg2690z00_1057);
													}
													BgL_arg2685z00_1052 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT((
																(long) 1)), BgL_list2689z00_1056);
											}}
											return
												MAKE_PAIR(BgL_arg2684z00_1051, BgL_arg2685z00_1052);
										}
									}
								else
									{	/* Expand/iarith.scm 110 */
										obj_t BgL_cdrzd23223zd2_1038;

										BgL_cdrzd23223zd2_1038 = CDR(BgL_cdrzd23207zd2_1033);
										if (PAIRP(BgL_cdrzd23223zd2_1038))
											{	/* Expand/iarith.scm 110 */
												if (NULLP(CDR(BgL_cdrzd23223zd2_1038)))
													{	/* Expand/iarith.scm 110 */
														BgL_az00_1025 = CAR(BgL_cdrzd23207zd2_1033);
														BgL_yz00_1026 = CAR(BgL_cdrzd23223zd2_1038);
														{	/* Expand/iarith.scm 118 */
															bool_t BgL_testz00_3878;

															if (INTEGERP(BgL_az00_1025))
																{	/* Expand/iarith.scm 118 */
																	if (INTEGERP(BgL_yz00_1026))
																		{	/* Expand/iarith.scm 118 */
																			if (
																				((long) CINT(BgL_yz00_1026) ==
																					((long) 0)))
																				{	/* Expand/iarith.scm 118 */
																					BgL_testz00_3878 = ((bool_t) 0);
																				}
																			else
																				{	/* Expand/iarith.scm 118 */
																					BgL_testz00_3878 = ((bool_t) 1);
																				}
																		}
																	else
																		{	/* Expand/iarith.scm 118 */
																			BgL_testz00_3878 = ((bool_t) 0);
																		}
																}
															else
																{	/* Expand/iarith.scm 118 */
																	BgL_testz00_3878 = ((bool_t) 0);
																}
															if (BgL_testz00_3878)
																{	/* Expand/iarith.scm 118 */
																	{	/* Expand/iarith.scm 119 */
																		obj_t BgL_arg2693z00_1060;

																		{	/* Expand/iarith.scm 120 */
																			char *BgL_arg2695z00_1062;

																			char *BgL_arg2697z00_1064;

																			char *BgL_arg2699z00_1066;

																			{	/* Expand/iarith.scm 121 */

																				BgL_arg2695z00_1062 =
																					BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																					(BgL_az00_1025, BINT(((long) 10)));
																			}
																			{	/* Expand/iarith.scm 123 */

																				BgL_arg2697z00_1064 =
																					BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																					(BgL_yz00_1026, BINT(((long) 10)));
																			}
																			{	/* Expand/iarith.scm 125 */

																				BgL_arg2699z00_1066 =
																					BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																					(BINT(((long) CINT(BgL_az00_1025) /
																							(long) CINT(BgL_yz00_1026))),
																					BINT(((long) 10)));
																			}
																			{	/* Expand/iarith.scm 120 */
																				obj_t BgL_list2701z00_1068;

																				{	/* Expand/iarith.scm 120 */
																					obj_t BgL_arg2702z00_1069;

																					{	/* Expand/iarith.scm 120 */
																						obj_t BgL_arg2703z00_1070;

																						{	/* Expand/iarith.scm 120 */
																							obj_t BgL_arg2704z00_1071;

																							{	/* Expand/iarith.scm 120 */
																								obj_t BgL_arg2705z00_1072;

																								{	/* Expand/iarith.scm 120 */
																									obj_t BgL_arg2706z00_1073;

																									{	/* Expand/iarith.scm 120 */
																										obj_t BgL_arg2707z00_1074;

																										BgL_arg2707z00_1074 =
																											MAKE_PAIR
																											(BGl_string3067z00zzexpand_iarithmetiquez00,
																											BNIL);
																										BgL_arg2706z00_1073 =
																											MAKE_PAIR
																											(string_to_bstring
																											(BgL_arg2699z00_1066),
																											BgL_arg2707z00_1074);
																									}
																									BgL_arg2705z00_1072 =
																										MAKE_PAIR
																										(BGl_string3068z00zzexpand_iarithmetiquez00,
																										BgL_arg2706z00_1073);
																								}
																								BgL_arg2704z00_1071 =
																									MAKE_PAIR(string_to_bstring
																									(BgL_arg2697z00_1064),
																									BgL_arg2705z00_1072);
																							}
																							BgL_arg2703z00_1070 =
																								MAKE_PAIR
																								(BGl_string3069z00zzexpand_iarithmetiquez00,
																								BgL_arg2704z00_1071);
																						}
																						BgL_arg2702z00_1069 =
																							MAKE_PAIR(string_to_bstring
																							(BgL_arg2695z00_1062),
																							BgL_arg2703z00_1070);
																					}
																					BgL_list2701z00_1068 =
																						MAKE_PAIR
																						(BGl_string3070z00zzexpand_iarithmetiquez00,
																						BgL_arg2702z00_1069);
																				}
																				BgL_arg2693z00_1060 =
																					BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																					(BgL_list2701z00_1068);
																		}}
																		BGl_userzd2warningzd2zztools_errorz00
																			(BGl_string3065z00zzexpand_iarithmetiquez00,
																			BgL_arg2693z00_1060, BgL_xz00_9);
																	}
																	return
																		BINT(
																		((long) CINT(BgL_az00_1025) /
																			(long) CINT(BgL_yz00_1026)));
																}
															else
																{	/* Expand/iarith.scm 118 */
																	BGl_userzd2warningzd2zztools_errorz00
																		(BGl_string3065z00zzexpand_iarithmetiquez00,
																		BGl_string3071z00zzexpand_iarithmetiquez00,
																		BgL_xz00_9);
																	{	/* Expand/iarith.scm 133 */
																		obj_t BgL_arg2709z00_1082;

																		{	/* Expand/iarith.scm 133 */
																			obj_t BgL_arg2710z00_1083;

																			obj_t BgL_arg2711z00_1084;

																			BgL_arg2710z00_1083 =
																				CNST_TABLE_REF(((long) 8));
																			{	/* Expand/iarith.scm 133 */
																				obj_t BgL_list2712z00_1085;

																				{	/* Expand/iarith.scm 133 */
																					obj_t BgL_arg2713z00_1086;

																					BgL_arg2713z00_1086 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list2712z00_1085 =
																						MAKE_PAIR(BgL_yz00_1026,
																						BgL_arg2713z00_1086);
																				}
																				BgL_arg2711z00_1084 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_az00_1025, BgL_list2712z00_1085);
																			}
																			BgL_arg2709z00_1082 =
																				MAKE_PAIR(BgL_arg2710z00_1083,
																				BgL_arg2711z00_1084);
																		}
																		return
																			PROCEDURE_ENTRY(BgL_ez00_10) (BgL_ez00_10,
																			BgL_arg2709z00_1082, BgL_ez00_10, BEOA);
																	}
																}
														}
													}
												else
													{	/* Expand/iarith.scm 110 */
														BgL_az00_1028 = CAR(BgL_cdrzd23207zd2_1033);
														BgL_yz00_1029 = CDR(BgL_cdrzd23207zd2_1033);
													BgL_tagzd23201zd2_1030:
														BGl_userzd2warningzd2zztools_errorz00
															(BGl_string3065z00zzexpand_iarithmetiquez00,
															BGl_string3072z00zzexpand_iarithmetiquez00,
															BgL_xz00_9);
														{	/* Expand/iarith.scm 138 */
															obj_t BgL_arg2717z00_1090;

															{	/* Expand/iarith.scm 138 */
																obj_t BgL_arg2718z00_1091;

																obj_t BgL_arg2719z00_1092;

																BgL_arg2718z00_1091 =
																	CNST_TABLE_REF(((long) 8));
																{	/* Expand/iarith.scm 138 */
																	obj_t BgL_arg2720z00_1093;

																	{	/* Expand/iarith.scm 138 */
																		obj_t BgL_arg2725z00_1097;

																		obj_t BgL_arg2726z00_1098;

																		BgL_arg2725z00_1097 =
																			CNST_TABLE_REF(((long) 7));
																		BgL_arg2726z00_1098 =
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_yz00_1029, BNIL);
																		BgL_arg2720z00_1093 =
																			MAKE_PAIR(BgL_arg2725z00_1097,
																			BgL_arg2726z00_1098);
																	}
																	{	/* Expand/iarith.scm 138 */
																		obj_t BgL_list2722z00_1095;

																		{	/* Expand/iarith.scm 138 */
																			obj_t BgL_arg2724z00_1096;

																			BgL_arg2724z00_1096 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2722z00_1095 =
																				MAKE_PAIR(BgL_arg2720z00_1093,
																				BgL_arg2724z00_1096);
																		}
																		BgL_arg2719z00_1092 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_az00_1028, BgL_list2722z00_1095);
																}}
																BgL_arg2717z00_1090 =
																	MAKE_PAIR(BgL_arg2718z00_1091,
																	BgL_arg2719z00_1092);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_10) (BgL_ez00_10,
																BgL_arg2717z00_1090, BgL_ez00_10, BEOA);
														}
													}
											}
										else
											{
												obj_t BgL_yz00_3937;

												obj_t BgL_az00_3935;

												BgL_az00_3935 = CAR(BgL_cdrzd23207zd2_1033);
												BgL_yz00_3937 = CDR(BgL_cdrzd23207zd2_1033);
												BgL_yz00_1029 = BgL_yz00_3937;
												BgL_az00_1028 = BgL_az00_3935;
												goto BgL_tagzd23201zd2_1030;
											}
									}
							}
						else
							{	/* Expand/iarith.scm 110 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/iarith.scm 110 */
						return BFALSE;
					}
			}
		}
	}



/* _expand-i/ */
	obj_t BGl__expandzd2izf2z20zzexpand_iarithmetiquez00(obj_t BgL_envz00_2551,
		obj_t BgL_xz00_2552, obj_t BgL_ez00_2553)
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 109 */
			return
				BGl_expandzd2izf2z20zzexpand_iarithmetiquez00(BgL_xz00_2552,
				BgL_ez00_2553);
		}
	}



/* expand-i= */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2izd3z01zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_11, obj_t BgL_ez00_12)
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 143 */
			{
				obj_t BgL_xz00_1102;

				obj_t BgL_yz00_1103;

				obj_t BgL_xz00_1099;

				obj_t BgL_yz00_1100;

				if (PAIRP(BgL_xz00_11))
					{	/* Expand/iarith.scm 144 */
						obj_t BgL_cdrzd23284zd2_1107;

						BgL_cdrzd23284zd2_1107 = CDR(BgL_xz00_11);
						if (PAIRP(BgL_cdrzd23284zd2_1107))
							{	/* Expand/iarith.scm 144 */
								obj_t BgL_cdrzd23288zd2_1109;

								BgL_cdrzd23288zd2_1109 = CDR(BgL_cdrzd23284zd2_1107);
								if (PAIRP(BgL_cdrzd23288zd2_1109))
									{	/* Expand/iarith.scm 144 */
										if (NULLP(CDR(BgL_cdrzd23288zd2_1109)))
											{	/* Expand/iarith.scm 144 */
												BgL_xz00_1099 = CAR(BgL_cdrzd23284zd2_1107);
												BgL_yz00_1100 = CAR(BgL_cdrzd23288zd2_1109);
												{	/* Expand/iarith.scm 147 */
													bool_t BgL_testz00_3951;

													if (INTEGERP(BgL_xz00_1099))
														{	/* Expand/iarith.scm 147 */
															BgL_testz00_3951 = INTEGERP(BgL_yz00_1100);
														}
													else
														{	/* Expand/iarith.scm 147 */
															BgL_testz00_3951 = ((bool_t) 0);
														}
													if (BgL_testz00_3951)
														{	/* Expand/iarith.scm 147 */
															return
																BBOOL(
																((long) CINT(BgL_xz00_1099) ==
																	(long) CINT(BgL_yz00_1100)));
														}
													else
														{	/* Expand/iarith.scm 150 */
															obj_t BgL_arg2739z00_1122;

															{	/* Expand/iarith.scm 150 */
																obj_t BgL_arg2740z00_1123;

																obj_t BgL_arg2741z00_1124;

																BgL_arg2740z00_1123 =
																	CNST_TABLE_REF(((long) 9));
																{	/* Expand/iarith.scm 150 */
																	obj_t BgL_list2742z00_1125;

																	{	/* Expand/iarith.scm 150 */
																		obj_t BgL_arg2743z00_1126;

																		BgL_arg2743z00_1126 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2742z00_1125 =
																			MAKE_PAIR(BgL_yz00_1100,
																			BgL_arg2743z00_1126);
																	}
																	BgL_arg2741z00_1124 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_xz00_1099, BgL_list2742z00_1125);
																}
																BgL_arg2739z00_1122 =
																	MAKE_PAIR(BgL_arg2740z00_1123,
																	BgL_arg2741z00_1124);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_12) (BgL_ez00_12,
																BgL_arg2739z00_1122, BgL_ez00_12, BEOA);
														}
												}
											}
										else
											{	/* Expand/iarith.scm 144 */
												BgL_xz00_1102 = CAR(BgL_cdrzd23284zd2_1107);
												BgL_yz00_1103 = CDR(BgL_cdrzd23284zd2_1107);
											BgL_tagzd23277zd2_1104:
												{	/* Expand/iarith.scm 152 */
													obj_t BgL_arg2745z00_1128;

													{	/* Expand/iarith.scm 152 */
														obj_t BgL_arg2746z00_1129;

														obj_t BgL_arg2747z00_1130;

														BgL_arg2746z00_1129 = CNST_TABLE_REF(((long) 10));
														{	/* Expand/iarith.scm 152 */
															obj_t BgL_arg2748z00_1131;

															obj_t BgL_arg2749z00_1132;

															{	/* Expand/iarith.scm 152 */
																obj_t BgL_arg2753z00_1136;

																obj_t BgL_arg2754z00_1137;

																BgL_arg2753z00_1136 =
																	CNST_TABLE_REF(((long) 9));
																{	/* Expand/iarith.scm 152 */
																	obj_t BgL_arg2755z00_1138;

																	BgL_arg2755z00_1138 = CAR(BgL_yz00_1103);
																	{	/* Expand/iarith.scm 152 */
																		obj_t BgL_list2757z00_1140;

																		{	/* Expand/iarith.scm 152 */
																			obj_t BgL_arg2758z00_1141;

																			BgL_arg2758z00_1141 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2757z00_1140 =
																				MAKE_PAIR(BgL_arg2755z00_1138,
																				BgL_arg2758z00_1141);
																		}
																		BgL_arg2754z00_1137 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_xz00_1102, BgL_list2757z00_1140);
																}}
																BgL_arg2748z00_1131 =
																	MAKE_PAIR(BgL_arg2753z00_1136,
																	BgL_arg2754z00_1137);
															}
															{	/* Expand/iarith.scm 152 */
																obj_t BgL_arg2759z00_1142;

																obj_t BgL_arg2760z00_1143;

																BgL_arg2759z00_1142 =
																	CNST_TABLE_REF(((long) 11));
																BgL_arg2760z00_1143 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_yz00_1103, BNIL);
																BgL_arg2749z00_1132 =
																	MAKE_PAIR(BgL_arg2759z00_1142,
																	BgL_arg2760z00_1143);
															}
															{	/* Expand/iarith.scm 152 */
																obj_t BgL_list2751z00_1134;

																{	/* Expand/iarith.scm 152 */
																	obj_t BgL_arg2752z00_1135;

																	BgL_arg2752z00_1135 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list2751z00_1134 =
																		MAKE_PAIR(BgL_arg2749z00_1132,
																		BgL_arg2752z00_1135);
																}
																BgL_arg2747z00_1130 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2748z00_1131, BgL_list2751z00_1134);
														}}
														BgL_arg2745z00_1128 =
															MAKE_PAIR(BgL_arg2746z00_1129,
															BgL_arg2747z00_1130);
													}
													return
														PROCEDURE_ENTRY(BgL_ez00_12) (BgL_ez00_12,
														BgL_arg2745z00_1128, BgL_ez00_12, BEOA);
												}
											}
									}
								else
									{
										obj_t BgL_yz00_3988;

										obj_t BgL_xz00_3986;

										BgL_xz00_3986 = CAR(BgL_cdrzd23284zd2_1107);
										BgL_yz00_3988 = CDR(BgL_cdrzd23284zd2_1107);
										BgL_yz00_1103 = BgL_yz00_3988;
										BgL_xz00_1102 = BgL_xz00_3986;
										goto BgL_tagzd23277zd2_1104;
									}
							}
						else
							{	/* Expand/iarith.scm 144 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/iarith.scm 144 */
						return BFALSE;
					}
			}
		}
	}



/* _expand-i= */
	obj_t BGl__expandzd2izd3z01zzexpand_iarithmetiquez00(obj_t BgL_envz00_2554,
		obj_t BgL_xz00_2555, obj_t BgL_ez00_2556)
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 143 */
			return
				BGl_expandzd2izd3z01zzexpand_iarithmetiquez00(BgL_xz00_2555,
				BgL_ez00_2556);
		}
	}



/* expand-i< */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2izc3z11zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_13, obj_t BgL_ez00_14)
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 157 */
			{
				obj_t BgL_xz00_1147;

				obj_t BgL_yz00_1148;

				obj_t BgL_xz00_1144;

				obj_t BgL_yz00_1145;

				if (PAIRP(BgL_xz00_13))
					{	/* Expand/iarith.scm 158 */
						obj_t BgL_cdrzd23340zd2_1152;

						BgL_cdrzd23340zd2_1152 = CDR(BgL_xz00_13);
						if (PAIRP(BgL_cdrzd23340zd2_1152))
							{	/* Expand/iarith.scm 158 */
								obj_t BgL_cdrzd23344zd2_1154;

								BgL_cdrzd23344zd2_1154 = CDR(BgL_cdrzd23340zd2_1152);
								if (PAIRP(BgL_cdrzd23344zd2_1154))
									{	/* Expand/iarith.scm 158 */
										if (NULLP(CDR(BgL_cdrzd23344zd2_1154)))
											{	/* Expand/iarith.scm 158 */
												BgL_xz00_1144 = CAR(BgL_cdrzd23340zd2_1152);
												BgL_yz00_1145 = CAR(BgL_cdrzd23344zd2_1154);
												{	/* Expand/iarith.scm 161 */
													bool_t BgL_testz00_4002;

													if (INTEGERP(BgL_xz00_1144))
														{	/* Expand/iarith.scm 161 */
															BgL_testz00_4002 = INTEGERP(BgL_yz00_1145);
														}
													else
														{	/* Expand/iarith.scm 161 */
															BgL_testz00_4002 = ((bool_t) 0);
														}
													if (BgL_testz00_4002)
														{	/* Expand/iarith.scm 161 */
															return
																BBOOL(
																((long) CINT(BgL_xz00_1144) <
																	(long) CINT(BgL_yz00_1145)));
														}
													else
														{	/* Expand/iarith.scm 164 */
															obj_t BgL_arg2773z00_1167;

															{	/* Expand/iarith.scm 164 */
																obj_t BgL_arg2774z00_1168;

																obj_t BgL_arg2775z00_1169;

																BgL_arg2774z00_1168 =
																	CNST_TABLE_REF(((long) 12));
																{	/* Expand/iarith.scm 164 */
																	obj_t BgL_list2776z00_1170;

																	{	/* Expand/iarith.scm 164 */
																		obj_t BgL_arg2777z00_1171;

																		BgL_arg2777z00_1171 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2776z00_1170 =
																			MAKE_PAIR(BgL_yz00_1145,
																			BgL_arg2777z00_1171);
																	}
																	BgL_arg2775z00_1169 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_xz00_1144, BgL_list2776z00_1170);
																}
																BgL_arg2773z00_1167 =
																	MAKE_PAIR(BgL_arg2774z00_1168,
																	BgL_arg2775z00_1169);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_14) (BgL_ez00_14,
																BgL_arg2773z00_1167, BgL_ez00_14, BEOA);
														}
												}
											}
										else
											{	/* Expand/iarith.scm 158 */
												BgL_xz00_1147 = CAR(BgL_cdrzd23340zd2_1152);
												BgL_yz00_1148 = CDR(BgL_cdrzd23340zd2_1152);
											BgL_tagzd23333zd2_1149:
												{	/* Expand/iarith.scm 166 */
													obj_t BgL_arg2779z00_1173;

													{	/* Expand/iarith.scm 166 */
														obj_t BgL_arg2780z00_1174;

														obj_t BgL_arg2782z00_1175;

														BgL_arg2780z00_1174 = CNST_TABLE_REF(((long) 10));
														{	/* Expand/iarith.scm 166 */
															obj_t BgL_arg2783z00_1176;

															obj_t BgL_arg2784z00_1177;

															{	/* Expand/iarith.scm 166 */
																obj_t BgL_arg2789z00_1181;

																obj_t BgL_arg2790z00_1182;

																BgL_arg2789z00_1181 =
																	CNST_TABLE_REF(((long) 12));
																{	/* Expand/iarith.scm 166 */
																	obj_t BgL_arg2791z00_1183;

																	BgL_arg2791z00_1183 = CAR(BgL_yz00_1148);
																	{	/* Expand/iarith.scm 166 */
																		obj_t BgL_list2793z00_1185;

																		{	/* Expand/iarith.scm 166 */
																			obj_t BgL_arg2794z00_1186;

																			BgL_arg2794z00_1186 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2793z00_1185 =
																				MAKE_PAIR(BgL_arg2791z00_1183,
																				BgL_arg2794z00_1186);
																		}
																		BgL_arg2790z00_1182 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_xz00_1147, BgL_list2793z00_1185);
																}}
																BgL_arg2783z00_1176 =
																	MAKE_PAIR(BgL_arg2789z00_1181,
																	BgL_arg2790z00_1182);
															}
															{	/* Expand/iarith.scm 166 */
																obj_t BgL_arg2795z00_1187;

																obj_t BgL_arg2796z00_1188;

																BgL_arg2795z00_1187 =
																	CNST_TABLE_REF(((long) 13));
																BgL_arg2796z00_1188 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_yz00_1148, BNIL);
																BgL_arg2784z00_1177 =
																	MAKE_PAIR(BgL_arg2795z00_1187,
																	BgL_arg2796z00_1188);
															}
															{	/* Expand/iarith.scm 166 */
																obj_t BgL_list2786z00_1179;

																{	/* Expand/iarith.scm 166 */
																	obj_t BgL_arg2787z00_1180;

																	BgL_arg2787z00_1180 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list2786z00_1179 =
																		MAKE_PAIR(BgL_arg2784z00_1177,
																		BgL_arg2787z00_1180);
																}
																BgL_arg2782z00_1175 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2783z00_1176, BgL_list2786z00_1179);
														}}
														BgL_arg2779z00_1173 =
															MAKE_PAIR(BgL_arg2780z00_1174,
															BgL_arg2782z00_1175);
													}
													return
														PROCEDURE_ENTRY(BgL_ez00_14) (BgL_ez00_14,
														BgL_arg2779z00_1173, BgL_ez00_14, BEOA);
												}
											}
									}
								else
									{
										obj_t BgL_yz00_4039;

										obj_t BgL_xz00_4037;

										BgL_xz00_4037 = CAR(BgL_cdrzd23340zd2_1152);
										BgL_yz00_4039 = CDR(BgL_cdrzd23340zd2_1152);
										BgL_yz00_1148 = BgL_yz00_4039;
										BgL_xz00_1147 = BgL_xz00_4037;
										goto BgL_tagzd23333zd2_1149;
									}
							}
						else
							{	/* Expand/iarith.scm 158 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/iarith.scm 158 */
						return BFALSE;
					}
			}
		}
	}



/* _expand-i< */
	obj_t BGl__expandzd2izc3z11zzexpand_iarithmetiquez00(obj_t BgL_envz00_2557,
		obj_t BgL_xz00_2558, obj_t BgL_ez00_2559)
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 157 */
			return
				BGl_expandzd2izc3z11zzexpand_iarithmetiquez00(BgL_xz00_2558,
				BgL_ez00_2559);
		}
	}



/* expand-i> */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2ize3z31zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_15, obj_t BgL_ez00_16)
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 171 */
			{
				obj_t BgL_xz00_1192;

				obj_t BgL_yz00_1193;

				obj_t BgL_xz00_1189;

				obj_t BgL_yz00_1190;

				if (PAIRP(BgL_xz00_15))
					{	/* Expand/iarith.scm 172 */
						obj_t BgL_cdrzd23396zd2_1197;

						BgL_cdrzd23396zd2_1197 = CDR(BgL_xz00_15);
						if (PAIRP(BgL_cdrzd23396zd2_1197))
							{	/* Expand/iarith.scm 172 */
								obj_t BgL_cdrzd23400zd2_1199;

								BgL_cdrzd23400zd2_1199 = CDR(BgL_cdrzd23396zd2_1197);
								if (PAIRP(BgL_cdrzd23400zd2_1199))
									{	/* Expand/iarith.scm 172 */
										if (NULLP(CDR(BgL_cdrzd23400zd2_1199)))
											{	/* Expand/iarith.scm 172 */
												BgL_xz00_1189 = CAR(BgL_cdrzd23396zd2_1197);
												BgL_yz00_1190 = CAR(BgL_cdrzd23400zd2_1199);
												{	/* Expand/iarith.scm 175 */
													bool_t BgL_testz00_4053;

													if (INTEGERP(BgL_xz00_1189))
														{	/* Expand/iarith.scm 175 */
															BgL_testz00_4053 = INTEGERP(BgL_yz00_1190);
														}
													else
														{	/* Expand/iarith.scm 175 */
															BgL_testz00_4053 = ((bool_t) 0);
														}
													if (BgL_testz00_4053)
														{	/* Expand/iarith.scm 175 */
															return
																BBOOL(
																((long) CINT(BgL_xz00_1189) >
																	(long) CINT(BgL_yz00_1190)));
														}
													else
														{	/* Expand/iarith.scm 178 */
															obj_t BgL_arg2809z00_1212;

															{	/* Expand/iarith.scm 178 */
																obj_t BgL_arg2810z00_1213;

																obj_t BgL_arg2811z00_1214;

																BgL_arg2810z00_1213 =
																	CNST_TABLE_REF(((long) 14));
																{	/* Expand/iarith.scm 178 */
																	obj_t BgL_list2812z00_1215;

																	{	/* Expand/iarith.scm 178 */
																		obj_t BgL_arg2813z00_1216;

																		BgL_arg2813z00_1216 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2812z00_1215 =
																			MAKE_PAIR(BgL_yz00_1190,
																			BgL_arg2813z00_1216);
																	}
																	BgL_arg2811z00_1214 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_xz00_1189, BgL_list2812z00_1215);
																}
																BgL_arg2809z00_1212 =
																	MAKE_PAIR(BgL_arg2810z00_1213,
																	BgL_arg2811z00_1214);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_16) (BgL_ez00_16,
																BgL_arg2809z00_1212, BgL_ez00_16, BEOA);
														}
												}
											}
										else
											{	/* Expand/iarith.scm 172 */
												BgL_xz00_1192 = CAR(BgL_cdrzd23396zd2_1197);
												BgL_yz00_1193 = CDR(BgL_cdrzd23396zd2_1197);
											BgL_tagzd23389zd2_1194:
												{	/* Expand/iarith.scm 180 */
													obj_t BgL_arg2815z00_1218;

													{	/* Expand/iarith.scm 180 */
														obj_t BgL_arg2816z00_1219;

														obj_t BgL_arg2818z00_1220;

														BgL_arg2816z00_1219 = CNST_TABLE_REF(((long) 10));
														{	/* Expand/iarith.scm 180 */
															obj_t BgL_arg2819z00_1221;

															obj_t BgL_arg2820z00_1222;

															{	/* Expand/iarith.scm 180 */
																obj_t BgL_arg2825z00_1226;

																obj_t BgL_arg2826z00_1227;

																BgL_arg2825z00_1226 =
																	CNST_TABLE_REF(((long) 14));
																{	/* Expand/iarith.scm 180 */
																	obj_t BgL_arg2827z00_1228;

																	BgL_arg2827z00_1228 = CAR(BgL_yz00_1193);
																	{	/* Expand/iarith.scm 180 */
																		obj_t BgL_list2829z00_1230;

																		{	/* Expand/iarith.scm 180 */
																			obj_t BgL_arg2830z00_1231;

																			BgL_arg2830z00_1231 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2829z00_1230 =
																				MAKE_PAIR(BgL_arg2827z00_1228,
																				BgL_arg2830z00_1231);
																		}
																		BgL_arg2826z00_1227 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_xz00_1192, BgL_list2829z00_1230);
																}}
																BgL_arg2819z00_1221 =
																	MAKE_PAIR(BgL_arg2825z00_1226,
																	BgL_arg2826z00_1227);
															}
															{	/* Expand/iarith.scm 180 */
																obj_t BgL_arg2831z00_1232;

																obj_t BgL_arg2832z00_1233;

																BgL_arg2831z00_1232 =
																	CNST_TABLE_REF(((long) 15));
																BgL_arg2832z00_1233 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_yz00_1193, BNIL);
																BgL_arg2820z00_1222 =
																	MAKE_PAIR(BgL_arg2831z00_1232,
																	BgL_arg2832z00_1233);
															}
															{	/* Expand/iarith.scm 180 */
																obj_t BgL_list2822z00_1224;

																{	/* Expand/iarith.scm 180 */
																	obj_t BgL_arg2823z00_1225;

																	BgL_arg2823z00_1225 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list2822z00_1224 =
																		MAKE_PAIR(BgL_arg2820z00_1222,
																		BgL_arg2823z00_1225);
																}
																BgL_arg2818z00_1220 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2819z00_1221, BgL_list2822z00_1224);
														}}
														BgL_arg2815z00_1218 =
															MAKE_PAIR(BgL_arg2816z00_1219,
															BgL_arg2818z00_1220);
													}
													return
														PROCEDURE_ENTRY(BgL_ez00_16) (BgL_ez00_16,
														BgL_arg2815z00_1218, BgL_ez00_16, BEOA);
												}
											}
									}
								else
									{
										obj_t BgL_yz00_4090;

										obj_t BgL_xz00_4088;

										BgL_xz00_4088 = CAR(BgL_cdrzd23396zd2_1197);
										BgL_yz00_4090 = CDR(BgL_cdrzd23396zd2_1197);
										BgL_yz00_1193 = BgL_yz00_4090;
										BgL_xz00_1192 = BgL_xz00_4088;
										goto BgL_tagzd23389zd2_1194;
									}
							}
						else
							{	/* Expand/iarith.scm 172 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/iarith.scm 172 */
						return BFALSE;
					}
			}
		}
	}



/* _expand-i> */
	obj_t BGl__expandzd2ize3z31zzexpand_iarithmetiquez00(obj_t BgL_envz00_2560,
		obj_t BgL_xz00_2561, obj_t BgL_ez00_2562)
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 171 */
			return
				BGl_expandzd2ize3z31zzexpand_iarithmetiquez00(BgL_xz00_2561,
				BgL_ez00_2562);
		}
	}



/* expand-i<= */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2izc3zd3zc2zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_17, obj_t BgL_ez00_18)
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 185 */
			{
				obj_t BgL_xz00_1237;

				obj_t BgL_yz00_1238;

				obj_t BgL_xz00_1234;

				obj_t BgL_yz00_1235;

				if (PAIRP(BgL_xz00_17))
					{	/* Expand/iarith.scm 186 */
						obj_t BgL_cdrzd23452zd2_1242;

						BgL_cdrzd23452zd2_1242 = CDR(BgL_xz00_17);
						if (PAIRP(BgL_cdrzd23452zd2_1242))
							{	/* Expand/iarith.scm 186 */
								obj_t BgL_cdrzd23456zd2_1244;

								BgL_cdrzd23456zd2_1244 = CDR(BgL_cdrzd23452zd2_1242);
								if (PAIRP(BgL_cdrzd23456zd2_1244))
									{	/* Expand/iarith.scm 186 */
										if (NULLP(CDR(BgL_cdrzd23456zd2_1244)))
											{	/* Expand/iarith.scm 186 */
												BgL_xz00_1234 = CAR(BgL_cdrzd23452zd2_1242);
												BgL_yz00_1235 = CAR(BgL_cdrzd23456zd2_1244);
												{	/* Expand/iarith.scm 189 */
													bool_t BgL_testz00_4104;

													if (INTEGERP(BgL_xz00_1234))
														{	/* Expand/iarith.scm 189 */
															BgL_testz00_4104 = INTEGERP(BgL_yz00_1235);
														}
													else
														{	/* Expand/iarith.scm 189 */
															BgL_testz00_4104 = ((bool_t) 0);
														}
													if (BgL_testz00_4104)
														{	/* Expand/iarith.scm 189 */
															return
																BBOOL(
																((long) CINT(BgL_xz00_1234) <=
																	(long) CINT(BgL_yz00_1235)));
														}
													else
														{	/* Expand/iarith.scm 192 */
															obj_t BgL_arg2846z00_1257;

															{	/* Expand/iarith.scm 192 */
																obj_t BgL_arg2847z00_1258;

																obj_t BgL_arg2848z00_1259;

																BgL_arg2847z00_1258 =
																	CNST_TABLE_REF(((long) 16));
																{	/* Expand/iarith.scm 192 */
																	obj_t BgL_list2849z00_1260;

																	{	/* Expand/iarith.scm 192 */
																		obj_t BgL_arg2850z00_1261;

																		BgL_arg2850z00_1261 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2849z00_1260 =
																			MAKE_PAIR(BgL_yz00_1235,
																			BgL_arg2850z00_1261);
																	}
																	BgL_arg2848z00_1259 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_xz00_1234, BgL_list2849z00_1260);
																}
																BgL_arg2846z00_1257 =
																	MAKE_PAIR(BgL_arg2847z00_1258,
																	BgL_arg2848z00_1259);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_18) (BgL_ez00_18,
																BgL_arg2846z00_1257, BgL_ez00_18, BEOA);
														}
												}
											}
										else
											{	/* Expand/iarith.scm 186 */
												BgL_xz00_1237 = CAR(BgL_cdrzd23452zd2_1242);
												BgL_yz00_1238 = CDR(BgL_cdrzd23452zd2_1242);
											BgL_tagzd23445zd2_1239:
												{	/* Expand/iarith.scm 194 */
													obj_t BgL_arg2852z00_1263;

													{	/* Expand/iarith.scm 194 */
														obj_t BgL_arg2854z00_1264;

														obj_t BgL_arg2856z00_1265;

														BgL_arg2854z00_1264 = CNST_TABLE_REF(((long) 10));
														{	/* Expand/iarith.scm 194 */
															obj_t BgL_arg2857z00_1266;

															obj_t BgL_arg2858z00_1267;

															{	/* Expand/iarith.scm 194 */
																obj_t BgL_arg2862z00_1271;

																obj_t BgL_arg2863z00_1272;

																BgL_arg2862z00_1271 =
																	CNST_TABLE_REF(((long) 16));
																{	/* Expand/iarith.scm 194 */
																	obj_t BgL_arg2864z00_1273;

																	BgL_arg2864z00_1273 = CAR(BgL_yz00_1238);
																	{	/* Expand/iarith.scm 194 */
																		obj_t BgL_list2866z00_1275;

																		{	/* Expand/iarith.scm 194 */
																			obj_t BgL_arg2867z00_1276;

																			BgL_arg2867z00_1276 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2866z00_1275 =
																				MAKE_PAIR(BgL_arg2864z00_1273,
																				BgL_arg2867z00_1276);
																		}
																		BgL_arg2863z00_1272 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_xz00_1237, BgL_list2866z00_1275);
																}}
																BgL_arg2857z00_1266 =
																	MAKE_PAIR(BgL_arg2862z00_1271,
																	BgL_arg2863z00_1272);
															}
															{	/* Expand/iarith.scm 194 */
																obj_t BgL_arg2868z00_1277;

																obj_t BgL_arg2869z00_1278;

																BgL_arg2868z00_1277 =
																	CNST_TABLE_REF(((long) 17));
																BgL_arg2869z00_1278 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_yz00_1238, BNIL);
																BgL_arg2858z00_1267 =
																	MAKE_PAIR(BgL_arg2868z00_1277,
																	BgL_arg2869z00_1278);
															}
															{	/* Expand/iarith.scm 194 */
																obj_t BgL_list2860z00_1269;

																{	/* Expand/iarith.scm 194 */
																	obj_t BgL_arg2861z00_1270;

																	BgL_arg2861z00_1270 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list2860z00_1269 =
																		MAKE_PAIR(BgL_arg2858z00_1267,
																		BgL_arg2861z00_1270);
																}
																BgL_arg2856z00_1265 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2857z00_1266, BgL_list2860z00_1269);
														}}
														BgL_arg2852z00_1263 =
															MAKE_PAIR(BgL_arg2854z00_1264,
															BgL_arg2856z00_1265);
													}
													return
														PROCEDURE_ENTRY(BgL_ez00_18) (BgL_ez00_18,
														BgL_arg2852z00_1263, BgL_ez00_18, BEOA);
												}
											}
									}
								else
									{
										obj_t BgL_yz00_4141;

										obj_t BgL_xz00_4139;

										BgL_xz00_4139 = CAR(BgL_cdrzd23452zd2_1242);
										BgL_yz00_4141 = CDR(BgL_cdrzd23452zd2_1242);
										BgL_yz00_1238 = BgL_yz00_4141;
										BgL_xz00_1237 = BgL_xz00_4139;
										goto BgL_tagzd23445zd2_1239;
									}
							}
						else
							{	/* Expand/iarith.scm 186 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/iarith.scm 186 */
						return BFALSE;
					}
			}
		}
	}



/* _expand-i<= */
	obj_t BGl__expandzd2izc3zd3zc2zzexpand_iarithmetiquez00(obj_t BgL_envz00_2563,
		obj_t BgL_xz00_2564, obj_t BgL_ez00_2565)
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 185 */
			return
				BGl_expandzd2izc3zd3zc2zzexpand_iarithmetiquez00(BgL_xz00_2564,
				BgL_ez00_2565);
		}
	}



/* expand-i>= */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2ize3zd3ze2zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_19, obj_t BgL_ez00_20)
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 199 */
			{
				obj_t BgL_xz00_1282;

				obj_t BgL_yz00_1283;

				obj_t BgL_xz00_1279;

				obj_t BgL_yz00_1280;

				if (PAIRP(BgL_xz00_19))
					{	/* Expand/iarith.scm 200 */
						obj_t BgL_cdrzd23508zd2_1287;

						BgL_cdrzd23508zd2_1287 = CDR(BgL_xz00_19);
						if (PAIRP(BgL_cdrzd23508zd2_1287))
							{	/* Expand/iarith.scm 200 */
								obj_t BgL_cdrzd23512zd2_1289;

								BgL_cdrzd23512zd2_1289 = CDR(BgL_cdrzd23508zd2_1287);
								if (PAIRP(BgL_cdrzd23512zd2_1289))
									{	/* Expand/iarith.scm 200 */
										if (NULLP(CDR(BgL_cdrzd23512zd2_1289)))
											{	/* Expand/iarith.scm 200 */
												BgL_xz00_1279 = CAR(BgL_cdrzd23508zd2_1287);
												BgL_yz00_1280 = CAR(BgL_cdrzd23512zd2_1289);
												{	/* Expand/iarith.scm 203 */
													bool_t BgL_testz00_4155;

													if (INTEGERP(BgL_xz00_1279))
														{	/* Expand/iarith.scm 203 */
															BgL_testz00_4155 = INTEGERP(BgL_yz00_1280);
														}
													else
														{	/* Expand/iarith.scm 203 */
															BgL_testz00_4155 = ((bool_t) 0);
														}
													if (BgL_testz00_4155)
														{	/* Expand/iarith.scm 203 */
															return
																BBOOL(
																((long) CINT(BgL_xz00_1279) >=
																	(long) CINT(BgL_yz00_1280)));
														}
													else
														{	/* Expand/iarith.scm 206 */
															obj_t BgL_arg2882z00_1302;

															{	/* Expand/iarith.scm 206 */
																obj_t BgL_arg2883z00_1303;

																obj_t BgL_arg2884z00_1304;

																BgL_arg2883z00_1303 =
																	CNST_TABLE_REF(((long) 18));
																{	/* Expand/iarith.scm 206 */
																	obj_t BgL_list2885z00_1305;

																	{	/* Expand/iarith.scm 206 */
																		obj_t BgL_arg2886z00_1306;

																		BgL_arg2886z00_1306 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2885z00_1305 =
																			MAKE_PAIR(BgL_yz00_1280,
																			BgL_arg2886z00_1306);
																	}
																	BgL_arg2884z00_1304 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_xz00_1279, BgL_list2885z00_1305);
																}
																BgL_arg2882z00_1302 =
																	MAKE_PAIR(BgL_arg2883z00_1303,
																	BgL_arg2884z00_1304);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_20) (BgL_ez00_20,
																BgL_arg2882z00_1302, BgL_ez00_20, BEOA);
														}
												}
											}
										else
											{	/* Expand/iarith.scm 200 */
												BgL_xz00_1282 = CAR(BgL_cdrzd23508zd2_1287);
												BgL_yz00_1283 = CDR(BgL_cdrzd23508zd2_1287);
											BgL_tagzd23501zd2_1284:
												{	/* Expand/iarith.scm 208 */
													obj_t BgL_arg2888z00_1308;

													{	/* Expand/iarith.scm 208 */
														obj_t BgL_arg2890z00_1309;

														obj_t BgL_arg2891z00_1310;

														BgL_arg2890z00_1309 = CNST_TABLE_REF(((long) 10));
														{	/* Expand/iarith.scm 208 */
															obj_t BgL_arg2892z00_1311;

															obj_t BgL_arg2893z00_1312;

															{	/* Expand/iarith.scm 208 */
																obj_t BgL_arg2897z00_1316;

																obj_t BgL_arg2898z00_1317;

																BgL_arg2897z00_1316 =
																	CNST_TABLE_REF(((long) 18));
																{	/* Expand/iarith.scm 208 */
																	obj_t BgL_arg2899z00_1318;

																	BgL_arg2899z00_1318 = CAR(BgL_yz00_1283);
																	{	/* Expand/iarith.scm 208 */
																		obj_t BgL_list2901z00_1320;

																		{	/* Expand/iarith.scm 208 */
																			obj_t BgL_arg2902z00_1321;

																			BgL_arg2902z00_1321 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2901z00_1320 =
																				MAKE_PAIR(BgL_arg2899z00_1318,
																				BgL_arg2902z00_1321);
																		}
																		BgL_arg2898z00_1317 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_xz00_1282, BgL_list2901z00_1320);
																}}
																BgL_arg2892z00_1311 =
																	MAKE_PAIR(BgL_arg2897z00_1316,
																	BgL_arg2898z00_1317);
															}
															{	/* Expand/iarith.scm 208 */
																obj_t BgL_arg2903z00_1322;

																obj_t BgL_arg2904z00_1323;

																BgL_arg2903z00_1322 =
																	CNST_TABLE_REF(((long) 19));
																BgL_arg2904z00_1323 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_yz00_1283, BNIL);
																BgL_arg2893z00_1312 =
																	MAKE_PAIR(BgL_arg2903z00_1322,
																	BgL_arg2904z00_1323);
															}
															{	/* Expand/iarith.scm 208 */
																obj_t BgL_list2895z00_1314;

																{	/* Expand/iarith.scm 208 */
																	obj_t BgL_arg2896z00_1315;

																	BgL_arg2896z00_1315 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list2895z00_1314 =
																		MAKE_PAIR(BgL_arg2893z00_1312,
																		BgL_arg2896z00_1315);
																}
																BgL_arg2891z00_1310 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2892z00_1311, BgL_list2895z00_1314);
														}}
														BgL_arg2888z00_1308 =
															MAKE_PAIR(BgL_arg2890z00_1309,
															BgL_arg2891z00_1310);
													}
													return
														PROCEDURE_ENTRY(BgL_ez00_20) (BgL_ez00_20,
														BgL_arg2888z00_1308, BgL_ez00_20, BEOA);
												}
											}
									}
								else
									{
										obj_t BgL_yz00_4192;

										obj_t BgL_xz00_4190;

										BgL_xz00_4190 = CAR(BgL_cdrzd23508zd2_1287);
										BgL_yz00_4192 = CDR(BgL_cdrzd23508zd2_1287);
										BgL_yz00_1283 = BgL_yz00_4192;
										BgL_xz00_1282 = BgL_xz00_4190;
										goto BgL_tagzd23501zd2_1284;
									}
							}
						else
							{	/* Expand/iarith.scm 200 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/iarith.scm 200 */
						return BFALSE;
					}
			}
		}
	}



/* _expand-i>= */
	obj_t BGl__expandzd2ize3zd3ze2zzexpand_iarithmetiquez00(obj_t BgL_envz00_2566,
		obj_t BgL_xz00_2567, obj_t BgL_ez00_2568)
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 199 */
			return
				BGl_expandzd2ize3zd3ze2zzexpand_iarithmetiquez00(BgL_xz00_2567,
				BgL_ez00_2568);
		}
	}



/* expand-+fx */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2zb2fxz60zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_21, obj_t BgL_ez00_22)
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 213 */
			{
				obj_t BgL_xz00_1324;

				obj_t BgL_yz00_1325;

				if (PAIRP(BgL_xz00_21))
					{	/* Expand/iarith.scm 214 */
						obj_t BgL_cdrzd23564zd2_1330;

						BgL_cdrzd23564zd2_1330 = CDR(BgL_xz00_21);
						if (PAIRP(BgL_cdrzd23564zd2_1330))
							{	/* Expand/iarith.scm 214 */
								obj_t BgL_cdrzd23568zd2_1332;

								BgL_cdrzd23568zd2_1332 = CDR(BgL_cdrzd23564zd2_1330);
								if (PAIRP(BgL_cdrzd23568zd2_1332))
									{	/* Expand/iarith.scm 214 */
										if (NULLP(CDR(BgL_cdrzd23568zd2_1332)))
											{	/* Expand/iarith.scm 214 */
												BgL_xz00_1324 = CAR(BgL_cdrzd23564zd2_1330);
												BgL_yz00_1325 = CAR(BgL_cdrzd23568zd2_1332);
												{	/* Expand/iarith.scm 217 */
													bool_t BgL_testz00_4206;

													if (INTEGERP(BgL_xz00_1324))
														{	/* Expand/iarith.scm 217 */
															BgL_testz00_4206 = INTEGERP(BgL_yz00_1325);
														}
													else
														{	/* Expand/iarith.scm 217 */
															BgL_testz00_4206 = ((bool_t) 0);
														}
													if (BgL_testz00_4206)
														{	/* Expand/iarith.scm 217 */
															return
																BINT(
																((long) CINT(BgL_xz00_1324) +
																	(long) CINT(BgL_yz00_1325)));
														}
													else
														{	/* Expand/iarith.scm 220 */
															obj_t BgL_arg2913z00_1339;

															obj_t BgL_arg2914z00_1340;

															BgL_arg2913z00_1339 = CNST_TABLE_REF(((long) 2));
															{	/* Expand/iarith.scm 220 */
																obj_t BgL_arg2915z00_1341;

																obj_t BgL_arg2916z00_1342;

																BgL_arg2915z00_1341 =
																	PROCEDURE_ENTRY(BgL_ez00_22) (BgL_ez00_22,
																	BgL_xz00_1324, BgL_ez00_22, BEOA);
																BgL_arg2916z00_1342 =
																	PROCEDURE_ENTRY(BgL_ez00_22) (BgL_ez00_22,
																	BgL_yz00_1325, BgL_ez00_22, BEOA);
																{	/* Expand/iarith.scm 220 */
																	obj_t BgL_list2918z00_1344;

																	{	/* Expand/iarith.scm 220 */
																		obj_t BgL_arg2919z00_1345;

																		BgL_arg2919z00_1345 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2918z00_1344 =
																			MAKE_PAIR(BgL_arg2916z00_1342,
																			BgL_arg2919z00_1345);
																	}
																	BgL_arg2914z00_1340 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2915z00_1341, BgL_list2918z00_1344);
															}}
															return
																MAKE_PAIR(BgL_arg2913z00_1339,
																BgL_arg2914z00_1340);
														}
												}
											}
										else
											{	/* Expand/iarith.scm 214 */
											BgL_tagzd23557zd2_1327:
												return
													BGl_errorz00zz__errorz00(BFALSE,
													BGl_string3073z00zzexpand_iarithmetiquez00,
													BgL_xz00_21);
											}
									}
								else
									{	/* Expand/iarith.scm 214 */
										goto BgL_tagzd23557zd2_1327;
									}
							}
						else
							{	/* Expand/iarith.scm 214 */
								goto BgL_tagzd23557zd2_1327;
							}
					}
				else
					{	/* Expand/iarith.scm 214 */
						goto BgL_tagzd23557zd2_1327;
					}
			}
		}
	}



/* _expand-+fx */
	obj_t BGl__expandzd2zb2fxz60zzexpand_iarithmetiquez00(obj_t BgL_envz00_2569,
		obj_t BgL_xz00_2570, obj_t BgL_ez00_2571)
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 213 */
			return
				BGl_expandzd2zb2fxz60zzexpand_iarithmetiquez00(BgL_xz00_2570,
				BgL_ez00_2571);
		}
	}



/* expand--fx */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2zd2fxz00zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_23, obj_t BgL_ez00_24)
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 227 */
			{
				obj_t BgL_xz00_1347;

				obj_t BgL_yz00_1348;

				if (PAIRP(BgL_xz00_23))
					{	/* Expand/iarith.scm 228 */
						obj_t BgL_cdrzd23582zd2_1353;

						BgL_cdrzd23582zd2_1353 = CDR(BgL_xz00_23);
						if (PAIRP(BgL_cdrzd23582zd2_1353))
							{	/* Expand/iarith.scm 228 */
								obj_t BgL_cdrzd23586zd2_1355;

								BgL_cdrzd23586zd2_1355 = CDR(BgL_cdrzd23582zd2_1353);
								if (PAIRP(BgL_cdrzd23586zd2_1355))
									{	/* Expand/iarith.scm 228 */
										if (NULLP(CDR(BgL_cdrzd23586zd2_1355)))
											{	/* Expand/iarith.scm 228 */
												BgL_xz00_1347 = CAR(BgL_cdrzd23582zd2_1353);
												BgL_yz00_1348 = CAR(BgL_cdrzd23586zd2_1355);
												{	/* Expand/iarith.scm 231 */
													bool_t BgL_testz00_4238;

													if (INTEGERP(BgL_xz00_1347))
														{	/* Expand/iarith.scm 231 */
															BgL_testz00_4238 = INTEGERP(BgL_yz00_1348);
														}
													else
														{	/* Expand/iarith.scm 231 */
															BgL_testz00_4238 = ((bool_t) 0);
														}
													if (BgL_testz00_4238)
														{	/* Expand/iarith.scm 231 */
															return
																BINT(
																((long) CINT(BgL_xz00_1347) -
																	(long) CINT(BgL_yz00_1348)));
														}
													else
														{	/* Expand/iarith.scm 234 */
															obj_t BgL_arg2929z00_1362;

															obj_t BgL_arg2930z00_1363;

															BgL_arg2929z00_1362 = CNST_TABLE_REF(((long) 5));
															{	/* Expand/iarith.scm 234 */
																obj_t BgL_arg2931z00_1364;

																obj_t BgL_arg2932z00_1365;

																BgL_arg2931z00_1364 =
																	PROCEDURE_ENTRY(BgL_ez00_24) (BgL_ez00_24,
																	BgL_xz00_1347, BgL_ez00_24, BEOA);
																BgL_arg2932z00_1365 =
																	PROCEDURE_ENTRY(BgL_ez00_24) (BgL_ez00_24,
																	BgL_yz00_1348, BgL_ez00_24, BEOA);
																{	/* Expand/iarith.scm 234 */
																	obj_t BgL_list2934z00_1367;

																	{	/* Expand/iarith.scm 234 */
																		obj_t BgL_arg2935z00_1368;

																		BgL_arg2935z00_1368 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2934z00_1367 =
																			MAKE_PAIR(BgL_arg2932z00_1365,
																			BgL_arg2935z00_1368);
																	}
																	BgL_arg2930z00_1363 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2931z00_1364, BgL_list2934z00_1367);
															}}
															return
																MAKE_PAIR(BgL_arg2929z00_1362,
																BgL_arg2930z00_1363);
														}
												}
											}
										else
											{	/* Expand/iarith.scm 228 */
											BgL_tagzd23575zd2_1350:
												return
													BGl_errorz00zz__errorz00(BFALSE,
													BGl_string3074z00zzexpand_iarithmetiquez00,
													BgL_xz00_23);
											}
									}
								else
									{	/* Expand/iarith.scm 228 */
										goto BgL_tagzd23575zd2_1350;
									}
							}
						else
							{	/* Expand/iarith.scm 228 */
								goto BgL_tagzd23575zd2_1350;
							}
					}
				else
					{	/* Expand/iarith.scm 228 */
						goto BgL_tagzd23575zd2_1350;
					}
			}
		}
	}



/* _expand--fx */
	obj_t BGl__expandzd2zd2fxz00zzexpand_iarithmetiquez00(obj_t BgL_envz00_2572,
		obj_t BgL_xz00_2573, obj_t BgL_ez00_2574)
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 227 */
			return
				BGl_expandzd2zd2fxz00zzexpand_iarithmetiquez00(BgL_xz00_2573,
				BgL_ez00_2574);
		}
	}



/* expand-maxfx */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2maxfxzd2zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_25, obj_t BgL_ez00_26)
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 241 */
			{
				obj_t BgL_xz00_1375;

				obj_t BgL_yz00_1376;

				obj_t BgL_xz00_1372;

				obj_t BgL_yz00_1373;

				if (PAIRP(BgL_xz00_25))
					{	/* Expand/iarith.scm 242 */
						obj_t BgL_cdrzd23601zd2_1381;

						BgL_cdrzd23601zd2_1381 = CDR(BgL_xz00_25);
						if (PAIRP(BgL_cdrzd23601zd2_1381))
							{	/* Expand/iarith.scm 242 */
								if (NULLP(CDR(BgL_cdrzd23601zd2_1381)))
									{	/* Expand/iarith.scm 242 */
										obj_t BgL_arg2940z00_1384;

										BgL_arg2940z00_1384 = CAR(BgL_cdrzd23601zd2_1381);
										return
											PROCEDURE_ENTRY(BgL_ez00_26) (BgL_ez00_26,
											BgL_arg2940z00_1384, BgL_ez00_26, BEOA);
									}
								else
									{	/* Expand/iarith.scm 242 */
										obj_t BgL_cdrzd23617zd2_1386;

										BgL_cdrzd23617zd2_1386 = CDR(BgL_cdrzd23601zd2_1381);
										if (PAIRP(BgL_cdrzd23617zd2_1386))
											{	/* Expand/iarith.scm 242 */
												if (NULLP(CDR(BgL_cdrzd23617zd2_1386)))
													{	/* Expand/iarith.scm 242 */
														BgL_xz00_1372 = CAR(BgL_cdrzd23601zd2_1381);
														BgL_yz00_1373 = CAR(BgL_cdrzd23617zd2_1386);
														{	/* Expand/iarith.scm 247 */
															bool_t BgL_testz00_4276;

															if (INTEGERP(BgL_xz00_1372))
																{	/* Expand/iarith.scm 247 */
																	BgL_testz00_4276 = INTEGERP(BgL_yz00_1373);
																}
															else
																{	/* Expand/iarith.scm 247 */
																	BgL_testz00_4276 = ((bool_t) 0);
																}
															if (BgL_testz00_4276)
																{	/* Expand/iarith.scm 248 */
																	obj_t BgL_xz00_1400;

																	obj_t BgL_yz00_1401;

																	BgL_xz00_1400 = BgL_xz00_1372;
																	BgL_yz00_1401 = BgL_yz00_1373;
																	if (
																		((long) CINT(BgL_xz00_1400) >
																			(long) CINT(BgL_yz00_1401)))
																		{	/* Expand/iarith.scm 248 */
																			return BgL_xz00_1400;
																		}
																	else
																		{	/* Expand/iarith.scm 248 */
																			return BgL_yz00_1401;
																		}
																}
															else
																{	/* Expand/iarith.scm 250 */
																	obj_t BgL_arg2953z00_1403;

																	obj_t BgL_arg2954z00_1404;

																	BgL_arg2953z00_1403 =
																		CNST_TABLE_REF(((long) 20));
																	{	/* Expand/iarith.scm 250 */
																		obj_t BgL_arg2955z00_1405;

																		obj_t BgL_arg2956z00_1406;

																		{	/* Expand/iarith.scm 250 */
																			obj_t BgL_arg2961z00_1410;

																			obj_t BgL_arg2962z00_1411;

																			{	/* Expand/iarith.scm 250 */
																				obj_t BgL_arg2963z00_1412;

																				obj_t BgL_arg2964z00_1413;

																				BgL_arg2963z00_1412 =
																					CNST_TABLE_REF(((long) 21));
																				{	/* Expand/iarith.scm 250 */
																					obj_t BgL_arg2965z00_1414;

																					BgL_arg2965z00_1414 =
																						PROCEDURE_ENTRY(BgL_ez00_26)
																						(BgL_ez00_26, BgL_xz00_1372,
																						BgL_ez00_26, BEOA);
																					{	/* Expand/iarith.scm 250 */
																						obj_t BgL_list2967z00_1416;

																						BgL_list2967z00_1416 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg2964z00_1413 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2965z00_1414,
																							BgL_list2967z00_1416);
																				}}
																				BgL_arg2961z00_1410 =
																					MAKE_PAIR(BgL_arg2963z00_1412,
																					BgL_arg2964z00_1413);
																			}
																			{	/* Expand/iarith.scm 251 */
																				obj_t BgL_arg2968z00_1417;

																				{	/* Expand/iarith.scm 251 */
																					obj_t BgL_arg2971z00_1420;

																					obj_t BgL_arg2972z00_1421;

																					BgL_arg2971z00_1420 =
																						CNST_TABLE_REF(((long) 22));
																					{	/* Expand/iarith.scm 251 */
																						obj_t BgL_arg2973z00_1422;

																						BgL_arg2973z00_1422 =
																							PROCEDURE_ENTRY(BgL_ez00_26)
																							(BgL_ez00_26, BgL_yz00_1373,
																							BgL_ez00_26, BEOA);
																						{	/* Expand/iarith.scm 251 */
																							obj_t BgL_list2975z00_1424;

																							BgL_list2975z00_1424 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2972z00_1421 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2973z00_1422,
																								BgL_list2975z00_1424);
																					}}
																					BgL_arg2968z00_1417 =
																						MAKE_PAIR(BgL_arg2971z00_1420,
																						BgL_arg2972z00_1421);
																				}
																				{	/* Expand/iarith.scm 250 */
																					obj_t BgL_list2970z00_1419;

																					BgL_list2970z00_1419 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2962z00_1411 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2968z00_1417,
																						BgL_list2970z00_1419);
																			}}
																			BgL_arg2955z00_1405 =
																				MAKE_PAIR(BgL_arg2961z00_1410,
																				BgL_arg2962z00_1411);
																		}
																		{	/* Expand/iarith.scm 252 */
																			obj_t BgL_arg2976z00_1425;

																			obj_t BgL_arg2977z00_1426;

																			BgL_arg2976z00_1425 =
																				CNST_TABLE_REF(((long) 23));
																			{	/* Expand/iarith.scm 252 */
																				obj_t BgL_arg2978z00_1427;

																				obj_t BgL_arg2979z00_1428;

																				obj_t BgL_arg2980z00_1429;

																				{	/* Expand/iarith.scm 252 */
																					obj_t BgL_arg2985z00_1434;

																					obj_t BgL_arg2986z00_1435;

																					BgL_arg2985z00_1434 =
																						CNST_TABLE_REF(((long) 14));
																					{	/* Expand/iarith.scm 252 */
																						obj_t BgL_list2987z00_1436;

																						{	/* Expand/iarith.scm 252 */
																							obj_t BgL_arg2988z00_1437;

																							obj_t BgL_arg2989z00_1438;

																							BgL_arg2988z00_1437 =
																								CNST_TABLE_REF(((long) 22));
																							BgL_arg2989z00_1438 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list2987z00_1436 =
																								MAKE_PAIR(BgL_arg2988z00_1437,
																								BgL_arg2989z00_1438);
																						}
																						BgL_arg2986z00_1435 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(CNST_TABLE_REF(((long) 21)),
																							BgL_list2987z00_1436);
																					}
																					BgL_arg2978z00_1427 =
																						MAKE_PAIR(BgL_arg2985z00_1434,
																						BgL_arg2986z00_1435);
																				}
																				BgL_arg2979z00_1428 =
																					CNST_TABLE_REF(((long) 21));
																				BgL_arg2980z00_1429 =
																					CNST_TABLE_REF(((long) 22));
																				{	/* Expand/iarith.scm 252 */
																					obj_t BgL_list2982z00_1431;

																					{	/* Expand/iarith.scm 252 */
																						obj_t BgL_arg2983z00_1432;

																						{	/* Expand/iarith.scm 252 */
																							obj_t BgL_arg2984z00_1433;

																							BgL_arg2984z00_1433 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2983z00_1432 =
																								MAKE_PAIR(BgL_arg2980z00_1429,
																								BgL_arg2984z00_1433);
																						}
																						BgL_list2982z00_1431 =
																							MAKE_PAIR(BgL_arg2979z00_1428,
																							BgL_arg2983z00_1432);
																					}
																					BgL_arg2977z00_1426 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2978z00_1427,
																						BgL_list2982z00_1431);
																			}}
																			BgL_arg2956z00_1406 =
																				MAKE_PAIR(BgL_arg2976z00_1425,
																				BgL_arg2977z00_1426);
																		}
																		{	/* Expand/iarith.scm 250 */
																			obj_t BgL_list2959z00_1408;

																			{	/* Expand/iarith.scm 250 */
																				obj_t BgL_arg2960z00_1409;

																				BgL_arg2960z00_1409 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list2959z00_1408 =
																					MAKE_PAIR(BgL_arg2956z00_1406,
																					BgL_arg2960z00_1409);
																			}
																			BgL_arg2954z00_1404 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2955z00_1405,
																				BgL_list2959z00_1408);
																	}}
																	return
																		MAKE_PAIR(BgL_arg2953z00_1403,
																		BgL_arg2954z00_1404);
																}
														}
													}
												else
													{	/* Expand/iarith.scm 242 */
														BgL_xz00_1375 = CAR(BgL_cdrzd23601zd2_1381);
														BgL_yz00_1376 = CDR(BgL_cdrzd23601zd2_1381);
													BgL_tagzd23594zd2_1377:
														{	/* Expand/iarith.scm 254 */
															obj_t BgL_arg2991z00_1440;

															{	/* Expand/iarith.scm 254 */
																obj_t BgL_arg2992z00_1441;

																obj_t BgL_arg2993z00_1442;

																BgL_arg2992z00_1441 =
																	CNST_TABLE_REF(((long) 24));
																{	/* Expand/iarith.scm 254 */
																	obj_t BgL_arg2994z00_1443;

																	{	/* Expand/iarith.scm 254 */
																		obj_t BgL_arg2998z00_1447;

																		obj_t BgL_arg3000z00_1448;

																		BgL_arg2998z00_1447 =
																			CNST_TABLE_REF(((long) 24));
																		BgL_arg3000z00_1448 =
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_yz00_1376, BNIL);
																		BgL_arg2994z00_1443 =
																			MAKE_PAIR(BgL_arg2998z00_1447,
																			BgL_arg3000z00_1448);
																	}
																	{	/* Expand/iarith.scm 254 */
																		obj_t BgL_list2996z00_1445;

																		{	/* Expand/iarith.scm 254 */
																			obj_t BgL_arg2997z00_1446;

																			BgL_arg2997z00_1446 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2996z00_1445 =
																				MAKE_PAIR(BgL_arg2994z00_1443,
																				BgL_arg2997z00_1446);
																		}
																		BgL_arg2993z00_1442 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_xz00_1375, BgL_list2996z00_1445);
																}}
																BgL_arg2991z00_1440 =
																	MAKE_PAIR(BgL_arg2992z00_1441,
																	BgL_arg2993z00_1442);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_26) (BgL_ez00_26,
																BgL_arg2991z00_1440, BgL_ez00_26, BEOA);
														}
													}
											}
										else
											{
												obj_t BgL_yz00_4335;

												obj_t BgL_xz00_4333;

												BgL_xz00_4333 = CAR(BgL_cdrzd23601zd2_1381);
												BgL_yz00_4335 = CDR(BgL_cdrzd23601zd2_1381);
												BgL_yz00_1376 = BgL_yz00_4335;
												BgL_xz00_1375 = BgL_xz00_4333;
												goto BgL_tagzd23594zd2_1377;
											}
									}
							}
						else
							{	/* Expand/iarith.scm 242 */
							BgL_tagzd23595zd2_1378:
								return
									BGl_errorz00zz__errorz00(BFALSE,
									BGl_string3075z00zzexpand_iarithmetiquez00, BgL_xz00_25);
							}
					}
				else
					{	/* Expand/iarith.scm 242 */
						goto BgL_tagzd23595zd2_1378;
					}
			}
		}
	}



/* _expand-maxfx */
	obj_t BGl__expandzd2maxfxzd2zzexpand_iarithmetiquez00(obj_t BgL_envz00_2575,
		obj_t BgL_xz00_2576, obj_t BgL_ez00_2577)
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 241 */
			return
				BGl_expandzd2maxfxzd2zzexpand_iarithmetiquez00(BgL_xz00_2576,
				BgL_ez00_2577);
		}
	}



/* expand-minfx */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2minfxzd2zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_27, obj_t BgL_ez00_28)
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 261 */
			{
				obj_t BgL_xz00_1454;

				obj_t BgL_yz00_1455;

				obj_t BgL_xz00_1451;

				obj_t BgL_yz00_1452;

				if (PAIRP(BgL_xz00_27))
					{	/* Expand/iarith.scm 262 */
						obj_t BgL_cdrzd23679zd2_1460;

						BgL_cdrzd23679zd2_1460 = CDR(BgL_xz00_27);
						if (PAIRP(BgL_cdrzd23679zd2_1460))
							{	/* Expand/iarith.scm 262 */
								if (NULLP(CDR(BgL_cdrzd23679zd2_1460)))
									{	/* Expand/iarith.scm 262 */
										obj_t BgL_arg3004z00_1463;

										BgL_arg3004z00_1463 = CAR(BgL_cdrzd23679zd2_1460);
										return
											PROCEDURE_ENTRY(BgL_ez00_28) (BgL_ez00_28,
											BgL_arg3004z00_1463, BgL_ez00_28, BEOA);
									}
								else
									{	/* Expand/iarith.scm 262 */
										obj_t BgL_cdrzd23695zd2_1465;

										BgL_cdrzd23695zd2_1465 = CDR(BgL_cdrzd23679zd2_1460);
										if (PAIRP(BgL_cdrzd23695zd2_1465))
											{	/* Expand/iarith.scm 262 */
												if (NULLP(CDR(BgL_cdrzd23695zd2_1465)))
													{	/* Expand/iarith.scm 262 */
														BgL_xz00_1451 = CAR(BgL_cdrzd23679zd2_1460);
														BgL_yz00_1452 = CAR(BgL_cdrzd23695zd2_1465);
														{	/* Expand/iarith.scm 267 */
															bool_t BgL_testz00_4356;

															if (INTEGERP(BgL_xz00_1451))
																{	/* Expand/iarith.scm 267 */
																	BgL_testz00_4356 = INTEGERP(BgL_yz00_1452);
																}
															else
																{	/* Expand/iarith.scm 267 */
																	BgL_testz00_4356 = ((bool_t) 0);
																}
															if (BgL_testz00_4356)
																{	/* Expand/iarith.scm 268 */
																	obj_t BgL_xz00_1479;

																	obj_t BgL_yz00_1480;

																	BgL_xz00_1479 = BgL_xz00_1451;
																	BgL_yz00_1480 = BgL_yz00_1452;
																	if (
																		((long) CINT(BgL_xz00_1479) <
																			(long) CINT(BgL_yz00_1480)))
																		{	/* Expand/iarith.scm 268 */
																			return BgL_xz00_1479;
																		}
																	else
																		{	/* Expand/iarith.scm 268 */
																			return BgL_yz00_1480;
																		}
																}
															else
																{	/* Expand/iarith.scm 270 */
																	obj_t BgL_arg3017z00_1482;

																	obj_t BgL_arg3018z00_1483;

																	BgL_arg3017z00_1482 =
																		CNST_TABLE_REF(((long) 20));
																	{	/* Expand/iarith.scm 270 */
																		obj_t BgL_arg3019z00_1484;

																		obj_t BgL_arg3020z00_1485;

																		{	/* Expand/iarith.scm 270 */
																			obj_t BgL_arg3024z00_1489;

																			obj_t BgL_arg3025z00_1490;

																			{	/* Expand/iarith.scm 270 */
																				obj_t BgL_arg3026z00_1491;

																				obj_t BgL_arg3027z00_1492;

																				BgL_arg3026z00_1491 =
																					CNST_TABLE_REF(((long) 21));
																				{	/* Expand/iarith.scm 270 */
																					obj_t BgL_arg3028z00_1493;

																					BgL_arg3028z00_1493 =
																						PROCEDURE_ENTRY(BgL_ez00_28)
																						(BgL_ez00_28, BgL_xz00_1451,
																						BgL_ez00_28, BEOA);
																					{	/* Expand/iarith.scm 270 */
																						obj_t BgL_list3030z00_1495;

																						BgL_list3030z00_1495 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg3027z00_1492 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg3028z00_1493,
																							BgL_list3030z00_1495);
																				}}
																				BgL_arg3024z00_1489 =
																					MAKE_PAIR(BgL_arg3026z00_1491,
																					BgL_arg3027z00_1492);
																			}
																			{	/* Expand/iarith.scm 271 */
																				obj_t BgL_arg3031z00_1496;

																				{	/* Expand/iarith.scm 271 */
																					obj_t BgL_arg3034z00_1499;

																					obj_t BgL_arg3035z00_1500;

																					BgL_arg3034z00_1499 =
																						CNST_TABLE_REF(((long) 22));
																					{	/* Expand/iarith.scm 271 */
																						obj_t BgL_arg3036z00_1501;

																						BgL_arg3036z00_1501 =
																							PROCEDURE_ENTRY(BgL_ez00_28)
																							(BgL_ez00_28, BgL_yz00_1452,
																							BgL_ez00_28, BEOA);
																						{	/* Expand/iarith.scm 271 */
																							obj_t BgL_list3038z00_1503;

																							BgL_list3038z00_1503 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg3035z00_1500 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg3036z00_1501,
																								BgL_list3038z00_1503);
																					}}
																					BgL_arg3031z00_1496 =
																						MAKE_PAIR(BgL_arg3034z00_1499,
																						BgL_arg3035z00_1500);
																				}
																				{	/* Expand/iarith.scm 270 */
																					obj_t BgL_list3033z00_1498;

																					BgL_list3033z00_1498 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3025z00_1490 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3031z00_1496,
																						BgL_list3033z00_1498);
																			}}
																			BgL_arg3019z00_1484 =
																				MAKE_PAIR(BgL_arg3024z00_1489,
																				BgL_arg3025z00_1490);
																		}
																		{	/* Expand/iarith.scm 272 */
																			obj_t BgL_arg3039z00_1504;

																			obj_t BgL_arg3040z00_1505;

																			BgL_arg3039z00_1504 =
																				CNST_TABLE_REF(((long) 23));
																			{	/* Expand/iarith.scm 272 */
																				obj_t BgL_arg3041z00_1506;

																				obj_t BgL_arg3042z00_1507;

																				obj_t BgL_arg3043z00_1508;

																				{	/* Expand/iarith.scm 272 */
																					obj_t BgL_arg3048z00_1513;

																					obj_t BgL_arg3049z00_1514;

																					BgL_arg3048z00_1513 =
																						CNST_TABLE_REF(((long) 12));
																					{	/* Expand/iarith.scm 272 */
																						obj_t BgL_list3050z00_1515;

																						{	/* Expand/iarith.scm 272 */
																							obj_t BgL_arg3051z00_1516;

																							obj_t BgL_arg3052z00_1517;

																							BgL_arg3051z00_1516 =
																								CNST_TABLE_REF(((long) 22));
																							BgL_arg3052z00_1517 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list3050z00_1515 =
																								MAKE_PAIR(BgL_arg3051z00_1516,
																								BgL_arg3052z00_1517);
																						}
																						BgL_arg3049z00_1514 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(CNST_TABLE_REF(((long) 21)),
																							BgL_list3050z00_1515);
																					}
																					BgL_arg3041z00_1506 =
																						MAKE_PAIR(BgL_arg3048z00_1513,
																						BgL_arg3049z00_1514);
																				}
																				BgL_arg3042z00_1507 =
																					CNST_TABLE_REF(((long) 21));
																				BgL_arg3043z00_1508 =
																					CNST_TABLE_REF(((long) 22));
																				{	/* Expand/iarith.scm 272 */
																					obj_t BgL_list3045z00_1510;

																					{	/* Expand/iarith.scm 272 */
																						obj_t BgL_arg3046z00_1511;

																						{	/* Expand/iarith.scm 272 */
																							obj_t BgL_arg3047z00_1512;

																							BgL_arg3047z00_1512 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg3046z00_1511 =
																								MAKE_PAIR(BgL_arg3043z00_1508,
																								BgL_arg3047z00_1512);
																						}
																						BgL_list3045z00_1510 =
																							MAKE_PAIR(BgL_arg3042z00_1507,
																							BgL_arg3046z00_1511);
																					}
																					BgL_arg3040z00_1505 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3041z00_1506,
																						BgL_list3045z00_1510);
																			}}
																			BgL_arg3020z00_1485 =
																				MAKE_PAIR(BgL_arg3039z00_1504,
																				BgL_arg3040z00_1505);
																		}
																		{	/* Expand/iarith.scm 270 */
																			obj_t BgL_list3022z00_1487;

																			{	/* Expand/iarith.scm 270 */
																				obj_t BgL_arg3023z00_1488;

																				BgL_arg3023z00_1488 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list3022z00_1487 =
																					MAKE_PAIR(BgL_arg3020z00_1485,
																					BgL_arg3023z00_1488);
																			}
																			BgL_arg3018z00_1483 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3019z00_1484,
																				BgL_list3022z00_1487);
																	}}
																	return
																		MAKE_PAIR(BgL_arg3017z00_1482,
																		BgL_arg3018z00_1483);
																}
														}
													}
												else
													{	/* Expand/iarith.scm 262 */
														BgL_xz00_1454 = CAR(BgL_cdrzd23679zd2_1460);
														BgL_yz00_1455 = CDR(BgL_cdrzd23679zd2_1460);
													BgL_tagzd23672zd2_1456:
														{	/* Expand/iarith.scm 274 */
															obj_t BgL_arg3054z00_1519;

															{	/* Expand/iarith.scm 274 */
																obj_t BgL_arg3055z00_1520;

																obj_t BgL_arg3056z00_1521;

																BgL_arg3055z00_1520 =
																	CNST_TABLE_REF(((long) 25));
																{	/* Expand/iarith.scm 274 */
																	obj_t BgL_arg3057z00_1522;

																	{	/* Expand/iarith.scm 274 */
																		obj_t BgL_arg3061z00_1526;

																		obj_t BgL_arg3063z00_1527;

																		BgL_arg3061z00_1526 =
																			CNST_TABLE_REF(((long) 25));
																		BgL_arg3063z00_1527 =
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_yz00_1455, BNIL);
																		BgL_arg3057z00_1522 =
																			MAKE_PAIR(BgL_arg3061z00_1526,
																			BgL_arg3063z00_1527);
																	}
																	{	/* Expand/iarith.scm 274 */
																		obj_t BgL_list3059z00_1524;

																		{	/* Expand/iarith.scm 274 */
																			obj_t BgL_arg3060z00_1525;

																			BgL_arg3060z00_1525 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list3059z00_1524 =
																				MAKE_PAIR(BgL_arg3057z00_1522,
																				BgL_arg3060z00_1525);
																		}
																		BgL_arg3056z00_1521 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_xz00_1454, BgL_list3059z00_1524);
																}}
																BgL_arg3054z00_1519 =
																	MAKE_PAIR(BgL_arg3055z00_1520,
																	BgL_arg3056z00_1521);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_28) (BgL_ez00_28,
																BgL_arg3054z00_1519, BgL_ez00_28, BEOA);
														}
													}
											}
										else
											{
												obj_t BgL_yz00_4415;

												obj_t BgL_xz00_4413;

												BgL_xz00_4413 = CAR(BgL_cdrzd23679zd2_1460);
												BgL_yz00_4415 = CDR(BgL_cdrzd23679zd2_1460);
												BgL_yz00_1455 = BgL_yz00_4415;
												BgL_xz00_1454 = BgL_xz00_4413;
												goto BgL_tagzd23672zd2_1456;
											}
									}
							}
						else
							{	/* Expand/iarith.scm 262 */
							BgL_tagzd23673zd2_1457:
								return
									BGl_errorz00zz__errorz00(BFALSE,
									BGl_string3076z00zzexpand_iarithmetiquez00, BgL_xz00_27);
							}
					}
				else
					{	/* Expand/iarith.scm 262 */
						goto BgL_tagzd23673zd2_1457;
					}
			}
		}
	}



/* _expand-minfx */
	obj_t BGl__expandzd2minfxzd2zzexpand_iarithmetiquez00(obj_t BgL_envz00_2578,
		obj_t BgL_xz00_2579, obj_t BgL_ez00_2580)
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 261 */
			return
				BGl_expandzd2minfxzd2zzexpand_iarithmetiquez00(BgL_xz00_2579,
				BgL_ez00_2580);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzexpand_iarithmetiquez00()
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzexpand_iarithmetiquez00()
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzexpand_iarithmetiquez00()
	{
		AN_OBJECT;
		{	/* Expand/iarith.scm 15 */
			return
				BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3077z00zzexpand_iarithmetiquez00));
		}
	}

#ifdef __cplusplus
}
#endif
