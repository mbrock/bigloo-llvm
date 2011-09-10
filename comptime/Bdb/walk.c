/*===========================================================================*/
/*   (Bdb/walk.scm)                                                          */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Bdb/walk.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzbdb_walkz00();
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzbdb_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbdb_initializa7eza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzbdb_walkz00();
	BGL_EXPORTED_DECL obj_t BGl_bdbzd2walkz12zc0zzbdb_walkz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbdb_walkz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzbdb_walkz00();
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzbdb_walkz00();
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	static obj_t BGl__bdbzd2walkz12zc0zzbdb_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_initializa7ezd2astz75zzbdb_initializa7eza7();
	static obj_t BGl_libraryzd2moduleszd2initz00zzbdb_walkz00();
	static obj_t __cnst[1];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bdbzd2walkz12zd2envz12zzbdb_walkz00,
		BgL_bgl__bdbza7d2walkza712za7c3344za7, BGl__bdbzd2walkz12zc0zzbdb_walkz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3332z00zzbdb_walkz00,
		BgL_bgl_string3332za700za7za7b3345za7, "Bdb", 3);
	      DEFINE_STRING(BGl_string3333z00zzbdb_walkz00,
		BgL_bgl_string3333za700za7za7b3346za7, "   . ", 5);
	      DEFINE_STRING(BGl_string3334z00zzbdb_walkz00,
		BgL_bgl_string3334za700za7za7b3347za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string3335z00zzbdb_walkz00,
		BgL_bgl_string3335za700za7za7b3348za7, " error", 6);
	      DEFINE_STRING(BGl_string3336z00zzbdb_walkz00,
		BgL_bgl_string3336za700za7za7b3349za7, "s", 1);
	      DEFINE_STRING(BGl_string3337z00zzbdb_walkz00,
		BgL_bgl_string3337za700za7za7b3350za7, "", 0);
	      DEFINE_STRING(BGl_string3338z00zzbdb_walkz00,
		BgL_bgl_string3338za700za7za7b3351za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string3340z00zzbdb_walkz00,
		BgL_bgl_string3340za700za7za7b3352za7, "bdb_walk", 8);
	      DEFINE_STRING(BGl_string3339z00zzbdb_walkz00,
		BgL_bgl_string3339za700za7za7b3353za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string3341z00zzbdb_walkz00,
		BgL_bgl_string3341za700za7za7b3354za7, "pass-started ", 13);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzbdb_walkz00(long
		BgL_checksumz00_1225, char *BgL_fromz00_1226)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbdb_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzbdb_walkz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzbdb_walkz00();
					BGl_cnstzd2initzd2zzbdb_walkz00();
					BGl_importedzd2moduleszd2initz00zzbdb_walkz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbdb_walkz00()
	{
		AN_OBJECT;
		{	/* Bdb/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "bdb_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"bdb_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "bdb_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"bdb_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"bdb_walk");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"bdb_walk");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbdb_walkz00()
	{
		AN_OBJECT;
		{	/* Bdb/walk.scm 15 */
			{	/* Bdb/walk.scm 15 */
				obj_t BgL_cportz00_1217;

				BgL_cportz00_1217 =
					bgl_open_input_string(BGl_string3341z00zzbdb_walkz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1218;

					BgL_iz00_1218 = ((long) 0);
				BgL_loopz00_1219:
					if ((BgL_iz00_1218 == ((long) -1)))
						{	/* Bdb/walk.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Bdb/walk.scm 15 */
							{	/* Bdb/walk.scm 15 */
								obj_t BgL_arg3343z00_1221;

								{	/* Bdb/walk.scm 15 */

									{	/* Bdb/walk.scm 15 */
										obj_t BgL_locationz00_1223;

										BgL_locationz00_1223 = BBOOL(((bool_t) 0));
										{	/* Bdb/walk.scm 15 */

											BgL_arg3343z00_1221 =
												BGl_readz00zz__readerz00(BgL_cportz00_1217,
												BgL_locationz00_1223);
										}
									}
								}
								{	/* Bdb/walk.scm 15 */
									int BgL_auxz00_1245;

									BgL_auxz00_1245 = (int) (BgL_iz00_1218);
									CNST_TABLE_SET(BgL_auxz00_1245, BgL_arg3343z00_1221);
							}}
							{	/* Bdb/walk.scm 15 */
								int BgL_auxz00_1224;

								BgL_auxz00_1224 = (int) ((BgL_iz00_1218 - ((long) 1)));
								{
									long BgL_iz00_1250;

									BgL_iz00_1250 = (long) (BgL_auxz00_1224);
									BgL_iz00_1218 = BgL_iz00_1250;
									goto BgL_loopz00_1219;
								}
							}
						}
				}
			}
		}
	}



