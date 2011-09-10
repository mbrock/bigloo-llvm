/*===========================================================================*/
/*   (Expand/exit.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Expand/exit.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_backendz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_languagez00;
		obj_t BgL_srfi0z00;
		obj_t BgL_namez00;
		obj_t BgL_externzd2variableszd2;
		obj_t BgL_externzd2functionszd2;
		obj_t BgL_externzd2typeszd2;
		obj_t BgL_variablesz00;
		obj_t BgL_functionsz00;
		obj_t BgL_typesz00;
		bool_t BgL_typedz00;
		obj_t BgL_heapzd2suffixzd2;
		obj_t BgL_heapzd2compatiblezd2;
		bool_t BgL_callccz00;
		bool_t BgL_qualifiedzd2typeszd2;
		bool_t BgL_effectzb2zb2;
		bool_t BgL_removezd2emptyzd2letz00;
		bool_t BgL_foreignzd2closurezd2;
		bool_t BgL_typedzd2eqzd2;
		bool_t BgL_tracezd2supportzd2;
		obj_t BgL_foreignzd2clausezd2supportz00;
		obj_t BgL_debugzd2supportzd2;
		bool_t BgL_pragmazd2supportzd2;
		bool_t BgL_tvectorzd2descrzd2supportz00;
		bool_t BgL_requirezd2tailczd2;
		obj_t BgL_registersz00;
		obj_t BgL_pregistersz00;
		bool_t BgL_boundzd2checkzd2;
		bool_t BgL_typezd2checkzd2;
	}                 *BgL_backendz00_bglt;


	static obj_t BGl__expandzd2jumpzd2exitz00zzexpand_exitz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl__expandzd2bindzd2exitz00zzexpand_exitz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl__expandzd2setzd2exitz00zzexpand_exitz00(obj_t, obj_t, obj_t);
	static obj_t BGl__expandzd2unwindzd2protectz00zzexpand_exitz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2withzd2handlerz00zzexpand_exitz00(obj_t,
		obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzexpand_exitz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzexpand_exitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_lambdaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_expanderz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzexpand_exitz00();
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2unwindzd2protectz00zzexpand_exitz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	extern obj_t BGl_replacez12z12zztools_miscz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t);
	extern obj_t BGl_locationzd2fullzd2fnamez00zztools_locationz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2setzd2exitz00zzexpand_exitz00(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzexpand_exitz00();
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzexpand_exitz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzexpand_exitz00();
	static obj_t BGl__expandzd2withzd2handlerz00zzexpand_exitz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzexpand_exitz00();
	BGL_EXPORTED_DECL obj_t BGl_expandzd2jumpzd2exitz00zzexpand_exitz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2bindzd2exitz00zzexpand_exitz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT int BGl_bigloozd2compilerzd2debugz00zz__paramz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzexpand_exitz00();
	static obj_t __cnst[40];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2setzd2exitzd2envzd2zzexpand_exitz00,
		BgL_bgl__expandza7d2setza7d22837z00,
		BGl__expandzd2setzd2exitz00zzexpand_exitz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2jumpzd2exitzd2envzd2zzexpand_exitz00,
		BgL_bgl__expandza7d2jumpza7d2838z00,
		BGl__expandzd2jumpzd2exitz00zzexpand_exitz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2828z00zzexpand_exitz00,
		BgL_bgl_string2828za700za7za7e2839za7, "Illegal 'jump-exit' form", 24);
	      DEFINE_STRING(BGl_string2830z00zzexpand_exitz00,
		BgL_bgl_string2830za700za7za7e2840za7, "Illegal `bind-exit' form", 24);
	      DEFINE_STRING(BGl_string2829z00zzexpand_exitz00,
		BgL_bgl_string2829za700za7za7e2841za7, "Illegal `set-exit' form", 23);
	      DEFINE_STRING(BGl_string2831z00zzexpand_exitz00,
		BgL_bgl_string2831za700za7za7e2842za7, "Illegal `unwind-protect' form", 29);
	      DEFINE_STRING(BGl_string2832z00zzexpand_exitz00,
		BgL_bgl_string2832za700za7za7e2843za7, "Illegal `with-handler' form", 27);
	      DEFINE_STRING(BGl_string2833z00zzexpand_exitz00,
		BgL_bgl_string2833za700za7za7e2844za7, "expand_exit", 11);
	      DEFINE_STRING(BGl_string2834z00zzexpand_exitz00,
		BgL_bgl_string2834za700za7za7e2845za7,
		"$pop-trace $push-trace with-handler quote loc name at location when set-cdr! set-car! e lambda $set-error-handler! unwind-protect $get-error-handler cons bind-exit escape err ohs cdr car val-from-exit? if pop-exit! begin unwind-until! __bexit @ labels $get-exitd-top push-exit! let res val an_exitd an_exit set-exit jump-exit ",
		326);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2withzd2handlerzd2envzd2zzexpand_exitz00,
		BgL_bgl__expandza7d2withza7d2846z00,
		BGl__expandzd2withzd2handlerz00zzexpand_exitz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2bindzd2exitzd2envzd2zzexpand_exitz00,
		BgL_bgl__expandza7d2bindza7d2847z00,
		BGl__expandzd2bindzd2exitz00zzexpand_exitz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2unwindzd2protectzd2envzd2zzexpand_exitz00,
		BgL_bgl__expandza7d2unwind2848za7,
		BGl__expandzd2unwindzd2protectz00zzexpand_exitz00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzexpand_exitz00(long
		BgL_checksumz00_1050, char *BgL_fromz00_1051)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzexpand_exitz00))
				{
					BGl_requirezd2initializa7ationz75zzexpand_exitz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzexpand_exitz00();
					BGl_cnstzd2initzd2zzexpand_exitz00();
					BGl_importedzd2moduleszd2initz00zzexpand_exitz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzexpand_exitz00()
	{
		AN_OBJECT;
		{	/* Expand/exit.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"expand_exit");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "expand_exit");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "expand_exit");
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 0), "expand_exit");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"expand_exit");
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 0), "expand_exit");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzexpand_exitz00()
	{
		AN_OBJECT;
		{	/* Expand/exit.scm 15 */
			{	/* Expand/exit.scm 15 */
				obj_t BgL_cportz00_1042;

				BgL_cportz00_1042 =
					bgl_open_input_string(BGl_string2834z00zzexpand_exitz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1043;

					BgL_iz00_1043 = ((long) 39);
				BgL_loopz00_1044:
					if ((BgL_iz00_1043 == ((long) -1)))
						{	/* Expand/exit.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Expand/exit.scm 15 */
							{	/* Expand/exit.scm 15 */
								obj_t BgL_arg2836z00_1046;

								{	/* Expand/exit.scm 15 */

									{	/* Expand/exit.scm 15 */
										obj_t BgL_locationz00_1048;

										BgL_locationz00_1048 = BBOOL(((bool_t) 0));
										{	/* Expand/exit.scm 15 */

											BgL_arg2836z00_1046 =
												BGl_readz00zz__readerz00(BgL_cportz00_1042,
												BgL_locationz00_1048);
										}
									}
								}
								{	/* Expand/exit.scm 15 */
									int BgL_auxz00_1070;

									BgL_auxz00_1070 = (int) (BgL_iz00_1043);
									CNST_TABLE_SET(BgL_auxz00_1070, BgL_arg2836z00_1046);
							}}
							{	/* Expand/exit.scm 15 */
								int BgL_auxz00_1049;

								BgL_auxz00_1049 = (int) ((BgL_iz00_1043 - ((long) 1)));
								{
									long BgL_iz00_1075;

									BgL_iz00_1075 = (long) (BgL_auxz00_1049);
									BgL_iz00_1043 = BgL_iz00_1075;
									goto BgL_loopz00_1044;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzexpand_exitz00()
	{
		AN_OBJECT;
		{	/* Expand/exit.scm 15 */
			return BUNSPEC;
		}
	}



/* expand-jump-exit */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2jumpzd2exitz00zzexpand_exitz00(obj_t
		BgL_xz00_25, obj_t BgL_ez00_26)
	{
		AN_OBJECT;
		{	/* Expand/exit.scm 39 */
			{
				obj_t BgL_exitz00_285;

				obj_t BgL_valuez00_286;

				if (PAIRP(BgL_xz00_25))
					{	/* Expand/exit.scm 40 */
						obj_t BgL_cdrzd21655zd2_291;

						BgL_cdrzd21655zd2_291 = CDR(BgL_xz00_25);
						if (PAIRP(BgL_cdrzd21655zd2_291))
							{	/* Expand/exit.scm 40 */
								BgL_exitz00_285 = CAR(BgL_cdrzd21655zd2_291);
								BgL_valuez00_286 = CDR(BgL_cdrzd21655zd2_291);
								{	/* Expand/exit.scm 42 */
									obj_t BgL_newz00_295;

									{	/* Expand/exit.scm 42 */
										obj_t BgL_arg1715z00_296;

										obj_t BgL_arg1718z00_297;

										BgL_arg1715z00_296 = CNST_TABLE_REF(((long) 0));
										{	/* Expand/exit.scm 42 */
											obj_t BgL_arg1719z00_298;

											obj_t BgL_arg1724z00_299;

											BgL_arg1719z00_298 =
												PROCEDURE_ENTRY(BgL_ez00_26) (BgL_ez00_26,
												BgL_exitz00_285, BgL_ez00_26, BEOA);
											{	/* Expand/exit.scm 42 */
												obj_t BgL_arg1730z00_303;

												BgL_arg1730z00_303 =
													BGl_expandzd2prognzd2zz__prognz00(BgL_valuez00_286);
												BgL_arg1724z00_299 =
													PROCEDURE_ENTRY(BgL_ez00_26) (BgL_ez00_26,
													BgL_arg1730z00_303, BgL_ez00_26, BEOA);
											}
											{	/* Expand/exit.scm 42 */
												obj_t BgL_list1726z00_301;

												{	/* Expand/exit.scm 42 */
													obj_t BgL_arg1729z00_302;

													BgL_arg1729z00_302 = MAKE_PAIR(BNIL, BNIL);
													BgL_list1726z00_301 =
														MAKE_PAIR(BgL_arg1724z00_299, BgL_arg1729z00_302);
												}
												BgL_arg1718z00_297 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1719z00_298, BgL_list1726z00_301);
										}}
										BgL_newz00_295 =
											MAKE_PAIR(BgL_arg1715z00_296, BgL_arg1718z00_297);
									}
									return
										BGl_replacez12z12zztools_miscz00(BgL_xz00_25,
										BgL_newz00_295);
								}
							}
						else
							{	/* Expand/exit.scm 40 */
							BgL_tagzd21648zd2_288:
								return
									BGl_errorz00zz__errorz00(BFALSE,
									BGl_string2828z00zzexpand_exitz00, BgL_xz00_25);
							}
					}
				else
					{	/* Expand/exit.scm 40 */
						goto BgL_tagzd21648zd2_288;
					}
			}
		}
	}



/* _expand-jump-exit */
	obj_t BGl__expandzd2jumpzd2exitz00zzexpand_exitz00(obj_t BgL_envz00_1025,
		obj_t BgL_xz00_1026, obj_t BgL_ez00_1027)
	{
		AN_OBJECT;
		{	/* Expand/exit.scm 39 */
			return
				BGl_expandzd2jumpzd2exitz00zzexpand_exitz00(BgL_xz00_1026,
				BgL_ez00_1027);
		}
	}



/* expand-set-exit */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2setzd2exitz00zzexpand_exitz00(obj_t
		BgL_xz00_27, obj_t BgL_ez00_28)
	{
		AN_OBJECT;
		{	/* Expand/exit.scm 50 */
			{
				obj_t BgL_exitz00_304;

				obj_t BgL_bodyz00_305;

				if (PAIRP(BgL_xz00_27))
					{	/* Expand/exit.scm 51 */
						obj_t BgL_cdrzd21670zd2_310;

						BgL_cdrzd21670zd2_310 = CDR(BgL_xz00_27);
						if (PAIRP(BgL_cdrzd21670zd2_310))
							{	/* Expand/exit.scm 51 */
								obj_t BgL_carzd21673zd2_312;

								BgL_carzd21673zd2_312 = CAR(BgL_cdrzd21670zd2_310);
								if (PAIRP(BgL_carzd21673zd2_312))
									{	/* Expand/exit.scm 51 */
										if (NULLP(CDR(BgL_carzd21673zd2_312)))
											{	/* Expand/exit.scm 51 */
												BgL_exitz00_304 = CAR(BgL_carzd21673zd2_312);
												BgL_bodyz00_305 = CDR(BgL_cdrzd21670zd2_310);
												{	/* Expand/exit.scm 53 */
													obj_t BgL_newz00_318;

													{	/* Expand/exit.scm 53 */
														obj_t BgL_arg1739z00_319;

														obj_t BgL_arg1740z00_320;

														BgL_arg1739z00_319 = CNST_TABLE_REF(((long) 1));
														{	/* Expand/exit.scm 53 */
															obj_t BgL_arg1741z00_321;

															obj_t BgL_arg1742z00_322;

															BgL_arg1741z00_321 =
																MAKE_PAIR(BgL_exitz00_304, BNIL);
															{	/* Expand/exit.scm 53 */
																obj_t BgL_arg1746z00_326;

																BgL_arg1746z00_326 =
																	BGl_expandzd2prognzd2zz__prognz00
																	(BgL_bodyz00_305);
																BgL_arg1742z00_322 =
																	PROCEDURE_ENTRY(BgL_ez00_28) (BgL_ez00_28,
																	BgL_arg1746z00_326, BgL_ez00_28, BEOA);
															}
															{	/* Expand/exit.scm 53 */
																obj_t BgL_list1744z00_324;

																{	/* Expand/exit.scm 53 */
																	obj_t BgL_arg1745z00_325;

																	BgL_arg1745z00_325 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list1744z00_324 =
																		MAKE_PAIR(BgL_arg1742z00_322,
																		BgL_arg1745z00_325);
																}
																BgL_arg1740z00_320 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg1741z00_321, BgL_list1744z00_324);
														}}
														BgL_newz00_318 =
															MAKE_PAIR(BgL_arg1739z00_319, BgL_arg1740z00_320);
													}
													return
														BGl_replacez12z12zztools_miscz00(BgL_xz00_27,
														BgL_newz00_318);
												}
											}
										else
											{	/* Expand/exit.scm 51 */
											BgL_tagzd21663zd2_307:
												return
													BGl_errorz00zz__errorz00(BFALSE,
													BGl_string2829z00zzexpand_exitz00, BgL_xz00_27);
											}
									}
								else
									{	/* Expand/exit.scm 51 */
										goto BgL_tagzd21663zd2_307;
									}
							}
						else
							{	/* Expand/exit.scm 51 */
								goto BgL_tagzd21663zd2_307;
							}
					}
				else
					{	/* Expand/exit.scm 51 */
						goto BgL_tagzd21663zd2_307;
					}
			}
		}
	}



/* _expand-set-exit */
	obj_t BGl__expandzd2setzd2exitz00zzexpand_exitz00(obj_t BgL_envz00_1028,
		obj_t BgL_xz00_1029, obj_t BgL_ez00_1030)
	{
		AN_OBJECT;
		{	/* Expand/exit.scm 50 */
			return
				BGl_expandzd2setzd2exitz00zzexpand_exitz00(BgL_xz00_1029,
				BgL_ez00_1030);
		}
	}



/* expand-bind-exit */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2bindzd2exitz00zzexpand_exitz00(obj_t
		BgL_xz00_29, obj_t BgL_ez00_30)
	{
		AN_OBJECT;
		{	/* Expand/exit.scm 61 */
			{
				obj_t BgL_exitz00_327;

				obj_t BgL_bodyz00_328;

				if (PAIRP(BgL_xz00_29))
					{	/* Expand/exit.scm 62 */
						obj_t BgL_cdrzd21688zd2_333;

						BgL_cdrzd21688zd2_333 = CDR(BgL_xz00_29);
						if (PAIRP(BgL_cdrzd21688zd2_333))
							{	/* Expand/exit.scm 62 */
								obj_t BgL_carzd21691zd2_335;

								BgL_carzd21691zd2_335 = CAR(BgL_cdrzd21688zd2_333);
								if (PAIRP(BgL_carzd21691zd2_335))
									{	/* Expand/exit.scm 62 */
										if (NULLP(CDR(BgL_carzd21691zd2_335)))
											{	/* Expand/exit.scm 62 */
												BgL_exitz00_327 = CAR(BgL_carzd21691zd2_335);
												BgL_bodyz00_328 = CDR(BgL_cdrzd21688zd2_333);
												{	/* Expand/exit.scm 64 */
													obj_t BgL_anzd2exitzd2_341;

													obj_t BgL_anzd2exitdzd2_342;

													obj_t BgL_valz00_343;

													obj_t BgL_resz00_344;

													BgL_anzd2exitzd2_341 =
														BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
														(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
																	(long) 2))));
													BgL_anzd2exitdzd2_342 =
														BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
														(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
																	(long) 3))));
													BgL_valz00_343 =
														BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
														(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
																	(long) 4))));
													BgL_resz00_344 =
														BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
														(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
																	(long) 5))));
													{	/* Expand/exit.scm 68 */
														obj_t BgL_newz00_345;

														{	/* Expand/exit.scm 68 */
															obj_t BgL_arg1755z00_346;

															{	/* Expand/exit.scm 68 */
																obj_t BgL_arg1756z00_347;

																obj_t BgL_arg1757z00_348;

																BgL_arg1756z00_347 = CNST_TABLE_REF(((long) 1));
																{	/* Expand/exit.scm 68 */
																	obj_t BgL_arg1758z00_349;

																	obj_t BgL_arg1764z00_350;

																	BgL_arg1758z00_349 =
																		MAKE_PAIR(BgL_anzd2exitzd2_341, BNIL);
																	{	/* Expand/exit.scm 69 */
																		obj_t BgL_arg1770z00_354;

																		obj_t BgL_arg1771z00_355;

																		BgL_arg1770z00_354 =
																			CNST_TABLE_REF(((long) 6));
																		{	/* Expand/exit.scm 69 */
																			obj_t BgL_arg1775z00_357;

																			obj_t BgL_arg1776z00_358;

																			{	/* Expand/exit.scm 70 */
																				obj_t BgL_arg1783z00_363;

																				obj_t BgL_arg1784z00_364;

																				BgL_arg1783z00_363 =
																					CNST_TABLE_REF(((long) 7));
																				{	/* Expand/exit.scm 70 */
																					obj_t BgL_list1785z00_365;

																					{	/* Expand/exit.scm 70 */
																						obj_t BgL_arg1787z00_367;

																						BgL_arg1787z00_367 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list1785z00_365 =
																							MAKE_PAIR(BINT(((long) 1)),
																							BgL_arg1787z00_367);
																					}
																					BgL_arg1784z00_364 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_anzd2exitzd2_341,
																						BgL_list1785z00_365);
																				}
																				BgL_arg1775z00_357 =
																					MAKE_PAIR(BgL_arg1783z00_363,
																					BgL_arg1784z00_364);
																			}
																			{	/* Expand/exit.scm 71 */
																				obj_t BgL_arg1789z00_368;

																				obj_t BgL_arg1790z00_369;

																				BgL_arg1789z00_368 =
																					CNST_TABLE_REF(((long) 6));
																				{	/* Expand/exit.scm 71 */
																					obj_t BgL_arg1791z00_370;

																					obj_t BgL_arg1792z00_371;

																					{	/* Expand/exit.scm 71 */
																						obj_t BgL_arg1796z00_375;

																						{	/* Expand/exit.scm 71 */
																							obj_t BgL_arg1798z00_377;

																							{	/* Expand/exit.scm 71 */
																								obj_t BgL_arg1799z00_378;

																								BgL_arg1799z00_378 =
																									MAKE_PAIR(CNST_TABLE_REF((
																											(long) 8)), BNIL);
																								{	/* Expand/exit.scm 71 */
																									obj_t BgL_list1801z00_380;

																									BgL_list1801z00_380 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg1798z00_377 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg1799z00_378,
																										BgL_list1801z00_380);
																							}}
																							BgL_arg1796z00_375 =
																								MAKE_PAIR(BgL_anzd2exitdzd2_342,
																								BgL_arg1798z00_377);
																						}
																						BgL_arg1791z00_370 =
																							MAKE_PAIR(BgL_arg1796z00_375,
																							BNIL);
																					}
																					{	/* Expand/exit.scm 72 */
																						obj_t BgL_arg1803z00_381;

																						obj_t BgL_arg1804z00_382;

																						BgL_arg1803z00_381 =
																							CNST_TABLE_REF(((long) 9));
																						{	/* Expand/exit.scm 72 */
																							obj_t BgL_arg1805z00_383;

																							obj_t BgL_arg1806z00_384;

																							{	/* Expand/exit.scm 72 */
																								obj_t BgL_arg1810z00_388;

																								{	/* Expand/exit.scm 72 */
																									obj_t BgL_arg1812z00_390;

																									{	/* Expand/exit.scm 72 */
																										obj_t BgL_arg1813z00_391;

																										obj_t BgL_arg1815z00_392;

																										BgL_arg1813z00_391 =
																											MAKE_PAIR(BgL_valz00_343,
																											BNIL);
																										{	/* Expand/exit.scm 73 */
																											obj_t BgL_arg1819z00_396;

																											obj_t BgL_arg1820z00_397;

																											{	/* Expand/exit.scm 73 */
																												obj_t
																													BgL_arg1821z00_398;
																												obj_t
																													BgL_arg1822z00_399;
																												BgL_arg1821z00_398 =
																													CNST_TABLE_REF(((long)
																														10));
																												{	/* Expand/exit.scm 73 */
																													obj_t
																														BgL_list1823z00_400;
																													{	/* Expand/exit.scm 73 */
																														obj_t
																															BgL_arg1824z00_401;
																														obj_t
																															BgL_arg1825z00_402;
																														BgL_arg1824z00_401 =
																															CNST_TABLE_REF((
																																(long) 11));
																														BgL_arg1825z00_402 =
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_list1823z00_400
																															=
																															MAKE_PAIR
																															(BgL_arg1824z00_401,
																															BgL_arg1825z00_402);
																													}
																													BgL_arg1822z00_399 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(CNST_TABLE_REF((
																																(long) 12)),
																														BgL_list1823z00_400);
																												}
																												BgL_arg1819z00_396 =
																													MAKE_PAIR
																													(BgL_arg1821z00_398,
																													BgL_arg1822z00_399);
																											}
																											{	/* Expand/exit.scm 73 */
																												obj_t
																													BgL_list1826z00_403;
																												{	/* Expand/exit.scm 73 */
																													obj_t
																														BgL_arg1827z00_404;
																													BgL_arg1827z00_404 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_list1826z00_403 =
																														MAKE_PAIR
																														(BgL_valz00_343,
																														BgL_arg1827z00_404);
																												}
																												BgL_arg1820z00_397 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_anzd2exitdzd2_342,
																													BgL_list1826z00_403);
																											}
																											BgL_arg1815z00_392 =
																												MAKE_PAIR
																												(BgL_arg1819z00_396,
																												BgL_arg1820z00_397);
																										}
																										{	/* Expand/exit.scm 72 */
																											obj_t BgL_list1817z00_394;

																											{	/* Expand/exit.scm 72 */
																												obj_t
																													BgL_arg1818z00_395;
																												BgL_arg1818z00_395 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_list1817z00_394 =
																													MAKE_PAIR
																													(BgL_arg1815z00_392,
																													BgL_arg1818z00_395);
																											}
																											BgL_arg1812z00_390 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg1813z00_391,
																												BgL_list1817z00_394);
																									}}
																									BgL_arg1810z00_388 =
																										MAKE_PAIR(BgL_exitz00_327,
																										BgL_arg1812z00_390);
																								}
																								BgL_arg1805z00_383 =
																									MAKE_PAIR(BgL_arg1810z00_388,
																									BNIL);
																							}
																							{	/* Expand/exit.scm 76 */
																								obj_t BgL_arg1828z00_405;

																								obj_t BgL_arg1829z00_406;

																								BgL_arg1828z00_405 =
																									CNST_TABLE_REF(((long) 6));
																								{	/* Expand/exit.scm 76 */
																									obj_t BgL_arg1830z00_407;

																									obj_t BgL_arg1831z00_408;

																									{	/* Expand/exit.scm 76 */
																										obj_t BgL_arg1836z00_413;

																										{	/* Expand/exit.scm 76 */
																											obj_t BgL_arg1839z00_415;

																											{	/* Expand/exit.scm 76 */
																												obj_t
																													BgL_arg1840z00_416;
																												{	/* Expand/exit.scm 76 */
																													obj_t
																														BgL_arg1845z00_419;
																													obj_t
																														BgL_arg1846z00_420;
																													BgL_arg1845z00_419 =
																														CNST_TABLE_REF((
																															(long) 13));
																													BgL_arg1846z00_420 =
																														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																														(BgL_bodyz00_328,
																														BNIL);
																													BgL_arg1840z00_416 =
																														MAKE_PAIR
																														(BgL_arg1845z00_419,
																														BgL_arg1846z00_420);
																												}
																												{	/* Expand/exit.scm 76 */
																													obj_t
																														BgL_list1842z00_418;
																													BgL_list1842z00_418 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg1839z00_415 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg1840z00_416,
																														BgL_list1842z00_418);
																											}}
																											BgL_arg1836z00_413 =
																												MAKE_PAIR
																												(BgL_resz00_344,
																												BgL_arg1839z00_415);
																										}
																										BgL_arg1830z00_407 =
																											MAKE_PAIR
																											(BgL_arg1836z00_413,
																											BNIL);
																									}
																									BgL_arg1831z00_408 =
																										MAKE_PAIR(CNST_TABLE_REF((
																												(long) 14)), BNIL);
																									{	/* Expand/exit.scm 76 */
																										obj_t BgL_list1833z00_410;

																										{	/* Expand/exit.scm 76 */
																											obj_t BgL_arg1834z00_411;

																											{	/* Expand/exit.scm 76 */
																												obj_t
																													BgL_arg1835z00_412;
																												BgL_arg1835z00_412 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg1834z00_411 =
																													MAKE_PAIR
																													(BgL_resz00_344,
																													BgL_arg1835z00_412);
																											}
																											BgL_list1833z00_410 =
																												MAKE_PAIR
																												(BgL_arg1831z00_408,
																												BgL_arg1834z00_411);
																										}
																										BgL_arg1829z00_406 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg1830z00_407,
																											BgL_list1833z00_410);
																								}}
																								BgL_arg1806z00_384 =
																									MAKE_PAIR(BgL_arg1828z00_405,
																									BgL_arg1829z00_406);
																							}
																							{	/* Expand/exit.scm 72 */
																								obj_t BgL_list1808z00_386;

																								{	/* Expand/exit.scm 72 */
																									obj_t BgL_arg1809z00_387;

																									BgL_arg1809z00_387 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list1808z00_386 =
																										MAKE_PAIR
																										(BgL_arg1806z00_384,
																										BgL_arg1809z00_387);
																								}
																								BgL_arg1804z00_382 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg1805z00_383,
																									BgL_list1808z00_386);
																						}}
																						BgL_arg1792z00_371 =
																							MAKE_PAIR(BgL_arg1803z00_381,
																							BgL_arg1804z00_382);
																					}
																					{	/* Expand/exit.scm 71 */
																						obj_t BgL_list1794z00_373;

																						{	/* Expand/exit.scm 71 */
																							obj_t BgL_arg1795z00_374;

																							BgL_arg1795z00_374 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list1794z00_373 =
																								MAKE_PAIR(BgL_arg1792z00_371,
																								BgL_arg1795z00_374);
																						}
																						BgL_arg1790z00_369 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg1791z00_370,
																							BgL_list1794z00_373);
																				}}
																				BgL_arg1776z00_358 =
																					MAKE_PAIR(BgL_arg1789z00_368,
																					BgL_arg1790z00_369);
																			}
																			{	/* Expand/exit.scm 69 */
																				obj_t BgL_list1778z00_360;

																				{	/* Expand/exit.scm 69 */
																					obj_t BgL_arg1779z00_361;

																					{	/* Expand/exit.scm 69 */
																						obj_t BgL_arg1782z00_362;

																						BgL_arg1782z00_362 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg1779z00_361 =
																							MAKE_PAIR(BgL_arg1776z00_358,
																							BgL_arg1782z00_362);
																					}
																					BgL_list1778z00_360 =
																						MAKE_PAIR(BgL_arg1775z00_357,
																						BgL_arg1779z00_361);
																				}
																				BgL_arg1771z00_355 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BNIL, BgL_list1778z00_360);
																		}}
																		BgL_arg1764z00_350 =
																			MAKE_PAIR(BgL_arg1770z00_354,
																			BgL_arg1771z00_355);
																	}
																	{	/* Expand/exit.scm 68 */
																		obj_t BgL_list1768z00_352;

																		{	/* Expand/exit.scm 68 */
																			obj_t BgL_arg1769z00_353;

																			BgL_arg1769z00_353 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list1768z00_352 =
																				MAKE_PAIR(BgL_arg1764z00_350,
																				BgL_arg1769z00_353);
																		}
																		BgL_arg1757z00_348 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg1758z00_349, BgL_list1768z00_352);
																}}
																BgL_arg1755z00_346 =
																	MAKE_PAIR(BgL_arg1756z00_347,
																	BgL_arg1757z00_348);
															}
															BgL_newz00_345 =
																PROCEDURE_ENTRY(BgL_ez00_30) (BgL_ez00_30,
																BgL_arg1755z00_346, BgL_ez00_30, BEOA);
														}
														return
															BGl_replacez12z12zztools_miscz00(BgL_xz00_29,
															BgL_newz00_345);
													}
												}
											}
										else
											{	/* Expand/exit.scm 62 */
											BgL_tagzd21681zd2_330:
												return
													BGl_errorz00zz__errorz00(BFALSE,
													BGl_string2830z00zzexpand_exitz00, BgL_xz00_29);
											}
									}
								else
									{	/* Expand/exit.scm 62 */
										goto BgL_tagzd21681zd2_330;
									}
							}
						else
							{	/* Expand/exit.scm 62 */
								goto BgL_tagzd21681zd2_330;
							}
					}
				else
					{	/* Expand/exit.scm 62 */
						goto BgL_tagzd21681zd2_330;
					}
			}
		}
	}



