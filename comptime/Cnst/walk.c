/*===========================================================================*/
/*   (Cnst/walk.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cnst/walk.scm)*/
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;


	static obj_t BGl__cnstzd2walkz12zc0zzcnst_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_za2oldzd2unsafezd2typeza2z00zzcnst_walkz00 = BUNSPEC;
	static obj_t BGl_za2oldzd2unsafezd2versionza2z00zzcnst_walkz00 = BUNSPEC;
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzcnst_walkz00();
	extern obj_t BGl_za2unsafezd2structza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcnst_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_initializa7eza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_allocz00(long, char *);
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
	static obj_t BGl_toplevelzd2initzd2zzcnst_walkz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_cnstz12z12zzcnst_nodez00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern obj_t BGl_za2unsafezd2rangeza2zd2zzengine_paramz00;
	static obj_t BGl_safez12z12zzcnst_walkz00();
	static obj_t BGl_methodzd2initzd2zzcnst_walkz00();
	static obj_t BGl__safez12z12zzcnst_walkz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcnst_walkz00 = BUNSPEC;
	extern obj_t BGl_za2unsafezd2arityza2zd2zzengine_paramz00;
	static obj_t BGl_genericzd2initzd2zzcnst_walkz00();
	static obj_t BGl_za2oldzd2unsafezd2rangeza2z00zzcnst_walkz00 = BUNSPEC;
	extern obj_t BGl_za2unsafezd2typeza2zd2zzengine_paramz00;
	extern obj_t BGl_za2unsafezd2versionza2zd2zzengine_paramz00;
	extern obj_t BGl_za2initzd2modeza2zd2zzengine_paramz00;
	static obj_t BGl_unsafez12z12zzcnst_walkz00();
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcnst_walkz00();
	BGL_EXPORTED_DECL obj_t BGl_cnstzd2walkz12zc0zzcnst_walkz00(obj_t);
	static obj_t BGl_za2oldzd2unsafezd2structza2z00zzcnst_walkz00 = BUNSPEC;
	static obj_t BGl_za2oldzd2unsafezd2arityza2z00zzcnst_walkz00 = BUNSPEC;
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_removezd2varzd2zzast_removez00(obj_t, obj_t);
	extern obj_t BGl_initializa7ezd2astz75zzcnst_initializa7eza7();
	static obj_t BGl__unsafez12z12zzcnst_walkz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcnst_walkz00();
	static obj_t __cnst[4];


	extern obj_t BGl_startzd2cnstzd2allocz12zd2envzc0zzcnst_allocz00;
	extern obj_t BGl_stopzd2cnstzd2allocz12zd2envzc0zzcnst_allocz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_unsafez12zd2envzc0zzcnst_walkz00,
		BgL_bgl__unsafeza712za712za7za7c3363z00, BGl__unsafez12z12zzcnst_walkz00,
		0L, BUNSPEC, 0);
	extern obj_t BGl_startzd2cnstzd2cachez12zd2envzc0zzcnst_cachez00;
	   
		 
		DEFINE_STRING(BGl_string3350z00zzcnst_walkz00,
		BgL_bgl_string3350za700za7za7c3364za7, "Cnst", 4);
	      DEFINE_STRING(BGl_string3351z00zzcnst_walkz00,
		BgL_bgl_string3351za700za7za7c3365za7, "   . ", 5);
	      DEFINE_STRING(BGl_string3352z00zzcnst_walkz00,
		BgL_bgl_string3352za700za7za7c3366za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string3353z00zzcnst_walkz00,
		BgL_bgl_string3353za700za7za7c3367za7, "      [", 7);
	      DEFINE_STRING(BGl_string3354z00zzcnst_walkz00,
		BgL_bgl_string3354za700za7za7c3368za7, " error", 6);
	      DEFINE_STRING(BGl_string3355z00zzcnst_walkz00,
		BgL_bgl_string3355za700za7za7c3369za7, "s", 1);
	      DEFINE_STRING(BGl_string3356z00zzcnst_walkz00,
		BgL_bgl_string3356za700za7za7c3370za7, "", 0);
	      DEFINE_STRING(BGl_string3357z00zzcnst_walkz00,
		BgL_bgl_string3357za700za7za7c3371za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string3358z00zzcnst_walkz00,
		BgL_bgl_string3358za700za7za7c3372za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string3360z00zzcnst_walkz00,
		BgL_bgl_string3360za700za7za7c3373za7,
		"(stop-cnst-alloc! safe!) cnst pass-started (start-cnst-cache! start-cnst-alloc! unsafe!) ",
		89);
	      DEFINE_STRING(BGl_string3359z00zzcnst_walkz00,
		BgL_bgl_string3359za700za7za7c3374za7, "cnst_walk", 9);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cnstzd2walkz12zd2envz12zzcnst_walkz00,
		BgL_bgl__cnstza7d2walkza712za73375za7, BGl__cnstzd2walkz12zc0zzcnst_walkz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_safez12zd2envzc0zzcnst_walkz00,
		BgL_bgl__safeza712za712za7za7cns3376z00, BGl__safez12z12zzcnst_walkz00, 0L,
		BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcnst_walkz00(long
		BgL_checksumz00_1259, char *BgL_fromz00_1260)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcnst_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzcnst_walkz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcnst_walkz00();
					BGl_cnstzd2initzd2zzcnst_walkz00();
					BGl_importedzd2moduleszd2initz00zzcnst_walkz00();
					BGl_toplevelzd2initzd2zzcnst_walkz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcnst_walkz00()
	{
		AN_OBJECT;
		{	/* Cnst/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cnst_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cnst_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cnst_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"cnst_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cnst_walk");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"cnst_walk");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcnst_walkz00()
	{
		AN_OBJECT;
		{	/* Cnst/walk.scm 15 */
			{	/* Cnst/walk.scm 15 */
				obj_t BgL_cportz00_1251;

				BgL_cportz00_1251 =
					bgl_open_input_string(BGl_string3360z00zzcnst_walkz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1252;

					BgL_iz00_1252 = ((long) 3);
				BgL_loopz00_1253:
					if ((BgL_iz00_1252 == ((long) -1)))
						{	/* Cnst/walk.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cnst/walk.scm 15 */
							{	/* Cnst/walk.scm 15 */
								obj_t BgL_arg3362z00_1255;

								{	/* Cnst/walk.scm 15 */

									{	/* Cnst/walk.scm 15 */
										obj_t BgL_locationz00_1257;

										BgL_locationz00_1257 = BBOOL(((bool_t) 0));
										{	/* Cnst/walk.scm 15 */

											BgL_arg3362z00_1255 =
												BGl_readz00zz__readerz00(BgL_cportz00_1251,
												BgL_locationz00_1257);
										}
									}
								}
								{	/* Cnst/walk.scm 15 */
									int BgL_auxz00_1280;

									BgL_auxz00_1280 = (int) (BgL_iz00_1252);
									CNST_TABLE_SET(BgL_auxz00_1280, BgL_arg3362z00_1255);
							}}
							{	/* Cnst/walk.scm 15 */
								int BgL_auxz00_1258;

								BgL_auxz00_1258 = (int) ((BgL_iz00_1252 - ((long) 1)));
								{
									long BgL_iz00_1285;

									BgL_iz00_1285 = (long) (BgL_auxz00_1258);
									BgL_iz00_1252 = BgL_iz00_1285;
									goto BgL_loopz00_1253;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcnst_walkz00()
	{
		AN_OBJECT;
		{	/* Cnst/walk.scm 15 */
			BGl_za2oldzd2unsafezd2typeza2z00zzcnst_walkz00 = BFALSE;
			BGl_za2oldzd2unsafezd2arityza2z00zzcnst_walkz00 = BFALSE;
			BGl_za2oldzd2unsafezd2rangeza2z00zzcnst_walkz00 = BFALSE;
			BGl_za2oldzd2unsafezd2structza2z00zzcnst_walkz00 = BFALSE;
			return (BGl_za2oldzd2unsafezd2versionza2z00zzcnst_walkz00 =
				BFALSE, BUNSPEC);
		}
	}



/* cnst-walk! */
	BGL_EXPORTED_DEF obj_t BGl_cnstzd2walkz12zc0zzcnst_walkz00(obj_t
		BgL_globalsz00_1)
	{
		AN_OBJECT;
		{	/* Cnst/walk.scm 33 */
			{	/* Cnst/walk.scm 34 */
				obj_t BgL_list3253z00_774;

				{	/* Cnst/walk.scm 34 */
					obj_t BgL_arg3255z00_776;

					{	/* Cnst/walk.scm 34 */
						obj_t BgL_arg3257z00_778;

						BgL_arg3257z00_778 = MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
						BgL_arg3255z00_776 =
							MAKE_PAIR(BGl_string3350z00zzcnst_walkz00, BgL_arg3257z00_778);
					}
					BgL_list3253z00_774 =
						MAKE_PAIR(BGl_string3351z00zzcnst_walkz00, BgL_arg3255z00_776);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list3253z00_774);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string3350z00zzcnst_walkz00;
			{	/* Cnst/walk.scm 34 */
				obj_t BgL_g3246z00_779;

				obj_t BgL_g3247z00_780;

				{	/* Cnst/walk.scm 34 */
					obj_t BgL_list3267z00_794;

					{	/* Cnst/walk.scm 34 */
						obj_t BgL_arg3268z00_795;

						{	/* Cnst/walk.scm 34 */
							obj_t BgL_arg3269z00_796;

							BgL_arg3269z00_796 =
								MAKE_PAIR(BGl_unsafez12zd2envzc0zzcnst_walkz00, BNIL);
							BgL_arg3268z00_795 =
								MAKE_PAIR(BGl_startzd2cnstzd2allocz12zd2envzc0zzcnst_allocz00,
								BgL_arg3269z00_796);
						}
						BgL_list3267z00_794 =
							MAKE_PAIR(BGl_startzd2cnstzd2cachez12zd2envzc0zzcnst_cachez00,
							BgL_arg3268z00_795);
					}
					BgL_g3246z00_779 = BgL_list3267z00_794;
				}
				BgL_g3247z00_780 = CNST_TABLE_REF(((long) 0));
				{
					obj_t BgL_hooksz00_782;

					obj_t BgL_hnamesz00_783;

					BgL_hooksz00_782 = BgL_g3246z00_779;
					BgL_hnamesz00_783 = BgL_g3247z00_780;
				BgL_zc3anonymousza33258ze3z83_784:
					if (NULLP(BgL_hooksz00_782))
						{	/* Cnst/walk.scm 34 */
							CNST_TABLE_REF(((long) 1));
						}
					else
						{	/* Cnst/walk.scm 34 */
							bool_t BgL_testz00_1301;

							{	/* Cnst/walk.scm 34 */
								obj_t BgL_fun3266z00_792;

								BgL_fun3266z00_792 = CAR(BgL_hooksz00_782);
								BgL_testz00_1301 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun3266z00_792) (BgL_fun3266z00_792,
										BEOA));
							}
							if (BgL_testz00_1301)
								{
									obj_t BgL_hnamesz00_1308;

									obj_t BgL_hooksz00_1306;

									BgL_hooksz00_1306 = CDR(BgL_hooksz00_782);
									BgL_hnamesz00_1308 = CDR(BgL_hnamesz00_783);
									BgL_hnamesz00_783 = BgL_hnamesz00_1308;
									BgL_hooksz00_782 = BgL_hooksz00_1306;
									goto BgL_zc3anonymousza33258ze3z83_784;
								}
							else
								{	/* Cnst/walk.scm 34 */
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string3350z00zzcnst_walkz00,
										BGl_string3352z00zzcnst_walkz00, CAR(BgL_hnamesz00_783));
								}
						}
				}
			}
			{	/* Cnst/walk.scm 35 */
				obj_t BgL_list3270z00_797;

				{	/* Cnst/walk.scm 35 */
					obj_t BgL_arg3272z00_799;

					{	/* Cnst/walk.scm 35 */
						obj_t BgL_arg3273z00_800;

						{	/* Cnst/walk.scm 35 */
							obj_t BgL_arg3274z00_801;

							BgL_arg3274z00_801 =
								MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
							BgL_arg3273z00_800 =
								MAKE_PAIR(BCHAR(((unsigned char) ']')), BgL_arg3274z00_801);
						}
						BgL_arg3272z00_799 =
							MAKE_PAIR(BGl_za2initzd2modeza2zd2zzengine_paramz00,
							BgL_arg3273z00_800);
					}
					BgL_list3270z00_797 =
						MAKE_PAIR(BGl_string3353z00zzcnst_walkz00, BgL_arg3272z00_799);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list3270z00_797);
			}
			{
				obj_t BgL_l3250z00_803;

				BgL_l3250z00_803 = BgL_globalsz00_1;
			BgL_zc3anonymousza33275ze3z83_804:
				if (PAIRP(BgL_l3250z00_803))
					{	/* Cnst/walk.scm 36 */
						{	/* Cnst/walk.scm 41 */
							obj_t BgL_globalz00_806;

							BgL_globalz00_806 = CAR(BgL_l3250z00_803);
							{	/* Cnst/walk.scm 37 */
								obj_t BgL_arg3277z00_807;

								{
									BgL_variablez00_bglt BgL_auxz00_1323;

									BgL_auxz00_1323 = (BgL_variablez00_bglt) (BgL_globalz00_806);
									BgL_arg3277z00_807 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_1323))->BgL_idz00);
								}
								BGl_enterzd2functionzd2zztools_errorz00(BgL_arg3277z00_807);
							}
							{	/* Cnst/walk.scm 38 */
								BgL_valuez00_bglt BgL_funz00_808;

								{
									BgL_variablez00_bglt BgL_auxz00_1327;

									BgL_auxz00_1327 = (BgL_variablez00_bglt) (BgL_globalz00_806);
									BgL_funz00_808 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_1327))->
										BgL_valuez00);
								}
								{	/* Cnst/walk.scm 38 */
									BgL_nodez00_bglt BgL_newzd2bodyzd2_809;

									{	/* Cnst/walk.scm 39 */
										obj_t BgL_arg3278z00_810;

										{
											BgL_sfunz00_bglt BgL_auxz00_1330;

											BgL_auxz00_1330 = (BgL_sfunz00_bglt) (BgL_funz00_808);
											BgL_arg3278z00_810 =
												(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1330))->
												BgL_bodyz00);
										}
										BgL_newzd2bodyzd2_809 =
											BGl_cnstz12z12zzcnst_nodez00(
											(BgL_nodez00_bglt) (BgL_arg3278z00_810));
									}
									{	/* Cnst/walk.scm 39 */

										{
											obj_t BgL_auxz00_1337;

											BgL_sfunz00_bglt BgL_auxz00_1335;

											BgL_auxz00_1337 = (obj_t) (BgL_newzd2bodyzd2_809);
											BgL_auxz00_1335 = (BgL_sfunz00_bglt) (BgL_funz00_808);
											((((BgL_sfunz00_bglt) CREF(BgL_auxz00_1335))->
													BgL_bodyz00) = ((obj_t) BgL_auxz00_1337), BUNSPEC);
										}
									}
								}
							}
							BGl_leavezd2functionzd2zztools_errorz00();
						}
						{
							obj_t BgL_l3250z00_1341;

							BgL_l3250z00_1341 = CDR(BgL_l3250z00_803);
							BgL_l3250z00_803 = BgL_l3250z00_1341;
							goto BgL_zc3anonymousza33275ze3z83_804;
						}
					}
				else
					{	/* Cnst/walk.scm 36 */
						((bool_t) 1);
					}
			}
			{	/* Cnst/walk.scm 43 */
				obj_t BgL_valuez00_813;

				{	/* Cnst/walk.scm 43 */
					obj_t BgL_arg3295z00_836;

					obj_t BgL_arg3296z00_837;

					BgL_arg3295z00_836 = CNST_TABLE_REF(((long) 2));
					BgL_arg3296z00_837 =
						bgl_append2(BGl_initializa7ezd2astz75zzcnst_initializa7eza7(),
						BgL_globalsz00_1);
					BgL_valuez00_813 =
						BGl_removezd2varzd2zzast_removez00(BgL_arg3295z00_836,
						BgL_arg3296z00_837);
				}
				if (
					((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
						((long) 0)))
					{	/* Cnst/walk.scm 43 */
						{	/* Cnst/walk.scm 43 */
							obj_t BgL_port3252z00_815;

							{	/* Cnst/walk.scm 43 */
								obj_t BgL_res3348z00_1231;

								{	/* Cnst/walk.scm 43 */
									obj_t BgL_auxz00_1350;

									BgL_auxz00_1350 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res3348z00_1231 =
										BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1350);
								}
								BgL_port3252z00_815 = BgL_res3348z00_1231;
							}
							bgl_display_obj
								(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
								BgL_port3252z00_815);
							bgl_display_string(BGl_string3354z00zzcnst_walkz00,
								BgL_port3252z00_815);
							{	/* Cnst/walk.scm 43 */
								obj_t BgL_arg3281z00_816;

								{	/* Cnst/walk.scm 43 */
									bool_t BgL_testz00_1355;

									if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
										(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
										{	/* Cnst/walk.scm 43 */
											BgL_testz00_1355 =
												BGl_2ze3ze3zz__r4_numbers_6_5z00
												(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
												BINT(((long) 1)));
										}
									else
										{	/* Cnst/walk.scm 43 */
											BgL_testz00_1355 = ((bool_t) 0);
										}
									if (BgL_testz00_1355)
										{	/* Cnst/walk.scm 43 */
											BgL_arg3281z00_816 = BGl_string3355z00zzcnst_walkz00;
										}
									else
										{	/* Cnst/walk.scm 43 */
											BgL_arg3281z00_816 = BGl_string3356z00zzcnst_walkz00;
										}
								}
								bgl_display_obj(BgL_arg3281z00_816, BgL_port3252z00_815);
							}
							bgl_display_string(BGl_string3357z00zzcnst_walkz00,
								BgL_port3252z00_815);
							bgl_display_char(((unsigned char) '\n'), BgL_port3252z00_815);
						}
						{	/* Cnst/walk.scm 43 */
							obj_t BgL_list3284z00_819;

							BgL_list3284z00_819 = MAKE_PAIR(BINT(((long) -1)), BNIL);
							return BGl_exitz00zz__errorz00(BgL_list3284z00_819);
						}
					}
				else
					{	/* Cnst/walk.scm 43 */
						obj_t BgL_g3248z00_820;

						obj_t BgL_g3249z00_821;

						{	/* Cnst/walk.scm 43 */
							obj_t BgL_list3293z00_834;

							{	/* Cnst/walk.scm 43 */
								obj_t BgL_arg3294z00_835;

								BgL_arg3294z00_835 =
									MAKE_PAIR(BGl_safez12zd2envzc0zzcnst_walkz00, BNIL);
								BgL_list3293z00_834 =
									MAKE_PAIR(BGl_stopzd2cnstzd2allocz12zd2envzc0zzcnst_allocz00,
									BgL_arg3294z00_835);
							}
							BgL_g3248z00_820 = BgL_list3293z00_834;
						}
						BgL_g3249z00_821 = CNST_TABLE_REF(((long) 3));
						{
							obj_t BgL_hooksz00_823;

							obj_t BgL_hnamesz00_824;

							BgL_hooksz00_823 = BgL_g3248z00_820;
							BgL_hnamesz00_824 = BgL_g3249z00_821;
						BgL_zc3anonymousza33285ze3z83_825:
							if (NULLP(BgL_hooksz00_823))
								{	/* Cnst/walk.scm 43 */
									return BgL_valuez00_813;
								}
							else
								{	/* Cnst/walk.scm 43 */
									bool_t BgL_testz00_1371;

									{	/* Cnst/walk.scm 43 */
										obj_t BgL_fun3292z00_832;

										BgL_fun3292z00_832 = CAR(BgL_hooksz00_823);
										BgL_testz00_1371 =
											CBOOL(PROCEDURE_ENTRY(BgL_fun3292z00_832)
											(BgL_fun3292z00_832, BEOA));
									}
									if (BgL_testz00_1371)
										{
											obj_t BgL_hnamesz00_1378;

											obj_t BgL_hooksz00_1376;

											BgL_hooksz00_1376 = CDR(BgL_hooksz00_823);
											BgL_hnamesz00_1378 = CDR(BgL_hnamesz00_824);
											BgL_hnamesz00_824 = BgL_hnamesz00_1378;
											BgL_hooksz00_823 = BgL_hooksz00_1376;
											goto BgL_zc3anonymousza33285ze3z83_825;
										}
									else
										{	/* Cnst/walk.scm 43 */
											obj_t BgL_arg3291z00_831;

											BgL_arg3291z00_831 = CAR(BgL_hnamesz00_824);
											return
												BGl_internalzd2errorzd2zztools_errorz00
												(BGl_za2currentzd2passza2zd2zzengine_passz00,
												BGl_string3358z00zzcnst_walkz00, BgL_arg3291z00_831);
										}
								}
						}
					}
			}
		}
	}