/* bdb-walk! */
	BGL_EXPORTED_DEF obj_t BGl_bdbzd2walkz12zc0zzbdb_walkz00(obj_t
		BgL_globalsz00_1)
	{
		AN_OBJECT;
		{	/* Bdb/walk.scm 30 */
			{	/* Bdb/walk.scm 31 */
				obj_t BgL_list3251z00_774;

				{	/* Bdb/walk.scm 31 */
					obj_t BgL_arg3253z00_776;

					{	/* Bdb/walk.scm 31 */
						obj_t BgL_arg3255z00_778;

						BgL_arg3255z00_778 = MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
						BgL_arg3253z00_776 =
							MAKE_PAIR(BGl_string3332z00zzbdb_walkz00, BgL_arg3255z00_778);
					}
					BgL_list3251z00_774 =
						MAKE_PAIR(BGl_string3333z00zzbdb_walkz00, BgL_arg3253z00_776);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list3251z00_774);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string3332z00zzbdb_walkz00;
			{
				obj_t BgL_hooksz00_782;

				obj_t BgL_hnamesz00_783;

				BgL_hooksz00_782 = BNIL;
				BgL_hnamesz00_783 = BNIL;
			BgL_zc3anonymousza33256ze3z83_784:
				if (NULLP(BgL_hooksz00_782))
					{	/* Bdb/walk.scm 31 */
						CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Bdb/walk.scm 31 */
						bool_t BgL_testz00_1262;

						{	/* Bdb/walk.scm 31 */
							obj_t BgL_fun3264z00_792;

							BgL_fun3264z00_792 = CAR(BgL_hooksz00_782);
							BgL_testz00_1262 =
								CBOOL(PROCEDURE_ENTRY(BgL_fun3264z00_792) (BgL_fun3264z00_792,
									BEOA));
						}
						if (BgL_testz00_1262)
							{
								obj_t BgL_hnamesz00_1269;

								obj_t BgL_hooksz00_1267;

								BgL_hooksz00_1267 = CDR(BgL_hooksz00_782);
								BgL_hnamesz00_1269 = CDR(BgL_hnamesz00_783);
								BgL_hnamesz00_783 = BgL_hnamesz00_1269;
								BgL_hooksz00_782 = BgL_hooksz00_1267;
								goto BgL_zc3anonymousza33256ze3z83_784;
							}
						else
							{	/* Bdb/walk.scm 31 */
								BGl_internalzd2errorzd2zztools_errorz00
									(BGl_string3332z00zzbdb_walkz00,
									BGl_string3334z00zzbdb_walkz00, CAR(BgL_hnamesz00_783));
							}
					}
			}
			{	/* Bdb/walk.scm 32 */
				obj_t BgL_valuez00_795;

				BgL_valuez00_795 =
					bgl_append2(BGl_initializa7ezd2astz75zzbdb_initializa7eza7(),
					BgL_globalsz00_1);
				if (((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
						((long) 0)))
					{	/* Bdb/walk.scm 32 */
						{	/* Bdb/walk.scm 32 */
							obj_t BgL_port3250z00_797;

							{	/* Bdb/walk.scm 32 */
								obj_t BgL_res3330z00_1202;

								{	/* Bdb/walk.scm 32 */
									obj_t BgL_auxz00_1278;

									BgL_auxz00_1278 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res3330z00_1202 =
										BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1278);
								}
								BgL_port3250z00_797 = BgL_res3330z00_1202;
							}
							bgl_display_obj
								(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
								BgL_port3250z00_797);
							bgl_display_string(BGl_string3335z00zzbdb_walkz00,
								BgL_port3250z00_797);
							{	/* Bdb/walk.scm 32 */
								obj_t BgL_arg3267z00_798;

								{	/* Bdb/walk.scm 32 */
									bool_t BgL_testz00_1283;

									if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
										(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
										{	/* Bdb/walk.scm 32 */
											BgL_testz00_1283 =
												BGl_2ze3ze3zz__r4_numbers_6_5z00
												(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
												BINT(((long) 1)));
										}
									else
										{	/* Bdb/walk.scm 32 */
											BgL_testz00_1283 = ((bool_t) 0);
										}
									if (BgL_testz00_1283)
										{	/* Bdb/walk.scm 32 */
											BgL_arg3267z00_798 = BGl_string3336z00zzbdb_walkz00;
										}
									else
										{	/* Bdb/walk.scm 32 */
											BgL_arg3267z00_798 = BGl_string3337z00zzbdb_walkz00;
										}
								}
								bgl_display_obj(BgL_arg3267z00_798, BgL_port3250z00_797);
							}
							bgl_display_string(BGl_string3338z00zzbdb_walkz00,
								BgL_port3250z00_797);
							bgl_display_char(((unsigned char) '\n'), BgL_port3250z00_797);
						}
						{	/* Bdb/walk.scm 32 */
							obj_t BgL_list3270z00_801;

							BgL_list3270z00_801 = MAKE_PAIR(BINT(((long) -1)), BNIL);
							return BGl_exitz00zz__errorz00(BgL_list3270z00_801);
						}
					}
				else
					{
						obj_t BgL_hooksz00_805;

						obj_t BgL_hnamesz00_806;

						BgL_hooksz00_805 = BNIL;
						BgL_hnamesz00_806 = BNIL;
					BgL_zc3anonymousza33271ze3z83_807:
						if (NULLP(BgL_hooksz00_805))
							{	/* Bdb/walk.scm 32 */
								return BgL_valuez00_795;
							}
						else
							{	/* Bdb/walk.scm 32 */
								bool_t BgL_testz00_1296;

								{	/* Bdb/walk.scm 32 */
									obj_t BgL_fun3278z00_814;

									BgL_fun3278z00_814 = CAR(BgL_hooksz00_805);
									BgL_testz00_1296 =
										CBOOL(PROCEDURE_ENTRY(BgL_fun3278z00_814)
										(BgL_fun3278z00_814, BEOA));
								}
								if (BgL_testz00_1296)
									{
										obj_t BgL_hnamesz00_1303;

										obj_t BgL_hooksz00_1301;

										BgL_hooksz00_1301 = CDR(BgL_hooksz00_805);
										BgL_hnamesz00_1303 = CDR(BgL_hnamesz00_806);
										BgL_hnamesz00_806 = BgL_hnamesz00_1303;
										BgL_hooksz00_805 = BgL_hooksz00_1301;
										goto BgL_zc3anonymousza33271ze3z83_807;
									}
								else
									{	/* Bdb/walk.scm 32 */
										obj_t BgL_arg3277z00_813;

										BgL_arg3277z00_813 = CAR(BgL_hnamesz00_806);
										return
											BGl_internalzd2errorzd2zztools_errorz00
											(BGl_za2currentzd2passza2zd2zzengine_passz00,
											BGl_string3339z00zzbdb_walkz00, BgL_arg3277z00_813);
									}
							}
					}
			}
		}
	}



/* _bdb-walk! */
	obj_t BGl__bdbzd2walkz12zc0zzbdb_walkz00(obj_t BgL_envz00_1215,
		obj_t BgL_globalsz00_1216)
	{
		AN_OBJECT;
		{	/* Bdb/walk.scm 30 */
			return BGl_bdbzd2walkz12zc0zzbdb_walkz00(BgL_globalsz00_1216);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbdb_walkz00()
	{
		AN_OBJECT;
		{	/* Bdb/walk.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbdb_walkz00()
	{
		AN_OBJECT;
		{	/* Bdb/walk.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbdb_walkz00()
	{
		AN_OBJECT;
		{	/* Bdb/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3340z00zzbdb_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3340z00zzbdb_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string3340z00zzbdb_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3340z00zzbdb_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3340z00zzbdb_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3340z00zzbdb_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3340z00zzbdb_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3340z00zzbdb_walkz00));
			BGl_modulezd2initializa7ationz75zzast_removez00(((long) 52292466),
				BSTRING_TO_STRING(BGl_string3340z00zzbdb_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzbdb_initializa7eza7(((long)
					427318491), BSTRING_TO_STRING(BGl_string3340z00zzbdb_walkz00));
		}
	}

#ifdef __cplusplus
}
#endif