/* _expand-bind-exit */
	obj_t BGl__expandzd2bindzd2exitz00zzexpand_exitz00(obj_t BgL_envz00_1031,
		obj_t BgL_xz00_1032, obj_t BgL_ez00_1033)
	{
		AN_OBJECT;
		{	/* Expand/exit.scm 61 */
			return
				BGl_expandzd2bindzd2exitz00zzexpand_exitz00(BgL_xz00_1032,
				BgL_ez00_1033);
		}
	}



/* expand-unwind-protect */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2unwindzd2protectz00zzexpand_exitz00(obj_t
		BgL_xz00_31, obj_t BgL_ez00_32)
	{
		AN_OBJECT;
		{	/* Expand/exit.scm 87 */
			{
				obj_t BgL_expz00_425;

				obj_t BgL_cleanupz00_426;

				if (PAIRP(BgL_xz00_31))
					{	/* Expand/exit.scm 88 */
						obj_t BgL_cdrzd21706zd2_431;

						BgL_cdrzd21706zd2_431 = CDR(BgL_xz00_31);
						if (PAIRP(BgL_cdrzd21706zd2_431))
							{	/* Expand/exit.scm 88 */
								obj_t BgL_cdrzd21710zd2_433;

								BgL_cdrzd21710zd2_433 = CDR(BgL_cdrzd21706zd2_431);
								if (PAIRP(BgL_cdrzd21710zd2_433))
									{	/* Expand/exit.scm 88 */
										BgL_expz00_425 = CAR(BgL_cdrzd21706zd2_431);
										BgL_cleanupz00_426 = BgL_cdrzd21710zd2_433;
										{	/* Expand/exit.scm 90 */
											obj_t BgL_valz00_436;

											BgL_valz00_436 =
												BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
												(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
															(long) 4))));
											{	/* Expand/exit.scm 90 */
												obj_t BgL_anzd2exitzd2_437;

												BgL_anzd2exitzd2_437 =
													BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
													(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
																(long) 2))));
												{	/* Expand/exit.scm 91 */
													obj_t BgL_valbisz00_438;

													BgL_valbisz00_438 =
														BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
														(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
																	(long) 4))));
													{	/* Expand/exit.scm 92 */
														obj_t BgL_eexpz00_439;

														BgL_eexpz00_439 =
															PROCEDURE_ENTRY(BgL_ez00_32) (BgL_ez00_32,
															BgL_expz00_425, BgL_ez00_32, BEOA);
														{	/* Expand/exit.scm 93 */
															obj_t BgL_auxz00_440;

															{	/* Expand/exit.scm 94 */
																obj_t BgL_arg1932z00_512;

																obj_t BgL_arg1935z00_513;

																BgL_arg1932z00_512 = CNST_TABLE_REF(((long) 6));
																{	/* Expand/exit.scm 94 */
																	obj_t BgL_arg1937z00_514;

																	obj_t BgL_arg1938z00_515;

																	{	/* Expand/exit.scm 94 */
																		obj_t BgL_arg1944z00_520;

																		{	/* Expand/exit.scm 94 */
																			obj_t BgL_arg1946z00_522;

																			{	/* Expand/exit.scm 94 */
																				obj_t BgL_list1947z00_523;

																				BgL_list1947z00_523 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg1946z00_522 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_eexpz00_439,
																					BgL_list1947z00_523);
																			}
																			BgL_arg1944z00_520 =
																				MAKE_PAIR(BgL_valbisz00_438,
																				BgL_arg1946z00_522);
																		}
																		BgL_arg1937z00_514 =
																			MAKE_PAIR(BgL_arg1944z00_520, BNIL);
																	}
																	BgL_arg1938z00_515 =
																		MAKE_PAIR(CNST_TABLE_REF(((long) 14)),
																		BNIL);
																	{	/* Expand/exit.scm 94 */
																		obj_t BgL_list1941z00_517;

																		{	/* Expand/exit.scm 94 */
																			obj_t BgL_arg1942z00_518;

																			{	/* Expand/exit.scm 94 */
																				obj_t BgL_arg1943z00_519;

																				BgL_arg1943z00_519 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg1942z00_518 =
																					MAKE_PAIR(BgL_valbisz00_438,
																					BgL_arg1943z00_519);
																			}
																			BgL_list1941z00_517 =
																				MAKE_PAIR(BgL_arg1938z00_515,
																				BgL_arg1942z00_518);
																		}
																		BgL_arg1935z00_513 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg1937z00_514, BgL_list1941z00_517);
																}}
																BgL_auxz00_440 =
																	MAKE_PAIR(BgL_arg1932z00_512,
																	BgL_arg1935z00_513);
															}
															{	/* Expand/exit.scm 94 */
																obj_t BgL_eauxz00_441;

																if (EXTENDED_PAIRP(BgL_eexpz00_439))
																	{	/* Expand/exit.scm 98 */
																		obj_t BgL_arg1929z00_509;

																		obj_t BgL_arg1930z00_510;

																		obj_t BgL_arg1931z00_511;

																		BgL_arg1929z00_509 = CAR(BgL_auxz00_440);
																		BgL_arg1930z00_510 = CDR(BgL_auxz00_440);
																		BgL_arg1931z00_511 = CER(BgL_eexpz00_439);
																		{	/* Expand/exit.scm 98 */
																			obj_t BgL_res2825z00_996;

																			BgL_res2825z00_996 =
																				MAKE_EXTENDED_PAIR(BgL_arg1929z00_509,
																				BgL_arg1930z00_510, BgL_arg1931z00_511);
																			BgL_eauxz00_441 = BgL_res2825z00_996;
																		}
																	}
																else
																	{	/* Expand/exit.scm 97 */
																		BgL_eauxz00_441 = BgL_auxz00_440;
																	}
																{	/* Expand/exit.scm 97 */

																	{	/* Expand/exit.scm 100 */
																		obj_t BgL_newz00_442;

																		{	/* Expand/exit.scm 100 */
																			obj_t BgL_arg1856z00_443;

																			obj_t BgL_arg1857z00_444;

																			BgL_arg1856z00_443 =
																				CNST_TABLE_REF(((long) 6));
																			{	/* Expand/exit.scm 100 */
																				obj_t BgL_arg1858z00_445;

																				obj_t BgL_arg1860z00_446;

																				obj_t BgL_arg1861z00_447;

																				{	/* Expand/exit.scm 100 */
																					obj_t BgL_arg1866z00_452;

																					{	/* Expand/exit.scm 100 */
																						obj_t BgL_arg1868z00_454;

																						{	/* Expand/exit.scm 100 */
																							obj_t BgL_arg1869z00_455;

																							{	/* Expand/exit.scm 100 */
																								obj_t BgL_arg1872z00_458;

																								obj_t BgL_arg1873z00_459;

																								BgL_arg1872z00_458 =
																									CNST_TABLE_REF(((long) 1));
																								{	/* Expand/exit.scm 100 */
																									obj_t BgL_arg1874z00_460;

																									obj_t BgL_arg1875z00_461;

																									BgL_arg1874z00_460 =
																										MAKE_PAIR
																										(BgL_anzd2exitzd2_437,
																										BNIL);
																									{	/* Expand/exit.scm 101 */
																										obj_t BgL_arg1879z00_465;

																										obj_t BgL_arg1880z00_466;

																										BgL_arg1879z00_465 =
																											CNST_TABLE_REF(((long)
																												6));
																										{	/* Expand/exit.scm 101 */
																											obj_t BgL_arg1882z00_468;

																											{	/* Expand/exit.scm 102 */
																												obj_t
																													BgL_arg1888z00_473;
																												obj_t
																													BgL_arg1890z00_474;
																												BgL_arg1888z00_473 =
																													CNST_TABLE_REF(((long)
																														7));
																												{	/* Expand/exit.scm 102 */
																													obj_t
																														BgL_list1891z00_475;
																													{	/* Expand/exit.scm 102 */
																														obj_t
																															BgL_arg1893z00_477;
																														BgL_arg1893z00_477 =
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_list1891z00_475
																															=
																															MAKE_PAIR(BINT((
																																	(long) 0)),
																															BgL_arg1893z00_477);
																													}
																													BgL_arg1890z00_474 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_anzd2exitzd2_437,
																														BgL_list1891z00_475);
																												}
																												BgL_arg1882z00_468 =
																													MAKE_PAIR
																													(BgL_arg1888z00_473,
																													BgL_arg1890z00_474);
																											}
																											{	/* Expand/exit.scm 101 */
																												obj_t
																													BgL_list1884z00_470;
																												{	/* Expand/exit.scm 101 */
																													obj_t
																														BgL_arg1886z00_471;
																													{	/* Expand/exit.scm 101 */
																														obj_t
																															BgL_arg1887z00_472;
																														BgL_arg1887z00_472 =
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg1886z00_471 =
																															MAKE_PAIR
																															(BgL_auxz00_440,
																															BgL_arg1887z00_472);
																													}
																													BgL_list1884z00_470 =
																														MAKE_PAIR
																														(BgL_arg1882z00_468,
																														BgL_arg1886z00_471);
																												}
																												BgL_arg1880z00_466 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BNIL,
																													BgL_list1884z00_470);
																										}}
																										BgL_arg1875z00_461 =
																											MAKE_PAIR
																											(BgL_arg1879z00_465,
																											BgL_arg1880z00_466);
																									}
																									{	/* Expand/exit.scm 100 */
																										obj_t BgL_list1877z00_463;

																										{	/* Expand/exit.scm 100 */
																											obj_t BgL_arg1878z00_464;

																											BgL_arg1878z00_464 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_list1877z00_463 =
																												MAKE_PAIR
																												(BgL_arg1875z00_461,
																												BgL_arg1878z00_464);
																										}
																										BgL_arg1873z00_459 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg1874z00_460,
																											BgL_list1877z00_463);
																								}}
																								BgL_arg1869z00_455 =
																									MAKE_PAIR(BgL_arg1872z00_458,
																									BgL_arg1873z00_459);
																							}
																							{	/* Expand/exit.scm 100 */
																								obj_t BgL_list1871z00_457;

																								BgL_list1871z00_457 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg1868z00_454 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg1869z00_455,
																									BgL_list1871z00_457);
																						}}
																						BgL_arg1866z00_452 =
																							MAKE_PAIR(BgL_valz00_436,
																							BgL_arg1868z00_454);
																					}
																					BgL_arg1858z00_445 =
																						MAKE_PAIR(BgL_arg1866z00_452, BNIL);
																				}
																				{	/* Expand/exit.scm 104 */
																					obj_t BgL_arg1894z00_478;

																					BgL_arg1894z00_478 =
																						BGl_expandzd2prognzd2zz__prognz00
																						(BgL_cleanupz00_426);
																					BgL_arg1860z00_446 =
																						PROCEDURE_ENTRY(BgL_ez00_32)
																						(BgL_ez00_32, BgL_arg1894z00_478,
																						BgL_ez00_32, BEOA);
																				}
																				{	/* Expand/exit.scm 105 */
																					obj_t BgL_arg1895z00_479;

																					obj_t BgL_arg1896z00_480;

																					BgL_arg1895z00_479 =
																						CNST_TABLE_REF(((long) 15));
																					{	/* Expand/exit.scm 105 */
																						obj_t BgL_arg1898z00_481;

																						obj_t BgL_arg1899z00_482;

																						{	/* Expand/exit.scm 105 */
																							obj_t BgL_arg1904z00_487;

																							obj_t BgL_arg1905z00_488;

																							BgL_arg1904z00_487 =
																								CNST_TABLE_REF(((long) 16));
																							{	/* Expand/exit.scm 105 */
																								obj_t BgL_list1906z00_489;

																								BgL_list1906z00_489 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg1905z00_488 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_valz00_436,
																									BgL_list1906z00_489);
																							}
																							BgL_arg1898z00_481 =
																								MAKE_PAIR(BgL_arg1904z00_487,
																								BgL_arg1905z00_488);
																						}
																						{	/* Expand/exit.scm 106 */
																							obj_t BgL_arg1907z00_490;

																							obj_t BgL_arg1908z00_491;

																							{	/* Expand/exit.scm 106 */
																								obj_t BgL_arg1909z00_492;

																								obj_t BgL_arg1910z00_493;

																								BgL_arg1909z00_492 =
																									CNST_TABLE_REF(((long) 10));
																								{	/* Expand/exit.scm 106 */
																									obj_t BgL_list1911z00_494;

																									{	/* Expand/exit.scm 106 */
																										obj_t BgL_arg1912z00_495;

																										obj_t BgL_arg1914z00_496;

																										BgL_arg1912z00_495 =
																											CNST_TABLE_REF(((long)
																												11));
																										BgL_arg1914z00_496 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list1911z00_494 =
																											MAKE_PAIR
																											(BgL_arg1912z00_495,
																											BgL_arg1914z00_496);
																									}
																									BgL_arg1910z00_493 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(CNST_TABLE_REF(((long)
																												12)),
																										BgL_list1911z00_494);
																								}
																								BgL_arg1907z00_490 =
																									MAKE_PAIR(BgL_arg1909z00_492,
																									BgL_arg1910z00_493);
																							}
																							{	/* Expand/exit.scm 106 */
																								obj_t BgL_arg1915z00_497;

																								obj_t BgL_arg1916z00_498;

																								{	/* Expand/exit.scm 106 */
																									obj_t BgL_arg1921z00_502;

																									obj_t BgL_arg1922z00_503;

																									BgL_arg1921z00_502 =
																										CNST_TABLE_REF(((long) 17));
																									{	/* Expand/exit.scm 106 */
																										obj_t BgL_list1923z00_504;

																										BgL_list1923z00_504 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg1922z00_503 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_valz00_436,
																											BgL_list1923z00_504);
																									}
																									BgL_arg1915z00_497 =
																										MAKE_PAIR
																										(BgL_arg1921z00_502,
																										BgL_arg1922z00_503);
																								}
																								{	/* Expand/exit.scm 106 */
																									obj_t BgL_arg1924z00_505;

																									obj_t BgL_arg1925z00_506;

																									BgL_arg1924z00_505 =
																										CNST_TABLE_REF(((long) 18));
																									{	/* Expand/exit.scm 106 */
																										obj_t BgL_list1926z00_507;

																										BgL_list1926z00_507 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg1925z00_506 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_valz00_436,
																											BgL_list1926z00_507);
																									}
																									BgL_arg1916z00_498 =
																										MAKE_PAIR
																										(BgL_arg1924z00_505,
																										BgL_arg1925z00_506);
																								}
																								{	/* Expand/exit.scm 106 */
																									obj_t BgL_list1919z00_500;

																									{	/* Expand/exit.scm 106 */
																										obj_t BgL_arg1920z00_501;

																										BgL_arg1920z00_501 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list1919z00_500 =
																											MAKE_PAIR
																											(BgL_arg1916z00_498,
																											BgL_arg1920z00_501);
																									}
																									BgL_arg1908z00_491 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg1915z00_497,
																										BgL_list1919z00_500);
																							}}
																							BgL_arg1899z00_482 =
																								MAKE_PAIR(BgL_arg1907z00_490,
																								BgL_arg1908z00_491);
																						}
																						{	/* Expand/exit.scm 105 */
																							obj_t BgL_list1901z00_484;

																							{	/* Expand/exit.scm 105 */
																								obj_t BgL_arg1902z00_485;

																								{	/* Expand/exit.scm 105 */
																									obj_t BgL_arg1903z00_486;

																									BgL_arg1903z00_486 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg1902z00_485 =
																										MAKE_PAIR(BgL_valz00_436,
																										BgL_arg1903z00_486);
																								}
																								BgL_list1901z00_484 =
																									MAKE_PAIR(BgL_arg1899z00_482,
																									BgL_arg1902z00_485);
																							}
																							BgL_arg1896z00_480 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg1898z00_481,
																								BgL_list1901z00_484);
																					}}
																					BgL_arg1861z00_447 =
																						MAKE_PAIR(BgL_arg1895z00_479,
																						BgL_arg1896z00_480);
																				}
																				{	/* Expand/exit.scm 100 */
																					obj_t BgL_list1863z00_449;

																					{	/* Expand/exit.scm 100 */
																						obj_t BgL_arg1864z00_450;

																						{	/* Expand/exit.scm 100 */
																							obj_t BgL_arg1865z00_451;

																							BgL_arg1865z00_451 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg1864z00_450 =
																								MAKE_PAIR(BgL_arg1861z00_447,
																								BgL_arg1865z00_451);
																						}
																						BgL_list1863z00_449 =
																							MAKE_PAIR(BgL_arg1860z00_446,
																							BgL_arg1864z00_450);
																					}
																					BgL_arg1857z00_444 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg1858z00_445,
																						BgL_list1863z00_449);
																			}}
																			BgL_newz00_442 =
																				MAKE_PAIR(BgL_arg1856z00_443,
																				BgL_arg1857z00_444);
																		}
																		return
																			BGl_replacez12z12zztools_miscz00
																			(BgL_xz00_31, BgL_newz00_442);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								else
									{	/* Expand/exit.scm 88 */
									BgL_tagzd21699zd2_428:
										return
											BGl_errorz00zz__errorz00(BFALSE,
											BGl_string2831z00zzexpand_exitz00, BgL_xz00_31);
									}
							}
						else
							{	/* Expand/exit.scm 88 */
								goto BgL_tagzd21699zd2_428;
							}
					}
				else
					{	/* Expand/exit.scm 88 */
						goto BgL_tagzd21699zd2_428;
					}
			}
		}
	}



