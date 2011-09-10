/*===========================================================================*/
/*   (Ast/find_gdefs.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/find_gdefs.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
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


	static obj_t BGl_za2gdefzd2keyza2zd2zzast_findzd2gdefszd2 = BUNSPEC;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_IMPORT obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzast_findzd2gdefszd2();
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzast_findzd2gdefszd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_dssslz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long, char *);
	static obj_t BGl__tozd2bezd2definez12z12zzast_findzd2gdefszd2(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzast_findzd2gdefszd2();
	BGL_IMPORT obj_t BGl_rempropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t);
	static obj_t BGl_pushzd2argszd2zzast_findzd2gdefszd2(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_findzd2globalzd2defsz00zzast_findzd2gdefszd2(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tozd2bezd2definez12z12zzast_findzd2gdefszd2(BgL_globalz00_bglt);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_za2allzd2definedzd2idza2z00zzast_findzd2gdefszd2 = BUNSPEC;
	BGL_IMPORT obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	static obj_t BGl_loopz00zzast_findzd2gdefszd2(obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_findzd2gdefszd2();
	extern obj_t BGl_idzd2ofzd2idz00zzast_identz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t);
	static obj_t BGl_zc3anonymousza33322ze3z83zzast_findzd2gdefszd2(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33326ze3z83zzast_findzd2gdefszd2(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33327ze3z83zzast_findzd2gdefszd2(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__checkzd2tozd2bezd2definezd2zzast_findzd2gdefszd2(obj_t);
	static obj_t BGl__findzd2globalzd2defsz00zzast_findzd2gdefszd2(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_findzd2gdefszd2 = BUNSPEC;
	extern obj_t BGl_dssslzd2defaultedzd2formalzf3zf3zztools_dssslz00(obj_t);
	extern obj_t BGl_dssslzd2defaultzd2formalz00zztools_dssslz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzast_findzd2gdefszd2();
	BGL_EXPORTED_DECL obj_t
		BGl_checkzd2tozd2bezd2definezd2zzast_findzd2gdefszd2();
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	static obj_t BGl_importedzd2moduleszd2initz00zzast_findzd2gdefszd2();
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_defszd2ze3listz31zzast_findzd2gdefszd2();
	static obj_t BGl_findzd21zd2mutationsz12z12zzast_findzd2gdefszd2(obj_t,
		obj_t);
	static obj_t BGl_za2tozd2bezd2defineza2z00zzast_findzd2gdefszd2 = BUNSPEC;
	extern obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_bindzd2globalzd2defz12z12zzast_findzd2gdefszd2(obj_t, obj_t);
	static obj_t BGl_za2gdefszd2listza2zd2zzast_findzd2gdefszd2 = BUNSPEC;
	static obj_t BGl_definezd2globalzd2zzast_findzd2gdefszd2(obj_t, obj_t, obj_t,
		obj_t);
	extern long BGl_globalzd2arityzd2zztools_argsz00(obj_t);
	static bool_t BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2(obj_t, obj_t);
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_findzd2gdefszd2();
	static obj_t __cnst[25];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_findzd2globalzd2defszd2envzd2zzast_findzd2gdefszd2,
		BgL_bgl__findza7d2globalza7d3727z00,
		BGl__findzd2globalzd2defsz00zzast_findzd2gdefszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_checkzd2tozd2bezd2definezd2envz00zzast_findzd2gdefszd2,
		BgL_bgl__checkza7d2toza7d2be3728z00,
		BGl__checkzd2tozd2bezd2definezd2zzast_findzd2gdefszd2, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tozd2bezd2definez12zd2envzc0zzast_findzd2gdefszd2,
		BgL_bgl__toza7d2beza7d2defin3729z00,
		BGl__tozd2bezd2definez12z12zzast_findzd2gdefszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3704z00zzast_findzd2gdefszd2,
		BgL_bgl_defineza7d2globalza73730z00,
		BGl_definezd2globalzd2zzast_findzd2gdefszd2, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3705z00zzast_findzd2gdefszd2,
		BgL_bgl_za7c3anonymousza7a333731z00,
		BGl_zc3anonymousza33322ze3z83zzast_findzd2gdefszd2, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3706z00zzast_findzd2gdefszd2,
		BgL_bgl_za7c3anonymousza7a333732z00,
		BGl_zc3anonymousza33326ze3z83zzast_findzd2gdefszd2, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3707z00zzast_findzd2gdefszd2,
		BgL_bgl_za7c3anonymousza7a333733z00,
		BGl_zc3anonymousza33327ze3z83zzast_findzd2gdefszd2, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string3703z00zzast_findzd2gdefszd2,
		BgL_bgl_string3703za700za7za7a3734za7, "Can't find global definition", 28);
	      DEFINE_STRING(BGl_string3708z00zzast_findzd2gdefszd2,
		BgL_bgl_string3708za700za7za7a3735za7, "Illegal duplicated definition", 29);
	      DEFINE_STRING(BGl_string3710z00zzast_findzd2gdefszd2,
		BgL_bgl_string3710za700za7za7a3736za7, "Illegal bindings", 16);
	      DEFINE_STRING(BGl_string3709z00zzast_findzd2gdefszd2,
		BgL_bgl_string3709za700za7za7a3737za7, "let", 3);
	      DEFINE_STRING(BGl_string3711z00zzast_findzd2gdefszd2,
		BgL_bgl_string3711za700za7za7a3738za7, "letrec", 6);
	      DEFINE_STRING(BGl_string3712z00zzast_findzd2gdefszd2,
		BgL_bgl_string3712za700za7za7a3739za7, "lambda", 6);
	      DEFINE_STRING(BGl_string3713z00zzast_findzd2gdefszd2,
		BgL_bgl_string3713za700za7za7a3740za7, "Illegal `lambda' form", 21);
	      DEFINE_STRING(BGl_string3714z00zzast_findzd2gdefszd2,
		BgL_bgl_string3714za700za7za7a3741za7, "Illegal `define-inline' form", 28);
	      DEFINE_STRING(BGl_string3715z00zzast_findzd2gdefszd2,
		BgL_bgl_string3715za700za7za7a3742za7, "Illegal `define-generic' form", 29);
	      DEFINE_STRING(BGl_string3716z00zzast_findzd2gdefszd2,
		BgL_bgl_string3716za700za7za7a3743za7,
		"Illegal formal parameter, symbol or named constant expected", 59);
	      DEFINE_STRING(BGl_string3717z00zzast_findzd2gdefszd2,
		BgL_bgl_string3717za700za7za7a3744za7,
		"Illegal formal parameter, symbol expected", 41);
	      DEFINE_STRING(BGl_string3718z00zzast_findzd2gdefszd2,
		BgL_bgl_string3718za700za7za7a3745za7,
		"Can't use both DSSSL named constant, and `.' notation", 53);
	      DEFINE_STRING(BGl_string3720z00zzast_findzd2gdefszd2,
		BgL_bgl_string3720za700za7za7a3746za7,
		"if case apply bind-exit labels letrec let set! assert quote lambda free-pragma pragma write @ nothing done define-method define-generic define-inline define begin read def find-gdefs ",
		183);
	      DEFINE_STRING(BGl_string3719z00zzast_findzd2gdefszd2,
		BgL_bgl_string3719za700za7za7a3747za7, "ast_find-gdefs", 14);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzast_findzd2gdefszd2(long
		BgL_checksumz00_2242, char *BgL_fromz00_2243)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_findzd2gdefszd2))
				{
					BGl_requirezd2initializa7ationz75zzast_findzd2gdefszd2 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_findzd2gdefszd2();
					BGl_cnstzd2initzd2zzast_findzd2gdefszd2();
					BGl_importedzd2moduleszd2initz00zzast_findzd2gdefszd2();
					BGl_toplevelzd2initzd2zzast_findzd2gdefszd2();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_findzd2gdefszd2()
	{
		AN_OBJECT;
		{	/* Ast/find_gdefs.scm 23 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"ast_find-gdefs");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"ast_find-gdefs");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_find-gdefs");
			BGl_modulezd2initializa7ationz75zz__dssslz00(((long) 0),
				"ast_find-gdefs");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_findzd2gdefszd2()
	{
		AN_OBJECT;
		{	/* Ast/find_gdefs.scm 23 */
			{	/* Ast/find_gdefs.scm 23 */
				obj_t BgL_cportz00_2218;

				BgL_cportz00_2218 =
					bgl_open_input_string(BGl_string3720z00zzast_findzd2gdefszd2,
					(int) (((long) 0)));
				{
					long BgL_iz00_2219;

					BgL_iz00_2219 = ((long) 24);
				BgL_loopz00_2220:
					if ((BgL_iz00_2219 == ((long) -1)))
						{	/* Ast/find_gdefs.scm 23 */
							return BUNSPEC;
						}
					else
						{	/* Ast/find_gdefs.scm 23 */
							{	/* Ast/find_gdefs.scm 23 */
								obj_t BgL_arg3722z00_2222;

								{	/* Ast/find_gdefs.scm 23 */

									{	/* Ast/find_gdefs.scm 23 */
										obj_t BgL_locationz00_2224;

										BgL_locationz00_2224 = BBOOL(((bool_t) 0));
										{	/* Ast/find_gdefs.scm 23 */

											BgL_arg3722z00_2222 =
												BGl_readz00zz__readerz00(BgL_cportz00_2218,
												BgL_locationz00_2224);
										}
									}
								}
								{	/* Ast/find_gdefs.scm 23 */
									int BgL_auxz00_2261;

									BgL_auxz00_2261 = (int) (BgL_iz00_2219);
									CNST_TABLE_SET(BgL_auxz00_2261, BgL_arg3722z00_2222);
							}}
							{	/* Ast/find_gdefs.scm 23 */
								int BgL_auxz00_2225;

								BgL_auxz00_2225 = (int) ((BgL_iz00_2219 - ((long) 1)));
								{
									long BgL_iz00_2266;

									BgL_iz00_2266 = (long) (BgL_auxz00_2225);
									BgL_iz00_2219 = BgL_iz00_2266;
									goto BgL_loopz00_2220;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_findzd2gdefszd2()
	{
		AN_OBJECT;
		{	/* Ast/find_gdefs.scm 23 */
			BGl_za2tozd2bezd2defineza2z00zzast_findzd2gdefszd2 = BNIL;
			BGl_za2gdefzd2keyza2zd2zzast_findzd2gdefszd2 =
				BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 0)));
			BGl_za2gdefszd2listza2zd2zzast_findzd2gdefszd2 = BNIL;
			return (BGl_za2allzd2definedzd2idza2z00zzast_findzd2gdefszd2 =
				BNIL, BUNSPEC);
		}
	}



/* to-be-define! */
	BGL_EXPORTED_DEF obj_t
		BGl_tozd2bezd2definez12z12zzast_findzd2gdefszd2(BgL_globalz00_bglt
		BgL_globalz00_15)
	{
		AN_OBJECT;
		{	/* Ast/find_gdefs.scm 54 */
			return (BGl_za2tozd2bezd2defineza2z00zzast_findzd2gdefszd2 =
				MAKE_PAIR(
					(obj_t) (BgL_globalz00_15),
					BGl_za2tozd2bezd2defineza2z00zzast_findzd2gdefszd2), BUNSPEC);
		}
	}



/* _to-be-define! */
	obj_t BGl__tozd2bezd2definez12z12zzast_findzd2gdefszd2(obj_t BgL_envz00_2190,
		obj_t BgL_globalz00_2191)
	{
		AN_OBJECT;
		{	/* Ast/find_gdefs.scm 54 */
			return
				BGl_tozd2bezd2definez12z12zzast_findzd2gdefszd2(
				(BgL_globalz00_bglt) (BgL_globalz00_2191));
		}
	}



/* check-to-be-define */
	BGL_EXPORTED_DEF obj_t BGl_checkzd2tozd2bezd2definezd2zzast_findzd2gdefszd2()
	{
		AN_OBJECT;
		{	/* Ast/find_gdefs.scm 63 */
			{
				obj_t BgL_l3269z00_820;

				BgL_l3269z00_820 = BGl_za2tozd2bezd2defineza2z00zzast_findzd2gdefszd2;
			BgL_zc3anonymousza33298ze3z83_821:
				if (PAIRP(BgL_l3269z00_820))
					{	/* Ast/find_gdefs.scm 64 */
						{	/* Ast/find_gdefs.scm 65 */
							obj_t BgL_globalz00_823;

							BgL_globalz00_823 = CAR(BgL_l3269z00_820);
							{	/* Ast/find_gdefs.scm 65 */
								obj_t BgL_defz00_824;

								{	/* Ast/find_gdefs.scm 65 */
									obj_t BgL_arg3307z00_832;

									{
										BgL_variablez00_bglt BgL_auxz00_2277;

										BgL_auxz00_2277 =
											(BgL_variablez00_bglt) (BgL_globalz00_823);
										BgL_arg3307z00_832 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_2277))->
											BgL_idz00);
									}
									BgL_defz00_824 =
										BGl_getpropz00zz__r4_symbols_6_4z00(BgL_arg3307z00_832,
										BGl_za2gdefzd2keyza2zd2zzast_findzd2gdefszd2);
								}
								{	/* Ast/find_gdefs.scm 66 */
									bool_t BgL_testz00_2281;

									if (STRUCTP(BgL_defz00_824))
										{	/* Ast/find_gdefs.scm 66 */
											BgL_testz00_2281 =
												(STRUCT_KEY(BgL_defz00_824) ==
												CNST_TABLE_REF(((long) 1)));
										}
									else
										{	/* Ast/find_gdefs.scm 66 */
											BgL_testz00_2281 = ((bool_t) 0);
										}
									if (BgL_testz00_2281)
										{	/* Ast/find_gdefs.scm 66 */
											BFALSE;
										}
									else
										{	/* Ast/find_gdefs.scm 67 */
											obj_t BgL_arg3301z00_826;

											obj_t BgL_arg3303z00_828;

											BgL_arg3301z00_826 =
												BGl_shapez00zztools_shapez00(BgL_globalz00_823);
											{	/* Ast/find_gdefs.scm 69 */
												obj_t BgL_arg3306z00_831;

												{
													BgL_globalz00_bglt BgL_auxz00_2288;

													BgL_auxz00_2288 =
														(BgL_globalz00_bglt) (BgL_globalz00_823);
													BgL_arg3306z00_831 =
														(((BgL_globalz00_bglt) CREF(BgL_auxz00_2288))->
														BgL_srcz00);
												}
												BgL_arg3303z00_828 =
													BGl_shapez00zztools_shapez00(BgL_arg3306z00_831);
											}
											{	/* Ast/find_gdefs.scm 67 */
												obj_t BgL_list3305z00_830;

												BgL_list3305z00_830 = MAKE_PAIR(BNIL, BNIL);
												BGl_userzd2errorzd2zztools_errorz00(BgL_arg3301z00_826,
													BGl_string3703z00zzast_findzd2gdefszd2,
													BgL_arg3303z00_828, BgL_list3305z00_830);
											}
										}
								}
							}
						}
						{
							obj_t BgL_l3269z00_2294;

							BgL_l3269z00_2294 = CDR(BgL_l3269z00_820);
							BgL_l3269z00_820 = BgL_l3269z00_2294;
							goto BgL_zc3anonymousza33298ze3z83_821;
						}
					}
				else
					{	/* Ast/find_gdefs.scm 64 */
						((bool_t) 1);
					}
			}
			{
				obj_t BgL_l3271z00_836;

				BgL_l3271z00_836 = BGl_za2allzd2definedzd2idza2z00zzast_findzd2gdefszd2;
			BgL_zc3anonymousza33309ze3z83_837:
				if (PAIRP(BgL_l3271z00_836))
					{	/* Ast/find_gdefs.scm 73 */
						{	/* Ast/find_gdefs.scm 73 */
							obj_t BgL_idz00_839;

							BgL_idz00_839 = CAR(BgL_l3271z00_836);
							BGl_rempropz12z12zz__r4_symbols_6_4z00(BgL_idz00_839,
								BGl_za2gdefzd2keyza2zd2zzast_findzd2gdefszd2);
						}
						{
							obj_t BgL_l3271z00_2300;

							BgL_l3271z00_2300 = CDR(BgL_l3271z00_836);
							BgL_l3271z00_836 = BgL_l3271z00_2300;
							goto BgL_zc3anonymousza33309ze3z83_837;
						}
					}
				else
					{	/* Ast/find_gdefs.scm 73 */
						((bool_t) 1);
					}
			}
			BGl_za2allzd2definedzd2idza2z00zzast_findzd2gdefszd2 = BNIL;
			return (BGl_za2tozd2bezd2defineza2z00zzast_findzd2gdefszd2 =
				BNIL, BUNSPEC);
		}
	}



