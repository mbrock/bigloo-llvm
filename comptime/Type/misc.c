/*===========================================================================*/
/*   (Type/misc.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Type/misc.scm)*/
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


	extern obj_t BGl_za2pairzd2nilza2zd2zztype_cachez00;
	static obj_t BGl__typezd2disjointzf3z21zztype_miscz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztype_miscz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_coercionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl__typezd2lesszd2specificzf3zf3zztype_miscz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zztype_miscz00();
	static obj_t BGl_requirezd2initializa7ationz75zztype_miscz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zztype_miscz00();
	BGL_EXPORTED_DECL bool_t
		BGl_typezd2disjointzf3z21zztype_miscz00(BgL_typez00_bglt, BgL_typez00_bglt);
	extern obj_t BGl_findzd2coercerzd2zztype_coercionz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_importedzd2moduleszd2initz00zztype_miscz00();
	extern obj_t BGl_za2bnilza2z00zztype_cachez00;
	extern obj_t BGl_za2epairza2z00zztype_cachez00;
	BGL_EXPORTED_DECL bool_t
		BGl_typezd2lesszd2specificzf3zf3zztype_miscz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2pairza2z00zztype_cachez00;
	static obj_t BGl_libraryzd2moduleszd2initz00zztype_miscz00();
	extern bool_t BGl_typezd2subclasszf3z21zzobject_classz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_typezd2lesszd2specificzf3zd2envz21zztype_miscz00,
		BgL_bgl__typeza7d2lessza7d2s3585z00,
		BGl__typezd2lesszd2specificzf3zf3zztype_miscz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2disjointzf3zd2envzf3zztype_miscz00,
		BgL_bgl__typeza7d2disjoint3586za7, BGl__typezd2disjointzf3z21zztype_miscz00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3584z00zztype_miscz00,
		BgL_bgl_string3584za700za7za7t3587za7, "type_misc", 9);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztype_miscz00(long
		BgL_checksumz00_1248, char *BgL_fromz00_1249)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztype_miscz00))
				{
					BGl_requirezd2initializa7ationz75zztype_miscz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zztype_miscz00();
					BGl_importedzd2moduleszd2initz00zztype_miscz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztype_miscz00()
	{
		AN_OBJECT;
		{	/* Type/misc.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "type_misc");
			return BUNSPEC;
		}
	}



/* type-less-specific? */
	BGL_EXPORTED_DEF bool_t
		BGl_typezd2lesszd2specificzf3zf3zztype_miscz00(BgL_typez00_bglt BgL_t1z00_1,
		BgL_typez00_bglt BgL_t2z00_2)
	{
		AN_OBJECT;
		{	/* Type/misc.scm 32 */
			if (((obj_t) (BgL_t1z00_1) == (obj_t) (BgL_t2z00_2)))
				{	/* Type/misc.scm 34 */
					return ((bool_t) 1);
				}
			else
				{	/* Type/misc.scm 36 */
					bool_t BgL_testz00_1260;

					if (BGl_bigloozd2typezf3z21zztype_typez00(BgL_t1z00_1))
						{	/* Type/misc.scm 36 */
							if (BGl_bigloozd2typezf3z21zztype_typez00(BgL_t2z00_2))
								{	/* Type/misc.scm 36 */
									BgL_testz00_1260 = ((bool_t) 0);
								}
							else
								{	/* Type/misc.scm 36 */
									BgL_testz00_1260 = ((bool_t) 1);
								}
						}
					else
						{	/* Type/misc.scm 36 */
							BgL_testz00_1260 = ((bool_t) 1);
						}
					if (BgL_testz00_1260)
						{	/* Type/misc.scm 36 */
							return ((bool_t) 0);
						}
					else
						{	/* Type/misc.scm 36 */
							if (BGl_typezd2subclasszf3z21zzobject_classz00(BgL_t2z00_2,
									BgL_t1z00_1))
								{	/* Type/misc.scm 38 */
									return ((bool_t) 1);
								}
							else
								{	/* Type/misc.scm 38 */
									if (
										((obj_t) (BgL_t1z00_1) == BGl_za2objza2z00zztype_cachez00))
										{	/* Type/misc.scm 40 */
											return ((bool_t) 1);
										}
									else
										{	/* Type/misc.scm 42 */
											bool_t BgL_testz00_1270;

											if (
												((obj_t) (BgL_t1z00_1) ==
													BGl_za2pairzd2nilza2zd2zztype_cachez00))
												{	/* Type/misc.scm 43 */
													bool_t BgL__ortest_3513z00_833;

													BgL__ortest_3513z00_833 =
														(
														(obj_t) (BgL_t2z00_2) ==
														BGl_za2pairza2z00zztype_cachez00);
													if (BgL__ortest_3513z00_833)
														{	/* Type/misc.scm 43 */
															BgL_testz00_1270 = BgL__ortest_3513z00_833;
														}
													else
														{	/* Type/misc.scm 43 */
															bool_t BgL__ortest_3514z00_834;

															BgL__ortest_3514z00_834 =
																(
																(obj_t) (BgL_t2z00_2) ==
																BGl_za2epairza2z00zztype_cachez00);
															if (BgL__ortest_3514z00_834)
																{	/* Type/misc.scm 43 */
																	BgL_testz00_1270 = BgL__ortest_3514z00_834;
																}
															else
																{	/* Type/misc.scm 43 */
																	BgL_testz00_1270 =
																		(
																		(obj_t) (BgL_t2z00_2) ==
																		BGl_za2bnilza2z00zztype_cachez00);
																}
														}
												}
											else
												{	/* Type/misc.scm 42 */
													BgL_testz00_1270 = ((bool_t) 0);
												}
											if (BgL_testz00_1270)
												{	/* Type/misc.scm 42 */
													return ((bool_t) 1);
												}
											else
												{	/* Type/misc.scm 42 */
													return ((bool_t) 0);
												}
										}
								}
						}
				}
		}
	}



/* _type-less-specific? */
	obj_t BGl__typezd2lesszd2specificzf3zf3zztype_miscz00(obj_t BgL_envz00_1242,
		obj_t BgL_t1z00_1243, obj_t BgL_t2z00_1244)
	{
		AN_OBJECT;
		{	/* Type/misc.scm 32 */
			return
				BBOOL(BGl_typezd2lesszd2specificzf3zf3zztype_miscz00(
					(BgL_typez00_bglt) (BgL_t1z00_1243),
					(BgL_typez00_bglt) (BgL_t2z00_1244)));
		}
	}



/* type-disjoint? */
	BGL_EXPORTED_DEF bool_t
		BGl_typezd2disjointzf3z21zztype_miscz00(BgL_typez00_bglt BgL_t1z00_3,
		BgL_typez00_bglt BgL_t2z00_4)
	{
		AN_OBJECT;
		{	/* Type/misc.scm 53 */
			if (((obj_t) (BgL_t1z00_3) == (obj_t) (BgL_t2z00_4)))
				{	/* Type/misc.scm 55 */
					return ((bool_t) 0);
				}
			else
				{	/* Type/misc.scm 57 */
					bool_t BgL_testz00_1290;

					{	/* Type/misc.scm 57 */
						bool_t BgL_testz00_1291;

						if (BGl_bigloozd2typezf3z21zztype_typez00(BgL_t1z00_3))
							{	/* Type/misc.scm 57 */
								if (BGl_bigloozd2typezf3z21zztype_typez00(BgL_t2z00_4))
									{	/* Type/misc.scm 57 */
										BgL_testz00_1291 = ((bool_t) 0);
									}
								else
									{	/* Type/misc.scm 57 */
										BgL_testz00_1291 = ((bool_t) 1);
									}
							}
						else
							{	/* Type/misc.scm 57 */
								BgL_testz00_1291 = ((bool_t) 0);
							}
						if (BgL_testz00_1291)
							{	/* Type/misc.scm 57 */
								BgL_testz00_1290 = ((bool_t) 1);
							}
						else
							{	/* Type/misc.scm 58 */
								bool_t BgL_testz00_1296;

								if (BGl_bigloozd2typezf3z21zztype_typez00(BgL_t1z00_3))
									{	/* Type/misc.scm 58 */
										BgL_testz00_1296 = ((bool_t) 0);
									}
								else
									{	/* Type/misc.scm 58 */
										BgL_testz00_1296 = ((bool_t) 1);
									}
								if (BgL_testz00_1296)
									{	/* Type/misc.scm 58 */
										BgL_testz00_1290 =
											BGl_bigloozd2typezf3z21zztype_typez00(BgL_t2z00_4);
									}
								else
									{	/* Type/misc.scm 58 */
										BgL_testz00_1290 = ((bool_t) 0);
									}
							}
					}
					if (BgL_testz00_1290)
						{	/* Type/misc.scm 61 */
							bool_t BgL_testz00_1300;

							if (CBOOL(BGl_findzd2coercerzd2zztype_coercionz00(BgL_t1z00_3,
										BgL_t2z00_4)))
								{	/* Type/misc.scm 61 */
									BgL_testz00_1300 = ((bool_t) 1);
								}
							else
								{	/* Type/misc.scm 61 */
									BgL_testz00_1300 =
										CBOOL(BGl_findzd2coercerzd2zztype_coercionz00(BgL_t2z00_4,
											BgL_t1z00_3));
								}
							if (BgL_testz00_1300)
								{	/* Type/misc.scm 61 */
									return ((bool_t) 0);
								}
							else
								{	/* Type/misc.scm 61 */
									return ((bool_t) 1);
								}
						}
					else
						{	/* Type/misc.scm 62 */
							bool_t BgL_testz00_1306;

							if (BGl_typezd2lesszd2specificzf3zf3zztype_miscz00(BgL_t1z00_3,
									BgL_t2z00_4))
								{	/* Type/misc.scm 62 */
									BgL_testz00_1306 = ((bool_t) 1);
								}
							else
								{	/* Type/misc.scm 62 */
									BgL_testz00_1306 =
										BGl_typezd2lesszd2specificzf3zf3zztype_miscz00(BgL_t2z00_4,
										BgL_t1z00_3);
								}
							if (BgL_testz00_1306)
								{	/* Type/misc.scm 62 */
									return ((bool_t) 0);
								}
							else
								{	/* Type/misc.scm 62 */
									return ((bool_t) 1);
								}
						}
				}
		}
	}



/* _type-disjoint? */
	obj_t BGl__typezd2disjointzf3z21zztype_miscz00(obj_t BgL_envz00_1245,
		obj_t BgL_t1z00_1246, obj_t BgL_t2z00_1247)
	{
		AN_OBJECT;
		{	/* Type/misc.scm 53 */
			return
				BBOOL(BGl_typezd2disjointzf3z21zztype_miscz00(
					(BgL_typez00_bglt) (BgL_t1z00_1246),
					(BgL_typez00_bglt) (BgL_t2z00_1247)));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztype_miscz00()
	{
		AN_OBJECT;
		{	/* Type/misc.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztype_miscz00()
	{
		AN_OBJECT;
		{	/* Type/misc.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztype_miscz00()
	{
		AN_OBJECT;
		{	/* Type/misc.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3584z00zztype_miscz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3584z00zztype_miscz00));
			BGl_modulezd2initializa7ationz75zztype_coercionz00(((long) 451733024),
				BSTRING_TO_STRING(BGl_string3584z00zztype_miscz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string3584z00zztype_miscz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3584z00zztype_miscz00));
			return
				BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3584z00zztype_miscz00));
		}
	}

#ifdef __cplusplus
}
#endif
