/*===========================================================================*/
/*   (Integrate/loc2glo.scm)                                                 */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Integrate/loc2glo.scm)*/
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

	typedef struct BgL_funz00_bgl
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
	}             *BgL_funz00_bglt;

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

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_svarzf2iinfozf2_bgl
	{
		obj_t BgL_fzd2markzd2;
		obj_t BgL_uzd2markzd2;
		bool_t BgL_kapturedzf3zf3;
		bool_t BgL_celledzf3zf3;
	}                      *BgL_svarzf2iinfozf2_bglt;

	typedef struct BgL_sfunzf2iinfozf2_bgl
	{
		obj_t BgL_ownerz00;
		obj_t BgL_freez00;
		obj_t BgL_boundz00;
		obj_t BgL_cfromz00;
		obj_t BgL_ctoz00;
		obj_t BgL_kz00;
		obj_t BgL_kza2za2;
		obj_t BgL_uz00;
		obj_t BgL_cnz00;
		obj_t BgL_ctz00;
		obj_t BgL_kontz00;
		bool_t BgL_gzf3zf3;
		obj_t BgL_lz00;
		obj_t BgL_ledz00;
		obj_t BgL_istampz00;
		obj_t BgL_globalz00;
		obj_t BgL_kapturedz00;
		obj_t BgL_tailzd2coercionzd2;
	}                      *BgL_sfunzf2iinfozf2_bglt;


	extern BgL_localz00_bglt BGl_clonezd2localzd2zzast_localz00(BgL_localz00_bglt,
		BgL_valuez00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzintegrate_localzd2ze3globalz31();
	static obj_t BGl_symbolzd2quotezd2zzintegrate_localzd2ze3globalz31 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_localzd2ze3globalz31(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_nodez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_infoz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzintegrate_localzd2ze3globalz31();
	BGL_IMPORT long bgl_list_length(obj_t);
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern BgL_sfunz00_bglt BGl_makezd2sfunzd2zzast_varz00(long, obj_t, obj_t,
		obj_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern BgL_globalz00_bglt
		BGl_defzd2globalzd2sfunzd2nozd2warningz12z12zzast_glozd2defzd2(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__localzd2ze3globalz31zzintegrate_localzd2ze3globalz31(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzintegrate_localzd2ze3globalz31();
	BGL_EXPORTED_DECL obj_t
		BGl_localzd2ze3globalz31zzintegrate_localzd2ze3globalz31(BgL_localz00_bglt);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzintegrate_localzd2ze3globalz31
		= BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_thezd2globalzd2zzintegrate_localzd2ze3globalz31(BgL_localz00_bglt);
	static obj_t BGl_genericzd2initzd2zzintegrate_localzd2ze3globalz31();
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t
		BGl_importedzd2moduleszd2initz00zzintegrate_localzd2ze3globalz31();
	extern obj_t BGl_zb2zd2arityz60zztools_argsz00(obj_t, obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t
		BGl_localzd2idzd2ze3globalzd2idz31zzintegrate_localzd2ze3globalz31
		(BgL_localz00_bglt);
	extern obj_t
		BGl_integratezd2globaliza7ez12z67zzintegrate_nodez00(BgL_nodez00_bglt,
		BgL_variablez00_bglt, obj_t);
	extern bool_t
		BGl_integratezd2celledzf3z21zzintegrate_nodez00(BgL_localz00_bglt);
	extern BgL_svarzf2iinfozf2_bglt
		BGl_makezd2svarzf2Iinfoz20zzintegrate_infoz00(obj_t, obj_t, obj_t, bool_t,
		bool_t);
	static obj_t BGl__thezd2globalzd2zzintegrate_localzd2ze3globalz31(obj_t,
		obj_t);
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	static obj_t
		BGl_libraryzd2moduleszd2initz00zzintegrate_localzd2ze3globalz31();
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzd2ze3globalzd2envze3zzintegrate_localzd2ze3globalz31,
		BgL_bgl__localza7d2za7e3glob3672z00,
		BGl__localzd2ze3globalz31zzintegrate_localzd2ze3globalz31, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_thezd2globalzd2envz00zzintegrate_localzd2ze3globalz31,
		BgL_bgl__theza7d2globalza7d23673z00,
		BGl__thezd2globalzd2zzintegrate_localzd2ze3globalz31, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3667z00zzintegrate_localzd2ze3globalz31,
		BgL_bgl_string3667za700za7za7i3674za7, "'", 1);
	      DEFINE_STRING(BGl_string3668z00zzintegrate_localzd2ze3globalz31,
		BgL_bgl_string3668za700za7za7i3675za7, "integrate_local->global", 23);
	      DEFINE_STRING(BGl_string3669z00zzintegrate_localzd2ze3globalz31,
		BgL_bgl_string3669za700za7za7i3676za7, "now a-integrated-body sfun ", 27);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_localzd2ze3globalz31(long
		BgL_checksumz00_1531, char *BgL_fromz00_1532)
	{
		AN_OBJECT;
		{
			if (CBOOL
				(BGl_requirezd2initializa7ationz75zzintegrate_localzd2ze3globalz31))
				{
					BGl_requirezd2initializa7ationz75zzintegrate_localzd2ze3globalz31 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzintegrate_localzd2ze3globalz31();
					BGl_cnstzd2initzd2zzintegrate_localzd2ze3globalz31();
					BGl_importedzd2moduleszd2initz00zzintegrate_localzd2ze3globalz31();
					BGl_toplevelzd2initzd2zzintegrate_localzd2ze3globalz31();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_localzd2ze3globalz31()
	{
		AN_OBJECT;
		{	/* Integrate/loc2glo.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"integrate_local->global");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"integrate_local->global");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"integrate_local->global");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"integrate_local->global");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzintegrate_localzd2ze3globalz31()
	{
		AN_OBJECT;
		{	/* Integrate/loc2glo.scm 15 */
			{	/* Integrate/loc2glo.scm 15 */
				obj_t BgL_cportz00_1523;

				BgL_cportz00_1523 =
					bgl_open_input_string
					(BGl_string3669z00zzintegrate_localzd2ze3globalz31,
					(int) (((long) 0)));
				{
					long BgL_iz00_1524;

					BgL_iz00_1524 = ((long) 2);
				BgL_loopz00_1525:
					if ((BgL_iz00_1524 == ((long) -1)))
						{	/* Integrate/loc2glo.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Integrate/loc2glo.scm 15 */
							{	/* Integrate/loc2glo.scm 15 */
								obj_t BgL_arg3671z00_1527;

								{	/* Integrate/loc2glo.scm 15 */

									{	/* Integrate/loc2glo.scm 15 */
										obj_t BgL_locationz00_1529;

										BgL_locationz00_1529 = BBOOL(((bool_t) 0));
										{	/* Integrate/loc2glo.scm 15 */

											BgL_arg3671z00_1527 =
												BGl_readz00zz__readerz00(BgL_cportz00_1523,
												BgL_locationz00_1529);
										}
									}
								}
								{	/* Integrate/loc2glo.scm 15 */
									int BgL_auxz00_1550;

									BgL_auxz00_1550 = (int) (BgL_iz00_1524);
									CNST_TABLE_SET(BgL_auxz00_1550, BgL_arg3671z00_1527);
							}}
							{	/* Integrate/loc2glo.scm 15 */
								int BgL_auxz00_1530;

								BgL_auxz00_1530 = (int) ((BgL_iz00_1524 - ((long) 1)));
								{
									long BgL_iz00_1555;

									BgL_iz00_1555 = (long) (BgL_auxz00_1530);
									BgL_iz00_1524 = BgL_iz00_1555;
									goto BgL_loopz00_1525;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzintegrate_localzd2ze3globalz31()
	{
		AN_OBJECT;
		{	/* Integrate/loc2glo.scm 15 */
			return (BGl_symbolzd2quotezd2zzintegrate_localzd2ze3globalz31 =
				string_to_symbol(BSTRING_TO_STRING
					(BGl_string3667z00zzintegrate_localzd2ze3globalz31)), BUNSPEC);
		}
	}



/* local->global */
	BGL_EXPORTED_DEF obj_t
		BGl_localzd2ze3globalz31zzintegrate_localzd2ze3globalz31(BgL_localz00_bglt
		BgL_localz00_1)
	{
		AN_OBJECT;
		{	/* Integrate/loc2glo.scm 35 */
			{	/* Integrate/loc2glo.scm 38 */
				obj_t BgL_globalz00_896;

				BgL_globalz00_896 =
					BGl_thezd2globalzd2zzintegrate_localzd2ze3globalz31(BgL_localz00_1);
				{	/* Integrate/loc2glo.scm 38 */
					obj_t BgL_kapturedz00_897;

					{	/* Integrate/loc2glo.scm 39 */
						BgL_sfunzf2iinfozf2_bglt BgL_obj3467z00_1422;

						{	/* Integrate/loc2glo.scm 39 */
							BgL_variablez00_bglt BgL_obj1632z00_1421;

							BgL_obj1632z00_1421 = (BgL_variablez00_bglt) (BgL_localz00_1);
							BgL_obj3467z00_1422 =
								(BgL_sfunzf2iinfozf2_bglt) (
								(((BgL_variablez00_bglt) CREF(BgL_obj1632z00_1421))->
									BgL_valuez00));
						}
						{
							obj_t BgL_auxz00_1563;

							{	/* Integrate/loc2glo.scm 39 */
								BgL_objectz00_bglt BgL_auxz00_1564;

								BgL_auxz00_1564 = (BgL_objectz00_bglt) (BgL_obj3467z00_1422);
								BgL_auxz00_1563 = BGL_OBJECT_WIDENING(BgL_auxz00_1564);
							}
							BgL_kapturedz00_897 =
								(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_1563))->
								BgL_kapturedz00);
						}
					}
					{	/* Integrate/loc2glo.scm 39 */
						obj_t BgL_addzd2argszd2_898;

						if (NULLP(BgL_kapturedz00_897))
							{	/* Integrate/loc2glo.scm 40 */
								BgL_addzd2argszd2_898 = BNIL;
							}
						else
							{	/* Integrate/loc2glo.scm 40 */
								obj_t BgL_head3529z00_963;

								BgL_head3529z00_963 = MAKE_PAIR(BNIL, BNIL);
								{
									obj_t BgL_l3527z00_965;

									obj_t BgL_tail3530z00_966;

									BgL_l3527z00_965 = BgL_kapturedz00_897;
									BgL_tail3530z00_966 = BgL_head3529z00_963;
								BgL_zc3anonymousza33586ze3z83_967:
									if (NULLP(BgL_l3527z00_965))
										{	/* Integrate/loc2glo.scm 40 */
											BgL_addzd2argszd2_898 = CDR(BgL_head3529z00_963);
										}
									else
										{	/* Integrate/loc2glo.scm 40 */
											obj_t BgL_newtail3531z00_969;

											{	/* Integrate/loc2glo.scm 40 */
												BgL_localz00_bglt BgL_arg3589z00_971;

												{	/* Integrate/loc2glo.scm 40 */
													obj_t BgL_oldz00_973;

													BgL_oldz00_973 = CAR(BgL_l3527z00_965);
													{	/* Integrate/loc2glo.scm 42 */
														BgL_svarzf2iinfozf2_bglt BgL_arg3591z00_974;

														{	/* Integrate/loc2glo.scm 42 */
															BgL_svarzf2iinfozf2_bglt
																BgL_duplicated3522z00_975;
															{	/* Integrate/loc2glo.scm 43 */
																BgL_variablez00_bglt BgL_obj1632z00_1429;

																BgL_obj1632z00_1429 =
																	(BgL_variablez00_bglt) (BgL_oldz00_973);
																BgL_duplicated3522z00_975 =
																	(BgL_svarzf2iinfozf2_bglt) (
																	(((BgL_variablez00_bglt)
																			CREF(BgL_obj1632z00_1429))->
																		BgL_valuez00));
															}
															{	/* Integrate/loc2glo.scm 42 */
																BgL_svarzf2iinfozf2_bglt BgL_new3523z00_976;

																{	/* Integrate/loc2glo.scm 42 */
																	obj_t BgL_arg3592z00_977;

																	obj_t BgL_arg3593z00_978;

																	obj_t BgL_arg3594z00_979;

																	bool_t BgL_arg3595z00_980;

																	bool_t BgL_arg3596z00_981;

																	{
																		BgL_svarz00_bglt BgL_auxz00_1578;

																		BgL_auxz00_1578 =
																			(BgL_svarz00_bglt)
																			(BgL_duplicated3522z00_975);
																		BgL_arg3592z00_977 =
																			(((BgL_svarz00_bglt)
																				CREF(BgL_auxz00_1578))->BgL_locz00);
																	}
																	{
																		obj_t BgL_auxz00_1581;

																		{	/* Integrate/loc2glo.scm 42 */
																			BgL_objectz00_bglt BgL_auxz00_1582;

																			BgL_auxz00_1582 =
																				(BgL_objectz00_bglt)
																				(BgL_duplicated3522z00_975);
																			BgL_auxz00_1581 =
																				BGL_OBJECT_WIDENING(BgL_auxz00_1582);
																		}
																		BgL_arg3593z00_978 =
																			(((BgL_svarzf2iinfozf2_bglt)
																				CREF(BgL_auxz00_1581))->
																			BgL_fzd2markzd2);
																	}
																	{
																		obj_t BgL_auxz00_1586;

																		{	/* Integrate/loc2glo.scm 42 */
																			BgL_objectz00_bglt BgL_auxz00_1587;

																			BgL_auxz00_1587 =
																				(BgL_objectz00_bglt)
																				(BgL_duplicated3522z00_975);
																			BgL_auxz00_1586 =
																				BGL_OBJECT_WIDENING(BgL_auxz00_1587);
																		}
																		BgL_arg3594z00_979 =
																			(((BgL_svarzf2iinfozf2_bglt)
																				CREF(BgL_auxz00_1586))->
																			BgL_uzd2markzd2);
																	}
																	{
																		obj_t BgL_auxz00_1591;

																		{	/* Integrate/loc2glo.scm 42 */
																			BgL_objectz00_bglt BgL_auxz00_1592;

																			BgL_auxz00_1592 =
																				(BgL_objectz00_bglt)
																				(BgL_duplicated3522z00_975);
																			BgL_auxz00_1591 =
																				BGL_OBJECT_WIDENING(BgL_auxz00_1592);
																		}
																		BgL_arg3595z00_980 =
																			(((BgL_svarzf2iinfozf2_bglt)
																				CREF(BgL_auxz00_1591))->
																			BgL_kapturedzf3zf3);
																	}
																	{
																		obj_t BgL_auxz00_1596;

																		{	/* Integrate/loc2glo.scm 42 */
																			BgL_objectz00_bglt BgL_auxz00_1597;

																			BgL_auxz00_1597 =
																				(BgL_objectz00_bglt)
																				(BgL_duplicated3522z00_975);
																			BgL_auxz00_1596 =
																				BGL_OBJECT_WIDENING(BgL_auxz00_1597);
																		}
																		BgL_arg3596z00_981 =
																			(((BgL_svarzf2iinfozf2_bglt)
																				CREF(BgL_auxz00_1596))->
																			BgL_celledzf3zf3);
																	}
																	BgL_new3523z00_976 =
																		BGl_makezd2svarzf2Iinfoz20zzintegrate_infoz00
																		(BgL_arg3592z00_977, BgL_arg3593z00_978,
																		BgL_arg3594z00_979, BgL_arg3595z00_980,
																		BgL_arg3596z00_981);
																}
																{	/* Integrate/loc2glo.scm 42 */

																	BgL_arg3591z00_974 = BgL_new3523z00_976;
																}
															}
														}
														BgL_arg3589z00_971 =
															BGl_clonezd2localzd2zzast_localz00(
															(BgL_localz00_bglt) (BgL_oldz00_973),
															(BgL_valuez00_bglt) (BgL_arg3591z00_974));
													}
												}
												BgL_newtail3531z00_969 =
													MAKE_PAIR((obj_t) (BgL_arg3589z00_971), BNIL);
											}
											SET_CDR(BgL_tail3530z00_966, BgL_newtail3531z00_969);
											{
												obj_t BgL_tail3530z00_1610;

												obj_t BgL_l3527z00_1608;

												BgL_l3527z00_1608 = CDR(BgL_l3527z00_965);
												BgL_tail3530z00_1610 = BgL_newtail3531z00_969;
												BgL_tail3530z00_966 = BgL_tail3530z00_1610;
												BgL_l3527z00_965 = BgL_l3527z00_1608;
												goto BgL_zc3anonymousza33586ze3z83_967;
											}
										}
								}
							}
						{	/* Integrate/loc2glo.scm 40 */
							BgL_valuez00_bglt BgL_oldzd2funzd2_899;

							{
								BgL_variablez00_bglt BgL_auxz00_1611;

								BgL_auxz00_1611 = (BgL_variablez00_bglt) (BgL_localz00_1);
								BgL_oldzd2funzd2_899 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_1611))->
									BgL_valuez00);
							}
							{	/* Integrate/loc2glo.scm 45 */
								BgL_sfunz00_bglt BgL_newzd2funzd2_900;

								{	/* Integrate/loc2glo.scm 46 */
									BgL_sfunz00_bglt BgL_duplicated3524z00_938;

									BgL_duplicated3524z00_938 =
										(BgL_sfunz00_bglt) (BgL_oldzd2funzd2_899);
									{	/* Integrate/loc2glo.scm 47 */
										BgL_sfunz00_bglt BgL_new3525z00_939;

										{	/* Integrate/loc2glo.scm 47 */
											obj_t BgL_arg3564z00_940;

											obj_t BgL_arg3565z00_941;

											obj_t BgL_arg3566z00_942;

											obj_t BgL_arg3567z00_943;

											bool_t BgL_arg3568z00_944;

											obj_t BgL_arg3569z00_945;

											obj_t BgL_arg3570z00_946;

											obj_t BgL_arg3571z00_947;

											obj_t BgL_arg3572z00_948;

											obj_t BgL_arg3573z00_949;

											obj_t BgL_arg3574z00_950;

											obj_t BgL_arg3575z00_951;

											obj_t BgL_arg3576z00_952;

											obj_t BgL_arg3577z00_953;

											obj_t BgL_arg3578z00_954;

											obj_t BgL_arg3579z00_955;

											obj_t BgL_arg3580z00_956;

											{	/* Integrate/loc2glo.scm 47 */
												long BgL_arg3581z00_957;

												long BgL_arg3582z00_958;

												{
													BgL_funz00_bglt BgL_auxz00_1615;

													BgL_auxz00_1615 =
														(BgL_funz00_bglt) (BgL_oldzd2funzd2_899);
													BgL_arg3581z00_957 =
														(((BgL_funz00_bglt) CREF(BgL_auxz00_1615))->
														BgL_arityz00);
												}
												BgL_arg3582z00_958 =
													bgl_list_length(BgL_addzd2argszd2_898);
												BgL_arg3564z00_940 =
													BGl_zb2zd2arityz60zztools_argsz00(BINT
													(BgL_arg3581z00_957), BINT(BgL_arg3582z00_958));
											}
											{
												BgL_funz00_bglt BgL_auxz00_1622;

												BgL_auxz00_1622 =
													(BgL_funz00_bglt) (BgL_duplicated3524z00_938);
												BgL_arg3565z00_941 =
													(((BgL_funz00_bglt) CREF(BgL_auxz00_1622))->
													BgL_sidezd2effectzf3z21);
											}
											{
												BgL_funz00_bglt BgL_auxz00_1625;

												BgL_auxz00_1625 =
													(BgL_funz00_bglt) (BgL_duplicated3524z00_938);
												BgL_arg3566z00_942 =
													(((BgL_funz00_bglt) CREF(BgL_auxz00_1625))->
													BgL_predicatezd2ofzd2);
											}
											{
												BgL_funz00_bglt BgL_auxz00_1628;

												BgL_auxz00_1628 =
													(BgL_funz00_bglt) (BgL_duplicated3524z00_938);
												BgL_arg3567z00_943 =
													(((BgL_funz00_bglt) CREF(BgL_auxz00_1628))->
													BgL_stackzd2allocatorzd2);
											}
											{
												BgL_funz00_bglt BgL_auxz00_1631;

												BgL_auxz00_1631 =
													(BgL_funz00_bglt) (BgL_duplicated3524z00_938);
												BgL_arg3568z00_944 =
													(((BgL_funz00_bglt) CREF(BgL_auxz00_1631))->
													BgL_topzf3zf3);
											}
											{
												BgL_funz00_bglt BgL_auxz00_1634;

												BgL_auxz00_1634 =
													(BgL_funz00_bglt) (BgL_duplicated3524z00_938);
												BgL_arg3569z00_945 =
													(((BgL_funz00_bglt) CREF(BgL_auxz00_1634))->
													BgL_thezd2closurezd2);
											}
											{
												BgL_funz00_bglt BgL_auxz00_1637;

												BgL_auxz00_1637 =
													(BgL_funz00_bglt) (BgL_duplicated3524z00_938);
												BgL_arg3570z00_946 =
													(((BgL_funz00_bglt) CREF(BgL_auxz00_1637))->
													BgL_effectz00);
											}
											BgL_arg3571z00_947 =
												(((BgL_sfunz00_bglt) CREF(BgL_duplicated3524z00_938))->
												BgL_propertyz00);
											BgL_arg3572z00_948 =
												bgl_append2(bgl_reverse(BgL_addzd2argszd2_898),
												(((BgL_sfunz00_bglt) CREF(BgL_duplicated3524z00_938))->
													BgL_argsz00));
											BgL_arg3573z00_949 =
												(((BgL_sfunz00_bglt) CREF(BgL_duplicated3524z00_938))->
												BgL_argszd2namezd2);
											BgL_arg3574z00_950 =
												(((BgL_sfunz00_bglt) CREF(BgL_duplicated3524z00_938))->
												BgL_bodyz00);
											BgL_arg3575z00_951 =
												(((BgL_sfunz00_bglt) CREF(BgL_duplicated3524z00_938))->
												BgL_classz00);
											BgL_arg3576z00_952 =
												(((BgL_sfunz00_bglt) CREF(BgL_duplicated3524z00_938))->
												BgL_dssslzd2keywordszd2);
											BgL_arg3577z00_953 =
												(((BgL_sfunz00_bglt) CREF(BgL_duplicated3524z00_938))->
												BgL_locz00);
											BgL_arg3578z00_954 =
												(((BgL_sfunz00_bglt) CREF(BgL_duplicated3524z00_938))->
												BgL_optionalsz00);
											BgL_arg3579z00_955 =
												(((BgL_sfunz00_bglt) CREF(BgL_duplicated3524z00_938))->
												BgL_keysz00);
											BgL_arg3580z00_956 =
												(((BgL_sfunz00_bglt) CREF(BgL_duplicated3524z00_938))->
												BgL_thezd2closurezd2globalz00);
											BgL_new3525z00_939 =
												BGl_makezd2sfunzd2zzast_varz00((long)
												CINT(BgL_arg3564z00_940), BgL_arg3565z00_941,
												BgL_arg3566z00_942, BgL_arg3567z00_943,
												BgL_arg3568z00_944, BgL_arg3569z00_945,
												BgL_arg3570z00_946, BgL_arg3571z00_947,
												BgL_arg3572z00_948, BgL_arg3573z00_949,
												BgL_arg3574z00_950, BgL_arg3575z00_951,
												BgL_arg3576z00_952, BgL_arg3577z00_953,
												BgL_arg3578z00_954, BgL_arg3579z00_955,
												BgL_arg3580z00_956);
										}
										{	/* Integrate/loc2glo.scm 46 */

											BgL_newzd2funzd2_900 = BgL_new3525z00_939;
								}}}
								{	/* Integrate/loc2glo.scm 46 */

									{	/* Integrate/loc2glo.scm 51 */
										BgL_typez00_bglt BgL_arg3543z00_901;

										{
											BgL_variablez00_bglt BgL_auxz00_1654;

											BgL_auxz00_1654 = (BgL_variablez00_bglt) (BgL_localz00_1);
											BgL_arg3543z00_901 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_1654))->
												BgL_typez00);
										}
										{
											BgL_variablez00_bglt BgL_auxz00_1657;

											BgL_auxz00_1657 =
												(BgL_variablez00_bglt) (BgL_globalz00_896);
											((((BgL_variablez00_bglt) CREF(BgL_auxz00_1657))->
													BgL_typez00) =
												((BgL_typez00_bglt) BgL_arg3543z00_901), BUNSPEC);
									}}
									{	/* Integrate/loc2glo.scm 52 */
										obj_t BgL_g3534z00_902;

										BgL_g3534z00_902 =
											(((BgL_sfunz00_bglt) CREF(BgL_newzd2funzd2_900))->
											BgL_argsz00);
										{
											obj_t BgL_l3532z00_904;

											BgL_l3532z00_904 = BgL_g3534z00_902;
										BgL_zc3anonymousza33544ze3z83_905:
											if (PAIRP(BgL_l3532z00_904))
												{	/* Integrate/loc2glo.scm 55 */
													{	/* Integrate/loc2glo.scm 53 */
														obj_t BgL_lz00_907;

														BgL_lz00_907 = CAR(BgL_l3532z00_904);
														if (BGl_integratezd2celledzf3z21zzintegrate_nodez00(
																(BgL_localz00_bglt) (BgL_lz00_907)))
															{
																BgL_typez00_bglt BgL_auxz00_1669;

																BgL_variablez00_bglt BgL_auxz00_1667;

																BgL_auxz00_1669 =
																	(BgL_typez00_bglt)
																	(BGl_za2objza2z00zztype_cachez00);
																BgL_auxz00_1667 =
																	(BgL_variablez00_bglt) (BgL_lz00_907);
																((((BgL_variablez00_bglt)
																			CREF(BgL_auxz00_1667))->BgL_typez00) =
																	((BgL_typez00_bglt) BgL_auxz00_1669),
																	BUNSPEC);
															}
														else
															{	/* Integrate/loc2glo.scm 53 */
																BFALSE;
															}
													}
													{
														obj_t BgL_l3532z00_1672;

														BgL_l3532z00_1672 = CDR(BgL_l3532z00_904);
														BgL_l3532z00_904 = BgL_l3532z00_1672;
														goto BgL_zc3anonymousza33544ze3z83_905;
													}
												}
											else
												{	/* Integrate/loc2glo.scm 55 */
													((bool_t) 1);
												}
										}
									}
									{	/* Integrate/loc2glo.scm 57 */
										obj_t BgL_arg3548z00_911;

										{	/* Integrate/loc2glo.scm 57 */
											obj_t BgL_arg3549z00_912;

											obj_t BgL_arg3550z00_913;

											{
												BgL_sfunz00_bglt BgL_auxz00_1674;

												BgL_auxz00_1674 =
													(BgL_sfunz00_bglt) (BgL_oldzd2funzd2_899);
												BgL_arg3549z00_912 =
													(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1674))->
													BgL_bodyz00);
											}
											if (NULLP(BgL_kapturedz00_897))
												{	/* Integrate/loc2glo.scm 59 */
													BgL_arg3550z00_913 = BNIL;
												}
											else
												{	/* Integrate/loc2glo.scm 59 */
													obj_t BgL_head3537z00_917;

													{	/* Integrate/loc2glo.scm 59 */
														obj_t BgL_arg3560z00_934;

														BgL_arg3560z00_934 =
															MAKE_PAIR(CAR(BgL_kapturedz00_897),
															CAR(BgL_addzd2argszd2_898));
														BgL_head3537z00_917 =
															MAKE_PAIR(BgL_arg3560z00_934, BNIL);
													}
													{	/* Integrate/loc2glo.scm 59 */
														obj_t BgL_g3541z00_918;

														obj_t BgL_g3542z00_919;

														BgL_g3541z00_918 = CDR(BgL_kapturedz00_897);
														BgL_g3542z00_919 = CDR(BgL_addzd2argszd2_898);
														{
															obj_t BgL_ll3535z00_921;

															obj_t BgL_ll3536z00_922;

															obj_t BgL_tail3538z00_923;

															BgL_ll3535z00_921 = BgL_g3541z00_918;
															BgL_ll3536z00_922 = BgL_g3542z00_919;
															BgL_tail3538z00_923 = BgL_head3537z00_917;
														BgL_zc3anonymousza33552ze3z83_924:
															if (NULLP(BgL_ll3535z00_921))
																{	/* Integrate/loc2glo.scm 59 */
																	BgL_arg3550z00_913 = BgL_head3537z00_917;
																}
															else
																{	/* Integrate/loc2glo.scm 59 */
																	obj_t BgL_newtail3539z00_926;

																	{	/* Integrate/loc2glo.scm 59 */
																		obj_t BgL_arg3556z00_929;

																		BgL_arg3556z00_929 =
																			MAKE_PAIR(CAR(BgL_ll3535z00_921),
																			CAR(BgL_ll3536z00_922));
																		BgL_newtail3539z00_926 =
																			MAKE_PAIR(BgL_arg3556z00_929, BNIL);
																	}
																	SET_CDR(BgL_tail3538z00_923,
																		BgL_newtail3539z00_926);
																	{
																		obj_t BgL_tail3538z00_1696;

																		obj_t BgL_ll3536z00_1694;

																		obj_t BgL_ll3535z00_1692;

																		BgL_ll3535z00_1692 = CDR(BgL_ll3535z00_921);
																		BgL_ll3536z00_1694 = CDR(BgL_ll3536z00_922);
																		BgL_tail3538z00_1696 =
																			BgL_newtail3539z00_926;
																		BgL_tail3538z00_923 = BgL_tail3538z00_1696;
																		BgL_ll3536z00_922 = BgL_ll3536z00_1694;
																		BgL_ll3535z00_921 = BgL_ll3535z00_1692;
																		goto BgL_zc3anonymousza33552ze3z83_924;
																	}
																}
														}
													}
												}
											BgL_arg3548z00_911 =
												BGl_integratezd2globaliza7ez12z67zzintegrate_nodez00(
												(BgL_nodez00_bglt) (BgL_arg3549z00_912),
												(BgL_variablez00_bglt) (BgL_localz00_1),
												BgL_arg3550z00_913);
										}
										((((BgL_sfunz00_bglt) CREF(BgL_newzd2funzd2_900))->
												BgL_bodyz00) = ((obj_t) BgL_arg3548z00_911), BUNSPEC);
									}
									{
										BgL_valuez00_bglt BgL_auxz00_1703;

										BgL_variablez00_bglt BgL_auxz00_1701;

										BgL_auxz00_1703 =
											(BgL_valuez00_bglt) (BgL_newzd2funzd2_900);
										BgL_auxz00_1701 =
											(BgL_variablez00_bglt) (BgL_globalz00_896);
										((((BgL_variablez00_bglt) CREF(BgL_auxz00_1701))->
												BgL_valuez00) =
											((BgL_valuez00_bglt) BgL_auxz00_1703), BUNSPEC);
									}
									return BgL_globalz00_896;
								}
							}
						}
					}
				}
			}
		}
	}



/* _local->global */
	obj_t BGl__localzd2ze3globalz31zzintegrate_localzd2ze3globalz31(obj_t
		BgL_envz00_1519, obj_t BgL_localz00_1520)
	{
		AN_OBJECT;
		{	/* Integrate/loc2glo.scm 35 */
			return
				BGl_localzd2ze3globalz31zzintegrate_localzd2ze3globalz31(
				(BgL_localz00_bglt) (BgL_localz00_1520));
		}
	}



/* local-id->global-id */
	obj_t
		BGl_localzd2idzd2ze3globalzd2idz31zzintegrate_localzd2ze3globalz31
		(BgL_localz00_bglt BgL_localz00_2)
	{
		AN_OBJECT;
		{	/* Integrate/loc2glo.scm 73 */
			{	/* Integrate/loc2glo.scm 75 */
				obj_t BgL_g3526z00_985;

				{
					BgL_variablez00_bglt BgL_auxz00_1708;

					BgL_auxz00_1708 = (BgL_variablez00_bglt) (BgL_localz00_2);
					BgL_g3526z00_985 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_1708))->BgL_idz00);
				}
				{
					obj_t BgL_idz00_987;

					BgL_idz00_987 = BgL_g3526z00_985;
				BgL_zc3anonymousza33598ze3z83_988:
					{	/* Integrate/loc2glo.scm 76 */
						bool_t BgL_testz00_1711;

						{	/* Integrate/loc2glo.scm 76 */
							obj_t BgL_arg3606z00_996;

							BgL_arg3606z00_996 =
								BGl_findzd2globalzf2modulez20zzast_envz00(BgL_idz00_987,
								BGl_za2moduleza2z00zzmodule_modulez00);
							BgL_testz00_1711 =
								BGl_iszd2azf3z21zz__objectz00(BgL_arg3606z00_996,
								BGl_globalz00zzast_varz00);
						}
						if (BgL_testz00_1711)
							{	/* Integrate/loc2glo.scm 77 */
								obj_t BgL_arg3600z00_990;

								{	/* Integrate/loc2glo.scm 77 */
									obj_t BgL_arg3601z00_991;

									{	/* Integrate/loc2glo.scm 77 */
										obj_t BgL_arg3602z00_992;

										obj_t BgL_arg3603z00_993;

										{	/* Integrate/loc2glo.scm 77 */
											obj_t BgL_res3665z00_1497;

											{	/* Integrate/loc2glo.scm 77 */
												obj_t BgL_arg2063z00_1496;

												BgL_arg2063z00_1496 = SYMBOL_TO_STRING(BgL_idz00_987);
												BgL_res3665z00_1497 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg2063z00_1496);
											}
											BgL_arg3602z00_992 = BgL_res3665z00_1497;
										}
										{	/* Integrate/loc2glo.scm 77 */
											obj_t BgL_res3666z00_1500;

											{	/* Integrate/loc2glo.scm 77 */
												obj_t BgL_symbolz00_1498;

												BgL_symbolz00_1498 =
													BGl_symbolzd2quotezd2zzintegrate_localzd2ze3globalz31;
												{	/* Integrate/loc2glo.scm 77 */
													obj_t BgL_arg2063z00_1499;

													BgL_arg2063z00_1499 =
														SYMBOL_TO_STRING(BgL_symbolz00_1498);
													BgL_res3666z00_1500 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg2063z00_1499);
												}
											}
											BgL_arg3603z00_993 = BgL_res3666z00_1500;
										}
										{	/* Integrate/loc2glo.scm 77 */
											obj_t BgL_list3604z00_994;

											{	/* Integrate/loc2glo.scm 77 */
												obj_t BgL_arg3605z00_995;

												BgL_arg3605z00_995 =
													MAKE_PAIR(BgL_arg3603z00_993, BNIL);
												BgL_list3604z00_994 =
													MAKE_PAIR(BgL_arg3602z00_992, BgL_arg3605z00_995);
											}
											BgL_arg3601z00_991 =
												BGl_stringzd2appendzd2zz__r4_strings_6_7z00
												(BgL_list3604z00_994);
										}
									}
									BgL_arg3600z00_990 =
										string_to_symbol(BSTRING_TO_STRING(BgL_arg3601z00_991));
								}
								{
									obj_t BgL_idz00_1723;

									BgL_idz00_1723 = BgL_arg3600z00_990;
									BgL_idz00_987 = BgL_idz00_1723;
									goto BgL_zc3anonymousza33598ze3z83_988;
								}
							}
						else
							{	/* Integrate/loc2glo.scm 76 */
								return BgL_idz00_987;
							}
					}
				}
			}
		}
	}