/* _check-to-be-define */
	obj_t BGl__checkzd2tozd2bezd2definezd2zzast_findzd2gdefszd2(obj_t
		BgL_envz00_2192)
	{
		AN_OBJECT;
		{	/* Ast/find_gdefs.scm 63 */
			return BGl_checkzd2tozd2bezd2definezd2zzast_findzd2gdefszd2();
		}
	}



/* bind-global-def! */
	obj_t BGl_bindzd2globalzd2defz12z12zzast_findzd2gdefszd2(obj_t BgL_idz00_17,
		obj_t BgL_arityz00_18)
	{
		AN_OBJECT;
		{	/* Ast/find_gdefs.scm 102 */
			{	/* Ast/find_gdefs.scm 103 */
				obj_t BgL_defz00_842;

				{	/* Ast/find_gdefs.scm 103 */
					obj_t BgL_accessz00_1813;

					BgL_accessz00_1813 = CNST_TABLE_REF(((long) 2));
					{	/* Ast/find_gdefs.scm 103 */
						obj_t BgL_newz00_1815;

						BgL_newz00_1815 =
							create_struct(CNST_TABLE_REF(((long) 1)), (int) (((long) 3)));
						{	/* Ast/find_gdefs.scm 103 */
							int BgL_auxz00_2307;

							BgL_auxz00_2307 = (int) (((long) 2));
							STRUCT_SET(BgL_newz00_1815, BgL_auxz00_2307, BgL_arityz00_18);
						}
						{	/* Ast/find_gdefs.scm 103 */
							int BgL_auxz00_2310;

							BgL_auxz00_2310 = (int) (((long) 1));
							STRUCT_SET(BgL_newz00_1815, BgL_auxz00_2310, BgL_accessz00_1813);
						}
						{	/* Ast/find_gdefs.scm 103 */
							int BgL_auxz00_2313;

							BgL_auxz00_2313 = (int) (((long) 0));
							STRUCT_SET(BgL_newz00_1815, BgL_auxz00_2313, BgL_idz00_17);
						}
						BgL_defz00_842 = BgL_newz00_1815;
				}}
				BGl_za2gdefszd2listza2zd2zzast_findzd2gdefszd2 =
					MAKE_PAIR(BgL_defz00_842,
					BGl_za2gdefszd2listza2zd2zzast_findzd2gdefszd2);
				BGl_za2allzd2definedzd2idza2z00zzast_findzd2gdefszd2 =
					MAKE_PAIR(BgL_idz00_17,
					BGl_za2allzd2definedzd2idza2z00zzast_findzd2gdefszd2);
				return BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_idz00_17,
					BGl_za2gdefzd2keyza2zd2zzast_findzd2gdefszd2, BgL_defz00_842);
			}
		}
	}



/* defs->list */
	obj_t BGl_defszd2ze3listz31zzast_findzd2gdefszd2()
	{
		AN_OBJECT;
		{	/* Ast/find_gdefs.scm 114 */
			{
				obj_t BgL_defsz00_845;

				obj_t BgL_resz00_846;

				BgL_defsz00_845 = BGl_za2gdefszd2listza2zd2zzast_findzd2gdefszd2;
				BgL_resz00_846 = BNIL;
			BgL_zc3anonymousza33312ze3z83_847:
				if (NULLP(BgL_defsz00_845))
					{	/* Ast/find_gdefs.scm 117 */
						BGl_za2gdefszd2listza2zd2zzast_findzd2gdefszd2 = BNIL;
						return BgL_resz00_846;
					}
				else
					{	/* Ast/find_gdefs.scm 121 */
						obj_t BgL_defz00_849;

						BgL_defz00_849 = CAR(BgL_defsz00_845);
						{	/* Ast/find_gdefs.scm 122 */
							obj_t BgL_arg3314z00_850;

							obj_t BgL_arg3315z00_851;

							BgL_arg3314z00_850 = CDR(BgL_defsz00_845);
							{	/* Ast/find_gdefs.scm 123 */
								obj_t BgL_arg3316z00_852;

								{	/* Ast/find_gdefs.scm 123 */
									obj_t BgL_arg3317z00_853;

									obj_t BgL_arg3318z00_854;

									BgL_arg3317z00_853 =
										STRUCT_REF(BgL_defz00_849, (int) (((long) 0)));
									BgL_arg3318z00_854 =
										MAKE_PAIR(STRUCT_REF(BgL_defz00_849,
											(int) (((long) 1))),
										STRUCT_REF(BgL_defz00_849, (int) (((long) 2))));
									BgL_arg3316z00_852 =
										MAKE_PAIR(BgL_arg3317z00_853, BgL_arg3318z00_854);
								}
								BgL_arg3315z00_851 =
									MAKE_PAIR(BgL_arg3316z00_852, BgL_resz00_846);
							}
							{
								obj_t BgL_resz00_2333;

								obj_t BgL_defsz00_2332;

								BgL_defsz00_2332 = BgL_arg3314z00_850;
								BgL_resz00_2333 = BgL_arg3315z00_851;
								BgL_resz00_846 = BgL_resz00_2333;
								BgL_defsz00_845 = BgL_defsz00_2332;
								goto BgL_zc3anonymousza33312ze3z83_847;
							}
						}
					}
			}
		}
	}



/* find-global-defs */
	BGL_EXPORTED_DEF obj_t BGl_findzd2globalzd2defsz00zzast_findzd2gdefszd2(obj_t
		BgL_sexpza2za2_19)
	{
		AN_OBJECT;
		{	/* Ast/find_gdefs.scm 139 */
			BGl_za2gdefszd2listza2zd2zzast_findzd2gdefszd2 = BNIL;
			BGl_loopz00zzast_findzd2gdefszd2(BGl_proc3704z00zzast_findzd2gdefszd2,
				BGl_proc3705z00zzast_findzd2gdefszd2, BgL_sexpza2za2_19);
			BGl_loopz00zzast_findzd2gdefszd2(BGl_proc3706z00zzast_findzd2gdefszd2,
				BGl_proc3707z00zzast_findzd2gdefszd2, BgL_sexpza2za2_19);
			return BGl_defszd2ze3listz31zzast_findzd2gdefszd2();
		}
	}



