/*===========================================================================*/
/*   (Inline/simple.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Inline/simple.scm)*/
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

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;

	typedef struct BgL_closurez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}                 *BgL_closurez00_bglt;

	typedef struct BgL_appz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		struct BgL_varz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
	}             *BgL_appz00_bglt;

	typedef struct BgL_letzd2varzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_bindingsz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
		bool_t BgL_removablezf3zf3;
	}                   *BgL_letzd2varzd2_bglt;

	typedef struct BgL_isfunz00_bgl
	{
		struct BgL_nodez00_bgl *BgL_originalzd2bodyzd2;
		obj_t BgL_recursivezd2callszd2;
	}               *BgL_isfunz00_bglt;


	extern BgL_localz00_bglt BGl_clonezd2localzd2zzast_localz00(BgL_localz00_bglt,
		BgL_valuez00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	static obj_t BGl_cnstzd2initzd2zzinline_simplez00();
	extern bool_t BGl_sidezd2effectzf3z21zzeffect_effectz00(BgL_nodez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzinline_simplez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_spreadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_alphatiza7eza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_siza7eza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_inlinez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_alphatiza7eza7zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t, BgL_nodez00_bglt);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_inlinezd2appzd2simplez00zzinline_simplez00(BgL_nodez00_bglt, long,
		obj_t, obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern obj_t BGl_za2verboseza2z00zzengine_paramz00;
	extern BgL_nodez00_bglt
		BGl_inlinezd2nodezd2zzinline_inlinez00(BgL_nodez00_bglt, long, obj_t);
	static obj_t BGl__inlinezd2appzd2simplez00zzinline_simplez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzinline_simplez00();
	extern bool_t
		BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(BgL_nodez00_bglt);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzinline_simplez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzinline_simplez00();
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzinline_simplez00();
	extern obj_t BGl_currentzd2functionzd2zztools_errorz00();
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	extern obj_t BGl_localz00zzast_varz00;
	extern obj_t BGl_za2inliningzd2reducezd2kfactorza2z00zzengine_paramz00;
	extern BgL_varz00_bglt BGl_makezd2varzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_variablez00_bglt);
	extern obj_t BGl_isfunz00zzinline_inlinez00;
	extern BgL_letzd2varzd2_bglt BGl_makezd2letzd2varz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, BgL_nodez00_bglt, bool_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzinline_simplez00();
	extern BgL_svarz00_bglt BGl_makezd2svarzd2zzast_varz00(obj_t);
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inlinezd2appzd2simplezd2envzd2zzinline_simplez00,
		BgL_bgl__inlineza7d2appza7d23476z00,
		BGl__inlinezd2appzd2simplez00zzinline_simplez00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string3470z00zzinline_simplez00,
		BgL_bgl_string3470za700za7za7i3477za7, " --> ", 5);
	      DEFINE_STRING(BGl_string3469z00zzinline_simplez00,
		BgL_bgl_string3469za700za7za7i3478za7, " (", 2);
	      DEFINE_STRING(BGl_string3471z00zzinline_simplez00,
		BgL_bgl_string3471za700za7za7i3479za7, "         ", 9);
	      DEFINE_STRING(BGl_string3472z00zzinline_simplez00,
		BgL_bgl_string3472za700za7za7i3480za7, "inline_simple", 13);
	      DEFINE_STRING(BGl_string3473z00zzinline_simplez00,
		BgL_bgl_string3473za700za7za7i3481za7, "res (sifun sgfun) read ", 23);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzinline_simplez00(long
		BgL_checksumz00_1348, char *BgL_fromz00_1349)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzinline_simplez00))
				{
					BGl_requirezd2initializa7ationz75zzinline_simplez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzinline_simplez00();
					BGl_cnstzd2initzd2zzinline_simplez00();
					BGl_importedzd2moduleszd2initz00zzinline_simplez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzinline_simplez00()
	{
		AN_OBJECT;
		{	/* Inline/simple.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"inline_simple");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"inline_simple");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"inline_simple");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"inline_simple");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"inline_simple");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzinline_simplez00()
	{
		AN_OBJECT;
		{	/* Inline/simple.scm 15 */
			{	/* Inline/simple.scm 15 */
				obj_t BgL_cportz00_1340;

				BgL_cportz00_1340 =
					bgl_open_input_string(BGl_string3473z00zzinline_simplez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1341;

					BgL_iz00_1341 = ((long) 2);
				BgL_loopz00_1342:
					if ((BgL_iz00_1341 == ((long) -1)))
						{	/* Inline/simple.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Inline/simple.scm 15 */
							{	/* Inline/simple.scm 15 */
								obj_t BgL_arg3475z00_1344;

								{	/* Inline/simple.scm 15 */

									{	/* Inline/simple.scm 15 */
										obj_t BgL_locationz00_1346;

										BgL_locationz00_1346 = BBOOL(((bool_t) 0));
										{	/* Inline/simple.scm 15 */

											BgL_arg3475z00_1344 =
												BGl_readz00zz__readerz00(BgL_cportz00_1340,
												BgL_locationz00_1346);
										}
									}
								}
								{	/* Inline/simple.scm 15 */
									int BgL_auxz00_1367;

									BgL_auxz00_1367 = (int) (BgL_iz00_1341);
									CNST_TABLE_SET(BgL_auxz00_1367, BgL_arg3475z00_1344);
							}}
							{	/* Inline/simple.scm 15 */
								int BgL_auxz00_1347;

								BgL_auxz00_1347 = (int) ((BgL_iz00_1341 - ((long) 1)));
								{
									long BgL_iz00_1372;

									BgL_iz00_1372 = (long) (BgL_auxz00_1347);
									BgL_iz00_1341 = BgL_iz00_1372;
									goto BgL_loopz00_1342;
								}
							}
						}
				}
			}
		}
	}



/* inline-app-simple */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_inlinezd2appzd2simplez00zzinline_simplez00(BgL_nodez00_bglt
		BgL_nodez00_1, long BgL_kfactorz00_2, obj_t BgL_stackz00_3,
		obj_t BgL_msgz00_4)
	{
		AN_OBJECT;
		{	/* Inline/simple.scm 42 */
			{	/* Inline/simple.scm 45 */
				BgL_variablez00_bglt BgL_calleez00_785;

				{	/* Inline/simple.scm 45 */
					BgL_varz00_bglt BgL_obj2155z00_1279;

					{
						BgL_appz00_bglt BgL_auxz00_1374;

						BgL_auxz00_1374 = (BgL_appz00_bglt) (BgL_nodez00_1);
						BgL_obj2155z00_1279 =
							(((BgL_appz00_bglt) CREF(BgL_auxz00_1374))->BgL_funz00);
					}
					BgL_calleez00_785 =
						(((BgL_varz00_bglt) CREF(BgL_obj2155z00_1279))->BgL_variablez00);
				}
				{	/* Inline/simple.scm 45 */
					BgL_valuez00_bglt BgL_sfunz00_786;

					BgL_sfunz00_786 =
						(((BgL_variablez00_bglt) CREF(BgL_calleez00_785))->BgL_valuez00);
					{	/* Inline/simple.scm 46 */
						obj_t BgL_formalsz00_787;

						{
							BgL_sfunz00_bglt BgL_auxz00_1379;

							BgL_auxz00_1379 = (BgL_sfunz00_bglt) (BgL_sfunz00_786);
							BgL_formalsz00_787 =
								(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1379))->BgL_argsz00);
						}
						{	/* Inline/simple.scm 47 */
							obj_t BgL_actualsz00_788;

							{
								BgL_appz00_bglt BgL_auxz00_1382;

								BgL_auxz00_1382 = (BgL_appz00_bglt) (BgL_nodez00_1);
								BgL_actualsz00_788 =
									(((BgL_appz00_bglt) CREF(BgL_auxz00_1382))->BgL_argsz00);
							}
							{	/* Inline/simple.scm 48 */
								obj_t BgL_reductorsz00_789;

								if (NULLP(BgL_formalsz00_787))
									{	/* Inline/simple.scm 49 */
										BgL_reductorsz00_789 = BNIL;
									}
								else
									{	/* Inline/simple.scm 49 */
										obj_t BgL_head3335z00_870;

										BgL_head3335z00_870 = MAKE_PAIR(BNIL, BNIL);
										{
											obj_t BgL_ll3333z00_872;

											obj_t BgL_ll3334z00_873;

											obj_t BgL_tail3336z00_874;

											BgL_ll3333z00_872 = BgL_formalsz00_787;
											BgL_ll3334z00_873 = BgL_actualsz00_788;
											BgL_tail3336z00_874 = BgL_head3335z00_870;
										BgL_zc3anonymousza33400ze3z83_875:
											if (NULLP(BgL_ll3333z00_872))
												{	/* Inline/simple.scm 49 */
													BgL_reductorsz00_789 = CDR(BgL_head3335z00_870);
												}
											else
												{	/* Inline/simple.scm 49 */
													obj_t BgL_newtail3337z00_877;

													{	/* Inline/simple.scm 49 */
														obj_t BgL_arg3404z00_880;

														{	/* Inline/simple.scm 49 */
															obj_t BgL_fz00_882;

															obj_t BgL_az00_883;

															BgL_fz00_882 = CAR(BgL_ll3333z00_872);
															BgL_az00_883 = CAR(BgL_ll3334z00_873);
															{	/* Inline/simple.scm 50 */
																bool_t BgL_testz00_1393;

																if (BGl_iszd2azf3z21zz__objectz00(BgL_az00_883,
																		BGl_closurez00zzast_nodez00))
																	{	/* Inline/simple.scm 51 */
																		bool_t BgL_testz00_1396;

																		{	/* Inline/simple.scm 51 */
																			obj_t BgL_auxz00_1397;

																			{
																				BgL_variablez00_bglt BgL_auxz00_1398;

																				BgL_auxz00_1398 =
																					(BgL_variablez00_bglt) (BgL_fz00_882);
																				BgL_auxz00_1397 =
																					(((BgL_variablez00_bglt)
																						CREF(BgL_auxz00_1398))->
																					BgL_accessz00);
																			}
																			BgL_testz00_1396 =
																				(BgL_auxz00_1397 ==
																				CNST_TABLE_REF(((long) 0)));
																		}
																		if (BgL_testz00_1396)
																			{	/* Inline/simple.scm 52 */
																				bool_t BgL__ortest_3324z00_891;

																				{	/* Inline/simple.scm 52 */
																					BgL_typez00_bglt BgL_arg3413z00_895;

																					{
																						BgL_variablez00_bglt
																							BgL_auxz00_1403;
																						BgL_auxz00_1403 =
																							(BgL_variablez00_bglt)
																							(BgL_fz00_882);
																						BgL_arg3413z00_895 =
																							(((BgL_variablez00_bglt)
																								CREF(BgL_auxz00_1403))->
																							BgL_typez00);
																					}
																					BgL__ortest_3324z00_891 =
																						(
																						(obj_t) (BgL_arg3413z00_895) ==
																						BGl_za2procedureza2z00zztype_cachez00);
																				}
																				if (BgL__ortest_3324z00_891)
																					{	/* Inline/simple.scm 52 */
																						BgL_testz00_1393 =
																							BgL__ortest_3324z00_891;
																					}
																				else
																					{	/* Inline/simple.scm 53 */
																						bool_t BgL__ortest_3325z00_892;

																						{	/* Inline/simple.scm 53 */
																							BgL_typez00_bglt
																								BgL_arg3412z00_894;
																							{
																								BgL_variablez00_bglt
																									BgL_auxz00_1409;
																								BgL_auxz00_1409 =
																									(BgL_variablez00_bglt)
																									(BgL_fz00_882);
																								BgL_arg3412z00_894 =
																									(((BgL_variablez00_bglt)
																										CREF(BgL_auxz00_1409))->
																									BgL_typez00);
																							}
																							BgL__ortest_3325z00_892 =
																								(
																								(obj_t) (BgL_arg3412z00_894) ==
																								BGl_za2_za2z00zztype_cachez00);
																						}
																						if (BgL__ortest_3325z00_892)
																							{	/* Inline/simple.scm 53 */
																								BgL_testz00_1393 =
																									BgL__ortest_3325z00_892;
																							}
																						else
																							{	/* Inline/simple.scm 54 */
																								BgL_typez00_bglt
																									BgL_arg3411z00_893;
																								{
																									BgL_variablez00_bglt
																										BgL_auxz00_1415;
																									BgL_auxz00_1415 =
																										(BgL_variablez00_bglt)
																										(BgL_fz00_882);
																									BgL_arg3411z00_893 =
																										(((BgL_variablez00_bglt)
																											CREF(BgL_auxz00_1415))->
																										BgL_typez00);
																								}
																								BgL_testz00_1393 =
																									(
																									(obj_t) (BgL_arg3411z00_893)
																									==
																									BGl_za2objza2z00zztype_cachez00);
																							}
																					}
																			}
																		else
																			{	/* Inline/simple.scm 51 */
																				BgL_testz00_1393 = ((bool_t) 0);
																			}
																	}
																else
																	{	/* Inline/simple.scm 50 */
																		BgL_testz00_1393 = ((bool_t) 0);
																	}
																if (BgL_testz00_1393)
																	{	/* Inline/simple.scm 59 */
																		BgL_varz00_bglt BgL_obj2155z00_1295;

																		BgL_obj2155z00_1295 =
																			(BgL_varz00_bglt) (
																			(BgL_closurez00_bglt) (BgL_az00_883));
																		BgL_arg3404z00_880 =
																			(obj_t) (
																			(((BgL_varz00_bglt)
																					CREF(BgL_obj2155z00_1295))->
																				BgL_variablez00));
																	}
																else
																	{	/* Inline/simple.scm 62 */
																		BgL_svarz00_bglt BgL_arg3407z00_885;

																		{	/* Inline/simple.scm 62 */
																			BgL_svarz00_bglt
																				BgL_duplicated3326z00_886;
																			{	/* Inline/simple.scm 62 */
																				BgL_variablez00_bglt
																					BgL_obj1611z00_1296;
																				BgL_obj1611z00_1296 =
																					(BgL_variablez00_bglt) (BgL_fz00_882);
																				BgL_duplicated3326z00_886 =
																					(BgL_svarz00_bglt) (((
																							(BgL_variablez00_bglt)
																							CREF(BgL_obj1611z00_1296))->
																						BgL_valuez00));
																			}
																			{	/* Inline/simple.scm 62 */
																				BgL_svarz00_bglt BgL_new3327z00_887;

																				{	/* Inline/simple.scm 62 */
																					obj_t BgL_arg3408z00_888;

																					BgL_arg3408z00_888 =
																						(((BgL_svarz00_bglt)
																							CREF(BgL_duplicated3326z00_886))->
																						BgL_locz00);
																					BgL_new3327z00_887 =
																						BGl_makezd2svarzd2zzast_varz00
																						(BgL_arg3408z00_888);
																				}
																				{	/* Inline/simple.scm 62 */

																					BgL_arg3407z00_885 =
																						BgL_new3327z00_887;
																				}
																			}
																		}
																		BgL_arg3404z00_880 =
																			(obj_t)
																			(BGl_clonezd2localzd2zzast_localz00(
																				(BgL_localz00_bglt) (BgL_fz00_882),
																				(BgL_valuez00_bglt)
																				(BgL_arg3407z00_885)));
																	}
															}
														}
														BgL_newtail3337z00_877 =
															MAKE_PAIR(BgL_arg3404z00_880, BNIL);
													}
													SET_CDR(BgL_tail3336z00_874, BgL_newtail3337z00_877);
													{
														obj_t BgL_tail3336z00_1439;

														obj_t BgL_ll3334z00_1437;

														obj_t BgL_ll3333z00_1435;

														BgL_ll3333z00_1435 = CDR(BgL_ll3333z00_872);
														BgL_ll3334z00_1437 = CDR(BgL_ll3334z00_873);
														BgL_tail3336z00_1439 = BgL_newtail3337z00_877;
														BgL_tail3336z00_874 = BgL_tail3336z00_1439;
														BgL_ll3334z00_873 = BgL_ll3334z00_1437;
														BgL_ll3333z00_872 = BgL_ll3333z00_1435;
														goto BgL_zc3anonymousza33400ze3z83_875;
													}
												}
										}
									}
								{	/* Inline/simple.scm 49 */
									obj_t BgL_bindingsz00_790;

									{
										obj_t BgL_reductorsz00_847;

										obj_t BgL_actualsz00_848;

										obj_t BgL_resz00_849;

										BgL_reductorsz00_847 = BgL_reductorsz00_789;
										BgL_actualsz00_848 = BgL_actualsz00_788;
										BgL_resz00_849 = BNIL;
									BgL_zc3anonymousza33383ze3z83_850:
										if (NULLP(BgL_actualsz00_848))
											{	/* Inline/simple.scm 69 */
												BgL_bindingsz00_790 = bgl_reverse_bang(BgL_resz00_849);
											}
										else
											{	/* Inline/simple.scm 71 */
												bool_t BgL_testz00_1443;

												{	/* Inline/simple.scm 71 */
													bool_t BgL_testz00_1444;

													{	/* Inline/simple.scm 71 */
														obj_t BgL_arg3398z00_865;

														BgL_arg3398z00_865 = CAR(BgL_actualsz00_848);
														BgL_testz00_1444 =
															BGl_iszd2azf3z21zz__objectz00(BgL_arg3398z00_865,
															BGl_closurez00zzast_nodez00);
													}
													if (BgL_testz00_1444)
														{	/* Inline/simple.scm 72 */
															obj_t BgL_auxz00_1447;

															{	/* Inline/simple.scm 72 */
																BgL_variablez00_bglt BgL_auxz00_1449;

																{	/* Inline/simple.scm 73 */
																	BgL_varz00_bglt BgL_obj2155z00_1309;

																	{	/* Inline/simple.scm 73 */
																		obj_t BgL_pairz00_1308;

																		BgL_pairz00_1308 = BgL_actualsz00_848;
																		BgL_obj2155z00_1309 =
																			(BgL_varz00_bglt) (CAR(BgL_pairz00_1308));
																	}
																	BgL_auxz00_1449 =
																		(((BgL_varz00_bglt)
																			CREF(BgL_obj2155z00_1309))->
																		BgL_variablez00);
																}
																BgL_auxz00_1447 = (obj_t) (BgL_auxz00_1449);
															}
															BgL_testz00_1443 =
																(CAR(BgL_reductorsz00_847) == BgL_auxz00_1447);
														}
													else
														{	/* Inline/simple.scm 71 */
															BgL_testz00_1443 = ((bool_t) 0);
														}
												}
												if (BgL_testz00_1443)
													{
														obj_t BgL_actualsz00_1457;

														obj_t BgL_reductorsz00_1455;

														BgL_reductorsz00_1455 = CDR(BgL_reductorsz00_847);
														BgL_actualsz00_1457 = CDR(BgL_actualsz00_848);
														BgL_actualsz00_848 = BgL_actualsz00_1457;
														BgL_reductorsz00_847 = BgL_reductorsz00_1455;
														goto BgL_zc3anonymousza33383ze3z83_850;
													}
												else
													{	/* Inline/simple.scm 78 */
														obj_t BgL_arg3388z00_855;

														obj_t BgL_arg3389z00_856;

														obj_t BgL_arg3390z00_857;

														BgL_arg3388z00_855 = CDR(BgL_reductorsz00_847);
														BgL_arg3389z00_856 = CDR(BgL_actualsz00_848);
														{	/* Inline/simple.scm 80 */
															obj_t BgL_arg3391z00_858;

															BgL_arg3391z00_858 =
																MAKE_PAIR(CAR(BgL_reductorsz00_847),
																CAR(BgL_actualsz00_848));
															BgL_arg3390z00_857 =
																MAKE_PAIR(BgL_arg3391z00_858, BgL_resz00_849);
														}
														{
															obj_t BgL_resz00_1467;

															obj_t BgL_actualsz00_1466;

															obj_t BgL_reductorsz00_1465;

															BgL_reductorsz00_1465 = BgL_arg3388z00_855;
															BgL_actualsz00_1466 = BgL_arg3389z00_856;
															BgL_resz00_1467 = BgL_arg3390z00_857;
															BgL_resz00_849 = BgL_resz00_1467;
															BgL_actualsz00_848 = BgL_actualsz00_1466;
															BgL_reductorsz00_847 = BgL_reductorsz00_1465;
															goto BgL_zc3anonymousza33383ze3z83_850;
														}
													}
											}
									}
									{	/* Inline/simple.scm 65 */
										obj_t BgL_bodyz00_791;

										{	/* Inline/simple.scm 83 */
											bool_t BgL_testz00_1468;

											{	/* Inline/simple.scm 83 */
												obj_t BgL_obj3269z00_1316;

												BgL_obj3269z00_1316 = (obj_t) (BgL_sfunz00_786);
												BgL_testz00_1468 =
													BGl_iszd2azf3z21zz__objectz00(BgL_obj3269z00_1316,
													BGl_isfunz00zzinline_inlinez00);
											}
											if (BgL_testz00_1468)
												{	/* Inline/simple.scm 84 */
													BgL_isfunz00_bglt BgL_obj3270z00_1317;

													BgL_obj3270z00_1317 =
														(BgL_isfunz00_bglt) (BgL_sfunz00_786);
													{	/* Inline/simple.scm 84 */
														BgL_nodez00_bglt BgL_auxz00_1472;

														{
															obj_t BgL_auxz00_1473;

															{	/* Inline/simple.scm 84 */
																BgL_objectz00_bglt BgL_auxz00_1474;

																BgL_auxz00_1474 =
																	(BgL_objectz00_bglt) (BgL_obj3270z00_1317);
																BgL_auxz00_1473 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_1474);
															}
															BgL_auxz00_1472 =
																(((BgL_isfunz00_bglt) CREF(BgL_auxz00_1473))->
																BgL_originalzd2bodyzd2);
														}
														BgL_bodyz00_791 = (obj_t) (BgL_auxz00_1472);
													}
												}
											else
												{
													BgL_sfunz00_bglt BgL_auxz00_1479;

													BgL_auxz00_1479 =
														(BgL_sfunz00_bglt) (BgL_sfunz00_786);
													BgL_bodyz00_791 =
														(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1479))->
														BgL_bodyz00);
												}
										}
										{	/* Inline/simple.scm 86 */
											obj_t BgL_newzd2kfactorzd2_793;

											BgL_newzd2kfactorzd2_793 =
												PROCEDURE_ENTRY
												(BGl_za2inliningzd2reducezd2kfactorza2z00zzengine_paramz00)
												(BGl_za2inliningzd2reducezd2kfactorza2z00zzengine_paramz00,
												BINT(BgL_kfactorz00_2), BEOA);
											{	/* Inline/simple.scm 87 */
												obj_t BgL_locz00_794;

												BgL_locz00_794 =
													(((BgL_nodez00_bglt) CREF(BgL_nodez00_1))->
													BgL_locz00);
												{	/* Inline/simple.scm 88 */
													BgL_typez00_bglt BgL_typez00_795;

													BgL_typez00_795 =
														(((BgL_variablez00_bglt) CREF(BgL_calleez00_785))->
														BgL_typez00);
													{	/* Inline/simple.scm 89 */

														{	/* Inline/simple.scm 91 */
															bool_t BgL_testz00_1487;

															{	/* Inline/simple.scm 91 */
																obj_t BgL_auxz00_1488;

																{	/* Inline/simple.scm 91 */
																	obj_t BgL_auxz00_1489;

																	{
																		BgL_sfunz00_bglt BgL_auxz00_1490;

																		BgL_auxz00_1490 =
																			(BgL_sfunz00_bglt) (BgL_sfunz00_786);
																		BgL_auxz00_1489 =
																			(((BgL_sfunz00_bglt)
																				CREF(BgL_auxz00_1490))->BgL_classz00);
																	}
																	BgL_auxz00_1488 =
																		BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																		(BgL_auxz00_1489,
																		CNST_TABLE_REF(((long) 1)));
																}
																BgL_testz00_1487 = CBOOL(BgL_auxz00_1488);
															}
															if (BgL_testz00_1487)
																{	/* Inline/simple.scm 91 */
																	BFALSE;
																}
															else
																{	/* Inline/simple.scm 91 */
																	if (BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BINT((
																					(long) 3)),
																			BGl_za2verboseza2z00zzengine_paramz00))
																		{	/* Inline/simple.scm 92 */
																			obj_t BgL_arg3346z00_800;

																			obj_t BgL_arg3348z00_802;

																			BgL_arg3346z00_800 =
																				BGl_shapez00zztools_shapez00(
																				(obj_t) (BgL_calleez00_785));
																			BgL_arg3348z00_802 =
																				BGl_currentzd2functionzd2zztools_errorz00
																				();
																			{	/* Inline/simple.scm 92 */
																				obj_t BgL_list3350z00_804;

																				{	/* Inline/simple.scm 92 */
																					obj_t BgL_arg3351z00_805;

																					{	/* Inline/simple.scm 92 */
																						obj_t BgL_arg3352z00_806;

																						{	/* Inline/simple.scm 92 */
																							obj_t BgL_arg3353z00_807;

																							{	/* Inline/simple.scm 92 */
																								obj_t BgL_arg3354z00_808;

																								{	/* Inline/simple.scm 92 */
																									obj_t BgL_arg3355z00_809;

																									{	/* Inline/simple.scm 92 */
																										obj_t BgL_arg3356z00_810;

																										{	/* Inline/simple.scm 92 */
																											obj_t BgL_arg3357z00_811;

																											BgL_arg3357z00_811 =
																												MAKE_PAIR(BCHAR((
																														(unsigned char)
																														'\n')), BNIL);
																											BgL_arg3356z00_810 =
																												MAKE_PAIR(BCHAR((
																														(unsigned char)
																														')')),
																												BgL_arg3357z00_811);
																										}
																										BgL_arg3355z00_809 =
																											MAKE_PAIR(BgL_msgz00_4,
																											BgL_arg3356z00_810);
																									}
																									BgL_arg3354z00_808 =
																										MAKE_PAIR
																										(BGl_string3469z00zzinline_simplez00,
																										BgL_arg3355z00_809);
																								}
																								BgL_arg3353z00_807 =
																									MAKE_PAIR(BgL_arg3348z00_802,
																									BgL_arg3354z00_808);
																							}
																							BgL_arg3352z00_806 =
																								MAKE_PAIR
																								(BGl_string3470z00zzinline_simplez00,
																								BgL_arg3353z00_807);
																						}
																						BgL_arg3351z00_805 =
																							MAKE_PAIR(BgL_arg3346z00_800,
																							BgL_arg3352z00_806);
																					}
																					BgL_list3350z00_804 =
																						MAKE_PAIR
																						(BGl_string3471z00zzinline_simplez00,
																						BgL_arg3351z00_805);
																				}
																				BGl_verbosez00zztools_speekz00(BINT((
																							(long) 3)), BgL_list3350z00_804);
																		}}
																	else
																		{	/* Inline/simple.scm 92 */
																			BUNSPEC;
																		}
																}
														}
														{	/* Inline/simple.scm 103 */
															BgL_nodez00_bglt BgL_alphazd2bodyzd2_814;

															BgL_alphazd2bodyzd2_814 =
																BGl_alphatiza7eza7zzast_alphatiza7eza7
																(BgL_formalsz00_787, BgL_reductorsz00_789,
																BgL_locz00_794,
																(BgL_nodez00_bglt) (BgL_bodyz00_791));
															BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00
																(BgL_alphazd2bodyzd2_814);
															{	/* Inline/simple.scm 107 */
																BgL_letzd2varzd2_bglt BgL_inlinezd2bodyzd2_815;

																{	/* Inline/simple.scm 110 */
																	bool_t BgL_arg3378z00_840;

																	BgL_nodez00_bglt BgL_arg3380z00_842;

																	BgL_arg3378z00_840 =
																		BGl_sidezd2effectzf3z21zzeffect_effectz00
																		(BgL_alphazd2bodyzd2_814);
																	{	/* Inline/simple.scm 114 */
																		obj_t BgL_arg3381z00_843;

																		BgL_arg3381z00_843 =
																			MAKE_PAIR(
																			(obj_t) (BgL_calleez00_785),
																			BgL_stackz00_3);
																		BgL_arg3380z00_842 =
																			BGl_inlinezd2nodezd2zzinline_inlinez00
																			(BgL_alphazd2bodyzd2_814,
																			(long) CINT(BgL_newzd2kfactorzd2_793),
																			BgL_arg3381z00_843);
																	}
																	BgL_inlinezd2bodyzd2_815 =
																		BGl_makezd2letzd2varz00zzast_nodez00
																		(BgL_locz00_794, BgL_typez00_795,
																		BBOOL(BgL_arg3378z00_840),
																		BINT(((long) -1)), BgL_bindingsz00_790,
																		BgL_arg3380z00_842, ((bool_t) 1));
																}
																{
																	obj_t BgL_ll3339z00_817;

																	obj_t BgL_ll3340z00_818;

																	BgL_ll3339z00_817 = BgL_reductorsz00_789;
																	BgL_ll3340z00_818 = BgL_formalsz00_787;
																BgL_zc3anonymousza33360ze3z83_819:
																	if (NULLP(BgL_ll3339z00_817))
																		{	/* Inline/simple.scm 115 */
																			((bool_t) 1);
																		}
																	else
																		{	/* Inline/simple.scm 115 */
																			{	/* Inline/simple.scm 116 */
																				obj_t BgL_reductorz00_821;

																				obj_t BgL_formalz00_822;

																				BgL_reductorz00_821 =
																					CAR(BgL_ll3339z00_817);
																				BgL_formalz00_822 =
																					CAR(BgL_ll3340z00_818);
																				if (BGl_iszd2azf3z21zz__objectz00
																					(BgL_reductorz00_821,
																						BGl_localz00zzast_varz00))
																					{	/* Inline/simple.scm 117 */
																						bool_t BgL_arg3363z00_824;

																						{
																							BgL_localz00_bglt BgL_auxz00_1531;

																							BgL_auxz00_1531 =
																								(BgL_localz00_bglt)
																								(BgL_formalz00_822);
																							BgL_arg3363z00_824 =
																								(((BgL_localz00_bglt)
																									CREF(BgL_auxz00_1531))->
																								BgL_userzf3zf3);
																						}
																						{
																							BgL_localz00_bglt BgL_auxz00_1534;

																							BgL_auxz00_1534 =
																								(BgL_localz00_bglt)
																								(BgL_reductorz00_821);
																							((((BgL_localz00_bglt)
																										CREF(BgL_auxz00_1534))->
																									BgL_userzf3zf3) =
																								((bool_t) BgL_arg3363z00_824),
																								BUNSPEC);
																						}
																					}
																				else
																					{	/* Inline/simple.scm 116 */
																						BFALSE;
																					}
																			}
																			{
																				obj_t BgL_ll3340z00_1539;

																				obj_t BgL_ll3339z00_1537;

																				BgL_ll3339z00_1537 =
																					CDR(BgL_ll3339z00_817);
																				BgL_ll3340z00_1539 =
																					CDR(BgL_ll3340z00_818);
																				BgL_ll3340z00_818 = BgL_ll3340z00_1539;
																				BgL_ll3339z00_817 = BgL_ll3339z00_1537;
																				goto BgL_zc3anonymousza33360ze3z83_819;
																			}
																		}
																}
																{	/* Inline/simple.scm 124 */
																	bool_t BgL_testz00_1541;

																	if (
																		((obj_t) (BgL_typez00_795) ==
																			BGl_za2_za2z00zztype_cachez00))
																		{	/* Inline/simple.scm 124 */
																			BgL_testz00_1541 = ((bool_t) 1);
																		}
																	else
																		{	/* Inline/simple.scm 124 */
																			if (
																				((obj_t) (BgL_typez00_795) ==
																					BGl_za2objza2z00zztype_cachez00))
																				{	/* Inline/simple.scm 125 */
																					BgL_testz00_1541 = ((bool_t) 1);
																				}
																			else
																				{	/* Inline/simple.scm 125 */
																					BgL_testz00_1541 =
																						(
																						(obj_t) (BgL_typez00_795) ==
																						(obj_t) (
																							(((BgL_nodez00_bglt)
																									CREF
																									(BgL_alphazd2bodyzd2_814))->
																								BgL_typez00)));
																				}
																		}
																	if (BgL_testz00_1541)
																		{	/* Inline/simple.scm 124 */
																			return
																				(BgL_nodez00_bglt)
																				(BgL_inlinezd2bodyzd2_815);
																		}
																	else
																		{	/* Inline/simple.scm 128 */
																			BgL_localz00_bglt BgL_varz00_829;

																			BgL_varz00_829 =
																				BGl_makezd2localzd2svarz00zzast_localz00
																				(BGl_gensymz00zz__r4_symbols_6_4z00
																				(CNST_TABLE_REF(((long) 2))),
																				BgL_typez00_795);
																			{	/* Inline/simple.scm 132 */
																				bool_t BgL_arg3367z00_830;

																				obj_t BgL_arg3369z00_832;

																				BgL_varz00_bglt BgL_arg3371z00_833;

																				BgL_arg3367z00_830 =
																					BGl_sidezd2effectzf3z21zzeffect_effectz00
																					((BgL_nodez00_bglt)
																					(BgL_inlinezd2bodyzd2_815));
																				{	/* Inline/simple.scm 133 */
																					obj_t BgL_arg3372z00_834;

																					BgL_arg3372z00_834 =
																						MAKE_PAIR(
																						(obj_t) (BgL_varz00_829),
																						(obj_t) (BgL_inlinezd2bodyzd2_815));
																					{	/* Inline/simple.scm 133 */
																						obj_t BgL_list3373z00_835;

																						BgL_list3373z00_835 =
																							MAKE_PAIR(BgL_arg3372z00_834,
																							BNIL);
																						BgL_arg3369z00_832 =
																							BgL_list3373z00_835;
																				}}
																				BgL_arg3371z00_833 =
																					BGl_makezd2varzd2zzast_nodez00
																					(BgL_locz00_794, BgL_typez00_795,
																					(BgL_variablez00_bglt)
																					(BgL_varz00_829));
																				return (BgL_nodez00_bglt)
																					(BGl_makezd2letzd2varz00zzast_nodez00
																					(BgL_locz00_794, BgL_typez00_795,
																						BBOOL(BgL_arg3367z00_830),
																						BINT(((long) -1)),
																						BgL_arg3369z00_832,
																						(BgL_nodez00_bglt)
																						(BgL_arg3371z00_833),
																						((bool_t) 1)));
		}}}}}}}}}}}}}}}}}
	}



