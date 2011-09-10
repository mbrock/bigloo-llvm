/*===========================================================================*/
/*   (Ast/exit.scm)                                                          */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/exit.scm)*/
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

	typedef struct BgL_sexitz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_handlerz00;
		bool_t BgL_detachedzf3zf3;
	}               *BgL_sexitz00_bglt;

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

	typedef struct BgL_letzd2funzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_localsz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
	}                   *BgL_letzd2funzd2_bglt;

	typedef struct BgL_setzd2exzd2itz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
	}                       *BgL_setzd2exzd2itz00_bglt;

	typedef struct BgL_jumpzd2exzd2itz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_exitz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}                        *BgL_jumpzd2exzd2itz00_bglt;


	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_makezd2anonymouszd2namez00zzast_sexpz00(obj_t, obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	static obj_t BGl_cnstzd2initzd2zzast_exitz00();
	BGL_EXPORTED_DECL BgL_letzd2funzd2_bglt
		BGl_setzd2exitzd2ze3nodeze3zzast_exitz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_exitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_EXPORTED_DECL BgL_jumpzd2exzd2itz00_bglt
		BGl_jumpzd2exitzd2ze3nodeze3zzast_exitz00(obj_t, obj_t, obj_t, obj_t);
	extern BgL_setzd2exzd2itz00_bglt
		BGl_makezd2setzd2exzd2itzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_varz00_bglt, BgL_nodez00_bglt);
	extern BgL_nodez00_bglt BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00(obj_t,
		obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_exitz00();
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_exitz00 = BUNSPEC;
	static obj_t BGl__setzd2exitzd2ze3nodeze3zzast_exitz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzast_exitz00();
	extern BgL_jumpzd2exzd2itz00_bglt
		BGl_makezd2jumpzd2exzd2itzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_nodez00_bglt, BgL_nodez00_bglt);
	extern BgL_localz00_bglt BGl_makezd2localzd2sexitz00zzast_localz00(obj_t,
		BgL_typez00_bglt, BgL_sexitz00_bglt);
	static obj_t BGl_importedzd2moduleszd2initz00zzast_exitz00();
	extern obj_t BGl_normaliza7ezd2prognz75zztools_prognz00(obj_t);
	extern BgL_sexitz00_bglt BGl_makezd2sexitzd2zzast_varz00(obj_t, bool_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl__jumpzd2exitzd2ze3nodeze3zzast_exitz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern BgL_varz00_bglt BGl_makezd2varzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_variablez00_bglt);
	extern obj_t BGl_za2exitza2z00zztype_cachez00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_exitz00();
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_setzd2exitzd2ze3nodezd2envz31zzast_exitz00,
		BgL_bgl__setza7d2exitza7d2za7e3342za7,
		BGl__setzd2exitzd2ze3nodeze3zzast_exitz00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string3335z00zzast_exitz00,
		BgL_bgl_string3335za700za7za7a3343za7, "exit", 4);
	      DEFINE_STRING(BGl_string3336z00zzast_exitz00,
		BgL_bgl_string3336za700za7za7a3344za7, "Illegal `set-exit' form", 23);
	      DEFINE_STRING(BGl_string3337z00zzast_exitz00,
		BgL_bgl_string3337za700za7za7a3345za7, "Illegal `jump-exit' form", 24);
	      DEFINE_STRING(BGl_string3338z00zzast_exitz00,
		BgL_bgl_string3338za700za7za7a3346za7, "ast_exit", 8);
	      DEFINE_STRING(BGl_string3339z00zzast_exitz00,
		BgL_bgl_string3339za700za7za7a3347za7, "snifun value labels ", 20);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jumpzd2exitzd2ze3nodezd2envz31zzast_exitz00,
		BgL_bgl__jumpza7d2exitza7d2za73348za7,
		BGl__jumpzd2exitzd2ze3nodeze3zzast_exitz00, 0L, BUNSPEC, 4);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_exitz00(long
		BgL_checksumz00_1266, char *BgL_fromz00_1267)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_exitz00))
				{
					BGl_requirezd2initializa7ationz75zzast_exitz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_exitz00();
					BGl_cnstzd2initzd2zzast_exitz00();
					BGl_importedzd2moduleszd2initz00zzast_exitz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_exitz00()
	{
		AN_OBJECT;
		{	/* Ast/exit.scm 14 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_exit");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_exit");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_exitz00()
	{
		AN_OBJECT;
		{	/* Ast/exit.scm 14 */
			{	/* Ast/exit.scm 14 */
				obj_t BgL_cportz00_1258;

				BgL_cportz00_1258 =
					bgl_open_input_string(BGl_string3339z00zzast_exitz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1259;

					BgL_iz00_1259 = ((long) 2);
				BgL_loopz00_1260:
					if ((BgL_iz00_1259 == ((long) -1)))
						{	/* Ast/exit.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/exit.scm 14 */
							{	/* Ast/exit.scm 14 */
								obj_t BgL_arg3341z00_1262;

								{	/* Ast/exit.scm 14 */

									{	/* Ast/exit.scm 14 */
										obj_t BgL_locationz00_1264;

										BgL_locationz00_1264 = BBOOL(((bool_t) 0));
										{	/* Ast/exit.scm 14 */

											BgL_arg3341z00_1262 =
												BGl_readz00zz__readerz00(BgL_cportz00_1258,
												BgL_locationz00_1264);
										}
									}
								}
								{	/* Ast/exit.scm 14 */
									int BgL_auxz00_1282;

									BgL_auxz00_1282 = (int) (BgL_iz00_1259);
									CNST_TABLE_SET(BgL_auxz00_1282, BgL_arg3341z00_1262);
							}}
							{	/* Ast/exit.scm 14 */
								int BgL_auxz00_1265;

								BgL_auxz00_1265 = (int) ((BgL_iz00_1259 - ((long) 1)));
								{
									long BgL_iz00_1287;

									BgL_iz00_1287 = (long) (BgL_auxz00_1265);
									BgL_iz00_1259 = BgL_iz00_1287;
									goto BgL_loopz00_1260;
								}
							}
						}
				}
			}
		}
	}



/* set-exit->node */
	BGL_EXPORTED_DEF BgL_letzd2funzd2_bglt
		BGl_setzd2exitzd2ze3nodeze3zzast_exitz00(obj_t BgL_expz00_1,
		obj_t BgL_stackz00_2, obj_t BgL_locz00_3, obj_t BgL_sitez00_4)
	{
		AN_OBJECT;
		{	/* Ast/exit.scm 33 */
			{	/* Ast/exit.scm 36 */
				obj_t BgL_locz00_782;

				BgL_locz00_782 =
					BGl_findzd2locationzf2locz20zztools_locationz00(BgL_expz00_1,
					BgL_locz00_3);
				{
					obj_t BgL_exitz00_783;

					obj_t BgL_bodyz00_784;

					if (PAIRP(BgL_expz00_1))
						{	/* Ast/exit.scm 37 */
							obj_t BgL_cdrzd21655zd2_789;

							BgL_cdrzd21655zd2_789 = CDR(BgL_expz00_1);
							if (PAIRP(BgL_cdrzd21655zd2_789))
								{	/* Ast/exit.scm 37 */
									obj_t BgL_carzd21658zd2_791;

									BgL_carzd21658zd2_791 = CAR(BgL_cdrzd21655zd2_789);
									if (PAIRP(BgL_carzd21658zd2_791))
										{	/* Ast/exit.scm 37 */
											if (NULLP(CDR(BgL_carzd21658zd2_791)))
												{	/* Ast/exit.scm 37 */
													obj_t BgL_arg3254z00_794;

													obj_t BgL_arg3255z00_795;

													BgL_arg3254z00_794 = CAR(BgL_carzd21658zd2_791);
													BgL_arg3255z00_795 = CDR(BgL_cdrzd21655zd2_789);
													{	/* Ast/exit.scm 37 */
														BgL_nodez00_bglt BgL_auxz00_1303;

														BgL_exitz00_783 = BgL_arg3254z00_794;
														BgL_bodyz00_784 = BgL_arg3255z00_795;
														{	/* Ast/exit.scm 39 */
															obj_t BgL_hdlgzd2namezd2_797;

															{	/* Ast/exit.scm 40 */
																obj_t BgL_arg3277z00_824;

																{	/* Ast/exit.scm 40 */
																	obj_t BgL_list3278z00_825;

																	BgL_list3278z00_825 =
																		MAKE_PAIR(BGl_string3335z00zzast_exitz00,
																		BNIL);
																	BgL_arg3277z00_824 =
																		BGl_makezd2anonymouszd2namez00zzast_sexpz00
																		(BgL_locz00_782, BgL_list3278z00_825);
																}
																BgL_hdlgzd2namezd2_797 =
																	BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																	(BgL_arg3277z00_824);
															}
															{	/* Ast/exit.scm 39 */
																obj_t BgL_hdlgzd2sexpzd2_798;

																{	/* Ast/exit.scm 41 */
																	obj_t BgL_arg3265z00_812;

																	obj_t BgL_arg3266z00_813;

																	BgL_arg3265z00_812 =
																		CNST_TABLE_REF(((long) 0));
																	{	/* Ast/exit.scm 41 */
																		obj_t BgL_arg3267z00_814;

																		obj_t BgL_arg3268z00_815;

																		{	/* Ast/exit.scm 41 */
																			obj_t BgL_arg3272z00_819;

																			{	/* Ast/exit.scm 41 */
																				obj_t BgL_arg3274z00_821;

																				{	/* Ast/exit.scm 41 */
																					obj_t BgL_list3275z00_822;

																					{	/* Ast/exit.scm 41 */
																						obj_t BgL_arg3276z00_823;

																						BgL_arg3276z00_823 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list3275z00_822 =
																							MAKE_PAIR(BUNSPEC,
																							BgL_arg3276z00_823);
																					}
																					BgL_arg3274z00_821 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BNIL, BgL_list3275z00_822);
																				}
																				BgL_arg3272z00_819 =
																					MAKE_PAIR(BgL_hdlgzd2namezd2_797,
																					BgL_arg3274z00_821);
																			}
																			BgL_arg3267z00_814 =
																				MAKE_PAIR(BgL_arg3272z00_819, BNIL);
																		}
																		BgL_arg3268z00_815 =
																			MAKE_PAIR(BgL_hdlgzd2namezd2_797, BNIL);
																		{	/* Ast/exit.scm 41 */
																			obj_t BgL_list3270z00_817;

																			{	/* Ast/exit.scm 41 */
																				obj_t BgL_arg3271z00_818;

																				BgL_arg3271z00_818 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list3270z00_817 =
																					MAKE_PAIR(BgL_arg3268z00_815,
																					BgL_arg3271z00_818);
																			}
																			BgL_arg3266z00_813 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3267z00_814,
																				BgL_list3270z00_817);
																	}}
																	BgL_hdlgzd2sexpzd2_798 =
																		MAKE_PAIR(BgL_arg3265z00_812,
																		BgL_arg3266z00_813);
																}
																{	/* Ast/exit.scm 41 */
																	BgL_nodez00_bglt BgL_hdlgzd2nodezd2_799;

																	BgL_hdlgzd2nodezd2_799 =
																		BGl_sexpzd2ze3nodez31zzast_sexpz00
																		(BgL_hdlgzd2sexpzd2_798, BgL_stackz00_2,
																		BgL_locz00_782, BgL_sitez00_4);
																	{	/* Ast/exit.scm 43 */
																		obj_t BgL_hdlgzd2funzd2_800;

																		{	/* Ast/exit.scm 44 */
																			obj_t BgL_pairz00_1230;

																			{
																				BgL_letzd2funzd2_bglt BgL_auxz00_1319;

																				BgL_auxz00_1319 =
																					(BgL_letzd2funzd2_bglt)
																					(BgL_hdlgzd2nodezd2_799);
																				BgL_pairz00_1230 =
																					(((BgL_letzd2funzd2_bglt)
																						CREF(BgL_auxz00_1319))->
																					BgL_localsz00);
																			}
																			BgL_hdlgzd2funzd2_800 =
																				CAR(BgL_pairz00_1230);
																		}
																		{	/* Ast/exit.scm 44 */
																			BgL_localz00_bglt BgL_exitz00_801;

																			{	/* Ast/exit.scm 45 */
																				BgL_sexitz00_bglt BgL_arg3280z00_1233;

																				BgL_arg3280z00_1233 =
																					BGl_makezd2sexitzd2zzast_varz00
																					(BgL_hdlgzd2funzd2_800, ((bool_t) 0));
																				BgL_exitz00_801 =
																					BGl_makezd2localzd2sexitz00zzast_localz00
																					(BgL_exitz00_783,
																					(BgL_typez00_bglt)
																					(BGl_za2exitza2z00zztype_cachez00),
																					BgL_arg3280z00_1233);
																			}
																			{	/* Ast/exit.scm 45 */
																				BgL_nodez00_bglt BgL_bodyz00_802;

																				{	/* Ast/exit.scm 46 */
																					obj_t BgL_arg3261z00_808;

																					obj_t BgL_arg3262z00_809;

																					obj_t BgL_arg3263z00_810;

																					BgL_arg3261z00_808 =
																						BGl_normaliza7ezd2prognz75zztools_prognz00
																						(BgL_bodyz00_784);
																					BgL_arg3262z00_809 =
																						MAKE_PAIR((obj_t) (BgL_exitz00_801),
																						BgL_stackz00_2);
																					BgL_arg3263z00_810 =
																						CNST_TABLE_REF(((long) 1));
																					BgL_bodyz00_802 =
																						BGl_sexpzd2ze3nodez31zzast_sexpz00
																						(BgL_arg3261z00_808,
																						BgL_arg3262z00_809, BgL_locz00_782,
																						BgL_arg3263z00_810);
																				}
																				{	/* Ast/exit.scm 46 */
																					BgL_setzd2exzd2itz00_bglt
																						BgL_exitzd2bodyzd2_803;
																					{	/* Ast/exit.scm 53 */
																						BgL_varz00_bglt BgL_arg3260z00_807;

																						BgL_arg3260z00_807 =
																							BGl_makezd2varzd2zzast_nodez00
																							(BgL_locz00_782,
																							(BgL_typez00_bglt)
																							(BGl_za2exitza2z00zztype_cachez00),
																							(BgL_variablez00_bglt)
																							(BgL_exitz00_801));
																						BgL_exitzd2bodyzd2_803 =
																							BGl_makezd2setzd2exzd2itzd2zzast_nodez00
																							(BgL_locz00_782,
																							(BgL_typez00_bglt)
																							(BGl_za2_za2z00zztype_cachez00),
																							BgL_arg3260z00_807,
																							BgL_bodyz00_802);
																					}
																					{	/* Ast/exit.scm 50 */

																						{
																							BgL_localz00_bglt BgL_auxz00_1336;

																							BgL_auxz00_1336 =
																								(BgL_localz00_bglt)
																								(BgL_hdlgzd2funzd2_800);
																							((((BgL_localz00_bglt)
																										CREF(BgL_auxz00_1336))->
																									BgL_userzf3zf3) =
																								((bool_t) ((bool_t) 1)),
																								BUNSPEC);
																						}
																						{	/* Ast/exit.scm 64 */
																							BgL_valuez00_bglt
																								BgL_arg3257z00_804;
																							obj_t BgL_arg3258z00_805;

																							{
																								BgL_variablez00_bglt
																									BgL_auxz00_1339;
																								BgL_auxz00_1339 =
																									(BgL_variablez00_bglt)
																									(BgL_hdlgzd2funzd2_800);
																								BgL_arg3257z00_804 =
																									(((BgL_variablez00_bglt)
																										CREF(BgL_auxz00_1339))->
																									BgL_valuez00);
																							}
																							BgL_arg3258z00_805 =
																								CNST_TABLE_REF(((long) 2));
																							{
																								BgL_sfunz00_bglt
																									BgL_auxz00_1343;
																								BgL_auxz00_1343 =
																									(BgL_sfunz00_bglt)
																									(BgL_arg3257z00_804);
																								((((BgL_sfunz00_bglt)
																											CREF(BgL_auxz00_1343))->
																										BgL_classz00) =
																									((obj_t) BgL_arg3258z00_805),
																									BUNSPEC);
																						}}
																						{	/* Ast/exit.scm 65 */
																							BgL_valuez00_bglt
																								BgL_arg3259z00_806;
																							{
																								BgL_variablez00_bglt
																									BgL_auxz00_1346;
																								BgL_auxz00_1346 =
																									(BgL_variablez00_bglt)
																									(BgL_hdlgzd2funzd2_800);
																								BgL_arg3259z00_806 =
																									(((BgL_variablez00_bglt)
																										CREF(BgL_auxz00_1346))->
																									BgL_valuez00);
																							}
																							{
																								obj_t BgL_auxz00_1351;

																								BgL_sfunz00_bglt
																									BgL_auxz00_1349;
																								BgL_auxz00_1351 =
																									(obj_t)
																									(BgL_exitzd2bodyzd2_803);
																								BgL_auxz00_1349 =
																									(BgL_sfunz00_bglt)
																									(BgL_arg3259z00_806);
																								((((BgL_sfunz00_bglt)
																											CREF(BgL_auxz00_1349))->
																										BgL_bodyz00) =
																									((obj_t) BgL_auxz00_1351),
																									BUNSPEC);
																						}}
																						BgL_auxz00_1303 =
																							BgL_hdlgzd2nodezd2_799;
														}}}}}}}}
														return (BgL_letzd2funzd2_bglt) (BgL_auxz00_1303);
													}
												}
											else
												{	/* Ast/exit.scm 37 */
													BgL_nodez00_bglt BgL_auxz00_1355;

												BgL_tagzd21648zd2_786:
													BgL_auxz00_1355 =
														BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
														(BGl_string3336z00zzast_exitz00, BgL_expz00_1,
														BgL_locz00_782);
													return (BgL_letzd2funzd2_bglt) (BgL_auxz00_1355);
												}
										}
									else
										{	/* Ast/exit.scm 37 */
											BgL_nodez00_bglt BgL_auxz00_1358;

											goto BgL_tagzd21648zd2_786;
											return (BgL_letzd2funzd2_bglt) (BgL_auxz00_1358);
										}
								}
							else
								{	/* Ast/exit.scm 37 */
									BgL_nodez00_bglt BgL_auxz00_1360;

									goto BgL_tagzd21648zd2_786;
									return (BgL_letzd2funzd2_bglt) (BgL_auxz00_1360);
								}
						}
					else
						{	/* Ast/exit.scm 37 */
							BgL_nodez00_bglt BgL_auxz00_1362;

							goto BgL_tagzd21648zd2_786;
							return (BgL_letzd2funzd2_bglt) (BgL_auxz00_1362);
						}
				}
			}
		}
	}



