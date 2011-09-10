/*===========================================================================*/
/*   (Coerce/convert.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Coerce/convert.scm)*/
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

	typedef struct BgL_appz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		struct BgL_varz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
	}             *BgL_appz00_bglt;

	typedef struct BgL_castz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}              *BgL_castz00_bglt;

	typedef struct BgL_conditionalz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		struct BgL_nodez00_bgl *BgL_testz00;
		struct BgL_nodez00_bgl *BgL_truez00;
		struct BgL_nodez00_bgl *BgL_falsez00;
	}                     *BgL_conditionalz00_bglt;

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

	typedef struct BgL_tclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		struct BgL_globalz00_bgl *BgL_holderz00;
		obj_t BgL_wideningz00;
		long BgL_depthz00;
		bool_t BgL_finalzf3zf3;
		obj_t BgL_constructorz00;
		obj_t BgL_virtualzd2slotszd2numberz00;
		bool_t BgL_abstractzf3zf3;
		obj_t BgL_widezd2typezd2;
	}                *BgL_tclassz00_bglt;


	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_convertzd2errorzd2zzcoerce_convertz00(BgL_typez00_bglt,
		BgL_typez00_bglt, obj_t, BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static BgL_nodez00_bglt
		BGl_skipzd2letzd2varz00zzcoerce_convertz00(BgL_nodez00_bglt);
	static obj_t BGl_cnstzd2initzd2zzcoerce_convertz00();
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_convertz12z12zzcoerce_convertz00(BgL_nodez00_bglt, BgL_typez00_bglt,
		BgL_typez00_bglt, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzcoerce_convertz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_spreadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_coercionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzcoerce_convertz00();
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern BgL_nodez00_bglt
		BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_dozd2convertzd2zzcoerce_convertz00(obj_t, obj_t,
		BgL_typez00_bglt);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl__convertz12z12zzcoerce_convertz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern bool_t BGl_subzd2typezf3z21zztype_envz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern obj_t BGl_lvtypezd2nodez12zc0zzast_lvtypez00(BgL_nodez00_bglt);
	extern obj_t BGl_locationzd2fullzd2fnamez00zztools_locationz00(obj_t);
	extern obj_t BGl_userzd2warningzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcoerce_convertz00();
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	extern bool_t
		BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(BgL_nodez00_bglt);
	extern BgL_castz00_bglt BGl_makezd2castzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcoerce_convertz00 = BUNSPEC;
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl_genericzd2initzd2zzcoerce_convertz00();
	extern BgL_typez00_bglt
		BGl_getzd2aliasedzd2typez00zztype_typez00(BgL_typez00_bglt);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_runtimezd2typezd2errorzf2idzf2zzcoerce_convertz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_makezd2onezd2conversionz00zzcoerce_convertz00(obj_t,
		BgL_typez00_bglt, BgL_typez00_bglt, obj_t, obj_t, obj_t, bool_t);
	extern obj_t BGl_findzd2coercerzd2zztype_coercionz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_importedzd2moduleszd2initz00zzcoerce_convertz00();
	static BgL_nodez00_bglt
		BGl_makezd2onezd2typezd2conversionzd2zzcoerce_convertz00(obj_t,
		BgL_typez00_bglt, BgL_typez00_bglt, obj_t, obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_coercez12z12zzcoerce_coercez00(BgL_nodez00_bglt,
		obj_t, BgL_typez00_bglt, bool_t);
	extern obj_t BGl_currentzd2functionzd2zztools_errorz00();
	static obj_t BGl_makezd2onezd2classzd2conversionzd2zzcoerce_convertz00(obj_t,
		BgL_tclassz00_bglt, BgL_typez00_bglt, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_bigloozd2typezd2errorzd2msgzd2zz__errorz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__runtimezd2typezd2errorz00zzcoerce_convertz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern BgL_varz00_bglt BGl_makezd2varzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_variablez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_runtimezd2typezd2errorz00zzcoerce_convertz00(obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcoerce_convertz00();
	extern bool_t BGl_typezd2subclasszf3z21zzobject_classz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t __cnst[11];


	   
		 
		DEFINE_STRING(BGl_string3908z00zzcoerce_convertz00,
		BgL_bgl_string3908za700za7za7c3917za7, "Type error", 10);
	      DEFINE_STRING(BGl_string3910z00zzcoerce_convertz00,
		BgL_bgl_string3910za700za7za7c3918za7, "Illegal conversion", 18);
	      DEFINE_STRING(BGl_string3909z00zzcoerce_convertz00,
		BgL_bgl_string3909za700za7za7c3919za7, "", 0);
	      DEFINE_STRING(BGl_string3911z00zzcoerce_convertz00,
		BgL_bgl_string3911za700za7za7c3920za7, "do-convert", 10);
	      DEFINE_STRING(BGl_string3912z00zzcoerce_convertz00,
		BgL_bgl_string3912za700za7za7c3921za7, "Illegal converter", 17);
	      DEFINE_STRING(BGl_string3913z00zzcoerce_convertz00,
		BgL_bgl_string3913za700za7za7c3922za7, "coerce_convert", 14);
	      DEFINE_STRING(BGl_string3914z00zzcoerce_convertz00,
		BgL_bgl_string3914za700za7za7c3923za7,
		"aux2 if coercer type-error __error @ failure location ::obj let aux ", 68);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_convertz12zd2envzc0zzcoerce_convertz00,
		BgL_bgl__convertza712za712za7za73924z00,
		BGl__convertz12z12zzcoerce_convertz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_runtimezd2typezd2errorzd2envzd2zzcoerce_convertz00,
		BgL_bgl__runtimeza7d2typeza73925z00,
		BGl__runtimezd2typezd2errorz00zzcoerce_convertz00, 0L, BUNSPEC, 3);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzcoerce_convertz00(long
		BgL_checksumz00_1848, char *BgL_fromz00_1849)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcoerce_convertz00))
				{
					BGl_requirezd2initializa7ationz75zzcoerce_convertz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcoerce_convertz00();
					BGl_cnstzd2initzd2zzcoerce_convertz00();
					BGl_importedzd2moduleszd2initz00zzcoerce_convertz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcoerce_convertz00()
	{
		AN_OBJECT;
		{	/* Coerce/convert.scm 16 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"coerce_convert");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"coerce_convert");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"coerce_convert");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"coerce_convert");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"coerce_convert");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"coerce_convert");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcoerce_convertz00()
	{
		AN_OBJECT;
		{	/* Coerce/convert.scm 16 */
			{	/* Coerce/convert.scm 16 */
				obj_t BgL_cportz00_1840;

				BgL_cportz00_1840 =
					bgl_open_input_string(BGl_string3914z00zzcoerce_convertz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1841;

					BgL_iz00_1841 = ((long) 10);
				BgL_loopz00_1842:
					if ((BgL_iz00_1841 == ((long) -1)))
						{	/* Coerce/convert.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Coerce/convert.scm 16 */
							{	/* Coerce/convert.scm 16 */
								obj_t BgL_arg3916z00_1844;

								{	/* Coerce/convert.scm 16 */

									{	/* Coerce/convert.scm 16 */
										obj_t BgL_locationz00_1846;

										BgL_locationz00_1846 = BBOOL(((bool_t) 0));
										{	/* Coerce/convert.scm 16 */

											BgL_arg3916z00_1844 =
												BGl_readz00zz__readerz00(BgL_cportz00_1840,
												BgL_locationz00_1846);
										}
									}
								}
								{	/* Coerce/convert.scm 16 */
									int BgL_auxz00_1868;

									BgL_auxz00_1868 = (int) (BgL_iz00_1841);
									CNST_TABLE_SET(BgL_auxz00_1868, BgL_arg3916z00_1844);
							}}
							{	/* Coerce/convert.scm 16 */
								int BgL_auxz00_1847;

								BgL_auxz00_1847 = (int) ((BgL_iz00_1841 - ((long) 1)));
								{
									long BgL_iz00_1873;

									BgL_iz00_1873 = (long) (BgL_auxz00_1847);
									BgL_iz00_1841 = BgL_iz00_1873;
									goto BgL_loopz00_1842;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcoerce_convertz00()
	{
		AN_OBJECT;
		{	/* Coerce/convert.scm 16 */
			return BUNSPEC;
		}
	}



/* runtime-type-error */
	BGL_EXPORTED_DEF obj_t BGl_runtimezd2typezd2errorz00zzcoerce_convertz00(obj_t
		BgL_locz00_41, obj_t BgL_tiz00_42, obj_t BgL_valuez00_43)
	{
		AN_OBJECT;
		{	/* Coerce/convert.scm 68 */
			{

				if (BGl_iszd2azf3z21zz__objectz00(BgL_valuez00_43,
						BGl_nodez00zzast_nodez00))
					{	/* Coerce/convert.scm 91 */
						BgL_nodez00_bglt BgL_auxz00_1877;

						{	/* Coerce/convert.scm 82 */
							obj_t BgL_auxz00_1046;

							BgL_auxz00_1046 =
								BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 0)));
							{	/* Coerce/convert.scm 82 */
								BgL_nodez00_bglt BgL_resz00_1047;

								{	/* Coerce/convert.scm 84 */
									obj_t BgL_arg3672z00_1050;

									{	/* Coerce/convert.scm 84 */
										obj_t BgL_arg3673z00_1051;

										obj_t BgL_arg3674z00_1052;

										BgL_arg3673z00_1051 = CNST_TABLE_REF(((long) 1));
										{	/* Coerce/convert.scm 84 */
											obj_t BgL_arg3675z00_1053;

											obj_t BgL_arg3677z00_1054;

											{	/* Coerce/convert.scm 84 */
												obj_t BgL_arg3681z00_1058;

												{	/* Coerce/convert.scm 84 */
													obj_t BgL_arg3683z00_1060;

													obj_t BgL_arg3684z00_1061;

													{	/* Coerce/convert.scm 84 */
														obj_t BgL_arg3685z00_1062;

														{	/* Coerce/convert.scm 84 */
															obj_t BgL_arg3686z00_1063;

															{	/* Coerce/convert.scm 84 */
																obj_t BgL_arg3687z00_1064;

																obj_t BgL_arg3688z00_1065;

																{	/* Coerce/convert.scm 84 */
																	obj_t BgL_res3900z00_1697;

																	{	/* Coerce/convert.scm 84 */
																		obj_t BgL_symbolz00_1695;

																		BgL_symbolz00_1695 = BgL_auxz00_1046;
																		{	/* Coerce/convert.scm 84 */
																			obj_t BgL_arg2063z00_1696;

																			BgL_arg2063z00_1696 =
																				SYMBOL_TO_STRING(BgL_symbolz00_1695);
																			BgL_res3900z00_1697 =
																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																				(BgL_arg2063z00_1696);
																	}}
																	BgL_arg3687z00_1064 = BgL_res3900z00_1697;
																}
																{	/* Coerce/convert.scm 84 */
																	obj_t BgL_res3901z00_1700;

																	{	/* Coerce/convert.scm 84 */
																		obj_t BgL_symbolz00_1698;

																		BgL_symbolz00_1698 =
																			CNST_TABLE_REF(((long) 2));
																		{	/* Coerce/convert.scm 84 */
																			obj_t BgL_arg2063z00_1699;

																			BgL_arg2063z00_1699 =
																				SYMBOL_TO_STRING(BgL_symbolz00_1698);
																			BgL_res3901z00_1700 =
																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																				(BgL_arg2063z00_1699);
																	}}
																	BgL_arg3688z00_1065 = BgL_res3901z00_1700;
																}
																{	/* Coerce/convert.scm 84 */
																	obj_t BgL_list3689z00_1066;

																	{	/* Coerce/convert.scm 84 */
																		obj_t BgL_arg3690z00_1067;

																		BgL_arg3690z00_1067 =
																			MAKE_PAIR(BgL_arg3688z00_1065, BNIL);
																		BgL_list3689z00_1066 =
																			MAKE_PAIR(BgL_arg3687z00_1064,
																			BgL_arg3690z00_1067);
																	}
																	BgL_arg3686z00_1063 =
																		BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																		(BgL_list3689z00_1066);
															}}
															BgL_arg3685z00_1062 =
																string_to_symbol(BSTRING_TO_STRING
																(BgL_arg3686z00_1063));
														}
														BgL_arg3683z00_1060 =
															BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
															(BgL_arg3685z00_1062);
													}
													{	/* Coerce/convert.scm 84 */
														obj_t BgL_list3691z00_1068;

														BgL_list3691z00_1068 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg3684z00_1061 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BUNSPEC, BgL_list3691z00_1068);
													}
													BgL_arg3681z00_1058 =
														MAKE_PAIR(BgL_arg3683z00_1060, BgL_arg3684z00_1061);
												}
												BgL_arg3675z00_1053 =
													MAKE_PAIR(BgL_arg3681z00_1058, BNIL);
											}
											BgL_arg3677z00_1054 =
												BGl_runtimezd2typezd2errorzf2idzf2zzcoerce_convertz00
												(BgL_tiz00_42, BgL_locz00_41, BgL_auxz00_1046);
											{	/* Coerce/convert.scm 84 */
												obj_t BgL_list3679z00_1056;

												{	/* Coerce/convert.scm 84 */
													obj_t BgL_arg3680z00_1057;

													BgL_arg3680z00_1057 = MAKE_PAIR(BNIL, BNIL);
													BgL_list3679z00_1056 =
														MAKE_PAIR(BgL_arg3677z00_1054, BgL_arg3680z00_1057);
												}
												BgL_arg3674z00_1052 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg3675z00_1053, BgL_list3679z00_1056);
										}}
										BgL_arg3672z00_1050 =
											MAKE_PAIR(BgL_arg3673z00_1051, BgL_arg3674z00_1052);
									}
									BgL_resz00_1047 =
										BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00
										(BgL_arg3672z00_1050, BgL_locz00_41);
								}
								{	/* Coerce/convert.scm 83 */

									{	/* Coerce/convert.scm 88 */
										obj_t BgL_arg3670z00_1048;

										{	/* Coerce/convert.scm 88 */
											obj_t BgL_pairz00_1703;

											{
												BgL_letzd2varzd2_bglt BgL_auxz00_1902;

												BgL_auxz00_1902 =
													(BgL_letzd2varzd2_bglt) (BgL_resz00_1047);
												BgL_pairz00_1703 =
													(((BgL_letzd2varzd2_bglt) CREF(BgL_auxz00_1902))->
													BgL_bindingsz00);
											}
											BgL_arg3670z00_1048 = CAR(BgL_pairz00_1703);
										}
										SET_CDR(BgL_arg3670z00_1048, BgL_valuez00_43);
									}
									BgL_auxz00_1877 = BgL_resz00_1047;
						}}}
						return (obj_t) (BgL_auxz00_1877);
					}
				else
					{	/* Coerce/convert.scm 90 */
						return
							BGl_runtimezd2typezd2errorzf2idzf2zzcoerce_convertz00
							(BgL_tiz00_42, BgL_locz00_41, BgL_valuez00_43);
					}
			}
		}
	}



/* runtime-type-error/id */
	obj_t BGl_runtimezd2typezd2errorzf2idzf2zzcoerce_convertz00(obj_t
		BgL_tiz00_1837, obj_t BgL_locz00_1836, obj_t BgL_idz00_1016)
	{
		AN_OBJECT;
		{	/* Coerce/convert.scm 71 */
			{	/* Coerce/convert.scm 72 */
				obj_t BgL_fnamez00_1018;

				obj_t BgL_posz00_1019;

				{	/* Coerce/convert.scm 72 */
					bool_t BgL_testz00_1909;

					if (STRUCTP(BgL_locz00_1836))
						{	/* Coerce/convert.scm 72 */
							BgL_testz00_1909 =
								(STRUCT_KEY(BgL_locz00_1836) == CNST_TABLE_REF(((long) 3)));
						}
					else
						{	/* Coerce/convert.scm 72 */
							BgL_testz00_1909 = ((bool_t) 0);
						}
					if (BgL_testz00_1909)
						{	/* Coerce/convert.scm 72 */
							BgL_fnamez00_1018 =
								BGl_locationzd2fullzd2fnamez00zztools_locationz00
								(BgL_locz00_1836);
						}
					else
						{	/* Coerce/convert.scm 72 */
							BgL_fnamez00_1018 = BFALSE;
						}
				}
				{	/* Coerce/convert.scm 73 */
					bool_t BgL_testz00_1916;

					if (STRUCTP(BgL_locz00_1836))
						{	/* Coerce/convert.scm 73 */
							BgL_testz00_1916 =
								(STRUCT_KEY(BgL_locz00_1836) == CNST_TABLE_REF(((long) 3)));
						}
					else
						{	/* Coerce/convert.scm 73 */
							BgL_testz00_1916 = ((bool_t) 0);
						}
					if (BgL_testz00_1916)
						{	/* Coerce/convert.scm 73 */
							BgL_posz00_1019 = STRUCT_REF(BgL_locz00_1836, (int) (((long) 1)));
						}
					else
						{	/* Coerce/convert.scm 73 */
							BgL_posz00_1019 = BFALSE;
						}
				}
				{	/* Coerce/convert.scm 74 */
					obj_t BgL_arg3643z00_1020;

					obj_t BgL_arg3644z00_1021;

					BgL_arg3643z00_1020 = CNST_TABLE_REF(((long) 4));
					{	/* Coerce/convert.scm 75 */
						obj_t BgL_arg3645z00_1022;

						{	/* Coerce/convert.scm 75 */
							obj_t BgL_arg3650z00_1027;

							obj_t BgL_arg3651z00_1028;

							{	/* Coerce/convert.scm 75 */
								obj_t BgL_arg3652z00_1029;

								obj_t BgL_arg3653z00_1030;

								BgL_arg3652z00_1029 = CNST_TABLE_REF(((long) 5));
								{	/* Coerce/convert.scm 75 */
									obj_t BgL_list3654z00_1031;

									{	/* Coerce/convert.scm 75 */
										obj_t BgL_arg3655z00_1032;

										obj_t BgL_arg3656z00_1033;

										BgL_arg3655z00_1032 = CNST_TABLE_REF(((long) 6));
										BgL_arg3656z00_1033 = MAKE_PAIR(BNIL, BNIL);
										BgL_list3654z00_1031 =
											MAKE_PAIR(BgL_arg3655z00_1032, BgL_arg3656z00_1033);
									}
									BgL_arg3653z00_1030 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF((
												(long) 7)), BgL_list3654z00_1031);
								}
								BgL_arg3650z00_1027 =
									MAKE_PAIR(BgL_arg3652z00_1029, BgL_arg3653z00_1030);
							}
							{	/* Coerce/convert.scm 76 */
								obj_t BgL_arg3657z00_1034;

								obj_t BgL_arg3658z00_1035;

								{	/* Coerce/convert.scm 76 */
									obj_t BgL_arg3665z00_1042;

									BgL_arg3665z00_1042 =
										BGl_currentzd2functionzd2zztools_errorz00();
									{	/* Coerce/convert.scm 76 */
										obj_t BgL_res3898z00_1691;

										{	/* Coerce/convert.scm 76 */
											obj_t BgL_symbolz00_1689;

											BgL_symbolz00_1689 = BgL_arg3665z00_1042;
											{	/* Coerce/convert.scm 76 */
												obj_t BgL_arg2063z00_1690;

												BgL_arg2063z00_1690 =
													SYMBOL_TO_STRING(BgL_symbolz00_1689);
												BgL_res3898z00_1691 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg2063z00_1690);
										}}
										BgL_arg3657z00_1034 = BgL_res3898z00_1691;
								}}
								{	/* Coerce/convert.scm 77 */
									obj_t BgL_res3899z00_1694;

									{	/* Coerce/convert.scm 77 */
										obj_t BgL_symbolz00_1692;

										BgL_symbolz00_1692 = BgL_tiz00_1837;
										{	/* Coerce/convert.scm 77 */
											obj_t BgL_arg2063z00_1693;

											BgL_arg2063z00_1693 =
												SYMBOL_TO_STRING(BgL_symbolz00_1692);
											BgL_res3899z00_1694 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_1693);
									}}
									BgL_arg3658z00_1035 = BgL_res3899z00_1694;
								}
								{	/* Coerce/convert.scm 75 */
									obj_t BgL_list3660z00_1037;

									{	/* Coerce/convert.scm 75 */
										obj_t BgL_arg3661z00_1038;

										{	/* Coerce/convert.scm 75 */
											obj_t BgL_arg3662z00_1039;

											{	/* Coerce/convert.scm 75 */
												obj_t BgL_arg3663z00_1040;

												{	/* Coerce/convert.scm 75 */
													obj_t BgL_arg3664z00_1041;

													BgL_arg3664z00_1041 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg3663z00_1040 =
														MAKE_PAIR(BgL_idz00_1016, BgL_arg3664z00_1041);
												}
												BgL_arg3662z00_1039 =
													MAKE_PAIR(BgL_arg3658z00_1035, BgL_arg3663z00_1040);
											}
											BgL_arg3661z00_1038 =
												MAKE_PAIR(BgL_arg3657z00_1034, BgL_arg3662z00_1039);
										}
										BgL_list3660z00_1037 =
											MAKE_PAIR(BgL_posz00_1019, BgL_arg3661z00_1038);
									}
									BgL_arg3651z00_1028 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_fnamez00_1018, BgL_list3660z00_1037);
							}}
							BgL_arg3645z00_1022 =
								MAKE_PAIR(BgL_arg3650z00_1027, BgL_arg3651z00_1028);
						}
						{	/* Coerce/convert.scm 74 */
							obj_t BgL_list3647z00_1024;

							{	/* Coerce/convert.scm 74 */
								obj_t BgL_arg3648z00_1025;

								{	/* Coerce/convert.scm 74 */
									obj_t BgL_arg3649z00_1026;

									BgL_arg3649z00_1026 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg3648z00_1025 = MAKE_PAIR(BFALSE, BgL_arg3649z00_1026);
								}
								BgL_list3647z00_1024 = MAKE_PAIR(BFALSE, BgL_arg3648z00_1025);
							}
							BgL_arg3644z00_1021 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg3645z00_1022,
								BgL_list3647z00_1024);
					}}
					return MAKE_PAIR(BgL_arg3643z00_1020, BgL_arg3644z00_1021);
				}
			}
		}
	}



