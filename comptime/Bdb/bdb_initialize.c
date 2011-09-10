/*===========================================================================*/
/*   (Bdb/bdb_initialize.scm)                                                */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Bdb/bdb_initialize.scm)*/
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

	typedef struct BgL_valuez00_bgl
	{
		header_t header;
		obj_t widening;
	}               *BgL_valuez00_bglt;

	typedef struct BgL_variablez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
	}                  *BgL_variablez00_bglt;

	typedef struct BgL_sfunz00_bgl
	{
		header_t header;
		obj_t widening;
		long BgL_arityz00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_predicatezd2ofzd2;
		obj_t BgL_stackzd2allocatorzd2;
		bool_t BgL_topzf3zf3;
		obj_t BgL_thezd2closurezd2;
		obj_t BgL_effectz00;
		obj_t BgL_propertyz00;
		obj_t BgL_argsz00;
		obj_t BgL_argszd2namezd2;
		obj_t BgL_bodyz00;
		obj_t BgL_classz00;
		obj_t BgL_dssslzd2keywordszd2;
		obj_t BgL_locz00;
		obj_t BgL_optionalsz00;
		obj_t BgL_keysz00;
		obj_t BgL_thezd2closurezd2globalz00;
	}              *BgL_sfunz00_bglt;

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;


	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_buildzd2astzd2zzast_buildz00(obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	static obj_t BGl_cnstzd2initzd2zzbdb_initializa7eza7();
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzbdb_initializa7eza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_allocz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_buildz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzbdb_initializa7eza7();
	static obj_t BGl__initializa7ezd2astz75zzbdb_initializa7eza7(obj_t);
	static obj_t BGl_methodzd2initzd2zzbdb_initializa7eza7();
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbdb_initializa7eza7 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzbdb_initializa7eza7();
	BGL_IMPORT obj_t create_struct(obj_t, int);
	static obj_t BGl_importedzd2moduleszd2initz00zzbdb_initializa7eza7();
	extern BgL_nodez00_bglt BGl_coercez12z12zzcoerce_coercez00(BgL_nodez00_bglt,
		obj_t, BgL_typez00_bglt, bool_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_EXPORTED_DECL obj_t BGl_initializa7ezd2astz75zzbdb_initializa7eza7();
	static obj_t BGl_libraryzd2moduleszd2initz00zzbdb_initializa7eza7();
	static obj_t __cnst[5];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_initializa7ezd2astzd2envza7zzbdb_initializa7eza7,
		BgL_bgl__initializa7a7eza7d23368z00,
		BGl__initializa7ezd2astz75zzbdb_initializa7eza7, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3363z00zzbdb_initializa7eza7,
		BgL_bgl_string3363za700za7za7b3369za7, "((obj_t)__bdb_info)", 19);
	      DEFINE_STRING(BGl_string3364z00zzbdb_initializa7eza7,
		BgL_bgl_string3364za700za7za7b3370za7, "bdb_initialize", 14);
	      DEFINE_STRING(BGl_string3365z00zzbdb_initializa7eza7,
		BgL_bgl_string3365za700za7za7b3371za7,
		"unit bdb pragma::obj quote bdb-set-module-info! ", 48);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzbdb_initializa7eza7(long
		BgL_checksumz00_1316, char *BgL_fromz00_1317)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbdb_initializa7eza7))
				{
					BGl_requirezd2initializa7ationz75zzbdb_initializa7eza7 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzbdb_initializa7eza7();
					BGl_cnstzd2initzd2zzbdb_initializa7eza7();
					BGl_importedzd2moduleszd2initz00zzbdb_initializa7eza7();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbdb_initializa7eza7()
	{
		AN_OBJECT;
		{	/* Bdb/bdb_initialize.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"bdb_initialize");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"bdb_initialize");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbdb_initializa7eza7()
	{
		AN_OBJECT;
		{	/* Bdb/bdb_initialize.scm 15 */
			{	/* Bdb/bdb_initialize.scm 15 */
				obj_t BgL_cportz00_1308;

				BgL_cportz00_1308 =
					bgl_open_input_string(BGl_string3365z00zzbdb_initializa7eza7,
					(int) (((long) 0)));
				{
					long BgL_iz00_1309;

					BgL_iz00_1309 = ((long) 4);
				BgL_loopz00_1310:
					if ((BgL_iz00_1309 == ((long) -1)))
						{	/* Bdb/bdb_initialize.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Bdb/bdb_initialize.scm 15 */
							{	/* Bdb/bdb_initialize.scm 15 */
								obj_t BgL_arg3367z00_1312;

								{	/* Bdb/bdb_initialize.scm 15 */

									{	/* Bdb/bdb_initialize.scm 15 */
										obj_t BgL_locationz00_1314;

										BgL_locationz00_1314 = BBOOL(((bool_t) 0));
										{	/* Bdb/bdb_initialize.scm 15 */

											BgL_arg3367z00_1312 =
												BGl_readz00zz__readerz00(BgL_cportz00_1308,
												BgL_locationz00_1314);
										}
									}
								}
								{	/* Bdb/bdb_initialize.scm 15 */
									int BgL_auxz00_1332;

									BgL_auxz00_1332 = (int) (BgL_iz00_1309);
									CNST_TABLE_SET(BgL_auxz00_1332, BgL_arg3367z00_1312);
							}}
							{	/* Bdb/bdb_initialize.scm 15 */
								int BgL_auxz00_1315;

								BgL_auxz00_1315 = (int) ((BgL_iz00_1309 - ((long) 1)));
								{
									long BgL_iz00_1337;

									BgL_iz00_1337 = (long) (BgL_auxz00_1315);
									BgL_iz00_1309 = BgL_iz00_1337;
									goto BgL_loopz00_1310;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbdb_initializa7eza7()
	{
		AN_OBJECT;
		{	/* Bdb/bdb_initialize.scm 15 */
			return BUNSPEC;
		}
	}



/* initialize-ast */
	BGL_EXPORTED_DEF obj_t BGl_initializa7ezd2astz75zzbdb_initializa7eza7()
	{
		AN_OBJECT;
		{	/* Bdb/bdb_initialize.scm 42 */
			{	/* Bdb/bdb_initialize.scm 44 */
				obj_t BgL_bodyz00_815;

				{	/* Bdb/bdb_initialize.scm 44 */
					obj_t BgL_arg3296z00_830;

					{	/* Bdb/bdb_initialize.scm 44 */
						obj_t BgL_arg3298z00_832;

						obj_t BgL_arg3299z00_833;

						BgL_arg3298z00_832 = CNST_TABLE_REF(((long) 0));
						{	/* Bdb/bdb_initialize.scm 44 */
							obj_t BgL_arg3300z00_834;

							obj_t BgL_arg3301z00_835;

							{	/* Bdb/bdb_initialize.scm 44 */
								obj_t BgL_arg3305z00_839;

								obj_t BgL_arg3306z00_840;

								BgL_arg3305z00_839 = CNST_TABLE_REF(((long) 1));
								{	/* Bdb/bdb_initialize.scm 44 */
									obj_t BgL_list3307z00_841;

									BgL_list3307z00_841 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg3306z00_840 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BGl_za2moduleza2z00zzmodule_modulez00,
										BgL_list3307z00_841);
								}
								BgL_arg3300z00_834 =
									MAKE_PAIR(BgL_arg3305z00_839, BgL_arg3306z00_840);
							}
							{	/* Bdb/bdb_initialize.scm 45 */
								obj_t BgL_arg3308z00_842;

								obj_t BgL_arg3309z00_843;

								BgL_arg3308z00_842 = CNST_TABLE_REF(((long) 2));
								{	/* Bdb/bdb_initialize.scm 45 */
									obj_t BgL_list3310z00_844;

									BgL_list3310z00_844 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg3309z00_843 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BGl_string3363z00zzbdb_initializa7eza7,
										BgL_list3310z00_844);
								}
								BgL_arg3301z00_835 =
									MAKE_PAIR(BgL_arg3308z00_842, BgL_arg3309z00_843);
							}
							{	/* Bdb/bdb_initialize.scm 44 */
								obj_t BgL_list3303z00_837;

								{	/* Bdb/bdb_initialize.scm 44 */
									obj_t BgL_arg3304z00_838;

									BgL_arg3304z00_838 = MAKE_PAIR(BNIL, BNIL);
									BgL_list3303z00_837 =
										MAKE_PAIR(BgL_arg3301z00_835, BgL_arg3304z00_838);
								}
								BgL_arg3299z00_833 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg3300z00_834, BgL_list3303z00_837);
						}}
						BgL_arg3296z00_830 =
							MAKE_PAIR(BgL_arg3298z00_832, BgL_arg3299z00_833);
					}
					BgL_bodyz00_815 = MAKE_PAIR(BgL_arg3296z00_830, BNIL);
				}
				{	/* Bdb/bdb_initialize.scm 46 */
					obj_t BgL_unitz00_816;

					{	/* Bdb/bdb_initialize.scm 46 */
						obj_t BgL_idz00_1267;

						BgL_idz00_1267 = CNST_TABLE_REF(((long) 3));
						{	/* Bdb/bdb_initialize.scm 46 */
							obj_t BgL_newz00_1272;

							BgL_newz00_1272 =
								create_struct(CNST_TABLE_REF(((long) 4)), (int) (((long) 5)));
							{	/* Bdb/bdb_initialize.scm 46 */
								int BgL_auxz00_1357;

								BgL_auxz00_1357 = (int) (((long) 4));
								STRUCT_SET(BgL_newz00_1272, BgL_auxz00_1357, BFALSE);
							}
							{	/* Bdb/bdb_initialize.scm 46 */
								int BgL_auxz00_1360;

								BgL_auxz00_1360 = (int) (((long) 3));
								STRUCT_SET(BgL_newz00_1272, BgL_auxz00_1360, BTRUE);
							}
							{	/* Bdb/bdb_initialize.scm 46 */
								int BgL_auxz00_1363;

								BgL_auxz00_1363 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_1272, BgL_auxz00_1363, BgL_bodyz00_815);
							}
							{	/* Bdb/bdb_initialize.scm 46 */
								obj_t BgL_auxz00_1368;

								int BgL_auxz00_1366;

								BgL_auxz00_1368 = BINT(((long) 9));
								BgL_auxz00_1366 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_1272, BgL_auxz00_1366, BgL_auxz00_1368);
							}
							{	/* Bdb/bdb_initialize.scm 46 */
								int BgL_auxz00_1371;

								BgL_auxz00_1371 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_1272, BgL_auxz00_1371, BgL_idz00_1267);
							}
							BgL_unitz00_816 = BgL_newz00_1272;
					}}
					{	/* Bdb/bdb_initialize.scm 47 */
						obj_t BgL_astz00_817;

						{	/* Bdb/bdb_initialize.scm 47 */
							obj_t BgL_arg3294z00_828;

							{	/* Bdb/bdb_initialize.scm 47 */
								obj_t BgL_list3295z00_829;

								BgL_list3295z00_829 = MAKE_PAIR(BgL_unitz00_816, BNIL);
								BgL_arg3294z00_828 = BgL_list3295z00_829;
							}
							BgL_astz00_817 =
								BGl_buildzd2astzd2zzast_buildz00(BgL_arg3294z00_828);
						}
						{
							obj_t BgL_l3277z00_819;

							BgL_l3277z00_819 = BgL_astz00_817;
						BgL_zc3anonymousza33288ze3z83_820:
							if (PAIRP(BgL_l3277z00_819))
								{	/* Bdb/bdb_initialize.scm 48 */
									{	/* Bdb/bdb_initialize.scm 49 */
										obj_t BgL_globalz00_822;

										BgL_globalz00_822 = CAR(BgL_l3277z00_819);
										{	/* Bdb/bdb_initialize.scm 49 */
											obj_t BgL_arg3290z00_823;

											BgL_typez00_bglt BgL_arg3291z00_824;

											{	/* Bdb/bdb_initialize.scm 49 */
												BgL_sfunz00_bglt BgL_obj1907z00_1303;

												{	/* Bdb/bdb_initialize.scm 49 */
													BgL_variablez00_bglt BgL_obj1632z00_1302;

													BgL_obj1632z00_1302 =
														(BgL_variablez00_bglt) (BgL_globalz00_822);
													BgL_obj1907z00_1303 =
														(BgL_sfunz00_bglt) (
														(((BgL_variablez00_bglt)
																CREF(BgL_obj1632z00_1302))->BgL_valuez00));
												}
												BgL_arg3290z00_823 =
													(((BgL_sfunz00_bglt) CREF(BgL_obj1907z00_1303))->
													BgL_bodyz00);
											}
											{
												BgL_variablez00_bglt BgL_auxz00_1383;

												BgL_auxz00_1383 =
													(BgL_variablez00_bglt) (BgL_globalz00_822);
												BgL_arg3291z00_824 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_1383))->
													BgL_typez00);
											}
											BGl_coercez12z12zzcoerce_coercez00(
												(BgL_nodez00_bglt) (BgL_arg3290z00_823),
												BgL_globalz00_822, BgL_arg3291z00_824, ((bool_t) 0));
										}
									}
									{
										obj_t BgL_l3277z00_1388;

										BgL_l3277z00_1388 = CDR(BgL_l3277z00_819);
										BgL_l3277z00_819 = BgL_l3277z00_1388;
										goto BgL_zc3anonymousza33288ze3z83_820;
									}
								}
							else
								{	/* Bdb/bdb_initialize.scm 48 */
									((bool_t) 1);
								}
						}
						return BgL_astz00_817;
					}
				}
			}
		}
	}