/* _expand-unwind-protect */
	obj_t BGl__expandzd2unwindzd2protectz00zzexpand_exitz00(obj_t BgL_envz00_1034,
		obj_t BgL_xz00_1035, obj_t BgL_ez00_1036)
	{
		AN_OBJECT;
		{	/* Expand/exit.scm 87 */
			return
				BGl_expandzd2unwindzd2protectz00zzexpand_exitz00(BgL_xz00_1035,
				BgL_ez00_1036);
		}
	}



/* expand-with-handler */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2withzd2handlerz00zzexpand_exitz00(obj_t
		BgL_xz00_33, obj_t BgL_ez00_34)
	{
		AN_OBJECT;
		{	/* Expand/exit.scm 115 */
			{
				obj_t BgL_bodyz00_856;

				obj_t BgL_handlerz00_742;

				obj_t BgL_bodyz00_743;

				{

					if (PAIRP(BgL_xz00_33))
						{	/* Expand/exit.scm 190 */
							obj_t BgL_cdrzd21723zd2_536;

							BgL_cdrzd21723zd2_536 = CDR(BgL_xz00_33);
							if (PAIRP(BgL_cdrzd21723zd2_536))
								{	/* Expand/exit.scm 190 */
									obj_t BgL_arg1955z00_538;

									obj_t BgL_arg1957z00_539;

									BgL_arg1955z00_538 = CAR(BgL_cdrzd21723zd2_536);
									BgL_arg1957z00_539 = CDR(BgL_cdrzd21723zd2_536);
									{	/* Expand/exit.scm 190 */
										obj_t BgL_auxz00_1326;

										BgL_handlerz00_742 = BgL_arg1955z00_538;
										BgL_bodyz00_743 = BgL_arg1957z00_539;
										{	/* Expand/exit.scm 151 */
											obj_t BgL_ohsz00_745;

											obj_t BgL_errz00_746;

											obj_t BgL_escapez00_747;

											BgL_ohsz00_745 =
												BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
														(long) 19)));
											BgL_errz00_746 =
												BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
														(long) 20)));
											BgL_escapez00_747 =
												BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
														(long) 21)));
											{	/* Expand/exit.scm 154 */
												obj_t BgL_arg2608z00_748;

												{	/* Expand/exit.scm 154 */
													obj_t BgL_arg2615z00_749;

													obj_t BgL_arg2621z00_750;

													BgL_arg2615z00_749 = CNST_TABLE_REF(((long) 22));
													{	/* Expand/exit.scm 154 */
														obj_t BgL_arg2628z00_751;

														obj_t BgL_arg2629z00_752;

														BgL_arg2628z00_751 =
															MAKE_PAIR(BgL_escapez00_747, BNIL);
														{	/* Expand/exit.scm 155 */
															obj_t BgL_arg2648z00_756;

															obj_t BgL_arg2649z00_757;

															BgL_arg2648z00_756 = CNST_TABLE_REF(((long) 6));
															{	/* Expand/exit.scm 155 */
																obj_t BgL_arg2650z00_758;

																obj_t BgL_arg2651z00_759;

																{	/* Expand/exit.scm 155 */
																	obj_t BgL_arg2656z00_763;

																	obj_t BgL_arg2657z00_764;

																	{	/* Expand/exit.scm 155 */
																		obj_t BgL_arg2658z00_765;

																		{	/* Expand/exit.scm 155 */
																			obj_t BgL_arg2659z00_766;

																			{	/* Expand/exit.scm 155 */
																				obj_t BgL_arg2663z00_769;

																				obj_t BgL_arg2664z00_770;

																				BgL_arg2663z00_769 =
																					CNST_TABLE_REF(((long) 23));
																				{	/* Expand/exit.scm 155 */
																					obj_t BgL_list2665z00_771;

																					{	/* Expand/exit.scm 155 */
																						obj_t BgL_arg2666z00_772;

																						BgL_arg2666z00_772 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list2665z00_771 =
																							MAKE_PAIR(BUNSPEC,
																							BgL_arg2666z00_772);
																					}
																					BgL_arg2664z00_770 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BFALSE, BgL_list2665z00_771);
																				}
																				BgL_arg2659z00_766 =
																					MAKE_PAIR(BgL_arg2663z00_769,
																					BgL_arg2664z00_770);
																			}
																			{	/* Expand/exit.scm 155 */
																				obj_t BgL_list2661z00_768;

																				BgL_list2661z00_768 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2658z00_765 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2659z00_766,
																					BgL_list2661z00_768);
																		}}
																		BgL_arg2656z00_763 =
																			MAKE_PAIR(BgL_errz00_746,
																			BgL_arg2658z00_765);
																	}
																	{	/* Expand/exit.scm 156 */
																		obj_t BgL_arg2667z00_773;

																		{	/* Expand/exit.scm 156 */
																			obj_t BgL_arg2670z00_776;

																			{	/* Expand/exit.scm 156 */
																				obj_t BgL_arg2671z00_777;

																				BgL_arg2671z00_777 =
																					MAKE_PAIR(CNST_TABLE_REF(((long) 24)),
																					BNIL);
																				{	/* Expand/exit.scm 156 */
																					obj_t BgL_list2673z00_779;

																					BgL_list2673z00_779 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2670z00_776 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2671z00_777,
																						BgL_list2673z00_779);
																			}}
																			BgL_arg2667z00_773 =
																				MAKE_PAIR(BgL_ohsz00_745,
																				BgL_arg2670z00_776);
																		}
																		{	/* Expand/exit.scm 155 */
																			obj_t BgL_list2669z00_775;

																			BgL_list2669z00_775 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2657z00_764 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2667z00_773,
																				BgL_list2669z00_775);
																	}}
																	BgL_arg2650z00_758 =
																		MAKE_PAIR(BgL_arg2656z00_763,
																		BgL_arg2657z00_764);
																}
																{	/* Expand/exit.scm 157 */
																	obj_t BgL_arg2674z00_780;

																	obj_t BgL_arg2675z00_781;

																	BgL_arg2674z00_780 =
																		CNST_TABLE_REF(((long) 25));
																	{	/* Expand/exit.scm 158 */
																		obj_t BgL_arg2676z00_782;

																		obj_t BgL_arg2677z00_783;

																		{	/* Expand/exit.scm 158 */
																			obj_t BgL_arg2681z00_787;

																			obj_t BgL_arg2682z00_788;

																			BgL_arg2681z00_787 =
																				CNST_TABLE_REF(((long) 13));
																			{	/* Expand/exit.scm 159 */
																				obj_t BgL_arg2683z00_789;

																				obj_t BgL_arg2684z00_790;

																				{	/* Expand/exit.scm 159 */
																					obj_t BgL_arg2686z00_792;

																					obj_t BgL_arg2687z00_793;

																					BgL_arg2686z00_792 =
																						CNST_TABLE_REF(((long) 26));
																					{	/* Expand/exit.scm 160 */
																						obj_t BgL_arg2688z00_794;

																						{	/* Expand/exit.scm 160 */
																							obj_t BgL_arg2691z00_797;

																							obj_t BgL_arg2692z00_798;

																							BgL_arg2691z00_797 =
																								CNST_TABLE_REF(((long) 23));
																							{	/* Expand/exit.scm 160 */
																								obj_t BgL_arg2693z00_799;

																								{	/* Expand/exit.scm 160 */
																									obj_t BgL_arg2697z00_803;

																									obj_t BgL_arg2698z00_804;

																									BgL_arg2697z00_803 =
																										CNST_TABLE_REF(((long) 27));
																									{	/* Expand/exit.scm 160 */
																										obj_t BgL_arg2699z00_805;

																										obj_t BgL_arg2700z00_806;

																										obj_t BgL_arg2701z00_807;

																										obj_t BgL_arg2702z00_808;

																										BgL_arg2699z00_805 =
																											MAKE_PAIR(CNST_TABLE_REF((
																													(long) 28)), BNIL);
																										{	/* Expand/exit.scm 161 */
																											obj_t BgL_arg2708z00_814;

																											obj_t BgL_arg2709z00_815;

																											BgL_arg2708z00_814 =
																												CNST_TABLE_REF(((long)
																													29));
																											{	/* Expand/exit.scm 161 */
																												obj_t
																													BgL_list2710z00_816;
																												{	/* Expand/exit.scm 161 */
																													obj_t
																														BgL_arg2711z00_817;
																													BgL_arg2711z00_817 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_list2710z00_816 =
																														MAKE_PAIR(BTRUE,
																														BgL_arg2711z00_817);
																												}
																												BgL_arg2709z00_815 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_errz00_746,
																													BgL_list2710z00_816);
																											}
																											BgL_arg2700z00_806 =
																												MAKE_PAIR
																												(BgL_arg2708z00_814,
																												BgL_arg2709z00_815);
																										}
																										{	/* Expand/exit.scm 162 */
																											obj_t BgL_arg2712z00_818;

																											obj_t BgL_arg2713z00_819;

																											BgL_arg2712z00_818 =
																												CNST_TABLE_REF(((long)
																													30));
																											{	/* Expand/exit.scm 162 */
																												obj_t
																													BgL_list2714z00_820;
																												{	/* Expand/exit.scm 162 */
																													obj_t
																														BgL_arg2716z00_821;
																													obj_t
																														BgL_arg2717z00_822;
																													BgL_arg2716z00_821 =
																														CNST_TABLE_REF((
																															(long) 28));
																													BgL_arg2717z00_822 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_list2714z00_820 =
																														MAKE_PAIR
																														(BgL_arg2716z00_821,
																														BgL_arg2717z00_822);
																												}
																												BgL_arg2713z00_819 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_errz00_746,
																													BgL_list2714z00_820);
																											}
																											BgL_arg2701z00_807 =
																												MAKE_PAIR
																												(BgL_arg2712z00_818,
																												BgL_arg2713z00_819);
																										}
																										{	/* Expand/exit.scm 163 */
																											obj_t BgL_arg2718z00_823;

																											{	/* Expand/exit.scm 163 */
																												obj_t
																													BgL_list2719z00_824;
																												BgL_list2719z00_824 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg2718z00_823 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(CNST_TABLE_REF((
																															(long) 28)),
																													BgL_list2719z00_824);
																											}
																											BgL_arg2702z00_808 =
																												MAKE_PAIR
																												(BgL_escapez00_747,
																												BgL_arg2718z00_823);
																										}
																										{	/* Expand/exit.scm 160 */
																											obj_t BgL_list2704z00_810;

																											{	/* Expand/exit.scm 160 */
																												obj_t
																													BgL_arg2705z00_811;
																												{	/* Expand/exit.scm 160 */
																													obj_t
																														BgL_arg2706z00_812;
																													{	/* Expand/exit.scm 160 */
																														obj_t
																															BgL_arg2707z00_813;
																														BgL_arg2707z00_813 =
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg2706z00_812 =
																															MAKE_PAIR
																															(BgL_arg2702z00_808,
																															BgL_arg2707z00_813);
																													}
																													BgL_arg2705z00_811 =
																														MAKE_PAIR
																														(BgL_arg2701z00_807,
																														BgL_arg2706z00_812);
																												}
																												BgL_list2704z00_810 =
																													MAKE_PAIR
																													(BgL_arg2700z00_806,
																													BgL_arg2705z00_811);
																											}
																											BgL_arg2698z00_804 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg2699z00_805,
																												BgL_list2704z00_810);
																									}}
																									BgL_arg2693z00_799 =
																										MAKE_PAIR
																										(BgL_arg2697z00_803,
																										BgL_arg2698z00_804);
																								}
																								{	/* Expand/exit.scm 160 */
																									obj_t BgL_list2695z00_801;

																									{	/* Expand/exit.scm 160 */
																										obj_t BgL_arg2696z00_802;

																										BgL_arg2696z00_802 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list2695z00_801 =
																											MAKE_PAIR(BgL_ohsz00_745,
																											BgL_arg2696z00_802);
																									}
																									BgL_arg2692z00_798 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg2693z00_799,
																										BgL_list2695z00_801);
																							}}
																							BgL_arg2688z00_794 =
																								MAKE_PAIR(BgL_arg2691z00_797,
																								BgL_arg2692z00_798);
																						}
																						{	/* Expand/exit.scm 159 */
																							obj_t BgL_list2690z00_796;

																							BgL_list2690z00_796 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2687z00_793 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2688z00_794,
																								BgL_list2690z00_796);
																					}}
																					BgL_arg2683z00_789 =
																						MAKE_PAIR(BgL_arg2686z00_792,
																						BgL_arg2687z00_793);
																				}
																				BgL_arg2684z00_790 =
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_bodyz00_743, BNIL);
																				{	/* Expand/exit.scm 158 */
																					obj_t BgL_list2685z00_791;

																					BgL_list2685z00_791 =
																						MAKE_PAIR(BgL_arg2684z00_790, BNIL);
																					BgL_arg2682z00_788 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2683z00_789,
																						BgL_list2685z00_791);
																			}}
																			BgL_arg2676z00_782 =
																				MAKE_PAIR(BgL_arg2681z00_787,
																				BgL_arg2682z00_788);
																		}
																		{	/* Expand/exit.scm 166 */
																			obj_t BgL_arg2720z00_825;

																			obj_t BgL_arg2721z00_826;

																			BgL_arg2720z00_825 =
																				CNST_TABLE_REF(((long) 13));
																			{	/* Expand/exit.scm 167 */
																				obj_t BgL_arg2722z00_827;

																				obj_t BgL_arg2724z00_828;

																				{	/* Expand/exit.scm 167 */
																					obj_t BgL_arg2728z00_832;

																					obj_t BgL_arg2729z00_833;

																					BgL_arg2728z00_832 =
																						CNST_TABLE_REF(((long) 26));
																					{	/* Expand/exit.scm 167 */
																						obj_t BgL_list2730z00_834;

																						BgL_list2730z00_834 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg2729z00_833 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_ohsz00_745,
																							BgL_list2730z00_834);
																					}
																					BgL_arg2722z00_827 =
																						MAKE_PAIR(BgL_arg2728z00_832,
																						BgL_arg2729z00_833);
																				}
																				{	/* Expand/exit.scm 168 */
																					obj_t BgL_arg2731z00_835;

																					obj_t BgL_arg2732z00_836;

																					BgL_arg2731z00_835 =
																						CNST_TABLE_REF(((long) 31));
																					{	/* Expand/exit.scm 168 */
																						obj_t BgL_arg2733z00_837;

																						obj_t BgL_arg2734z00_838;

																						{	/* Expand/exit.scm 168 */
																							obj_t BgL_arg2738z00_842;

																							obj_t BgL_arg2739z00_843;

																							BgL_arg2738z00_842 =
																								CNST_TABLE_REF(((long) 17));
																							{	/* Expand/exit.scm 168 */
																								obj_t BgL_list2740z00_844;

																								BgL_list2740z00_844 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2739z00_843 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_errz00_746,
																									BgL_list2740z00_844);
																							}
																							BgL_arg2733z00_837 =
																								MAKE_PAIR(BgL_arg2738z00_842,
																								BgL_arg2739z00_843);
																						}
																						{	/* Expand/exit.scm 169 */
																							obj_t BgL_arg2741z00_845;

																							{	/* Expand/exit.scm 169 */
																								obj_t BgL_arg2742z00_846;

																								{	/* Expand/exit.scm 169 */
																									obj_t BgL_arg2745z00_849;

																									{	/* Expand/exit.scm 169 */
																										obj_t BgL_arg2746z00_850;

																										{	/* Expand/exit.scm 169 */
																											obj_t BgL_arg2749z00_853;

																											obj_t BgL_arg2750z00_854;

																											BgL_arg2749z00_853 =
																												CNST_TABLE_REF(((long)
																													18));
																											{	/* Expand/exit.scm 169 */
																												obj_t
																													BgL_list2751z00_855;
																												BgL_list2751z00_855 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg2750z00_854 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_errz00_746,
																													BgL_list2751z00_855);
																											}
																											BgL_arg2746z00_850 =
																												MAKE_PAIR
																												(BgL_arg2749z00_853,
																												BgL_arg2750z00_854);
																										}
																										{	/* Expand/exit.scm 169 */
																											obj_t BgL_list2748z00_852;

																											BgL_list2748z00_852 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg2745z00_849 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg2746z00_850,
																												BgL_list2748z00_852);
																									}}
																									BgL_arg2742z00_846 =
																										MAKE_PAIR
																										(BgL_handlerz00_742,
																										BgL_arg2745z00_849);
																								}
																								{	/* Expand/exit.scm 169 */
																									obj_t BgL_list2744z00_848;

																									BgL_list2744z00_848 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg2741z00_845 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg2742z00_846,
																										BgL_list2744z00_848);
																							}}
																							BgL_arg2734z00_838 =
																								MAKE_PAIR(BgL_escapez00_747,
																								BgL_arg2741z00_845);
																						}
																						{	/* Expand/exit.scm 168 */
																							obj_t BgL_list2736z00_840;

																							{	/* Expand/exit.scm 168 */
																								obj_t BgL_arg2737z00_841;

																								BgL_arg2737z00_841 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list2736z00_840 =
																									MAKE_PAIR(BgL_arg2734z00_838,
																									BgL_arg2737z00_841);
																							}
																							BgL_arg2732z00_836 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2733z00_837,
																								BgL_list2736z00_840);
																					}}
																					BgL_arg2724z00_828 =
																						MAKE_PAIR(BgL_arg2731z00_835,
																						BgL_arg2732z00_836);
																				}
																				{	/* Expand/exit.scm 166 */
																					obj_t BgL_list2726z00_830;

																					{	/* Expand/exit.scm 166 */
																						obj_t BgL_arg2727z00_831;

																						BgL_arg2727z00_831 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list2726z00_830 =
																							MAKE_PAIR(BgL_arg2724z00_828,
																							BgL_arg2727z00_831);
																					}
																					BgL_arg2721z00_826 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2722z00_827,
																						BgL_list2726z00_830);
																			}}
																			BgL_arg2677z00_783 =
																				MAKE_PAIR(BgL_arg2720z00_825,
																				BgL_arg2721z00_826);
																		}
																		{	/* Expand/exit.scm 157 */
																			obj_t BgL_list2679z00_785;

																			{	/* Expand/exit.scm 157 */
																				obj_t BgL_arg2680z00_786;

																				BgL_arg2680z00_786 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list2679z00_785 =
																					MAKE_PAIR(BgL_arg2677z00_783,
																					BgL_arg2680z00_786);
																			}
																			BgL_arg2675z00_781 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2676z00_782,
																				BgL_list2679z00_785);
																	}}
																	BgL_arg2651z00_759 =
																		MAKE_PAIR(BgL_arg2674z00_780,
																		BgL_arg2675z00_781);
																}
																{	/* Expand/exit.scm 155 */
																	obj_t BgL_list2653z00_761;

																	{	/* Expand/exit.scm 155 */
																		obj_t BgL_arg2655z00_762;

																		BgL_arg2655z00_762 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2653z00_761 =
																			MAKE_PAIR(BgL_arg2651z00_759,
																			BgL_arg2655z00_762);
																	}
																	BgL_arg2649z00_757 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2650z00_758, BgL_list2653z00_761);
															}}
															BgL_arg2629z00_752 =
																MAKE_PAIR(BgL_arg2648z00_756,
																BgL_arg2649z00_757);
														}
														{	/* Expand/exit.scm 154 */
															obj_t BgL_list2631z00_754;

															{	/* Expand/exit.scm 154 */
																obj_t BgL_arg2642z00_755;

																BgL_arg2642z00_755 = MAKE_PAIR(BNIL, BNIL);
																BgL_list2631z00_754 =
																	MAKE_PAIR(BgL_arg2629z00_752,
																	BgL_arg2642z00_755);
															}
															BgL_arg2621z00_750 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2628z00_751, BgL_list2631z00_754);
													}}
													BgL_arg2608z00_748 =
														MAKE_PAIR(BgL_arg2615z00_749, BgL_arg2621z00_750);
												}
												BgL_bodyz00_856 =
													PROCEDURE_ENTRY(BgL_ez00_34) (BgL_ez00_34,
													BgL_arg2608z00_748, BgL_ez00_34, BEOA);
										}}
										{	/* Expand/exit.scm 173 */
											obj_t BgL_locz00_858;

											BgL_locz00_858 =
												BGl_findzd2locationzd2zztools_locationz00(BgL_xz00_33);
											{	/* Expand/exit.scm 174 */
												bool_t BgL_testz00_1328;

												{	/* Expand/exit.scm 174 */
													bool_t BgL_testz00_1329;

													if (STRUCTP(BgL_locz00_858))
														{	/* Expand/exit.scm 174 */
															BgL_testz00_1329 =
																(STRUCT_KEY(BgL_locz00_858) ==
																CNST_TABLE_REF(((long) 32)));
														}
													else
														{	/* Expand/exit.scm 174 */
															BgL_testz00_1329 = ((bool_t) 0);
														}
													if (BgL_testz00_1329)
														{	/* Expand/exit.scm 175 */
															bool_t BgL_testz00_1335;

															{	/* Expand/exit.scm 175 */
																int BgL_arg2819z00_928;

																BgL_arg2819z00_928 =
																	BGl_bigloozd2compilerzd2debugz00zz__paramz00
																	();
																BgL_testz00_1335 =
																	((long) (BgL_arg2819z00_928) > ((long) 0));
															}
															if (BgL_testz00_1335)
																{	/* Expand/exit.scm 176 */
																	obj_t BgL_arg2818z00_927;

																	BgL_arg2818z00_927 =
																		BGl_thezd2backendzd2zzbackend_backendz00();
																	{
																		BgL_backendz00_bglt BgL_auxz00_1340;

																		BgL_auxz00_1340 =
																			(BgL_backendz00_bglt)
																			(BgL_arg2818z00_927);
																		BgL_testz00_1328 =
																			(((BgL_backendz00_bglt)
																				CREF(BgL_auxz00_1340))->
																			BgL_tracezd2supportzd2);
																	}
																}
															else
																{	/* Expand/exit.scm 175 */
																	BgL_testz00_1328 = ((bool_t) 0);
																}
														}
													else
														{	/* Expand/exit.scm 174 */
															BgL_testz00_1328 = ((bool_t) 0);
														}
												}
												if (BgL_testz00_1328)
													{	/* Expand/exit.scm 177 */
														obj_t BgL_locz00_860;

														obj_t BgL_vidz00_861;

														obj_t BgL_tmp1z00_862;

														obj_t BgL_tmp2z00_863;

														{	/* Expand/exit.scm 177 */
															obj_t BgL_arg2807z00_915;

															obj_t BgL_arg2808z00_916;

															BgL_arg2807z00_915 = CNST_TABLE_REF(((long) 33));
															{	/* Expand/exit.scm 177 */
																obj_t BgL_arg2809z00_917;

																obj_t BgL_arg2810z00_918;

																BgL_arg2809z00_917 =
																	BGl_locationzd2fullzd2fnamez00zztools_locationz00
																	(BgL_locz00_858);
																BgL_arg2810z00_918 =
																	STRUCT_REF(BgL_locz00_858,
																	(int) (((long) 1)));
																{	/* Expand/exit.scm 177 */
																	obj_t BgL_list2812z00_920;

																	{	/* Expand/exit.scm 177 */
																		obj_t BgL_arg2813z00_921;

																		BgL_arg2813z00_921 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2812z00_920 =
																			MAKE_PAIR(BgL_arg2810z00_918,
																			BgL_arg2813z00_921);
																	}
																	BgL_arg2808z00_916 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2809z00_917, BgL_list2812z00_920);
															}}
															BgL_locz00_860 =
																MAKE_PAIR(BgL_arg2807z00_915,
																BgL_arg2808z00_916);
														}
														{	/* Expand/exit.scm 178 */

															{	/* Expand/exit.scm 178 */

																BgL_vidz00_861 =
																	BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
														}}
														BgL_tmp1z00_862 =
															BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
															(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF
																(((long) 34))));
														BgL_tmp2z00_863 =
															BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
															(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF
																(((long) 35))));
														{	/* Expand/exit.scm 181 */
															obj_t BgL_arg2754z00_864;

															obj_t BgL_arg2755z00_865;

															BgL_arg2754z00_864 = CNST_TABLE_REF(((long) 6));
															{	/* Expand/exit.scm 181 */
																obj_t BgL_arg2756z00_866;

																obj_t BgL_arg2758z00_867;

																{	/* Expand/exit.scm 181 */
																	obj_t BgL_arg2762z00_871;

																	obj_t BgL_arg2763z00_872;

																	{	/* Expand/exit.scm 181 */
																		obj_t BgL_arg2764z00_873;

																		{	/* Expand/exit.scm 181 */
																			obj_t BgL_arg2765z00_874;

																			{	/* Expand/exit.scm 181 */
																				obj_t BgL_arg2768z00_877;

																				obj_t BgL_arg2769z00_878;

																				BgL_arg2768z00_877 =
																					CNST_TABLE_REF(((long) 36));
																				{	/* Expand/exit.scm 181 */
																					obj_t BgL_list2770z00_879;

																					BgL_list2770z00_879 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2769z00_878 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(CNST_TABLE_REF(((long) 37)),
																						BgL_list2770z00_879);
																				}
																				BgL_arg2765z00_874 =
																					MAKE_PAIR(BgL_arg2768z00_877,
																					BgL_arg2769z00_878);
																			}
																			{	/* Expand/exit.scm 181 */
																				obj_t BgL_list2767z00_876;

																				BgL_list2767z00_876 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2764z00_873 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2765z00_874,
																					BgL_list2767z00_876);
																		}}
																		BgL_arg2762z00_871 =
																			MAKE_PAIR(BgL_tmp1z00_862,
																			BgL_arg2764z00_873);
																	}
																	{	/* Expand/exit.scm 182 */
																		obj_t BgL_arg2771z00_880;

																		{	/* Expand/exit.scm 182 */
																			obj_t BgL_arg2775z00_883;

																			{	/* Expand/exit.scm 182 */
																				obj_t BgL_arg2776z00_884;

																				{	/* Expand/exit.scm 182 */
																					obj_t BgL_arg2779z00_887;

																					obj_t BgL_arg2780z00_888;

																					BgL_arg2779z00_887 =
																						CNST_TABLE_REF(((long) 36));
																					{	/* Expand/exit.scm 182 */
																						obj_t BgL_list2781z00_889;

																						BgL_list2781z00_889 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg2780z00_888 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_locz00_860,
																							BgL_list2781z00_889);
																					}
																					BgL_arg2776z00_884 =
																						MAKE_PAIR(BgL_arg2779z00_887,
																						BgL_arg2780z00_888);
																				}
																				{	/* Expand/exit.scm 182 */
																					obj_t BgL_list2778z00_886;

																					BgL_list2778z00_886 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2775z00_883 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2776z00_884,
																						BgL_list2778z00_886);
																			}}
																			BgL_arg2771z00_880 =
																				MAKE_PAIR(BgL_tmp2z00_863,
																				BgL_arg2775z00_883);
																		}
																		{	/* Expand/exit.scm 181 */
																			obj_t BgL_list2774z00_882;

																			BgL_list2774z00_882 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2763z00_872 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2771z00_880,
																				BgL_list2774z00_882);
																	}}
																	BgL_arg2756z00_866 =
																		MAKE_PAIR(BgL_arg2762z00_871,
																		BgL_arg2763z00_872);
																}
																{	/* Expand/exit.scm 183 */
																	obj_t BgL_arg2782z00_890;

																	obj_t BgL_arg2783z00_891;

																	BgL_arg2782z00_890 =
																		CNST_TABLE_REF(((long) 6));
																	{	/* Expand/exit.scm 183 */
																		obj_t BgL_arg2785z00_893;

																		obj_t BgL_arg2786z00_894;

																		{	/* Expand/exit.scm 184 */
																			obj_t BgL_arg2791z00_899;

																			obj_t BgL_arg2792z00_900;

																			BgL_arg2791z00_899 =
																				CNST_TABLE_REF(((long) 38));
																			{	/* Expand/exit.scm 184 */
																				obj_t BgL_list2793z00_901;

																				{	/* Expand/exit.scm 184 */
																					obj_t BgL_arg2794z00_902;

																					BgL_arg2794z00_902 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list2793z00_901 =
																						MAKE_PAIR(BgL_tmp2z00_863,
																						BgL_arg2794z00_902);
																				}
																				BgL_arg2792z00_900 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_tmp1z00_862,
																					BgL_list2793z00_901);
																			}
																			BgL_arg2785z00_893 =
																				MAKE_PAIR(BgL_arg2791z00_899,
																				BgL_arg2792z00_900);
																		}
																		{	/* Expand/exit.scm 185 */
																			obj_t BgL_arg2795z00_903;

																			obj_t BgL_arg2796z00_904;

																			BgL_arg2795z00_903 =
																				CNST_TABLE_REF(((long) 6));
																			{	/* Expand/exit.scm 185 */
																				obj_t BgL_arg2797z00_905;

																				obj_t BgL_arg2798z00_906;

																				{	/* Expand/exit.scm 185 */
																					obj_t BgL_arg2803z00_911;

																					{	/* Expand/exit.scm 185 */
																						obj_t BgL_arg2805z00_913;

																						{	/* Expand/exit.scm 185 */
																							obj_t BgL_list2806z00_914;

																							BgL_list2806z00_914 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2805z00_913 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_bodyz00_856,
																								BgL_list2806z00_914);
																						}
																						BgL_arg2803z00_911 =
																							MAKE_PAIR(BgL_vidz00_861,
																							BgL_arg2805z00_913);
																					}
																					BgL_arg2797z00_905 =
																						MAKE_PAIR(BgL_arg2803z00_911, BNIL);
																				}
																				{	/* Expand/exit.scm 186 */
																					obj_t BgL_res2827z00_1024;

																					{	/* Expand/exit.scm 186 */
																						obj_t BgL_obj1z00_1021;

																						BgL_obj1z00_1021 =
																							CNST_TABLE_REF(((long) 39));
																						BgL_res2827z00_1024 =
																							MAKE_EXTENDED_PAIR
																							(BgL_obj1z00_1021, BNIL,
																							BgL_locz00_860);
																					}
																					BgL_arg2798z00_906 =
																						BgL_res2827z00_1024;
																				}
																				{	/* Expand/exit.scm 185 */
																					obj_t BgL_list2800z00_908;

																					{	/* Expand/exit.scm 185 */
																						obj_t BgL_arg2801z00_909;

																						{	/* Expand/exit.scm 185 */
																							obj_t BgL_arg2802z00_910;

																							BgL_arg2802z00_910 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2801z00_909 =
																								MAKE_PAIR(BgL_vidz00_861,
																								BgL_arg2802z00_910);
																						}
																						BgL_list2800z00_908 =
																							MAKE_PAIR(BgL_arg2798z00_906,
																							BgL_arg2801z00_909);
																					}
																					BgL_arg2796z00_904 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2797z00_905,
																						BgL_list2800z00_908);
																			}}
																			BgL_arg2786z00_894 =
																				MAKE_PAIR(BgL_arg2795z00_903,
																				BgL_arg2796z00_904);
																		}
																		{	/* Expand/exit.scm 183 */
																			obj_t BgL_list2788z00_896;

																			{	/* Expand/exit.scm 183 */
																				obj_t BgL_arg2789z00_897;

																				{	/* Expand/exit.scm 183 */
																					obj_t BgL_arg2790z00_898;

																					BgL_arg2790z00_898 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2789z00_897 =
																						MAKE_PAIR(BgL_arg2786z00_894,
																						BgL_arg2790z00_898);
																				}
																				BgL_list2788z00_896 =
																					MAKE_PAIR(BgL_arg2785z00_893,
																					BgL_arg2789z00_897);
																			}
																			BgL_arg2783z00_891 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BNIL, BgL_list2788z00_896);
																	}}
																	BgL_arg2758z00_867 =
																		MAKE_PAIR(BgL_arg2782z00_890,
																		BgL_arg2783z00_891);
																}
																{	/* Expand/exit.scm 181 */
																	obj_t BgL_list2760z00_869;

																	{	/* Expand/exit.scm 181 */
																		obj_t BgL_arg2761z00_870;

																		BgL_arg2761z00_870 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2760z00_869 =
																			MAKE_PAIR(BgL_arg2758z00_867,
																			BgL_arg2761z00_870);
																	}
																	BgL_arg2755z00_865 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2756z00_866, BgL_list2760z00_869);
															}}
															BgL_auxz00_1326 =
																MAKE_PAIR(BgL_arg2754z00_864,
																BgL_arg2755z00_865);
													}}
												else
													{	/* Expand/exit.scm 174 */
														BgL_auxz00_1326 = BgL_bodyz00_856;
													}
											}
										}
										return
											BGl_replacez12z12zztools_miscz00(BgL_xz00_33,
											BgL_auxz00_1326);
									}
								}
							else
								{	/* Expand/exit.scm 190 */
								BgL_tagzd21716zd2_533:
									return
										BGl_errorz00zz__errorz00(BFALSE,
										BGl_string2832z00zzexpand_exitz00, BgL_xz00_33);
								}
						}
					else
						{	/* Expand/exit.scm 190 */
							goto BgL_tagzd21716zd2_533;
						}
				}
			}
		}
	}