/* the-global */
	BGL_EXPORTED_DEF obj_t
		BGl_thezd2globalzd2zzintegrate_localzd2ze3globalz31(BgL_localz00_bglt
		BgL_localz00_3)
	{
		AN_OBJECT;
		{	/* Integrate/loc2glo.scm 83 */
			{	/* Integrate/loc2glo.scm 84 */
				BgL_valuez00_bglt BgL_valuez00_998;

				{
					BgL_variablez00_bglt BgL_auxz00_1724;

					BgL_auxz00_1724 = (BgL_variablez00_bglt) (BgL_localz00_3);
					BgL_valuez00_998 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_1724))->BgL_valuez00);
				}
				{	/* Integrate/loc2glo.scm 85 */
					bool_t BgL_testz00_1727;

					{	/* Integrate/loc2glo.scm 85 */
						obj_t BgL_arg3614z00_1007;

						{	/* Integrate/loc2glo.scm 85 */
							BgL_sfunzf2iinfozf2_bglt BgL_obj3464z00_1503;

							BgL_obj3464z00_1503 =
								(BgL_sfunzf2iinfozf2_bglt) (BgL_valuez00_998);
							{
								obj_t BgL_auxz00_1729;

								{	/* Integrate/loc2glo.scm 85 */
									BgL_objectz00_bglt BgL_auxz00_1730;

									BgL_auxz00_1730 = (BgL_objectz00_bglt) (BgL_obj3464z00_1503);
									BgL_auxz00_1729 = BGL_OBJECT_WIDENING(BgL_auxz00_1730);
								}
								BgL_arg3614z00_1007 =
									(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_1729))->
									BgL_globalz00);
							}
						}
						BgL_testz00_1727 =
							BGl_iszd2azf3z21zz__objectz00(BgL_arg3614z00_1007,
							BGl_globalz00zzast_varz00);
					}
					if (BgL_testz00_1727)
						{	/* Integrate/loc2glo.scm 86 */
							BgL_sfunzf2iinfozf2_bglt BgL_obj3464z00_1505;

							BgL_obj3464z00_1505 =
								(BgL_sfunzf2iinfozf2_bglt) (BgL_valuez00_998);
							{
								obj_t BgL_auxz00_1736;

								{	/* Integrate/loc2glo.scm 86 */
									BgL_objectz00_bglt BgL_auxz00_1737;

									BgL_auxz00_1737 = (BgL_objectz00_bglt) (BgL_obj3464z00_1505);
									BgL_auxz00_1736 = BGL_OBJECT_WIDENING(BgL_auxz00_1737);
								}
								return
									(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_1736))->
									BgL_globalz00);
							}
						}
					else
						{	/* Integrate/loc2glo.scm 87 */
							obj_t BgL_idz00_1000;

							BgL_idz00_1000 =
								BGl_localzd2idzd2ze3globalzd2idz31zzintegrate_localzd2ze3globalz31
								(BgL_localz00_3);
							{	/* Integrate/loc2glo.scm 87 */
								BgL_globalz00_bglt BgL_globalz00_1001;

								BgL_globalz00_1001 =
									BGl_defzd2globalzd2sfunzd2nozd2warningz12z12zzast_glozd2defzd2
									(BgL_idz00_1000, BNIL, BNIL,
									BGl_za2moduleza2z00zzmodule_modulez00,
									CNST_TABLE_REF(((long) 0)), CNST_TABLE_REF(((long) 1)),
									CNST_TABLE_REF(((long) 2)), BUNSPEC);
								{	/* Integrate/loc2glo.scm 88 */

									{	/* Integrate/loc2glo.scm 101 */
										BgL_valuez00_bglt BgL_arg3608z00_1002;

										obj_t BgL_arg3609z00_1003;

										{
											BgL_variablez00_bglt BgL_auxz00_1746;

											BgL_auxz00_1746 =
												(BgL_variablez00_bglt) (BgL_globalz00_1001);
											BgL_arg3608z00_1002 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_1746))->
												BgL_valuez00);
										}
										{
											BgL_sfunz00_bglt BgL_auxz00_1749;

											BgL_auxz00_1749 = (BgL_sfunz00_bglt) (BgL_valuez00_998);
											BgL_arg3609z00_1003 =
												(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1749))->
												BgL_locz00);
										}
										{
											BgL_sfunz00_bglt BgL_auxz00_1752;

											BgL_auxz00_1752 =
												(BgL_sfunz00_bglt) (BgL_arg3608z00_1002);
											((((BgL_sfunz00_bglt) CREF(BgL_auxz00_1752))->
													BgL_locz00) = ((obj_t) BgL_arg3609z00_1003), BUNSPEC);
									}}
									if (
										(((BgL_localz00_bglt) CREF(BgL_localz00_3))->
											BgL_userzf3zf3))
										{	/* Integrate/loc2glo.scm 103 */
											BFALSE;
										}
									else
										{	/* Integrate/loc2glo.scm 103 */
											((((BgL_globalz00_bglt) CREF(BgL_globalz00_1001))->
													BgL_userzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
										}
									{	/* Integrate/loc2glo.scm 105 */
										BgL_sfunzf2iinfozf2_bglt BgL_obj3466z00_1513;

										obj_t BgL_val3465z00_1514;

										BgL_obj3466z00_1513 =
											(BgL_sfunzf2iinfozf2_bglt) (BgL_valuez00_998);
										BgL_val3465z00_1514 = (obj_t) (BgL_globalz00_1001);
										{
											obj_t BgL_auxz00_1760;

											{	/* Integrate/loc2glo.scm 105 */
												BgL_objectz00_bglt BgL_auxz00_1761;

												BgL_auxz00_1761 =
													(BgL_objectz00_bglt) (BgL_obj3466z00_1513);
												BgL_auxz00_1760 = BGL_OBJECT_WIDENING(BgL_auxz00_1761);
											}
											((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_1760))->
													BgL_globalz00) =
												((obj_t) BgL_val3465z00_1514), BUNSPEC);
										}
									}
									{	/* Integrate/loc2glo.scm 106 */
										BgL_valuez00_bglt BgL_arg3612z00_1005;

										obj_t BgL_arg3613z00_1006;

										{
											BgL_variablez00_bglt BgL_auxz00_1765;

											BgL_auxz00_1765 =
												(BgL_variablez00_bglt) (BgL_globalz00_1001);
											BgL_arg3612z00_1005 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_1765))->
												BgL_valuez00);
										}
										{
											BgL_funz00_bglt BgL_auxz00_1768;

											BgL_auxz00_1768 = (BgL_funz00_bglt) (BgL_valuez00_998);
											BgL_arg3613z00_1006 =
												(((BgL_funz00_bglt) CREF(BgL_auxz00_1768))->
												BgL_sidezd2effectzf3z21);
										}
										{
											BgL_funz00_bglt BgL_auxz00_1771;

											BgL_auxz00_1771 = (BgL_funz00_bglt) (BgL_arg3612z00_1005);
											((((BgL_funz00_bglt) CREF(BgL_auxz00_1771))->
													BgL_sidezd2effectzf3z21) =
												((obj_t) BgL_arg3613z00_1006), BUNSPEC);
										}
									}
									return (obj_t) (BgL_globalz00_1001);
								}
							}
						}
				}
			}
		}
	}