/* _runtime-type-error */
	obj_t BGl__runtimezd2typezd2errorz00zzcoerce_convertz00(obj_t BgL_envz00_1827,
		obj_t BgL_locz00_1828, obj_t BgL_tiz00_1829, obj_t BgL_valuez00_1830)
	{
		AN_OBJECT;
		{	/* Coerce/convert.scm 68 */
			return
				BGl_runtimezd2typezd2errorz00zzcoerce_convertz00(BgL_locz00_1828,
				BgL_tiz00_1829, BgL_valuez00_1830);
		}
	}



/* convert-error */
	obj_t BGl_convertzd2errorzd2zzcoerce_convertz00(BgL_typez00_bglt
		BgL_fromz00_44, BgL_typez00_bglt BgL_toz00_45, obj_t BgL_locz00_46,
		BgL_nodez00_bglt BgL_nodez00_47)
	{
		AN_OBJECT;
		{	/* Coerce/convert.scm 101 */
			{	/* Coerce/convert.scm 104 */
				bool_t BgL_testz00_1950;

				if (((obj_t) (BgL_toz00_45) == BGl_za2objza2z00zztype_cachez00))
					{	/* Coerce/convert.scm 104 */
						BgL_testz00_1950 = ((bool_t) 0);
					}
				else
					{	/* Coerce/convert.scm 104 */
						BgL_testz00_1950 =
							BGl_subzd2typezf3z21zztype_envz00(BgL_toz00_45,
							(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00));
					}
				if (BgL_testz00_1950)
					{	/* Coerce/convert.scm 104 */
						{	/* Coerce/convert.scm 106 */
							obj_t BgL_arg3693z00_1072;

							BgL_arg3693z00_1072 = BGl_currentzd2functionzd2zztools_errorz00();
							BGl_userzd2warningzf2locationz20zztools_errorz00(BgL_locz00_46,
								BgL_arg3693z00_1072, BGl_string3908z00zzcoerce_convertz00,
								BGl_bigloozd2typezd2errorzd2msgzd2zz__errorz00
								(BGl_string3909z00zzcoerce_convertz00,
									BGl_shapez00zztools_shapez00((obj_t) (BgL_toz00_45)),
									BGl_shapez00zztools_shapez00((obj_t) (BgL_fromz00_44))));
						}
						{	/* Coerce/convert.scm 107 */
							obj_t BgL_arg3694z00_1073;

							{	/* Coerce/convert.scm 107 */
								obj_t BgL_arg3695z00_1074;

								BgL_arg3695z00_1074 =
									(((BgL_typez00_bglt) CREF(BgL_toz00_45))->BgL_idz00);
								BgL_arg3694z00_1073 =
									BGl_runtimezd2typezd2errorz00zzcoerce_convertz00
									(BgL_locz00_46, BgL_arg3695z00_1074,
									(obj_t) (BgL_nodez00_47));
							}
							return
								(obj_t) (BGl_coercez12z12zzcoerce_coercez00(
									(BgL_nodez00_bglt) (BgL_arg3694z00_1073), BUNSPEC,
									BgL_fromz00_44, ((bool_t) 0)));
						}
					}
				else
					{	/* Coerce/convert.scm 111 */
						obj_t BgL_arg3696z00_1075;

						BgL_arg3696z00_1075 = BGl_currentzd2functionzd2zztools_errorz00();
						return
							BGl_userzd2errorzf2locationz20zztools_errorz00(BgL_locz00_46,
							BgL_arg3696z00_1075, BGl_string3908z00zzcoerce_convertz00,
							BGl_bigloozd2typezd2errorzd2msgzd2zz__errorz00
							(BGl_string3909z00zzcoerce_convertz00,
								BGl_shapez00zztools_shapez00((obj_t) (BgL_toz00_45)),
								BGl_shapez00zztools_shapez00((obj_t) (BgL_fromz00_44))), BNIL);
					}
			}
		}
	}



