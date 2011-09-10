/*===========================================================================*/
/*   (Ast/apply.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/apply.scm)*/
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


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl__makezd2funzd2framez00zzast_applyz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t
		BGl_makezd2funzd2framezd2defau3276zd2zzast_applyz00(BgL_funz00_bglt);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_varz00zzast_nodez00;
	extern BgL_appz00_bglt BGl_makezd2appzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_varz00_bglt, obj_t);
	static obj_t BGl_cnstzd2initzd2zzast_applyz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_applyz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_appz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzast_applyz00();
	static obj_t BGl_makezd2funzd2framezd2sfun3279zd2zzast_applyz00(obj_t, obj_t);
	static obj_t BGl_makezd2funzd2framezd2cfun3281zd2zzast_applyz00(obj_t, obj_t);
	static obj_t BGl_loopz00zzast_applyz00(BgL_nodez00_bglt, obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_localz00_bglt, obj_t, obj_t);
	extern bool_t BGl_globalzd2optionalzf3z21zzast_varz00(obj_t);
	static obj_t BGl_loopz72z72zzast_applyz00(obj_t, BgL_nodez00_bglt, obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_localz00_bglt, obj_t);
	static obj_t BGl__makezd2funzd2framezd2defau3276zd2zzast_applyz00(obj_t,
		obj_t);
	extern BgL_nodez00_bglt BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00(obj_t,
		obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_applyz00();
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	static obj_t BGl__knownzd2appzd2lyzd2ze3nodez31zzast_applyz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_applycationzd2ze3nodez31zzast_applyz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_applyz00 = BUNSPEC;
	extern obj_t BGl_za2unsafezd2arityza2zd2zzengine_paramz00;
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_knownzd2appzd2lyzd2ze3nodez31zzast_applyz00(obj_t, obj_t,
		BgL_nodez00_bglt, BgL_nodez00_bglt, obj_t);
	static obj_t BGl_genericzd2initzd2zzast_applyz00();
	extern obj_t BGl_funz00zzast_varz00;
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t BGl_typez00zztype_typez00;
	static obj_t BGl__applycationzd2ze3nodez31zzast_applyz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_makezd2funzd2framez00zzast_applyz00(BgL_funz00_bglt);
	static BgL_letzd2varzd2_bglt
		BGl_vazd2knownzd2appzd2lyzd2ze3nodeze3zzast_applyz00(obj_t, obj_t,
		BgL_nodez00_bglt, BgL_nodez00_bglt, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzast_applyz00();
	static BgL_letzd2varzd2_bglt
		BGl_fxzd2knownzd2appzd2lyzd2ze3nodeze3zzast_applyz00(obj_t, obj_t,
		BgL_nodez00_bglt, BgL_nodez00_bglt, obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_applicationzd2ze3nodez31zzast_appz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	extern BgL_varz00_bglt BGl_makezd2varzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_variablez00_bglt);
	extern BgL_appzd2lyzd2_bglt BGl_makezd2appzd2lyz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, BgL_nodez00_bglt, BgL_nodez00_bglt);
	extern BgL_letzd2varzd2_bglt BGl_makezd2letzd2varz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, BgL_nodez00_bglt, bool_t);
	extern bool_t BGl_globalzd2keyzf3z21zzast_varz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_applyz00();
	static obj_t __cnst[14];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_applycationzd2ze3nodezd2envze3zzast_applyz00,
		BgL_bgl__applycationza7d2za73582z00,
		BGl__applycationzd2ze3nodez31zzast_applyz00, 0L, BUNSPEC, 4);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_makezd2funzd2framezd2defau3276zd2envz00zzast_applyz00,
		BgL_bgl__makeza7d2funza7d2fr3583z00,
		BGl__makezd2funzd2framezd2defau3276zd2zzast_applyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3576z00zzast_applyz00,
		BgL_bgl_makeza7d2funza7d2fra3584z00,
		BGl_makezd2funzd2framezd2sfun3279zd2zzast_applyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3577z00zzast_applyz00,
		BgL_bgl_makeza7d2funza7d2fra3585z00,
		BGl_makezd2funzd2framezd2cfun3281zd2zzast_applyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_makezd2funzd2framezd2envzd2zzast_applyz00,
		BgL_bgl__makeza7d2funza7d2fr3586z00,
		BGl__makezd2funzd2framez00zzast_applyz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3571z00zzast_applyz00,
		BgL_bgl_string3571za700za7za7a3587za7, "Illegal `apply' form", 20);
	      DEFINE_STRING(BGl_string3572z00zzast_applyz00,
		BgL_bgl_string3572za700za7za7a3588za7, "Too many arguments provided", 27);
	      DEFINE_STRING(BGl_string3573z00zzast_applyz00,
		BgL_bgl_string3573za700za7za7a3589za7, "apply", 5);
	      DEFINE_STRING(BGl_string3574z00zzast_applyz00,
		BgL_bgl_string3574za700za7za7a3590za7, "make-fun-frame", 14);
	      DEFINE_STRING(BGl_string3575z00zzast_applyz00,
		BgL_bgl_string3575za700za7za7a3591za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string3578z00zzast_applyz00,
		BgL_bgl_string3578za700za7za7a3592za7, "ast_apply", 9);
	      DEFINE_STRING(BGl_string3579z00zzast_applyz00,
		BgL_bgl_string3579za700za7za7a3593za7,
		"aux make-fun-frame-defau3276 set! begin car quote failure cdr null? if write runner value apply ",
		96);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_knownzd2appzd2lyzd2ze3nodezd2envze3zzast_applyz00,
		BgL_bgl__knownza7d2appza7d2l3594z00,
		BGl__knownzd2appzd2lyzd2ze3nodez31zzast_applyz00, 0L, BUNSPEC, 5);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_applyz00(long
		BgL_checksumz00_1693, char *BgL_fromz00_1694)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_applyz00))
				{
					BGl_requirezd2initializa7ationz75zzast_applyz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_applyz00();
					BGl_cnstzd2initzd2zzast_applyz00();
					BGl_importedzd2moduleszd2initz00zzast_applyz00();
					BGl_genericzd2initzd2zzast_applyz00();
					BGl_methodzd2initzd2zzast_applyz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_applyz00()
	{
		AN_OBJECT;
		{	/* Ast/apply.scm 14 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_apply");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_apply");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "ast_apply");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_apply");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"ast_apply");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_applyz00()
	{
		AN_OBJECT;
		{	/* Ast/apply.scm 14 */
			{	/* Ast/apply.scm 14 */
				obj_t BgL_cportz00_1685;

				BgL_cportz00_1685 =
					bgl_open_input_string(BGl_string3579z00zzast_applyz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1686;

					BgL_iz00_1686 = ((long) 13);
				BgL_loopz00_1687:
					if ((BgL_iz00_1686 == ((long) -1)))
						{	/* Ast/apply.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/apply.scm 14 */
							{	/* Ast/apply.scm 14 */
								obj_t BgL_arg3581z00_1689;

								{	/* Ast/apply.scm 14 */

									{	/* Ast/apply.scm 14 */
										obj_t BgL_locationz00_1691;

										BgL_locationz00_1691 = BBOOL(((bool_t) 0));
										{	/* Ast/apply.scm 14 */

											BgL_arg3581z00_1689 =
												BGl_readz00zz__readerz00(BgL_cportz00_1685,
												BgL_locationz00_1691);
										}
									}
								}
								{	/* Ast/apply.scm 14 */
									int BgL_auxz00_1714;

									BgL_auxz00_1714 = (int) (BgL_iz00_1686);
									CNST_TABLE_SET(BgL_auxz00_1714, BgL_arg3581z00_1689);
							}}
							{	/* Ast/apply.scm 14 */
								int BgL_auxz00_1692;

								BgL_auxz00_1692 = (int) ((BgL_iz00_1686 - ((long) 1)));
								{
									long BgL_iz00_1719;

									BgL_iz00_1719 = (long) (BgL_auxz00_1692);
									BgL_iz00_1686 = BgL_iz00_1719;
									goto BgL_loopz00_1687;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_applyz00()
	{
		AN_OBJECT;
		{	/* Ast/apply.scm 14 */
			return BUNSPEC;
		}
	}



/* applycation->node */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_applycationzd2ze3nodez31zzast_applyz00(obj_t BgL_expz00_1,
		obj_t BgL_stackz00_2, obj_t BgL_locz00_3, obj_t BgL_sitez00_4)
	{
		AN_OBJECT;
		{	/* Ast/apply.scm 31 */
			{
				obj_t BgL_procz00_804;

				obj_t BgL_argz00_805;

				if (PAIRP(BgL_expz00_1))
					{	/* Ast/apply.scm 32 */
						obj_t BgL_cdrzd21397zd2_810;

						BgL_cdrzd21397zd2_810 = CDR(BgL_expz00_1);
						if ((CAR(BgL_expz00_1) == CNST_TABLE_REF(((long) 0))))
							{	/* Ast/apply.scm 32 */
								if (PAIRP(BgL_cdrzd21397zd2_810))
									{	/* Ast/apply.scm 32 */
										obj_t BgL_cdrzd21401zd2_813;

										BgL_cdrzd21401zd2_813 = CDR(BgL_cdrzd21397zd2_810);
										if (PAIRP(BgL_cdrzd21401zd2_813))
											{	/* Ast/apply.scm 32 */
												if (NULLP(CDR(BgL_cdrzd21401zd2_813)))
													{	/* Ast/apply.scm 32 */
														obj_t BgL_arg3287z00_816;

														obj_t BgL_arg3288z00_817;

														BgL_arg3287z00_816 = CAR(BgL_cdrzd21397zd2_810);
														BgL_arg3288z00_817 = CAR(BgL_cdrzd21401zd2_813);
														{	/* Ast/apply.scm 32 */
															obj_t BgL_auxz00_1738;

															BgL_procz00_804 = BgL_arg3287z00_816;
															BgL_argz00_805 = BgL_arg3288z00_817;
															{	/* Ast/apply.scm 34 */
																obj_t BgL_locz00_821;

																BgL_locz00_821 =
																	BGl_findzd2locationzf2locz20zztools_locationz00
																	(BgL_expz00_1, BgL_locz00_3);
																{	/* Ast/apply.scm 34 */
																	BgL_nodez00_bglt BgL_procz00_822;

																	{	/* Ast/apply.scm 37 */
																		obj_t BgL_arg3305z00_839;

																		obj_t BgL_arg3306z00_840;

																		BgL_arg3305z00_839 =
																			BGl_findzd2locationzf2locz20zztools_locationz00
																			(BgL_procz00_804, BgL_locz00_821);
																		BgL_arg3306z00_840 =
																			CNST_TABLE_REF(((long) 0));
																		BgL_procz00_822 =
																			BGl_sexpzd2ze3nodez31zzast_sexpz00
																			(BgL_procz00_804, BgL_stackz00_2,
																			BgL_arg3305z00_839, BgL_arg3306z00_840);
																	}
																	{	/* Ast/apply.scm 35 */
																		BgL_nodez00_bglt BgL_argz00_823;

																		{	/* Ast/apply.scm 41 */
																			obj_t BgL_arg3303z00_837;

																			obj_t BgL_arg3304z00_838;

																			BgL_arg3303z00_837 =
																				BGl_findzd2locationzf2locz20zztools_locationz00
																				(BgL_argz00_805, BgL_locz00_821);
																			BgL_arg3304z00_838 =
																				CNST_TABLE_REF(((long) 1));
																			BgL_argz00_823 =
																				BGl_sexpzd2ze3nodez31zzast_sexpz00
																				(BgL_argz00_805, BgL_stackz00_2,
																				BgL_arg3303z00_837, BgL_arg3304z00_838);
																		}
																		{	/* Ast/apply.scm 39 */

																			{	/* Ast/apply.scm 43 */
																				bool_t BgL_testz00_1746;

																				{	/* Ast/apply.scm 43 */
																					bool_t BgL_testz00_1747;

																					{	/* Ast/apply.scm 43 */
																						obj_t BgL_obj2170z00_1481;

																						BgL_obj2170z00_1481 =
																							(obj_t) (BgL_procz00_822);
																						BgL_testz00_1747 =
																							BGl_iszd2azf3z21zz__objectz00
																							(BgL_obj2170z00_1481,
																							BGl_varz00zzast_nodez00);
																					}
																					if (BgL_testz00_1747)
																						{	/* Ast/apply.scm 44 */
																							bool_t BgL_testz00_1750;

																							{	/* Ast/apply.scm 44 */
																								BgL_valuez00_bglt
																									BgL_arg3301z00_835;
																								{	/* Ast/apply.scm 44 */
																									BgL_variablez00_bglt
																										BgL_obj1611z00_1483;
																									{
																										BgL_varz00_bglt
																											BgL_auxz00_1751;
																										BgL_auxz00_1751 =
																											(BgL_varz00_bglt)
																											(BgL_procz00_822);
																										BgL_obj1611z00_1483 =
																											(((BgL_varz00_bglt)
																												CREF(BgL_auxz00_1751))->
																											BgL_variablez00);
																									}
																									BgL_arg3301z00_835 =
																										(((BgL_variablez00_bglt)
																											CREF
																											(BgL_obj1611z00_1483))->
																										BgL_valuez00);
																								}
																								{	/* Ast/apply.scm 44 */
																									obj_t BgL_obj1856z00_1484;

																									BgL_obj1856z00_1484 =
																										(obj_t)
																										(BgL_arg3301z00_835);
																									BgL_testz00_1750 =
																										BGl_iszd2azf3z21zz__objectz00
																										(BgL_obj1856z00_1484,
																										BGl_funz00zzast_varz00);
																								}
																							}
																							if (BgL_testz00_1750)
																								{	/* Ast/apply.scm 45 */
																									bool_t
																										BgL__ortest_3242z00_827;
																									{	/* Ast/apply.scm 45 */
																										bool_t BgL_testz00_1757;

																										{	/* Ast/apply.scm 45 */
																											BgL_variablez00_bglt
																												BgL_arg3300z00_834;
																											{
																												BgL_varz00_bglt
																													BgL_auxz00_1758;
																												BgL_auxz00_1758 =
																													(BgL_varz00_bglt)
																													(BgL_procz00_822);
																												BgL_arg3300z00_834 =
																													(((BgL_varz00_bglt)
																														CREF
																														(BgL_auxz00_1758))->
																													BgL_variablez00);
																											}
																											{	/* Ast/apply.scm 45 */
																												obj_t
																													BgL_obj1751z00_1486;
																												BgL_obj1751z00_1486 =
																													(obj_t)
																													(BgL_arg3300z00_834);
																												BgL_testz00_1757 =
																													BGl_iszd2azf3z21zz__objectz00
																													(BgL_obj1751z00_1486,
																													BGl_globalz00zzast_varz00);
																											}
																										}
																										if (BgL_testz00_1757)
																											{	/* Ast/apply.scm 45 */
																												BgL__ortest_3242z00_827
																													= ((bool_t) 0);
																											}
																										else
																											{	/* Ast/apply.scm 45 */
																												BgL__ortest_3242z00_827
																													= ((bool_t) 1);
																											}
																									}
																									if (BgL__ortest_3242z00_827)
																										{	/* Ast/apply.scm 45 */
																											BgL_testz00_1746 =
																												BgL__ortest_3242z00_827;
																										}
																									else
																										{	/* Ast/apply.scm 46 */
																											bool_t BgL_testz00_1764;

																											{	/* Ast/apply.scm 46 */
																												bool_t BgL_testz00_1765;

																												{	/* Ast/apply.scm 46 */
																													BgL_variablez00_bglt
																														BgL_arg3298z00_832;
																													{
																														BgL_varz00_bglt
																															BgL_auxz00_1766;
																														BgL_auxz00_1766 =
																															(BgL_varz00_bglt)
																															(BgL_procz00_822);
																														BgL_arg3298z00_832 =
																															(((BgL_varz00_bglt) CREF(BgL_auxz00_1766))->BgL_variablez00);
																													}
																													BgL_testz00_1765 =
																														BGl_globalzd2optionalzf3z21zzast_varz00
																														((obj_t)
																														(BgL_arg3298z00_832));
																												}
																												if (BgL_testz00_1765)
																													{	/* Ast/apply.scm 46 */
																														BgL_testz00_1764 =
																															((bool_t) 0);
																													}
																												else
																													{	/* Ast/apply.scm 46 */
																														BgL_testz00_1764 =
																															((bool_t) 1);
																													}
																											}
																											if (BgL_testz00_1764)
																												{	/* Ast/apply.scm 47 */
																													bool_t
																														BgL_testz00_1771;
																													{	/* Ast/apply.scm 47 */
																														BgL_variablez00_bglt
																															BgL_arg3296z00_830;
																														{
																															BgL_varz00_bglt
																																BgL_auxz00_1772;
																															BgL_auxz00_1772 =
																																(BgL_varz00_bglt)
																																(BgL_procz00_822);
																															BgL_arg3296z00_830
																																=
																																(((BgL_varz00_bglt) CREF(BgL_auxz00_1772))->BgL_variablez00);
																														}
																														BgL_testz00_1771 =
																															BGl_globalzd2keyzf3z21zzast_varz00
																															((obj_t)
																															(BgL_arg3296z00_830));
																													}
																													if (BgL_testz00_1771)
																														{	/* Ast/apply.scm 47 */
																															BgL_testz00_1746 =
																																((bool_t) 0);
																														}
																													else
																														{	/* Ast/apply.scm 47 */
																															BgL_testz00_1746 =
																																((bool_t) 1);
																														}
																												}
																											else
																												{	/* Ast/apply.scm 46 */
																													BgL_testz00_1746 =
																														((bool_t) 0);
																												}
																										}
																								}
																							else
																								{	/* Ast/apply.scm 44 */
																									BgL_testz00_1746 =
																										((bool_t) 0);
																								}
																						}
																					else
																						{	/* Ast/apply.scm 43 */
																							BgL_testz00_1746 = ((bool_t) 0);
																						}
																				}
																				if (BgL_testz00_1746)
																					{	/* Ast/apply.scm 43 */
																						BgL_auxz00_1738 =
																							(obj_t)
																							(BGl_knownzd2appzd2lyzd2ze3nodez31zzast_applyz00
																							(BgL_stackz00_2, BgL_locz00_821,
																								BgL_procz00_822, BgL_argz00_823,
																								BgL_sitez00_4));
																					}
																				else
																					{	/* Ast/apply.scm 43 */
																						BgL_auxz00_1738 =
																							(obj_t)
																							(BGl_makezd2appzd2lyz00zzast_nodez00
																							(BgL_locz00_821,
																								(BgL_typez00_bglt)
																								(BGl_za2_za2z00zztype_cachez00),
																								BgL_procz00_822,
																								BgL_argz00_823));
																					}
																			}
																		}
																	}
																}
															}
															return (BgL_nodez00_bglt) (BgL_auxz00_1738);
														}
													}
												else
													{	/* Ast/apply.scm 32 */
													BgL_tagzd21390zd2_807:
														return
															BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
															(BGl_string3571z00zzast_applyz00, BgL_expz00_1,
															BGl_findzd2locationzf2locz20zztools_locationz00
															(BgL_expz00_1, BgL_locz00_3));
													}
											}
										else
											{	/* Ast/apply.scm 32 */
												goto BgL_tagzd21390zd2_807;
											}
									}
								else
									{	/* Ast/apply.scm 32 */
										goto BgL_tagzd21390zd2_807;
									}
							}
						else
							{	/* Ast/apply.scm 32 */
								goto BgL_tagzd21390zd2_807;
							}
					}
				else
					{	/* Ast/apply.scm 32 */
						goto BgL_tagzd21390zd2_807;
					}
			}
		}
	}



/* _applycation->node */
	obj_t BGl__applycationzd2ze3nodez31zzast_applyz00(obj_t BgL_envz00_1649,
		obj_t BgL_expz00_1650, obj_t BgL_stackz00_1651, obj_t BgL_locz00_1652,
		obj_t BgL_sitez00_1653)
	{
		AN_OBJECT;
		{	/* Ast/apply.scm 31 */
			return
				(obj_t) (BGl_applycationzd2ze3nodez31zzast_applyz00(BgL_expz00_1650,
					BgL_stackz00_1651, BgL_locz00_1652, BgL_sitez00_1653));
		}
	}



/* known-app-ly->node */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_knownzd2appzd2lyzd2ze3nodez31zzast_applyz00(obj_t BgL_stackz00_9,
		obj_t BgL_locz00_10, BgL_nodez00_bglt BgL_procz00_11,
		BgL_nodez00_bglt BgL_argz00_12, obj_t BgL_sitez00_13)
	{
		AN_OBJECT;
		{	/* Ast/apply.scm 108 */
			{	/* Ast/apply.scm 109 */
				BgL_valuez00_bglt BgL_funz00_843;

				{	/* Ast/apply.scm 109 */
					BgL_variablez00_bglt BgL_obj1611z00_1490;

					{
						BgL_varz00_bglt BgL_auxz00_1787;

						BgL_auxz00_1787 = (BgL_varz00_bglt) (BgL_procz00_11);
						BgL_obj1611z00_1490 =
							(((BgL_varz00_bglt) CREF(BgL_auxz00_1787))->BgL_variablez00);
					}
					BgL_funz00_843 =
						(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1490))->BgL_valuez00);
				}
				{	/* Ast/apply.scm 109 */
					long BgL_arityz00_844;

					{
						BgL_funz00_bglt BgL_auxz00_1791;

						BgL_auxz00_1791 = (BgL_funz00_bglt) (BgL_funz00_843);
						BgL_arityz00_844 =
							(((BgL_funz00_bglt) CREF(BgL_auxz00_1791))->BgL_arityz00);
					}
					{	/* Ast/apply.scm 110 */
						obj_t BgL_framez00_845;

						{	/* Ast/apply.scm 111 */
							BgL_funz00_bglt BgL_funz00_1492;

							BgL_funz00_1492 = (BgL_funz00_bglt) (BgL_funz00_843);
							{	/* Ast/apply.scm 111 */
								obj_t BgL_method3277z00_1493;

								{	/* Ast/apply.scm 111 */
									BgL_objectz00_bglt BgL_objz00_1494;

									BgL_objz00_1494 = (BgL_objectz00_bglt) (BgL_funz00_1492);
									{	/* Ast/apply.scm 111 */
										long BgL_objzd2classzd2numz00_1495;

										BgL_objzd2classzd2numz00_1495 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1494);
										{	/* Ast/apply.scm 111 */
											obj_t BgL_arg2643z00_1496;

											BgL_arg2643z00_1496 =
												PROCEDURE_REF
												(BGl_makezd2funzd2framezd2envzd2zzast_applyz00,
												(int) (((long) 1)));
											{	/* Ast/apply.scm 111 */
												obj_t BgL_arrayz00_1498;

												int BgL_offsetz00_1499;

												BgL_arrayz00_1498 = BgL_arg2643z00_1496;
												BgL_offsetz00_1499 =
													(int) (BgL_objzd2classzd2numz00_1495);
												{	/* Ast/apply.scm 111 */
													long BgL_offsetz00_1500;

													BgL_offsetz00_1500 =
														((long) (BgL_offsetz00_1499) - OBJECT_TYPE);
													{	/* Ast/apply.scm 111 */
														long BgL_modz00_1501;

														{	/* Ast/apply.scm 111 */
															int BgL_arg2645z00_1502;

															BgL_arg2645z00_1502 = (int) (((long) 16));
															{	/* Ast/apply.scm 111 */
																long BgL_auxz00_1803;

																BgL_auxz00_1803 = (long) (BgL_arg2645z00_1502);
																BgL_modz00_1501 =
																	(BgL_offsetz00_1500 / BgL_auxz00_1803);
														}}
														{	/* Ast/apply.scm 111 */
															long BgL_restz00_1503;

															{	/* Ast/apply.scm 111 */
																int BgL_arg2644z00_1504;

																BgL_arg2644z00_1504 = (int) (((long) 16));
																{	/* Ast/apply.scm 111 */
																	long BgL_auxz00_1807;

																	BgL_auxz00_1807 =
																		(long) (BgL_arg2644z00_1504);
																	BgL_restz00_1503 =
																		(BgL_offsetz00_1500 % BgL_auxz00_1807);
															}}
															{	/* Ast/apply.scm 111 */

																BgL_method3277z00_1493 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1498,
																		(int) (BgL_modz00_1501)),
																	(int) (BgL_restz00_1503));
								}}}}}}}}
								BgL_framez00_845 =
									PROCEDURE_ENTRY(BgL_method3277z00_1493)
									(BgL_method3277z00_1493, (obj_t) (BgL_funz00_1492), BEOA);
						}}
						{	/* Ast/apply.scm 111 */

							if ((BgL_arityz00_844 > ((long) 0)))
								{	/* Ast/apply.scm 116 */
									return
										(BgL_nodez00_bglt)
										(BGl_fxzd2knownzd2appzd2lyzd2ze3nodeze3zzast_applyz00
										(BgL_stackz00_9, BgL_locz00_10, BgL_procz00_11,
											BgL_argz00_12, BgL_framez00_845, BgL_sitez00_13));
								}
							else
								{	/* Ast/apply.scm 116 */
									if ((BgL_arityz00_844 == ((long) 0)))
										{	/* Ast/apply.scm 119 */
											obj_t BgL_arg3312z00_1528;

											{	/* Ast/apply.scm 119 */
												obj_t BgL_list3313z00_1529;

												BgL_list3313z00_1529 =
													MAKE_PAIR((obj_t) (BgL_procz00_11), BNIL);
												BgL_arg3312z00_1528 = BgL_list3313z00_1529;
											}
											return
												BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg3312z00_1528,
												BgL_stackz00_9, BgL_locz00_10, BgL_sitez00_13);
										}
									else
										{	/* Ast/apply.scm 118 */
											return
												(BgL_nodez00_bglt)
												(BGl_vazd2knownzd2appzd2lyzd2ze3nodeze3zzast_applyz00
												(BgL_stackz00_9, BgL_locz00_10, BgL_procz00_11,
													BgL_argz00_12, BgL_framez00_845, BgL_sitez00_13));
										}
								}
						}
					}
				}
			}
		}
	}



/* _known-app-ly->node */
	obj_t BGl__knownzd2appzd2lyzd2ze3nodez31zzast_applyz00(obj_t BgL_envz00_1654,
		obj_t BgL_stackz00_1655, obj_t BgL_locz00_1656, obj_t BgL_procz00_1657,
		obj_t BgL_argz00_1658, obj_t BgL_sitez00_1659)
	{
		AN_OBJECT;
		{	/* Ast/apply.scm 108 */
			return
				(obj_t) (BGl_knownzd2appzd2lyzd2ze3nodez31zzast_applyz00
				(BgL_stackz00_1655, BgL_locz00_1656,
					(BgL_nodez00_bglt) (BgL_procz00_1657),
					(BgL_nodez00_bglt) (BgL_argz00_1658), BgL_sitez00_1659));
		}
	}



/* fx-known-app-ly->node */
	BgL_letzd2varzd2_bglt
		BGl_fxzd2knownzd2appzd2lyzd2ze3nodeze3zzast_applyz00(obj_t BgL_stackz00_20,
		obj_t BgL_locz00_21, BgL_nodez00_bglt BgL_procz00_22,
		BgL_nodez00_bglt BgL_argz00_23, obj_t BgL_framez00_24, obj_t BgL_sitez00_25)
	{
		AN_OBJECT;
		{	/* Ast/apply.scm 148 */
			{	/* Ast/apply.scm 149 */
				BgL_localz00_bglt BgL_runnerz00_851;

				BgL_typez00_bglt BgL_typez00_852;

				{	/* Ast/apply.scm 149 */
					obj_t BgL_arg3414z00_961;

					BgL_arg3414z00_961 =
						BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
						(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 2))));
					BgL_runnerz00_851 =
						BGl_makezd2localzd2svarz00zzast_localz00(BgL_arg3414z00_961,
						(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00));
				}
				BgL_typez00_852 =
					(((BgL_nodez00_bglt) CREF(BgL_procz00_22))->BgL_typez00);
				{	/* Ast/apply.scm 152 */
					BgL_variablez00_bglt BgL_obj1616z00_1537;

					obj_t BgL_val1615z00_1538;

					BgL_obj1616z00_1537 = (BgL_variablez00_bglt) (BgL_runnerz00_851);
					BgL_val1615z00_1538 = CNST_TABLE_REF(((long) 3));
					((((BgL_variablez00_bglt) CREF(BgL_obj1616z00_1537))->BgL_accessz00) =
						((obj_t) BgL_val1615z00_1538), BUNSPEC);
				}
				{	/* Ast/apply.scm 153 */
					obj_t BgL_arg3315z00_854;

					obj_t BgL_arg3316z00_855;

					{	/* Ast/apply.scm 156 */
						obj_t BgL_arg3317z00_856;

						BgL_arg3317z00_856 =
							MAKE_PAIR((obj_t) (BgL_runnerz00_851), (obj_t) (BgL_argz00_23));
						{	/* Ast/apply.scm 156 */
							obj_t BgL_list3318z00_857;

							BgL_list3318z00_857 = MAKE_PAIR(BgL_arg3317z00_856, BNIL);
							BgL_arg3315z00_854 = BgL_list3318z00_857;
					}}
					BgL_arg3316z00_855 =
						BGl_loopz72z72zzast_applyz00(BgL_sitez00_25, BgL_procz00_22,
						BgL_framez00_24, BgL_typez00_852, BgL_stackz00_20, BgL_locz00_21,
						BgL_runnerz00_851, BgL_framez00_24);
					return BGl_makezd2letzd2varz00zzast_nodez00(BgL_locz00_21,
						BgL_typez00_852, BUNSPEC, BINT(((long) -1)), BgL_arg3315z00_854,
						(BgL_nodez00_bglt) (BgL_arg3316z00_855), ((bool_t) 1));
		}}}
	}



