/*===========================================================================*/
/*   (Type/coercion.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Type/coercion.scm)*/
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


	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztype_coercionz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zztype_coercionz00();
	BGL_EXPORTED_DECL bool_t
		BGl_coercerzd2existszf3z21zztype_coercionz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern BgL_typez00_bglt
		BGl_getzd2aliasedzd2typez00zztype_typez00(BgL_typez00_bglt);
	static obj_t BGl__findzd2coercerzd2zztype_coercionz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	extern obj_t BGl_za2libzd2modeza2zd2zzengine_paramz00;
	static obj_t BGl_cnstzd2initzd2zztype_coercionz00();
	static obj_t BGl__addzd2coercionz12zc0zztype_coercionz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_findzd2coercerzd2zztype_coercionz00(BgL_typez00_bglt, BgL_typez00_bglt);
	static obj_t BGl__coercerzd2existszf3z21zztype_coercionz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zztype_coercionz00();
	BGL_EXPORTED_DECL obj_t
		BGl_addzd2coercionz12zc0zztype_coercionz00(BgL_typez00_bglt,
		BgL_typez00_bglt, obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zztype_coercionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zztype_coercionz00();
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zztype_coercionz00();
	static obj_t BGl_methodzd2initzd2zztype_coercionz00();
	static obj_t __cnst[2];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_findzd2coercerzd2envz00zztype_coercionz00,
		BgL_bgl__findza7d2coercerza71759z00,
		BGl__findzd2coercerzd2zztype_coercionz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_coercerzd2existszf3zd2envzf3zztype_coercionz00,
		BgL_bgl__coercerza7d2exist1760za7,
		BGl__coercerzd2existszf3z21zztype_coercionz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_addzd2coercionz12zd2envz12zztype_coercionz00,
		BgL_bgl__addza7d2coercionza71761z00,
		BGl__addzd2coercionz12zc0zztype_coercionz00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string1750z00zztype_coercionz00,
		BgL_bgl_string1750za700za7za7t1762za7, "Type coercion redefinition -- ",
		30);
	      DEFINE_STRING(BGl_string1751z00zztype_coercionz00,
		BgL_bgl_string1751za700za7za7t1763za7, "add-coercion!", 13);
	      DEFINE_STRING(BGl_string1752z00zztype_coercionz00,
		BgL_bgl_string1752za700za7za7t1764za7, "~a -> ~a", 8);
	      DEFINE_STRING(BGl_string1753z00zztype_coercionz00,
		BgL_bgl_string1753za700za7za7t1765za7, "while adding: ~a -> ~a", 22);
	      DEFINE_STRING(BGl_string1754z00zztype_coercionz00,
		BgL_bgl_string1754za700za7za7t1766za7, "Can't find coercion", 19);
	      DEFINE_STRING(BGl_string1755z00zztype_coercionz00,
		BgL_bgl_string1755za700za7za7t1767za7, "type_coercion", 13);
	      DEFINE_STRING(BGl_string1756z00zztype_coercionz00,
		BgL_bgl_string1756za700za7za7t1768za7, "coercer (()) ", 13);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztype_coercionz00(long
		BgL_checksumz00_508, char *BgL_fromz00_509)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztype_coercionz00))
				{
					BGl_requirezd2initializa7ationz75zztype_coercionz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zztype_coercionz00();
					BGl_cnstzd2initzd2zztype_coercionz00();
					BGl_importedzd2moduleszd2initz00zztype_coercionz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztype_coercionz00()
	{
		AN_OBJECT;
		{	/* Type/coercion.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"type_coercion");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"type_coercion");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"type_coercion");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "type_coercion");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztype_coercionz00()
	{
		AN_OBJECT;
		{	/* Type/coercion.scm 15 */
			{	/* Type/coercion.scm 15 */
				obj_t BgL_cportz00_500;

				BgL_cportz00_500 =
					bgl_open_input_string(BGl_string1756z00zztype_coercionz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_501;

					BgL_iz00_501 = ((long) 1);
				BgL_loopz00_502:
					if ((BgL_iz00_501 == ((long) -1)))
						{	/* Type/coercion.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Type/coercion.scm 15 */
							{	/* Type/coercion.scm 15 */
								obj_t BgL_arg1758z00_504;

								{	/* Type/coercion.scm 15 */

									{	/* Type/coercion.scm 15 */
										obj_t BgL_locationz00_506;

										BgL_locationz00_506 = BBOOL(((bool_t) 0));
										{	/* Type/coercion.scm 15 */

											BgL_arg1758z00_504 =
												BGl_readz00zz__readerz00(BgL_cportz00_500,
												BgL_locationz00_506);
										}
									}
								}
								{	/* Type/coercion.scm 15 */
									int BgL_auxz00_526;

									BgL_auxz00_526 = (int) (BgL_iz00_501);
									CNST_TABLE_SET(BgL_auxz00_526, BgL_arg1758z00_504);
							}}
							{	/* Type/coercion.scm 15 */
								int BgL_auxz00_507;

								BgL_auxz00_507 = (int) ((BgL_iz00_501 - ((long) 1)));
								{
									long BgL_iz00_531;

									BgL_iz00_531 = (long) (BgL_auxz00_507);
									BgL_iz00_501 = BgL_iz00_531;
									goto BgL_loopz00_502;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztype_coercionz00()
	{
		AN_OBJECT;
		{	/* Type/coercion.scm 15 */
			return BUNSPEC;
		}
	}



/* find-coercer */
	BGL_EXPORTED_DEF obj_t
		BGl_findzd2coercerzd2zztype_coercionz00(BgL_typez00_bglt BgL_fromz00_19,
		BgL_typez00_bglt BgL_toz00_20)
	{
		AN_OBJECT;
		{	/* Type/coercion.scm 31 */
			{	/* Type/coercion.scm 32 */
				BgL_typez00_bglt BgL_fromz00_184;

				BgL_typez00_bglt BgL_toz00_185;

				BgL_fromz00_184 =
					BGl_getzd2aliasedzd2typez00zztype_typez00(BgL_fromz00_19);
				BgL_toz00_185 = BGl_getzd2aliasedzd2typez00zztype_typez00(BgL_toz00_20);
				{
					obj_t BgL_coercerz00_188;

					BgL_coercerz00_188 =
						(((BgL_typez00_bglt) CREF(BgL_fromz00_184))->BgL_coercezd2tozd2);
				BgL_zc3anonymousza31622ze3z83_189:
					if (NULLP(BgL_coercerz00_188))
						{	/* Type/coercion.scm 36 */
							return BFALSE;
						}
					else
						{	/* Type/coercion.scm 36 */
							if (
								(STRUCT_REF(CAR(BgL_coercerz00_188),
										(int) (((long) 1))) == (obj_t) (BgL_toz00_185)))
								{	/* Type/coercion.scm 38 */
									return CAR(BgL_coercerz00_188);
								}
							else
								{
									obj_t BgL_coercerz00_544;

									BgL_coercerz00_544 = CDR(BgL_coercerz00_188);
									BgL_coercerz00_188 = BgL_coercerz00_544;
									goto BgL_zc3anonymousza31622ze3z83_189;
								}
						}
				}
			}
		}
	}



/* _find-coercer */
	obj_t BGl__findzd2coercerzd2zztype_coercionz00(obj_t BgL_envz00_488,
		obj_t BgL_fromz00_489, obj_t BgL_toz00_490)
	{
		AN_OBJECT;
		{	/* Type/coercion.scm 31 */
			return
				BGl_findzd2coercerzd2zztype_coercionz00(
				(BgL_typez00_bglt) (BgL_fromz00_489),
				(BgL_typez00_bglt) (BgL_toz00_490));
		}
	}



/* add-coercion! */
	BGL_EXPORTED_DEF obj_t
		BGl_addzd2coercionz12zc0zztype_coercionz00(BgL_typez00_bglt BgL_fromz00_21,
		BgL_typez00_bglt BgL_toz00_22, obj_t BgL_checkz00_23,
		obj_t BgL_coercez00_24)
	{
		AN_OBJECT;
		{	/* Type/coercion.scm 77 */
			if (NULLP(BgL_checkz00_23))
				{	/* Type/coercion.scm 81 */
					BgL_checkz00_23 = CNST_TABLE_REF(((long) 0));
				}
			else
				{	/* Type/coercion.scm 81 */
					BFALSE;
				}
			if (NULLP(BgL_coercez00_24))
				{	/* Type/coercion.scm 82 */
					BgL_coercez00_24 = CNST_TABLE_REF(((long) 0));
				}
			else
				{	/* Type/coercion.scm 82 */
					BFALSE;
				}
			{	/* Type/coercion.scm 83 */
				BgL_typez00_bglt BgL_fromz00_198;

				BgL_typez00_bglt BgL_toz00_199;

				BgL_fromz00_198 =
					BGl_getzd2aliasedzd2typez00zztype_typez00(BgL_fromz00_21);
				BgL_toz00_199 = BGl_getzd2aliasedzd2typez00zztype_typez00(BgL_toz00_22);
				{	/* Type/coercion.scm 85 */
					bool_t BgL_testz00_558;

					{	/* Type/coercion.scm 85 */
						obj_t BgL_arg1706z00_281;

						BgL_arg1706z00_281 =
							BGl_findzd2coercerzd2zztype_coercionz00(BgL_fromz00_198,
							BgL_toz00_199);
						if (STRUCTP(BgL_arg1706z00_281))
							{	/* Type/coercion.scm 85 */
								BgL_testz00_558 =
									(STRUCT_KEY(BgL_arg1706z00_281) ==
									CNST_TABLE_REF(((long) 1)));
							}
						else
							{	/* Type/coercion.scm 85 */
								BgL_testz00_558 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_558)
						{	/* Type/coercion.scm 85 */
							if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
								{	/* Type/coercion.scm 86 */
									return BFALSE;
								}
							else
								{	/* Type/coercion.scm 87 */
									obj_t BgL_arg1633z00_203;

									{	/* Type/coercion.scm 89 */
										obj_t BgL_arg1637z00_207;

										{	/* Type/coercion.scm 89 */
											obj_t BgL_list1638z00_208;

											{	/* Type/coercion.scm 89 */
												obj_t BgL_arg1639z00_209;

												{	/* Type/coercion.scm 89 */
													obj_t BgL_arg1640z00_210;

													{	/* Type/coercion.scm 89 */
														obj_t BgL_arg1643z00_211;

														BgL_arg1643z00_211 =
															MAKE_PAIR(BgL_coercez00_24, BNIL);
														BgL_arg1640z00_210 =
															MAKE_PAIR(BgL_checkz00_23, BgL_arg1643z00_211);
													}
													BgL_arg1639z00_209 =
														MAKE_PAIR(
														(obj_t) (BgL_toz00_199), BgL_arg1640z00_210);
												}
												BgL_list1638z00_208 =
													MAKE_PAIR(
													(obj_t) (BgL_fromz00_198), BgL_arg1639z00_209);
											}
											BgL_arg1637z00_207 = BgL_list1638z00_208;
										}
										BgL_arg1633z00_203 =
											BGl_shapez00zztools_shapez00(BgL_arg1637z00_207);
									}
									{	/* Type/coercion.scm 87 */
										obj_t BgL_list1634z00_204;

										{	/* Type/coercion.scm 87 */
											obj_t BgL_arg1635z00_205;

											{	/* Type/coercion.scm 87 */
												obj_t BgL_arg1636z00_206;

												BgL_arg1636z00_206 =
													MAKE_PAIR(BgL_arg1633z00_203, BNIL);
												BgL_arg1635z00_205 =
													MAKE_PAIR(BGl_string1750z00zztype_coercionz00,
													BgL_arg1636z00_206);
											}
											BgL_list1634z00_204 =
												MAKE_PAIR(BGl_string1751z00zztype_coercionz00,
												BgL_arg1635z00_205);
										}
										return BGl_warningz00zz__errorz00(BgL_list1634z00_204);
									}
								}
						}
					else
						{	/* Type/coercion.scm 85 */
							{	/* Type/coercion.scm 92 */
								obj_t BgL_newz00_212;

								{	/* Type/coercion.scm 92 */
									obj_t BgL_checkzd2opzd2_406;

									obj_t BgL_coercezd2opzd2_407;

									BgL_checkzd2opzd2_406 = BgL_checkz00_23;
									BgL_coercezd2opzd2_407 = BgL_coercez00_24;
									{	/* Type/coercion.scm 92 */
										obj_t BgL_newz00_408;

										BgL_newz00_408 =
											create_struct(CNST_TABLE_REF(((long) 1)),
											(int) (((long) 4)));
										{	/* Type/coercion.scm 92 */
											int BgL_auxz00_581;

											BgL_auxz00_581 = (int) (((long) 3));
											STRUCT_SET(BgL_newz00_408, BgL_auxz00_581,
												BgL_coercezd2opzd2_407);
										}
										{	/* Type/coercion.scm 92 */
											int BgL_auxz00_584;

											BgL_auxz00_584 = (int) (((long) 2));
											STRUCT_SET(BgL_newz00_408, BgL_auxz00_584,
												BgL_checkzd2opzd2_406);
										}
										{	/* Type/coercion.scm 92 */
											obj_t BgL_auxz00_589;

											int BgL_auxz00_587;

											BgL_auxz00_589 = (obj_t) (BgL_toz00_199);
											BgL_auxz00_587 = (int) (((long) 1));
											STRUCT_SET(BgL_newz00_408, BgL_auxz00_587,
												BgL_auxz00_589);
										}
										{	/* Type/coercion.scm 92 */
											obj_t BgL_auxz00_594;

											int BgL_auxz00_592;

											BgL_auxz00_594 = (obj_t) (BgL_fromz00_198);
											BgL_auxz00_592 = (int) (((long) 0));
											STRUCT_SET(BgL_newz00_408, BgL_auxz00_592,
												BgL_auxz00_594);
										}
										BgL_newz00_212 = BgL_newz00_408;
								}}
								{	/* Type/coercion.scm 93 */
									obj_t BgL_arg1644z00_213;

									{	/* Type/coercion.scm 93 */
										obj_t BgL_arg1645z00_214;

										BgL_arg1645z00_214 =
											(((BgL_typez00_bglt) CREF(BgL_fromz00_198))->
											BgL_coercezd2tozd2);
										BgL_arg1644z00_213 =
											MAKE_PAIR(BgL_newz00_212, BgL_arg1645z00_214);
									}
									((((BgL_typez00_bglt) CREF(BgL_fromz00_198))->
											BgL_coercezd2tozd2) =
										((obj_t) BgL_arg1644z00_213), BUNSPEC);
							}}
							{	/* Type/coercion.scm 95 */
								obj_t BgL_g1607z00_215;

								BgL_g1607z00_215 =
									(((BgL_typez00_bglt) CREF(BgL_toz00_199))->BgL_parentsz00);
								{
									obj_t BgL_l1605z00_217;

									BgL_l1605z00_217 = BgL_g1607z00_215;
								BgL_zc3anonymousza31646ze3z83_218:
									if (PAIRP(BgL_l1605z00_217))
										{	/* Type/coercion.scm 114 */
											{	/* Type/coercion.scm 97 */
												obj_t BgL_parentz00_220;

												BgL_parentz00_220 = CAR(BgL_l1605z00_217);
												{	/* Type/coercion.scm 97 */
													bool_t BgL_testz00_604;

													if (((obj_t) (BgL_fromz00_198) == BgL_parentz00_220))
														{	/* Type/coercion.scm 97 */
															BgL_testz00_604 = ((bool_t) 0);
														}
													else
														{	/* Type/coercion.scm 97 */
															if (
																((obj_t) (BgL_toz00_199) == BgL_parentz00_220))
																{	/* Type/coercion.scm 98 */
																	BgL_testz00_604 = ((bool_t) 0);
																}
															else
																{	/* Type/coercion.scm 99 */
																	bool_t BgL_testz00_611;

																	{	/* Type/coercion.scm 99 */
																		obj_t BgL_arg1672z00_245;

																		BgL_arg1672z00_245 =
																			BGl_findzd2coercerzd2zztype_coercionz00
																			(BgL_fromz00_198,
																			(BgL_typez00_bglt) (BgL_parentz00_220));
																		if (STRUCTP(BgL_arg1672z00_245))
																			{	/* Type/coercion.scm 99 */
																				BgL_testz00_611 =
																					(STRUCT_KEY(BgL_arg1672z00_245) ==
																					CNST_TABLE_REF(((long) 1)));
																			}
																		else
																			{	/* Type/coercion.scm 99 */
																				BgL_testz00_611 = ((bool_t) 0);
																			}
																	}
																	if (BgL_testz00_611)
																		{	/* Type/coercion.scm 99 */
																			BgL_testz00_604 = ((bool_t) 0);
																		}
																	else
																		{	/* Type/coercion.scm 99 */
																			BgL_testz00_604 = ((bool_t) 1);
																		}
																}
														}
													if (BgL_testz00_604)
														{	/* Type/coercion.scm 100 */
															obj_t BgL_coercerzd2pzd2_222;

															BgL_coercerzd2pzd2_222 =
																BGl_findzd2coercerzd2zztype_coercionz00
																(BgL_toz00_199,
																(BgL_typez00_bglt) (BgL_parentz00_220));
															{	/* Type/coercion.scm 101 */
																bool_t BgL_testz00_621;

																if (STRUCTP(BgL_coercerzd2pzd2_222))
																	{	/* Type/coercion.scm 101 */
																		BgL_testz00_621 =
																			(STRUCT_KEY(BgL_coercerzd2pzd2_222) ==
																			CNST_TABLE_REF(((long) 1)));
																	}
																else
																	{	/* Type/coercion.scm 101 */
																		BgL_testz00_621 = ((bool_t) 0);
																	}
																if (BgL_testz00_621)
																	{	/* Type/coercion.scm 108 */
																		obj_t BgL_checkzd2pzd2_224;

																		obj_t BgL_coercezd2pzd2_225;

																		BgL_checkzd2pzd2_224 =
																			STRUCT_REF(BgL_coercerzd2pzd2_222,
																			(int) (((long) 2)));
																		BgL_coercezd2pzd2_225 =
																			STRUCT_REF(BgL_coercerzd2pzd2_222,
																			(int) (((long) 3)));
																		BGl_addzd2coercionz12zc0zztype_coercionz00
																			(BgL_fromz00_198,
																			(BgL_typez00_bglt) (BgL_parentz00_220),
																			bgl_append2(BgL_checkz00_23,
																				BgL_checkzd2pzd2_224),
																			bgl_append2(BgL_coercez00_24,
																				BgL_coercezd2pzd2_225));
																	}
																else
																	{	/* Type/coercion.scm 102 */
																		obj_t BgL_arg1654z00_229;

																		obj_t BgL_arg1655z00_230;

																		{	/* Type/coercion.scm 103 */
																			obj_t BgL_arg1659z00_233;

																			obj_t BgL_arg1660z00_234;

																			BgL_arg1659z00_233 =
																				BGl_shapez00zztools_shapez00(
																				(obj_t) (BgL_toz00_199));
																			BgL_arg1660z00_234 =
																				BGl_shapez00zztools_shapez00
																				(BgL_parentz00_220);
																			{	/* Type/coercion.scm 103 */
																				obj_t BgL_list1661z00_235;

																				{	/* Type/coercion.scm 103 */
																					obj_t BgL_arg1662z00_236;

																					BgL_arg1662z00_236 =
																						MAKE_PAIR(BgL_arg1660z00_234, BNIL);
																					BgL_list1661z00_235 =
																						MAKE_PAIR(BgL_arg1659z00_233,
																						BgL_arg1662z00_236);
																				}
																				BgL_arg1654z00_229 =
																					BGl_formatz00zz__r4_output_6_10_3z00
																					(BGl_string1752z00zztype_coercionz00,
																					BgL_list1661z00_235);
																			}
																		}
																		{	/* Type/coercion.scm 105 */
																			obj_t BgL_arg1664z00_238;

																			obj_t BgL_arg1666z00_239;

																			BgL_arg1664z00_238 =
																				BGl_shapez00zztools_shapez00(
																				(obj_t) (BgL_fromz00_198));
																			BgL_arg1666z00_239 =
																				BGl_shapez00zztools_shapez00(
																				(obj_t) (BgL_toz00_199));
																			{	/* Type/coercion.scm 105 */
																				obj_t BgL_list1667z00_240;

																				{	/* Type/coercion.scm 105 */
																					obj_t BgL_arg1668z00_241;

																					BgL_arg1668z00_241 =
																						MAKE_PAIR(BgL_arg1666z00_239, BNIL);
																					BgL_list1667z00_240 =
																						MAKE_PAIR(BgL_arg1664z00_238,
																						BgL_arg1668z00_241);
																				}
																				BgL_arg1655z00_230 =
																					BGl_formatz00zz__r4_output_6_10_3z00
																					(BGl_string1753z00zztype_coercionz00,
																					BgL_list1667z00_240);
																			}
																		}
																		BGl_userzd2errorzd2zztools_errorz00
																			(BGl_string1754z00zztype_coercionz00,
																			BgL_arg1654z00_229, BgL_arg1655z00_230,
																			BNIL);
																	}
															}
														}
													else
														{	/* Type/coercion.scm 97 */
															BFALSE;
														}
												}
											}
											{
												obj_t BgL_l1605z00_649;

												BgL_l1605z00_649 = CDR(BgL_l1605z00_217);
												BgL_l1605z00_217 = BgL_l1605z00_649;
												goto BgL_zc3anonymousza31646ze3z83_218;
											}
										}
									else
										{	/* Type/coercion.scm 114 */
											((bool_t) 1);
										}
								}
							}
							{	/* Type/coercion.scm 116 */
								obj_t BgL_g1610z00_248;

								BgL_g1610z00_248 =
									(((BgL_typez00_bglt) CREF(BgL_fromz00_198))->BgL_parentsz00);
								{
									obj_t BgL_l1608z00_250;

									{	/* Type/coercion.scm 134 */
										bool_t BgL_auxz00_652;

										BgL_l1608z00_250 = BgL_g1610z00_248;
									BgL_zc3anonymousza31674ze3z83_251:
										if (PAIRP(BgL_l1608z00_250))
											{	/* Type/coercion.scm 134 */
												{	/* Type/coercion.scm 118 */
													obj_t BgL_parentz00_253;

													BgL_parentz00_253 = CAR(BgL_l1608z00_250);
													{	/* Type/coercion.scm 118 */
														bool_t BgL_testz00_656;

														if (
															((obj_t) (BgL_fromz00_198) == BgL_parentz00_253))
															{	/* Type/coercion.scm 118 */
																BgL_testz00_656 = ((bool_t) 0);
															}
														else
															{	/* Type/coercion.scm 118 */
																if (
																	((obj_t) (BgL_toz00_199) ==
																		BgL_parentz00_253))
																	{	/* Type/coercion.scm 119 */
																		BgL_testz00_656 = ((bool_t) 0);
																	}
																else
																	{	/* Type/coercion.scm 120 */
																		bool_t BgL_testz00_663;

																		{	/* Type/coercion.scm 120 */
																			obj_t BgL_arg1704z00_278;

																			BgL_arg1704z00_278 =
																				BGl_findzd2coercerzd2zztype_coercionz00(
																				(BgL_typez00_bglt) (BgL_parentz00_253),
																				BgL_toz00_199);
																			if (STRUCTP(BgL_arg1704z00_278))
																				{	/* Type/coercion.scm 120 */
																					BgL_testz00_663 =
																						(STRUCT_KEY(BgL_arg1704z00_278) ==
																						CNST_TABLE_REF(((long) 1)));
																				}
																			else
																				{	/* Type/coercion.scm 120 */
																					BgL_testz00_663 = ((bool_t) 0);
																				}
																		}
																		if (BgL_testz00_663)
																			{	/* Type/coercion.scm 120 */
																				BgL_testz00_656 = ((bool_t) 0);
																			}
																		else
																			{	/* Type/coercion.scm 120 */
																				BgL_testz00_656 = ((bool_t) 1);
																			}
																	}
															}
														if (BgL_testz00_656)
															{	/* Type/coercion.scm 121 */
																obj_t BgL_coercerzd2pzd2_255;

																BgL_coercerzd2pzd2_255 =
																	BGl_findzd2coercerzd2zztype_coercionz00(
																	(BgL_typez00_bglt) (BgL_parentz00_253),
																	BgL_fromz00_198);
																{	/* Type/coercion.scm 122 */
																	bool_t BgL_testz00_673;

																	if (STRUCTP(BgL_coercerzd2pzd2_255))
																		{	/* Type/coercion.scm 122 */
																			BgL_testz00_673 =
																				(STRUCT_KEY(BgL_coercerzd2pzd2_255) ==
																				CNST_TABLE_REF(((long) 1)));
																		}
																	else
																		{	/* Type/coercion.scm 122 */
																			BgL_testz00_673 = ((bool_t) 0);
																		}
																	if (BgL_testz00_673)
																		{	/* Type/coercion.scm 128 */
																			obj_t BgL_checkzd2pzd2_257;

																			obj_t BgL_coercezd2pzd2_258;

																			BgL_checkzd2pzd2_257 =
																				STRUCT_REF(BgL_coercerzd2pzd2_255,
																				(int) (((long) 2)));
																			BgL_coercezd2pzd2_258 =
																				STRUCT_REF(BgL_coercerzd2pzd2_255,
																				(int) (((long) 3)));
																			BGl_addzd2coercionz12zc0zztype_coercionz00
																				((BgL_typez00_bglt) (BgL_parentz00_253),
																				BgL_toz00_199,
																				bgl_append2(BgL_checkzd2pzd2_257,
																					BgL_checkz00_23),
																				bgl_append2(BgL_coercezd2pzd2_258,
																					BgL_coercez00_24));
																		}
																	else
																		{	/* Type/coercion.scm 123 */
																			obj_t BgL_arg1685z00_262;

																			obj_t BgL_arg1688z00_263;

																			{	/* Type/coercion.scm 124 */
																				obj_t BgL_arg1691z00_266;

																				obj_t BgL_arg1692z00_267;

																				BgL_arg1691z00_266 =
																					BGl_shapez00zztools_shapez00
																					(BgL_parentz00_253);
																				BgL_arg1692z00_267 =
																					BGl_shapez00zztools_shapez00((obj_t)
																					(BgL_fromz00_198));
																				{	/* Type/coercion.scm 124 */
																					obj_t BgL_list1693z00_268;

																					{	/* Type/coercion.scm 124 */
																						obj_t BgL_arg1694z00_269;

																						BgL_arg1694z00_269 =
																							MAKE_PAIR(BgL_arg1692z00_267,
																							BNIL);
																						BgL_list1693z00_268 =
																							MAKE_PAIR(BgL_arg1691z00_266,
																							BgL_arg1694z00_269);
																					}
																					BgL_arg1685z00_262 =
																						BGl_formatz00zz__r4_output_6_10_3z00
																						(BGl_string1752z00zztype_coercionz00,
																						BgL_list1693z00_268);
																				}
																			}
																			{	/* Type/coercion.scm 126 */
																				obj_t BgL_arg1696z00_271;

																				obj_t BgL_arg1697z00_272;

																				BgL_arg1696z00_271 =
																					BGl_shapez00zztools_shapez00(
																					(obj_t) (BgL_fromz00_198));
																				BgL_arg1697z00_272 =
																					BGl_shapez00zztools_shapez00(
																					(obj_t) (BgL_toz00_199));
																				{	/* Type/coercion.scm 126 */
																					obj_t BgL_list1698z00_273;

																					{	/* Type/coercion.scm 126 */
																						obj_t BgL_arg1700z00_274;

																						BgL_arg1700z00_274 =
																							MAKE_PAIR(BgL_arg1697z00_272,
																							BNIL);
																						BgL_list1698z00_273 =
																							MAKE_PAIR(BgL_arg1696z00_271,
																							BgL_arg1700z00_274);
																					}
																					BgL_arg1688z00_263 =
																						BGl_formatz00zz__r4_output_6_10_3z00
																						(BGl_string1753z00zztype_coercionz00,
																						BgL_list1698z00_273);
																				}
																			}
																			BGl_userzd2errorzd2zztools_errorz00
																				(BGl_string1754z00zztype_coercionz00,
																				BgL_arg1685z00_262, BgL_arg1688z00_263,
																				BNIL);
																		}
																}
															}
														else
															{	/* Type/coercion.scm 118 */
																BFALSE;
															}
													}
												}
												{
													obj_t BgL_l1608z00_701;

													BgL_l1608z00_701 = CDR(BgL_l1608z00_250);
													BgL_l1608z00_250 = BgL_l1608z00_701;
													goto BgL_zc3anonymousza31674ze3z83_251;
												}
											}
										else
											{	/* Type/coercion.scm 134 */
												BgL_auxz00_652 = ((bool_t) 1);
											}
										return BBOOL(BgL_auxz00_652);
									}
								}
							}
						}
				}
			}
		}
	}



/* _add-coercion! */
	obj_t BGl__addzd2coercionz12zc0zztype_coercionz00(obj_t BgL_envz00_491,
		obj_t BgL_fromz00_492, obj_t BgL_toz00_493, obj_t BgL_checkz00_494,
		obj_t BgL_coercez00_495)
	{
		AN_OBJECT;
		{	/* Type/coercion.scm 77 */
			return
				BGl_addzd2coercionz12zc0zztype_coercionz00(
				(BgL_typez00_bglt) (BgL_fromz00_492),
				(BgL_typez00_bglt) (BgL_toz00_493), BgL_checkz00_494,
				BgL_coercez00_495);
		}
	}



/* coercer-exists? */
	BGL_EXPORTED_DEF bool_t
		BGl_coercerzd2existszf3z21zztype_coercionz00(BgL_typez00_bglt BgL_toz00_27,
		BgL_typez00_bglt BgL_fromz00_28)
	{
		AN_OBJECT;
		{	/* Type/coercion.scm 167 */
			{	/* Type/coercion.scm 168 */
				BgL_typez00_bglt BgL_toz00_317;

				BgL_typez00_bglt BgL_fromz00_318;

				BgL_toz00_317 = BGl_getzd2aliasedzd2typez00zztype_typez00(BgL_toz00_27);
				BgL_fromz00_318 =
					BGl_getzd2aliasedzd2typez00zztype_typez00(BgL_fromz00_28);
				{	/* Type/coercion.scm 170 */
					bool_t BgL_testz00_709;

					if (((obj_t) (BgL_fromz00_318) == (obj_t) (BgL_toz00_317)))
						{	/* Type/coercion.scm 170 */
							BgL_testz00_709 = ((bool_t) 1);
						}
					else
						{	/* Type/coercion.scm 170 */
							BgL_testz00_709 =
								(((BgL_typez00_bglt) CREF(BgL_fromz00_318))->BgL_magiczf3zf3);
						}
					if (BgL_testz00_709)
						{	/* Type/coercion.scm 170 */
							return ((bool_t) 1);
						}
					else
						{	/* Type/coercion.scm 172 */
							obj_t BgL_arg1738z00_320;

							BgL_arg1738z00_320 =
								BGl_findzd2coercerzd2zztype_coercionz00(BgL_fromz00_318,
								BgL_toz00_317);
							if (STRUCTP(BgL_arg1738z00_320))
								{	/* Type/coercion.scm 172 */
									return
										(STRUCT_KEY(BgL_arg1738z00_320) ==
										CNST_TABLE_REF(((long) 1)));
								}
							else
								{	/* Type/coercion.scm 172 */
									return ((bool_t) 0);
								}
						}
				}
			}
		}
	}



/* _coercer-exists? */
	obj_t BGl__coercerzd2existszf3z21zztype_coercionz00(obj_t BgL_envz00_496,
		obj_t BgL_toz00_497, obj_t BgL_fromz00_498)
	{
		AN_OBJECT;
		{	/* Type/coercion.scm 167 */
			return
				BBOOL(BGl_coercerzd2existszf3z21zztype_coercionz00(
					(BgL_typez00_bglt) (BgL_toz00_497),
					(BgL_typez00_bglt) (BgL_fromz00_498)));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztype_coercionz00()
	{
		AN_OBJECT;
		{	/* Type/coercion.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztype_coercionz00()
	{
		AN_OBJECT;
		{	/* Type/coercion.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztype_coercionz00()
	{
		AN_OBJECT;
		{	/* Type/coercion.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string1755z00zztype_coercionz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string1755z00zztype_coercionz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string1755z00zztype_coercionz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string1755z00zztype_coercionz00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1755z00zztype_coercionz00));
		}
	}

#ifdef __cplusplus
}
#endif
