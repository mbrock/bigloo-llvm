/*===========================================================================*/
/*   (Coerce/walk.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Coerce/walk.scm)*/
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


	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_resetzd2ppmargez12zc0zzcoerce_pprotoz00();
	extern obj_t BGl_pvariablezd2protozd2zzcoerce_pprotoz00(long,
		BgL_variablez00_bglt);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzcoerce_walkz00();
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcoerce_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_pprotoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	extern obj_t
		BGl_coercezd2functionz12zc0zzcoerce_coercez00(BgL_variablez00_bglt, bool_t);
	static obj_t BGl_zc3anonymousza33276ze3z83zzcoerce_walkz00(obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__coercezd2walkz12zc0zzcoerce_walkz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcoerce_walkz00();
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcoerce_walkz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzcoerce_walkz00();
	extern obj_t BGl_za2unsafezd2typeza2zd2zzengine_paramz00;
	extern obj_t BGl_funz00zzast_varz00;
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcoerce_walkz00();
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_removezd2varzd2zzast_removez00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcoerce_walkz00();
	BGL_EXPORTED_DECL obj_t BGl_coercezd2walkz12zc0zzcoerce_walkz00(obj_t);
	static obj_t __cnst[4];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_coercezd2walkz12zd2envz12zzcoerce_walkz00,
		BgL_bgl__coerceza7d2walkza713364z00,
		BGl__coercezd2walkz12zc0zzcoerce_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3354z00zzcoerce_walkz00,
		BgL_bgl_za7c3anonymousza7a333365z00,
		BGl_zc3anonymousza33276ze3z83zzcoerce_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3351z00zzcoerce_walkz00,
		BgL_bgl_string3351za700za7za7c3366za7, "Coercions & Checks", 18);
	      DEFINE_STRING(BGl_string3352z00zzcoerce_walkz00,
		BgL_bgl_string3352za700za7za7c3367za7, "   . ", 5);
	      DEFINE_STRING(BGl_string3353z00zzcoerce_walkz00,
		BgL_bgl_string3353za700za7za7c3368za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string3355z00zzcoerce_walkz00,
		BgL_bgl_string3355za700za7za7c3369za7, " error", 6);
	      DEFINE_STRING(BGl_string3356z00zzcoerce_walkz00,
		BgL_bgl_string3356za700za7za7c3370za7, "s", 1);
	      DEFINE_STRING(BGl_string3357z00zzcoerce_walkz00,
		BgL_bgl_string3357za700za7za7c3371za7, "", 0);
	      DEFINE_STRING(BGl_string3358z00zzcoerce_walkz00,
		BgL_bgl_string3358za700za7za7c3372za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string3360z00zzcoerce_walkz00,
		BgL_bgl_string3360za700za7za7c3373za7, "coerce_walk", 11);
	      DEFINE_STRING(BGl_string3359z00zzcoerce_walkz00,
		BgL_bgl_string3359za700za7za7c3374za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string3361z00zzcoerce_walkz00,
		BgL_bgl_string3361za700za7za7c3375za7, "export static coerce pass-started ",
		34);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcoerce_walkz00(long
		BgL_checksumz00_1257, char *BgL_fromz00_1258)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcoerce_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzcoerce_walkz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcoerce_walkz00();
					BGl_cnstzd2initzd2zzcoerce_walkz00();
					BGl_importedzd2moduleszd2initz00zzcoerce_walkz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcoerce_walkz00()
	{
		AN_OBJECT;
		{	/* Coerce/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "coerce_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"coerce_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "coerce_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"coerce_walk");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "coerce_walk");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"coerce_walk");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcoerce_walkz00()
	{
		AN_OBJECT;
		{	/* Coerce/walk.scm 15 */
			{	/* Coerce/walk.scm 15 */
				obj_t BgL_cportz00_1249;

				BgL_cportz00_1249 =
					bgl_open_input_string(BGl_string3361z00zzcoerce_walkz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1250;

					BgL_iz00_1250 = ((long) 3);
				BgL_loopz00_1251:
					if ((BgL_iz00_1250 == ((long) -1)))
						{	/* Coerce/walk.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Coerce/walk.scm 15 */
							{	/* Coerce/walk.scm 15 */
								obj_t BgL_arg3363z00_1253;

								{	/* Coerce/walk.scm 15 */

									{	/* Coerce/walk.scm 15 */
										obj_t BgL_locationz00_1255;

										BgL_locationz00_1255 = BBOOL(((bool_t) 0));
										{	/* Coerce/walk.scm 15 */

											BgL_arg3363z00_1253 =
												BGl_readz00zz__readerz00(BgL_cportz00_1249,
												BgL_locationz00_1255);
										}
									}
								}
								{	/* Coerce/walk.scm 15 */
									int BgL_auxz00_1277;

									BgL_auxz00_1277 = (int) (BgL_iz00_1250);
									CNST_TABLE_SET(BgL_auxz00_1277, BgL_arg3363z00_1253);
							}}
							{	/* Coerce/walk.scm 15 */
								int BgL_auxz00_1256;

								BgL_auxz00_1256 = (int) ((BgL_iz00_1250 - ((long) 1)));
								{
									long BgL_iz00_1282;

									BgL_iz00_1282 = (long) (BgL_auxz00_1256);
									BgL_iz00_1250 = BgL_iz00_1282;
									goto BgL_loopz00_1251;
								}
							}
						}
				}
			}
		}
	}