/* loop' */
	obj_t BGl_loopz72z72zzast_applyz00(obj_t BgL_sitez00_1684,
		BgL_nodez00_bglt BgL_procz00_1683, obj_t BgL_framez00_1682,
		BgL_typez00_bglt BgL_typez00_1681, obj_t BgL_stackz00_1680,
		obj_t BgL_locz00_1679, BgL_localz00_bglt BgL_runnerz00_1678,
		obj_t BgL_localsz00_859)
	{
		AN_OBJECT;
		{	/* Ast/apply.scm 157 */
			if (NULLP(BgL_localsz00_859))
				{	/* Ast/apply.scm 159 */
					BgL_nodez00_bglt BgL_appz00_862;

					{	/* Ast/apply.scm 161 */
						obj_t BgL_arg3359z00_898;

						obj_t BgL_arg3360z00_899;

						{	/* Ast/apply.scm 161 */
							obj_t BgL_arg3361z00_900;

							{	/* Ast/apply.scm 161 */
								obj_t BgL_arg3362z00_901;

								if (NULLP(BgL_framez00_1682))
									{	/* Ast/apply.scm 161 */
										BgL_arg3362z00_901 = BNIL;
									}
								else
									{	/* Ast/apply.scm 161 */
										obj_t BgL_head3268z00_905;

										BgL_head3268z00_905 = MAKE_PAIR(BNIL, BNIL);
										{
											obj_t BgL_l3266z00_907;

											obj_t BgL_tail3269z00_908;

											BgL_l3266z00_907 = BgL_framez00_1682;
											BgL_tail3269z00_908 = BgL_head3268z00_905;
										BgL_zc3anonymousza33365ze3z83_909:
											if (NULLP(BgL_l3266z00_907))
												{	/* Ast/apply.scm 161 */
													BgL_arg3362z00_901 = CDR(BgL_head3268z00_905);
												}
											else
												{	/* Ast/apply.scm 161 */
													obj_t BgL_newtail3270z00_911;

													{	/* Ast/apply.scm 161 */
														BgL_varz00_bglt BgL_arg3368z00_913;

														{	/* Ast/apply.scm 161 */
															obj_t BgL_localz00_915;

															BgL_localz00_915 = CAR(BgL_l3266z00_907);
															{	/* Ast/apply.scm 164 */
																BgL_typez00_bglt BgL_arg3371z00_916;

																{
																	BgL_variablez00_bglt BgL_auxz00_1858;

																	BgL_auxz00_1858 =
																		(BgL_variablez00_bglt) (BgL_localz00_915);
																	BgL_arg3371z00_916 =
																		(((BgL_variablez00_bglt)
																			CREF(BgL_auxz00_1858))->BgL_typez00);
																}
																BgL_arg3368z00_913 =
																	BGl_makezd2varzd2zzast_nodez00
																	(BgL_locz00_1679, BgL_arg3371z00_916,
																	(BgL_variablez00_bglt) (BgL_localz00_915));
															}
														}
														BgL_newtail3270z00_911 =
															MAKE_PAIR((obj_t) (BgL_arg3368z00_913), BNIL);
													}
													SET_CDR(BgL_tail3269z00_908, BgL_newtail3270z00_911);
													{
														obj_t BgL_tail3269z00_1868;

														obj_t BgL_l3266z00_1866;

														BgL_l3266z00_1866 = CDR(BgL_l3266z00_907);
														BgL_tail3269z00_1868 = BgL_newtail3270z00_911;
														BgL_tail3269z00_908 = BgL_tail3269z00_1868;
														BgL_l3266z00_907 = BgL_l3266z00_1866;
														goto BgL_zc3anonymousza33365ze3z83_909;
													}
												}
										}
									}
								BgL_arg3361z00_900 =
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg3362z00_901, BNIL);
							}
							BgL_arg3359z00_898 =
								MAKE_PAIR((obj_t) (BgL_procz00_1683), BgL_arg3361z00_900);
						}
						BgL_arg3360z00_899 = CNST_TABLE_REF(((long) 1));
						BgL_appz00_862 =
							BGl_applicationzd2ze3nodez31zzast_appz00(BgL_arg3359z00_898,
							BgL_stackz00_1680, BgL_locz00_1679, BgL_arg3360z00_899);
					}
					if (CBOOL(BGl_za2unsafezd2arityza2zd2zzengine_paramz00))
						{	/* Ast/apply.scm 170 */
							return (obj_t) (BgL_appz00_862);
						}
					else
						{	/* Ast/apply.scm 173 */
							obj_t BgL_arg3321z00_863;

							{	/* Ast/apply.scm 173 */
								obj_t BgL_arg3324z00_864;

								obj_t BgL_arg3325z00_865;

								BgL_arg3324z00_864 = CNST_TABLE_REF(((long) 4));
								{	/* Ast/apply.scm 173 */
									obj_t BgL_arg3326z00_866;

									obj_t BgL_arg3327z00_867;

									{	/* Ast/apply.scm 173 */
										obj_t BgL_arg3332z00_872;

										obj_t BgL_arg3333z00_873;

										BgL_arg3332z00_872 = CNST_TABLE_REF(((long) 5));
										{	/* Ast/apply.scm 173 */
											obj_t BgL_arg3334z00_874;

											{	/* Ast/apply.scm 173 */
												obj_t BgL_arg3337z00_877;

												obj_t BgL_arg3338z00_878;

												BgL_arg3337z00_877 = CNST_TABLE_REF(((long) 6));
												{	/* Ast/apply.scm 176 */
													BgL_varz00_bglt BgL_arg3339z00_879;

													{	/* Ast/apply.scm 176 */
														BgL_typez00_bglt BgL_arg3342z00_882;

														{
															BgL_variablez00_bglt BgL_auxz00_1880;

															BgL_auxz00_1880 =
																(BgL_variablez00_bglt) (BgL_runnerz00_1678);
															BgL_arg3342z00_882 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_auxz00_1880))->BgL_typez00);
														}
														BgL_arg3339z00_879 =
															BGl_makezd2varzd2zzast_nodez00(BgL_locz00_1679,
															BgL_arg3342z00_882,
															(BgL_variablez00_bglt) (BgL_runnerz00_1678));
													}
													{	/* Ast/apply.scm 173 */
														obj_t BgL_list3341z00_881;

														BgL_list3341z00_881 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg3338z00_878 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
															(obj_t) (BgL_arg3339z00_879),
															BgL_list3341z00_881);
												}}
												BgL_arg3334z00_874 =
													MAKE_PAIR(BgL_arg3337z00_877, BgL_arg3338z00_878);
											}
											{	/* Ast/apply.scm 173 */
												obj_t BgL_list3336z00_876;

												BgL_list3336z00_876 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg3333z00_873 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg3334z00_874, BgL_list3336z00_876);
										}}
										BgL_arg3326z00_866 =
											MAKE_PAIR(BgL_arg3332z00_872, BgL_arg3333z00_873);
									}
									{	/* Ast/apply.scm 179 */
										obj_t BgL_arg3343z00_883;

										obj_t BgL_arg3345z00_884;

										BgL_arg3343z00_883 = CNST_TABLE_REF(((long) 7));
										{	/* Ast/apply.scm 179 */
											obj_t BgL_arg3348z00_887;

											{	/* Ast/apply.scm 181 */
												obj_t BgL_arg3353z00_892;

												obj_t BgL_arg3354z00_893;

												BgL_arg3353z00_892 = CNST_TABLE_REF(((long) 8));
												{	/* Ast/apply.scm 181 */
													obj_t BgL_arg3355z00_894;

													{	/* Ast/apply.scm 181 */
														BgL_variablez00_bglt BgL_arg3358z00_897;

														{
															BgL_varz00_bglt BgL_auxz00_1894;

															BgL_auxz00_1894 =
																(BgL_varz00_bglt) (BgL_procz00_1683);
															BgL_arg3358z00_897 =
																(((BgL_varz00_bglt) CREF(BgL_auxz00_1894))->
																BgL_variablez00);
														}
														BgL_arg3355z00_894 =
															BGl_shapez00zztools_shapez00(
															(obj_t) (BgL_arg3358z00_897));
													}
													{	/* Ast/apply.scm 181 */
														obj_t BgL_list3357z00_896;

														BgL_list3357z00_896 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg3354z00_893 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg3355z00_894, BgL_list3357z00_896);
												}}
												BgL_arg3348z00_887 =
													MAKE_PAIR(BgL_arg3353z00_892, BgL_arg3354z00_893);
											}
											{	/* Ast/apply.scm 179 */
												obj_t BgL_list3350z00_889;

												{	/* Ast/apply.scm 179 */
													obj_t BgL_arg3351z00_890;

													{	/* Ast/apply.scm 179 */
														obj_t BgL_arg3352z00_891;

														BgL_arg3352z00_891 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg3351z00_890 =
															MAKE_PAIR(BgL_arg3348z00_887, BgL_arg3352z00_891);
													}
													BgL_list3350z00_889 =
														MAKE_PAIR(BGl_string3572z00zzast_applyz00,
														BgL_arg3351z00_890);
												}
												BgL_arg3345z00_884 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BGl_string3573z00zzast_applyz00,
													BgL_list3350z00_889);
										}}
										BgL_arg3327z00_867 =
											MAKE_PAIR(BgL_arg3343z00_883, BgL_arg3345z00_884);
									}
									{	/* Ast/apply.scm 173 */
										obj_t BgL_list3329z00_869;

										{	/* Ast/apply.scm 173 */
											obj_t BgL_arg3330z00_870;

											{	/* Ast/apply.scm 173 */
												obj_t BgL_arg3331z00_871;

												BgL_arg3331z00_871 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg3330z00_870 =
													MAKE_PAIR(BgL_arg3327z00_867, BgL_arg3331z00_871);
											}
											BgL_list3329z00_869 =
												MAKE_PAIR((obj_t) (BgL_appz00_862), BgL_arg3330z00_870);
										}
										BgL_arg3325z00_865 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3326z00_866, BgL_list3329z00_869);
								}}
								BgL_arg3321z00_863 =
									MAKE_PAIR(BgL_arg3324z00_864, BgL_arg3325z00_865);
							}
							return
								(obj_t) (BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg3321z00_863,
									BgL_stackz00_1680, BgL_locz00_1679, BgL_sitez00_1684));
						}
				}
			else
				{	/* Ast/apply.scm 185 */
					obj_t BgL_arg3373z00_919;

					obj_t BgL_arg3374z00_920;

					{	/* Ast/apply.scm 189 */
						obj_t BgL_arg3375z00_921;

						{	/* Ast/apply.scm 189 */
							obj_t BgL_arg3377z00_923;

							BgL_nodez00_bglt BgL_arg3378z00_924;

							BgL_arg3377z00_923 = CAR(BgL_localsz00_859);
							{	/* Ast/apply.scm 191 */
								obj_t BgL_arg3379z00_925;

								obj_t BgL_arg3380z00_926;

								{	/* Ast/apply.scm 191 */
									obj_t BgL_arg3381z00_927;

									obj_t BgL_arg3382z00_928;

									BgL_arg3381z00_927 = CNST_TABLE_REF(((long) 9));
									{	/* Ast/apply.scm 194 */
										BgL_varz00_bglt BgL_arg3383z00_929;

										{	/* Ast/apply.scm 194 */
											BgL_typez00_bglt BgL_arg3386z00_932;

											{
												BgL_variablez00_bglt BgL_auxz00_1917;

												BgL_auxz00_1917 =
													(BgL_variablez00_bglt) (BgL_runnerz00_1678);
												BgL_arg3386z00_932 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_1917))->
													BgL_typez00);
											}
											BgL_arg3383z00_929 =
												BGl_makezd2varzd2zzast_nodez00(BgL_locz00_1679,
												BgL_arg3386z00_932,
												(BgL_variablez00_bglt) (BgL_runnerz00_1678));
										}
										{	/* Ast/apply.scm 191 */
											obj_t BgL_list3385z00_931;

											BgL_list3385z00_931 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg3382z00_928 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
												(obj_t) (BgL_arg3383z00_929), BgL_list3385z00_931);
									}}
									BgL_arg3379z00_925 =
										MAKE_PAIR(BgL_arg3381z00_927, BgL_arg3382z00_928);
								}
								BgL_arg3380z00_926 = CNST_TABLE_REF(((long) 1));
								BgL_arg3378z00_924 =
									BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg3379z00_925,
									BgL_stackz00_1680, BgL_locz00_1679, BgL_arg3380z00_926);
							}
							BgL_arg3375z00_921 =
								MAKE_PAIR(BgL_arg3377z00_923, (obj_t) (BgL_arg3378z00_924));
						}
						{	/* Ast/apply.scm 188 */
							obj_t BgL_list3376z00_922;

							BgL_list3376z00_922 = MAKE_PAIR(BgL_arg3375z00_921, BNIL);
							BgL_arg3373z00_919 = BgL_list3376z00_922;
					}}
					if (NULLP(CDR(BgL_localsz00_859)))
						{	/* Ast/apply.scm 199 */
							BgL_arg3374z00_920 =
								BGl_loopz72z72zzast_applyz00(BgL_sitez00_1684, BgL_procz00_1683,
								BgL_framez00_1682, BgL_typez00_1681, BgL_stackz00_1680,
								BgL_locz00_1679, BgL_runnerz00_1678, CDR(BgL_localsz00_859));
						}
					else
						{	/* Ast/apply.scm 202 */
							obj_t BgL_arg3389z00_935;

							obj_t BgL_arg3390z00_936;

							{	/* Ast/apply.scm 202 */
								obj_t BgL_arg3391z00_937;

								obj_t BgL_arg3392z00_938;

								BgL_arg3391z00_937 = CNST_TABLE_REF(((long) 10));
								{	/* Ast/apply.scm 203 */
									obj_t BgL_arg3393z00_939;

									obj_t BgL_arg3394z00_940;

									{	/* Ast/apply.scm 203 */
										obj_t BgL_arg3398z00_944;

										obj_t BgL_arg3399z00_945;

										BgL_arg3398z00_944 = CNST_TABLE_REF(((long) 11));
										{	/* Ast/apply.scm 205 */
											BgL_varz00_bglt BgL_arg3400z00_946;

											obj_t BgL_arg3401z00_947;

											{	/* Ast/apply.scm 205 */
												BgL_typez00_bglt BgL_arg3405z00_951;

												{
													BgL_variablez00_bglt BgL_auxz00_1938;

													BgL_auxz00_1938 =
														(BgL_variablez00_bglt) (BgL_runnerz00_1678);
													BgL_arg3405z00_951 =
														(((BgL_variablez00_bglt) CREF(BgL_auxz00_1938))->
														BgL_typez00);
												}
												BgL_arg3400z00_946 =
													BGl_makezd2varzd2zzast_nodez00(BgL_locz00_1679,
													BgL_arg3405z00_951,
													(BgL_variablez00_bglt) (BgL_runnerz00_1678));
											}
											{	/* Ast/apply.scm 207 */
												obj_t BgL_arg3406z00_952;

												obj_t BgL_arg3407z00_953;

												BgL_arg3406z00_952 = CNST_TABLE_REF(((long) 6));
												{	/* Ast/apply.scm 210 */
													BgL_varz00_bglt BgL_arg3408z00_954;

													{	/* Ast/apply.scm 210 */
														BgL_typez00_bglt BgL_arg3411z00_957;

														{
															BgL_variablez00_bglt BgL_auxz00_1944;

															BgL_auxz00_1944 =
																(BgL_variablez00_bglt) (BgL_runnerz00_1678);
															BgL_arg3411z00_957 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_auxz00_1944))->BgL_typez00);
														}
														BgL_arg3408z00_954 =
															BGl_makezd2varzd2zzast_nodez00(BgL_locz00_1679,
															BgL_arg3411z00_957,
															(BgL_variablez00_bglt) (BgL_runnerz00_1678));
													}
													{	/* Ast/apply.scm 207 */
														obj_t BgL_list3410z00_956;

														BgL_list3410z00_956 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg3407z00_953 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
															(obj_t) (BgL_arg3408z00_954),
															BgL_list3410z00_956);
												}}
												BgL_arg3401z00_947 =
													MAKE_PAIR(BgL_arg3406z00_952, BgL_arg3407z00_953);
											}
											{	/* Ast/apply.scm 203 */
												obj_t BgL_list3403z00_949;

												{	/* Ast/apply.scm 203 */
													obj_t BgL_arg3404z00_950;

													BgL_arg3404z00_950 = MAKE_PAIR(BNIL, BNIL);
													BgL_list3403z00_949 =
														MAKE_PAIR(BgL_arg3401z00_947, BgL_arg3404z00_950);
												}
												BgL_arg3399z00_945 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
													(obj_t) (BgL_arg3400z00_946), BgL_list3403z00_949);
										}}
										BgL_arg3393z00_939 =
											MAKE_PAIR(BgL_arg3398z00_944, BgL_arg3399z00_945);
									}
									BgL_arg3394z00_940 =
										BGl_loopz72z72zzast_applyz00(BgL_sitez00_1684,
										BgL_procz00_1683, BgL_framez00_1682, BgL_typez00_1681,
										BgL_stackz00_1680, BgL_locz00_1679, BgL_runnerz00_1678,
										CDR(BgL_localsz00_859));
									{	/* Ast/apply.scm 202 */
										obj_t BgL_list3396z00_942;

										{	/* Ast/apply.scm 202 */
											obj_t BgL_arg3397z00_943;

											BgL_arg3397z00_943 = MAKE_PAIR(BNIL, BNIL);
											BgL_list3396z00_942 =
												MAKE_PAIR(BgL_arg3394z00_940, BgL_arg3397z00_943);
										}
										BgL_arg3392z00_938 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3393z00_939, BgL_list3396z00_942);
								}}
								BgL_arg3389z00_935 =
									MAKE_PAIR(BgL_arg3391z00_937, BgL_arg3392z00_938);
							}
							BgL_arg3390z00_936 = CNST_TABLE_REF(((long) 1));
							BgL_arg3374z00_920 =
								(obj_t) (BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg3389z00_935,
									BgL_stackz00_1680, BgL_locz00_1679, BgL_arg3390z00_936));
						}
					return
						(obj_t) (BGl_makezd2letzd2varz00zzast_nodez00(BgL_locz00_1679,
							BgL_typez00_1681, BUNSPEC, BINT(((long) -1)), BgL_arg3373z00_919,
							(BgL_nodez00_bglt) (BgL_arg3374z00_920), ((bool_t) 1)));
		}}
	}