/* _the-global */
	obj_t BGl__thezd2globalzd2zzintegrate_localzd2ze3globalz31(obj_t
		BgL_envz00_1521, obj_t BgL_localz00_1522)
	{
		AN_OBJECT;
		{	/* Integrate/loc2glo.scm 83 */
			return
				BGl_thezd2globalzd2zzintegrate_localzd2ze3globalz31(
				(BgL_localz00_bglt) (BgL_localz00_1522));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzintegrate_localzd2ze3globalz31()
	{
		AN_OBJECT;
		{	/* Integrate/loc2glo.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzintegrate_localzd2ze3globalz31()
	{
		AN_OBJECT;
		{	/* Integrate/loc2glo.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzintegrate_localzd2ze3globalz31()
	{
		AN_OBJECT;
		{	/* Integrate/loc2glo.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3668z00zzintegrate_localzd2ze3globalz31));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3668z00zzintegrate_localzd2ze3globalz31));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 320731191),
				BSTRING_TO_STRING(BGl_string3668z00zzintegrate_localzd2ze3globalz31));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string3668z00zzintegrate_localzd2ze3globalz31));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3668z00zzintegrate_localzd2ze3globalz31));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3668z00zzintegrate_localzd2ze3globalz31));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3668z00zzintegrate_localzd2ze3globalz31));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3668z00zzintegrate_localzd2ze3globalz31));
			BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(((long) 189731515),
				BSTRING_TO_STRING(BGl_string3668z00zzintegrate_localzd2ze3globalz31));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3668z00zzintegrate_localzd2ze3globalz31));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string3668z00zzintegrate_localzd2ze3globalz31));
			BGl_modulezd2initializa7ationz75zzintegrate_infoz00(((long) 0),
				BSTRING_TO_STRING(BGl_string3668z00zzintegrate_localzd2ze3globalz31));
			return
				BGl_modulezd2initializa7ationz75zzintegrate_nodez00(((long) 507393140),
				BSTRING_TO_STRING(BGl_string3668z00zzintegrate_localzd2ze3globalz31));
		}
	}

#ifdef __cplusplus
}
#endif
