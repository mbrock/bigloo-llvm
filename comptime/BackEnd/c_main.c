/*===========================================================================*/
/*   (BackEnd/c_main.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent BackEnd/c_main.scm)*/
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

	typedef struct BgL_globalz00_bgl
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
		obj_t BgL_modulez00;
		obj_t BgL_importz00;
		bool_t BgL_evaluablezf3zf3;
		obj_t BgL_libraryz00;
		bool_t BgL_userzf3zf3;
		obj_t BgL_pragmaz00;
		obj_t BgL_srcz00;
		obj_t BgL_jvmzd2typezd2namez00;
	}                *BgL_globalz00_bglt;

	typedef struct BgL_localz00_bgl
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
		bool_t BgL_userzf3zf3;
		long BgL_keyz00;
	}               *BgL_localz00_bglt;

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;


	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzbackend_c_mainz00();
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzbackend_c_mainz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_za2mainza2z00zzmodule_modulez00;
	extern BgL_globalz00_bglt
		BGl_defzd2globalzd2sfunz12z12zzast_glozd2defzd2(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzbackend_c_mainz00();
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbackend_c_mainz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzbackend_c_mainz00();
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t BGl_modulezd2initializa7ationzd2idza7zzmodule_modulez00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzbackend_c_mainz00();
	BGL_EXPORTED_DECL obj_t BGl_makezd2bigloozd2mainz00zzbackend_c_mainz00();
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	static obj_t BGl__makezd2bigloozd2mainz00zzbackend_c_mainz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzbackend_c_mainz00();
	static obj_t __cnst[17];


	   
		 
		DEFINE_STRING(BGl_string3741z00zzbackend_c_mainz00,
		BgL_bgl_string3741za700za7za7b3746za7, "bigloo_main", 11);
	      DEFINE_STRING(BGl_string3742z00zzbackend_c_mainz00,
		BgL_bgl_string3742za700za7za7b3747za7, "backend_c_main", 14);
	      DEFINE_STRING(BGl_string3743z00zzbackend_c_mainz00,
		BgL_bgl_string3743za700za7za7b3748za7,
		"export now bigloo-main-procedure sfun (argv::obj) bigloo_main::obj value z $int->bint z::bint let %exit bigloo-initialized! __param @ begin argv ",
		145);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2bigloozd2mainzd2envzd2zzbackend_c_mainz00,
		BgL_bgl__makeza7d2biglooza7d3749z00,
		BGl__makezd2bigloozd2mainz00zzbackend_c_mainz00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzbackend_c_mainz00(long
		BgL_checksumz00_1394, char *BgL_fromz00_1395)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbackend_c_mainz00))
				{
					BGl_requirezd2initializa7ationz75zzbackend_c_mainz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzbackend_c_mainz00();
					BGl_cnstzd2initzd2zzbackend_c_mainz00();
					BGl_importedzd2moduleszd2initz00zzbackend_c_mainz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbackend_c_mainz00()
	{
		AN_OBJECT;
		{	/* BackEnd/c_main.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"backend_c_main");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"backend_c_main");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"backend_c_main");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"backend_c_main");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbackend_c_mainz00()
	{
		AN_OBJECT;
		{	/* BackEnd/c_main.scm 15 */
			{	/* BackEnd/c_main.scm 15 */
				obj_t BgL_cportz00_1386;

				BgL_cportz00_1386 =
					bgl_open_input_string(BGl_string3743z00zzbackend_c_mainz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1387;

					BgL_iz00_1387 = ((long) 16);
				BgL_loopz00_1388:
					if ((BgL_iz00_1387 == ((long) -1)))
						{	/* BackEnd/c_main.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* BackEnd/c_main.scm 15 */
							{	/* BackEnd/c_main.scm 15 */
								obj_t BgL_arg3745z00_1390;

								{	/* BackEnd/c_main.scm 15 */

									{	/* BackEnd/c_main.scm 15 */
										obj_t BgL_locationz00_1392;

										BgL_locationz00_1392 = BBOOL(((bool_t) 0));
										{	/* BackEnd/c_main.scm 15 */

											BgL_arg3745z00_1390 =
												BGl_readz00zz__readerz00(BgL_cportz00_1386,
												BgL_locationz00_1392);
										}
									}
								}
								{	/* BackEnd/c_main.scm 15 */
									int BgL_auxz00_1412;

									BgL_auxz00_1412 = (int) (BgL_iz00_1387);
									CNST_TABLE_SET(BgL_auxz00_1412, BgL_arg3745z00_1390);
							}}
							{	/* BackEnd/c_main.scm 15 */
								int BgL_auxz00_1393;

								BgL_auxz00_1393 = (int) ((BgL_iz00_1387 - ((long) 1)));
								{
									long BgL_iz00_1417;

									BgL_iz00_1417 = (long) (BgL_auxz00_1393);
									BgL_iz00_1387 = BgL_iz00_1417;
									goto BgL_loopz00_1388;
								}
							}
						}
				}
			}
		}
	}



/* make-bigloo-main */
	BGL_EXPORTED_DEF obj_t BGl_makezd2bigloozd2mainz00zzbackend_c_mainz00()
	{
		AN_OBJECT;
		{	/* BackEnd/c_main.scm 36 */
			{	/* BackEnd/c_main.scm 37 */
				obj_t BgL_argsz00_865;

				{	/* BackEnd/c_main.scm 37 */
					BgL_localz00_bglt BgL_arg3685z00_954;

					BgL_arg3685z00_954 =
						BGl_makezd2localzd2svarz00zzast_localz00(CNST_TABLE_REF(((long) 0)),
						(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00));
					{	/* BackEnd/c_main.scm 37 */
						obj_t BgL_list3686z00_955;

						BgL_list3686z00_955 = MAKE_PAIR((obj_t) (BgL_arg3685z00_954), BNIL);
						BgL_argsz00_865 = BgL_list3686z00_955;
				}}
				{	/* BackEnd/c_main.scm 37 */
					obj_t BgL_mainzd2bodyzd2_866;

					{	/* BackEnd/c_main.scm 38 */
						bool_t BgL_testz00_1424;

						{	/* BackEnd/c_main.scm 38 */
							obj_t BgL_obj2096z00_1372;

							BgL_obj2096z00_1372 = BGl_za2mainza2z00zzmodule_modulez00;
							BgL_testz00_1424 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj2096z00_1372,
								BGl_globalz00zzast_varz00);
						}
						if (BgL_testz00_1424)
							{	/* BackEnd/c_main.scm 39 */
								obj_t BgL_arg3601z00_872;

								obj_t BgL_arg3602z00_873;

								BgL_arg3601z00_872 = CNST_TABLE_REF(((long) 1));
								{	/* BackEnd/c_main.scm 40 */
									obj_t BgL_arg3603z00_874;

									obj_t BgL_arg3604z00_875;

									obj_t BgL_arg3605z00_876;

									{	/* BackEnd/c_main.scm 40 */
										obj_t BgL_arg3610z00_881;

										obj_t BgL_arg3612z00_882;

										BgL_arg3610z00_881 =
											BGl_modulezd2initializa7ationzd2idza7zzmodule_modulez00
											(BGl_za2moduleza2z00zzmodule_modulez00);
										{	/* BackEnd/c_main.scm 40 */
											obj_t BgL_arg3614z00_884;

											{	/* BackEnd/c_main.scm 42 */
												obj_t BgL_res3739z00_1375;

												{	/* BackEnd/c_main.scm 42 */
													obj_t BgL_symbolz00_1373;

													BgL_symbolz00_1373 =
														BGl_za2moduleza2z00zzmodule_modulez00;
													{	/* BackEnd/c_main.scm 42 */
														obj_t BgL_arg2063z00_1374;

														BgL_arg2063z00_1374 =
															SYMBOL_TO_STRING(BgL_symbolz00_1373);
														BgL_res3739z00_1375 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg2063z00_1374);
												}}
												BgL_arg3614z00_884 = BgL_res3739z00_1375;
											}
											{	/* BackEnd/c_main.scm 40 */
												obj_t BgL_list3616z00_886;

												{	/* BackEnd/c_main.scm 40 */
													obj_t BgL_arg3617z00_887;

													BgL_arg3617z00_887 = MAKE_PAIR(BNIL, BNIL);
													BgL_list3616z00_886 =
														MAKE_PAIR(BgL_arg3614z00_884, BgL_arg3617z00_887);
												}
												BgL_arg3612z00_882 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT((
															(long) 0)), BgL_list3616z00_886);
										}}
										BgL_arg3603z00_874 =
											MAKE_PAIR(BgL_arg3610z00_881, BgL_arg3612z00_882);
									}
									{	/* BackEnd/c_main.scm 43 */
										obj_t BgL_arg3618z00_888;

										{	/* BackEnd/c_main.scm 43 */
											obj_t BgL_arg3620z00_890;

											obj_t BgL_arg3621z00_891;

											BgL_arg3620z00_890 = CNST_TABLE_REF(((long) 2));
											{	/* BackEnd/c_main.scm 43 */
												obj_t BgL_list3622z00_892;

												{	/* BackEnd/c_main.scm 43 */
													obj_t BgL_arg3623z00_893;

													obj_t BgL_arg3624z00_894;

													BgL_arg3623z00_893 = CNST_TABLE_REF(((long) 3));
													BgL_arg3624z00_894 = MAKE_PAIR(BNIL, BNIL);
													BgL_list3622z00_892 =
														MAKE_PAIR(BgL_arg3623z00_893, BgL_arg3624z00_894);
												}
												BgL_arg3621z00_891 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(CNST_TABLE_REF(((long) 4)), BgL_list3622z00_892);
											}
											BgL_arg3618z00_888 =
												MAKE_PAIR(BgL_arg3620z00_890, BgL_arg3621z00_891);
										}
										BgL_arg3604z00_875 = MAKE_PAIR(BgL_arg3618z00_888, BNIL);
									}
									{	/* BackEnd/c_main.scm 44 */
										obj_t BgL_arg3625z00_895;

										obj_t BgL_arg3626z00_896;

										BgL_arg3625z00_895 = CNST_TABLE_REF(((long) 5));
										{	/* BackEnd/c_main.scm 44 */
											obj_t BgL_arg3627z00_897;

											{	/* BackEnd/c_main.scm 44 */
												obj_t BgL_arg3630z00_900;

												obj_t BgL_arg3631z00_901;

												{	/* BackEnd/c_main.scm 44 */
													obj_t BgL_arg3632z00_902;

													obj_t BgL_arg3633z00_903;

													BgL_arg3632z00_902 = CNST_TABLE_REF(((long) 2));
													{	/* BackEnd/c_main.scm 44 */
														obj_t BgL_arg3634z00_904;

														obj_t BgL_arg3635z00_905;

														{
															BgL_variablez00_bglt BgL_auxz00_1445;

															BgL_auxz00_1445 =
																(BgL_variablez00_bglt) (
																(BgL_globalz00_bglt)
																(BGl_za2mainza2z00zzmodule_modulez00));
															BgL_arg3634z00_904 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_auxz00_1445))->BgL_idz00);
														}
														{
															BgL_globalz00_bglt BgL_auxz00_1449;

															BgL_auxz00_1449 =
																(BgL_globalz00_bglt)
																(BGl_za2mainza2z00zzmodule_modulez00);
															BgL_arg3635z00_905 =
																(((BgL_globalz00_bglt) CREF(BgL_auxz00_1449))->
																BgL_modulez00);
														}
														{	/* BackEnd/c_main.scm 44 */
															obj_t BgL_list3637z00_907;

															{	/* BackEnd/c_main.scm 44 */
																obj_t BgL_arg3638z00_908;

																BgL_arg3638z00_908 = MAKE_PAIR(BNIL, BNIL);
																BgL_list3637z00_907 =
																	MAKE_PAIR(BgL_arg3635z00_905,
																	BgL_arg3638z00_908);
															}
															BgL_arg3633z00_903 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg3634z00_904, BgL_list3637z00_907);
													}}
													BgL_arg3630z00_900 =
														MAKE_PAIR(BgL_arg3632z00_902, BgL_arg3633z00_903);
												}
												{	/* BackEnd/c_main.scm 44 */
													obj_t BgL_list3639z00_909;

													BgL_list3639z00_909 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg3631z00_901 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(CNST_TABLE_REF(((long) 0)), BgL_list3639z00_909);
												}
												BgL_arg3627z00_897 =
													MAKE_PAIR(BgL_arg3630z00_900, BgL_arg3631z00_901);
											}
											{	/* BackEnd/c_main.scm 44 */
												obj_t BgL_list3629z00_899;

												BgL_list3629z00_899 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg3626z00_896 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg3627z00_897, BgL_list3629z00_899);
										}}
										BgL_arg3605z00_876 =
											MAKE_PAIR(BgL_arg3625z00_895, BgL_arg3626z00_896);
									}
									{	/* BackEnd/c_main.scm 39 */
										obj_t BgL_list3607z00_878;

										{	/* BackEnd/c_main.scm 39 */
											obj_t BgL_arg3608z00_879;

											{	/* BackEnd/c_main.scm 39 */
												obj_t BgL_arg3609z00_880;

												BgL_arg3609z00_880 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg3608z00_879 =
													MAKE_PAIR(BgL_arg3605z00_876, BgL_arg3609z00_880);
											}
											BgL_list3607z00_878 =
												MAKE_PAIR(BgL_arg3604z00_875, BgL_arg3608z00_879);
										}
										BgL_arg3602z00_873 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3603z00_874, BgL_list3607z00_878);
								}}
								BgL_mainzd2bodyzd2_866 =
									MAKE_PAIR(BgL_arg3601z00_872, BgL_arg3602z00_873);
							}
						else
							{	/* BackEnd/c_main.scm 47 */
								obj_t BgL_arg3640z00_910;

								obj_t BgL_arg3641z00_911;

								BgL_arg3640z00_910 = CNST_TABLE_REF(((long) 1));
								{	/* BackEnd/c_main.scm 48 */
									obj_t BgL_arg3642z00_912;

									obj_t BgL_arg3643z00_913;

									obj_t BgL_arg3644z00_914;

									{	/* BackEnd/c_main.scm 48 */
										obj_t BgL_arg3650z00_920;

										obj_t BgL_arg3651z00_921;

										BgL_arg3650z00_920 =
											BGl_modulezd2initializa7ationzd2idza7zzmodule_modulez00
											(BGl_za2moduleza2z00zzmodule_modulez00);
										{	/* BackEnd/c_main.scm 48 */
											obj_t BgL_arg3653z00_923;

											{	/* BackEnd/c_main.scm 50 */
												obj_t BgL_res3740z00_1380;

												{	/* BackEnd/c_main.scm 50 */
													obj_t BgL_symbolz00_1378;

													BgL_symbolz00_1378 =
														BGl_za2moduleza2z00zzmodule_modulez00;
													{	/* BackEnd/c_main.scm 50 */
														obj_t BgL_arg2063z00_1379;

														BgL_arg2063z00_1379 =
															SYMBOL_TO_STRING(BgL_symbolz00_1378);
														BgL_res3740z00_1380 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg2063z00_1379);
												}}
												BgL_arg3653z00_923 = BgL_res3740z00_1380;
											}
											{	/* BackEnd/c_main.scm 48 */
												obj_t BgL_list3655z00_925;

												{	/* BackEnd/c_main.scm 48 */
													obj_t BgL_arg3656z00_926;

													BgL_arg3656z00_926 = MAKE_PAIR(BNIL, BNIL);
													BgL_list3655z00_925 =
														MAKE_PAIR(BgL_arg3653z00_923, BgL_arg3656z00_926);
												}
												BgL_arg3651z00_921 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT((
															(long) 0)), BgL_list3655z00_925);
										}}
										BgL_arg3642z00_912 =
											MAKE_PAIR(BgL_arg3650z00_920, BgL_arg3651z00_921);
									}
									{	/* BackEnd/c_main.scm 51 */
										obj_t BgL_arg3657z00_927;

										{	/* BackEnd/c_main.scm 51 */
											obj_t BgL_arg3659z00_929;

											obj_t BgL_arg3660z00_930;

											BgL_arg3659z00_929 = CNST_TABLE_REF(((long) 2));
											{	/* BackEnd/c_main.scm 51 */
												obj_t BgL_list3661z00_931;

												{	/* BackEnd/c_main.scm 51 */
													obj_t BgL_arg3662z00_932;

													obj_t BgL_arg3663z00_933;

													BgL_arg3662z00_932 = CNST_TABLE_REF(((long) 3));
													BgL_arg3663z00_933 = MAKE_PAIR(BNIL, BNIL);
													BgL_list3661z00_931 =
														MAKE_PAIR(BgL_arg3662z00_932, BgL_arg3663z00_933);
												}
												BgL_arg3660z00_930 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(CNST_TABLE_REF(((long) 4)), BgL_list3661z00_931);
											}
											BgL_arg3657z00_927 =
												MAKE_PAIR(BgL_arg3659z00_929, BgL_arg3660z00_930);
										}
										BgL_arg3643z00_913 = MAKE_PAIR(BgL_arg3657z00_927, BNIL);
									}
									{	/* BackEnd/c_main.scm 52 */
										obj_t BgL_arg3664z00_934;

										obj_t BgL_arg3665z00_935;

										BgL_arg3664z00_934 = CNST_TABLE_REF(((long) 6));
										{	/* BackEnd/c_main.scm 52 */
											obj_t BgL_arg3666z00_936;

											obj_t BgL_arg3667z00_937;

											{	/* BackEnd/c_main.scm 52 */
												obj_t BgL_arg3671z00_941;

												{	/* BackEnd/c_main.scm 52 */
													obj_t BgL_arg3673z00_943;

													obj_t BgL_arg3674z00_944;

													BgL_arg3673z00_943 = CNST_TABLE_REF(((long) 7));
													{	/* BackEnd/c_main.scm 52 */
														obj_t BgL_arg3675z00_945;

														{	/* BackEnd/c_main.scm 52 */
															obj_t BgL_arg3679z00_948;

															obj_t BgL_arg3680z00_949;

															BgL_arg3679z00_948 = CNST_TABLE_REF(((long) 8));
															{	/* BackEnd/c_main.scm 52 */
																obj_t BgL_list3681z00_950;

																BgL_list3681z00_950 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg3680z00_949 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BINT(((long) 0)), BgL_list3681z00_950);
															}
															BgL_arg3675z00_945 =
																MAKE_PAIR(BgL_arg3679z00_948,
																BgL_arg3680z00_949);
														}
														{	/* BackEnd/c_main.scm 52 */
															obj_t BgL_list3678z00_947;

															BgL_list3678z00_947 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg3674z00_944 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg3675z00_945, BgL_list3678z00_947);
													}}
													BgL_arg3671z00_941 =
														MAKE_PAIR(BgL_arg3673z00_943, BgL_arg3674z00_944);
												}
												BgL_arg3666z00_936 =
													MAKE_PAIR(BgL_arg3671z00_941, BNIL);
											}
											{	/* BackEnd/c_main.scm 53 */
												obj_t BgL_arg3682z00_951;

												obj_t BgL_arg3683z00_952;

												BgL_arg3682z00_951 = CNST_TABLE_REF(((long) 5));
												{	/* BackEnd/c_main.scm 53 */
													obj_t BgL_list3684z00_953;

													BgL_list3684z00_953 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg3683z00_952 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(CNST_TABLE_REF(((long) 9)), BgL_list3684z00_953);
												}
												BgL_arg3667z00_937 =
													MAKE_PAIR(BgL_arg3682z00_951, BgL_arg3683z00_952);
											}
											{	/* BackEnd/c_main.scm 52 */
												obj_t BgL_list3669z00_939;

												{	/* BackEnd/c_main.scm 52 */
													obj_t BgL_arg3670z00_940;

													BgL_arg3670z00_940 = MAKE_PAIR(BNIL, BNIL);
													BgL_list3669z00_939 =
														MAKE_PAIR(BgL_arg3667z00_937, BgL_arg3670z00_940);
												}
												BgL_arg3665z00_935 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg3666z00_936, BgL_list3669z00_939);
										}}
										BgL_arg3644z00_914 =
											MAKE_PAIR(BgL_arg3664z00_934, BgL_arg3665z00_935);
									}
									{	/* BackEnd/c_main.scm 47 */
										obj_t BgL_list3646z00_916;

										{	/* BackEnd/c_main.scm 47 */
											obj_t BgL_arg3647z00_917;

											{	/* BackEnd/c_main.scm 47 */
												obj_t BgL_arg3648z00_918;

												{	/* BackEnd/c_main.scm 47 */
													obj_t BgL_arg3649z00_919;

													BgL_arg3649z00_919 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg3648z00_918 =
														MAKE_PAIR(BUNSPEC, BgL_arg3649z00_919);
												}
												BgL_arg3647z00_917 =
													MAKE_PAIR(BgL_arg3644z00_914, BgL_arg3648z00_918);
											}
											BgL_list3646z00_916 =
												MAKE_PAIR(BgL_arg3643z00_913, BgL_arg3647z00_917);
										}
										BgL_arg3641z00_911 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3642z00_912, BgL_list3646z00_916);
								}}
								BgL_mainzd2bodyzd2_866 =
									MAKE_PAIR(BgL_arg3640z00_910, BgL_arg3641z00_911);
					}}
					{	/* BackEnd/c_main.scm 38 */
						BgL_nodez00_bglt BgL_nodez00_867;

						{	/* BackEnd/c_main.scm 55 */
							obj_t BgL__z00_869;

							BgL__z00_869 = BGl_za2_za2z00zztype_cachez00;
							BGl_za2_za2z00zztype_cachez00 = BGl_za2objza2z00zztype_cachez00;
							{	/* BackEnd/c_main.scm 57 */
								BgL_nodez00_bglt BgL_nodez00_870;

								BgL_nodez00_870 =
									BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_mainzd2bodyzd2_866,
									BgL_argsz00_865, BFALSE, CNST_TABLE_REF(((long) 10)));
								BGl_za2_za2z00zztype_cachez00 = BgL__z00_869;
								BgL_nodez00_867 = BgL_nodez00_870;
						}}
						{	/* BackEnd/c_main.scm 55 */
							BgL_globalz00_bglt BgL_bigloozd2mainzd2_868;

							BgL_bigloozd2mainzd2_868 =
								BGl_defzd2globalzd2sfunz12z12zzast_glozd2defzd2(CNST_TABLE_REF((
										(long) 11)), CNST_TABLE_REF(((long) 12)), BgL_argsz00_865,
								BGl_za2moduleza2z00zzmodule_modulez00,
								CNST_TABLE_REF(((long) 13)), CNST_TABLE_REF(((long) 14)),
								CNST_TABLE_REF(((long) 15)), (obj_t) (BgL_nodez00_867));
							{	/* BackEnd/c_main.scm 60 */

								{	/* BackEnd/c_main.scm 68 */
									BgL_globalz00_bglt BgL_obj2026z00_1381;

									obj_t BgL_val2025z00_1382;

									BgL_obj2026z00_1381 = BgL_bigloozd2mainzd2_868;
									BgL_val2025z00_1382 = CNST_TABLE_REF(((long) 16));
									((((BgL_globalz00_bglt) CREF(BgL_obj2026z00_1381))->
											BgL_importz00) = ((obj_t) BgL_val2025z00_1382), BUNSPEC);
								}
								{
									BgL_variablez00_bglt BgL_auxz00_1522;

									BgL_auxz00_1522 =
										(BgL_variablez00_bglt) (BgL_bigloozd2mainzd2_868);
									((((BgL_variablez00_bglt) CREF(BgL_auxz00_1522))->
											BgL_namez00) =
										((obj_t) BGl_string3741z00zzbackend_c_mainz00), BUNSPEC);
								}
								return (obj_t) (BgL_bigloozd2mainzd2_868);
							}
						}
					}
				}
			}
		}
	}