/* convert! */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_convertz12z12zzcoerce_convertz00(BgL_nodez00_bglt BgL_nodez00_48,
		BgL_typez00_bglt BgL_fromz00_49, BgL_typez00_bglt BgL_toz00_50,
		bool_t BgL_safez00_51)
	{
		AN_OBJECT;
		{	/* Coerce/convert.scm 119 */
			if (((obj_t) (BgL_fromz00_49) == (obj_t) (BgL_toz00_50)))
				{	/* Coerce/convert.scm 122 */
					return BgL_nodez00_48;
				}
			else
				{	/* Coerce/convert.scm 124 */
					BgL_typez00_bglt BgL_toz00_1078;

					BgL_typez00_bglt BgL_fromz00_1079;

					BgL_toz00_1078 =
						BGl_getzd2aliasedzd2typez00zztype_typez00(BgL_toz00_50);
					BgL_fromz00_1079 =
						BGl_getzd2aliasedzd2typez00zztype_typez00(BgL_fromz00_49);
					{	/* Coerce/convert.scm 126 */
						bool_t BgL_testz00_1982;

						if (((obj_t) (BgL_fromz00_1079) == (obj_t) (BgL_toz00_1078)))
							{	/* Coerce/convert.scm 126 */
								BgL_testz00_1982 = ((bool_t) 1);
							}
						else
							{	/* Coerce/convert.scm 126 */
								BgL_testz00_1982 =
									(((BgL_typez00_bglt) CREF(BgL_fromz00_1079))->
									BgL_magiczf3zf3);
							}
						if (BgL_testz00_1982)
							{	/* Coerce/convert.scm 126 */
								return BgL_nodez00_48;
							}
						else
							{	/* Coerce/convert.scm 128 */
								obj_t BgL_coercerz00_1081;

								obj_t BgL_locz00_1082;

								BgL_coercerz00_1081 =
									BGl_findzd2coercerzd2zztype_coercionz00(BgL_fromz00_1079,
									BgL_toz00_1078);
								BgL_locz00_1082 =
									(((BgL_nodez00_bglt) CREF(BgL_nodez00_48))->BgL_locz00);
								{	/* Coerce/convert.scm 130 */
									bool_t BgL_testz00_1990;

									if (STRUCTP(BgL_coercerz00_1081))
										{	/* Coerce/convert.scm 130 */
											BgL_testz00_1990 =
												(STRUCT_KEY(BgL_coercerz00_1081) ==
												CNST_TABLE_REF(((long) 8)));
										}
									else
										{	/* Coerce/convert.scm 130 */
											BgL_testz00_1990 = ((bool_t) 0);
										}
									if (BgL_testz00_1990)
										{	/* Coerce/convert.scm 134 */
											obj_t BgL_checksz00_1084;

											obj_t BgL_coercesz00_1085;

											BgL_checksz00_1084 =
												STRUCT_REF(BgL_coercerz00_1081, (int) (((long) 2)));
											BgL_coercesz00_1085 =
												STRUCT_REF(BgL_coercerz00_1081, (int) (((long) 3)));
											{
												obj_t BgL_checksz00_1087;

												obj_t BgL_coercesz00_1088;

												obj_t BgL_nodez00_1089;

												{	/* Coerce/convert.scm 139 */
													obj_t BgL_auxz00_2000;

													BgL_checksz00_1087 = BgL_checksz00_1084;
													BgL_coercesz00_1088 = BgL_coercesz00_1085;
													BgL_nodez00_1089 = (obj_t) (BgL_nodez00_48);
												BgL_zc3anonymousza33701ze3z83_1090:
													if (NULLP(BgL_checksz00_1087))
														{	/* Coerce/convert.scm 143 */
															if (NULLP(BgL_coercesz00_1088))
																{	/* Coerce/convert.scm 144 */
																	BgL_auxz00_2000 = BgL_nodez00_1089;
																}
															else
																{	/* Coerce/convert.scm 144 */
																	BgL_auxz00_2000 =
																		BGl_internalzd2errorzd2zztools_errorz00
																		(BGl_string3910z00zzcoerce_convertz00,
																		BGl_shapez00zztools_shapez00((obj_t)
																			(BgL_fromz00_1079)),
																		BGl_shapez00zztools_shapez00((obj_t)
																			(BgL_toz00_1078)));
																}
														}
													else
														{	/* Coerce/convert.scm 143 */
															if (NULLP(BgL_coercesz00_1088))
																{	/* Coerce/convert.scm 149 */
																	BgL_auxz00_2000 =
																		BGl_internalzd2errorzd2zztools_errorz00
																		(BGl_string3910z00zzcoerce_convertz00,
																		BGl_shapez00zztools_shapez00((obj_t)
																			(BgL_fromz00_1079)),
																		BGl_shapez00zztools_shapez00((obj_t)
																			(BgL_toz00_1078)));
																}
															else
																{
																	obj_t BgL_nodez00_2021;

																	obj_t BgL_coercesz00_2019;

																	obj_t BgL_checksz00_2017;

																	BgL_checksz00_2017 = CDR(BgL_checksz00_1087);
																	BgL_coercesz00_2019 =
																		CDR(BgL_coercesz00_1088);
																	BgL_nodez00_2021 =
																		BGl_makezd2onezd2conversionz00zzcoerce_convertz00
																		(CAR(BgL_checksz00_1087), BgL_fromz00_1079,
																		BgL_toz00_1078, CAR(BgL_checksz00_1087),
																		CAR(BgL_coercesz00_1088), BgL_nodez00_1089,
																		BgL_safez00_51);
																	BgL_nodez00_1089 = BgL_nodez00_2021;
																	BgL_coercesz00_1088 = BgL_coercesz00_2019;
																	BgL_checksz00_1087 = BgL_checksz00_2017;
																	goto BgL_zc3anonymousza33701ze3z83_1090;
																}
														}
													return (BgL_nodez00_bglt) (BgL_auxz00_2000);
												}
											}
										}
									else
										{	/* Coerce/convert.scm 130 */
											return
												(BgL_nodez00_bglt)
												(BGl_convertzd2errorzd2zzcoerce_convertz00
												(BgL_fromz00_1079, BgL_toz00_1078, BgL_locz00_1082,
													BgL_nodez00_48));
										}
								}
							}
					}
				}
		}
	}



