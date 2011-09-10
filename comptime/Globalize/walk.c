/*===========================================================================*/
/*   (Globalize/walk.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Globalize/walk.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
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


	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t BGl_foreignzd2closureszd2zzglobaliza7e_globalzd2closurez75();
	static obj_t BGl_cnstzd2initzd2zzglobaliza7e_walkza7();
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	extern obj_t
		BGl_escapezd2funz12zc0zzglobaliza7e_escapeza7(BgL_variablez00_bglt);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_walkza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_globalzd2closurez75(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_globaliza7ez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_escapeza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
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
	BGL_EXPORTED_DECL obj_t
		BGl_globaliza7ezd2walkz12z67zzglobaliza7e_walkza7(obj_t, obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	extern obj_t
		BGl_globaliza7ez12zb5zzglobaliza7e_globaliza7ez00(BgL_globalz00_bglt);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzglobaliza7e_walkza7();
	static obj_t BGl_requirezd2initializa7ationz75zzglobaliza7e_walkza7 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzglobaliza7e_walkza7();
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_walkza7();
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl__globaliza7ezd2walkz12z67zzglobaliza7e_walkza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_removezd2varzd2zzast_removez00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_walkza7();
	static obj_t __cnst[1];


	   
		 
		DEFINE_STRING(BGl_string3351z00zzglobaliza7e_walkza7,
		BgL_bgl_string3351za700za7za7g3363za7, "Globalization", 13);
	      DEFINE_STRING(BGl_string3352z00zzglobaliza7e_walkza7,
		BgL_bgl_string3352za700za7za7g3364za7, "   . ", 5);
	      DEFINE_STRING(BGl_string3353z00zzglobaliza7e_walkza7,
		BgL_bgl_string3353za700za7za7g3365za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string3354z00zzglobaliza7e_walkza7,
		BgL_bgl_string3354za700za7za7g3366za7, " error", 6);
	      DEFINE_STRING(BGl_string3355z00zzglobaliza7e_walkza7,
		BgL_bgl_string3355za700za7za7g3367za7, "s", 1);
	      DEFINE_STRING(BGl_string3356z00zzglobaliza7e_walkza7,
		BgL_bgl_string3356za700za7za7g3368za7, "", 0);
	      DEFINE_STRING(BGl_string3357z00zzglobaliza7e_walkza7,
		BgL_bgl_string3357za700za7za7g3369za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string3358z00zzglobaliza7e_walkza7,
		BgL_bgl_string3358za700za7za7g3370za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string3360z00zzglobaliza7e_walkza7,
		BgL_bgl_string3360za700za7za7g3371za7, "pass-started ", 13);
	      DEFINE_STRING(BGl_string3359z00zzglobaliza7e_walkza7,
		BgL_bgl_string3359za700za7za7g3372za7, "globalize_walk", 14);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globaliza7ezd2walkz12zd2envzb5zzglobaliza7e_walkza7,
		BgL_bgl__globaliza7a7eza7d2w3373z00,
		BGl__globaliza7ezd2walkz12z67zzglobaliza7e_walkza7, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_walkza7(long
		BgL_checksumz00_1252, char *BgL_fromz00_1253)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzglobaliza7e_walkza7))
				{
					BGl_requirezd2initializa7ationz75zzglobaliza7e_walkza7 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzglobaliza7e_walkza7();
					BGl_cnstzd2initzd2zzglobaliza7e_walkza7();
					BGl_importedzd2moduleszd2initz00zzglobaliza7e_walkza7();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_walkza7()
	{
		AN_OBJECT;
		{	/* Globalize/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"globalize_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"globalize_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"globalize_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"globalize_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"globalize_walk");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"globalize_walk");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzglobaliza7e_walkza7()
	{
		AN_OBJECT;
		{	/* Globalize/walk.scm 15 */
			{	/* Globalize/walk.scm 15 */
				obj_t BgL_cportz00_1244;

				BgL_cportz00_1244 =
					bgl_open_input_string(BGl_string3360z00zzglobaliza7e_walkza7,
					(int) (((long) 0)));
				{
					long BgL_iz00_1245;

					BgL_iz00_1245 = ((long) 0);
				BgL_loopz00_1246:
					if ((BgL_iz00_1245 == ((long) -1)))
						{	/* Globalize/walk.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Globalize/walk.scm 15 */
							{	/* Globalize/walk.scm 15 */
								obj_t BgL_arg3362z00_1248;

								{	/* Globalize/walk.scm 15 */

									{	/* Globalize/walk.scm 15 */
										obj_t BgL_locationz00_1250;

										BgL_locationz00_1250 = BBOOL(((bool_t) 0));
										{	/* Globalize/walk.scm 15 */

											BgL_arg3362z00_1248 =
												BGl_readz00zz__readerz00(BgL_cportz00_1244,
												BgL_locationz00_1250);
										}
									}
								}
								{	/* Globalize/walk.scm 15 */
									int BgL_auxz00_1272;

									BgL_auxz00_1272 = (int) (BgL_iz00_1245);
									CNST_TABLE_SET(BgL_auxz00_1272, BgL_arg3362z00_1248);
							}}
							{	/* Globalize/walk.scm 15 */
								int BgL_auxz00_1251;

								BgL_auxz00_1251 = (int) ((BgL_iz00_1245 - ((long) 1)));
								{
									long BgL_iz00_1277;

									BgL_iz00_1277 = (long) (BgL_auxz00_1251);
									BgL_iz00_1245 = BgL_iz00_1277;
									goto BgL_loopz00_1246;
								}
							}
						}
				}
			}
		}
	}