/* va-known-app-ly->node */
	BgL_letzd2varzd2_bglt
		BGl_vazd2knownzd2appzd2lyzd2ze3nodeze3zzast_applyz00(obj_t BgL_stackz00_26,
		obj_t BgL_locz00_27, BgL_nodez00_bglt BgL_procz00_28,
		BgL_nodez00_bglt BgL_argz00_29, obj_t BgL_framez00_30, obj_t BgL_sitez00_31)
	{
		AN_OBJECT;
		{	/* Ast/apply.scm 233 */
			{	/* Ast/apply.scm 234 */
				obj_t BgL_framez00_1677;

				BgL_framez00_1677 = MAKE_CELL(BgL_framez00_30);
				{	/* Ast/apply.scm 234 */
					BgL_localz00_bglt BgL_runnerz00_963;

					BgL_typez00_bglt BgL_typez00_964;

					{	/* Ast/apply.scm 234 */
						obj_t BgL_arg3484z00_1045;

						BgL_arg3484z00_1045 =
							BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
							(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 2))));
						BgL_runnerz00_963 =
							BGl_makezd2localzd2svarz00zzast_localz00(BgL_arg3484z00_1045,
							(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00));
					}
					BgL_typez00_964 =
						(((BgL_nodez00_bglt) CREF(BgL_procz00_28))->BgL_typez00);
					{	/* Ast/apply.scm 237 */
						bool_t BgL_testz00_1977;

						{	/* Ast/apply.scm 237 */
							obj_t BgL_objz00_1567;

							BgL_objz00_1567 = CELL_REF(BgL_framez00_1677);
							BgL_testz00_1977 = PAIRP(BgL_objz00_1567);
						}
						if (BgL_testz00_1977)
							{	/* Ast/apply.scm 238 */
								BgL_variablez00_bglt BgL_obj1616z00_1568;

								obj_t BgL_val1615z00_1569;

								BgL_obj1616z00_1568 =
									(BgL_variablez00_bglt) (BgL_runnerz00_963);
								BgL_val1615z00_1569 = CNST_TABLE_REF(((long) 3));
								((((BgL_variablez00_bglt) CREF(BgL_obj1616z00_1568))->
										BgL_accessz00) = ((obj_t) BgL_val1615z00_1569), BUNSPEC);
							}
						else
							{	/* Ast/apply.scm 237 */
								BFALSE;
							}
					}
					{	/* Ast/apply.scm 239 */
						obj_t BgL_arg3418z00_967;

						obj_t BgL_arg3419z00_968;

						{	/* Ast/apply.scm 242 */
							obj_t BgL_arg3420z00_969;

							BgL_arg3420z00_969 =
								MAKE_PAIR((obj_t) (BgL_runnerz00_963), (obj_t) (BgL_argz00_29));
							{	/* Ast/apply.scm 242 */
								obj_t BgL_list3421z00_970;

								BgL_list3421z00_970 = MAKE_PAIR(BgL_arg3420z00_969, BNIL);
								BgL_arg3418z00_967 = BgL_list3421z00_970;
							}
						}
						BgL_arg3419z00_968 =
							BGl_loopz00zzast_applyz00(BgL_procz00_28, BgL_framez00_1677,
							BgL_typez00_964, BgL_stackz00_26, BgL_locz00_27,
							BgL_runnerz00_963, CELL_REF(BgL_framez00_1677), BNIL);
						return BGl_makezd2letzd2varz00zzast_nodez00(BgL_locz00_27,
							BgL_typez00_964, BUNSPEC, BINT(((long) -1)), BgL_arg3418z00_967,
							(BgL_nodez00_bglt) (BgL_arg3419z00_968), ((bool_t) 1));
		}}}}
	}



