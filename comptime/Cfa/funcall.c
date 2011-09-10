/*===========================================================================*/
/*   (Cfa/funcall.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/funcall.scm)*/
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

	typedef struct BgL_funcallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
		obj_t BgL_strengthz00;
	}                 *BgL_funcallz00_bglt;

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

	typedef struct BgL_funcallzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		struct BgL_approxz00_bgl *BgL_vazd2approxzd2;
		bool_t BgL_arityzd2errorzd2noticedzf3zf3;
		bool_t BgL_typezd2errorzd2noticedzf3zf3;
	}                         *BgL_funcallzf2cinfozf2_bglt;

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


	extern BgL_localz00_bglt BGl_makezd2localzd2zzast_varz00(obj_t, obj_t,
		BgL_typez00_bglt, BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, bool_t,
		long);
	extern BgL_approxz00_bglt BGl_loosez12z12zzcfa_loosez00(BgL_approxz00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_approxzd2setzd2typez12z12zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	static obj_t BGl_cfaz12zd2funcallzf2Cinfo4707z32zzcfa_funcallz00(obj_t,
		obj_t);
	extern obj_t BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00(obj_t,
		BgL_approxz00_bglt);
	static BgL_approxz00_bglt
		BGl_funcallzd2arityzd2errorz00zzcfa_funcallz00(obj_t, BgL_variablez00_bglt,
		long, obj_t);
	static obj_t BGl_cnstzd2initzd2zzcfa_funcallz00();
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_funcallz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_appz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_loosez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_cfaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzcfa_funcallz00();
	BGL_IMPORT long bgl_list_length(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	extern bool_t BGl_globalzd2optionalzf3z21zzast_varz00(obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern BgL_approxz00_bglt
		BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_approxz00_bglt);
	extern BgL_approxz00_bglt BGl_appz12z12zzcfa_appz00(BgL_funz00_bglt,
		BgL_varz00_bglt, obj_t);
	extern obj_t BGl_userzd2warningzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_funcallz00();
	extern bool_t BGl_soundzd2arityzf3z21zztools_argsz00(obj_t, obj_t);
	extern BgL_approxz00_bglt BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_funcallz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzcfa_funcallz00();
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t BGl_funcallzf2Cinfozf2zzcfa_infoz00;
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_funcallz00();
	static bool_t
		BGl_keyzd2correctzd2arityzf3zf3zzcfa_funcallz00(BgL_valuez00_bglt, obj_t);
	extern BgL_approxz00_bglt BGl_cfaz12z12zzcfa_cfaz00(BgL_nodez00_bglt);
	static obj_t BGl_zc3anonymousza34908ze3z83zzcfa_funcallz00(obj_t, obj_t);
	extern obj_t BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_approxz00_bglt);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern BgL_globalz00_bglt BGl_makezd2globalzd2zzast_varz00(obj_t, obj_t,
		BgL_typez00_bglt, BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, obj_t,
		obj_t, bool_t, obj_t, bool_t, obj_t, obj_t, obj_t);
	static bool_t
		BGl_cfazd2correctzd2arityzf3zf3zzcfa_funcallz00(BgL_valuez00_bglt, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_zc3anonymousza34915ze3z83zzcfa_funcallz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t
		BGl_funcallzd2typezd2errorz00zzcfa_funcallz00(BgL_funcallzf2cinfozf2_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_makezd2procedurezd2appz00zzcfa_info2z00;
	static BgL_approxz00_bglt
		BGl_funcallz12z12zzcfa_funcallz00(BgL_makezd2procedurezd2appz00_bglt, obj_t,
		obj_t);
	extern bool_t BGl_globalzd2keyzf3z21zzast_varz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_funcallz00();
	static bool_t
		BGl_optionalzd2correctzd2arityzf3zf3zzcfa_funcallz00(BgL_valuez00_bglt,
		obj_t);
	static obj_t __cnst[1];


	extern obj_t BGl_cfaz12zd2envzc0zzcfa_cfaz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4943z00zzcfa_funcallz00,
		BgL_bgl_cfaza712za7d2funcall4949z00,
		BGl_cfaz12zd2funcallzf2Cinfo4707z32zzcfa_funcallz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4938z00zzcfa_funcallz00,
		BgL_bgl_string4938za700za7za7c4950za7, "cfa", 3);
	      DEFINE_STRING(BGl_string4940z00zzcfa_funcallz00,
		BgL_bgl_string4940za700za7za7c4951za7, " provided", 9);
	      DEFINE_STRING(BGl_string4939z00zzcfa_funcallz00,
		BgL_bgl_string4939za700za7za7c4952za7, "Possible funcall type error", 27);
	      DEFINE_STRING(BGl_string4941z00zzcfa_funcallz00,
		BgL_bgl_string4941za700za7za7c4953za7, " arg(s) expected, ", 18);
	      DEFINE_STRING(BGl_string4942z00zzcfa_funcallz00,
		BgL_bgl_string4942za700za7za7c4954za7, "Possible funcall arity error", 28);
	      DEFINE_STRING(BGl_string4944z00zzcfa_funcallz00,
		BgL_bgl_string4944za700za7za7c4955za7, "cfa!", 4);
	      DEFINE_STRING(BGl_string4945z00zzcfa_funcallz00,
		BgL_bgl_string4945za700za7za7c4956za7, "cfa_funcall", 11);
	      DEFINE_STRING(BGl_string4946z00zzcfa_funcallz00,
		BgL_bgl_string4946za700za7za7c4957za7, "all ", 4);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_funcallz00(long
		BgL_checksumz00_1922, char *BgL_fromz00_1923)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_funcallz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_funcallz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcfa_funcallz00();
					BGl_cnstzd2initzd2zzcfa_funcallz00();
					BGl_importedzd2moduleszd2initz00zzcfa_funcallz00();
					BGl_methodzd2initzd2zzcfa_funcallz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_funcallz00()
	{
		AN_OBJECT;
		{	/* Cfa/funcall.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cfa_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cfa_funcall");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_funcall");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_funcallz00()
	{
		AN_OBJECT;
		{	/* Cfa/funcall.scm 15 */
			{	/* Cfa/funcall.scm 15 */
				obj_t BgL_cportz00_1914;

				BgL_cportz00_1914 =
					bgl_open_input_string(BGl_string4946z00zzcfa_funcallz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1915;

					BgL_iz00_1915 = ((long) 0);
				BgL_loopz00_1916:
					if ((BgL_iz00_1915 == ((long) -1)))
						{	/* Cfa/funcall.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/funcall.scm 15 */
							{	/* Cfa/funcall.scm 15 */
								obj_t BgL_arg4948z00_1918;

								{	/* Cfa/funcall.scm 15 */

									{	/* Cfa/funcall.scm 15 */
										obj_t BgL_locationz00_1920;

										BgL_locationz00_1920 = BBOOL(((bool_t) 0));
										{	/* Cfa/funcall.scm 15 */

											BgL_arg4948z00_1918 =
												BGl_readz00zz__readerz00(BgL_cportz00_1914,
												BgL_locationz00_1920);
										}
									}
								}
								{	/* Cfa/funcall.scm 15 */
									int BgL_auxz00_1942;

									BgL_auxz00_1942 = (int) (BgL_iz00_1915);
									CNST_TABLE_SET(BgL_auxz00_1942, BgL_arg4948z00_1918);
							}}
							{	/* Cfa/funcall.scm 15 */
								int BgL_auxz00_1921;

								BgL_auxz00_1921 = (int) ((BgL_iz00_1915 - ((long) 1)));
								{
									long BgL_iz00_1947;

									BgL_iz00_1947 = (long) (BgL_auxz00_1921);
									BgL_iz00_1915 = BgL_iz00_1947;
									goto BgL_loopz00_1916;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_funcallz00()
	{
		AN_OBJECT;
		{	/* Cfa/funcall.scm 15 */
			return BUNSPEC;
		}
	}



/* optional-correct-arity? */
	bool_t BGl_optionalzd2correctzd2arityzf3zf3zzcfa_funcallz00(BgL_valuez00_bglt
		BgL_funz00_2, obj_t BgL_argszd2approxzd2_3)
	{
		AN_OBJECT;
		{	/* Cfa/funcall.scm 93 */
			{	/* Cfa/funcall.scm 95 */
				long BgL_miz00_1056;

				{	/* Cfa/funcall.scm 95 */
					long BgL_auxz00_1949;

					{
						BgL_funz00_bglt BgL_auxz00_1950;

						BgL_auxz00_1950 = (BgL_funz00_bglt) (BgL_funz00_2);
						BgL_auxz00_1949 =
							(((BgL_funz00_bglt) CREF(BgL_auxz00_1950))->BgL_arityz00);
					}
					BgL_miz00_1056 = (((long) 1) + BgL_auxz00_1949);
				}
				{	/* Cfa/funcall.scm 96 */
					long BgL_lz00_1058;

					BgL_lz00_1058 = bgl_list_length(BgL_argszd2approxzd2_3);
					{	/* Cfa/funcall.scm 97 */

						if ((BgL_lz00_1058 >= BgL_miz00_1056))
							{	/* Cfa/funcall.scm 98 */
								long BgL_auxz00_1957;

								{	/* Cfa/funcall.scm 96 */
									long BgL_auxz00_1958;

									{	/* Cfa/funcall.scm 96 */
										obj_t BgL_auxz00_1959;

										{
											BgL_sfunz00_bglt BgL_auxz00_1960;

											BgL_auxz00_1960 = (BgL_sfunz00_bglt) (BgL_funz00_2);
											BgL_auxz00_1959 =
												(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1960))->
												BgL_optionalsz00);
										}
										BgL_auxz00_1958 = bgl_list_length(BgL_auxz00_1959);
									}
									BgL_auxz00_1957 = (BgL_miz00_1056 + BgL_auxz00_1958);
								}
								return (BgL_lz00_1058 <= BgL_auxz00_1957);
							}
						else
							{	/* Cfa/funcall.scm 98 */
								return ((bool_t) 0);
							}
					}
				}
			}
		}
	}



/* key-correct-arity? */
	bool_t BGl_keyzd2correctzd2arityzf3zf3zzcfa_funcallz00(BgL_valuez00_bglt
		BgL_funz00_4, obj_t BgL_argszd2approxzd2_5)
	{
		AN_OBJECT;
		{	/* Cfa/funcall.scm 103 */
			{	/* Cfa/funcall.scm 105 */
				long BgL_miz00_1064;

				{	/* Cfa/funcall.scm 105 */
					long BgL_auxz00_1966;

					{
						BgL_funz00_bglt BgL_auxz00_1967;

						BgL_auxz00_1967 = (BgL_funz00_bglt) (BgL_funz00_4);
						BgL_auxz00_1966 =
							(((BgL_funz00_bglt) CREF(BgL_auxz00_1967))->BgL_arityz00);
					}
					BgL_miz00_1064 = (((long) 1) + BgL_auxz00_1966);
				}
				{	/* Cfa/funcall.scm 106 */
					long BgL_lz00_1066;

					BgL_lz00_1066 = bgl_list_length(BgL_argszd2approxzd2_5);
					{	/* Cfa/funcall.scm 107 */

						if ((BgL_lz00_1066 >= BgL_miz00_1064))
							{	/* Cfa/funcall.scm 108 */
								long BgL_auxz00_1974;

								{	/* Cfa/funcall.scm 106 */
									long BgL_auxz00_1975;

									{	/* Cfa/funcall.scm 106 */
										long BgL_auxz00_1976;

										{	/* Cfa/funcall.scm 106 */
											obj_t BgL_auxz00_1977;

											{
												BgL_sfunz00_bglt BgL_auxz00_1978;

												BgL_auxz00_1978 = (BgL_sfunz00_bglt) (BgL_funz00_4);
												BgL_auxz00_1977 =
													(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1978))->
													BgL_keysz00);
											}
											BgL_auxz00_1976 = bgl_list_length(BgL_auxz00_1977);
										}
										BgL_auxz00_1975 = (((long) 2) * BgL_auxz00_1976);
									}
									BgL_auxz00_1974 = (BgL_miz00_1064 + BgL_auxz00_1975);
								}
								return (BgL_lz00_1066 <= BgL_auxz00_1974);
							}
						else
							{	/* Cfa/funcall.scm 108 */
								return ((bool_t) 0);
							}
					}
				}
			}
		}
	}



/* cfa-correct-arity? */
	bool_t BGl_cfazd2correctzd2arityzf3zf3zzcfa_funcallz00(BgL_valuez00_bglt
		BgL_funz00_6, obj_t BgL_argszd2approxzd2_7)
	{
		AN_OBJECT;
		{	/* Cfa/funcall.scm 113 */
			{	/* Cfa/funcall.scm 114 */
				obj_t BgL_gz00_1074;

				{
					BgL_sfunz00_bglt BgL_auxz00_1985;

					BgL_auxz00_1985 = (BgL_sfunz00_bglt) (BgL_funz00_6);
					BgL_gz00_1074 =
						(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1985))->
						BgL_thezd2closurezd2globalz00);
				}
				if (BGl_globalzd2optionalzf3z21zzast_varz00(BgL_gz00_1074))
					{	/* Cfa/funcall.scm 117 */
						BgL_valuez00_bglt BgL_auxz00_1990;

						{
							BgL_variablez00_bglt BgL_auxz00_1991;

							BgL_auxz00_1991 = (BgL_variablez00_bglt) (BgL_gz00_1074);
							BgL_auxz00_1990 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_1991))->BgL_valuez00);
						}
						return
							BGl_optionalzd2correctzd2arityzf3zf3zzcfa_funcallz00
							(BgL_auxz00_1990, BgL_argszd2approxzd2_7);
					}
				else
					{	/* Cfa/funcall.scm 116 */
						if (BGl_globalzd2keyzf3z21zzast_varz00(BgL_gz00_1074))
							{	/* Cfa/funcall.scm 119 */
								BgL_valuez00_bglt BgL_auxz00_1997;

								{
									BgL_variablez00_bglt BgL_auxz00_1998;

									BgL_auxz00_1998 = (BgL_variablez00_bglt) (BgL_gz00_1074);
									BgL_auxz00_1997 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_1998))->
										BgL_valuez00);
								}
								return
									BGl_keyzd2correctzd2arityzf3zf3zzcfa_funcallz00
									(BgL_auxz00_1997, BgL_argszd2approxzd2_7);
							}
						else
							{	/* Cfa/funcall.scm 121 */
								long BgL_arg4723z00_1079;

								{
									BgL_funz00_bglt BgL_auxz00_2002;

									BgL_auxz00_2002 = (BgL_funz00_bglt) (BgL_funz00_6);
									BgL_arg4723z00_1079 =
										(((BgL_funz00_bglt) CREF(BgL_auxz00_2002))->BgL_arityz00);
								}
								return
									BGl_soundzd2arityzf3z21zztools_argsz00(BINT
									(BgL_arg4723z00_1079), BgL_argszd2approxzd2_7);
							}
					}
			}
		}
	}