/* _cnst-walk! */
	obj_t BGl__cnstzd2walkz12zc0zzcnst_walkz00(obj_t BgL_envz00_1244,
		obj_t BgL_globalsz00_1245)
	{
		AN_OBJECT;
		{	/* Cnst/walk.scm 33 */
			return BGl_cnstzd2walkz12zc0zzcnst_walkz00(BgL_globalsz00_1245);
		}
	}



/* unsafe! */
	obj_t BGl_unsafez12z12zzcnst_walkz00()
	{
		AN_OBJECT;
		{	/* Cnst/walk.scm 50 */
			BGl_za2oldzd2unsafezd2typeza2z00zzcnst_walkz00 =
				BGl_za2unsafezd2typeza2zd2zzengine_paramz00;
			BGl_za2unsafezd2typeza2zd2zzengine_paramz00 = BTRUE;
			BGl_za2oldzd2unsafezd2arityza2z00zzcnst_walkz00 =
				BGl_za2unsafezd2arityza2zd2zzengine_paramz00;
			BGl_za2unsafezd2arityza2zd2zzengine_paramz00 = BTRUE;
			BGl_za2oldzd2unsafezd2rangeza2z00zzcnst_walkz00 =
				BGl_za2unsafezd2rangeza2zd2zzengine_paramz00;
			BGl_za2unsafezd2rangeza2zd2zzengine_paramz00 = BTRUE;
			BGl_za2oldzd2unsafezd2structza2z00zzcnst_walkz00 =
				BGl_za2unsafezd2structza2zd2zzengine_paramz00;
			BGl_za2unsafezd2structza2zd2zzengine_paramz00 = BTRUE;
			BGl_za2oldzd2unsafezd2versionza2z00zzcnst_walkz00 =
				BGl_za2unsafezd2versionza2zd2zzengine_paramz00;
			return (BGl_za2unsafezd2versionza2zd2zzengine_paramz00 = BTRUE, BUNSPEC);
		}
	}



