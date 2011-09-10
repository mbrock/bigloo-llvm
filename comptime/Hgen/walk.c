/*===========================================================================*/
/*   (Hgen/walk.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Hgen/walk.scm)*/
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


	extern obj_t BGl_stopzd2emissionz12zc0zzbackend_c_emitz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_getzd2classzd2listz00zzobject_classz00();
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_startzd2emissionz12zc0zzbackend_c_emitz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzhgen_walkz00();
	BGL_EXPORTED_DECL obj_t BGl_hgenzd2walkzd2zzhgen_walkz00();
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzhgen_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	extern obj_t BGl_emitzd2classzd2typesz00zzbackend_c_prototypez00(obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza33557ze3z83zzhgen_walkz00(obj_t);
	static obj_t BGl_zc3anonymousza33560ze3z83zzhgen_walkz00(obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_emitzd2headerzd2zzbackend_c_emitz00();
	static obj_t BGl_methodzd2initzd2zzhgen_walkz00();
	static obj_t BGl__hgenzd2walkzd2zzhgen_walkz00(obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzhgen_walkz00 = BUNSPEC;
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl_genericzd2initzd2zzhgen_walkz00();
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	static obj_t BGl_importedzd2moduleszd2initz00zzhgen_walkz00();
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_za2czd2portza2zd2zzbackend_c_emitz00;
	BGL_IMPORT obj_t BGl_filterz00zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzhgen_walkz00();
	static obj_t __cnst[2];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_hgenzd2walkzd2envz00zzhgen_walkz00,
		BgL_bgl__hgenza7d2walkza7d2za73625za7, BGl__hgenzd2walkzd2zzhgen_walkz00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3617z00zzhgen_walkz00,
		BgL_bgl_za7c3anonymousza7a333626z00,
		BGl_zc3anonymousza33557ze3z83zzhgen_walkz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3619z00zzhgen_walkz00,
		BgL_bgl_za7c3anonymousza7a333627z00,
		BGl_zc3anonymousza33560ze3z83zzhgen_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3615z00zzhgen_walkz00,
		BgL_bgl_string3615za700za7za7h3628za7, "C headers generation", 20);
	      DEFINE_STRING(BGl_string3616z00zzhgen_walkz00,
		BgL_bgl_string3616za700za7za7h3629za7, "   . ", 5);
	      DEFINE_STRING(BGl_string3618z00zzhgen_walkz00,
		BgL_bgl_string3618za700za7za7h3630za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string3620z00zzhgen_walkz00,
		BgL_bgl_string3620za700za7za7h3631za7, ".h", 2);
	      DEFINE_STRING(BGl_string3621z00zzhgen_walkz00,
		BgL_bgl_string3621za700za7za7h3632za7, "hgen_walk", 9);
	      DEFINE_STRING(BGl_string3622z00zzhgen_walkz00,
		BgL_bgl_string3622za700za7za7h3633za7,
		"pass-started ((lambda () (start-emission! \".h\"))) ", 50);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzhgen_walkz00(long
		BgL_checksumz00_1290, char *BgL_fromz00_1291)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzhgen_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzhgen_walkz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzhgen_walkz00();
					BGl_cnstzd2initzd2zzhgen_walkz00();
					BGl_importedzd2moduleszd2initz00zzhgen_walkz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzhgen_walkz00()
	{
		AN_OBJECT;
		{	/* Hgen/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "hgen_walk");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "hgen_walk");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"hgen_walk");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzhgen_walkz00()
	{
		AN_OBJECT;
		{	/* Hgen/walk.scm 15 */
			{	/* Hgen/walk.scm 15 */
				obj_t BgL_cportz00_1282;

				BgL_cportz00_1282 =
					bgl_open_input_string(BGl_string3622z00zzhgen_walkz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1283;

					BgL_iz00_1283 = ((long) 1);
				BgL_loopz00_1284:
					if ((BgL_iz00_1283 == ((long) -1)))
						{	/* Hgen/walk.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Hgen/walk.scm 15 */
							{	/* Hgen/walk.scm 15 */
								obj_t BgL_arg3624z00_1286;

								{	/* Hgen/walk.scm 15 */

									{	/* Hgen/walk.scm 15 */
										obj_t BgL_locationz00_1288;

										BgL_locationz00_1288 = BBOOL(((bool_t) 0));
										{	/* Hgen/walk.scm 15 */

											BgL_arg3624z00_1286 =
												BGl_readz00zz__readerz00(BgL_cportz00_1282,
												BgL_locationz00_1288);
										}
									}
								}
								{	/* Hgen/walk.scm 15 */
									int BgL_auxz00_1307;

									BgL_auxz00_1307 = (int) (BgL_iz00_1283);
									CNST_TABLE_SET(BgL_auxz00_1307, BgL_arg3624z00_1286);
							}}
							{	/* Hgen/walk.scm 15 */
								int BgL_auxz00_1289;

								BgL_auxz00_1289 = (int) ((BgL_iz00_1283 - ((long) 1)));
								{
									long BgL_iz00_1312;

									BgL_iz00_1312 = (long) (BgL_auxz00_1289);
									BgL_iz00_1283 = BgL_iz00_1312;
									goto BgL_loopz00_1284;
								}
							}
						}
				}
			}
		}
	}



/* hgen-walk */
	BGL_EXPORTED_DEF obj_t BGl_hgenzd2walkzd2zzhgen_walkz00()
	{
		AN_OBJECT;
		{	/* Hgen/walk.scm 30 */
			{	/* Hgen/walk.scm 31 */
				obj_t BgL_list3540z00_833;

				{	/* Hgen/walk.scm 31 */
					obj_t BgL_arg3542z00_835;

					{	/* Hgen/walk.scm 31 */
						obj_t BgL_arg3544z00_837;

						BgL_arg3544z00_837 = MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
						BgL_arg3542z00_835 =
							MAKE_PAIR(BGl_string3615z00zzhgen_walkz00, BgL_arg3544z00_837);
					}
					BgL_list3540z00_833 =
						MAKE_PAIR(BGl_string3616z00zzhgen_walkz00, BgL_arg3542z00_835);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list3540z00_833);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string3615z00zzhgen_walkz00;
			{	/* Hgen/walk.scm 31 */
				obj_t BgL_g3537z00_838;

				obj_t BgL_g3538z00_839;

				{	/* Hgen/walk.scm 31 */
					obj_t BgL_list3556z00_854;

					BgL_list3556z00_854 = MAKE_PAIR(BGl_proc3617z00zzhgen_walkz00, BNIL);
					BgL_g3537z00_838 = BgL_list3556z00_854;
				}
				BgL_g3538z00_839 = CNST_TABLE_REF(((long) 0));
				{
					obj_t BgL_hooksz00_841;

					obj_t BgL_hnamesz00_842;

					BgL_hooksz00_841 = BgL_g3537z00_838;
					BgL_hnamesz00_842 = BgL_g3538z00_839;
				BgL_zc3anonymousza33545ze3z83_843:
					if (NULLP(BgL_hooksz00_841))
						{	/* Hgen/walk.scm 31 */
							CNST_TABLE_REF(((long) 1));
						}
					else
						{	/* Hgen/walk.scm 31 */
							bool_t BgL_testz00_1326;

							{	/* Hgen/walk.scm 31 */
								obj_t BgL_fun3554z00_851;

								BgL_fun3554z00_851 = CAR(BgL_hooksz00_841);
								BgL_testz00_1326 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun3554z00_851) (BgL_fun3554z00_851,
										BEOA));
							}
							if (BgL_testz00_1326)
								{
									obj_t BgL_hnamesz00_1333;

									obj_t BgL_hooksz00_1331;

									BgL_hooksz00_1331 = CDR(BgL_hooksz00_841);
									BgL_hnamesz00_1333 = CDR(BgL_hnamesz00_842);
									BgL_hnamesz00_842 = BgL_hnamesz00_1333;
									BgL_hooksz00_841 = BgL_hooksz00_1331;
									goto BgL_zc3anonymousza33545ze3z83_843;
								}
							else
								{	/* Hgen/walk.scm 31 */
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string3615z00zzhgen_walkz00,
										BGl_string3618z00zzhgen_walkz00, CAR(BgL_hnamesz00_842));
								}
						}
				}
			}
			BGl_emitzd2headerzd2zzbackend_c_emitz00();
			{	/* Hgen/walk.scm 36 */
				obj_t BgL_clistz00_857;

				BgL_clistz00_857 =
					BGl_filterz00zz__r4_control_features_6_9z00
					(BGl_proc3619z00zzhgen_walkz00,
					BGl_getzd2classzd2listz00zzobject_classz00());
				BGl_emitzd2classzd2typesz00zzbackend_c_prototypez00(BgL_clistz00_857,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
			}
			return BGl_stopzd2emissionz12zc0zzbackend_c_emitz00();
		}
	}



/* _hgen-walk */
	obj_t BGl__hgenzd2walkzd2zzhgen_walkz00(obj_t BgL_envz00_1278)
	{
		AN_OBJECT;
		{	/* Hgen/walk.scm 30 */
			return BGl_hgenzd2walkzd2zzhgen_walkz00();
		}
	}



/* <anonymous:3560> */
	obj_t BGl_zc3anonymousza33560ze3z83zzhgen_walkz00(obj_t BgL_envz00_1279,
		obj_t BgL_cz00_1280)
	{
		AN_OBJECT;
		{	/* Hgen/walk.scm 36 */
			{
				obj_t BgL_cz00_860;

				{	/* Hgen/walk.scm 37 */
					bool_t BgL_auxz00_1343;

					BgL_cz00_860 = BgL_cz00_1280;
					if (BGl_iszd2azf3z21zz__objectz00(BgL_cz00_860,
							BGl_tclassz00zzobject_classz00))
						{	/* Hgen/walk.scm 38 */
							obj_t BgL_arg3561z00_863;

							{	/* Hgen/walk.scm 38 */
								BgL_globalz00_bglt BgL_obj1939z00_1275;

								{	/* Hgen/walk.scm 38 */
									BgL_tclassz00_bglt BgL_obj1655z00_1274;

									BgL_obj1655z00_1274 = (BgL_tclassz00_bglt) (BgL_cz00_860);
									{
										obj_t BgL_auxz00_1347;

										{	/* Hgen/walk.scm 38 */
											BgL_objectz00_bglt BgL_auxz00_1348;

											BgL_auxz00_1348 =
												(BgL_objectz00_bglt) (BgL_obj1655z00_1274);
											BgL_auxz00_1347 = BGL_OBJECT_WIDENING(BgL_auxz00_1348);
										}
										BgL_obj1939z00_1275 =
											(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1347))->
											BgL_holderz00);
									}
								}
								BgL_arg3561z00_863 =
									(((BgL_globalz00_bglt) CREF(BgL_obj1939z00_1275))->
									BgL_modulez00);
							}
							BgL_auxz00_1343 =
								(BgL_arg3561z00_863 == BGl_za2moduleza2z00zzmodule_modulez00);
						}
					else
						{	/* Hgen/walk.scm 37 */
							BgL_auxz00_1343 = ((bool_t) 0);
						}
					return BBOOL(BgL_auxz00_1343);
				}
			}
		}
	}



/* <anonymous:3557> */
	obj_t BGl_zc3anonymousza33557ze3z83zzhgen_walkz00(obj_t BgL_envz00_1281)
	{
		AN_OBJECT;
		{	/* Hgen/walk.scm 31 */
			{

				return
					BGl_startzd2emissionz12zc0zzbackend_c_emitz00
					(BGl_string3620z00zzhgen_walkz00);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzhgen_walkz00()
	{
		AN_OBJECT;
		{	/* Hgen/walk.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzhgen_walkz00()
	{
		AN_OBJECT;
		{	/* Hgen/walk.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzhgen_walkz00()
	{
		AN_OBJECT;
		{	/* Hgen/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3621z00zzhgen_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3621z00zzhgen_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string3621z00zzhgen_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3621z00zzhgen_walkz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string3621z00zzhgen_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3621z00zzhgen_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3621z00zzhgen_walkz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string3621z00zzhgen_walkz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(((long) 185927088),
				BSTRING_TO_STRING(BGl_string3621z00zzhgen_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(((long)
					14608757), BSTRING_TO_STRING(BGl_string3621z00zzhgen_walkz00));
		}
	}

#ifdef __cplusplus
}
#endif
