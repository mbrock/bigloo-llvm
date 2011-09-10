/*===========================================================================*/
/*   (Globalize/globalize.scm)                                               */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Globalize/globalize.scm)*/
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_sfunzf2ginfozf2_bgl
	{
		bool_t BgL_gzf3zf3;
		obj_t BgL_cfromz00;
		obj_t BgL_cfromza2za2;
		obj_t BgL_ctoz00;
		obj_t BgL_ctoza2za2;
		obj_t BgL_cfunctionz00;
		obj_t BgL_integratorz00;
		obj_t BgL_imarkz00;
		obj_t BgL_ownerz00;
		obj_t BgL_integratedz00;
		obj_t BgL_pluggedzd2inzd2;
		long BgL_markz00;
		obj_t BgL_freezd2markzd2;
		obj_t BgL_thezd2globalzd2;
		obj_t BgL_kapturedz00;
		obj_t BgL_newzd2bodyzd2;
		long BgL_bmarkz00;
		long BgL_umarkz00;
		obj_t BgL_freez00;
		obj_t BgL_boundz00;
	}                      *BgL_sfunzf2ginfozf2_bglt;

	typedef struct BgL_globalzf2ginfozf2_bgl
	{
		bool_t BgL_escapezf3zf3;
		obj_t BgL_globalzd2closurezd2;
	}                        *BgL_globalzf2ginfozf2_bglt;


	static bool_t BGl_verbzd2globaliza7ationz75zzglobaliza7e_globaliza7ez00();
	extern BgL_globalz00_bglt
		BGl_globalzd2closurezd2zzglobaliza7e_globalzd2closurez75(BgL_globalz00_bglt,
		obj_t);
	extern obj_t BGl_variablez00zzast_varz00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_globaliza7ez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_checkzd2sharingzd2(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_globalzd2closurez75(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_localzd2ze3globalz96(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_newzd2bodyz75(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_integrationzd228cz75(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_integrationza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_gnza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_kaptureza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_freeza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_nodeza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzglobaliza7e_globaliza7ez00();
	extern BgL_nodez00_bglt
		BGl_nodezd2globaliza7ez12z67zzglobaliza7e_nodeza7(BgL_nodez00_bglt,
		BgL_variablez00_bglt, obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	extern obj_t BGl_Gnz12z12zzglobaliza7e_gnza7(obj_t, BgL_nodez00_bglt,
		BgL_variablez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globaliza7ez12zb5zzglobaliza7e_globaliza7ez00(BgL_globalz00_bglt);
	extern bool_t BGl_globalzd2optionalzf3z21zzast_varz00(obj_t);
	extern obj_t BGl_za2verboseza2z00zzengine_paramz00;
	static obj_t BGl_methodzd2initzd2zzglobaliza7e_globaliza7ez00();
	extern obj_t
		BGl_setzd2globaliza7edzd2newzd2bodiesz12z67zzglobaliza7e_newzd2bodyz75
		(BgL_globalz00_bglt, obj_t);
	extern obj_t BGl_setzd2kapturedz12zc0zzglobaliza7e_kaptureza7(obj_t);
	extern BgL_globalz00_bglt
		BGl_localzd2ze3globalz31zzglobaliza7e_localzd2ze3globalz96
		(BgL_localz00_bglt);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzglobaliza7e_globaliza7ez00 =
		BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzglobaliza7e_globaliza7ez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_globaliza7ez00();
	static obj_t BGl__globaliza7ez12zb5zzglobaliza7e_globaliza7ez00(obj_t, obj_t);
	extern obj_t
		BGl_setzd2integrationzd228cz12z12zzglobaliza7e_integrationzd228cz75
		(BgL_globalz00_bglt, obj_t, obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern obj_t
		BGl_setzd2integrationz12zc0zzglobaliza7e_integrationza7(BgL_globalz00_bglt,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_za2globaliza7ezd2integratezd228cza2za7zzengine_paramz00;
	extern obj_t BGl_localz00zzast_varz00;
	extern bool_t BGl_globalzd2keyzf3z21zzast_varz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_globaliza7ez00();
	BGL_EXPORTED_DEF obj_t BGl_za2Eza2z00zzglobaliza7e_globaliza7ez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2G0za2z00zzglobaliza7e_globaliza7ez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2G1za2z00zzglobaliza7e_globaliza7ez00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string3784z00zzglobaliza7e_globaliza7ez00,
		BgL_bgl_string3784za700za7za7g3791za7, ": ", 2);
	      DEFINE_STRING(BGl_string3785z00zzglobaliza7e_globaliza7ez00,
		BgL_bgl_string3785za700za7za7g3792za7, "        ", 8);
	      DEFINE_STRING(BGl_string3786z00zzglobaliza7e_globaliza7ez00,
		BgL_bgl_string3786za700za7za7g3793za7, " ==>", 4);
	      DEFINE_STRING(BGl_string3787z00zzglobaliza7e_globaliza7ez00,
		BgL_bgl_string3787za700za7za7g3794za7, "           ", 11);
	      DEFINE_STRING(BGl_string3788z00zzglobaliza7e_globaliza7ez00,
		BgL_bgl_string3788za700za7za7g3795za7, " --> ", 5);
	      DEFINE_STRING(BGl_string3790z00zzglobaliza7e_globaliza7ez00,
		BgL_bgl_string3790za700za7za7g3796za7, "globalize_globalize", 19);
	      DEFINE_STRING(BGl_string3789z00zzglobaliza7e_globaliza7ez00,
		BgL_bgl_string3789za700za7za7g3797za7, " -->", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globaliza7ez12zd2envz67zzglobaliza7e_globaliza7ez00,
		BgL_bgl__globaliza7a7eza712za73798za7,
		BGl__globaliza7ez12zb5zzglobaliza7e_globaliza7ez00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_globaliza7ez00(long
		BgL_checksumz00_1474, char *BgL_fromz00_1475)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzglobaliza7e_globaliza7ez00))
				{
					BGl_requirezd2initializa7ationz75zzglobaliza7e_globaliza7ez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzglobaliza7e_globaliza7ez00();
					BGl_importedzd2moduleszd2initz00zzglobaliza7e_globaliza7ez00();
					BGl_toplevelzd2initzd2zzglobaliza7e_globaliza7ez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_globaliza7ez00()
	{
		AN_OBJECT;
		{	/* Globalize/globalize.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"globalize_globalize");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"globalize_globalize");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"globalize_globalize");
			return BUNSPEC;
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzglobaliza7e_globaliza7ez00()
	{
		AN_OBJECT;
		{	/* Globalize/globalize.scm 15 */
			BGl_za2Eza2z00zzglobaliza7e_globaliza7ez00 = BNIL;
			BGl_za2G0za2z00zzglobaliza7e_globaliza7ez00 = BNIL;
			return (BGl_za2G1za2z00zzglobaliza7e_globaliza7ez00 = BNIL, BUNSPEC);
		}
	}



/* globalize! */
	BGL_EXPORTED_DEF obj_t
		BGl_globaliza7ez12zb5zzglobaliza7e_globaliza7ez00(BgL_globalz00_bglt
		BgL_globalz00_1)
	{
		AN_OBJECT;
		{	/* Globalize/globalize.scm 50 */
			if (BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BINT(((long) 3)),
					BGl_za2verboseza2z00zzengine_paramz00))
				{	/* Globalize/globalize.scm 57 */
					obj_t BgL_arg3651z00_915;

					BgL_arg3651z00_915 =
						BGl_shapez00zztools_shapez00((obj_t) (BgL_globalz00_1));
					{	/* Globalize/globalize.scm 57 */
						obj_t BgL_list3653z00_917;

						{	/* Globalize/globalize.scm 57 */
							obj_t BgL_arg3654z00_918;

							{	/* Globalize/globalize.scm 57 */
								obj_t BgL_arg3655z00_919;

								{	/* Globalize/globalize.scm 57 */
									obj_t BgL_arg3656z00_920;

									BgL_arg3656z00_920 =
										MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
									BgL_arg3655z00_919 =
										MAKE_PAIR(BGl_string3784z00zzglobaliza7e_globaliza7ez00,
										BgL_arg3656z00_920);
								}
								BgL_arg3654z00_918 =
									MAKE_PAIR(BgL_arg3651z00_915, BgL_arg3655z00_919);
							}
							BgL_list3653z00_917 =
								MAKE_PAIR(BGl_string3785z00zzglobaliza7e_globaliza7ez00,
								BgL_arg3654z00_918);
						}
						BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
							BgL_list3653z00_917);
				}}
			else
				{	/* Globalize/globalize.scm 57 */
					BUNSPEC;
				}
			{	/* Globalize/globalize.scm 58 */
				BgL_valuez00_bglt BgL_funz00_921;

				{
					BgL_variablez00_bglt BgL_auxz00_1497;

					BgL_auxz00_1497 = (BgL_variablez00_bglt) (BgL_globalz00_1);
					BgL_funz00_921 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_1497))->BgL_valuez00);
				}
				BGl_za2Eza2z00zzglobaliza7e_globaliza7ez00 = BNIL;
				BGl_za2G0za2z00zzglobaliza7e_globaliza7ez00 = BNIL;
				BGl_za2G1za2z00zzglobaliza7e_globaliza7ez00 = BNIL;
				{	/* Globalize/globalize.scm 62 */
					obj_t BgL_arg3657z00_922;

					obj_t BgL_arg3658z00_923;

					{
						BgL_sfunz00_bglt BgL_auxz00_1500;

						BgL_auxz00_1500 = (BgL_sfunz00_bglt) (BgL_funz00_921);
						BgL_arg3657z00_922 =
							(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1500))->BgL_argsz00);
					}
					{
						BgL_sfunz00_bglt BgL_auxz00_1503;

						BgL_auxz00_1503 = (BgL_sfunz00_bglt) (BgL_funz00_921);
						BgL_arg3658z00_923 =
							(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1503))->BgL_bodyz00);
					}
					BGl_Gnz12z12zzglobaliza7e_gnza7(BgL_arg3657z00_922,
						(BgL_nodez00_bglt) (BgL_arg3658z00_923),
						(BgL_variablez00_bglt) (BgL_globalz00_1), BNIL);
				}
				if (CBOOL(BGl_za2globaliza7ezd2integratezd228cza2za7zzengine_paramz00))
					{	/* Globalize/globalize.scm 71 */
						BGl_setzd2integrationzd228cz12z12zzglobaliza7e_integrationzd228cz75
							(BgL_globalz00_1, BGl_za2Eza2z00zzglobaliza7e_globaliza7ez00,
							BGl_za2G0za2z00zzglobaliza7e_globaliza7ez00,
							BGl_za2G1za2z00zzglobaliza7e_globaliza7ez00);
					}
				else
					{	/* Globalize/globalize.scm 71 */
						BGl_setzd2integrationz12zc0zzglobaliza7e_integrationza7
							(BgL_globalz00_1, BGl_za2Eza2z00zzglobaliza7e_globaliza7ez00,
							BGl_za2G0za2z00zzglobaliza7e_globaliza7ez00,
							BGl_za2G1za2z00zzglobaliza7e_globaliza7ez00);
					}
				{	/* Globalize/globalize.scm 75 */
					obj_t BgL_gz00_925;

					{
						obj_t BgL_g1z00_951;

						obj_t BgL_gz00_952;

						BgL_g1z00_951 = BGl_za2G1za2z00zzglobaliza7e_globaliza7ez00;
						BgL_gz00_952 = BGl_za2Eza2z00zzglobaliza7e_globaliza7ez00;
					BgL_zc3anonymousza33677ze3z83_953:
						if (NULLP(BgL_g1z00_951))
							{	/* Globalize/globalize.scm 78 */
								BgL_gz00_925 = BgL_gz00_952;
							}
						else
							{	/* Globalize/globalize.scm 80 */
								bool_t BgL_testz00_1515;

								{	/* Globalize/globalize.scm 80 */
									obj_t BgL_arg3684z00_960;

									{	/* Globalize/globalize.scm 80 */
										BgL_sfunzf2ginfozf2_bglt BgL_obj3342z00_1442;

										{	/* Globalize/globalize.scm 80 */
											BgL_valuez00_bglt BgL_auxz00_1516;

											{	/* Globalize/globalize.scm 80 */
												BgL_variablez00_bglt BgL_obj1611z00_1441;

												{	/* Globalize/globalize.scm 80 */
													obj_t BgL_pairz00_1440;

													BgL_pairz00_1440 = BgL_g1z00_951;
													BgL_obj1611z00_1441 =
														(BgL_variablez00_bglt) (CAR(BgL_pairz00_1440));
												}
												BgL_auxz00_1516 =
													(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1441))->
													BgL_valuez00);
											}
											BgL_obj3342z00_1442 =
												(BgL_sfunzf2ginfozf2_bglt) (BgL_auxz00_1516);
										}
										{
											obj_t BgL_auxz00_1521;

											{	/* Globalize/globalize.scm 80 */
												BgL_objectz00_bglt BgL_auxz00_1522;

												BgL_auxz00_1522 =
													(BgL_objectz00_bglt) (BgL_obj3342z00_1442);
												BgL_auxz00_1521 = BGL_OBJECT_WIDENING(BgL_auxz00_1522);
											}
											BgL_arg3684z00_960 =
												(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_1521))->
												BgL_integratorz00);
										}
									}
									BgL_testz00_1515 =
										BGl_iszd2azf3z21zz__objectz00(BgL_arg3684z00_960,
										BGl_variablez00zzast_varz00);
								}
								if (BgL_testz00_1515)
									{
										obj_t BgL_g1z00_1527;

										BgL_g1z00_1527 = CDR(BgL_g1z00_951);
										BgL_g1z00_951 = BgL_g1z00_1527;
										goto BgL_zc3anonymousza33677ze3z83_953;
									}
								else
									{	/* Globalize/globalize.scm 83 */
										obj_t BgL_arg3681z00_957;

										obj_t BgL_arg3682z00_958;

										BgL_arg3681z00_957 = CDR(BgL_g1z00_951);
										BgL_arg3682z00_958 =
											MAKE_PAIR(CAR(BgL_g1z00_951), BgL_gz00_952);
										{
											obj_t BgL_gz00_1533;

											obj_t BgL_g1z00_1532;

											BgL_g1z00_1532 = BgL_arg3681z00_957;
											BgL_gz00_1533 = BgL_arg3682z00_958;
											BgL_gz00_952 = BgL_gz00_1533;
											BgL_g1z00_951 = BgL_g1z00_1532;
											goto BgL_zc3anonymousza33677ze3z83_953;
										}
									}
							}
					}
					BGl_verbzd2globaliza7ationz75zzglobaliza7e_globaliza7ez00();
					BGl_setzd2globaliza7edzd2newzd2bodiesz12z67zzglobaliza7e_newzd2bodyz75
						(BgL_globalz00_1, BgL_gz00_925);
					BGl_setzd2kapturedz12zc0zzglobaliza7e_kaptureza7(BgL_gz00_925);
					{	/* Globalize/globalize.scm 93 */
						obj_t BgL_g3638z00_926;

						{	/* Globalize/globalize.scm 94 */
							bool_t BgL_testz00_1537;

							{	/* Globalize/globalize.scm 94 */
								BgL_globalzf2ginfozf2_bglt BgL_obj3579z00_1447;

								BgL_obj3579z00_1447 =
									(BgL_globalzf2ginfozf2_bglt) (BgL_globalz00_1);
								{
									obj_t BgL_auxz00_1539;

									{	/* Globalize/globalize.scm 94 */
										BgL_objectz00_bglt BgL_auxz00_1540;

										BgL_auxz00_1540 =
											(BgL_objectz00_bglt) (BgL_obj3579z00_1447);
										BgL_auxz00_1539 = BGL_OBJECT_WIDENING(BgL_auxz00_1540);
									}
									BgL_testz00_1537 =
										(((BgL_globalzf2ginfozf2_bglt) CREF(BgL_auxz00_1539))->
										BgL_escapezf3zf3);
								}
							}
							if (BgL_testz00_1537)
								{	/* Globalize/globalize.scm 95 */
									BgL_globalz00_bglt BgL_cloz00_941;

									{	/* Globalize/globalize.scm 97 */
										obj_t BgL_arg3674z00_947;

										{	/* Globalize/globalize.scm 96 */
											BgL_nodez00_bglt BgL_obj2091z00_1449;

											{	/* Globalize/globalize.scm 97 */
												BgL_sfunz00_bglt BgL_obj1884z00_1448;

												BgL_obj1884z00_1448 =
													(BgL_sfunz00_bglt) (BgL_funz00_921);
												BgL_obj2091z00_1449 =
													(BgL_nodez00_bglt) (
													(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_1448))->
														BgL_bodyz00));
											}
											BgL_arg3674z00_947 =
												(((BgL_nodez00_bglt) CREF(BgL_obj2091z00_1449))->
												BgL_locz00);
										}
										BgL_cloz00_941 =
											BGl_globalzd2closurezd2zzglobaliza7e_globalzd2closurez75
											(BgL_globalz00_1, BgL_arg3674z00_947);
									}
									{	/* Globalize/globalize.scm 98 */
										bool_t BgL_testz00_1549;

										if (BGl_globalzd2optionalzf3z21zzast_varz00(
												(obj_t) (BgL_globalz00_1)))
											{	/* Globalize/globalize.scm 98 */
												BgL_testz00_1549 = ((bool_t) 1);
											}
										else
											{	/* Globalize/globalize.scm 98 */
												BgL_testz00_1549 =
													BGl_globalzd2keyzf3z21zzast_varz00(
													(obj_t) (BgL_globalz00_1));
											}
										if (BgL_testz00_1549)
											{	/* Globalize/globalize.scm 104 */
												obj_t BgL_list3670z00_943;

												BgL_list3670z00_943 =
													MAKE_PAIR((obj_t) (BgL_globalz00_1), BNIL);
												BgL_g3638z00_926 = BgL_list3670z00_943;
											}
										else
											{	/* Globalize/globalize.scm 105 */
												obj_t BgL_list3671z00_944;

												{	/* Globalize/globalize.scm 105 */
													obj_t BgL_arg3672z00_945;

													BgL_arg3672z00_945 =
														MAKE_PAIR((obj_t) (BgL_globalz00_1), BNIL);
													BgL_list3671z00_944 =
														MAKE_PAIR(
														(obj_t) (BgL_cloz00_941), BgL_arg3672z00_945);
												}
												BgL_g3638z00_926 = BgL_list3671z00_944;
											}
									}
								}
							else
								{	/* Globalize/globalize.scm 106 */
									obj_t BgL_list3676z00_949;

									BgL_list3676z00_949 =
										MAKE_PAIR((obj_t) (BgL_globalz00_1), BNIL);
									BgL_g3638z00_926 = BgL_list3676z00_949;
								}
						}
						{
							obj_t BgL_gz00_928;

							obj_t BgL_newzd2gzd2_929;

							BgL_gz00_928 = BgL_gz00_925;
							BgL_newzd2gzd2_929 = BgL_g3638z00_926;
						BgL_zc3anonymousza33660ze3z83_930:
							if (NULLP(BgL_gz00_928))
								{	/* Globalize/globalize.scm 109 */
									BgL_nodez00_bglt BgL_bodyz00_932;

									{	/* Globalize/globalize.scm 109 */
										obj_t BgL_arg3662z00_933;

										{
											BgL_sfunz00_bglt BgL_auxz00_1565;

											BgL_auxz00_1565 = (BgL_sfunz00_bglt) (BgL_funz00_921);
											BgL_arg3662z00_933 =
												(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1565))->
												BgL_bodyz00);
										}
										BgL_bodyz00_932 =
											BGl_nodezd2globaliza7ez12z67zzglobaliza7e_nodeza7(
											(BgL_nodez00_bglt) (BgL_arg3662z00_933),
											(BgL_variablez00_bglt) (BgL_globalz00_1), BNIL);
									}
									{
										obj_t BgL_auxz00_1573;

										BgL_sfunz00_bglt BgL_auxz00_1571;

										BgL_auxz00_1573 = (obj_t) (BgL_bodyz00_932);
										BgL_auxz00_1571 = (BgL_sfunz00_bglt) (BgL_funz00_921);
										((((BgL_sfunz00_bglt) CREF(BgL_auxz00_1571))->BgL_bodyz00) =
											((obj_t) BgL_auxz00_1573), BUNSPEC);
									}
									return BgL_newzd2gzd2_929;
								}
							else
								{	/* Globalize/globalize.scm 113 */
									obj_t BgL_arg3664z00_935;

									obj_t BgL_arg3665z00_936;

									BgL_arg3664z00_935 = CDR(BgL_gz00_928);
									{	/* Globalize/globalize.scm 114 */
										BgL_globalz00_bglt BgL_arg3666z00_937;

										{	/* Globalize/globalize.scm 114 */
											obj_t BgL_arg3667z00_938;

											BgL_arg3667z00_938 = CAR(BgL_gz00_928);
											BgL_arg3666z00_937 =
												BGl_localzd2ze3globalz31zzglobaliza7e_localzd2ze3globalz96
												((BgL_localz00_bglt) (BgL_arg3667z00_938));
										}
										BgL_arg3665z00_936 =
											MAKE_PAIR(
											(obj_t) (BgL_arg3666z00_937), BgL_newzd2gzd2_929);
									}
									{
										obj_t BgL_newzd2gzd2_1583;

										obj_t BgL_gz00_1582;

										BgL_gz00_1582 = BgL_arg3664z00_935;
										BgL_newzd2gzd2_1583 = BgL_arg3665z00_936;
										BgL_newzd2gzd2_929 = BgL_newzd2gzd2_1583;
										BgL_gz00_928 = BgL_gz00_1582;
										goto BgL_zc3anonymousza33660ze3z83_930;
									}
								}
						}
					}
				}
			}
		}
	}