/* _set-exit->node */
	obj_t BGl__setzd2exitzd2ze3nodeze3zzast_exitz00(obj_t BgL_envz00_1248,
		obj_t BgL_expz00_1249, obj_t BgL_stackz00_1250, obj_t BgL_locz00_1251,
		obj_t BgL_sitez00_1252)
	{
		AN_OBJECT;
		{	/* Ast/exit.scm 33 */
			return
				(obj_t) (BGl_setzd2exitzd2ze3nodeze3zzast_exitz00(BgL_expz00_1249,
					BgL_stackz00_1250, BgL_locz00_1251, BgL_sitez00_1252));
		}
	}



/* jump-exit->node */
	BGL_EXPORTED_DEF BgL_jumpzd2exzd2itz00_bglt
		BGl_jumpzd2exitzd2ze3nodeze3zzast_exitz00(obj_t BgL_expz00_5,
		obj_t BgL_stackz00_6, obj_t BgL_locz00_7, obj_t BgL_sitez00_8)
	{
		AN_OBJECT;
		{	/* Ast/exit.scm 73 */
			{	/* Ast/exit.scm 74 */
				obj_t BgL_locz00_831;

				BgL_locz00_831 =
					BGl_findzd2locationzf2locz20zztools_locationz00(BgL_expz00_5,
					BgL_locz00_7);
				{
					obj_t BgL_exitz00_832;

					obj_t BgL_valuez00_833;

					if (PAIRP(BgL_expz00_5))
						{	/* Ast/exit.scm 75 */
							obj_t BgL_cdrzd21673zd2_838;

							BgL_cdrzd21673zd2_838 = CDR(BgL_expz00_5);
							if (PAIRP(BgL_cdrzd21673zd2_838))
								{	/* Ast/exit.scm 75 */
									BgL_exitz00_832 = CAR(BgL_cdrzd21673zd2_838);
									BgL_valuez00_833 = CDR(BgL_cdrzd21673zd2_838);
									{	/* Ast/exit.scm 77 */
										BgL_nodez00_bglt BgL_valuez00_842;

										BgL_nodez00_bglt BgL_exitz00_843;

										{	/* Ast/exit.scm 77 */
											obj_t BgL_arg3285z00_844;

											obj_t BgL_arg3286z00_845;

											BgL_arg3285z00_844 =
												BGl_normaliza7ezd2prognz75zztools_prognz00
												(BgL_valuez00_833);
											BgL_arg3286z00_845 = CNST_TABLE_REF(((long) 1));
											BgL_valuez00_842 =
												BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg3285z00_844,
												BgL_stackz00_6, BgL_locz00_831, BgL_arg3286z00_845);
										}
										BgL_exitz00_843 =
											BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_exitz00_832,
											BgL_stackz00_6, BgL_locz00_831,
											CNST_TABLE_REF(((long) 1)));
										return
											BGl_makezd2jumpzd2exzd2itzd2zzast_nodez00(BgL_locz00_831,
											(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00),
											BgL_exitz00_843, BgL_valuez00_842);
									}
								}
							else
								{	/* Ast/exit.scm 75 */
									BgL_nodez00_bglt BgL_auxz00_1381;

								BgL_tagzd21666zd2_835:
									BgL_auxz00_1381 =
										BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
										(BGl_string3337z00zzast_exitz00, BgL_expz00_5,
										BgL_locz00_831);
									return (BgL_jumpzd2exzd2itz00_bglt) (BgL_auxz00_1381);
								}
						}
					else
						{	/* Ast/exit.scm 75 */
							BgL_nodez00_bglt BgL_auxz00_1384;

							goto BgL_tagzd21666zd2_835;
							return (BgL_jumpzd2exzd2itz00_bglt) (BgL_auxz00_1384);
						}
				}
			}
		}
	}



