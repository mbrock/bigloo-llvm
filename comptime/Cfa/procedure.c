/*===========================================================================*/
/*   (Cfa/procedure.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/procedure.scm)*/
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

	typedef struct BgL_svarzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		bool_t BgL_clozd2envzf3z21;
	}                      *BgL_svarzf2cinfozf2_bglt;

	typedef struct BgL_prezd2makezd2procedurezd2appzd2_bgl
	{
		struct BgL_variablez00_bgl *BgL_ownerz00;
	}                                     
		*BgL_prezd2makezd2procedurezd2appzd2_bglt;

	typedef struct BgL_prezd2procedurezd2refzd2appzd2_bgl
	{
		char dummy;
	}                                    
		*BgL_prezd2procedurezd2refzd2appzd2_bglt;

	typedef struct BgL_prezd2procedurezd2setz12zd2appzc0_bgl
	{
		char dummy;
	}                                       
		*BgL_prezd2procedurezd2setz12zd2appzc0_bglt;

	typedef struct BgL_makezd2procedurezd2appz00_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		obj_t BgL_valueszd2approxzd2;
		long BgL_lostzd2stampzd2;
		bool_t BgL_xzd2tzf3z21;
		bool_t BgL_xz00;
		bool_t BgL_tz00;
		struct BgL_variablez00_bgl *BgL_ownerz00;
		obj_t BgL_stackzd2stampzd2;
	}                                *BgL_makezd2procedurezd2appz00_bglt;

	typedef struct BgL_procedurezd2refzd2appz00_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                               *BgL_procedurezd2refzd2appz00_bglt;

	typedef struct BgL_procedurezd2setz12zd2appz12_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                                  *BgL_procedurezd2setz12zd2appz12_bglt;


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	extern obj_t
		BGl_addzd2makezd2procedurez12z12zzcfa_closurez00(BgL_nodez00_bglt);
	extern BgL_approxz00_bglt BGl_loosez12z12zzcfa_loosez00(BgL_approxz00_bglt,
		obj_t);
	static obj_t BGl_loosezd2allocz12zd2makezd2pr4718zc0zzcfa_procedurez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_za2cfazd2stampza2zd2zzcfa_iteratez00;
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	extern obj_t BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00(obj_t,
		BgL_approxz00_bglt);
	static obj_t BGl_zc3anonymousza34720ze3z83zzcfa_procedurez00(obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzcfa_procedurez00();
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	extern obj_t BGl_prezd2clozd2envz00zzcfa_infoz00;
	extern obj_t
		BGl_wideningzd2procedurezd2setz12zd2appzc0zzcfa_info2z00
		(BgL_approxz00_bglt);
	static obj_t BGl_nodezd2setupz12zd2prezd2make4706zc0zzcfa_procedurez00(obj_t,
		obj_t);
	static obj_t BGl_cfaz12zd2procedurezd2refzd2a4714zc0zzcfa_procedurez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzcfa_procedurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_closurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_iteratez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_cfaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_setupz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzcfa_procedurez00();
	extern obj_t BGl_nodezd2setupz12zc0zzcfa_setupz00(BgL_nodez00_bglt);
	extern obj_t BGl_procedurezd2refzd2appz00zzcfa_info2z00;
	extern obj_t BGl_cfazd2exportzd2varz12z12zzcfa_iteratez00(BgL_valuez00_bglt,
		obj_t);
	static obj_t BGl__disablezd2Xzd2Tz12z12zzcfa_procedurez00(obj_t, obj_t);
	extern obj_t
		BGl_addzd2procedurezd2refz12z12zzcfa_closurez00(BgL_nodez00_bglt);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern obj_t
		BGl_wideningzd2makezd2procedurezd2appzd2zzcfa_info2z00(BgL_approxz00_bglt,
		obj_t, long, bool_t, bool_t, bool_t, BgL_variablez00_bglt, obj_t);
	static obj_t
		BGl_cfaz12zd2procedurezd2setz12zd24716zd2zzcfa_procedurez00(obj_t, obj_t);
	extern BgL_approxz00_bglt
		BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_approxz00_bglt);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_procedurez00();
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern BgL_approxz00_bglt BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_procedurez00 = BUNSPEC;
	extern obj_t
		BGl_getzd2nodezd2atomzd2valuezd2zzcfa_approxz00(BgL_nodez00_bglt);
	static obj_t BGl_genericzd2initzd2zzcfa_procedurez00();
	extern obj_t BGl_funz00zzast_varz00;
	extern obj_t BGl_prezd2procedurezd2setz12zd2appzc0zzcfa_info2z00;
	extern obj_t BGl_nodezd2setupza2z12z62zzcfa_setupz00(obj_t);
	extern obj_t BGl_prezd2procedurezd2refzd2appzd2zzcfa_info2z00;
	static obj_t BGl_cfaz12zd2makezd2procedurezd24712zc0zzcfa_procedurez00(obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_procedurez00();
	extern BgL_approxz00_bglt
		BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_typez00_bglt);
	extern obj_t BGl_procedurezd2setz12zd2appz12zzcfa_info2z00;
	extern BgL_approxz00_bglt BGl_cfaz12z12zzcfa_cfaz00(BgL_nodez00_bglt);
	extern obj_t BGl_svarzf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl_zc3anonymousza34886ze3z83zzcfa_procedurez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34896ze3z83zzcfa_procedurez00(obj_t, obj_t);
	extern obj_t BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_approxz00_bglt);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_nodezd2setupz12zd2prezd2proc4708zc0zzcfa_procedurez00(obj_t,
		obj_t);
	static obj_t BGl_nodezd2setupz12zd2prezd2proc4710zc0zzcfa_procedurez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t make_vector(int, obj_t);
	static obj_t BGl_zc3anonymousza34915ze3z83zzcfa_procedurez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t
		BGl_wideningzd2procedurezd2refzd2appzd2zzcfa_info2z00(BgL_approxz00_bglt);
	static obj_t BGl_zc3anonymousza34923ze3z83zzcfa_procedurez00(obj_t, obj_t);
	extern obj_t BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	extern BgL_approxz00_bglt
		BGl_makezd2typezd2alloczd2approxzd2zzcfa_approxz00(BgL_typez00_bglt,
		BgL_nodez00_bglt);
	extern obj_t BGl_makezd2procedurezd2appz00zzcfa_info2z00;
	BGL_EXPORTED_DECL obj_t
		BGl_disablezd2Xzd2Tz12z12zzcfa_procedurez00(BgL_approxz00_bglt);
	extern obj_t BGl_wideningzd2prezd2clozd2envzd2zzcfa_infoz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_procedurez00();
	static obj_t __cnst[1];


	extern obj_t BGl_cfaz12zd2envzc0zzcfa_cfaz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4946z00zzcfa_procedurez00,
		BgL_bgl_za7c3anonymousza7a344961z00,
		BGl_zc3anonymousza34720ze3z83zzcfa_procedurez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4947z00zzcfa_procedurez00,
		BgL_bgl_nodeza7d2setupza712za74962za7,
		BGl_nodezd2setupz12zd2prezd2make4706zc0zzcfa_procedurez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4950z00zzcfa_procedurez00,
		BgL_bgl_nodeza7d2setupza712za74963za7,
		BGl_nodezd2setupz12zd2prezd2proc4710zc0zzcfa_procedurez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4949z00zzcfa_procedurez00,
		BgL_bgl_nodeza7d2setupza712za74964za7,
		BGl_nodezd2setupz12zd2prezd2proc4708zc0zzcfa_procedurez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4951z00zzcfa_procedurez00,
		BgL_bgl_cfaza712za7d2makeza7d24965za7,
		BGl_cfaz12zd2makezd2procedurezd24712zc0zzcfa_procedurez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4953z00zzcfa_procedurez00,
		BgL_bgl_cfaza712za7d2procedu4966z00,
		BGl_cfaz12zd2procedurezd2refzd2a4714zc0zzcfa_procedurez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4954z00zzcfa_procedurez00,
		BgL_bgl_cfaza712za7d2procedu4967z00,
		BGl_cfaz12zd2procedurezd2setz12zd24716zd2zzcfa_procedurez00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4955z00zzcfa_procedurez00,
		BgL_bgl_looseza7d2allocza7124968z00,
		BGl_loosezd2allocz12zd2makezd2pr4718zc0zzcfa_procedurez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4948z00zzcfa_procedurez00,
		BgL_bgl_string4948za700za7za7c4969za7, "node-setup!", 11);
	      DEFINE_STRING(BGl_string4952z00zzcfa_procedurez00,
		BgL_bgl_string4952za700za7za7c4970za7, "cfa!::approx", 12);
	      DEFINE_STRING(BGl_string4956z00zzcfa_procedurez00,
		BgL_bgl_string4956za700za7za7c4971za7, "loose-alloc!", 12);
	      DEFINE_STRING(BGl_string4957z00zzcfa_procedurez00,
		BgL_bgl_string4957za700za7za7c4972za7, "cfa_procedure", 13);
	      DEFINE_STRING(BGl_string4958z00zzcfa_procedurez00,
		BgL_bgl_string4958za700za7za7c4973za7, "all ", 4);
	extern obj_t BGl_nodezd2setupz12zd2envz12zzcfa_setupz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_disablezd2Xzd2Tz12zd2envzc0zzcfa_procedurez00,
		BgL_bgl__disableza7d2xza7d2t4974z00,
		BGl__disablezd2Xzd2Tz12z12zzcfa_procedurez00, 0L, BUNSPEC, 1);
	extern obj_t BGl_loosezd2allocz12zd2envz12zzcfa_loosez00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_procedurez00(long
		BgL_checksumz00_2029, char *BgL_fromz00_2030)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_procedurez00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_procedurez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcfa_procedurez00();
					BGl_cnstzd2initzd2zzcfa_procedurez00();
					BGl_importedzd2moduleszd2initz00zzcfa_procedurez00();
					BGl_methodzd2initzd2zzcfa_procedurez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_procedurez00()
	{
		AN_OBJECT;
		{	/* Cfa/procedure.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"cfa_procedure");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"cfa_procedure");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_procedurez00()
	{
		AN_OBJECT;
		{	/* Cfa/procedure.scm 15 */
			{	/* Cfa/procedure.scm 15 */
				obj_t BgL_cportz00_2021;

				BgL_cportz00_2021 =
					bgl_open_input_string(BGl_string4958z00zzcfa_procedurez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2022;

					BgL_iz00_2022 = ((long) 0);
				BgL_loopz00_2023:
					if ((BgL_iz00_2022 == ((long) -1)))
						{	/* Cfa/procedure.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/procedure.scm 15 */
							{	/* Cfa/procedure.scm 15 */
								obj_t BgL_arg4960z00_2025;

								{	/* Cfa/procedure.scm 15 */

									{	/* Cfa/procedure.scm 15 */
										obj_t BgL_locationz00_2027;

										BgL_locationz00_2027 = BBOOL(((bool_t) 0));
										{	/* Cfa/procedure.scm 15 */

											BgL_arg4960z00_2025 =
												BGl_readz00zz__readerz00(BgL_cportz00_2021,
												BgL_locationz00_2027);
										}
									}
								}
								{	/* Cfa/procedure.scm 15 */
									int BgL_auxz00_2046;

									BgL_auxz00_2046 = (int) (BgL_iz00_2022);
									CNST_TABLE_SET(BgL_auxz00_2046, BgL_arg4960z00_2025);
							}}
							{	/* Cfa/procedure.scm 15 */
								int BgL_auxz00_2028;

								BgL_auxz00_2028 = (int) ((BgL_iz00_2022 - ((long) 1)));
								{
									long BgL_iz00_2051;

									BgL_iz00_2051 = (long) (BgL_auxz00_2028);
									BgL_iz00_2022 = BgL_iz00_2051;
									goto BgL_loopz00_2023;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_procedurez00()
	{
		AN_OBJECT;
		{	/* Cfa/procedure.scm 15 */
			return BUNSPEC;
		}
	}



/* disable-X-T! */
	BGL_EXPORTED_DEF obj_t
		BGl_disablezd2Xzd2Tz12z12zzcfa_procedurez00(BgL_approxz00_bglt
		BgL_approxz00_1)
	{
		AN_OBJECT;
		{	/* Cfa/procedure.scm 36 */
			return
				BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
				(BGl_proc4946z00zzcfa_procedurez00, BgL_approxz00_1);
		}
	}



/* _disable-X-T! */
	obj_t BGl__disablezd2Xzd2Tz12z12zzcfa_procedurez00(obj_t BgL_envz00_1971,
		obj_t BgL_approxz00_1972)
	{
		AN_OBJECT;
		{	/* Cfa/procedure.scm 36 */
			return
				BGl_disablezd2Xzd2Tz12z12zzcfa_procedurez00(
				(BgL_approxz00_bglt) (BgL_approxz00_1972));
		}
	}



/* <anonymous:4720> */
	obj_t BGl_zc3anonymousza34720ze3z83zzcfa_procedurez00(obj_t BgL_envz00_1973,
		obj_t BgL_appz00_1974)
	{
		AN_OBJECT;
		{	/* Cfa/procedure.scm 37 */
			{
				obj_t BgL_appz00_1049;

				BgL_appz00_1049 = BgL_appz00_1974;
				if (BGl_iszd2azf3z21zz__objectz00(BgL_appz00_1049,
						BGl_makezd2procedurezd2appz00zzcfa_info2z00))
					{	/* Cfa/procedure.scm 42 */
						BgL_makezd2procedurezd2appz00_bglt BgL_obj4300z00_1793;

						bool_t BgL_val4299z00_1794;

						BgL_obj4300z00_1793 =
							(BgL_makezd2procedurezd2appz00_bglt) (BgL_appz00_1049);
						BgL_val4299z00_1794 = ((bool_t) 0);
						{
							obj_t BgL_auxz00_2059;

							{	/* Cfa/procedure.scm 42 */
								BgL_objectz00_bglt BgL_auxz00_2060;

								BgL_auxz00_2060 = (BgL_objectz00_bglt) (BgL_obj4300z00_1793);
								BgL_auxz00_2059 = BGL_OBJECT_WIDENING(BgL_auxz00_2060);
							}
							return
								((((BgL_makezd2procedurezd2appz00_bglt) CREF(BgL_auxz00_2059))->
									BgL_xzd2tzf3z21) = ((bool_t) BgL_val4299z00_1794), BUNSPEC);
						}
					}
				else
					{	/* Cfa/procedure.scm 41 */
						return BFALSE;
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_procedurez00()
	{
		AN_OBJECT;
		{	/* Cfa/procedure.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_procedurez00()
	{
		AN_OBJECT;
		{	/* Cfa/procedure.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00,
				BGl_proc4947z00zzcfa_procedurez00, BGl_string4948z00zzcfa_procedurez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_prezd2procedurezd2refzd2appzd2zzcfa_info2z00,
				BGl_proc4949z00zzcfa_procedurez00, BGl_string4948z00zzcfa_procedurez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_prezd2procedurezd2setz12zd2appzc0zzcfa_info2z00,
				BGl_proc4950z00zzcfa_procedurez00, BGl_string4948z00zzcfa_procedurez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_makezd2procedurezd2appz00zzcfa_info2z00,
				BGl_proc4951z00zzcfa_procedurez00, BGl_string4952z00zzcfa_procedurez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_procedurezd2refzd2appz00zzcfa_info2z00,
				BGl_proc4953z00zzcfa_procedurez00, BGl_string4952z00zzcfa_procedurez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_procedurezd2setz12zd2appz12zzcfa_info2z00,
				BGl_proc4954z00zzcfa_procedurez00, BGl_string4952z00zzcfa_procedurez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_loosezd2allocz12zd2envz12zzcfa_loosez00,
				BGl_makezd2procedurezd2appz00zzcfa_info2z00,
				BGl_proc4955z00zzcfa_procedurez00, BGl_string4956z00zzcfa_procedurez00);
		}
	}



/* loose-alloc!-make-pr4718 */
	obj_t BGl_loosezd2allocz12zd2makezd2pr4718zc0zzcfa_procedurez00(obj_t
		BgL_envz00_1988, obj_t BgL_allocz00_1989)
	{
		AN_OBJECT;
		{	/* Cfa/procedure.scm 243 */
			{
				BgL_makezd2procedurezd2appz00_bglt BgL_allocz00_1780;

				BgL_allocz00_1780 =
					(BgL_makezd2procedurezd2appz00_bglt) (BgL_allocz00_1989);
				{	/* Cfa/procedure.scm 247 */
					bool_t BgL_testz00_2071;

					{	/* Cfa/procedure.scm 247 */
						long BgL_n2z00_1963;

						BgL_n2z00_1963 =
							(long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00);
						{	/* Cfa/procedure.scm 247 */
							long BgL_auxz00_2073;

							{
								obj_t BgL_auxz00_2074;

								{	/* Cfa/procedure.scm 247 */
									BgL_objectz00_bglt BgL_auxz00_2075;

									BgL_auxz00_2075 = (BgL_objectz00_bglt) (BgL_allocz00_1780);
									BgL_auxz00_2074 = BGL_OBJECT_WIDENING(BgL_auxz00_2075);
								}
								BgL_auxz00_2073 =
									(((BgL_makezd2procedurezd2appz00_bglt)
										CREF(BgL_auxz00_2074))->BgL_lostzd2stampzd2);
							}
							BgL_testz00_2071 = (BgL_auxz00_2073 == BgL_n2z00_1963);
					}}
					if (BgL_testz00_2071)
						{	/* Cfa/procedure.scm 247 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/procedure.scm 247 */
							{
								long BgL_auxz00_2084;

								obj_t BgL_auxz00_2080;

								BgL_auxz00_2084 =
									(long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00);
								{	/* Cfa/procedure.scm 251 */
									BgL_objectz00_bglt BgL_auxz00_2081;

									BgL_auxz00_2081 = (BgL_objectz00_bglt) (BgL_allocz00_1780);
									BgL_auxz00_2080 = BGL_OBJECT_WIDENING(BgL_auxz00_2081);
								}
								((((BgL_makezd2procedurezd2appz00_bglt) CREF(BgL_auxz00_2080))->
										BgL_lostzd2stampzd2) = ((long) BgL_auxz00_2084), BUNSPEC);
							}
							{	/* Cfa/procedure.scm 252 */
								obj_t BgL_calleez00_1785;

								{	/* Cfa/procedure.scm 252 */
									obj_t BgL_pairz00_1967;

									{
										BgL_appz00_bglt BgL_auxz00_2087;

										BgL_auxz00_2087 = (BgL_appz00_bglt) (BgL_allocz00_1780);
										BgL_pairz00_1967 =
											(((BgL_appz00_bglt) CREF(BgL_auxz00_2087))->BgL_argsz00);
									}
									BgL_calleez00_1785 = CAR(BgL_pairz00_1967);
								}
								{	/* Cfa/procedure.scm 252 */
									BgL_variablez00_bglt BgL_vz00_1786;

									{
										BgL_varz00_bglt BgL_auxz00_2091;

										BgL_auxz00_2091 = (BgL_varz00_bglt) (BgL_calleez00_1785);
										BgL_vz00_1786 =
											(((BgL_varz00_bglt) CREF(BgL_auxz00_2091))->
											BgL_variablez00);
									}
									{	/* Cfa/procedure.scm 253 */
										BgL_valuez00_bglt BgL_funz00_1787;

										BgL_funz00_1787 =
											(((BgL_variablez00_bglt) CREF(BgL_vz00_1786))->
											BgL_valuez00);
										{	/* Cfa/procedure.scm 254 */

											return
												BGl_cfazd2exportzd2varz12z12zzcfa_iteratez00
												(BgL_funz00_1787, (obj_t) (BgL_vz00_1786));
										}
									}
								}
							}
						}
				}
			}
		}
	}



/* cfa!-procedure-set!-4716 */
	obj_t BGl_cfaz12zd2procedurezd2setz12zd24716zd2zzcfa_procedurez00(obj_t
		BgL_envz00_1990, obj_t BgL_nodez00_1991)
	{
		AN_OBJECT;
		{	/* Cfa/procedure.scm 189 */
			{
				BgL_procedurezd2setz12zd2appz12_bglt BgL_nodez00_1736;

				{	/* Cfa/procedure.scm 190 */
					BgL_approxz00_bglt BgL_auxz00_2098;

					BgL_nodez00_1736 =
						(BgL_procedurezd2setz12zd2appz12_bglt) (BgL_nodez00_1991);
					{	/* Cfa/procedure.scm 191 */
						obj_t BgL_arg4910z00_1740;

						{	/* Cfa/procedure.scm 191 */
							obj_t BgL_pairz00_1922;

							{
								BgL_appz00_bglt BgL_auxz00_2099;

								BgL_auxz00_2099 = (BgL_appz00_bglt) (BgL_nodez00_1736);
								BgL_pairz00_1922 =
									(((BgL_appz00_bglt) CREF(BgL_auxz00_2099))->BgL_argsz00);
							}
							BgL_arg4910z00_1740 = CAR(CDR(BgL_pairz00_1922));
						}
						BGl_cfaz12z12zzcfa_cfaz00((BgL_nodez00_bglt) (BgL_arg4910z00_1740));
					}
					{	/* Cfa/procedure.scm 192 */
						BgL_approxz00_bglt BgL_proczd2approxzd2_1742;

						obj_t BgL_offsetz00_1743;

						BgL_approxz00_bglt BgL_valzd2approxzd2_1744;

						{	/* Cfa/procedure.scm 192 */
							obj_t BgL_arg4931z00_1772;

							{	/* Cfa/procedure.scm 192 */
								obj_t BgL_pairz00_1927;

								{
									BgL_appz00_bglt BgL_auxz00_2106;

									BgL_auxz00_2106 = (BgL_appz00_bglt) (BgL_nodez00_1736);
									BgL_pairz00_1927 =
										(((BgL_appz00_bglt) CREF(BgL_auxz00_2106))->BgL_argsz00);
								}
								BgL_arg4931z00_1772 = CAR(BgL_pairz00_1927);
							}
							BgL_proczd2approxzd2_1742 =
								BGl_cfaz12z12zzcfa_cfaz00(
								(BgL_nodez00_bglt) (BgL_arg4931z00_1772));
						}
						{	/* Cfa/procedure.scm 193 */
							obj_t BgL_arg4933z00_1774;

							{	/* Cfa/procedure.scm 193 */
								obj_t BgL_pairz00_1929;

								{
									BgL_appz00_bglt BgL_auxz00_2112;

									BgL_auxz00_2112 = (BgL_appz00_bglt) (BgL_nodez00_1736);
									BgL_pairz00_1929 =
										(((BgL_appz00_bglt) CREF(BgL_auxz00_2112))->BgL_argsz00);
								}
								BgL_arg4933z00_1774 = CAR(CDR(BgL_pairz00_1929));
							}
							BgL_offsetz00_1743 =
								BGl_getzd2nodezd2atomzd2valuezd2zzcfa_approxz00(
								(BgL_nodez00_bglt) (BgL_arg4933z00_1774));
						}
						{	/* Cfa/procedure.scm 194 */
							obj_t BgL_arg4935z00_1776;

							{	/* Cfa/procedure.scm 194 */
								obj_t BgL_pairz00_1934;

								{
									BgL_appz00_bglt BgL_auxz00_2119;

									BgL_auxz00_2119 = (BgL_appz00_bglt) (BgL_nodez00_1736);
									BgL_pairz00_1934 =
										(((BgL_appz00_bglt) CREF(BgL_auxz00_2119))->BgL_argsz00);
								}
								BgL_arg4935z00_1776 = CAR(CDR(CDR(BgL_pairz00_1934)));
							}
							BgL_valzd2approxzd2_1744 =
								BGl_cfaz12z12zzcfa_cfaz00(
								(BgL_nodez00_bglt) (BgL_arg4935z00_1776));
						}
						if (
							(((BgL_approxz00_bglt) CREF(BgL_proczd2approxzd2_1742))->
								BgL_topzf3zf3))
							{	/* Cfa/procedure.scm 199 */
								(obj_t) (BGl_loosez12z12zzcfa_loosez00(BgL_valzd2approxzd2_1744,
										CNST_TABLE_REF(((long) 0))));
							}
						else
							{	/* Cfa/procedure.scm 199 */
								if (INTEGERP(BgL_offsetz00_1743))
									{	/* Cfa/procedure.scm 206 */
										obj_t BgL_zc3anonymousza34915ze3z83_1976;

										BgL_zc3anonymousza34915ze3z83_1976 =
											make_fx_procedure
											(BGl_zc3anonymousza34915ze3z83zzcfa_procedurez00,
											(int) (((long) 1)), (int) (((long) 2)));
										PROCEDURE_SET(BgL_zc3anonymousza34915ze3z83_1976,
											(int) (((long) 0)), BgL_offsetz00_1743);
										PROCEDURE_SET(BgL_zc3anonymousza34915ze3z83_1976,
											(int) (((long) 1)), (obj_t) (BgL_valzd2approxzd2_1744));
										BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
											(BgL_zc3anonymousza34915ze3z83_1976,
											BgL_proczd2approxzd2_1742);
									}
								else
									{	/* Cfa/procedure.scm 219 */
										obj_t BgL_zc3anonymousza34923ze3z83_1977;

										BgL_zc3anonymousza34923ze3z83_1977 =
											make_fx_procedure
											(BGl_zc3anonymousza34923ze3z83zzcfa_procedurez00,
											(int) (((long) 1)), (int) (((long) 1)));
										PROCEDURE_SET(BgL_zc3anonymousza34923ze3z83_1977,
											(int) (((long) 0)), (obj_t) (BgL_valzd2approxzd2_1744));
										BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
											(BgL_zc3anonymousza34923ze3z83_1977,
											BgL_proczd2approxzd2_1742);
							}}
						{
							obj_t BgL_auxz00_2150;

							{	/* Cfa/procedure.scm 233 */
								BgL_objectz00_bglt BgL_auxz00_2151;

								BgL_auxz00_2151 = (BgL_objectz00_bglt) (BgL_nodez00_1736);
								BgL_auxz00_2150 = BGL_OBJECT_WIDENING(BgL_auxz00_2151);
							}
							BgL_auxz00_2098 =
								(((BgL_procedurezd2setz12zd2appz12_bglt)
									CREF(BgL_auxz00_2150))->BgL_approxz00);
					}}
					return (obj_t) (BgL_auxz00_2098);
				}
			}
		}
	}



/* <anonymous:4915> */
	obj_t BGl_zc3anonymousza34915ze3z83zzcfa_procedurez00(obj_t BgL_envz00_1992,
		obj_t BgL_appz00_1995)
	{
		AN_OBJECT;
		{	/* Cfa/procedure.scm 205 */
			{	/* Cfa/procedure.scm 206 */
				obj_t BgL_offsetz00_1993;

				obj_t BgL_valzd2approxzd2_1994;

				BgL_offsetz00_1993 = PROCEDURE_REF(BgL_envz00_1992, (int) (((long) 0)));
				BgL_valzd2approxzd2_1994 =
					PROCEDURE_REF(BgL_envz00_1992, (int) (((long) 1)));
				{
					obj_t BgL_appz00_1748;

					BgL_appz00_1748 = BgL_appz00_1995;
					{	/* Cfa/procedure.scm 206 */
						bool_t BgL_testz00_2161;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_appz00_1748,
								BGl_makezd2procedurezd2appz00zzcfa_info2z00))
							{	/* Cfa/procedure.scm 209 */
								int BgL_arg4920z00_1754;

								{	/* Cfa/procedure.scm 209 */
									obj_t BgL_arg4921z00_1755;

									{	/* Cfa/procedure.scm 209 */
										BgL_makezd2procedurezd2appz00_bglt BgL_obj4292z00_1943;

										BgL_obj4292z00_1943 =
											(BgL_makezd2procedurezd2appz00_bglt) (BgL_appz00_1748);
										{
											obj_t BgL_auxz00_2165;

											{	/* Cfa/procedure.scm 209 */
												BgL_objectz00_bglt BgL_auxz00_2166;

												BgL_auxz00_2166 =
													(BgL_objectz00_bglt) (BgL_obj4292z00_1943);
												BgL_auxz00_2165 = BGL_OBJECT_WIDENING(BgL_auxz00_2166);
											}
											BgL_arg4921z00_1755 =
												(((BgL_makezd2procedurezd2appz00_bglt)
													CREF(BgL_auxz00_2165))->BgL_valueszd2approxzd2);
									}}
									BgL_arg4920z00_1754 = VECTOR_LENGTH(BgL_arg4921z00_1755);
								}
								BgL_testz00_2161 =
									(
									(long) CINT(BgL_offsetz00_1993) <
									(long) (BgL_arg4920z00_1754));
							}
						else
							{	/* Cfa/procedure.scm 206 */
								BgL_testz00_2161 = ((bool_t) 0);
							}
						if (BgL_testz00_2161)
							{	/* Cfa/procedure.scm 211 */
								obj_t BgL_arg4917z00_1751;

								{	/* Cfa/procedure.scm 211 */
									obj_t BgL_arg4918z00_1752;

									{	/* Cfa/procedure.scm 211 */
										BgL_makezd2procedurezd2appz00_bglt BgL_obj4292z00_1947;

										BgL_obj4292z00_1947 =
											(BgL_makezd2procedurezd2appz00_bglt) (BgL_appz00_1748);
										{
											obj_t BgL_auxz00_2175;

											{	/* Cfa/procedure.scm 211 */
												BgL_objectz00_bglt BgL_auxz00_2176;

												BgL_auxz00_2176 =
													(BgL_objectz00_bglt) (BgL_obj4292z00_1947);
												BgL_auxz00_2175 = BGL_OBJECT_WIDENING(BgL_auxz00_2176);
											}
											BgL_arg4918z00_1752 =
												(((BgL_makezd2procedurezd2appz00_bglt)
													CREF(BgL_auxz00_2175))->BgL_valueszd2approxzd2);
										}
									}
									BgL_arg4917z00_1751 =
										VECTOR_REF(BgL_arg4918z00_1752, CINT(BgL_offsetz00_1993));
								}
								return
									(obj_t) (BGl_unionzd2approxz12zc0zzcfa_approxz00(
										(BgL_approxz00_bglt) (BgL_arg4917z00_1751),
										(BgL_approxz00_bglt) (BgL_valzd2approxzd2_1994)));
							}
						else
							{	/* Cfa/procedure.scm 206 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* <anonymous:4923> */
	obj_t BGl_zc3anonymousza34923ze3z83zzcfa_procedurez00(obj_t BgL_envz00_1996,
		obj_t BgL_appz00_1998)
	{
		AN_OBJECT;
		{	/* Cfa/procedure.scm 218 */
			{	/* Cfa/procedure.scm 219 */
				obj_t BgL_valzd2approxzd2_1997;

				BgL_valzd2approxzd2_1997 =
					PROCEDURE_REF(BgL_envz00_1996, (int) (((long) 0)));
				{
					obj_t BgL_appz00_1758;

					{	/* Cfa/procedure.scm 219 */
						bool_t BgL_auxz00_2188;

						BgL_appz00_1758 = BgL_appz00_1998;
						if (BGl_iszd2azf3z21zz__objectz00(BgL_appz00_1758,
								BGl_makezd2procedurezd2appz00zzcfa_info2z00))
							{	/* Cfa/procedure.scm 220 */
								int BgL_lenz00_1761;

								{	/* Cfa/procedure.scm 221 */
									obj_t BgL_arg4930z00_1770;

									{	/* Cfa/procedure.scm 221 */
										BgL_makezd2procedurezd2appz00_bglt BgL_obj4292z00_1951;

										BgL_obj4292z00_1951 =
											(BgL_makezd2procedurezd2appz00_bglt) (BgL_appz00_1758);
										{
											obj_t BgL_auxz00_2192;

											{	/* Cfa/procedure.scm 221 */
												BgL_objectz00_bglt BgL_auxz00_2193;

												BgL_auxz00_2193 =
													(BgL_objectz00_bglt) (BgL_obj4292z00_1951);
												BgL_auxz00_2192 = BGL_OBJECT_WIDENING(BgL_auxz00_2193);
											}
											BgL_arg4930z00_1770 =
												(((BgL_makezd2procedurezd2appz00_bglt)
													CREF(BgL_auxz00_2192))->BgL_valueszd2approxzd2);
									}}
									BgL_lenz00_1761 = VECTOR_LENGTH(BgL_arg4930z00_1770);
								}
								{
									long BgL_iz00_1763;

									BgL_iz00_1763 = ((long) 0);
								BgL_zc3anonymousza34925ze3z83_1764:
									if ((BgL_iz00_1763 < (long) (BgL_lenz00_1761)))
										{	/* Cfa/procedure.scm 223 */
											{	/* Cfa/procedure.scm 227 */
												obj_t BgL_arg4927z00_1766;

												{	/* Cfa/procedure.scm 227 */
													obj_t BgL_arg4928z00_1767;

													{	/* Cfa/procedure.scm 227 */
														BgL_makezd2procedurezd2appz00_bglt
															BgL_obj4292z00_1955;
														BgL_obj4292z00_1955 =
															(BgL_makezd2procedurezd2appz00_bglt)
															(BgL_appz00_1758);
														{
															obj_t BgL_auxz00_2202;

															{	/* Cfa/procedure.scm 227 */
																BgL_objectz00_bglt BgL_auxz00_2203;

																BgL_auxz00_2203 =
																	(BgL_objectz00_bglt) (BgL_obj4292z00_1955);
																BgL_auxz00_2202 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_2203);
															}
															BgL_arg4928z00_1767 =
																(((BgL_makezd2procedurezd2appz00_bglt)
																	CREF(BgL_auxz00_2202))->
																BgL_valueszd2approxzd2);
													}}
													BgL_arg4927z00_1766 =
														VECTOR_REF(BgL_arg4928z00_1767,
														(int) (BgL_iz00_1763));
												}
												BGl_unionzd2approxz12zc0zzcfa_approxz00(
													(BgL_approxz00_bglt) (BgL_arg4927z00_1766),
													(BgL_approxz00_bglt) (BgL_valzd2approxzd2_1997));
											}
											{
												long BgL_iz00_2212;

												BgL_iz00_2212 = (BgL_iz00_1763 + ((long) 1));
												BgL_iz00_1763 = BgL_iz00_2212;
												goto BgL_zc3anonymousza34925ze3z83_1764;
											}
										}
									else
										{	/* Cfa/procedure.scm 223 */
											BgL_auxz00_2188 = ((bool_t) 0);
										}
								}
							}
						else
							{	/* Cfa/procedure.scm 219 */
								BgL_auxz00_2188 = ((bool_t) 0);
							}
						return BBOOL(BgL_auxz00_2188);
					}
				}
			}
		}
	}



/* cfa!-procedure-ref-a4714 */
	obj_t BGl_cfaz12zd2procedurezd2refzd2a4714zc0zzcfa_procedurez00(obj_t
		BgL_envz00_1999, obj_t BgL_nodez00_2000)
	{
		AN_OBJECT;
		{	/* Cfa/procedure.scm 141 */
			{
				BgL_procedurezd2refzd2appz00_bglt BgL_nodez00_1691;

				{	/* Cfa/procedure.scm 142 */
					BgL_approxz00_bglt BgL_auxz00_2215;

					BgL_nodez00_1691 =
						(BgL_procedurezd2refzd2appz00_bglt) (BgL_nodez00_2000);
					{	/* Cfa/procedure.scm 143 */
						obj_t BgL_arg4880z00_1695;

						{	/* Cfa/procedure.scm 143 */
							obj_t BgL_pairz00_1885;

							{
								BgL_appz00_bglt BgL_auxz00_2216;

								BgL_auxz00_2216 = (BgL_appz00_bglt) (BgL_nodez00_1691);
								BgL_pairz00_1885 =
									(((BgL_appz00_bglt) CREF(BgL_auxz00_2216))->BgL_argsz00);
							}
							BgL_arg4880z00_1695 = CAR(CDR(BgL_pairz00_1885));
						}
						BGl_cfaz12z12zzcfa_cfaz00((BgL_nodez00_bglt) (BgL_arg4880z00_1695));
					}
					{	/* Cfa/procedure.scm 144 */
						BgL_approxz00_bglt BgL_proczd2approxzd2_1697;

						obj_t BgL_offsetz00_1698;

						{	/* Cfa/procedure.scm 144 */
							obj_t BgL_arg4905z00_1730;

							{	/* Cfa/procedure.scm 144 */
								obj_t BgL_pairz00_1890;

								{
									BgL_appz00_bglt BgL_auxz00_2223;

									BgL_auxz00_2223 = (BgL_appz00_bglt) (BgL_nodez00_1691);
									BgL_pairz00_1890 =
										(((BgL_appz00_bglt) CREF(BgL_auxz00_2223))->BgL_argsz00);
								}
								BgL_arg4905z00_1730 = CAR(BgL_pairz00_1890);
							}
							BgL_proczd2approxzd2_1697 =
								BGl_cfaz12z12zzcfa_cfaz00(
								(BgL_nodez00_bglt) (BgL_arg4905z00_1730));
						}
						{	/* Cfa/procedure.scm 145 */
							obj_t BgL_arg4907z00_1732;

							{	/* Cfa/procedure.scm 145 */
								obj_t BgL_pairz00_1892;

								{
									BgL_appz00_bglt BgL_auxz00_2229;

									BgL_auxz00_2229 = (BgL_appz00_bglt) (BgL_nodez00_1691);
									BgL_pairz00_1892 =
										(((BgL_appz00_bglt) CREF(BgL_auxz00_2229))->BgL_argsz00);
								}
								BgL_arg4907z00_1732 = CAR(CDR(BgL_pairz00_1892));
							}
							BgL_offsetz00_1698 =
								BGl_getzd2nodezd2atomzd2valuezd2zzcfa_approxz00(
								(BgL_nodez00_bglt) (BgL_arg4907z00_1732));
						}
						if (
							(((BgL_approxz00_bglt) CREF(BgL_proczd2approxzd2_1697))->
								BgL_topzf3zf3))
							{	/* Cfa/procedure.scm 150 */
								BgL_approxz00_bglt BgL_arg4883z00_1700;

								{
									obj_t BgL_auxz00_2238;

									{	/* Cfa/procedure.scm 150 */
										BgL_objectz00_bglt BgL_auxz00_2239;

										BgL_auxz00_2239 = (BgL_objectz00_bglt) (BgL_nodez00_1691);
										BgL_auxz00_2238 = BGL_OBJECT_WIDENING(BgL_auxz00_2239);
									}
									BgL_arg4883z00_1700 =
										(((BgL_procedurezd2refzd2appz00_bglt)
											CREF(BgL_auxz00_2238))->BgL_approxz00);
								}
								BGl_approxzd2setzd2topz12z12zzcfa_approxz00
									(BgL_arg4883z00_1700);
							}
						else
							{	/* Cfa/procedure.scm 149 */
								BFALSE;
							}
						if (INTEGERP(BgL_offsetz00_1698))
							{	/* Cfa/procedure.scm 155 */
								obj_t BgL_zc3anonymousza34886ze3z83_1979;

								BgL_zc3anonymousza34886ze3z83_1979 =
									make_fx_procedure
									(BGl_zc3anonymousza34886ze3z83zzcfa_procedurez00,
									(int) (((long) 1)), (int) (((long) 2)));
								PROCEDURE_SET(BgL_zc3anonymousza34886ze3z83_1979,
									(int) (((long) 0)), (obj_t) (BgL_nodez00_1691));
								PROCEDURE_SET(BgL_zc3anonymousza34886ze3z83_1979,
									(int) (((long) 1)), BgL_offsetz00_1698);
								BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
									(BgL_zc3anonymousza34886ze3z83_1979,
									BgL_proczd2approxzd2_1697);
							}
						else
							{	/* Cfa/procedure.scm 170 */
								obj_t BgL_zc3anonymousza34896ze3z83_1980;

								BgL_zc3anonymousza34896ze3z83_1980 =
									make_fx_procedure
									(BGl_zc3anonymousza34896ze3z83zzcfa_procedurez00,
									(int) (((long) 1)), (int) (((long) 1)));
								PROCEDURE_SET(BgL_zc3anonymousza34896ze3z83_1980,
									(int) (((long) 0)), (obj_t) (BgL_nodez00_1691));
								BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
									(BgL_zc3anonymousza34896ze3z83_1980,
									BgL_proczd2approxzd2_1697);
							}
						{
							obj_t BgL_auxz00_2262;

							{	/* Cfa/procedure.scm 184 */
								BgL_objectz00_bglt BgL_auxz00_2263;

								BgL_auxz00_2263 = (BgL_objectz00_bglt) (BgL_nodez00_1691);
								BgL_auxz00_2262 = BGL_OBJECT_WIDENING(BgL_auxz00_2263);
							}
							BgL_auxz00_2215 =
								(((BgL_procedurezd2refzd2appz00_bglt) CREF(BgL_auxz00_2262))->
								BgL_approxz00);
					}}
					return (obj_t) (BgL_auxz00_2215);
				}
			}
		}
	}



/* <anonymous:4886> */
	obj_t BGl_zc3anonymousza34886ze3z83zzcfa_procedurez00(obj_t BgL_envz00_2001,
		obj_t BgL_appz00_2004)
	{
		AN_OBJECT;
		{	/* Cfa/procedure.scm 154 */
			{	/* Cfa/procedure.scm 155 */
				obj_t BgL_instance4696z00_2002;

				obj_t BgL_offsetz00_2003;

				BgL_instance4696z00_2002 =
					PROCEDURE_REF(BgL_envz00_2001, (int) (((long) 0)));
				BgL_offsetz00_2003 = PROCEDURE_REF(BgL_envz00_2001, (int) (((long) 1)));
				{
					obj_t BgL_appz00_1703;

					BgL_appz00_1703 = BgL_appz00_2004;
					{	/* Cfa/procedure.scm 155 */
						bool_t BgL_testz00_2273;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_appz00_1703,
								BGl_makezd2procedurezd2appz00zzcfa_info2z00))
							{	/* Cfa/procedure.scm 158 */
								int BgL_arg4893z00_1711;

								{	/* Cfa/procedure.scm 158 */
									obj_t BgL_arg4894z00_1712;

									{	/* Cfa/procedure.scm 158 */
										BgL_makezd2procedurezd2appz00_bglt BgL_obj4292z00_1900;

										BgL_obj4292z00_1900 =
											(BgL_makezd2procedurezd2appz00_bglt) (BgL_appz00_1703);
										{
											obj_t BgL_auxz00_2277;

											{	/* Cfa/procedure.scm 158 */
												BgL_objectz00_bglt BgL_auxz00_2278;

												BgL_auxz00_2278 =
													(BgL_objectz00_bglt) (BgL_obj4292z00_1900);
												BgL_auxz00_2277 = BGL_OBJECT_WIDENING(BgL_auxz00_2278);
											}
											BgL_arg4894z00_1712 =
												(((BgL_makezd2procedurezd2appz00_bglt)
													CREF(BgL_auxz00_2277))->BgL_valueszd2approxzd2);
									}}
									BgL_arg4893z00_1711 = VECTOR_LENGTH(BgL_arg4894z00_1712);
								}
								BgL_testz00_2273 =
									(
									(long) CINT(BgL_offsetz00_2003) <
									(long) (BgL_arg4893z00_1711));
							}
						else
							{	/* Cfa/procedure.scm 155 */
								BgL_testz00_2273 = ((bool_t) 0);
							}
						if (BgL_testz00_2273)
							{	/* Cfa/procedure.scm 159 */
								BgL_approxz00_bglt BgL_arg4888z00_1706;

								obj_t BgL_arg4889z00_1707;

								{	/* Cfa/procedure.scm 159 */
									BgL_procedurezd2refzd2appz00_bglt BgL_obj4341z00_1904;

									BgL_obj4341z00_1904 =
										(BgL_procedurezd2refzd2appz00_bglt)
										(BgL_instance4696z00_2002);
									{
										obj_t BgL_auxz00_2287;

										{	/* Cfa/procedure.scm 159 */
											BgL_objectz00_bglt BgL_auxz00_2288;

											BgL_auxz00_2288 =
												(BgL_objectz00_bglt) (BgL_obj4341z00_1904);
											BgL_auxz00_2287 = BGL_OBJECT_WIDENING(BgL_auxz00_2288);
										}
										BgL_arg4888z00_1706 =
											(((BgL_procedurezd2refzd2appz00_bglt)
												CREF(BgL_auxz00_2287))->BgL_approxz00);
									}
								}
								{	/* Cfa/procedure.scm 161 */
									obj_t BgL_arg4890z00_1708;

									{	/* Cfa/procedure.scm 161 */
										BgL_makezd2procedurezd2appz00_bglt BgL_obj4292z00_1905;

										BgL_obj4292z00_1905 =
											(BgL_makezd2procedurezd2appz00_bglt) (BgL_appz00_1703);
										{
											obj_t BgL_auxz00_2293;

											{	/* Cfa/procedure.scm 161 */
												BgL_objectz00_bglt BgL_auxz00_2294;

												BgL_auxz00_2294 =
													(BgL_objectz00_bglt) (BgL_obj4292z00_1905);
												BgL_auxz00_2293 = BGL_OBJECT_WIDENING(BgL_auxz00_2294);
											}
											BgL_arg4890z00_1708 =
												(((BgL_makezd2procedurezd2appz00_bglt)
													CREF(BgL_auxz00_2293))->BgL_valueszd2approxzd2);
										}
									}
									BgL_arg4889z00_1707 =
										VECTOR_REF(BgL_arg4890z00_1708, CINT(BgL_offsetz00_2003));
								}
								return
									(obj_t) (BGl_unionzd2approxz12zc0zzcfa_approxz00
									(BgL_arg4888z00_1706,
										(BgL_approxz00_bglt) (BgL_arg4889z00_1707)));
							}
						else
							{	/* Cfa/procedure.scm 165 */
								BgL_approxz00_bglt BgL_arg4891z00_1709;

								{	/* Cfa/procedure.scm 165 */
									BgL_procedurezd2refzd2appz00_bglt BgL_obj4341z00_1908;

									BgL_obj4341z00_1908 =
										(BgL_procedurezd2refzd2appz00_bglt)
										(BgL_instance4696z00_2002);
									{
										obj_t BgL_auxz00_2304;

										{	/* Cfa/procedure.scm 165 */
											BgL_objectz00_bglt BgL_auxz00_2305;

											BgL_auxz00_2305 =
												(BgL_objectz00_bglt) (BgL_obj4341z00_1908);
											BgL_auxz00_2304 = BGL_OBJECT_WIDENING(BgL_auxz00_2305);
										}
										BgL_arg4891z00_1709 =
											(((BgL_procedurezd2refzd2appz00_bglt)
												CREF(BgL_auxz00_2304))->BgL_approxz00);
									}
								}
								return
									BGl_approxzd2setzd2topz12z12zzcfa_approxz00
									(BgL_arg4891z00_1709);
							}
					}
				}
			}
		}
	}



/* <anonymous:4896> */
	obj_t BGl_zc3anonymousza34896ze3z83zzcfa_procedurez00(obj_t BgL_envz00_2005,
		obj_t BgL_appz00_2007)
	{
		AN_OBJECT;
		{	/* Cfa/procedure.scm 169 */
			{	/* Cfa/procedure.scm 170 */
				obj_t BgL_instance4696z00_2006;

				BgL_instance4696z00_2006 =
					PROCEDURE_REF(BgL_envz00_2005, (int) (((long) 0)));
				{
					obj_t BgL_appz00_1715;

					{	/* Cfa/procedure.scm 170 */
						bool_t BgL_auxz00_2312;

						BgL_appz00_1715 = BgL_appz00_2007;
						if (BGl_iszd2azf3z21zz__objectz00(BgL_appz00_1715,
								BGl_makezd2procedurezd2appz00zzcfa_info2z00))
							{	/* Cfa/procedure.scm 171 */
								int BgL_lenz00_1718;

								{	/* Cfa/procedure.scm 172 */
									obj_t BgL_arg4904z00_1728;

									{	/* Cfa/procedure.scm 172 */
										BgL_makezd2procedurezd2appz00_bglt BgL_obj4292z00_1910;

										BgL_obj4292z00_1910 =
											(BgL_makezd2procedurezd2appz00_bglt) (BgL_appz00_1715);
										{
											obj_t BgL_auxz00_2316;

											{	/* Cfa/procedure.scm 172 */
												BgL_objectz00_bglt BgL_auxz00_2317;

												BgL_auxz00_2317 =
													(BgL_objectz00_bglt) (BgL_obj4292z00_1910);
												BgL_auxz00_2316 = BGL_OBJECT_WIDENING(BgL_auxz00_2317);
											}
											BgL_arg4904z00_1728 =
												(((BgL_makezd2procedurezd2appz00_bglt)
													CREF(BgL_auxz00_2316))->BgL_valueszd2approxzd2);
									}}
									BgL_lenz00_1718 = VECTOR_LENGTH(BgL_arg4904z00_1728);
								}
								{
									long BgL_iz00_1720;

									BgL_iz00_1720 = ((long) 0);
								BgL_zc3anonymousza34898ze3z83_1721:
									if ((BgL_iz00_1720 < (long) (BgL_lenz00_1718)))
										{	/* Cfa/procedure.scm 174 */
											{	/* Cfa/procedure.scm 176 */
												BgL_approxz00_bglt BgL_arg4900z00_1723;

												obj_t BgL_arg4901z00_1724;

												{	/* Cfa/procedure.scm 176 */
													BgL_procedurezd2refzd2appz00_bglt BgL_obj4341z00_1914;

													BgL_obj4341z00_1914 =
														(BgL_procedurezd2refzd2appz00_bglt)
														(BgL_instance4696z00_2006);
													{
														obj_t BgL_auxz00_2326;

														{	/* Cfa/procedure.scm 176 */
															BgL_objectz00_bglt BgL_auxz00_2327;

															BgL_auxz00_2327 =
																(BgL_objectz00_bglt) (BgL_obj4341z00_1914);
															BgL_auxz00_2326 =
																BGL_OBJECT_WIDENING(BgL_auxz00_2327);
														}
														BgL_arg4900z00_1723 =
															(((BgL_procedurezd2refzd2appz00_bglt)
																CREF(BgL_auxz00_2326))->BgL_approxz00);
												}}
												{	/* Cfa/procedure.scm 179 */
													obj_t BgL_arg4902z00_1725;

													{	/* Cfa/procedure.scm 179 */
														BgL_makezd2procedurezd2appz00_bglt
															BgL_obj4292z00_1915;
														BgL_obj4292z00_1915 =
															(BgL_makezd2procedurezd2appz00_bglt)
															(BgL_appz00_1715);
														{
															obj_t BgL_auxz00_2332;

															{	/* Cfa/procedure.scm 179 */
																BgL_objectz00_bglt BgL_auxz00_2333;

																BgL_auxz00_2333 =
																	(BgL_objectz00_bglt) (BgL_obj4292z00_1915);
																BgL_auxz00_2332 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_2333);
															}
															BgL_arg4902z00_1725 =
																(((BgL_makezd2procedurezd2appz00_bglt)
																	CREF(BgL_auxz00_2332))->
																BgL_valueszd2approxzd2);
													}}
													BgL_arg4901z00_1724 =
														VECTOR_REF(BgL_arg4902z00_1725,
														(int) (BgL_iz00_1720));
												}
												BGl_unionzd2approxz12zc0zzcfa_approxz00
													(BgL_arg4900z00_1723,
													(BgL_approxz00_bglt) (BgL_arg4901z00_1724));
											}
											{
												long BgL_iz00_2341;

												BgL_iz00_2341 = (BgL_iz00_1720 + ((long) 1));
												BgL_iz00_1720 = BgL_iz00_2341;
												goto BgL_zc3anonymousza34898ze3z83_1721;
											}
										}
									else
										{	/* Cfa/procedure.scm 174 */
											BgL_auxz00_2312 = ((bool_t) 0);
										}
								}
							}
						else
							{	/* Cfa/procedure.scm 170 */
								BgL_auxz00_2312 = ((bool_t) 0);
							}
						return BBOOL(BgL_auxz00_2312);
					}
				}
			}
		}
	}



/* cfa!-make-procedure-4712 */
	obj_t BGl_cfaz12zd2makezd2procedurezd24712zc0zzcfa_procedurez00(obj_t
		BgL_envz00_2008, obj_t BgL_nodez00_2009)
	{
		AN_OBJECT;
		{	/* Cfa/procedure.scm 120 */
			{
				BgL_makezd2procedurezd2appz00_bglt BgL_nodez00_1668;

				{	/* Cfa/procedure.scm 121 */
					BgL_approxz00_bglt BgL_auxz00_2344;

					BgL_nodez00_1668 =
						(BgL_makezd2procedurezd2appz00_bglt) (BgL_nodez00_2009);
					{	/* Cfa/procedure.scm 124 */
						obj_t BgL_procz00_1672;

						{	/* Cfa/procedure.scm 124 */
							obj_t BgL_pairz00_1871;

							{
								BgL_appz00_bglt BgL_auxz00_2345;

								BgL_auxz00_2345 = (BgL_appz00_bglt) (BgL_nodez00_1668);
								BgL_pairz00_1871 =
									(((BgL_appz00_bglt) CREF(BgL_auxz00_2345))->BgL_argsz00);
							}
							BgL_procz00_1672 = CAR(BgL_pairz00_1871);
						}
						{	/* Cfa/procedure.scm 124 */
							BgL_valuez00_bglt BgL_funz00_1673;

							{	/* Cfa/procedure.scm 125 */
								BgL_variablez00_bglt BgL_obj1611z00_1873;

								{
									BgL_varz00_bglt BgL_auxz00_2349;

									BgL_auxz00_2349 = (BgL_varz00_bglt) (BgL_procz00_1672);
									BgL_obj1611z00_1873 =
										(((BgL_varz00_bglt) CREF(BgL_auxz00_2349))->
										BgL_variablez00);
								}
								BgL_funz00_1673 =
									(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1873))->
									BgL_valuez00);
							}
							{	/* Cfa/procedure.scm 125 */
								obj_t BgL_envz00_1674;

								{	/* Cfa/procedure.scm 126 */
									obj_t BgL_pairz00_1875;

									{
										BgL_sfunz00_bglt BgL_auxz00_2353;

										BgL_auxz00_2353 = (BgL_sfunz00_bglt) (BgL_funz00_1673);
										BgL_pairz00_1875 =
											(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2353))->BgL_argsz00);
									}
									BgL_envz00_1674 = CAR(BgL_pairz00_1875);
								}
								{	/* Cfa/procedure.scm 126 */

									{	/* Cfa/procedure.scm 133 */
										BgL_approxz00_bglt BgL_arg4869z00_1675;

										BgL_approxz00_bglt BgL_arg4870z00_1676;

										{	/* Cfa/procedure.scm 133 */
											BgL_svarzf2cinfozf2_bglt BgL_obj3502z00_1877;

											{	/* Cfa/procedure.scm 133 */
												BgL_variablez00_bglt BgL_obj1611z00_1876;

												BgL_obj1611z00_1876 =
													(BgL_variablez00_bglt) (BgL_envz00_1674);
												BgL_obj3502z00_1877 =
													(BgL_svarzf2cinfozf2_bglt) (
													(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1876))->
														BgL_valuez00));
											}
											{
												obj_t BgL_auxz00_2360;

												{	/* Cfa/procedure.scm 133 */
													BgL_objectz00_bglt BgL_auxz00_2361;

													BgL_auxz00_2361 =
														(BgL_objectz00_bglt) (BgL_obj3502z00_1877);
													BgL_auxz00_2360 =
														BGL_OBJECT_WIDENING(BgL_auxz00_2361);
												}
												BgL_arg4869z00_1675 =
													(((BgL_svarzf2cinfozf2_bglt) CREF(BgL_auxz00_2360))->
													BgL_approxz00);
											}
										}
										{
											obj_t BgL_auxz00_2365;

											{	/* Cfa/procedure.scm 133 */
												BgL_objectz00_bglt BgL_auxz00_2366;

												BgL_auxz00_2366 =
													(BgL_objectz00_bglt) (BgL_nodez00_1668);
												BgL_auxz00_2365 = BGL_OBJECT_WIDENING(BgL_auxz00_2366);
											}
											BgL_arg4870z00_1676 =
												(((BgL_makezd2procedurezd2appz00_bglt)
													CREF(BgL_auxz00_2365))->BgL_approxz00);
										}
										BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg4869z00_1675,
											BgL_arg4870z00_1676);
									}
								}
							}
						}
					}
					{	/* Cfa/procedure.scm 135 */
						obj_t BgL_g4704z00_1681;

						{
							BgL_appz00_bglt BgL_auxz00_2371;

							BgL_auxz00_2371 = (BgL_appz00_bglt) (BgL_nodez00_1668);
							BgL_g4704z00_1681 =
								(((BgL_appz00_bglt) CREF(BgL_auxz00_2371))->BgL_argsz00);
						}
						{
							obj_t BgL_l4702z00_1683;

							BgL_l4702z00_1683 = BgL_g4704z00_1681;
						BgL_zc3anonymousza34875ze3z83_1684:
							if (PAIRP(BgL_l4702z00_1683))
								{	/* Cfa/procedure.scm 135 */
									{	/* Cfa/procedure.scm 135 */
										obj_t BgL_arg4877z00_1686;

										BgL_arg4877z00_1686 = CAR(BgL_l4702z00_1683);
										BGl_cfaz12z12zzcfa_cfaz00(
											(BgL_nodez00_bglt) (BgL_arg4877z00_1686));
									}
									{
										obj_t BgL_l4702z00_2379;

										BgL_l4702z00_2379 = CDR(BgL_l4702z00_1683);
										BgL_l4702z00_1683 = BgL_l4702z00_2379;
										goto BgL_zc3anonymousza34875ze3z83_1684;
									}
								}
							else
								{	/* Cfa/procedure.scm 135 */
									((bool_t) 1);
								}
						}
					}
					{
						obj_t BgL_auxz00_2381;

						{	/* Cfa/procedure.scm 136 */
							BgL_objectz00_bglt BgL_auxz00_2382;

							BgL_auxz00_2382 = (BgL_objectz00_bglt) (BgL_nodez00_1668);
							BgL_auxz00_2381 = BGL_OBJECT_WIDENING(BgL_auxz00_2382);
						}
						BgL_auxz00_2344 =
							(((BgL_makezd2procedurezd2appz00_bglt) CREF(BgL_auxz00_2381))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_2344);
				}
			}
		}
	}



/* node-setup!-pre-proc4710 */
	obj_t BGl_nodezd2setupz12zd2prezd2proc4710zc0zzcfa_procedurez00(obj_t
		BgL_envz00_2010, obj_t BgL_nodez00_2011)
	{
		AN_OBJECT;
		{	/* Cfa/procedure.scm 109 */
			{
				BgL_prezd2procedurezd2setz12zd2appzc0_bglt BgL_nodez00_1652;

				{	/* Cfa/procedure.scm 110 */
					BgL_appz00_bglt BgL_auxz00_2388;

					BgL_nodez00_1652 =
						(BgL_prezd2procedurezd2setz12zd2appzc0_bglt) (BgL_nodez00_2011);
					BGl_addzd2procedurezd2refz12z12zzcfa_closurez00(
						(BgL_nodez00_bglt) (BgL_nodez00_1652));
					{	/* Cfa/procedure.scm 112 */
						obj_t BgL_arg4861z00_1656;

						{
							BgL_appz00_bglt BgL_auxz00_2391;

							BgL_auxz00_2391 = (BgL_appz00_bglt) (BgL_nodez00_1652);
							BgL_arg4861z00_1656 =
								(((BgL_appz00_bglt) CREF(BgL_auxz00_2391))->BgL_argsz00);
						}
						BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg4861z00_1656);
					}
					{	/* Cfa/procedure.scm 113 */
						BgL_prezd2procedurezd2setz12zd2appzc0_bglt BgL_nodez00_1657;

						{	/* Cfa/procedure.scm 113 */
							long BgL_arg4865z00_1663;

							{	/* Cfa/procedure.scm 113 */
								obj_t BgL_arg4866z00_1664;

								{	/* Cfa/procedure.scm 113 */
									obj_t BgL_arg4867z00_1665;

									{	/* Cfa/procedure.scm 113 */
										BgL_objectz00_bglt BgL_objectz00_1858;

										BgL_objectz00_1858 =
											(BgL_objectz00_bglt) (BgL_nodez00_1652);
										{	/* Cfa/procedure.scm 113 */
											long BgL_arg2646z00_1859;

											{	/* Cfa/procedure.scm 113 */
												long BgL_arg2647z00_1860;

												BgL_arg2647z00_1860 =
													BGL_OBJECT_CLASS_NUM(BgL_objectz00_1858);
												BgL_arg2646z00_1859 =
													(BgL_arg2647z00_1860 - OBJECT_TYPE);
											}
											BgL_arg4867z00_1665 =
												VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
												(int) (BgL_arg2646z00_1859));
									}}
									BgL_arg4866z00_1664 =
										BGl_classzd2superzd2zz__objectz00(BgL_arg4867z00_1665);
								}
								BgL_arg4865z00_1663 =
									BGl_classzd2numzd2zz__objectz00(BgL_arg4866z00_1664);
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_nodez00_1652), BgL_arg4865z00_1663);
						}
						{	/* Cfa/procedure.scm 113 */
							BgL_objectz00_bglt BgL_auxz00_2404;

							BgL_auxz00_2404 = (BgL_objectz00_bglt) (BgL_nodez00_1652);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2404, BFALSE);
						}
						BgL_nodez00_1657 = BgL_nodez00_1652;
						{	/* Cfa/procedure.scm 114 */
							BgL_appz00_bglt BgL_obj4693z00_1658;

							BgL_obj4693z00_1658 =
								((BgL_appz00_bglt) (BgL_appz00_bglt) (BgL_nodez00_1657));
							{	/* Cfa/procedure.scm 114 */
								obj_t BgL_auxz00_2411;

								BgL_objectz00_bglt BgL_auxz00_2409;

								BgL_auxz00_2411 =
									BGl_wideningzd2procedurezd2setz12zd2appzc0zzcfa_info2z00
									(BGl_makezd2typezd2approxz00zzcfa_approxz00((BgL_typez00_bglt)
										(BGl_za2unspecza2z00zztype_cachez00)));
								BgL_auxz00_2409 = (BgL_objectz00_bglt) (BgL_obj4693z00_1658);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2409, BgL_auxz00_2411);
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_obj4693z00_1658),
								BGl_classzd2numzd2zz__objectz00
								(BGl_procedurezd2setz12zd2appz12zzcfa_info2z00));
							BgL_auxz00_2388 = BgL_obj4693z00_1658;
					}}
					return (obj_t) (BgL_auxz00_2388);
				}
			}
		}
	}



/* node-setup!-pre-proc4708 */
	obj_t BGl_nodezd2setupz12zd2prezd2proc4708zc0zzcfa_procedurez00(obj_t
		BgL_envz00_2012, obj_t BgL_nodez00_2013)
	{
		AN_OBJECT;
		{	/* Cfa/procedure.scm 98 */
			{
				BgL_prezd2procedurezd2refzd2appzd2_bglt BgL_nodez00_1636;

				{	/* Cfa/procedure.scm 99 */
					BgL_appz00_bglt BgL_auxz00_2421;

					BgL_nodez00_1636 =
						(BgL_prezd2procedurezd2refzd2appzd2_bglt) (BgL_nodez00_2013);
					BGl_addzd2procedurezd2refz12z12zzcfa_closurez00(
						(BgL_nodez00_bglt) (BgL_nodez00_1636));
					{	/* Cfa/procedure.scm 101 */
						obj_t BgL_arg4853z00_1640;

						{
							BgL_appz00_bglt BgL_auxz00_2424;

							BgL_auxz00_2424 = (BgL_appz00_bglt) (BgL_nodez00_1636);
							BgL_arg4853z00_1640 =
								(((BgL_appz00_bglt) CREF(BgL_auxz00_2424))->BgL_argsz00);
						}
						BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg4853z00_1640);
					}
					{	/* Cfa/procedure.scm 102 */
						BgL_prezd2procedurezd2refzd2appzd2_bglt BgL_nodez00_1641;

						{	/* Cfa/procedure.scm 102 */
							long BgL_arg4857z00_1647;

							{	/* Cfa/procedure.scm 102 */
								obj_t BgL_arg4858z00_1648;

								{	/* Cfa/procedure.scm 102 */
									obj_t BgL_arg4859z00_1649;

									{	/* Cfa/procedure.scm 102 */
										BgL_objectz00_bglt BgL_objectz00_1845;

										BgL_objectz00_1845 =
											(BgL_objectz00_bglt) (BgL_nodez00_1636);
										{	/* Cfa/procedure.scm 102 */
											long BgL_arg2646z00_1846;

											{	/* Cfa/procedure.scm 102 */
												long BgL_arg2647z00_1847;

												BgL_arg2647z00_1847 =
													BGL_OBJECT_CLASS_NUM(BgL_objectz00_1845);
												BgL_arg2646z00_1846 =
													(BgL_arg2647z00_1847 - OBJECT_TYPE);
											}
											BgL_arg4859z00_1649 =
												VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
												(int) (BgL_arg2646z00_1846));
									}}
									BgL_arg4858z00_1648 =
										BGl_classzd2superzd2zz__objectz00(BgL_arg4859z00_1649);
								}
								BgL_arg4857z00_1647 =
									BGl_classzd2numzd2zz__objectz00(BgL_arg4858z00_1648);
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_nodez00_1636), BgL_arg4857z00_1647);
						}
						{	/* Cfa/procedure.scm 102 */
							BgL_objectz00_bglt BgL_auxz00_2437;

							BgL_auxz00_2437 = (BgL_objectz00_bglt) (BgL_nodez00_1636);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2437, BFALSE);
						}
						BgL_nodez00_1641 = BgL_nodez00_1636;
						{	/* Cfa/procedure.scm 103 */
							BgL_appz00_bglt BgL_obj4689z00_1642;

							BgL_obj4689z00_1642 =
								((BgL_appz00_bglt) (BgL_appz00_bglt) (BgL_nodez00_1641));
							{	/* Cfa/procedure.scm 103 */
								obj_t BgL_auxz00_2444;

								BgL_objectz00_bglt BgL_auxz00_2442;

								BgL_auxz00_2444 =
									BGl_wideningzd2procedurezd2refzd2appzd2zzcfa_info2z00
									(BGl_makezd2typezd2approxz00zzcfa_approxz00((BgL_typez00_bglt)
										(BGl_za2objza2z00zztype_cachez00)));
								BgL_auxz00_2442 = (BgL_objectz00_bglt) (BgL_obj4689z00_1642);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2442, BgL_auxz00_2444);
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_obj4689z00_1642),
								BGl_classzd2numzd2zz__objectz00
								(BGl_procedurezd2refzd2appz00zzcfa_info2z00));
							BgL_auxz00_2421 = BgL_obj4689z00_1642;
					}}
					return (obj_t) (BgL_auxz00_2421);
				}
			}
		}
	}



