/*===========================================================================*/
/*   (Object/generic.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Object/generic.scm)*/
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


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t
		BGl_makezd2nonzd2objectzd2genericzd2bodyz00zzobject_genericz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzobject_genericz00 = BUNSPEC;
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl_genericzd2initzd2zzobject_genericz00();
	static obj_t BGl__makezd2genericzd2bodyz00zzobject_genericz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzobject_genericz00();
	extern BgL_typez00_bglt BGl_getzd2defaultzd2typez00zztype_cachez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzobject_genericz00();
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzobject_genericz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_makezd2objectzd2genericzd2bodyzd2zzobject_genericz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern long BGl_globalzd2arityzd2zztools_argsz00(obj_t);
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzobject_genericz00();
	BGL_EXPORTED_DECL obj_t BGl_makezd2genericzd2bodyz00zzobject_genericz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzobject_genericz00();
	static obj_t __cnst[16];


	   
		 
		DEFINE_STRING(BGl_string2786z00zzobject_genericz00,
		BgL_bgl_string2786za700za7za7o2793za7,
		"Illegal generic definition (no formal arguments provided)", 57);
	      DEFINE_STRING(BGl_string2787z00zzobject_genericz00,
		BgL_bgl_string2787za700za7za7o2794za7,
		"Illegal global definition (internal error)", 42);
	      DEFINE_STRING(BGl_string2788z00zzobject_genericz00,
		BgL_bgl_string2788za700za7za7o2795za7,
		"generic function has a non-class dispatching type arg", 53);
	      DEFINE_STRING(BGl_string2790z00zzobject_genericz00,
		BgL_bgl_string2790za700za7za7o2796za7,
		"object? labels begin procedure? if -default __r4_pairs_and_lists_6_3 generic-default cons* apply @ find-method let procedure method sgfun ",
		138);
	      DEFINE_STRING(BGl_string2789z00zzobject_genericz00,
		BgL_bgl_string2789za700za7za7o2797za7, "object_generic", 14);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2genericzd2bodyzd2envzd2zzobject_genericz00,
		BgL_bgl__makeza7d2genericza72798z00,
		BGl__makezd2genericzd2bodyz00zzobject_genericz00, 0L, BUNSPEC, 4);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzobject_genericz00(long
		BgL_checksumz00_912, char *BgL_fromz00_913)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzobject_genericz00))
				{
					BGl_requirezd2initializa7ationz75zzobject_genericz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzobject_genericz00();
					BGl_cnstzd2initzd2zzobject_genericz00();
					BGl_importedzd2moduleszd2initz00zzobject_genericz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzobject_genericz00()
	{
		AN_OBJECT;
		{	/* Object/generic.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"object_generic");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"object_generic");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"object_generic");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"object_generic");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"object_generic");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzobject_genericz00()
	{
		AN_OBJECT;
		{	/* Object/generic.scm 15 */
			{	/* Object/generic.scm 15 */
				obj_t BgL_cportz00_904;

				BgL_cportz00_904 =
					bgl_open_input_string(BGl_string2790z00zzobject_genericz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_905;

					BgL_iz00_905 = ((long) 15);
				BgL_loopz00_906:
					if ((BgL_iz00_905 == ((long) -1)))
						{	/* Object/generic.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Object/generic.scm 15 */
							{	/* Object/generic.scm 15 */
								obj_t BgL_arg2792z00_908;

								{	/* Object/generic.scm 15 */

									{	/* Object/generic.scm 15 */
										obj_t BgL_locationz00_910;

										BgL_locationz00_910 = BBOOL(((bool_t) 0));
										{	/* Object/generic.scm 15 */

											BgL_arg2792z00_908 =
												BGl_readz00zz__readerz00(BgL_cportz00_904,
												BgL_locationz00_910);
										}
									}
								}
								{	/* Object/generic.scm 15 */
									int BgL_auxz00_931;

									BgL_auxz00_931 = (int) (BgL_iz00_905);
									CNST_TABLE_SET(BgL_auxz00_931, BgL_arg2792z00_908);
							}}
							{	/* Object/generic.scm 15 */
								int BgL_auxz00_911;

								BgL_auxz00_911 = (int) ((BgL_iz00_905 - ((long) 1)));
								{
									long BgL_iz00_936;

									BgL_iz00_936 = (long) (BgL_auxz00_911);
									BgL_iz00_905 = BgL_iz00_936;
									goto BgL_loopz00_906;
								}
							}
						}
				}
			}
		}
	}



/* make-generic-body */
	BGL_EXPORTED_DEF obj_t BGl_makezd2genericzd2bodyz00zzobject_genericz00(obj_t
		BgL_idz00_1, obj_t BgL_localsz00_2, obj_t BgL_argsz00_3, obj_t BgL_srcz00_4)
	{
		AN_OBJECT;
		{	/* Object/generic.scm 33 */
			{
				obj_t BgL_msgz00_477;

				{	/* Object/generic.scm 36 */
					obj_t BgL_gz00_445;

					BgL_gz00_445 =
						BGl_findzd2globalzf2modulez20zzast_envz00(BgL_idz00_1,
						BGl_za2moduleza2z00zzmodule_modulez00);
					if (NULLP(BgL_argsz00_3))
						{	/* Object/generic.scm 38 */
							BgL_msgz00_477 = BGl_string2786z00zzobject_genericz00;
						BgL_zc3anonymousza32449ze3z83_478:
							{	/* Object/generic.scm 35 */
								obj_t BgL_list2450z00_479;

								BgL_list2450z00_479 = MAKE_PAIR(BNIL, BNIL);
								return
									BGl_userzd2errorzd2zztools_errorz00(BgL_idz00_1,
									BgL_msgz00_477, BgL_srcz00_4, BgL_list2450z00_479);
							}
						}
					else
						{	/* Object/generic.scm 40 */
							bool_t BgL_testz00_943;

							if (BGl_iszd2azf3z21zz__objectz00(BgL_gz00_445,
									BGl_globalz00zzast_varz00))
								{	/* Object/generic.scm 41 */
									bool_t BgL__ortest_2371z00_467;

									{	/* Object/generic.scm 41 */
										bool_t BgL_testz00_946;

										{	/* Object/generic.scm 41 */
											BgL_valuez00_bglt BgL_arg2448z00_476;

											{
												BgL_variablez00_bglt BgL_auxz00_947;

												BgL_auxz00_947 =
													(BgL_variablez00_bglt) (
													(BgL_globalz00_bglt) (BgL_gz00_445));
												BgL_arg2448z00_476 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_947))->
													BgL_valuez00);
											}
											{	/* Object/generic.scm 41 */
												obj_t BgL_obj1955z00_834;

												BgL_obj1955z00_834 = (obj_t) (BgL_arg2448z00_476);
												BgL_testz00_946 =
													BGl_iszd2azf3z21zz__objectz00(BgL_obj1955z00_834,
													BGl_sfunz00zzast_varz00);
											}
										}
										if (BgL_testz00_946)
											{	/* Object/generic.scm 41 */
												BgL__ortest_2371z00_467 = ((bool_t) 0);
											}
										else
											{	/* Object/generic.scm 41 */
												BgL__ortest_2371z00_467 = ((bool_t) 1);
											}
									}
									if (BgL__ortest_2371z00_467)
										{	/* Object/generic.scm 41 */
											BgL_testz00_943 = BgL__ortest_2371z00_467;
										}
									else
										{	/* Object/generic.scm 42 */
											bool_t BgL__ortest_2372z00_468;

											{	/* Object/generic.scm 42 */
												bool_t BgL_testz00_954;

												{	/* Object/generic.scm 42 */
													obj_t BgL_auxz00_955;

													{	/* Object/generic.scm 42 */
														BgL_sfunz00_bglt BgL_obj1887z00_836;

														{	/* Object/generic.scm 42 */
															BgL_variablez00_bglt BgL_obj1611z00_835;

															BgL_obj1611z00_835 =
																(BgL_variablez00_bglt) (
																(BgL_globalz00_bglt) (BgL_gz00_445));
															BgL_obj1887z00_836 =
																(BgL_sfunz00_bglt) (
																(((BgL_variablez00_bglt)
																		CREF(BgL_obj1611z00_835))->BgL_valuez00));
														}
														BgL_auxz00_955 =
															(((BgL_sfunz00_bglt) CREF(BgL_obj1887z00_836))->
															BgL_classz00);
													}
													BgL_testz00_954 =
														(BgL_auxz00_955 == CNST_TABLE_REF(((long) 0)));
												}
												if (BgL_testz00_954)
													{	/* Object/generic.scm 42 */
														BgL__ortest_2372z00_468 = ((bool_t) 0);
													}
												else
													{	/* Object/generic.scm 42 */
														BgL__ortest_2372z00_468 = ((bool_t) 1);
													}
											}
											if (BgL__ortest_2372z00_468)
												{	/* Object/generic.scm 42 */
													BgL_testz00_943 = BgL__ortest_2372z00_468;
												}
											else
												{	/* Object/generic.scm 43 */
													obj_t BgL_auxz00_964;

													{	/* Object/generic.scm 43 */
														BgL_sfunz00_bglt BgL_obj1880z00_838;

														{	/* Object/generic.scm 43 */
															BgL_variablez00_bglt BgL_obj1611z00_837;

															BgL_obj1611z00_837 =
																(BgL_variablez00_bglt) (
																(BgL_globalz00_bglt) (BgL_gz00_445));
															BgL_obj1880z00_838 =
																(BgL_sfunz00_bglt) (
																(((BgL_variablez00_bglt)
																		CREF(BgL_obj1611z00_837))->BgL_valuez00));
														}
														BgL_auxz00_964 =
															(((BgL_sfunz00_bglt) CREF(BgL_obj1880z00_838))->
															BgL_argsz00);
													}
													BgL_testz00_943 = NULLP(BgL_auxz00_964);
												}
										}
								}
							else
								{	/* Object/generic.scm 40 */
									BgL_testz00_943 = ((bool_t) 0);
								}
							if (BgL_testz00_943)
								{
									obj_t BgL_msgz00_971;

									BgL_msgz00_971 = BGl_string2787z00zzobject_genericz00;
									BgL_msgz00_477 = BgL_msgz00_971;
									goto BgL_zc3anonymousza32449ze3z83_478;
								}
							else
								{	/* Object/generic.scm 46 */
									obj_t BgL_methodzd2argzd2_448;

									BgL_methodzd2argzd2_448 = CAR(BgL_localsz00_2);
									{	/* Object/generic.scm 46 */
										BgL_typez00_bglt BgL_methodzd2argzd2typez00_449;

										{
											BgL_variablez00_bglt BgL_auxz00_973;

											BgL_auxz00_973 =
												(BgL_variablez00_bglt) (BgL_methodzd2argzd2_448);
											BgL_methodzd2argzd2typez00_449 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_973))->
												BgL_typez00);
										}
										{	/* Object/generic.scm 47 */
											obj_t BgL_ptypez00_450;

											if (BGl_iszd2azf3z21zz__objectz00(BgL_gz00_445,
													BGl_globalz00zzast_varz00))
												{	/* Object/generic.scm 48 */
													obj_t BgL_pairz00_845;

													{	/* Object/generic.scm 48 */
														BgL_sfunz00_bglt BgL_obj1880z00_844;

														{	/* Object/generic.scm 48 */
															BgL_variablez00_bglt BgL_obj1611z00_843;

															BgL_obj1611z00_843 =
																(BgL_variablez00_bglt) (
																(BgL_globalz00_bglt) (BgL_gz00_445));
															BgL_obj1880z00_844 =
																(BgL_sfunz00_bglt) (
																(((BgL_variablez00_bglt)
																		CREF(BgL_obj1611z00_843))->BgL_valuez00));
														}
														BgL_pairz00_845 =
															(((BgL_sfunz00_bglt) CREF(BgL_obj1880z00_844))->
															BgL_argsz00);
													}
													BgL_ptypez00_450 = CAR(BgL_pairz00_845);
												}
											else
												{	/* Object/generic.scm 48 */
													BgL_ptypez00_450 = BFALSE;
												}
											{	/* Object/generic.scm 48 */

												{	/* Object/generic.scm 50 */
													bool_t BgL_testz00_984;

													{	/* Object/generic.scm 50 */
														bool_t BgL_testz00_985;

														{	/* Object/generic.scm 50 */
															obj_t BgL_obj2139z00_846;

															BgL_obj2139z00_846 =
																(obj_t) (BgL_methodzd2argzd2typez00_449);
															BgL_testz00_985 =
																BGl_iszd2azf3z21zz__objectz00
																(BgL_obj2139z00_846,
																BGl_tclassz00zzobject_classz00);
														}
														if (BgL_testz00_985)
															{	/* Object/generic.scm 50 */
																BgL_testz00_984 = ((bool_t) 1);
															}
														else
															{	/* Object/generic.scm 50 */
																BgL_testz00_984 =
																	BGl_iszd2azf3z21zz__objectz00
																	(BgL_ptypez00_450,
																	BGl_tclassz00zzobject_classz00);
															}
													}
													if (BgL_testz00_984)
														{	/* Object/generic.scm 50 */
															return
																BGl_makezd2objectzd2genericzd2bodyzd2zzobject_genericz00
																(BgL_idz00_1, BgL_localsz00_2, BgL_argsz00_3,
																BgL_srcz00_4);
														}
													else
														{	/* Object/generic.scm 52 */
															bool_t BgL_testz00_990;

															{	/* Object/generic.scm 52 */
																bool_t BgL_testz00_991;

																{	/* Object/generic.scm 52 */
																	obj_t BgL_obj1599z00_848;

																	BgL_obj1599z00_848 =
																		(obj_t) (BgL_methodzd2argzd2typez00_449);
																	BgL_testz00_991 =
																		BGl_iszd2azf3z21zz__objectz00
																		(BgL_obj1599z00_848,
																		BGl_typez00zztype_typez00);
																}
																if (BgL_testz00_991)
																	{	/* Object/generic.scm 52 */
																		if (
																			((obj_t) (BgL_methodzd2argzd2typez00_449)
																				== BGl_za2objza2z00zztype_cachez00))
																			{	/* Object/generic.scm 53 */
																				BgL_testz00_990 = ((bool_t) 0);
																			}
																		else
																			{	/* Object/generic.scm 54 */
																				bool_t BgL_testz00_997;

																				{	/* Object/generic.scm 54 */
																					BgL_typez00_bglt BgL_arg2403z00_461;

																					BgL_arg2403z00_461 =
																						BGl_getzd2defaultzd2typez00zztype_cachez00
																						();
																					BgL_testz00_997 =
																						((obj_t)
																						(BgL_methodzd2argzd2typez00_449) ==
																						(obj_t) (BgL_arg2403z00_461));
																				}
																				if (BgL_testz00_997)
																					{	/* Object/generic.scm 54 */
																						BgL_testz00_990 = ((bool_t) 0);
																					}
																				else
																					{	/* Object/generic.scm 54 */
																						BgL_testz00_990 = ((bool_t) 1);
																					}
																			}
																	}
																else
																	{	/* Object/generic.scm 52 */
																		BgL_testz00_990 = ((bool_t) 0);
																	}
															}
															if (BgL_testz00_990)
																{
																	obj_t BgL_msgz00_1002;

																	BgL_msgz00_1002 =
																		BGl_string2788z00zzobject_genericz00;
																	BgL_msgz00_477 = BgL_msgz00_1002;
																	goto BgL_zc3anonymousza32449ze3z83_478;
																}
															else
																{	/* Object/generic.scm 56 */
																	bool_t BgL_testz00_1003;

																	if (BGl_iszd2azf3z21zz__objectz00
																		(BgL_ptypez00_450,
																			BGl_typez00zztype_typez00))
																		{	/* Object/generic.scm 56 */
																			if (
																				(BgL_ptypez00_450 ==
																					BGl_za2objza2z00zztype_cachez00))
																				{	/* Object/generic.scm 57 */
																					BgL_testz00_1003 = ((bool_t) 0);
																				}
																			else
																				{	/* Object/generic.scm 58 */
																					bool_t BgL_testz00_1008;

																					{	/* Object/generic.scm 58 */
																						BgL_typez00_bglt BgL_arg2396z00_457;

																						BgL_arg2396z00_457 =
																							BGl_getzd2defaultzd2typez00zztype_cachez00
																							();
																						BgL_testz00_1008 =
																							(BgL_ptypez00_450 ==
																							(obj_t) (BgL_arg2396z00_457));
																					}
																					if (BgL_testz00_1008)
																						{	/* Object/generic.scm 58 */
																							BgL_testz00_1003 = ((bool_t) 0);
																						}
																					else
																						{	/* Object/generic.scm 58 */
																							BgL_testz00_1003 = ((bool_t) 1);
																						}
																				}
																		}
																	else
																		{	/* Object/generic.scm 56 */
																			BgL_testz00_1003 = ((bool_t) 0);
																		}
																	if (BgL_testz00_1003)
																		{
																			obj_t BgL_msgz00_1012;

																			BgL_msgz00_1012 =
																				BGl_string2788z00zzobject_genericz00;
																			BgL_msgz00_477 = BgL_msgz00_1012;
																			goto BgL_zc3anonymousza32449ze3z83_478;
																		}
																	else
																		{	/* Object/generic.scm 56 */
																			return
																				BGl_makezd2nonzd2objectzd2genericzd2bodyz00zzobject_genericz00
																				(BgL_idz00_1, BgL_localsz00_2,
																				BgL_argsz00_3, BgL_srcz00_4);
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
			}
		}
	}



/* _make-generic-body */
	obj_t BGl__makezd2genericzd2bodyz00zzobject_genericz00(obj_t BgL_envz00_899,
		obj_t BgL_idz00_900, obj_t BgL_localsz00_901, obj_t BgL_argsz00_902,
		obj_t BgL_srcz00_903)
	{
		AN_OBJECT;
		{	/* Object/generic.scm 33 */
			return
				BGl_makezd2genericzd2bodyz00zzobject_genericz00(BgL_idz00_900,
				BgL_localsz00_901, BgL_argsz00_902, BgL_srcz00_903);
		}
	}



/* make-object-generic-body */
	obj_t BGl_makezd2objectzd2genericzd2bodyzd2zzobject_genericz00(obj_t
		BgL_idz00_5, obj_t BgL_localsz00_6, obj_t BgL_argsz00_7, obj_t BgL_srcz00_8)
	{
		AN_OBJECT;
		{	/* Object/generic.scm 66 */
			{	/* Object/generic.scm 67 */
				obj_t BgL_pidz00_481;

				BgL_pidz00_481 =
					BGl_parsezd2idzd2zzast_identz00(BgL_idz00_5,
					BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_8));
				{	/* Object/generic.scm 67 */
					obj_t BgL_idz00_482;

					BgL_idz00_482 = CAR(BgL_pidz00_481);
					{	/* Object/generic.scm 68 */
						long BgL_arityz00_483;

						BgL_arityz00_483 =
							BGl_globalzd2arityzd2zztools_argsz00(BgL_argsz00_7);
						{	/* Object/generic.scm 69 */
							obj_t BgL_argszd2idzd2_484;

							if (NULLP(BgL_localsz00_6))
								{	/* Object/generic.scm 70 */
									BgL_argszd2idzd2_484 = BNIL;
								}
							else
								{	/* Object/generic.scm 70 */
									obj_t BgL_head2376z00_525;

									{	/* Object/generic.scm 70 */
										obj_t BgL_arg2571z00_538;

										{	/* Object/generic.scm 70 */
											BgL_variablez00_bglt BgL_obj1604z00_853;

											{	/* Object/generic.scm 70 */
												obj_t BgL_pairz00_852;

												BgL_pairz00_852 = BgL_localsz00_6;
												BgL_obj1604z00_853 =
													(BgL_variablez00_bglt) (CAR(BgL_pairz00_852));
											}
											BgL_arg2571z00_538 =
												(((BgL_variablez00_bglt) CREF(BgL_obj1604z00_853))->
												BgL_idz00);
										}
										BgL_head2376z00_525 = MAKE_PAIR(BgL_arg2571z00_538, BNIL);
									}
									{	/* Object/generic.scm 70 */
										obj_t BgL_g2379z00_526;

										BgL_g2379z00_526 = CDR(BgL_localsz00_6);
										{
											obj_t BgL_l2374z00_528;

											obj_t BgL_tail2377z00_529;

											BgL_l2374z00_528 = BgL_g2379z00_526;
											BgL_tail2377z00_529 = BgL_head2376z00_525;
										BgL_zc3anonymousza32561ze3z83_530:
											if (NULLP(BgL_l2374z00_528))
												{	/* Object/generic.scm 70 */
													BgL_argszd2idzd2_484 = BgL_head2376z00_525;
												}
											else
												{	/* Object/generic.scm 70 */
													obj_t BgL_newtail2378z00_532;

													{	/* Object/generic.scm 70 */
														obj_t BgL_arg2564z00_534;

														{	/* Object/generic.scm 70 */
															BgL_variablez00_bglt BgL_obj1604z00_859;

															{	/* Object/generic.scm 70 */
																obj_t BgL_pairz00_858;

																BgL_pairz00_858 = BgL_l2374z00_528;
																BgL_obj1604z00_859 =
																	(BgL_variablez00_bglt) (CAR(BgL_pairz00_858));
															}
															BgL_arg2564z00_534 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_obj1604z00_859))->BgL_idz00);
														}
														BgL_newtail2378z00_532 =
															MAKE_PAIR(BgL_arg2564z00_534, BNIL);
													}
													SET_CDR(BgL_tail2377z00_529, BgL_newtail2378z00_532);
													{
														obj_t BgL_tail2377z00_1035;

														obj_t BgL_l2374z00_1033;

														BgL_l2374z00_1033 = CDR(BgL_l2374z00_528);
														BgL_tail2377z00_1035 = BgL_newtail2378z00_532;
														BgL_tail2377z00_529 = BgL_tail2377z00_1035;
														BgL_l2374z00_528 = BgL_l2374z00_1033;
														goto BgL_zc3anonymousza32561ze3z83_530;
													}
												}
										}
									}
								}
							{	/* Object/generic.scm 70 */
								obj_t BgL_methodzd2argzd2_485;

								BgL_methodzd2argzd2_485 = CAR(BgL_localsz00_6);
								{	/* Object/generic.scm 71 */
									obj_t BgL_methodzd2argzd2idz00_486;

									{
										BgL_variablez00_bglt BgL_auxz00_1037;

										BgL_auxz00_1037 =
											(BgL_variablez00_bglt) (BgL_methodzd2argzd2_485);
										BgL_methodzd2argzd2idz00_486 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_1037))->
											BgL_idz00);
									}
									{	/* Object/generic.scm 73 */
										obj_t BgL_methodz00_488;

										BgL_methodz00_488 =
											BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
													1)));
										{	/* Object/generic.scm 74 */
											obj_t BgL_tmethodz00_489;

											BgL_tmethodz00_489 =
												BGl_makezd2typedzd2identz00zzast_identz00
												(BgL_methodz00_488, CNST_TABLE_REF(((long) 2)));
											{	/* Object/generic.scm 75 */

												{	/* Object/generic.scm 76 */
													obj_t BgL_arg2451z00_490;

													obj_t BgL_arg2452z00_491;

													BgL_arg2451z00_490 = CNST_TABLE_REF(((long) 3));
													{	/* Object/generic.scm 76 */
														obj_t BgL_arg2453z00_492;

														obj_t BgL_arg2454z00_493;

														{	/* Object/generic.scm 76 */
															obj_t BgL_arg2470z00_497;

															{	/* Object/generic.scm 76 */
																obj_t BgL_arg2472z00_499;

																{	/* Object/generic.scm 76 */
																	obj_t BgL_arg2476z00_500;

																	{	/* Object/generic.scm 76 */
																		obj_t BgL_arg2491z00_503;

																		obj_t BgL_arg2492z00_504;

																		BgL_arg2491z00_503 =
																			CNST_TABLE_REF(((long) 4));
																		{	/* Object/generic.scm 76 */
																			obj_t BgL_arg2493z00_505;

																			{	/* Object/generic.scm 76 */
																				obj_t BgL_arg2523z00_509;

																				obj_t BgL_arg2529z00_510;

																				BgL_arg2523z00_509 =
																					CNST_TABLE_REF(((long) 5));
																				{	/* Object/generic.scm 76 */
																					obj_t BgL_list2530z00_511;

																					{	/* Object/generic.scm 76 */
																						obj_t BgL_arg2531z00_512;

																						BgL_arg2531z00_512 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list2530z00_511 =
																							MAKE_PAIR
																							(BGl_za2moduleza2z00zzmodule_modulez00,
																							BgL_arg2531z00_512);
																					}
																					BgL_arg2529z00_510 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_idz00_482,
																						BgL_list2530z00_511);
																				}
																				BgL_arg2493z00_505 =
																					MAKE_PAIR(BgL_arg2523z00_509,
																					BgL_arg2529z00_510);
																			}
																			{	/* Object/generic.scm 76 */
																				obj_t BgL_list2504z00_507;

																				{	/* Object/generic.scm 76 */
																					obj_t BgL_arg2505z00_508;

																					BgL_arg2505z00_508 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list2504z00_507 =
																						MAKE_PAIR(BgL_arg2493z00_505,
																						BgL_arg2505z00_508);
																				}
																				BgL_arg2492z00_504 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_methodzd2argzd2idz00_486,
																					BgL_list2504z00_507);
																		}}
																		BgL_arg2476z00_500 =
																			MAKE_PAIR(BgL_arg2491z00_503,
																			BgL_arg2492z00_504);
																	}
																	{	/* Object/generic.scm 76 */
																		obj_t BgL_list2478z00_502;

																		BgL_list2478z00_502 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2472z00_499 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2476z00_500, BgL_list2478z00_502);
																}}
																BgL_arg2470z00_497 =
																	MAKE_PAIR(BgL_tmethodz00_489,
																	BgL_arg2472z00_499);
															}
															BgL_arg2453z00_492 =
																MAKE_PAIR(BgL_arg2470z00_497, BNIL);
														}
														if ((BgL_arityz00_483 >= ((long) 0)))
															{	/* Object/generic.scm 77 */
																BgL_arg2454z00_493 =
																	MAKE_PAIR(BgL_methodz00_488,
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_argszd2idzd2_484, BNIL));
															}
														else
															{	/* Object/generic.scm 79 */
																obj_t BgL_arg2544z00_515;

																obj_t BgL_arg2550z00_516;

																BgL_arg2544z00_515 = CNST_TABLE_REF(((long) 6));
																{	/* Object/generic.scm 79 */
																	obj_t BgL_arg2554z00_517;

																	{	/* Object/generic.scm 79 */
																		obj_t BgL_arg2558z00_521;

																		obj_t BgL_arg2559z00_522;

																		BgL_arg2558z00_521 =
																			CNST_TABLE_REF(((long) 7));
																		BgL_arg2559z00_522 =
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_argszd2idzd2_484, BNIL);
																		BgL_arg2554z00_517 =
																			MAKE_PAIR(BgL_arg2558z00_521,
																			BgL_arg2559z00_522);
																	}
																	{	/* Object/generic.scm 79 */
																		obj_t BgL_list2556z00_519;

																		{	/* Object/generic.scm 79 */
																			obj_t BgL_arg2557z00_520;

																			BgL_arg2557z00_520 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2556z00_519 =
																				MAKE_PAIR(BgL_arg2554z00_517,
																				BgL_arg2557z00_520);
																		}
																		BgL_arg2550z00_516 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_methodz00_488, BgL_list2556z00_519);
																}}
																BgL_arg2454z00_493 =
																	MAKE_PAIR(BgL_arg2544z00_515,
																	BgL_arg2550z00_516);
															}
														{	/* Object/generic.scm 76 */
															obj_t BgL_list2460z00_495;

															{	/* Object/generic.scm 76 */
																obj_t BgL_arg2461z00_496;

																BgL_arg2461z00_496 = MAKE_PAIR(BNIL, BNIL);
																BgL_list2460z00_495 =
																	MAKE_PAIR(BgL_arg2454z00_493,
																	BgL_arg2461z00_496);
															}
															BgL_arg2452z00_491 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2453z00_492, BgL_list2460z00_495);
													}}
													return
														MAKE_PAIR(BgL_arg2451z00_490, BgL_arg2452z00_491);
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
		}
	}



