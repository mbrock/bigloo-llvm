/*===========================================================================*/
/*   (Expand/define.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Expand/define.scm)*/
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


	BGL_EXPORTED_DECL obj_t BGl_expandzd2setz12zc0zzexpand_definez00(obj_t,
		obj_t);
	extern obj_t BGl_unbindzd2Gzd2expanderz12z12zzexpand_expanderz00(obj_t);
	static obj_t BGl_expandzd2externalzd2definez00zzexpand_definez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_normaliza7ezd2prognzf2locz87zztools_prognz00(obj_t, obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	extern obj_t BGl_expandzd2argszd2zzexpand_lambdaz00(obj_t, obj_t);
	extern obj_t BGl_za2libzd2modeza2zd2zzengine_paramz00;
	static obj_t BGl__expandzd2genericzd2zzexpand_definez00(obj_t, obj_t, obj_t);
	static obj_t BGl__expandzd2definezd2zzexpand_definez00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31887ze3z83zzexpand_definez00(obj_t);
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzexpand_definez00();
	static obj_t BGl__expandzd2setz12zc0zzexpand_definez00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31911ze3z83zzexpand_definez00(obj_t);
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2definezd2zzexpand_definez00(obj_t,
		obj_t);
	extern obj_t BGl_withzd2lexicalzd2zzexpand_epsz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzexpand_definez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_lambdaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_expanderz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzexpand_definez00();
	static obj_t BGl__expandzd2inlinezd2zzexpand_definez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31933ze3z83zzexpand_definez00(obj_t);
	static obj_t BGl_internalzd2expandzd2setz12z12zzexpand_definez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2inlinezd2zzexpand_definez00(obj_t,
		obj_t);
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	extern obj_t BGl_replacez12z12zztools_miscz00(obj_t, obj_t);
	extern obj_t BGl_epairifyz00zztools_miscz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	static obj_t BGl_zc3anonymousza31971ze3z83zzexpand_definez00(obj_t);
	static obj_t BGl_methodzd2initzd2zzexpand_definez00();
	static obj_t BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_argsza2zd2ze3argszd2listz41zztools_argsz00(obj_t);
	extern obj_t BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00(obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzexpand_definez00 = BUNSPEC;
	static obj_t BGl__expandzd2methodzd2zzexpand_definez00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzexpand_definez00();
	static obj_t BGl_dozd2inlinezf2genericzf2methodzd2zzexpand_definez00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32119ze3z83zzexpand_definez00(obj_t);
	extern obj_t BGl_unbindzd2Ozd2expanderz12z12zzexpand_expanderz00(obj_t);
	extern obj_t BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2methodzd2zzexpand_definez00(obj_t,
		obj_t);
	extern obj_t BGl_findzd2Gzd2expanderz00zzexpand_expanderz00(obj_t);
	extern obj_t BGl_internalzd2definitionzf3z21zzexpand_lambdaz00;
	extern BgL_typez00_bglt BGl_getzd2defaultzd2typez00zztype_cachez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzexpand_definez00();
	BGL_EXPORTED_DECL obj_t BGl_expandzd2genericzd2zzexpand_definez00(obj_t,
		obj_t);
	static obj_t BGl_dozd2externalzd2definezd2lambdazd2zzexpand_definez00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31776ze3z83zzexpand_definez00(obj_t);
	static obj_t BGl_expandzd2internalzd2definez00zzexpand_definez00(obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza31801ze3z83zzexpand_definez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_findzd2Ozd2expanderz00zzexpand_expanderz00(obj_t);
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzexpand_definez00();
	static obj_t __cnst[6];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2genericzd2envz00zzexpand_definez00,
		BgL_bgl__expandza7d2generi2166za7,
		BGl__expandzd2genericzd2zzexpand_definez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2definezd2envz00zzexpand_definez00,
		BgL_bgl__expandza7d2define2167za7,
		BGl__expandzd2definezd2zzexpand_definez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2setz12zd2envz12zzexpand_definez00,
		BgL_bgl__expandza7d2setza7122168z00,
		BGl__expandzd2setz12zc0zzexpand_definez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2148z00zzexpand_definez00,
		BgL_bgl_string2148za700za7za7e2169za7, "Illegal `define' form", 21);
	      DEFINE_STRING(BGl_string2150z00zzexpand_definez00,
		BgL_bgl_string2150za700za7za7e2170za7, "Illegal `set!' form", 19);
	      DEFINE_STRING(BGl_string2149z00zzexpand_definez00,
		BgL_bgl_string2149za700za7za7e2171za7, "define", 6);
	      DEFINE_STRING(BGl_string2151z00zzexpand_definez00,
		BgL_bgl_string2151za700za7za7e2172za7, "Illegal `define-method' form", 28);
	      DEFINE_STRING(BGl_string2152z00zzexpand_definez00,
		BgL_bgl_string2152za700za7za7e2173za7, "Illegal `define-inline' form", 28);
	      DEFINE_STRING(BGl_string2153z00zzexpand_definez00,
		BgL_bgl_string2153za700za7za7e2174za7, "Illegal `define-generic' form", 29);
	      DEFINE_STRING(BGl_string2154z00zzexpand_definez00,
		BgL_bgl_string2154za700za7za7e2175za7,
		"Disabling optimization for library function -- ", 47);
	      DEFINE_STRING(BGl_string2155z00zzexpand_definez00,
		BgL_bgl_string2155za700za7za7e2176za7, "top-level", 9);
	      DEFINE_STRING(BGl_string2156z00zzexpand_definez00,
		BgL_bgl_string2156za700za7za7e2177za7,
		"Disabling debug information for library function -- ", 52);
	      DEFINE_STRING(BGl_string2157z00zzexpand_definez00,
		BgL_bgl_string2157za700za7za7e2178za7, "expand_define", 13);
	      DEFINE_STRING(BGl_string2158z00zzexpand_definez00,
		BgL_bgl_string2158za700za7za7e2179za7, "expander @ set! define _ lambda ",
		32);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2inlinezd2envz00zzexpand_definez00,
		BgL_bgl__expandza7d2inline2180za7,
		BGl__expandzd2inlinezd2zzexpand_definez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2methodzd2envz00zzexpand_definez00,
		BgL_bgl__expandza7d2method2181za7,
		BGl__expandzd2methodzd2zzexpand_definez00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzexpand_definez00(long
		BgL_checksumz00_1347, char *BgL_fromz00_1348)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzexpand_definez00))
				{
					BGl_requirezd2initializa7ationz75zzexpand_definez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzexpand_definez00();
					BGl_cnstzd2initzd2zzexpand_definez00();
					BGl_importedzd2moduleszd2initz00zzexpand_definez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzexpand_definez00()
	{
		AN_OBJECT;
		{	/* Expand/define.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"expand_define");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "expand_define");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"expand_define");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzexpand_definez00()
	{
		AN_OBJECT;
		{	/* Expand/define.scm 15 */
			{	/* Expand/define.scm 15 */
				obj_t BgL_cportz00_1339;

				BgL_cportz00_1339 =
					bgl_open_input_string(BGl_string2158z00zzexpand_definez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1340;

					BgL_iz00_1340 = ((long) 5);
				BgL_loopz00_1341:
					if ((BgL_iz00_1340 == ((long) -1)))
						{	/* Expand/define.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Expand/define.scm 15 */
							{	/* Expand/define.scm 15 */
								obj_t BgL_arg2165z00_1343;

								{	/* Expand/define.scm 15 */

									{	/* Expand/define.scm 15 */
										obj_t BgL_locationz00_1345;

										BgL_locationz00_1345 = BBOOL(((bool_t) 0));
										{	/* Expand/define.scm 15 */

											BgL_arg2165z00_1343 =
												BGl_readz00zz__readerz00(BgL_cportz00_1339,
												BgL_locationz00_1345);
										}
									}
								}
								{	/* Expand/define.scm 15 */
									int BgL_auxz00_1364;

									BgL_auxz00_1364 = (int) (BgL_iz00_1340);
									CNST_TABLE_SET(BgL_auxz00_1364, BgL_arg2165z00_1343);
							}}
							{	/* Expand/define.scm 15 */
								int BgL_auxz00_1346;

								BgL_auxz00_1346 = (int) ((BgL_iz00_1340 - ((long) 1)));
								{
									long BgL_iz00_1369;

									BgL_iz00_1369 = (long) (BgL_auxz00_1346);
									BgL_iz00_1340 = BgL_iz00_1369;
									goto BgL_loopz00_1341;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzexpand_definez00()
	{
		AN_OBJECT;
		{	/* Expand/define.scm 15 */
			return BUNSPEC;
		}
	}



/* expand-define */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2definezd2zzexpand_definez00(obj_t
		BgL_xz00_11, obj_t BgL_ez00_12)
	{
		AN_OBJECT;
		{	/* Expand/define.scm 44 */
			if (CBOOL(BGl_internalzd2definitionzf3z21zzexpand_lambdaz00))
				{	/* Expand/define.scm 48 */
					return
						BGl_expandzd2internalzd2definez00zzexpand_definez00(BgL_xz00_11,
						BgL_ez00_12);
				}
			else
				{	/* Expand/define.scm 48 */
					return
						BGl_expandzd2externalzd2definez00zzexpand_definez00(BgL_xz00_11,
						BgL_ez00_12);
				}
		}
	}



/* _expand-define */
	obj_t BGl__expandzd2definezd2zzexpand_definez00(obj_t BgL_envz00_1268,
		obj_t BgL_xz00_1269, obj_t BgL_ez00_1270)
	{
		AN_OBJECT;
		{	/* Expand/define.scm 44 */
			return
				BGl_expandzd2definezd2zzexpand_definez00(BgL_xz00_1269, BgL_ez00_1270);
		}
	}



/* expand-external-define */
	obj_t BGl_expandzd2externalzd2definez00zzexpand_definez00(obj_t BgL_xz00_13,
		obj_t BgL_ez00_14)
	{
		AN_OBJECT;
		{	/* Expand/define.scm 55 */
			BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 = BTRUE;
			{	/* Expand/define.scm 57 */
				obj_t BgL_resz00_196;

				{

					if (PAIRP(BgL_xz00_13))
						{	/* Expand/define.scm 57 */
							obj_t BgL_cdrzd21663zd2_207;

							BgL_cdrzd21663zd2_207 = CDR(BgL_xz00_13);
							if (PAIRP(BgL_cdrzd21663zd2_207))
								{	/* Expand/define.scm 57 */
									obj_t BgL_carzd21667zd2_209;

									obj_t BgL_cdrzd21668zd2_210;

									BgL_carzd21667zd2_209 = CAR(BgL_cdrzd21663zd2_207);
									BgL_cdrzd21668zd2_210 = CDR(BgL_cdrzd21663zd2_207);
									if (PAIRP(BgL_carzd21667zd2_209))
										{	/* Expand/define.scm 57 */
											obj_t BgL_carzd21671zd2_212;

											BgL_carzd21671zd2_212 = CAR(BgL_carzd21667zd2_209);
											if (SYMBOLP(BgL_carzd21671zd2_212))
												{	/* Expand/define.scm 57 */
													if (NULLP(BgL_cdrzd21668zd2_210))
														{	/* Expand/define.scm 57 */
															obj_t BgL_carzd21687zd2_216;

															obj_t BgL_cdrzd21688zd2_217;

															BgL_carzd21687zd2_216 =
																CAR(BgL_cdrzd21663zd2_207);
															BgL_cdrzd21688zd2_217 =
																CDR(BgL_cdrzd21663zd2_207);
															if (SYMBOLP(BgL_carzd21687zd2_216))
																{	/* Expand/define.scm 57 */
																	if (PAIRP(BgL_cdrzd21688zd2_217))
																		{	/* Expand/define.scm 57 */
																			obj_t BgL_carzd21694zd2_220;

																			BgL_carzd21694zd2_220 =
																				CAR(BgL_cdrzd21688zd2_217);
																			if (PAIRP(BgL_carzd21694zd2_220))
																				{	/* Expand/define.scm 57 */
																					obj_t BgL_cdrzd21699zd2_222;

																					BgL_cdrzd21699zd2_222 =
																						CDR(BgL_carzd21694zd2_220);
																					if (
																						(CAR(BgL_carzd21694zd2_220) ==
																							CNST_TABLE_REF(((long) 0))))
																						{	/* Expand/define.scm 57 */
																							if (PAIRP(BgL_cdrzd21699zd2_222))
																								{	/* Expand/define.scm 57 */
																									obj_t BgL_cdrzd21703zd2_225;

																									BgL_cdrzd21703zd2_225 =
																										CDR(BgL_cdrzd21699zd2_222);
																									if (NULLP
																										(BgL_cdrzd21703zd2_225))
																										{	/* Expand/define.scm 57 */
																											obj_t
																												BgL_cdrzd21712zd2_227;
																											BgL_cdrzd21712zd2_227 =
																												CDR(BgL_xz00_13);
																											{	/* Expand/define.scm 57 */
																												obj_t
																													BgL_carzd21715zd2_228;
																												BgL_carzd21715zd2_228 =
																													CAR
																													(BgL_cdrzd21712zd2_227);
																												if (SYMBOLP
																													(BgL_carzd21715zd2_228))
																													{	/* Expand/define.scm 57 */
																														BgL_resz00_196 =
																															BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																															(BgL_ez00_14,
																															BgL_carzd21715zd2_228,
																															CDR
																															(BgL_cdrzd21712zd2_227),
																															BgL_xz00_13);
																													}
																												else
																													{	/* Expand/define.scm 57 */
																													BgL_tagzd21649zd2_204:
																														BgL_resz00_196 =
																															BGl_errorz00zz__errorz00
																															(BFALSE,
																															BGl_string2148z00zzexpand_definez00,
																															BgL_xz00_13);
																													}
																											}
																										}
																									else
																										{	/* Expand/define.scm 57 */
																											if (NULLP(CDR
																													(BgL_cdrzd21688zd2_217)))
																												{	/* Expand/define.scm 57 */
																													BgL_resz00_196 =
																														BGl_dozd2externalzd2definezd2lambdazd2zzexpand_definez00
																														(BgL_ez00_14,
																														BgL_carzd21687zd2_216,
																														CAR
																														(BgL_cdrzd21699zd2_222),
																														BgL_cdrzd21703zd2_225,
																														BgL_xz00_13);
																												}
																											else
																												{	/* Expand/define.scm 57 */
																													obj_t
																														BgL_cdrzd21727zd2_233;
																													BgL_cdrzd21727zd2_233
																														= CDR(BgL_xz00_13);
																													{	/* Expand/define.scm 57 */
																														obj_t
																															BgL_carzd21730zd2_234;
																														BgL_carzd21730zd2_234
																															=
																															CAR
																															(BgL_cdrzd21727zd2_233);
																														if (SYMBOLP
																															(BgL_carzd21730zd2_234))
																															{	/* Expand/define.scm 57 */
																																BgL_resz00_196 =
																																	BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																																	(BgL_ez00_14,
																																	BgL_carzd21730zd2_234,
																																	CDR
																																	(BgL_cdrzd21727zd2_233),
																																	BgL_xz00_13);
																															}
																														else
																															{	/* Expand/define.scm 57 */
																																goto
																																	BgL_tagzd21649zd2_204;
																															}
																													}
																												}
																										}
																								}
																							else
																								{	/* Expand/define.scm 57 */
																									obj_t BgL_cdrzd21742zd2_238;

																									BgL_cdrzd21742zd2_238 =
																										CDR(BgL_xz00_13);
																									{	/* Expand/define.scm 57 */
																										obj_t BgL_carzd21745zd2_239;

																										BgL_carzd21745zd2_239 =
																											CAR
																											(BgL_cdrzd21742zd2_238);
																										if (SYMBOLP
																											(BgL_carzd21745zd2_239))
																											{	/* Expand/define.scm 57 */
																												BgL_resz00_196 =
																													BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																													(BgL_ez00_14,
																													BgL_carzd21745zd2_239,
																													CDR
																													(BgL_cdrzd21742zd2_238),
																													BgL_xz00_13);
																											}
																										else
																											{	/* Expand/define.scm 57 */
																												goto
																													BgL_tagzd21649zd2_204;
																											}
																									}
																								}
																						}
																					else
																						{	/* Expand/define.scm 57 */
																							obj_t BgL_cdrzd21757zd2_242;

																							BgL_cdrzd21757zd2_242 =
																								CDR(BgL_xz00_13);
																							{	/* Expand/define.scm 57 */
																								obj_t BgL_carzd21760zd2_243;

																								BgL_carzd21760zd2_243 =
																									CAR(BgL_cdrzd21757zd2_242);
																								if (SYMBOLP
																									(BgL_carzd21760zd2_243))
																									{	/* Expand/define.scm 57 */
																										BgL_resz00_196 =
																											BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																											(BgL_ez00_14,
																											BgL_carzd21760zd2_243,
																											CDR
																											(BgL_cdrzd21757zd2_242),
																											BgL_xz00_13);
																									}
																								else
																									{	/* Expand/define.scm 57 */
																										goto BgL_tagzd21649zd2_204;
																									}
																							}
																						}
																				}
																			else
																				{	/* Expand/define.scm 57 */
																					obj_t BgL_carzd21775zd2_249;

																					BgL_carzd21775zd2_249 =
																						CAR(BgL_cdrzd21663zd2_207);
																					if (SYMBOLP(BgL_carzd21775zd2_249))
																						{	/* Expand/define.scm 57 */
																							BgL_resz00_196 =
																								BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																								(BgL_ez00_14,
																								BgL_carzd21775zd2_249,
																								CDR(BgL_cdrzd21663zd2_207),
																								BgL_xz00_13);
																						}
																					else
																						{	/* Expand/define.scm 57 */
																							goto BgL_tagzd21649zd2_204;
																						}
																				}
																		}
																	else
																		{	/* Expand/define.scm 57 */
																			goto BgL_tagzd21649zd2_204;
																		}
																}
															else
																{	/* Expand/define.scm 57 */
																	goto BgL_tagzd21649zd2_204;
																}
														}
													else
														{	/* Expand/define.scm 57 */
															BgL_resz00_196 =
																BGl_dozd2externalzd2definezd2lambdazd2zzexpand_definez00
																(BgL_ez00_14, BgL_carzd21671zd2_212,
																CDR(BgL_carzd21667zd2_209),
																BgL_cdrzd21668zd2_210, BgL_xz00_13);
														}
												}
											else
												{	/* Expand/define.scm 57 */
													obj_t BgL_carzd21798zd2_254;

													obj_t BgL_cdrzd21799zd2_255;

													BgL_carzd21798zd2_254 = CAR(BgL_cdrzd21663zd2_207);
													BgL_cdrzd21799zd2_255 = CDR(BgL_cdrzd21663zd2_207);
													if (SYMBOLP(BgL_carzd21798zd2_254))
														{	/* Expand/define.scm 57 */
															if (PAIRP(BgL_cdrzd21799zd2_255))
																{	/* Expand/define.scm 57 */
																	obj_t BgL_carzd21805zd2_258;

																	BgL_carzd21805zd2_258 =
																		CAR(BgL_cdrzd21799zd2_255);
																	if (PAIRP(BgL_carzd21805zd2_258))
																		{	/* Expand/define.scm 57 */
																			obj_t BgL_cdrzd21810zd2_260;

																			BgL_cdrzd21810zd2_260 =
																				CDR(BgL_carzd21805zd2_258);
																			if (
																				(CAR(BgL_carzd21805zd2_258) ==
																					CNST_TABLE_REF(((long) 0))))
																				{	/* Expand/define.scm 57 */
																					if (PAIRP(BgL_cdrzd21810zd2_260))
																						{	/* Expand/define.scm 57 */
																							obj_t BgL_cdrzd21814zd2_263;

																							BgL_cdrzd21814zd2_263 =
																								CDR(BgL_cdrzd21810zd2_260);
																							if (NULLP(BgL_cdrzd21814zd2_263))
																								{	/* Expand/define.scm 57 */
																									obj_t BgL_cdrzd21823zd2_265;

																									BgL_cdrzd21823zd2_265 =
																										CDR(BgL_xz00_13);
																									{	/* Expand/define.scm 57 */
																										obj_t BgL_carzd21826zd2_266;

																										BgL_carzd21826zd2_266 =
																											CAR
																											(BgL_cdrzd21823zd2_265);
																										if (SYMBOLP
																											(BgL_carzd21826zd2_266))
																											{	/* Expand/define.scm 57 */
																												BgL_resz00_196 =
																													BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																													(BgL_ez00_14,
																													BgL_carzd21826zd2_266,
																													CDR
																													(BgL_cdrzd21823zd2_265),
																													BgL_xz00_13);
																											}
																										else
																											{	/* Expand/define.scm 57 */
																												goto
																													BgL_tagzd21649zd2_204;
																											}
																									}
																								}
																							else
																								{	/* Expand/define.scm 57 */
																									if (NULLP(CDR
																											(BgL_cdrzd21799zd2_255)))
																										{	/* Expand/define.scm 57 */
																											BgL_resz00_196 =
																												BGl_dozd2externalzd2definezd2lambdazd2zzexpand_definez00
																												(BgL_ez00_14,
																												BgL_carzd21798zd2_254,
																												CAR
																												(BgL_cdrzd21810zd2_260),
																												BgL_cdrzd21814zd2_263,
																												BgL_xz00_13);
																										}
																									else
																										{	/* Expand/define.scm 57 */
																											obj_t
																												BgL_cdrzd21838zd2_271;
																											BgL_cdrzd21838zd2_271 =
																												CDR(BgL_xz00_13);
																											{	/* Expand/define.scm 57 */
																												obj_t
																													BgL_carzd21841zd2_272;
																												BgL_carzd21841zd2_272 =
																													CAR
																													(BgL_cdrzd21838zd2_271);
																												if (SYMBOLP
																													(BgL_carzd21841zd2_272))
																													{	/* Expand/define.scm 57 */
																														BgL_resz00_196 =
																															BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																															(BgL_ez00_14,
																															BgL_carzd21841zd2_272,
																															CDR
																															(BgL_cdrzd21838zd2_271),
																															BgL_xz00_13);
																													}
																												else
																													{	/* Expand/define.scm 57 */
																														goto
																															BgL_tagzd21649zd2_204;
																													}
																											}
																										}
																								}
																						}
																					else
																						{	/* Expand/define.scm 57 */
																							obj_t BgL_cdrzd21853zd2_276;

																							BgL_cdrzd21853zd2_276 =
																								CDR(BgL_xz00_13);
																							{	/* Expand/define.scm 57 */
																								obj_t BgL_carzd21856zd2_277;

																								BgL_carzd21856zd2_277 =
																									CAR(BgL_cdrzd21853zd2_276);
																								if (SYMBOLP
																									(BgL_carzd21856zd2_277))
																									{	/* Expand/define.scm 57 */
																										BgL_resz00_196 =
																											BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																											(BgL_ez00_14,
																											BgL_carzd21856zd2_277,
																											CDR
																											(BgL_cdrzd21853zd2_276),
																											BgL_xz00_13);
																									}
																								else
																									{	/* Expand/define.scm 57 */
																										goto BgL_tagzd21649zd2_204;
																									}
																							}
																						}
																				}
																			else
																				{	/* Expand/define.scm 57 */
																					obj_t BgL_cdrzd21868zd2_280;

																					BgL_cdrzd21868zd2_280 =
																						CDR(BgL_xz00_13);
																					{	/* Expand/define.scm 57 */
																						obj_t BgL_carzd21871zd2_281;

																						BgL_carzd21871zd2_281 =
																							CAR(BgL_cdrzd21868zd2_280);
																						if (SYMBOLP(BgL_carzd21871zd2_281))
																							{	/* Expand/define.scm 57 */
																								BgL_resz00_196 =
																									BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																									(BgL_ez00_14,
																									BgL_carzd21871zd2_281,
																									CDR(BgL_cdrzd21868zd2_280),
																									BgL_xz00_13);
																							}
																						else
																							{	/* Expand/define.scm 57 */
																								goto BgL_tagzd21649zd2_204;
																							}
																					}
																				}
																		}
																	else
																		{	/* Expand/define.scm 57 */
																			obj_t BgL_carzd21886zd2_287;

																			BgL_carzd21886zd2_287 =
																				CAR(BgL_cdrzd21663zd2_207);
																			if (SYMBOLP(BgL_carzd21886zd2_287))
																				{	/* Expand/define.scm 57 */
																					BgL_resz00_196 =
																						BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																						(BgL_ez00_14, BgL_carzd21886zd2_287,
																						CDR(BgL_cdrzd21663zd2_207),
																						BgL_xz00_13);
																				}
																			else
																				{	/* Expand/define.scm 57 */
																					goto BgL_tagzd21649zd2_204;
																				}
																		}
																}
															else
																{	/* Expand/define.scm 57 */
																	obj_t BgL_carzd21901zd2_291;

																	obj_t BgL_cdrzd21902zd2_292;

																	BgL_carzd21901zd2_291 =
																		CAR(BgL_cdrzd21663zd2_207);
																	BgL_cdrzd21902zd2_292 =
																		CDR(BgL_cdrzd21663zd2_207);
																	if (SYMBOLP(BgL_carzd21901zd2_291))
																		{	/* Expand/define.scm 57 */
																			if (NULLP(BgL_cdrzd21902zd2_292))
																				{	/* Expand/define.scm 57 */
																					goto BgL_tagzd21649zd2_204;
																				}
																			else
																				{	/* Expand/define.scm 57 */
																					BgL_resz00_196 =
																						BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																						(BgL_ez00_14, BgL_carzd21901zd2_291,
																						BgL_cdrzd21902zd2_292, BgL_xz00_13);
																				}
																		}
																	else
																		{	/* Expand/define.scm 57 */
																			goto BgL_tagzd21649zd2_204;
																		}
																}
														}
													else
														{	/* Expand/define.scm 57 */
															obj_t BgL_carzd21916zd2_296;

															obj_t BgL_cdrzd21917zd2_297;

															BgL_carzd21916zd2_296 =
																CAR(BgL_cdrzd21663zd2_207);
															BgL_cdrzd21917zd2_297 =
																CDR(BgL_cdrzd21663zd2_207);
															if (SYMBOLP(BgL_carzd21916zd2_296))
																{	/* Expand/define.scm 57 */
																	if (NULLP(BgL_cdrzd21917zd2_297))
																		{	/* Expand/define.scm 57 */
																			goto BgL_tagzd21649zd2_204;
																		}
																	else
																		{	/* Expand/define.scm 57 */
																			BgL_resz00_196 =
																				BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																				(BgL_ez00_14, BgL_carzd21916zd2_296,
																				BgL_cdrzd21917zd2_297, BgL_xz00_13);
																		}
																}
															else
																{	/* Expand/define.scm 57 */
																	goto BgL_tagzd21649zd2_204;
																}
														}
												}
										}
									else
										{	/* Expand/define.scm 57 */
											obj_t BgL_carzd21931zd2_301;

											obj_t BgL_cdrzd21932zd2_302;

											BgL_carzd21931zd2_301 = CAR(BgL_cdrzd21663zd2_207);
											BgL_cdrzd21932zd2_302 = CDR(BgL_cdrzd21663zd2_207);
											if (SYMBOLP(BgL_carzd21931zd2_301))
												{	/* Expand/define.scm 57 */
													if (PAIRP(BgL_cdrzd21932zd2_302))
														{	/* Expand/define.scm 57 */
															obj_t BgL_carzd21938zd2_305;

															BgL_carzd21938zd2_305 =
																CAR(BgL_cdrzd21932zd2_302);
															if (PAIRP(BgL_carzd21938zd2_305))
																{	/* Expand/define.scm 57 */
																	obj_t BgL_cdrzd21943zd2_307;

																	BgL_cdrzd21943zd2_307 =
																		CDR(BgL_carzd21938zd2_305);
																	if (
																		(CAR(BgL_carzd21938zd2_305) ==
																			CNST_TABLE_REF(((long) 0))))
																		{	/* Expand/define.scm 57 */
																			if (PAIRP(BgL_cdrzd21943zd2_307))
																				{	/* Expand/define.scm 57 */
																					obj_t BgL_cdrzd21947zd2_310;

																					BgL_cdrzd21947zd2_310 =
																						CDR(BgL_cdrzd21943zd2_307);
																					if (NULLP(BgL_cdrzd21947zd2_310))
																						{	/* Expand/define.scm 57 */
																							obj_t BgL_cdrzd21957zd2_312;

																							BgL_cdrzd21957zd2_312 =
																								CDR(BgL_xz00_13);
																							{	/* Expand/define.scm 57 */
																								obj_t BgL_carzd21961zd2_313;

																								BgL_carzd21961zd2_313 =
																									CAR(BgL_cdrzd21957zd2_312);
																								if (SYMBOLP
																									(BgL_carzd21961zd2_313))
																									{	/* Expand/define.scm 57 */
																										BgL_resz00_196 =
																											BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																											(BgL_ez00_14,
																											BgL_carzd21961zd2_313,
																											CDR
																											(BgL_cdrzd21957zd2_312),
																											BgL_xz00_13);
																									}
																								else
																									{	/* Expand/define.scm 57 */
																										goto BgL_tagzd21649zd2_204;
																									}
																							}
																						}
																					else
																						{	/* Expand/define.scm 57 */
																							if (NULLP(CDR
																									(BgL_cdrzd21932zd2_302)))
																								{	/* Expand/define.scm 57 */
																									BgL_resz00_196 =
																										BGl_dozd2externalzd2definezd2lambdazd2zzexpand_definez00
																										(BgL_ez00_14,
																										BgL_carzd21931zd2_301,
																										CAR(BgL_cdrzd21943zd2_307),
																										BgL_cdrzd21947zd2_310,
																										BgL_xz00_13);
																								}
																							else
																								{	/* Expand/define.scm 57 */
																									obj_t BgL_cdrzd21976zd2_318;

																									BgL_cdrzd21976zd2_318 =
																										CDR(BgL_xz00_13);
																									{	/* Expand/define.scm 57 */
																										obj_t BgL_carzd21980zd2_319;

																										BgL_carzd21980zd2_319 =
																											CAR
																											(BgL_cdrzd21976zd2_318);
																										if (SYMBOLP
																											(BgL_carzd21980zd2_319))
																											{	/* Expand/define.scm 57 */
																												BgL_resz00_196 =
																													BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																													(BgL_ez00_14,
																													BgL_carzd21980zd2_319,
																													CDR
																													(BgL_cdrzd21976zd2_318),
																													BgL_xz00_13);
																											}
																										else
																											{	/* Expand/define.scm 57 */
																												goto
																													BgL_tagzd21649zd2_204;
																											}
																									}
																								}
																						}
																				}
																			else
																				{	/* Expand/define.scm 57 */
																					obj_t BgL_cdrzd21995zd2_323;

																					BgL_cdrzd21995zd2_323 =
																						CDR(BgL_xz00_13);
																					{	/* Expand/define.scm 57 */
																						obj_t BgL_carzd21999zd2_324;

																						BgL_carzd21999zd2_324 =
																							CAR(BgL_cdrzd21995zd2_323);
																						if (SYMBOLP(BgL_carzd21999zd2_324))
																							{	/* Expand/define.scm 57 */
																								BgL_resz00_196 =
																									BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																									(BgL_ez00_14,
																									BgL_carzd21999zd2_324,
																									CDR(BgL_cdrzd21995zd2_323),
																									BgL_xz00_13);
																							}
																						else
																							{	/* Expand/define.scm 57 */
																								goto BgL_tagzd21649zd2_204;
																							}
																					}
																				}
																		}
																	else
																		{	/* Expand/define.scm 57 */
																			obj_t BgL_cdrzd22014zd2_327;

																			BgL_cdrzd22014zd2_327 = CDR(BgL_xz00_13);
																			{	/* Expand/define.scm 57 */
																				obj_t BgL_carzd22018zd2_328;

																				BgL_carzd22018zd2_328 =
																					CAR(BgL_cdrzd22014zd2_327);
																				if (SYMBOLP(BgL_carzd22018zd2_328))
																					{	/* Expand/define.scm 57 */
																						BgL_resz00_196 =
																							BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																							(BgL_ez00_14,
																							BgL_carzd22018zd2_328,
																							CDR(BgL_cdrzd22014zd2_327),
																							BgL_xz00_13);
																					}
																				else
																					{	/* Expand/define.scm 57 */
																						goto BgL_tagzd21649zd2_204;
																					}
																			}
																		}
																}
															else
																{	/* Expand/define.scm 57 */
																	obj_t BgL_carzd22037zd2_334;

																	BgL_carzd22037zd2_334 =
																		CAR(BgL_cdrzd21663zd2_207);
																	if (SYMBOLP(BgL_carzd22037zd2_334))
																		{	/* Expand/define.scm 57 */
																			BgL_resz00_196 =
																				BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																				(BgL_ez00_14, BgL_carzd22037zd2_334,
																				CDR(BgL_cdrzd21663zd2_207),
																				BgL_xz00_13);
																		}
																	else
																		{	/* Expand/define.scm 57 */
																			goto BgL_tagzd21649zd2_204;
																		}
																}
														}
													else
														{	/* Expand/define.scm 57 */
															obj_t BgL_carzd22056zd2_338;

															obj_t BgL_cdrzd22057zd2_339;

															BgL_carzd22056zd2_338 =
																CAR(BgL_cdrzd21663zd2_207);
															BgL_cdrzd22057zd2_339 =
																CDR(BgL_cdrzd21663zd2_207);
															if (SYMBOLP(BgL_carzd22056zd2_338))
																{	/* Expand/define.scm 57 */
																	if (NULLP(BgL_cdrzd22057zd2_339))
																		{	/* Expand/define.scm 57 */
																			goto BgL_tagzd21649zd2_204;
																		}
																	else
																		{	/* Expand/define.scm 57 */
																			BgL_resz00_196 =
																				BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																				(BgL_ez00_14, BgL_carzd22056zd2_338,
																				BgL_cdrzd22057zd2_339, BgL_xz00_13);
																		}
																}
															else
																{	/* Expand/define.scm 57 */
																	goto BgL_tagzd21649zd2_204;
																}
														}
												}
											else
												{	/* Expand/define.scm 57 */
													obj_t BgL_carzd22073zd2_343;

													obj_t BgL_cdrzd22074zd2_344;

													BgL_carzd22073zd2_343 = CAR(BgL_cdrzd21663zd2_207);
													BgL_cdrzd22074zd2_344 = CDR(BgL_cdrzd21663zd2_207);
													if (SYMBOLP(BgL_carzd22073zd2_343))
														{	/* Expand/define.scm 57 */
															if (NULLP(BgL_cdrzd22074zd2_344))
																{	/* Expand/define.scm 57 */
																	goto BgL_tagzd21649zd2_204;
																}
															else
																{	/* Expand/define.scm 57 */
																	BgL_resz00_196 =
																		BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																		(BgL_ez00_14, BgL_carzd22073zd2_343,
																		BgL_cdrzd22074zd2_344, BgL_xz00_13);
																}
														}
													else
														{	/* Expand/define.scm 57 */
															goto BgL_tagzd21649zd2_204;
														}
												}
										}
								}
							else
								{	/* Expand/define.scm 57 */
									goto BgL_tagzd21649zd2_204;
								}
						}
					else
						{	/* Expand/define.scm 57 */
							goto BgL_tagzd21649zd2_204;
						}
				}
				BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 = BFALSE;
				return BGl_replacez12z12zztools_miscz00(BgL_xz00_13, BgL_resz00_196);
			}
		}
	}



/* expand-internal-define */
	obj_t BGl_expandzd2internalzd2definez00zzexpand_definez00(obj_t BgL_xz00_15,
		obj_t BgL_ez00_16)
	{
		AN_OBJECT;
		{	/* Expand/define.scm 76 */
			{	/* Expand/define.scm 77 */
				obj_t BgL_ez00_347;

				BgL_ez00_347 =
					BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00(BgL_ez00_16);
				{
					obj_t BgL_namez00_358;

					obj_t BgL_valuez00_359;

					obj_t BgL_namez00_352;

					obj_t BgL_valuez00_353;

					obj_t BgL_lamz00_354;

					obj_t BgL_argsz00_355;

					obj_t BgL_bodyz00_356;

					obj_t BgL_namez00_348;

					obj_t BgL_argsz00_349;

					obj_t BgL_bodyz00_350;

					if (PAIRP(BgL_xz00_15))
						{	/* Expand/define.scm 78 */
							obj_t BgL_cdrzd22108zd2_364;

							BgL_cdrzd22108zd2_364 = CDR(BgL_xz00_15);
							if (PAIRP(BgL_cdrzd22108zd2_364))
								{	/* Expand/define.scm 78 */
									obj_t BgL_carzd22112zd2_366;

									obj_t BgL_cdrzd22113zd2_367;

									BgL_carzd22112zd2_366 = CAR(BgL_cdrzd22108zd2_364);
									BgL_cdrzd22113zd2_367 = CDR(BgL_cdrzd22108zd2_364);
									if (PAIRP(BgL_carzd22112zd2_366))
										{	/* Expand/define.scm 78 */
											if (NULLP(BgL_cdrzd22113zd2_367))
												{	/* Expand/define.scm 78 */
													obj_t BgL_carzd22139zd2_371;

													obj_t BgL_cdrzd22140zd2_372;

													BgL_carzd22139zd2_371 = CAR(BgL_cdrzd22108zd2_364);
													BgL_cdrzd22140zd2_372 = CDR(BgL_cdrzd22108zd2_364);
													if (SYMBOLP(BgL_carzd22139zd2_371))
														{	/* Expand/define.scm 78 */
															if (PAIRP(BgL_cdrzd22140zd2_372))
																{	/* Expand/define.scm 78 */
																	obj_t BgL_carzd22148zd2_375;

																	BgL_carzd22148zd2_375 =
																		CAR(BgL_cdrzd22140zd2_372);
																	if (PAIRP(BgL_carzd22148zd2_375))
																		{	/* Expand/define.scm 78 */
																			obj_t BgL_carzd22161zd2_377;

																			obj_t BgL_cdrzd22162zd2_378;

																			BgL_carzd22161zd2_377 =
																				CAR(BgL_carzd22148zd2_375);
																			BgL_cdrzd22162zd2_378 =
																				CDR(BgL_carzd22148zd2_375);
																			if (SYMBOLP(BgL_carzd22161zd2_377))
																				{	/* Expand/define.scm 78 */
																					if (PAIRP(BgL_cdrzd22162zd2_378))
																						{	/* Expand/define.scm 78 */
																							obj_t BgL_cdrzd22168zd2_381;

																							BgL_cdrzd22168zd2_381 =
																								CDR(BgL_cdrzd22162zd2_378);
																							if (NULLP(BgL_cdrzd22168zd2_381))
																								{	/* Expand/define.scm 78 */
																									obj_t BgL_carzd22180zd2_384;

																									BgL_carzd22180zd2_384 =
																										CAR(BgL_cdrzd22108zd2_364);
																									if (SYMBOLP
																										(BgL_carzd22180zd2_384))
																										{	/* Expand/define.scm 78 */
																											BgL_namez00_358 =
																												BgL_carzd22180zd2_384;
																											BgL_valuez00_359 =
																												CDR
																												(BgL_cdrzd22108zd2_364);
																										BgL_tagzd22096zd2_360:
																											{	/* Expand/define.scm 136 */
																												obj_t BgL_locz00_527;

																												{	/* Expand/define.scm 136 */
																													obj_t
																														BgL_arg1837z00_537;
																													obj_t
																														BgL_arg1839z00_538;
																													{	/* Expand/define.scm 136 */
																														obj_t
																															BgL_pairz00_1122;
																														BgL_pairz00_1122 =
																															BgL_xz00_15;
																														BgL_arg1837z00_537 =
																															CDR(CDR
																															(BgL_pairz00_1122));
																													}
																													BgL_arg1839z00_538 =
																														BGl_findzd2locationzd2zztools_locationz00
																														(BgL_xz00_15);
																													BgL_locz00_527 =
																														BGl_findzd2locationzf2locz20zztools_locationz00
																														(BgL_arg1837z00_537,
																														BgL_arg1839z00_538);
																												}
																												{	/* Expand/define.scm 136 */
																													obj_t
																														BgL_nvaluez00_528;
																													{	/* Expand/define.scm 137 */
																														obj_t
																															BgL_arg1836z00_536;
																														BgL_arg1836z00_536 =
																															BGl_normaliza7ezd2prognzf2locz87zztools_prognz00
																															(BgL_valuez00_359,
																															BgL_locz00_527);
																														BgL_nvaluez00_528 =
																															PROCEDURE_ENTRY
																															(BgL_ez00_347)
																															(BgL_ez00_347,
																															BgL_arg1836z00_536,
																															BgL_ez00_347,
																															BEOA);
																													}
																													{	/* Expand/define.scm 137 */
																														obj_t
																															BgL_envaluez00_529;
																														if (PAIRP
																															(BgL_nvaluez00_528))
																															{	/* Expand/define.scm 138 */
																																BgL_envaluez00_529
																																	=
																																	BGl_epairifyz00zztools_miscz00
																																	(BgL_nvaluez00_528,
																																	BgL_valuez00_359);
																															}
																														else
																															{	/* Expand/define.scm 138 */
																																BgL_envaluez00_529
																																	=
																																	BgL_nvaluez00_528;
																															}
																														{	/* Expand/define.scm 138 */

																															{	/* Expand/define.scm 141 */
																																obj_t
																																	BgL_arg1829z00_530;
																																{	/* Expand/define.scm 141 */
																																	obj_t
																																		BgL_arg1830z00_531;
																																	obj_t
																																		BgL_arg1831z00_532;
																																	BgL_arg1830z00_531
																																		=
																																		CNST_TABLE_REF
																																		(((long)
																																			2));
																																	{	/* Expand/define.scm 141 */
																																		obj_t
																																			BgL_list1832z00_533;
																																		{	/* Expand/define.scm 141 */
																																			obj_t
																																				BgL_arg1834z00_534;
																																			BgL_arg1834z00_534
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_list1832z00_533
																																				=
																																				MAKE_PAIR
																																				(BgL_envaluez00_529,
																																				BgL_arg1834z00_534);
																																		}
																																		BgL_arg1831z00_532
																																			=
																																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																			(BgL_namez00_358,
																																			BgL_list1832z00_533);
																																	}
																																	BgL_arg1829z00_530
																																		=
																																		MAKE_PAIR
																																		(BgL_arg1830z00_531,
																																		BgL_arg1831z00_532);
																																}
																																return
																																	BGl_replacez12z12zztools_miscz00
																																	(BgL_xz00_15,
																																	BgL_arg1829z00_530);
																															}
																														}
																													}
																												}
																											}
																										}
																									else
																										{	/* Expand/define.scm 78 */
																										BgL_tagzd22097zd2_361:
																											return
																												BGl_errorz00zz__errorz00
																												(BFALSE,
																												BGl_string2148z00zzexpand_definez00,
																												BgL_xz00_15);
																										}
																								}
																							else
																								{	/* Expand/define.scm 78 */
																									if (NULLP(CDR
																											(BgL_cdrzd22140zd2_372)))
																										{	/* Expand/define.scm 78 */
																											BgL_namez00_352 =
																												BgL_carzd22139zd2_371;
																											BgL_valuez00_353 =
																												BgL_carzd22148zd2_375;
																											BgL_lamz00_354 =
																												BgL_carzd22161zd2_377;
																											BgL_argsz00_355 =
																												CAR
																												(BgL_cdrzd22162zd2_378);
																											BgL_bodyz00_356 =
																												BgL_cdrzd22168zd2_381;
																										BgL_tagzd22095zd2_357:
																											{	/* Expand/define.scm 105 */
																												obj_t BgL_locz00_485;

																												BgL_locz00_485 =
																													BGl_findzd2locationzd2zztools_locationz00
																													(BgL_xz00_15);
																												{	/* Expand/define.scm 106 */
																													bool_t
																														BgL_testz00_1636;
																													{	/* Expand/define.scm 106 */
																														obj_t
																															BgL_arg1827z00_525;
																														obj_t
																															BgL_arg1828z00_526;
																														BgL_arg1827z00_525 =
																															BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																															(BgL_lamz00_354,
																															BgL_locz00_485);
																														BgL_arg1828z00_526 =
																															CNST_TABLE_REF((
																																(long) 0));
																														BgL_testz00_1636 =
																															(BgL_arg1827z00_525
																															==
																															BgL_arg1828z00_526);
																													}
																													if (BgL_testz00_1636)
																														{	/* Expand/define.scm 109 */
																															obj_t
																																BgL_pidz00_488;
																															BgL_pidz00_488 =
																																BGl_parsezd2idzd2zzast_identz00
																																(BgL_namez00_352,
																																BgL_locz00_485);
																															{	/* Expand/define.scm 109 */
																																obj_t
																																	BgL_namezd2idzd2_489;
																																BgL_namezd2idzd2_489
																																	=
																																	CAR
																																	(BgL_pidz00_488);
																																{	/* Expand/define.scm 110 */
																																	obj_t
																																		BgL_typez00_490;
																																	BgL_typez00_490
																																		=
																																		CDR
																																		(BgL_pidz00_488);
																																	{	/* Expand/define.scm 111 */
																																		obj_t
																																			BgL_typezd2idzd2_491;
																																		{
																																			BgL_typez00_bglt
																																				BgL_auxz00_1643;
																																			BgL_auxz00_1643
																																				=
																																				(BgL_typez00_bglt)
																																				(BgL_typez00_490);
																																			BgL_typezd2idzd2_491
																																				=
																																				(((BgL_typez00_bglt) CREF(BgL_auxz00_1643))->BgL_idz00);
																																		}
																																		{	/* Expand/define.scm 112 */

																																			{	/* Expand/define.scm 114 */
																																				obj_t
																																					BgL_arg1797z00_492;
																																				obj_t
																																					BgL_arg1798z00_493;
																																				BgL_arg1797z00_492
																																					=
																																					MAKE_PAIR
																																					(BgL_namez00_352,
																																					BGl_argsza2zd2ze3argszd2listz41zztools_argsz00
																																					(BgL_argsz00_355));
																																				BgL_arg1798z00_493
																																					=
																																					CNST_TABLE_REF
																																					(((long) 1));
																																				{	/* Expand/define.scm 118 */
																																					obj_t
																																						BgL_zc3anonymousza31801ze3z83_1271;
																																					BgL_zc3anonymousza31801ze3z83_1271
																																						=
																																						make_fx_procedure
																																						(BGl_zc3anonymousza31801ze3z83zzexpand_definez00,
																																						(int)
																																						(((long) 0)), (int) (((long) 8)));
																																					PROCEDURE_SET
																																						(BgL_zc3anonymousza31801ze3z83_1271,
																																						(int)
																																						(((long) 0)), BgL_xz00_15);
																																					PROCEDURE_SET
																																						(BgL_zc3anonymousza31801ze3z83_1271,
																																						(int)
																																						(((long) 1)), BgL_valuez00_353);
																																					PROCEDURE_SET
																																						(BgL_zc3anonymousza31801ze3z83_1271,
																																						(int)
																																						(((long) 2)), BgL_typezd2idzd2_491);
																																					PROCEDURE_SET
																																						(BgL_zc3anonymousza31801ze3z83_1271,
																																						(int)
																																						(((long) 3)), BgL_typez00_490);
																																					PROCEDURE_SET
																																						(BgL_zc3anonymousza31801ze3z83_1271,
																																						(int)
																																						(((long) 4)), BgL_argsz00_355);
																																					PROCEDURE_SET
																																						(BgL_zc3anonymousza31801ze3z83_1271,
																																						(int)
																																						(((long) 5)), BgL_ez00_347);
																																					PROCEDURE_SET
																																						(BgL_zc3anonymousza31801ze3z83_1271,
																																						(int)
																																						(((long) 6)), BgL_bodyz00_356);
																																					PROCEDURE_SET
																																						(BgL_zc3anonymousza31801ze3z83_1271,
																																						(int)
																																						(((long) 7)), BgL_namezd2idzd2_489);
																																					return
																																						BGl_withzd2lexicalzd2zzexpand_epsz00
																																						(BgL_arg1797z00_492,
																																						BgL_arg1798z00_493,
																																						BgL_locz00_485,
																																						BgL_zc3anonymousza31801ze3z83_1271);
																																				}
																																			}
																																		}
																																	}
																																}
																															}
																														}
																													else
																														{	/* Expand/define.scm 129 */
																															obj_t
																																BgL_nvaluez00_517;
																															BgL_nvaluez00_517
																																=
																																PROCEDURE_ENTRY
																																(BgL_ez00_347)
																																(BgL_ez00_347,
																																BgL_valuez00_353,
																																BgL_ez00_347,
																																BEOA);
																															{	/* Expand/define.scm 129 */
																																obj_t
																																	BgL_envaluez00_518;
																																if (PAIRP
																																	(BgL_nvaluez00_517))
																																	{	/* Expand/define.scm 130 */
																																		BgL_envaluez00_518
																																			=
																																			BGl_epairifyz00zztools_miscz00
																																			(BgL_nvaluez00_517,
																																			BgL_valuez00_353);
																																	}
																																else
																																	{	/* Expand/define.scm 130 */
																																		BgL_envaluez00_518
																																			=
																																			BgL_nvaluez00_517;
																																	}
																																{	/* Expand/define.scm 130 */

																																	{	/* Expand/define.scm 133 */
																																		obj_t
																																			BgL_arg1821z00_519;
																																		{	/* Expand/define.scm 133 */
																																			obj_t
																																				BgL_arg1822z00_520;
																																			obj_t
																																				BgL_arg1823z00_521;
																																			BgL_arg1822z00_520
																																				=
																																				CNST_TABLE_REF
																																				(((long)
																																					2));
																																			{	/* Expand/define.scm 133 */
																																				obj_t
																																					BgL_list1824z00_522;
																																				{	/* Expand/define.scm 133 */
																																					obj_t
																																						BgL_arg1825z00_523;
																																					BgL_arg1825z00_523
																																						=
																																						MAKE_PAIR
																																						(BNIL,
																																						BNIL);
																																					BgL_list1824z00_522
																																						=
																																						MAKE_PAIR
																																						(BgL_envaluez00_518,
																																						BgL_arg1825z00_523);
																																				}
																																				BgL_arg1823z00_521
																																					=
																																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																					(BgL_namez00_352,
																																					BgL_list1824z00_522);
																																			}
																																			BgL_arg1821z00_519
																																				=
																																				MAKE_PAIR
																																				(BgL_arg1822z00_520,
																																				BgL_arg1823z00_521);
																																		}
																																		return
																																			BGl_replacez12z12zztools_miscz00
																																			(BgL_xz00_15,
																																			BgL_arg1821z00_519);
																																	}
																																}
																															}
																														}
																												}
																											}
																										}
																									else
																										{	/* Expand/define.scm 78 */
																											obj_t
																												BgL_carzd22195zd2_390;
																											BgL_carzd22195zd2_390 =
																												CAR
																												(BgL_cdrzd22108zd2_364);
																											if (SYMBOLP
																												(BgL_carzd22195zd2_390))
																												{
																													obj_t
																														BgL_valuez00_1685;
																													obj_t
																														BgL_namez00_1684;
																													BgL_namez00_1684 =
																														BgL_carzd22195zd2_390;
																													BgL_valuez00_1685 =
																														CDR
																														(BgL_cdrzd22108zd2_364);
																													BgL_valuez00_359 =
																														BgL_valuez00_1685;
																													BgL_namez00_358 =
																														BgL_namez00_1684;
																													goto
																														BgL_tagzd22096zd2_360;
																												}
																											else
																												{	/* Expand/define.scm 78 */
																													goto
																														BgL_tagzd22097zd2_361;
																												}
																										}
																								}
																						}
																					else
																						{	/* Expand/define.scm 78 */
																							obj_t BgL_carzd22210zd2_395;

																							BgL_carzd22210zd2_395 =
																								CAR(BgL_cdrzd22108zd2_364);
																							if (SYMBOLP
																								(BgL_carzd22210zd2_395))
																								{
																									obj_t BgL_valuez00_1691;

																									obj_t BgL_namez00_1690;

																									BgL_namez00_1690 =
																										BgL_carzd22210zd2_395;
																									BgL_valuez00_1691 =
																										CDR(BgL_cdrzd22108zd2_364);
																									BgL_valuez00_359 =
																										BgL_valuez00_1691;
																									BgL_namez00_358 =
																										BgL_namez00_1690;
																									goto BgL_tagzd22096zd2_360;
																								}
																							else
																								{	/* Expand/define.scm 78 */
																									goto BgL_tagzd22097zd2_361;
																								}
																						}
																				}
																			else
																				{	/* Expand/define.scm 78 */
																					obj_t BgL_carzd22225zd2_399;

																					BgL_carzd22225zd2_399 =
																						CAR(BgL_cdrzd22108zd2_364);
																					if (SYMBOLP(BgL_carzd22225zd2_399))
																						{
																							obj_t BgL_valuez00_1697;

																							obj_t BgL_namez00_1696;

																							BgL_namez00_1696 =
																								BgL_carzd22225zd2_399;
																							BgL_valuez00_1697 =
																								CDR(BgL_cdrzd22108zd2_364);
																							BgL_valuez00_359 =
																								BgL_valuez00_1697;
																							BgL_namez00_358 =
																								BgL_namez00_1696;
																							goto BgL_tagzd22096zd2_360;
																						}
																					else
																						{	/* Expand/define.scm 78 */
																							goto BgL_tagzd22097zd2_361;
																						}
																				}
																		}
																	else
																		{	/* Expand/define.scm 78 */
																			obj_t BgL_carzd22240zd2_403;

																			BgL_carzd22240zd2_403 =
																				CAR(BgL_cdrzd22108zd2_364);
																			if (SYMBOLP(BgL_carzd22240zd2_403))
																				{
																					obj_t BgL_valuez00_1703;

																					obj_t BgL_namez00_1702;

																					BgL_namez00_1702 =
																						BgL_carzd22240zd2_403;
																					BgL_valuez00_1703 =
																						CDR(BgL_cdrzd22108zd2_364);
																					BgL_valuez00_359 = BgL_valuez00_1703;
																					BgL_namez00_358 = BgL_namez00_1702;
																					goto BgL_tagzd22096zd2_360;
																				}
																			else
																				{	/* Expand/define.scm 78 */
																					goto BgL_tagzd22097zd2_361;
																				}
																		}
																}
															else
																{	/* Expand/define.scm 78 */
																	goto BgL_tagzd22097zd2_361;
																}
														}
													else
														{	/* Expand/define.scm 78 */
															goto BgL_tagzd22097zd2_361;
														}
												}
											else
												{	/* Expand/define.scm 78 */
													BgL_namez00_348 = CAR(BgL_carzd22112zd2_366);
													BgL_argsz00_349 = CDR(BgL_carzd22112zd2_366);
													BgL_bodyz00_350 = BgL_cdrzd22113zd2_367;
													if (SYMBOLP(BgL_namez00_348))
														{	/* Expand/define.scm 83 */
															obj_t BgL_locz00_455;

															BgL_locz00_455 =
																BGl_findzd2locationzd2zztools_locationz00
																(BgL_xz00_15);
															{	/* Expand/define.scm 83 */
																obj_t BgL_pidz00_456;

																BgL_pidz00_456 =
																	BGl_parsezd2idzd2zzast_identz00
																	(BgL_namez00_348, BgL_locz00_455);
																{	/* Expand/define.scm 84 */
																	obj_t BgL_namezd2idzd2_457;

																	BgL_namezd2idzd2_457 = CAR(BgL_pidz00_456);
																	{	/* Expand/define.scm 85 */
																		obj_t BgL_typez00_458;

																		BgL_typez00_458 = CDR(BgL_pidz00_456);
																		{	/* Expand/define.scm 86 */
																			obj_t BgL_typezd2idzd2_459;

																			{
																				BgL_typez00_bglt BgL_auxz00_1711;

																				BgL_auxz00_1711 =
																					(BgL_typez00_bglt) (BgL_typez00_458);
																				BgL_typezd2idzd2_459 =
																					(((BgL_typez00_bglt)
																						CREF(BgL_auxz00_1711))->BgL_idz00);
																			}
																			{	/* Expand/define.scm 87 */

																				{	/* Expand/define.scm 89 */
																					obj_t BgL_arg1770z00_460;

																					obj_t BgL_arg1771z00_461;

																					BgL_arg1770z00_460 =
																						MAKE_PAIR(BgL_namez00_348,
																						BGl_argsza2zd2ze3argszd2listz41zztools_argsz00
																						(BgL_argsz00_349));
																					BgL_arg1771z00_461 =
																						CNST_TABLE_REF(((long) 1));
																					{	/* Expand/define.scm 93 */
																						obj_t
																							BgL_zc3anonymousza31776ze3z83_1272;
																						BgL_zc3anonymousza31776ze3z83_1272 =
																							make_fx_procedure
																							(BGl_zc3anonymousza31776ze3z83zzexpand_definez00,
																							(int) (((long) 0)),
																							(int) (((long) 7)));
																						PROCEDURE_SET
																							(BgL_zc3anonymousza31776ze3z83_1272,
																							(int) (((long) 0)), BgL_xz00_15);
																						PROCEDURE_SET
																							(BgL_zc3anonymousza31776ze3z83_1272,
																							(int) (((long) 1)),
																							BgL_typezd2idzd2_459);
																						PROCEDURE_SET
																							(BgL_zc3anonymousza31776ze3z83_1272,
																							(int) (((long) 2)),
																							BgL_typez00_458);
																						PROCEDURE_SET
																							(BgL_zc3anonymousza31776ze3z83_1272,
																							(int) (((long) 3)),
																							BgL_bodyz00_350);
																						PROCEDURE_SET
																							(BgL_zc3anonymousza31776ze3z83_1272,
																							(int) (((long) 4)), BgL_ez00_347);
																						PROCEDURE_SET
																							(BgL_zc3anonymousza31776ze3z83_1272,
																							(int) (((long) 5)),
																							BgL_argsz00_349);
																						PROCEDURE_SET
																							(BgL_zc3anonymousza31776ze3z83_1272,
																							(int) (((long) 6)),
																							BgL_namezd2idzd2_457);
																						return
																							BGl_withzd2lexicalzd2zzexpand_epsz00
																							(BgL_arg1770z00_460,
																							BgL_arg1771z00_461,
																							BgL_locz00_455,
																							BgL_zc3anonymousza31776ze3z83_1272);
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													else
														{	/* Expand/define.scm 81 */
															return
																BGl_errorz00zz__errorz00
																(BGl_string2149z00zzexpand_definez00,
																BGl_string2148z00zzexpand_definez00,
																BgL_xz00_15);
														}
												}
										}
									else
										{	/* Expand/define.scm 78 */
											obj_t BgL_carzd22272zd2_409;

											obj_t BgL_cdrzd22273zd2_410;

											BgL_carzd22272zd2_409 = CAR(BgL_cdrzd22108zd2_364);
											BgL_cdrzd22273zd2_410 = CDR(BgL_cdrzd22108zd2_364);
											if (SYMBOLP(BgL_carzd22272zd2_409))
												{	/* Expand/define.scm 78 */
													if (PAIRP(BgL_cdrzd22273zd2_410))
														{	/* Expand/define.scm 78 */
															obj_t BgL_carzd22281zd2_413;

															BgL_carzd22281zd2_413 =
																CAR(BgL_cdrzd22273zd2_410);
															if (PAIRP(BgL_carzd22281zd2_413))
																{	/* Expand/define.scm 78 */
																	obj_t BgL_carzd22294zd2_415;

																	obj_t BgL_cdrzd22295zd2_416;

																	BgL_carzd22294zd2_415 =
																		CAR(BgL_carzd22281zd2_413);
																	BgL_cdrzd22295zd2_416 =
																		CDR(BgL_carzd22281zd2_413);
																	if (SYMBOLP(BgL_carzd22294zd2_415))
																		{	/* Expand/define.scm 78 */
																			if (PAIRP(BgL_cdrzd22295zd2_416))
																				{	/* Expand/define.scm 78 */
																					obj_t BgL_cdrzd22301zd2_419;

																					BgL_cdrzd22301zd2_419 =
																						CDR(BgL_cdrzd22295zd2_416);
																					if (NULLP(BgL_cdrzd22301zd2_419))
																						{	/* Expand/define.scm 78 */
																							obj_t BgL_carzd22315zd2_422;

																							BgL_carzd22315zd2_422 =
																								CAR(BgL_cdrzd22108zd2_364);
																							if (SYMBOLP
																								(BgL_carzd22315zd2_422))
																								{
																									obj_t BgL_valuez00_1760;

																									obj_t BgL_namez00_1759;

																									BgL_namez00_1759 =
																										BgL_carzd22315zd2_422;
																									BgL_valuez00_1760 =
																										CDR(BgL_cdrzd22108zd2_364);
																									BgL_valuez00_359 =
																										BgL_valuez00_1760;
																									BgL_namez00_358 =
																										BgL_namez00_1759;
																									goto BgL_tagzd22096zd2_360;
																								}
																							else
																								{	/* Expand/define.scm 78 */
																									goto BgL_tagzd22097zd2_361;
																								}
																						}
																					else
																						{	/* Expand/define.scm 78 */
																							if (NULLP(CDR
																									(BgL_cdrzd22273zd2_410)))
																								{
																									obj_t BgL_bodyz00_1770;

																									obj_t BgL_argsz00_1768;

																									obj_t BgL_lamz00_1767;

																									obj_t BgL_valuez00_1766;

																									obj_t BgL_namez00_1765;

																									BgL_namez00_1765 =
																										BgL_carzd22272zd2_409;
																									BgL_valuez00_1766 =
																										BgL_carzd22281zd2_413;
																									BgL_lamz00_1767 =
																										BgL_carzd22294zd2_415;
																									BgL_argsz00_1768 =
																										CAR(BgL_cdrzd22295zd2_416);
																									BgL_bodyz00_1770 =
																										BgL_cdrzd22301zd2_419;
																									BgL_bodyz00_356 =
																										BgL_bodyz00_1770;
																									BgL_argsz00_355 =
																										BgL_argsz00_1768;
																									BgL_lamz00_354 =
																										BgL_lamz00_1767;
																									BgL_valuez00_353 =
																										BgL_valuez00_1766;
																									BgL_namez00_352 =
																										BgL_namez00_1765;
																									goto BgL_tagzd22095zd2_357;
																								}
																							else
																								{	/* Expand/define.scm 78 */
																									obj_t BgL_carzd22334zd2_428;

																									BgL_carzd22334zd2_428 =
																										CAR(BgL_cdrzd22108zd2_364);
																									if (SYMBOLP
																										(BgL_carzd22334zd2_428))
																										{
																											obj_t BgL_valuez00_1775;

																											obj_t BgL_namez00_1774;

																											BgL_namez00_1774 =
																												BgL_carzd22334zd2_428;
																											BgL_valuez00_1775 =
																												CDR
																												(BgL_cdrzd22108zd2_364);
																											BgL_valuez00_359 =
																												BgL_valuez00_1775;
																											BgL_namez00_358 =
																												BgL_namez00_1774;
																											goto
																												BgL_tagzd22096zd2_360;
																										}
																									else
																										{	/* Expand/define.scm 78 */
																											goto
																												BgL_tagzd22097zd2_361;
																										}
																								}
																						}
																				}
																			else
																				{	/* Expand/define.scm 78 */
																					obj_t BgL_carzd22353zd2_433;

																					BgL_carzd22353zd2_433 =
																						CAR(BgL_cdrzd22108zd2_364);
																					if (SYMBOLP(BgL_carzd22353zd2_433))
																						{
																							obj_t BgL_valuez00_1781;

																							obj_t BgL_namez00_1780;

																							BgL_namez00_1780 =
																								BgL_carzd22353zd2_433;
																							BgL_valuez00_1781 =
																								CDR(BgL_cdrzd22108zd2_364);
																							BgL_valuez00_359 =
																								BgL_valuez00_1781;
																							BgL_namez00_358 =
																								BgL_namez00_1780;
																							goto BgL_tagzd22096zd2_360;
																						}
																					else
																						{	/* Expand/define.scm 78 */
																							goto BgL_tagzd22097zd2_361;
																						}
																				}
																		}
																	else
																		{	/* Expand/define.scm 78 */
																			obj_t BgL_carzd22372zd2_437;

																			BgL_carzd22372zd2_437 =
																				CAR(BgL_cdrzd22108zd2_364);
																			if (SYMBOLP(BgL_carzd22372zd2_437))
																				{
																					obj_t BgL_valuez00_1787;

																					obj_t BgL_namez00_1786;

																					BgL_namez00_1786 =
																						BgL_carzd22372zd2_437;
																					BgL_valuez00_1787 =
																						CDR(BgL_cdrzd22108zd2_364);
																					BgL_valuez00_359 = BgL_valuez00_1787;
																					BgL_namez00_358 = BgL_namez00_1786;
																					goto BgL_tagzd22096zd2_360;
																				}
																			else
																				{	/* Expand/define.scm 78 */
																					goto BgL_tagzd22097zd2_361;
																				}
																		}
																}
															else
																{	/* Expand/define.scm 78 */
																	obj_t BgL_carzd22391zd2_441;

																	BgL_carzd22391zd2_441 =
																		CAR(BgL_cdrzd22108zd2_364);
																	if (SYMBOLP(BgL_carzd22391zd2_441))
																		{
																			obj_t BgL_valuez00_1793;

																			obj_t BgL_namez00_1792;

																			BgL_namez00_1792 = BgL_carzd22391zd2_441;
																			BgL_valuez00_1793 =
																				CDR(BgL_cdrzd22108zd2_364);
																			BgL_valuez00_359 = BgL_valuez00_1793;
																			BgL_namez00_358 = BgL_namez00_1792;
																			goto BgL_tagzd22096zd2_360;
																		}
																	else
																		{	/* Expand/define.scm 78 */
																			goto BgL_tagzd22097zd2_361;
																		}
																}
														}
													else
														{	/* Expand/define.scm 78 */
															obj_t BgL_carzd22410zd2_445;

															obj_t BgL_cdrzd22411zd2_446;

															BgL_carzd22410zd2_445 =
																CAR(BgL_cdrzd22108zd2_364);
															BgL_cdrzd22411zd2_446 =
																CDR(BgL_cdrzd22108zd2_364);
															if (SYMBOLP(BgL_carzd22410zd2_445))
																{	/* Expand/define.scm 78 */
																	if (NULLP(BgL_cdrzd22411zd2_446))
																		{	/* Expand/define.scm 78 */
																			goto BgL_tagzd22097zd2_361;
																		}
																	else
																		{
																			obj_t BgL_valuez00_1802;

																			obj_t BgL_namez00_1801;

																			BgL_namez00_1801 = BgL_carzd22410zd2_445;
																			BgL_valuez00_1802 = BgL_cdrzd22411zd2_446;
																			BgL_valuez00_359 = BgL_valuez00_1802;
																			BgL_namez00_358 = BgL_namez00_1801;
																			goto BgL_tagzd22096zd2_360;
																		}
																}
															else
																{	/* Expand/define.scm 78 */
																	goto BgL_tagzd22097zd2_361;
																}
														}
												}
											else
												{	/* Expand/define.scm 78 */
													obj_t BgL_carzd22427zd2_450;

													obj_t BgL_cdrzd22428zd2_451;

													BgL_carzd22427zd2_450 = CAR(BgL_cdrzd22108zd2_364);
													BgL_cdrzd22428zd2_451 = CDR(BgL_cdrzd22108zd2_364);
													if (SYMBOLP(BgL_carzd22427zd2_450))
														{	/* Expand/define.scm 78 */
															if (NULLP(BgL_cdrzd22428zd2_451))
																{	/* Expand/define.scm 78 */
																	goto BgL_tagzd22097zd2_361;
																}
															else
																{
																	obj_t BgL_valuez00_1810;

																	obj_t BgL_namez00_1809;

																	BgL_namez00_1809 = BgL_carzd22427zd2_450;
																	BgL_valuez00_1810 = BgL_cdrzd22428zd2_451;
																	BgL_valuez00_359 = BgL_valuez00_1810;
																	BgL_namez00_358 = BgL_namez00_1809;
																	goto BgL_tagzd22096zd2_360;
																}
														}
													else
														{	/* Expand/define.scm 78 */
															goto BgL_tagzd22097zd2_361;
														}
												}
										}
								}
							else
								{	/* Expand/define.scm 78 */
									goto BgL_tagzd22097zd2_361;
								}
						}
					else
						{	/* Expand/define.scm 78 */
							goto BgL_tagzd22097zd2_361;
						}
				}
			}
		}
	}



/* <anonymous:1801> */
	obj_t BGl_zc3anonymousza31801ze3z83zzexpand_definez00(obj_t BgL_envz00_1273)
	{
		AN_OBJECT;
		{	/* Expand/define.scm 117 */
			{	/* Expand/define.scm 118 */
				obj_t BgL_xz00_1274;

				obj_t BgL_valuez00_1275;

				obj_t BgL_typezd2idzd2_1276;

				obj_t BgL_typez00_1277;

				obj_t BgL_argsz00_1278;

				obj_t BgL_ez00_1279;

				obj_t BgL_bodyz00_1280;

				obj_t BgL_namezd2idzd2_1281;

				BgL_xz00_1274 = PROCEDURE_REF(BgL_envz00_1273, (int) (((long) 0)));
				BgL_valuez00_1275 = PROCEDURE_REF(BgL_envz00_1273, (int) (((long) 1)));
				BgL_typezd2idzd2_1276 =
					PROCEDURE_REF(BgL_envz00_1273, (int) (((long) 2)));
				BgL_typez00_1277 = PROCEDURE_REF(BgL_envz00_1273, (int) (((long) 3)));
				BgL_argsz00_1278 = PROCEDURE_REF(BgL_envz00_1273, (int) (((long) 4)));
				BgL_ez00_1279 = PROCEDURE_REF(BgL_envz00_1273, (int) (((long) 5)));
				BgL_bodyz00_1280 = PROCEDURE_REF(BgL_envz00_1273, (int) (((long) 6)));
				BgL_namezd2idzd2_1281 =
					PROCEDURE_REF(BgL_envz00_1273, (int) (((long) 7)));
				{

					{	/* Expand/define.scm 118 */
						obj_t BgL_locz00_497;

						BgL_locz00_497 =
							BGl_findzd2locationzf2locz20zztools_locationz00(BgL_valuez00_1275,
							BGl_findzd2locationzd2zztools_locationz00(BgL_xz00_1274));
						{	/* Expand/define.scm 118 */
							obj_t BgL_nbodyz00_498;

							{	/* Expand/define.scm 120 */
								obj_t BgL_arg1809z00_505;

								obj_t BgL_arg1810z00_506;

								{	/* Expand/define.scm 120 */
									bool_t BgL_testz00_1829;

									{	/* Expand/define.scm 120 */
										BgL_typez00_bglt BgL_arg1812z00_508;

										BgL_arg1812z00_508 =
											BGl_getzd2defaultzd2typez00zztype_cachez00();
										BgL_testz00_1829 =
											(BgL_typez00_1277 == (obj_t) (BgL_arg1812z00_508));
									}
									if (BgL_testz00_1829)
										{	/* Expand/define.scm 120 */
											BgL_arg1809z00_505 = CNST_TABLE_REF(((long) 0));
										}
									else
										{	/* Expand/define.scm 120 */
											BgL_arg1809z00_505 =
												BGl_makezd2typedzd2identz00zzast_identz00(CNST_TABLE_REF
												(((long) 0)), BgL_typezd2idzd2_1276);
								}}
								{	/* Expand/define.scm 124 */
									obj_t BgL_arg1813z00_509;

									obj_t BgL_arg1815z00_510;

									BgL_arg1813z00_509 =
										BGl_expandzd2argszd2zzexpand_lambdaz00(BgL_argsz00_1278,
										BgL_ez00_1279);
									{	/* Expand/define.scm 125 */
										obj_t BgL_arg1819z00_514;

										BgL_arg1819z00_514 =
											BGl_normaliza7ezd2prognzf2locz87zztools_prognz00
											(BgL_bodyz00_1280, BgL_locz00_497);
										BgL_arg1815z00_510 =
											PROCEDURE_ENTRY(BgL_ez00_1279) (BgL_ez00_1279,
											BgL_arg1819z00_514, BgL_ez00_1279, BEOA);
									}
									{	/* Expand/define.scm 120 */
										obj_t BgL_list1817z00_512;

										{	/* Expand/define.scm 120 */
											obj_t BgL_arg1818z00_513;

											BgL_arg1818z00_513 = MAKE_PAIR(BNIL, BNIL);
											BgL_list1817z00_512 =
												MAKE_PAIR(BgL_arg1815z00_510, BgL_arg1818z00_513);
										}
										BgL_arg1810z00_506 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg1813z00_509, BgL_list1817z00_512);
								}}
								BgL_nbodyz00_498 =
									MAKE_PAIR(BgL_arg1809z00_505, BgL_arg1810z00_506);
							}
							{	/* Expand/define.scm 120 */
								obj_t BgL_enbodyz00_499;

								BgL_enbodyz00_499 =
									BGl_epairifyz00zztools_miscz00(BgL_nbodyz00_498,
									BgL_bodyz00_1280);
								{	/* Expand/define.scm 126 */

									{	/* Expand/define.scm 128 */
										obj_t BgL_arg1803z00_500;

										{	/* Expand/define.scm 128 */
											obj_t BgL_arg1804z00_501;

											obj_t BgL_arg1805z00_502;

											BgL_arg1804z00_501 = CNST_TABLE_REF(((long) 2));
											{	/* Expand/define.scm 128 */
												obj_t BgL_list1806z00_503;

												{	/* Expand/define.scm 128 */
													obj_t BgL_arg1807z00_504;

													BgL_arg1807z00_504 = MAKE_PAIR(BNIL, BNIL);
													BgL_list1806z00_503 =
														MAKE_PAIR(BgL_enbodyz00_499, BgL_arg1807z00_504);
												}
												BgL_arg1805z00_502 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_namezd2idzd2_1281, BgL_list1806z00_503);
											}
											BgL_arg1803z00_500 =
												MAKE_PAIR(BgL_arg1804z00_501, BgL_arg1805z00_502);
										}
										return
											BGl_replacez12z12zztools_miscz00(BgL_xz00_1274,
											BgL_arg1803z00_500);
									}
								}
							}
						}
					}
				}
			}
		}
	}



/* <anonymous:1776> */
	obj_t BGl_zc3anonymousza31776ze3z83zzexpand_definez00(obj_t BgL_envz00_1282)
	{
		AN_OBJECT;
		{	/* Expand/define.scm 92 */
			{	/* Expand/define.scm 93 */
				obj_t BgL_xz00_1283;

				obj_t BgL_typezd2idzd2_1284;

				obj_t BgL_typez00_1285;

				obj_t BgL_bodyz00_1286;

				obj_t BgL_ez00_1287;

				obj_t BgL_argsz00_1288;

				obj_t BgL_namezd2idzd2_1289;

				BgL_xz00_1283 = PROCEDURE_REF(BgL_envz00_1282, (int) (((long) 0)));
				BgL_typezd2idzd2_1284 =
					PROCEDURE_REF(BgL_envz00_1282, (int) (((long) 1)));
				BgL_typez00_1285 = PROCEDURE_REF(BgL_envz00_1282, (int) (((long) 2)));
				BgL_bodyz00_1286 = PROCEDURE_REF(BgL_envz00_1282, (int) (((long) 3)));
				BgL_ez00_1287 = PROCEDURE_REF(BgL_envz00_1282, (int) (((long) 4)));
				BgL_argsz00_1288 = PROCEDURE_REF(BgL_envz00_1282, (int) (((long) 5)));
				BgL_namezd2idzd2_1289 =
					PROCEDURE_REF(BgL_envz00_1282, (int) (((long) 6)));
				{

					{	/* Expand/define.scm 93 */
						obj_t BgL_locz00_465;

						{	/* Expand/define.scm 93 */
							obj_t BgL_arg1793z00_482;

							obj_t BgL_arg1794z00_483;

							{	/* Expand/define.scm 93 */
								obj_t BgL_pairz00_1113;

								BgL_pairz00_1113 = BgL_xz00_1283;
								BgL_arg1793z00_482 = CDR(CDR(BgL_pairz00_1113));
							}
							BgL_arg1794z00_483 =
								BGl_findzd2locationzd2zztools_locationz00(BgL_xz00_1283);
							BgL_locz00_465 =
								BGl_findzd2locationzf2locz20zztools_locationz00
								(BgL_arg1793z00_482, BgL_arg1794z00_483);
						}
						{	/* Expand/define.scm 93 */
							obj_t BgL_nbodyz00_466;

							{	/* Expand/define.scm 95 */
								obj_t BgL_arg1783z00_473;

								obj_t BgL_arg1784z00_474;

								{	/* Expand/define.scm 95 */
									bool_t BgL_testz00_1869;

									{	/* Expand/define.scm 95 */
										BgL_typez00_bglt BgL_arg1786z00_476;

										BgL_arg1786z00_476 =
											BGl_getzd2defaultzd2typez00zztype_cachez00();
										BgL_testz00_1869 =
											(BgL_typez00_1285 == (obj_t) (BgL_arg1786z00_476));
									}
									if (BgL_testz00_1869)
										{	/* Expand/define.scm 95 */
											BgL_arg1783z00_473 = CNST_TABLE_REF(((long) 0));
										}
									else
										{	/* Expand/define.scm 95 */
											BgL_arg1783z00_473 =
												BGl_makezd2typedzd2identz00zzast_identz00(CNST_TABLE_REF
												(((long) 0)), BgL_typezd2idzd2_1284);
								}}
								{	/* Expand/define.scm 99 */
									obj_t BgL_arg1787z00_477;

									{	/* Expand/define.scm 99 */
										obj_t BgL_arg1792z00_481;

										BgL_arg1792z00_481 =
											BGl_normaliza7ezd2prognzf2locz87zztools_prognz00
											(BgL_bodyz00_1286, BgL_locz00_465);
										BgL_arg1787z00_477 =
											PROCEDURE_ENTRY(BgL_ez00_1287) (BgL_ez00_1287,
											BgL_arg1792z00_481, BgL_ez00_1287, BEOA);
									}
									{	/* Expand/define.scm 95 */
										obj_t BgL_list1790z00_479;

										{	/* Expand/define.scm 95 */
											obj_t BgL_arg1791z00_480;

											BgL_arg1791z00_480 = MAKE_PAIR(BNIL, BNIL);
											BgL_list1790z00_479 =
												MAKE_PAIR(BgL_arg1787z00_477, BgL_arg1791z00_480);
										}
										BgL_arg1784z00_474 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_argsz00_1288, BgL_list1790z00_479);
								}}
								BgL_nbodyz00_466 =
									MAKE_PAIR(BgL_arg1783z00_473, BgL_arg1784z00_474);
							}
							{	/* Expand/define.scm 95 */
								obj_t BgL_enbodyz00_467;

								BgL_enbodyz00_467 =
									BGl_epairifyz00zztools_miscz00(BgL_nbodyz00_466,
									BgL_bodyz00_1286);
								{	/* Expand/define.scm 100 */

									{	/* Expand/define.scm 101 */
										obj_t BgL_arg1777z00_468;

										{	/* Expand/define.scm 101 */
											obj_t BgL_arg1778z00_469;

											obj_t BgL_arg1779z00_470;

											BgL_arg1778z00_469 = CNST_TABLE_REF(((long) 2));
											{	/* Expand/define.scm 101 */
												obj_t BgL_list1780z00_471;

												{	/* Expand/define.scm 101 */
													obj_t BgL_arg1782z00_472;

													BgL_arg1782z00_472 = MAKE_PAIR(BNIL, BNIL);
													BgL_list1780z00_471 =
														MAKE_PAIR(BgL_enbodyz00_467, BgL_arg1782z00_472);
												}
												BgL_arg1779z00_470 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_namezd2idzd2_1289, BgL_list1780z00_471);
											}
											BgL_arg1777z00_468 =
												MAKE_PAIR(BgL_arg1778z00_469, BgL_arg1779z00_470);
										}
										return
											BGl_replacez12z12zztools_miscz00(BgL_xz00_1283,
											BgL_arg1777z00_468);
									}
								}
							}
						}
					}
				}
			}
		}
	}



/* expand-set! */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2setz12zc0zzexpand_definez00(obj_t
		BgL_xz00_17, obj_t BgL_ez00_18)
	{
		AN_OBJECT;
		{	/* Expand/define.scm 148 */
			if (CBOOL(BGl_internalzd2definitionzf3z21zzexpand_lambdaz00))
				{	/* Expand/define.scm 165 */
					return
						BGl_internalzd2expandzd2setz12z12zzexpand_definez00(BgL_xz00_17,
						BgL_ez00_18);
				}
			else
				{	/* Expand/define.scm 165 */
					BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 = BTRUE;
					{	/* Expand/define.scm 169 */
						obj_t BgL_resz00_540;

						BgL_resz00_540 =
							BGl_internalzd2expandzd2setz12z12zzexpand_definez00(BgL_xz00_17,
							BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00
							(BgL_ez00_18));
						BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 = BFALSE;
						return
							BGl_replacez12z12zztools_miscz00(BgL_xz00_17, BgL_resz00_540);
					}
				}
		}
	}



/* internal-expand-set! */
	obj_t BGl_internalzd2expandzd2setz12z12zzexpand_definez00(obj_t BgL_xz00_542,
		obj_t BgL_ez00_543)
	{
		AN_OBJECT;
		{	/* Expand/define.scm 164 */
			{
				obj_t BgL_varz00_545;

				obj_t BgL_valuez00_546;

				obj_t BgL_idz00_548;

				obj_t BgL_varz00_549;

				obj_t BgL_valuez00_550;

				if (PAIRP(BgL_xz00_542))
					{	/* Expand/define.scm 164 */
						obj_t BgL_cdrzd22472zd2_555;

						BgL_cdrzd22472zd2_555 = CDR(BgL_xz00_542);
						if (PAIRP(BgL_cdrzd22472zd2_555))
							{	/* Expand/define.scm 164 */
								obj_t BgL_carzd22475zd2_557;

								obj_t BgL_cdrzd22476zd2_558;

								BgL_carzd22475zd2_557 = CAR(BgL_cdrzd22472zd2_555);
								BgL_cdrzd22476zd2_558 = CDR(BgL_cdrzd22472zd2_555);
								if (SYMBOLP(BgL_carzd22475zd2_557))
									{	/* Expand/define.scm 164 */
										if (PAIRP(BgL_cdrzd22476zd2_558))
											{	/* Expand/define.scm 164 */
												if (NULLP(CDR(BgL_cdrzd22476zd2_558)))
													{	/* Expand/define.scm 164 */
														BgL_varz00_545 = BgL_carzd22475zd2_557;
														BgL_valuez00_546 = CAR(BgL_cdrzd22476zd2_558);
														BGl_enterzd2functionzd2zztools_errorz00
															(BgL_varz00_545);
														{	/* Expand/define.scm 154 */
															obj_t BgL_evz00_585;

															BgL_evz00_585 =
																PROCEDURE_ENTRY(BgL_ez00_543) (BgL_ez00_543,
																BgL_valuez00_546, BgL_ez00_543, BEOA);
															BGl_leavezd2functionzd2zztools_errorz00();
															{	/* Expand/define.scm 156 */
																obj_t BgL_arg1865z00_586;

																{	/* Expand/define.scm 156 */
																	obj_t BgL_arg1866z00_587;

																	obj_t BgL_arg1867z00_588;

																	BgL_arg1866z00_587 =
																		CNST_TABLE_REF(((long) 3));
																	{	/* Expand/define.scm 156 */
																		obj_t BgL_list1868z00_589;

																		{	/* Expand/define.scm 156 */
																			obj_t BgL_arg1869z00_590;

																			BgL_arg1869z00_590 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list1868z00_589 =
																				MAKE_PAIR(BgL_evz00_585,
																				BgL_arg1869z00_590);
																		}
																		BgL_arg1867z00_588 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_varz00_545, BgL_list1868z00_589);
																	}
																	BgL_arg1865z00_586 =
																		MAKE_PAIR(BgL_arg1866z00_587,
																		BgL_arg1867z00_588);
																}
																return
																	BGl_replacez12z12zztools_miscz00(BgL_xz00_542,
																	BgL_arg1865z00_586);
															}
														}
													}
												else
													{	/* Expand/define.scm 164 */
													BgL_tagzd22464zd2_552:
														return
															BGl_errorz00zz__errorz00(BFALSE,
															BGl_string2150z00zzexpand_definez00,
															BgL_xz00_542);
													}
											}
										else
											{	/* Expand/define.scm 164 */
												goto BgL_tagzd22464zd2_552;
											}
									}
								else
									{	/* Expand/define.scm 164 */
										obj_t BgL_carzd22510zd2_565;

										obj_t BgL_cdrzd22511zd2_566;

										BgL_carzd22510zd2_565 = CAR(BgL_cdrzd22472zd2_555);
										BgL_cdrzd22511zd2_566 = CDR(BgL_cdrzd22472zd2_555);
										if (PAIRP(BgL_carzd22510zd2_565))
											{	/* Expand/define.scm 164 */
												obj_t BgL_cdrzd22517zd2_568;

												BgL_cdrzd22517zd2_568 = CDR(BgL_carzd22510zd2_565);
												if (
													(CAR(BgL_carzd22510zd2_565) ==
														CNST_TABLE_REF(((long) 4))))
													{	/* Expand/define.scm 164 */
														if (PAIRP(BgL_cdrzd22517zd2_568))
															{	/* Expand/define.scm 164 */
																obj_t BgL_carzd22519zd2_571;

																obj_t BgL_cdrzd22520zd2_572;

																BgL_carzd22519zd2_571 =
																	CAR(BgL_cdrzd22517zd2_568);
																BgL_cdrzd22520zd2_572 =
																	CDR(BgL_cdrzd22517zd2_568);
																if (SYMBOLP(BgL_carzd22519zd2_571))
																	{	/* Expand/define.scm 164 */
																		if (PAIRP(BgL_cdrzd22520zd2_572))
																			{	/* Expand/define.scm 164 */
																				bool_t BgL_testz00_1939;

																				{	/* Expand/define.scm 164 */
																					obj_t BgL_auxz00_1940;

																					BgL_auxz00_1940 =
																						CAR(BgL_cdrzd22520zd2_572);
																					BgL_testz00_1939 =
																						SYMBOLP(BgL_auxz00_1940);
																				}
																				if (BgL_testz00_1939)
																					{	/* Expand/define.scm 164 */
																						if (NULLP(CDR
																								(BgL_cdrzd22520zd2_572)))
																							{	/* Expand/define.scm 164 */
																								if (PAIRP
																									(BgL_cdrzd22511zd2_566))
																									{	/* Expand/define.scm 164 */
																										if (NULLP(CDR
																												(BgL_cdrzd22511zd2_566)))
																											{	/* Expand/define.scm 164 */
																												BgL_idz00_548 =
																													BgL_carzd22519zd2_571;
																												BgL_varz00_549 =
																													BgL_carzd22510zd2_565;
																												BgL_valuez00_550 =
																													CAR
																													(BgL_cdrzd22511zd2_566);
																												BGl_enterzd2functionzd2zztools_errorz00
																													(BgL_idz00_548);
																												{	/* Expand/define.scm 160 */
																													obj_t BgL_evz00_591;

																													BgL_evz00_591 =
																														PROCEDURE_ENTRY
																														(BgL_ez00_543)
																														(BgL_ez00_543,
																														BgL_valuez00_550,
																														BgL_ez00_543, BEOA);
																													BGl_leavezd2functionzd2zztools_errorz00
																														();
																													{	/* Expand/define.scm 162 */
																														obj_t
																															BgL_arg1870z00_592;
																														{	/* Expand/define.scm 162 */
																															obj_t
																																BgL_arg1871z00_593;
																															obj_t
																																BgL_arg1872z00_594;
																															BgL_arg1871z00_593
																																=
																																CNST_TABLE_REF((
																																	(long) 3));
																															{	/* Expand/define.scm 162 */
																																obj_t
																																	BgL_list1873z00_595;
																																{	/* Expand/define.scm 162 */
																																	obj_t
																																		BgL_arg1874z00_596;
																																	BgL_arg1874z00_596
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_list1873z00_595
																																		=
																																		MAKE_PAIR
																																		(BgL_evz00_591,
																																		BgL_arg1874z00_596);
																																}
																																BgL_arg1872z00_594
																																	=
																																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																	(BgL_varz00_549,
																																	BgL_list1873z00_595);
																															}
																															BgL_arg1870z00_592
																																=
																																MAKE_PAIR
																																(BgL_arg1871z00_593,
																																BgL_arg1872z00_594);
																														}
																														return
																															BGl_replacez12z12zztools_miscz00
																															(BgL_xz00_542,
																															BgL_arg1870z00_592);
																													}
																												}
																											}
																										else
																											{	/* Expand/define.scm 164 */
																												goto
																													BgL_tagzd22464zd2_552;
																											}
																									}
																								else
																									{	/* Expand/define.scm 164 */
																										goto BgL_tagzd22464zd2_552;
																									}
																							}
																						else
																							{	/* Expand/define.scm 164 */
																								goto BgL_tagzd22464zd2_552;
																							}
																					}
																				else
																					{	/* Expand/define.scm 164 */
																						goto BgL_tagzd22464zd2_552;
																					}
																			}
																		else
																			{	/* Expand/define.scm 164 */
																				goto BgL_tagzd22464zd2_552;
																			}
																	}
																else
																	{	/* Expand/define.scm 164 */
																		goto BgL_tagzd22464zd2_552;
																	}
															}
														else
															{	/* Expand/define.scm 164 */
																goto BgL_tagzd22464zd2_552;
															}
													}
												else
													{	/* Expand/define.scm 164 */
														goto BgL_tagzd22464zd2_552;
													}
											}
										else
											{	/* Expand/define.scm 164 */
												goto BgL_tagzd22464zd2_552;
											}
									}
							}
						else
							{	/* Expand/define.scm 164 */
								goto BgL_tagzd22464zd2_552;
							}
					}
				else
					{	/* Expand/define.scm 164 */
						goto BgL_tagzd22464zd2_552;
					}
			}
		}
	}



/* _expand-set! */
	obj_t BGl__expandzd2setz12zc0zzexpand_definez00(obj_t BgL_envz00_1290,
		obj_t BgL_xz00_1291, obj_t BgL_ez00_1292)
	{
		AN_OBJECT;
		{	/* Expand/define.scm 148 */
			return
				BGl_expandzd2setz12zc0zzexpand_definez00(BgL_xz00_1291, BgL_ez00_1292);
		}
	}



/* expand-method */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2methodzd2zzexpand_definez00(obj_t
		BgL_xz00_19, obj_t BgL_ez00_20)
	{
		AN_OBJECT;
		{	/* Expand/define.scm 176 */
			{
				obj_t BgL_kwz00_598;

				obj_t BgL_idz00_599;

				obj_t BgL_argsz00_600;

				obj_t BgL_bodyz00_601;

				if (PAIRP(BgL_xz00_19))
					{	/* Expand/define.scm 177 */
						obj_t BgL_cdrzd22554zd2_606;

						BgL_cdrzd22554zd2_606 = CDR(BgL_xz00_19);
						if (PAIRP(BgL_cdrzd22554zd2_606))
							{	/* Expand/define.scm 177 */
								obj_t BgL_carzd22559zd2_608;

								obj_t BgL_cdrzd22560zd2_609;

								BgL_carzd22559zd2_608 = CAR(BgL_cdrzd22554zd2_606);
								BgL_cdrzd22560zd2_609 = CDR(BgL_cdrzd22554zd2_606);
								if (PAIRP(BgL_carzd22559zd2_608))
									{	/* Expand/define.scm 177 */
										obj_t BgL_carzd22563zd2_611;

										BgL_carzd22563zd2_611 = CAR(BgL_carzd22559zd2_608);
										if (SYMBOLP(BgL_carzd22563zd2_611))
											{	/* Expand/define.scm 177 */
												if (NULLP(BgL_cdrzd22560zd2_609))
													{	/* Expand/define.scm 177 */
													BgL_tagzd22543zd2_603:
														return
															BGl_errorz00zz__errorz00(BFALSE,
															BGl_string2151z00zzexpand_definez00, BgL_xz00_19);
													}
												else
													{	/* Expand/define.scm 177 */
														BgL_kwz00_598 = CAR(BgL_xz00_19);
														BgL_idz00_599 = BgL_carzd22563zd2_611;
														BgL_argsz00_600 = CDR(BgL_carzd22559zd2_608);
														BgL_bodyz00_601 = BgL_cdrzd22560zd2_609;
														{	/* Expand/define.scm 180 */
															obj_t BgL_arg1882z00_616;

															obj_t BgL_arg1883z00_617;

															obj_t BgL_arg1884z00_618;

															BgL_arg1882z00_616 =
																BGl_argsza2zd2ze3argszd2listz41zztools_argsz00
																(BgL_argsz00_600);
															BgL_arg1883z00_617 = CNST_TABLE_REF(((long) 1));
															BgL_arg1884z00_618 =
																BGl_findzd2locationzd2zztools_locationz00
																(BgL_xz00_19);
															{	/* Expand/define.scm 184 */
																obj_t BgL_zc3anonymousza31887ze3z83_1293;

																BgL_zc3anonymousza31887ze3z83_1293 =
																	make_fx_procedure
																	(BGl_zc3anonymousza31887ze3z83zzexpand_definez00,
																	(int) (((long) 0)), (int) (((long) 6)));
																PROCEDURE_SET
																	(BgL_zc3anonymousza31887ze3z83_1293,
																	(int) (((long) 0)), BgL_kwz00_598);
																PROCEDURE_SET
																	(BgL_zc3anonymousza31887ze3z83_1293,
																	(int) (((long) 1)), BgL_ez00_20);
																PROCEDURE_SET
																	(BgL_zc3anonymousza31887ze3z83_1293,
																	(int) (((long) 2)), BgL_idz00_599);
																PROCEDURE_SET
																	(BgL_zc3anonymousza31887ze3z83_1293,
																	(int) (((long) 3)), BgL_argsz00_600);
																PROCEDURE_SET
																	(BgL_zc3anonymousza31887ze3z83_1293,
																	(int) (((long) 4)), BgL_bodyz00_601);
																PROCEDURE_SET
																	(BgL_zc3anonymousza31887ze3z83_1293,
																	(int) (((long) 5)), BgL_xz00_19);
																return
																	BGl_withzd2lexicalzd2zzexpand_epsz00
																	(BgL_arg1882z00_616, BgL_arg1883z00_617,
																	BgL_arg1884z00_618,
																	BgL_zc3anonymousza31887ze3z83_1293);
															}
														}
													}
											}
										else
											{	/* Expand/define.scm 177 */
												goto BgL_tagzd22543zd2_603;
											}
									}
								else
									{	/* Expand/define.scm 177 */
										goto BgL_tagzd22543zd2_603;
									}
							}
						else
							{	/* Expand/define.scm 177 */
								goto BgL_tagzd22543zd2_603;
							}
					}
				else
					{	/* Expand/define.scm 177 */
						goto BgL_tagzd22543zd2_603;
					}
			}
		}
	}



/* _expand-method */
	obj_t BGl__expandzd2methodzd2zzexpand_definez00(obj_t BgL_envz00_1294,
		obj_t BgL_xz00_1295, obj_t BgL_ez00_1296)
	{
		AN_OBJECT;
		{	/* Expand/define.scm 176 */
			return
				BGl_expandzd2methodzd2zzexpand_definez00(BgL_xz00_1295, BgL_ez00_1296);
		}
	}



/* <anonymous:1887> */
	obj_t BGl_zc3anonymousza31887ze3z83zzexpand_definez00(obj_t BgL_envz00_1297)
	{
		AN_OBJECT;
		{	/* Expand/define.scm 183 */
			{	/* Expand/define.scm 184 */
				obj_t BgL_kwz00_1298;

				obj_t BgL_ez00_1299;

				obj_t BgL_idz00_1300;

				obj_t BgL_argsz00_1301;

				obj_t BgL_bodyz00_1302;

				obj_t BgL_xz00_1303;

				BgL_kwz00_1298 = PROCEDURE_REF(BgL_envz00_1297, (int) (((long) 0)));
				BgL_ez00_1299 = PROCEDURE_REF(BgL_envz00_1297, (int) (((long) 1)));
				BgL_idz00_1300 = PROCEDURE_REF(BgL_envz00_1297, (int) (((long) 2)));
				BgL_argsz00_1301 = PROCEDURE_REF(BgL_envz00_1297, (int) (((long) 3)));
				BgL_bodyz00_1302 = PROCEDURE_REF(BgL_envz00_1297, (int) (((long) 4)));
				BgL_xz00_1303 = PROCEDURE_REF(BgL_envz00_1297, (int) (((long) 5)));
				{

					return
						BGl_replacez12z12zztools_miscz00(BgL_xz00_1303,
						BGl_dozd2inlinezf2genericzf2methodzd2zzexpand_definez00
						(BgL_kwz00_1298, BgL_ez00_1299, BgL_idz00_1300, BgL_idz00_1300,
							BgL_argsz00_1301, BgL_bodyz00_1302, BgL_xz00_1303));
				}
			}
		}
	}



/* expand-inline */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2inlinezd2zzexpand_definez00(obj_t
		BgL_xz00_21, obj_t BgL_ez00_22)
	{
		AN_OBJECT;
		{	/* Expand/define.scm 193 */
			{
				obj_t BgL_kwz00_623;

				obj_t BgL_idz00_624;

				obj_t BgL_namez00_625;

				obj_t BgL_argsz00_626;

				obj_t BgL_bodyz00_627;

				if (PAIRP(BgL_xz00_21))
					{	/* Expand/define.scm 194 */
						obj_t BgL_cdrzd22585zd2_632;

						BgL_cdrzd22585zd2_632 = CDR(BgL_xz00_21);
						if (PAIRP(BgL_cdrzd22585zd2_632))
							{	/* Expand/define.scm 194 */
								obj_t BgL_carzd22591zd2_634;

								obj_t BgL_cdrzd22592zd2_635;

								BgL_carzd22591zd2_634 = CAR(BgL_cdrzd22585zd2_632);
								BgL_cdrzd22592zd2_635 = CDR(BgL_cdrzd22585zd2_632);
								if (PAIRP(BgL_carzd22591zd2_634))
									{	/* Expand/define.scm 194 */
										obj_t BgL_carzd22596zd2_637;

										BgL_carzd22596zd2_637 = CAR(BgL_carzd22591zd2_634);
										{
											obj_t BgL_namez00_638;

											if (SYMBOLP(BgL_carzd22596zd2_637))
												{	/* Expand/define.scm 194 */
													BgL_namez00_638 = BgL_carzd22596zd2_637;
												BgL_kapzd22603zd2_639:
													if (NULLP(BgL_cdrzd22592zd2_635))
														{	/* Expand/define.scm 194 */
														BgL_tagzd22572zd2_629:
															return
																BGl_errorz00zz__errorz00(BFALSE,
																BGl_string2152z00zzexpand_definez00,
																BgL_xz00_21);
														}
													else
														{	/* Expand/define.scm 194 */
															BgL_kwz00_623 = CAR(BgL_xz00_21);
															BgL_idz00_624 = BgL_carzd22596zd2_637;
															BgL_namez00_625 = BgL_namez00_638;
															BgL_argsz00_626 = CDR(BgL_carzd22591zd2_634);
															BgL_bodyz00_627 = BgL_cdrzd22592zd2_635;
															{	/* Expand/define.scm 199 */
																obj_t BgL_arg1907z00_658;

																obj_t BgL_arg1908z00_659;

																obj_t BgL_arg1909z00_660;

																BgL_arg1907z00_658 =
																	BGl_argsza2zd2ze3argszd2listz41zztools_argsz00
																	(BgL_argsz00_626);
																BgL_arg1908z00_659 = CNST_TABLE_REF(((long) 1));
																BgL_arg1909z00_660 =
																	BGl_findzd2locationzd2zztools_locationz00
																	(BgL_xz00_21);
																{	/* Expand/define.scm 203 */
																	obj_t BgL_zc3anonymousza31911ze3z83_1304;

																	BgL_zc3anonymousza31911ze3z83_1304 =
																		make_fx_procedure
																		(BGl_zc3anonymousza31911ze3z83zzexpand_definez00,
																		(int) (((long) 0)), (int) (((long) 7)));
																	PROCEDURE_SET
																		(BgL_zc3anonymousza31911ze3z83_1304,
																		(int) (((long) 0)), BgL_kwz00_623);
																	PROCEDURE_SET
																		(BgL_zc3anonymousza31911ze3z83_1304,
																		(int) (((long) 1)), BgL_ez00_22);
																	PROCEDURE_SET
																		(BgL_zc3anonymousza31911ze3z83_1304,
																		(int) (((long) 2)), BgL_idz00_624);
																	PROCEDURE_SET
																		(BgL_zc3anonymousza31911ze3z83_1304,
																		(int) (((long) 3)), BgL_namez00_625);
																	PROCEDURE_SET
																		(BgL_zc3anonymousza31911ze3z83_1304,
																		(int) (((long) 4)), BgL_argsz00_626);
																	PROCEDURE_SET
																		(BgL_zc3anonymousza31911ze3z83_1304,
																		(int) (((long) 5)), BgL_bodyz00_627);
																	PROCEDURE_SET
																		(BgL_zc3anonymousza31911ze3z83_1304,
																		(int) (((long) 6)), BgL_xz00_21);
																	return
																		BGl_withzd2lexicalzd2zzexpand_epsz00
																		(BgL_arg1907z00_658, BgL_arg1908z00_659,
																		BgL_arg1909z00_660,
																		BgL_zc3anonymousza31911ze3z83_1304);
																}
															}
														}
												}
											else
												{	/* Expand/define.scm 194 */
													if (PAIRP(BgL_carzd22596zd2_637))
														{	/* Expand/define.scm 194 */
															obj_t BgL_cdrzd22614zd2_642;

															BgL_cdrzd22614zd2_642 =
																CDR(BgL_carzd22596zd2_637);
															if (
																(CAR(BgL_carzd22596zd2_637) ==
																	CNST_TABLE_REF(((long) 4))))
																{	/* Expand/define.scm 194 */
																	if (PAIRP(BgL_cdrzd22614zd2_642))
																		{	/* Expand/define.scm 194 */
																			obj_t BgL_carzd22616zd2_645;

																			obj_t BgL_cdrzd22617zd2_646;

																			BgL_carzd22616zd2_645 =
																				CAR(BgL_cdrzd22614zd2_642);
																			BgL_cdrzd22617zd2_646 =
																				CDR(BgL_cdrzd22614zd2_642);
																			if (SYMBOLP(BgL_carzd22616zd2_645))
																				{	/* Expand/define.scm 194 */
																					if (PAIRP(BgL_cdrzd22617zd2_646))
																						{	/* Expand/define.scm 194 */
																							bool_t BgL_testz00_2067;

																							{	/* Expand/define.scm 194 */
																								obj_t BgL_auxz00_2068;

																								BgL_auxz00_2068 =
																									CAR(BgL_cdrzd22617zd2_646);
																								BgL_testz00_2067 =
																									SYMBOLP(BgL_auxz00_2068);
																							}
																							if (BgL_testz00_2067)
																								{	/* Expand/define.scm 194 */
																									if (NULLP(CDR
																											(BgL_cdrzd22617zd2_646)))
																										{
																											obj_t BgL_namez00_2074;

																											BgL_namez00_2074 =
																												BgL_carzd22616zd2_645;
																											BgL_namez00_638 =
																												BgL_namez00_2074;
																											goto
																												BgL_kapzd22603zd2_639;
																										}
																									else
																										{	/* Expand/define.scm 194 */
																											goto
																												BgL_tagzd22572zd2_629;
																										}
																								}
																							else
																								{	/* Expand/define.scm 194 */
																									goto BgL_tagzd22572zd2_629;
																								}
																						}
																					else
																						{	/* Expand/define.scm 194 */
																							goto BgL_tagzd22572zd2_629;
																						}
																				}
																			else
																				{	/* Expand/define.scm 194 */
																					goto BgL_tagzd22572zd2_629;
																				}
																		}
																	else
																		{	/* Expand/define.scm 194 */
																			goto BgL_tagzd22572zd2_629;
																		}
																}
															else
																{	/* Expand/define.scm 194 */
																	goto BgL_tagzd22572zd2_629;
																}
														}
													else
														{	/* Expand/define.scm 194 */
															goto BgL_tagzd22572zd2_629;
														}
												}
										}
									}
								else
									{	/* Expand/define.scm 194 */
										goto BgL_tagzd22572zd2_629;
									}
							}
						else
							{	/* Expand/define.scm 194 */
								goto BgL_tagzd22572zd2_629;
							}
					}
				else
					{	/* Expand/define.scm 194 */
						goto BgL_tagzd22572zd2_629;
					}
			}
		}
	}



/* _expand-inline */
	obj_t BGl__expandzd2inlinezd2zzexpand_definez00(obj_t BgL_envz00_1305,
		obj_t BgL_xz00_1306, obj_t BgL_ez00_1307)
	{
		AN_OBJECT;
		{	/* Expand/define.scm 193 */
			return
				BGl_expandzd2inlinezd2zzexpand_definez00(BgL_xz00_1306, BgL_ez00_1307);
		}
	}



/* <anonymous:1911> */
	obj_t BGl_zc3anonymousza31911ze3z83zzexpand_definez00(obj_t BgL_envz00_1308)
	{
		AN_OBJECT;
		{	/* Expand/define.scm 202 */
			{	/* Expand/define.scm 203 */
				obj_t BgL_kwz00_1309;

				obj_t BgL_ez00_1310;

				obj_t BgL_idz00_1311;

				obj_t BgL_namez00_1312;

				obj_t BgL_argsz00_1313;

				obj_t BgL_bodyz00_1314;

				obj_t BgL_xz00_1315;

				BgL_kwz00_1309 = PROCEDURE_REF(BgL_envz00_1308, (int) (((long) 0)));
				BgL_ez00_1310 = PROCEDURE_REF(BgL_envz00_1308, (int) (((long) 1)));
				BgL_idz00_1311 = PROCEDURE_REF(BgL_envz00_1308, (int) (((long) 2)));
				BgL_namez00_1312 = PROCEDURE_REF(BgL_envz00_1308, (int) (((long) 3)));
				BgL_argsz00_1313 = PROCEDURE_REF(BgL_envz00_1308, (int) (((long) 4)));
				BgL_bodyz00_1314 = PROCEDURE_REF(BgL_envz00_1308, (int) (((long) 5)));
				BgL_xz00_1315 = PROCEDURE_REF(BgL_envz00_1308, (int) (((long) 6)));
				{

					return
						BGl_replacez12z12zztools_miscz00(BgL_xz00_1315,
						BGl_dozd2inlinezf2genericzf2methodzd2zzexpand_definez00
						(BgL_kwz00_1309, BgL_ez00_1310, BgL_idz00_1311, BgL_namez00_1312,
							BgL_argsz00_1313, BgL_bodyz00_1314, BgL_xz00_1315));
				}
			}
		}
	}



/* expand-generic */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2genericzd2zzexpand_definez00(obj_t
		BgL_xz00_23, obj_t BgL_ez00_24)
	{
		AN_OBJECT;
		{	/* Expand/define.scm 212 */
			{
				obj_t BgL_kwz00_665;

				obj_t BgL_idz00_666;

				obj_t BgL_namez00_667;

				obj_t BgL_argsz00_668;

				obj_t BgL_bodyz00_669;

				if (PAIRP(BgL_xz00_23))
					{	/* Expand/define.scm 213 */
						obj_t BgL_cdrzd22637zd2_674;

						BgL_cdrzd22637zd2_674 = CDR(BgL_xz00_23);
						{	/* Expand/define.scm 213 */
							obj_t BgL_kwz00_675;

							BgL_kwz00_675 = CAR(BgL_xz00_23);
							if (PAIRP(BgL_cdrzd22637zd2_674))
								{	/* Expand/define.scm 213 */
									obj_t BgL_carzd22643zd2_677;

									obj_t BgL_cdrzd22644zd2_678;

									BgL_carzd22643zd2_677 = CAR(BgL_cdrzd22637zd2_674);
									BgL_cdrzd22644zd2_678 = CDR(BgL_cdrzd22637zd2_674);
									if (PAIRP(BgL_carzd22643zd2_677))
										{	/* Expand/define.scm 213 */
											obj_t BgL_carzd22648zd2_680;

											obj_t BgL_cdrzd22649zd2_681;

											BgL_carzd22648zd2_680 = CAR(BgL_carzd22643zd2_677);
											BgL_cdrzd22649zd2_681 = CDR(BgL_carzd22643zd2_677);
											if (SYMBOLP(BgL_carzd22648zd2_680))
												{	/* Expand/define.scm 213 */
													BgL_kwz00_665 = BgL_kwz00_675;
													BgL_idz00_666 = BgL_carzd22648zd2_680;
													BgL_namez00_667 = BgL_carzd22648zd2_680;
													BgL_argsz00_668 = BgL_cdrzd22649zd2_681;
													BgL_bodyz00_669 = BgL_cdrzd22644zd2_678;
												BgL_tagzd22623zd2_670:
													{	/* Expand/define.scm 218 */
														obj_t BgL_arg1929z00_698;

														obj_t BgL_arg1930z00_699;

														obj_t BgL_arg1931z00_700;

														BgL_arg1929z00_698 =
															BGl_argsza2zd2ze3argszd2listz41zztools_argsz00
															(BgL_argsz00_668);
														BgL_arg1930z00_699 = CNST_TABLE_REF(((long) 1));
														BgL_arg1931z00_700 =
															BGl_findzd2locationzd2zztools_locationz00
															(BgL_xz00_23);
														{	/* Expand/define.scm 222 */
															obj_t BgL_zc3anonymousza31933ze3z83_1316;

															BgL_zc3anonymousza31933ze3z83_1316 =
																make_fx_procedure
																(BGl_zc3anonymousza31933ze3z83zzexpand_definez00,
																(int) (((long) 0)), (int) (((long) 7)));
															PROCEDURE_SET(BgL_zc3anonymousza31933ze3z83_1316,
																(int) (((long) 0)), BgL_kwz00_665);
															PROCEDURE_SET(BgL_zc3anonymousza31933ze3z83_1316,
																(int) (((long) 1)), BgL_ez00_24);
															PROCEDURE_SET(BgL_zc3anonymousza31933ze3z83_1316,
																(int) (((long) 2)), BgL_idz00_666);
															PROCEDURE_SET(BgL_zc3anonymousza31933ze3z83_1316,
																(int) (((long) 3)), BgL_namez00_667);
															PROCEDURE_SET(BgL_zc3anonymousza31933ze3z83_1316,
																(int) (((long) 4)), BgL_argsz00_668);
															PROCEDURE_SET(BgL_zc3anonymousza31933ze3z83_1316,
																(int) (((long) 5)), BgL_bodyz00_669);
															PROCEDURE_SET(BgL_zc3anonymousza31933ze3z83_1316,
																(int) (((long) 6)), BgL_xz00_23);
															return
																BGl_withzd2lexicalzd2zzexpand_epsz00
																(BgL_arg1929z00_698, BgL_arg1930z00_699,
																BgL_arg1931z00_700,
																BgL_zc3anonymousza31933ze3z83_1316);
														}
													}
												}
											else
												{	/* Expand/define.scm 213 */
													if (PAIRP(BgL_carzd22648zd2_680))
														{	/* Expand/define.scm 213 */
															obj_t BgL_cdrzd22665zd2_685;

															BgL_cdrzd22665zd2_685 =
																CDR(BgL_carzd22648zd2_680);
															if (
																(CAR(BgL_carzd22648zd2_680) ==
																	CNST_TABLE_REF(((long) 4))))
																{	/* Expand/define.scm 213 */
																	if (PAIRP(BgL_cdrzd22665zd2_685))
																		{	/* Expand/define.scm 213 */
																			obj_t BgL_carzd22667zd2_688;

																			obj_t BgL_cdrzd22668zd2_689;

																			BgL_carzd22667zd2_688 =
																				CAR(BgL_cdrzd22665zd2_685);
																			BgL_cdrzd22668zd2_689 =
																				CDR(BgL_cdrzd22665zd2_685);
																			if (SYMBOLP(BgL_carzd22667zd2_688))
																				{	/* Expand/define.scm 213 */
																					if (PAIRP(BgL_cdrzd22668zd2_689))
																						{	/* Expand/define.scm 213 */
																							bool_t BgL_testz00_2142;

																							{	/* Expand/define.scm 213 */
																								obj_t BgL_auxz00_2143;

																								BgL_auxz00_2143 =
																									CAR(BgL_cdrzd22668zd2_689);
																								BgL_testz00_2142 =
																									SYMBOLP(BgL_auxz00_2143);
																							}
																							if (BgL_testz00_2142)
																								{	/* Expand/define.scm 213 */
																									if (NULLP(CDR
																											(BgL_cdrzd22668zd2_689)))
																										{
																											obj_t BgL_bodyz00_2153;

																											obj_t BgL_argsz00_2152;

																											obj_t BgL_namez00_2151;

																											obj_t BgL_idz00_2150;

																											obj_t BgL_kwz00_2149;

																											BgL_kwz00_2149 =
																												BgL_kwz00_675;
																											BgL_idz00_2150 =
																												BgL_carzd22648zd2_680;
																											BgL_namez00_2151 =
																												BgL_carzd22667zd2_688;
																											BgL_argsz00_2152 =
																												BgL_cdrzd22649zd2_681;
																											BgL_bodyz00_2153 =
																												BgL_cdrzd22644zd2_678;
																											BgL_bodyz00_669 =
																												BgL_bodyz00_2153;
																											BgL_argsz00_668 =
																												BgL_argsz00_2152;
																											BgL_namez00_667 =
																												BgL_namez00_2151;
																											BgL_idz00_666 =
																												BgL_idz00_2150;
																											BgL_kwz00_665 =
																												BgL_kwz00_2149;
																											goto
																												BgL_tagzd22623zd2_670;
																										}
																									else
																										{	/* Expand/define.scm 213 */
																										BgL_tagzd22624zd2_671:
																											return
																												BGl_errorz00zz__errorz00
																												(BFALSE,
																												BGl_string2153z00zzexpand_definez00,
																												BgL_xz00_23);
																										}
																								}
																							else
																								{	/* Expand/define.scm 213 */
																									goto BgL_tagzd22624zd2_671;
																								}
																						}
																					else
																						{	/* Expand/define.scm 213 */
																							goto BgL_tagzd22624zd2_671;
																						}
																				}
																			else
																				{	/* Expand/define.scm 213 */
																					goto BgL_tagzd22624zd2_671;
																				}
																		}
																	else
																		{	/* Expand/define.scm 213 */
																			goto BgL_tagzd22624zd2_671;
																		}
																}
															else
																{	/* Expand/define.scm 213 */
																	goto BgL_tagzd22624zd2_671;
																}
														}
													else
														{	/* Expand/define.scm 213 */
															goto BgL_tagzd22624zd2_671;
														}
												}
										}
									else
										{	/* Expand/define.scm 213 */
											goto BgL_tagzd22624zd2_671;
										}
								}
							else
								{	/* Expand/define.scm 213 */
									goto BgL_tagzd22624zd2_671;
								}
						}
					}
				else
					{	/* Expand/define.scm 213 */
						goto BgL_tagzd22624zd2_671;
					}
			}
		}
	}



/* _expand-generic */
	obj_t BGl__expandzd2genericzd2zzexpand_definez00(obj_t BgL_envz00_1317,
		obj_t BgL_xz00_1318, obj_t BgL_ez00_1319)
	{
		AN_OBJECT;
		{	/* Expand/define.scm 212 */
			return
				BGl_expandzd2genericzd2zzexpand_definez00(BgL_xz00_1318, BgL_ez00_1319);
		}
	}



/* <anonymous:1933> */
	obj_t BGl_zc3anonymousza31933ze3z83zzexpand_definez00(obj_t BgL_envz00_1320)
	{
		AN_OBJECT;
		{	/* Expand/define.scm 221 */
			{	/* Expand/define.scm 222 */
				obj_t BgL_kwz00_1321;

				obj_t BgL_ez00_1322;

				obj_t BgL_idz00_1323;

				obj_t BgL_namez00_1324;

				obj_t BgL_argsz00_1325;

				obj_t BgL_bodyz00_1326;

				obj_t BgL_xz00_1327;

				BgL_kwz00_1321 = PROCEDURE_REF(BgL_envz00_1320, (int) (((long) 0)));
				BgL_ez00_1322 = PROCEDURE_REF(BgL_envz00_1320, (int) (((long) 1)));
				BgL_idz00_1323 = PROCEDURE_REF(BgL_envz00_1320, (int) (((long) 2)));
				BgL_namez00_1324 = PROCEDURE_REF(BgL_envz00_1320, (int) (((long) 3)));
				BgL_argsz00_1325 = PROCEDURE_REF(BgL_envz00_1320, (int) (((long) 4)));
				BgL_bodyz00_1326 = PROCEDURE_REF(BgL_envz00_1320, (int) (((long) 5)));
				BgL_xz00_1327 = PROCEDURE_REF(BgL_envz00_1320, (int) (((long) 6)));
				{

					return
						BGl_replacez12z12zztools_miscz00(BgL_xz00_1327,
						BGl_dozd2inlinezf2genericzf2methodzd2zzexpand_definez00
						(BgL_kwz00_1321, BgL_ez00_1322, BgL_idz00_1323, BgL_namez00_1324,
							BgL_argsz00_1325, BgL_bodyz00_1326, BgL_xz00_1327));
				}
			}
		}
	}



/* do-external-define-lambda */
	obj_t BGl_dozd2externalzd2definezd2lambdazd2zzexpand_definez00(obj_t
		BgL_ez00_25, obj_t BgL_namez00_26, obj_t BgL_argsz00_27,
		obj_t BgL_bodyz00_28, obj_t BgL_srcz00_29)
	{
		AN_OBJECT;
		{	/* Expand/define.scm 229 */
			BGl_enterzd2functionzd2zztools_errorz00(BgL_namez00_26);
			{	/* Expand/define.scm 231 */
				obj_t BgL_ozd2expzd2_706;

				BgL_ozd2expzd2_706 =
					BGl_findzd2Ozd2expanderz00zzexpand_expanderz00(BgL_namez00_26);
				{	/* Expand/define.scm 232 */
					obj_t BgL_gzd2expzd2_707;

					BgL_gzd2expzd2_707 =
						BGl_findzd2Gzd2expanderz00zzexpand_expanderz00(BgL_namez00_26);
					{	/* Expand/define.scm 233 */
						obj_t BgL_ez00_708;

						BgL_ez00_708 =
							BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00(BgL_ez00_25);
						{	/* Expand/define.scm 234 */

							{	/* Expand/define.scm 237 */
								bool_t BgL_testz00_2176;

								{	/* Expand/define.scm 237 */
									bool_t BgL_testz00_2177;

									if (STRUCTP(BgL_ozd2expzd2_706))
										{	/* Expand/define.scm 237 */
											BgL_testz00_2177 =
												(STRUCT_KEY(BgL_ozd2expzd2_706) ==
												CNST_TABLE_REF(((long) 5)));
										}
									else
										{	/* Expand/define.scm 237 */
											BgL_testz00_2177 = ((bool_t) 0);
										}
									if (BgL_testz00_2177)
										{	/* Expand/define.scm 237 */
											if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
												{	/* Expand/define.scm 237 */
													BgL_testz00_2176 = ((bool_t) 0);
												}
											else
												{	/* Expand/define.scm 237 */
													BgL_testz00_2176 = ((bool_t) 1);
												}
										}
									else
										{	/* Expand/define.scm 237 */
											BgL_testz00_2176 = ((bool_t) 0);
										}
								}
								if (BgL_testz00_2176)
									{	/* Expand/define.scm 237 */
										{	/* Expand/define.scm 239 */
											obj_t BgL_list1937z00_710;

											{	/* Expand/define.scm 239 */
												obj_t BgL_arg1940z00_712;

												{	/* Expand/define.scm 239 */
													obj_t BgL_arg1942z00_714;

													BgL_arg1942z00_714 = MAKE_PAIR(BgL_namez00_26, BNIL);
													BgL_arg1940z00_712 =
														MAKE_PAIR(BGl_string2154z00zzexpand_definez00,
														BgL_arg1942z00_714);
												}
												BgL_list1937z00_710 =
													MAKE_PAIR(BGl_string2155z00zzexpand_definez00,
													BgL_arg1940z00_712);
											}
											BGl_warningz00zz__errorz00(BgL_list1937z00_710);
										}
										BGl_unbindzd2Ozd2expanderz12z12zzexpand_expanderz00
											(BgL_namez00_26);
									}
								else
									{	/* Expand/define.scm 237 */
										BFALSE;
									}
							}
							{	/* Expand/define.scm 243 */
								bool_t BgL_testz00_2190;

								{	/* Expand/define.scm 243 */
									bool_t BgL_testz00_2191;

									if (STRUCTP(BgL_gzd2expzd2_707))
										{	/* Expand/define.scm 243 */
											BgL_testz00_2191 =
												(STRUCT_KEY(BgL_gzd2expzd2_707) ==
												CNST_TABLE_REF(((long) 5)));
										}
									else
										{	/* Expand/define.scm 243 */
											BgL_testz00_2191 = ((bool_t) 0);
										}
									if (BgL_testz00_2191)
										{	/* Expand/define.scm 243 */
											if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
												{	/* Expand/define.scm 243 */
													BgL_testz00_2190 = ((bool_t) 0);
												}
											else
												{	/* Expand/define.scm 243 */
													BgL_testz00_2190 = ((bool_t) 1);
												}
										}
									else
										{	/* Expand/define.scm 243 */
											BgL_testz00_2190 = ((bool_t) 0);
										}
								}
								if (BgL_testz00_2190)
									{	/* Expand/define.scm 243 */
										{	/* Expand/define.scm 245 */
											obj_t BgL_list1945z00_717;

											{	/* Expand/define.scm 245 */
												obj_t BgL_arg1948z00_719;

												{	/* Expand/define.scm 245 */
													obj_t BgL_arg1950z00_721;

													BgL_arg1950z00_721 = MAKE_PAIR(BgL_namez00_26, BNIL);
													BgL_arg1948z00_719 =
														MAKE_PAIR(BGl_string2156z00zzexpand_definez00,
														BgL_arg1950z00_721);
												}
												BgL_list1945z00_717 =
													MAKE_PAIR(BGl_string2155z00zzexpand_definez00,
													BgL_arg1948z00_719);
											}
											BGl_warningz00zz__errorz00(BgL_list1945z00_717);
										}
										BGl_unbindzd2Gzd2expanderz12z12zzexpand_expanderz00
											(BgL_namez00_26);
									}
								else
									{	/* Expand/define.scm 243 */
										BFALSE;
									}
							}
							{	/* Expand/define.scm 249 */
								obj_t BgL_locz00_723;

								{	/* Expand/define.scm 249 */
									obj_t BgL_arg1976z00_739;

									obj_t BgL_arg1977z00_740;

									{	/* Expand/define.scm 249 */
										obj_t BgL_pairz00_1226;

										BgL_pairz00_1226 = BgL_srcz00_29;
										BgL_arg1976z00_739 = CDR(CDR(BgL_pairz00_1226));
									}
									BgL_arg1977z00_740 =
										BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_29);
									BgL_locz00_723 =
										BGl_findzd2locationzf2locz20zztools_locationz00
										(BgL_arg1976z00_739, BgL_arg1977z00_740);
								}
								{	/* Expand/define.scm 249 */
									obj_t BgL_ebodyz00_724;

									{	/* Expand/define.scm 251 */
										obj_t BgL_arg1967z00_732;

										obj_t BgL_arg1968z00_733;

										obj_t BgL_arg1969z00_734;

										BgL_arg1967z00_732 =
											BGl_argsza2zd2ze3argszd2listz41zztools_argsz00
											(BgL_argsz00_27);
										BgL_arg1968z00_733 = CNST_TABLE_REF(((long) 1));
										BgL_arg1969z00_734 =
											BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_29);
										{	/* Expand/define.scm 254 */
											obj_t BgL_zc3anonymousza31971ze3z83_1328;

											BgL_zc3anonymousza31971ze3z83_1328 =
												make_fx_procedure
												(BGl_zc3anonymousza31971ze3z83zzexpand_definez00,
												(int) (((long) 0)), (int) (((long) 3)));
											PROCEDURE_SET(BgL_zc3anonymousza31971ze3z83_1328,
												(int) (((long) 0)), BgL_bodyz00_28);
											PROCEDURE_SET(BgL_zc3anonymousza31971ze3z83_1328,
												(int) (((long) 1)), BgL_locz00_723);
											PROCEDURE_SET(BgL_zc3anonymousza31971ze3z83_1328,
												(int) (((long) 2)), BgL_ez00_708);
											BgL_ebodyz00_724 =
												BGl_withzd2lexicalzd2zzexpand_epsz00(BgL_arg1967z00_732,
												BgL_arg1968z00_733, BgL_arg1969z00_734,
												BgL_zc3anonymousza31971ze3z83_1328);
									}}
									{	/* Expand/define.scm 250 */

										BGl_leavezd2functionzd2zztools_errorz00();
										{	/* Expand/define.scm 256 */
											obj_t BgL_arg1952z00_725;

											obj_t BgL_arg1955z00_726;

											BgL_arg1952z00_725 = CNST_TABLE_REF(((long) 2));
											{	/* Expand/define.scm 256 */
												obj_t BgL_arg1957z00_727;

												BgL_arg1957z00_727 =
													MAKE_PAIR(BgL_namez00_26,
													BGl_expandzd2argszd2zzexpand_lambdaz00(BgL_argsz00_27,
														BgL_ez00_708));
												{	/* Expand/define.scm 256 */
													obj_t BgL_list1959z00_729;

													{	/* Expand/define.scm 256 */
														obj_t BgL_arg1962z00_730;

														BgL_arg1962z00_730 = MAKE_PAIR(BNIL, BNIL);
														BgL_list1959z00_729 =
															MAKE_PAIR(BgL_ebodyz00_724, BgL_arg1962z00_730);
													}
													BgL_arg1955z00_726 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg1957z00_727, BgL_list1959z00_729);
											}}
											return MAKE_PAIR(BgL_arg1952z00_725, BgL_arg1955z00_726);
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



/* <anonymous:1971> */
	obj_t BGl_zc3anonymousza31971ze3z83zzexpand_definez00(obj_t BgL_envz00_1329)
	{
		AN_OBJECT;
		{	/* Expand/define.scm 254 */
			{	/* Expand/define.scm 254 */
				obj_t BgL_bodyz00_1330;

				obj_t BgL_locz00_1331;

				obj_t BgL_ez00_1332;

				BgL_bodyz00_1330 = PROCEDURE_REF(BgL_envz00_1329, (int) (((long) 0)));
				BgL_locz00_1331 = PROCEDURE_REF(BgL_envz00_1329, (int) (((long) 1)));
				BgL_ez00_1332 = PROCEDURE_REF(BgL_envz00_1329, (int) (((long) 2)));
				{

					{	/* Expand/define.scm 254 */
						obj_t BgL_arg1972z00_737;

						BgL_arg1972z00_737 =
							BGl_normaliza7ezd2prognzf2locz87zztools_prognz00(BgL_bodyz00_1330,
							BgL_locz00_1331);
						return PROCEDURE_ENTRY(BgL_ez00_1332) (BgL_ez00_1332,
							BgL_arg1972z00_737, BgL_ez00_1332, BEOA);
					}
				}
			}
		}
	}



/* do-external-define-value */
	obj_t BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00(obj_t
		BgL_ez00_30, obj_t BgL_namez00_31, obj_t BgL_valuez00_32,
		obj_t BgL_srcz00_33)
	{
		AN_OBJECT;
		{	/* Expand/define.scm 261 */
			{	/* Expand/define.scm 262 */
				obj_t BgL_ozd2expzd2_742;

				BgL_ozd2expzd2_742 =
					BGl_findzd2Ozd2expanderz00zzexpand_expanderz00(BgL_namez00_31);
				{	/* Expand/define.scm 263 */
					obj_t BgL_gzd2expzd2_743;

					BgL_gzd2expzd2_743 =
						BGl_findzd2Gzd2expanderz00zzexpand_expanderz00(BgL_namez00_31);
					{	/* Expand/define.scm 264 */
						obj_t BgL_ez00_744;

						BgL_ez00_744 =
							BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00(BgL_ez00_30);
						{	/* Expand/define.scm 265 */

							{	/* Expand/define.scm 268 */
								bool_t BgL_testz00_2241;

								{	/* Expand/define.scm 268 */
									bool_t BgL_testz00_2242;

									if (STRUCTP(BgL_ozd2expzd2_742))
										{	/* Expand/define.scm 268 */
											BgL_testz00_2242 =
												(STRUCT_KEY(BgL_ozd2expzd2_742) ==
												CNST_TABLE_REF(((long) 5)));
										}
									else
										{	/* Expand/define.scm 268 */
											BgL_testz00_2242 = ((bool_t) 0);
										}
									if (BgL_testz00_2242)
										{	/* Expand/define.scm 268 */
											if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
												{	/* Expand/define.scm 268 */
													BgL_testz00_2241 = ((bool_t) 0);
												}
											else
												{	/* Expand/define.scm 268 */
													BgL_testz00_2241 = ((bool_t) 1);
												}
										}
									else
										{	/* Expand/define.scm 268 */
											BgL_testz00_2241 = ((bool_t) 0);
										}
								}
								if (BgL_testz00_2241)
									{	/* Expand/define.scm 268 */
										{	/* Expand/define.scm 270 */
											obj_t BgL_list1979z00_746;

											{	/* Expand/define.scm 270 */
												obj_t BgL_arg1987z00_748;

												{	/* Expand/define.scm 270 */
													obj_t BgL_arg1989z00_750;

													BgL_arg1989z00_750 = MAKE_PAIR(BgL_namez00_31, BNIL);
													BgL_arg1987z00_748 =
														MAKE_PAIR(BGl_string2154z00zzexpand_definez00,
														BgL_arg1989z00_750);
												}
												BgL_list1979z00_746 =
													MAKE_PAIR(BGl_string2149z00zzexpand_definez00,
													BgL_arg1987z00_748);
											}
											BGl_warningz00zz__errorz00(BgL_list1979z00_746);
										}
										BGl_unbindzd2Ozd2expanderz12z12zzexpand_expanderz00
											(BgL_namez00_31);
									}
								else
									{	/* Expand/define.scm 268 */
										BFALSE;
									}
							}
							{	/* Expand/define.scm 274 */
								bool_t BgL_testz00_2255;

								{	/* Expand/define.scm 274 */
									bool_t BgL_testz00_2256;

									if (STRUCTP(BgL_gzd2expzd2_743))
										{	/* Expand/define.scm 274 */
											BgL_testz00_2256 =
												(STRUCT_KEY(BgL_gzd2expzd2_743) ==
												CNST_TABLE_REF(((long) 5)));
										}
									else
										{	/* Expand/define.scm 274 */
											BgL_testz00_2256 = ((bool_t) 0);
										}
									if (BgL_testz00_2256)
										{	/* Expand/define.scm 274 */
											if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
												{	/* Expand/define.scm 274 */
													BgL_testz00_2255 = ((bool_t) 0);
												}
											else
												{	/* Expand/define.scm 274 */
													BgL_testz00_2255 = ((bool_t) 1);
												}
										}
									else
										{	/* Expand/define.scm 274 */
											BgL_testz00_2255 = ((bool_t) 0);
										}
								}
								if (BgL_testz00_2255)
									{	/* Expand/define.scm 274 */
										{	/* Expand/define.scm 276 */
											obj_t BgL_list1992z00_753;

											{	/* Expand/define.scm 276 */
												obj_t BgL_arg1994z00_755;

												{	/* Expand/define.scm 276 */
													obj_t BgL_arg1996z00_757;

													BgL_arg1996z00_757 = MAKE_PAIR(BgL_namez00_31, BNIL);
													BgL_arg1994z00_755 =
														MAKE_PAIR(BGl_string2156z00zzexpand_definez00,
														BgL_arg1996z00_757);
												}
												BgL_list1992z00_753 =
													MAKE_PAIR(BGl_string2149z00zzexpand_definez00,
													BgL_arg1994z00_755);
											}
											BGl_warningz00zz__errorz00(BgL_list1992z00_753);
										}
										BGl_unbindzd2Gzd2expanderz12z12zzexpand_expanderz00
											(BgL_namez00_31);
									}
								else
									{	/* Expand/define.scm 274 */
										BFALSE;
									}
							}
							{	/* Expand/define.scm 280 */
								obj_t BgL_locz00_759;

								{	/* Expand/define.scm 280 */
									obj_t BgL_arg2003z00_766;

									obj_t BgL_arg2004z00_767;

									{	/* Expand/define.scm 280 */
										obj_t BgL_pairz00_1244;

										BgL_pairz00_1244 = BgL_srcz00_33;
										BgL_arg2003z00_766 = CDR(CDR(BgL_pairz00_1244));
									}
									BgL_arg2004z00_767 =
										BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_33);
									BgL_locz00_759 =
										BGl_findzd2locationzf2locz20zztools_locationz00
										(BgL_arg2003z00_766, BgL_arg2004z00_767);
								}
								{	/* Expand/define.scm 280 */
									obj_t BgL_evaluez00_760;

									{	/* Expand/define.scm 281 */
										obj_t BgL_arg2002z00_765;

										BgL_arg2002z00_765 =
											BGl_normaliza7ezd2prognzf2locz87zztools_prognz00
											(BgL_valuez00_32, BgL_locz00_759);
										BgL_evaluez00_760 =
											PROCEDURE_ENTRY(BgL_ez00_744) (BgL_ez00_744,
											BgL_arg2002z00_765, BgL_ez00_744, BEOA);
									}
									{	/* Expand/define.scm 281 */

										{	/* Expand/define.scm 282 */
											obj_t BgL_arg1998z00_761;

											obj_t BgL_arg1999z00_762;

											BgL_arg1998z00_761 = CNST_TABLE_REF(((long) 2));
											{	/* Expand/define.scm 282 */
												obj_t BgL_list2000z00_763;

												{	/* Expand/define.scm 282 */
													obj_t BgL_arg2001z00_764;

													BgL_arg2001z00_764 = MAKE_PAIR(BNIL, BNIL);
													BgL_list2000z00_763 =
														MAKE_PAIR(BgL_evaluez00_760, BgL_arg2001z00_764);
												}
												BgL_arg1999z00_762 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_namez00_31, BgL_list2000z00_763);
											}
											return MAKE_PAIR(BgL_arg1998z00_761, BgL_arg1999z00_762);
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



/* do-inline/generic/method */
	obj_t BGl_dozd2inlinezf2genericzf2methodzd2zzexpand_definez00(obj_t
		BgL_definezd2keywordzd2_34, obj_t BgL_ez00_35, obj_t BgL_idz00_36,
		obj_t BgL_namez00_37, obj_t BgL_argsz00_38, obj_t BgL_bodyz00_39,
		obj_t BgL_srcz00_40)
	{
		AN_OBJECT;
		{	/* Expand/define.scm 287 */
			BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 = BTRUE;
			BGl_enterzd2functionzd2zztools_errorz00(BgL_namez00_37);
			{	/* Expand/define.scm 290 */
				obj_t BgL_ozd2expzd2_768;

				BgL_ozd2expzd2_768 =
					BGl_findzd2Ozd2expanderz00zzexpand_expanderz00(BgL_namez00_37);
				{	/* Expand/define.scm 290 */
					obj_t BgL_gzd2expzd2_769;

					BgL_gzd2expzd2_769 =
						BGl_findzd2Gzd2expanderz00zzexpand_expanderz00(BgL_namez00_37);
					{	/* Expand/define.scm 291 */
						obj_t BgL_ez00_770;

						BgL_ez00_770 =
							BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00(BgL_ez00_35);
						{	/* Expand/define.scm 292 */
							obj_t BgL_locz00_771;

							{	/* Expand/define.scm 293 */
								obj_t BgL_arg2126z00_807;

								obj_t BgL_arg2127z00_808;

								{	/* Expand/define.scm 293 */
									obj_t BgL_pairz00_1248;

									BgL_pairz00_1248 = BgL_srcz00_40;
									BgL_arg2126z00_807 = CDR(CDR(BgL_pairz00_1248));
								}
								BgL_arg2127z00_808 =
									BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_40);
								BgL_locz00_771 =
									BGl_findzd2locationzf2locz20zztools_locationz00
									(BgL_arg2126z00_807, BgL_arg2127z00_808);
							}
							{	/* Expand/define.scm 293 */
								obj_t BgL_ebodyz00_772;

								if (PAIRP(BgL_bodyz00_39))
									{	/* Expand/define.scm 296 */
										obj_t BgL_arg2061z00_800;

										obj_t BgL_arg2062z00_801;

										obj_t BgL_arg2070z00_802;

										BgL_arg2061z00_800 =
											BGl_argsza2zd2ze3argszd2listz41zztools_argsz00
											(BgL_argsz00_38);
										BgL_arg2062z00_801 = CNST_TABLE_REF(((long) 1));
										BgL_arg2070z00_802 =
											BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_40);
										{	/* Expand/define.scm 300 */
											obj_t BgL_zc3anonymousza32119ze3z83_1333;

											BgL_zc3anonymousza32119ze3z83_1333 =
												make_fx_procedure
												(BGl_zc3anonymousza32119ze3z83zzexpand_definez00,
												(int) (((long) 0)), (int) (((long) 3)));
											PROCEDURE_SET(BgL_zc3anonymousza32119ze3z83_1333,
												(int) (((long) 0)), BgL_bodyz00_39);
											PROCEDURE_SET(BgL_zc3anonymousza32119ze3z83_1333,
												(int) (((long) 1)), BgL_locz00_771);
											PROCEDURE_SET(BgL_zc3anonymousza32119ze3z83_1333,
												(int) (((long) 2)), BgL_ez00_770);
											BgL_ebodyz00_772 =
												BGl_withzd2lexicalzd2zzexpand_epsz00(BgL_arg2061z00_800,
												BgL_arg2062z00_801, BgL_arg2070z00_802,
												BgL_zc3anonymousza32119ze3z83_1333);
									}}
								else
									{	/* Expand/define.scm 294 */
										BgL_ebodyz00_772 = BNIL;
									}
								{	/* Expand/define.scm 294 */

									BGl_leavezd2functionzd2zztools_errorz00();
									{	/* Expand/define.scm 305 */
										bool_t BgL_testz00_2305;

										{	/* Expand/define.scm 305 */
											bool_t BgL_testz00_2306;

											if (STRUCTP(BgL_ozd2expzd2_768))
												{	/* Expand/define.scm 305 */
													BgL_testz00_2306 =
														(STRUCT_KEY(BgL_ozd2expzd2_768) ==
														CNST_TABLE_REF(((long) 5)));
												}
											else
												{	/* Expand/define.scm 305 */
													BgL_testz00_2306 = ((bool_t) 0);
												}
											if (BgL_testz00_2306)
												{	/* Expand/define.scm 305 */
													if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
														{	/* Expand/define.scm 305 */
															BgL_testz00_2305 = ((bool_t) 0);
														}
													else
														{	/* Expand/define.scm 305 */
															BgL_testz00_2305 = ((bool_t) 1);
														}
												}
											else
												{	/* Expand/define.scm 305 */
													BgL_testz00_2305 = ((bool_t) 0);
												}
										}
										if (BgL_testz00_2305)
											{	/* Expand/define.scm 305 */
												{	/* Expand/define.scm 307 */
													obj_t BgL_list2007z00_774;

													{	/* Expand/define.scm 307 */
														obj_t BgL_arg2021z00_776;

														{	/* Expand/define.scm 307 */
															obj_t BgL_arg2023z00_778;

															BgL_arg2023z00_778 =
																MAKE_PAIR(BgL_namez00_37, BNIL);
															BgL_arg2021z00_776 =
																MAKE_PAIR(BGl_string2154z00zzexpand_definez00,
																BgL_arg2023z00_778);
														}
														BgL_list2007z00_774 =
															MAKE_PAIR(BGl_string2149z00zzexpand_definez00,
															BgL_arg2021z00_776);
													}
													BGl_warningz00zz__errorz00(BgL_list2007z00_774);
												}
												BGl_unbindzd2Ozd2expanderz12z12zzexpand_expanderz00
													(BgL_namez00_37);
											}
										else
											{	/* Expand/define.scm 305 */
												BFALSE;
											}
									}
									{	/* Expand/define.scm 311 */
										bool_t BgL_testz00_2319;

										{	/* Expand/define.scm 311 */
											bool_t BgL_testz00_2320;

											if (STRUCTP(BgL_gzd2expzd2_769))
												{	/* Expand/define.scm 311 */
													BgL_testz00_2320 =
														(STRUCT_KEY(BgL_gzd2expzd2_769) ==
														CNST_TABLE_REF(((long) 5)));
												}
											else
												{	/* Expand/define.scm 311 */
													BgL_testz00_2320 = ((bool_t) 0);
												}
											if (BgL_testz00_2320)
												{	/* Expand/define.scm 311 */
													if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
														{	/* Expand/define.scm 311 */
															BgL_testz00_2319 = ((bool_t) 0);
														}
													else
														{	/* Expand/define.scm 311 */
															BgL_testz00_2319 = ((bool_t) 1);
														}
												}
											else
												{	/* Expand/define.scm 311 */
													BgL_testz00_2319 = ((bool_t) 0);
												}
										}
										if (BgL_testz00_2319)
											{	/* Expand/define.scm 311 */
												{	/* Expand/define.scm 313 */
													obj_t BgL_list2026z00_781;

													{	/* Expand/define.scm 313 */
														obj_t BgL_arg2028z00_783;

														{	/* Expand/define.scm 313 */
															obj_t BgL_arg2031z00_785;

															BgL_arg2031z00_785 =
																MAKE_PAIR(BgL_namez00_37, BNIL);
															BgL_arg2028z00_783 =
																MAKE_PAIR(BGl_string2156z00zzexpand_definez00,
																BgL_arg2031z00_785);
														}
														BgL_list2026z00_781 =
															MAKE_PAIR(BGl_string2149z00zzexpand_definez00,
															BgL_arg2028z00_783);
													}
													BGl_warningz00zz__errorz00(BgL_list2026z00_781);
												}
												BGl_unbindzd2Gzd2expanderz12z12zzexpand_expanderz00
													(BgL_namez00_37);
											}
										else
											{	/* Expand/define.scm 311 */
												BFALSE;
											}
									}
									BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 = BFALSE;
									if (NULLP(BgL_ebodyz00_772))
										{	/* Expand/define.scm 319 */
											obj_t BgL_arg2037z00_788;

											{	/* Expand/define.scm 319 */
												obj_t BgL_arg2038z00_789;

												BgL_arg2038z00_789 =
													MAKE_PAIR(BgL_idz00_36,
													BGl_expandzd2argszd2zzexpand_lambdaz00(BgL_argsz00_38,
														BgL_ez00_770));
												{	/* Expand/define.scm 319 */
													obj_t BgL_list2046z00_791;

													BgL_list2046z00_791 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2037z00_788 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2038z00_789, BgL_list2046z00_791);
												}
											}
											return
												MAKE_PAIR(BgL_definezd2keywordzd2_34,
												BgL_arg2037z00_788);
										}
									else
										{	/* Expand/define.scm 320 */
											obj_t BgL_arg2051z00_793;

											{	/* Expand/define.scm 320 */
												obj_t BgL_arg2052z00_794;

												BgL_arg2052z00_794 =
													MAKE_PAIR(BgL_idz00_36,
													BGl_expandzd2argszd2zzexpand_lambdaz00(BgL_argsz00_38,
														BgL_ez00_770));
												{	/* Expand/define.scm 320 */
													obj_t BgL_list2054z00_796;

													{	/* Expand/define.scm 320 */
														obj_t BgL_arg2055z00_797;

														BgL_arg2055z00_797 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2054z00_796 =
															MAKE_PAIR(BgL_ebodyz00_772, BgL_arg2055z00_797);
													}
													BgL_arg2051z00_793 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2052z00_794, BgL_list2054z00_796);
												}
											}
											return
												MAKE_PAIR(BgL_definezd2keywordzd2_34,
												BgL_arg2051z00_793);
										}
								}
							}
						}
					}
				}
			}
		}
	}



/* <anonymous:2119> */
	obj_t BGl_zc3anonymousza32119ze3z83zzexpand_definez00(obj_t BgL_envz00_1334)
	{
		AN_OBJECT;
		{	/* Expand/define.scm 299 */
			{	/* Expand/define.scm 300 */
				obj_t BgL_bodyz00_1335;

				obj_t BgL_locz00_1336;

				obj_t BgL_ez00_1337;

				BgL_bodyz00_1335 = PROCEDURE_REF(BgL_envz00_1334, (int) (((long) 0)));
				BgL_locz00_1336 = PROCEDURE_REF(BgL_envz00_1334, (int) (((long) 1)));
				BgL_ez00_1337 = PROCEDURE_REF(BgL_envz00_1334, (int) (((long) 2)));
				{

					{	/* Expand/define.scm 300 */
						obj_t BgL_arg2125z00_805;

						BgL_arg2125z00_805 =
							BGl_normaliza7ezd2prognzf2locz87zztools_prognz00(BgL_bodyz00_1335,
							BgL_locz00_1336);
						return PROCEDURE_ENTRY(BgL_ez00_1337) (BgL_ez00_1337,
							BgL_arg2125z00_805, BgL_ez00_1337, BEOA);
					}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzexpand_definez00()
	{
		AN_OBJECT;
		{	/* Expand/define.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzexpand_definez00()
	{
		AN_OBJECT;
		{	/* Expand/define.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzexpand_definez00()
	{
		AN_OBJECT;
		{	/* Expand/define.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string2157z00zzexpand_definez00));
			BGl_modulezd2initializa7ationz75zztools_prognz00(((long) 139728077),
				BSTRING_TO_STRING(BGl_string2157z00zzexpand_definez00));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 320731191),
				BSTRING_TO_STRING(BGl_string2157z00zzexpand_definez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string2157z00zzexpand_definez00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string2157z00zzexpand_definez00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string2157z00zzexpand_definez00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string2157z00zzexpand_definez00));
			BGl_modulezd2initializa7ationz75zzexpand_expanderz00(((long) 112686943),
				BSTRING_TO_STRING(BGl_string2157z00zzexpand_definez00));
			BGl_modulezd2initializa7ationz75zzexpand_epsz00(((long) 46603742),
				BSTRING_TO_STRING(BGl_string2157z00zzexpand_definez00));
			BGl_modulezd2initializa7ationz75zzexpand_lambdaz00(((long) 245373811),
				BSTRING_TO_STRING(BGl_string2157z00zzexpand_definez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string2157z00zzexpand_definez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2157z00zzexpand_definez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string2157z00zzexpand_definez00));
			return
				BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string2157z00zzexpand_definez00));
		}
	}

#ifdef __cplusplus
}
#endif
