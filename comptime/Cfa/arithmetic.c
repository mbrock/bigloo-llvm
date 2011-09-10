/*===========================================================================*/
/*   (Cfa/arithmetic.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/arithmetic.scm)*/
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

	typedef struct BgL_cfunz00_bgl
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
		obj_t BgL_argszd2typezd2;
		bool_t BgL_macrozf3zf3;
		bool_t BgL_infixzf3zf3;
		obj_t BgL_methodz00;
	}              *BgL_cfunz00_bglt;

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

	typedef struct BgL_approxz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_typez00_bgl *BgL_typez00;
		bool_t BgL_typezd2lockedzf3z21;
		obj_t BgL_allocsz00;
		bool_t BgL_topzf3zf3;
		long BgL_lostzd2stampzd2;
	}                *BgL_approxz00_bglt;

	typedef struct BgL_prezd2arithmeticzd2appz00_bgl
	{
		obj_t BgL_speczd2typeszd2;
	}                                *BgL_prezd2arithmeticzd2appz00_bglt;

	typedef struct BgL_arithmeticzd2appzd2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		obj_t BgL_speczd2typeszd2;
	}                          *BgL_arithmeticzd2appzd2_bglt;


	extern BgL_approxz00_bglt BGl_loosez12z12zzcfa_loosez00(BgL_approxz00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_approxzd2setzd2typez12z12zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_cnstzd2initzd2zzcfa_arithmeticz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzcfa_arithmeticz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_setupz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_cfaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_iteratez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_loosez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzcfa_arithmeticz00();
	extern obj_t BGl_za2longza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern obj_t BGl_continuezd2cfaz12zc0zzcfa_iteratez00(obj_t);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_arithmeticz00();
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	extern BgL_approxz00_bglt BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_arithmeticz00 = BUNSPEC;
	static obj_t BGl_unspecifiedzd2typezd2zzcfa_arithmeticz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzcfa_arithmeticz00();
	static obj_t BGl_za2arithmeticzd2nodesza2zd2zzcfa_arithmeticz00 = BUNSPEC;
	extern obj_t BGl_typez00zztype_typez00;
	extern obj_t BGl_nodezd2setupza2z12z62zzcfa_setupz00(obj_t);
	static obj_t
		BGl__cleanupzd2arithmeticzd2nodesz12z12zzcfa_arithmeticz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_arithmeticz00();
	extern obj_t BGl_prezd2arithmeticzd2appz00zzcfa_info2z00;
	extern BgL_approxz00_bglt
		BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cleanupzd2arithmeticzd2nodesz12z12zzcfa_arithmeticz00();
	extern BgL_approxz00_bglt BGl_cfaz12z12zzcfa_cfaz00(BgL_nodez00_bglt);
	static obj_t BGl_nodezd2setupz12zd2prezd2arit4716zc0zzcfa_arithmeticz00(obj_t,
		obj_t);
	extern obj_t
		BGl_wideningzd2arithmeticzd2appz00zzcfa_info2z00(BgL_approxz00_bglt, obj_t);
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_cfaz12zd2arithmeticzd2app4718z12zzcfa_arithmeticz00(obj_t,
		obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	extern obj_t BGl_localz00zzast_varz00;
	extern obj_t BGl_arithmeticzd2appzd2zzcfa_info2z00;
	static obj_t BGl_cleanupzd2typezd2zzcfa_arithmeticz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_arithmeticz00();
	static obj_t __cnst[3];


	extern obj_t BGl_cfaz12zd2envzc0zzcfa_cfaz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4940z00zzcfa_arithmeticz00,
		BgL_bgl_nodeza7d2setupza712za74949za7,
		BGl_nodezd2setupz12zd2prezd2arit4716zc0zzcfa_arithmeticz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4942z00zzcfa_arithmeticz00,
		BgL_bgl_cfaza712za7d2arithme4950z00,
		BGl_cfaz12zd2arithmeticzd2app4718z12zzcfa_arithmeticz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4941z00zzcfa_arithmeticz00,
		BgL_bgl_string4941za700za7za7c4951za7, "node-setup!", 11);
	      DEFINE_STRING(BGl_string4943z00zzcfa_arithmeticz00,
		BgL_bgl_string4943za700za7za7c4952za7, "cfa!::approx", 12);
	      DEFINE_STRING(BGl_string4944z00zzcfa_arithmeticz00,
		BgL_bgl_string4944za700za7za7c4953za7, "Illegal arithmetic node", 23);
	      DEFINE_STRING(BGl_string4945z00zzcfa_arithmeticz00,
		BgL_bgl_string4945za700za7za7c4954za7, "cfa_arithmetic", 14);
	      DEFINE_STRING(BGl_string4946z00zzcfa_arithmeticz00,
		BgL_bgl_string4946za700za7za7c4955za7, "all c-eq? arithmetic-app ", 25);
	extern obj_t BGl_nodezd2setupz12zd2envz12zzcfa_setupz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cleanupzd2arithmeticzd2nodesz12zd2envzc0zzcfa_arithmeticz00,
		BgL_bgl__cleanupza7d2arith4956za7,
		BGl__cleanupzd2arithmeticzd2nodesz12z12zzcfa_arithmeticz00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzcfa_arithmeticz00(long
		BgL_checksumz00_1943, char *BgL_fromz00_1944)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_arithmeticz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_arithmeticz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcfa_arithmeticz00();
					BGl_cnstzd2initzd2zzcfa_arithmeticz00();
					BGl_importedzd2moduleszd2initz00zzcfa_arithmeticz00();
					BGl_methodzd2initzd2zzcfa_arithmeticz00();
					BGl_toplevelzd2initzd2zzcfa_arithmeticz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_arithmeticz00()
	{
		AN_OBJECT;
		{	/* Cfa/arithmetic.scm 28 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"cfa_arithmetic");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"cfa_arithmetic");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_arithmetic");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"cfa_arithmetic");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_arithmeticz00()
	{
		AN_OBJECT;
		{	/* Cfa/arithmetic.scm 28 */
			{	/* Cfa/arithmetic.scm 28 */
				obj_t BgL_cportz00_1935;

				BgL_cportz00_1935 =
					bgl_open_input_string(BGl_string4946z00zzcfa_arithmeticz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1936;

					BgL_iz00_1936 = ((long) 2);
				BgL_loopz00_1937:
					if ((BgL_iz00_1936 == ((long) -1)))
						{	/* Cfa/arithmetic.scm 28 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/arithmetic.scm 28 */
							{	/* Cfa/arithmetic.scm 28 */
								obj_t BgL_arg4948z00_1939;

								{	/* Cfa/arithmetic.scm 28 */

									{	/* Cfa/arithmetic.scm 28 */
										obj_t BgL_locationz00_1941;

										BgL_locationz00_1941 = BBOOL(((bool_t) 0));
										{	/* Cfa/arithmetic.scm 28 */

											BgL_arg4948z00_1939 =
												BGl_readz00zz__readerz00(BgL_cportz00_1935,
												BgL_locationz00_1941);
										}
									}
								}
								{	/* Cfa/arithmetic.scm 28 */
									int BgL_auxz00_1963;

									BgL_auxz00_1963 = (int) (BgL_iz00_1936);
									CNST_TABLE_SET(BgL_auxz00_1963, BgL_arg4948z00_1939);
							}}
							{	/* Cfa/arithmetic.scm 28 */
								int BgL_auxz00_1942;

								BgL_auxz00_1942 = (int) ((BgL_iz00_1936 - ((long) 1)));
								{
									long BgL_iz00_1968;

									BgL_iz00_1968 = (long) (BgL_auxz00_1942);
									BgL_iz00_1936 = BgL_iz00_1968;
									goto BgL_loopz00_1937;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_arithmeticz00()
	{
		AN_OBJECT;
		{	/* Cfa/arithmetic.scm 28 */
			BGl_za2arithmeticzd2nodesza2zd2zzcfa_arithmeticz00 = BNIL;
			return BUNSPEC;
		}
	}



/* cleanup-arithmetic-nodes! */
	BGL_EXPORTED_DEF obj_t
		BGl_cleanupzd2arithmeticzd2nodesz12z12zzcfa_arithmeticz00()
	{
		AN_OBJECT;
		{	/* Cfa/arithmetic.scm 52 */
			{
				obj_t BgL_l4699z00_1044;

				{	/* Cfa/arithmetic.scm 67 */
					bool_t BgL_auxz00_1970;

					BgL_l4699z00_1044 =
						BGl_za2arithmeticzd2nodesza2zd2zzcfa_arithmeticz00;
				BgL_zc3anonymousza34719ze3z83_1045:
					if (PAIRP(BgL_l4699z00_1044))
						{	/* Cfa/arithmetic.scm 67 */
							{	/* Cfa/arithmetic.scm 68 */
								obj_t BgL_nodez00_1047;

								BgL_nodez00_1047 = CAR(BgL_l4699z00_1044);
								{	/* Cfa/arithmetic.scm 69 */
									BgL_variablez00_bglt BgL_fz00_1049;

									{	/* Cfa/arithmetic.scm 69 */
										BgL_varz00_bglt BgL_obj2155z00_1790;

										{
											BgL_appz00_bglt BgL_auxz00_1974;

											BgL_auxz00_1974 = (BgL_appz00_bglt) (BgL_nodez00_1047);
											BgL_obj2155z00_1790 =
												(((BgL_appz00_bglt) CREF(BgL_auxz00_1974))->BgL_funz00);
										}
										BgL_fz00_1049 =
											(((BgL_varz00_bglt) CREF(BgL_obj2155z00_1790))->
											BgL_variablez00);
									}
									{	/* Cfa/arithmetic.scm 69 */
										BgL_valuez00_bglt BgL_valz00_1050;

										BgL_valz00_1050 =
											(((BgL_variablez00_bglt) CREF(BgL_fz00_1049))->
											BgL_valuez00);
										{	/* Cfa/arithmetic.scm 70 */

											{	/* Cfa/arithmetic.scm 72 */
												bool_t BgL_testz00_1979;

												{	/* Cfa/arithmetic.scm 72 */
													BgL_typez00_bglt BgL_arg4722z00_1052;

													BgL_arg4722z00_1052 =
														(((BgL_variablez00_bglt) CREF(BgL_fz00_1049))->
														BgL_typez00);
													BgL_testz00_1979 =
														((obj_t) (BgL_arg4722z00_1052) ==
														BGl_za2_za2z00zztype_cachez00);
												}
												if (BgL_testz00_1979)
													{
														BgL_typez00_bglt BgL_auxz00_1983;

														BgL_auxz00_1983 =
															(BgL_typez00_bglt)
															(BGl_za2objza2z00zztype_cachez00);
														((((BgL_variablez00_bglt) CREF(BgL_fz00_1049))->
																BgL_typez00) =
															((BgL_typez00_bglt) BgL_auxz00_1983), BUNSPEC);
													}
												else
													{	/* Cfa/arithmetic.scm 72 */
														BFALSE;
													}
											}
											{	/* Cfa/arithmetic.scm 74 */
												bool_t BgL_testz00_1986;

												{	/* Cfa/arithmetic.scm 74 */
													BgL_typez00_bglt BgL_arg4724z00_1054;

													{
														BgL_nodez00_bglt BgL_auxz00_1987;

														BgL_auxz00_1987 =
															(BgL_nodez00_bglt) (BgL_nodez00_1047);
														BgL_arg4724z00_1054 =
															(((BgL_nodez00_bglt) CREF(BgL_auxz00_1987))->
															BgL_typez00);
													}
													BgL_testz00_1986 =
														(
														(obj_t) (BgL_arg4724z00_1054) ==
														BGl_za2_za2z00zztype_cachez00);
												}
												if (BgL_testz00_1986)
													{
														BgL_typez00_bglt BgL_auxz00_1994;

														BgL_nodez00_bglt BgL_auxz00_1992;

														BgL_auxz00_1994 =
															(BgL_typez00_bglt)
															(BGl_za2objza2z00zztype_cachez00);
														BgL_auxz00_1992 =
															(BgL_nodez00_bglt) (BgL_nodez00_1047);
														((((BgL_nodez00_bglt) CREF(BgL_auxz00_1992))->
																BgL_typez00) =
															((BgL_typez00_bglt) BgL_auxz00_1994), BUNSPEC);
													}
												else
													{	/* Cfa/arithmetic.scm 74 */
														BFALSE;
													}
											}
											{	/* Cfa/arithmetic.scm 77 */
												bool_t BgL_testz00_1997;

												{	/* Cfa/arithmetic.scm 77 */
													obj_t BgL_obj1955z00_1798;

													BgL_obj1955z00_1798 = (obj_t) (BgL_valz00_1050);
													BgL_testz00_1997 =
														BGl_iszd2azf3z21zz__objectz00(BgL_obj1955z00_1798,
														BGl_sfunz00zzast_varz00);
												}
												if (BgL_testz00_1997)
													{	/* Cfa/arithmetic.scm 79 */
														obj_t BgL_arg4726z00_1056;

														{	/* Cfa/arithmetic.scm 79 */
															obj_t BgL_l4693z00_1057;

															{
																BgL_sfunz00_bglt BgL_auxz00_2000;

																BgL_auxz00_2000 =
																	(BgL_sfunz00_bglt) (BgL_valz00_1050);
																BgL_l4693z00_1057 =
																	(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2000))->
																	BgL_argsz00);
															}
															if (NULLP(BgL_l4693z00_1057))
																{	/* Cfa/arithmetic.scm 79 */
																	BgL_arg4726z00_1056 = BNIL;
																}
															else
																{	/* Cfa/arithmetic.scm 79 */
																	obj_t BgL_head4695z00_1059;

																	BgL_head4695z00_1059 =
																		MAKE_PAIR
																		(BGl_cleanupzd2typezd2zzcfa_arithmeticz00
																		(CAR(BgL_l4693z00_1057)), BNIL);
																	{	/* Cfa/arithmetic.scm 79 */
																		obj_t BgL_g4698z00_1060;

																		BgL_g4698z00_1060 = CDR(BgL_l4693z00_1057);
																		{
																			obj_t BgL_l4693z00_1062;

																			obj_t BgL_tail4696z00_1063;

																			BgL_l4693z00_1062 = BgL_g4698z00_1060;
																			BgL_tail4696z00_1063 =
																				BgL_head4695z00_1059;
																		BgL_zc3anonymousza34728ze3z83_1064:
																			if (NULLP(BgL_l4693z00_1062))
																				{	/* Cfa/arithmetic.scm 79 */
																					BgL_arg4726z00_1056 =
																						BgL_head4695z00_1059;
																				}
																			else
																				{	/* Cfa/arithmetic.scm 79 */
																					obj_t BgL_newtail4697z00_1066;

																					BgL_newtail4697z00_1066 =
																						MAKE_PAIR
																						(BGl_cleanupzd2typezd2zzcfa_arithmeticz00
																						(CAR(BgL_l4693z00_1062)), BNIL);
																					SET_CDR(BgL_tail4696z00_1063,
																						BgL_newtail4697z00_1066);
																					{
																						obj_t BgL_tail4696z00_2017;

																						obj_t BgL_l4693z00_2015;

																						BgL_l4693z00_2015 =
																							CDR(BgL_l4693z00_1062);
																						BgL_tail4696z00_2017 =
																							BgL_newtail4697z00_1066;
																						BgL_tail4696z00_1063 =
																							BgL_tail4696z00_2017;
																						BgL_l4693z00_1062 =
																							BgL_l4693z00_2015;
																						goto
																							BgL_zc3anonymousza34728ze3z83_1064;
																					}
																				}
																		}
																	}
																}
														}
														{
															BgL_sfunz00_bglt BgL_auxz00_2018;

															BgL_auxz00_2018 =
																(BgL_sfunz00_bglt) (BgL_valz00_1050);
															((((BgL_sfunz00_bglt) CREF(BgL_auxz00_2018))->
																	BgL_argsz00) =
																((obj_t) BgL_arg4726z00_1056), BUNSPEC);
														}
													}
												else
													{	/* Cfa/arithmetic.scm 80 */
														bool_t BgL_testz00_2021;

														{	/* Cfa/arithmetic.scm 80 */
															obj_t BgL_obj2019z00_1814;

															BgL_obj2019z00_1814 = (obj_t) (BgL_valz00_1050);
															BgL_testz00_2021 =
																BGl_iszd2azf3z21zz__objectz00
																(BgL_obj2019z00_1814, BGl_cfunz00zzast_varz00);
														}
														if (BgL_testz00_2021)
															{	/* Cfa/arithmetic.scm 81 */
																obj_t BgL_g4683z00_1076;

																{
																	BgL_cfunz00_bglt BgL_auxz00_2024;

																	BgL_auxz00_2024 =
																		(BgL_cfunz00_bglt) (BgL_valz00_1050);
																	BgL_g4683z00_1076 =
																		(((BgL_cfunz00_bglt)
																			CREF(BgL_auxz00_2024))->
																		BgL_argszd2typezd2);
																}
																{
																	obj_t BgL_lz00_1078;

																	{	/* Cfa/arithmetic.scm 81 */
																		bool_t BgL_auxz00_2027;

																		BgL_lz00_1078 = BgL_g4683z00_1076;
																	BgL_zc3anonymousza34738ze3z83_1079:
																		if (PAIRP(BgL_lz00_1078))
																			{	/* Cfa/arithmetic.scm 82 */
																				{	/* Cfa/arithmetic.scm 84 */
																					obj_t BgL_auxz00_2030;

																					BgL_auxz00_2030 =
																						BGl_cleanupzd2typezd2zzcfa_arithmeticz00
																						(CAR(BgL_lz00_1078));
																					SET_CAR(BgL_lz00_1078,
																						BgL_auxz00_2030);
																				}
																				{
																					obj_t BgL_lz00_2034;

																					BgL_lz00_2034 = CDR(BgL_lz00_1078);
																					BgL_lz00_1078 = BgL_lz00_2034;
																					goto
																						BgL_zc3anonymousza34738ze3z83_1079;
																				}
																			}
																		else
																			{	/* Cfa/arithmetic.scm 82 */
																				BgL_auxz00_2027 = ((bool_t) 0);
																			}
																		BBOOL(BgL_auxz00_2027);
																	}
																}
															}
														else
															{	/* Cfa/arithmetic.scm 80 */
																BFALSE;
															}
													}
											}
										}
									}
								}
							}
							{
								obj_t BgL_l4699z00_2037;

								BgL_l4699z00_2037 = CDR(BgL_l4699z00_1044);
								BgL_l4699z00_1044 = BgL_l4699z00_2037;
								goto BgL_zc3anonymousza34719ze3z83_1045;
							}
						}
					else
						{	/* Cfa/arithmetic.scm 67 */
							BgL_auxz00_1970 = ((bool_t) 1);
						}
					return BBOOL(BgL_auxz00_1970);
				}
			}
		}
	}



/* cleanup-type */
	obj_t BGl_cleanupzd2typezd2zzcfa_arithmeticz00(obj_t BgL_tz00_1088)
	{
		AN_OBJECT;
		{	/* Cfa/arithmetic.scm 66 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_tz00_1088,
					BGl_typez00zztype_typez00))
				{	/* Cfa/arithmetic.scm 55 */
					if ((BgL_tz00_1088 == BGl_za2_za2z00zztype_cachez00))
						{	/* Cfa/arithmetic.scm 56 */
							return BGl_za2objza2z00zztype_cachez00;
						}
					else
						{	/* Cfa/arithmetic.scm 56 */
							return BgL_tz00_1088;
						}
				}
			else
				{	/* Cfa/arithmetic.scm 55 */
					if (BGl_iszd2azf3z21zz__objectz00(BgL_tz00_1088,
							BGl_localz00zzast_varz00))
						{	/* Cfa/arithmetic.scm 59 */
							{	/* Cfa/arithmetic.scm 60 */
								bool_t BgL_testz00_2046;

								{	/* Cfa/arithmetic.scm 60 */
									BgL_typez00_bglt BgL_arg4750z00_1094;

									{
										BgL_variablez00_bglt BgL_auxz00_2047;

										BgL_auxz00_2047 =
											(BgL_variablez00_bglt) (
											(BgL_localz00_bglt) (BgL_tz00_1088));
										BgL_arg4750z00_1094 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_2047))->
											BgL_typez00);
									}
									BgL_testz00_2046 =
										(
										(obj_t) (BgL_arg4750z00_1094) ==
										BGl_za2_za2z00zztype_cachez00);
								}
								if (BgL_testz00_2046)
									{
										BgL_typez00_bglt BgL_auxz00_2056;

										BgL_variablez00_bglt BgL_auxz00_2053;

										BgL_auxz00_2056 =
											(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00);
										BgL_auxz00_2053 =
											(BgL_variablez00_bglt) (
											(BgL_localz00_bglt) (BgL_tz00_1088));
										((((BgL_variablez00_bglt) CREF(BgL_auxz00_2053))->
												BgL_typez00) =
											((BgL_typez00_bglt) BgL_auxz00_2056), BUNSPEC);
									}
								else
									{	/* Cfa/arithmetic.scm 60 */
										BFALSE;
									}
							}
							return BgL_tz00_1088;
						}
					else
						{	/* Cfa/arithmetic.scm 59 */
							return BgL_tz00_1088;
						}
				}
		}
	}



/* _cleanup-arithmetic-nodes! */
	obj_t BGl__cleanupzd2arithmeticzd2nodesz12z12zzcfa_arithmeticz00(obj_t
		BgL_envz00_1923)
	{
		AN_OBJECT;
		{	/* Cfa/arithmetic.scm 52 */
			return BGl_cleanupzd2arithmeticzd2nodesz12z12zzcfa_arithmeticz00();
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_arithmeticz00()
	{
		AN_OBJECT;
		{	/* Cfa/arithmetic.scm 28 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_arithmeticz00()
	{
		AN_OBJECT;
		{	/* Cfa/arithmetic.scm 28 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_prezd2arithmeticzd2appz00zzcfa_info2z00,
				BGl_proc4940z00zzcfa_arithmeticz00,
				BGl_string4941z00zzcfa_arithmeticz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_arithmeticzd2appzd2zzcfa_info2z00,
				BGl_proc4942z00zzcfa_arithmeticz00,
				BGl_string4943z00zzcfa_arithmeticz00);
		}
	}



/* cfa!-arithmetic-app4718 */
	obj_t BGl_cfaz12zd2arithmeticzd2app4718z12zzcfa_arithmeticz00(obj_t
		BgL_envz00_1926, obj_t BgL_nodez00_1927)
	{
		AN_OBJECT;
		{	/* Cfa/arithmetic.scm 141 */
			{
				BgL_arithmeticzd2appzd2_bglt BgL_nodez00_1686;

				{	/* Cfa/arithmetic.scm 144 */
					BgL_approxz00_bglt BgL_auxz00_2062;

					BgL_nodez00_1686 = (BgL_arithmeticzd2appzd2_bglt) (BgL_nodez00_1927);
					{
						obj_t BgL_argszd2approxzd2_1739;

						obj_t BgL_argszd2approxzd2_1751;

						obj_t BgL_typez00_1752;

						obj_t BgL_speczd2typeszd2_1753;

						obj_t BgL_argszd2approxzd2_1768;

						obj_t BgL_speczd2typeszd2_1769;

						{	/* Cfa/arithmetic.scm 182 */
							obj_t BgL_argszd2approxzd2_1694;

							{	/* Cfa/arithmetic.scm 182 */
								obj_t BgL_l4707z00_1718;

								{
									BgL_appz00_bglt BgL_auxz00_2063;

									BgL_auxz00_2063 = (BgL_appz00_bglt) (BgL_nodez00_1686);
									BgL_l4707z00_1718 =
										(((BgL_appz00_bglt) CREF(BgL_auxz00_2063))->BgL_argsz00);
								}
								if (NULLP(BgL_l4707z00_1718))
									{	/* Cfa/arithmetic.scm 182 */
										BgL_argszd2approxzd2_1694 = BNIL;
									}
								else
									{	/* Cfa/arithmetic.scm 182 */
										obj_t BgL_head4709z00_1720;

										{	/* Cfa/arithmetic.scm 182 */
											BgL_approxz00_bglt BgL_arg4909z00_1733;

											{	/* Cfa/arithmetic.scm 182 */
												obj_t BgL_arg4911z00_1735;

												BgL_arg4911z00_1735 = CAR(BgL_l4707z00_1718);
												BgL_arg4909z00_1733 =
													BGl_cfaz12z12zzcfa_cfaz00(
													(BgL_nodez00_bglt) (BgL_arg4911z00_1735));
											}
											BgL_head4709z00_1720 =
												MAKE_PAIR((obj_t) (BgL_arg4909z00_1733), BNIL);
										}
										{	/* Cfa/arithmetic.scm 182 */
											obj_t BgL_g4712z00_1721;

											BgL_g4712z00_1721 = CDR(BgL_l4707z00_1718);
											{
												obj_t BgL_l4707z00_1723;

												obj_t BgL_tail4710z00_1724;

												BgL_l4707z00_1723 = BgL_g4712z00_1721;
												BgL_tail4710z00_1724 = BgL_head4709z00_1720;
											BgL_zc3anonymousza34903ze3z83_1725:
												if (NULLP(BgL_l4707z00_1723))
													{	/* Cfa/arithmetic.scm 182 */
														BgL_argszd2approxzd2_1694 = BgL_head4709z00_1720;
													}
												else
													{	/* Cfa/arithmetic.scm 182 */
														obj_t BgL_newtail4711z00_1727;

														{	/* Cfa/arithmetic.scm 182 */
															BgL_approxz00_bglt BgL_arg4906z00_1729;

															{	/* Cfa/arithmetic.scm 182 */
																obj_t BgL_arg4908z00_1731;

																BgL_arg4908z00_1731 = CAR(BgL_l4707z00_1723);
																BgL_arg4906z00_1729 =
																	BGl_cfaz12z12zzcfa_cfaz00(
																	(BgL_nodez00_bglt) (BgL_arg4908z00_1731));
															}
															BgL_newtail4711z00_1727 =
																MAKE_PAIR((obj_t) (BgL_arg4906z00_1729), BNIL);
														}
														SET_CDR(BgL_tail4710z00_1724,
															BgL_newtail4711z00_1727);
														{
															obj_t BgL_tail4710z00_2084;

															obj_t BgL_l4707z00_2082;

															BgL_l4707z00_2082 = CDR(BgL_l4707z00_1723);
															BgL_tail4710z00_2084 = BgL_newtail4711z00_1727;
															BgL_tail4710z00_1724 = BgL_tail4710z00_2084;
															BgL_l4707z00_1723 = BgL_l4707z00_2082;
															goto BgL_zc3anonymousza34903ze3z83_1725;
														}
													}
											}
										}
									}
							}
							{	/* Cfa/arithmetic.scm 184 */
								obj_t BgL_tyz00_1695;

								BgL_argszd2approxzd2_1739 = BgL_argszd2approxzd2_1694;
								{
									obj_t BgL_argsz00_1742;

									BgL_argsz00_1742 = BgL_argszd2approxzd2_1739;
								BgL_zc3anonymousza34915ze3z83_1743:
									if (NULLP(BgL_argsz00_1742))
										{	/* Cfa/arithmetic.scm 150 */
											BgL_tyz00_1695 = BFALSE;
										}
									else
										{	/* Cfa/arithmetic.scm 152 */
											obj_t BgL_tz00_1745;

											{	/* Cfa/arithmetic.scm 152 */
												BgL_typez00_bglt BgL_arg4919z00_1748;

												{	/* Cfa/arithmetic.scm 152 */
													BgL_approxz00_bglt BgL_obj3242z00_1907;

													{	/* Cfa/arithmetic.scm 152 */
														obj_t BgL_pairz00_1906;

														BgL_pairz00_1906 = BgL_argsz00_1742;
														BgL_obj3242z00_1907 =
															(BgL_approxz00_bglt) (CAR(BgL_pairz00_1906));
													}
													BgL_arg4919z00_1748 =
														(((BgL_approxz00_bglt) CREF(BgL_obj3242z00_1907))->
														BgL_typez00);
												}
												if (
													((obj_t) (BgL_arg4919z00_1748) ==
														BGl_za2intza2z00zztype_cachez00))
													{	/* Cfa/arithmetic.scm 152 */
														BgL_tz00_1745 = BGl_za2longza2z00zztype_cachez00;
													}
												else
													{	/* Cfa/arithmetic.scm 152 */
														BgL_tz00_1745 = (obj_t) (BgL_arg4919z00_1748);
													}
											}
											if ((BgL_tz00_1745 == BGl_za2_za2z00zztype_cachez00))
												{
													obj_t BgL_argsz00_2096;

													BgL_argsz00_2096 = CDR(BgL_argsz00_1742);
													BgL_argsz00_1742 = BgL_argsz00_2096;
													goto BgL_zc3anonymousza34915ze3z83_1743;
												}
											else
												{	/* Cfa/arithmetic.scm 153 */
													BgL_tyz00_1695 = BgL_tz00_1745;
												}
										}
								}
								{	/* Cfa/arithmetic.scm 186 */
									bool_t BgL_testz00_2098;

									BgL_argszd2approxzd2_1751 = BgL_argszd2approxzd2_1694;
									BgL_typez00_1752 = BgL_tyz00_1695;
									{
										obj_t BgL_auxz00_2120;

										{	/* Cfa/arithmetic.scm 186 */
											BgL_objectz00_bglt BgL_auxz00_2121;

											BgL_auxz00_2121 = (BgL_objectz00_bglt) (BgL_nodez00_1686);
											BgL_auxz00_2120 = BGL_OBJECT_WIDENING(BgL_auxz00_2121);
										}
										BgL_speczd2typeszd2_1753 =
											(((BgL_arithmeticzd2appzd2_bglt) CREF(BgL_auxz00_2120))->
											BgL_speczd2typeszd2);
									}
									{	/* Cfa/arithmetic.scm 159 */
										bool_t BgL__ortest_4689z00_1755;

										if (CBOOL(BgL_typez00_1752))
											{	/* Cfa/arithmetic.scm 159 */
												BgL__ortest_4689z00_1755 = ((bool_t) 0);
											}
										else
											{	/* Cfa/arithmetic.scm 159 */
												BgL__ortest_4689z00_1755 = ((bool_t) 1);
											}
										if (BgL__ortest_4689z00_1755)
											{	/* Cfa/arithmetic.scm 159 */
												BgL_testz00_2098 = BgL__ortest_4689z00_1755;
											}
										else
											{	/* Cfa/arithmetic.scm 159 */
												if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
														(BgL_typez00_1752, BgL_speczd2typeszd2_1753)))
													{
														obj_t BgL_argsz00_1758;

														BgL_argsz00_1758 = BgL_argszd2approxzd2_1751;
													BgL_zc3anonymousza34922ze3z83_1759:
														if (NULLP(BgL_argsz00_1758))
															{	/* Cfa/arithmetic.scm 162 */
																BgL_testz00_2098 = ((bool_t) 1);
															}
														else
															{	/* Cfa/arithmetic.scm 164 */
																obj_t BgL_tz00_1761;

																{	/* Cfa/arithmetic.scm 164 */
																	BgL_typez00_bglt BgL_arg4927z00_1765;

																	{	/* Cfa/arithmetic.scm 164 */
																		BgL_approxz00_bglt BgL_obj3242z00_1913;

																		{	/* Cfa/arithmetic.scm 164 */
																			obj_t BgL_pairz00_1912;

																			BgL_pairz00_1912 = BgL_argsz00_1758;
																			BgL_obj3242z00_1913 =
																				(BgL_approxz00_bglt) (CAR
																				(BgL_pairz00_1912));
																		}
																		BgL_arg4927z00_1765 =
																			(((BgL_approxz00_bglt)
																				CREF(BgL_obj3242z00_1913))->
																			BgL_typez00);
																	}
																	if (
																		((obj_t) (BgL_arg4927z00_1765) ==
																			BGl_za2intza2z00zztype_cachez00))
																		{	/* Cfa/arithmetic.scm 164 */
																			BgL_tz00_1761 =
																				BGl_za2longza2z00zztype_cachez00;
																		}
																	else
																		{	/* Cfa/arithmetic.scm 164 */
																			BgL_tz00_1761 =
																				(obj_t) (BgL_arg4927z00_1765);
																		}
																}
																{	/* Cfa/arithmetic.scm 165 */
																	bool_t BgL_testz00_2114;

																	if ((BgL_tz00_1761 == BgL_typez00_1752))
																		{	/* Cfa/arithmetic.scm 165 */
																			BgL_testz00_2114 = ((bool_t) 1);
																		}
																	else
																		{	/* Cfa/arithmetic.scm 165 */
																			BgL_testz00_2114 =
																				(BgL_tz00_1761 ==
																				BGl_za2_za2z00zztype_cachez00);
																		}
																	if (BgL_testz00_2114)
																		{
																			obj_t BgL_argsz00_2118;

																			BgL_argsz00_2118 = CDR(BgL_argsz00_1758);
																			BgL_argsz00_1758 = BgL_argsz00_2118;
																			goto BgL_zc3anonymousza34922ze3z83_1759;
																		}
																	else
																		{	/* Cfa/arithmetic.scm 165 */
																			BgL_testz00_2098 = ((bool_t) 0);
																		}
																}
															}
													}
												else
													{	/* Cfa/arithmetic.scm 160 */
														BgL_testz00_2098 = ((bool_t) 0);
													}
											}
									}
									if (BgL_testz00_2098)
										{	/* Cfa/arithmetic.scm 188 */
											bool_t BgL_testz00_2125;

											BgL_argszd2approxzd2_1768 = BgL_argszd2approxzd2_1694;
											{
												obj_t BgL_auxz00_2140;

												{	/* Cfa/arithmetic.scm 188 */
													BgL_objectz00_bglt BgL_auxz00_2141;

													BgL_auxz00_2141 =
														(BgL_objectz00_bglt) (BgL_nodez00_1686);
													BgL_auxz00_2140 =
														BGL_OBJECT_WIDENING(BgL_auxz00_2141);
												}
												BgL_speczd2typeszd2_1769 =
													(((BgL_arithmeticzd2appzd2_bglt)
														CREF(BgL_auxz00_2140))->BgL_speczd2typeszd2);
											}
											{
												obj_t BgL_argsz00_1772;

												BgL_argsz00_1772 = BgL_argszd2approxzd2_1768;
											BgL_zc3anonymousza34930ze3z83_1773:
												if (NULLP(BgL_argsz00_1772))
													{	/* Cfa/arithmetic.scm 172 */
														BgL_testz00_2125 = ((bool_t) 1);
													}
												else
													{	/* Cfa/arithmetic.scm 174 */
														bool_t BgL_testz00_2128;

														{	/* Cfa/arithmetic.scm 174 */
															obj_t BgL_arg4934z00_1777;

															{	/* Cfa/arithmetic.scm 174 */
																BgL_typez00_bglt BgL_arg4935z00_1778;

																{	/* Cfa/arithmetic.scm 174 */
																	BgL_approxz00_bglt BgL_obj3242z00_1919;

																	{	/* Cfa/arithmetic.scm 174 */
																		obj_t BgL_pairz00_1918;

																		BgL_pairz00_1918 = BgL_argsz00_1772;
																		BgL_obj3242z00_1919 =
																			(BgL_approxz00_bglt) (CAR
																			(BgL_pairz00_1918));
																	}
																	BgL_arg4935z00_1778 =
																		(((BgL_approxz00_bglt)
																			CREF(BgL_obj3242z00_1919))->BgL_typez00);
																}
																if (
																	((obj_t) (BgL_arg4935z00_1778) ==
																		BGl_za2intza2z00zztype_cachez00))
																	{	/* Cfa/arithmetic.scm 174 */
																		BgL_arg4934z00_1777 =
																			BGl_za2longza2z00zztype_cachez00;
																	}
																else
																	{	/* Cfa/arithmetic.scm 174 */
																		BgL_arg4934z00_1777 =
																			(obj_t) (BgL_arg4935z00_1778);
																	}
															}
															BgL_testz00_2128 =
																CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																(BgL_arg4934z00_1777,
																	BgL_speczd2typeszd2_1769));
														}
														if (BgL_testz00_2128)
															{
																obj_t BgL_argsz00_2138;

																BgL_argsz00_2138 = CDR(BgL_argsz00_1772);
																BgL_argsz00_1772 = BgL_argsz00_2138;
																goto BgL_zc3anonymousza34930ze3z83_1773;
															}
														else
															{	/* Cfa/arithmetic.scm 174 */
																BgL_testz00_2125 = ((bool_t) 0);
															}
													}
											}
											if (BgL_testz00_2125)
												{	/* Cfa/arithmetic.scm 191 */
													bool_t BgL_testz00_2145;

													{	/* Cfa/arithmetic.scm 191 */
														BgL_typez00_bglt BgL_arg4888z00_1700;

														{	/* Cfa/arithmetic.scm 191 */
															BgL_approxz00_bglt BgL_obj3242z00_1894;

															{
																obj_t BgL_auxz00_2146;

																{	/* Cfa/arithmetic.scm 191 */
																	BgL_objectz00_bglt BgL_auxz00_2147;

																	BgL_auxz00_2147 =
																		(BgL_objectz00_bglt) (BgL_nodez00_1686);
																	BgL_auxz00_2146 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_2147);
																}
																BgL_obj3242z00_1894 =
																	(((BgL_arithmeticzd2appzd2_bglt)
																		CREF(BgL_auxz00_2146))->BgL_approxz00);
															}
															BgL_arg4888z00_1700 =
																(((BgL_approxz00_bglt)
																	CREF(BgL_obj3242z00_1894))->BgL_typez00);
														}
														BgL_testz00_2145 =
															(
															(obj_t) (BgL_arg4888z00_1700) ==
															BGl_za2_za2z00zztype_cachez00);
													}
													if (BgL_testz00_2145)
														{	/* Cfa/arithmetic.scm 191 */
															{	/* Cfa/arithmetic.scm 194 */
																BgL_approxz00_bglt BgL_arg4887z00_1699;

																{
																	obj_t BgL_auxz00_2154;

																	{	/* Cfa/arithmetic.scm 194 */
																		BgL_objectz00_bglt BgL_auxz00_2155;

																		BgL_auxz00_2155 =
																			(BgL_objectz00_bglt) (BgL_nodez00_1686);
																		BgL_auxz00_2154 =
																			BGL_OBJECT_WIDENING(BgL_auxz00_2155);
																	}
																	BgL_arg4887z00_1699 =
																		(((BgL_arithmeticzd2appzd2_bglt)
																			CREF(BgL_auxz00_2154))->BgL_approxz00);
																}
																BGl_approxzd2setzd2typez12z12zzcfa_approxz00
																	(BgL_arg4887z00_1699,
																	(BgL_typez00_bglt) (BgL_tyz00_1695));
															}
															BGl_continuezd2cfaz12zc0zzcfa_iteratez00
																(CNST_TABLE_REF(((long) 0)));
														}
													else
														{	/* Cfa/arithmetic.scm 191 */
															BFALSE;
														}
												}
											else
												{	/* Cfa/arithmetic.scm 188 */
													BFALSE;
												}
										}
									else
										{	/* Cfa/arithmetic.scm 196 */
											bool_t BgL_testz00_2163;

											{	/* Cfa/arithmetic.scm 196 */
												bool_t BgL_testz00_2164;

												{	/* Cfa/arithmetic.scm 196 */
													obj_t BgL_auxz00_2165;

													{	/* Cfa/arithmetic.scm 196 */
														BgL_variablez00_bglt BgL_arg4899z00_1715;

														{	/* Cfa/arithmetic.scm 196 */
															BgL_varz00_bglt BgL_obj2155z00_1897;

															{
																BgL_appz00_bglt BgL_auxz00_2166;

																BgL_auxz00_2166 =
																	(BgL_appz00_bglt) (BgL_nodez00_1686);
																BgL_obj2155z00_1897 =
																	(((BgL_appz00_bglt) CREF(BgL_auxz00_2166))->
																	BgL_funz00);
															}
															BgL_arg4899z00_1715 =
																(((BgL_varz00_bglt) CREF(BgL_obj2155z00_1897))->
																BgL_variablez00);
														}
														BgL_auxz00_2165 =
															(((BgL_variablez00_bglt)
																CREF(BgL_arg4899z00_1715))->BgL_idz00);
													}
													BgL_testz00_2164 =
														(BgL_auxz00_2165 == CNST_TABLE_REF(((long) 1)));
												}
												if (BgL_testz00_2164)
													{	/* Cfa/arithmetic.scm 196 */
														BgL_testz00_2163 = ((bool_t) 0);
													}
												else
													{	/* Cfa/arithmetic.scm 196 */
														BgL_testz00_2163 = ((bool_t) 1);
													}
											}
											if (BgL_testz00_2163)
												{	/* Cfa/arithmetic.scm 196 */
													{
														obj_t BgL_l4713z00_1705;

														BgL_l4713z00_1705 = BgL_argszd2approxzd2_1694;
													BgL_zc3anonymousza34892ze3z83_1706:
														if (PAIRP(BgL_l4713z00_1705))
															{	/* Cfa/arithmetic.scm 197 */
																{	/* Cfa/arithmetic.scm 197 */
																	obj_t BgL_az00_1708;

																	BgL_az00_1708 = CAR(BgL_l4713z00_1705);
																	BGl_loosez12z12zzcfa_loosez00(
																		(BgL_approxz00_bglt) (BgL_az00_1708),
																		CNST_TABLE_REF(((long) 2)));
																}
																{
																	obj_t BgL_l4713z00_2179;

																	BgL_l4713z00_2179 = CDR(BgL_l4713z00_1705);
																	BgL_l4713z00_1705 = BgL_l4713z00_2179;
																	goto BgL_zc3anonymousza34892ze3z83_1706;
																}
															}
														else
															{	/* Cfa/arithmetic.scm 197 */
																((bool_t) 1);
															}
													}
													{	/* Cfa/arithmetic.scm 198 */
														BgL_approxz00_bglt BgL_arg4895z00_1711;

														{
															obj_t BgL_auxz00_2181;

															{	/* Cfa/arithmetic.scm 198 */
																BgL_objectz00_bglt BgL_auxz00_2182;

																BgL_auxz00_2182 =
																	(BgL_objectz00_bglt) (BgL_nodez00_1686);
																BgL_auxz00_2181 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_2182);
															}
															BgL_arg4895z00_1711 =
																(((BgL_arithmeticzd2appzd2_bglt)
																	CREF(BgL_auxz00_2181))->BgL_approxz00);
														}
														BGl_approxzd2setzd2typez12z12zzcfa_approxz00
															(BgL_arg4895z00_1711,
															(BgL_typez00_bglt)
															(BGl_za2objza2z00zztype_cachez00));
													}
												}
											else
												{	/* Cfa/arithmetic.scm 196 */
													BFALSE;
												}
										}
								}
							}
						}
						{
							obj_t BgL_auxz00_2188;

							{	/* Cfa/arithmetic.scm 200 */
								BgL_objectz00_bglt BgL_auxz00_2189;

								BgL_auxz00_2189 = (BgL_objectz00_bglt) (BgL_nodez00_1686);
								BgL_auxz00_2188 = BGL_OBJECT_WIDENING(BgL_auxz00_2189);
							}
							BgL_auxz00_2062 =
								(((BgL_arithmeticzd2appzd2_bglt) CREF(BgL_auxz00_2188))->
								BgL_approxz00);
						}
					}
					return (obj_t) (BgL_auxz00_2062);
				}
			}
		}
	}



/* node-setup!-pre-arit4716 */
	obj_t BGl_nodezd2setupz12zd2prezd2arit4716zc0zzcfa_arithmeticz00(obj_t
		BgL_envz00_1928, obj_t BgL_nodez00_1929)
	{
		AN_OBJECT;
		{	/* Cfa/arithmetic.scm 96 */
			{
				BgL_prezd2arithmeticzd2appz00_bglt BgL_nodez00_1625;

				{	/* Cfa/arithmetic.scm 99 */
					BgL_appz00_bglt BgL_auxz00_2195;

					BgL_nodez00_1625 =
						(BgL_prezd2arithmeticzd2appz00_bglt) (BgL_nodez00_1929);
					{	/* Cfa/arithmetic.scm 107 */
						BgL_variablez00_bglt BgL_fz00_1630;

						{	/* Cfa/arithmetic.scm 107 */
							BgL_varz00_bglt BgL_obj2155z00_1828;

							{
								BgL_appz00_bglt BgL_auxz00_2196;

								BgL_auxz00_2196 = (BgL_appz00_bglt) (BgL_nodez00_1625);
								BgL_obj2155z00_1828 =
									(((BgL_appz00_bglt) CREF(BgL_auxz00_2196))->BgL_funz00);
							}
							BgL_fz00_1630 =
								(((BgL_varz00_bglt) CREF(BgL_obj2155z00_1828))->
								BgL_variablez00);
						}
						{	/* Cfa/arithmetic.scm 107 */
							BgL_valuez00_bglt BgL_valz00_1631;

							BgL_valz00_1631 =
								(((BgL_variablez00_bglt) CREF(BgL_fz00_1630))->BgL_valuez00);
							{	/* Cfa/arithmetic.scm 108 */

								{	/* Cfa/arithmetic.scm 110 */
									bool_t BgL_testz00_2201;

									{	/* Cfa/arithmetic.scm 110 */
										BgL_typez00_bglt BgL_arg4850z00_1633;

										BgL_arg4850z00_1633 =
											(((BgL_variablez00_bglt) CREF(BgL_fz00_1630))->
											BgL_typez00);
										BgL_testz00_2201 =
											((obj_t) (BgL_arg4850z00_1633) ==
											BGl_za2objza2z00zztype_cachez00);
									}
									if (BgL_testz00_2201)
										{	/* Cfa/arithmetic.scm 110 */
											{
												BgL_typez00_bglt BgL_auxz00_2205;

												BgL_auxz00_2205 =
													(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00);
												((((BgL_variablez00_bglt) CREF(BgL_fz00_1630))->
														BgL_typez00) =
													((BgL_typez00_bglt) BgL_auxz00_2205), BUNSPEC);
											}
											{
												BgL_typez00_bglt BgL_auxz00_2210;

												BgL_nodez00_bglt BgL_auxz00_2208;

												BgL_auxz00_2210 =
													(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00);
												BgL_auxz00_2208 = (BgL_nodez00_bglt) (BgL_nodez00_1625);
												((((BgL_nodez00_bglt) CREF(BgL_auxz00_2208))->
														BgL_typez00) =
													((BgL_typez00_bglt) BgL_auxz00_2210), BUNSPEC);
											}
										}
									else
										{	/* Cfa/arithmetic.scm 110 */
											BFALSE;
										}
								}
								{	/* Cfa/arithmetic.scm 117 */
									bool_t BgL_testz00_2213;

									{	/* Cfa/arithmetic.scm 117 */
										obj_t BgL_obj1955z00_1835;

										BgL_obj1955z00_1835 = (obj_t) (BgL_valz00_1631);
										BgL_testz00_2213 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj1955z00_1835,
											BGl_sfunz00zzast_varz00);
									}
									if (BgL_testz00_2213)
										{	/* Cfa/arithmetic.scm 119 */
											obj_t BgL_arg4852z00_1635;

											{	/* Cfa/arithmetic.scm 119 */
												obj_t BgL_l4701z00_1636;

												{
													BgL_sfunz00_bglt BgL_auxz00_2216;

													BgL_auxz00_2216 =
														(BgL_sfunz00_bglt) (BgL_valz00_1631);
													BgL_l4701z00_1636 =
														(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2216))->
														BgL_argsz00);
												}
												if (NULLP(BgL_l4701z00_1636))
													{	/* Cfa/arithmetic.scm 119 */
														BgL_arg4852z00_1635 = BNIL;
													}
												else
													{	/* Cfa/arithmetic.scm 119 */
														obj_t BgL_head4703z00_1638;

														BgL_head4703z00_1638 =
															MAKE_PAIR
															(BGl_unspecifiedzd2typezd2zzcfa_arithmeticz00(CAR
																(BgL_l4701z00_1636)), BNIL);
														{	/* Cfa/arithmetic.scm 119 */
															obj_t BgL_g4706z00_1639;

															BgL_g4706z00_1639 = CDR(BgL_l4701z00_1636);
															{
																obj_t BgL_l4701z00_1641;

																obj_t BgL_tail4704z00_1642;

																BgL_l4701z00_1641 = BgL_g4706z00_1639;
																BgL_tail4704z00_1642 = BgL_head4703z00_1638;
															BgL_zc3anonymousza34854ze3z83_1643:
																if (NULLP(BgL_l4701z00_1641))
																	{	/* Cfa/arithmetic.scm 119 */
																		BgL_arg4852z00_1635 = BgL_head4703z00_1638;
																	}
																else
																	{	/* Cfa/arithmetic.scm 119 */
																		obj_t BgL_newtail4705z00_1645;

																		BgL_newtail4705z00_1645 =
																			MAKE_PAIR
																			(BGl_unspecifiedzd2typezd2zzcfa_arithmeticz00
																			(CAR(BgL_l4701z00_1641)), BNIL);
																		SET_CDR(BgL_tail4704z00_1642,
																			BgL_newtail4705z00_1645);
																		{
																			obj_t BgL_tail4704z00_2233;

																			obj_t BgL_l4701z00_2231;

																			BgL_l4701z00_2231 =
																				CDR(BgL_l4701z00_1641);
																			BgL_tail4704z00_2233 =
																				BgL_newtail4705z00_1645;
																			BgL_tail4704z00_1642 =
																				BgL_tail4704z00_2233;
																			BgL_l4701z00_1641 = BgL_l4701z00_2231;
																			goto BgL_zc3anonymousza34854ze3z83_1643;
																		}
																	}
															}
														}
													}
											}
											{
												BgL_sfunz00_bglt BgL_auxz00_2234;

												BgL_auxz00_2234 = (BgL_sfunz00_bglt) (BgL_valz00_1631);
												((((BgL_sfunz00_bglt) CREF(BgL_auxz00_2234))->
														BgL_argsz00) =
													((obj_t) BgL_arg4852z00_1635), BUNSPEC);
											}
										}
									else
										{	/* Cfa/arithmetic.scm 120 */
											bool_t BgL_testz00_2237;

											{	/* Cfa/arithmetic.scm 120 */
												obj_t BgL_obj2019z00_1851;

												BgL_obj2019z00_1851 = (obj_t) (BgL_valz00_1631);
												BgL_testz00_2237 =
													BGl_iszd2azf3z21zz__objectz00(BgL_obj2019z00_1851,
													BGl_cfunz00zzast_varz00);
											}
											if (BgL_testz00_2237)
												{	/* Cfa/arithmetic.scm 121 */
													obj_t BgL_g4686z00_1655;

													{
														BgL_cfunz00_bglt BgL_auxz00_2240;

														BgL_auxz00_2240 =
															(BgL_cfunz00_bglt) (BgL_valz00_1631);
														BgL_g4686z00_1655 =
															(((BgL_cfunz00_bglt) CREF(BgL_auxz00_2240))->
															BgL_argszd2typezd2);
													}
													{
														obj_t BgL_lz00_1657;

														BgL_lz00_1657 = BgL_g4686z00_1655;
													BgL_zc3anonymousza34864ze3z83_1658:
														if (PAIRP(BgL_lz00_1657))
															{	/* Cfa/arithmetic.scm 123 */
																obj_t BgL_auxz00_2245;

																BgL_auxz00_2245 =
																	BGl_unspecifiedzd2typezd2zzcfa_arithmeticz00
																	(CAR(BgL_lz00_1657));
																SET_CAR(BgL_lz00_1657, BgL_auxz00_2245);
															}
														else
															{
																obj_t BgL_lz00_2249;

																BgL_lz00_2249 = CDR(BgL_lz00_1657);
																BgL_lz00_1657 = BgL_lz00_2249;
																goto BgL_zc3anonymousza34864ze3z83_1658;
															}
													}
												}
											else
												{	/* Cfa/arithmetic.scm 120 */
													BGl_errorz00zz__errorz00
														(BGl_string4941z00zzcfa_arithmeticz00,
														BGl_string4944z00zzcfa_arithmeticz00,
														(obj_t) (BgL_nodez00_1625));
												}
										}
								}
								BGl_za2arithmeticzd2nodesza2zd2zzcfa_arithmeticz00 =
									MAKE_PAIR(
									(obj_t) (BgL_nodez00_1625),
									BGl_za2arithmeticzd2nodesza2zd2zzcfa_arithmeticz00);
								{	/* Cfa/arithmetic.scm 129 */
									obj_t BgL_arg4869z00_1664;

									{
										BgL_appz00_bglt BgL_auxz00_2255;

										BgL_auxz00_2255 = (BgL_appz00_bglt) (BgL_nodez00_1625);
										BgL_arg4869z00_1664 =
											(((BgL_appz00_bglt) CREF(BgL_auxz00_2255))->BgL_argsz00);
									}
									BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg4869z00_1664);
								}
								{	/* Cfa/arithmetic.scm 130 */
									obj_t BgL_speczd2typeszd2_1665;

									{
										obj_t BgL_auxz00_2259;

										{	/* Cfa/arithmetic.scm 130 */
											BgL_objectz00_bglt BgL_auxz00_2260;

											BgL_auxz00_2260 = (BgL_objectz00_bglt) (BgL_nodez00_1625);
											BgL_auxz00_2259 = BGL_OBJECT_WIDENING(BgL_auxz00_2260);
										}
										BgL_speczd2typeszd2_1665 =
											(((BgL_prezd2arithmeticzd2appz00_bglt)
												CREF(BgL_auxz00_2259))->BgL_speczd2typeszd2);
									}
									{	/* Cfa/arithmetic.scm 130 */
										BgL_prezd2arithmeticzd2appz00_bglt BgL_nodez00_1666;

										{	/* Cfa/arithmetic.scm 131 */
											long BgL_arg4876z00_1675;

											{	/* Cfa/arithmetic.scm 131 */
												obj_t BgL_arg4877z00_1676;

												{	/* Cfa/arithmetic.scm 131 */
													obj_t BgL_arg4878z00_1677;

													{	/* Cfa/arithmetic.scm 131 */
														BgL_objectz00_bglt BgL_objectz00_1860;

														BgL_objectz00_1860 =
															(BgL_objectz00_bglt) (BgL_nodez00_1625);
														{	/* Cfa/arithmetic.scm 131 */
															long BgL_arg2646z00_1861;

															{	/* Cfa/arithmetic.scm 131 */
																long BgL_arg2647z00_1862;

																BgL_arg2647z00_1862 =
																	BGL_OBJECT_CLASS_NUM(BgL_objectz00_1860);
																BgL_arg2646z00_1861 =
																	(BgL_arg2647z00_1862 - OBJECT_TYPE);
															}
															BgL_arg4878z00_1677 =
																VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
																(int) (BgL_arg2646z00_1861));
													}}
													BgL_arg4877z00_1676 =
														BGl_classzd2superzd2zz__objectz00
														(BgL_arg4878z00_1677);
												}
												BgL_arg4876z00_1675 =
													BGl_classzd2numzd2zz__objectz00(BgL_arg4877z00_1676);
											}
											BGL_OBJECT_CLASS_NUM_SET(
												(BgL_objectz00_bglt) (BgL_nodez00_1625),
												BgL_arg4876z00_1675);
										}
										{	/* Cfa/arithmetic.scm 131 */
											BgL_objectz00_bglt BgL_auxz00_2273;

											BgL_auxz00_2273 = (BgL_objectz00_bglt) (BgL_nodez00_1625);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_2273, BFALSE);
										}
										BgL_nodez00_1666 = BgL_nodez00_1625;
										{	/* Cfa/arithmetic.scm 131 */

											{	/* Cfa/arithmetic.scm 132 */
												BgL_appz00_bglt BgL_obj4688z00_1667;

												BgL_obj4688z00_1667 =
													((BgL_appz00_bglt)
													(BgL_appz00_bglt) (BgL_nodez00_1666));
												{	/* Cfa/arithmetic.scm 134 */
													obj_t BgL_arg4870z00_1668;

													{	/* Cfa/arithmetic.scm 134 */
														BgL_approxz00_bglt BgL_arg4871z00_1669;

														{	/* Cfa/arithmetic.scm 134 */
															bool_t BgL_testz00_2278;

															{	/* Cfa/arithmetic.scm 134 */
																BgL_typez00_bglt BgL_arg4874z00_1672;

																BgL_arg4874z00_1672 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_fz00_1630))->BgL_typez00);
																BgL_testz00_2278 =
																	((obj_t) (BgL_arg4874z00_1672) ==
																	BGl_za2_za2z00zztype_cachez00);
															}
															if (BgL_testz00_2278)
																{	/* Cfa/arithmetic.scm 134 */
																	BgL_arg4871z00_1669 =
																		BGl_makezd2emptyzd2approxz00zzcfa_approxz00
																		();
																}
															else
																{	/* Cfa/arithmetic.scm 136 */
																	BgL_typez00_bglt BgL_arg4873z00_1671;

																	BgL_arg4873z00_1671 =
																		(((BgL_variablez00_bglt)
																			CREF(BgL_fz00_1630))->BgL_typez00);
																	BgL_arg4871z00_1669 =
																		BGl_makezd2typezd2approxz00zzcfa_approxz00
																		(BgL_arg4873z00_1671);
																}
														}
														BgL_arg4870z00_1668 =
															BGl_wideningzd2arithmeticzd2appz00zzcfa_info2z00
															(BgL_arg4871z00_1669, BgL_speczd2typeszd2_1665);
													}
													{	/* Cfa/arithmetic.scm 132 */
														BgL_objectz00_bglt BgL_auxz00_2286;

														BgL_auxz00_2286 =
															(BgL_objectz00_bglt) (BgL_obj4688z00_1667);
														BGL_OBJECT_WIDENING_SET(BgL_auxz00_2286,
															BgL_arg4870z00_1668);
													}
												}
												BGL_OBJECT_CLASS_NUM_SET(
													(BgL_objectz00_bglt) (BgL_obj4688z00_1667),
													BGl_classzd2numzd2zz__objectz00
													(BGl_arithmeticzd2appzd2zzcfa_info2z00));
												BgL_auxz00_2195 = BgL_obj4688z00_1667;
											}
										}
									}
								}
							}
						}
					}
					return (obj_t) (BgL_auxz00_2195);
				}
			}
		}
	}