/* node-setup!-pre-make4706 */
	obj_t BGl_nodezd2setupz12zd2prezd2make4706zc0zzcfa_procedurez00(obj_t
		BgL_envz00_2014, obj_t BgL_nodez00_2015)
	{
		AN_OBJECT;
		{	/* Cfa/procedure.scm 48 */
			{
				BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_nodez00_1582;

				BgL_nodez00_1582 =
					(BgL_prezd2makezd2procedurezd2appzd2_bglt) (BgL_nodez00_2015);
				{

					{
						obj_t BgL_lenz00_1622;

						BGl_addzd2makezd2procedurez12z12zzcfa_closurez00(
							(BgL_nodez00_bglt) (BgL_nodez00_1582));
						{	/* Cfa/procedure.scm 59 */
							obj_t BgL_arg4820z00_1587;

							{
								BgL_appz00_bglt BgL_auxz00_2456;

								BgL_auxz00_2456 = (BgL_appz00_bglt) (BgL_nodez00_1582);
								BgL_arg4820z00_1587 =
									(((BgL_appz00_bglt) CREF(BgL_auxz00_2456))->BgL_argsz00);
							}
							BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg4820z00_1587);
						}
						{	/* Cfa/procedure.scm 60 */
							BgL_variablez00_bglt BgL_ownerz00_1588;

							{
								obj_t BgL_auxz00_2460;

								{	/* Cfa/procedure.scm 60 */
									BgL_objectz00_bglt BgL_auxz00_2461;

									BgL_auxz00_2461 = (BgL_objectz00_bglt) (BgL_nodez00_1582);
									BgL_auxz00_2460 = BGL_OBJECT_WIDENING(BgL_auxz00_2461);
								}
								BgL_ownerz00_1588 =
									(((BgL_prezd2makezd2procedurezd2appzd2_bglt)
										CREF(BgL_auxz00_2460))->BgL_ownerz00);
							}
							{	/* Cfa/procedure.scm 60 */
								BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_nodez00_1589;

								{	/* Cfa/procedure.scm 61 */
									long BgL_arg4842z00_1619;

									{	/* Cfa/procedure.scm 61 */
										obj_t BgL_arg4844z00_1620;

										{	/* Cfa/procedure.scm 61 */
											obj_t BgL_arg4845z00_1621;

											{	/* Cfa/procedure.scm 61 */
												BgL_objectz00_bglt BgL_objectz00_1797;

												BgL_objectz00_1797 =
													(BgL_objectz00_bglt) (BgL_nodez00_1582);
												{	/* Cfa/procedure.scm 61 */
													long BgL_arg2646z00_1798;

													{	/* Cfa/procedure.scm 61 */
														long BgL_arg2647z00_1799;

														BgL_arg2647z00_1799 =
															BGL_OBJECT_CLASS_NUM(BgL_objectz00_1797);
														BgL_arg2646z00_1798 =
															(BgL_arg2647z00_1799 - OBJECT_TYPE);
													}
													BgL_arg4845z00_1621 =
														VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
														(int) (BgL_arg2646z00_1798));
											}}
											BgL_arg4844z00_1620 =
												BGl_classzd2superzd2zz__objectz00(BgL_arg4845z00_1621);
										}
										BgL_arg4842z00_1619 =
											BGl_classzd2numzd2zz__objectz00(BgL_arg4844z00_1620);
									}
									BGL_OBJECT_CLASS_NUM_SET(
										(BgL_objectz00_bglt) (BgL_nodez00_1582),
										BgL_arg4842z00_1619);
								}
								{	/* Cfa/procedure.scm 61 */
									BgL_objectz00_bglt BgL_auxz00_2474;

									BgL_auxz00_2474 = (BgL_objectz00_bglt) (BgL_nodez00_1582);
									BGL_OBJECT_WIDENING_SET(BgL_auxz00_2474, BFALSE);
								}
								BgL_nodez00_1589 = BgL_nodez00_1582;
								{	/* Cfa/procedure.scm 61 */

									{	/* Cfa/procedure.scm 62 */
										obj_t BgL_proczd2siza7ez75_1590;

										obj_t BgL_procz00_1591;

										{	/* Cfa/procedure.scm 62 */
											obj_t BgL_arg4839z00_1615;

											{	/* Cfa/procedure.scm 62 */
												obj_t BgL_pairz00_1808;

												{
													BgL_appz00_bglt BgL_auxz00_2477;

													BgL_auxz00_2477 =
														(BgL_appz00_bglt) (BgL_nodez00_1582);
													BgL_pairz00_1808 =
														(((BgL_appz00_bglt) CREF(BgL_auxz00_2477))->
														BgL_argsz00);
												}
												BgL_arg4839z00_1615 = CAR(CDR(CDR(BgL_pairz00_1808)));
											}
											BgL_proczd2siza7ez75_1590 =
												BGl_getzd2nodezd2atomzd2valuezd2zzcfa_approxz00(
												(BgL_nodez00_bglt) (BgL_arg4839z00_1615));
										}
										{	/* Cfa/procedure.scm 63 */
											obj_t BgL_pairz00_1815;

											{
												BgL_appz00_bglt BgL_auxz00_2485;

												BgL_auxz00_2485 = (BgL_appz00_bglt) (BgL_nodez00_1582);
												BgL_pairz00_1815 =
													(((BgL_appz00_bglt) CREF(BgL_auxz00_2485))->
													BgL_argsz00);
											}
											BgL_procz00_1591 = CAR(BgL_pairz00_1815);
										}
										{	/* Cfa/procedure.scm 64 */
											bool_t BgL_testz00_2489;

											if (INTEGERP(BgL_proczd2siza7ez75_1590))
												{	/* Cfa/procedure.scm 64 */
													if (BGl_iszd2azf3z21zz__objectz00(BgL_procz00_1591,
															BGl_varz00zzast_nodez00))
														{	/* Cfa/procedure.scm 66 */
															BgL_valuez00_bglt BgL_arg4837z00_1613;

															{	/* Cfa/procedure.scm 66 */
																BgL_variablez00_bglt BgL_obj1611z00_1819;

																{
																	BgL_varz00_bglt BgL_auxz00_2494;

																	BgL_auxz00_2494 =
																		(BgL_varz00_bglt) (BgL_procz00_1591);
																	BgL_obj1611z00_1819 =
																		(((BgL_varz00_bglt) CREF(BgL_auxz00_2494))->
																		BgL_variablez00);
																}
																BgL_arg4837z00_1613 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_obj1611z00_1819))->BgL_valuez00);
															}
															{	/* Cfa/procedure.scm 66 */
																obj_t BgL_obj1856z00_1820;

																BgL_obj1856z00_1820 =
																	(obj_t) (BgL_arg4837z00_1613);
																BgL_testz00_2489 =
																	BGl_iszd2azf3z21zz__objectz00
																	(BgL_obj1856z00_1820, BGl_funz00zzast_varz00);
															}
														}
													else
														{	/* Cfa/procedure.scm 65 */
															BgL_testz00_2489 = ((bool_t) 0);
														}
												}
											else
												{	/* Cfa/procedure.scm 64 */
													BgL_testz00_2489 = ((bool_t) 0);
												}
											if (BgL_testz00_2489)
												{	/* Cfa/procedure.scm 67 */
													BgL_appz00_bglt BgL_nodez00_1593;

													{	/* Cfa/procedure.scm 67 */
														BgL_appz00_bglt BgL_obj4684z00_1604;

														BgL_obj4684z00_1604 =
															((BgL_appz00_bglt)
															(BgL_appz00_bglt) (BgL_nodez00_1589));
														{	/* Cfa/procedure.scm 67 */
															obj_t BgL_auxz00_2504;

															BgL_objectz00_bglt BgL_auxz00_2502;

															{	/* Cfa/procedure.scm 67 */
																obj_t BgL_auxz00_2505;

																BgL_lenz00_1622 = BgL_proczd2siza7ez75_1590;
																{	/* Cfa/procedure.scm 50 */
																	obj_t BgL_resz00_1624;

																	BgL_resz00_1624 =
																		make_vector(CINT(BgL_lenz00_1622), BUNSPEC);
																	{
																		long BgL_iz00_1626;

																		BgL_iz00_1626 = ((long) 0);
																	BgL_zc3anonymousza34847ze3z83_1627:
																		if (
																			(BgL_iz00_1626 ==
																				(long) CINT(BgL_lenz00_1622)))
																			{	/* Cfa/procedure.scm 52 */
																				BgL_auxz00_2505 = BgL_resz00_1624;
																			}
																		else
																			{	/* Cfa/procedure.scm 52 */
																				{	/* Cfa/procedure.scm 55 */
																					BgL_approxz00_bglt
																						BgL_arg4849z00_1629;
																					BgL_arg4849z00_1629 =
																						BGl_makezd2typezd2approxz00zzcfa_approxz00
																						((BgL_typez00_bglt)
																						(BGl_za2objza2z00zztype_cachez00));
																					VECTOR_SET(BgL_resz00_1624,
																						(int) (BgL_iz00_1626),
																						(obj_t) (BgL_arg4849z00_1629));
																				}
																				{
																					long BgL_iz00_2517;

																					BgL_iz00_2517 =
																						(BgL_iz00_1626 + ((long) 1));
																					BgL_iz00_1626 = BgL_iz00_2517;
																					goto
																						BgL_zc3anonymousza34847ze3z83_1627;
																				}
																			}
																	}
																}
																BgL_auxz00_2504 =
																	BGl_wideningzd2makezd2procedurezd2appzd2zzcfa_info2z00
																	(BGl_makezd2emptyzd2approxz00zzcfa_approxz00
																	(), BgL_auxz00_2505, ((long) -1),
																	((bool_t) 1), ((bool_t) 0), ((bool_t) 0),
																	BgL_ownerz00_1588, BNIL);
															}
															BgL_auxz00_2502 =
																(BgL_objectz00_bglt) (BgL_obj4684z00_1604);
															BGL_OBJECT_WIDENING_SET(BgL_auxz00_2502,
																BgL_auxz00_2504);
														}
														BGL_OBJECT_CLASS_NUM_SET(
															(BgL_objectz00_bglt) (BgL_obj4684z00_1604),
															BGl_classzd2numzd2zz__objectz00
															(BGl_makezd2procedurezd2appz00zzcfa_info2z00));
														BgL_nodez00_1593 = BgL_obj4684z00_1604;
													}
													{	/* Cfa/procedure.scm 76 */
														BgL_approxz00_bglt BgL_arg4822z00_1594;

														BgL_arg4822z00_1594 =
															BGl_makezd2typezd2alloczd2approxzd2zzcfa_approxz00
															((BgL_typez00_bglt)
															(BGl_za2procedureza2z00zztype_cachez00),
															(BgL_nodez00_bglt) (BgL_nodez00_1593));
														{	/* Cfa/procedure.scm 75 */
															BgL_makezd2procedurezd2appz00_bglt
																BgL_obj4291z00_1823;
															BgL_approxz00_bglt BgL_val4290z00_1824;

															BgL_obj4291z00_1823 =
																(BgL_makezd2procedurezd2appz00_bglt)
																(BgL_nodez00_1593);
															BgL_val4290z00_1824 = BgL_arg4822z00_1594;
															{
																obj_t BgL_auxz00_2528;

																{	/* Cfa/procedure.scm 75 */
																	BgL_objectz00_bglt BgL_auxz00_2529;

																	BgL_auxz00_2529 =
																		(BgL_objectz00_bglt) (BgL_obj4291z00_1823);
																	BgL_auxz00_2528 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_2529);
																}
																((((BgL_makezd2procedurezd2appz00_bglt)
																			CREF(BgL_auxz00_2528))->BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_val4290z00_1824),
																	BUNSPEC);
													}}}
													{	/* Cfa/procedure.scm 81 */
														obj_t BgL_cloz00_1595;

														{	/* Cfa/procedure.scm 81 */
															obj_t BgL_pairz00_1828;

															{	/* Cfa/procedure.scm 81 */
																BgL_sfunz00_bglt BgL_obj1880z00_1827;

																{	/* Cfa/procedure.scm 83 */
																	BgL_valuez00_bglt BgL_auxz00_2533;

																	{	/* Cfa/procedure.scm 82 */
																		BgL_variablez00_bglt BgL_obj1611z00_1826;

																		{
																			BgL_varz00_bglt BgL_auxz00_2534;

																			BgL_auxz00_2534 =
																				(BgL_varz00_bglt) (BgL_procz00_1591);
																			BgL_obj1611z00_1826 =
																				(((BgL_varz00_bglt)
																					CREF(BgL_auxz00_2534))->
																				BgL_variablez00);
																		}
																		BgL_auxz00_2533 =
																			(((BgL_variablez00_bglt)
																				CREF(BgL_obj1611z00_1826))->
																			BgL_valuez00);
																	}
																	BgL_obj1880z00_1827 =
																		(BgL_sfunz00_bglt) (BgL_auxz00_2533);
																}
																BgL_pairz00_1828 =
																	(((BgL_sfunz00_bglt)
																		CREF(BgL_obj1880z00_1827))->BgL_argsz00);
															}
															BgL_cloz00_1595 = CAR(BgL_pairz00_1828);
														}
														{	/* Cfa/procedure.scm 81 */
															BgL_valuez00_bglt BgL_vcloz00_1596;

															{
																BgL_variablez00_bglt BgL_auxz00_2541;

																BgL_auxz00_2541 =
																	(BgL_variablez00_bglt) (BgL_cloz00_1595);
																BgL_vcloz00_1596 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_2541))->BgL_valuez00);
															}
															{	/* Cfa/procedure.scm 84 */

																{	/* Cfa/procedure.scm 85 */
																	bool_t BgL_testz00_2544;

																	{	/* Cfa/procedure.scm 85 */
																		obj_t BgL_obj3501z00_1830;

																		BgL_obj3501z00_1830 =
																			(obj_t) (BgL_vcloz00_1596);
																		BgL_testz00_2544 =
																			BGl_iszd2azf3z21zz__objectz00
																			(BgL_obj3501z00_1830,
																			BGl_svarzf2Cinfozf2zzcfa_infoz00);
																	}
																	if (BgL_testz00_2544)
																		{	/* Cfa/procedure.scm 85 */
																			{	/* Cfa/procedure.scm 89 */
																				BgL_svarzf2cinfozf2_bglt
																					BgL_obj3505z00_1831;
																				bool_t BgL_val3504z00_1832;

																				BgL_obj3505z00_1831 =
																					(BgL_svarzf2cinfozf2_bglt)
																					(BgL_vcloz00_1596);
																				BgL_val3504z00_1832 = ((bool_t) 1);
																				{
																					obj_t BgL_auxz00_2548;

																					{	/* Cfa/procedure.scm 89 */
																						BgL_objectz00_bglt BgL_auxz00_2549;

																						BgL_auxz00_2549 =
																							(BgL_objectz00_bglt)
																							(BgL_obj3505z00_1831);
																						BgL_auxz00_2548 =
																							BGL_OBJECT_WIDENING
																							(BgL_auxz00_2549);
																					}
																					return
																						((((BgL_svarzf2cinfozf2_bglt)
																								CREF(BgL_auxz00_2548))->
																							BgL_clozd2envzf3z21) =
																						((bool_t) BgL_val3504z00_1832),
																						BUNSPEC);
																				}
																			}
																		}
																	else
																		{	/* Cfa/procedure.scm 90 */
																			BgL_svarz00_bglt BgL_obj4685z00_1598;

																			BgL_obj4685z00_1598 =
																				((BgL_svarz00_bglt)
																				(BgL_svarz00_bglt) (BgL_vcloz00_1596));
																			{	/* Cfa/procedure.scm 90 */
																				obj_t BgL_auxz00_2557;

																				BgL_objectz00_bglt BgL_auxz00_2555;

																				BgL_auxz00_2557 =
																					BGl_wideningzd2prezd2clozd2envzd2zzcfa_infoz00
																					();
																				BgL_auxz00_2555 =
																					(BgL_objectz00_bglt)
																					(BgL_obj4685z00_1598);
																				BGL_OBJECT_WIDENING_SET(BgL_auxz00_2555,
																					BgL_auxz00_2557);
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				(BgL_objectz00_bglt)
																				(BgL_obj4685z00_1598),
																				BGl_classzd2numzd2zz__objectz00
																				(BGl_prezd2clozd2envz00zzcfa_infoz00));
																			return (obj_t) (BgL_obj4685z00_1598);
																		}
																}
															}
														}
													}
												}
											else
												{	/* Cfa/procedure.scm 64 */
													{	/* Cfa/procedure.scm 48 */
														obj_t BgL_nextzd2method4705zd2_1634;

														BgL_nextzd2method4705zd2_1634 =
															BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
															(BgL_objectz00_bglt) (BgL_nodez00_1582),
															BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
															BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00);
														if (PROCEDUREP(BgL_nextzd2method4705zd2_1634))
															{	/* Cfa/procedure.scm 48 */
																return
																	PROCEDURE_ENTRY(BgL_nextzd2method4705zd2_1634)
																	(BgL_nextzd2method4705zd2_1634,
																	(obj_t) (BgL_nodez00_1582), BEOA);
															}
														else
															{	/* Cfa/procedure.scm 48 */
																return
																	BGl_nodezd2setupz12zc0zzcfa_setupz00(
																	(BgL_nodez00_bglt) (BgL_nodez00_1582));
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



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_procedurez00()
	{
		AN_OBJECT;
		{	/* Cfa/procedure.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string4957z00zzcfa_procedurez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string4957z00zzcfa_procedurez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4957z00zzcfa_procedurez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4957z00zzcfa_procedurez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string4957z00zzcfa_procedurez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4957z00zzcfa_procedurez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4957z00zzcfa_procedurez00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 243010053),
				BSTRING_TO_STRING(BGl_string4957z00zzcfa_procedurez00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string4957z00zzcfa_procedurez00));
			BGl_modulezd2initializa7ationz75zzcfa_loosez00(((long) 235614963),
				BSTRING_TO_STRING(BGl_string4957z00zzcfa_procedurez00));
			BGl_modulezd2initializa7ationz75zzcfa_setupz00(((long) 212645849),
				BSTRING_TO_STRING(BGl_string4957z00zzcfa_procedurez00));
			BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 535144917),
				BSTRING_TO_STRING(BGl_string4957z00zzcfa_procedurez00));
			BGl_modulezd2initializa7ationz75zzcfa_cfaz00(((long) 42139303),
				BSTRING_TO_STRING(BGl_string4957z00zzcfa_procedurez00));
			BGl_modulezd2initializa7ationz75zzcfa_iteratez00(((long) 319050990),
				BSTRING_TO_STRING(BGl_string4957z00zzcfa_procedurez00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_closurez00(((long) 416995938),
				BSTRING_TO_STRING(BGl_string4957z00zzcfa_procedurez00));
		}
	}

#ifdef __cplusplus
}
#endif