/* funcall! */
	BgL_approxz00_bglt
		BGl_funcallz12z12zzcfa_funcallz00(BgL_makezd2procedurezd2appz00_bglt
		BgL_allocz00_8, obj_t BgL_argszd2approxzd2_9, obj_t BgL_nodez00_10)
	{
		AN_OBJECT;
		{	/* Cfa/funcall.scm 126 */
			{	/* Cfa/funcall.scm 127 */
				obj_t BgL_calleez00_1080;

				{	/* Cfa/funcall.scm 127 */
					obj_t BgL_pairz00_1804;

					{
						BgL_appz00_bglt BgL_auxz00_2007;

						BgL_auxz00_2007 = (BgL_appz00_bglt) (BgL_allocz00_8);
						BgL_pairz00_1804 =
							(((BgL_appz00_bglt) CREF(BgL_auxz00_2007))->BgL_argsz00);
					}
					BgL_calleez00_1080 = CAR(BgL_pairz00_1804);
				}
				{	/* Cfa/funcall.scm 127 */
					BgL_variablez00_bglt BgL_vz00_1081;

					{
						BgL_varz00_bglt BgL_auxz00_2011;

						BgL_auxz00_2011 = (BgL_varz00_bglt) (BgL_calleez00_1080);
						BgL_vz00_1081 =
							(((BgL_varz00_bglt) CREF(BgL_auxz00_2011))->BgL_variablez00);
					}
					{	/* Cfa/funcall.scm 128 */
						BgL_valuez00_bglt BgL_funz00_1082;

						BgL_funz00_1082 =
							(((BgL_variablez00_bglt) CREF(BgL_vz00_1081))->BgL_valuez00);
						{	/* Cfa/funcall.scm 129 */
							long BgL_arityz00_1083;

							{
								BgL_funz00_bglt BgL_auxz00_2015;

								BgL_auxz00_2015 = (BgL_funz00_bglt) (BgL_funz00_1082);
								BgL_arityz00_1083 =
									(((BgL_funz00_bglt) CREF(BgL_auxz00_2015))->BgL_arityz00);
							}
							{	/* Cfa/funcall.scm 130 */

								if (BGl_cfazd2correctzd2arityzf3zf3zzcfa_funcallz00
									(BgL_funz00_1082, BgL_argszd2approxzd2_9))
									{	/* Cfa/funcall.scm 137 */
										bool_t BgL_testz00_2020;

										{	/* Cfa/funcall.scm 137 */
											bool_t BgL_testz00_2021;

											{	/* Cfa/funcall.scm 137 */
												obj_t BgL_arg4745z00_1118;

												{
													BgL_sfunz00_bglt BgL_auxz00_2022;

													BgL_auxz00_2022 =
														(BgL_sfunz00_bglt) (BgL_funz00_1082);
													BgL_arg4745z00_1118 =
														(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2022))->
														BgL_thezd2closurezd2globalz00);
												}
												BgL_testz00_2021 =
													BGl_globalzd2optionalzf3z21zzast_varz00
													(BgL_arg4745z00_1118);
											}
											if (BgL_testz00_2021)
												{	/* Cfa/funcall.scm 137 */
													BgL_testz00_2020 = ((bool_t) 1);
												}
											else
												{	/* Cfa/funcall.scm 138 */
													obj_t BgL_arg4744z00_1117;

													{
														BgL_sfunz00_bglt BgL_auxz00_2026;

														BgL_auxz00_2026 =
															(BgL_sfunz00_bglt) (BgL_funz00_1082);
														BgL_arg4744z00_1117 =
															(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2026))->
															BgL_thezd2closurezd2globalz00);
													}
													BgL_testz00_2020 =
														BGl_globalzd2keyzf3z21zzast_varz00
														(BgL_arg4744z00_1117);
												}
										}
										if (BgL_testz00_2020)
											{	/* Cfa/funcall.scm 137 */
												{
													obj_t BgL_l4702z00_1087;

													BgL_l4702z00_1087 = BgL_argszd2approxzd2_9;
												BgL_zc3anonymousza34726ze3z83_1088:
													if (PAIRP(BgL_l4702z00_1087))
														{	/* Cfa/funcall.scm 141 */
															{	/* Cfa/funcall.scm 141 */
																obj_t BgL_approxz00_1090;

																BgL_approxz00_1090 = CAR(BgL_l4702z00_1087);
																BGl_loosez12z12zzcfa_loosez00(
																	(BgL_approxz00_bglt) (BgL_approxz00_1090),
																	CNST_TABLE_REF(((long) 0)));
															}
															{
																obj_t BgL_l4702z00_2036;

																BgL_l4702z00_2036 = CDR(BgL_l4702z00_1087);
																BgL_l4702z00_1087 = BgL_l4702z00_2036;
																goto BgL_zc3anonymousza34726ze3z83_1088;
															}
														}
													else
														{	/* Cfa/funcall.scm 141 */
															((bool_t) 1);
														}
												}
												return BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
											}
										else
											{	/* Cfa/funcall.scm 137 */
												if ((BgL_arityz00_1083 >= ((long) 0)))
													{	/* Cfa/funcall.scm 143 */
														return
															BGl_appz12z12zzcfa_appz00(
															(BgL_funz00_bglt) (BgL_funz00_1082),
															(BgL_varz00_bglt) (BgL_calleez00_1080),
															BgL_argszd2approxzd2_9);
													}
												else
													{	/* Cfa/funcall.scm 143 */
														{
															obj_t BgL_oldzd2argszd2approxz00_1096;

															obj_t BgL_newzd2argszd2approxz00_1097;

															long BgL_arityz00_1098;

															BgL_oldzd2argszd2approxz00_1096 =
																BgL_argszd2approxzd2_9;
															BgL_newzd2argszd2approxz00_1097 = BNIL;
															BgL_arityz00_1098 = BgL_arityz00_1083;
														BgL_zc3anonymousza34730ze3z83_1099:
															if ((BgL_arityz00_1098 == ((long) -1)))
																{	/* Cfa/funcall.scm 153 */
																	{
																		obj_t BgL_l4704z00_1102;

																		BgL_l4704z00_1102 =
																			BgL_oldzd2argszd2approxz00_1096;
																	BgL_zc3anonymousza34732ze3z83_1103:
																		if (PAIRP(BgL_l4704z00_1102))
																			{	/* Cfa/funcall.scm 155 */
																				{	/* Cfa/funcall.scm 155 */
																					obj_t BgL_approxz00_1105;

																					BgL_approxz00_1105 =
																						CAR(BgL_l4704z00_1102);
																					BGl_loosez12z12zzcfa_loosez00(
																						(BgL_approxz00_bglt)
																						(BgL_approxz00_1105),
																						CNST_TABLE_REF(((long) 0)));
																				}
																				{
																					obj_t BgL_l4704z00_2052;

																					BgL_l4704z00_2052 =
																						CDR(BgL_l4704z00_1102);
																					BgL_l4704z00_1102 = BgL_l4704z00_2052;
																					goto
																						BgL_zc3anonymousza34732ze3z83_1103;
																				}
																			}
																		else
																			{	/* Cfa/funcall.scm 155 */
																				((bool_t) 1);
																			}
																	}
																	{	/* Cfa/funcall.scm 159 */
																		obj_t BgL_arg4735z00_1108;

																		{	/* Cfa/funcall.scm 159 */
																			obj_t BgL_arg4736z00_1109;

																			{	/* Cfa/funcall.scm 159 */
																				BgL_approxz00_bglt BgL_arg4737z00_1110;

																				{	/* Cfa/funcall.scm 159 */
																					BgL_funcallzf2cinfozf2_bglt
																						BgL_obj3743z00_1820;
																					BgL_obj3743z00_1820 =
																						(BgL_funcallzf2cinfozf2_bglt)
																						(BgL_nodez00_10);
																					{
																						obj_t BgL_auxz00_2055;

																						{	/* Cfa/funcall.scm 159 */
																							BgL_objectz00_bglt
																								BgL_auxz00_2056;
																							BgL_auxz00_2056 =
																								(BgL_objectz00_bglt)
																								(BgL_obj3743z00_1820);
																							BgL_auxz00_2055 =
																								BGL_OBJECT_WIDENING
																								(BgL_auxz00_2056);
																						}
																						BgL_arg4737z00_1110 =
																							(((BgL_funcallzf2cinfozf2_bglt)
																								CREF(BgL_auxz00_2055))->
																							BgL_vazd2approxzd2);
																					}
																				}
																				BgL_arg4736z00_1109 =
																					MAKE_PAIR(
																					(obj_t) (BgL_arg4737z00_1110),
																					BgL_newzd2argszd2approxz00_1097);
																			}
																			BgL_arg4735z00_1108 =
																				bgl_reverse_bang(BgL_arg4736z00_1109);
																		}
																		return
																			BGl_appz12z12zzcfa_appz00(
																			(BgL_funz00_bglt) (BgL_funz00_1082),
																			(BgL_varz00_bglt) (BgL_calleez00_1080),
																			BgL_arg4735z00_1108);
																	}
																}
															else
																{	/* Cfa/funcall.scm 161 */
																	obj_t BgL_arg4739z00_1111;

																	obj_t BgL_arg4740z00_1112;

																	long BgL_arg4741z00_1113;

																	BgL_arg4739z00_1111 =
																		CDR(BgL_oldzd2argszd2approxz00_1096);
																	BgL_arg4740z00_1112 =
																		MAKE_PAIR(CAR
																		(BgL_oldzd2argszd2approxz00_1096),
																		BgL_newzd2argszd2approxz00_1097);
																	BgL_arg4741z00_1113 =
																		(BgL_arityz00_1098 + ((long) 1));
																	{
																		long BgL_arityz00_2072;

																		obj_t BgL_newzd2argszd2approxz00_2071;

																		obj_t BgL_oldzd2argszd2approxz00_2070;

																		BgL_oldzd2argszd2approxz00_2070 =
																			BgL_arg4739z00_1111;
																		BgL_newzd2argszd2approxz00_2071 =
																			BgL_arg4740z00_1112;
																		BgL_arityz00_2072 = BgL_arg4741z00_1113;
																		BgL_arityz00_1098 = BgL_arityz00_2072;
																		BgL_newzd2argszd2approxz00_1097 =
																			BgL_newzd2argszd2approxz00_2071;
																		BgL_oldzd2argszd2approxz00_1096 =
																			BgL_oldzd2argszd2approxz00_2070;
																		goto BgL_zc3anonymousza34730ze3z83_1099;
																	}
																}
														}
													}
											}
									}
								else
									{	/* Cfa/funcall.scm 134 */
										return
											BGl_funcallzd2arityzd2errorz00zzcfa_funcallz00
											(BgL_nodez00_10, BgL_vz00_1081, BgL_arityz00_1083,
											BgL_argszd2approxzd2_9);
									}
							}
						}
					}
				}
			}
		}
	}