/* _unsafe! */
	obj_t BGl__unsafez12z12zzcnst_walkz00(obj_t BgL_envz00_1246)
	{
		AN_OBJECT;
		{	/* Cnst/walk.scm 50 */
			return BGl_unsafez12z12zzcnst_walkz00();
		}
	}



/* safe! */
	obj_t BGl_safez12z12zzcnst_walkz00()
	{
		AN_OBJECT;
		{	/* Cnst/walk.scm 65 */
			BGl_za2unsafezd2typeza2zd2zzengine_paramz00 =
				BGl_za2oldzd2unsafezd2typeza2z00zzcnst_walkz00;
			BGl_za2unsafezd2arityza2zd2zzengine_paramz00 =
				BGl_za2oldzd2unsafezd2arityza2z00zzcnst_walkz00;
			BGl_za2unsafezd2rangeza2zd2zzengine_paramz00 =
				BGl_za2oldzd2unsafezd2rangeza2z00zzcnst_walkz00;
			BGl_za2unsafezd2structza2zd2zzengine_paramz00 =
				BGl_za2oldzd2unsafezd2structza2z00zzcnst_walkz00;
			return (BGl_za2unsafezd2versionza2zd2zzengine_paramz00 =
				BGl_za2oldzd2unsafezd2versionza2z00zzcnst_walkz00, BUNSPEC);
		}
	}



