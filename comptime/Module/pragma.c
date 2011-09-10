/*===========================================================================*/
/*   (Module/pragma.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/pragma.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_ccompz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_producerz00;
		obj_t BgL_consumerz00;
		obj_t BgL_finaliza7erza7;
	}               *BgL_ccompz00_bglt;

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

	typedef struct BgL_feffectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_readz00;
		obj_t BgL_writez00;
	}                 *BgL_feffectz00_bglt;


	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static obj_t
		BGl_setzd2pragmazd2propertyz12z12zzmodule_pragmaz00(BgL_globalz00_bglt,
		obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzmodule_pragmaz00();
	static obj_t BGl_pragmazd2parserzd2zzmodule_pragmaz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2pragmazd2compilerz00zzmodule_pragmaz00();
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzmodule_pragmaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_feffectz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_evalz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzmodule_pragmaz00();
	BGL_EXPORTED_DECL obj_t BGl_pragmazd2finaliza7erz75zzmodule_pragmaz00();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static bool_t
		BGl_setzd2pragmazd2propertiesz12z12zzmodule_pragmaz00(BgL_globalz00_bglt,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33283ze3z83zzmodule_pragmaz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza33285ze3z83zzmodule_pragmaz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	extern BgL_ccompz00_bglt BGl_makezd2ccompzd2zzmodule_modulez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzmodule_pragmaz00();
	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_pragmaz00 = BUNSPEC;
	static obj_t BGl__pragmazd2finaliza7erz75zzmodule_pragmaz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzmodule_pragmaz00();
	extern obj_t BGl_funz00zzast_varz00;
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_pragmaz00();
	extern obj_t BGl_removezd2varzd2fromz12z12zzast_removez00(obj_t,
		BgL_variablez00_bglt);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2pragmazd2compilerz00zzmodule_pragmaz00(obj_t);
	static obj_t BGl_za2pragmazd2listza2zd2zzmodule_pragmaz00 = BUNSPEC;
	extern BgL_typez00_bglt BGl_usezd2typez12zc0zztype_envz00(obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_za2allzd2exportzd2mutablezf3za2zf3zzmodule_evalz00;
	extern obj_t BGl_cfunz00zzast_varz00;
	extern BgL_feffectz00_bglt BGl_parsezd2effectzd2zzeffect_feffectz00(obj_t);
	static obj_t BGl_pragmazd2producerzd2zzmodule_pragmaz00(obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_pragmaz00();
	static obj_t __cnst[13];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2pragmazd2compilerzd2envzd2zzmodule_pragmaz00,
		BgL_bgl__makeza7d2pragmaza7d3455z00,
		BGl__makezd2pragmazd2compilerz00zzmodule_pragmaz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pragmazd2finaliza7erzd2envza7zzmodule_pragmaz00,
		BgL_bgl__pragmaza7d2finali3456za7,
		BGl__pragmazd2finaliza7erz75zzmodule_pragmaz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3434z00zzmodule_pragmaz00,
		BgL_bgl_za7c3anonymousza7a333457z00,
		BGl_zc3anonymousza33283ze3z83zzmodule_pragmaz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3435z00zzmodule_pragmaz00,
		BgL_bgl_string3435za700za7za7m3458za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string3436z00zzmodule_pragmaz00,
		BgL_bgl_string3436za700za7za7m3459za7, "Illegal `pragma' clause", 23);
	      DEFINE_STRING(BGl_string3437z00zzmodule_pragmaz00,
		BgL_bgl_string3437za700za7za7m3460za7,
		"Can't find global variable for pragma -- ", 41);
	      DEFINE_STRING(BGl_string3438z00zzmodule_pragmaz00,
		BgL_bgl_string3438za700za7za7m3461za7, "pragma-finalizer", 16);
	      DEFINE_STRING(BGl_string3440z00zzmodule_pragmaz00,
		BgL_bgl_string3440za700za7za7m3462za7, "pragma(", 7);
	      DEFINE_STRING(BGl_string3439z00zzmodule_pragmaz00,
		BgL_bgl_string3439za700za7za7m3463za7, "Illegal `pragma' finalizer form",
		31);
	      DEFINE_STRING(BGl_string3441z00zzmodule_pragmaz00,
		BgL_bgl_string3441za700za7za7m3464za7, ")", 1);
	      DEFINE_STRING(BGl_string3442z00zzmodule_pragmaz00,
		BgL_bgl_string3442za700za7za7m3465za7,
		"property is not concerning a function", 37);
	      DEFINE_STRING(BGl_string3443z00zzmodule_pragmaz00,
		BgL_bgl_string3443za700za7za7m3466za7, "side-effect-free", 16);
	      DEFINE_STRING(BGl_string3444z00zzmodule_pragmaz00,
		BgL_bgl_string3444za700za7za7m3467za7, "no-cfa-top", 10);
	      DEFINE_STRING(BGl_string3445z00zzmodule_pragmaz00,
		BgL_bgl_string3445za700za7za7m3468za7, "allocator", 9);
	      DEFINE_STRING(BGl_string3446z00zzmodule_pragmaz00,
		BgL_bgl_string3446za700za7za7m3469za7, "no-trace", 8);
	      DEFINE_STRING(BGl_string3447z00zzmodule_pragmaz00,
		BgL_bgl_string3447za700za7za7m3470za7, "Illegal `pragma' form", 21);
	      DEFINE_STRING(BGl_string3448z00zzmodule_pragmaz00,
		BgL_bgl_string3448za700za7za7m3471za7, "predicate-of", 12);
	      DEFINE_STRING(BGl_string3450z00zzmodule_pragmaz00,
		BgL_bgl_string3450za700za7za7m3472za7, "effect", 6);
	      DEFINE_STRING(BGl_string3449z00zzmodule_pragmaz00,
		BgL_bgl_string3449za700za7za7m3473za7, "Illegal `predicate-of' pragma", 29);
	      DEFINE_STRING(BGl_string3451z00zzmodule_pragmaz00,
		BgL_bgl_string3451za700za7za7m3474za7, "module_pragma", 13);
	      DEFINE_STRING(BGl_string3452z00zzmodule_pragmaz00,
		BgL_bgl_string3452za700za7za7m3475za7,
		"effect coerce predicate-of args-safe nesting no-trace allocator no-cfa-top side-effect-free void @ foreign pragma ",
		114);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmodule_pragmaz00(long
		BgL_checksumz00_1447, char *BgL_fromz00_1448)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_pragmaz00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_pragmaz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzmodule_pragmaz00();
					BGl_cnstzd2initzd2zzmodule_pragmaz00();
					BGl_importedzd2moduleszd2initz00zzmodule_pragmaz00();
					BGl_toplevelzd2initzd2zzmodule_pragmaz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_pragmaz00()
	{
		AN_OBJECT;
		{	/* Module/pragma.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"module_pragma");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "module_pragma");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_pragma");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"module_pragma");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_pragmaz00()
	{
		AN_OBJECT;
		{	/* Module/pragma.scm 15 */
			{	/* Module/pragma.scm 15 */
				obj_t BgL_cportz00_1439;

				BgL_cportz00_1439 =
					bgl_open_input_string(BGl_string3452z00zzmodule_pragmaz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1440;

					BgL_iz00_1440 = ((long) 12);
				BgL_loopz00_1441:
					if ((BgL_iz00_1440 == ((long) -1)))
						{	/* Module/pragma.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/pragma.scm 15 */
							{	/* Module/pragma.scm 15 */
								obj_t BgL_arg3454z00_1443;

								{	/* Module/pragma.scm 15 */

									{	/* Module/pragma.scm 15 */
										obj_t BgL_locationz00_1445;

										BgL_locationz00_1445 = BBOOL(((bool_t) 0));
										{	/* Module/pragma.scm 15 */

											BgL_arg3454z00_1443 =
												BGl_readz00zz__readerz00(BgL_cportz00_1439,
												BgL_locationz00_1445);
										}
									}
								}
								{	/* Module/pragma.scm 15 */
									int BgL_auxz00_1466;

									BgL_auxz00_1466 = (int) (BgL_iz00_1440);
									CNST_TABLE_SET(BgL_auxz00_1466, BgL_arg3454z00_1443);
							}}
							{	/* Module/pragma.scm 15 */
								int BgL_auxz00_1446;

								BgL_auxz00_1446 = (int) ((BgL_iz00_1440 - ((long) 1)));
								{
									long BgL_iz00_1471;

									BgL_iz00_1471 = (long) (BgL_auxz00_1446);
									BgL_iz00_1440 = BgL_iz00_1471;
									goto BgL_loopz00_1441;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmodule_pragmaz00()
	{
		AN_OBJECT;
		{	/* Module/pragma.scm 15 */
			return (BGl_za2pragmazd2listza2zd2zzmodule_pragmaz00 = BNIL, BUNSPEC);
		}
	}



/* make-pragma-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2pragmazd2compilerz00zzmodule_pragmaz00()
	{
		AN_OBJECT;
		{	/* Module/pragma.scm 35 */
			{	/* Module/pragma.scm 36 */
				obj_t BgL_arg3280z00_793;

				obj_t BgL_arg3281z00_794;

				BgL_arg3280z00_793 = CNST_TABLE_REF(((long) 0));
				BgL_arg3281z00_794 =
					BGl_pragmazd2producerzd2zzmodule_pragmaz00
					(BGl_za2moduleza2z00zzmodule_modulez00);
				return (obj_t) (BGl_makezd2ccompzd2zzmodule_modulez00
					(BgL_arg3280z00_793, BgL_arg3281z00_794,
						BGl_proc3434z00zzmodule_pragmaz00,
						BGl_pragmazd2finaliza7erzd2envza7zzmodule_pragmaz00));
			}
		}
	}



/* _make-pragma-compiler */
	obj_t BGl__makezd2pragmazd2compilerz00zzmodule_pragmaz00(obj_t
		BgL_envz00_1430)
	{
		AN_OBJECT;
		{	/* Module/pragma.scm 35 */
			return BGl_makezd2pragmazd2compilerz00zzmodule_pragmaz00();
		}
	}



/* <anonymous:3283> */
	obj_t BGl_zc3anonymousza33283ze3z83zzmodule_pragmaz00(obj_t BgL_envz00_1431,
		obj_t BgL_mz00_1432, obj_t BgL_cz00_1433)
	{
		AN_OBJECT;
		{	/* Module/pragma.scm 38 */
			{
				obj_t BgL_mz00_796;

				obj_t BgL_cz00_797;

				BgL_mz00_796 = BgL_mz00_1432;
				BgL_cz00_797 = BgL_cz00_1433;
				{	/* Module/pragma.scm 39 */
					obj_t BgL_fun3284z00_1332;

					BgL_fun3284z00_1332 =
						BGl_pragmazd2producerzd2zzmodule_pragmaz00(BgL_mz00_796);
					return
						PROCEDURE_ENTRY(BgL_fun3284z00_1332) (BgL_fun3284z00_1332,
						BgL_cz00_797, BEOA);
				}
			}
		}
	}



/* pragma-producer */
	obj_t BGl_pragmazd2producerzd2zzmodule_pragmaz00(obj_t BgL_modulez00_1)
	{
		AN_OBJECT;
		{	/* Module/pragma.scm 45 */
			{	/* Module/pragma.scm 46 */
				obj_t BgL_zc3anonymousza33285ze3z83_1435;

				BgL_zc3anonymousza33285ze3z83_1435 =
					make_fx_procedure(BGl_zc3anonymousza33285ze3z83zzmodule_pragmaz00,
					(int) (((long) 1)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3anonymousza33285ze3z83_1435,
					(int) (((long) 0)), BgL_modulez00_1);
				return BgL_zc3anonymousza33285ze3z83_1435;
			}
		}
	}



/* <anonymous:3285> */
	obj_t BGl_zc3anonymousza33285ze3z83zzmodule_pragmaz00(obj_t BgL_envz00_1436,
		obj_t BgL_clausez00_1438)
	{
		AN_OBJECT;
		{	/* Module/pragma.scm 46 */
			{	/* Module/pragma.scm 46 */
				obj_t BgL_modulez00_1437;

				BgL_modulez00_1437 = PROCEDURE_REF(BgL_envz00_1436, (int) (((long) 0)));
				{
					obj_t BgL_clausez00_801;

					BgL_clausez00_801 = BgL_clausez00_1438;
					{
						obj_t BgL_protosz00_803;

						if (PAIRP(BgL_clausez00_801))
							{	/* Module/pragma.scm 46 */
								BgL_protosz00_803 = CDR(BgL_clausez00_801);
								{
									obj_t BgL_l3274z00_810;

									BgL_l3274z00_810 = BgL_protosz00_803;
								BgL_zc3anonymousza33288ze3z83_811:
									if (PAIRP(BgL_l3274z00_810))
										{	/* Module/pragma.scm 49 */
											BGl_pragmazd2parserzd2zzmodule_pragmaz00(CAR
												(BgL_l3274z00_810), BgL_modulez00_1437,
												BgL_clausez00_801);
											{
												obj_t BgL_l3274z00_1494;

												BgL_l3274z00_1494 = CDR(BgL_l3274z00_810);
												BgL_l3274z00_810 = BgL_l3274z00_1494;
												goto BgL_zc3anonymousza33288ze3z83_811;
											}
										}
									else
										{	/* Module/pragma.scm 49 */
											((bool_t) 1);
										}
								}
								return BNIL;
							}
						else
							{	/* Module/pragma.scm 46 */
								{	/* Module/pragma.scm 53 */
									obj_t BgL_list3291z00_816;

									BgL_list3291z00_816 = MAKE_PAIR(BNIL, BNIL);
									return
										BGl_userzd2errorzd2zztools_errorz00
										(BGl_string3435z00zzmodule_pragmaz00,
										BGl_string3436z00zzmodule_pragmaz00, BgL_clausez00_801,
										BgL_list3291z00_816);
								}
							}
					}
				}
			}
		}
	}



/* pragma-parser */
	obj_t BGl_pragmazd2parserzd2zzmodule_pragmaz00(obj_t BgL_protoz00_2,
		obj_t BgL_modulez00_3, obj_t BgL_clausez00_4)
	{
		AN_OBJECT;
		{	/* Module/pragma.scm 61 */
			{
				obj_t BgL_idz00_817;

				obj_t BgL_propz00_818;

				if (PAIRP(BgL_protoz00_2))
					{	/* Module/pragma.scm 62 */
						obj_t BgL_carzd21404zd2_823;

						BgL_carzd21404zd2_823 = CAR(BgL_protoz00_2);
						if (SYMBOLP(BgL_carzd21404zd2_823))
							{	/* Module/pragma.scm 62 */
								BgL_idz00_817 = BgL_carzd21404zd2_823;
								BgL_propz00_818 = CDR(BgL_protoz00_2);
								{	/* Module/pragma.scm 64 */
									obj_t BgL_arg3295z00_826;

									{	/* Module/pragma.scm 64 */
										obj_t BgL_list3296z00_827;

										{	/* Module/pragma.scm 64 */
											obj_t BgL_arg3297z00_828;

											{	/* Module/pragma.scm 64 */
												obj_t BgL_arg3298z00_829;

												{	/* Module/pragma.scm 64 */
													obj_t BgL_arg3299z00_830;

													BgL_arg3299z00_830 = MAKE_PAIR(BgL_clausez00_4, BNIL);
													BgL_arg3298z00_829 =
														MAKE_PAIR(BgL_propz00_818, BgL_arg3299z00_830);
												}
												BgL_arg3297z00_828 =
													MAKE_PAIR(BgL_modulez00_3, BgL_arg3298z00_829);
											}
											BgL_list3296z00_827 =
												MAKE_PAIR(BgL_idz00_817, BgL_arg3297z00_828);
										}
										BgL_arg3295z00_826 = BgL_list3296z00_827;
									}
									return (BGl_za2pragmazd2listza2zd2zzmodule_pragmaz00 =
										MAKE_PAIR(BgL_arg3295z00_826,
											BGl_za2pragmazd2listza2zd2zzmodule_pragmaz00), BUNSPEC);
								}
							}
						else
							{	/* Module/pragma.scm 62 */
							BgL_tagzd21398zd2_820:
								{	/* Module/pragma.scm 66 */
									obj_t BgL_list3300z00_831;

									BgL_list3300z00_831 = MAKE_PAIR(BNIL, BNIL);
									return
										BGl_userzd2errorzd2zztools_errorz00
										(BGl_string3435z00zzmodule_pragmaz00,
										BGl_string3436z00zzmodule_pragmaz00, BgL_clausez00_4,
										BgL_list3300z00_831);
								}
							}
					}
				else
					{	/* Module/pragma.scm 62 */
						goto BgL_tagzd21398zd2_820;
					}
			}
		}
	}



/* pragma-finalizer */
	BGL_EXPORTED_DEF obj_t BGl_pragmazd2finaliza7erz75zzmodule_pragmaz00()
	{
		AN_OBJECT;
		{	/* Module/pragma.scm 76 */
			{
				obj_t BgL_l3276z00_833;

				BgL_l3276z00_833 = BGl_za2pragmazd2listza2zd2zzmodule_pragmaz00;
			BgL_zc3anonymousza33301ze3z83_834:
				if (PAIRP(BgL_l3276z00_833))
					{	/* Module/pragma.scm 77 */
						{	/* Module/pragma.scm 78 */
							obj_t BgL_pragmaz00_836;

							BgL_pragmaz00_836 = CAR(BgL_l3276z00_833);
							{
								obj_t BgL_idz00_837;

								obj_t BgL_modulez00_838;

								obj_t BgL_propza2za2_839;

								obj_t BgL_clausez00_840;

								if (PAIRP(BgL_pragmaz00_836))
									{	/* Module/pragma.scm 78 */
										obj_t BgL_cdrzd21421zd2_845;

										BgL_cdrzd21421zd2_845 = CDR(BgL_pragmaz00_836);
										if (PAIRP(BgL_cdrzd21421zd2_845))
											{	/* Module/pragma.scm 78 */
												obj_t BgL_cdrzd21427zd2_847;

												BgL_cdrzd21427zd2_847 = CDR(BgL_cdrzd21421zd2_845);
												if (PAIRP(BgL_cdrzd21427zd2_847))
													{	/* Module/pragma.scm 78 */
														obj_t BgL_cdrzd21432zd2_849;

														BgL_cdrzd21432zd2_849 = CDR(BgL_cdrzd21427zd2_847);
														if (PAIRP(BgL_cdrzd21432zd2_849))
															{	/* Module/pragma.scm 78 */
																if (NULLP(CDR(BgL_cdrzd21432zd2_849)))
																	{	/* Module/pragma.scm 78 */
																		BgL_idz00_837 = CAR(BgL_pragmaz00_836);
																		BgL_modulez00_838 =
																			CAR(BgL_cdrzd21421zd2_845);
																		BgL_propza2za2_839 =
																			CAR(BgL_cdrzd21427zd2_847);
																		BgL_clausez00_840 =
																			CAR(BgL_cdrzd21432zd2_849);
																		{	/* Module/pragma.scm 80 */
																			obj_t BgL_globalz00_857;

																			{	/* Module/pragma.scm 80 */
																				obj_t BgL_globalz00_868;

																				BgL_globalz00_868 =
																					BGl_findzd2globalzf2modulez20zzast_envz00
																					(BgL_idz00_837, BgL_modulez00_838);
																				if (BGl_iszd2azf3z21zz__objectz00
																					(BgL_globalz00_868,
																						BGl_globalz00zzast_varz00))
																					{	/* Module/pragma.scm 82 */
																						BgL_globalz00_857 =
																							BgL_globalz00_868;
																					}
																				else
																					{	/* Module/pragma.scm 82 */
																						BgL_globalz00_857 =
																							BGl_findzd2globalzf2modulez20zzast_envz00
																							(BgL_idz00_837,
																							CNST_TABLE_REF(((long) 1)));
																			}}
																			if (BGl_iszd2azf3z21zz__objectz00
																				(BgL_globalz00_857,
																					BGl_globalz00zzast_varz00))
																				{	/* Module/pragma.scm 85 */
																					BBOOL
																						(BGl_setzd2pragmazd2propertiesz12z12zzmodule_pragmaz00
																						((BgL_globalz00_bglt)
																							(BgL_globalz00_857),
																							BgL_propza2za2_839,
																							BgL_clausez00_840));
																				}
																			else
																				{	/* Module/pragma.scm 86 */
																					obj_t BgL_arg3314z00_859;

																					{	/* Module/pragma.scm 86 */
																						obj_t BgL_arg3319z00_864;

																						obj_t BgL_arg3320z00_865;

																						BgL_arg3319z00_864 =
																							CNST_TABLE_REF(((long) 2));
																						{	/* Module/pragma.scm 86 */
																							obj_t BgL_list3321z00_866;

																							{	/* Module/pragma.scm 86 */
																								obj_t BgL_arg3324z00_867;

																								BgL_arg3324z00_867 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list3321z00_866 =
																									MAKE_PAIR(BgL_modulez00_838,
																									BgL_arg3324z00_867);
																							}
																							BgL_arg3320z00_865 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_idz00_837,
																								BgL_list3321z00_866);
																						}
																						BgL_arg3314z00_859 =
																							MAKE_PAIR(BgL_arg3319z00_864,
																							BgL_arg3320z00_865);
																					}
																					{	/* Module/pragma.scm 86 */
																						obj_t BgL_list3316z00_861;

																						{	/* Module/pragma.scm 86 */
																							obj_t BgL_arg3317z00_862;

																							{	/* Module/pragma.scm 86 */
																								obj_t BgL_arg3318z00_863;

																								BgL_arg3318z00_863 =
																									MAKE_PAIR(BgL_pragmaz00_836,
																									BNIL);
																								BgL_arg3317z00_862 =
																									MAKE_PAIR
																									(BGl_string3437z00zzmodule_pragmaz00,
																									BgL_arg3318z00_863);
																							}
																							BgL_list3316z00_861 =
																								MAKE_PAIR(BgL_arg3314z00_859,
																								BgL_arg3317z00_862);
																						}
																						BGl_warningz00zz__errorz00
																							(BgL_list3316z00_861);
																	}}}}
																else
																	{	/* Module/pragma.scm 78 */
																	BgL_tagzd21410zd2_842:
																		BGl_internalzd2errorzd2zztools_errorz00
																			(BGl_string3438z00zzmodule_pragmaz00,
																			BGl_string3439z00zzmodule_pragmaz00,
																			BgL_pragmaz00_836);
																	}
															}
														else
															{	/* Module/pragma.scm 78 */
																goto BgL_tagzd21410zd2_842;
															}
													}
												else
													{	/* Module/pragma.scm 78 */
														goto BgL_tagzd21410zd2_842;
													}
											}
										else
											{	/* Module/pragma.scm 78 */
												goto BgL_tagzd21410zd2_842;
											}
									}
								else
									{	/* Module/pragma.scm 78 */
										goto BgL_tagzd21410zd2_842;
									}
							}
						}
						{
							obj_t BgL_l3276z00_1553;

							BgL_l3276z00_1553 = CDR(BgL_l3276z00_833);
							BgL_l3276z00_833 = BgL_l3276z00_1553;
							goto BgL_zc3anonymousza33301ze3z83_834;
						}
					}
				else
					{	/* Module/pragma.scm 77 */
						((bool_t) 1);
					}
			}
			BGl_za2pragmazd2listza2zd2zzmodule_pragmaz00 = BNIL;
			return CNST_TABLE_REF(((long) 3));
		}
	}



/* _pragma-finalizer */
	obj_t BGl__pragmazd2finaliza7erz75zzmodule_pragmaz00(obj_t BgL_envz00_1434)
	{
		AN_OBJECT;
		{	/* Module/pragma.scm 76 */
			return BGl_pragmazd2finaliza7erz75zzmodule_pragmaz00();
		}
	}



/* set-pragma-properties! */
	bool_t
		BGl_setzd2pragmazd2propertiesz12z12zzmodule_pragmaz00(BgL_globalz00_bglt
		BgL_globalz00_5, obj_t BgL_propza2za2_6, obj_t BgL_clausez00_7)
	{
		AN_OBJECT;
		{	/* Module/pragma.scm 101 */
			{
				obj_t BgL_l3278z00_873;

				BgL_l3278z00_873 = BgL_propza2za2_6;
			BgL_zc3anonymousza33327ze3z83_874:
				if (PAIRP(BgL_l3278z00_873))
					{	/* Module/pragma.scm 102 */
						BGl_setzd2pragmazd2propertyz12z12zzmodule_pragmaz00(BgL_globalz00_5,
							CAR(BgL_l3278z00_873), BgL_clausez00_7);
						{
							obj_t BgL_l3278z00_1561;

							BgL_l3278z00_1561 = CDR(BgL_l3278z00_873);
							BgL_l3278z00_873 = BgL_l3278z00_1561;
							goto BgL_zc3anonymousza33327ze3z83_874;
						}
					}
				else
					{	/* Module/pragma.scm 102 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* set-pragma-property! */
	obj_t BGl_setzd2pragmazd2propertyz12z12zzmodule_pragmaz00(BgL_globalz00_bglt
		BgL_globalz00_8, obj_t BgL_propz00_9, obj_t BgL_clausez00_10)
	{
		AN_OBJECT;
		{	/* Module/pragma.scm 108 */
			{
				obj_t BgL_pz00_943;

				BgL_globalz00_bglt BgL_gz00_944;

				{
					obj_t BgL_keyz00_881;

					obj_t BgL_valz00_882;

					if (SYMBOLP(BgL_propz00_9))
						{	/* Module/pragma.scm 115 */
							if ((BgL_propz00_9 == CNST_TABLE_REF(((long) 4))))
								{	/* Module/pragma.scm 120 */
									BgL_valuez00_bglt BgL_valuez00_893;

									{
										BgL_variablez00_bglt BgL_auxz00_1568;

										BgL_auxz00_1568 = (BgL_variablez00_bglt) (BgL_globalz00_8);
										BgL_valuez00_893 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_1568))->
											BgL_valuez00);
									}
									{	/* Module/pragma.scm 121 */
										bool_t BgL_testz00_1571;

										{	/* Module/pragma.scm 121 */
											obj_t BgL_obj1879z00_1373;

											BgL_obj1879z00_1373 = (obj_t) (BgL_valuez00_893);
											BgL_testz00_1571 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj1879z00_1373,
												BGl_funz00zzast_varz00);
										}
										if (BgL_testz00_1571)
											{
												BgL_funz00_bglt BgL_auxz00_1574;

												BgL_auxz00_1574 = (BgL_funz00_bglt) (BgL_valuez00_893);
												return
													((((BgL_funz00_bglt) CREF(BgL_auxz00_1574))->
														BgL_sidezd2effectzf3z21) =
													((obj_t) BFALSE), BUNSPEC);
											}
										else
											{	/* Module/pragma.scm 121 */
												BgL_pz00_943 = BGl_string3443z00zzmodule_pragmaz00;
												BgL_gz00_944 = BgL_globalz00_8;
											BgL_zc3anonymousza33377ze3z83_945:
												if (CBOOL
													(BGl_za2allzd2exportzd2mutablezf3za2zf3zzmodule_evalz00))
													{	/* Module/pragma.scm 110 */
														return BFALSE;
													}
												else
													{	/* Module/pragma.scm 111 */
														obj_t BgL_arg3378z00_946;

														obj_t BgL_arg3380z00_948;

														BgL_arg3378z00_946 =
															string_append_3
															(BGl_string3440z00zzmodule_pragmaz00,
															BgL_pz00_943,
															BGl_string3441z00zzmodule_pragmaz00);
														BgL_arg3380z00_948 =
															BGl_shapez00zztools_shapez00((obj_t)
															(BgL_gz00_944));
														{	/* Module/pragma.scm 111 */
															obj_t BgL_list3382z00_950;

															BgL_list3382z00_950 = MAKE_PAIR(BNIL, BNIL);
															return
																BGl_userzd2errorzd2zztools_errorz00
																(BgL_arg3378z00_946,
																BGl_string3442z00zzmodule_pragmaz00,
																BgL_arg3380z00_948, BgL_list3382z00_950);
														}
													}
											}
									}
								}
							else
								{	/* Module/pragma.scm 117 */
									if ((BgL_propz00_9 == CNST_TABLE_REF(((long) 5))))
										{	/* Module/pragma.scm 126 */
											BgL_valuez00_bglt BgL_valuez00_896;

											{
												BgL_variablez00_bglt BgL_auxz00_1587;

												BgL_auxz00_1587 =
													(BgL_variablez00_bglt) (BgL_globalz00_8);
												BgL_valuez00_896 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_1587))->
													BgL_valuez00);
											}
											{	/* Module/pragma.scm 127 */
												bool_t BgL_testz00_1590;

												{	/* Module/pragma.scm 127 */
													obj_t BgL_obj1879z00_1379;

													BgL_obj1879z00_1379 = (obj_t) (BgL_valuez00_896);
													BgL_testz00_1590 =
														BGl_iszd2azf3z21zz__objectz00(BgL_obj1879z00_1379,
														BGl_funz00zzast_varz00);
												}
												if (BgL_testz00_1590)
													{
														BgL_funz00_bglt BgL_auxz00_1593;

														BgL_auxz00_1593 =
															(BgL_funz00_bglt) (BgL_valuez00_896);
														return
															((((BgL_funz00_bglt) CREF(BgL_auxz00_1593))->
																BgL_topzf3zf3) =
															((bool_t) ((bool_t) 0)), BUNSPEC);
													}
												else
													{
														BgL_globalz00_bglt BgL_gz00_1597;

														obj_t BgL_pz00_1596;

														BgL_pz00_1596 = BGl_string3444z00zzmodule_pragmaz00;
														BgL_gz00_1597 = BgL_globalz00_8;
														BgL_gz00_944 = BgL_gz00_1597;
														BgL_pz00_943 = BgL_pz00_1596;
														goto BgL_zc3anonymousza33377ze3z83_945;
													}
											}
										}
									else
										{	/* Module/pragma.scm 117 */
											if ((BgL_propz00_9 == CNST_TABLE_REF(((long) 6))))
												{	/* Module/pragma.scm 133 */
													BgL_valuez00_bglt BgL_valuez00_899;

													{
														BgL_variablez00_bglt BgL_auxz00_1601;

														BgL_auxz00_1601 =
															(BgL_variablez00_bglt) (BgL_globalz00_8);
														BgL_valuez00_899 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_1601))->
															BgL_valuez00);
													}
													{	/* Module/pragma.scm 134 */
														bool_t BgL_testz00_1604;

														{	/* Module/pragma.scm 134 */
															obj_t BgL_obj1978z00_1385;

															BgL_obj1978z00_1385 = (obj_t) (BgL_valuez00_899);
															BgL_testz00_1604 =
																BGl_iszd2azf3z21zz__objectz00
																(BgL_obj1978z00_1385, BGl_sfunz00zzast_varz00);
														}
														if (BgL_testz00_1604)
															{	/* Module/pragma.scm 137 */
																obj_t BgL_arg3340z00_901;

																{	/* Module/pragma.scm 137 */
																	obj_t BgL_arg3341z00_902;

																	{
																		BgL_sfunz00_bglt BgL_auxz00_1607;

																		BgL_auxz00_1607 =
																			(BgL_sfunz00_bglt) (BgL_valuez00_899);
																		BgL_arg3341z00_902 =
																			(((BgL_sfunz00_bglt)
																				CREF(BgL_auxz00_1607))->
																			BgL_propertyz00);
																	}
																	BgL_arg3340z00_901 =
																		MAKE_PAIR(BgL_propz00_9,
																		BgL_arg3341z00_902);
																}
																{
																	BgL_sfunz00_bglt BgL_auxz00_1611;

																	BgL_auxz00_1611 =
																		(BgL_sfunz00_bglt) (BgL_valuez00_899);
																	return
																		((((BgL_sfunz00_bglt)
																				CREF(BgL_auxz00_1611))->
																			BgL_propertyz00) =
																		((obj_t) BgL_arg3340z00_901), BUNSPEC);
																}
															}
														else
															{
																BgL_globalz00_bglt BgL_gz00_1615;

																obj_t BgL_pz00_1614;

																BgL_pz00_1614 =
																	BGl_string3445z00zzmodule_pragmaz00;
																BgL_gz00_1615 = BgL_globalz00_8;
																BgL_gz00_944 = BgL_gz00_1615;
																BgL_pz00_943 = BgL_pz00_1614;
																goto BgL_zc3anonymousza33377ze3z83_945;
															}
													}
												}
											else
												{	/* Module/pragma.scm 117 */
													if ((BgL_propz00_9 == CNST_TABLE_REF(((long) 7))))
														{	/* Module/pragma.scm 139 */
															BgL_valuez00_bglt BgL_valuez00_904;

															{
																BgL_variablez00_bglt BgL_auxz00_1619;

																BgL_auxz00_1619 =
																	(BgL_variablez00_bglt) (BgL_globalz00_8);
																BgL_valuez00_904 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_1619))->BgL_valuez00);
															}
															{	/* Module/pragma.scm 140 */
																bool_t BgL_testz00_1622;

																{	/* Module/pragma.scm 140 */
																	obj_t BgL_obj1978z00_1392;

																	BgL_obj1978z00_1392 =
																		(obj_t) (BgL_valuez00_904);
																	BgL_testz00_1622 =
																		BGl_iszd2azf3z21zz__objectz00
																		(BgL_obj1978z00_1392,
																		BGl_sfunz00zzast_varz00);
																}
																if (BgL_testz00_1622)
																	{	/* Module/pragma.scm 143 */
																		obj_t BgL_arg3345z00_906;

																		{	/* Module/pragma.scm 143 */
																			obj_t BgL_arg3346z00_907;

																			{
																				BgL_sfunz00_bglt BgL_auxz00_1625;

																				BgL_auxz00_1625 =
																					(BgL_sfunz00_bglt) (BgL_valuez00_904);
																				BgL_arg3346z00_907 =
																					(((BgL_sfunz00_bglt)
																						CREF(BgL_auxz00_1625))->
																					BgL_propertyz00);
																			}
																			BgL_arg3345z00_906 =
																				MAKE_PAIR(BgL_propz00_9,
																				BgL_arg3346z00_907);
																		}
																		{
																			BgL_sfunz00_bglt BgL_auxz00_1629;

																			BgL_auxz00_1629 =
																				(BgL_sfunz00_bglt) (BgL_valuez00_904);
																			return
																				((((BgL_sfunz00_bglt)
																						CREF(BgL_auxz00_1629))->
																					BgL_propertyz00) =
																				((obj_t) BgL_arg3345z00_906), BUNSPEC);
																		}
																	}
																else
																	{
																		BgL_globalz00_bglt BgL_gz00_1633;

																		obj_t BgL_pz00_1632;

																		BgL_pz00_1632 =
																			BGl_string3446z00zzmodule_pragmaz00;
																		BgL_gz00_1633 = BgL_globalz00_8;
																		BgL_gz00_944 = BgL_gz00_1633;
																		BgL_pz00_943 = BgL_pz00_1632;
																		goto BgL_zc3anonymousza33377ze3z83_945;
																	}
															}
														}
													else
														{	/* Module/pragma.scm 117 */
															if ((BgL_propz00_9 == CNST_TABLE_REF(((long) 8))))
																{	/* Module/pragma.scm 145 */
																	BgL_valuez00_bglt BgL_valuez00_909;

																	{
																		BgL_variablez00_bglt BgL_auxz00_1637;

																		BgL_auxz00_1637 =
																			(BgL_variablez00_bglt) (BgL_globalz00_8);
																		BgL_valuez00_909 =
																			(((BgL_variablez00_bglt)
																				CREF(BgL_auxz00_1637))->BgL_valuez00);
																	}
																	{	/* Module/pragma.scm 146 */
																		bool_t BgL_testz00_1640;

																		{	/* Module/pragma.scm 146 */
																			obj_t BgL_obj2042z00_1399;

																			BgL_obj2042z00_1399 =
																				(obj_t) (BgL_valuez00_909);
																			BgL_testz00_1640 =
																				BGl_iszd2azf3z21zz__objectz00
																				(BgL_obj2042z00_1399,
																				BGl_cfunz00zzast_varz00);
																		}
																		if (BgL_testz00_1640)
																			{	/* Module/pragma.scm 148 */
																				obj_t BgL_arg3349z00_911;

																				{	/* Module/pragma.scm 148 */
																					obj_t BgL_arg3350z00_912;

																					obj_t BgL_arg3351z00_913;

																					BgL_arg3350z00_912 =
																						CNST_TABLE_REF(((long) 8));
																					BgL_arg3351z00_913 =
																						(((BgL_globalz00_bglt)
																							CREF(BgL_globalz00_8))->
																						BgL_pragmaz00);
																					BgL_arg3349z00_911 =
																						MAKE_PAIR(BgL_arg3350z00_912,
																						BgL_arg3351z00_913);
																				}
																				return
																					((((BgL_globalz00_bglt)
																							CREF(BgL_globalz00_8))->
																						BgL_pragmaz00) =
																					((obj_t) BgL_arg3349z00_911),
																					BUNSPEC);
																			}
																		else
																			{	/* Module/pragma.scm 146 */
																				return BFALSE;
																			}
																	}
																}
															else
																{	/* Module/pragma.scm 117 */
																	if (
																		(BgL_propz00_9 ==
																			CNST_TABLE_REF(((long) 9))))
																		{	/* Module/pragma.scm 151 */
																			BgL_valuez00_bglt BgL_valuez00_915;

																			{
																				BgL_variablez00_bglt BgL_auxz00_1650;

																				BgL_auxz00_1650 =
																					(BgL_variablez00_bglt)
																					(BgL_globalz00_8);
																				BgL_valuez00_915 =
																					(((BgL_variablez00_bglt)
																						CREF(BgL_auxz00_1650))->
																					BgL_valuez00);
																			}
																			{	/* Module/pragma.scm 152 */
																				bool_t BgL_testz00_1653;

																				{	/* Module/pragma.scm 152 */
																					obj_t BgL_obj2042z00_1406;

																					BgL_obj2042z00_1406 =
																						(obj_t) (BgL_valuez00_915);
																					BgL_testz00_1653 =
																						BGl_iszd2azf3z21zz__objectz00
																						(BgL_obj2042z00_1406,
																						BGl_cfunz00zzast_varz00);
																				}
																				if (BgL_testz00_1653)
																					{	/* Module/pragma.scm 154 */
																						obj_t BgL_arg3354z00_917;

																						{	/* Module/pragma.scm 154 */
																							obj_t BgL_arg3355z00_918;

																							obj_t BgL_arg3356z00_919;

																							BgL_arg3355z00_918 =
																								CNST_TABLE_REF(((long) 9));
																							BgL_arg3356z00_919 =
																								(((BgL_globalz00_bglt)
																									CREF(BgL_globalz00_8))->
																								BgL_pragmaz00);
																							BgL_arg3354z00_917 =
																								MAKE_PAIR(BgL_arg3355z00_918,
																								BgL_arg3356z00_919);
																						}
																						return
																							((((BgL_globalz00_bglt)
																									CREF(BgL_globalz00_8))->
																								BgL_pragmaz00) =
																							((obj_t) BgL_arg3354z00_917),
																							BUNSPEC);
																					}
																				else
																					{	/* Module/pragma.scm 152 */
																						return BFALSE;
																					}
																			}
																		}
																	else
																		{	/* Module/pragma.scm 157 */
																			obj_t BgL_list3357z00_920;

																			BgL_list3357z00_920 =
																				MAKE_PAIR(BNIL, BNIL);
																			return
																				BGl_userzd2errorzd2zztools_errorz00
																				(BGl_string3435z00zzmodule_pragmaz00,
																				BGl_string3447z00zzmodule_pragmaz00,
																				BgL_clausez00_10, BgL_list3357z00_920);
																		}
																}
														}
												}
										}
								}
						}
					else
						{	/* Module/pragma.scm 115 */
							if (PAIRP(BgL_propz00_9))
								{	/* Module/pragma.scm 115 */
									obj_t BgL_carzd21448zd2_888;

									BgL_carzd21448zd2_888 = CAR(BgL_propz00_9);
									if (SYMBOLP(BgL_carzd21448zd2_888))
										{	/* Module/pragma.scm 115 */
											BgL_keyz00_881 = BgL_carzd21448zd2_888;
											BgL_valz00_882 = CDR(BgL_propz00_9);
											if ((BgL_keyz00_881 == CNST_TABLE_REF(((long) 10))))
												{	/* Module/pragma.scm 162 */
													bool_t BgL_testz00_1670;

													if (PAIRP(BgL_valz00_882))
														{	/* Module/pragma.scm 162 */
															obj_t BgL_auxz00_1673;

															BgL_auxz00_1673 = CAR(BgL_valz00_882);
															BgL_testz00_1670 = SYMBOLP(BgL_auxz00_1673);
														}
													else
														{	/* Module/pragma.scm 162 */
															BgL_testz00_1670 = ((bool_t) 0);
														}
													if (BgL_testz00_1670)
														{	/* Module/pragma.scm 164 */
															BgL_typez00_bglt BgL_typez00_924;

															BgL_valuez00_bglt BgL_valuez00_925;

															BgL_typez00_924 =
																BGl_usezd2typez12zc0zztype_envz00(CAR
																(BgL_valz00_882),
																BGl_findzd2locationzd2zztools_locationz00
																(BgL_propz00_9));
															{
																BgL_variablez00_bglt BgL_auxz00_1679;

																BgL_auxz00_1679 =
																	(BgL_variablez00_bglt) (BgL_globalz00_8);
																BgL_valuez00_925 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_1679))->BgL_valuez00);
															}
															{	/* Module/pragma.scm 166 */
																bool_t BgL_testz00_1682;

																{	/* Module/pragma.scm 166 */
																	obj_t BgL_obj1879z00_1417;

																	BgL_obj1879z00_1417 =
																		(obj_t) (BgL_valuez00_925);
																	BgL_testz00_1682 =
																		BGl_iszd2azf3z21zz__objectz00
																		(BgL_obj1879z00_1417,
																		BGl_funz00zzast_varz00);
																}
																if (BgL_testz00_1682)
																	{	/* Module/pragma.scm 166 */
																		{
																			obj_t BgL_auxz00_1687;

																			BgL_funz00_bglt BgL_auxz00_1685;

																			BgL_auxz00_1687 =
																				(obj_t) (BgL_typez00_924);
																			BgL_auxz00_1685 =
																				(BgL_funz00_bglt) (BgL_valuez00_925);
																			((((BgL_funz00_bglt)
																						CREF(BgL_auxz00_1685))->
																					BgL_predicatezd2ofzd2) =
																				((obj_t) BgL_auxz00_1687), BUNSPEC);
																		}
																		BGl_removezd2varzd2fromz12z12zzast_removez00
																			(CNST_TABLE_REF(((long) 11)),
																			(BgL_variablez00_bglt) (BgL_globalz00_8));
																		{
																			BgL_funz00_bglt BgL_auxz00_1693;

																			BgL_auxz00_1693 =
																				(BgL_funz00_bglt) (BgL_valuez00_925);
																			return
																				((((BgL_funz00_bglt)
																						CREF(BgL_auxz00_1693))->
																					BgL_sidezd2effectzf3z21) =
																				((obj_t) BFALSE), BUNSPEC);
																		}
																	}
																else
																	{
																		BgL_globalz00_bglt BgL_gz00_1697;

																		obj_t BgL_pz00_1696;

																		BgL_pz00_1696 =
																			BGl_string3448z00zzmodule_pragmaz00;
																		BgL_gz00_1697 = BgL_globalz00_8;
																		BgL_gz00_944 = BgL_gz00_1697;
																		BgL_pz00_943 = BgL_pz00_1696;
																		goto BgL_zc3anonymousza33377ze3z83_945;
																	}
															}
														}
													else
														{	/* Module/pragma.scm 162 */
															return
																BGl_userzd2errorzd2zztools_errorz00
																(BGl_string3435z00zzmodule_pragmaz00,
																BGl_string3449z00zzmodule_pragmaz00,
																BgL_propz00_9, BNIL);
														}
												}
											else
												{	/* Module/pragma.scm 159 */
													if ((BgL_keyz00_881 == CNST_TABLE_REF(((long) 12))))
														{	/* Module/pragma.scm 177 */
															BgL_valuez00_bglt BgL_valuez00_933;

															{
																BgL_variablez00_bglt BgL_auxz00_1702;

																BgL_auxz00_1702 =
																	(BgL_variablez00_bglt) (BgL_globalz00_8);
																BgL_valuez00_933 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_1702))->BgL_valuez00);
															}
															{	/* Module/pragma.scm 178 */
																bool_t BgL_testz00_1705;

																{	/* Module/pragma.scm 178 */
																	obj_t BgL_obj1879z00_1425;

																	BgL_obj1879z00_1425 =
																		(obj_t) (BgL_valuez00_933);
																	BgL_testz00_1705 =
																		BGl_iszd2azf3z21zz__objectz00
																		(BgL_obj1879z00_1425,
																		BGl_funz00zzast_varz00);
																}
																if (BgL_testz00_1705)
																	{	/* Module/pragma.scm 180 */
																		BgL_feffectz00_bglt BgL_arg3368z00_935;

																		BgL_arg3368z00_935 =
																			BGl_parsezd2effectzd2zzeffect_feffectz00
																			(BgL_propz00_9);
																		{
																			obj_t BgL_auxz00_1711;

																			BgL_funz00_bglt BgL_auxz00_1709;

																			BgL_auxz00_1711 =
																				(obj_t) (BgL_arg3368z00_935);
																			BgL_auxz00_1709 =
																				(BgL_funz00_bglt) (BgL_valuez00_933);
																			return
																				((((BgL_funz00_bglt)
																						CREF(BgL_auxz00_1709))->
																					BgL_effectz00) =
																				((obj_t) BgL_auxz00_1711), BUNSPEC);
																		}
																	}
																else
																	{
																		BgL_globalz00_bglt BgL_gz00_1715;

																		obj_t BgL_pz00_1714;

																		BgL_pz00_1714 =
																			BGl_string3450z00zzmodule_pragmaz00;
																		BgL_gz00_1715 = BgL_globalz00_8;
																		BgL_gz00_944 = BgL_gz00_1715;
																		BgL_pz00_943 = BgL_pz00_1714;
																		goto BgL_zc3anonymousza33377ze3z83_945;
																	}
															}
														}
													else
														{	/* Module/pragma.scm 182 */
															obj_t BgL_list3369z00_936;

															BgL_list3369z00_936 = MAKE_PAIR(BNIL, BNIL);
															return
																BGl_userzd2errorzd2zztools_errorz00
																(BGl_string3435z00zzmodule_pragmaz00,
																BGl_string3447z00zzmodule_pragmaz00,
																BgL_propz00_9, BgL_list3369z00_936);
														}
												}
										}
									else
										{	/* Module/pragma.scm 115 */
										BgL_tagzd21440zd2_884:
											{	/* Module/pragma.scm 184 */
												obj_t BgL_arg3373z00_939;

												if (PAIRP(BgL_propz00_9))
													{	/* Module/pragma.scm 186 */
														BgL_arg3373z00_939 = BgL_propz00_9;
													}
												else
													{	/* Module/pragma.scm 186 */
														BgL_arg3373z00_939 = BgL_clausez00_10;
													}
												{	/* Module/pragma.scm 184 */
													obj_t BgL_list3375z00_941;

													BgL_list3375z00_941 = MAKE_PAIR(BNIL, BNIL);
													return
														BGl_userzd2errorzd2zztools_errorz00
														(BGl_string3435z00zzmodule_pragmaz00,
														BGl_string3447z00zzmodule_pragmaz00,
														BgL_arg3373z00_939, BgL_list3375z00_941);
												}
											}
										}
								}
							else
								{	/* Module/pragma.scm 115 */
									goto BgL_tagzd21440zd2_884;
								}
						}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_pragmaz00()
	{
		AN_OBJECT;
		{	/* Module/pragma.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_pragmaz00()
	{
		AN_OBJECT;
		{	/* Module/pragma.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_pragmaz00()
	{
		AN_OBJECT;
		{	/* Module/pragma.scm 15 */
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string3451z00zzmodule_pragmaz00));
			BGl_modulezd2initializa7ationz75zzmodule_evalz00(((long) 168261208),
				BSTRING_TO_STRING(BGl_string3451z00zzmodule_pragmaz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3451z00zzmodule_pragmaz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3451z00zzmodule_pragmaz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3451z00zzmodule_pragmaz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3451z00zzmodule_pragmaz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3451z00zzmodule_pragmaz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3451z00zzmodule_pragmaz00));
			BGl_modulezd2initializa7ationz75zzast_removez00(((long) 52292466),
				BSTRING_TO_STRING(BGl_string3451z00zzmodule_pragmaz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3451z00zzmodule_pragmaz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string3451z00zzmodule_pragmaz00));
			BGl_modulezd2initializa7ationz75zzeffect_feffectz00(((long) 53594424),
				BSTRING_TO_STRING(BGl_string3451z00zzmodule_pragmaz00));
			return
				BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string3451z00zzmodule_pragmaz00));
		}
	}

#ifdef __cplusplus
}
#endif
