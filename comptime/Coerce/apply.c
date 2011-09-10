/*===========================================================================*/
/*   (Coerce/apply.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Coerce/apply.scm)*/
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

	typedef struct BgL_appzd2lyzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_funz00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}                  *BgL_appzd2lyzd2_bglt;

	typedef struct BgL_letzd2varzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_bindingsz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
		bool_t BgL_removablezf3zf3;
	}                   *BgL_letzd2varzd2_bglt;


	extern obj_t BGl_za2pairzd2nilza2zd2zztype_cachez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_za2compilerzd2debugza2zd2zzengine_paramz00;
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzcoerce_applyz00();
	extern BgL_nodez00_bglt BGl_convertz12z12zzcoerce_convertz00(BgL_nodez00_bglt,
		BgL_typez00_bglt, BgL_typez00_bglt, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzcoerce_applyz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_convertz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzcoerce_applyz00();
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern BgL_nodez00_bglt
		BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern obj_t BGl_locationzd2fullzd2fnamez00zztools_locationz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzcoerce_applyz00();
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcoerce_applyz00 = BUNSPEC;
	extern obj_t BGl_za2unsafezd2arityza2zd2zzengine_paramz00;
	static obj_t BGl_coercez12zd2appzd2ly3349z12zzcoerce_applyz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzcoerce_applyz00();
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	static obj_t BGl_importedzd2moduleszd2initz00zzcoerce_applyz00();
	extern BgL_nodez00_bglt BGl_coercez12z12zzcoerce_coercez00(BgL_nodez00_bglt,
		obj_t, BgL_typez00_bglt, bool_t);
	extern obj_t BGl_currentzd2functionzd2zztools_errorz00();
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	BGL_IMPORT obj_t string_to_symbol(char *);
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	static BgL_nodez00_bglt BGl_makezd2errorzd2nodez00zzcoerce_applyz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	extern BgL_varz00_bglt BGl_makezd2varzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_variablez00_bglt);
	extern BgL_letzd2varzd2_bglt BGl_makezd2letzd2varz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, BgL_nodez00_bglt, bool_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcoerce_applyz00();
	static obj_t __cnst[17];


	extern obj_t BGl_coercez12zd2envzc0zzcoerce_coercez00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3559z00zzcoerce_applyz00,
		BgL_bgl_coerceza712za7d2appza73565za7,
		BGl_coercez12zd2appzd2ly3349z12zzcoerce_applyz00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string3558z00zzcoerce_applyz00,
		BgL_bgl_string3558za700za7za7c3566za7, "Wrong number of arguments", 25);
	      DEFINE_STRING(BGl_string3560z00zzcoerce_applyz00,
		BgL_bgl_string3560za700za7za7c3567za7, "coerce!", 7);
	      DEFINE_STRING(BGl_string3561z00zzcoerce_applyz00,
		BgL_bgl_string3561za700za7za7c3568za7, "coerce_apply", 12);
	      DEFINE_STRING(BGl_string3562z00zzcoerce_applyz00,
		BgL_bgl_string3562za700za7za7c3569za7,
		"correct-arity? if ::int let len length val fun _ failure quote error/location __error @ begin location bdb ",
		107);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcoerce_applyz00(long
		BgL_checksumz00_1491, char *BgL_fromz00_1492)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcoerce_applyz00))
				{
					BGl_requirezd2initializa7ationz75zzcoerce_applyz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcoerce_applyz00();
					BGl_cnstzd2initzd2zzcoerce_applyz00();
					BGl_importedzd2moduleszd2initz00zzcoerce_applyz00();
					BGl_methodzd2initzd2zzcoerce_applyz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcoerce_applyz00()
	{
		AN_OBJECT;
		{	/* Coerce/apply.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "coerce_apply");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"coerce_apply");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"coerce_apply");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "coerce_apply");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"coerce_apply");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcoerce_applyz00()
	{
		AN_OBJECT;
		{	/* Coerce/apply.scm 15 */
			{	/* Coerce/apply.scm 15 */
				obj_t BgL_cportz00_1483;

				BgL_cportz00_1483 =
					bgl_open_input_string(BGl_string3562z00zzcoerce_applyz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1484;

					BgL_iz00_1484 = ((long) 16);
				BgL_loopz00_1485:
					if ((BgL_iz00_1484 == ((long) -1)))
						{	/* Coerce/apply.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Coerce/apply.scm 15 */
							{	/* Coerce/apply.scm 15 */
								obj_t BgL_arg3564z00_1487;

								{	/* Coerce/apply.scm 15 */

									{	/* Coerce/apply.scm 15 */
										obj_t BgL_locationz00_1489;

										BgL_locationz00_1489 = BBOOL(((bool_t) 0));
										{	/* Coerce/apply.scm 15 */

											BgL_arg3564z00_1487 =
												BGl_readz00zz__readerz00(BgL_cportz00_1483,
												BgL_locationz00_1489);
										}
									}
								}
								{	/* Coerce/apply.scm 15 */
									int BgL_auxz00_1511;

									BgL_auxz00_1511 = (int) (BgL_iz00_1484);
									CNST_TABLE_SET(BgL_auxz00_1511, BgL_arg3564z00_1487);
							}}
							{	/* Coerce/apply.scm 15 */
								int BgL_auxz00_1490;

								BgL_auxz00_1490 = (int) ((BgL_iz00_1484 - ((long) 1)));
								{
									long BgL_iz00_1516;

									BgL_iz00_1516 = (long) (BgL_auxz00_1490);
									BgL_iz00_1484 = BgL_iz00_1516;
									goto BgL_loopz00_1485;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcoerce_applyz00()
	{
		AN_OBJECT;
		{	/* Coerce/apply.scm 15 */
			return BUNSPEC;
		}
	}



/* make-error-node */
	BgL_nodez00_bglt BGl_makezd2errorzd2nodez00zzcoerce_applyz00(obj_t
		BgL_errorzd2msgzd2_19, obj_t BgL_locz00_20, obj_t BgL_callerz00_21,
		obj_t BgL_toz00_22)
	{
		AN_OBJECT;
		{	/* Coerce/apply.scm 96 */
			{	/* Coerce/apply.scm 97 */
				BgL_nodez00_bglt BgL_nodez00_890;

				{	/* Coerce/apply.scm 98 */
					obj_t BgL_arg3359z00_891;

					{	/* Coerce/apply.scm 98 */
						bool_t BgL_testz00_1518;

						{	/* Coerce/apply.scm 98 */
							bool_t BgL_testz00_1519;

							{	/* Coerce/apply.scm 98 */
								bool_t BgL_testz00_1520;

								if (
									((long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >
										((long) 0)))
									{	/* Coerce/apply.scm 99 */
										obj_t BgL_arg3424z00_954;

										obj_t BgL_arg3425z00_955;

										BgL_arg3424z00_954 = CNST_TABLE_REF(((long) 0));
										{	/* Coerce/apply.scm 101 */
											obj_t BgL_arg3426z00_956;

											BgL_arg3426z00_956 =
												BGl_thezd2backendzd2zzbackend_backendz00();
											{
												BgL_backendz00_bglt BgL_auxz00_1526;

												BgL_auxz00_1526 =
													(BgL_backendz00_bglt) (BgL_arg3426z00_956);
												BgL_arg3425z00_955 =
													(((BgL_backendz00_bglt) CREF(BgL_auxz00_1526))->
													BgL_debugzd2supportzd2);
										}}
										BgL_testz00_1520 =
											CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3424z00_954, BgL_arg3425z00_955));
									}
								else
									{	/* Coerce/apply.scm 98 */
										BgL_testz00_1520 = ((bool_t) 0);
									}
								if (BgL_testz00_1520)
									{	/* Coerce/apply.scm 98 */
										BgL_testz00_1519 = ((bool_t) 1);
									}
								else
									{	/* Coerce/apply.scm 98 */
										BgL_testz00_1519 =
											(
											(long)
											CINT(BGl_za2compilerzd2debugza2zd2zzengine_paramz00) >
											((long) 0));
							}}
							if (BgL_testz00_1519)
								{	/* Coerce/apply.scm 98 */
									if (STRUCTP(BgL_locz00_20))
										{	/* Coerce/apply.scm 103 */
											BgL_testz00_1518 =
												(STRUCT_KEY(BgL_locz00_20) ==
												CNST_TABLE_REF(((long) 1)));
										}
									else
										{	/* Coerce/apply.scm 103 */
											BgL_testz00_1518 = ((bool_t) 0);
										}
								}
							else
								{	/* Coerce/apply.scm 98 */
									BgL_testz00_1518 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_1518)
							{	/* Coerce/apply.scm 104 */
								obj_t BgL_arg3361z00_893;

								obj_t BgL_arg3362z00_894;

								BgL_arg3361z00_893 = CNST_TABLE_REF(((long) 2));
								{	/* Coerce/apply.scm 105 */
									obj_t BgL_arg3363z00_895;

									obj_t BgL_arg3364z00_896;

									{	/* Coerce/apply.scm 105 */
										obj_t BgL_arg3368z00_900;

										obj_t BgL_arg3369z00_901;

										{	/* Coerce/apply.scm 105 */
											obj_t BgL_arg3371z00_902;

											obj_t BgL_arg3372z00_903;

											BgL_arg3371z00_902 = CNST_TABLE_REF(((long) 3));
											{	/* Coerce/apply.scm 105 */
												obj_t BgL_list3373z00_904;

												{	/* Coerce/apply.scm 105 */
													obj_t BgL_arg3374z00_905;

													obj_t BgL_arg3375z00_906;

													BgL_arg3374z00_905 = CNST_TABLE_REF(((long) 4));
													BgL_arg3375z00_906 = MAKE_PAIR(BNIL, BNIL);
													BgL_list3373z00_904 =
														MAKE_PAIR(BgL_arg3374z00_905, BgL_arg3375z00_906);
												}
												BgL_arg3372z00_903 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(CNST_TABLE_REF(((long) 5)), BgL_list3373z00_904);
											}
											BgL_arg3368z00_900 =
												MAKE_PAIR(BgL_arg3371z00_902, BgL_arg3372z00_903);
										}
										{	/* Coerce/apply.scm 106 */
											obj_t BgL_arg3376z00_907;

											obj_t BgL_arg3378z00_909;

											obj_t BgL_arg3379z00_910;

											{	/* Coerce/apply.scm 106 */
												obj_t BgL_arg3386z00_917;

												obj_t BgL_arg3387z00_918;

												BgL_arg3386z00_917 = CNST_TABLE_REF(((long) 6));
												BgL_arg3387z00_918 =
													BGl_currentzd2functionzd2zztools_errorz00();
												{	/* Coerce/apply.scm 106 */
													obj_t BgL_list3388z00_919;

													{	/* Coerce/apply.scm 106 */
														obj_t BgL_arg3389z00_920;

														BgL_arg3389z00_920 =
															MAKE_PAIR(BgL_arg3387z00_918, BNIL);
														BgL_list3388z00_919 =
															MAKE_PAIR(BgL_arg3386z00_917, BgL_arg3389z00_920);
													}
													BgL_arg3376z00_907 = BgL_list3388z00_919;
											}}
											BgL_arg3378z00_909 =
												BGl_locationzd2fullzd2fnamez00zztools_locationz00
												(BgL_locz00_20);
											BgL_arg3379z00_910 =
												STRUCT_REF(BgL_locz00_20, (int) (((long) 1)));
											{	/* Coerce/apply.scm 105 */
												obj_t BgL_list3381z00_912;

												{	/* Coerce/apply.scm 105 */
													obj_t BgL_arg3382z00_913;

													{	/* Coerce/apply.scm 105 */
														obj_t BgL_arg3383z00_914;

														{	/* Coerce/apply.scm 105 */
															obj_t BgL_arg3384z00_915;

															{	/* Coerce/apply.scm 105 */
																obj_t BgL_arg3385z00_916;

																BgL_arg3385z00_916 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg3384z00_915 =
																	MAKE_PAIR(BgL_arg3379z00_910,
																	BgL_arg3385z00_916);
															}
															BgL_arg3383z00_914 =
																MAKE_PAIR(BgL_arg3378z00_909,
																BgL_arg3384z00_915);
														}
														BgL_arg3382z00_913 =
															MAKE_PAIR(BgL_errorzd2msgzd2_19,
															BgL_arg3383z00_914);
													}
													BgL_list3381z00_912 =
														MAKE_PAIR(BGl_string3558z00zzcoerce_applyz00,
														BgL_arg3382z00_913);
												}
												BgL_arg3369z00_901 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg3376z00_907, BgL_list3381z00_912);
										}}
										BgL_arg3363z00_895 =
											MAKE_PAIR(BgL_arg3368z00_900, BgL_arg3369z00_901);
									}
									{	/* Coerce/apply.scm 111 */
										obj_t BgL_arg3390z00_921;

										obj_t BgL_arg3391z00_922;

										BgL_arg3390z00_921 = CNST_TABLE_REF(((long) 7));
										{	/* Coerce/apply.scm 111 */
											obj_t BgL_arg3392z00_923;

											obj_t BgL_arg3393z00_924;

											obj_t BgL_arg3394z00_925;

											{	/* Coerce/apply.scm 111 */
												obj_t BgL_arg3399z00_930;

												obj_t BgL_arg3400z00_931;

												BgL_arg3399z00_930 = CNST_TABLE_REF(((long) 6));
												{	/* Coerce/apply.scm 111 */
													obj_t BgL_list3401z00_932;

													BgL_list3401z00_932 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg3400z00_931 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(CNST_TABLE_REF(((long) 8)), BgL_list3401z00_932);
												}
												BgL_arg3392z00_923 =
													MAKE_PAIR(BgL_arg3399z00_930, BgL_arg3400z00_931);
											}
											{	/* Coerce/apply.scm 111 */
												obj_t BgL_arg3402z00_933;

												obj_t BgL_arg3403z00_934;

												BgL_arg3402z00_933 = CNST_TABLE_REF(((long) 6));
												{	/* Coerce/apply.scm 111 */
													obj_t BgL_list3404z00_935;

													BgL_list3404z00_935 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg3403z00_934 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(CNST_TABLE_REF(((long) 8)), BgL_list3404z00_935);
												}
												BgL_arg3393z00_924 =
													MAKE_PAIR(BgL_arg3402z00_933, BgL_arg3403z00_934);
											}
											{	/* Coerce/apply.scm 111 */
												obj_t BgL_arg3405z00_936;

												obj_t BgL_arg3406z00_937;

												BgL_arg3405z00_936 = CNST_TABLE_REF(((long) 6));
												{	/* Coerce/apply.scm 111 */
													obj_t BgL_list3407z00_938;

													BgL_list3407z00_938 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg3406z00_937 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(CNST_TABLE_REF(((long) 8)), BgL_list3407z00_938);
												}
												BgL_arg3394z00_925 =
													MAKE_PAIR(BgL_arg3405z00_936, BgL_arg3406z00_937);
											}
											{	/* Coerce/apply.scm 111 */
												obj_t BgL_list3396z00_927;

												{	/* Coerce/apply.scm 111 */
													obj_t BgL_arg3397z00_928;

													{	/* Coerce/apply.scm 111 */
														obj_t BgL_arg3398z00_929;

														BgL_arg3398z00_929 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg3397z00_928 =
															MAKE_PAIR(BgL_arg3394z00_925, BgL_arg3398z00_929);
													}
													BgL_list3396z00_927 =
														MAKE_PAIR(BgL_arg3393z00_924, BgL_arg3397z00_928);
												}
												BgL_arg3391z00_922 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg3392z00_923, BgL_list3396z00_927);
										}}
										BgL_arg3364z00_896 =
											MAKE_PAIR(BgL_arg3390z00_921, BgL_arg3391z00_922);
									}
									{	/* Coerce/apply.scm 104 */
										obj_t BgL_list3366z00_898;

										{	/* Coerce/apply.scm 104 */
											obj_t BgL_arg3367z00_899;

											BgL_arg3367z00_899 = MAKE_PAIR(BNIL, BNIL);
											BgL_list3366z00_898 =
												MAKE_PAIR(BgL_arg3364z00_896, BgL_arg3367z00_899);
										}
										BgL_arg3362z00_894 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3363z00_895, BgL_list3366z00_898);
								}}
								BgL_arg3359z00_891 =
									MAKE_PAIR(BgL_arg3361z00_893, BgL_arg3362z00_894);
							}
						else
							{	/* Coerce/apply.scm 112 */
								obj_t BgL_arg3408z00_939;

								obj_t BgL_arg3409z00_940;

								BgL_arg3408z00_939 = CNST_TABLE_REF(((long) 7));
								{	/* Coerce/apply.scm 112 */
									obj_t BgL_arg3410z00_941;

									{	/* Coerce/apply.scm 112 */
										obj_t BgL_arg3416z00_947;

										obj_t BgL_arg3417z00_948;

										BgL_arg3416z00_947 = CNST_TABLE_REF(((long) 6));
										BgL_arg3417z00_948 =
											BGl_currentzd2functionzd2zztools_errorz00();
										{	/* Coerce/apply.scm 112 */
											obj_t BgL_list3418z00_949;

											{	/* Coerce/apply.scm 112 */
												obj_t BgL_arg3419z00_950;

												BgL_arg3419z00_950 =
													MAKE_PAIR(BgL_arg3417z00_948, BNIL);
												BgL_list3418z00_949 =
													MAKE_PAIR(BgL_arg3416z00_947, BgL_arg3419z00_950);
											}
											BgL_arg3410z00_941 = BgL_list3418z00_949;
									}}
									{	/* Coerce/apply.scm 112 */
										obj_t BgL_list3413z00_944;

										{	/* Coerce/apply.scm 112 */
											obj_t BgL_arg3414z00_945;

											{	/* Coerce/apply.scm 112 */
												obj_t BgL_arg3415z00_946;

												BgL_arg3415z00_946 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg3414z00_945 =
													MAKE_PAIR(BgL_errorzd2msgzd2_19, BgL_arg3415z00_946);
											}
											BgL_list3413z00_944 =
												MAKE_PAIR(BGl_string3558z00zzcoerce_applyz00,
												BgL_arg3414z00_945);
										}
										BgL_arg3409z00_940 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3410z00_941, BgL_list3413z00_944);
								}}
								BgL_arg3359z00_891 =
									MAKE_PAIR(BgL_arg3408z00_939, BgL_arg3409z00_940);
					}}
					BgL_nodez00_890 =
						BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00(BgL_arg3359z00_891,
						BgL_locz00_20);
				}
				return
					BGl_coercez12z12zzcoerce_coercez00(BgL_nodez00_890, BgL_callerz00_21,
					(BgL_typez00_bglt) (BgL_toz00_22), ((bool_t) 0));
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcoerce_applyz00()
	{
		AN_OBJECT;
		{	/* Coerce/apply.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcoerce_applyz00()
	{
		AN_OBJECT;
		{	/* Coerce/apply.scm 15 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc3559z00zzcoerce_applyz00, BGl_string3560z00zzcoerce_applyz00);
		}
	}



/* coerce!-app-ly3349 */
	obj_t BGl_coercez12zd2appzd2ly3349z12zzcoerce_applyz00(obj_t BgL_envz00_1472,
		obj_t BgL_nodez00_1473, obj_t BgL_callerz00_1474, obj_t BgL_toz00_1475,
		obj_t BgL_safez00_1476)
	{
		AN_OBJECT;
		{	/* Coerce/apply.scm 35 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1331;

				obj_t BgL_callerz00_1332;

				obj_t BgL_toz00_1333;

				obj_t BgL_safez00_1334;

				BgL_nodez00_1331 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_1473);
				BgL_callerz00_1332 = BgL_callerz00_1474;
				BgL_toz00_1333 = BgL_toz00_1475;
				BgL_safez00_1334 = BgL_safez00_1476;
				{	/* Coerce/apply.scm 37 */
					obj_t BgL_errorzd2msgzd2_1337;

					{	/* Coerce/apply.scm 37 */
						obj_t BgL_arg3539z00_1406;

						obj_t BgL_arg3540z00_1407;

						BgL_arg3539z00_1406 = CNST_TABLE_REF(((long) 6));
						BgL_arg3540z00_1407 =
							BGl_shapez00zztools_shapez00((obj_t) (BgL_nodez00_1331));
						{	/* Coerce/apply.scm 37 */
							obj_t BgL_list3541z00_1408;

							{	/* Coerce/apply.scm 37 */
								obj_t BgL_arg3542z00_1409;

								BgL_arg3542z00_1409 = MAKE_PAIR(BgL_arg3540z00_1407, BNIL);
								BgL_list3541z00_1408 =
									MAKE_PAIR(BgL_arg3539z00_1406, BgL_arg3542z00_1409);
							}
							BgL_errorzd2msgzd2_1337 = BgL_list3541z00_1408;
					}}
					{	/* Coerce/apply.scm 39 */
						BgL_nodez00_bglt BgL_arg3476z00_1338;

						{	/* Coerce/apply.scm 39 */
							BgL_nodez00_bglt BgL_arg3477z00_1339;

							BgL_arg3477z00_1339 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1331))->BgL_argz00);
							BgL_arg3476z00_1338 =
								BGl_coercez12z12zzcoerce_coercez00(BgL_arg3477z00_1339,
								BgL_callerz00_1332,
								(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00),
								CBOOL(BgL_safez00_1334));
						}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1331))->BgL_argz00) =
							((BgL_nodez00_bglt) BgL_arg3476z00_1338), BUNSPEC);
					}
					{	/* Coerce/apply.scm 41 */
						BgL_nodez00_bglt BgL_czd2funzd2_1340;

						{	/* Coerce/apply.scm 41 */
							BgL_nodez00_bglt BgL_arg3538z00_1405;

							BgL_arg3538z00_1405 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1331))->BgL_funz00);
							BgL_czd2funzd2_1340 =
								BGl_coercez12z12zzcoerce_coercez00(BgL_arg3538z00_1405,
								BgL_callerz00_1332,
								(BgL_typez00_bglt) (BGl_za2procedureza2z00zztype_cachez00),
								CBOOL(BgL_safez00_1334));
						}
						if (CBOOL(BGl_za2unsafezd2arityza2zd2zzengine_paramz00))
							{	/* Coerce/apply.scm 45 */
								bool_t BgL_testz00_1615;

								{	/* Coerce/apply.scm 45 */
									obj_t BgL_obj2259z00_1446;

									BgL_obj2259z00_1446 = (obj_t) (BgL_czd2funzd2_1340);
									BgL_testz00_1615 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj2259z00_1446,
										BGl_varz00zzast_nodez00);
								}
								if (BgL_testz00_1615)
									{	/* Coerce/apply.scm 45 */
										((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1331))->
												BgL_funz00) =
											((BgL_nodez00_bglt) BgL_czd2funzd2_1340), BUNSPEC);
										return (obj_t) (BGl_convertz12z12zzcoerce_convertz00(
												(BgL_nodez00_bglt) (BgL_nodez00_1331),
												(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00),
												(BgL_typez00_bglt) (BgL_toz00_1333),
												CBOOL(BgL_safez00_1334)));
									}
								else
									{	/* Coerce/apply.scm 49 */
										BgL_localz00_bglt BgL_funz00_1342;

										BgL_funz00_1342 =
											BGl_makezd2localzd2svarz00zzast_localz00(CNST_TABLE_REF((
													(long) 9)),
											(BgL_typez00_bglt)
											(BGl_za2procedureza2z00zztype_cachez00));
										{	/* Coerce/apply.scm 51 */
											BgL_varz00_bglt BgL_arg3479z00_1343;

											{	/* Coerce/apply.scm 51 */
												obj_t BgL_arg3480z00_1344;

												BgL_arg3480z00_1344 =
													(((BgL_nodez00_bglt) CREF(BgL_czd2funzd2_1340))->
													BgL_locz00);
												BgL_arg3479z00_1343 =
													BGl_makezd2varzd2zzast_nodez00(BgL_arg3480z00_1344,
													(BgL_typez00_bglt)
													(BGl_za2procedureza2z00zztype_cachez00),
													(BgL_variablez00_bglt) (BgL_funz00_1342));
											}
											{
												BgL_nodez00_bglt BgL_auxz00_1632;

												BgL_auxz00_1632 =
													(BgL_nodez00_bglt) (BgL_arg3479z00_1343);
												((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1331))->
														BgL_funz00) =
													((BgL_nodez00_bglt) BgL_auxz00_1632), BUNSPEC);
										}}
										{	/* Coerce/apply.scm 55 */
											obj_t BgL_arg3482z00_1345;

											BgL_typez00_bglt BgL_arg3483z00_1346;

											obj_t BgL_arg3485z00_1348;

											BgL_nodez00_bglt BgL_arg3486z00_1349;

											{
												BgL_nodez00_bglt BgL_auxz00_1635;

												BgL_auxz00_1635 = (BgL_nodez00_bglt) (BgL_nodez00_1331);
												BgL_arg3482z00_1345 =
													(((BgL_nodez00_bglt) CREF(BgL_auxz00_1635))->
													BgL_locz00);
											}
											{
												BgL_nodez00_bglt BgL_auxz00_1638;

												BgL_auxz00_1638 = (BgL_nodez00_bglt) (BgL_nodez00_1331);
												BgL_arg3483z00_1346 =
													(((BgL_nodez00_bglt) CREF(BgL_auxz00_1638))->
													BgL_typez00);
											}
											{	/* Coerce/apply.scm 57 */
												obj_t BgL_arg3487z00_1350;

												BgL_arg3487z00_1350 =
													MAKE_PAIR(
													(obj_t) (BgL_funz00_1342),
													(obj_t) (BgL_czd2funzd2_1340));
												{	/* Coerce/apply.scm 57 */
													obj_t BgL_list3488z00_1351;

													BgL_list3488z00_1351 =
														MAKE_PAIR(BgL_arg3487z00_1350, BNIL);
													BgL_arg3485z00_1348 = BgL_list3488z00_1351;
											}}
											BgL_arg3486z00_1349 =
												BGl_convertz12z12zzcoerce_convertz00(
												(BgL_nodez00_bglt) (BgL_nodez00_1331),
												(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00),
												(BgL_typez00_bglt) (BgL_toz00_1333),
												CBOOL(BgL_safez00_1334));
											return
												(obj_t) (BGl_makezd2letzd2varz00zzast_nodez00
												(BgL_arg3482z00_1345, BgL_arg3483z00_1346, BUNSPEC,
													BINT(((long) -1)), BgL_arg3485z00_1348,
													BgL_arg3486z00_1349, ((bool_t) 1)));
							}}}
						else
							{	/* Coerce/apply.scm 59 */
								BgL_localz00_bglt BgL_funz00_1352;

								BgL_funz00_1352 =
									BGl_makezd2localzd2svarz00zzast_localz00(CNST_TABLE_REF((
											(long) 9)),
									(BgL_typez00_bglt) (BGl_za2procedureza2z00zztype_cachez00));
								{	/* Coerce/apply.scm 59 */
									BgL_localz00_bglt BgL_valz00_1353;

									BgL_valz00_1353 =
										BGl_makezd2localzd2svarz00zzast_localz00(CNST_TABLE_REF((
												(long) 10)),
										(BgL_typez00_bglt)
										(BGl_za2pairzd2nilza2zd2zztype_cachez00));
									{	/* Coerce/apply.scm 60 */
										obj_t BgL_locz00_1354;

										{
											BgL_nodez00_bglt BgL_auxz00_1659;

											BgL_auxz00_1659 = (BgL_nodez00_bglt) (BgL_nodez00_1331);
											BgL_locz00_1354 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_1659))->
												BgL_locz00);
										}
										{	/* Coerce/apply.scm 61 */
											BgL_nodez00_bglt BgL_lvalz00_1355;

											{	/* Coerce/apply.scm 62 */
												obj_t BgL_arg3533z00_1401;

												{	/* Coerce/apply.scm 62 */
													obj_t BgL_arg3535z00_1402;

													obj_t BgL_arg3536z00_1403;

													BgL_arg3535z00_1402 = CNST_TABLE_REF(((long) 11));
													{	/* Coerce/apply.scm 62 */
														obj_t BgL_list3537z00_1404;

														BgL_list3537z00_1404 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg3536z00_1403 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
															(obj_t) (BgL_valz00_1353), BgL_list3537z00_1404);
													}
													BgL_arg3533z00_1401 =
														MAKE_PAIR(BgL_arg3535z00_1402, BgL_arg3536z00_1403);
												}
												BgL_lvalz00_1355 =
													BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00
													(BgL_arg3533z00_1401, BgL_locz00_1354);
											}
											{	/* Coerce/apply.scm 62 */
												obj_t BgL_lenz00_1356;

												BgL_lenz00_1356 =
													BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
															(long) 12)));
												{	/* Coerce/apply.scm 63 */
													BgL_letzd2varzd2_bglt BgL_lnodez00_1357;

													{	/* Coerce/apply.scm 64 */
														obj_t BgL_arg3492z00_1361;

														BgL_nodez00_bglt BgL_arg3493z00_1362;

														{	/* Coerce/apply.scm 67 */
															obj_t BgL_arg3494z00_1363;

															obj_t BgL_arg3495z00_1364;

															BgL_arg3494z00_1363 =
																MAKE_PAIR(
																(obj_t) (BgL_funz00_1352),
																(obj_t) (BgL_czd2funzd2_1340));
															{	/* Coerce/apply.scm 68 */
																BgL_nodez00_bglt BgL_arg3498z00_1367;

																BgL_arg3498z00_1367 =
																	(((BgL_appzd2lyzd2_bglt)
																		CREF(BgL_nodez00_1331))->BgL_argz00);
																BgL_arg3495z00_1364 =
																	MAKE_PAIR((obj_t) (BgL_valz00_1353),
																	(obj_t) (BgL_arg3498z00_1367));
															}
															{	/* Coerce/apply.scm 67 */
																obj_t BgL_list3496z00_1365;

																{	/* Coerce/apply.scm 67 */
																	obj_t BgL_arg3497z00_1366;

																	BgL_arg3497z00_1366 =
																		MAKE_PAIR(BgL_arg3495z00_1364, BNIL);
																	BgL_list3496z00_1365 =
																		MAKE_PAIR(BgL_arg3494z00_1363,
																		BgL_arg3497z00_1366);
																}
																BgL_arg3492z00_1361 = BgL_list3496z00_1365;
														}}
														{	/* Coerce/apply.scm 70 */
															obj_t BgL_arg3499z00_1368;

															{	/* Coerce/apply.scm 70 */
																obj_t BgL_arg3500z00_1369;

																obj_t BgL_arg3501z00_1370;

																BgL_arg3500z00_1369 =
																	CNST_TABLE_REF(((long) 13));
																{	/* Coerce/apply.scm 70 */
																	obj_t BgL_arg3502z00_1371;

																	obj_t BgL_arg3503z00_1372;

																	{	/* Coerce/apply.scm 70 */
																		obj_t BgL_arg3507z00_1376;

																		{	/* Coerce/apply.scm 70 */
																			obj_t BgL_arg3509z00_1378;

																			obj_t BgL_arg3510z00_1379;

																			{	/* Coerce/apply.scm 70 */
																				obj_t BgL_arg3511z00_1380;

																				{	/* Coerce/apply.scm 70 */
																					obj_t BgL_arg3512z00_1381;

																					obj_t BgL_arg3513z00_1382;

																					{	/* Coerce/apply.scm 70 */
																						obj_t BgL_res3552z00_1462;

																						{	/* Coerce/apply.scm 70 */
																							obj_t BgL_symbolz00_1460;

																							BgL_symbolz00_1460 =
																								BgL_lenz00_1356;
																							{	/* Coerce/apply.scm 70 */
																								obj_t BgL_arg2063z00_1461;

																								BgL_arg2063z00_1461 =
																									SYMBOL_TO_STRING
																									(BgL_symbolz00_1460);
																								BgL_res3552z00_1462 =
																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																									(BgL_arg2063z00_1461);
																						}}
																						BgL_arg3512z00_1381 =
																							BgL_res3552z00_1462;
																					}
																					{	/* Coerce/apply.scm 70 */
																						obj_t BgL_res3553z00_1465;

																						{	/* Coerce/apply.scm 70 */
																							obj_t BgL_symbolz00_1463;

																							BgL_symbolz00_1463 =
																								CNST_TABLE_REF(((long) 14));
																							{	/* Coerce/apply.scm 70 */
																								obj_t BgL_arg2063z00_1464;

																								BgL_arg2063z00_1464 =
																									SYMBOL_TO_STRING
																									(BgL_symbolz00_1463);
																								BgL_res3553z00_1465 =
																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																									(BgL_arg2063z00_1464);
																						}}
																						BgL_arg3513z00_1382 =
																							BgL_res3553z00_1465;
																					}
																					{	/* Coerce/apply.scm 70 */
																						obj_t BgL_list3514z00_1383;

																						{	/* Coerce/apply.scm 70 */
																							obj_t BgL_arg3515z00_1384;

																							BgL_arg3515z00_1384 =
																								MAKE_PAIR(BgL_arg3513z00_1382,
																								BNIL);
																							BgL_list3514z00_1383 =
																								MAKE_PAIR(BgL_arg3512z00_1381,
																								BgL_arg3515z00_1384);
																						}
																						BgL_arg3511z00_1380 =
																							BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																							(BgL_list3514z00_1383);
																				}}
																				BgL_arg3509z00_1378 =
																					string_to_symbol(BSTRING_TO_STRING
																					(BgL_arg3511z00_1380));
																			}
																			{	/* Coerce/apply.scm 71 */
																				BgL_nodez00_bglt BgL_arg3517z00_1385;

																				BgL_arg3517z00_1385 =
																					BGl_coercez12z12zzcoerce_coercez00
																					(BgL_lvalz00_1355, BgL_callerz00_1332,
																					(BgL_typez00_bglt)
																					(BGl_za2intza2z00zztype_cachez00),
																					CBOOL(BgL_safez00_1334));
																				{	/* Coerce/apply.scm 70 */
																					obj_t BgL_list3519z00_1387;

																					BgL_list3519z00_1387 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3510z00_1379 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						((obj_t) (BgL_arg3517z00_1385),
																						BgL_list3519z00_1387);
																			}}
																			BgL_arg3507z00_1376 =
																				MAKE_PAIR(BgL_arg3509z00_1378,
																				BgL_arg3510z00_1379);
																		}
																		BgL_arg3502z00_1371 =
																			MAKE_PAIR(BgL_arg3507z00_1376, BNIL);
																	}
																	{	/* Coerce/apply.scm 75 */
																		obj_t BgL_arg3520z00_1388;

																		obj_t BgL_arg3521z00_1389;

																		BgL_arg3520z00_1388 =
																			CNST_TABLE_REF(((long) 15));
																		{	/* Coerce/apply.scm 75 */
																			obj_t BgL_arg3522z00_1390;

																			BgL_nodez00_bglt BgL_arg3523z00_1391;

																			BgL_nodez00_bglt BgL_arg3524z00_1392;

																			{	/* Coerce/apply.scm 75 */
																				obj_t BgL_arg3529z00_1397;

																				obj_t BgL_arg3530z00_1398;

																				BgL_arg3529z00_1397 =
																					CNST_TABLE_REF(((long) 16));
																				{	/* Coerce/apply.scm 75 */
																					obj_t BgL_list3531z00_1399;

																					{	/* Coerce/apply.scm 75 */
																						obj_t BgL_arg3532z00_1400;

																						BgL_arg3532z00_1400 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list3531z00_1399 =
																							MAKE_PAIR(BgL_lenz00_1356,
																							BgL_arg3532z00_1400);
																					}
																					BgL_arg3530z00_1398 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						((obj_t) (BgL_funz00_1352),
																						BgL_list3531z00_1399);
																				}
																				BgL_arg3522z00_1390 =
																					MAKE_PAIR(BgL_arg3529z00_1397,
																					BgL_arg3530z00_1398);
																			}
																			BgL_arg3523z00_1391 =
																				BGl_convertz12z12zzcoerce_convertz00(
																				(BgL_nodez00_bglt) (BgL_nodez00_1331),
																				(BgL_typez00_bglt)
																				(BGl_za2objza2z00zztype_cachez00),
																				(BgL_typez00_bglt) (BgL_toz00_1333),
																				CBOOL(BgL_safez00_1334));
																			BgL_arg3524z00_1392 =
																				BGl_makezd2errorzd2nodez00zzcoerce_applyz00
																				(BgL_errorzd2msgzd2_1337,
																				BgL_locz00_1354, BgL_callerz00_1332,
																				BgL_toz00_1333);
																			{	/* Coerce/apply.scm 75 */
																				obj_t BgL_list3526z00_1394;

																				{	/* Coerce/apply.scm 75 */
																					obj_t BgL_arg3527z00_1395;

																					{	/* Coerce/apply.scm 75 */
																						obj_t BgL_arg3528z00_1396;

																						BgL_arg3528z00_1396 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg3527z00_1395 =
																							MAKE_PAIR(
																							(obj_t) (BgL_arg3524z00_1392),
																							BgL_arg3528z00_1396);
																					}
																					BgL_list3526z00_1394 =
																						MAKE_PAIR(
																						(obj_t) (BgL_arg3523z00_1391),
																						BgL_arg3527z00_1395);
																				}
																				BgL_arg3521z00_1389 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg3522z00_1390,
																					BgL_list3526z00_1394);
																		}}
																		BgL_arg3503z00_1372 =
																			MAKE_PAIR(BgL_arg3520z00_1388,
																			BgL_arg3521z00_1389);
																	}
																	{	/* Coerce/apply.scm 70 */
																		obj_t BgL_list3505z00_1374;

																		{	/* Coerce/apply.scm 70 */
																			obj_t BgL_arg3506z00_1375;

																			BgL_arg3506z00_1375 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list3505z00_1374 =
																				MAKE_PAIR(BgL_arg3503z00_1372,
																				BgL_arg3506z00_1375);
																		}
																		BgL_arg3501z00_1370 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg3502z00_1371,
																			BgL_list3505z00_1374);
																}}
																BgL_arg3499z00_1368 =
																	MAKE_PAIR(BgL_arg3500z00_1369,
																	BgL_arg3501z00_1370);
															}
															BgL_arg3493z00_1362 =
																BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00
																(BgL_arg3499z00_1368, BgL_locz00_1354);
														}
														BgL_lnodez00_1357 =
															BGl_makezd2letzd2varz00zzast_nodez00
															(BgL_locz00_1354,
															(BgL_typez00_bglt)
															(BGl_za2objza2z00zztype_cachez00), BUNSPEC,
															BINT(((long) -1)), BgL_arg3492z00_1361,
															BgL_arg3493z00_1362, ((bool_t) 1));
													}
													{	/* Coerce/apply.scm 64 */

														{	/* Coerce/apply.scm 83 */
															BgL_varz00_bglt BgL_arg3489z00_1358;

															BgL_arg3489z00_1358 =
																BGl_makezd2varzd2zzast_nodez00(BgL_locz00_1354,
																(BgL_typez00_bglt)
																(BGl_za2procedureza2z00zztype_cachez00),
																(BgL_variablez00_bglt) (BgL_funz00_1352));
															{
																BgL_nodez00_bglt BgL_auxz00_1729;

																BgL_auxz00_1729 =
																	(BgL_nodez00_bglt) (BgL_arg3489z00_1358);
																((((BgL_appzd2lyzd2_bglt)
																			CREF(BgL_nodez00_1331))->BgL_funz00) =
																	((BgL_nodez00_bglt) BgL_auxz00_1729),
																	BUNSPEC);
														}}
														{	/* Coerce/apply.scm 87 */
															BgL_varz00_bglt BgL_arg3490z00_1359;

															BgL_arg3490z00_1359 =
																BGl_makezd2varzd2zzast_nodez00(BgL_locz00_1354,
																(BgL_typez00_bglt)
																(BGl_za2objza2z00zztype_cachez00),
																(BgL_variablez00_bglt) (BgL_valz00_1353));
															{
																BgL_nodez00_bglt BgL_auxz00_1735;

																BgL_auxz00_1735 =
																	(BgL_nodez00_bglt) (BgL_arg3490z00_1359);
																((((BgL_appzd2lyzd2_bglt)
																			CREF(BgL_nodez00_1331))->BgL_argz00) =
																	((BgL_nodez00_bglt) BgL_auxz00_1735),
																	BUNSPEC);
														}}
														return (obj_t) (BgL_lnodez00_1357);
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
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcoerce_applyz00()
	{
		AN_OBJECT;
		{	/* Coerce/apply.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3561z00zzcoerce_applyz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3561z00zzcoerce_applyz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string3561z00zzcoerce_applyz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3561z00zzcoerce_applyz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string3561z00zzcoerce_applyz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3561z00zzcoerce_applyz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3561z00zzcoerce_applyz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3561z00zzcoerce_applyz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3561z00zzcoerce_applyz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3561z00zzcoerce_applyz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string3561z00zzcoerce_applyz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string3561z00zzcoerce_applyz00));
			BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 387636515),
				BSTRING_TO_STRING(BGl_string3561z00zzcoerce_applyz00));
			return
				BGl_modulezd2initializa7ationz75zzcoerce_convertz00(((long) 65499856),
				BSTRING_TO_STRING(BGl_string3561z00zzcoerce_applyz00));
		}
	}

#ifdef __cplusplus
}
#endif