/* globalize-walk! */
	BGL_EXPORTED_DEF obj_t BGl_globaliza7ezd2walkz12z67zzglobaliza7e_walkza7(obj_t
		BgL_globalsz00_1, obj_t BgL_removez00_2)
	{
		AN_OBJECT;
		{	/* Globalize/walk.scm 30 */
			{	/* Globalize/walk.scm 31 */
				obj_t BgL_list3258z00_775;

				{	/* Globalize/walk.scm 31 */
					obj_t BgL_arg3260z00_777;

					{	/* Globalize/walk.scm 31 */
						obj_t BgL_arg3262z00_779;

						BgL_arg3262z00_779 = MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
						BgL_arg3260z00_777 =
							MAKE_PAIR(BGl_string3351z00zzglobaliza7e_walkza7,
							BgL_arg3262z00_779);
					}
					BgL_list3258z00_775 =
						MAKE_PAIR(BGl_string3352z00zzglobaliza7e_walkza7,
						BgL_arg3260z00_777);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list3258z00_775);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string3351z00zzglobaliza7e_walkza7;
			{
				obj_t BgL_hooksz00_783;

				obj_t BgL_hnamesz00_784;

				BgL_hooksz00_783 = BNIL;
				BgL_hnamesz00_784 = BNIL;
			BgL_zc3anonymousza33263ze3z83_785:
				if (NULLP(BgL_hooksz00_783))
					{	/* Globalize/walk.scm 31 */
						CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Globalize/walk.scm 31 */
						bool_t BgL_testz00_1289;

						{	/* Globalize/walk.scm 31 */
							obj_t BgL_fun3271z00_793;

							BgL_fun3271z00_793 = CAR(BgL_hooksz00_783);
							BgL_testz00_1289 =
								CBOOL(PROCEDURE_ENTRY(BgL_fun3271z00_793) (BgL_fun3271z00_793,
									BEOA));
						}
						if (BgL_testz00_1289)
							{
								obj_t BgL_hnamesz00_1296;

								obj_t BgL_hooksz00_1294;

								BgL_hooksz00_1294 = CDR(BgL_hooksz00_783);
								BgL_hnamesz00_1296 = CDR(BgL_hnamesz00_784);
								BgL_hnamesz00_784 = BgL_hnamesz00_1296;
								BgL_hooksz00_783 = BgL_hooksz00_1294;
								goto BgL_zc3anonymousza33263ze3z83_785;
							}
						else
							{	/* Globalize/walk.scm 31 */
								BGl_internalzd2errorzd2zztools_errorz00
									(BGl_string3351z00zzglobaliza7e_walkza7,
									BGl_string3353z00zzglobaliza7e_walkza7,
									CAR(BgL_hnamesz00_784));
							}
					}
			}
			{
				obj_t BgL_l3255z00_797;

				BgL_l3255z00_797 = BgL_globalsz00_1;
			BgL_zc3anonymousza33273ze3z83_798:
				if (PAIRP(BgL_l3255z00_797))
					{	/* Globalize/walk.scm 33 */
						{	/* Globalize/walk.scm 33 */
							obj_t BgL_arg3275z00_800;

							BgL_arg3275z00_800 = CAR(BgL_l3255z00_797);
							BGl_escapezd2funz12zc0zzglobaliza7e_escapeza7(
								(BgL_variablez00_bglt) (BgL_arg3275z00_800));
						}
						{
							obj_t BgL_l3255z00_1305;

							BgL_l3255z00_1305 = CDR(BgL_l3255z00_797);
							BgL_l3255z00_797 = BgL_l3255z00_1305;
							goto BgL_zc3anonymousza33273ze3z83_798;
						}
					}
				else
					{	/* Globalize/walk.scm 33 */
						((bool_t) 1);
					}
			}
			{
				obj_t BgL_globalsz00_805;

				obj_t BgL_newzd2globalszd2_806;

				BgL_globalsz00_805 = BgL_globalsz00_1;
				BgL_newzd2globalszd2_806 = BNIL;
			BgL_zc3anonymousza33277ze3z83_807:
				if (NULLP(BgL_globalsz00_805))
					{	/* Globalize/walk.scm 40 */
						obj_t BgL_valuez00_809;

						BgL_valuez00_809 =
							BGl_removezd2varzd2zzast_removez00(BgL_removez00_2,
							bgl_append2(BgL_newzd2globalszd2_806,
								BGl_foreignzd2closureszd2zzglobaliza7e_globalzd2closurez75()));
						if (
							((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
								> ((long) 0)))
							{	/* Globalize/walk.scm 40 */
								{	/* Globalize/walk.scm 40 */
									obj_t BgL_port3257z00_811;

									{	/* Globalize/walk.scm 40 */
										obj_t BgL_res3349z00_1226;

										{	/* Globalize/walk.scm 40 */
											obj_t BgL_auxz00_1315;

											BgL_auxz00_1315 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_res3349z00_1226 =
												BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1315);
										}
										BgL_port3257z00_811 = BgL_res3349z00_1226;
									}
									bgl_display_obj
										(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
										BgL_port3257z00_811);
									bgl_display_string(BGl_string3354z00zzglobaliza7e_walkza7,
										BgL_port3257z00_811);
									{	/* Globalize/walk.scm 40 */
										obj_t BgL_arg3280z00_812;

										{	/* Globalize/walk.scm 40 */
											bool_t BgL_testz00_1320;

											if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
												(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
												{	/* Globalize/walk.scm 40 */
													BgL_testz00_1320 =
														BGl_2ze3ze3zz__r4_numbers_6_5z00
														(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
														BINT(((long) 1)));
												}
											else
												{	/* Globalize/walk.scm 40 */
													BgL_testz00_1320 = ((bool_t) 0);
												}
											if (BgL_testz00_1320)
												{	/* Globalize/walk.scm 40 */
													BgL_arg3280z00_812 =
														BGl_string3355z00zzglobaliza7e_walkza7;
												}
											else
												{	/* Globalize/walk.scm 40 */
													BgL_arg3280z00_812 =
														BGl_string3356z00zzglobaliza7e_walkza7;
												}
										}
										bgl_display_obj(BgL_arg3280z00_812, BgL_port3257z00_811);
									}
									bgl_display_string(BGl_string3357z00zzglobaliza7e_walkza7,
										BgL_port3257z00_811);
									bgl_display_char(((unsigned char) '\n'), BgL_port3257z00_811);
								}
								{	/* Globalize/walk.scm 40 */
									obj_t BgL_list3283z00_815;

									BgL_list3283z00_815 = MAKE_PAIR(BINT(((long) -1)), BNIL);
									return BGl_exitz00zz__errorz00(BgL_list3283z00_815);
								}
							}
						else
							{
								obj_t BgL_hooksz00_819;

								obj_t BgL_hnamesz00_820;

								BgL_hooksz00_819 = BNIL;
								BgL_hnamesz00_820 = BNIL;
							BgL_zc3anonymousza33284ze3z83_821:
								if (NULLP(BgL_hooksz00_819))
									{	/* Globalize/walk.scm 40 */
										return BgL_valuez00_809;
									}
								else
									{	/* Globalize/walk.scm 40 */
										bool_t BgL_testz00_1333;

										{	/* Globalize/walk.scm 40 */
											obj_t BgL_fun3291z00_828;

											BgL_fun3291z00_828 = CAR(BgL_hooksz00_819);
											BgL_testz00_1333 =
												CBOOL(PROCEDURE_ENTRY(BgL_fun3291z00_828)
												(BgL_fun3291z00_828, BEOA));
										}
										if (BgL_testz00_1333)
											{
												obj_t BgL_hnamesz00_1340;

												obj_t BgL_hooksz00_1338;

												BgL_hooksz00_1338 = CDR(BgL_hooksz00_819);
												BgL_hnamesz00_1340 = CDR(BgL_hnamesz00_820);
												BgL_hnamesz00_820 = BgL_hnamesz00_1340;
												BgL_hooksz00_819 = BgL_hooksz00_1338;
												goto BgL_zc3anonymousza33284ze3z83_821;
											}
										else
											{	/* Globalize/walk.scm 40 */
												obj_t BgL_arg3290z00_827;

												BgL_arg3290z00_827 = CAR(BgL_hnamesz00_820);
												return
													BGl_internalzd2errorzd2zztools_errorz00
													(BGl_za2currentzd2passza2zd2zzengine_passz00,
													BGl_string3358z00zzglobaliza7e_walkza7,
													BgL_arg3290z00_827);
											}
									}
							}
					}
				else
					{	/* Globalize/walk.scm 42 */
						obj_t BgL_arg3295z00_833;

						obj_t BgL_arg3296z00_834;

						BgL_arg3295z00_833 = CDR(BgL_globalsz00_805);
						{	/* Globalize/walk.scm 43 */
							obj_t BgL_arg3297z00_835;

							{	/* Globalize/walk.scm 43 */
								obj_t BgL_arg3298z00_836;

								BgL_arg3298z00_836 = CAR(BgL_globalsz00_805);
								BgL_arg3297z00_835 =
									BGl_globaliza7ez12zb5zzglobaliza7e_globaliza7ez00(
									(BgL_globalz00_bglt) (BgL_arg3298z00_836));
							}
							BgL_arg3296z00_834 =
								bgl_append2(BgL_arg3297z00_835, BgL_newzd2globalszd2_806);
						}
						{
							obj_t BgL_newzd2globalszd2_1350;

							obj_t BgL_globalsz00_1349;

							BgL_globalsz00_1349 = BgL_arg3295z00_833;
							BgL_newzd2globalszd2_1350 = BgL_arg3296z00_834;
							BgL_newzd2globalszd2_806 = BgL_newzd2globalszd2_1350;
							BgL_globalsz00_805 = BgL_globalsz00_1349;
							goto BgL_zc3anonymousza33277ze3z83_807;
						}
					}
			}
		}
	}



/* _globalize-walk! */
	obj_t BGl__globaliza7ezd2walkz12z67zzglobaliza7e_walkza7(obj_t
		BgL_envz00_1241, obj_t BgL_globalsz00_1242, obj_t BgL_removez00_1243)
	{
		AN_OBJECT;
		{	/* Globalize/walk.scm 30 */
			return
				BGl_globaliza7ezd2walkz12z67zzglobaliza7e_walkza7(BgL_globalsz00_1242,
				BgL_removez00_1243);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzglobaliza7e_walkza7()
	{
		AN_OBJECT;
		{	/* Globalize/walk.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzglobaliza7e_walkza7()
	{
		AN_OBJECT;
		{	/* Globalize/walk.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_walkza7()
	{
		AN_OBJECT;
		{	/* Globalize/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3359z00zzglobaliza7e_walkza7));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3359z00zzglobaliza7e_walkza7));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string3359z00zzglobaliza7e_walkza7));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3359z00zzglobaliza7e_walkza7));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3359z00zzglobaliza7e_walkza7));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3359z00zzglobaliza7e_walkza7));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3359z00zzglobaliza7e_walkza7));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3359z00zzglobaliza7e_walkza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_escapeza7(((long)
					132272584),
				BSTRING_TO_STRING(BGl_string3359z00zzglobaliza7e_walkza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_globaliza7ez00(((long)
					426556099),
				BSTRING_TO_STRING(BGl_string3359z00zzglobaliza7e_walkza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_globalzd2closurez75(((long)
					55366255), BSTRING_TO_STRING(BGl_string3359z00zzglobaliza7e_walkza7));
			return BGl_modulezd2initializa7ationz75zzast_removez00(((long) 52292466),
				BSTRING_TO_STRING(BGl_string3359z00zzglobaliza7e_walkza7));
		}
	}

#ifdef __cplusplus
}
#endif