/* _inline-app-simple */
	obj_t BGl__inlinezd2appzd2simplez00zzinline_simplez00(obj_t BgL_envz00_1335,
		obj_t BgL_nodez00_1336, obj_t BgL_kfactorz00_1337, obj_t BgL_stackz00_1338,
		obj_t BgL_msgz00_1339)
	{
		AN_OBJECT;
		{	/* Inline/simple.scm 42 */
			return
				(obj_t) (BGl_inlinezd2appzd2simplez00zzinline_simplez00(
					(BgL_nodez00_bglt) (BgL_nodez00_1336),
					(long) CINT(BgL_kfactorz00_1337), BgL_stackz00_1338,
					BgL_msgz00_1339));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzinline_simplez00()
	{
		AN_OBJECT;
		{	/* Inline/simple.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzinline_simplez00()
	{
		AN_OBJECT;
		{	/* Inline/simple.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzinline_simplez00()
	{
		AN_OBJECT;
		{	/* Inline/simple.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3472z00zzinline_simplez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3472z00zzinline_simplez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3472z00zzinline_simplez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3472z00zzinline_simplez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3472z00zzinline_simplez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3472z00zzinline_simplez00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string3472z00zzinline_simplez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3472z00zzinline_simplez00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3472z00zzinline_simplez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3472z00zzinline_simplez00));
			BGl_modulezd2initializa7ationz75zzinline_inlinez00(((long) 326457085),
				BSTRING_TO_STRING(BGl_string3472z00zzinline_simplez00));
			BGl_modulezd2initializa7ationz75zzinline_siza7eza7(((long) 405067005),
				BSTRING_TO_STRING(BGl_string3472z00zzinline_simplez00));
			BGl_modulezd2initializa7ationz75zzast_alphatiza7eza7(((long) 509694479),
				BSTRING_TO_STRING(BGl_string3472z00zzinline_simplez00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string3472z00zzinline_simplez00));
			BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 470955713),
				BSTRING_TO_STRING(BGl_string3472z00zzinline_simplez00));
			return
				BGl_modulezd2initializa7ationz75zzeffect_spreadz00(((long) 476444243),
				BSTRING_TO_STRING(BGl_string3472z00zzinline_simplez00));
		}
	}

#ifdef __cplusplus
}
#endif