/* unspecified-type */
	obj_t BGl_unspecifiedzd2typezd2zzcfa_arithmeticz00(obj_t BgL_lz00_1679)
	{
		AN_OBJECT;
		{	/* Cfa/arithmetic.scm 105 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_lz00_1679,
					BGl_typez00zztype_typez00))
				{	/* Cfa/arithmetic.scm 99 */
					return BGl_za2_za2z00zztype_cachez00;
				}
			else
				{	/* Cfa/arithmetic.scm 99 */
					if (BGl_iszd2azf3z21zz__objectz00(BgL_lz00_1679,
							BGl_localz00zzast_varz00))
						{	/* Cfa/arithmetic.scm 101 */
							{
								BgL_typez00_bglt BgL_auxz00_2301;

								BgL_variablez00_bglt BgL_auxz00_2298;

								BgL_auxz00_2301 =
									(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00);
								BgL_auxz00_2298 =
									(BgL_variablez00_bglt) ((BgL_localz00_bglt) (BgL_lz00_1679));
								((((BgL_variablez00_bglt) CREF(BgL_auxz00_2298))->BgL_typez00) =
									((BgL_typez00_bglt) BgL_auxz00_2301), BUNSPEC);
							}
							return BgL_lz00_1679;
						}
					else
						{	/* Cfa/arithmetic.scm 101 */
							return BgL_lz00_1679;
						}
				}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_arithmeticz00()
	{
		AN_OBJECT;
		{	/* Cfa/arithmetic.scm 28 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string4945z00zzcfa_arithmeticz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string4945z00zzcfa_arithmeticz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4945z00zzcfa_arithmeticz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4945z00zzcfa_arithmeticz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string4945z00zzcfa_arithmeticz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4945z00zzcfa_arithmeticz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4945z00zzcfa_arithmeticz00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 243010053),
				BSTRING_TO_STRING(BGl_string4945z00zzcfa_arithmeticz00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string4945z00zzcfa_arithmeticz00));
			BGl_modulezd2initializa7ationz75zzcfa_loosez00(((long) 235614963),
				BSTRING_TO_STRING(BGl_string4945z00zzcfa_arithmeticz00));
			BGl_modulezd2initializa7ationz75zzcfa_iteratez00(((long) 319050990),
				BSTRING_TO_STRING(BGl_string4945z00zzcfa_arithmeticz00));
			BGl_modulezd2initializa7ationz75zzcfa_cfaz00(((long) 42139303),
				BSTRING_TO_STRING(BGl_string4945z00zzcfa_arithmeticz00));
			BGl_modulezd2initializa7ationz75zzcfa_setupz00(((long) 212645849),
				BSTRING_TO_STRING(BGl_string4945z00zzcfa_arithmeticz00));
			BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 535144917),
				BSTRING_TO_STRING(BGl_string4945z00zzcfa_arithmeticz00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_tvectorz00(((long) 249450490),
				BSTRING_TO_STRING(BGl_string4945z00zzcfa_arithmeticz00));
		}
	}

#ifdef __cplusplus
}
#endif