/* loop */
	obj_t BGl_loopz00zzast_findzd2gdefszd2(obj_t BgL_actionzd2definezd2_2216,
		obj_t BgL_actionzd2bodyzd2_2215, obj_t BgL_sexpza2za2_910)
	{
		AN_OBJECT;
		{	/* Ast/find_gdefs.scm 155 */
		BGl_loopz00zzast_findzd2gdefszd2:
			if (PAIRP(BgL_sexpza2za2_910))
				{	/* Ast/find_gdefs.scm 158 */
					obj_t BgL_sexpz00_913;

					BgL_sexpz00_913 = CAR(BgL_sexpza2za2_910);
					{
						obj_t BgL_varz00_916;

						obj_t BgL_argsz00_917;

						obj_t BgL_expz00_918;

						obj_t BgL_varz00_924;

						obj_t BgL_expz00_925;

						if (PAIRP(BgL_sexpz00_913))
							{	/* Ast/find_gdefs.scm 159 */
								if ((CAR(BgL_sexpz00_913) == CNST_TABLE_REF(((long) 3))))
									{	/* Ast/find_gdefs.scm 159 */
										obj_t BgL_arg3349z00_931;

										BgL_arg3349z00_931 = CDR(BgL_sexpz00_913);
										BGl_loopz00zzast_findzd2gdefszd2
											(BgL_actionzd2definezd2_2216, BgL_actionzd2bodyzd2_2215,
											BgL_arg3349z00_931);
										{
											obj_t BgL_sexpza2za2_2348;

											BgL_sexpza2za2_2348 = CDR(BgL_sexpza2za2_910);
											BgL_sexpza2za2_910 = BgL_sexpza2za2_2348;
											goto BGl_loopz00zzast_findzd2gdefszd2;
										}
									}
								else
									{	/* Ast/find_gdefs.scm 159 */
										obj_t BgL_cdrzd21692zd2_932;

										BgL_cdrzd21692zd2_932 = CDR(BgL_sexpz00_913);
										if ((CAR(BgL_sexpz00_913) == CNST_TABLE_REF(((long) 4))))
											{	/* Ast/find_gdefs.scm 159 */
												if (PAIRP(BgL_cdrzd21692zd2_932))
													{	/* Ast/find_gdefs.scm 159 */
														obj_t BgL_carzd21696zd2_935;

														BgL_carzd21696zd2_935 = CAR(BgL_cdrzd21692zd2_932);
														if (PAIRP(BgL_carzd21696zd2_935))
															{	/* Ast/find_gdefs.scm 159 */
																BgL_varz00_916 = CAR(BgL_carzd21696zd2_935);
																BgL_argsz00_917 = CDR(BgL_carzd21696zd2_935);
																BgL_expz00_918 = CDR(BgL_cdrzd21692zd2_932);
															BgL_tagzd21668zd2_919:
																{	/* Ast/find_gdefs.scm 166 */
																	long BgL_arg3387z00_978;

																	BgL_arg3387z00_978 =
																		BGl_globalzd2arityzd2zztools_argsz00
																		(BgL_argsz00_917);
																	PROCEDURE_ENTRY(BgL_actionzd2definezd2_2216)
																		(BgL_actionzd2definezd2_2216,
																		BgL_varz00_916, BINT(BgL_arg3387z00_978),
																		BgL_sexpz00_913, BEOA);
																}
																PROCEDURE_ENTRY(BgL_actionzd2bodyzd2_2215)
																	(BgL_actionzd2bodyzd2_2215, BgL_argsz00_917,
																	BgL_expz00_918, BgL_sexpz00_913, BEOA);
																{
																	obj_t BgL_sexpza2za2_2366;

																	BgL_sexpza2za2_2366 = CDR(BgL_sexpza2za2_910);
																	BgL_sexpza2za2_910 = BgL_sexpza2za2_2366;
																	goto BGl_loopz00zzast_findzd2gdefszd2;
																}
															}
														else
															{	/* Ast/find_gdefs.scm 159 */
																BgL_varz00_924 = CAR(BgL_cdrzd21692zd2_932);
																BgL_expz00_925 = CDR(BgL_cdrzd21692zd2_932);
																PROCEDURE_ENTRY(BgL_actionzd2definezd2_2216)
																	(BgL_actionzd2definezd2_2216, BgL_varz00_924,
																	BFALSE, BgL_sexpz00_913, BEOA);
																PROCEDURE_ENTRY(BgL_actionzd2bodyzd2_2215)
																	(BgL_actionzd2bodyzd2_2215, BNIL,
																	BgL_expz00_925, BgL_sexpz00_913, BEOA);
																{
																	obj_t BgL_sexpza2za2_2375;

																	BgL_sexpza2za2_2375 = CDR(BgL_sexpza2za2_910);
																	BgL_sexpza2za2_910 = BgL_sexpza2za2_2375;
																	goto BGl_loopz00zzast_findzd2gdefszd2;
																}
															}
													}
												else
													{	/* Ast/find_gdefs.scm 159 */
													BgL_tagzd21671zd2_927:
														{	/* Ast/find_gdefs.scm 177 */
															obj_t BgL_arg3392z00_983;

															{	/* Ast/find_gdefs.scm 177 */
																obj_t BgL_list3393z00_984;

																BgL_list3393z00_984 =
																	MAKE_PAIR(BgL_sexpz00_913, BNIL);
																BgL_arg3392z00_983 = BgL_list3393z00_984;
															}
															PROCEDURE_ENTRY(BgL_actionzd2bodyzd2_2215)
																(BgL_actionzd2bodyzd2_2215, BNIL,
																BgL_arg3392z00_983, BgL_sexpz00_913, BEOA);
														}
														{
															obj_t BgL_sexpza2za2_2382;

															BgL_sexpza2za2_2382 = CDR(BgL_sexpza2za2_910);
															BgL_sexpza2za2_910 = BgL_sexpza2za2_2382;
															goto BGl_loopz00zzast_findzd2gdefszd2;
														}
													}
											}
										else
											{	/* Ast/find_gdefs.scm 159 */
												if (
													(CAR(BgL_sexpz00_913) == CNST_TABLE_REF(((long) 5))))
													{	/* Ast/find_gdefs.scm 159 */
														if (PAIRP(BgL_cdrzd21692zd2_932))
															{	/* Ast/find_gdefs.scm 159 */
																obj_t BgL_carzd21765zd2_946;

																BgL_carzd21765zd2_946 =
																	CAR(BgL_cdrzd21692zd2_932);
																if (PAIRP(BgL_carzd21765zd2_946))
																	{
																		obj_t BgL_expz00_2397;

																		obj_t BgL_argsz00_2395;

																		obj_t BgL_varz00_2393;

																		BgL_varz00_2393 =
																			CAR(BgL_carzd21765zd2_946);
																		BgL_argsz00_2395 =
																			CDR(BgL_carzd21765zd2_946);
																		BgL_expz00_2397 =
																			CDR(BgL_cdrzd21692zd2_932);
																		BgL_expz00_918 = BgL_expz00_2397;
																		BgL_argsz00_917 = BgL_argsz00_2395;
																		BgL_varz00_916 = BgL_varz00_2393;
																		goto BgL_tagzd21668zd2_919;
																	}
																else
																	{	/* Ast/find_gdefs.scm 159 */
																		goto BgL_tagzd21671zd2_927;
																	}
															}
														else
															{	/* Ast/find_gdefs.scm 159 */
																goto BgL_tagzd21671zd2_927;
															}
													}
												else
													{	/* Ast/find_gdefs.scm 159 */
														obj_t BgL_cdrzd21804zd2_951;

														BgL_cdrzd21804zd2_951 = CDR(BgL_sexpz00_913);
														if (
															(CAR(BgL_sexpz00_913) ==
																CNST_TABLE_REF(((long) 6))))
															{	/* Ast/find_gdefs.scm 159 */
																if (PAIRP(BgL_cdrzd21804zd2_951))
																	{	/* Ast/find_gdefs.scm 159 */
																		obj_t BgL_carzd21808zd2_954;

																		BgL_carzd21808zd2_954 =
																			CAR(BgL_cdrzd21804zd2_951);
																		if (PAIRP(BgL_carzd21808zd2_954))
																			{
																				obj_t BgL_expz00_2413;

																				obj_t BgL_argsz00_2411;

																				obj_t BgL_varz00_2409;

																				BgL_varz00_2409 =
																					CAR(BgL_carzd21808zd2_954);
																				BgL_argsz00_2411 =
																					CDR(BgL_carzd21808zd2_954);
																				BgL_expz00_2413 =
																					CDR(BgL_cdrzd21804zd2_951);
																				BgL_expz00_918 = BgL_expz00_2413;
																				BgL_argsz00_917 = BgL_argsz00_2411;
																				BgL_varz00_916 = BgL_varz00_2409;
																				goto BgL_tagzd21668zd2_919;
																			}
																		else
																			{	/* Ast/find_gdefs.scm 159 */
																				goto BgL_tagzd21671zd2_927;
																			}
																	}
																else
																	{	/* Ast/find_gdefs.scm 159 */
																		goto BgL_tagzd21671zd2_927;
																	}
															}
														else
															{	/* Ast/find_gdefs.scm 159 */
																if (
																	(CAR(BgL_sexpz00_913) ==
																		CNST_TABLE_REF(((long) 7))))
																	{	/* Ast/find_gdefs.scm 159 */
																		if (PAIRP(BgL_cdrzd21804zd2_951))
																			{	/* Ast/find_gdefs.scm 159 */
																				obj_t BgL_carzd21848zd2_962;

																				BgL_carzd21848zd2_962 =
																					CAR(BgL_cdrzd21804zd2_951);
																				if (PAIRP(BgL_carzd21848zd2_962))
																					{	/* Ast/find_gdefs.scm 159 */
																						obj_t BgL_arg3374z00_965;

																						obj_t BgL_arg3375z00_966;

																						BgL_arg3374z00_965 =
																							CDR(BgL_carzd21848zd2_962);
																						BgL_arg3375z00_966 =
																							CDR(BgL_cdrzd21804zd2_951);
																						PROCEDURE_ENTRY
																							(BgL_actionzd2bodyzd2_2215)
																							(BgL_actionzd2bodyzd2_2215,
																							BgL_arg3374z00_965,
																							BgL_arg3375z00_966,
																							BgL_sexpz00_913, BEOA);
																						{
																							obj_t BgL_sexpza2za2_2428;

																							BgL_sexpza2za2_2428 =
																								CDR(BgL_sexpza2za2_910);
																							BgL_sexpza2za2_910 =
																								BgL_sexpza2za2_2428;
																							goto
																								BGl_loopz00zzast_findzd2gdefszd2;
																						}
																					}
																				else
																					{	/* Ast/find_gdefs.scm 159 */
																						goto BgL_tagzd21671zd2_927;
																					}
																			}
																		else
																			{	/* Ast/find_gdefs.scm 159 */
																				goto BgL_tagzd21671zd2_927;
																			}
																	}
																else
																	{	/* Ast/find_gdefs.scm 159 */
																		goto BgL_tagzd21671zd2_927;
																	}
															}
													}
											}
									}
							}
						else
							{	/* Ast/find_gdefs.scm 159 */
								goto BgL_tagzd21671zd2_927;
							}
					}
				}
			else
				{	/* Ast/find_gdefs.scm 156 */
					return CNST_TABLE_REF(((long) 8));
		}}
	}



/* _find-global-defs */
	obj_t BGl__findzd2globalzd2defsz00zzast_findzd2gdefszd2(obj_t BgL_envz00_2197,
		obj_t BgL_sexpza2za2_2198)
	{
		AN_OBJECT;
		{	/* Ast/find_gdefs.scm 139 */
			return
				BGl_findzd2globalzd2defsz00zzast_findzd2gdefszd2(BgL_sexpza2za2_2198);
		}
	}



/* <anonymous:3327> */
	obj_t BGl_zc3anonymousza33327ze3z83zzast_findzd2gdefszd2(obj_t
		BgL_envz00_2199, obj_t BgL_argsz00_2200, obj_t BgL_expz00_2201,
		obj_t BgL_defz00_2202)
	{
		AN_OBJECT;
		{	/* Ast/find_gdefs.scm 187 */
			{
				obj_t BgL_argsz00_872;

				obj_t BgL_expz00_873;

				obj_t BgL_defz00_874;

				{	/* Ast/find_gdefs.scm 188 */
					bool_t BgL_auxz00_2432;

					BgL_argsz00_872 = BgL_argsz00_2200;
					BgL_expz00_873 = BgL_expz00_2201;
					BgL_defz00_874 = BgL_defz00_2202;
					BgL_auxz00_2432 =
						BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2(BgL_expz00_873,
						BGl_pushzd2argszd2zzast_findzd2gdefszd2(BgL_argsz00_872, BNIL,
							BGl_findzd2locationzd2zztools_locationz00(BgL_defz00_874)));
					return BBOOL(BgL_auxz00_2432);
				}
			}
		}
	}



/* <anonymous:3326> */
	obj_t BGl_zc3anonymousza33326ze3z83zzast_findzd2gdefszd2(obj_t
		BgL_envz00_2203, obj_t BgL_xz00_2204, obj_t BgL_yz00_2205,
		obj_t BgL_expz00_2206)
	{
		AN_OBJECT;
		{	/* Ast/find_gdefs.scm 185 */
			{	/* Ast/find_gdefs.scm 186 */
				obj_t BgL_res3725z00_2237;

				BgL_res3725z00_2237 = CNST_TABLE_REF(((long) 9));
				return BgL_res3725z00_2237;
			}
		}
	}



/* <anonymous:3322> */
	obj_t BGl_zc3anonymousza33322ze3z83zzast_findzd2gdefszd2(obj_t
		BgL_envz00_2207, obj_t BgL_argsz00_2208, obj_t BgL_expz00_2209,
		obj_t BgL_defz00_2210)
	{
		AN_OBJECT;
		{	/* Ast/find_gdefs.scm 182 */
			{	/* Ast/find_gdefs.scm 182 */
				obj_t BgL_res3726z00_2241;

				BgL_res3726z00_2241 = CNST_TABLE_REF(((long) 9));
				return BgL_res3726z00_2241;
			}
		}
	}



/* define-global */
	obj_t BGl_definezd2globalzd2zzast_findzd2gdefszd2(obj_t BgL_envz00_2211,
		obj_t BgL_varz00_2212, obj_t BgL_arityz00_2213, obj_t BgL_expz00_2214)
	{
		AN_OBJECT;
		{	/* Ast/find_gdefs.scm 152 */
			{
				obj_t BgL_varz00_881;

				obj_t BgL_arityz00_882;

				obj_t BgL_expz00_883;

				BgL_varz00_881 = BgL_varz00_2212;
				BgL_arityz00_882 = BgL_arityz00_2213;
				BgL_expz00_883 = BgL_expz00_2214;
				{
					obj_t BgL_prezd2idzd2_885;

					if (PAIRP(BgL_varz00_881))
						{	/* Ast/find_gdefs.scm 152 */
							obj_t BgL_cdrzd21655zd2_890;

							BgL_cdrzd21655zd2_890 = CDR(BgL_varz00_881);
							if ((CAR(BgL_varz00_881) == CNST_TABLE_REF(((long) 10))))
								{	/* Ast/find_gdefs.scm 152 */
									if (PAIRP(BgL_cdrzd21655zd2_890))
										{	/* Ast/find_gdefs.scm 152 */
											obj_t BgL_cdrzd21658zd2_893;

											BgL_cdrzd21658zd2_893 = CDR(BgL_cdrzd21655zd2_890);
											if (PAIRP(BgL_cdrzd21658zd2_893))
												{	/* Ast/find_gdefs.scm 152 */
													if (NULLP(CDR(BgL_cdrzd21658zd2_893)))
														{	/* Ast/find_gdefs.scm 152 */
															BgL_prezd2idzd2_885 = CAR(BgL_cdrzd21655zd2_890);
														BgL_tagzd21647zd2_886:
															{	/* Ast/find_gdefs.scm 146 */
																obj_t BgL_idz00_900;

																BgL_idz00_900 =
																	BGl_idzd2ofzd2idz00zzast_identz00
																	(BgL_prezd2idzd2_885,
																	BGl_findzd2locationzd2zztools_locationz00
																	(BgL_expz00_883));
																{	/* Ast/find_gdefs.scm 146 */
																	obj_t BgL_oldzd2defzd2_901;

																	BgL_oldzd2defzd2_901 =
																		BGl_getpropz00zz__r4_symbols_6_4z00
																		(BgL_idz00_900,
																		BGl_za2gdefzd2keyza2zd2zzast_findzd2gdefszd2);
																	{	/* Ast/find_gdefs.scm 147 */

																		{	/* Ast/find_gdefs.scm 148 */
																			bool_t BgL_testz00_2457;

																			if (STRUCTP(BgL_oldzd2defzd2_901))
																				{	/* Ast/find_gdefs.scm 148 */
																					BgL_testz00_2457 =
																						(STRUCT_KEY(BgL_oldzd2defzd2_901) ==
																						CNST_TABLE_REF(((long) 1)));
																				}
																			else
																				{	/* Ast/find_gdefs.scm 148 */
																					BgL_testz00_2457 = ((bool_t) 0);
																				}
																			if (BgL_testz00_2457)
																				{	/* Ast/find_gdefs.scm 149 */
																					obj_t BgL_list3342z00_903;

																					BgL_list3342z00_903 =
																						MAKE_PAIR(BNIL, BNIL);
																					return
																						BGl_userzd2errorzd2zztools_errorz00
																						(BgL_varz00_881,
																						BGl_string3708z00zzast_findzd2gdefszd2,
																						BgL_expz00_883,
																						BgL_list3342z00_903);
																				}
																			else
																				{	/* Ast/find_gdefs.scm 148 */
																					return
																						BGl_bindzd2globalzd2defz12z12zzast_findzd2gdefszd2
																						(BgL_idz00_900, BgL_arityz00_882);
																				}
																		}
																	}
																}
															}
														}
													else
														{
															obj_t BgL_prezd2idzd2_2467;

															BgL_prezd2idzd2_2467 = BgL_varz00_881;
															BgL_prezd2idzd2_885 = BgL_prezd2idzd2_2467;
															goto BgL_tagzd21647zd2_886;
														}
												}
											else
												{
													obj_t BgL_prezd2idzd2_2468;

													BgL_prezd2idzd2_2468 = BgL_varz00_881;
													BgL_prezd2idzd2_885 = BgL_prezd2idzd2_2468;
													goto BgL_tagzd21647zd2_886;
												}
										}
									else
										{
											obj_t BgL_prezd2idzd2_2469;

											BgL_prezd2idzd2_2469 = BgL_varz00_881;
											BgL_prezd2idzd2_885 = BgL_prezd2idzd2_2469;
											goto BgL_tagzd21647zd2_886;
										}
								}
							else
								{
									obj_t BgL_prezd2idzd2_2470;

									BgL_prezd2idzd2_2470 = BgL_varz00_881;
									BgL_prezd2idzd2_885 = BgL_prezd2idzd2_2470;
									goto BgL_tagzd21647zd2_886;
								}
						}
					else
						{
							obj_t BgL_prezd2idzd2_2471;

							BgL_prezd2idzd2_2471 = BgL_varz00_881;
							BgL_prezd2idzd2_885 = BgL_prezd2idzd2_2471;
							goto BgL_tagzd21647zd2_886;
						}
				}
			}
		}
	}