/* make-non-object-generic-body */
	obj_t BGl_makezd2nonzd2objectzd2genericzd2bodyz00zzobject_genericz00(obj_t
		BgL_idz00_9, obj_t BgL_localsz00_10, obj_t BgL_argsz00_11,
		obj_t BgL_srcz00_12)
	{
		AN_OBJECT;
		{	/* Object/generic.scm 84 */
			{	/* Object/generic.scm 85 */
				obj_t BgL_pidz00_542;

				BgL_pidz00_542 =
					BGl_parsezd2idzd2zzast_identz00(BgL_idz00_9,
					BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_12));
				{	/* Object/generic.scm 85 */
					obj_t BgL_idz00_543;

					BgL_idz00_543 = CAR(BgL_pidz00_542);
					{	/* Object/generic.scm 86 */
						long BgL_arityz00_544;

						BgL_arityz00_544 =
							BGl_globalzd2arityzd2zztools_argsz00(BgL_argsz00_11);
						{	/* Object/generic.scm 87 */
							obj_t BgL_argszd2idzd2_545;

							if (NULLP(BgL_localsz00_10))
								{	/* Object/generic.scm 88 */
									BgL_argszd2idzd2_545 = BNIL;
								}
							else
								{	/* Object/generic.scm 88 */
									obj_t BgL_head2382z00_669;

									{	/* Object/generic.scm 88 */
										obj_t BgL_arg2761z00_682;

										{	/* Object/generic.scm 88 */
											BgL_variablez00_bglt BgL_obj1604z00_873;

											{	/* Object/generic.scm 88 */
												obj_t BgL_pairz00_872;

												BgL_pairz00_872 = BgL_localsz00_10;
												BgL_obj1604z00_873 =
													(BgL_variablez00_bglt) (CAR(BgL_pairz00_872));
											}
											BgL_arg2761z00_682 =
												(((BgL_variablez00_bglt) CREF(BgL_obj1604z00_873))->
												BgL_idz00);
										}
										BgL_head2382z00_669 = MAKE_PAIR(BgL_arg2761z00_682, BNIL);
									}
									{	/* Object/generic.scm 88 */
										obj_t BgL_g2385z00_670;

										BgL_g2385z00_670 = CDR(BgL_localsz00_10);
										{
											obj_t BgL_l2380z00_672;

											obj_t BgL_tail2383z00_673;

											BgL_l2380z00_672 = BgL_g2385z00_670;
											BgL_tail2383z00_673 = BgL_head2382z00_669;
										BgL_zc3anonymousza32754ze3z83_674:
											if (NULLP(BgL_l2380z00_672))
												{	/* Object/generic.scm 88 */
													BgL_argszd2idzd2_545 = BgL_head2382z00_669;
												}
											else
												{	/* Object/generic.scm 88 */
													obj_t BgL_newtail2384z00_676;

													{	/* Object/generic.scm 88 */
														obj_t BgL_arg2758z00_678;

														{	/* Object/generic.scm 88 */
															BgL_variablez00_bglt BgL_obj1604z00_879;

															{	/* Object/generic.scm 88 */
																obj_t BgL_pairz00_878;

																BgL_pairz00_878 = BgL_l2380z00_672;
																BgL_obj1604z00_879 =
																	(BgL_variablez00_bglt) (CAR(BgL_pairz00_878));
															}
															BgL_arg2758z00_678 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_obj1604z00_879))->BgL_idz00);
														}
														BgL_newtail2384z00_676 =
															MAKE_PAIR(BgL_arg2758z00_678, BNIL);
													}
													SET_CDR(BgL_tail2383z00_673, BgL_newtail2384z00_676);
													{
														obj_t BgL_tail2383z00_1095;

														obj_t BgL_l2380z00_1093;

														BgL_l2380z00_1093 = CDR(BgL_l2380z00_672);
														BgL_tail2383z00_1095 = BgL_newtail2384z00_676;
														BgL_tail2383z00_673 = BgL_tail2383z00_1095;
														BgL_l2380z00_672 = BgL_l2380z00_1093;
														goto BgL_zc3anonymousza32754ze3z83_674;
													}
												}
										}
									}
								}
							{	/* Object/generic.scm 88 */
								obj_t BgL_defaultzd2bodyzd2_546;

								if ((BgL_arityz00_544 >= ((long) 0)))
									{	/* Object/generic.scm 90 */
										obj_t BgL_arg2716z00_633;

										obj_t BgL_arg2717z00_634;

										{	/* Object/generic.scm 90 */
											obj_t BgL_arg2718z00_635;

											obj_t BgL_arg2719z00_636;

											BgL_arg2718z00_635 = CNST_TABLE_REF(((long) 8));
											{	/* Object/generic.scm 91 */
												obj_t BgL_arg2720z00_637;

												{	/* Object/generic.scm 91 */
													obj_t BgL_arg2724z00_640;

													obj_t BgL_arg2725z00_641;

													BgL_arg2724z00_640 = CNST_TABLE_REF(((long) 5));
													{	/* Object/generic.scm 91 */
														obj_t BgL_list2726z00_642;

														{	/* Object/generic.scm 91 */
															obj_t BgL_arg2727z00_643;

															BgL_arg2727z00_643 = MAKE_PAIR(BNIL, BNIL);
															BgL_list2726z00_642 =
																MAKE_PAIR(BGl_za2moduleza2z00zzmodule_modulez00,
																BgL_arg2727z00_643);
														}
														BgL_arg2725z00_641 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_idz00_543, BgL_list2726z00_642);
													}
													BgL_arg2720z00_637 =
														MAKE_PAIR(BgL_arg2724z00_640, BgL_arg2725z00_641);
												}
												{	/* Object/generic.scm 90 */
													obj_t BgL_list2722z00_639;

													BgL_list2722z00_639 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2719z00_636 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2720z00_637, BgL_list2722z00_639);
											}}
											BgL_arg2716z00_633 =
												MAKE_PAIR(BgL_arg2718z00_635, BgL_arg2719z00_636);
										}
										BgL_arg2717z00_634 =
											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
											(BgL_argszd2idzd2_545, BNIL);
										BgL_defaultzd2bodyzd2_546 =
											MAKE_PAIR(BgL_arg2716z00_633, BgL_arg2717z00_634);
									}
								else
									{	/* Object/generic.scm 93 */
										obj_t BgL_arg2728z00_644;

										obj_t BgL_arg2729z00_645;

										BgL_arg2728z00_644 = CNST_TABLE_REF(((long) 6));
										{	/* Object/generic.scm 93 */
											obj_t BgL_arg2730z00_646;

											obj_t BgL_arg2731z00_647;

											{	/* Object/generic.scm 93 */
												obj_t BgL_arg2735z00_651;

												obj_t BgL_arg2736z00_652;

												BgL_arg2735z00_651 = CNST_TABLE_REF(((long) 8));
												{	/* Object/generic.scm 94 */
													obj_t BgL_arg2737z00_653;

													{	/* Object/generic.scm 94 */
														obj_t BgL_arg2740z00_656;

														obj_t BgL_arg2741z00_657;

														BgL_arg2740z00_656 = CNST_TABLE_REF(((long) 5));
														{	/* Object/generic.scm 94 */
															obj_t BgL_list2742z00_658;

															{	/* Object/generic.scm 94 */
																obj_t BgL_arg2743z00_659;

																BgL_arg2743z00_659 = MAKE_PAIR(BNIL, BNIL);
																BgL_list2742z00_658 =
																	MAKE_PAIR
																	(BGl_za2moduleza2z00zzmodule_modulez00,
																	BgL_arg2743z00_659);
															}
															BgL_arg2741z00_657 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_idz00_543, BgL_list2742z00_658);
														}
														BgL_arg2737z00_653 =
															MAKE_PAIR(BgL_arg2740z00_656, BgL_arg2741z00_657);
													}
													{	/* Object/generic.scm 93 */
														obj_t BgL_list2739z00_655;

														BgL_list2739z00_655 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2736z00_652 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg2737z00_653, BgL_list2739z00_655);
												}}
												BgL_arg2730z00_646 =
													MAKE_PAIR(BgL_arg2735z00_651, BgL_arg2736z00_652);
											}
											{	/* Object/generic.scm 95 */
												obj_t BgL_arg2745z00_660;

												obj_t BgL_arg2746z00_661;

												{	/* Object/generic.scm 95 */
													obj_t BgL_arg2747z00_662;

													obj_t BgL_arg2748z00_663;

													BgL_arg2747z00_662 = CNST_TABLE_REF(((long) 5));
													{	/* Object/generic.scm 95 */
														obj_t BgL_list2749z00_664;

														{	/* Object/generic.scm 95 */
															obj_t BgL_arg2750z00_665;

															obj_t BgL_arg2752z00_666;

															BgL_arg2750z00_665 = CNST_TABLE_REF(((long) 9));
															BgL_arg2752z00_666 = MAKE_PAIR(BNIL, BNIL);
															BgL_list2749z00_664 =
																MAKE_PAIR(BgL_arg2750z00_665,
																BgL_arg2752z00_666);
														}
														BgL_arg2748z00_663 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(CNST_TABLE_REF(((long) 7)), BgL_list2749z00_664);
													}
													BgL_arg2745z00_660 =
														MAKE_PAIR(BgL_arg2747z00_662, BgL_arg2748z00_663);
												}
												BgL_arg2746z00_661 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_argszd2idzd2_545, BNIL);
												BgL_arg2731z00_647 =
													MAKE_PAIR(BgL_arg2745z00_660, BgL_arg2746z00_661);
											}
											{	/* Object/generic.scm 93 */
												obj_t BgL_list2733z00_649;

												{	/* Object/generic.scm 93 */
													obj_t BgL_arg2734z00_650;

													BgL_arg2734z00_650 = MAKE_PAIR(BNIL, BNIL);
													BgL_list2733z00_649 =
														MAKE_PAIR(BgL_arg2731z00_647, BgL_arg2734z00_650);
												}
												BgL_arg2729z00_645 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg2730z00_646, BgL_list2733z00_649);
										}}
										BgL_defaultzd2bodyzd2_546 =
											MAKE_PAIR(BgL_arg2728z00_644, BgL_arg2729z00_645);
									}
								{	/* Object/generic.scm 89 */
									obj_t BgL_methodzd2argzd2_547;

									BgL_methodzd2argzd2_547 = CAR(BgL_localsz00_10);
									{	/* Object/generic.scm 98 */
										obj_t BgL_methodzd2argzd2idz00_548;

										{
											BgL_variablez00_bglt BgL_auxz00_1133;

											BgL_auxz00_1133 =
												(BgL_variablez00_bglt) (BgL_methodzd2argzd2_547);
											BgL_methodzd2argzd2idz00_548 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_1133))->
												BgL_idz00);
										}
										{	/* Object/generic.scm 100 */
											obj_t BgL_methodz00_550;

											BgL_methodz00_550 =
												BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
														(long) 1)));
											{	/* Object/generic.scm 101 */
												obj_t BgL_tmethodz00_551;

												BgL_tmethodz00_551 =
													BGl_makezd2typedzd2identz00zzast_identz00
													(BgL_methodz00_550, CNST_TABLE_REF(((long) 2)));
												{	/* Object/generic.scm 102 */
													obj_t BgL_defaultzd2namezd2_552;

													{	/* Object/generic.scm 103 */
														obj_t BgL_arg2709z00_627;

														{	/* Object/generic.scm 103 */
															obj_t BgL_arg2710z00_628;

															obj_t BgL_arg2711z00_629;

															{	/* Object/generic.scm 103 */
																obj_t BgL_res2784z00_892;

																{	/* Object/generic.scm 103 */
																	obj_t BgL_symbolz00_890;

																	BgL_symbolz00_890 = BgL_idz00_543;
																	{	/* Object/generic.scm 103 */
																		obj_t BgL_arg2063z00_891;

																		BgL_arg2063z00_891 =
																			SYMBOL_TO_STRING(BgL_symbolz00_890);
																		BgL_res2784z00_892 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2063z00_891);
																}}
																BgL_arg2710z00_628 = BgL_res2784z00_892;
															}
															{	/* Object/generic.scm 103 */
																obj_t BgL_res2785z00_895;

																{	/* Object/generic.scm 103 */
																	obj_t BgL_symbolz00_893;

																	BgL_symbolz00_893 =
																		CNST_TABLE_REF(((long) 10));
																	{	/* Object/generic.scm 103 */
																		obj_t BgL_arg2063z00_894;

																		BgL_arg2063z00_894 =
																			SYMBOL_TO_STRING(BgL_symbolz00_893);
																		BgL_res2785z00_895 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2063z00_894);
																}}
																BgL_arg2711z00_629 = BgL_res2785z00_895;
															}
															{	/* Object/generic.scm 103 */
																obj_t BgL_list2712z00_630;

																{	/* Object/generic.scm 103 */
																	obj_t BgL_arg2713z00_631;

																	BgL_arg2713z00_631 =
																		MAKE_PAIR(BgL_arg2711z00_629, BNIL);
																	BgL_list2712z00_630 =
																		MAKE_PAIR(BgL_arg2710z00_628,
																		BgL_arg2713z00_631);
																}
																BgL_arg2709z00_627 =
																	BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																	(BgL_list2712z00_630);
														}}
														BgL_defaultzd2namezd2_552 =
															string_to_symbol(BSTRING_TO_STRING
															(BgL_arg2709z00_627));
													}
													{	/* Object/generic.scm 103 */
														obj_t BgL_appzd2lyzd2methodz00_553;

														{	/* Object/generic.scm 104 */
															obj_t BgL_arg2658z00_577;

															obj_t BgL_arg2659z00_578;

															BgL_arg2658z00_577 = CNST_TABLE_REF(((long) 3));
															{	/* Object/generic.scm 104 */
																obj_t BgL_arg2660z00_579;

																obj_t BgL_arg2661z00_580;

																{	/* Object/generic.scm 104 */
																	obj_t BgL_arg2666z00_584;

																	{	/* Object/generic.scm 104 */
																		obj_t BgL_arg2668z00_586;

																		{	/* Object/generic.scm 104 */
																			obj_t BgL_arg2669z00_587;

																			{	/* Object/generic.scm 104 */
																				obj_t BgL_arg2672z00_590;

																				obj_t BgL_arg2673z00_591;

																				BgL_arg2672z00_590 =
																					CNST_TABLE_REF(((long) 4));
																				{	/* Object/generic.scm 105 */
																					obj_t BgL_arg2674z00_592;

																					{	/* Object/generic.scm 105 */
																						obj_t BgL_arg2678z00_596;

																						obj_t BgL_arg2679z00_597;

																						BgL_arg2678z00_596 =
																							CNST_TABLE_REF(((long) 5));
																						{	/* Object/generic.scm 105 */
																							obj_t BgL_list2680z00_598;

																							{	/* Object/generic.scm 105 */
																								obj_t BgL_arg2681z00_599;

																								BgL_arg2681z00_599 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list2680z00_598 =
																									MAKE_PAIR
																									(BGl_za2moduleza2z00zzmodule_modulez00,
																									BgL_arg2681z00_599);
																							}
																							BgL_arg2679z00_597 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_idz00_543,
																								BgL_list2680z00_598);
																						}
																						BgL_arg2674z00_592 =
																							MAKE_PAIR(BgL_arg2678z00_596,
																							BgL_arg2679z00_597);
																					}
																					{	/* Object/generic.scm 104 */
																						obj_t BgL_list2676z00_594;

																						{	/* Object/generic.scm 104 */
																							obj_t BgL_arg2677z00_595;

																							BgL_arg2677z00_595 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list2676z00_594 =
																								MAKE_PAIR(BgL_arg2674z00_592,
																								BgL_arg2677z00_595);
																						}
																						BgL_arg2673z00_591 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_methodzd2argzd2idz00_548,
																							BgL_list2676z00_594);
																				}}
																				BgL_arg2669z00_587 =
																					MAKE_PAIR(BgL_arg2672z00_590,
																					BgL_arg2673z00_591);
																			}
																			{	/* Object/generic.scm 104 */
																				obj_t BgL_list2671z00_589;

																				BgL_list2671z00_589 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2668z00_586 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2669z00_587,
																					BgL_list2671z00_589);
																		}}
																		BgL_arg2666z00_584 =
																			MAKE_PAIR(BgL_tmethodz00_551,
																			BgL_arg2668z00_586);
																	}
																	BgL_arg2660z00_579 =
																		MAKE_PAIR(BgL_arg2666z00_584, BNIL);
																}
																{	/* Object/generic.scm 107 */
																	obj_t BgL_arg2682z00_600;

																	obj_t BgL_arg2683z00_601;

																	BgL_arg2682z00_600 =
																		CNST_TABLE_REF(((long) 11));
																	{	/* Object/generic.scm 107 */
																		obj_t BgL_arg2684z00_602;

																		obj_t BgL_arg2685z00_603;

																		obj_t BgL_arg2686z00_604;

																		{	/* Object/generic.scm 107 */
																			obj_t BgL_arg2691z00_609;

																			obj_t BgL_arg2692z00_610;

																			BgL_arg2691z00_609 =
																				CNST_TABLE_REF(((long) 12));
																			{	/* Object/generic.scm 107 */
																				obj_t BgL_list2693z00_611;

																				BgL_list2693z00_611 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2692z00_610 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_methodz00_550,
																					BgL_list2693z00_611);
																			}
																			BgL_arg2684z00_602 =
																				MAKE_PAIR(BgL_arg2691z00_609,
																				BgL_arg2692z00_610);
																		}
																		if ((BgL_arityz00_544 >= ((long) 0)))
																			{	/* Object/generic.scm 108 */
																				BgL_arg2685z00_603 =
																					MAKE_PAIR(BgL_methodz00_550,
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_argszd2idzd2_545, BNIL));
																			}
																		else
																			{	/* Object/generic.scm 110 */
																				obj_t BgL_arg2696z00_614;

																				obj_t BgL_arg2697z00_615;

																				BgL_arg2696z00_614 =
																					CNST_TABLE_REF(((long) 6));
																				{	/* Object/generic.scm 110 */
																					obj_t BgL_arg2698z00_616;

																					{	/* Object/generic.scm 110 */
																						obj_t BgL_arg2702z00_620;

																						obj_t BgL_arg2703z00_621;

																						BgL_arg2702z00_620 =
																							CNST_TABLE_REF(((long) 7));
																						BgL_arg2703z00_621 =
																							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																							(BgL_argszd2idzd2_545, BNIL);
																						BgL_arg2698z00_616 =
																							MAKE_PAIR(BgL_arg2702z00_620,
																							BgL_arg2703z00_621);
																					}
																					{	/* Object/generic.scm 110 */
																						obj_t BgL_list2700z00_618;

																						{	/* Object/generic.scm 110 */
																							obj_t BgL_arg2701z00_619;

																							BgL_arg2701z00_619 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list2700z00_618 =
																								MAKE_PAIR(BgL_arg2698z00_616,
																								BgL_arg2701z00_619);
																						}
																						BgL_arg2697z00_615 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_methodz00_550,
																							BgL_list2700z00_618);
																				}}
																				BgL_arg2685z00_603 =
																					MAKE_PAIR(BgL_arg2696z00_614,
																					BgL_arg2697z00_615);
																			}
																		{	/* Object/generic.scm 111 */
																			obj_t BgL_arg2704z00_622;

																			obj_t BgL_arg2705z00_623;

																			BgL_arg2704z00_622 =
																				CNST_TABLE_REF(((long) 13));
																			{	/* Object/generic.scm 112 */
																				obj_t BgL_arg2706z00_624;

																				BgL_arg2706z00_624 =
																					MAKE_PAIR(BgL_defaultzd2namezd2_552,
																					BNIL);
																				{	/* Object/generic.scm 111 */
																					obj_t BgL_list2708z00_626;

																					BgL_list2708z00_626 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2705z00_623 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2706z00_624,
																						BgL_list2708z00_626);
																			}}
																			BgL_arg2686z00_604 =
																				MAKE_PAIR(BgL_arg2704z00_622,
																				BgL_arg2705z00_623);
																		}
																		{	/* Object/generic.scm 107 */
																			obj_t BgL_list2688z00_606;

																			{	/* Object/generic.scm 107 */
																				obj_t BgL_arg2689z00_607;

																				{	/* Object/generic.scm 107 */
																					obj_t BgL_arg2690z00_608;

																					BgL_arg2690z00_608 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2689z00_607 =
																						MAKE_PAIR(BgL_arg2686z00_604,
																						BgL_arg2690z00_608);
																				}
																				BgL_list2688z00_606 =
																					MAKE_PAIR(BgL_arg2685z00_603,
																					BgL_arg2689z00_607);
																			}
																			BgL_arg2683z00_601 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2684z00_602,
																				BgL_list2688z00_606);
																	}}
																	BgL_arg2661z00_580 =
																		MAKE_PAIR(BgL_arg2682z00_600,
																		BgL_arg2683z00_601);
																}
																{	/* Object/generic.scm 104 */
																	obj_t BgL_list2664z00_582;

																	{	/* Object/generic.scm 104 */
																		obj_t BgL_arg2665z00_583;

																		BgL_arg2665z00_583 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2664z00_582 =
																			MAKE_PAIR(BgL_arg2661z00_580,
																			BgL_arg2665z00_583);
																	}
																	BgL_arg2659z00_578 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2660z00_579, BgL_list2664z00_582);
															}}
															BgL_appzd2lyzd2methodz00_553 =
																MAKE_PAIR(BgL_arg2658z00_577,
																BgL_arg2659z00_578);
														}
														{	/* Object/generic.scm 104 */

															{	/* Object/generic.scm 114 */
																obj_t BgL_arg2587z00_554;

																obj_t BgL_arg2589z00_555;

																BgL_arg2587z00_554 =
																	CNST_TABLE_REF(((long) 14));
																{	/* Object/generic.scm 114 */
																	obj_t BgL_arg2590z00_556;

																	obj_t BgL_arg2594z00_557;

																	{	/* Object/generic.scm 114 */
																		obj_t BgL_arg2608z00_561;

																		{	/* Object/generic.scm 114 */
																			obj_t BgL_arg2621z00_563;

																			{	/* Object/generic.scm 114 */
																				obj_t BgL_list2622z00_564;

																				{	/* Object/generic.scm 114 */
																					obj_t BgL_arg2628z00_565;

																					BgL_arg2628z00_565 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list2622z00_564 =
																						MAKE_PAIR(BgL_defaultzd2bodyzd2_546,
																						BgL_arg2628z00_565);
																				}
																				BgL_arg2621z00_563 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BNIL, BgL_list2622z00_564);
																			}
																			BgL_arg2608z00_561 =
																				MAKE_PAIR(BgL_defaultzd2namezd2_552,
																				BgL_arg2621z00_563);
																		}
																		BgL_arg2590z00_556 =
																			MAKE_PAIR(BgL_arg2608z00_561, BNIL);
																	}
																	{	/* Object/generic.scm 115 */
																		obj_t BgL_arg2629z00_566;

																		obj_t BgL_arg2630z00_567;

																		BgL_arg2629z00_566 =
																			CNST_TABLE_REF(((long) 11));
																		{	/* Object/generic.scm 115 */
																			obj_t BgL_arg2642z00_568;

																			obj_t BgL_arg2648z00_569;

																			{	/* Object/generic.scm 115 */
																				obj_t BgL_arg2655z00_574;

																				obj_t BgL_arg2656z00_575;

																				BgL_arg2655z00_574 =
																					CNST_TABLE_REF(((long) 15));
																				{	/* Object/generic.scm 115 */
																					obj_t BgL_list2657z00_576;

																					BgL_list2657z00_576 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2656z00_575 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_methodzd2argzd2idz00_548,
																						BgL_list2657z00_576);
																				}
																				BgL_arg2642z00_568 =
																					MAKE_PAIR(BgL_arg2655z00_574,
																					BgL_arg2656z00_575);
																			}
																			BgL_arg2648z00_569 =
																				MAKE_PAIR(BgL_defaultzd2namezd2_552,
																				BNIL);
																			{	/* Object/generic.scm 115 */
																				obj_t BgL_list2650z00_571;

																				{	/* Object/generic.scm 115 */
																					obj_t BgL_arg2651z00_572;

																					{	/* Object/generic.scm 115 */
																						obj_t BgL_arg2652z00_573;

																						BgL_arg2652z00_573 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg2651z00_572 =
																							MAKE_PAIR(BgL_arg2648z00_569,
																							BgL_arg2652z00_573);
																					}
																					BgL_list2650z00_571 =
																						MAKE_PAIR
																						(BgL_appzd2lyzd2methodz00_553,
																						BgL_arg2651z00_572);
																				}
																				BgL_arg2630z00_567 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2642z00_568,
																					BgL_list2650z00_571);
																		}}
																		BgL_arg2594z00_557 =
																			MAKE_PAIR(BgL_arg2629z00_566,
																			BgL_arg2630z00_567);
																	}
																	{	/* Object/generic.scm 114 */
																		obj_t BgL_list2596z00_559;

																		{	/* Object/generic.scm 114 */
																			obj_t BgL_arg2602z00_560;

																			BgL_arg2602z00_560 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2596z00_559 =
																				MAKE_PAIR(BgL_arg2594z00_557,
																				BgL_arg2602z00_560);
																		}
																		BgL_arg2589z00_555 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2590z00_556, BgL_list2596z00_559);
																}}
																return
																	MAKE_PAIR(BgL_arg2587z00_554,
																	BgL_arg2589z00_555);
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
					}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzobject_genericz00()
	{
		AN_OBJECT;
		{	/* Object/generic.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzobject_genericz00()
	{
		AN_OBJECT;
		{	/* Object/generic.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzobject_genericz00()
	{
		AN_OBJECT;
		{	/* Object/generic.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string2789z00zzobject_genericz00));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 320731191),
				BSTRING_TO_STRING(BGl_string2789z00zzobject_genericz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string2789z00zzobject_genericz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2789z00zzobject_genericz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string2789z00zzobject_genericz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string2789z00zzobject_genericz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string2789z00zzobject_genericz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string2789z00zzobject_genericz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string2789z00zzobject_genericz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string2789z00zzobject_genericz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string2789z00zzobject_genericz00));
			return
				BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string2789z00zzobject_genericz00));
		}
	}

#ifdef __cplusplus
}
#endif