/* _convert! */
	obj_t BGl__convertz12z12zzcoerce_convertz00(obj_t BgL_envz00_1831,
		obj_t BgL_nodez00_1832, obj_t BgL_fromz00_1833, obj_t BgL_toz00_1834,
		obj_t BgL_safez00_1835)
	{
		AN_OBJECT;
		{	/* Coerce/convert.scm 119 */
			return
				(obj_t) (BGl_convertz12z12zzcoerce_convertz00(
					(BgL_nodez00_bglt) (BgL_nodez00_1832),
					(BgL_typez00_bglt) (BgL_fromz00_1833),
					(BgL_typez00_bglt) (BgL_toz00_1834), CBOOL(BgL_safez00_1835)));
		}
	}



/* make-one-conversion */
	obj_t BGl_makezd2onezd2conversionz00zzcoerce_convertz00(obj_t
		BgL_idzd2fromzd2_52, BgL_typez00_bglt BgL_fromz00_53,
		BgL_typez00_bglt BgL_toz00_54, obj_t BgL_checkopz00_55,
		obj_t BgL_coerceopz00_56, obj_t BgL_nodez00_57, bool_t BgL_safez00_58)
	{
		AN_OBJECT;
		{	/* Coerce/convert.scm 173 */
			{	/* Coerce/convert.scm 174 */
				bool_t BgL_testz00_2036;

				if (NULLP(BgL_checkopz00_55))
					{	/* Coerce/convert.scm 174 */
						BgL_testz00_2036 = ((bool_t) 1);
					}
				else
					{	/* Coerce/convert.scm 174 */
						if (BgL_safez00_58)
							{	/* Coerce/convert.scm 174 */
								BgL_testz00_2036 = ((bool_t) 0);
							}
						else
							{	/* Coerce/convert.scm 174 */
								BgL_testz00_2036 = ((bool_t) 1);
							}
					}
				if (BgL_testz00_2036)
					{	/* Coerce/convert.scm 174 */
						return
							BGl_dozd2convertzd2zzcoerce_convertz00(BgL_coerceopz00_56,
							BgL_nodez00_57, BgL_fromz00_53);
					}
				else
					{	/* Coerce/convert.scm 176 */
						bool_t BgL_testz00_2041;

						{	/* Coerce/convert.scm 176 */
							obj_t BgL_obj3387z00_1750;

							BgL_obj3387z00_1750 = (obj_t) (BgL_fromz00_53);
							BgL_testz00_2041 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj3387z00_1750,
								BGl_tclassz00zzobject_classz00);
						}
						if (BgL_testz00_2041)
							{	/* Coerce/convert.scm 176 */
								return
									BGl_makezd2onezd2classzd2conversionzd2zzcoerce_convertz00
									(BgL_idzd2fromzd2_52, (BgL_tclassz00_bglt) (BgL_fromz00_53),
									BgL_toz00_54, BgL_checkopz00_55, BgL_coerceopz00_56,
									BgL_nodez00_57);
							}
						else
							{	/* Coerce/convert.scm 176 */
								return
									(obj_t)
									(BGl_makezd2onezd2typezd2conversionzd2zzcoerce_convertz00
									(BgL_idzd2fromzd2_52, BgL_fromz00_53, BgL_toz00_54,
										BgL_checkopz00_55, BgL_coerceopz00_56, BgL_nodez00_57));
							}
					}
			}
		}
	}



/* skip-let-var */
	BgL_nodez00_bglt BGl_skipzd2letzd2varz00zzcoerce_convertz00(BgL_nodez00_bglt
		BgL_nodez00_59)
	{
		AN_OBJECT;
		{	/* Coerce/convert.scm 183 */
		BGl_skipzd2letzd2varz00zzcoerce_convertz00:
			{	/* Coerce/convert.scm 184 */
				bool_t BgL_testz00_2048;

				{	/* Coerce/convert.scm 184 */
					obj_t BgL_obj3195z00_1751;

					BgL_obj3195z00_1751 = (obj_t) (BgL_nodez00_59);
					BgL_testz00_2048 =
						BGl_iszd2azf3z21zz__objectz00(BgL_obj3195z00_1751,
						BGl_letzd2varzd2zzast_nodez00);
				}
				if (BgL_testz00_2048)
					{
						BgL_nodez00_bglt BgL_nodez00_2051;

						{
							BgL_letzd2varzd2_bglt BgL_auxz00_2052;

							BgL_auxz00_2052 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_59);
							BgL_nodez00_2051 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_auxz00_2052))->BgL_bodyz00);
						}
						BgL_nodez00_59 = BgL_nodez00_2051;
						goto BGl_skipzd2letzd2varz00zzcoerce_convertz00;
					}
				else
					{	/* Coerce/convert.scm 184 */
						return BgL_nodez00_59;
					}
			}
		}
	}