/* _expand-with-handler */
	obj_t BGl__expandzd2withzd2handlerz00zzexpand_exitz00(obj_t BgL_envz00_1037,
		obj_t BgL_xz00_1038, obj_t BgL_ez00_1039)
	{
		AN_OBJECT;
		{	/* Expand/exit.scm 115 */
			return
				BGl_expandzd2withzd2handlerz00zzexpand_exitz00(BgL_xz00_1038,
				BgL_ez00_1039);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzexpand_exitz00()
	{
		AN_OBJECT;
		{	/* Expand/exit.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzexpand_exitz00()
	{
		AN_OBJECT;
		{	/* Expand/exit.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzexpand_exitz00()
	{
		AN_OBJECT;
		{	/* Expand/exit.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string2833z00zzexpand_exitz00));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 320731191),
				BSTRING_TO_STRING(BGl_string2833z00zzexpand_exitz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string2833z00zzexpand_exitz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string2833z00zzexpand_exitz00));
			BGl_modulezd2initializa7ationz75zzexpand_expanderz00(((long) 112686943),
				BSTRING_TO_STRING(BGl_string2833z00zzexpand_exitz00));
			BGl_modulezd2initializa7ationz75zzexpand_epsz00(((long) 46603742),
				BSTRING_TO_STRING(BGl_string2833z00zzexpand_exitz00));
			BGl_modulezd2initializa7ationz75zzexpand_lambdaz00(((long) 245373811),
				BSTRING_TO_STRING(BGl_string2833z00zzexpand_exitz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string2833z00zzexpand_exitz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2833z00zzexpand_exitz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string2833z00zzexpand_exitz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string2833z00zzexpand_exitz00));
			return
				BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string2833z00zzexpand_exitz00));
		}
	}

#ifdef __cplusplus
}
#endif
