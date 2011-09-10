/*===========================================================================*/
/*   (Tvector/cnst.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Tvector/cnst.scm)*/
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

	typedef struct BgL_tvecz00_bgl
	{
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}              *BgL_tvecz00_bglt;


	extern obj_t BGl_za2charza2z00zztype_cachez00;
	static obj_t BGl_requirezd2initializa7ationz75zztvector_cnstz00 = BUNSPEC;
	static obj_t BGl__tvectorzd2Czd2staticzf3zf3zztvector_cnstz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zztvector_cnstz00();
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zztvector_cnstz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zztvector_cnstz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zztvector_cnstz00();
	BGL_IMPORT obj_t bgl_close_output_port(obj_t);
	extern obj_t BGl_za2longza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_tvectorzd2czd2printerz00zztvector_cnstz00(obj_t);
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	extern obj_t BGl_za2boolza2z00zztype_cachez00;
	BGL_EXPORTED_DECL obj_t
		BGl_tvectorzd2ze3czd2vectorze3zztvector_cnstz00(obj_t);
	extern obj_t BGl_za2stringza2z00zztype_cachez00;
	static obj_t BGl__tvectorzd2ze3czd2vectorze3zztvector_cnstz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31688ze3z83zztvector_cnstz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza31691ze3z83zztvector_cnstz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2realza2z00zztype_cachez00;
	BGL_EXPORTED_DECL bool_t
		BGl_tvectorzd2Czd2staticzf3zf3zztvector_cnstz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zztvector_cnstz00();
	static obj_t BGl_methodzd2initzd2zztvector_cnstz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tvectorzd2Czd2staticzf3zd2envz21zztvector_cnstz00,
		BgL_bgl__tvectorza7d2cza7d2s1721z00,
		BGl__tvectorzd2Czd2staticzf3zf3zztvector_cnstz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1711z00zztvector_cnstz00,
		BgL_bgl_za7c3anonymousza7a311722z00,
		BGl_zc3anonymousza31688ze3z83zztvector_cnstz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1713z00zztvector_cnstz00,
		BgL_bgl_za7c3anonymousza7a311723z00,
		BGl_zc3anonymousza31691ze3z83zztvector_cnstz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1714z00zztvector_cnstz00,
		BgL_bgl_string1714za700za7za7t1724za7, "tvector-c-printer", 17);
	      DEFINE_STRING(BGl_string1715z00zztvector_cnstz00,
		BgL_bgl_string1715za700za7za7t1725za7,
		"This tvector can't not be compiled as a static C vector", 55);
	      DEFINE_STRING(BGl_string1716z00zztvector_cnstz00,
		BgL_bgl_string1716za700za7za7t1726za7, "(unsigned char)", 15);
	      DEFINE_STRING(BGl_string1717z00zztvector_cnstz00,
		BgL_bgl_string1717za700za7za7t1727za7, "1", 1);
	      DEFINE_STRING(BGl_string1718z00zztvector_cnstz00,
		BgL_bgl_string1718za700za7za7t1728za7, "0", 1);
	      DEFINE_STRING(BGl_string1720z00zztvector_cnstz00,
		BgL_bgl_string1720za700za7za7t1729za7, "tvector_cnst", 12);
	      DEFINE_STRING(BGl_string1719z00zztvector_cnstz00,
		BgL_bgl_string1719za700za7za7t1730za7, ", ", 2);
	BGL_IMPORT obj_t BGl_writezd2envzd2zz__r4_output_6_10_3z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tvectorzd2ze3czd2vectorzd2envz31zztvector_cnstz00,
		BgL_bgl__tvectorza7d2za7e3cza71731za7,
		BGl__tvectorzd2ze3czd2vectorze3zztvector_cnstz00, 0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_displayzd2envzd2zz__r4_output_6_10_3z00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztvector_cnstz00(long
		BgL_checksumz00_292, char *BgL_fromz00_293)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztvector_cnstz00))
				{
					BGl_requirezd2initializa7ationz75zztvector_cnstz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zztvector_cnstz00();
					BGl_importedzd2moduleszd2initz00zztvector_cnstz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztvector_cnstz00()
	{
		AN_OBJECT;
		{	/* Tvector/cnst.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"tvector_cnst");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "tvector_cnst");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"tvector_cnst");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "tvector_cnst");
			return BUNSPEC;
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztvector_cnstz00()
	{
		AN_OBJECT;
		{	/* Tvector/cnst.scm 15 */
			return BUNSPEC;
		}
	}



/* tvector-C-static? */
	BGL_EXPORTED_DEF bool_t BGl_tvectorzd2Czd2staticzf3zf3zztvector_cnstz00(obj_t
		BgL_tvectz00_11)
	{
		AN_OBJECT;
		{	/* Tvector/cnst.scm 30 */
			{	/* Tvector/cnst.scm 31 */
				BgL_typez00_bglt BgL_itypez00_173;

				{	/* Tvector/cnst.scm 31 */
					BgL_tvecz00_bglt BgL_obj1622z00_239;

					{	/* Tvector/cnst.scm 31 */
						obj_t BgL_sz00_237;

						BgL_sz00_237 = BgL_tvectz00_11;
						BgL_obj1622z00_239 =
							(BgL_tvecz00_bglt) (STRUCT_REF(BgL_sz00_237, (int) (((long) 0))));
					}
					{
						obj_t BgL_auxz00_306;

						{	/* Tvector/cnst.scm 31 */
							BgL_objectz00_bglt BgL_auxz00_307;

							BgL_auxz00_307 = (BgL_objectz00_bglt) (BgL_obj1622z00_239);
							BgL_auxz00_306 = BGL_OBJECT_WIDENING(BgL_auxz00_307);
						}
						BgL_itypez00_173 =
							(((BgL_tvecz00_bglt) CREF(BgL_auxz00_306))->BgL_itemzd2typezd2);
				}}
				if (((obj_t) (BgL_itypez00_173) == BGl_za2longza2z00zztype_cachez00))
					{	/* Tvector/cnst.scm 33 */
						return ((bool_t) 1);
					}
				else
					{	/* Tvector/cnst.scm 33 */
						if (((obj_t) (BgL_itypez00_173) == BGl_za2intza2z00zztype_cachez00))
							{	/* Tvector/cnst.scm 34 */
								return ((bool_t) 1);
							}
						else
							{	/* Tvector/cnst.scm 34 */
								if (
									((obj_t) (BgL_itypez00_173) ==
										BGl_za2charza2z00zztype_cachez00))
									{	/* Tvector/cnst.scm 35 */
										return ((bool_t) 1);
									}
								else
									{	/* Tvector/cnst.scm 35 */
										if (
											((obj_t) (BgL_itypez00_173) ==
												BGl_za2boolza2z00zztype_cachez00))
											{	/* Tvector/cnst.scm 36 */
												return ((bool_t) 1);
											}
										else
											{	/* Tvector/cnst.scm 36 */
												if (
													((obj_t) (BgL_itypez00_173) ==
														BGl_za2stringza2z00zztype_cachez00))
													{	/* Tvector/cnst.scm 37 */
														return ((bool_t) 1);
													}
												else
													{	/* Tvector/cnst.scm 37 */
														if (
															((obj_t) (BgL_itypez00_173) ==
																BGl_za2realza2z00zztype_cachez00))
															{	/* Tvector/cnst.scm 38 */
																return ((bool_t) 1);
															}
														else
															{	/* Tvector/cnst.scm 38 */
																return ((bool_t) 0);
															}
													}
											}
									}
							}
					}
			}
		}
	}



/* _tvector-C-static? */
	obj_t BGl__tvectorzd2Czd2staticzf3zf3zztvector_cnstz00(obj_t BgL_envz00_273,
		obj_t BgL_tvectz00_274)
	{
		AN_OBJECT;
		{	/* Tvector/cnst.scm 30 */
			return
				BBOOL(BGl_tvectorzd2Czd2staticzf3zf3zztvector_cnstz00
				(BgL_tvectz00_274));
		}
	}



/* tvector-c-printer */
	obj_t BGl_tvectorzd2czd2printerz00zztvector_cnstz00(obj_t BgL_tvectz00_12)
	{
		AN_OBJECT;
		{	/* Tvector/cnst.scm 44 */
			{	/* Tvector/cnst.scm 45 */
				BgL_typez00_bglt BgL_itypez00_181;

				{	/* Tvector/cnst.scm 45 */
					BgL_tvecz00_bglt BgL_obj1622z00_243;

					{	/* Tvector/cnst.scm 45 */
						obj_t BgL_sz00_241;

						BgL_sz00_241 = BgL_tvectz00_12;
						BgL_obj1622z00_243 =
							(BgL_tvecz00_bglt) (STRUCT_REF(BgL_sz00_241, (int) (((long) 0))));
					}
					{
						obj_t BgL_auxz00_334;

						{	/* Tvector/cnst.scm 45 */
							BgL_objectz00_bglt BgL_auxz00_335;

							BgL_auxz00_335 = (BgL_objectz00_bglt) (BgL_obj1622z00_243);
							BgL_auxz00_334 = BGL_OBJECT_WIDENING(BgL_auxz00_335);
						}
						BgL_itypez00_181 =
							(((BgL_tvecz00_bglt) CREF(BgL_auxz00_334))->BgL_itemzd2typezd2);
				}}
				if (((obj_t) (BgL_itypez00_181) == BGl_za2longza2z00zztype_cachez00))
					{	/* Tvector/cnst.scm 47 */
						return BGl_displayzd2envzd2zz__r4_output_6_10_3z00;
					}
				else
					{	/* Tvector/cnst.scm 47 */
						if (((obj_t) (BgL_itypez00_181) == BGl_za2intza2z00zztype_cachez00))
							{	/* Tvector/cnst.scm 48 */
								return BGl_displayzd2envzd2zz__r4_output_6_10_3z00;
							}
						else
							{	/* Tvector/cnst.scm 48 */
								if (
									((obj_t) (BgL_itypez00_181) ==
										BGl_za2charza2z00zztype_cachez00))
									{	/* Tvector/cnst.scm 49 */
										return BGl_proc1711z00zztvector_cnstz00;
									}
								else
									{	/* Tvector/cnst.scm 49 */
										if (
											((obj_t) (BgL_itypez00_181) ==
												BGl_za2boolza2z00zztype_cachez00))
											{	/* Tvector/cnst.scm 52 */
												return BGl_proc1713z00zztvector_cnstz00;
											}
										else
											{	/* Tvector/cnst.scm 52 */
												if (
													((obj_t) (BgL_itypez00_181) ==
														BGl_za2stringza2z00zztype_cachez00))
													{	/* Tvector/cnst.scm 56 */
														return BGl_writezd2envzd2zz__r4_output_6_10_3z00;
													}
												else
													{	/* Tvector/cnst.scm 56 */
														if (
															((obj_t) (BgL_itypez00_181) ==
																BGl_za2realza2z00zztype_cachez00))
															{	/* Tvector/cnst.scm 57 */
																return
																	BGl_displayzd2envzd2zz__r4_output_6_10_3z00;
															}
														else
															{	/* Tvector/cnst.scm 57 */
																return
																	BGl_errorz00zz__errorz00
																	(BGl_string1714z00zztvector_cnstz00,
																	BGl_string1715z00zztvector_cnstz00,
																	BgL_tvectz00_12);
															}
													}
											}
									}
							}
					}
			}
		}
	}



/* <anonymous:1688> */
	obj_t BGl_zc3anonymousza31688ze3z83zztvector_cnstz00(obj_t BgL_envz00_277,
		obj_t BgL_xz00_278, obj_t BgL_portz00_279)
	{
		AN_OBJECT;
		{	/* Tvector/cnst.scm 49 */
			{
				obj_t BgL_xz00_185;

				obj_t BgL_portz00_186;

				BgL_xz00_185 = BgL_xz00_278;
				BgL_portz00_186 = BgL_portz00_279;
				bgl_display_string(BGl_string1716z00zztvector_cnstz00, BgL_portz00_186);
				{	/* Tvector/cnst.scm 51 */
					long BgL_arg1689z00_244;

					BgL_arg1689z00_244 = (CCHAR(BgL_xz00_185));
					return bgl_display_obj(BINT(BgL_arg1689z00_244), BgL_portz00_186);
				}
			}
		}
	}



/* <anonymous:1691> */
	obj_t BGl_zc3anonymousza31691ze3z83zztvector_cnstz00(obj_t BgL_envz00_280,
		obj_t BgL_xz00_281, obj_t BgL_portz00_282)
	{
		AN_OBJECT;
		{	/* Tvector/cnst.scm 52 */
			{
				obj_t BgL_xz00_190;

				obj_t BgL_portz00_191;

				BgL_xz00_190 = BgL_xz00_281;
				BgL_portz00_191 = BgL_portz00_282;
				if (CBOOL(BgL_xz00_190))
					{	/* Tvector/cnst.scm 53 */
						return
							bgl_display_string(BGl_string1717z00zztvector_cnstz00,
							BgL_portz00_191);
					}
				else
					{	/* Tvector/cnst.scm 53 */
						return
							bgl_display_string(BGl_string1718z00zztvector_cnstz00,
							BgL_portz00_191);
					}
			}
		}
	}



/* tvector->c-vector */
	BGL_EXPORTED_DEF obj_t BGl_tvectorzd2ze3czd2vectorze3zztvector_cnstz00(obj_t
		BgL_tvectorz00_13)
	{
		AN_OBJECT;
		{	/* Tvector/cnst.scm 65 */
			{	/* Tvector/cnst.scm 66 */
				obj_t BgL_vectz00_196;

				BgL_vectz00_196 = STRUCT_REF(BgL_tvectorz00_13, (int) (((long) 1)));
				{	/* Tvector/cnst.scm 66 */
					obj_t BgL_czd2printerzd2_197;

					BgL_czd2printerzd2_197 =
						BGl_tvectorzd2czd2printerz00zztvector_cnstz00(BgL_tvectorz00_13);
					{	/* Tvector/cnst.scm 67 */
						long BgL_lenzd21zd2_198;

						{	/* Tvector/cnst.scm 68 */
							int BgL_arg1702z00_209;

							BgL_arg1702z00_209 = VECTOR_LENGTH(BgL_vectz00_196);
							BgL_lenzd21zd2_198 = ((long) (BgL_arg1702z00_209) - ((long) 1));
						}
						{	/* Tvector/cnst.scm 68 */
							obj_t BgL_portz00_199;

							{	/* Tvector/cnst.scm 69 */

								{	/* Tvector/cnst.scm 69 */

									BgL_portz00_199 =
										BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(BTRUE);
							}}
							{	/* Tvector/cnst.scm 69 */

								bgl_display_char(((unsigned char) '{'), BgL_portz00_199);
								{
									long BgL_iz00_201;

									BgL_iz00_201 = ((long) 0);
								BgL_zc3anonymousza31695ze3z83_202:
									if ((BgL_iz00_201 == BgL_lenzd21zd2_198))
										{	/* Tvector/cnst.scm 72 */
											{	/* Tvector/cnst.scm 74 */
												obj_t BgL_arg1697z00_204;

												BgL_arg1697z00_204 =
													VECTOR_REF(BgL_vectz00_196, (int) (BgL_iz00_201));
												PROCEDURE_ENTRY(BgL_czd2printerzd2_197)
													(BgL_czd2printerzd2_197, BgL_arg1697z00_204,
													BgL_portz00_199, BEOA);
											}
											bgl_display_char(((unsigned char) '}'), BgL_portz00_199);
											return bgl_close_output_port(BgL_portz00_199);
										}
									else
										{	/* Tvector/cnst.scm 72 */
											{	/* Tvector/cnst.scm 78 */
												obj_t BgL_arg1700z00_205;

												BgL_arg1700z00_205 =
													VECTOR_REF(BgL_vectz00_196, (int) (BgL_iz00_201));
												PROCEDURE_ENTRY(BgL_czd2printerzd2_197)
													(BgL_czd2printerzd2_197, BgL_arg1700z00_205,
													BgL_portz00_199, BEOA);
											}
											bgl_display_string(BGl_string1719z00zztvector_cnstz00,
												BgL_portz00_199);
											{
												long BgL_iz00_388;

												BgL_iz00_388 = (BgL_iz00_201 + ((long) 1));
												BgL_iz00_201 = BgL_iz00_388;
												goto BgL_zc3anonymousza31695ze3z83_202;
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



/* _tvector->c-vector */
	obj_t BGl__tvectorzd2ze3czd2vectorze3zztvector_cnstz00(obj_t BgL_envz00_289,
		obj_t BgL_tvectorz00_290)
	{
		AN_OBJECT;
		{	/* Tvector/cnst.scm 65 */
			return
				BGl_tvectorzd2ze3czd2vectorze3zztvector_cnstz00(BgL_tvectorz00_290);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztvector_cnstz00()
	{
		AN_OBJECT;
		{	/* Tvector/cnst.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztvector_cnstz00()
	{
		AN_OBJECT;
		{	/* Tvector/cnst.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztvector_cnstz00()
	{
		AN_OBJECT;
		{	/* Tvector/cnst.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string1720z00zztvector_cnstz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string1720z00zztvector_cnstz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string1720z00zztvector_cnstz00));
			return
				BGl_modulezd2initializa7ationz75zztvector_tvectorz00(((long) 2222742),
				BSTRING_TO_STRING(BGl_string1720z00zztvector_cnstz00));
		}
	}

#ifdef __cplusplus
}
#endif