/* coerce-walk! */
	BGL_EXPORTED_DEF obj_t BGl_coercezd2walkz12zc0zzcoerce_walkz00(obj_t
		BgL_astz00_1)
	{
		AN_OBJECT;
		{	/* Coerce/walk.scm 34 */
			{	/* Coerce/walk.scm 35 */
				obj_t BgL_list3254z00_774;

				{	/* Coerce/walk.scm 35 */
					obj_t BgL_arg3256z00_776;

					{	/* Coerce/walk.scm 35 */
						obj_t BgL_arg3258z00_778;

						BgL_arg3258z00_778 = MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
						BgL_arg3256z00_776 =
							MAKE_PAIR(BGl_string3351z00zzcoerce_walkz00, BgL_arg3258z00_778);
					}
					BgL_list3254z00_774 =
						MAKE_PAIR(BGl_string3352z00zzcoerce_walkz00, BgL_arg3256z00_776);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list3254z00_774);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string3351z00zzcoerce_walkz00;
			{
				obj_t BgL_hooksz00_782;

				obj_t BgL_hnamesz00_783;

				BgL_hooksz00_782 = BNIL;
				BgL_hnamesz00_783 = BNIL;
			BgL_zc3anonymousza33259ze3z83_784:
				if (NULLP(BgL_hooksz00_782))
					{	/* Coerce/walk.scm 35 */
						CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Coerce/walk.scm 35 */
						bool_t BgL_testz00_1294;

						{	/* Coerce/walk.scm 35 */
							obj_t BgL_fun3267z00_792;

							BgL_fun3267z00_792 = CAR(BgL_hooksz00_782);
							BgL_testz00_1294 =
								CBOOL(PROCEDURE_ENTRY(BgL_fun3267z00_792) (BgL_fun3267z00_792,
									BEOA));
						}
						if (BgL_testz00_1294)
							{
								obj_t BgL_hnamesz00_1301;

								obj_t BgL_hooksz00_1299;

								BgL_hooksz00_1299 = CDR(BgL_hooksz00_782);
								BgL_hnamesz00_1301 = CDR(BgL_hnamesz00_783);
								BgL_hnamesz00_783 = BgL_hnamesz00_1301;
								BgL_hooksz00_782 = BgL_hooksz00_1299;
								goto BgL_zc3anonymousza33259ze3z83_784;
							}
						else
							{	/* Coerce/walk.scm 35 */
								BGl_internalzd2errorzd2zztools_errorz00
									(BGl_string3351z00zzcoerce_walkz00,
									BGl_string3353z00zzcoerce_walkz00, CAR(BgL_hnamesz00_783));
							}
					}
			}
			{
				obj_t BgL_l3251z00_796;

				BgL_l3251z00_796 = BgL_astz00_1;
			BgL_zc3anonymousza33269ze3z83_797:
				if (PAIRP(BgL_l3251z00_796))
					{	/* Coerce/walk.scm 36 */
						{	/* Coerce/walk.scm 40 */
							obj_t BgL_globalz00_799;

							BgL_globalz00_799 = CAR(BgL_l3251z00_796);
							BGl_resetzd2ppmargez12zc0zzcoerce_pprotoz00();
							{	/* Coerce/walk.scm 38 */
								obj_t BgL_arg3271z00_800;

								{
									BgL_variablez00_bglt BgL_auxz00_1309;

									BgL_auxz00_1309 = (BgL_variablez00_bglt) (BgL_globalz00_799);
									BgL_arg3271z00_800 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_1309))->BgL_idz00);
								}
								BGl_enterzd2functionzd2zztools_errorz00(BgL_arg3271z00_800);
							}
							{	/* Coerce/walk.scm 39 */
								bool_t BgL_arg3272z00_801;

								if (CBOOL(BGl_za2unsafezd2typeza2zd2zzengine_paramz00))
									{	/* Coerce/walk.scm 39 */
										BgL_arg3272z00_801 = ((bool_t) 0);
									}
								else
									{	/* Coerce/walk.scm 39 */
										BgL_arg3272z00_801 = ((bool_t) 1);
									}
								BGl_coercezd2functionz12zc0zzcoerce_coercez00(
									(BgL_variablez00_bglt) (BgL_globalz00_799),
									BgL_arg3272z00_801);
							}
							BGl_leavezd2functionzd2zztools_errorz00();
						}
						{
							obj_t BgL_l3251z00_1318;

							BgL_l3251z00_1318 = CDR(BgL_l3251z00_796);
							BgL_l3251z00_796 = BgL_l3251z00_1318;
							goto BgL_zc3anonymousza33269ze3z83_797;
						}
					}
				else
					{	/* Coerce/walk.scm 36 */
						((bool_t) 1);
					}
			}
			BGl_resetzd2ppmargez12zc0zzcoerce_pprotoz00();
			BGl_forzd2eachzd2globalz12z12zzast_envz00(BGl_proc3354z00zzcoerce_walkz00,
				BNIL);
			{	/* Coerce/walk.scm 48 */
				obj_t BgL_valuez00_817;

				BgL_valuez00_817 =
					BGl_removezd2varzd2zzast_removez00(CNST_TABLE_REF(((long) 1)),
					BgL_astz00_1);
				if (((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
						((long) 0)))
					{	/* Coerce/walk.scm 48 */
						{	/* Coerce/walk.scm 48 */
							obj_t BgL_port3253z00_819;

							{	/* Coerce/walk.scm 48 */
								obj_t BgL_res3349z00_1231;

								{	/* Coerce/walk.scm 48 */
									obj_t BgL_auxz00_1327;

									BgL_auxz00_1327 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res3349z00_1231 =
										BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1327);
								}
								BgL_port3253z00_819 = BgL_res3349z00_1231;
							}
							bgl_display_obj
								(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
								BgL_port3253z00_819);
							bgl_display_string(BGl_string3355z00zzcoerce_walkz00,
								BgL_port3253z00_819);
							{	/* Coerce/walk.scm 48 */
								obj_t BgL_arg3285z00_820;

								{	/* Coerce/walk.scm 48 */
									bool_t BgL_testz00_1332;

									if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
										(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
										{	/* Coerce/walk.scm 48 */
											BgL_testz00_1332 =
												BGl_2ze3ze3zz__r4_numbers_6_5z00
												(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
												BINT(((long) 1)));
										}
									else
										{	/* Coerce/walk.scm 48 */
											BgL_testz00_1332 = ((bool_t) 0);
										}
									if (BgL_testz00_1332)
										{	/* Coerce/walk.scm 48 */
											BgL_arg3285z00_820 = BGl_string3356z00zzcoerce_walkz00;
										}
									else
										{	/* Coerce/walk.scm 48 */
											BgL_arg3285z00_820 = BGl_string3357z00zzcoerce_walkz00;
										}
								}
								bgl_display_obj(BgL_arg3285z00_820, BgL_port3253z00_819);
							}
							bgl_display_string(BGl_string3358z00zzcoerce_walkz00,
								BgL_port3253z00_819);
							bgl_display_char(((unsigned char) '\n'), BgL_port3253z00_819);
						}
						{	/* Coerce/walk.scm 48 */
							obj_t BgL_list3288z00_823;

							BgL_list3288z00_823 = MAKE_PAIR(BINT(((long) -1)), BNIL);
							return BGl_exitz00zz__errorz00(BgL_list3288z00_823);
						}
					}
				else
					{
						obj_t BgL_hooksz00_827;

						obj_t BgL_hnamesz00_828;

						BgL_hooksz00_827 = BNIL;
						BgL_hnamesz00_828 = BNIL;
					BgL_zc3anonymousza33289ze3z83_829:
						if (NULLP(BgL_hooksz00_827))
							{	/* Coerce/walk.scm 48 */
								return BgL_valuez00_817;
							}
						else
							{	/* Coerce/walk.scm 48 */
								bool_t BgL_testz00_1345;

								{	/* Coerce/walk.scm 48 */
									obj_t BgL_fun3297z00_836;

									BgL_fun3297z00_836 = CAR(BgL_hooksz00_827);
									BgL_testz00_1345 =
										CBOOL(PROCEDURE_ENTRY(BgL_fun3297z00_836)
										(BgL_fun3297z00_836, BEOA));
								}
								if (BgL_testz00_1345)
									{
										obj_t BgL_hnamesz00_1352;

										obj_t BgL_hooksz00_1350;

										BgL_hooksz00_1350 = CDR(BgL_hooksz00_827);
										BgL_hnamesz00_1352 = CDR(BgL_hnamesz00_828);
										BgL_hnamesz00_828 = BgL_hnamesz00_1352;
										BgL_hooksz00_827 = BgL_hooksz00_1350;
										goto BgL_zc3anonymousza33289ze3z83_829;
									}
								else
									{	/* Coerce/walk.scm 48 */
										obj_t BgL_arg3295z00_835;

										BgL_arg3295z00_835 = CAR(BgL_hnamesz00_828);
										return
											BGl_internalzd2errorzd2zztools_errorz00
											(BGl_za2currentzd2passza2zd2zzengine_passz00,
											BGl_string3359z00zzcoerce_walkz00, BgL_arg3295z00_835);
									}
							}
					}
			}
		}
	}