/* funcall-type-error */
	obj_t
		BGl_funcallzd2typezd2errorz00zzcfa_funcallz00(BgL_funcallzf2cinfozf2_bglt
		BgL_nodez00_11, BgL_typez00_bglt BgL_typez00_12)
	{
		AN_OBJECT;
		{	/* Cfa/funcall.scm 168 */
			{	/* Cfa/funcall.scm 171 */
				bool_t BgL_testz00_2074;

				{
					obj_t BgL_auxz00_2075;

					{	/* Cfa/funcall.scm 171 */
						BgL_objectz00_bglt BgL_auxz00_2076;

						BgL_auxz00_2076 = (BgL_objectz00_bglt) (BgL_nodez00_11);
						BgL_auxz00_2075 = BGL_OBJECT_WIDENING(BgL_auxz00_2076);
					}
					BgL_testz00_2074 =
						(((BgL_funcallzf2cinfozf2_bglt) CREF(BgL_auxz00_2075))->
						BgL_typezd2errorzd2noticedzf3zf3);
				}
				if (BgL_testz00_2074)
					{	/* Cfa/funcall.scm 171 */
						return BFALSE;
					}
				else
					{	/* Cfa/funcall.scm 171 */
						{
							obj_t BgL_auxz00_2080;

							{	/* Cfa/funcall.scm 173 */
								BgL_objectz00_bglt BgL_auxz00_2081;

								BgL_auxz00_2081 = (BgL_objectz00_bglt) (BgL_nodez00_11);
								BgL_auxz00_2080 = BGL_OBJECT_WIDENING(BgL_auxz00_2081);
							}
							((((BgL_funcallzf2cinfozf2_bglt) CREF(BgL_auxz00_2080))->
									BgL_typezd2errorzd2noticedzf3zf3) =
								((bool_t) ((bool_t) 1)), BUNSPEC);
						}
						{	/* Cfa/funcall.scm 174 */
							obj_t BgL_arg4748z00_1122;

							obj_t BgL_arg4751z00_1125;

							{
								BgL_nodez00_bglt BgL_auxz00_2085;

								BgL_auxz00_2085 = (BgL_nodez00_bglt) (BgL_nodez00_11);
								BgL_arg4748z00_1122 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_2085))->BgL_locz00);
							}
							BgL_arg4751z00_1125 =
								BGl_shapez00zztools_shapez00((obj_t) (BgL_typez00_12));
							return
								BGl_userzd2warningzf2locationz20zztools_errorz00
								(BgL_arg4748z00_1122, BGl_string4938z00zzcfa_funcallz00,
								BGl_string4939z00zzcfa_funcallz00, BgL_arg4751z00_1125);
						}
					}
			}
		}
	}