/* _safe! */
	obj_t BGl__safez12z12zzcnst_walkz00(obj_t BgL_envz00_1249)
	{
		AN_OBJECT;
		{	/* Cnst/walk.scm 65 */
			return BGl_safez12z12zzcnst_walkz00();
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcnst_walkz00()
	{
		AN_OBJECT;
		{	/* Cnst/walk.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcnst_walkz00()
	{
		AN_OBJECT;
		{	/* Cnst/walk.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcnst_walkz00()
	{
		AN_OBJECT;
		{	/* Cnst/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3359z00zzcnst_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3359z00zzcnst_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string3359z00zzcnst_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3359z00zzcnst_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3359z00zzcnst_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3359z00zzcnst_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3359z00zzcnst_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3359z00zzcnst_walkz00));
			BGl_modulezd2initializa7ationz75zzast_removez00(((long) 52292466),
				BSTRING_TO_STRING(BGl_string3359z00zzcnst_walkz00));
			BGl_modulezd2initializa7ationz75zzcnst_allocz00(((long) 355177025),
				BSTRING_TO_STRING(BGl_string3359z00zzcnst_walkz00));
			BGl_modulezd2initializa7ationz75zzcnst_cachez00(((long) 182307917),
				BSTRING_TO_STRING(BGl_string3359z00zzcnst_walkz00));
			BGl_modulezd2initializa7ationz75zzcnst_nodez00(((long) 110472871),
				BSTRING_TO_STRING(BGl_string3359z00zzcnst_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzcnst_initializa7eza7(((long)
					129944299), BSTRING_TO_STRING(BGl_string3359z00zzcnst_walkz00));
		}
	}

#ifdef __cplusplus
}
#endif