/* _coerce-walk! */
	obj_t BGl__coercezd2walkz12zc0zzcoerce_walkz00(obj_t BgL_envz00_1245,
		obj_t BgL_astz00_1246)
	{
		AN_OBJECT;
		{	/* Coerce/walk.scm 34 */
			return BGl_coercezd2walkz12zc0zzcoerce_walkz00(BgL_astz00_1246);
		}
	}



/* <anonymous:3276> */
	obj_t BGl_zc3anonymousza33276ze3z83zzcoerce_walkz00(obj_t BgL_envz00_1247,
		obj_t BgL_globalz00_1248)
	{
		AN_OBJECT;
		{	/* Coerce/walk.scm 43 */
			{
				obj_t BgL_globalz00_806;

				BgL_globalz00_806 = BgL_globalz00_1248;
				{	/* Coerce/walk.scm 44 */
					bool_t BgL_testz00_1357;

					{	/* Coerce/walk.scm 44 */
						bool_t BgL_testz00_1358;

						{	/* Coerce/walk.scm 44 */
							BgL_valuez00_bglt BgL_arg3283z00_815;

							{
								BgL_variablez00_bglt BgL_auxz00_1359;

								BgL_auxz00_1359 = (BgL_variablez00_bglt) (BgL_globalz00_806);
								BgL_arg3283z00_815 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_1359))->
									BgL_valuez00);
							}
							{	/* Coerce/walk.scm 44 */
								obj_t BgL_obj1856z00_1225;

								BgL_obj1856z00_1225 = (obj_t) (BgL_arg3283z00_815);
								BgL_testz00_1358 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj1856z00_1225,
									BGl_funz00zzast_varz00);
							}
						}
						if (BgL_testz00_1358)
							{	/* Coerce/walk.scm 44 */
								BgL_testz00_1357 = ((bool_t) 0);
							}
						else
							{	/* Coerce/walk.scm 45 */
								bool_t BgL__ortest_3248z00_810;

								{	/* Coerce/walk.scm 45 */
									obj_t BgL_auxz00_1364;

									{
										BgL_globalz00_bglt BgL_auxz00_1365;

										BgL_auxz00_1365 = (BgL_globalz00_bglt) (BgL_globalz00_806);
										BgL_auxz00_1364 =
											(((BgL_globalz00_bglt) CREF(BgL_auxz00_1365))->
											BgL_importz00);
									}
									BgL__ortest_3248z00_810 =
										(BgL_auxz00_1364 == CNST_TABLE_REF(((long) 2)));
								}
								if (BgL__ortest_3248z00_810)
									{	/* Coerce/walk.scm 45 */
										BgL_testz00_1357 = BgL__ortest_3248z00_810;
									}
								else
									{	/* Coerce/walk.scm 46 */
										obj_t BgL_auxz00_1371;

										{
											BgL_globalz00_bglt BgL_auxz00_1372;

											BgL_auxz00_1372 =
												(BgL_globalz00_bglt) (BgL_globalz00_806);
											BgL_auxz00_1371 =
												(((BgL_globalz00_bglt) CREF(BgL_auxz00_1372))->
												BgL_importz00);
										}
										BgL_testz00_1357 =
											(BgL_auxz00_1371 == CNST_TABLE_REF(((long) 3)));
					}}}
					if (BgL_testz00_1357)
						{	/* Coerce/walk.scm 44 */
							return
								BGl_pvariablezd2protozd2zzcoerce_pprotoz00(((long) 3),
								(BgL_variablez00_bglt) (BgL_globalz00_806));
						}
					else
						{	/* Coerce/walk.scm 44 */
							return BFALSE;
						}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcoerce_walkz00()
	{
		AN_OBJECT;
		{	/* Coerce/walk.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcoerce_walkz00()
	{
		AN_OBJECT;
		{	/* Coerce/walk.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcoerce_walkz00()
	{
		AN_OBJECT;
		{	/* Coerce/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3360z00zzcoerce_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3360z00zzcoerce_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string3360z00zzcoerce_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3360z00zzcoerce_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3360z00zzcoerce_walkz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3360z00zzcoerce_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3360z00zzcoerce_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3360z00zzcoerce_walkz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3360z00zzcoerce_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3360z00zzcoerce_walkz00));
			BGl_modulezd2initializa7ationz75zzast_removez00(((long) 52292466),
				BSTRING_TO_STRING(BGl_string3360z00zzcoerce_walkz00));
			BGl_modulezd2initializa7ationz75zzcoerce_pprotoz00(((long) 30250399),
				BSTRING_TO_STRING(BGl_string3360z00zzcoerce_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 387636515),
				BSTRING_TO_STRING(BGl_string3360z00zzcoerce_walkz00));
		}
	}

#ifdef __cplusplus
}
#endif