/* _jump-exit->node */
	obj_t BGl__jumpzd2exitzd2ze3nodeze3zzast_exitz00(obj_t BgL_envz00_1253,
		obj_t BgL_expz00_1254, obj_t BgL_stackz00_1255, obj_t BgL_locz00_1256,
		obj_t BgL_sitez00_1257)
	{
		AN_OBJECT;
		{	/* Ast/exit.scm 73 */
			return
				(obj_t) (BGl_jumpzd2exitzd2ze3nodeze3zzast_exitz00(BgL_expz00_1254,
					BgL_stackz00_1255, BgL_locz00_1256, BgL_sitez00_1257));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_exitz00()
	{
		AN_OBJECT;
		{	/* Ast/exit.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_exitz00()
	{
		AN_OBJECT;
		{	/* Ast/exit.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_exitz00()
	{
		AN_OBJECT;
		{	/* Ast/exit.scm 14 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3338z00zzast_exitz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3338z00zzast_exitz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3338z00zzast_exitz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3338z00zzast_exitz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string3338z00zzast_exitz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string3338z00zzast_exitz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string3338z00zzast_exitz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3338z00zzast_exitz00));
			BGl_modulezd2initializa7ationz75zztools_prognz00(((long) 139728077),
				BSTRING_TO_STRING(BGl_string3338z00zzast_exitz00));
			return
				BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string3338z00zzast_exitz00));
		}
	}

#ifdef __cplusplus
}
#endif