/* _initialize-ast */
	obj_t BGl__initializa7ezd2astz75zzbdb_initializa7eza7(obj_t BgL_envz00_1306)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_initialize.scm 42 */
			return BGl_initializa7ezd2astz75zzbdb_initializa7eza7();
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbdb_initializa7eza7()
	{
		AN_OBJECT;
		{	/* Bdb/bdb_initialize.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbdb_initializa7eza7()
	{
		AN_OBJECT;
		{	/* Bdb/bdb_initialize.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbdb_initializa7eza7()
	{
		AN_OBJECT;
		{	/* Bdb/bdb_initialize.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3364z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3364z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3364z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3364z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3364z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string3364z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3364z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3364z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3364z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3364z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3364z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzast_buildz00(((long) 46924743),
				BSTRING_TO_STRING(BGl_string3364z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 498901618),
				BSTRING_TO_STRING(BGl_string3364z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(((long) 189731515),
				BSTRING_TO_STRING(BGl_string3364z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 387636515),
				BSTRING_TO_STRING(BGl_string3364z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzcnst_allocz00(((long) 355177025),
				BSTRING_TO_STRING(BGl_string3364z00zzbdb_initializa7eza7));
			return
				BGl_modulezd2initializa7ationz75zzcnst_nodez00(((long) 110472871),
				BSTRING_TO_STRING(BGl_string3364z00zzbdb_initializa7eza7));
		}
	}

#ifdef __cplusplus
}
#endif