/* find-mutations! */
	bool_t BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2(obj_t BgL_expza2za2_20,
		obj_t BgL_stackz00_21)
	{
		AN_OBJECT;
		{	/* Ast/find_gdefs.scm 195 */
			{
				obj_t BgL_l3273z00_990;

				BgL_l3273z00_990 = BgL_expza2za2_20;
			BgL_zc3anonymousza33395ze3z83_991:
				if (PAIRP(BgL_l3273z00_990))
					{	/* Ast/find_gdefs.scm 196 */
						BGl_findzd21zd2mutationsz12z12zzast_findzd2gdefszd2(CAR
							(BgL_l3273z00_990), BgL_stackz00_21);
						{
							obj_t BgL_l3273z00_2476;

							BgL_l3273z00_2476 = CDR(BgL_l3273z00_990);
							BgL_l3273z00_990 = BgL_l3273z00_2476;
							goto BgL_zc3anonymousza33395ze3z83_991;
						}
					}
				else
					{	/* Ast/find_gdefs.scm 196 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* find-1-mutations! */
	obj_t BGl_findzd21zd2mutationsz12z12zzast_findzd2gdefszd2(obj_t BgL_expz00_22,
		obj_t BgL_stackz00_23)
	{
		AN_OBJECT;
		{	/* Ast/find_gdefs.scm 201 */
		BGl_findzd21zd2mutationsz12z12zzast_findzd2gdefszd2:
			{
				obj_t BgL_valz00_1031;

				obj_t BgL_clausesz00_1032;

				obj_t BgL_bindingsz00_1019;

				obj_t BgL_bodyz00_1020;

				obj_t BgL_bindingsz00_1016;

				obj_t BgL_bodyz00_1017;

				obj_t BgL_bindingsz00_1013;

				obj_t BgL_bodyz00_1014;

				obj_t BgL_idz00_1009;

				obj_t BgL_modulez00_1010;

				obj_t BgL_valz00_1011;

				obj_t BgL_idz00_1006;

				obj_t BgL_valz00_1007;

				if (PAIRP(BgL_expz00_22))
					{	/* Ast/find_gdefs.scm 202 */
						obj_t BgL_cdrzd21951zd2_1051;

						BgL_cdrzd21951zd2_1051 = CDR(BgL_expz00_22);
						if ((CAR(BgL_expz00_22) == CNST_TABLE_REF(((long) 15))))
							{	/* Ast/find_gdefs.scm 202 */
								if (PAIRP(BgL_cdrzd21951zd2_1051))
									{	/* Ast/find_gdefs.scm 202 */
										if (NULLP(CDR(BgL_cdrzd21951zd2_1051)))
											{	/* Ast/find_gdefs.scm 202 */
												return CNST_TABLE_REF(((long) 8));
											}
										else
											{	/* Ast/find_gdefs.scm 202 */
											BgL_tagzd21919zd2_1048:
												{	/* Ast/find_gdefs.scm 300 */
													obj_t BgL_callerz00_1319;

													obj_t BgL_locz00_1320;

													BgL_callerz00_1319 = CAR(BgL_expz00_22);
													BgL_locz00_1320 =
														BGl_findzd2locationzd2zztools_locationz00
														(BgL_expz00_22);
													if (SYMBOLP(BgL_callerz00_1319))
														{	/* Ast/find_gdefs.scm 304 */
															obj_t BgL_pidz00_1322;

															BgL_pidz00_1322 =
																BGl_parsezd2idzd2zzast_identz00
																(BgL_callerz00_1319, BgL_locz00_1320);
															{	/* Ast/find_gdefs.scm 304 */
																obj_t BgL_idz00_1323;

																BgL_idz00_1323 = CAR(BgL_pidz00_1322);
																{	/* Ast/find_gdefs.scm 306 */

																	if (
																		(BgL_idz00_1323 ==
																			CNST_TABLE_REF(((long) 12))))
																		{	/* Ast/find_gdefs.scm 307 */
																			return CNST_TABLE_REF(((long) 8));
																		}
																	else
																		{	/* Ast/find_gdefs.scm 307 */
																			if (
																				(BgL_idz00_1323 ==
																					CNST_TABLE_REF(((long) 13))))
																				{	/* Ast/find_gdefs.scm 307 */
																					return CNST_TABLE_REF(((long) 8));
																				}
																			else
																				{	/* Ast/find_gdefs.scm 307 */
																					if (
																						(BgL_idz00_1323 ==
																							CNST_TABLE_REF(((long) 14))))
																						{

																							if (PAIRP(BgL_expz00_22))
																								{	/* Ast/find_gdefs.scm 313 */
																									obj_t BgL_cdrzd24742zd2_1335;

																									BgL_cdrzd24742zd2_1335 =
																										CDR(BgL_expz00_22);
																									if (PAIRP
																										(BgL_cdrzd24742zd2_1335))
																										{	/* Ast/find_gdefs.scm 313 */
																											obj_t BgL_arg3612z00_1337;

																											obj_t BgL_arg3613z00_1338;

																											BgL_arg3612z00_1337 =
																												CAR
																												(BgL_cdrzd24742zd2_1335);
																											BgL_arg3613z00_1338 =
																												CDR
																												(BgL_cdrzd24742zd2_1335);
																											{	/* Ast/find_gdefs.scm 313 */
																												obj_t
																													BgL_arg3614z00_2176;
																												BgL_arg3614z00_2176 =
																													BGl_pushzd2argszd2zzast_findzd2gdefszd2
																													(BgL_arg3612z00_1337,
																													BgL_stackz00_23,
																													BgL_locz00_1320);
																												return
																													BBOOL
																													(BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																													(BgL_arg3613z00_1338,
																														BgL_arg3614z00_2176));
																											}
																										}
																									else
																										{	/* Ast/find_gdefs.scm 313 */
																										BgL_tagzd24735zd2_1332:
																											{	/* Ast/find_gdefs.scm 317 */
																												obj_t
																													BgL_list3615z00_1340;
																												BgL_list3615z00_1340 =
																													MAKE_PAIR(BNIL, BNIL);
																												return
																													BGl_userzd2errorzd2zztools_errorz00
																													(BGl_string3712z00zzast_findzd2gdefszd2,
																													BGl_string3713z00zzast_findzd2gdefszd2,
																													BgL_expz00_22,
																													BgL_list3615z00_1340);
																											}
																										}
																								}
																							else
																								{	/* Ast/find_gdefs.scm 313 */
																									goto BgL_tagzd24735zd2_1332;
																								}
																						}
																					else
																						{	/* Ast/find_gdefs.scm 307 */
																							return
																								BBOOL
																								(BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																								(BgL_expz00_22,
																									BgL_stackz00_23));
																						}
																				}
																		}
																}
															}
														}
													else
														{	/* Ast/find_gdefs.scm 302 */
															return
																BBOOL
																(BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																(BgL_expz00_22, BgL_stackz00_23));
														}
												}
											}
									}
								else
									{	/* Ast/find_gdefs.scm 202 */
										goto BgL_tagzd21919zd2_1048;
									}
							}
						else
							{	/* Ast/find_gdefs.scm 202 */
								if ((CAR(BgL_expz00_22) == CNST_TABLE_REF(((long) 12))))
									{	/* Ast/find_gdefs.scm 202 */
										if (PAIRP(BgL_cdrzd21951zd2_1051))
											{	/* Ast/find_gdefs.scm 202 */
												if (NULLP(CDR(BgL_cdrzd21951zd2_1051)))
													{	/* Ast/find_gdefs.scm 202 */
														return CNST_TABLE_REF(((long) 8));
													}
												else
													{	/* Ast/find_gdefs.scm 202 */
														goto BgL_tagzd21919zd2_1048;
													}
											}
										else
											{	/* Ast/find_gdefs.scm 202 */
												goto BgL_tagzd21919zd2_1048;
											}
									}
								else
									{	/* Ast/find_gdefs.scm 202 */
										obj_t BgL_cdrzd22635zd2_1061;

										BgL_cdrzd22635zd2_1061 = CDR(BgL_expz00_22);
										if ((CAR(BgL_expz00_22) == CNST_TABLE_REF(((long) 13))))
											{	/* Ast/find_gdefs.scm 202 */
												if (PAIRP(BgL_cdrzd22635zd2_1061))
													{	/* Ast/find_gdefs.scm 202 */
														if (NULLP(CDR(BgL_cdrzd22635zd2_1061)))
															{	/* Ast/find_gdefs.scm 202 */
																return CNST_TABLE_REF(((long) 8));
															}
														else
															{	/* Ast/find_gdefs.scm 202 */
																goto BgL_tagzd21919zd2_1048;
															}
													}
												else
													{	/* Ast/find_gdefs.scm 202 */
														goto BgL_tagzd21919zd2_1048;
													}
											}
										else
											{	/* Ast/find_gdefs.scm 202 */
												if ((CAR(BgL_expz00_22) == CNST_TABLE_REF(((long) 16))))
													{	/* Ast/find_gdefs.scm 202 */
														if (PAIRP(BgL_cdrzd22635zd2_1061))
															{	/* Ast/find_gdefs.scm 202 */
																obj_t BgL_cdrzd22947zd2_1069;

																BgL_cdrzd22947zd2_1069 =
																	CDR(BgL_cdrzd22635zd2_1061);
																if (PAIRP(BgL_cdrzd22947zd2_1069))
																	{	/* Ast/find_gdefs.scm 202 */
																		obj_t BgL_arg3415z00_1072;

																		BgL_arg3415z00_1072 =
																			CDR(BgL_cdrzd22947zd2_1069);
																		return
																			BBOOL
																			(BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																			(BgL_arg3415z00_1072, BgL_stackz00_23));
																	}
																else
																	{	/* Ast/find_gdefs.scm 202 */
																		goto BgL_tagzd21919zd2_1048;
																	}
															}
														else
															{	/* Ast/find_gdefs.scm 202 */
																goto BgL_tagzd21919zd2_1048;
															}
													}
												else
													{	/* Ast/find_gdefs.scm 202 */
														if (
															(CAR(BgL_expz00_22) ==
																CNST_TABLE_REF(((long) 3))))
															{	/* Ast/find_gdefs.scm 202 */
																obj_t BgL_arg3417z00_1074;

																BgL_arg3417z00_1074 = CDR(BgL_expz00_22);
																return
																	BBOOL
																	(BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																	(BgL_arg3417z00_1074, BgL_stackz00_23));
															}
														else
															{	/* Ast/find_gdefs.scm 202 */
																obj_t BgL_cdrzd23245zd2_1075;

																BgL_cdrzd23245zd2_1075 = CDR(BgL_expz00_22);
																if (
																	(CAR(BgL_expz00_22) ==
																		CNST_TABLE_REF(((long) 17))))
																	{	/* Ast/find_gdefs.scm 202 */
																		if (PAIRP(BgL_cdrzd23245zd2_1075))
																			{	/* Ast/find_gdefs.scm 202 */
																				obj_t BgL_carzd23248zd2_1078;

																				BgL_carzd23248zd2_1078 =
																					CAR(BgL_cdrzd23245zd2_1075);
																				if (SYMBOLP(BgL_carzd23248zd2_1078))
																					{	/* Ast/find_gdefs.scm 202 */
																						BgL_idz00_1006 =
																							BgL_carzd23248zd2_1078;
																						BgL_valz00_1007 =
																							CDR(BgL_cdrzd23245zd2_1075);
																						BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																							(BgL_valz00_1007,
																							BgL_stackz00_23);
																						if (CBOOL
																							(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																								(BgL_idz00_1006,
																									BgL_stackz00_23)))
																							{	/* Ast/find_gdefs.scm 217 */
																								return BFALSE;
																							}
																						else
																							{	/* Ast/find_gdefs.scm 218 */
																								obj_t BgL_defz00_1202;

																								BgL_defz00_1202 =
																									BGl_getpropz00zz__r4_symbols_6_4z00
																									(BgL_idz00_1006,
																									BGl_za2gdefzd2keyza2zd2zzast_findzd2gdefszd2);
																								{	/* Ast/find_gdefs.scm 219 */
																									bool_t BgL_testz00_2579;

																									if (STRUCTP(BgL_defz00_1202))
																										{	/* Ast/find_gdefs.scm 219 */
																											BgL_testz00_2579 =
																												(STRUCT_KEY
																												(BgL_defz00_1202) ==
																												CNST_TABLE_REF(((long)
																														1)));
																										}
																									else
																										{	/* Ast/find_gdefs.scm 219 */
																											BgL_testz00_2579 =
																												((bool_t) 0);
																										}
																									if (BgL_testz00_2579)
																										{	/* Ast/find_gdefs.scm 220 */
																											obj_t BgL_sz00_2073;

																											obj_t BgL_vz00_2074;

																											BgL_sz00_2073 =
																												BgL_defz00_1202;
																											BgL_vz00_2074 =
																												CNST_TABLE_REF(((long)
																													11));
																											{	/* Ast/find_gdefs.scm 220 */
																												int BgL_auxz00_2586;

																												BgL_auxz00_2586 =
																													(int) (((long) 1));
																												return
																													STRUCT_SET
																													(BgL_sz00_2073,
																													BgL_auxz00_2586,
																													BgL_vz00_2074);
																											}
																										}
																									else
																										{	/* Ast/find_gdefs.scm 219 */
																											return BFALSE;
																										}
																								}
																							}
																					}
																				else
																					{	/* Ast/find_gdefs.scm 202 */
																						obj_t BgL_carzd23273zd2_1082;

																						BgL_carzd23273zd2_1082 =
																							CAR(BgL_cdrzd23245zd2_1075);
																						if (PAIRP(BgL_carzd23273zd2_1082))
																							{	/* Ast/find_gdefs.scm 202 */
																								obj_t BgL_cdrzd23278zd2_1084;

																								BgL_cdrzd23278zd2_1084 =
																									CDR(BgL_carzd23273zd2_1082);
																								if (
																									(CAR(BgL_carzd23273zd2_1082)
																										==
																										CNST_TABLE_REF(((long)
																												10))))
																									{	/* Ast/find_gdefs.scm 202 */
																										if (PAIRP
																											(BgL_cdrzd23278zd2_1084))
																											{	/* Ast/find_gdefs.scm 202 */
																												obj_t
																													BgL_carzd23281zd2_1087;
																												obj_t
																													BgL_cdrzd23282zd2_1088;
																												BgL_carzd23281zd2_1087 =
																													CAR
																													(BgL_cdrzd23278zd2_1084);
																												BgL_cdrzd23282zd2_1088 =
																													CDR
																													(BgL_cdrzd23278zd2_1084);
																												if (SYMBOLP
																													(BgL_carzd23281zd2_1087))
																													{	/* Ast/find_gdefs.scm 202 */
																														if (PAIRP
																															(BgL_cdrzd23282zd2_1088))
																															{	/* Ast/find_gdefs.scm 202 */
																																obj_t
																																	BgL_carzd23287zd2_1091;
																																BgL_carzd23287zd2_1091
																																	=
																																	CAR
																																	(BgL_cdrzd23282zd2_1088);
																																if (SYMBOLP
																																	(BgL_carzd23287zd2_1091))
																																	{	/* Ast/find_gdefs.scm 202 */
																																		if (NULLP
																																			(CDR
																																				(BgL_cdrzd23282zd2_1088)))
																																			{	/* Ast/find_gdefs.scm 202 */
																																				BgL_idz00_1009
																																					=
																																					BgL_carzd23281zd2_1087;
																																				BgL_modulez00_1010
																																					=
																																					BgL_carzd23287zd2_1091;
																																				BgL_valz00_1011
																																					=
																																					CDR
																																					(BgL_cdrzd23245zd2_1075);
																																				BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																																					(BgL_valz00_1011,
																																					BgL_stackz00_23);
																																				if (
																																					(BgL_modulez00_1010
																																						==
																																						BGl_za2moduleza2z00zzmodule_modulez00))
																																					{	/* Ast/find_gdefs.scm 224 */
																																						obj_t
																																							BgL_defz00_1205;
																																						BgL_defz00_1205
																																							=
																																							BGl_getpropz00zz__r4_symbols_6_4z00
																																							(BgL_idz00_1009,
																																							BGl_za2gdefzd2keyza2zd2zzast_findzd2gdefszd2);
																																						{	/* Ast/find_gdefs.scm 225 */
																																							bool_t
																																								BgL_testz00_2616;
																																							if (STRUCTP(BgL_defz00_1205))
																																								{	/* Ast/find_gdefs.scm 225 */
																																									BgL_testz00_2616
																																										=
																																										(STRUCT_KEY
																																										(BgL_defz00_1205)
																																										==
																																										CNST_TABLE_REF
																																										(((long) 1)));
																																								}
																																							else
																																								{	/* Ast/find_gdefs.scm 225 */
																																									BgL_testz00_2616
																																										=
																																										(
																																										(bool_t)
																																										0);
																																								}
																																							if (BgL_testz00_2616)
																																								{	/* Ast/find_gdefs.scm 226 */
																																									obj_t
																																										BgL_sz00_2086;
																																									obj_t
																																										BgL_vz00_2087;
																																									BgL_sz00_2086
																																										=
																																										BgL_defz00_1205;
																																									BgL_vz00_2087
																																										=
																																										CNST_TABLE_REF
																																										(
																																										((long) 11));
																																									{	/* Ast/find_gdefs.scm 226 */
																																										int
																																											BgL_auxz00_2623;
																																										BgL_auxz00_2623
																																											=
																																											(int)
																																											(
																																											((long) 1));
																																										return
																																											STRUCT_SET
																																											(BgL_sz00_2086,
																																											BgL_auxz00_2623,
																																											BgL_vz00_2087);
																																									}
																																								}
																																							else
																																								{	/* Ast/find_gdefs.scm 225 */
																																									return
																																										BFALSE;
																																								}
																																						}
																																					}
																																				else
																																					{	/* Ast/find_gdefs.scm 223 */
																																						return
																																							BFALSE;
																																					}
																																			}
																																		else
																																			{	/* Ast/find_gdefs.scm 202 */
																																				goto
																																					BgL_tagzd21919zd2_1048;
																																			}
																																	}
																																else
																																	{	/* Ast/find_gdefs.scm 202 */
																																		goto
																																			BgL_tagzd21919zd2_1048;
																																	}
																															}
																														else
																															{	/* Ast/find_gdefs.scm 202 */
																																goto
																																	BgL_tagzd21919zd2_1048;
																															}
																													}
																												else
																													{	/* Ast/find_gdefs.scm 202 */
																														goto
																															BgL_tagzd21919zd2_1048;
																													}
																											}
																										else
																											{	/* Ast/find_gdefs.scm 202 */
																												goto
																													BgL_tagzd21919zd2_1048;
																											}
																									}
																								else
																									{	/* Ast/find_gdefs.scm 202 */
																										goto BgL_tagzd21919zd2_1048;
																									}
																							}
																						else
																							{	/* Ast/find_gdefs.scm 202 */
																								goto BgL_tagzd21919zd2_1048;
																							}
																					}
																			}
																		else
																			{	/* Ast/find_gdefs.scm 202 */
																				goto BgL_tagzd21919zd2_1048;
																			}
																	}
																else
																	{	/* Ast/find_gdefs.scm 202 */
																		if (
																			(CAR(BgL_expz00_22) ==
																				CNST_TABLE_REF(((long) 18))))
																			{	/* Ast/find_gdefs.scm 202 */
																				if (PAIRP(BgL_cdrzd23245zd2_1075))
																					{	/* Ast/find_gdefs.scm 202 */
																						obj_t BgL_arg3436z00_1101;

																						obj_t BgL_arg3437z00_1102;

																						BgL_arg3436z00_1101 =
																							CAR(BgL_cdrzd23245zd2_1075);
																						BgL_arg3437z00_1102 =
																							CDR(BgL_cdrzd23245zd2_1075);
																						{	/* Ast/find_gdefs.scm 202 */
																							bool_t BgL_auxz00_2635;

																							BgL_bindingsz00_1013 =
																								BgL_arg3436z00_1101;
																							BgL_bodyz00_1014 =
																								BgL_arg3437z00_1102;
																							{	/* Ast/find_gdefs.scm 228 */
																								obj_t BgL_newzd2stackzd2_1207;

																								{
																									obj_t BgL_stackz00_1218;

																									obj_t BgL_bindingsz00_1219;

																									BgL_stackz00_1218 =
																										BgL_stackz00_23;
																									BgL_bindingsz00_1219 =
																										BgL_bindingsz00_1013;
																								BgL_zc3anonymousza33534ze3z83_1220:
																									if (NULLP
																										(BgL_bindingsz00_1219))
																										{	/* Ast/find_gdefs.scm 231 */
																											BgL_newzd2stackzd2_1207 =
																												BgL_stackz00_1218;
																										}
																									else
																										{	/* Ast/find_gdefs.scm 231 */
																											if (PAIRP
																												(BgL_bindingsz00_1219))
																												{	/* Ast/find_gdefs.scm 235 */
																													bool_t
																														BgL_testz00_2640;
																													{	/* Ast/find_gdefs.scm 235 */
																														obj_t
																															BgL_auxz00_2641;
																														BgL_auxz00_2641 =
																															CAR
																															(BgL_bindingsz00_1219);
																														BgL_testz00_2640 =
																															PAIRP
																															(BgL_auxz00_2641);
																													}
																													if (BgL_testz00_2640)
																														{	/* Ast/find_gdefs.scm 241 */
																															obj_t
																																BgL_arg3538z00_1224;
																															obj_t
																																BgL_arg3539z00_1225;
																															BgL_arg3538z00_1224
																																=
																																MAKE_PAIR
																																(BGl_idzd2ofzd2idz00zzast_identz00
																																(CAR(CAR
																																		(BgL_bindingsz00_1219)),
																																	BGl_findzd2locationzd2zztools_locationz00
																																	(BgL_expz00_22)),
																																BgL_stackz00_1218);
																															BgL_arg3539z00_1225
																																=
																																CDR
																																(BgL_bindingsz00_1219);
																															{
																																obj_t
																																	BgL_bindingsz00_2651;
																																obj_t
																																	BgL_stackz00_2650;
																																BgL_stackz00_2650
																																	=
																																	BgL_arg3538z00_1224;
																																BgL_bindingsz00_2651
																																	=
																																	BgL_arg3539z00_1225;
																																BgL_bindingsz00_1219
																																	=
																																	BgL_bindingsz00_2651;
																																BgL_stackz00_1218
																																	=
																																	BgL_stackz00_2650;
																																goto
																																	BgL_zc3anonymousza33534ze3z83_1220;
																															}
																														}
																													else
																														{	/* Ast/find_gdefs.scm 236 */
																															obj_t
																																BgL_arg3544z00_1230;
																															obj_t
																																BgL_arg3545z00_1231;
																															BgL_arg3544z00_1230
																																=
																																MAKE_PAIR
																																(BGl_idzd2ofzd2idz00zzast_identz00
																																(CAR
																																	(BgL_bindingsz00_1219),
																																	BGl_findzd2locationzd2zztools_locationz00
																																	(BgL_expz00_22)),
																																BgL_stackz00_1218);
																															BgL_arg3545z00_1231
																																=
																																CDR
																																(BgL_bindingsz00_1219);
																															{
																																obj_t
																																	BgL_bindingsz00_2658;
																																obj_t
																																	BgL_stackz00_2657;
																																BgL_stackz00_2657
																																	=
																																	BgL_arg3544z00_1230;
																																BgL_bindingsz00_2658
																																	=
																																	BgL_arg3545z00_1231;
																																BgL_bindingsz00_1219
																																	=
																																	BgL_bindingsz00_2658;
																																BgL_stackz00_1218
																																	=
																																	BgL_stackz00_2657;
																																goto
																																	BgL_zc3anonymousza33534ze3z83_1220;
																															}
																														}
																												}
																											else
																												{	/* Ast/find_gdefs.scm 234 */
																													obj_t
																														BgL_list3550z00_1236;
																													BgL_list3550z00_1236 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_newzd2stackzd2_1207
																														=
																														BGl_userzd2errorzd2zztools_errorz00
																														(BGl_string3709z00zzast_findzd2gdefszd2,
																														BGl_string3710z00zzast_findzd2gdefszd2,
																														BgL_expz00_22,
																														BgL_list3550z00_1236);
																												}
																										}
																								}
																								BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																									(BgL_bodyz00_1014,
																									BgL_newzd2stackzd2_1207);
																								if (PAIRP(BgL_bindingsz00_1013))
																									{
																										obj_t BgL_l3275z00_1210;

																										BgL_l3275z00_1210 =
																											BgL_bindingsz00_1013;
																									BgL_zc3anonymousza33530ze3z83_1211:
																										if (PAIRP
																											(BgL_l3275z00_1210))
																											{	/* Ast/find_gdefs.scm 247 */
																												{	/* Ast/find_gdefs.scm 247 */
																													obj_t BgL_bz00_1213;

																													BgL_bz00_1213 =
																														CAR
																														(BgL_l3275z00_1210);
																													BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																														(CDR(BgL_bz00_1213),
																														BgL_stackz00_23);
																												}
																												{
																													obj_t
																														BgL_l3275z00_2669;
																													BgL_l3275z00_2669 =
																														CDR
																														(BgL_l3275z00_1210);
																													BgL_l3275z00_1210 =
																														BgL_l3275z00_2669;
																													goto
																														BgL_zc3anonymousza33530ze3z83_1211;
																												}
																											}
																										else
																											{	/* Ast/find_gdefs.scm 247 */
																												BgL_auxz00_2635 =
																													((bool_t) 1);
																											}
																									}
																								else
																									{	/* Ast/find_gdefs.scm 246 */
																										BgL_auxz00_2635 =
																											((bool_t) 0);
																									}
																							}
																							return BBOOL(BgL_auxz00_2635);
																						}
																					}
																				else
																					{	/* Ast/find_gdefs.scm 202 */
																						goto BgL_tagzd21919zd2_1048;
																					}
																			}
																		else
																			{	/* Ast/find_gdefs.scm 202 */
																				obj_t BgL_cdrzd24169zd2_1103;

																				BgL_cdrzd24169zd2_1103 =
																					CDR(BgL_expz00_22);
																				if (
																					(CAR(BgL_expz00_22) ==
																						CNST_TABLE_REF(((long) 19))))
																					{	/* Ast/find_gdefs.scm 202 */
																						if (PAIRP(BgL_cdrzd24169zd2_1103))
																							{	/* Ast/find_gdefs.scm 202 */
																								obj_t BgL_arg3440z00_1106;

																								obj_t BgL_arg3441z00_1107;

																								BgL_arg3440z00_1106 =
																									CAR(BgL_cdrzd24169zd2_1103);
																								BgL_arg3441z00_1107 =
																									CDR(BgL_cdrzd24169zd2_1103);
																								{	/* Ast/find_gdefs.scm 202 */
																									bool_t BgL_auxz00_2681;

																									BgL_bindingsz00_1016 =
																										BgL_arg3440z00_1106;
																									BgL_bodyz00_1017 =
																										BgL_arg3441z00_1107;
																									{	/* Ast/find_gdefs.scm 249 */
																										obj_t
																											BgL_newzd2stackzd2_1238;
																										{
																											obj_t BgL_stackz00_1249;

																											obj_t
																												BgL_bindingsz00_1250;
																											BgL_stackz00_1249 =
																												BgL_stackz00_23;
																											BgL_bindingsz00_1250 =
																												BgL_bindingsz00_1016;
																										BgL_zc3anonymousza33556ze3z83_1251:
																											if (NULLP
																												(BgL_bindingsz00_1250))
																												{	/* Ast/find_gdefs.scm 252 */
																													BgL_newzd2stackzd2_1238
																														= BgL_stackz00_1249;
																												}
																											else
																												{	/* Ast/find_gdefs.scm 252 */
																													if (PAIRP
																														(BgL_bindingsz00_1250))
																														{	/* Ast/find_gdefs.scm 256 */
																															bool_t
																																BgL_testz00_2686;
																															{	/* Ast/find_gdefs.scm 256 */
																																obj_t
																																	BgL_auxz00_2687;
																																BgL_auxz00_2687
																																	=
																																	CAR
																																	(BgL_bindingsz00_1250);
																																BgL_testz00_2686
																																	=
																																	PAIRP
																																	(BgL_auxz00_2687);
																															}
																															if (BgL_testz00_2686)
																																{	/* Ast/find_gdefs.scm 262 */
																																	obj_t
																																		BgL_arg3560z00_1255;
																																	obj_t
																																		BgL_arg3561z00_1256;
																																	BgL_arg3560z00_1255
																																		=
																																		MAKE_PAIR
																																		(BGl_idzd2ofzd2idz00zzast_identz00
																																		(CAR(CAR
																																				(BgL_bindingsz00_1250)),
																																			BGl_findzd2locationzd2zztools_locationz00
																																			(BgL_expz00_22)),
																																		BgL_stackz00_1249);
																																	BgL_arg3561z00_1256
																																		=
																																		CDR
																																		(BgL_bindingsz00_1250);
																																	{
																																		obj_t
																																			BgL_bindingsz00_2697;
																																		obj_t
																																			BgL_stackz00_2696;
																																		BgL_stackz00_2696
																																			=
																																			BgL_arg3560z00_1255;
																																		BgL_bindingsz00_2697
																																			=
																																			BgL_arg3561z00_1256;
																																		BgL_bindingsz00_1250
																																			=
																																			BgL_bindingsz00_2697;
																																		BgL_stackz00_1249
																																			=
																																			BgL_stackz00_2696;
																																		goto
																																			BgL_zc3anonymousza33556ze3z83_1251;
																																	}
																																}
																															else
																																{	/* Ast/find_gdefs.scm 257 */
																																	obj_t
																																		BgL_arg3566z00_1261;
																																	obj_t
																																		BgL_arg3567z00_1262;
																																	BgL_arg3566z00_1261
																																		=
																																		MAKE_PAIR
																																		(BGl_idzd2ofzd2idz00zzast_identz00
																																		(CAR
																																			(BgL_bindingsz00_1250),
																																			BGl_findzd2locationzd2zztools_locationz00
																																			(BgL_expz00_22)),
																																		BgL_stackz00_1249);
																																	BgL_arg3567z00_1262
																																		=
																																		CDR
																																		(BgL_bindingsz00_1250);
																																	{
																																		obj_t
																																			BgL_bindingsz00_2704;
																																		obj_t
																																			BgL_stackz00_2703;
																																		BgL_stackz00_2703
																																			=
																																			BgL_arg3566z00_1261;
																																		BgL_bindingsz00_2704
																																			=
																																			BgL_arg3567z00_1262;
																																		BgL_bindingsz00_1250
																																			=
																																			BgL_bindingsz00_2704;
																																		BgL_stackz00_1249
																																			=
																																			BgL_stackz00_2703;
																																		goto
																																			BgL_zc3anonymousza33556ze3z83_1251;
																																	}
																																}
																														}
																													else
																														{	/* Ast/find_gdefs.scm 255 */
																															obj_t
																																BgL_list3572z00_1267;
																															BgL_list3572z00_1267
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_newzd2stackzd2_1238
																																=
																																BGl_userzd2errorzd2zztools_errorz00
																																(BGl_string3711z00zzast_findzd2gdefszd2,
																																BGl_string3710z00zzast_findzd2gdefszd2,
																																BgL_expz00_22,
																																BgL_list3572z00_1267);
																														}
																												}
																										}
																										BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																											(BgL_bodyz00_1017,
																											BgL_newzd2stackzd2_1238);
																										if (PAIRP
																											(BgL_bindingsz00_1016))
																											{
																												obj_t BgL_l3277z00_1241;

																												BgL_l3277z00_1241 =
																													BgL_bindingsz00_1016;
																											BgL_zc3anonymousza33552ze3z83_1242:
																												if (PAIRP
																													(BgL_l3277z00_1241))
																													{	/* Ast/find_gdefs.scm 268 */
																														{	/* Ast/find_gdefs.scm 268 */
																															obj_t
																																BgL_bz00_1244;
																															BgL_bz00_1244 =
																																CAR
																																(BgL_l3277z00_1241);
																															BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																																(CDR
																																(BgL_bz00_1244),
																																BgL_newzd2stackzd2_1238);
																														}
																														{
																															obj_t
																																BgL_l3277z00_2715;
																															BgL_l3277z00_2715
																																=
																																CDR
																																(BgL_l3277z00_1241);
																															BgL_l3277z00_1241
																																=
																																BgL_l3277z00_2715;
																															goto
																																BgL_zc3anonymousza33552ze3z83_1242;
																														}
																													}
																												else
																													{	/* Ast/find_gdefs.scm 268 */
																														BgL_auxz00_2681 =
																															((bool_t) 1);
																													}
																											}
																										else
																											{	/* Ast/find_gdefs.scm 267 */
																												BgL_auxz00_2681 =
																													((bool_t) 0);
																											}
																									}
																									return BBOOL(BgL_auxz00_2681);
																								}
																							}
																						else
																							{	/* Ast/find_gdefs.scm 202 */
																								goto BgL_tagzd21919zd2_1048;
																							}
																					}
																				else
																					{	/* Ast/find_gdefs.scm 202 */
																						if (
																							(CAR(BgL_expz00_22) ==
																								CNST_TABLE_REF(((long) 20))))
																							{	/* Ast/find_gdefs.scm 202 */
																								if (PAIRP
																									(BgL_cdrzd24169zd2_1103))
																									{	/* Ast/find_gdefs.scm 202 */
																										obj_t BgL_arg3444z00_1111;

																										obj_t BgL_arg3445z00_1112;

																										BgL_arg3444z00_1111 =
																											CAR
																											(BgL_cdrzd24169zd2_1103);
																										BgL_arg3445z00_1112 =
																											CDR
																											(BgL_cdrzd24169zd2_1103);
																										{	/* Ast/find_gdefs.scm 202 */
																											bool_t BgL_auxz00_2726;

																											BgL_bindingsz00_1019 =
																												BgL_arg3444z00_1111;
																											BgL_bodyz00_1020 =
																												BgL_arg3445z00_1112;
																											{	/* Ast/find_gdefs.scm 271 */
																												obj_t BgL_locz00_1269;

																												BgL_locz00_1269 =
																													BGl_findzd2locationzd2zztools_locationz00
																													(BgL_expz00_22);
																												{	/* Ast/find_gdefs.scm 271 */
																													obj_t
																														BgL_newzd2stackzd2_1270;
																													{	/* Ast/find_gdefs.scm 272 */
																														obj_t
																															BgL_arg3580z00_1282;
																														if (NULLP
																															(BgL_bindingsz00_1019))
																															{	/* Ast/find_gdefs.scm 272 */
																																BgL_arg3580z00_1282
																																	= BNIL;
																															}
																														else
																															{	/* Ast/find_gdefs.scm 272 */
																																obj_t
																																	BgL_head3281z00_1285;
																																BgL_head3281z00_1285
																																	=
																																	MAKE_PAIR(CAR
																																	(CAR
																																		(BgL_bindingsz00_1019)),
																																	BNIL);
																																{	/* Ast/find_gdefs.scm 272 */
																																	obj_t
																																		BgL_g3284z00_1286;
																																	BgL_g3284z00_1286
																																		=
																																		CDR
																																		(BgL_bindingsz00_1019);
																																	{
																																		obj_t
																																			BgL_l3279z00_1288;
																																		obj_t
																																			BgL_tail3282z00_1289;
																																		BgL_l3279z00_1288
																																			=
																																			BgL_g3284z00_1286;
																																		BgL_tail3282z00_1289
																																			=
																																			BgL_head3281z00_1285;
																																	BgL_zc3anonymousza33582ze3z83_1290:
																																		if (NULLP
																																			(BgL_l3279z00_1288))
																																			{	/* Ast/find_gdefs.scm 272 */
																																				BgL_arg3580z00_1282
																																					=
																																					BgL_head3281z00_1285;
																																			}
																																		else
																																			{	/* Ast/find_gdefs.scm 272 */
																																				obj_t
																																					BgL_newtail3283z00_1292;
																																				BgL_newtail3283z00_1292
																																					=
																																					MAKE_PAIR
																																					(CAR
																																					(CAR
																																						(BgL_l3279z00_1288)),
																																					BNIL);
																																				SET_CDR
																																					(BgL_tail3282z00_1289,
																																					BgL_newtail3283z00_1292);
																																				{
																																					obj_t
																																						BgL_tail3282z00_2742;
																																					obj_t
																																						BgL_l3279z00_2740;
																																					BgL_l3279z00_2740
																																						=
																																						CDR
																																						(BgL_l3279z00_1288);
																																					BgL_tail3282z00_2742
																																						=
																																						BgL_newtail3283z00_1292;
																																					BgL_tail3282z00_1289
																																						=
																																						BgL_tail3282z00_2742;
																																					BgL_l3279z00_1288
																																						=
																																						BgL_l3279z00_2740;
																																					goto
																																						BgL_zc3anonymousza33582ze3z83_1290;
																																				}
																																			}
																																	}
																																}
																															}
																														BgL_newzd2stackzd2_1270
																															=
																															BGl_pushzd2argszd2zzast_findzd2gdefszd2
																															(BgL_arg3580z00_1282,
																															BgL_stackz00_23,
																															BgL_locz00_1269);
																													}
																													{	/* Ast/find_gdefs.scm 272 */

																														BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																															(BgL_bodyz00_1020,
																															BgL_newzd2stackzd2_1270);
																														if (PAIRP
																															(BgL_bindingsz00_1019))
																															{
																																obj_t
																																	BgL_l3285z00_1273;
																																BgL_l3285z00_1273
																																	=
																																	BgL_bindingsz00_1019;
																															BgL_zc3anonymousza33574ze3z83_1274:
																																if (PAIRP
																																	(BgL_l3285z00_1273))
																																	{	/* Ast/find_gdefs.scm 275 */
																																		{	/* Ast/find_gdefs.scm 276 */
																																			obj_t
																																				BgL_bz00_1276;
																																			BgL_bz00_1276
																																				=
																																				CAR
																																				(BgL_l3285z00_1273);
																																			{	/* Ast/find_gdefs.scm 276 */
																																				obj_t
																																					BgL_arg3576z00_1277;
																																				obj_t
																																					BgL_arg3577z00_1278;
																																				{	/* Ast/find_gdefs.scm 276 */
																																					obj_t
																																						BgL_pairz00_2136;
																																					BgL_pairz00_2136
																																						=
																																						BgL_bz00_1276;
																																					BgL_arg3576z00_1277
																																						=
																																						CDR
																																						(CDR
																																						(BgL_pairz00_2136));
																																				}
																																				{	/* Ast/find_gdefs.scm 277 */
																																					obj_t
																																						BgL_arg3578z00_1279;
																																					{	/* Ast/find_gdefs.scm 277 */
																																						obj_t
																																							BgL_pairz00_2140;
																																						BgL_pairz00_2140
																																							=
																																							BgL_bz00_1276;
																																						BgL_arg3578z00_1279
																																							=
																																							CAR
																																							(CDR
																																							(BgL_pairz00_2140));
																																					}
																																					BgL_arg3577z00_1278
																																						=
																																						BGl_pushzd2argszd2zzast_findzd2gdefszd2
																																						(BgL_arg3578z00_1279,
																																						BgL_newzd2stackzd2_1270,
																																						BgL_locz00_1269);
																																				}
																																				BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																																					(BgL_arg3576z00_1277,
																																					BgL_arg3577z00_1278);
																																			}
																																		}
																																		{
																																			obj_t
																																				BgL_l3285z00_2756;
																																			BgL_l3285z00_2756
																																				=
																																				CDR
																																				(BgL_l3285z00_1273);
																																			BgL_l3285z00_1273
																																				=
																																				BgL_l3285z00_2756;
																																			goto
																																				BgL_zc3anonymousza33574ze3z83_1274;
																																		}
																																	}
																																else
																																	{	/* Ast/find_gdefs.scm 275 */
																																		BgL_auxz00_2726
																																			=
																																			((bool_t)
																																			1);
																																	}
																															}
																														else
																															{	/* Ast/find_gdefs.scm 274 */
																																BgL_auxz00_2726
																																	=
																																	((bool_t) 0);
																															}
																													}
																												}
																											}
																											return
																												BBOOL(BgL_auxz00_2726);
																										}
																									}
																								else
																									{	/* Ast/find_gdefs.scm 202 */
																										goto BgL_tagzd21919zd2_1048;
																									}
																							}
																						else
																							{	/* Ast/find_gdefs.scm 202 */
																								obj_t BgL_cdrzd24335zd2_1113;

																								BgL_cdrzd24335zd2_1113 =
																									CDR(BgL_expz00_22);
																								if (
																									(CAR(BgL_expz00_22) ==
																										CNST_TABLE_REF(((long)
																												14))))
																									{	/* Ast/find_gdefs.scm 202 */
																										if (PAIRP
																											(BgL_cdrzd24335zd2_1113))
																											{	/* Ast/find_gdefs.scm 202 */
																												obj_t
																													BgL_arg3448z00_1116;
																												obj_t
																													BgL_arg3449z00_1117;
																												BgL_arg3448z00_1116 =
																													CAR
																													(BgL_cdrzd24335zd2_1113);
																												BgL_arg3449z00_1117 =
																													CDR
																													(BgL_cdrzd24335zd2_1113);
																												{	/* Ast/find_gdefs.scm 202 */
																													obj_t
																														BgL_arg3591z00_1994;
																													BgL_arg3591z00_1994 =
																														BGl_pushzd2argszd2zzast_findzd2gdefszd2
																														(BgL_arg3448z00_1116,
																														BgL_stackz00_23,
																														BGl_findzd2locationzd2zztools_locationz00
																														(BgL_expz00_22));
																													return
																														BBOOL
																														(BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																														(BgL_arg3449z00_1117,
																															BgL_arg3591z00_1994));
																												}
																											}
																										else
																											{	/* Ast/find_gdefs.scm 202 */
																												goto
																													BgL_tagzd21919zd2_1048;
																											}
																									}
																								else
																									{	/* Ast/find_gdefs.scm 202 */
																										if (
																											(CAR(BgL_expz00_22) ==
																												CNST_TABLE_REF(((long)
																														21))))
																											{	/* Ast/find_gdefs.scm 202 */
																												if (PAIRP
																													(BgL_cdrzd24335zd2_1113))
																													{	/* Ast/find_gdefs.scm 202 */
																														obj_t
																															BgL_arg3452z00_1121;
																														obj_t
																															BgL_arg3453z00_1122;
																														BgL_arg3452z00_1121
																															=
																															CAR
																															(BgL_cdrzd24335zd2_1113);
																														BgL_arg3453z00_1122
																															=
																															CDR
																															(BgL_cdrzd24335zd2_1113);
																														{	/* Ast/find_gdefs.scm 202 */
																															obj_t
																																BgL_arg3593z00_2003;
																															BgL_arg3593z00_2003
																																=
																																MAKE_PAIR
																																(BGl_idzd2ofzd2idz00zzast_identz00
																																(BgL_arg3452z00_1121,
																																	BGl_findzd2locationzd2zztools_locationz00
																																	(BgL_expz00_22)),
																																BgL_stackz00_23);
																															return
																																BBOOL
																																(BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																																(BgL_arg3453z00_1122,
																																	BgL_arg3593z00_2003));
																														}
																													}
																												else
																													{	/* Ast/find_gdefs.scm 202 */
																														goto
																															BgL_tagzd21919zd2_1048;
																													}
																											}
																										else
																											{	/* Ast/find_gdefs.scm 202 */
																												obj_t
																													BgL_cdrzd24458zd2_1123;
																												BgL_cdrzd24458zd2_1123 =
																													CDR(BgL_expz00_22);
																												if ((CAR(BgL_expz00_22)
																														==
																														CNST_TABLE_REF((
																																(long) 22))))
																													{	/* Ast/find_gdefs.scm 202 */
																														if (PAIRP
																															(BgL_cdrzd24458zd2_1123))
																															{	/* Ast/find_gdefs.scm 202 */
																																obj_t
																																	BgL_cdrzd24462zd2_1126;
																																BgL_cdrzd24462zd2_1126
																																	=
																																	CDR
																																	(BgL_cdrzd24458zd2_1123);
																																if (PAIRP
																																	(BgL_cdrzd24462zd2_1126))
																																	{	/* Ast/find_gdefs.scm 202 */
																																		if (NULLP
																																			(CDR
																																				(BgL_cdrzd24462zd2_1126)))
																																			{	/* Ast/find_gdefs.scm 202 */
																																				obj_t
																																					BgL_arg3458z00_1129;
																																				obj_t
																																					BgL_arg3459z00_1130;
																																				BgL_arg3458z00_1129
																																					=
																																					CAR
																																					(BgL_cdrzd24458zd2_1123);
																																				BgL_arg3459z00_1130
																																					=
																																					CAR
																																					(BgL_cdrzd24462zd2_1126);
																																				BGl_findzd21zd2mutationsz12z12zzast_findzd2gdefszd2
																																					(BgL_arg3458z00_1129,
																																					BgL_stackz00_23);
																																				{
																																					obj_t
																																						BgL_expz00_2801;
																																					BgL_expz00_2801
																																						=
																																						BgL_arg3459z00_1130;
																																					BgL_expz00_22
																																						=
																																						BgL_expz00_2801;
																																					goto
																																						BGl_findzd21zd2mutationsz12z12zzast_findzd2gdefszd2;
																																				}
																																			}
																																		else
																																			{	/* Ast/find_gdefs.scm 202 */
																																				goto
																																					BgL_tagzd21919zd2_1048;
																																			}
																																	}
																																else
																																	{	/* Ast/find_gdefs.scm 202 */
																																		goto
																																			BgL_tagzd21919zd2_1048;
																																	}
																															}
																														else
																															{	/* Ast/find_gdefs.scm 202 */
																																goto
																																	BgL_tagzd21919zd2_1048;
																															}
																													}
																												else
																													{	/* Ast/find_gdefs.scm 202 */
																														if (
																															(CAR
																																(BgL_expz00_22)
																																==
																																CNST_TABLE_REF((
																																		(long)
																																		23))))
																															{	/* Ast/find_gdefs.scm 202 */
																																if (PAIRP
																																	(BgL_cdrzd24458zd2_1123))
																																	{	/* Ast/find_gdefs.scm 202 */
																																		obj_t
																																			BgL_cdrzd24570zd2_1135;
																																		BgL_cdrzd24570zd2_1135
																																			=
																																			CDR
																																			(BgL_cdrzd24458zd2_1123);
																																		if (PAIRP
																																			(BgL_cdrzd24570zd2_1135))
																																			{	/* Ast/find_gdefs.scm 202 */
																																				if (NULLP(CDR(BgL_cdrzd24570zd2_1135)))
																																					{	/* Ast/find_gdefs.scm 202 */
																																						obj_t
																																							BgL_arg3465z00_1138;
																																						obj_t
																																							BgL_arg3466z00_1139;
																																						BgL_arg3465z00_1138
																																							=
																																							CAR
																																							(BgL_cdrzd24458zd2_1123);
																																						BgL_arg3466z00_1139
																																							=
																																							CAR
																																							(BgL_cdrzd24570zd2_1135);
																																						{	/* Ast/find_gdefs.scm 202 */
																																							bool_t
																																								BgL_auxz00_2816;
																																							BgL_valz00_1031
																																								=
																																								BgL_arg3465z00_1138;
																																							BgL_clausesz00_1032
																																								=
																																								BgL_arg3466z00_1139;
																																							BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																																								(BgL_valz00_1031,
																																								BgL_stackz00_23);
																																							{
																																								obj_t
																																									BgL_l3287z00_1307;
																																								BgL_l3287z00_1307
																																									=
																																									BgL_clausesz00_1032;
																																							BgL_zc3anonymousza33596ze3z83_1308:
																																								if (PAIRP(BgL_l3287z00_1307))
																																									{	/* Ast/find_gdefs.scm 288 */
																																										{	/* Ast/find_gdefs.scm 288 */
																																											obj_t
																																												BgL_cz00_1310;
																																											BgL_cz00_1310
																																												=
																																												CAR
																																												(BgL_l3287z00_1307);
																																											BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																																												(CDR
																																												(BgL_cz00_1310),
																																												BgL_stackz00_23);
																																										}
																																										{
																																											obj_t
																																												BgL_l3287z00_2823;
																																											BgL_l3287z00_2823
																																												=
																																												CDR
																																												(BgL_l3287z00_1307);
																																											BgL_l3287z00_1307
																																												=
																																												BgL_l3287z00_2823;
																																											goto
																																												BgL_zc3anonymousza33596ze3z83_1308;
																																										}
																																									}
																																								else
																																									{	/* Ast/find_gdefs.scm 288 */
																																										BgL_auxz00_2816
																																											=
																																											(
																																											(bool_t)
																																											1);
																																									}
																																							}
																																							return
																																								BBOOL
																																								(BgL_auxz00_2816);
																																						}
																																					}
																																				else
																																					{	/* Ast/find_gdefs.scm 202 */
																																						goto
																																							BgL_tagzd21919zd2_1048;
																																					}
																																			}
																																		else
																																			{	/* Ast/find_gdefs.scm 202 */
																																				goto
																																					BgL_tagzd21919zd2_1048;
																																			}
																																	}
																																else
																																	{	/* Ast/find_gdefs.scm 202 */
																																		goto
																																			BgL_tagzd21919zd2_1048;
																																	}
																															}
																														else
																															{	/* Ast/find_gdefs.scm 202 */
																																if (
																																	(CAR
																																		(BgL_expz00_22)
																																		==
																																		CNST_TABLE_REF
																																		(((long)
																																				24))))
																																	{	/* Ast/find_gdefs.scm 202 */
																																		obj_t
																																			BgL_arg3469z00_1142;
																																		BgL_arg3469z00_1142
																																			=
																																			CDR
																																			(BgL_expz00_22);
																																		return
																																			BBOOL
																																			(BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																																			(BgL_arg3469z00_1142,
																																				BgL_stackz00_23));
																																	}
																																else
																																	{	/* Ast/find_gdefs.scm 202 */
																																		obj_t
																																			BgL_cdrzd24658zd2_1143;
																																		BgL_cdrzd24658zd2_1143
																																			=
																																			CDR
																																			(BgL_expz00_22);
																																		if ((CAR
																																				(BgL_expz00_22)
																																				==
																																				CNST_TABLE_REF
																																				(((long)
																																						4))))
																																			{	/* Ast/find_gdefs.scm 202 */
																																				if (PAIRP(BgL_cdrzd24658zd2_1143))
																																					{	/* Ast/find_gdefs.scm 202 */
																																						obj_t
																																							BgL_arg3472z00_1146;
																																						obj_t
																																							BgL_arg3473z00_1147;
																																						BgL_arg3472z00_1146
																																							=
																																							CAR
																																							(BgL_cdrzd24658zd2_1143);
																																						BgL_arg3473z00_1147
																																							=
																																							CDR
																																							(BgL_cdrzd24658zd2_1143);
																																						{	/* Ast/find_gdefs.scm 202 */
																																							obj_t
																																								BgL_arg3600z00_2036;
																																							BgL_arg3600z00_2036
																																								=
																																								MAKE_PAIR
																																								(BgL_arg3472z00_1146,
																																								BgL_stackz00_23);
																																							return
																																								BBOOL
																																								(BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																																								(BgL_arg3473z00_1147,
																																									BgL_arg3600z00_2036));
																																						}
																																					}
																																				else
																																					{	/* Ast/find_gdefs.scm 202 */
																																						goto
																																							BgL_tagzd21919zd2_1048;
																																					}
																																			}
																																		else
																																			{	/* Ast/find_gdefs.scm 202 */
																																				if (
																																					(CAR
																																						(BgL_expz00_22)
																																						==
																																						CNST_TABLE_REF
																																						(((long) 5))))
																																					{	/* Ast/find_gdefs.scm 202 */
																																						if (PAIRP(BgL_cdrzd24658zd2_1143))
																																							{	/* Ast/find_gdefs.scm 202 */
																																								obj_t
																																									BgL_arg3476z00_1151;
																																								obj_t
																																									BgL_arg3477z00_1152;
																																								BgL_arg3476z00_1151
																																									=
																																									CAR
																																									(BgL_cdrzd24658zd2_1143);
																																								BgL_arg3477z00_1152
																																									=
																																									CDR
																																									(BgL_cdrzd24658zd2_1143);
																																								{	/* Ast/find_gdefs.scm 202 */
																																									obj_t
																																										BgL_list3601z00_2044;
																																									BgL_list3601z00_2044
																																										=
																																										MAKE_PAIR
																																										(BNIL,
																																										BNIL);
																																									return
																																										BGl_userzd2errorzd2zztools_errorz00
																																										(BgL_arg3476z00_1151,
																																										BGl_string3714z00zzast_findzd2gdefszd2,
																																										BgL_arg3477z00_1152,
																																										BgL_list3601z00_2044);
																																								}
																																							}
																																						else
																																							{	/* Ast/find_gdefs.scm 202 */
																																								goto
																																									BgL_tagzd21919zd2_1048;
																																							}
																																					}
																																				else
																																					{	/* Ast/find_gdefs.scm 202 */
																																						obj_t
																																							BgL_cdrzd24707zd2_1153;
																																						BgL_cdrzd24707zd2_1153
																																							=
																																							CDR
																																							(BgL_expz00_22);
																																						if (
																																							(CAR
																																								(BgL_expz00_22)
																																								==
																																								CNST_TABLE_REF
																																								(((long) 6))))
																																							{	/* Ast/find_gdefs.scm 202 */
																																								if (PAIRP(BgL_cdrzd24707zd2_1153))
																																									{	/* Ast/find_gdefs.scm 202 */
																																										obj_t
																																											BgL_arg3480z00_1156;
																																										obj_t
																																											BgL_arg3482z00_1157;
																																										BgL_arg3480z00_1156
																																											=
																																											CAR
																																											(BgL_cdrzd24707zd2_1153);
																																										BgL_arg3482z00_1157
																																											=
																																											CDR
																																											(BgL_cdrzd24707zd2_1153);
																																										{	/* Ast/find_gdefs.scm 202 */
																																											obj_t
																																												BgL_list3602z00_2052;
																																											BgL_list3602z00_2052
																																												=
																																												MAKE_PAIR
																																												(BNIL,
																																												BNIL);
																																											return
																																												BGl_userzd2errorzd2zztools_errorz00
																																												(BgL_arg3480z00_1156,
																																												BGl_string3715z00zzast_findzd2gdefszd2,
																																												BgL_arg3482z00_1157,
																																												BgL_list3602z00_2052);
																																										}
																																									}
																																								else
																																									{	/* Ast/find_gdefs.scm 202 */
																																										goto
																																											BgL_tagzd21919zd2_1048;
																																									}
																																							}
																																						else
																																							{	/* Ast/find_gdefs.scm 202 */
																																								if ((CAR(BgL_expz00_22) == CNST_TABLE_REF(((long) 7))))
																																									{	/* Ast/find_gdefs.scm 202 */
																																										if (PAIRP(BgL_cdrzd24707zd2_1153))
																																											{	/* Ast/find_gdefs.scm 202 */
																																												obj_t
																																													BgL_carzd24726zd2_1161;
																																												BgL_carzd24726zd2_1161
																																													=
																																													CAR
																																													(BgL_cdrzd24707zd2_1153);
																																												if (PAIRP(BgL_carzd24726zd2_1161))
																																													{	/* Ast/find_gdefs.scm 202 */
																																														obj_t
																																															BgL_arg3486z00_1163;
																																														obj_t
																																															BgL_arg3487z00_1164;
																																														BgL_arg3486z00_1163
																																															=
																																															CDR
																																															(BgL_carzd24726zd2_1161);
																																														BgL_arg3487z00_1164
																																															=
																																															CDR
																																															(BgL_cdrzd24707zd2_1153);
																																														{	/* Ast/find_gdefs.scm 202 */
																																															obj_t
																																																BgL_arg3603z00_2062;
																																															BgL_arg3603z00_2062
																																																=
																																																BGl_pushzd2argszd2zzast_findzd2gdefszd2
																																																(BgL_arg3486z00_1163,
																																																BgL_stackz00_23,
																																																BGl_findzd2locationzd2zztools_locationz00
																																																(BgL_expz00_22));
																																															return
																																																BBOOL
																																																(BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																																																(BgL_arg3487z00_1164,
																																																	BgL_arg3603z00_2062));
																																														}
																																													}
																																												else
																																													{	/* Ast/find_gdefs.scm 202 */
																																														goto
																																															BgL_tagzd21919zd2_1048;
																																													}
																																											}
																																										else
																																											{	/* Ast/find_gdefs.scm 202 */
																																												goto
																																													BgL_tagzd21919zd2_1048;
																																											}
																																									}
																																								else
																																									{	/* Ast/find_gdefs.scm 202 */
																																										goto
																																											BgL_tagzd21919zd2_1048;
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
																	}
															}
													}
											}
									}
							}
					}
				else
					{	/* Ast/find_gdefs.scm 202 */
						return CNST_TABLE_REF(((long) 8));
		}}}
	}



/* push-args */
	obj_t BGl_pushzd2argszd2zzast_findzd2gdefszd2(obj_t BgL_expr0z00_24,
		obj_t BgL_listz00_25, obj_t BgL_locz00_26)
	{
		AN_OBJECT;
		{	/* Ast/find_gdefs.scm 331 */
			{
				obj_t BgL_exprz00_1342;

				obj_t BgL_listz00_1343;

				bool_t BgL_dssslz00_1344;

				BgL_exprz00_1342 = BgL_expr0z00_24;
				BgL_listz00_1343 = BgL_listz00_25;
				BgL_dssslz00_1344 = ((bool_t) 0);
			BgL_zc3anonymousza33616ze3z83_1345:
				if (NULLP(BgL_exprz00_1342))
					{	/* Ast/find_gdefs.scm 337 */
						return BgL_listz00_1343;
					}
				else
					{	/* Ast/find_gdefs.scm 337 */
						if (PAIRP(BgL_exprz00_1342))
							{	/* Ast/find_gdefs.scm 353 */
								bool_t BgL_testz00_2886;

								{	/* Ast/find_gdefs.scm 353 */
									obj_t BgL_auxz00_2887;

									BgL_auxz00_2887 = CAR(BgL_exprz00_1342);
									BgL_testz00_2886 = SYMBOLP(BgL_auxz00_2887);
								}
								if (BgL_testz00_2886)
									{	/* Ast/find_gdefs.scm 373 */
										obj_t BgL_arg3620z00_1349;

										obj_t BgL_arg3621z00_1350;

										BgL_arg3620z00_1349 = CDR(BgL_exprz00_1342);
										BgL_arg3621z00_1350 =
											MAKE_PAIR(BGl_idzd2ofzd2idz00zzast_identz00(CAR
												(BgL_exprz00_1342), BgL_locz00_26), BgL_listz00_1343);
										{
											obj_t BgL_listz00_2895;

											obj_t BgL_exprz00_2894;

											BgL_exprz00_2894 = BgL_arg3620z00_1349;
											BgL_listz00_2895 = BgL_arg3621z00_1350;
											BgL_listz00_1343 = BgL_listz00_2895;
											BgL_exprz00_1342 = BgL_exprz00_2894;
											goto BgL_zc3anonymousza33616ze3z83_1345;
										}
									}
								else
									{	/* Ast/find_gdefs.scm 353 */
										if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
												(BgL_exprz00_1342)))
											{
												bool_t BgL_dssslz00_2901;

												obj_t BgL_exprz00_2899;

												BgL_exprz00_2899 = CDR(BgL_exprz00_1342);
												BgL_dssslz00_2901 = ((bool_t) 1);
												BgL_dssslz00_1344 = BgL_dssslz00_2901;
												BgL_exprz00_1342 = BgL_exprz00_2899;
												goto BgL_zc3anonymousza33616ze3z83_1345;
											}
										else
											{	/* Ast/find_gdefs.scm 355 */
												if (BgL_dssslz00_1344)
													{	/* Ast/find_gdefs.scm 362 */
														bool_t BgL_testz00_2903;

														{	/* Ast/find_gdefs.scm 362 */
															obj_t BgL_arg3636z00_1366;

															BgL_arg3636z00_1366 = CAR(BgL_exprz00_1342);
															BgL_testz00_2903 =
																CBOOL
																(BGl_dssslzd2defaultedzd2formalzf3zf3zztools_dssslz00
																(BgL_arg3636z00_1366));
														}
														if (BgL_testz00_2903)
															{	/* Ast/find_gdefs.scm 363 */
																obj_t BgL_arg3627z00_1356;

																obj_t BgL_arg3628z00_1357;

																BgL_arg3627z00_1356 = CDR(BgL_exprz00_1342);
																BgL_arg3628z00_1357 =
																	MAKE_PAIR(BGl_idzd2ofzd2idz00zzast_identz00
																	(BGl_dssslzd2defaultzd2formalz00zztools_dssslz00
																		(CAR(BgL_exprz00_1342)), BgL_locz00_26),
																	BgL_listz00_1343);
																{
																	bool_t BgL_dssslz00_2914;

																	obj_t BgL_listz00_2913;

																	obj_t BgL_exprz00_2912;

																	BgL_exprz00_2912 = BgL_arg3627z00_1356;
																	BgL_listz00_2913 = BgL_arg3628z00_1357;
																	BgL_dssslz00_2914 = ((bool_t) 1);
																	BgL_dssslz00_1344 = BgL_dssslz00_2914;
																	BgL_listz00_1343 = BgL_listz00_2913;
																	BgL_exprz00_1342 = BgL_exprz00_2912;
																	goto BgL_zc3anonymousza33616ze3z83_1345;
																}
															}
														else
															{	/* Ast/find_gdefs.scm 368 */
																obj_t BgL_arg3632z00_1361;

																obj_t BgL_arg3633z00_1362;

																{	/* Ast/find_gdefs.scm 368 */
																	obj_t BgL__ortest_3268z00_1365;

																	BgL__ortest_3268z00_1365 =
																		BGl_findzd2locationzd2zztools_locationz00
																		(BgL_exprz00_1342);
																	if (CBOOL(BgL__ortest_3268z00_1365))
																		{	/* Ast/find_gdefs.scm 368 */
																			BgL_arg3632z00_1361 =
																				BgL__ortest_3268z00_1365;
																		}
																	else
																		{	/* Ast/find_gdefs.scm 368 */
																			BgL_arg3632z00_1361 = BgL_locz00_26;
																		}
																}
																BgL_arg3633z00_1362 =
																	CNST_TABLE_REF(((long) 14));
																return
																	BGl_userzd2errorzf2locationz20zztools_errorz00
																	(BgL_arg3632z00_1361, BgL_arg3633z00_1362,
																	BGl_string3716z00zzast_findzd2gdefszd2,
																	BgL_exprz00_1342, BNIL);
															}
													}
												else
													{	/* Ast/find_gdefs.scm 358 */
														obj_t BgL_arg3637z00_1367;

														obj_t BgL_arg3638z00_1368;

														{	/* Ast/find_gdefs.scm 358 */
															obj_t BgL__ortest_3267z00_1371;

															BgL__ortest_3267z00_1371 =
																BGl_findzd2locationzd2zztools_locationz00
																(BgL_exprz00_1342);
															if (CBOOL(BgL__ortest_3267z00_1371))
																{	/* Ast/find_gdefs.scm 358 */
																	BgL_arg3637z00_1367 =
																		BgL__ortest_3267z00_1371;
																}
															else
																{	/* Ast/find_gdefs.scm 358 */
																	BgL_arg3637z00_1367 = BgL_locz00_26;
																}
														}
														BgL_arg3638z00_1368 = CNST_TABLE_REF(((long) 14));
														return
															BGl_userzd2errorzf2locationz20zztools_errorz00
															(BgL_arg3637z00_1367, BgL_arg3638z00_1368,
															BGl_string3717z00zzast_findzd2gdefszd2,
															BgL_exprz00_1342, BNIL);
													}
											}
									}
							}
						else
							{	/* Ast/find_gdefs.scm 339 */
								if (BgL_dssslz00_1344)
									{	/* Ast/find_gdefs.scm 341 */
										return
											BGl_userzd2errorzf2locationz20zztools_errorz00
											(BgL_locz00_26, CNST_TABLE_REF(((long) 14)),
											BGl_string3718z00zzast_findzd2gdefszd2, BgL_exprz00_1342,
											BNIL);
									}
								else
									{	/* Ast/find_gdefs.scm 341 */
										if (SYMBOLP(BgL_exprz00_1342))
											{	/* Ast/find_gdefs.scm 346 */
												return
													MAKE_PAIR(BGl_idzd2ofzd2idz00zzast_identz00
													(BgL_exprz00_1342, BgL_locz00_26), BgL_listz00_1343);
											}
										else
											{	/* Ast/find_gdefs.scm 346 */
												return
													BGl_userzd2errorzf2locationz20zztools_errorz00
													(BgL_locz00_26, CNST_TABLE_REF(((long) 14)),
													BGl_string3717z00zzast_findzd2gdefszd2,
													BgL_exprz00_1342, BNIL);
		}}}}}}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_findzd2gdefszd2()
	{
		AN_OBJECT;
		{	/* Ast/find_gdefs.scm 23 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_findzd2gdefszd2()
	{
		AN_OBJECT;
		{	/* Ast/find_gdefs.scm 23 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_findzd2gdefszd2()
	{
		AN_OBJECT;
		{	/* Ast/find_gdefs.scm 23 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3719z00zzast_findzd2gdefszd2));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3719z00zzast_findzd2gdefszd2));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3719z00zzast_findzd2gdefszd2));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3719z00zzast_findzd2gdefszd2));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string3719z00zzast_findzd2gdefszd2));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3719z00zzast_findzd2gdefszd2));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3719z00zzast_findzd2gdefszd2));
			BGl_modulezd2initializa7ationz75zztools_dssslz00(((long) 315398661),
				BSTRING_TO_STRING(BGl_string3719z00zzast_findzd2gdefszd2));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 320731191),
				BSTRING_TO_STRING(BGl_string3719z00zzast_findzd2gdefszd2));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3719z00zzast_findzd2gdefszd2));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string3719z00zzast_findzd2gdefszd2));
			return
				BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string3719z00zzast_findzd2gdefszd2));
		}
	}

#ifdef __cplusplus
}
#endif