/* funcall-arity-error */
	BgL_approxz00_bglt BGl_funcallzd2arityzd2errorz00zzcfa_funcallz00(obj_t
		BgL_nodez00_13, BgL_variablez00_bglt BgL_vz00_14, long BgL_arityz00_15,
		obj_t BgL_argszd2approxzd2_16)
	{
		AN_OBJECT;
		{	/* Cfa/funcall.scm 182 */
			{	/* Cfa/funcall.scm 184 */
				bool_t BgL_testz00_2091;

				{	/* Cfa/funcall.scm 184 */
					BgL_funcallzf2cinfozf2_bglt BgL_obj3744z00_1829;

					BgL_obj3744z00_1829 = (BgL_funcallzf2cinfozf2_bglt) (BgL_nodez00_13);
					{
						obj_t BgL_auxz00_2093;

						{	/* Cfa/funcall.scm 184 */
							BgL_objectz00_bglt BgL_auxz00_2094;

							BgL_auxz00_2094 = (BgL_objectz00_bglt) (BgL_obj3744z00_1829);
							BgL_auxz00_2093 = BGL_OBJECT_WIDENING(BgL_auxz00_2094);
						}
						BgL_testz00_2091 =
							(((BgL_funcallzf2cinfozf2_bglt) CREF(BgL_auxz00_2093))->
							BgL_arityzd2errorzd2noticedzf3zf3);
				}}
				if (BgL_testz00_2091)
					{	/* Cfa/funcall.scm 184 */
						BFALSE;
					}
				else
					{	/* Cfa/funcall.scm 185 */
						long BgL_lenzd2provzd2_1128;

						BgL_lenzd2provzd2_1128 =
							(bgl_list_length(BgL_argszd2approxzd2_16) - ((long) 1));
						{	/* Cfa/funcall.scm 186 */
							BgL_funcallzf2cinfozf2_bglt BgL_obj3746z00_1832;

							bool_t BgL_val3745z00_1833;

							BgL_obj3746z00_1832 =
								(BgL_funcallzf2cinfozf2_bglt) (BgL_nodez00_13);
							BgL_val3745z00_1833 = ((bool_t) 1);
							{
								obj_t BgL_auxz00_2101;

								{	/* Cfa/funcall.scm 186 */
									BgL_objectz00_bglt BgL_auxz00_2102;

									BgL_auxz00_2102 = (BgL_objectz00_bglt) (BgL_obj3746z00_1832);
									BgL_auxz00_2101 = BGL_OBJECT_WIDENING(BgL_auxz00_2102);
								}
								((((BgL_funcallzf2cinfozf2_bglt) CREF(BgL_auxz00_2101))->
										BgL_arityzd2errorzd2noticedzf3zf3) =
									((bool_t) BgL_val3745z00_1833), BUNSPEC);
						}}
						{	/* Cfa/funcall.scm 187 */
							obj_t BgL_arg4753z00_1129;

							obj_t BgL_arg4754z00_1130;

							obj_t BgL_arg4756z00_1132;

							{
								BgL_nodez00_bglt BgL_auxz00_2106;

								BgL_auxz00_2106 = (BgL_nodez00_bglt) (BgL_nodez00_13);
								BgL_arg4753z00_1129 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_2106))->BgL_locz00);
							}
							{	/* Cfa/funcall.scm 191 */
								obj_t BgL_arg4757z00_1133;

								{	/* Cfa/funcall.scm 191 */
									bool_t BgL_testz00_2109;

									{	/* Cfa/funcall.scm 191 */
										obj_t BgL_obj1812z00_1835;

										BgL_obj1812z00_1835 = (obj_t) (BgL_vz00_14);
										BgL_testz00_2109 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj1812z00_1835,
											BGl_localz00zzast_varz00);
									}
									if (BgL_testz00_2109)
										{	/* Cfa/funcall.scm 192 */
											BgL_localz00_bglt BgL_duplicated4690z00_1135;

											BgL_duplicated4690z00_1135 =
												(BgL_localz00_bglt) (BgL_vz00_14);
											{	/* Cfa/funcall.scm 192 */
												BgL_localz00_bglt BgL_new4691z00_1136;

												{	/* Cfa/funcall.scm 192 */
													obj_t BgL_arg4760z00_1137;

													obj_t BgL_arg4761z00_1138;

													BgL_typez00_bglt BgL_arg4762z00_1139;

													BgL_valuez00_bglt BgL_arg4763z00_1140;

													obj_t BgL_arg4764z00_1141;

													obj_t BgL_arg4765z00_1142;

													obj_t BgL_arg4766z00_1143;

													long BgL_arg4767z00_1144;

													bool_t BgL_arg4768z00_1145;

													long BgL_arg4769z00_1146;

													{
														BgL_variablez00_bglt BgL_auxz00_2113;

														BgL_auxz00_2113 =
															(BgL_variablez00_bglt)
															(BgL_duplicated4690z00_1135);
														BgL_arg4760z00_1137 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_2113))->
															BgL_idz00);
													}
													{
														BgL_variablez00_bglt BgL_auxz00_2116;

														BgL_auxz00_2116 =
															(BgL_variablez00_bglt)
															(BgL_duplicated4690z00_1135);
														BgL_arg4761z00_1138 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_2116))->
															BgL_namez00);
													}
													{
														BgL_variablez00_bglt BgL_auxz00_2119;

														BgL_auxz00_2119 =
															(BgL_variablez00_bglt)
															(BgL_duplicated4690z00_1135);
														BgL_arg4762z00_1139 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_2119))->
															BgL_typez00);
													}
													{
														BgL_variablez00_bglt BgL_auxz00_2122;

														BgL_auxz00_2122 =
															(BgL_variablez00_bglt)
															(BgL_duplicated4690z00_1135);
														BgL_arg4763z00_1140 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_2122))->
															BgL_valuez00);
													}
													{
														BgL_variablez00_bglt BgL_auxz00_2125;

														BgL_auxz00_2125 =
															(BgL_variablez00_bglt)
															(BgL_duplicated4690z00_1135);
														BgL_arg4764z00_1141 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_2125))->
															BgL_accessz00);
													}
													{
														BgL_variablez00_bglt BgL_auxz00_2128;

														BgL_auxz00_2128 =
															(BgL_variablez00_bglt)
															(BgL_duplicated4690z00_1135);
														BgL_arg4765z00_1142 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_2128))->
															BgL_fastzd2alphazd2);
													}
													{
														BgL_variablez00_bglt BgL_auxz00_2131;

														BgL_auxz00_2131 =
															(BgL_variablez00_bglt)
															(BgL_duplicated4690z00_1135);
														BgL_arg4766z00_1143 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_2131))->
															BgL_removablez00);
													}
													{
														BgL_variablez00_bglt BgL_auxz00_2134;

														BgL_auxz00_2134 =
															(BgL_variablez00_bglt)
															(BgL_duplicated4690z00_1135);
														BgL_arg4767z00_1144 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_2134))->
															BgL_occurrencez00);
													}
													BgL_arg4768z00_1145 =
														(((BgL_localz00_bglt)
															CREF(BgL_duplicated4690z00_1135))->
														BgL_userzf3zf3);
													BgL_arg4769z00_1146 =
														(((BgL_localz00_bglt)
															CREF(BgL_duplicated4690z00_1135))->BgL_keyz00);
													BgL_new4691z00_1136 =
														BGl_makezd2localzd2zzast_varz00(BgL_arg4760z00_1137,
														BgL_arg4761z00_1138, BgL_arg4762z00_1139,
														BgL_arg4763z00_1140, BgL_arg4764z00_1141,
														BgL_arg4765z00_1142, BgL_arg4766z00_1143,
														BgL_arg4767z00_1144, BgL_arg4768z00_1145,
														BgL_arg4769z00_1146);
												}
												{	/* Cfa/funcall.scm 192 */

													BgL_arg4757z00_1133 = (obj_t) (BgL_new4691z00_1136);
										}}}
									else
										{	/* Cfa/funcall.scm 193 */
											bool_t BgL_testz00_2141;

											{	/* Cfa/funcall.scm 193 */
												obj_t BgL_obj1751z00_1846;

												BgL_obj1751z00_1846 = (obj_t) (BgL_vz00_14);
												BgL_testz00_2141 =
													BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_1846,
													BGl_globalz00zzast_varz00);
											}
											if (BgL_testz00_2141)
												{	/* Cfa/funcall.scm 194 */
													BgL_globalz00_bglt BgL_duplicated4692z00_1148;

													BgL_duplicated4692z00_1148 =
														(BgL_globalz00_bglt) (BgL_vz00_14);
													{	/* Cfa/funcall.scm 194 */
														BgL_globalz00_bglt BgL_new4693z00_1149;

														{	/* Cfa/funcall.scm 194 */
															obj_t BgL_arg4771z00_1150;

															obj_t BgL_arg4772z00_1151;

															BgL_typez00_bglt BgL_arg4773z00_1152;

															BgL_valuez00_bglt BgL_arg4774z00_1153;

															obj_t BgL_arg4775z00_1154;

															obj_t BgL_arg4776z00_1155;

															obj_t BgL_arg4777z00_1156;

															long BgL_arg4778z00_1157;

															obj_t BgL_arg4780z00_1158;

															obj_t BgL_arg4782z00_1159;

															bool_t BgL_arg4783z00_1160;

															obj_t BgL_arg4784z00_1161;

															bool_t BgL_arg4785z00_1162;

															obj_t BgL_arg4786z00_1163;

															obj_t BgL_arg4787z00_1164;

															obj_t BgL_arg4788z00_1165;

															{
																BgL_variablez00_bglt BgL_auxz00_2145;

																BgL_auxz00_2145 =
																	(BgL_variablez00_bglt)
																	(BgL_duplicated4692z00_1148);
																BgL_arg4771z00_1150 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_2145))->BgL_idz00);
															}
															{
																BgL_variablez00_bglt BgL_auxz00_2148;

																BgL_auxz00_2148 =
																	(BgL_variablez00_bglt)
																	(BgL_duplicated4692z00_1148);
																BgL_arg4772z00_1151 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_2148))->BgL_namez00);
															}
															{
																BgL_variablez00_bglt BgL_auxz00_2151;

																BgL_auxz00_2151 =
																	(BgL_variablez00_bglt)
																	(BgL_duplicated4692z00_1148);
																BgL_arg4773z00_1152 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_2151))->BgL_typez00);
															}
															{
																BgL_variablez00_bglt BgL_auxz00_2154;

																BgL_auxz00_2154 =
																	(BgL_variablez00_bglt)
																	(BgL_duplicated4692z00_1148);
																BgL_arg4774z00_1153 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_2154))->BgL_valuez00);
															}
															{
																BgL_variablez00_bglt BgL_auxz00_2157;

																BgL_auxz00_2157 =
																	(BgL_variablez00_bglt)
																	(BgL_duplicated4692z00_1148);
																BgL_arg4775z00_1154 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_2157))->BgL_accessz00);
															}
															{
																BgL_variablez00_bglt BgL_auxz00_2160;

																BgL_auxz00_2160 =
																	(BgL_variablez00_bglt)
																	(BgL_duplicated4692z00_1148);
																BgL_arg4776z00_1155 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_2160))->
																	BgL_fastzd2alphazd2);
															}
															{
																BgL_variablez00_bglt BgL_auxz00_2163;

																BgL_auxz00_2163 =
																	(BgL_variablez00_bglt)
																	(BgL_duplicated4692z00_1148);
																BgL_arg4777z00_1156 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_2163))->BgL_removablez00);
															}
															{
																BgL_variablez00_bglt BgL_auxz00_2166;

																BgL_auxz00_2166 =
																	(BgL_variablez00_bglt)
																	(BgL_duplicated4692z00_1148);
																BgL_arg4778z00_1157 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_2166))->BgL_occurrencez00);
															}
															BgL_arg4780z00_1158 =
																(((BgL_globalz00_bglt)
																	CREF(BgL_duplicated4692z00_1148))->
																BgL_modulez00);
															BgL_arg4782z00_1159 =
																(((BgL_globalz00_bglt)
																	CREF(BgL_duplicated4692z00_1148))->
																BgL_importz00);
															BgL_arg4783z00_1160 =
																(((BgL_globalz00_bglt)
																	CREF(BgL_duplicated4692z00_1148))->
																BgL_evaluablezf3zf3);
															BgL_arg4784z00_1161 =
																(((BgL_globalz00_bglt)
																	CREF(BgL_duplicated4692z00_1148))->
																BgL_libraryz00);
															BgL_arg4785z00_1162 =
																(((BgL_globalz00_bglt)
																	CREF(BgL_duplicated4692z00_1148))->
																BgL_userzf3zf3);
															BgL_arg4786z00_1163 =
																(((BgL_globalz00_bglt)
																	CREF(BgL_duplicated4692z00_1148))->
																BgL_pragmaz00);
															BgL_arg4787z00_1164 =
																(((BgL_globalz00_bglt)
																	CREF(BgL_duplicated4692z00_1148))->
																BgL_srcz00);
															BgL_arg4788z00_1165 =
																(((BgL_globalz00_bglt)
																	CREF(BgL_duplicated4692z00_1148))->
																BgL_jvmzd2typezd2namez00);
															BgL_new4693z00_1149 =
																BGl_makezd2globalzd2zzast_varz00
																(BgL_arg4771z00_1150, BgL_arg4772z00_1151,
																BgL_arg4773z00_1152, BgL_arg4774z00_1153,
																BgL_arg4775z00_1154, BgL_arg4776z00_1155,
																BgL_arg4777z00_1156, BgL_arg4778z00_1157,
																BgL_arg4780z00_1158, BgL_arg4782z00_1159,
																BgL_arg4783z00_1160, BgL_arg4784z00_1161,
																BgL_arg4785z00_1162, BgL_arg4786z00_1163,
																BgL_arg4787z00_1164, BgL_arg4788z00_1165);
														}
														{	/* Cfa/funcall.scm 194 */

															BgL_arg4757z00_1133 =
																(obj_t) (BgL_new4693z00_1149);
												}}}
											else
												{	/* Cfa/funcall.scm 193 */
													BgL_arg4757z00_1133 = (obj_t) (BgL_vz00_14);
												}
										}
								}
								BgL_arg4754z00_1130 =
									BGl_shapez00zztools_shapez00(BgL_arg4757z00_1133);
							}
							{	/* Cfa/funcall.scm 199 */
								obj_t BgL_arg4789z00_1166;

								obj_t BgL_arg4791z00_1168;

								{	/* Cfa/funcall.scm 199 */

									BgL_arg4789z00_1166 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
										(BgL_arityz00_15 - ((long) 1)), ((long) 10));
								}
								{	/* Cfa/funcall.scm 201 */

									BgL_arg4791z00_1168 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_lenzd2provzd2_1128, ((long) 10));
								}
								{	/* Cfa/funcall.scm 198 */
									obj_t BgL_list4793z00_1170;

									{	/* Cfa/funcall.scm 198 */
										obj_t BgL_arg4794z00_1171;

										{	/* Cfa/funcall.scm 198 */
											obj_t BgL_arg4795z00_1172;

											{	/* Cfa/funcall.scm 198 */
												obj_t BgL_arg4796z00_1173;

												BgL_arg4796z00_1173 =
													MAKE_PAIR(BGl_string4940z00zzcfa_funcallz00, BNIL);
												BgL_arg4795z00_1172 =
													MAKE_PAIR(BgL_arg4791z00_1168, BgL_arg4796z00_1173);
											}
											BgL_arg4794z00_1171 =
												MAKE_PAIR(BGl_string4941z00zzcfa_funcallz00,
												BgL_arg4795z00_1172);
										}
										BgL_list4793z00_1170 =
											MAKE_PAIR(BgL_arg4789z00_1166, BgL_arg4794z00_1171);
									}
									BgL_arg4756z00_1132 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list4793z00_1170);
							}}
							BGl_userzd2warningzf2locationz20zztools_errorz00
								(BgL_arg4753z00_1129, BgL_arg4754z00_1130,
								BGl_string4942z00zzcfa_funcallz00, BgL_arg4756z00_1132);
			}}}
			return BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_funcallz00()
	{
		AN_OBJECT;
		{	/* Cfa/funcall.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_funcallz00()
	{
		AN_OBJECT;
		{	/* Cfa/funcall.scm 15 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_funcallzf2Cinfozf2zzcfa_infoz00,
				BGl_proc4943z00zzcfa_funcallz00, BGl_string4944z00zzcfa_funcallz00);
		}
	}



/* cfa!-funcall/Cinfo4707 */
	obj_t BGl_cfaz12zd2funcallzf2Cinfo4707z32zzcfa_funcallz00(obj_t
		BgL_envz00_1900, obj_t BgL_nodez00_1901)
	{
		AN_OBJECT;
		{	/* Cfa/funcall.scm 42 */
			{
				BgL_funcallzf2cinfozf2_bglt BgL_nodez00_1710;

				{	/* Tools/trace.sch 53 */
					BgL_approxz00_bglt BgL_auxz00_2192;

					BgL_nodez00_1710 = (BgL_funcallzf2cinfozf2_bglt) (BgL_nodez00_1901);
					{	/* Cfa/funcall.scm 45 */
						BgL_approxz00_bglt BgL_funzd2approxzd2_1714;

						{	/* Cfa/funcall.scm 45 */
							BgL_nodez00_bglt BgL_arg4934z00_1774;

							{
								BgL_funcallz00_bglt BgL_auxz00_2193;

								BgL_auxz00_2193 = (BgL_funcallz00_bglt) (BgL_nodez00_1710);
								BgL_arg4934z00_1774 =
									(((BgL_funcallz00_bglt) CREF(BgL_auxz00_2193))->BgL_funz00);
							}
							BgL_funzd2approxzd2_1714 =
								BGl_cfaz12z12zzcfa_cfaz00(BgL_arg4934z00_1774);
						}
						{	/* Cfa/funcall.scm 45 */
							obj_t BgL_argszd2approxzd2_1715;

							{	/* Cfa/funcall.scm 46 */
								obj_t BgL_l4694z00_1755;

								{	/* Cfa/funcall.scm 46 */
									obj_t BgL_pairz00_1867;

									{
										BgL_funcallz00_bglt BgL_auxz00_2197;

										BgL_auxz00_2197 = (BgL_funcallz00_bglt) (BgL_nodez00_1710);
										BgL_pairz00_1867 =
											(((BgL_funcallz00_bglt) CREF(BgL_auxz00_2197))->
											BgL_argsz00);
									}
									BgL_l4694z00_1755 = CDR(BgL_pairz00_1867);
								}
								if (NULLP(BgL_l4694z00_1755))
									{	/* Cfa/funcall.scm 46 */
										BgL_argszd2approxzd2_1715 = BNIL;
									}
								else
									{	/* Cfa/funcall.scm 46 */
										obj_t BgL_head4696z00_1757;

										{	/* Cfa/funcall.scm 46 */
											BgL_approxz00_bglt BgL_arg4930z00_1770;

											{	/* Cfa/funcall.scm 46 */
												obj_t BgL_arg4932z00_1772;

												BgL_arg4932z00_1772 = CAR(BgL_l4694z00_1755);
												BgL_arg4930z00_1770 =
													BGl_cfaz12z12zzcfa_cfaz00(
													(BgL_nodez00_bglt) (BgL_arg4932z00_1772));
											}
											BgL_head4696z00_1757 =
												MAKE_PAIR((obj_t) (BgL_arg4930z00_1770), BNIL);
										}
										{	/* Cfa/funcall.scm 46 */
											obj_t BgL_g4699z00_1758;

											BgL_g4699z00_1758 = CDR(BgL_l4694z00_1755);
											{
												obj_t BgL_l4694z00_1760;

												obj_t BgL_tail4697z00_1761;

												BgL_l4694z00_1760 = BgL_g4699z00_1758;
												BgL_tail4697z00_1761 = BgL_head4696z00_1757;
											BgL_zc3anonymousza34924ze3z83_1762:
												if (NULLP(BgL_l4694z00_1760))
													{	/* Cfa/funcall.scm 46 */
														BgL_argszd2approxzd2_1715 = BgL_head4696z00_1757;
													}
												else
													{	/* Cfa/funcall.scm 46 */
														obj_t BgL_newtail4698z00_1764;

														{	/* Cfa/funcall.scm 46 */
															BgL_approxz00_bglt BgL_arg4927z00_1766;

															{	/* Cfa/funcall.scm 46 */
																obj_t BgL_arg4929z00_1768;

																BgL_arg4929z00_1768 = CAR(BgL_l4694z00_1760);
																BgL_arg4927z00_1766 =
																	BGl_cfaz12z12zzcfa_cfaz00(
																	(BgL_nodez00_bglt) (BgL_arg4929z00_1768));
															}
															BgL_newtail4698z00_1764 =
																MAKE_PAIR((obj_t) (BgL_arg4927z00_1766), BNIL);
														}
														SET_CDR(BgL_tail4697z00_1761,
															BgL_newtail4698z00_1764);
														{
															obj_t BgL_tail4697z00_2219;

															obj_t BgL_l4694z00_2217;

															BgL_l4694z00_2217 = CDR(BgL_l4694z00_1760);
															BgL_tail4697z00_2219 = BgL_newtail4698z00_1764;
															BgL_tail4697z00_1761 = BgL_tail4697z00_2219;
															BgL_l4694z00_1760 = BgL_l4694z00_2217;
															goto BgL_zc3anonymousza34924ze3z83_1762;
														}
													}
											}
										}
									}
							}
							{	/* Cfa/funcall.scm 46 */

								{	/* Cfa/funcall.scm 51 */
									BgL_typez00_bglt BgL_funzd2typezd2_1716;

									BgL_funzd2typezd2_1716 =
										(((BgL_approxz00_bglt) CREF(BgL_funzd2approxzd2_1714))->
										BgL_typez00);
									{	/* Cfa/funcall.scm 52 */
										bool_t BgL_testz00_2221;

										if (
											((obj_t) (BgL_funzd2typezd2_1716) ==
												BGl_za2_za2z00zztype_cachez00))
											{	/* Cfa/funcall.scm 52 */
												BgL_testz00_2221 = ((bool_t) 0);
											}
										else
											{	/* Cfa/funcall.scm 52 */
												if (
													((obj_t) (BgL_funzd2typezd2_1716) ==
														BGl_za2objza2z00zztype_cachez00))
													{	/* Cfa/funcall.scm 53 */
														BgL_testz00_2221 = ((bool_t) 0);
													}
												else
													{	/* Cfa/funcall.scm 53 */
														if (
															((obj_t) (BgL_funzd2typezd2_1716) ==
																BGl_za2procedureza2z00zztype_cachez00))
															{	/* Cfa/funcall.scm 54 */
																BgL_testz00_2221 = ((bool_t) 0);
															}
														else
															{	/* Cfa/funcall.scm 54 */
																BgL_testz00_2221 = ((bool_t) 1);
															}
													}
											}
										if (BgL_testz00_2221)
											{	/* Cfa/funcall.scm 52 */
												BGl_funcallzd2typezd2errorz00zzcfa_funcallz00
													(BgL_nodez00_1710, BgL_funzd2typezd2_1716);
											}
										else
											{	/* Cfa/funcall.scm 52 */
												BFALSE;
											}
									}
								}
								{	/* Cfa/funcall.scm 57 */
									bool_t BgL_testz00_2232;

									{	/* Cfa/funcall.scm 57 */
										bool_t BgL_testz00_2233;

										{	/* Cfa/funcall.scm 57 */
											BgL_typez00_bglt BgL_arg4902z00_1724;

											BgL_arg4902z00_1724 =
												(((BgL_approxz00_bglt) CREF(BgL_funzd2approxzd2_1714))->
												BgL_typez00);
											BgL_testz00_2233 =
												((obj_t) (BgL_arg4902z00_1724) ==
												BGl_za2procedureza2z00zztype_cachez00);
										}
										if (BgL_testz00_2233)
											{	/* Cfa/funcall.scm 57 */
												BgL_testz00_2232 =
													(((BgL_approxz00_bglt)
														CREF(BgL_funzd2approxzd2_1714))->BgL_topzf3zf3);
											}
										else
											{	/* Cfa/funcall.scm 57 */
												BgL_testz00_2232 = ((bool_t) 1);
											}
									}
									if (BgL_testz00_2232)
										{	/* Cfa/funcall.scm 59 */
											BgL_approxz00_bglt BgL_arg4900z00_1722;

											{
												obj_t BgL_auxz00_2238;

												{	/* Cfa/funcall.scm 59 */
													BgL_objectz00_bglt BgL_auxz00_2239;

													BgL_auxz00_2239 =
														(BgL_objectz00_bglt) (BgL_nodez00_1710);
													BgL_auxz00_2238 =
														BGL_OBJECT_WIDENING(BgL_auxz00_2239);
												}
												BgL_arg4900z00_1722 =
													(((BgL_funcallzf2cinfozf2_bglt)
														CREF(BgL_auxz00_2238))->BgL_approxz00);
											}
											BGl_approxzd2setzd2typez12z12zzcfa_approxz00
												(BgL_arg4900z00_1722,
												(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00));
										}
									else
										{	/* Cfa/funcall.scm 57 */
											BFALSE;
										}
								}
								{	/* Cfa/funcall.scm 61 */
									bool_t BgL_testz00_2245;

									if (
										(((BgL_approxz00_bglt) CREF(BgL_funzd2approxzd2_1714))->
											BgL_topzf3zf3))
										{	/* Cfa/funcall.scm 61 */
											BgL_testz00_2245 = ((bool_t) 1);
										}
									else
										{	/* Cfa/funcall.scm 62 */
											bool_t BgL_testz00_2248;

											{	/* Cfa/funcall.scm 62 */
												BgL_typez00_bglt BgL_arg4922z00_1754;

												BgL_arg4922z00_1754 =
													(((BgL_approxz00_bglt)
														CREF(BgL_funzd2approxzd2_1714))->BgL_typez00);
												BgL_testz00_2248 =
													((obj_t) (BgL_arg4922z00_1754) ==
													BGl_za2procedureza2z00zztype_cachez00);
											}
											if (BgL_testz00_2248)
												{	/* Cfa/funcall.scm 62 */
													BgL_testz00_2245 = ((bool_t) 0);
												}
											else
												{	/* Cfa/funcall.scm 62 */
													BgL_testz00_2245 = ((bool_t) 1);
												}
										}
									if (BgL_testz00_2245)
										{	/* Cfa/funcall.scm 61 */
											{
												obj_t BgL_l4700z00_1727;

												BgL_l4700z00_1727 = BgL_argszd2approxzd2_1715;
											BgL_zc3anonymousza34904ze3z83_1728:
												if (PAIRP(BgL_l4700z00_1727))
													{	/* Cfa/funcall.scm 64 */
														{	/* Cfa/funcall.scm 64 */
															obj_t BgL_approxz00_1730;

															BgL_approxz00_1730 = CAR(BgL_l4700z00_1727);
															BGl_loosez12z12zzcfa_loosez00(
																(BgL_approxz00_bglt) (BgL_approxz00_1730),
																CNST_TABLE_REF(((long) 0)));
														}
														{
															obj_t BgL_l4700z00_2258;

															BgL_l4700z00_2258 = CDR(BgL_l4700z00_1727);
															BgL_l4700z00_1727 = BgL_l4700z00_2258;
															goto BgL_zc3anonymousza34904ze3z83_1728;
														}
													}
												else
													{	/* Cfa/funcall.scm 64 */
														((bool_t) 1);
													}
											}
											{	/* Cfa/funcall.scm 67 */
												obj_t BgL_zc3anonymousza34908ze3z83_1898;

												BgL_zc3anonymousza34908ze3z83_1898 =
													make_fx_procedure
													(BGl_zc3anonymousza34908ze3z83zzcfa_funcallz00,
													(int) (((long) 1)), (int) (((long) 3)));
												PROCEDURE_SET(BgL_zc3anonymousza34908ze3z83_1898,
													(int) (((long) 0)), (obj_t) (BgL_nodez00_1710));
												PROCEDURE_SET(BgL_zc3anonymousza34908ze3z83_1898,
													(int) (((long) 1)), BgL_argszd2approxzd2_1715);
												PROCEDURE_SET(BgL_zc3anonymousza34908ze3z83_1898,
													(int) (((long) 2)), (obj_t) (BgL_nodez00_1710));
												BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
													(BgL_zc3anonymousza34908ze3z83_1898,
													BgL_funzd2approxzd2_1714);
											}
											{	/* Cfa/funcall.scm 76 */
												BgL_approxz00_bglt BgL_arg4913z00_1742;

												{
													obj_t BgL_auxz00_2272;

													{	/* Cfa/funcall.scm 76 */
														BgL_objectz00_bglt BgL_auxz00_2273;

														BgL_auxz00_2273 =
															(BgL_objectz00_bglt) (BgL_nodez00_1710);
														BgL_auxz00_2272 =
															BGL_OBJECT_WIDENING(BgL_auxz00_2273);
													}
													BgL_arg4913z00_1742 =
														(((BgL_funcallzf2cinfozf2_bglt)
															CREF(BgL_auxz00_2272))->BgL_approxz00);
												}
												BGl_approxzd2setzd2topz12z12zzcfa_approxz00
													(BgL_arg4913z00_1742);
										}}
									else
										{	/* Cfa/funcall.scm 79 */
											obj_t BgL_zc3anonymousza34915ze3z83_1897;

											BgL_zc3anonymousza34915ze3z83_1897 =
												make_fx_procedure
												(BGl_zc3anonymousza34915ze3z83zzcfa_funcallz00,
												(int) (((long) 1)), (int) (((long) 3)));
											PROCEDURE_SET(BgL_zc3anonymousza34915ze3z83_1897,
												(int) (((long) 0)), (obj_t) (BgL_nodez00_1710));
											PROCEDURE_SET(BgL_zc3anonymousza34915ze3z83_1897,
												(int) (((long) 1)), BgL_argszd2approxzd2_1715);
											PROCEDURE_SET(BgL_zc3anonymousza34915ze3z83_1897,
												(int) (((long) 2)), (obj_t) (BgL_nodez00_1710));
											BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
												(BgL_zc3anonymousza34915ze3z83_1897,
												BgL_funzd2approxzd2_1714);
								}}
								{
									obj_t BgL_auxz00_2290;

									{	/* Cfa/funcall.scm 88 */
										BgL_objectz00_bglt BgL_auxz00_2291;

										BgL_auxz00_2291 = (BgL_objectz00_bglt) (BgL_nodez00_1710);
										BgL_auxz00_2290 = BGL_OBJECT_WIDENING(BgL_auxz00_2291);
									}
									BgL_auxz00_2192 =
										(((BgL_funcallzf2cinfozf2_bglt) CREF(BgL_auxz00_2290))->
										BgL_approxz00);
					}}}}
					return (obj_t) (BgL_auxz00_2192);
				}
			}
		}
	}



/* <anonymous:4908> */
	obj_t BGl_zc3anonymousza34908ze3z83zzcfa_funcallz00(obj_t BgL_envz00_1902,
		obj_t BgL_allocz00_1906)
	{
		AN_OBJECT;
		{	/* Cfa/funcall.scm 66 */
			{	/* Cfa/funcall.scm 67 */
				obj_t BgL_instance4681z00_1903;

				obj_t BgL_argszd2approxzd2_1904;

				obj_t BgL_nodez00_1905;

				BgL_instance4681z00_1903 =
					PROCEDURE_REF(BgL_envz00_1902, (int) (((long) 0)));
				BgL_argszd2approxzd2_1904 =
					PROCEDURE_REF(BgL_envz00_1902, (int) (((long) 1)));
				BgL_nodez00_1905 = PROCEDURE_REF(BgL_envz00_1902, (int) (((long) 2)));
				{
					obj_t BgL_allocz00_1734;

					{	/* Cfa/funcall.scm 67 */
						BgL_approxz00_bglt BgL_auxz00_2303;

						BgL_allocz00_1734 = BgL_allocz00_1906;
						if (BGl_iszd2azf3z21zz__objectz00(BgL_allocz00_1734,
								BGl_makezd2procedurezd2appz00zzcfa_info2z00))
							{	/* Cfa/funcall.scm 68 */
								BgL_approxz00_bglt BgL_envzd2approxzd2_1737;

								{	/* Cfa/funcall.scm 68 */
									BgL_makezd2procedurezd2appz00_bglt BgL_obj4289z00_1890;

									BgL_obj4289z00_1890 =
										(BgL_makezd2procedurezd2appz00_bglt) (BgL_allocz00_1734);
									{
										obj_t BgL_auxz00_2307;

										{	/* Cfa/funcall.scm 68 */
											BgL_objectz00_bglt BgL_auxz00_2308;

											BgL_auxz00_2308 =
												(BgL_objectz00_bglt) (BgL_obj4289z00_1890);
											BgL_auxz00_2307 = BGL_OBJECT_WIDENING(BgL_auxz00_2308);
										}
										BgL_envzd2approxzd2_1737 =
											(((BgL_makezd2procedurezd2appz00_bglt)
												CREF(BgL_auxz00_2307))->BgL_approxz00);
									}
								}
								{	/* Cfa/funcall.scm 69 */
									BgL_approxz00_bglt BgL_arg4910z00_1738;

									BgL_approxz00_bglt BgL_arg4911z00_1739;

									{	/* Cfa/funcall.scm 69 */
										BgL_funcallzf2cinfozf2_bglt BgL_obj3742z00_1891;

										BgL_obj3742z00_1891 =
											(BgL_funcallzf2cinfozf2_bglt) (BgL_instance4681z00_1903);
										{
											obj_t BgL_auxz00_2313;

											{	/* Cfa/funcall.scm 69 */
												BgL_objectz00_bglt BgL_auxz00_2314;

												BgL_auxz00_2314 =
													(BgL_objectz00_bglt) (BgL_obj3742z00_1891);
												BgL_auxz00_2313 = BGL_OBJECT_WIDENING(BgL_auxz00_2314);
											}
											BgL_arg4910z00_1738 =
												(((BgL_funcallzf2cinfozf2_bglt) CREF(BgL_auxz00_2313))->
												BgL_approxz00);
										}
									}
									{	/* Cfa/funcall.scm 71 */
										obj_t BgL_arg4912z00_1740;

										BgL_arg4912z00_1740 =
											MAKE_PAIR(
											(obj_t) (BgL_envzd2approxzd2_1737),
											BgL_argszd2approxzd2_1904);
										BgL_arg4911z00_1739 =
											BGl_funcallz12z12zzcfa_funcallz00(
											(BgL_makezd2procedurezd2appz00_bglt) (BgL_allocz00_1734),
											BgL_arg4912z00_1740, BgL_nodez00_1905);
									}
									BgL_auxz00_2303 =
										BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg4910z00_1738,
										BgL_arg4911z00_1739);
								}
							}
						else
							{	/* Cfa/funcall.scm 67 */
								BgL_auxz00_2303 = BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
							}
						return (obj_t) (BgL_auxz00_2303);
					}
				}
			}
		}
	}



/* <anonymous:4915> */
	obj_t BGl_zc3anonymousza34915ze3z83zzcfa_funcallz00(obj_t BgL_envz00_1907,
		obj_t BgL_allocz00_1911)
	{
		AN_OBJECT;
		{	/* Cfa/funcall.scm 78 */
			{	/* Cfa/funcall.scm 79 */
				obj_t BgL_instance4681z00_1908;

				obj_t BgL_argszd2approxzd2_1909;

				obj_t BgL_nodez00_1910;

				BgL_instance4681z00_1908 =
					PROCEDURE_REF(BgL_envz00_1907, (int) (((long) 0)));
				BgL_argszd2approxzd2_1909 =
					PROCEDURE_REF(BgL_envz00_1907, (int) (((long) 1)));
				BgL_nodez00_1910 = PROCEDURE_REF(BgL_envz00_1907, (int) (((long) 2)));
				{
					obj_t BgL_allocz00_1744;

					{	/* Cfa/funcall.scm 79 */
						BgL_approxz00_bglt BgL_auxz00_2331;

						BgL_allocz00_1744 = BgL_allocz00_1911;
						if (BGl_iszd2azf3z21zz__objectz00(BgL_allocz00_1744,
								BGl_makezd2procedurezd2appz00zzcfa_info2z00))
							{	/* Cfa/funcall.scm 80 */
								BgL_approxz00_bglt BgL_envzd2approxzd2_1747;

								{	/* Cfa/funcall.scm 80 */
									BgL_makezd2procedurezd2appz00_bglt BgL_obj4289z00_1894;

									BgL_obj4289z00_1894 =
										(BgL_makezd2procedurezd2appz00_bglt) (BgL_allocz00_1744);
									{
										obj_t BgL_auxz00_2335;

										{	/* Cfa/funcall.scm 80 */
											BgL_objectz00_bglt BgL_auxz00_2336;

											BgL_auxz00_2336 =
												(BgL_objectz00_bglt) (BgL_obj4289z00_1894);
											BgL_auxz00_2335 = BGL_OBJECT_WIDENING(BgL_auxz00_2336);
										}
										BgL_envzd2approxzd2_1747 =
											(((BgL_makezd2procedurezd2appz00_bglt)
												CREF(BgL_auxz00_2335))->BgL_approxz00);
									}
								}
								{	/* Cfa/funcall.scm 81 */
									BgL_approxz00_bglt BgL_arg4917z00_1748;

									BgL_approxz00_bglt BgL_arg4918z00_1749;

									{	/* Cfa/funcall.scm 81 */
										BgL_funcallzf2cinfozf2_bglt BgL_obj3742z00_1895;

										BgL_obj3742z00_1895 =
											(BgL_funcallzf2cinfozf2_bglt) (BgL_instance4681z00_1908);
										{
											obj_t BgL_auxz00_2341;

											{	/* Cfa/funcall.scm 81 */
												BgL_objectz00_bglt BgL_auxz00_2342;

												BgL_auxz00_2342 =
													(BgL_objectz00_bglt) (BgL_obj3742z00_1895);
												BgL_auxz00_2341 = BGL_OBJECT_WIDENING(BgL_auxz00_2342);
											}
											BgL_arg4917z00_1748 =
												(((BgL_funcallzf2cinfozf2_bglt) CREF(BgL_auxz00_2341))->
												BgL_approxz00);
										}
									}
									{	/* Cfa/funcall.scm 83 */
										obj_t BgL_arg4919z00_1750;

										BgL_arg4919z00_1750 =
											MAKE_PAIR(
											(obj_t) (BgL_envzd2approxzd2_1747),
											BgL_argszd2approxzd2_1909);
										BgL_arg4918z00_1749 =
											BGl_funcallz12z12zzcfa_funcallz00(
											(BgL_makezd2procedurezd2appz00_bglt) (BgL_allocz00_1744),
											BgL_arg4919z00_1750, BgL_nodez00_1910);
									}
									BgL_auxz00_2331 =
										BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg4917z00_1748,
										BgL_arg4918z00_1749);
								}
							}
						else
							{	/* Cfa/funcall.scm 79 */
								BgL_auxz00_2331 = BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
							}
						return (obj_t) (BgL_auxz00_2331);
					}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_funcallz00()
	{
		AN_OBJECT;
		{	/* Cfa/funcall.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string4945z00zzcfa_funcallz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4945z00zzcfa_funcallz00));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 320731191),
				BSTRING_TO_STRING(BGl_string4945z00zzcfa_funcallz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string4945z00zzcfa_funcallz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4945z00zzcfa_funcallz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string4945z00zzcfa_funcallz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4945z00zzcfa_funcallz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4945z00zzcfa_funcallz00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 243010053),
				BSTRING_TO_STRING(BGl_string4945z00zzcfa_funcallz00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string4945z00zzcfa_funcallz00));
			BGl_modulezd2initializa7ationz75zzcfa_cfaz00(((long) 42139303),
				BSTRING_TO_STRING(BGl_string4945z00zzcfa_funcallz00));
			BGl_modulezd2initializa7ationz75zzcfa_loosez00(((long) 235614963),
				BSTRING_TO_STRING(BGl_string4945z00zzcfa_funcallz00));
			BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 535144917),
				BSTRING_TO_STRING(BGl_string4945z00zzcfa_funcallz00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_appz00(((long) 207302694),
				BSTRING_TO_STRING(BGl_string4945z00zzcfa_funcallz00));
		}
	}

#ifdef __cplusplus
}
#endif
