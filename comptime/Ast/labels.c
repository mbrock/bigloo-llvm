/*===========================================================================*/
/*   (Ast/labels.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/labels.scm)*/
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

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


	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_labelszd2symzd2zzast_labelsz00();
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzast_labelsz00();
	extern bool_t BGl_userzd2symbolzf3z21zzast_identz00(obj_t);
	static obj_t BGl_labelszd2bindingzd2zzast_labelsz00(obj_t, obj_t, obj_t,
		obj_t);
	extern bool_t BGl_dssslzd2arityzd2za7erozf3z54zztools_argsz00(int, obj_t);
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_labelsz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_dssslz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzast_labelsz00();
	extern BgL_localz00_bglt BGl_makezd2localzd2sfunz00zzast_localz00(obj_t,
		BgL_typez00_bglt, BgL_sfunz00_bglt);
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	extern BgL_localz00_bglt
		BGl_makezd2userzd2localzd2sfunzd2zzast_localz00(obj_t, BgL_typez00_bglt,
		BgL_sfunz00_bglt);
	extern BgL_letzd2funzd2_bglt BGl_makezd2letzd2funz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, BgL_nodez00_bglt);
	extern BgL_nodez00_bglt BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl__labelszd2symzd2zzast_labelsz00(obj_t);
	extern BgL_sfunz00_bglt BGl_makezd2sfunzd2zzast_varz00(long, obj_t, obj_t,
		obj_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_labelsz00();
	extern obj_t BGl_dssslzd2argsza2zd2ze3argszd2listz93zztools_dssslz00(obj_t);
	BGL_EXPORTED_DECL BgL_letzd2funzd2_bglt
		BGl_labelszd2ze3nodez31zzast_labelsz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_labelsz00 = BUNSPEC;
	extern long BGl_localzd2arityzd2zztools_argsz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzast_labelsz00();
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzast_labelsz00();
	BGL_IMPORT obj_t BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_normaliza7ezd2prognz75zztools_prognz00(obj_t);
	static obj_t BGl_makezd2localzd2nooptzd2sfunzd2zzast_labelsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_labelszd2symzf3z21zzast_labelsz00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	static obj_t BGl_za2labelsza2z00zzast_labelsz00 = BUNSPEC;
	static obj_t BGl_allocatezd2sfunszd2zzast_labelsz00(obj_t, obj_t);
	static obj_t BGl__labelszd2symzf3z21zzast_labelsz00(obj_t, obj_t);
	extern BgL_localz00_bglt
		BGl_makezd2userzd2localzd2svarzd2zzast_localz00(obj_t, BgL_typez00_bglt);
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_labelsz00();
	static obj_t BGl__labelszd2ze3nodez31zzast_labelsz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t __cnst[3];


	extern obj_t BGl_userzd2errorzd2envz00zztools_errorz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_labelszd2symzf3zd2envzf3zzast_labelsz00,
		BgL_bgl__labelsza7d2symza7f33417z00, BGl__labelszd2symzf3z21zzast_labelsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_labelszd2ze3nodezd2envze3zzast_labelsz00,
		BgL_bgl__labelsza7d2za7e3nod3418z00,
		BGl__labelszd2ze3nodez31zzast_labelsz00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string3408z00zzast_labelsz00,
		BgL_bgl_string3408za700za7za7a3419za7, "Illegal `labels' expression", 27);
	      DEFINE_STRING(BGl_string3410z00zzast_labelsz00,
		BgL_bgl_string3410za700za7za7a3420za7, "Illegal formal type", 19);
	      DEFINE_STRING(BGl_string3409z00zzast_labelsz00,
		BgL_bgl_string3409za700za7za7a3421za7, "Illegal `binding' form", 22);
	      DEFINE_STRING(BGl_string3411z00zzast_labelsz00,
		BgL_bgl_string3411za700za7za7a3422za7, "Illegal `labels' form", 21);
	      DEFINE_STRING(BGl_string3412z00zzast_labelsz00,
		BgL_bgl_string3412za700za7za7a3423za7, "ast_labels", 10);
	      DEFINE_STRING(BGl_string3413z00zzast_labelsz00,
		BgL_bgl_string3413za700za7za7a3424za7, "value plain labels ", 19);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_labelszd2symzd2envz00zzast_labelsz00,
		BgL_bgl__labelsza7d2symza7d23425z00, BGl__labelszd2symzd2zzast_labelsz00,
		0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_labelsz00(long
		BgL_checksumz00_1450, char *BgL_fromz00_1451)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_labelsz00))
				{
					BGl_requirezd2initializa7ationz75zzast_labelsz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_labelsz00();
					BGl_cnstzd2initzd2zzast_labelsz00();
					BGl_importedzd2moduleszd2initz00zzast_labelsz00();
					BGl_toplevelzd2initzd2zzast_labelsz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_labelsz00()
	{
		AN_OBJECT;
		{	/* Ast/labels.scm 14 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_labels");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_labels");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"ast_labels");
			BGl_modulezd2initializa7ationz75zz__dssslz00(((long) 0), "ast_labels");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_labelsz00()
	{
		AN_OBJECT;
		{	/* Ast/labels.scm 14 */
			{	/* Ast/labels.scm 14 */
				obj_t BgL_cportz00_1441;

				BgL_cportz00_1441 =
					bgl_open_input_string(BGl_string3413z00zzast_labelsz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1442;

					BgL_iz00_1442 = ((long) 2);
				BgL_loopz00_1443:
					if ((BgL_iz00_1442 == ((long) -1)))
						{	/* Ast/labels.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/labels.scm 14 */
							{	/* Ast/labels.scm 14 */
								obj_t BgL_arg3415z00_1445;

								{	/* Ast/labels.scm 14 */

									{	/* Ast/labels.scm 14 */
										obj_t BgL_locationz00_1447;

										BgL_locationz00_1447 = BBOOL(((bool_t) 0));
										{	/* Ast/labels.scm 14 */

											BgL_arg3415z00_1445 =
												BGl_readz00zz__readerz00(BgL_cportz00_1441,
												BgL_locationz00_1447);
										}
									}
								}
								{	/* Ast/labels.scm 14 */
									int BgL_auxz00_1469;

									BgL_auxz00_1469 = (int) (BgL_iz00_1442);
									CNST_TABLE_SET(BgL_auxz00_1469, BgL_arg3415z00_1445);
							}}
							{	/* Ast/labels.scm 14 */
								int BgL_auxz00_1448;

								BgL_auxz00_1448 = (int) ((BgL_iz00_1442 - ((long) 1)));
								{
									long BgL_iz00_1474;

									BgL_iz00_1474 = (long) (BgL_auxz00_1448);
									BgL_iz00_1442 = BgL_iz00_1474;
									goto BgL_loopz00_1443;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_labelsz00()
	{
		AN_OBJECT;
		{	/* Ast/labels.scm 14 */
			return (BGl_za2labelsza2z00zzast_labelsz00 =
				BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 0))),
				BUNSPEC);
		}
	}



/* labels-sym */
	BGL_EXPORTED_DEF obj_t BGl_labelszd2symzd2zzast_labelsz00()
	{
		AN_OBJECT;
		{	/* Ast/labels.scm 39 */
			return BGl_za2labelsza2z00zzast_labelsz00;
		}
	}



/* _labels-sym */
	obj_t BGl__labelszd2symzd2zzast_labelsz00(obj_t BgL_envz00_1427)
	{
		AN_OBJECT;
		{	/* Ast/labels.scm 39 */
			return BGl_za2labelsza2z00zzast_labelsz00;
		}
	}



/* labels-sym? */
	BGL_EXPORTED_DEF obj_t BGl_labelszd2symzf3z21zzast_labelsz00(obj_t
		BgL_symz00_15)
	{
		AN_OBJECT;
		{	/* Ast/labels.scm 45 */
			return BBOOL((BgL_symz00_15 == BGl_za2labelsza2z00zzast_labelsz00));
		}
	}



/* _labels-sym? */
	obj_t BGl__labelszd2symzf3z21zzast_labelsz00(obj_t BgL_envz00_1428,
		obj_t BgL_symz00_1429)
	{
		AN_OBJECT;
		{	/* Ast/labels.scm 45 */
			return BGl_labelszd2symzf3z21zzast_labelsz00(BgL_symz00_1429);
		}
	}



/* labels->node */
	BGL_EXPORTED_DEF BgL_letzd2funzd2_bglt
		BGl_labelszd2ze3nodez31zzast_labelsz00(obj_t BgL_expz00_16,
		obj_t BgL_stackz00_17, obj_t BgL_locz00_18, obj_t BgL_sitez00_19)
	{
		AN_OBJECT;
		{	/* Ast/labels.scm 51 */
			{	/* Ast/labels.scm 52 */
				obj_t BgL_locz00_813;

				BgL_locz00_813 =
					BGl_findzd2locationzf2locz20zztools_locationz00(BgL_expz00_16,
					BgL_locz00_18);
				{
					obj_t BgL_bindingsz00_814;

					obj_t BgL_bodyz00_815;

					if (PAIRP(BgL_expz00_16))
						{	/* Ast/labels.scm 53 */
							obj_t BgL_cdrzd21655zd2_820;

							BgL_cdrzd21655zd2_820 = CDR(BgL_expz00_16);
							if (PAIRP(BgL_cdrzd21655zd2_820))
								{	/* Ast/labels.scm 53 */
									obj_t BgL_carzd21658zd2_822;

									BgL_carzd21658zd2_822 = CAR(BgL_cdrzd21655zd2_820);
									if (PAIRP(BgL_carzd21658zd2_822))
										{	/* Ast/labels.scm 53 */
											BgL_bindingsz00_814 = BgL_carzd21658zd2_822;
											BgL_bodyz00_815 = CDR(BgL_cdrzd21655zd2_820);
											{	/* Ast/labels.scm 55 */
												obj_t BgL_localsz00_825;

												BgL_localsz00_825 =
													BGl_allocatezd2sfunszd2zzast_labelsz00
													(BgL_bindingsz00_814, BgL_locz00_813);
												{	/* Ast/labels.scm 55 */
													obj_t BgL_newzd2stackzd2_826;

													BgL_newzd2stackzd2_826 =
														bgl_append2(BgL_localsz00_825, BgL_stackz00_17);
													{	/* Ast/labels.scm 56 */
														BgL_nodez00_bglt BgL_bodyz00_827;

														BgL_bodyz00_827 =
															BGl_sexpzd2ze3nodez31zzast_sexpz00
															(BGl_normaliza7ezd2prognz75zztools_prognz00
															(BgL_bodyz00_815), BgL_newzd2stackzd2_826,
															BgL_locz00_813, BgL_sitez00_19);
														{	/* Ast/labels.scm 57 */
															obj_t BgL_locz00_828;

															BgL_locz00_828 =
																BGl_findzd2locationzf2locz20zztools_locationz00
																(BgL_expz00_16, BgL_locz00_813);
															{	/* Ast/labels.scm 61 */

																{
																	obj_t BgL_ll3249z00_830;

																	obj_t BgL_ll3250z00_831;

																	BgL_ll3249z00_830 = BgL_localsz00_825;
																	BgL_ll3250z00_831 = BgL_bindingsz00_814;
																BgL_zc3anonymousza33281ze3z83_832:
																	if (NULLP(BgL_ll3249z00_830))
																		{	/* Ast/labels.scm 63 */
																			((bool_t) 1);
																		}
																	else
																		{	/* Ast/labels.scm 63 */
																			BGl_labelszd2bindingzd2zzast_labelsz00(CAR
																				(BgL_ll3249z00_830),
																				CAR(BgL_ll3250z00_831),
																				BgL_newzd2stackzd2_826, BgL_locz00_828);
																			{
																				obj_t BgL_ll3250z00_1502;

																				obj_t BgL_ll3249z00_1500;

																				BgL_ll3249z00_1500 =
																					CDR(BgL_ll3249z00_830);
																				BgL_ll3250z00_1502 =
																					CDR(BgL_ll3250z00_831);
																				BgL_ll3250z00_831 = BgL_ll3250z00_1502;
																				BgL_ll3249z00_830 = BgL_ll3249z00_1500;
																				goto BgL_zc3anonymousza33281ze3z83_832;
																			}
																		}
																}
																{	/* Ast/labels.scm 69 */
																	BgL_typez00_bglt BgL_arg3285z00_839;

																	BgL_arg3285z00_839 =
																		(((BgL_nodez00_bglt)
																			CREF(BgL_bodyz00_827))->BgL_typez00);
																	return
																		BGl_makezd2letzd2funz00zzast_nodez00
																		(BgL_locz00_828, BgL_arg3285z00_839,
																		BUNSPEC, BINT(((long) -1)),
																		BgL_localsz00_825, BgL_bodyz00_827);
										}}}}}}}
									else
										{	/* Ast/labels.scm 53 */
											BgL_nodez00_bglt BgL_auxz00_1508;

										BgL_tagzd21648zd2_817:
											BgL_auxz00_1508 =
												BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
												(BGl_string3408z00zzast_labelsz00, BgL_expz00_16,
												BgL_locz00_813);
											return (BgL_letzd2funzd2_bglt) (BgL_auxz00_1508);
										}
								}
							else
								{	/* Ast/labels.scm 53 */
									BgL_nodez00_bglt BgL_auxz00_1511;

									goto BgL_tagzd21648zd2_817;
									return (BgL_letzd2funzd2_bglt) (BgL_auxz00_1511);
								}
						}
					else
						{	/* Ast/labels.scm 53 */
							BgL_nodez00_bglt BgL_auxz00_1513;

							goto BgL_tagzd21648zd2_817;
							return (BgL_letzd2funzd2_bglt) (BgL_auxz00_1513);
						}
				}
			}
		}
	}



/* _labels->node */
	obj_t BGl__labelszd2ze3nodez31zzast_labelsz00(obj_t BgL_envz00_1430,
		obj_t BgL_expz00_1431, obj_t BgL_stackz00_1432, obj_t BgL_locz00_1433,
		obj_t BgL_sitez00_1434)
	{
		AN_OBJECT;
		{	/* Ast/labels.scm 51 */
			return
				(obj_t) (BGl_labelszd2ze3nodez31zzast_labelsz00(BgL_expz00_1431,
					BgL_stackz00_1432, BgL_locz00_1433, BgL_sitez00_1434));
		}
	}



/* allocate-sfuns */
	obj_t BGl_allocatezd2sfunszd2zzast_labelsz00(obj_t BgL_bindingsz00_20,
		obj_t BgL_locz00_21)
	{
		AN_OBJECT;
		{	/* Ast/labels.scm 78 */
			{
				obj_t BgL_bindingsz00_844;

				obj_t BgL_resz00_845;

				BgL_bindingsz00_844 = BgL_bindingsz00_20;
				BgL_resz00_845 = BNIL;
			BgL_zc3anonymousza33288ze3z83_846:
				if (NULLP(BgL_bindingsz00_844))
					{	/* Ast/labels.scm 81 */
						return bgl_reverse_bang(BgL_resz00_845);
					}
				else
					{	/* Ast/labels.scm 83 */
						obj_t BgL_srcz00_848;

						BgL_srcz00_848 = CAR(BgL_bindingsz00_844);
						{
							obj_t BgL_funz00_849;

							obj_t BgL_argsz00_850;

							obj_t BgL_bodyz00_851;

							if (PAIRP(BgL_srcz00_848))
								{	/* Ast/labels.scm 84 */
									obj_t BgL_carzd21673zd2_856;

									obj_t BgL_cdrzd21674zd2_857;

									BgL_carzd21673zd2_856 = CAR(BgL_srcz00_848);
									BgL_cdrzd21674zd2_857 = CDR(BgL_srcz00_848);
									if (SYMBOLP(BgL_carzd21673zd2_856))
										{	/* Ast/labels.scm 84 */
											if (PAIRP(BgL_cdrzd21674zd2_857))
												{	/* Ast/labels.scm 84 */
													BgL_funz00_849 = BgL_carzd21673zd2_856;
													BgL_argsz00_850 = CAR(BgL_cdrzd21674zd2_857);
													BgL_bodyz00_851 = CDR(BgL_cdrzd21674zd2_857);
													{	/* Ast/labels.scm 86 */
														obj_t BgL_locz00_862;

														BgL_locz00_862 =
															BGl_findzd2locationzf2locz20zztools_locationz00
															(CAR(BgL_bindingsz00_844), BgL_locz00_21);
														{	/* Ast/labels.scm 86 */
															obj_t BgL_funz00_863;

															BgL_funz00_863 =
																BGl_makezd2localzd2nooptzd2sfunzd2zzast_labelsz00
																(BgL_locz00_862, BgL_srcz00_848, BgL_funz00_849,
																BgL_argsz00_850, BgL_bodyz00_851);
															{	/* Ast/labels.scm 87 */

																{	/* Ast/labels.scm 88 */
																	obj_t BgL_arg3295z00_864;

																	obj_t BgL_arg3296z00_865;

																	BgL_arg3295z00_864 = CDR(BgL_bindingsz00_844);
																	BgL_arg3296z00_865 =
																		MAKE_PAIR(BgL_funz00_863, BgL_resz00_845);
																	{
																		obj_t BgL_resz00_1535;

																		obj_t BgL_bindingsz00_1534;

																		BgL_bindingsz00_1534 = BgL_arg3295z00_864;
																		BgL_resz00_1535 = BgL_arg3296z00_865;
																		BgL_resz00_845 = BgL_resz00_1535;
																		BgL_bindingsz00_844 = BgL_bindingsz00_1534;
																		goto BgL_zc3anonymousza33288ze3z83_846;
																	}
																}
															}
														}
													}
												}
											else
												{	/* Ast/labels.scm 84 */
												BgL_tagzd21665zd2_853:
													BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
														(BGl_string3409z00zzast_labelsz00, BgL_srcz00_848,
														BgL_locz00_21);
													return BNIL;
												}
										}
									else
										{	/* Ast/labels.scm 84 */
											goto BgL_tagzd21665zd2_853;
										}
								}
							else
								{	/* Ast/labels.scm 84 */
									goto BgL_tagzd21665zd2_853;
								}
						}
					}
			}
		}
	}



/* make-local-noopt-sfun */
	obj_t BGl_makezd2localzd2nooptzd2sfunzd2zzast_labelsz00(obj_t BgL_locz00_22,
		obj_t BgL_srcz00_23, obj_t BgL_funz00_24, obj_t BgL_argsz00_25,
		obj_t BgL_bodyz00_26)
	{
		AN_OBJECT;
		{	/* Ast/labels.scm 96 */
			{	/* Ast/labels.scm 97 */
				obj_t BgL_idze2typeze2_868;

				BgL_idze2typeze2_868 =
					BGl_parsezd2idzd2zzast_identz00(BgL_funz00_24, BgL_locz00_22);
				{	/* Ast/labels.scm 97 */
					obj_t BgL_idz00_869;

					BgL_idz00_869 = CAR(BgL_idze2typeze2_868);
					{	/* Ast/labels.scm 98 */
						obj_t BgL_typez00_870;

						BgL_typez00_870 = CDR(BgL_idze2typeze2_868);
						{	/* Ast/labels.scm 99 */
							long BgL_arityz00_871;

							BgL_arityz00_871 =
								BGl_localzd2arityzd2zztools_argsz00(BgL_argsz00_25);
							{	/* Ast/labels.scm 100 */
								obj_t BgL_formalsz00_872;

								{	/* Ast/labels.scm 101 */
									obj_t BgL_l3252z00_929;

									BgL_l3252z00_929 =
										BGl_dssslzd2argsza2zd2ze3argszd2listz93zztools_dssslz00
										(BgL_argsz00_25);
									if (NULLP(BgL_l3252z00_929))
										{	/* Ast/labels.scm 101 */
											BgL_formalsz00_872 = BNIL;
										}
									else
										{	/* Ast/labels.scm 101 */
											obj_t BgL_head3254z00_931;

											BgL_head3254z00_931 = MAKE_PAIR(BNIL, BNIL);
											{
												obj_t BgL_l3252z00_933;

												obj_t BgL_tail3255z00_934;

												BgL_l3252z00_933 = BgL_l3252z00_929;
												BgL_tail3255z00_934 = BgL_head3254z00_931;
											BgL_zc3anonymousza33337ze3z83_935:
												if (NULLP(BgL_l3252z00_933))
													{	/* Ast/labels.scm 101 */
														BgL_formalsz00_872 = CDR(BgL_head3254z00_931);
													}
												else
													{	/* Ast/labels.scm 101 */
														obj_t BgL_newtail3256z00_937;

														BgL_newtail3256z00_937 =
															MAKE_PAIR(BGl_parsezd2idzd2zzast_identz00(CAR
																(BgL_l3252z00_933), BgL_locz00_22), BNIL);
														SET_CDR(BgL_tail3255z00_934,
															BgL_newtail3256z00_937);
														{
															obj_t BgL_tail3255z00_1556;

															obj_t BgL_l3252z00_1554;

															BgL_l3252z00_1554 = CDR(BgL_l3252z00_933);
															BgL_tail3255z00_1556 = BgL_newtail3256z00_937;
															BgL_tail3255z00_934 = BgL_tail3255z00_1556;
															BgL_l3252z00_933 = BgL_l3252z00_1554;
															goto BgL_zc3anonymousza33337ze3z83_935;
														}
													}
											}
										}
								}
								{	/* Ast/labels.scm 101 */

									{	/* Ast/labels.scm 105 */
										bool_t BgL_testz00_1557;

										if ((BgL_arityz00_871 >= ((long) 0)))
											{	/* Ast/labels.scm 105 */
												BgL_testz00_1557 = ((bool_t) 1);
											}
										else
											{	/* Ast/labels.scm 105 */
												if (BGl_dssslzd2arityzd2za7erozf3z54zztools_argsz00(
														(int) (BgL_arityz00_871), BgL_formalsz00_872))
													{	/* Ast/labels.scm 109 */
														BgL_testz00_1557 = ((bool_t) 1);
													}
												else
													{	/* Ast/labels.scm 110 */
														obj_t BgL_largz00_924;

														BgL_largz00_924 =
															CAR
															(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
															(BgL_formalsz00_872));
														{	/* Ast/labels.scm 110 */
															obj_t BgL_typez00_925;

															BgL_typez00_925 = CDR(BgL_largz00_924);
															{	/* Ast/labels.scm 111 */

																if (
																	(BgL_typez00_925 ==
																		BGl_za2objza2z00zztype_cachez00))
																	{	/* Ast/labels.scm 113 */
																		BgL_testz00_1557 = ((bool_t) 1);
																	}
																else
																	{	/* Ast/labels.scm 113 */
																		if (
																			(BgL_typez00_925 ==
																				BGl_za2_za2z00zztype_cachez00))
																			{	/* Ast/labels.scm 115 */
																				SET_CDR(BgL_largz00_924,
																					BGl_za2objza2z00zztype_cachez00);
																				BgL_testz00_1557 = ((bool_t) 1);
																			}
																		else
																			{	/* Ast/labels.scm 115 */
																				BgL_testz00_1557 = ((bool_t) 0);
																			}
																	}
															}
														}
													}
											}
										if (BgL_testz00_1557)
											{	/* Ast/labels.scm 120 */
												obj_t BgL_argsz00_874;

												if (NULLP(BgL_formalsz00_872))
													{	/* Ast/labels.scm 120 */
														BgL_argsz00_874 = BNIL;
													}
												else
													{	/* Ast/labels.scm 120 */
														obj_t BgL_head3259z00_904;

														BgL_head3259z00_904 = MAKE_PAIR(BNIL, BNIL);
														{
															obj_t BgL_l3257z00_906;

															obj_t BgL_tail3260z00_907;

															BgL_l3257z00_906 = BgL_formalsz00_872;
															BgL_tail3260z00_907 = BgL_head3259z00_904;
														BgL_zc3anonymousza33318ze3z83_908:
															if (NULLP(BgL_l3257z00_906))
																{	/* Ast/labels.scm 120 */
																	BgL_argsz00_874 = CDR(BgL_head3259z00_904);
																}
															else
																{	/* Ast/labels.scm 120 */
																	obj_t BgL_newtail3261z00_910;

																	{	/* Ast/labels.scm 120 */
																		BgL_localz00_bglt BgL_arg3321z00_912;

																		{	/* Ast/labels.scm 120 */
																			obj_t BgL_fz00_914;

																			BgL_fz00_914 = CAR(BgL_l3257z00_906);
																			if (BGl_userzd2symbolzf3z21zzast_identz00
																				(CAR(BgL_fz00_914)))
																				{	/* Ast/labels.scm 122 */
																					obj_t BgL_arg3326z00_916;

																					obj_t BgL_arg3327z00_917;

																					BgL_arg3326z00_916 =
																						CAR(BgL_fz00_914);
																					BgL_arg3327z00_917 =
																						CDR(BgL_fz00_914);
																					BgL_arg3321z00_912 =
																						BGl_makezd2userzd2localzd2svarzd2zzast_localz00
																						(BgL_arg3326z00_916,
																						(BgL_typez00_bglt)
																						(BgL_arg3327z00_917));
																				}
																			else
																				{	/* Ast/labels.scm 123 */
																					obj_t BgL_arg3328z00_918;

																					obj_t BgL_arg3329z00_919;

																					BgL_arg3328z00_918 =
																						CAR(BgL_fz00_914);
																					BgL_arg3329z00_919 =
																						CDR(BgL_fz00_914);
																					BgL_arg3321z00_912 =
																						BGl_makezd2localzd2svarz00zzast_localz00
																						(BgL_arg3328z00_918,
																						(BgL_typez00_bglt)
																						(BgL_arg3329z00_919));
																				}
																		}
																		BgL_newtail3261z00_910 =
																			MAKE_PAIR(
																			(obj_t) (BgL_arg3321z00_912), BNIL);
																	}
																	SET_CDR(BgL_tail3260z00_907,
																		BgL_newtail3261z00_910);
																	{
																		obj_t BgL_tail3260z00_1594;

																		obj_t BgL_l3257z00_1592;

																		BgL_l3257z00_1592 = CDR(BgL_l3257z00_906);
																		BgL_tail3260z00_1594 =
																			BgL_newtail3261z00_910;
																		BgL_tail3260z00_907 = BgL_tail3260z00_1594;
																		BgL_l3257z00_906 = BgL_l3257z00_1592;
																		goto BgL_zc3anonymousza33318ze3z83_908;
																	}
																}
														}
													}
												{	/* Ast/labels.scm 120 */
													BgL_sfunz00_bglt BgL_sfunz00_875;

													{	/* Ast/var.scm 96 */
														obj_t BgL_arg3301z00_878;

														obj_t BgL_arg3302z00_879;

														obj_t BgL_arg3304z00_881;

														if (NULLP(BgL_formalsz00_872))
															{	/* Ast/labels.scm 130 */
																BgL_arg3301z00_878 = BNIL;
															}
														else
															{	/* Ast/labels.scm 130 */
																obj_t BgL_head3264z00_886;

																BgL_head3264z00_886 =
																	MAKE_PAIR(CAR(CAR(BgL_formalsz00_872)), BNIL);
																{	/* Ast/labels.scm 130 */
																	obj_t BgL_g3267z00_887;

																	BgL_g3267z00_887 = CDR(BgL_formalsz00_872);
																	{
																		obj_t BgL_l3262z00_889;

																		obj_t BgL_tail3265z00_890;

																		BgL_l3262z00_889 = BgL_g3267z00_887;
																		BgL_tail3265z00_890 = BgL_head3264z00_886;
																	BgL_zc3anonymousza33308ze3z83_891:
																		if (NULLP(BgL_l3262z00_889))
																			{	/* Ast/labels.scm 130 */
																				BgL_arg3301z00_878 =
																					BgL_head3264z00_886;
																			}
																		else
																			{	/* Ast/labels.scm 130 */
																				obj_t BgL_newtail3266z00_893;

																				BgL_newtail3266z00_893 =
																					MAKE_PAIR(CAR(CAR(BgL_l3262z00_889)),
																					BNIL);
																				SET_CDR(BgL_tail3265z00_890,
																					BgL_newtail3266z00_893);
																				{
																					obj_t BgL_tail3265z00_1609;

																					obj_t BgL_l3262z00_1607;

																					BgL_l3262z00_1607 =
																						CDR(BgL_l3262z00_889);
																					BgL_tail3265z00_1609 =
																						BgL_newtail3266z00_893;
																					BgL_tail3265z00_890 =
																						BgL_tail3265z00_1609;
																					BgL_l3262z00_889 = BgL_l3262z00_1607;
																					goto
																						BgL_zc3anonymousza33308ze3z83_891;
																				}
																			}
																	}
																}
															}
														BgL_arg3302z00_879 = CNST_TABLE_REF(((long) 1));
														BgL_arg3304z00_881 =
															BGl_findzd2locationzf2locz20zztools_locationz00
															(BgL_bodyz00_26, BgL_locz00_22);
														BgL_sfunz00_875 =
															BGl_makezd2sfunzd2zzast_varz00(BgL_arityz00_871,
															BUNSPEC, BFALSE, BFALSE, ((bool_t) 1), BUNSPEC,
															BUNSPEC, BNIL, BgL_argsz00_874,
															BgL_arg3301z00_878, BUNSPEC, BgL_arg3302z00_879,
															BNIL, BgL_arg3304z00_881, BNIL, BNIL, BUNSPEC);
													}
													{	/* Ast/labels.scm 125 */

														if (BGl_userzd2symbolzf3z21zzast_identz00
															(BgL_idz00_869))
															{	/* Ast/labels.scm 131 */
																return
																	(obj_t)
																	(BGl_makezd2userzd2localzd2sfunzd2zzast_localz00
																	(BgL_idz00_869,
																		(BgL_typez00_bglt) (BgL_typez00_870),
																		BgL_sfunz00_875));
															}
														else
															{	/* Ast/labels.scm 131 */
																return
																	(obj_t)
																	(BGl_makezd2localzd2sfunz00zzast_localz00
																	(BgL_idz00_869,
																		(BgL_typez00_bglt) (BgL_typez00_870),
																		BgL_sfunz00_875));
															}
													}
												}
											}
										else
											{	/* Ast/labels.scm 105 */
												BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
													(BGl_string3410z00zzast_labelsz00, BgL_srcz00_23,
													BgL_locz00_22);
												return BNIL;
											}
									}
								}
							}
						}
					}
				}
			}
		}
	}



/* labels-binding */
	obj_t BGl_labelszd2bindingzd2zzast_labelsz00(obj_t BgL_localz00_27,
		obj_t BgL_bindingz00_28, obj_t BgL_stackz00_29, obj_t BgL_locz00_30)
	{
		AN_OBJECT;
		{	/* Ast/labels.scm 141 */
			{
				obj_t BgL_argsz00_943;

				obj_t BgL_bodyz00_944;

				if (PAIRP(BgL_bindingz00_28))
					{	/* Ast/labels.scm 142 */
						obj_t BgL_cdrzd21692zd2_949;

						BgL_cdrzd21692zd2_949 = CDR(BgL_bindingz00_28);
						if (PAIRP(BgL_cdrzd21692zd2_949))
							{	/* Ast/labels.scm 142 */
								BgL_argsz00_943 = CAR(BgL_cdrzd21692zd2_949);
								BgL_bodyz00_944 = CDR(BgL_cdrzd21692zd2_949);
								{	/* Ast/labels.scm 144 */
									obj_t BgL_arg3347z00_953;

									{
										BgL_variablez00_bglt BgL_auxz00_1627;

										BgL_auxz00_1627 = (BgL_variablez00_bglt) (BgL_localz00_27);
										BgL_arg3347z00_953 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_1627))->
											BgL_idz00);
									}
									BGl_enterzd2functionzd2zztools_errorz00(BgL_arg3347z00_953);
								}
								{	/* Ast/labels.scm 145 */
									obj_t BgL_locz00_954;

									BgL_locz00_954 =
										BGl_findzd2locationzf2locz20zztools_locationz00
										(BgL_bindingz00_28, BgL_locz00_30);
									{	/* Ast/labels.scm 145 */
										obj_t BgL_body2z00_955;

										{	/* Ast/labels.scm 146 */
											obj_t BgL_arg3354z00_963;

											obj_t BgL_arg3355z00_964;

											{
												BgL_variablez00_bglt BgL_auxz00_1632;

												BgL_auxz00_1632 =
													(BgL_variablez00_bglt) (BgL_localz00_27);
												BgL_arg3354z00_963 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_1632))->
													BgL_idz00);
											}
											BgL_arg3355z00_964 =
												BGl_normaliza7ezd2prognz75zztools_prognz00
												(BgL_bodyz00_944);
											BgL_body2z00_955 =
												BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00
												(BgL_arg3354z00_963, BgL_argsz00_943,
												BgL_arg3355z00_964,
												BGl_userzd2errorzd2envz00zztools_errorz00);
										}
										{	/* Ast/labels.scm 146 */
											BgL_nodez00_bglt BgL_body3z00_956;

											{	/* Ast/labels.scm 151 */
												obj_t BgL_arg3350z00_959;

												obj_t BgL_arg3351z00_960;

												{	/* Ast/labels.scm 151 */
													obj_t BgL_auxz00_1637;

													{	/* Ast/labels.scm 151 */
														BgL_sfunz00_bglt BgL_obj1880z00_1420;

														{	/* Ast/labels.scm 151 */
															BgL_variablez00_bglt BgL_obj1611z00_1419;

															BgL_obj1611z00_1419 =
																(BgL_variablez00_bglt) (BgL_localz00_27);
															BgL_obj1880z00_1420 =
																(BgL_sfunz00_bglt) (
																(((BgL_variablez00_bglt)
																		CREF(BgL_obj1611z00_1419))->BgL_valuez00));
														}
														BgL_auxz00_1637 =
															(((BgL_sfunz00_bglt) CREF(BgL_obj1880z00_1420))->
															BgL_argsz00);
													}
													BgL_arg3350z00_959 =
														bgl_append2(BgL_auxz00_1637, BgL_stackz00_29);
												}
												BgL_arg3351z00_960 = CNST_TABLE_REF(((long) 2));
												BgL_body3z00_956 =
													BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_body2z00_955,
													BgL_arg3350z00_959, BgL_locz00_954,
													BgL_arg3351z00_960);
											}
											{	/* Ast/labels.scm 150 */

												{	/* Ast/labels.scm 154 */
													BgL_valuez00_bglt BgL_arg3348z00_957;

													{
														BgL_variablez00_bglt BgL_auxz00_1645;

														BgL_auxz00_1645 =
															(BgL_variablez00_bglt) (BgL_localz00_27);
														BgL_arg3348z00_957 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_1645))->
															BgL_valuez00);
													}
													{
														BgL_sfunz00_bglt BgL_auxz00_1648;

														BgL_auxz00_1648 =
															(BgL_sfunz00_bglt) (BgL_arg3348z00_957);
														((((BgL_sfunz00_bglt) CREF(BgL_auxz00_1648))->
																BgL_locz00) =
															((obj_t) BgL_locz00_954), BUNSPEC);
												}}
												{	/* Ast/labels.scm 155 */
													BgL_valuez00_bglt BgL_arg3349z00_958;

													{
														BgL_variablez00_bglt BgL_auxz00_1651;

														BgL_auxz00_1651 =
															(BgL_variablez00_bglt) (BgL_localz00_27);
														BgL_arg3349z00_958 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_1651))->
															BgL_valuez00);
													}
													{
														obj_t BgL_auxz00_1656;

														BgL_sfunz00_bglt BgL_auxz00_1654;

														BgL_auxz00_1656 = (obj_t) (BgL_body3z00_956);
														BgL_auxz00_1654 =
															(BgL_sfunz00_bglt) (BgL_arg3349z00_958);
														((((BgL_sfunz00_bglt) CREF(BgL_auxz00_1654))->
																BgL_bodyz00) =
															((obj_t) BgL_auxz00_1656), BUNSPEC);
												}}
												return BGl_leavezd2functionzd2zztools_errorz00();
											}
										}
									}
								}
							}
						else
							{	/* Ast/labels.scm 142 */
								BgL_nodez00_bglt BgL_auxz00_1662;

							BgL_tagzd21685zd2_946:
								BgL_auxz00_1662 =
									BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
									(BGl_string3411z00zzast_labelsz00, BgL_bindingz00_28,
									BgL_locz00_30);
								return (obj_t) (BgL_auxz00_1662);
							}
					}
				else
					{	/* Ast/labels.scm 142 */
						BgL_nodez00_bglt BgL_auxz00_1665;

						goto BgL_tagzd21685zd2_946;
						return (obj_t) (BgL_auxz00_1665);
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_labelsz00()
	{
		AN_OBJECT;
		{	/* Ast/labels.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_labelsz00()
	{
		AN_OBJECT;
		{	/* Ast/labels.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_labelsz00()
	{
		AN_OBJECT;
		{	/* Ast/labels.scm 14 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3412z00zzast_labelsz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3412z00zzast_labelsz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3412z00zzast_labelsz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3412z00zzast_labelsz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3412z00zzast_labelsz00));
			BGl_modulezd2initializa7ationz75zztools_prognz00(((long) 139728077),
				BSTRING_TO_STRING(BGl_string3412z00zzast_labelsz00));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 320731191),
				BSTRING_TO_STRING(BGl_string3412z00zzast_labelsz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string3412z00zzast_labelsz00));
			BGl_modulezd2initializa7ationz75zztools_dssslz00(((long) 315398661),
				BSTRING_TO_STRING(BGl_string3412z00zzast_labelsz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3412z00zzast_labelsz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string3412z00zzast_labelsz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string3412z00zzast_labelsz00));
			return
				BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string3412z00zzast_labelsz00));
		}
	}

#ifdef __cplusplus
}
#endif
