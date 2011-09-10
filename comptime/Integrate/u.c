/*===========================================================================*/
/*   (Integrate/u.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Integrate/u.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
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

	typedef struct BgL_sfunzf2iinfozf2_bgl
	{
		obj_t BgL_ownerz00;
		obj_t BgL_freez00;
		obj_t BgL_boundz00;
		obj_t BgL_cfromz00;
		obj_t BgL_ctoz00;
		obj_t BgL_kz00;
		obj_t BgL_kza2za2;
		obj_t BgL_uz00;
		obj_t BgL_cnz00;
		obj_t BgL_ctz00;
		obj_t BgL_kontz00;
		bool_t BgL_gzf3zf3;
		obj_t BgL_lz00;
		obj_t BgL_ledz00;
		obj_t BgL_istampz00;
		obj_t BgL_globalz00;
		obj_t BgL_kapturedz00;
		obj_t BgL_tailzd2coercionzd2;
	}                      *BgL_sfunzf2iinfozf2_bglt;


	extern obj_t BGl_za2phiza2z00zzintegrate_az00;
	static obj_t BGl__Uz12z12zzintegrate_uz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzintegrate_uz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_az00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_infoz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT long bgl_list_length(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_Uz12z12zzintegrate_uz00();
	static obj_t BGl_methodzd2initzd2zzintegrate_uz00();
	static obj_t BGl_requirezd2initializa7ationz75zzintegrate_uz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzintegrate_uz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzintegrate_uz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_uz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_Uz12zd2envzc0zzintegrate_uz00,
		BgL_bgl__uza712za712za7za7integr3554z00, BGl__Uz12z12zzintegrate_uz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3553z00zzintegrate_uz00,
		BgL_bgl_string3553za700za7za7i3555za7, "integrate_u", 11);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzintegrate_uz00(long
		BgL_checksumz00_1311, char *BgL_fromz00_1312)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzintegrate_uz00))
				{
					BGl_requirezd2initializa7ationz75zzintegrate_uz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzintegrate_uz00();
					BGl_importedzd2moduleszd2initz00zzintegrate_uz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_uz00()
	{
		AN_OBJECT;
		{	/* Integrate/u.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"integrate_u");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "integrate_u");
			return BUNSPEC;
		}
	}



/* U! */
	BGL_EXPORTED_DEF obj_t BGl_Uz12z12zzintegrate_uz00()
	{
		AN_OBJECT;
		{	/* Integrate/u.scm 28 */
			{
				obj_t BgL_phiz00_884;

				BgL_phiz00_884 = BGl_za2phiza2z00zzintegrate_az00;
			BgL_zc3anonymousza33495ze3z83_885:
				if (NULLP(BgL_phiz00_884))
					{	/* Integrate/u.scm 30 */
						return BNIL;
					}
				else
					{	/* Integrate/u.scm 32 */
						obj_t BgL_pz00_887;

						BgL_pz00_887 = CAR(BgL_phiz00_884);
						{	/* Integrate/u.scm 32 */
							BgL_valuez00_bglt BgL_ifunz00_888;

							{
								BgL_variablez00_bglt BgL_auxz00_1323;

								BgL_auxz00_1323 = (BgL_variablez00_bglt) (BgL_pz00_887);
								BgL_ifunz00_888 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_1323))->
									BgL_valuez00);
							}
							{	/* Integrate/u.scm 33 */

								{	/* Integrate/u.scm 34 */
									bool_t BgL_arg3497z00_889;

									{	/* Integrate/u.scm 34 */
										long BgL_auxz00_1326;

										{	/* Integrate/u.scm 34 */
											obj_t BgL_auxz00_1327;

											{	/* Integrate/u.scm 34 */
												BgL_sfunzf2iinfozf2_bglt BgL_obj3410z00_1304;

												BgL_obj3410z00_1304 =
													(BgL_sfunzf2iinfozf2_bglt) (BgL_ifunz00_888);
												{
													obj_t BgL_auxz00_1329;

													{	/* Integrate/u.scm 34 */
														BgL_objectz00_bglt BgL_auxz00_1330;

														BgL_auxz00_1330 =
															(BgL_objectz00_bglt) (BgL_obj3410z00_1304);
														BgL_auxz00_1329 =
															BGL_OBJECT_WIDENING(BgL_auxz00_1330);
													}
													BgL_auxz00_1327 =
														(((BgL_sfunzf2iinfozf2_bglt)
															CREF(BgL_auxz00_1329))->BgL_kza2za2);
											}}
											BgL_auxz00_1326 = bgl_list_length(BgL_auxz00_1327);
										}
										BgL_arg3497z00_889 = (BgL_auxz00_1326 == ((long) 1));
									}
									{	/* Integrate/u.scm 34 */
										BgL_sfunzf2iinfozf2_bglt BgL_obj3415z00_1307;

										obj_t BgL_val3414z00_1308;

										BgL_obj3415z00_1307 =
											(BgL_sfunzf2iinfozf2_bglt) (BgL_ifunz00_888);
										BgL_val3414z00_1308 = BBOOL(BgL_arg3497z00_889);
										{
											obj_t BgL_auxz00_1338;

											{	/* Integrate/u.scm 34 */
												BgL_objectz00_bglt BgL_auxz00_1339;

												BgL_auxz00_1339 =
													(BgL_objectz00_bglt) (BgL_obj3415z00_1307);
												BgL_auxz00_1338 = BGL_OBJECT_WIDENING(BgL_auxz00_1339);
											}
											((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_1338))->
													BgL_uz00) = ((obj_t) BgL_val3414z00_1308), BUNSPEC);
								}}}
								{
									obj_t BgL_phiz00_1343;

									BgL_phiz00_1343 = CDR(BgL_phiz00_884);
									BgL_phiz00_884 = BgL_phiz00_1343;
									goto BgL_zc3anonymousza33495ze3z83_885;
								}
							}
						}
					}
			}
		}
	}



/* _U! */
	obj_t BGl__Uz12z12zzintegrate_uz00(obj_t BgL_envz00_1310)
	{
		AN_OBJECT;
		{	/* Integrate/u.scm 28 */
			return BGl_Uz12z12zzintegrate_uz00();
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzintegrate_uz00()
	{
		AN_OBJECT;
		{	/* Integrate/u.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzintegrate_uz00()
	{
		AN_OBJECT;
		{	/* Integrate/u.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzintegrate_uz00()
	{
		AN_OBJECT;
		{	/* Integrate/u.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3553z00zzintegrate_uz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3553z00zzintegrate_uz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3553z00zzintegrate_uz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3553z00zzintegrate_uz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3553z00zzintegrate_uz00));
			BGl_modulezd2initializa7ationz75zzintegrate_infoz00(((long) 0),
				BSTRING_TO_STRING(BGl_string3553z00zzintegrate_uz00));
			return
				BGl_modulezd2initializa7ationz75zzintegrate_az00(((long) 408271643),
				BSTRING_TO_STRING(BGl_string3553z00zzintegrate_uz00));
		}
	}

#ifdef __cplusplus
}
#endif