/* _globalize! */
	obj_t BGl__globaliza7ez12zb5zzglobaliza7e_globaliza7ez00(obj_t
		BgL_envz00_1472, obj_t BgL_globalz00_1473)
	{
		AN_OBJECT;
		{	/* Globalize/globalize.scm 50 */
			return
				BGl_globaliza7ez12zb5zzglobaliza7e_globaliza7ez00(
				(BgL_globalz00_bglt) (BgL_globalz00_1473));
		}
	}



/* verb-globalization */
	bool_t BGl_verbzd2globaliza7ationz75zzglobaliza7e_globaliza7ez00()
	{
		AN_OBJECT;
		{	/* Globalize/globalize.scm 119 */
			{
				obj_t BgL_l3642z00_965;

				BgL_l3642z00_965 = BGl_za2Eza2z00zzglobaliza7e_globaliza7ez00;
			BgL_zc3anonymousza33687ze3z83_966:
				if (PAIRP(BgL_l3642z00_965))
					{	/* Globalize/globalize.scm 120 */
						{	/* Globalize/globalize.scm 121 */
							obj_t BgL_localz00_968;

							BgL_localz00_968 = CAR(BgL_l3642z00_965);
							if (BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BINT(((long) 3)),
									BGl_za2verboseza2z00zzengine_paramz00))
								{	/* Globalize/globalize.scm 121 */
									if (BGl_zc3zd3z10zz__r4_numbers_6_5z00(BINT(((long) 3)),
											BGl_za2verboseza2z00zzengine_paramz00, BNIL))
										{	/* Globalize/globalize.scm 121 */
											obj_t BgL_arg3692z00_974;

											BgL_arg3692z00_974 =
												BGl_shapez00zztools_shapez00(BgL_localz00_968);
											{	/* Globalize/globalize.scm 121 */
												obj_t BgL_list3694z00_976;

												{	/* Globalize/globalize.scm 121 */
													obj_t BgL_arg3695z00_977;

													{	/* Globalize/globalize.scm 121 */
														obj_t BgL_arg3696z00_978;

														{	/* Globalize/globalize.scm 121 */
															obj_t BgL_arg3697z00_979;

															BgL_arg3697z00_979 =
																MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
															BgL_arg3696z00_978 =
																MAKE_PAIR
																(BGl_string3786z00zzglobaliza7e_globaliza7ez00,
																BgL_arg3697z00_979);
														}
														BgL_arg3695z00_977 =
															MAKE_PAIR(BgL_arg3692z00_974, BgL_arg3696z00_978);
													}
													BgL_list3694z00_976 =
														MAKE_PAIR
														(BGl_string3787z00zzglobaliza7e_globaliza7ez00,
														BgL_arg3695z00_977);
												}
												BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
													BgL_list3694z00_976);
										}}
									else
										{	/* Globalize/globalize.scm 121 */
											BUNSPEC;
										}
								}
							else
								{	/* Globalize/globalize.scm 121 */
									BFALSE;
								}
						}
						{
							obj_t BgL_l3642z00_1603;

							BgL_l3642z00_1603 = CDR(BgL_l3642z00_965);
							BgL_l3642z00_965 = BgL_l3642z00_1603;
							goto BgL_zc3anonymousza33687ze3z83_966;
						}
					}
				else
					{	/* Globalize/globalize.scm 120 */
						((bool_t) 1);
					}
			}
			{
				obj_t BgL_l3645z00_984;

				BgL_l3645z00_984 = BGl_za2G1za2z00zzglobaliza7e_globaliza7ez00;
			BgL_zc3anonymousza33700ze3z83_985:
				if (PAIRP(BgL_l3645z00_984))
					{	/* Globalize/globalize.scm 123 */
						{	/* Globalize/globalize.scm 124 */
							obj_t BgL_localz00_987;

							BgL_localz00_987 = CAR(BgL_l3645z00_984);
							{	/* Globalize/globalize.scm 124 */
								BgL_valuez00_bglt BgL_sfunzf2ginfozf2_988;

								{
									BgL_variablez00_bglt BgL_auxz00_1608;

									BgL_auxz00_1608 = (BgL_variablez00_bglt) (BgL_localz00_987);
									BgL_sfunzf2ginfozf2_988 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_1608))->
										BgL_valuez00);
								}
								{	/* Globalize/globalize.scm 125 */
									bool_t BgL_testz00_1611;

									{	/* Globalize/globalize.scm 125 */
										obj_t BgL_arg3726z00_1017;

										{	/* Globalize/globalize.scm 125 */
											BgL_sfunzf2ginfozf2_bglt BgL_obj3342z00_1468;

											BgL_obj3342z00_1468 =
												(BgL_sfunzf2ginfozf2_bglt) (BgL_sfunzf2ginfozf2_988);
											{
												obj_t BgL_auxz00_1613;

												{	/* Globalize/globalize.scm 125 */
													BgL_objectz00_bglt BgL_auxz00_1614;

													BgL_auxz00_1614 =
														(BgL_objectz00_bglt) (BgL_obj3342z00_1468);
													BgL_auxz00_1613 =
														BGL_OBJECT_WIDENING(BgL_auxz00_1614);
												}
												BgL_arg3726z00_1017 =
													(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_1613))->
													BgL_integratorz00);
											}
										}
										BgL_testz00_1611 =
											BGl_iszd2azf3z21zz__objectz00(BgL_arg3726z00_1017,
											BGl_localz00zzast_varz00);
									}
									if (BgL_testz00_1611)
										{	/* Globalize/globalize.scm 125 */
											if (BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BINT(((long) 3)),
													BGl_za2verboseza2z00zzengine_paramz00))
												{	/* Globalize/globalize.scm 126 */
													if (BGl_zc3zd3z10zz__r4_numbers_6_5z00(BINT(((long)
																	3)), BGl_za2verboseza2z00zzengine_paramz00,
															BNIL))
														{	/* Globalize/globalize.scm 126 */
															obj_t BgL_arg3706z00_995;

															obj_t BgL_arg3708z00_997;

															BgL_arg3706z00_995 =
																BGl_shapez00zztools_shapez00(BgL_localz00_987);
															{	/* Globalize/globalize.scm 129 */
																obj_t BgL_arg3714z00_1003;

																{	/* Globalize/globalize.scm 129 */
																	BgL_sfunzf2ginfozf2_bglt BgL_obj3342z00_1470;

																	BgL_obj3342z00_1470 =
																		(BgL_sfunzf2ginfozf2_bglt)
																		(BgL_sfunzf2ginfozf2_988);
																	{
																		obj_t BgL_auxz00_1627;

																		{	/* Globalize/globalize.scm 129 */
																			BgL_objectz00_bglt BgL_auxz00_1628;

																			BgL_auxz00_1628 =
																				(BgL_objectz00_bglt)
																				(BgL_obj3342z00_1470);
																			BgL_auxz00_1627 =
																				BGL_OBJECT_WIDENING(BgL_auxz00_1628);
																		}
																		BgL_arg3714z00_1003 =
																			(((BgL_sfunzf2ginfozf2_bglt)
																				CREF(BgL_auxz00_1627))->
																			BgL_integratorz00);
																}}
																BgL_arg3708z00_997 =
																	BGl_shapez00zztools_shapez00
																	(BgL_arg3714z00_1003);
															}
															{	/* Globalize/globalize.scm 126 */
																obj_t BgL_list3709z00_998;

																{	/* Globalize/globalize.scm 126 */
																	obj_t BgL_arg3710z00_999;

																	{	/* Globalize/globalize.scm 126 */
																		obj_t BgL_arg3711z00_1000;

																		{	/* Globalize/globalize.scm 126 */
																			obj_t BgL_arg3712z00_1001;

																			{	/* Globalize/globalize.scm 126 */
																				obj_t BgL_arg3713z00_1002;

																				BgL_arg3713z00_1002 =
																					MAKE_PAIR(BCHAR(((unsigned char)
																							'\n')), BNIL);
																				BgL_arg3712z00_1001 =
																					MAKE_PAIR(BgL_arg3708z00_997,
																					BgL_arg3713z00_1002);
																			}
																			BgL_arg3711z00_1000 =
																				MAKE_PAIR
																				(BGl_string3788z00zzglobaliza7e_globaliza7ez00,
																				BgL_arg3712z00_1001);
																		}
																		BgL_arg3710z00_999 =
																			MAKE_PAIR(BgL_arg3706z00_995,
																			BgL_arg3711z00_1000);
																	}
																	BgL_list3709z00_998 =
																		MAKE_PAIR
																		(BGl_string3787z00zzglobaliza7e_globaliza7ez00,
																		BgL_arg3710z00_999);
																}
																BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
																	BgL_list3709z00_998);
														}}
													else
														{	/* Globalize/globalize.scm 126 */
															BUNSPEC;
														}
												}
											else
												{	/* Globalize/globalize.scm 126 */
													BFALSE;
												}
										}
									else
										{	/* Globalize/globalize.scm 125 */
											if (BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BINT(((long) 3)),
													BGl_za2verboseza2z00zzengine_paramz00))
												{	/* Globalize/globalize.scm 131 */
													if (BGl_zc3zd3z10zz__r4_numbers_6_5z00(BINT(((long)
																	3)), BGl_za2verboseza2z00zzengine_paramz00,
															BNIL))
														{	/* Globalize/globalize.scm 131 */
															obj_t BgL_arg3719z00_1010;

															BgL_arg3719z00_1010 =
																BGl_shapez00zztools_shapez00(BgL_localz00_987);
															{	/* Globalize/globalize.scm 131 */
																obj_t BgL_list3721z00_1012;

																{	/* Globalize/globalize.scm 131 */
																	obj_t BgL_arg3722z00_1013;

																	{	/* Globalize/globalize.scm 131 */
																		obj_t BgL_arg3723z00_1014;

																		{	/* Globalize/globalize.scm 131 */
																			obj_t BgL_arg3724z00_1015;

																			BgL_arg3724z00_1015 =
																				MAKE_PAIR(BCHAR(((unsigned char) '\n')),
																				BNIL);
																			BgL_arg3723z00_1014 =
																				MAKE_PAIR
																				(BGl_string3789z00zzglobaliza7e_globaliza7ez00,
																				BgL_arg3724z00_1015);
																		}
																		BgL_arg3722z00_1013 =
																			MAKE_PAIR(BgL_arg3719z00_1010,
																			BgL_arg3723z00_1014);
																	}
																	BgL_list3721z00_1012 =
																		MAKE_PAIR
																		(BGl_string3787z00zzglobaliza7e_globaliza7ez00,
																		BgL_arg3722z00_1013);
																}
																BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
																	BgL_list3721z00_1012);
														}}
													else
														{	/* Globalize/globalize.scm 131 */
															BUNSPEC;
														}
												}
											else
												{	/* Globalize/globalize.scm 131 */
													BFALSE;
												}
										}
								}
							}
						}
						{
							obj_t BgL_l3645z00_1655;

							BgL_l3645z00_1655 = CDR(BgL_l3645z00_984);
							BgL_l3645z00_984 = BgL_l3645z00_1655;
							goto BgL_zc3anonymousza33700ze3z83_985;
						}
					}
				else
					{	/* Globalize/globalize.scm 123 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzglobaliza7e_globaliza7ez00()
	{
		AN_OBJECT;
		{	/* Globalize/globalize.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzglobaliza7e_globaliza7ez00()
	{
		AN_OBJECT;
		{	/* Globalize/globalize.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_globaliza7ez00()
	{
		AN_OBJECT;
		{	/* Globalize/globalize.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3790z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3790z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3790z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3790z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3790z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3790z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3790z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(((long) 0),
				BSTRING_TO_STRING(BGl_string3790z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_nodeza7(((long) 157543843),
				BSTRING_TO_STRING(BGl_string3790z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_freeza7(((long) 242972228),
				BSTRING_TO_STRING(BGl_string3790z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_kaptureza7(((long)
					482601228),
				BSTRING_TO_STRING(BGl_string3790z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_gnza7(((long) 469267595),
				BSTRING_TO_STRING(BGl_string3790z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_integrationza7(((long)
					438473890),
				BSTRING_TO_STRING(BGl_string3790z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_integrationzd228cz75(((long)
					228417906),
				BSTRING_TO_STRING(BGl_string3790z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_newzd2bodyz75(((long)
					416160793),
				BSTRING_TO_STRING(BGl_string3790z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_localzd2ze3globalz96(((long)
					76915944),
				BSTRING_TO_STRING(BGl_string3790z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_globalzd2closurez75(((long)
					55366255),
				BSTRING_TO_STRING(BGl_string3790z00zzglobaliza7e_globaliza7ez00));
			return BGl_modulezd2initializa7ationz75zzast_checkzd2sharingzd2(((long)
					53844767),
				BSTRING_TO_STRING(BGl_string3790z00zzglobaliza7e_globaliza7ez00));
		}
	}

#ifdef __cplusplus
}
#endif
