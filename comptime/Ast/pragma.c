/*===========================================================================*/
/*   (Ast/pragma.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/pragma.scm)*/
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_pragmaz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_formatz00;
	}                *BgL_pragmaz00_bglt;

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


	static obj_t BGl_getzd2maxzd2indexz00zzast_pragmaz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzast_pragmaz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_pragmaz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT long bgl_list_length(obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_pragmazf2typezd2ze3nodezc3zzast_pragmaz00(bool_t, obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern BgL_nodez00_bglt BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00(obj_t,
		obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__pragmazf2typezd2ze3nodezc3zzast_pragmaz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_userzd2warningzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_pragmaz00();
	static obj_t BGl_requirezd2initializa7ationz75zzast_pragmaz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzast_pragmaz00();
	static obj_t BGl_parserz00zzast_pragmaz00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzast_pragmaz00();
	extern BgL_pragmaz00_bglt BGl_makezd2pragmazd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t rgc_buffer_substring(obj_t, long, long);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t rgc_fill_buffer(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_pragmaz00();
	static obj_t __cnst[2];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pragmazf2typezd2ze3nodezd2envz11zzast_pragmaz00,
		BgL_bgl__pragmaza7f2typeza7d3539z00,
		BGl__pragmazf2typezd2ze3nodezc3zzast_pragmaz00, 0L, BUNSPEC, 7);
	      DEFINE_STRING(BGl_string3527z00zzast_pragmaz00,
		BgL_bgl_string3527za700za7za7a3540za7,
		"Wrong number of arguments in `pragma' form", 42);
	      DEFINE_STRING(BGl_string3528z00zzast_pragmaz00,
		BgL_bgl_string3528za700za7za7a3541za7, "Illegal `pragma' form", 21);
	      DEFINE_STRING(BGl_string3530z00zzast_pragmaz00,
		BgL_bgl_string3530za700za7za7a3542za7, "Pragma ignored with this back-end",
		33);
	      DEFINE_STRING(BGl_string3529z00zzast_pragmaz00,
		BgL_bgl_string3529za700za7za7a3543za7, "pragma", 6);
	      DEFINE_STRING(BGl_string3531z00zzast_pragmaz00,
		BgL_bgl_string3531za700za7za7a3544za7, "regular-grammar", 15);
	      DEFINE_STRING(BGl_string3532z00zzast_pragmaz00,
		BgL_bgl_string3532za700za7za7a3545za7, "Illegal match", 13);
	      DEFINE_STRING(BGl_string3533z00zzast_pragmaz00,
		BgL_bgl_string3533za700za7za7a3546za7, "Illegal range `~a'", 18);
	      DEFINE_STRING(BGl_string3534z00zzast_pragmaz00,
		BgL_bgl_string3534za700za7za7a3547za7, "the-substring", 13);
	      DEFINE_STRING(BGl_string3535z00zzast_pragmaz00,
		BgL_bgl_string3535za700za7za7a3548za7, "ast_pragma", 10);
	      DEFINE_STRING(BGl_string3536z00zzast_pragmaz00,
		BgL_bgl_string3536za700za7za7a3549za7, "set! value ", 11);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_pragmaz00(long
		BgL_checksumz00_1602, char *BgL_fromz00_1603)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_pragmaz00))
				{
					BGl_requirezd2initializa7ationz75zzast_pragmaz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_pragmaz00();
					BGl_cnstzd2initzd2zzast_pragmaz00();
					BGl_importedzd2moduleszd2initz00zzast_pragmaz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_pragmaz00()
	{
		AN_OBJECT;
		{	/* Ast/pragma.scm 14 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_pragma");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "ast_pragma");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_pragma");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"ast_pragma");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_pragma");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"ast_pragma");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_pragmaz00()
	{
		AN_OBJECT;
		{	/* Ast/pragma.scm 14 */
			{	/* Ast/pragma.scm 14 */
				obj_t BgL_cportz00_1594;

				BgL_cportz00_1594 =
					bgl_open_input_string(BGl_string3536z00zzast_pragmaz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1595;

					BgL_iz00_1595 = ((long) 1);
				BgL_loopz00_1596:
					if ((BgL_iz00_1595 == ((long) -1)))
						{	/* Ast/pragma.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/pragma.scm 14 */
							{	/* Ast/pragma.scm 14 */
								obj_t BgL_arg3538z00_1598;

								{	/* Ast/pragma.scm 14 */

									{	/* Ast/pragma.scm 14 */
										obj_t BgL_locationz00_1600;

										BgL_locationz00_1600 = BBOOL(((bool_t) 0));
										{	/* Ast/pragma.scm 14 */

											BgL_arg3538z00_1598 =
												BGl_readz00zz__readerz00(BgL_cportz00_1594,
												BgL_locationz00_1600);
										}
									}
								}
								{	/* Ast/pragma.scm 14 */
									int BgL_auxz00_1622;

									BgL_auxz00_1622 = (int) (BgL_iz00_1595);
									CNST_TABLE_SET(BgL_auxz00_1622, BgL_arg3538z00_1598);
							}}
							{	/* Ast/pragma.scm 14 */
								int BgL_auxz00_1601;

								BgL_auxz00_1601 = (int) ((BgL_iz00_1595 - ((long) 1)));
								{
									long BgL_iz00_1627;

									BgL_iz00_1627 = (long) (BgL_auxz00_1601);
									BgL_iz00_1595 = BgL_iz00_1627;
									goto BgL_loopz00_1596;
								}
							}
						}
				}
			}
		}
	}



/* pragma/type->node */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_pragmazf2typezd2ze3nodezc3zzast_pragmaz00(bool_t BgL_freez00_1,
		obj_t BgL_effectz00_2, BgL_typez00_bglt BgL_typez00_3, obj_t BgL_expz00_4,
		obj_t BgL_stackz00_5, obj_t BgL_locz00_6, obj_t BgL_sitez00_7)
	{
		AN_OBJECT;
		{	/* Ast/pragma.scm 26 */
			{	/* Ast/pragma.scm 27 */
				bool_t BgL_testz00_1629;

				{	/* Ast/pragma.scm 27 */
					obj_t BgL_arg3364z00_899;

					BgL_arg3364z00_899 = BGl_thezd2backendzd2zzbackend_backendz00();
					{
						BgL_backendz00_bglt BgL_auxz00_1631;

						BgL_auxz00_1631 = (BgL_backendz00_bglt) (BgL_arg3364z00_899);
						BgL_testz00_1629 =
							(((BgL_backendz00_bglt) CREF(BgL_auxz00_1631))->
							BgL_pragmazd2supportzd2);
					}
				}
				if (BgL_testz00_1629)
					{
						obj_t BgL_formatz00_867;

						obj_t BgL_valuesz00_868;

						if (PAIRP(BgL_expz00_4))
							{	/* Ast/pragma.scm 34 */
								obj_t BgL_cdrzd21397zd2_873;

								BgL_cdrzd21397zd2_873 = CDR(BgL_expz00_4);
								if (PAIRP(BgL_cdrzd21397zd2_873))
									{	/* Ast/pragma.scm 34 */
										obj_t BgL_carzd21400zd2_875;

										BgL_carzd21400zd2_875 = CAR(BgL_cdrzd21397zd2_873);
										if (STRINGP(BgL_carzd21400zd2_875))
											{	/* Ast/pragma.scm 34 */
												obj_t BgL_arg3349z00_877;

												BgL_arg3349z00_877 = CDR(BgL_cdrzd21397zd2_873);
												{	/* Ast/pragma.scm 34 */
													obj_t BgL_auxz00_1643;

													BgL_formatz00_867 = BgL_carzd21400zd2_875;
													BgL_valuesz00_868 = BgL_arg3349z00_877;
													{	/* Ast/pragma.scm 36 */
														obj_t BgL_maxzd2indexzd2_878;

														obj_t BgL_locz00_879;

														BgL_maxzd2indexzd2_878 =
															BGl_getzd2maxzd2indexz00zzast_pragmaz00
															(BgL_formatz00_867);
														BgL_locz00_879 =
															BGl_findzd2locationzf2locz20zztools_locationz00
															(BgL_expz00_4, BgL_locz00_6);
														if (((long) CINT(BgL_maxzd2indexzd2_878) ==
																bgl_list_length(BgL_valuesz00_868)))
															{
																obj_t BgL_expsz00_883;

																obj_t BgL_nodesz00_884;

																{	/* Ast/pragma.scm 43 */
																	BgL_pragmaz00_bglt BgL_auxz00_1650;

																	BgL_expsz00_883 = BgL_valuesz00_868;
																	BgL_nodesz00_884 = BNIL;
																BgL_zc3anonymousza33351ze3z83_885:
																	if (NULLP(BgL_expsz00_883))
																		{	/* Ast/pragma.scm 51 */
																			bool_t BgL_arg3353z00_887;

																			obj_t BgL_arg3355z00_889;

																			if (BgL_freez00_1)
																				{	/* Ast/pragma.scm 51 */
																					BgL_arg3353z00_887 = ((bool_t) 0);
																				}
																			else
																				{	/* Ast/pragma.scm 51 */
																					BgL_arg3353z00_887 = ((bool_t) 1);
																				}
																			BgL_arg3355z00_889 =
																				bgl_reverse_bang(BgL_nodesz00_884);
																			BgL_auxz00_1650 =
																				BGl_makezd2pragmazd2zzast_nodez00
																				(BgL_locz00_879, BgL_typez00_3,
																				BBOOL(BgL_arg3353z00_887),
																				BINT(((long) -1)), BgL_arg3355z00_889,
																				BgL_effectz00_2, BgL_formatz00_867);
																		}
																	else
																		{	/* Ast/pragma.scm 53 */
																			obj_t BgL_arg3356z00_890;

																			obj_t BgL_arg3357z00_891;

																			BgL_arg3356z00_890 = CDR(BgL_expsz00_883);
																			{	/* Ast/pragma.scm 55 */
																				BgL_nodez00_bglt BgL_arg3358z00_892;

																				{	/* Ast/pragma.scm 55 */
																					obj_t BgL_arg3359z00_893;

																					obj_t BgL_arg3360z00_894;

																					obj_t BgL_arg3361z00_895;

																					BgL_arg3359z00_893 =
																						CAR(BgL_expsz00_883);
																					BgL_arg3360z00_894 =
																						BGl_findzd2locationzf2locz20zztools_locationz00
																						(CAR(BgL_expsz00_883),
																						BgL_locz00_879);
																					if (BgL_freez00_1)
																						{	/* Ast/pragma.scm 58 */
																							BgL_arg3361z00_895 =
																								CNST_TABLE_REF(((long) 0));
																						}
																					else
																						{	/* Ast/pragma.scm 58 */
																							BgL_arg3361z00_895 =
																								CNST_TABLE_REF(((long) 1));
																						}
																					BgL_arg3358z00_892 =
																						BGl_sexpzd2ze3nodez31zzast_sexpz00
																						(BgL_arg3359z00_893, BgL_stackz00_5,
																						BgL_arg3360z00_894,
																						BgL_arg3361z00_895);
																				}
																				BgL_arg3357z00_891 =
																					MAKE_PAIR(
																					(obj_t) (BgL_arg3358z00_892),
																					BgL_nodesz00_884);
																			}
																			{
																				obj_t BgL_nodesz00_1669;

																				obj_t BgL_expsz00_1668;

																				BgL_expsz00_1668 = BgL_arg3356z00_890;
																				BgL_nodesz00_1669 = BgL_arg3357z00_891;
																				BgL_nodesz00_884 = BgL_nodesz00_1669;
																				BgL_expsz00_883 = BgL_expsz00_1668;
																				goto BgL_zc3anonymousza33351ze3z83_885;
																			}
																		}
																	BgL_auxz00_1643 = (obj_t) (BgL_auxz00_1650);
																}
															}
														else
															{	/* Ast/pragma.scm 38 */
																BgL_auxz00_1643 =
																	(obj_t)
																	(BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
																	(BGl_string3527z00zzast_pragmaz00,
																		BgL_expz00_4, BgL_locz00_879));
															}
													}
													return (BgL_nodez00_bglt) (BgL_auxz00_1643);
												}
											}
										else
											{	/* Ast/pragma.scm 34 */
											BgL_tagzd21390zd2_870:
												return
													BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
													(BGl_string3528z00zzast_pragmaz00, BgL_expz00_4,
													BgL_locz00_6);
											}
									}
								else
									{	/* Ast/pragma.scm 34 */
										goto BgL_tagzd21390zd2_870;
									}
							}
						else
							{	/* Ast/pragma.scm 34 */
								goto BgL_tagzd21390zd2_870;
							}
					}
				else
					{	/* Ast/pragma.scm 27 */
						BGl_userzd2warningzf2locationz20zztools_errorz00(BgL_locz00_6,
							BGl_string3529z00zzast_pragmaz00,
							BGl_string3530z00zzast_pragmaz00, BgL_expz00_4);
						return BGl_sexpzd2ze3nodez31zzast_sexpz00(BUNSPEC, BgL_stackz00_5,
							BgL_locz00_6, BgL_sitez00_7);
					}
			}
		}
	}



/* _pragma/type->node */
	obj_t BGl__pragmazf2typezd2ze3nodezc3zzast_pragmaz00(obj_t BgL_envz00_1586,
		obj_t BgL_freez00_1587, obj_t BgL_effectz00_1588, obj_t BgL_typez00_1589,
		obj_t BgL_expz00_1590, obj_t BgL_stackz00_1591, obj_t BgL_locz00_1592,
		obj_t BgL_sitez00_1593)
	{
		AN_OBJECT;
		{	/* Ast/pragma.scm 26 */
			return
				(obj_t) (BGl_pragmazf2typezd2ze3nodezc3zzast_pragmaz00(CBOOL
					(BgL_freez00_1587), BgL_effectz00_1588,
					(BgL_typez00_bglt) (BgL_typez00_1589), BgL_expz00_1590,
					BgL_stackz00_1591, BgL_locz00_1592, BgL_sitez00_1593));
		}
	}



/* get-max-index */
	obj_t BGl_getzd2maxzd2indexz00zzast_pragmaz00(obj_t BgL_fmtz00_8)
	{
		AN_OBJECT;
		{	/* Ast/pragma.scm 66 */
			{	/* Ast/pragma.scm 67 */
				obj_t BgL_portz00_901;

				{	/* Ast/pragma.scm 74 */

					BgL_portz00_901 =
						BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(BgL_fmtz00_8,
						BINT(((long) 0)));
				}
				{	/* Ast/pragma.scm 75 */
					obj_t BgL_g3344z00_902;

					BgL_g3344z00_902 = BGl_parserz00zzast_pragmaz00(BgL_portz00_901);
					{
						obj_t BgL_expz00_904;

						obj_t BgL_maxz00_905;

						BgL_expz00_904 = BgL_g3344z00_902;
						BgL_maxz00_905 = BINT(((long) 0));
					BgL_zc3anonymousza33365ze3z83_906:
						if (EOF_OBJECTP(BgL_expz00_904))
							{	/* Ast/pragma.scm 78 */
								return BgL_maxz00_905;
							}
						else
							{	/* Ast/pragma.scm 78 */
								if (CHARP(BgL_expz00_904))
									{
										obj_t BgL_expz00_1688;

										BgL_expz00_1688 =
											BGl_parserz00zzast_pragmaz00(BgL_portz00_901);
										BgL_expz00_904 = BgL_expz00_1688;
										goto BgL_zc3anonymousza33365ze3z83_906;
									}
								else
									{	/* Ast/pragma.scm 83 */
										obj_t BgL_arg3369z00_910;

										obj_t BgL_arg3371z00_911;

										BgL_arg3369z00_910 =
											BGl_parserz00zzast_pragmaz00(BgL_portz00_901);
										if (
											((long) CINT(BgL_expz00_904) >
												(long) CINT(BgL_maxz00_905)))
											{	/* Ast/pragma.scm 83 */
												BgL_arg3371z00_911 = BgL_expz00_904;
											}
										else
											{	/* Ast/pragma.scm 83 */
												BgL_arg3371z00_911 = BgL_maxz00_905;
											}
										{
											obj_t BgL_maxz00_1696;

											obj_t BgL_expz00_1695;

											BgL_expz00_1695 = BgL_arg3369z00_910;
											BgL_maxz00_1696 = BgL_arg3371z00_911;
											BgL_maxz00_905 = BgL_maxz00_1696;
											BgL_expz00_904 = BgL_expz00_1695;
											goto BgL_zc3anonymousza33365ze3z83_906;
										}
									}
							}
					}
				}
			}
		}
	}



/* parser */
	obj_t BGl_parserz00zzast_pragmaz00(obj_t BgL_inputzd2portzd2_915)
	{
		AN_OBJECT;
		{	/* Ast/pragma.scm 67 */
			{
				obj_t BgL_inputzd2portzd2_947;

				long BgL_lastzd2matchzd2_948;

				obj_t BgL_inputzd2portzd2_956;

				long BgL_lastzd2matchzd2_957;

				obj_t BgL_inputzd2portzd2_965;

				long BgL_lastzd2matchzd2_966;

				obj_t BgL_inputzd2portzd2_974;

				long BgL_lastzd2matchzd2_975;

				obj_t BgL_inputzd2portzd2_983;

				long BgL_lastzd2matchzd2_984;

				int BgL_minz00_1002;

				int BgL_maxz00_1003;

			BgL_zc3anonymousza33468ze3z83_1072:
				RGC_START_MATCH(BgL_inputzd2portzd2_915);
				{	/* Ast/pragma.scm 67 */
					long BgL_matchz00_1073;

					BgL_inputzd2portzd2_983 = BgL_inputzd2portzd2_915;
					BgL_lastzd2matchzd2_984 = ((long) 2);
				BgL_zc3anonymousza33394ze3z83_985:
					{	/* Ast/pragma.scm 67 */
						int BgL_currentzd2charzd2_986;

						BgL_currentzd2charzd2_986 =
							RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_983);
						if (((long) (BgL_currentzd2charzd2_986) == ((long) 0)))
							{	/* Ast/pragma.scm 67 */
								if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_983))
									{	/* Ast/pragma.scm 67 */
										if (rgc_fill_buffer(BgL_inputzd2portzd2_983))
											{

												goto BgL_zc3anonymousza33394ze3z83_985;
											}
										else
											{	/* Ast/pragma.scm 67 */
												BgL_matchz00_1073 = BgL_lastzd2matchzd2_984;
											}
									}
								else
									{	/* Ast/pragma.scm 67 */
										BgL_inputzd2portzd2_974 = BgL_inputzd2portzd2_983;
										BgL_lastzd2matchzd2_975 = BgL_lastzd2matchzd2_984;
									BgL_zc3anonymousza33389ze3z83_976:
										{	/* Ast/pragma.scm 67 */
											long BgL_newzd2matchzd2_977;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_974);
											BgL_newzd2matchzd2_977 = ((long) 1);
											{	/* Ast/pragma.scm 67 */
												int BgL_currentzd2charzd2_978;

												BgL_currentzd2charzd2_978 =
													RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_974);
												if (((long) (BgL_currentzd2charzd2_978) == ((long) 0)))
													{	/* Ast/pragma.scm 67 */
														if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_974))
															{	/* Ast/pragma.scm 67 */
																if (rgc_fill_buffer(BgL_inputzd2portzd2_974))
																	{

																		goto BgL_zc3anonymousza33389ze3z83_976;
																	}
																else
																	{	/* Ast/pragma.scm 67 */
																		BgL_matchz00_1073 = BgL_newzd2matchzd2_977;
																	}
															}
														else
															{	/* Ast/pragma.scm 67 */
																BgL_inputzd2portzd2_947 =
																	BgL_inputzd2portzd2_974;
																BgL_lastzd2matchzd2_948 =
																	BgL_newzd2matchzd2_977;
															BgL_zc3anonymousza33374ze3z83_949:
																{	/* Ast/pragma.scm 67 */
																	long BgL_newzd2matchzd2_950;

																	RGC_STOP_MATCH(BgL_inputzd2portzd2_947);
																	BgL_newzd2matchzd2_950 = ((long) 1);
																	{	/* Ast/pragma.scm 67 */
																		int BgL_currentzd2charzd2_951;

																		BgL_currentzd2charzd2_951 =
																			RGC_BUFFER_GET_CHAR
																			(BgL_inputzd2portzd2_947);
																		if (((long) (BgL_currentzd2charzd2_951) ==
																				((long) 0)))
																			{	/* Ast/pragma.scm 67 */
																				if (RGC_BUFFER_EMPTY
																					(BgL_inputzd2portzd2_947))
																					{	/* Ast/pragma.scm 67 */
																						if (rgc_fill_buffer
																							(BgL_inputzd2portzd2_947))
																							{

																								goto
																									BgL_zc3anonymousza33374ze3z83_949;
																							}
																						else
																							{	/* Ast/pragma.scm 67 */
																								BgL_matchz00_1073 =
																									BgL_newzd2matchzd2_950;
																							}
																					}
																				else
																					{
																						long BgL_lastzd2matchzd2_1725;

																						BgL_lastzd2matchzd2_1725 =
																							BgL_newzd2matchzd2_950;
																						BgL_lastzd2matchzd2_948 =
																							BgL_lastzd2matchzd2_1725;
																						goto
																							BgL_zc3anonymousza33374ze3z83_949;
																					}
																			}
																		else
																			{	/* Ast/pragma.scm 67 */
																				if (
																					((long) (BgL_currentzd2charzd2_951) ==
																						((long) 36)))
																					{	/* Ast/pragma.scm 67 */
																						BgL_matchz00_1073 =
																							BgL_newzd2matchzd2_950;
																					}
																				else
																					{
																						long BgL_lastzd2matchzd2_1729;

																						BgL_lastzd2matchzd2_1729 =
																							BgL_newzd2matchzd2_950;
																						BgL_lastzd2matchzd2_948 =
																							BgL_lastzd2matchzd2_1729;
																						goto
																							BgL_zc3anonymousza33374ze3z83_949;
																					}
																			}
																	}
																}
															}
													}
												else
													{	/* Ast/pragma.scm 67 */
														if (
															((long) (BgL_currentzd2charzd2_978) ==
																((long) 36)))
															{	/* Ast/pragma.scm 67 */
																BgL_matchz00_1073 = BgL_newzd2matchzd2_977;
															}
														else
															{
																long BgL_lastzd2matchzd2_1734;

																obj_t BgL_inputzd2portzd2_1733;

																BgL_inputzd2portzd2_1733 =
																	BgL_inputzd2portzd2_974;
																BgL_lastzd2matchzd2_1734 =
																	BgL_newzd2matchzd2_977;
																BgL_lastzd2matchzd2_948 =
																	BgL_lastzd2matchzd2_1734;
																BgL_inputzd2portzd2_947 =
																	BgL_inputzd2portzd2_1733;
																goto BgL_zc3anonymousza33374ze3z83_949;
															}
													}
											}
										}
									}
							}
						else
							{	/* Ast/pragma.scm 67 */
								if (((long) (BgL_currentzd2charzd2_986) == ((long) 36)))
									{	/* Ast/pragma.scm 67 */
										BgL_inputzd2portzd2_956 = BgL_inputzd2portzd2_983;
										BgL_lastzd2matchzd2_957 = BgL_lastzd2matchzd2_984;
									BgL_zc3anonymousza33379ze3z83_958:
										{	/* Ast/pragma.scm 67 */
											long BgL_newzd2matchzd2_959;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_956);
											BgL_newzd2matchzd2_959 = ((long) 2);
											{	/* Ast/pragma.scm 67 */
												int BgL_currentzd2charzd2_960;

												BgL_currentzd2charzd2_960 =
													RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_956);
												if (((long) (BgL_currentzd2charzd2_960) == ((long) 0)))
													{	/* Ast/pragma.scm 67 */
														bool_t BgL_testz00_1743;

														{	/* Ast/pragma.scm 67 */
															bool_t BgL_res3521z00_1522;

															{	/* Ast/pragma.scm 67 */
																obj_t BgL_inputzd2portzd2_1518;

																BgL_inputzd2portzd2_1518 =
																	BgL_inputzd2portzd2_956;
																if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1518))
																	{	/* Ast/pragma.scm 67 */
																		BgL_res3521z00_1522 =
																			rgc_fill_buffer(BgL_inputzd2portzd2_1518);
																	}
																else
																	{	/* Ast/pragma.scm 67 */
																		BgL_res3521z00_1522 = ((bool_t) 0);
																	}
															}
															BgL_testz00_1743 = BgL_res3521z00_1522;
														}
														if (BgL_testz00_1743)
															{

																goto BgL_zc3anonymousza33379ze3z83_958;
															}
														else
															{	/* Ast/pragma.scm 67 */
																BgL_matchz00_1073 = BgL_newzd2matchzd2_959;
															}
													}
												else
													{	/* Ast/pragma.scm 67 */
														bool_t BgL_testz00_1747;

														if (
															((long) (BgL_currentzd2charzd2_960) >=
																((long) 48)))
															{	/* Ast/pragma.scm 67 */
																BgL_testz00_1747 =
																	(
																	(long) (BgL_currentzd2charzd2_960) <
																	((long) 58));
															}
														else
															{	/* Ast/pragma.scm 67 */
																BgL_testz00_1747 = ((bool_t) 0);
															}
														if (BgL_testz00_1747)
															{	/* Ast/pragma.scm 67 */
																BgL_inputzd2portzd2_965 =
																	BgL_inputzd2portzd2_956;
																BgL_lastzd2matchzd2_966 =
																	BgL_newzd2matchzd2_959;
															BgL_zc3anonymousza33384ze3z83_967:
																{	/* Ast/pragma.scm 67 */
																	long BgL_newzd2matchzd2_968;

																	RGC_STOP_MATCH(BgL_inputzd2portzd2_965);
																	BgL_newzd2matchzd2_968 = ((long) 0);
																	{	/* Ast/pragma.scm 67 */
																		int BgL_currentzd2charzd2_969;

																		BgL_currentzd2charzd2_969 =
																			RGC_BUFFER_GET_CHAR
																			(BgL_inputzd2portzd2_965);
																		if (((long) (BgL_currentzd2charzd2_969) ==
																				((long) 0)))
																			{	/* Ast/pragma.scm 67 */
																				bool_t BgL_testz00_1758;

																				{	/* Ast/pragma.scm 67 */
																					bool_t BgL_res3522z00_1535;

																					{	/* Ast/pragma.scm 67 */
																						obj_t BgL_inputzd2portzd2_1531;

																						BgL_inputzd2portzd2_1531 =
																							BgL_inputzd2portzd2_965;
																						if (RGC_BUFFER_EMPTY
																							(BgL_inputzd2portzd2_1531))
																							{	/* Ast/pragma.scm 67 */
																								BgL_res3522z00_1535 =
																									rgc_fill_buffer
																									(BgL_inputzd2portzd2_1531);
																							}
																						else
																							{	/* Ast/pragma.scm 67 */
																								BgL_res3522z00_1535 =
																									((bool_t) 0);
																							}
																					}
																					BgL_testz00_1758 =
																						BgL_res3522z00_1535;
																				}
																				if (BgL_testz00_1758)
																					{

																						goto
																							BgL_zc3anonymousza33384ze3z83_967;
																					}
																				else
																					{	/* Ast/pragma.scm 67 */
																						BgL_matchz00_1073 =
																							BgL_newzd2matchzd2_968;
																					}
																			}
																		else
																			{	/* Ast/pragma.scm 67 */
																				bool_t BgL_testz00_1762;

																				if (
																					((long) (BgL_currentzd2charzd2_969) >=
																						((long) 48)))
																					{	/* Ast/pragma.scm 67 */
																						BgL_testz00_1762 =
																							(
																							(long) (BgL_currentzd2charzd2_969)
																							< ((long) 58));
																					}
																				else
																					{	/* Ast/pragma.scm 67 */
																						BgL_testz00_1762 = ((bool_t) 0);
																					}
																				if (BgL_testz00_1762)
																					{
																						long BgL_lastzd2matchzd2_1768;

																						BgL_lastzd2matchzd2_1768 =
																							BgL_newzd2matchzd2_968;
																						BgL_lastzd2matchzd2_966 =
																							BgL_lastzd2matchzd2_1768;
																						goto
																							BgL_zc3anonymousza33384ze3z83_967;
																					}
																				else
																					{	/* Ast/pragma.scm 67 */
																						BgL_matchz00_1073 =
																							BgL_newzd2matchzd2_968;
																					}
																			}
																	}
																}
															}
														else
															{	/* Ast/pragma.scm 67 */
																BgL_matchz00_1073 = BgL_newzd2matchzd2_959;
															}
													}
											}
										}
									}
								else
									{
										long BgL_lastzd2matchzd2_1770;

										obj_t BgL_inputzd2portzd2_1769;

										BgL_inputzd2portzd2_1769 = BgL_inputzd2portzd2_983;
										BgL_lastzd2matchzd2_1770 = BgL_lastzd2matchzd2_984;
										BgL_lastzd2matchzd2_975 = BgL_lastzd2matchzd2_1770;
										BgL_inputzd2portzd2_974 = BgL_inputzd2portzd2_1769;
										goto BgL_zc3anonymousza33389ze3z83_976;
									}
							}
					}
					RGC_SET_FILEPOS(BgL_inputzd2portzd2_915);
					{

						switch (BgL_matchz00_1073)
							{
							case ((long) 2):

								{	/* Ast/pragma.scm 67 */
									bool_t BgL_testz00_1772;

									{	/* Ast/pragma.scm 67 */
										long BgL_arg3461z00_1062;

										BgL_arg3461z00_1062 =
											RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_915);
										BgL_testz00_1772 = (BgL_arg3461z00_1062 == ((long) 0));
									}
									if (BgL_testz00_1772)
										{	/* Ast/pragma.scm 67 */
											return BCNST(256);
										}
									else
										{	/* Ast/pragma.scm 67 */
											obj_t BgL_inputzd2portzd2_1581;

											BgL_inputzd2portzd2_1581 = BgL_inputzd2portzd2_915;
											return
												BCHAR(RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_1581));
										}
								}
								break;
							case ((long) 1):

								goto BgL_zc3anonymousza33468ze3z83_1072;
								break;
							case ((long) 0):

								{	/* Ast/pragma.scm 69 */
									obj_t BgL_arg3470z00_1077;

									{	/* Ast/pragma.scm 69 */
										int BgL_arg3472z00_1081;

										{	/* Ast/pragma.scm 69 */
											int BgL_res3526z00_1585;

											{	/* Ast/pragma.scm 69 */
												obj_t BgL_inputzd2portzd2_1584;

												BgL_inputzd2portzd2_1584 = BgL_inputzd2portzd2_915;
												BgL_res3526z00_1585 =
													(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_1584));
											}
											BgL_arg3472z00_1081 = BgL_res3526z00_1585;
										}
										BgL_minz00_1002 = (int) (((long) 1));
										BgL_maxz00_1003 = BgL_arg3472z00_1081;
										if (((long) (BgL_maxz00_1003) < ((long) 0)))
											{	/* Ast/pragma.scm 67 */
												int BgL_arg3409z00_1006;

												{	/* Ast/pragma.scm 67 */
													int BgL_res3524z00_1563;

													{	/* Ast/pragma.scm 67 */
														obj_t BgL_inputzd2portzd2_1562;

														BgL_inputzd2portzd2_1562 = BgL_inputzd2portzd2_915;
														BgL_res3524z00_1563 =
															(int) (RGC_BUFFER_LENGTH
															(BgL_inputzd2portzd2_1562));
													}
													BgL_arg3409z00_1006 = BgL_res3524z00_1563;
												}
												{	/* Ast/pragma.scm 67 */
													long BgL_za71za7_1564;

													long BgL_za72za7_1565;

													BgL_za71za7_1564 = (long) (BgL_arg3409z00_1006);
													BgL_za72za7_1565 = (long) (BgL_maxz00_1003);
													BgL_maxz00_1003 =
														(int) ((BgL_za71za7_1564 + BgL_za72za7_1565));
											}}
										else
											{	/* Ast/pragma.scm 67 */
												BFALSE;
											}
										{	/* Ast/pragma.scm 67 */
											bool_t BgL_testz00_1788;

											if (((long) (BgL_minz00_1002) >= ((long) 0)))
												{	/* Ast/pragma.scm 67 */
													if (
														((long) (BgL_maxz00_1003) >=
															(long) (BgL_minz00_1002)))
														{	/* Ast/pragma.scm 67 */
															int BgL_arg3419z00_1016;

															{	/* Ast/pragma.scm 67 */
																int BgL_res3525z00_1571;

																{	/* Ast/pragma.scm 67 */
																	obj_t BgL_inputzd2portzd2_1570;

																	BgL_inputzd2portzd2_1570 =
																		BgL_inputzd2portzd2_915;
																	BgL_res3525z00_1571 =
																		(int) (RGC_BUFFER_LENGTH
																		(BgL_inputzd2portzd2_1570));
																}
																BgL_arg3419z00_1016 = BgL_res3525z00_1571;
															}
															BgL_testz00_1788 =
																(
																(long) (BgL_maxz00_1003) <=
																(long) (BgL_arg3419z00_1016));
														}
													else
														{	/* Ast/pragma.scm 67 */
															BgL_testz00_1788 = ((bool_t) 0);
														}
												}
											else
												{	/* Ast/pragma.scm 67 */
													BgL_testz00_1788 = ((bool_t) 0);
												}
											if (BgL_testz00_1788)
												{	/* Ast/pragma.scm 67 */
													BgL_arg3470z00_1077 =
														rgc_buffer_substring(BgL_inputzd2portzd2_915,
														(long) (BgL_minz00_1002), (long) (BgL_maxz00_1003));
												}
											else
												{	/* Ast/pragma.scm 67 */
													obj_t BgL_arg3412z00_1009;

													obj_t BgL_arg3413z00_1010;

													{	/* Ast/pragma.scm 67 */
														obj_t BgL_arg3415z00_1012;

														{	/* Ast/pragma.scm 67 */
															int BgL_arg3406z00_1001;

															{	/* Ast/pragma.scm 67 */
																int BgL_res3523z00_1556;

																{	/* Ast/pragma.scm 67 */
																	obj_t BgL_inputzd2portzd2_1555;

																	BgL_inputzd2portzd2_1555 =
																		BgL_inputzd2portzd2_915;
																	BgL_res3523z00_1556 =
																		(int) (RGC_BUFFER_LENGTH
																		(BgL_inputzd2portzd2_1555));
																}
																BgL_arg3406z00_1001 = BgL_res3523z00_1556;
															}
															BgL_arg3415z00_1012 =
																rgc_buffer_substring(BgL_inputzd2portzd2_915,
																((long) 0), (long) (BgL_arg3406z00_1001));
														}
														{	/* Ast/pragma.scm 67 */
															obj_t BgL_list3416z00_1013;

															BgL_list3416z00_1013 =
																MAKE_PAIR(BgL_arg3415z00_1012, BNIL);
															BgL_arg3412z00_1009 =
																BGl_formatz00zz__r4_output_6_10_3z00
																(BGl_string3533z00zzast_pragmaz00,
																BgL_list3416z00_1013);
													}}
													BgL_arg3413z00_1010 =
														MAKE_PAIR(BINT(BgL_minz00_1002),
														BINT(BgL_maxz00_1003));
													BgL_arg3470z00_1077 =
														BGl_errorz00zz__errorz00
														(BGl_string3534z00zzast_pragmaz00,
														BgL_arg3412z00_1009, BgL_arg3413z00_1010);
									}}}
									{	/* Ast/pragma.scm 69 */

										return
											BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
											(BgL_arg3470z00_1077, BINT(((long) 10)));
								}} break;
							default:
								return
									BGl_errorz00zz__errorz00(BGl_string3531z00zzast_pragmaz00,
									BGl_string3532z00zzast_pragmaz00, BINT(BgL_matchz00_1073));
							}
					}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_pragmaz00()
	{
		AN_OBJECT;
		{	/* Ast/pragma.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_pragmaz00()
	{
		AN_OBJECT;
		{	/* Ast/pragma.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_pragmaz00()
	{
		AN_OBJECT;
		{	/* Ast/pragma.scm 14 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3535z00zzast_pragmaz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3535z00zzast_pragmaz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3535z00zzast_pragmaz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3535z00zzast_pragmaz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string3535z00zzast_pragmaz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string3535z00zzast_pragmaz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string3535z00zzast_pragmaz00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3535z00zzast_pragmaz00));
		}
	}

#ifdef __cplusplus
}
#endif