/* make-one-type-conversion */
	BgL_nodez00_bglt
		BGl_makezd2onezd2typezd2conversionzd2zzcoerce_convertz00(obj_t
		BgL_idzd2fromzd2_60, BgL_typez00_bglt BgL_fromz00_61,
		BgL_typez00_bglt BgL_toz00_62, obj_t BgL_checkzd2opzd2_63,
		obj_t BgL_coercezd2opzd2_64, obj_t BgL_nodez00_65)
	{
		AN_OBJECT;
		{	/* Coerce/convert.scm 191 */
			{	/* Coerce/convert.scm 194 */
				obj_t BgL_auxz00_1113;

				BgL_auxz00_1113 =
					BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
					(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 0))));
				{	/* Coerce/convert.scm 194 */
					obj_t BgL_locz00_1114;

					{
						BgL_nodez00_bglt BgL_auxz00_2058;

						BgL_auxz00_2058 = (BgL_nodez00_bglt) (BgL_nodez00_65);
						BgL_locz00_1114 =
							(((BgL_nodez00_bglt) CREF(BgL_auxz00_2058))->BgL_locz00);
					}
					{	/* Coerce/convert.scm 195 */
						BgL_nodez00_bglt BgL_lnodez00_1115;

						{	/* Coerce/convert.scm 202 */
							obj_t BgL_arg3730z00_1126;

							{	/* Coerce/convert.scm 202 */
								obj_t BgL_arg3731z00_1127;

								obj_t BgL_arg3732z00_1128;

								BgL_arg3731z00_1127 = CNST_TABLE_REF(((long) 1));
								{	/* Coerce/convert.scm 203 */
									obj_t BgL_arg3733z00_1129;

									obj_t BgL_arg3734z00_1130;

									{	/* Coerce/convert.scm 203 */
										obj_t BgL_arg3738z00_1134;

										{	/* Coerce/convert.scm 203 */
											obj_t BgL_arg3740z00_1136;

											obj_t BgL_arg3741z00_1137;

											{	/* Coerce/convert.scm 203 */
												obj_t BgL_arg3742z00_1138;

												{	/* Coerce/convert.scm 203 */
													obj_t BgL_arg3745z00_1139;

													BgL_arg3745z00_1139 =
														(((BgL_typez00_bglt) CREF(BgL_fromz00_61))->
														BgL_idz00);
													BgL_arg3742z00_1138 =
														BGl_makezd2typedzd2identz00zzast_identz00
														(BgL_auxz00_1113, BgL_arg3745z00_1139);
												}
												BgL_arg3740z00_1136 =
													BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
													(BgL_arg3742z00_1138);
											}
											{	/* Coerce/convert.scm 202 */
												obj_t BgL_list3746z00_1140;

												BgL_list3746z00_1140 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg3741z00_1137 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BUNSPEC,
													BgL_list3746z00_1140);
											}
											BgL_arg3738z00_1134 =
												MAKE_PAIR(BgL_arg3740z00_1136, BgL_arg3741z00_1137);
										}
										BgL_arg3733z00_1129 = MAKE_PAIR(BgL_arg3738z00_1134, BNIL);
									}
									{	/* Coerce/convert.scm 205 */
										obj_t BgL_arg3747z00_1141;

										obj_t BgL_arg3748z00_1142;

										BgL_arg3747z00_1141 = CNST_TABLE_REF(((long) 9));
										{	/* Coerce/convert.scm 205 */
											obj_t BgL_arg3749z00_1143;

											obj_t BgL_arg3750z00_1144;

											{	/* Coerce/convert.scm 205 */
												obj_t BgL_arg3755z00_1149;

												{	/* Coerce/convert.scm 205 */
													obj_t BgL_list3756z00_1150;

													BgL_list3756z00_1150 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg3755z00_1149 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_auxz00_1113, BgL_list3756z00_1150);
												}
												BgL_arg3749z00_1143 =
													MAKE_PAIR(BgL_checkzd2opzd2_63, BgL_arg3755z00_1149);
											}
											{	/* Coerce/convert.scm 207 */
												obj_t BgL_arg3757z00_1151;

												BgL_arg3757z00_1151 =
													(((BgL_typez00_bglt) CREF(BgL_toz00_62))->BgL_idz00);
												BgL_arg3750z00_1144 =
													BGl_runtimezd2typezd2errorz00zzcoerce_convertz00
													(BgL_locz00_1114, BgL_arg3757z00_1151,
													BgL_auxz00_1113);
											}
											{	/* Coerce/convert.scm 205 */
												obj_t BgL_list3752z00_1146;

												{	/* Coerce/convert.scm 205 */
													obj_t BgL_arg3753z00_1147;

													{	/* Coerce/convert.scm 205 */
														obj_t BgL_arg3754z00_1148;

														BgL_arg3754z00_1148 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg3753z00_1147 =
															MAKE_PAIR(BgL_arg3750z00_1144,
															BgL_arg3754z00_1148);
													}
													BgL_list3752z00_1146 =
														MAKE_PAIR(BgL_auxz00_1113, BgL_arg3753z00_1147);
												}
												BgL_arg3748z00_1142 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg3749z00_1143, BgL_list3752z00_1146);
										}}
										BgL_arg3734z00_1130 =
											MAKE_PAIR(BgL_arg3747z00_1141, BgL_arg3748z00_1142);
									}
									{	/* Coerce/convert.scm 202 */
										obj_t BgL_list3736z00_1132;

										{	/* Coerce/convert.scm 202 */
											obj_t BgL_arg3737z00_1133;

											BgL_arg3737z00_1133 = MAKE_PAIR(BNIL, BNIL);
											BgL_list3736z00_1132 =
												MAKE_PAIR(BgL_arg3734z00_1130, BgL_arg3737z00_1133);
										}
										BgL_arg3732z00_1128 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3733z00_1129, BgL_list3736z00_1132);
								}}
								BgL_arg3730z00_1126 =
									MAKE_PAIR(BgL_arg3731z00_1127, BgL_arg3732z00_1128);
							}
							BgL_lnodez00_1115 =
								BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00
								(BgL_arg3730z00_1126, BgL_locz00_1114);
						}
						{	/* Coerce/convert.scm 196 */

							BGl_lvtypezd2nodez12zc0zzast_lvtypez00(BgL_lnodez00_1115);
							BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00
								(BgL_lnodez00_1115);
							{	/* Coerce/convert.scm 211 */
								obj_t BgL_varz00_1116;

								{	/* Coerce/convert.scm 211 */
									obj_t BgL_pairz00_1758;

									{	/* Coerce/convert.scm 211 */
										obj_t BgL_pairz00_1757;

										{
											BgL_letzd2varzd2_bglt BgL_auxz00_2087;

											BgL_auxz00_2087 =
												(BgL_letzd2varzd2_bglt) (BgL_lnodez00_1115);
											BgL_pairz00_1757 =
												(((BgL_letzd2varzd2_bglt) CREF(BgL_auxz00_2087))->
												BgL_bindingsz00);
										}
										BgL_pairz00_1758 = CAR(BgL_pairz00_1757);
									}
									BgL_varz00_1116 = CAR(BgL_pairz00_1758);
								}
								{	/* Coerce/convert.scm 211 */
									obj_t BgL_coercezd2appzd2_1117;

									{	/* Coerce/convert.scm 213 */
										BgL_varz00_bglt BgL_arg3727z00_1123;

										BgL_arg3727z00_1123 =
											BGl_makezd2varzd2zzast_nodez00(BgL_locz00_1114,
											BgL_fromz00_61, (BgL_variablez00_bglt) (BgL_varz00_1116));
										BgL_coercezd2appzd2_1117 =
											BGl_dozd2convertzd2zzcoerce_convertz00
											(BgL_coercezd2opzd2_64, (obj_t) (BgL_arg3727z00_1123),
											BgL_fromz00_61);
									}
									{	/* Coerce/convert.scm 212 */
										BgL_nodez00_bglt BgL_condnz00_1118;

										BgL_condnz00_1118 =
											BGl_skipzd2letzd2varz00zzcoerce_convertz00
											(BgL_lnodez00_1115);
										{	/* Coerce/convert.scm 218 */

											{
												BgL_variablez00_bglt BgL_auxz00_2097;

												BgL_auxz00_2097 =
													(BgL_variablez00_bglt) (BgL_varz00_1116);
												((((BgL_variablez00_bglt) CREF(BgL_auxz00_2097))->
														BgL_typez00) =
													((BgL_typez00_bglt) BgL_fromz00_61), BUNSPEC);
											}
											{	/* Coerce/convert.scm 222 */
												obj_t BgL_arg3723z00_1119;

												{	/* Coerce/convert.scm 222 */
													obj_t BgL_pairz00_1762;

													{
														BgL_letzd2varzd2_bglt BgL_auxz00_2100;

														BgL_auxz00_2100 =
															(BgL_letzd2varzd2_bglt) (BgL_lnodez00_1115);
														BgL_pairz00_1762 =
															(((BgL_letzd2varzd2_bglt) CREF(BgL_auxz00_2100))->
															BgL_bindingsz00);
													}
													BgL_arg3723z00_1119 = CAR(BgL_pairz00_1762);
												}
												SET_CDR(BgL_arg3723z00_1119, BgL_nodez00_65);
											}
											{
												BgL_nodez00_bglt BgL_auxz00_2107;

												BgL_conditionalz00_bglt BgL_auxz00_2105;

												BgL_auxz00_2107 =
													(BgL_nodez00_bglt) (BgL_coercezd2appzd2_1117);
												BgL_auxz00_2105 =
													(BgL_conditionalz00_bglt) (BgL_condnz00_1118);
												((((BgL_conditionalz00_bglt) CREF(BgL_auxz00_2105))->
														BgL_truez00) =
													((BgL_nodez00_bglt) BgL_auxz00_2107), BUNSPEC);
											}
											{	/* Coerce/convert.scm 225 */
												BgL_nodez00_bglt BgL_arg3725z00_1121;

												{	/* Coerce/convert.scm 225 */
													BgL_nodez00_bglt BgL_arg3726z00_1122;

													{
														BgL_conditionalz00_bglt BgL_auxz00_2110;

														BgL_auxz00_2110 =
															(BgL_conditionalz00_bglt) (BgL_condnz00_1118);
														BgL_arg3726z00_1122 =
															(((BgL_conditionalz00_bglt)
																CREF(BgL_auxz00_2110))->BgL_falsez00);
													}
													BgL_arg3725z00_1121 =
														BGl_coercez12z12zzcoerce_coercez00
														(BgL_arg3726z00_1122, BUNSPEC, BgL_fromz00_61,
														((bool_t) 0));
												}
												{
													BgL_conditionalz00_bglt BgL_auxz00_2114;

													BgL_auxz00_2114 =
														(BgL_conditionalz00_bglt) (BgL_condnz00_1118);
													((((BgL_conditionalz00_bglt) CREF(BgL_auxz00_2114))->
															BgL_falsez00) =
														((BgL_nodez00_bglt) BgL_arg3725z00_1121), BUNSPEC);
											}}
											return BgL_lnodez00_1115;
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



/* make-one-class-conversion */
	obj_t BGl_makezd2onezd2classzd2conversionzd2zzcoerce_convertz00(obj_t
		BgL_idzd2fromzd2_66, BgL_tclassz00_bglt BgL_fromz00_67,
		BgL_typez00_bglt BgL_toz00_68, obj_t BgL_checkzd2opzd2_69,
		obj_t BgL_coercezd2opzd2_70, obj_t BgL_nodez00_71)
	{
		AN_OBJECT;
		{	/* Coerce/convert.scm 234 */
			{	/* Coerce/convert.scm 235 */
				bool_t BgL_testz00_2117;

				{	/* Coerce/convert.scm 235 */
					bool_t BgL_testz00_2118;

					{	/* Coerce/convert.scm 235 */
						obj_t BgL_obj3387z00_1770;

						BgL_obj3387z00_1770 = (obj_t) (BgL_toz00_68);
						BgL_testz00_2118 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj3387z00_1770,
							BGl_tclassz00zzobject_classz00);
					}
					if (BgL_testz00_2118)
						{	/* Coerce/convert.scm 235 */
							BgL_testz00_2117 =
								BGl_typezd2subclasszf3z21zzobject_classz00(
								(BgL_typez00_bglt) (BgL_fromz00_67), BgL_toz00_68);
						}
					else
						{	/* Coerce/convert.scm 235 */
							BgL_testz00_2117 = ((bool_t) 0);
						}
				}
				if (BgL_testz00_2117)
					{	/* Coerce/convert.scm 235 */
						return
							BGl_dozd2convertzd2zzcoerce_convertz00(BgL_coercezd2opzd2_70,
							BgL_nodez00_71, (BgL_typez00_bglt) (BgL_fromz00_67));
					}
				else
					{	/* Coerce/convert.scm 237 */
						obj_t BgL_auxz00_1154;

						BgL_auxz00_1154 =
							BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 0)));
						{	/* Coerce/convert.scm 237 */
							obj_t BgL_aux2z00_1155;

							BgL_aux2z00_1155 =
								BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 10)));
							{	/* Coerce/convert.scm 238 */
								obj_t BgL_locz00_1156;

								{
									BgL_nodez00_bglt BgL_auxz00_2129;

									BgL_auxz00_2129 = (BgL_nodez00_bglt) (BgL_nodez00_71);
									BgL_locz00_1156 =
										(((BgL_nodez00_bglt) CREF(BgL_auxz00_2129))->BgL_locz00);
								}
								{	/* Coerce/convert.scm 239 */
									BgL_nodez00_bglt BgL_lnodez00_1157;

									{	/* Coerce/convert.scm 241 */
										obj_t BgL_arg3771z00_1173;

										{	/* Coerce/convert.scm 241 */
											obj_t BgL_arg3772z00_1174;

											obj_t BgL_arg3773z00_1175;

											BgL_arg3772z00_1174 = CNST_TABLE_REF(((long) 1));
											{	/* Coerce/convert.scm 242 */
												obj_t BgL_arg3774z00_1176;

												obj_t BgL_arg3775z00_1177;

												{	/* Coerce/convert.scm 242 */
													obj_t BgL_arg3779z00_1181;

													{	/* Coerce/convert.scm 242 */
														obj_t BgL_arg3781z00_1183;

														obj_t BgL_arg3782z00_1184;

														{	/* Coerce/convert.scm 242 */
															obj_t BgL_arg3783z00_1185;

															{	/* Coerce/convert.scm 242 */
																obj_t BgL_arg3784z00_1186;

																{	/* Coerce/convert.scm 242 */
																	obj_t BgL_arg3785z00_1187;

																	obj_t BgL_arg3786z00_1188;

																	{	/* Coerce/convert.scm 242 */
																		obj_t BgL_res3903z00_1774;

																		{	/* Coerce/convert.scm 242 */
																			obj_t BgL_symbolz00_1772;

																			BgL_symbolz00_1772 = BgL_auxz00_1154;
																			{	/* Coerce/convert.scm 242 */
																				obj_t BgL_arg2063z00_1773;

																				BgL_arg2063z00_1773 =
																					SYMBOL_TO_STRING(BgL_symbolz00_1772);
																				BgL_res3903z00_1774 =
																					BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																					(BgL_arg2063z00_1773);
																		}}
																		BgL_arg3785z00_1187 = BgL_res3903z00_1774;
																	}
																	{	/* Coerce/convert.scm 242 */
																		obj_t BgL_res3904z00_1777;

																		{	/* Coerce/convert.scm 242 */
																			obj_t BgL_symbolz00_1775;

																			BgL_symbolz00_1775 =
																				CNST_TABLE_REF(((long) 2));
																			{	/* Coerce/convert.scm 242 */
																				obj_t BgL_arg2063z00_1776;

																				BgL_arg2063z00_1776 =
																					SYMBOL_TO_STRING(BgL_symbolz00_1775);
																				BgL_res3904z00_1777 =
																					BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																					(BgL_arg2063z00_1776);
																		}}
																		BgL_arg3786z00_1188 = BgL_res3904z00_1777;
																	}
																	{	/* Coerce/convert.scm 242 */
																		obj_t BgL_list3787z00_1189;

																		{	/* Coerce/convert.scm 242 */
																			obj_t BgL_arg3788z00_1190;

																			BgL_arg3788z00_1190 =
																				MAKE_PAIR(BgL_arg3786z00_1188, BNIL);
																			BgL_list3787z00_1189 =
																				MAKE_PAIR(BgL_arg3785z00_1187,
																				BgL_arg3788z00_1190);
																		}
																		BgL_arg3784z00_1186 =
																			BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																			(BgL_list3787z00_1189);
																}}
																BgL_arg3783z00_1185 =
																	string_to_symbol(BSTRING_TO_STRING
																	(BgL_arg3784z00_1186));
															}
															BgL_arg3781z00_1183 =
																BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																(BgL_arg3783z00_1185);
														}
														{	/* Coerce/convert.scm 241 */
															obj_t BgL_list3789z00_1191;

															BgL_list3789z00_1191 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg3782z00_1184 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BUNSPEC, BgL_list3789z00_1191);
														}
														BgL_arg3779z00_1181 =
															MAKE_PAIR(BgL_arg3781z00_1183,
															BgL_arg3782z00_1184);
													}
													BgL_arg3774z00_1176 =
														MAKE_PAIR(BgL_arg3779z00_1181, BNIL);
												}
												{	/* Coerce/convert.scm 243 */
													obj_t BgL_arg3790z00_1192;

													obj_t BgL_arg3791z00_1193;

													BgL_arg3790z00_1192 = CNST_TABLE_REF(((long) 1));
													{	/* Coerce/convert.scm 244 */
														obj_t BgL_arg3792z00_1194;

														obj_t BgL_arg3793z00_1195;

														{	/* Coerce/convert.scm 244 */
															obj_t BgL_arg3797z00_1199;

															{	/* Coerce/convert.scm 244 */
																obj_t BgL_arg3799z00_1201;

																obj_t BgL_arg3800z00_1202;

																{	/* Coerce/convert.scm 244 */
																	obj_t BgL_arg3801z00_1203;

																	{	/* Coerce/convert.scm 244 */
																		obj_t BgL_arg3803z00_1204;

																		{	/* Coerce/convert.scm 244 */
																			obj_t BgL_arg3804z00_1205;

																			obj_t BgL_arg3805z00_1206;

																			{	/* Coerce/convert.scm 244 */
																				obj_t BgL_res3905z00_1781;

																				{	/* Coerce/convert.scm 244 */
																					obj_t BgL_symbolz00_1779;

																					BgL_symbolz00_1779 = BgL_aux2z00_1155;
																					{	/* Coerce/convert.scm 244 */
																						obj_t BgL_arg2063z00_1780;

																						BgL_arg2063z00_1780 =
																							SYMBOL_TO_STRING
																							(BgL_symbolz00_1779);
																						BgL_res3905z00_1781 =
																							BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																							(BgL_arg2063z00_1780);
																				}}
																				BgL_arg3804z00_1205 =
																					BgL_res3905z00_1781;
																			}
																			{	/* Coerce/convert.scm 244 */
																				obj_t BgL_res3906z00_1784;

																				{	/* Coerce/convert.scm 244 */
																					obj_t BgL_symbolz00_1782;

																					BgL_symbolz00_1782 =
																						CNST_TABLE_REF(((long) 2));
																					{	/* Coerce/convert.scm 244 */
																						obj_t BgL_arg2063z00_1783;

																						BgL_arg2063z00_1783 =
																							SYMBOL_TO_STRING
																							(BgL_symbolz00_1782);
																						BgL_res3906z00_1784 =
																							BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																							(BgL_arg2063z00_1783);
																				}}
																				BgL_arg3805z00_1206 =
																					BgL_res3906z00_1784;
																			}
																			{	/* Coerce/convert.scm 244 */
																				obj_t BgL_list3806z00_1207;

																				{	/* Coerce/convert.scm 244 */
																					obj_t BgL_arg3807z00_1208;

																					BgL_arg3807z00_1208 =
																						MAKE_PAIR(BgL_arg3805z00_1206,
																						BNIL);
																					BgL_list3806z00_1207 =
																						MAKE_PAIR(BgL_arg3804z00_1205,
																						BgL_arg3807z00_1208);
																				}
																				BgL_arg3803z00_1204 =
																					BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																					(BgL_list3806z00_1207);
																		}}
																		BgL_arg3801z00_1203 =
																			string_to_symbol(BSTRING_TO_STRING
																			(BgL_arg3803z00_1204));
																	}
																	BgL_arg3799z00_1201 =
																		BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																		(BgL_arg3801z00_1203);
																}
																{	/* Coerce/convert.scm 243 */
																	obj_t BgL_list3808z00_1209;

																	BgL_list3808z00_1209 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg3800z00_1202 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BUNSPEC, BgL_list3808z00_1209);
																}
																BgL_arg3797z00_1199 =
																	MAKE_PAIR(BgL_arg3799z00_1201,
																	BgL_arg3800z00_1202);
															}
															BgL_arg3792z00_1194 =
																MAKE_PAIR(BgL_arg3797z00_1199, BNIL);
														}
														{	/* Coerce/convert.scm 245 */
															obj_t BgL_arg3809z00_1210;

															obj_t BgL_arg3810z00_1211;

															BgL_arg3809z00_1210 = CNST_TABLE_REF(((long) 9));
															{	/* Coerce/convert.scm 245 */
																obj_t BgL_arg3811z00_1212;

																obj_t BgL_arg3812z00_1213;

																{	/* Coerce/convert.scm 245 */
																	obj_t BgL_arg3817z00_1218;

																	{	/* Coerce/convert.scm 245 */
																		obj_t BgL_list3818z00_1219;

																		BgL_list3818z00_1219 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg3817z00_1218 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_aux2z00_1155, BgL_list3818z00_1219);
																	}
																	BgL_arg3811z00_1212 =
																		MAKE_PAIR(BgL_checkzd2opzd2_69,
																		BgL_arg3817z00_1218);
																}
																{	/* Coerce/convert.scm 247 */
																	obj_t BgL_arg3819z00_1220;

																	BgL_arg3819z00_1220 =
																		(((BgL_typez00_bglt) CREF(BgL_toz00_68))->
																		BgL_idz00);
																	BgL_arg3812z00_1213 =
																		BGl_runtimezd2typezd2errorz00zzcoerce_convertz00
																		(BgL_locz00_1156, BgL_arg3819z00_1220,
																		BgL_auxz00_1154);
																}
																{	/* Coerce/convert.scm 245 */
																	obj_t BgL_list3814z00_1215;

																	{	/* Coerce/convert.scm 245 */
																		obj_t BgL_arg3815z00_1216;

																		{	/* Coerce/convert.scm 245 */
																			obj_t BgL_arg3816z00_1217;

																			BgL_arg3816z00_1217 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3815z00_1216 =
																				MAKE_PAIR(BgL_arg3812z00_1213,
																				BgL_arg3816z00_1217);
																		}
																		BgL_list3814z00_1215 =
																			MAKE_PAIR(BgL_auxz00_1154,
																			BgL_arg3815z00_1216);
																	}
																	BgL_arg3810z00_1211 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg3811z00_1212, BgL_list3814z00_1215);
															}}
															BgL_arg3793z00_1195 =
																MAKE_PAIR(BgL_arg3809z00_1210,
																BgL_arg3810z00_1211);
														}
														{	/* Coerce/convert.scm 243 */
															obj_t BgL_list3795z00_1197;

															{	/* Coerce/convert.scm 243 */
																obj_t BgL_arg3796z00_1198;

																BgL_arg3796z00_1198 = MAKE_PAIR(BNIL, BNIL);
																BgL_list3795z00_1197 =
																	MAKE_PAIR(BgL_arg3793z00_1195,
																	BgL_arg3796z00_1198);
															}
															BgL_arg3791z00_1193 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg3792z00_1194, BgL_list3795z00_1197);
													}}
													BgL_arg3775z00_1177 =
														MAKE_PAIR(BgL_arg3790z00_1192, BgL_arg3791z00_1193);
												}
												{	/* Coerce/convert.scm 241 */
													obj_t BgL_list3777z00_1179;

													{	/* Coerce/convert.scm 241 */
														obj_t BgL_arg3778z00_1180;

														BgL_arg3778z00_1180 = MAKE_PAIR(BNIL, BNIL);
														BgL_list3777z00_1179 =
															MAKE_PAIR(BgL_arg3775z00_1177,
															BgL_arg3778z00_1180);
													}
													BgL_arg3773z00_1175 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg3774z00_1176, BgL_list3777z00_1179);
											}}
											BgL_arg3771z00_1173 =
												MAKE_PAIR(BgL_arg3772z00_1174, BgL_arg3773z00_1175);
										}
										BgL_lnodez00_1157 =
											BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00
											(BgL_arg3771z00_1173, BgL_locz00_1156);
									}
									{	/* Coerce/convert.scm 240 */

										BGl_lvtypezd2nodez12zc0zzast_lvtypez00(BgL_lnodez00_1157);
										BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00
											(BgL_lnodez00_1157);
										{	/* Coerce/convert.scm 251 */
											obj_t BgL_varz00_1158;

											{	/* Coerce/convert.scm 251 */
												obj_t BgL_pairz00_1789;

												{	/* Coerce/convert.scm 251 */
													obj_t BgL_pairz00_1788;

													{
														BgL_letzd2varzd2_bglt BgL_auxz00_2186;

														BgL_auxz00_2186 =
															(BgL_letzd2varzd2_bglt) (BgL_lnodez00_1157);
														BgL_pairz00_1788 =
															(((BgL_letzd2varzd2_bglt) CREF(BgL_auxz00_2186))->
															BgL_bindingsz00);
													}
													BgL_pairz00_1789 = CAR(BgL_pairz00_1788);
												}
												BgL_varz00_1158 = CAR(BgL_pairz00_1789);
											}
											{	/* Coerce/convert.scm 251 */
												obj_t BgL_coercezd2appzd2_1159;

												{	/* Coerce/convert.scm 253 */
													BgL_varz00_bglt BgL_arg3768z00_1170;

													BgL_arg3768z00_1170 =
														BGl_makezd2varzd2zzast_nodez00(BgL_locz00_1156,
														(BgL_typez00_bglt) (BgL_fromz00_67),
														(BgL_variablez00_bglt) (BgL_varz00_1158));
													BgL_coercezd2appzd2_1159 =
														BGl_dozd2convertzd2zzcoerce_convertz00
														(BgL_coercezd2opzd2_70,
														(obj_t) (BgL_arg3768z00_1170),
														(BgL_typez00_bglt) (BgL_fromz00_67));
												}
												{	/* Coerce/convert.scm 252 */
													BgL_nodez00_bglt BgL_condnz00_1160;

													BgL_condnz00_1160 =
														BGl_skipzd2letzd2varz00zzcoerce_convertz00
														(BgL_lnodez00_1157);
													{	/* Coerce/convert.scm 258 */

														{
															BgL_typez00_bglt BgL_auxz00_2200;

															BgL_variablez00_bglt BgL_auxz00_2198;

															BgL_auxz00_2200 =
																(BgL_typez00_bglt) (BgL_fromz00_67);
															BgL_auxz00_2198 =
																(BgL_variablez00_bglt) (BgL_varz00_1158);
															((((BgL_variablez00_bglt) CREF(BgL_auxz00_2198))->
																	BgL_typez00) =
																((BgL_typez00_bglt) BgL_auxz00_2200), BUNSPEC);
														}
														{	/* Coerce/convert.scm 262 */
															obj_t BgL_arg3760z00_1161;

															{	/* Coerce/convert.scm 262 */
																obj_t BgL_pairz00_1793;

																{
																	BgL_letzd2varzd2_bglt BgL_auxz00_2203;

																	BgL_auxz00_2203 =
																		(BgL_letzd2varzd2_bglt) (BgL_lnodez00_1157);
																	BgL_pairz00_1793 =
																		(((BgL_letzd2varzd2_bglt)
																			CREF(BgL_auxz00_2203))->BgL_bindingsz00);
																}
																BgL_arg3760z00_1161 = CAR(BgL_pairz00_1793);
															}
															SET_CDR(BgL_arg3760z00_1161, BgL_nodez00_71);
														}
														{	/* Coerce/convert.scm 263 */
															obj_t BgL_binding2z00_1163;

															{	/* Coerce/convert.scm 263 */
																obj_t BgL_pairz00_1798;

																{	/* Coerce/convert.scm 263 */
																	BgL_letzd2varzd2_bglt BgL_obj3162z00_1797;

																	{	/* Coerce/convert.scm 263 */
																		BgL_letzd2varzd2_bglt BgL_obj3165z00_1796;

																		BgL_obj3165z00_1796 =
																			(BgL_letzd2varzd2_bglt)
																			(BgL_lnodez00_1157);
																		BgL_obj3162z00_1797 =
																			(BgL_letzd2varzd2_bglt) (((
																					(BgL_letzd2varzd2_bglt)
																					CREF(BgL_obj3165z00_1796))->
																				BgL_bodyz00));
																	}
																	BgL_pairz00_1798 =
																		(((BgL_letzd2varzd2_bglt)
																			CREF(BgL_obj3162z00_1797))->
																		BgL_bindingsz00);
																}
																BgL_binding2z00_1163 = CAR(BgL_pairz00_1798);
															}
															{	/* Coerce/convert.scm 267 */
																BgL_castz00_bglt BgL_arg3762z00_1164;

																{	/* Coerce/convert.scm 267 */
																	BgL_varz00_bglt BgL_arg3763z00_1165;

																	BgL_arg3763z00_1165 =
																		BGl_makezd2varzd2zzast_nodez00
																		(BgL_locz00_1156,
																		(BgL_typez00_bglt) (BgL_fromz00_67),
																		(BgL_variablez00_bglt) (BgL_varz00_1158));
																	BgL_arg3762z00_1164 =
																		BGl_makezd2castzd2zzast_nodez00
																		(BgL_locz00_1156,
																		(BgL_typez00_bglt)
																		(BGl_za2objza2z00zztype_cachez00),
																		(BgL_nodez00_bglt) (BgL_arg3763z00_1165));
																}
																{	/* Coerce/convert.scm 264 */
																	obj_t BgL_auxz00_2219;

																	BgL_auxz00_2219 =
																		(obj_t) (BgL_arg3762z00_1164);
																	SET_CDR(BgL_binding2z00_1163,
																		BgL_auxz00_2219);
														}}}
														{
															BgL_nodez00_bglt BgL_auxz00_2224;

															BgL_conditionalz00_bglt BgL_auxz00_2222;

															BgL_auxz00_2224 =
																(BgL_nodez00_bglt) (BgL_coercezd2appzd2_1159);
															BgL_auxz00_2222 =
																(BgL_conditionalz00_bglt) (BgL_condnz00_1160);
															((((BgL_conditionalz00_bglt)
																		CREF(BgL_auxz00_2222))->BgL_truez00) =
																((BgL_nodez00_bglt) BgL_auxz00_2224), BUNSPEC);
														}
														{	/* Coerce/convert.scm 273 */
															BgL_nodez00_bglt BgL_arg3766z00_1168;

															{	/* Coerce/convert.scm 273 */
																BgL_nodez00_bglt BgL_arg3767z00_1169;

																{
																	BgL_conditionalz00_bglt BgL_auxz00_2227;

																	BgL_auxz00_2227 =
																		(BgL_conditionalz00_bglt)
																		(BgL_condnz00_1160);
																	BgL_arg3767z00_1169 =
																		(((BgL_conditionalz00_bglt)
																			CREF(BgL_auxz00_2227))->BgL_falsez00);
																}
																BgL_arg3766z00_1168 =
																	BGl_coercez12z12zzcoerce_coercez00
																	(BgL_arg3767z00_1169, BUNSPEC,
																	(BgL_typez00_bglt) (BgL_fromz00_67),
																	((bool_t) 0));
															}
															{
																BgL_conditionalz00_bglt BgL_auxz00_2232;

																BgL_auxz00_2232 =
																	(BgL_conditionalz00_bglt) (BgL_condnz00_1160);
																((((BgL_conditionalz00_bglt)
																			CREF(BgL_auxz00_2232))->BgL_falsez00) =
																	((BgL_nodez00_bglt) BgL_arg3766z00_1168),
																	BUNSPEC);
														}}
														return (obj_t) (BgL_lnodez00_1157);
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



/* do-convert */
	obj_t BGl_dozd2convertzd2zzcoerce_convertz00(obj_t BgL_coercezd2opzd2_72,
		obj_t BgL_nodez00_73, BgL_typez00_bglt BgL_fromz00_74)
	{
		AN_OBJECT;
		{	/* Coerce/convert.scm 282 */
			if (NULLP(BgL_coercezd2opzd2_72))
				{	/* Coerce/convert.scm 285 */
					return BgL_nodez00_73;
				}
			else
				{	/* Coerce/convert.scm 287 */
					BgL_nodez00_bglt BgL_nnodez00_1223;

					{	/* Coerce/convert.scm 287 */
						obj_t BgL_arg3839z00_1242;

						obj_t BgL_arg3840z00_1243;

						{	/* Coerce/convert.scm 287 */
							obj_t BgL_arg3841z00_1244;

							{	/* Coerce/convert.scm 287 */
								obj_t BgL_list3842z00_1245;

								BgL_list3842z00_1245 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg3841z00_1244 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BUNSPEC,
									BgL_list3842z00_1245);
							}
							BgL_arg3839z00_1242 =
								MAKE_PAIR(BgL_coercezd2opzd2_72, BgL_arg3841z00_1244);
						}
						{
							BgL_nodez00_bglt BgL_auxz00_2241;

							BgL_auxz00_2241 = (BgL_nodez00_bglt) (BgL_nodez00_73);
							BgL_arg3840z00_1243 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_2241))->BgL_locz00);
						}
						BgL_nnodez00_1223 =
							BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00
							(BgL_arg3839z00_1242, BgL_arg3840z00_1243);
					}
					{	/* Coerce/convert.scm 287 */

						{
							BgL_nodez00_bglt BgL_auxz00_2245;

							BgL_auxz00_2245 = (BgL_nodez00_bglt) (BgL_nodez00_73);
							((((BgL_nodez00_bglt) CREF(BgL_auxz00_2245))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_fromz00_74), BUNSPEC);
						}
						BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00
							(BgL_nnodez00_1223);
						{	/* Coerce/convert.scm 301 */
							bool_t BgL_testz00_2249;

							{	/* Coerce/convert.scm 301 */
								obj_t BgL_obj2366z00_1810;

								BgL_obj2366z00_1810 = (obj_t) (BgL_nnodez00_1223);
								BgL_testz00_2249 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj2366z00_1810,
									BGl_appz00zzast_nodez00);
							}
							if (BgL_testz00_2249)
								{	/* Coerce/convert.scm 301 */
									{	/* Coerce/convert.scm 302 */
										obj_t BgL_arg3823z00_1225;

										{	/* Coerce/convert.scm 302 */
											obj_t BgL_list3824z00_1226;

											BgL_list3824z00_1226 = MAKE_PAIR(BgL_nodez00_73, BNIL);
											BgL_arg3823z00_1225 = BgL_list3824z00_1226;
										}
										{
											BgL_appz00_bglt BgL_auxz00_2253;

											BgL_auxz00_2253 = (BgL_appz00_bglt) (BgL_nnodez00_1223);
											((((BgL_appz00_bglt) CREF(BgL_auxz00_2253))->
													BgL_argsz00) =
												((obj_t) BgL_arg3823z00_1225), BUNSPEC);
										}
									}
									return (obj_t) ((BgL_appz00_bglt) (BgL_nnodez00_1223));
								}
							else
								{	/* Coerce/convert.scm 304 */
									bool_t BgL_testz00_2258;

									{	/* Coerce/convert.scm 304 */
										obj_t BgL_obj3195z00_1815;

										BgL_obj3195z00_1815 = (obj_t) (BgL_nnodez00_1223);
										BgL_testz00_2258 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj3195z00_1815,
											BGl_letzd2varzd2zzast_nodez00);
									}
									if (BgL_testz00_2258)
										{	/* Coerce/convert.scm 305 */
											obj_t BgL_bdgsz00_1228;

											{
												BgL_letzd2varzd2_bglt BgL_auxz00_2261;

												BgL_auxz00_2261 =
													(BgL_letzd2varzd2_bglt) (BgL_nnodez00_1223);
												BgL_bdgsz00_1228 =
													(((BgL_letzd2varzd2_bglt) CREF(BgL_auxz00_2261))->
													BgL_bindingsz00);
											}
											{	/* Coerce/convert.scm 306 */
												bool_t BgL_testz00_2264;

												if (NULLP(BgL_bdgsz00_1228))
													{	/* Coerce/convert.scm 306 */
														BgL_testz00_2264 = ((bool_t) 1);
													}
												else
													{	/* Coerce/convert.scm 306 */
														if (NULLP(CDR(BgL_bdgsz00_1228)))
															{	/* Coerce/convert.scm 306 */
																BgL_testz00_2264 = ((bool_t) 0);
															}
														else
															{	/* Coerce/convert.scm 306 */
																BgL_testz00_2264 = ((bool_t) 1);
															}
													}
												if (BgL_testz00_2264)
													{	/* Coerce/convert.scm 306 */
														return
															BGl_internalzd2errorzd2zztools_errorz00
															(BGl_string3911z00zzcoerce_convertz00,
															BGl_string3912z00zzcoerce_convertz00,
															BGl_shapez00zztools_shapez00
															(BgL_coercezd2opzd2_72));
													}
												else
													{	/* Coerce/convert.scm 306 */
														{	/* Coerce/convert.scm 311 */
															obj_t BgL_arg3830z00_1233;

															BgL_arg3830z00_1233 = CAR(CAR(BgL_bdgsz00_1228));
															{
																BgL_variablez00_bglt BgL_auxz00_2274;

																BgL_auxz00_2274 =
																	(BgL_variablez00_bglt) (BgL_arg3830z00_1233);
																((((BgL_variablez00_bglt)
																			CREF(BgL_auxz00_2274))->BgL_typez00) =
																	((BgL_typez00_bglt) BgL_fromz00_74), BUNSPEC);
															}
														}
														{	/* Coerce/convert.scm 312 */
															obj_t BgL_auxz00_2277;

															BgL_auxz00_2277 = CAR(BgL_bdgsz00_1228);
															SET_CDR(BgL_auxz00_2277, BgL_nodez00_73);
														}
														return
															(obj_t) (
															(BgL_letzd2varzd2_bglt) (BgL_nnodez00_1223));
													}
											}
										}
									else
										{	/* Coerce/convert.scm 304 */
											return
												BGl_internalzd2errorzd2zztools_errorz00
												(BGl_string3911z00zzcoerce_convertz00,
												BGl_string3912z00zzcoerce_convertz00,
												BGl_shapez00zztools_shapez00(BgL_coercezd2opzd2_72));
										}
								}
						}
					}
				}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcoerce_convertz00()
	{
		AN_OBJECT;
		{	/* Coerce/convert.scm 16 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcoerce_convertz00()
	{
		AN_OBJECT;
		{	/* Coerce/convert.scm 16 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcoerce_convertz00()
	{
		AN_OBJECT;
		{	/* Coerce/convert.scm 16 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3913z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3913z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string3913z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3913z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string3913z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3913z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string3913z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3913z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3913z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zztype_coercionz00(((long) 451733024),
				BSTRING_TO_STRING(BGl_string3913z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string3913z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string3913z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3913z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3913z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string3913z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 498901618),
				BSTRING_TO_STRING(BGl_string3913z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string3913z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 387636515),
				BSTRING_TO_STRING(BGl_string3913z00zzcoerce_convertz00));
			return
				BGl_modulezd2initializa7ationz75zzeffect_spreadz00(((long) 476444243),
				BSTRING_TO_STRING(BGl_string3913z00zzcoerce_convertz00));
		}
	}

#ifdef __cplusplus
}
#endif
