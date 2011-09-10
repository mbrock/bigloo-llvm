/*===========================================================================*/
/*   (Type/tools.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Type/tools.scm)*/
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


	BGL_EXPORTED_DECL obj_t BGl_replacezd2z42z90zztype_toolsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_typezd2namezd2sanszd2z42z90zztype_toolsz00(BgL_typez00_bglt);
	static obj_t BGl__makezd2pointerzd2tozd2namezd2zztype_toolsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_z42zd2inzd2namezf3zb1zztype_toolsz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztype_toolsz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zztype_toolsz00();
	static obj_t BGl__za2zd2namezf3z83zztype_toolsz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zztype_toolsz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__stringzd2sanszd2z42z42zztype_toolsz00(obj_t, obj_t);
	static obj_t BGl__typezd2namezd2sanszd2z42z90zztype_toolsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl__replacezd2z42z90zztype_toolsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2sanszd2z42z42zztype_toolsz00(obj_t);
	BGL_IMPORT obj_t make_string(long, unsigned char);
	BGL_EXPORTED_DECL obj_t BGl_za2zd2namezf3z83zztype_toolsz00(obj_t);
	static obj_t BGl__z42zd2inzd2namezf3zb1zztype_toolsz00(obj_t, obj_t);
	static obj_t BGl__makezd2typedzd2declarationz00zztype_toolsz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2typedzd2declarationz00zztype_toolsz00(BgL_typez00_bglt, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zztype_toolsz00();
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2pointerzd2tozd2namezd2zztype_toolsz00(BgL_typez00_bglt);
	static obj_t BGl_methodzd2initzd2zztype_toolsz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2typedzd2declarationzd2envzd2zztype_toolsz00,
		BgL_bgl__makeza7d2typedza7d21662z00,
		BGl__makezd2typedzd2declarationz00zztype_toolsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_typezd2namezd2sanszd2z42zd2envz42zztype_toolsz00,
		BgL_bgl__typeza7d2nameza7d2s1663z00,
		BGl__typezd2namezd2sanszd2z42z90zztype_toolsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_replacezd2z42zd2envz42zztype_toolsz00,
		BgL_bgl__replaceza7d2za742za791664za7, BGl__replacezd2z42z90zztype_toolsz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2pointerzd2tozd2namezd2envz00zztype_toolsz00,
		BgL_bgl__makeza7d2pointerza71665z00,
		BGl__makezd2pointerzd2tozd2namezd2zztype_toolsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42zd2inzd2namezf3zd2envz63zztype_toolsz00,
		BgL_bgl__za742za7d2inza7d2name1666za7,
		BGl__z42zd2inzd2namezf3zb1zztype_toolsz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1656z00zztype_toolsz00,
		BgL_bgl_string1656za700za7za7t1667za7, " ", 1);
	      DEFINE_STRING(BGl_string1657z00zztype_toolsz00,
		BgL_bgl_string1657za700za7za7t1668za7, "(*)", 3);
	      DEFINE_STRING(BGl_string1658z00zztype_toolsz00,
		BgL_bgl_string1658za700za7za7t1669za7, " *", 2);
	      DEFINE_STRING(BGl_string1660z00zztype_toolsz00,
		BgL_bgl_string1660za700za7za7t1670za7, "Unbound foreign type", 20);
	      DEFINE_STRING(BGl_string1659z00zztype_toolsz00,
		BgL_bgl_string1659za700za7za7t1671za7, "make-pointer-to-name", 20);
	      DEFINE_STRING(BGl_string1661z00zztype_toolsz00,
		BgL_bgl_string1661za700za7za7t1672za7, "type_tools", 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_stringzd2sanszd2z42zd2envz90zztype_toolsz00,
		BgL_bgl__stringza7d2sansza7d1673z00,
		BGl__stringzd2sanszd2z42z42zztype_toolsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_za2zd2namezf3zd2envz51zztype_toolsz00,
		BgL_bgl__za7a2za7d2nameza7f3za781674z00,
		BGl__za2zd2namezf3z83zztype_toolsz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long
		BgL_checksumz00_337, char *BgL_fromz00_338)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztype_toolsz00))
				{
					BGl_requirezd2initializa7ationz75zztype_toolsz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zztype_toolsz00();
					BGl_importedzd2moduleszd2initz00zztype_toolsz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztype_toolsz00()
	{
		AN_OBJECT;
		{	/* Type/tools.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"type_tools");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "type_tools");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "type_tools");
			return BUNSPEC;
		}
	}



/* string-sans-$ */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2sanszd2z42z42zztype_toolsz00(obj_t
		BgL_stringz00_1)
	{
		AN_OBJECT;
		{	/* Type/tools.scm 33 */
			{	/* Type/tools.scm 34 */
				obj_t BgL_newz00_155;

				BgL_newz00_155 =
					BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_stringz00_1);
				{	/* Type/tools.scm 35 */
					long BgL_g1600z00_156;

					BgL_g1600z00_156 = (STRING_LENGTH(BgL_newz00_155) - ((long) 1));
					{
						long BgL_iz00_158;

						BgL_iz00_158 = BgL_g1600z00_156;
					BgL_zc3anonymousza31602ze3z83_159:
						if ((BgL_iz00_158 == ((long) -1)))
							{	/* Type/tools.scm 37 */
								return BgL_newz00_155;
							}
						else
							{	/* Type/tools.scm 37 */
								if (
									(STRING_REF(BgL_newz00_155,
											BgL_iz00_158) == ((unsigned char) '$')))
									{	/* Type/tools.scm 39 */
										STRING_SET(BgL_newz00_155, BgL_iz00_158,
											((unsigned char) ' '));
										{
											long BgL_iz00_356;

											BgL_iz00_356 = (BgL_iz00_158 - ((long) 1));
											BgL_iz00_158 = BgL_iz00_356;
											goto BgL_zc3anonymousza31602ze3z83_159;
										}
									}
								else
									{
										long BgL_iz00_358;

										BgL_iz00_358 = (BgL_iz00_158 - ((long) 1));
										BgL_iz00_158 = BgL_iz00_358;
										goto BgL_zc3anonymousza31602ze3z83_159;
									}
							}
					}
				}
			}
		}
	}



/* _string-sans-$ */
	obj_t BGl__stringzd2sanszd2z42z42zztype_toolsz00(obj_t BgL_envz00_321,
		obj_t BgL_stringz00_322)
	{
		AN_OBJECT;
		{	/* Type/tools.scm 33 */
			return BGl_stringzd2sanszd2z42z42zztype_toolsz00(BgL_stringz00_322);
		}
	}



/* type-name-sans-$ */
	BGL_EXPORTED_DEF obj_t
		BGl_typezd2namezd2sanszd2z42z90zztype_toolsz00(BgL_typez00_bglt
		BgL_typez00_2)
	{
		AN_OBJECT;
		{	/* Type/tools.scm 48 */
			{	/* Type/tools.scm 49 */
				obj_t BgL_tnamez00_168;

				BgL_tnamez00_168 =
					(((BgL_typez00_bglt) CREF(BgL_typez00_2))->BgL_namez00);
				if (CBOOL((((BgL_typez00_bglt) CREF(BgL_typez00_2))->BgL_z42z42)))
					{	/* Type/tools.scm 50 */
						return BGl_stringzd2sanszd2z42z42zztype_toolsz00(BgL_tnamez00_168);
					}
				else
					{	/* Type/tools.scm 50 */
						return BgL_tnamez00_168;
					}
			}
		}
	}



/* _type-name-sans-$ */
	obj_t BGl__typezd2namezd2sanszd2z42z90zztype_toolsz00(obj_t BgL_envz00_323,
		obj_t BgL_typez00_324)
	{
		AN_OBJECT;
		{	/* Type/tools.scm 48 */
			return
				BGl_typezd2namezd2sanszd2z42z90zztype_toolsz00(
				(BgL_typez00_bglt) (BgL_typez00_324));
		}
	}



/* $-in-name? */
	BGL_EXPORTED_DEF obj_t BGl_z42zd2inzd2namezf3zb1zztype_toolsz00(obj_t
		BgL_namez00_3)
	{
		AN_OBJECT;
		{	/* Type/tools.scm 59 */
			{
				long BgL_iz00_172;

				{	/* Type/tools.scm 60 */
					bool_t BgL_auxz00_368;

					BgL_iz00_172 = (STRING_LENGTH(BgL_namez00_3) - ((long) 1));
				BgL_zc3anonymousza31612ze3z83_173:
					if ((BgL_iz00_172 == ((long) -1)))
						{	/* Type/tools.scm 62 */
							BgL_auxz00_368 = ((bool_t) 0);
						}
					else
						{	/* Type/tools.scm 62 */
							if (
								(STRING_REF(BgL_namez00_3,
										BgL_iz00_172) == ((unsigned char) '$')))
								{	/* Type/tools.scm 64 */
									BgL_auxz00_368 = ((bool_t) 1);
								}
							else
								{
									long BgL_iz00_374;

									BgL_iz00_374 = (BgL_iz00_172 - ((long) 1));
									BgL_iz00_172 = BgL_iz00_374;
									goto BgL_zc3anonymousza31612ze3z83_173;
								}
						}
					return BBOOL(BgL_auxz00_368);
				}
			}
		}
	}



/* _$-in-name? */
	obj_t BGl__z42zd2inzd2namezf3zb1zztype_toolsz00(obj_t BgL_envz00_325,
		obj_t BgL_namez00_326)
	{
		AN_OBJECT;
		{	/* Type/tools.scm 59 */
			return BGl_z42zd2inzd2namezf3zb1zztype_toolsz00(BgL_namez00_326);
		}
	}



/* *-name? */
	BGL_EXPORTED_DEF obj_t BGl_za2zd2namezf3z83zztype_toolsz00(obj_t
		BgL_namez00_4)
	{
		AN_OBJECT;
		{	/* Type/tools.scm 74 */
			return
				BBOOL(
				(STRING_REF(BgL_namez00_4,
						(STRING_LENGTH(BgL_namez00_4) - ((long) 1))) ==
					((unsigned char) '*')));
		}
	}



/* _*-name? */
	obj_t BGl__za2zd2namezf3z83zztype_toolsz00(obj_t BgL_envz00_327,
		obj_t BgL_namez00_328)
	{
		AN_OBJECT;
		{	/* Type/tools.scm 74 */
			return BGl_za2zd2namezf3z83zztype_toolsz00(BgL_namez00_328);
		}
	}



/* replace-$ */
	BGL_EXPORTED_DEF obj_t BGl_replacezd2z42z90zztype_toolsz00(obj_t
		BgL_stringz00_5, obj_t BgL_rplacz00_6)
	{
		AN_OBJECT;
		{	/* Type/tools.scm 80 */
			{	/* Type/tools.scm 81 */
				long BgL_lenzd2stringzd2_185;

				BgL_lenzd2stringzd2_185 = STRING_LENGTH(BgL_stringz00_5);
				{	/* Type/tools.scm 81 */
					long BgL_lenzd2rplaczd2_186;

					BgL_lenzd2rplaczd2_186 = STRING_LENGTH(BgL_rplacz00_6);
					{	/* Type/tools.scm 82 */
						long BgL_lenz00_187;

						BgL_lenz00_187 =
							((BgL_lenzd2stringzd2_185 + BgL_lenzd2rplaczd2_186) - ((long) 1));
						{	/* Type/tools.scm 83 */
							obj_t BgL_newz00_188;

							BgL_newz00_188 =
								make_string(BgL_lenz00_187, ((unsigned char) ' '));
							{	/* Type/tools.scm 84 */

								{
									long BgL_rz00_190;

									long BgL_wz00_191;

									BgL_rz00_190 = ((long) 0);
									BgL_wz00_191 = ((long) 0);
								BgL_zc3anonymousza31626ze3z83_192:
									if ((BgL_rz00_190 == BgL_lenzd2stringzd2_185))
										{	/* Type/tools.scm 88 */
											return BgL_newz00_188;
										}
									else
										{	/* Type/tools.scm 88 */
											if (
												(STRING_REF(BgL_stringz00_5,
														BgL_rz00_190) == ((unsigned char) '$')))
												{
													long BgL_wz00_196;

													long BgL_rrz00_197;

													BgL_wz00_196 = BgL_wz00_191;
													BgL_rrz00_197 = ((long) 0);
												BgL_zc3anonymousza31629ze3z83_198:
													if ((BgL_rrz00_197 == BgL_lenzd2rplaczd2_186))
														{
															long BgL_wz00_400;

															long BgL_rz00_398;

															BgL_rz00_398 = (BgL_rz00_190 + ((long) 1));
															BgL_wz00_400 = BgL_wz00_196;
															BgL_wz00_191 = BgL_wz00_400;
															BgL_rz00_190 = BgL_rz00_398;
															goto BgL_zc3anonymousza31626ze3z83_192;
														}
													else
														{	/* Type/tools.scm 94 */
															{	/* Type/tools.scm 97 */
																unsigned char BgL_auxz00_401;

																BgL_auxz00_401 =
																	STRING_REF(BgL_rplacz00_6, BgL_rrz00_197);
																STRING_SET(BgL_newz00_188, BgL_wz00_196,
																	BgL_auxz00_401);
															}
															{
																long BgL_rrz00_406;

																long BgL_wz00_404;

																BgL_wz00_404 = (BgL_wz00_196 + ((long) 1));
																BgL_rrz00_406 = (BgL_rrz00_197 + ((long) 1));
																BgL_rrz00_197 = BgL_rrz00_406;
																BgL_wz00_196 = BgL_wz00_404;
																goto BgL_zc3anonymousza31629ze3z83_198;
															}
														}
												}
											else
												{	/* Type/tools.scm 90 */
													{	/* Type/tools.scm 100 */
														unsigned char BgL_auxz00_408;

														BgL_auxz00_408 =
															STRING_REF(BgL_stringz00_5, BgL_rz00_190);
														STRING_SET(BgL_newz00_188, BgL_wz00_191,
															BgL_auxz00_408);
													}
													{
														long BgL_wz00_413;

														long BgL_rz00_411;

														BgL_rz00_411 = (BgL_rz00_190 + ((long) 1));
														BgL_wz00_413 = (BgL_wz00_191 + ((long) 1));
														BgL_wz00_191 = BgL_wz00_413;
														BgL_rz00_190 = BgL_rz00_411;
														goto BgL_zc3anonymousza31626ze3z83_192;
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



/* _replace-$ */
	obj_t BGl__replacezd2z42z90zztype_toolsz00(obj_t BgL_envz00_329,
		obj_t BgL_stringz00_330, obj_t BgL_rplacz00_331)
	{
		AN_OBJECT;
		{	/* Type/tools.scm 80 */
			return
				BGl_replacezd2z42z90zztype_toolsz00(BgL_stringz00_330,
				BgL_rplacz00_331);
		}
	}



/* make-typed-declaration */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2typedzd2declarationz00zztype_toolsz00(BgL_typez00_bglt
		BgL_typez00_7, obj_t BgL_idz00_8)
	{
		AN_OBJECT;
		{	/* Type/tools.scm 106 */
			{	/* Type/tools.scm 107 */
				obj_t BgL_tnamez00_213;

				BgL_tnamez00_213 =
					(((BgL_typez00_bglt) CREF(BgL_typez00_7))->BgL_namez00);
				if (CBOOL((((BgL_typez00_bglt) CREF(BgL_typez00_7))->BgL_z42z42)))
					{	/* Type/tools.scm 109 */
						return
							BGl_replacezd2z42z90zztype_toolsz00(BgL_tnamez00_213,
							BgL_idz00_8);
					}
				else
					{	/* Type/tools.scm 109 */
						return
							string_append_3(BgL_tnamez00_213,
							BGl_string1656z00zztype_toolsz00, BgL_idz00_8);
					}
			}
		}
	}



/* _make-typed-declaration */
	obj_t BGl__makezd2typedzd2declarationz00zztype_toolsz00(obj_t BgL_envz00_332,
		obj_t BgL_typez00_333, obj_t BgL_idz00_334)
	{
		AN_OBJECT;
		{	/* Type/tools.scm 106 */
			return
				BGl_makezd2typedzd2declarationz00zztype_toolsz00(
				(BgL_typez00_bglt) (BgL_typez00_333), BgL_idz00_334);
		}
	}



/* make-pointer-to-name */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2pointerzd2tozd2namezd2zztype_toolsz00(BgL_typez00_bglt
		BgL_typez00_9)
	{
		AN_OBJECT;
		{	/* Type/tools.scm 117 */
			{	/* Type/tools.scm 118 */
				obj_t BgL_tnamez00_215;

				BgL_tnamez00_215 =
					(((BgL_typez00_bglt) CREF(BgL_typez00_9))->BgL_namez00);
				if (STRINGP(BgL_tnamez00_215))
					{	/* Type/tools.scm 119 */
						if (CBOOL((((BgL_typez00_bglt) CREF(BgL_typez00_9))->BgL_z42z42)))
							{	/* Type/tools.scm 122 */
								return
									BGl_replacezd2z42z90zztype_toolsz00(BgL_tnamez00_215,
									BGl_string1657z00zztype_toolsz00);
							}
						else
							{	/* Type/tools.scm 122 */
								return
									string_append(BgL_tnamez00_215,
									BGl_string1658z00zztype_toolsz00);
							}
					}
				else
					{	/* Type/tools.scm 120 */
						obj_t BgL_arg1653z00_220;

						BgL_arg1653z00_220 =
							(((BgL_typez00_bglt) CREF(BgL_typez00_9))->BgL_idz00);
						return
							BGl_errorz00zz__errorz00(BGl_string1659z00zztype_toolsz00,
							BGl_string1660z00zztype_toolsz00, BgL_arg1653z00_220);
					}
			}
		}
	}



/* _make-pointer-to-name */
	obj_t BGl__makezd2pointerzd2tozd2namezd2zztype_toolsz00(obj_t BgL_envz00_335,
		obj_t BgL_typez00_336)
	{
		AN_OBJECT;
		{	/* Type/tools.scm 117 */
			return
				BGl_makezd2pointerzd2tozd2namezd2zztype_toolsz00(
				(BgL_typez00_bglt) (BgL_typez00_336));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztype_toolsz00()
	{
		AN_OBJECT;
		{	/* Type/tools.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztype_toolsz00()
	{
		AN_OBJECT;
		{	/* Type/tools.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztype_toolsz00()
	{
		AN_OBJECT;
		{	/* Type/tools.scm 15 */
			return
				BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string1661z00zztype_toolsz00));
		}
	}

#ifdef __cplusplus
}
#endif