/* loop */
	obj_t BGl_loopz00zzast_applyz00(BgL_nodez00_bglt BgL_procz00_1675,
		obj_t BgL_framez00_1674, BgL_typez00_bglt BgL_typez00_1673,
		obj_t BgL_stackz00_1672, obj_t BgL_locz00_1671,
		BgL_localz00_bglt BgL_runnerz00_1670, obj_t BgL_localsz00_973,
		obj_t BgL_oldz00_974)
	{
		AN_OBJECT;
		{	/* Ast/apply.scm 243 */
			if (NULLP(BgL_localsz00_973))
				{	/* Ast/apply.scm 245 */
					if (NULLP(BgL_oldz00_974))
						{	/* Ast/apply.scm 248 */
							obj_t BgL_auxz00_1676;

							{	/* Ast/apply.scm 248 */
								obj_t BgL_list3425z00_978;

								BgL_list3425z00_978 =
									MAKE_PAIR((obj_t) (BgL_runnerz00_1670), BNIL);
								BgL_auxz00_1676 = BgL_list3425z00_978;
							}
							CELL_SET(BgL_framez00_1674, BgL_auxz00_1676);
						}
					else
						{	/* Ast/apply.scm 249 */
							obj_t BgL_arg3426z00_979;

							BgL_arg3426z00_979 =
								MAKE_PAIR((obj_t) (BgL_runnerz00_1670), BNIL);
							SET_CDR(BgL_oldz00_974, BgL_arg3426z00_979);
						}
					{	/* Ast/apply.scm 252 */
						BgL_typez00_bglt BgL_arg3427z00_980;

						BgL_varz00_bglt BgL_arg3431z00_982;

						obj_t BgL_arg3432z00_983;

						{	/* Ast/apply.scm 252 */
							BgL_variablez00_bglt BgL_obj1608z00_1579;

							{
								BgL_varz00_bglt BgL_auxz00_1999;

								BgL_auxz00_1999 = (BgL_varz00_bglt) (BgL_procz00_1675);
								BgL_obj1608z00_1579 =
									(((BgL_varz00_bglt) CREF(BgL_auxz00_1999))->BgL_variablez00);
							}
							BgL_arg3427z00_980 =
								(((BgL_variablez00_bglt) CREF(BgL_obj1608z00_1579))->
								BgL_typez00);
						}
						{	/* Ast/apply.scm 253 */
							BgL_varz00_bglt BgL_duplicated3259z00_985;

							BgL_duplicated3259z00_985 = (BgL_varz00_bglt) (BgL_procz00_1675);
							{	/* Ast/apply.scm 253 */
								BgL_varz00_bglt BgL_new3260z00_986;

								{	/* Ast/apply.scm 253 */
									obj_t BgL_arg3434z00_987;

									BgL_typez00_bglt BgL_arg3435z00_988;

									BgL_variablez00_bglt BgL_arg3436z00_989;

									{
										BgL_nodez00_bglt BgL_auxz00_2004;

										BgL_auxz00_2004 =
											(BgL_nodez00_bglt) (BgL_duplicated3259z00_985);
										BgL_arg3434z00_987 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_2004))->BgL_locz00);
									}
									{
										BgL_nodez00_bglt BgL_auxz00_2007;

										BgL_auxz00_2007 =
											(BgL_nodez00_bglt) (BgL_duplicated3259z00_985);
										BgL_arg3435z00_988 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_2007))->BgL_typez00);
									}
									BgL_arg3436z00_989 =
										(((BgL_varz00_bglt) CREF(BgL_duplicated3259z00_985))->
										BgL_variablez00);
									BgL_new3260z00_986 =
										BGl_makezd2varzd2zzast_nodez00(BgL_arg3434z00_987,
										BgL_arg3435z00_988, BgL_arg3436z00_989);
								}
								{	/* Ast/apply.scm 253 */

									BgL_arg3431z00_982 = BgL_new3260z00_986;
								}
							}
						}
						{	/* Ast/apply.scm 254 */
							obj_t BgL_l3271z00_990;

							BgL_l3271z00_990 = CELL_REF(BgL_framez00_1674);
							if (NULLP(BgL_l3271z00_990))
								{	/* Ast/apply.scm 254 */
									BgL_arg3432z00_983 = BNIL;
								}
							else
								{	/* Ast/apply.scm 254 */
									obj_t BgL_head3273z00_992;

									BgL_head3273z00_992 = MAKE_PAIR(BNIL, BNIL);
									{
										obj_t BgL_l3271z00_994;

										obj_t BgL_tail3274z00_995;

										BgL_l3271z00_994 = BgL_l3271z00_990;
										BgL_tail3274z00_995 = BgL_head3273z00_992;
									BgL_zc3anonymousza33438ze3z83_996:
										if (NULLP(BgL_l3271z00_994))
											{	/* Ast/apply.scm 254 */
												BgL_arg3432z00_983 = CDR(BgL_head3273z00_992);
											}
										else
											{	/* Ast/apply.scm 254 */
												obj_t BgL_newtail3275z00_998;

												{	/* Ast/apply.scm 254 */
													BgL_varz00_bglt BgL_arg3441z00_1000;

													{	/* Ast/apply.scm 254 */
														obj_t BgL_localz00_1002;

														BgL_localz00_1002 = CAR(BgL_l3271z00_994);
														{	/* Ast/apply.scm 257 */
															BgL_typez00_bglt BgL_arg3444z00_1003;

															{
																BgL_variablez00_bglt BgL_auxz00_2019;

																BgL_auxz00_2019 =
																	(BgL_variablez00_bglt) (BgL_localz00_1002);
																BgL_arg3444z00_1003 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_2019))->BgL_typez00);
															}
															BgL_arg3441z00_1000 =
																BGl_makezd2varzd2zzast_nodez00(BgL_locz00_1671,
																BgL_arg3444z00_1003,
																(BgL_variablez00_bglt) (BgL_localz00_1002));
														}
													}
													BgL_newtail3275z00_998 =
														MAKE_PAIR((obj_t) (BgL_arg3441z00_1000), BNIL);
												}
												SET_CDR(BgL_tail3274z00_995, BgL_newtail3275z00_998);
												{
													obj_t BgL_tail3274z00_2029;

													obj_t BgL_l3271z00_2027;

													BgL_l3271z00_2027 = CDR(BgL_l3271z00_994);
													BgL_tail3274z00_2029 = BgL_newtail3275z00_998;
													BgL_tail3274z00_995 = BgL_tail3274z00_2029;
													BgL_l3271z00_994 = BgL_l3271z00_2027;
													goto BgL_zc3anonymousza33438ze3z83_996;
												}
											}
									}
								}
						}
						return
							(obj_t) (BGl_makezd2appzd2zzast_nodez00(BgL_locz00_1671,
								BgL_arg3427z00_980, BUNSPEC, BINT(((long) -1)),
								BgL_arg3431z00_982, BgL_arg3432z00_983));
				}}
			else
				{	/* Ast/apply.scm 260 */
					obj_t BgL_arg3446z00_1006;

					BgL_nodez00_bglt BgL_arg3447z00_1007;

					{	/* Ast/apply.scm 264 */
						obj_t BgL_arg3448z00_1008;

						{	/* Ast/apply.scm 264 */
							obj_t BgL_arg3450z00_1010;

							BgL_nodez00_bglt BgL_arg3451z00_1011;

							BgL_arg3450z00_1010 = CAR(BgL_localsz00_973);
							{	/* Ast/apply.scm 266 */
								obj_t BgL_arg3452z00_1012;

								obj_t BgL_arg3453z00_1013;

								{	/* Ast/apply.scm 266 */
									obj_t BgL_arg3454z00_1014;

									obj_t BgL_arg3455z00_1015;

									BgL_arg3454z00_1014 = CNST_TABLE_REF(((long) 9));
									{	/* Ast/apply.scm 269 */
										BgL_varz00_bglt BgL_arg3456z00_1016;

										{	/* Ast/apply.scm 269 */
											BgL_typez00_bglt BgL_arg3459z00_1019;

											{
												BgL_variablez00_bglt BgL_auxz00_2035;

												BgL_auxz00_2035 =
													(BgL_variablez00_bglt) (BgL_runnerz00_1670);
												BgL_arg3459z00_1019 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_2035))->
													BgL_typez00);
											}
											BgL_arg3456z00_1016 =
												BGl_makezd2varzd2zzast_nodez00(BgL_locz00_1671,
												BgL_arg3459z00_1019,
												(BgL_variablez00_bglt) (BgL_runnerz00_1670));
										}
										{	/* Ast/apply.scm 266 */
											obj_t BgL_list3458z00_1018;

											BgL_list3458z00_1018 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg3455z00_1015 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
												(obj_t) (BgL_arg3456z00_1016), BgL_list3458z00_1018);
									}}
									BgL_arg3452z00_1012 =
										MAKE_PAIR(BgL_arg3454z00_1014, BgL_arg3455z00_1015);
								}
								BgL_arg3453z00_1013 = CNST_TABLE_REF(((long) 1));
								BgL_arg3451z00_1011 =
									BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg3452z00_1012,
									BgL_stackz00_1672, BgL_locz00_1671, BgL_arg3453z00_1013);
							}
							BgL_arg3448z00_1008 =
								MAKE_PAIR(BgL_arg3450z00_1010, (obj_t) (BgL_arg3451z00_1011));
						}
						{	/* Ast/apply.scm 263 */
							obj_t BgL_list3449z00_1009;

							BgL_list3449z00_1009 = MAKE_PAIR(BgL_arg3448z00_1008, BNIL);
							BgL_arg3446z00_1006 = BgL_list3449z00_1009;
					}}
					{	/* Ast/apply.scm 275 */
						obj_t BgL_arg3460z00_1020;

						obj_t BgL_arg3461z00_1021;

						{	/* Ast/apply.scm 275 */
							obj_t BgL_arg3462z00_1022;

							obj_t BgL_arg3463z00_1023;

							BgL_arg3462z00_1022 = CNST_TABLE_REF(((long) 10));
							{	/* Ast/apply.scm 276 */
								obj_t BgL_arg3464z00_1024;

								obj_t BgL_arg3465z00_1025;

								{	/* Ast/apply.scm 276 */
									obj_t BgL_arg3469z00_1029;

									obj_t BgL_arg3470z00_1030;

									BgL_arg3469z00_1029 = CNST_TABLE_REF(((long) 11));
									{	/* Ast/apply.scm 278 */
										BgL_varz00_bglt BgL_arg3471z00_1031;

										obj_t BgL_arg3472z00_1032;

										{	/* Ast/apply.scm 278 */
											BgL_typez00_bglt BgL_arg3476z00_1036;

											{
												BgL_variablez00_bglt BgL_auxz00_2051;

												BgL_auxz00_2051 =
													(BgL_variablez00_bglt) (BgL_runnerz00_1670);
												BgL_arg3476z00_1036 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_2051))->
													BgL_typez00);
											}
											BgL_arg3471z00_1031 =
												BGl_makezd2varzd2zzast_nodez00(BgL_locz00_1671,
												BgL_arg3476z00_1036,
												(BgL_variablez00_bglt) (BgL_runnerz00_1670));
										}
										{	/* Ast/apply.scm 280 */
											obj_t BgL_arg3477z00_1037;

											obj_t BgL_arg3478z00_1038;

											BgL_arg3477z00_1037 = CNST_TABLE_REF(((long) 6));
											{	/* Ast/apply.scm 282 */
												BgL_varz00_bglt BgL_arg3479z00_1039;

												{	/* Ast/apply.scm 282 */
													BgL_typez00_bglt BgL_arg3482z00_1042;

													{
														BgL_variablez00_bglt BgL_auxz00_2057;

														BgL_auxz00_2057 =
															(BgL_variablez00_bglt) (BgL_runnerz00_1670);
														BgL_arg3482z00_1042 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_2057))->
															BgL_typez00);
													}
													BgL_arg3479z00_1039 =
														BGl_makezd2varzd2zzast_nodez00(BgL_locz00_1671,
														BgL_arg3482z00_1042,
														(BgL_variablez00_bglt) (BgL_runnerz00_1670));
												}
												{	/* Ast/apply.scm 280 */
													obj_t BgL_list3481z00_1041;

													BgL_list3481z00_1041 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg3478z00_1038 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
														(obj_t) (BgL_arg3479z00_1039),
														BgL_list3481z00_1041);
											}}
											BgL_arg3472z00_1032 =
												MAKE_PAIR(BgL_arg3477z00_1037, BgL_arg3478z00_1038);
										}
										{	/* Ast/apply.scm 276 */
											obj_t BgL_list3474z00_1034;

											{	/* Ast/apply.scm 276 */
												obj_t BgL_arg3475z00_1035;

												BgL_arg3475z00_1035 = MAKE_PAIR(BNIL, BNIL);
												BgL_list3474z00_1034 =
													MAKE_PAIR(BgL_arg3472z00_1032, BgL_arg3475z00_1035);
											}
											BgL_arg3470z00_1030 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
												(obj_t) (BgL_arg3471z00_1031), BgL_list3474z00_1034);
									}}
									BgL_arg3464z00_1024 =
										MAKE_PAIR(BgL_arg3469z00_1029, BgL_arg3470z00_1030);
								}
								{	/* Ast/apply.scm 284 */
									obj_t BgL_arg3483z00_1043;

									BgL_arg3483z00_1043 = CDR(BgL_localsz00_973);
									BgL_arg3465z00_1025 =
										BGl_loopz00zzast_applyz00(BgL_procz00_1675,
										BgL_framez00_1674, BgL_typez00_1673, BgL_stackz00_1672,
										BgL_locz00_1671, BgL_runnerz00_1670, BgL_arg3483z00_1043,
										BgL_localsz00_973);
								}
								{	/* Ast/apply.scm 275 */
									obj_t BgL_list3467z00_1027;

									{	/* Ast/apply.scm 275 */
										obj_t BgL_arg3468z00_1028;

										BgL_arg3468z00_1028 = MAKE_PAIR(BNIL, BNIL);
										BgL_list3467z00_1027 =
											MAKE_PAIR(BgL_arg3465z00_1025, BgL_arg3468z00_1028);
									}
									BgL_arg3463z00_1023 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg3464z00_1024, BgL_list3467z00_1027);
							}}
							BgL_arg3460z00_1020 =
								MAKE_PAIR(BgL_arg3462z00_1022, BgL_arg3463z00_1023);
						}
						BgL_arg3461z00_1021 = CNST_TABLE_REF(((long) 1));
						BgL_arg3447z00_1007 =
							BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg3460z00_1020,
							BgL_stackz00_1672, BgL_locz00_1671, BgL_arg3461z00_1021);
					}
					return
						(obj_t) (BGl_makezd2letzd2varz00zzast_nodez00(BgL_locz00_1671,
							BgL_typez00_1673, BUNSPEC, BINT(((long) -1)), BgL_arg3446z00_1006,
							BgL_arg3447z00_1007, ((bool_t) 1)));
		}}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_applyz00()
	{
		AN_OBJECT;
		{	/* Ast/apply.scm 14 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_makezd2funzd2framezd2envzd2zzast_applyz00,
				BGl_makezd2funzd2framezd2defau3276zd2envz00zzast_applyz00,
				BGl_funz00zzast_varz00, BGl_string3574z00zzast_applyz00);
		}
	}



/* make-fun-frame */
	obj_t BGl_makezd2funzd2framez00zzast_applyz00(BgL_funz00_bglt BgL_funz00_5)
	{
		AN_OBJECT;
		{	/* Ast/apply.scm 62 */
			{	/* Ast/apply.scm 62 */
				obj_t BgL_method3277z00_1602;

				{	/* Ast/apply.scm 62 */
					BgL_objectz00_bglt BgL_objz00_1603;

					BgL_objz00_1603 = (BgL_objectz00_bglt) (BgL_funz00_5);
					{	/* Ast/apply.scm 62 */
						long BgL_objzd2classzd2numz00_1604;

						BgL_objzd2classzd2numz00_1604 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1603);
						{	/* Ast/apply.scm 62 */
							obj_t BgL_arg2643z00_1605;

							BgL_arg2643z00_1605 =
								PROCEDURE_REF(BGl_makezd2funzd2framezd2envzd2zzast_applyz00,
								(int) (((long) 1)));
							{	/* Ast/apply.scm 62 */
								obj_t BgL_arrayz00_1607;

								int BgL_offsetz00_1608;

								BgL_arrayz00_1607 = BgL_arg2643z00_1605;
								BgL_offsetz00_1608 = (int) (BgL_objzd2classzd2numz00_1604);
								{	/* Ast/apply.scm 62 */
									long BgL_offsetz00_1609;

									BgL_offsetz00_1609 =
										((long) (BgL_offsetz00_1608) - OBJECT_TYPE);
									{	/* Ast/apply.scm 62 */
										long BgL_modz00_1610;

										{	/* Ast/apply.scm 62 */
											int BgL_arg2645z00_1611;

											BgL_arg2645z00_1611 = (int) (((long) 16));
											{	/* Ast/apply.scm 62 */
												long BgL_auxz00_2091;

												BgL_auxz00_2091 = (long) (BgL_arg2645z00_1611);
												BgL_modz00_1610 =
													(BgL_offsetz00_1609 / BgL_auxz00_2091);
										}}
										{	/* Ast/apply.scm 62 */
											long BgL_restz00_1612;

											{	/* Ast/apply.scm 62 */
												int BgL_arg2644z00_1613;

												BgL_arg2644z00_1613 = (int) (((long) 16));
												{	/* Ast/apply.scm 62 */
													long BgL_auxz00_2095;

													BgL_auxz00_2095 = (long) (BgL_arg2644z00_1613);
													BgL_restz00_1612 =
														(BgL_offsetz00_1609 % BgL_auxz00_2095);
											}}
											{	/* Ast/apply.scm 62 */

												BgL_method3277z00_1602 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1607,
														(int) (BgL_modz00_1610)), (int) (BgL_restz00_1612));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3277z00_1602) (BgL_method3277z00_1602,
					(obj_t) (BgL_funz00_5), BEOA);
			}
		}
	}



/* _make-fun-frame */
	obj_t BGl__makezd2funzd2framez00zzast_applyz00(obj_t BgL_envz00_1660,
		obj_t BgL_funz00_1661)
	{
		AN_OBJECT;
		{	/* Ast/apply.scm 62 */
			return
				BGl_makezd2funzd2framez00zzast_applyz00(
				(BgL_funz00_bglt) (BgL_funz00_1661));
		}
	}



/* make-fun-frame-defau3276 */
	obj_t BGl_makezd2funzd2framezd2defau3276zd2zzast_applyz00(BgL_funz00_bglt
		BgL_funz00_6)
	{
		AN_OBJECT;
		{	/* Ast/apply.scm 14 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 12)),
				BGl_string3575z00zzast_applyz00, (obj_t) (BgL_funz00_6));
		}
	}



/* _make-fun-frame-defau3276 */
	obj_t BGl__makezd2funzd2framezd2defau3276zd2zzast_applyz00(obj_t
		BgL_envz00_1662, obj_t BgL_funz00_1663)
	{
		AN_OBJECT;
		{	/* Ast/apply.scm 14 */
			return
				BGl_makezd2funzd2framezd2defau3276zd2zzast_applyz00(
				(BgL_funz00_bglt) (BgL_funz00_1663));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_applyz00()
	{
		AN_OBJECT;
		{	/* Ast/apply.scm 14 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_makezd2funzd2framezd2envzd2zzast_applyz00, BGl_sfunz00zzast_varz00,
				BGl_proc3576z00zzast_applyz00, BGl_string3574z00zzast_applyz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_makezd2funzd2framezd2envzd2zzast_applyz00, BGl_cfunz00zzast_varz00,
				BGl_proc3577z00zzast_applyz00, BGl_string3574z00zzast_applyz00);
		}
	}



/* make-fun-frame-cfun3281 */
	obj_t BGl_makezd2funzd2framezd2cfun3281zd2zzast_applyz00(obj_t
		BgL_envz00_1666, obj_t BgL_funz00_1667)
	{
		AN_OBJECT;
		{	/* Ast/apply.scm 87 */
			{
				BgL_cfunz00_bglt BgL_funz00_1448;

				BgL_funz00_1448 = (BgL_cfunz00_bglt) (BgL_funz00_1667);
				{	/* Ast/apply.scm 88 */
					long BgL_arityz00_1451;

					{
						BgL_funz00_bglt BgL_auxz00_2114;

						BgL_auxz00_2114 = (BgL_funz00_bglt) (BgL_funz00_1448);
						BgL_arityz00_1451 =
							(((BgL_funz00_bglt) CREF(BgL_auxz00_2114))->BgL_arityz00);
					}
					{	/* Ast/apply.scm 89 */
						obj_t BgL_g3247z00_1452;

						BgL_g3247z00_1452 =
							(((BgL_cfunz00_bglt) CREF(BgL_funz00_1448))->BgL_argszd2typezd2);
						{
							obj_t BgL_typesz00_1455;

							obj_t BgL_localsz00_1456;

							BgL_typesz00_1455 = BgL_g3247z00_1452;
							BgL_localsz00_1456 = BNIL;
						BgL_zc3anonymousza33548ze3z83_1457:
							if (NULLP(BgL_typesz00_1455))
								{	/* Ast/apply.scm 92 */
									return bgl_reverse_bang(BgL_localsz00_1456);
								}
							else
								{	/* Ast/apply.scm 94 */
									bool_t BgL_testz00_2121;

									if (NULLP(CDR(BgL_typesz00_1455)))
										{	/* Ast/apply.scm 94 */
											BgL_testz00_2121 = (BgL_arityz00_1451 < ((long) 0));
										}
									else
										{	/* Ast/apply.scm 94 */
											BgL_testz00_2121 = ((bool_t) 0);
										}
									if (BgL_testz00_2121)
										{	/* Ast/apply.scm 94 */
											return bgl_reverse_bang(BgL_localsz00_1456);
										}
									else
										{	/* Ast/apply.scm 97 */
											obj_t BgL_arg3551z00_1460;

											obj_t BgL_arg3552z00_1461;

											BgL_arg3551z00_1460 = CDR(BgL_typesz00_1455);
											{	/* Ast/apply.scm 98 */
												BgL_localz00_bglt BgL_arg3553z00_1462;

												{	/* Ast/apply.scm 98 */
													obj_t BgL_arg3554z00_1463;

													obj_t BgL_arg3555z00_1464;

													BgL_arg3554z00_1463 =
														BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
														(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
																	(long) 13))));
													BgL_arg3555z00_1464 = CAR(BgL_typesz00_1455);
													BgL_arg3553z00_1462 =
														BGl_makezd2localzd2svarz00zzast_localz00
														(BgL_arg3554z00_1463,
														(BgL_typez00_bglt) (BgL_arg3555z00_1464));
												}
												BgL_arg3552z00_1461 =
													MAKE_PAIR(
													(obj_t) (BgL_arg3553z00_1462), BgL_localsz00_1456);
											}
											{
												obj_t BgL_localsz00_2137;

												obj_t BgL_typesz00_2136;

												BgL_typesz00_2136 = BgL_arg3551z00_1460;
												BgL_localsz00_2137 = BgL_arg3552z00_1461;
												BgL_localsz00_1456 = BgL_localsz00_2137;
												BgL_typesz00_1455 = BgL_typesz00_2136;
												goto BgL_zc3anonymousza33548ze3z83_1457;
											}
										}
								}
						}
					}
				}
			}
		}
	}



/* make-fun-frame-sfun3279 */
	obj_t BGl_makezd2funzd2framezd2sfun3279zd2zzast_applyz00(obj_t
		BgL_envz00_1668, obj_t BgL_funz00_1669)
	{
		AN_OBJECT;
		{	/* Ast/apply.scm 67 */
			{
				BgL_sfunz00_bglt BgL_funz00_1422;

				BgL_funz00_1422 = (BgL_sfunz00_bglt) (BgL_funz00_1669);
				{	/* Ast/apply.scm 68 */
					long BgL_arityz00_1425;

					{
						BgL_funz00_bglt BgL_auxz00_2139;

						BgL_auxz00_2139 = (BgL_funz00_bglt) (BgL_funz00_1422);
						BgL_arityz00_1425 =
							(((BgL_funz00_bglt) CREF(BgL_auxz00_2139))->BgL_arityz00);
					}
					{	/* Ast/apply.scm 69 */
						obj_t BgL_g3245z00_1426;

						BgL_g3245z00_1426 =
							(((BgL_sfunz00_bglt) CREF(BgL_funz00_1422))->BgL_argsz00);
						{
							obj_t BgL_formalsz00_1429;

							obj_t BgL_localsz00_1430;

							BgL_formalsz00_1429 = BgL_g3245z00_1426;
							BgL_localsz00_1430 = BNIL;
						BgL_zc3anonymousza33533ze3z83_1431:
							if (NULLP(BgL_formalsz00_1429))
								{	/* Ast/apply.scm 72 */
									return bgl_reverse_bang(BgL_localsz00_1430);
								}
							else
								{	/* Ast/apply.scm 74 */
									bool_t BgL_testz00_2146;

									if (NULLP(CDR(BgL_formalsz00_1429)))
										{	/* Ast/apply.scm 74 */
											BgL_testz00_2146 = (BgL_arityz00_1425 < ((long) 0));
										}
									else
										{	/* Ast/apply.scm 74 */
											BgL_testz00_2146 = ((bool_t) 0);
										}
									if (BgL_testz00_2146)
										{	/* Ast/apply.scm 74 */
											return bgl_reverse_bang(BgL_localsz00_1430);
										}
									else
										{	/* Ast/apply.scm 77 */
											obj_t BgL_arg3536z00_1434;

											obj_t BgL_arg3537z00_1435;

											BgL_arg3536z00_1434 = CDR(BgL_formalsz00_1429);
											{	/* Ast/apply.scm 78 */
												BgL_localz00_bglt BgL_arg3538z00_1436;

												{	/* Ast/apply.scm 78 */
													obj_t BgL_arg3539z00_1437;

													obj_t BgL_arg3540z00_1438;

													BgL_arg3539z00_1437 =
														BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
														(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
																	(long) 13))));
													{	/* Ast/apply.scm 79 */
														bool_t BgL_testz00_2156;

														{	/* Ast/apply.scm 79 */
															obj_t BgL_arg3544z00_1442;

															BgL_arg3544z00_1442 = CAR(BgL_formalsz00_1429);
															BgL_testz00_2156 =
																BGl_iszd2azf3z21zz__objectz00
																(BgL_arg3544z00_1442,
																BGl_typez00zztype_typez00);
														}
														if (BgL_testz00_2156)
															{	/* Ast/apply.scm 79 */
																BgL_arg3540z00_1438 = CAR(BgL_formalsz00_1429);
															}
														else
															{	/* Ast/apply.scm 81 */
																BgL_variablez00_bglt BgL_obj1608z00_1639;

																{	/* Ast/apply.scm 81 */
																	obj_t BgL_pairz00_1638;

																	BgL_pairz00_1638 = BgL_formalsz00_1429;
																	BgL_obj1608z00_1639 =
																		(BgL_variablez00_bglt) (CAR
																		(BgL_pairz00_1638));
																}
																BgL_arg3540z00_1438 =
																	(obj_t) (
																	(((BgL_variablez00_bglt)
																			CREF(BgL_obj1608z00_1639))->BgL_typez00));
															}
													}
													BgL_arg3538z00_1436 =
														BGl_makezd2localzd2svarz00zzast_localz00
														(BgL_arg3539z00_1437,
														(BgL_typez00_bglt) (BgL_arg3540z00_1438));
												}
												BgL_arg3537z00_1435 =
													MAKE_PAIR(
													(obj_t) (BgL_arg3538z00_1436), BgL_localsz00_1430);
											}
											{
												obj_t BgL_localsz00_2169;

												obj_t BgL_formalsz00_2168;

												BgL_formalsz00_2168 = BgL_arg3536z00_1434;
												BgL_localsz00_2169 = BgL_arg3537z00_1435;
												BgL_localsz00_1430 = BgL_localsz00_2169;
												BgL_formalsz00_1429 = BgL_formalsz00_2168;
												goto BgL_zc3anonymousza33533ze3z83_1431;
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
	obj_t BGl_importedzd2moduleszd2initz00zzast_applyz00()
	{
		AN_OBJECT;
		{	/* Ast/apply.scm 14 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3578z00zzast_applyz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3578z00zzast_applyz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3578z00zzast_applyz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3578z00zzast_applyz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3578z00zzast_applyz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string3578z00zzast_applyz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3578z00zzast_applyz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3578z00zzast_applyz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string3578z00zzast_applyz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string3578z00zzast_applyz00));
			BGl_modulezd2initializa7ationz75zzast_appz00(((long) 271227279),
				BSTRING_TO_STRING(BGl_string3578z00zzast_applyz00));
			return
				BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string3578z00zzast_applyz00));
		}
	}

#ifdef __cplusplus
}
#endif
