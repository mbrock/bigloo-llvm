/*===========================================================================*/
/*   (Ast/init.scm)                                                          */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/init.scm)*/
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


	static obj_t BGl__astzd2initializa7ersz75zzast_initz00(obj_t);
	extern obj_t BGl_libraryzd2finaliza7erz75zzmodule_libraryz00();
	extern obj_t BGl_occurzd2nodezd2inz12z12zzast_occurz00(BgL_nodez00_bglt,
		BgL_globalz00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzast_initz00();
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_initz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcgen_cgenz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcgen_copz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_mainz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_initz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzprof_emitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbdb_emitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_buildz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_occurz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_libraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_configurez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzast_initz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_getzd2modulezd2initz00zzbackend_initz00();
	extern obj_t BGl_za2mainza2z00zzmodule_modulez00;
	extern obj_t BGl_za2passza2z00zzengine_paramz00;
	static obj_t BGl_methodzd2initzd2zzast_initz00();
	static obj_t BGl_requirezd2initializa7ationz75zzast_initz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzast_initz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzast_initz00();
	extern obj_t BGl_makezd2bigloozd2mainz00zzbackend_c_mainz00();
	BGL_EXPORTED_DECL obj_t BGl_astzd2initializa7ersz75zzast_initz00();
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_buildzd2astzd2sanszd2removezd2zzast_buildz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_initz00();
	static obj_t __cnst[3];


	   
		 
		DEFINE_STRING(BGl_string4251z00zzast_initz00,
		BgL_bgl_string4251za700za7za7a4255za7, "ast_init", 8);
	      DEFINE_STRING(BGl_string4252z00zzast_initz00,
		BgL_bgl_string4252za700za7za7a4256za7, "imported (ld distrib) unit ", 27);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_astzd2initializa7erszd2envza7zzast_initz00,
		BgL_bgl__astza7d2initializa74257z00,
		BGl__astzd2initializa7ersz75zzast_initz00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_initz00(long
		BgL_checksumz00_1676, char *BgL_fromz00_1677)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_initz00))
				{
					BGl_requirezd2initializa7ationz75zzast_initz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_initz00();
					BGl_cnstzd2initzd2zzast_initz00();
					BGl_importedzd2moduleszd2initz00zzast_initz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_initz00()
	{
		AN_OBJECT;
		{	/* Ast/init.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_init");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_init");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_initz00()
	{
		AN_OBJECT;
		{	/* Ast/init.scm 15 */
			{	/* Ast/init.scm 15 */
				obj_t BgL_cportz00_1668;

				BgL_cportz00_1668 =
					bgl_open_input_string(BGl_string4252z00zzast_initz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1669;

					BgL_iz00_1669 = ((long) 2);
				BgL_loopz00_1670:
					if ((BgL_iz00_1669 == ((long) -1)))
						{	/* Ast/init.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Ast/init.scm 15 */
							{	/* Ast/init.scm 15 */
								obj_t BgL_arg4254z00_1672;

								{	/* Ast/init.scm 15 */

									{	/* Ast/init.scm 15 */
										obj_t BgL_locationz00_1674;

										BgL_locationz00_1674 = BBOOL(((bool_t) 0));
										{	/* Ast/init.scm 15 */

											BgL_arg4254z00_1672 =
												BGl_readz00zz__readerz00(BgL_cportz00_1668,
												BgL_locationz00_1674);
										}
									}
								}
								{	/* Ast/init.scm 15 */
									int BgL_auxz00_1692;

									BgL_auxz00_1692 = (int) (BgL_iz00_1669);
									CNST_TABLE_SET(BgL_auxz00_1692, BgL_arg4254z00_1672);
							}}
							{	/* Ast/init.scm 15 */
								int BgL_auxz00_1675;

								BgL_auxz00_1675 = (int) ((BgL_iz00_1669 - ((long) 1)));
								{
									long BgL_iz00_1697;

									BgL_iz00_1697 = (long) (BgL_auxz00_1675);
									BgL_iz00_1669 = BgL_iz00_1697;
									goto BgL_loopz00_1670;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_initz00()
	{
		AN_OBJECT;
		{	/* Ast/init.scm 15 */
			return BUNSPEC;
		}
	}



/* ast-initializers */
	BGL_EXPORTED_DEF obj_t BGl_astzd2initializa7ersz75zzast_initz00()
	{
		AN_OBJECT;
		{	/* Ast/init.scm 55 */
			{	/* Ast/init.scm 56 */
				obj_t BgL_libzd2unitzd2_1081;

				BgL_libzd2unitzd2_1081 =
					BGl_libraryzd2finaliza7erz75zzmodule_libraryz00();
				{	/* Ast/init.scm 56 */
					obj_t BgL_libzd2initzd2_1082;

					{	/* Ast/init.scm 57 */
						bool_t BgL_testz00_1700;

						if (STRUCTP(BgL_libzd2unitzd2_1081))
							{	/* Ast/init.scm 57 */
								BgL_testz00_1700 =
									(STRUCT_KEY(BgL_libzd2unitzd2_1081) ==
									CNST_TABLE_REF(((long) 0)));
							}
						else
							{	/* Ast/init.scm 57 */
								BgL_testz00_1700 = ((bool_t) 0);
							}
						if (BgL_testz00_1700)
							{	/* Ast/init.scm 58 */
								obj_t BgL_varsz00_1090;

								{	/* Ast/init.scm 58 */
									obj_t BgL_arg4162z00_1100;

									{	/* Ast/init.scm 58 */
										obj_t BgL_list4163z00_1101;

										BgL_list4163z00_1101 =
											MAKE_PAIR(BgL_libzd2unitzd2_1081, BNIL);
										BgL_arg4162z00_1100 = BgL_list4163z00_1101;
									}
									BgL_varsz00_1090 =
										BGl_buildzd2astzd2sanszd2removezd2zzast_buildz00
										(BgL_arg4162z00_1100);
								}
								{
									obj_t BgL_l4140z00_1092;

									BgL_l4140z00_1092 = BgL_varsz00_1090;
								BgL_zc3anonymousza34157ze3z83_1093:
									if (PAIRP(BgL_l4140z00_1092))
										{	/* Ast/init.scm 59 */
											{	/* Ast/init.scm 60 */
												obj_t BgL_gz00_1095;

												BgL_gz00_1095 = CAR(BgL_l4140z00_1092);
												{	/* Ast/init.scm 61 */
													obj_t BgL_arg4159z00_1096;

													{	/* Ast/init.scm 61 */
														BgL_sfunz00_bglt BgL_obj2229z00_1664;

														{	/* Ast/init.scm 61 */
															BgL_variablez00_bglt BgL_obj1956z00_1663;

															BgL_obj1956z00_1663 =
																(BgL_variablez00_bglt) (BgL_gz00_1095);
															BgL_obj2229z00_1664 =
																(BgL_sfunz00_bglt) (
																(((BgL_variablez00_bglt)
																		CREF(BgL_obj1956z00_1663))->BgL_valuez00));
														}
														BgL_arg4159z00_1096 =
															(((BgL_sfunz00_bglt) CREF(BgL_obj2229z00_1664))->
															BgL_bodyz00);
													}
													BGl_occurzd2nodezd2inz12z12zzast_occurz00(
														(BgL_nodez00_bglt) (BgL_arg4159z00_1096),
														(BgL_globalz00_bglt) (BgL_gz00_1095));
												}
											}
											{
												obj_t BgL_l4140z00_1718;

												BgL_l4140z00_1718 = CDR(BgL_l4140z00_1092);
												BgL_l4140z00_1092 = BgL_l4140z00_1718;
												goto BgL_zc3anonymousza34157ze3z83_1093;
											}
										}
									else
										{	/* Ast/init.scm 59 */
											((bool_t) 1);
										}
								}
								BgL_libzd2initzd2_1082 = BgL_varsz00_1090;
							}
						else
							{	/* Ast/init.scm 57 */
								BgL_libzd2initzd2_1082 = BNIL;
							}
					}
					{	/* Ast/init.scm 57 */
						obj_t BgL_modzd2initzd2_1083;

						BgL_modzd2initzd2_1083 =
							BGl_getzd2modulezd2initz00zzbackend_initz00();
						{	/* Ast/init.scm 66 */

							{	/* Ast/init.scm 68 */
								obj_t BgL_arg4151z00_1084;

								{	/* Ast/init.scm 68 */
									bool_t BgL_testz00_1721;

									{	/* Ast/init.scm 68 */
										bool_t BgL_testz00_1722;

										if (CBOOL(BGl_za2mainza2z00zzmodule_modulez00))
											{	/* Ast/init.scm 68 */
												BgL_testz00_1722 = ((bool_t) 1);
											}
										else
											{	/* Ast/init.scm 68 */
												BgL_testz00_1722 =
													CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
													(BGl_za2passza2z00zzengine_paramz00,
														CNST_TABLE_REF(((long) 1))));
											}
										if (BgL_testz00_1722)
											{	/* Ast/init.scm 68 */
												if (
													(BGl_za2mainza2z00zzmodule_modulez00 ==
														CNST_TABLE_REF(((long) 2))))
													{	/* Ast/init.scm 69 */
														BgL_testz00_1721 = ((bool_t) 0);
													}
												else
													{	/* Ast/init.scm 69 */
														BgL_testz00_1721 = ((bool_t) 1);
													}
											}
										else
											{	/* Ast/init.scm 68 */
												BgL_testz00_1721 = ((bool_t) 0);
											}
									}
									if (BgL_testz00_1721)
										{	/* Ast/init.scm 68 */
											BgL_arg4151z00_1084 =
												MAKE_PAIR(BGl_makezd2bigloozd2mainz00zzbackend_c_mainz00
												(), BgL_libzd2initzd2_1082);
										}
									else
										{	/* Ast/init.scm 68 */
											BgL_arg4151z00_1084 = BgL_libzd2initzd2_1082;
										}
								}
								return MAKE_PAIR(BgL_modzd2initzd2_1083, BgL_arg4151z00_1084);
							}
						}
					}
				}
			}
		}
	}



/* _ast-initializers */
	obj_t BGl__astzd2initializa7ersz75zzast_initz00(obj_t BgL_envz00_1666)
	{
		AN_OBJECT;
		{	/* Ast/init.scm 55 */
			return BGl_astzd2initializa7ersz75zzast_initz00();
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_initz00()
	{
		AN_OBJECT;
		{	/* Ast/init.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_initz00()
	{
		AN_OBJECT;
		{	/* Ast/init.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_initz00()
	{
		AN_OBJECT;
		{	/* Ast/init.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string4251z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string4251z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string4251z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string4251z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4251z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string4251z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzengine_configurez00(((long) 96794353),
				BSTRING_TO_STRING(BGl_string4251z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string4251z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzmodule_libraryz00(((long) 79490170),
				BSTRING_TO_STRING(BGl_string4251z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4251z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string4251z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string4251z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string4251z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4251z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4251z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzast_occurz00(((long) 335751924),
				BSTRING_TO_STRING(BGl_string4251z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzast_buildz00(((long) 46924743),
				BSTRING_TO_STRING(BGl_string4251z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string4251z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzbdb_emitz00(((long) 444965315),
				BSTRING_TO_STRING(BGl_string4251z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzprof_emitz00(((long) 297285345),
				BSTRING_TO_STRING(BGl_string4251z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzbackend_initz00(((long) 312007337),
				BSTRING_TO_STRING(BGl_string4251z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(((long) 185927088),
				BSTRING_TO_STRING(BGl_string4251z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(((long)
					14608757), BSTRING_TO_STRING(BGl_string4251z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_mainz00(((long) 179083793),
				BSTRING_TO_STRING(BGl_string4251z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzcgen_copz00(((long) 241571075),
				BSTRING_TO_STRING(BGl_string4251z00zzast_initz00));
			return BGl_modulezd2initializa7ationz75zzcgen_cgenz00(((long) 515633288),
				BSTRING_TO_STRING(BGl_string4251z00zzast_initz00));
		}
	}

#ifdef __cplusplus
}
#endif
