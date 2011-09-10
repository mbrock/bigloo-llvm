/*===========================================================================*/
/*   (Inline/walk.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Inline/walk.scm)*/
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


	static obj_t BGl__resetzd2statz12zc0zzinline_walkz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2inlinedzd2callsza2zd2zzinline_walkz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_za2inliningzd2kfactorza2zd2zzengine_paramz00;
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static bool_t BGl_showzd2statz12zc0zzinline_walkz00();
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzinline_walkz00();
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzinline_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_inlinez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
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
	static obj_t BGl_toplevelzd2initzd2zzinline_walkz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl__inlinezd2setupz12zc0zzinline_walkz00(obj_t, obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	BGL_EXPORTED_DECL obj_t BGl_inlinezd2walkz12zc0zzinline_walkz00(obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_inlinezd2setupz12zc0zzinline_walkz00(obj_t);
	static obj_t BGl__showzd2statz12zc0zzinline_walkz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzinline_walkz00();
	BGL_EXPORTED_DEF obj_t BGl_za2nonzd2inlinedzd2callsza2z00zzinline_walkz00 =
		BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zzinline_walkz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzinline_walkz00();
	BGL_EXPORTED_DEF obj_t BGl_za2inlinezd2modeza2zd2zzinline_walkz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_2maxz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzinline_walkz00();
	extern obj_t BGl_inlinezd2sfunz12zc0zzinline_inlinez00(BgL_variablez00_bglt,
		long, obj_t);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	static obj_t BGl__inlinezd2walkz12zc0zzinline_walkz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_resetzd2statz12zc0zzinline_walkz00();
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	extern obj_t BGl_removezd2varzd2zzast_removez00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2kfactorza2z00zzinline_walkz00 = BUNSPEC;
	static obj_t BGl_libraryzd2moduleszd2initz00zzinline_walkz00();
	static obj_t __cnst[8];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_showzd2statz12zd2envz12zzinline_walkz00,
		BgL_bgl__showza7d2statza712za73410za7,
		BGl__showzd2statz12zc0zzinline_walkz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_inlinezd2setupz12zd2envz12zzinline_walkz00,
		BgL_bgl__inlineza7d2setupza73411z00,
		BGl__inlinezd2setupz12zc0zzinline_walkz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_resetzd2statz12zd2envz12zzinline_walkz00,
		BgL_bgl__resetza7d2statza7123412z00,
		BGl__resetzd2statz12zc0zzinline_walkz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_inlinezd2walkz12zd2envz12zzinline_walkz00,
		BgL_bgl__inlineza7d2walkza713413z00,
		BGl__inlinezd2walkz12zc0zzinline_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3400z00zzinline_walkz00,
		BgL_bgl_string3400za700za7za7i3414za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string3401z00zzinline_walkz00,
		BgL_bgl_string3401za700za7za7i3415za7, ")\n", 2);
	      DEFINE_STRING(BGl_string3402z00zzinline_walkz00,
		BgL_bgl_string3402za700za7za7i3416za7, "      (inlined calls     : ", 27);
	      DEFINE_STRING(BGl_string3403z00zzinline_walkz00,
		BgL_bgl_string3403za700za7za7i3417za7, "      (non inlined calls : ", 27);
	      DEFINE_STRING(BGl_string3393z00zzinline_walkz00,
		BgL_bgl_string3393za700za7za7i3418za7, "Inlining", 8);
	      DEFINE_STRING(BGl_string3404z00zzinline_walkz00,
		BgL_bgl_string3404za700za7za7i3419za7, "inline-setup!", 13);
	      DEFINE_STRING(BGl_string3394z00zzinline_walkz00,
		BgL_bgl_string3394za700za7za7i3420za7, "   . ", 5);
	      DEFINE_STRING(BGl_string3405z00zzinline_walkz00,
		BgL_bgl_string3405za700za7za7i3421za7, "Illegal mode", 12);
	      DEFINE_STRING(BGl_string3395z00zzinline_walkz00,
		BgL_bgl_string3395za700za7za7i3422za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string3406z00zzinline_walkz00,
		BgL_bgl_string3406za700za7za7i3423za7, "inline_walk", 11);
	      DEFINE_STRING(BGl_string3396z00zzinline_walkz00,
		BgL_bgl_string3396za700za7za7i3424za7, " error", 6);
	      DEFINE_STRING(BGl_string3407z00zzinline_walkz00,
		BgL_bgl_string3407za700za7za7i3425za7,
		"predicate reducer (show-stat!) inline sifun pass-started (reset-stat!) all ",
		75);
	      DEFINE_STRING(BGl_string3397z00zzinline_walkz00,
		BgL_bgl_string3397za700za7za7i3426za7, "s", 1);
	      DEFINE_STRING(BGl_string3398z00zzinline_walkz00,
		BgL_bgl_string3398za700za7za7i3427za7, "", 0);
	      DEFINE_STRING(BGl_string3399z00zzinline_walkz00,
		BgL_bgl_string3399za700za7za7i3428za7, " occured, ending ...", 20);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzinline_walkz00(long
		BgL_checksumz00_1308, char *BgL_fromz00_1309)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzinline_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzinline_walkz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzinline_walkz00();
					BGl_cnstzd2initzd2zzinline_walkz00();
					BGl_importedzd2moduleszd2initz00zzinline_walkz00();
					BGl_toplevelzd2initzd2zzinline_walkz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzinline_walkz00()
	{
		AN_OBJECT;
		{	/* Inline/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "inline_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"inline_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "inline_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"inline_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"inline_walk");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"inline_walk");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzinline_walkz00()
	{
		AN_OBJECT;
		{	/* Inline/walk.scm 15 */
			{	/* Inline/walk.scm 15 */
				obj_t BgL_cportz00_1300;

				BgL_cportz00_1300 =
					bgl_open_input_string(BGl_string3407z00zzinline_walkz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1301;

					BgL_iz00_1301 = ((long) 7);
				BgL_loopz00_1302:
					if ((BgL_iz00_1301 == ((long) -1)))
						{	/* Inline/walk.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Inline/walk.scm 15 */
							{	/* Inline/walk.scm 15 */
								obj_t BgL_arg3409z00_1304;

								{	/* Inline/walk.scm 15 */

									{	/* Inline/walk.scm 15 */
										obj_t BgL_locationz00_1306;

										BgL_locationz00_1306 = BBOOL(((bool_t) 0));
										{	/* Inline/walk.scm 15 */

											BgL_arg3409z00_1304 =
												BGl_readz00zz__readerz00(BgL_cportz00_1300,
												BgL_locationz00_1306);
										}
									}
								}
								{	/* Inline/walk.scm 15 */
									int BgL_auxz00_1329;

									BgL_auxz00_1329 = (int) (BgL_iz00_1301);
									CNST_TABLE_SET(BgL_auxz00_1329, BgL_arg3409z00_1304);
							}}
							{	/* Inline/walk.scm 15 */
								int BgL_auxz00_1307;

								BgL_auxz00_1307 = (int) ((BgL_iz00_1301 - ((long) 1)));
								{
									long BgL_iz00_1334;

									BgL_iz00_1334 = (long) (BgL_auxz00_1307);
									BgL_iz00_1301 = BgL_iz00_1334;
									goto BgL_loopz00_1302;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzinline_walkz00()
	{
		AN_OBJECT;
		{	/* Inline/walk.scm 15 */
			BGl_za2inlinezd2modeza2zd2zzinline_walkz00 = CNST_TABLE_REF(((long) 0));
			BGl_za2inlinedzd2callsza2zd2zzinline_walkz00 = BINT(((long) 0));
			BGl_za2nonzd2inlinedzd2callsza2z00zzinline_walkz00 = BINT(((long) 0));
			return (BGl_za2kfactorza2z00zzinline_walkz00 = BINT(((long) 1)), BUNSPEC);
		}
	}



/* inline-walk! */
	BGL_EXPORTED_DEF obj_t BGl_inlinezd2walkz12zc0zzinline_walkz00(obj_t
		BgL_globalsz00_1, obj_t BgL_whatz00_2)
	{
		AN_OBJECT;
		{	/* Inline/walk.scm 40 */
			{	/* Inline/walk.scm 42 */
				obj_t BgL_list3278z00_786;

				{	/* Inline/walk.scm 42 */
					obj_t BgL_arg3280z00_788;

					{	/* Inline/walk.scm 42 */
						obj_t BgL_arg3282z00_790;

						BgL_arg3282z00_790 = MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
						BgL_arg3280z00_788 =
							MAKE_PAIR(BGl_string3393z00zzinline_walkz00, BgL_arg3282z00_790);
					}
					BgL_list3278z00_786 =
						MAKE_PAIR(BGl_string3394z00zzinline_walkz00, BgL_arg3280z00_788);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list3278z00_786);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string3393z00zzinline_walkz00;
			{	/* Inline/walk.scm 42 */
				obj_t BgL_g3270z00_791;

				obj_t BgL_g3271z00_792;

				{	/* Inline/walk.scm 42 */
					obj_t BgL_list3292z00_806;

					BgL_list3292z00_806 =
						MAKE_PAIR(BGl_resetzd2statz12zd2envz12zzinline_walkz00, BNIL);
					BgL_g3270z00_791 = BgL_list3292z00_806;
				}
				BgL_g3271z00_792 = CNST_TABLE_REF(((long) 1));
				{
					obj_t BgL_hooksz00_794;

					obj_t BgL_hnamesz00_795;

					BgL_hooksz00_794 = BgL_g3270z00_791;
					BgL_hnamesz00_795 = BgL_g3271z00_792;
				BgL_zc3anonymousza33283ze3z83_796:
					if (NULLP(BgL_hooksz00_794))
						{	/* Inline/walk.scm 42 */
							CNST_TABLE_REF(((long) 2));
						}
					else
						{	/* Inline/walk.scm 42 */
							bool_t BgL_testz00_1352;

							{	/* Inline/walk.scm 42 */
								obj_t BgL_fun3291z00_804;

								BgL_fun3291z00_804 = CAR(BgL_hooksz00_794);
								BgL_testz00_1352 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun3291z00_804) (BgL_fun3291z00_804,
										BEOA));
							}
							if (BgL_testz00_1352)
								{
									obj_t BgL_hnamesz00_1359;

									obj_t BgL_hooksz00_1357;

									BgL_hooksz00_1357 = CDR(BgL_hooksz00_794);
									BgL_hnamesz00_1359 = CDR(BgL_hnamesz00_795);
									BgL_hnamesz00_795 = BgL_hnamesz00_1359;
									BgL_hooksz00_794 = BgL_hooksz00_1357;
									goto BgL_zc3anonymousza33283ze3z83_796;
								}
							else
								{	/* Inline/walk.scm 42 */
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string3393z00zzinline_walkz00,
										BGl_string3395z00zzinline_walkz00, CAR(BgL_hnamesz00_795));
								}
						}
				}
			}
			BGl_inlinezd2setupz12zc0zzinline_walkz00(BgL_whatz00_2);
			{
				obj_t BgL_l3275z00_808;

				BgL_l3275z00_808 = BgL_globalsz00_1;
			BgL_zc3anonymousza33293ze3z83_809:
				if (PAIRP(BgL_l3275z00_808))
					{	/* Inline/walk.scm 46 */
						{	/* Inline/walk.scm 47 */
							obj_t BgL_gz00_811;

							BgL_gz00_811 = CAR(BgL_l3275z00_808);
							{	/* Inline/walk.scm 47 */
								obj_t BgL_kfactorz00_812;

								{	/* Inline/walk.scm 47 */
									bool_t BgL_testz00_1367;

									{	/* Inline/walk.scm 47 */
										obj_t BgL_auxz00_1368;

										{	/* Inline/walk.scm 47 */
											BgL_sfunz00_bglt BgL_obj1887z00_1262;

											{	/* Inline/walk.scm 47 */
												BgL_variablez00_bglt BgL_obj1611z00_1261;

												BgL_obj1611z00_1261 =
													(BgL_variablez00_bglt) (BgL_gz00_811);
												BgL_obj1887z00_1262 =
													(BgL_sfunz00_bglt) (
													(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1261))->
														BgL_valuez00));
											}
											BgL_auxz00_1368 =
												(((BgL_sfunz00_bglt) CREF(BgL_obj1887z00_1262))->
												BgL_classz00);
										}
										BgL_testz00_1367 =
											(BgL_auxz00_1368 == CNST_TABLE_REF(((long) 3)));
									}
									if (BgL_testz00_1367)
										{	/* Inline/walk.scm 47 */
											BgL_kfactorz00_812 = BINT(((long) 1));
										}
									else
										{	/* Inline/walk.scm 47 */
											BgL_kfactorz00_812 = BGl_za2kfactorza2z00zzinline_walkz00;
										}
								}
								{	/* Inline/walk.scm 53 */
									obj_t BgL_arg3295z00_813;

									{
										BgL_variablez00_bglt BgL_auxz00_1376;

										BgL_auxz00_1376 = (BgL_variablez00_bglt) (BgL_gz00_811);
										BgL_arg3295z00_813 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_1376))->
											BgL_idz00);
									}
									BGl_enterzd2functionzd2zztools_errorz00(BgL_arg3295z00_813);
								}
								BGl_inlinezd2sfunz12zc0zzinline_inlinez00(
									(BgL_variablez00_bglt) (BgL_gz00_811),
									(long) CINT(BgL_kfactorz00_812), BNIL);
								BGl_leavezd2functionzd2zztools_errorz00();
						}}
						{
							obj_t BgL_l3275z00_1384;

							BgL_l3275z00_1384 = CDR(BgL_l3275z00_808);
							BgL_l3275z00_808 = BgL_l3275z00_1384;
							goto BgL_zc3anonymousza33293ze3z83_809;
						}
					}
				else
					{	/* Inline/walk.scm 46 */
						((bool_t) 1);
					}
			}
			{
				obj_t BgL_globalsz00_822;

				obj_t BgL_newzd2globalszd2_823;

				BgL_globalsz00_822 = BgL_globalsz00_1;
				BgL_newzd2globalszd2_823 = BNIL;
			BgL_zc3anonymousza33301ze3z83_824:
				if (NULLP(BgL_globalsz00_822))
					{	/* Inline/walk.scm 62 */
						obj_t BgL_valuez00_826;

						{	/* Inline/walk.scm 62 */
							obj_t BgL_arg3319z00_848;

							obj_t BgL_arg3320z00_849;

							BgL_arg3319z00_848 = CNST_TABLE_REF(((long) 4));
							BgL_arg3320z00_849 = bgl_reverse_bang(BgL_newzd2globalszd2_823);
							BgL_valuez00_826 =
								BGl_removezd2varzd2zzast_removez00(BgL_arg3319z00_848,
								BgL_arg3320z00_849);
						}
						if (
							((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
								> ((long) 0)))
							{	/* Inline/walk.scm 62 */
								{	/* Inline/walk.scm 62 */
									obj_t BgL_port3277z00_828;

									{	/* Inline/walk.scm 62 */
										obj_t BgL_res3391z00_1269;

										{	/* Inline/walk.scm 62 */
											obj_t BgL_auxz00_1394;

											BgL_auxz00_1394 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_res3391z00_1269 =
												BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1394);
										}
										BgL_port3277z00_828 = BgL_res3391z00_1269;
									}
									bgl_display_obj
										(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
										BgL_port3277z00_828);
									bgl_display_string(BGl_string3396z00zzinline_walkz00,
										BgL_port3277z00_828);
									{	/* Inline/walk.scm 62 */
										obj_t BgL_arg3304z00_829;

										{	/* Inline/walk.scm 62 */
											bool_t BgL_testz00_1399;

											if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
												(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
												{	/* Inline/walk.scm 62 */
													BgL_testz00_1399 =
														BGl_2ze3ze3zz__r4_numbers_6_5z00
														(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
														BINT(((long) 1)));
												}
											else
												{	/* Inline/walk.scm 62 */
													BgL_testz00_1399 = ((bool_t) 0);
												}
											if (BgL_testz00_1399)
												{	/* Inline/walk.scm 62 */
													BgL_arg3304z00_829 =
														BGl_string3397z00zzinline_walkz00;
												}
											else
												{	/* Inline/walk.scm 62 */
													BgL_arg3304z00_829 =
														BGl_string3398z00zzinline_walkz00;
												}
										}
										bgl_display_obj(BgL_arg3304z00_829, BgL_port3277z00_828);
									}
									bgl_display_string(BGl_string3399z00zzinline_walkz00,
										BgL_port3277z00_828);
									bgl_display_char(((unsigned char) '\n'), BgL_port3277z00_828);
								}
								{	/* Inline/walk.scm 62 */
									obj_t BgL_list3307z00_832;

									BgL_list3307z00_832 = MAKE_PAIR(BINT(((long) -1)), BNIL);
									return BGl_exitz00zz__errorz00(BgL_list3307z00_832);
								}
							}
						else
							{	/* Inline/walk.scm 62 */
								obj_t BgL_g3273z00_833;

								obj_t BgL_g3274z00_834;

								{	/* Inline/walk.scm 62 */
									obj_t BgL_list3318z00_847;

									BgL_list3318z00_847 =
										MAKE_PAIR(BGl_showzd2statz12zd2envz12zzinline_walkz00,
										BNIL);
									BgL_g3273z00_833 = BgL_list3318z00_847;
								}
								BgL_g3274z00_834 = CNST_TABLE_REF(((long) 5));
								{
									obj_t BgL_hooksz00_836;

									obj_t BgL_hnamesz00_837;

									BgL_hooksz00_836 = BgL_g3273z00_833;
									BgL_hnamesz00_837 = BgL_g3274z00_834;
								BgL_zc3anonymousza33308ze3z83_838:
									if (NULLP(BgL_hooksz00_836))
										{	/* Inline/walk.scm 62 */
											return BgL_valuez00_826;
										}
									else
										{	/* Inline/walk.scm 62 */
											bool_t BgL_testz00_1414;

											{	/* Inline/walk.scm 62 */
												obj_t BgL_fun3317z00_845;

												BgL_fun3317z00_845 = CAR(BgL_hooksz00_836);
												BgL_testz00_1414 =
													CBOOL(PROCEDURE_ENTRY(BgL_fun3317z00_845)
													(BgL_fun3317z00_845, BEOA));
											}
											if (BgL_testz00_1414)
												{
													obj_t BgL_hnamesz00_1421;

													obj_t BgL_hooksz00_1419;

													BgL_hooksz00_1419 = CDR(BgL_hooksz00_836);
													BgL_hnamesz00_1421 = CDR(BgL_hnamesz00_837);
													BgL_hnamesz00_837 = BgL_hnamesz00_1421;
													BgL_hooksz00_836 = BgL_hooksz00_1419;
													goto BgL_zc3anonymousza33308ze3z83_838;
												}
											else
												{	/* Inline/walk.scm 62 */
													obj_t BgL_arg3314z00_844;

													BgL_arg3314z00_844 = CAR(BgL_hnamesz00_837);
													return
														BGl_internalzd2errorzd2zztools_errorz00
														(BGl_za2currentzd2passza2zd2zzengine_passz00,
														BGl_string3400z00zzinline_walkz00,
														BgL_arg3314z00_844);
												}
										}
								}
							}
					}
				else
					{	/* Inline/walk.scm 64 */
						bool_t BgL_testz00_1425;

						{	/* Inline/walk.scm 64 */
							obj_t BgL_arg3328z00_855;

							{	/* Inline/walk.scm 64 */
								BgL_globalz00_bglt BgL_obj1676z00_1283;

								{	/* Inline/walk.scm 64 */
									obj_t BgL_pairz00_1282;

									BgL_pairz00_1282 = BgL_globalsz00_822;
									BgL_obj1676z00_1283 =
										(BgL_globalz00_bglt) (CAR(BgL_pairz00_1282));
								}
								BgL_arg3328z00_855 =
									(((BgL_globalz00_bglt) CREF(BgL_obj1676z00_1283))->
									BgL_modulez00);
							}
							BgL_testz00_1425 =
								(BgL_arg3328z00_855 == BGl_za2moduleza2z00zzmodule_modulez00);
						}
						if (BgL_testz00_1425)
							{	/* Inline/walk.scm 65 */
								obj_t BgL_arg3324z00_851;

								obj_t BgL_arg3325z00_852;

								BgL_arg3324z00_851 = CDR(BgL_globalsz00_822);
								BgL_arg3325z00_852 =
									MAKE_PAIR(CAR(BgL_globalsz00_822), BgL_newzd2globalszd2_823);
								{
									obj_t BgL_newzd2globalszd2_1434;

									obj_t BgL_globalsz00_1433;

									BgL_globalsz00_1433 = BgL_arg3324z00_851;
									BgL_newzd2globalszd2_1434 = BgL_arg3325z00_852;
									BgL_newzd2globalszd2_823 = BgL_newzd2globalszd2_1434;
									BgL_globalsz00_822 = BgL_globalsz00_1433;
									goto BgL_zc3anonymousza33301ze3z83_824;
								}
							}
						else
							{
								obj_t BgL_globalsz00_1435;

								BgL_globalsz00_1435 = CDR(BgL_globalsz00_822);
								BgL_globalsz00_822 = BgL_globalsz00_1435;
								goto BgL_zc3anonymousza33301ze3z83_824;
							}
					}
			}
		}
	}



/* _inline-walk! */
	obj_t BGl__inlinezd2walkz12zc0zzinline_walkz00(obj_t BgL_envz00_1293,
		obj_t BgL_globalsz00_1294, obj_t BgL_whatz00_1295)
	{
		AN_OBJECT;
		{	/* Inline/walk.scm 40 */
			return
				BGl_inlinezd2walkz12zc0zzinline_walkz00(BgL_globalsz00_1294,
				BgL_whatz00_1295);
		}
	}



/* reset-stat! */
	obj_t BGl_resetzd2statz12zc0zzinline_walkz00()
	{
		AN_OBJECT;
		{	/* Inline/walk.scm 78 */
			BGl_za2inlinedzd2callsza2zd2zzinline_walkz00 = BINT(((long) 0));
			return (BGl_za2nonzd2inlinedzd2callsza2z00zzinline_walkz00 =
				BINT(((long) 0)), BUNSPEC);
		}
	}



/* _reset-stat! */
	obj_t BGl__resetzd2statz12zc0zzinline_walkz00(obj_t BgL_envz00_1296)
	{
		AN_OBJECT;
		{	/* Inline/walk.scm 78 */
			return BGl_resetzd2statz12zc0zzinline_walkz00();
		}
	}



/* show-stat! */
	bool_t BGl_showzd2statz12zc0zzinline_walkz00()
	{
		AN_OBJECT;
		{	/* Inline/walk.scm 85 */
			{	/* Inline/walk.scm 86 */
				obj_t BgL_list3330z00_858;

				{	/* Inline/walk.scm 86 */
					obj_t BgL_arg3332z00_860;

					{	/* Inline/walk.scm 86 */
						obj_t BgL_arg3333z00_861;

						BgL_arg3333z00_861 =
							MAKE_PAIR(BGl_string3401z00zzinline_walkz00, BNIL);
						BgL_arg3332z00_860 =
							MAKE_PAIR(BGl_za2inlinedzd2callsza2zd2zzinline_walkz00,
							BgL_arg3333z00_861);
					}
					BgL_list3330z00_858 =
						MAKE_PAIR(BGl_string3402z00zzinline_walkz00, BgL_arg3332z00_860);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list3330z00_858);
			}
			{	/* Inline/walk.scm 87 */
				obj_t BgL_list3334z00_862;

				{	/* Inline/walk.scm 87 */
					obj_t BgL_arg3336z00_864;

					{	/* Inline/walk.scm 87 */
						obj_t BgL_arg3337z00_865;

						BgL_arg3337z00_865 =
							MAKE_PAIR(BGl_string3401z00zzinline_walkz00, BNIL);
						BgL_arg3336z00_864 =
							MAKE_PAIR(BGl_za2nonzd2inlinedzd2callsza2z00zzinline_walkz00,
							BgL_arg3337z00_865);
					}
					BgL_list3334z00_862 =
						MAKE_PAIR(BGl_string3403z00zzinline_walkz00, BgL_arg3336z00_864);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list3334z00_862);
			}
			return ((bool_t) 1);
		}
	}



/* _show-stat! */
	obj_t BGl__showzd2statz12zc0zzinline_walkz00(obj_t BgL_envz00_1297)
	{
		AN_OBJECT;
		{	/* Inline/walk.scm 85 */
			return BBOOL(BGl_showzd2statz12zc0zzinline_walkz00());
		}
	}



/* inline-setup! */
	BGL_EXPORTED_DEF obj_t BGl_inlinezd2setupz12zc0zzinline_walkz00(obj_t
		BgL_whatz00_3)
	{
		AN_OBJECT;
		{	/* Inline/walk.scm 93 */
			if ((BgL_whatz00_3 == CNST_TABLE_REF(((long) 0))))
				{	/* Inline/walk.scm 95 */
					BGl_za2inlinezd2modeza2zd2zzinline_walkz00 =
						CNST_TABLE_REF(((long) 0));
					{	/* Inline/walk.scm 98 */
						obj_t BgL_yz00_869;

						BgL_yz00_869 =
							PROCEDURE_ENTRY(BGl_za2inliningzd2kfactorza2zd2zzengine_paramz00)
							(BGl_za2inliningzd2kfactorza2zd2zzengine_paramz00,
							BGl_za2optimza2z00zzengine_paramz00, BEOA);
						return (BGl_za2kfactorza2z00zzinline_walkz00 =
							BGl_2maxz00zz__r4_numbers_6_5z00(BINT(((long) 1)), BgL_yz00_869),
							BUNSPEC);
				}}
			else
				{	/* Inline/walk.scm 95 */
					if ((BgL_whatz00_3 == CNST_TABLE_REF(((long) 6))))
						{	/* Inline/walk.scm 95 */
							BGl_za2inlinezd2modeza2zd2zzinline_walkz00 =
								CNST_TABLE_REF(((long) 6));
							return (BGl_za2kfactorza2z00zzinline_walkz00 =
								BINT(((long) 1)), BUNSPEC);
						}
					else
						{	/* Inline/walk.scm 95 */
							if ((BgL_whatz00_3 == CNST_TABLE_REF(((long) 7))))
								{	/* Inline/walk.scm 95 */
									BGl_za2inlinezd2modeza2zd2zzinline_walkz00 =
										CNST_TABLE_REF(((long) 7));
									return (BGl_za2kfactorza2z00zzinline_walkz00 =
										BINT(((long) 1)), BUNSPEC);
								}
							else
								{	/* Inline/walk.scm 95 */
									return
										BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string3404z00zzinline_walkz00,
										BGl_string3405z00zzinline_walkz00, BgL_whatz00_3);
								}
						}
				}
		}
	}



/* _inline-setup! */
	obj_t BGl__inlinezd2setupz12zc0zzinline_walkz00(obj_t BgL_envz00_1298,
		obj_t BgL_whatz00_1299)
	{
		AN_OBJECT;
		{	/* Inline/walk.scm 93 */
			return BGl_inlinezd2setupz12zc0zzinline_walkz00(BgL_whatz00_1299);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzinline_walkz00()
	{
		AN_OBJECT;
		{	/* Inline/walk.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzinline_walkz00()
	{
		AN_OBJECT;
		{	/* Inline/walk.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzinline_walkz00()
	{
		AN_OBJECT;
		{	/* Inline/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3406z00zzinline_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3406z00zzinline_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string3406z00zzinline_walkz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3406z00zzinline_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3406z00zzinline_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3406z00zzinline_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3406z00zzinline_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3406z00zzinline_walkz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string3406z00zzinline_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3406z00zzinline_walkz00));
			BGl_modulezd2initializa7ationz75zzast_removez00(((long) 52292466),
				BSTRING_TO_STRING(BGl_string3406z00zzinline_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzinline_inlinez00(((long) 326457085),
				BSTRING_TO_STRING(BGl_string3406z00zzinline_walkz00));
		}
	}

#ifdef __cplusplus
}
#endif