/* _make-bigloo-main */
	obj_t BGl__makezd2bigloozd2mainz00zzbackend_c_mainz00(obj_t BgL_envz00_1385)
	{
		AN_OBJECT;
		{	/* BackEnd/c_main.scm 36 */
			return BGl_makezd2bigloozd2mainz00zzbackend_c_mainz00();
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbackend_c_mainz00()
	{
		AN_OBJECT;
		{	/* BackEnd/c_main.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbackend_c_mainz00()
	{
		AN_OBJECT;
		{	/* BackEnd/c_main.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbackend_c_mainz00()
	{
		AN_OBJECT;
		{	/* BackEnd/c_main.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3742z00zzbackend_c_mainz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string3742z00zzbackend_c_mainz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3742z00zzbackend_c_mainz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3742z00zzbackend_c_mainz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string3742z00zzbackend_c_mainz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string3742z00zzbackend_c_mainz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3742z00zzbackend_c_mainz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3742z00zzbackend_c_mainz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3742z00zzbackend_c_mainz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string3742z00zzbackend_c_mainz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string3742z00zzbackend_c_mainz00));
			BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(((long) 189731515),
				BSTRING_TO_STRING(BGl_string3742z00zzbackend_c_mainz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3742z00zzbackend_c_mainz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(((long)
					14608757), BSTRING_TO_STRING(BGl_string3742z00zzbackend_c_mainz00));
			return BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long)
					254412896), BSTRING_TO_STRING(BGl_string3742z00zzbackend_c_mainz00));
		}
	}

#ifdef __cplusplus
}
#endif
