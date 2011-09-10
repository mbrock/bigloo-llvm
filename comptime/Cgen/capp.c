/*===========================================================================*/
/*   (Cgen/capp.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cgen/capp.scm)*/
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

	typedef struct BgL_setqz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}              *BgL_setqz00_bglt;

	typedef struct BgL_copz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}             *BgL_copz00_bglt;

	typedef struct BgL_clabelz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_namez00;
		bool_t BgL_usedzf3zf3;
		obj_t BgL_bodyz00;
	}                *BgL_clabelz00_bglt;

	typedef struct BgL_cgotoz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_clabelz00_bgl *BgL_labelz00;
	}               *BgL_cgotoz00_bglt;

	typedef struct BgL_blockz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_bodyz00;
	}               *BgL_blockz00_bglt;

	typedef struct BgL_varcz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}              *BgL_varcz00_bglt;

	typedef struct BgL_csequencez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		bool_t BgL_czd2expzf3z21;
		obj_t BgL_copsz00;
	}                   *BgL_csequencez00_bglt;

	typedef struct BgL_stopz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}              *BgL_stopz00_bglt;

	typedef struct BgL_csetqz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_varcz00_bgl *BgL_varz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}               *BgL_csetqz00_bglt;

	typedef struct BgL_localzd2varzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_varsz00;
	}                     *BgL_localzd2varzd2_bglt;

	typedef struct BgL_cfuncallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
		obj_t BgL_strengthz00;
	}                  *BgL_cfuncallz00_bglt;

	typedef struct BgL_capplyz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_funz00;
		struct BgL_copz00_bgl *BgL_argz00;
	}                *BgL_capplyz00_bglt;

	typedef struct BgL_cappz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
	}              *BgL_cappz00_bglt;

	typedef struct BgL_sfunzf2czf2_bgl
	{
		struct BgL_clabelz00_bgl *BgL_labelz00;
		bool_t BgL_integratedz00;
	}                  *BgL_sfunzf2czf2_bglt;


	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_za2returnzd2kontza2zd2zzcgen_cgenz00;
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	extern BgL_csequencez00_bglt BGl_makezd2csequencezd2zzcgen_copz00(obj_t,
		bool_t, obj_t);
	static obj_t
		BGl_nodezd2cfunzd2nonzd2tailzd2appzd2ze3copz31zzcgen_cappz00
		(BgL_globalz00_bglt, BgL_appz00_bglt, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern BgL_localz00_bglt
		BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00(obj_t, BgL_typez00_bglt);
	static obj_t BGl_cnstzd2initzd2zzcgen_cappz00();
	extern BgL_capplyz00_bglt BGl_makezd2capplyzd2zzcgen_copz00(obj_t,
		BgL_copz00_bglt, BgL_copz00_bglt);
	extern BgL_copz00_bglt BGl_bdbzd2letzd2varz00zzcgen_cgenz00(BgL_copz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcgen_cappz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcgen_cgenz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcgen_copz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzcgen_cappz00();
	static obj_t BGl_nodezd2ze3copzd2funcall3872ze3zzcgen_cappz00(obj_t, obj_t,
		obj_t);
	extern BgL_varcz00_bglt BGl_makezd2varczd2zzcgen_copz00(obj_t,
		BgL_variablez00_bglt);
	static obj_t BGl_nodezd2ze3copzd2appzd2ly3870z31zzcgen_cappz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	extern obj_t BGl_za2stopzd2kontza2zd2zzcgen_cgenz00;
	extern obj_t BGl_varcz00zzcgen_copz00;
	extern BgL_blockz00_bglt BGl_makezd2blockzd2zzcgen_copz00(obj_t,
		BgL_copz00_bglt);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl_nodezd2ze3copzd2app3874ze3zzcgen_cappz00(obj_t, obj_t,
		obj_t);
	extern bool_t BGl_globalzd2argszd2safezf3zf3zzast_varz00(BgL_globalz00_bglt);
	static obj_t
		BGl_nodezd2sfunzd2nonzd2tailzd2appzd2ze3copz31zzcgen_cappz00
		(BgL_globalz00_bglt, BgL_appz00_bglt, obj_t);
	static obj_t BGl_methodzd2initzd2zzcgen_cappz00();
	extern BgL_cfuncallz00_bglt BGl_makezd2cfuncallzd2zzcgen_copz00(obj_t,
		BgL_copz00_bglt, obj_t, obj_t);
	extern obj_t BGl_za2thezd2globalza2zd2zzcgen_cgenz00;
	extern BgL_cappz00_bglt BGl_makezd2cappzd2zzcgen_copz00(obj_t,
		BgL_copz00_bglt, obj_t);
	static obj_t
		BGl_nodezd2tailzd2appzd2ze3copz31zzcgen_cappz00(BgL_variablez00_bglt,
		BgL_appz00_bglt, obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcgen_cappz00 = BUNSPEC;
	extern obj_t BGl_za2idzd2kontza2zd2zzcgen_cgenz00;
	static obj_t BGl_genericzd2initzd2zzcgen_cappz00();
	extern obj_t BGl_globalz00zzast_varz00;
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern obj_t BGl_csetqz00zzcgen_copz00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzcgen_cappz00();
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern BgL_csetqz00_bglt BGl_makezd2csetqzd2zzcgen_copz00(obj_t,
		BgL_varcz00_bglt, BgL_copz00_bglt);
	extern BgL_localzd2varzd2_bglt BGl_makezd2localzd2varz00zzcgen_copz00(obj_t,
		obj_t);
	extern obj_t BGl_catomz00zzcgen_copz00;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_blockzd2kontzd2zzcgen_cgenz00(obj_t, obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	extern BgL_cgotoz00_bglt BGl_makezd2cgotozd2zzcgen_copz00(obj_t,
		BgL_clabelz00_bglt);
	extern BgL_setqz00_bglt BGl_nodezd2setqzd2zzcgen_cgenz00(BgL_variablez00_bglt,
		BgL_nodez00_bglt);
	extern BgL_copz00_bglt BGl_nodezd2ze3copz31zzcgen_cgenz00(BgL_nodez00_bglt,
		obj_t);
	extern BgL_stopz00_bglt BGl_makezd2stopzd2zzcgen_copz00(obj_t,
		BgL_copz00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcgen_cappz00();
	static obj_t __cnst[2];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4294z00zzcgen_cappz00,
		BgL_bgl_nodeza7d2za7e3copza7d24302za7,
		BGl_nodezd2ze3copzd2appzd2ly3870z31zzcgen_cappz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4296z00zzcgen_cappz00,
		BgL_bgl_nodeza7d2za7e3copza7d24303za7,
		BGl_nodezd2ze3copzd2funcall3872ze3zzcgen_cappz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4297z00zzcgen_cappz00,
		BgL_bgl_nodeza7d2za7e3copza7d24304za7,
		BGl_nodezd2ze3copzd2app3874ze3zzcgen_cappz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4295z00zzcgen_cappz00,
		BgL_bgl_string4295za700za7za7c4305za7, "node->cop", 9);
	      DEFINE_STRING(BGl_string4298z00zzcgen_cappz00,
		BgL_bgl_string4298za700za7za7c4306za7, "cgen_capp", 9);
	      DEFINE_STRING(BGl_string4299z00zzcgen_cappz00,
		BgL_bgl_string4299za700za7za7c4307za7, "fun aux ", 8);
	extern obj_t BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcgen_cappz00(long
		BgL_checksumz00_2164, char *BgL_fromz00_2165)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcgen_cappz00))
				{
					BGl_requirezd2initializa7ationz75zzcgen_cappz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcgen_cappz00();
					BGl_cnstzd2initzd2zzcgen_cappz00();
					BGl_importedzd2moduleszd2initz00zzcgen_cappz00();
					BGl_methodzd2initzd2zzcgen_cappz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcgen_cappz00()
	{
		AN_OBJECT;
		{	/* Cgen/capp.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cgen_capp");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cgen_capp");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cgen_capp");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcgen_cappz00()
	{
		AN_OBJECT;
		{	/* Cgen/capp.scm 15 */
			{	/* Cgen/capp.scm 15 */
				obj_t BgL_cportz00_2156;

				BgL_cportz00_2156 =
					bgl_open_input_string(BGl_string4299z00zzcgen_cappz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2157;

					BgL_iz00_2157 = ((long) 1);
				BgL_loopz00_2158:
					if ((BgL_iz00_2157 == ((long) -1)))
						{	/* Cgen/capp.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cgen/capp.scm 15 */
							{	/* Cgen/capp.scm 15 */
								obj_t BgL_arg4301z00_2160;

								{	/* Cgen/capp.scm 15 */

									{	/* Cgen/capp.scm 15 */
										obj_t BgL_locationz00_2162;

										BgL_locationz00_2162 = BBOOL(((bool_t) 0));
										{	/* Cgen/capp.scm 15 */

											BgL_arg4301z00_2160 =
												BGl_readz00zz__readerz00(BgL_cportz00_2156,
												BgL_locationz00_2162);
										}
									}
								}
								{	/* Cgen/capp.scm 15 */
									int BgL_auxz00_2182;

									BgL_auxz00_2182 = (int) (BgL_iz00_2157);
									CNST_TABLE_SET(BgL_auxz00_2182, BgL_arg4301z00_2160);
							}}
							{	/* Cgen/capp.scm 15 */
								int BgL_auxz00_2163;

								BgL_auxz00_2163 = (int) ((BgL_iz00_2157 - ((long) 1)));
								{
									long BgL_iz00_2187;

									BgL_iz00_2187 = (long) (BgL_auxz00_2163);
									BgL_iz00_2157 = BgL_iz00_2187;
									goto BgL_loopz00_2158;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcgen_cappz00()
	{
		AN_OBJECT;
		{	/* Cgen/capp.scm 15 */
			return BUNSPEC;
		}
	}



/* node-sfun-non-tail-app->cop */
	obj_t
		BGl_nodezd2sfunzd2nonzd2tailzd2appzd2ze3copz31zzcgen_cappz00
		(BgL_globalz00_bglt BgL_varz00_10, BgL_appz00_bglt BgL_nodez00_11,
		obj_t BgL_kontz00_12)
	{
		AN_OBJECT;
		{	/* Cgen/capp.scm 222 */
			{	/* Cgen/capp.scm 223 */
				obj_t BgL_argsz00_977;

				{	/* Cgen/capp.scm 223 */
					BgL_sfunz00_bglt BgL_obj1880z00_1920;

					{	/* Cgen/capp.scm 223 */
						BgL_variablez00_bglt BgL_obj1611z00_1919;

						BgL_obj1611z00_1919 = (BgL_variablez00_bglt) (BgL_varz00_10);
						BgL_obj1880z00_1920 =
							(BgL_sfunz00_bglt) (
							(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1919))->
								BgL_valuez00));
					}
					BgL_argsz00_977 =
						(((BgL_sfunz00_bglt) CREF(BgL_obj1880z00_1920))->BgL_argsz00);
				}
				{	/* Cgen/capp.scm 223 */
					obj_t BgL_argszd2typezd2_978;

					if (NULLP(BgL_argsz00_977))
						{	/* Cgen/capp.scm 224 */
							BgL_argszd2typezd2_978 = BNIL;
						}
					else
						{	/* Cgen/capp.scm 224 */
							obj_t BgL_head3866z00_1043;

							BgL_head3866z00_1043 = MAKE_PAIR(BNIL, BNIL);
							{
								obj_t BgL_l3864z00_1045;

								obj_t BgL_tail3867z00_1046;

								BgL_l3864z00_1045 = BgL_argsz00_977;
								BgL_tail3867z00_1046 = BgL_head3866z00_1043;
							BgL_zc3anonymousza33921ze3z83_1047:
								if (NULLP(BgL_l3864z00_1045))
									{	/* Cgen/capp.scm 224 */
										BgL_argszd2typezd2_978 = CDR(BgL_head3866z00_1043);
									}
								else
									{	/* Cgen/capp.scm 224 */
										obj_t BgL_newtail3868z00_1049;

										{	/* Cgen/capp.scm 224 */
											obj_t BgL_arg3924z00_1051;

											{	/* Cgen/capp.scm 224 */
												obj_t BgL_xz00_1053;

												BgL_xz00_1053 = CAR(BgL_l3864z00_1045);
												if (BGl_iszd2azf3z21zz__objectz00(BgL_xz00_1053,
														BGl_localz00zzast_varz00))
													{	/* Cgen/capp.scm 226 */
														BgL_variablez00_bglt BgL_obj1608z00_1928;

														BgL_obj1608z00_1928 =
															(BgL_variablez00_bglt) (
															(BgL_localz00_bglt) (BgL_xz00_1053));
														BgL_arg3924z00_1051 =
															(obj_t) (
															(((BgL_variablez00_bglt)
																	CREF(BgL_obj1608z00_1928))->BgL_typez00));
													}
												else
													{	/* Cgen/capp.scm 225 */
														BgL_arg3924z00_1051 = BgL_xz00_1053;
													}
											}
											BgL_newtail3868z00_1049 =
												MAKE_PAIR(BgL_arg3924z00_1051, BNIL);
										}
										SET_CDR(BgL_tail3867z00_1046, BgL_newtail3868z00_1049);
										{
											obj_t BgL_tail3867z00_2210;

											obj_t BgL_l3864z00_2208;

											BgL_l3864z00_2208 = CDR(BgL_l3864z00_1045);
											BgL_tail3867z00_2210 = BgL_newtail3868z00_1049;
											BgL_tail3867z00_1046 = BgL_tail3867z00_2210;
											BgL_l3864z00_1045 = BgL_l3864z00_2208;
											goto BgL_zc3anonymousza33921ze3z83_1047;
										}
									}
							}
						}
					{
						BgL_copz00_bglt BgL_copz00_1034;

						BgL_localz00_bglt BgL_auxz00_1035;

						{	/* Cgen/capp.scm 229 */

							{	/* Cgen/capp.scm 232 */
								obj_t BgL_g3821z00_980;

								BgL_localz00_bglt BgL_g3823z00_982;

								BgL_g3821z00_980 =
									(((BgL_appz00_bglt) CREF(BgL_nodez00_11))->BgL_argsz00);
								BgL_g3823z00_982 =
									BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00(CNST_TABLE_REF
									(((long) 0)),
									(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00));
								{
									obj_t BgL_oldzd2actualszd2_986;

									obj_t BgL_argszd2typezd2_987;

									obj_t BgL_newzd2actualszd2_988;

									BgL_localz00_bglt BgL_auxz00_989;

									obj_t BgL_auxsz00_990;

									obj_t BgL_expsz00_991;

									BgL_oldzd2actualszd2_986 = BgL_g3821z00_980;
									BgL_argszd2typezd2_987 = BgL_argszd2typezd2_978;
									BgL_newzd2actualszd2_988 = BNIL;
									BgL_auxz00_989 = BgL_g3823z00_982;
									BgL_auxsz00_990 = BNIL;
									BgL_expsz00_991 = BNIL;
								BgL_zc3anonymousza33877ze3z83_992:
									if (NULLP(BgL_oldzd2actualszd2_986))
										{	/* Cgen/capp.scm 238 */
											if (NULLP(BgL_auxsz00_990))
												{	/* Cgen/capp.scm 241 */
													BgL_cappz00_bglt BgL_arg3880z00_995;

													{	/* Cgen/capp.scm 241 */
														obj_t BgL_arg3881z00_996;

														BgL_copz00_bglt BgL_arg3882z00_997;

														obj_t BgL_arg3883z00_998;

														{
															BgL_nodez00_bglt BgL_auxz00_2219;

															BgL_auxz00_2219 =
																(BgL_nodez00_bglt) (BgL_nodez00_11);
															BgL_arg3881z00_996 =
																(((BgL_nodez00_bglt) CREF(BgL_auxz00_2219))->
																BgL_locz00);
														}
														{	/* Cgen/capp.scm 242 */
															BgL_varz00_bglt BgL_arg3884z00_999;

															BgL_arg3884z00_999 =
																(((BgL_appz00_bglt) CREF(BgL_nodez00_11))->
																BgL_funz00);
															BgL_arg3882z00_997 =
																BGl_nodezd2ze3copz31zzcgen_cgenz00(
																(BgL_nodez00_bglt) (BgL_arg3884z00_999),
																BGl_za2idzd2kontza2zd2zzcgen_cgenz00);
														}
														BgL_arg3883z00_998 =
															bgl_reverse_bang(BgL_newzd2actualszd2_988);
														BgL_arg3880z00_995 =
															BGl_makezd2cappzd2zzcgen_copz00
															(BgL_arg3881z00_996, BgL_arg3882z00_997,
															BgL_arg3883z00_998);
													}
													return
														PROCEDURE_ENTRY(BgL_kontz00_12) (BgL_kontz00_12,
														(obj_t) (BgL_arg3880z00_995), BEOA);
												}
											else
												{	/* Cgen/capp.scm 248 */
													obj_t BgL_locz00_1000;

													{
														BgL_nodez00_bglt BgL_auxz00_2230;

														BgL_auxz00_2230 =
															(BgL_nodez00_bglt) (BgL_nodez00_11);
														BgL_locz00_1000 =
															(((BgL_nodez00_bglt) CREF(BgL_auxz00_2230))->
															BgL_locz00);
													}
													{	/* Cgen/capp.scm 255 */
														BgL_csequencez00_bglt BgL_arg3885z00_1001;

														{	/* Cgen/capp.scm 255 */
															obj_t BgL_arg3886z00_1002;

															{	/* Cgen/capp.scm 255 */
																BgL_localzd2varzd2_bglt BgL_arg3887z00_1003;

																BgL_csequencez00_bglt BgL_arg3888z00_1004;

																obj_t BgL_arg3889z00_1005;

																BgL_arg3887z00_1003 =
																	BGl_makezd2localzd2varz00zzcgen_copz00
																	(BgL_locz00_1000, BgL_auxsz00_990);
																BgL_arg3888z00_1004 =
																	BGl_makezd2csequencezd2zzcgen_copz00
																	(BgL_locz00_1000, ((bool_t) 0),
																	BgL_expsz00_991);
																{	/* Cgen/capp.scm 263 */
																	BgL_cappz00_bglt BgL_arg3893z00_1009;

																	{	/* Cgen/capp.scm 263 */
																		BgL_copz00_bglt BgL_arg3894z00_1010;

																		obj_t BgL_arg3895z00_1011;

																		{	/* Cgen/capp.scm 263 */
																			BgL_varz00_bglt BgL_arg3896z00_1012;

																			BgL_arg3896z00_1012 =
																				(((BgL_appz00_bglt)
																					CREF(BgL_nodez00_11))->BgL_funz00);
																			BgL_arg3894z00_1010 =
																				BGl_nodezd2ze3copz31zzcgen_cgenz00(
																				(BgL_nodez00_bglt)
																				(BgL_arg3896z00_1012),
																				BGl_za2idzd2kontza2zd2zzcgen_cgenz00);
																		}
																		BgL_arg3895z00_1011 =
																			bgl_reverse_bang
																			(BgL_newzd2actualszd2_988);
																		BgL_arg3893z00_1009 =
																			BGl_makezd2cappzd2zzcgen_copz00
																			(BgL_locz00_1000, BgL_arg3894z00_1010,
																			BgL_arg3895z00_1011);
																	}
																	BgL_arg3889z00_1005 =
																		PROCEDURE_ENTRY(BgL_kontz00_12)
																		(BgL_kontz00_12,
																		(obj_t) (BgL_arg3893z00_1009), BEOA);
																}
																{	/* Cgen/capp.scm 253 */
																	obj_t BgL_list3890z00_1006;

																	{	/* Cgen/capp.scm 253 */
																		obj_t BgL_arg3891z00_1007;

																		{	/* Cgen/capp.scm 253 */
																			obj_t BgL_arg3892z00_1008;

																			BgL_arg3892z00_1008 =
																				MAKE_PAIR(BgL_arg3889z00_1005, BNIL);
																			BgL_arg3891z00_1007 =
																				MAKE_PAIR(
																				(obj_t) (BgL_arg3888z00_1004),
																				BgL_arg3892z00_1008);
																		}
																		BgL_list3890z00_1006 =
																			MAKE_PAIR(
																			(obj_t) (BgL_arg3887z00_1003),
																			BgL_arg3891z00_1007);
																	}
																	BgL_arg3886z00_1002 = BgL_list3890z00_1006;
																}
															}
															BgL_arg3885z00_1001 =
																BGl_makezd2csequencezd2zzcgen_copz00
																(BgL_locz00_1000, ((bool_t) 0),
																BgL_arg3886z00_1002);
														}
														return
															(obj_t) (BGl_makezd2blockzd2zzcgen_copz00
															(BgL_locz00_1000,
																(BgL_copz00_bglt) (BgL_arg3885z00_1001)));
													}
												}
										}
									else
										{	/* Cgen/capp.scm 266 */
											BgL_copz00_bglt BgL_copz00_1013;

											{	/* Cgen/capp.scm 266 */
												BgL_setqz00_bglt BgL_arg3915z00_1031;

												{	/* Cgen/capp.scm 266 */
													obj_t BgL_arg3916z00_1032;

													BgL_arg3916z00_1032 = CAR(BgL_oldzd2actualszd2_986);
													BgL_arg3915z00_1031 =
														BGl_nodezd2setqzd2zzcgen_cgenz00(
														(BgL_variablez00_bglt) (BgL_auxz00_989),
														(BgL_nodez00_bglt) (BgL_arg3916z00_1032));
												}
												BgL_copz00_1013 =
													BGl_nodezd2ze3copz31zzcgen_cgenz00(
													(BgL_nodez00_bglt) (BgL_arg3915z00_1031),
													BGl_za2idzd2kontza2zd2zzcgen_cgenz00);
											}
											{	/* Cgen/capp.scm 267 */
												bool_t BgL_testz00_2258;

												BgL_copz00_1034 = BgL_copz00_1013;
												BgL_auxz00_1035 = BgL_auxz00_989;
												{	/* Cgen/capp.scm 230 */
													bool_t BgL_testz00_2259;

													{	/* Cgen/capp.scm 230 */
														obj_t BgL_obj3461z00_1955;

														BgL_obj3461z00_1955 = (obj_t) (BgL_copz00_1034);
														BgL_testz00_2259 =
															BGl_iszd2azf3z21zz__objectz00(BgL_obj3461z00_1955,
															BGl_csetqz00zzcgen_copz00);
													}
													if (BgL_testz00_2259)
														{	/* Cgen/capp.scm 231 */
															obj_t BgL_auxz00_2262;

															{	/* Cgen/capp.scm 231 */
																BgL_variablez00_bglt BgL_auxz00_2263;

																{	/* Cgen/capp.scm 231 */
																	BgL_varcz00_bglt BgL_obj3354z00_1957;

																	{
																		BgL_csetqz00_bglt BgL_auxz00_2264;

																		BgL_auxz00_2264 =
																			(BgL_csetqz00_bglt) (BgL_copz00_1034);
																		BgL_obj3354z00_1957 =
																			(((BgL_csetqz00_bglt)
																				CREF(BgL_auxz00_2264))->BgL_varz00);
																	}
																	BgL_auxz00_2263 =
																		(((BgL_varcz00_bglt)
																			CREF(BgL_obj3354z00_1957))->
																		BgL_variablez00);
																}
																BgL_auxz00_2262 = (obj_t) (BgL_auxz00_2263);
															}
															BgL_testz00_2258 =
																(BgL_auxz00_2262 == (obj_t) (BgL_auxz00_1035));
														}
													else
														{	/* Cgen/capp.scm 230 */
															BgL_testz00_2258 = ((bool_t) 0);
														}
												}
												if (BgL_testz00_2258)
													{	/* Cgen/capp.scm 268 */
														obj_t BgL_arg3898z00_1015;

														obj_t BgL_arg3899z00_1016;

														obj_t BgL_arg3900z00_1017;

														BgL_arg3898z00_1015 = CDR(BgL_oldzd2actualszd2_986);
														BgL_arg3899z00_1016 = CDR(BgL_argszd2typezd2_987);
														{	/* Cgen/capp.scm 270 */
															BgL_copz00_bglt BgL_arg3901z00_1018;

															{
																BgL_csetqz00_bglt BgL_auxz00_2273;

																BgL_auxz00_2273 =
																	(BgL_csetqz00_bglt) (BgL_copz00_1013);
																BgL_arg3901z00_1018 =
																	(((BgL_csetqz00_bglt) CREF(BgL_auxz00_2273))->
																	BgL_valuez00);
															}
															BgL_arg3900z00_1017 =
																MAKE_PAIR(
																(obj_t) (BgL_arg3901z00_1018),
																BgL_newzd2actualszd2_988);
														}
														{
															obj_t BgL_newzd2actualszd2_2280;

															obj_t BgL_argszd2typezd2_2279;

															obj_t BgL_oldzd2actualszd2_2278;

															BgL_oldzd2actualszd2_2278 = BgL_arg3898z00_1015;
															BgL_argszd2typezd2_2279 = BgL_arg3899z00_1016;
															BgL_newzd2actualszd2_2280 = BgL_arg3900z00_1017;
															BgL_newzd2actualszd2_988 =
																BgL_newzd2actualszd2_2280;
															BgL_argszd2typezd2_987 = BgL_argszd2typezd2_2279;
															BgL_oldzd2actualszd2_986 =
																BgL_oldzd2actualszd2_2278;
															goto BgL_zc3anonymousza33877ze3z83_992;
														}
													}
												else
													{	/* Cgen/capp.scm 267 */
														{	/* Cgen/capp.scm 275 */
															obj_t BgL_arg3902z00_1019;

															BgL_arg3902z00_1019 = CAR(BgL_argszd2typezd2_987);
															{
																BgL_typez00_bglt BgL_auxz00_2284;

																BgL_variablez00_bglt BgL_auxz00_2282;

																BgL_auxz00_2284 =
																	(BgL_typez00_bglt) (BgL_arg3902z00_1019);
																BgL_auxz00_2282 =
																	(BgL_variablez00_bglt) (BgL_auxz00_989);
																((((BgL_variablez00_bglt)
																			CREF(BgL_auxz00_2282))->BgL_typez00) =
																	((BgL_typez00_bglt) BgL_auxz00_2284),
																	BUNSPEC);
															}
														}
														{	/* Cgen/capp.scm 276 */
															obj_t BgL_arg3903z00_1020;

															obj_t BgL_arg3904z00_1021;

															obj_t BgL_arg3905z00_1022;

															BgL_localz00_bglt BgL_arg3906z00_1023;

															obj_t BgL_arg3908z00_1024;

															obj_t BgL_arg3909z00_1025;

															BgL_arg3903z00_1020 =
																CDR(BgL_oldzd2actualszd2_986);
															BgL_arg3904z00_1021 = CDR(BgL_argszd2typezd2_987);
															{	/* Cgen/capp.scm 279 */
																BgL_varcz00_bglt BgL_arg3910z00_1026;

																{	/* Cgen/capp.scm 279 */
																	obj_t BgL_arg3911z00_1027;

																	{	/* Cgen/capp.scm 279 */
																		BgL_nodez00_bglt BgL_obj2091z00_1953;

																		{	/* Cgen/capp.scm 279 */
																			obj_t BgL_pairz00_1952;

																			BgL_pairz00_1952 =
																				BgL_oldzd2actualszd2_986;
																			BgL_obj2091z00_1953 =
																				(BgL_nodez00_bglt) (CAR
																				(BgL_pairz00_1952));
																		}
																		BgL_arg3911z00_1027 =
																			(((BgL_nodez00_bglt)
																				CREF(BgL_obj2091z00_1953))->BgL_locz00);
																	}
																	BgL_arg3910z00_1026 =
																		BGl_makezd2varczd2zzcgen_copz00
																		(BgL_arg3911z00_1027,
																		(BgL_variablez00_bglt) (BgL_auxz00_989));
																}
																BgL_arg3905z00_1022 =
																	MAKE_PAIR(
																	(obj_t) (BgL_arg3910z00_1026),
																	BgL_newzd2actualszd2_988);
															}
															{	/* Cgen/capp.scm 282 */
																obj_t BgL_arg3913z00_1029;

																obj_t BgL_arg3914z00_1030;

																BgL_arg3913z00_1029 =
																	CNST_TABLE_REF(((long) 0));
																BgL_arg3914z00_1030 =
																	CAR(BgL_argszd2typezd2_987);
																BgL_arg3906z00_1023 =
																	BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00
																	(BgL_arg3913z00_1029,
																	(BgL_typez00_bglt) (BgL_arg3914z00_1030));
															}
															BgL_arg3908z00_1024 =
																MAKE_PAIR(
																(obj_t) (BgL_auxz00_989), BgL_auxsz00_990);
															BgL_arg3909z00_1025 =
																MAKE_PAIR(
																(obj_t) (BgL_copz00_1013), BgL_expsz00_991);
															{
																obj_t BgL_expsz00_2309;

																obj_t BgL_auxsz00_2308;

																BgL_localz00_bglt BgL_auxz00_2307;

																obj_t BgL_newzd2actualszd2_2306;

																obj_t BgL_argszd2typezd2_2305;

																obj_t BgL_oldzd2actualszd2_2304;

																BgL_oldzd2actualszd2_2304 = BgL_arg3903z00_1020;
																BgL_argszd2typezd2_2305 = BgL_arg3904z00_1021;
																BgL_newzd2actualszd2_2306 = BgL_arg3905z00_1022;
																BgL_auxz00_2307 = BgL_arg3906z00_1023;
																BgL_auxsz00_2308 = BgL_arg3908z00_1024;
																BgL_expsz00_2309 = BgL_arg3909z00_1025;
																BgL_expsz00_991 = BgL_expsz00_2309;
																BgL_auxsz00_990 = BgL_auxsz00_2308;
																BgL_auxz00_989 = BgL_auxz00_2307;
																BgL_newzd2actualszd2_988 =
																	BgL_newzd2actualszd2_2306;
																BgL_argszd2typezd2_987 =
																	BgL_argszd2typezd2_2305;
																BgL_oldzd2actualszd2_986 =
																	BgL_oldzd2actualszd2_2304;
																goto BgL_zc3anonymousza33877ze3z83_992;
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



/* node-cfun-non-tail-app->cop */
	obj_t
		BGl_nodezd2cfunzd2nonzd2tailzd2appzd2ze3copz31zzcgen_cappz00
		(BgL_globalz00_bglt BgL_varz00_13, BgL_appz00_bglt BgL_nodez00_14,
		obj_t BgL_kontz00_15)
	{
		AN_OBJECT;
		{	/* Cgen/capp.scm 292 */
			{	/* Cgen/capp.scm 293 */
				obj_t BgL_argszd2typezd2_1057;

				{	/* Cgen/capp.scm 293 */
					BgL_cfunz00_bglt BgL_obj1975z00_1959;

					{	/* Cgen/capp.scm 293 */
						BgL_variablez00_bglt BgL_obj1611z00_1958;

						BgL_obj1611z00_1958 = (BgL_variablez00_bglt) (BgL_varz00_13);
						BgL_obj1975z00_1959 =
							(BgL_cfunz00_bglt) (
							(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1958))->
								BgL_valuez00));
					}
					BgL_argszd2typezd2_1057 =
						(((BgL_cfunz00_bglt) CREF(BgL_obj1975z00_1959))->
						BgL_argszd2typezd2);
				}
				{
					BgL_copz00_bglt BgL_copz00_1118;

					BgL_localz00_bglt BgL_auxz00_1119;

					{	/* Cgen/capp.scm 300 */
						obj_t BgL_g3837z00_1059;

						BgL_localz00_bglt BgL_g3839z00_1061;

						BgL_g3837z00_1059 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_14))->BgL_argsz00);
						BgL_g3839z00_1061 =
							BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00(CNST_TABLE_REF((
									(long) 0)),
							(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00));
						{
							obj_t BgL_oldzd2actualszd2_1065;

							obj_t BgL_argszd2typezd2_1066;

							obj_t BgL_newzd2actualszd2_1067;

							BgL_localz00_bglt BgL_auxz00_1068;

							obj_t BgL_auxsz00_1069;

							obj_t BgL_expsz00_1070;

							BgL_oldzd2actualszd2_1065 = BgL_g3837z00_1059;
							BgL_argszd2typezd2_1066 = BgL_argszd2typezd2_1057;
							BgL_newzd2actualszd2_1067 = BNIL;
							BgL_auxz00_1068 = BgL_g3839z00_1061;
							BgL_auxsz00_1069 = BNIL;
							BgL_expsz00_1070 = BNIL;
						BgL_zc3anonymousza33928ze3z83_1071:
							if (NULLP(BgL_oldzd2actualszd2_1065))
								{	/* Cgen/capp.scm 306 */
									if (NULLP(BgL_auxsz00_1069))
										{	/* Cgen/capp.scm 309 */
											BgL_cappz00_bglt BgL_arg3931z00_1074;

											{	/* Cgen/capp.scm 309 */
												obj_t BgL_arg3932z00_1075;

												BgL_copz00_bglt BgL_arg3933z00_1076;

												obj_t BgL_arg3934z00_1077;

												{
													BgL_nodez00_bglt BgL_auxz00_2322;

													BgL_auxz00_2322 = (BgL_nodez00_bglt) (BgL_nodez00_14);
													BgL_arg3932z00_1075 =
														(((BgL_nodez00_bglt) CREF(BgL_auxz00_2322))->
														BgL_locz00);
												}
												{	/* Cgen/capp.scm 310 */
													BgL_varz00_bglt BgL_arg3935z00_1078;

													BgL_arg3935z00_1078 =
														(((BgL_appz00_bglt) CREF(BgL_nodez00_14))->
														BgL_funz00);
													BgL_arg3933z00_1076 =
														BGl_nodezd2ze3copz31zzcgen_cgenz00(
														(BgL_nodez00_bglt) (BgL_arg3935z00_1078),
														BGl_za2idzd2kontza2zd2zzcgen_cgenz00);
												}
												BgL_arg3934z00_1077 =
													bgl_reverse_bang(BgL_newzd2actualszd2_1067);
												BgL_arg3931z00_1074 =
													BGl_makezd2cappzd2zzcgen_copz00(BgL_arg3932z00_1075,
													BgL_arg3933z00_1076, BgL_arg3934z00_1077);
											}
											return
												PROCEDURE_ENTRY(BgL_kontz00_15) (BgL_kontz00_15,
												(obj_t) (BgL_arg3931z00_1074), BEOA);
										}
									else
										{	/* Cgen/capp.scm 316 */
											obj_t BgL_locz00_1079;

											{
												BgL_nodez00_bglt BgL_auxz00_2333;

												BgL_auxz00_2333 = (BgL_nodez00_bglt) (BgL_nodez00_14);
												BgL_locz00_1079 =
													(((BgL_nodez00_bglt) CREF(BgL_auxz00_2333))->
													BgL_locz00);
											}
											{	/* Cgen/capp.scm 323 */
												BgL_csequencez00_bglt BgL_arg3936z00_1080;

												{	/* Cgen/capp.scm 323 */
													obj_t BgL_arg3937z00_1081;

													{	/* Cgen/capp.scm 323 */
														BgL_localzd2varzd2_bglt BgL_arg3938z00_1082;

														BgL_csequencez00_bglt BgL_arg3939z00_1083;

														obj_t BgL_arg3940z00_1084;

														BgL_arg3938z00_1082 =
															BGl_makezd2localzd2varz00zzcgen_copz00
															(BgL_locz00_1079, BgL_auxsz00_1069);
														BgL_arg3939z00_1083 =
															BGl_makezd2csequencezd2zzcgen_copz00
															(BgL_locz00_1079, ((bool_t) 0), BgL_expsz00_1070);
														{	/* Cgen/capp.scm 331 */
															BgL_cappz00_bglt BgL_arg3944z00_1088;

															{	/* Cgen/capp.scm 331 */
																BgL_copz00_bglt BgL_arg3945z00_1089;

																obj_t BgL_arg3946z00_1090;

																{	/* Cgen/capp.scm 331 */
																	BgL_varz00_bglt BgL_arg3947z00_1091;

																	BgL_arg3947z00_1091 =
																		(((BgL_appz00_bglt) CREF(BgL_nodez00_14))->
																		BgL_funz00);
																	BgL_arg3945z00_1089 =
																		BGl_nodezd2ze3copz31zzcgen_cgenz00(
																		(BgL_nodez00_bglt) (BgL_arg3947z00_1091),
																		BGl_za2idzd2kontza2zd2zzcgen_cgenz00);
																}
																BgL_arg3946z00_1090 =
																	bgl_reverse_bang(BgL_newzd2actualszd2_1067);
																BgL_arg3944z00_1088 =
																	BGl_makezd2cappzd2zzcgen_copz00
																	(BgL_locz00_1079, BgL_arg3945z00_1089,
																	BgL_arg3946z00_1090);
															}
															BgL_arg3940z00_1084 =
																PROCEDURE_ENTRY(BgL_kontz00_15) (BgL_kontz00_15,
																(obj_t) (BgL_arg3944z00_1088), BEOA);
														}
														{	/* Cgen/capp.scm 321 */
															obj_t BgL_list3941z00_1085;

															{	/* Cgen/capp.scm 321 */
																obj_t BgL_arg3942z00_1086;

																{	/* Cgen/capp.scm 321 */
																	obj_t BgL_arg3943z00_1087;

																	BgL_arg3943z00_1087 =
																		MAKE_PAIR(BgL_arg3940z00_1084, BNIL);
																	BgL_arg3942z00_1086 =
																		MAKE_PAIR(
																		(obj_t) (BgL_arg3939z00_1083),
																		BgL_arg3943z00_1087);
																}
																BgL_list3941z00_1085 =
																	MAKE_PAIR(
																	(obj_t) (BgL_arg3938z00_1082),
																	BgL_arg3942z00_1086);
															}
															BgL_arg3937z00_1081 = BgL_list3941z00_1085;
														}
													}
													BgL_arg3936z00_1080 =
														BGl_makezd2csequencezd2zzcgen_copz00
														(BgL_locz00_1079, ((bool_t) 0),
														BgL_arg3937z00_1081);
												}
												return
													(obj_t) (BGl_makezd2blockzd2zzcgen_copz00
													(BgL_locz00_1079,
														(BgL_copz00_bglt) (BgL_arg3936z00_1080)));
											}
										}
								}
							else
								{	/* Cgen/capp.scm 334 */
									BgL_copz00_bglt BgL_copz00_1092;

									{	/* Cgen/capp.scm 334 */
										BgL_setqz00_bglt BgL_arg3970z00_1114;

										{	/* Cgen/capp.scm 334 */
											obj_t BgL_arg3972z00_1115;

											BgL_arg3972z00_1115 = CAR(BgL_oldzd2actualszd2_1065);
											BgL_arg3970z00_1114 =
												BGl_nodezd2setqzd2zzcgen_cgenz00(
												(BgL_variablez00_bglt) (BgL_auxz00_1068),
												(BgL_nodez00_bglt) (BgL_arg3972z00_1115));
										}
										BgL_copz00_1092 =
											BGl_nodezd2ze3copz31zzcgen_cgenz00(
											(BgL_nodez00_bglt) (BgL_arg3970z00_1114),
											BGl_za2idzd2kontza2zd2zzcgen_cgenz00);
									}
									{	/* Cgen/capp.scm 335 */
										bool_t BgL_testz00_2361;

										BgL_copz00_1118 = BgL_copz00_1092;
										BgL_auxz00_1119 = BgL_auxz00_1068;
										{	/* Cgen/capp.scm 295 */
											bool_t BgL_testz00_2362;

											{	/* Cgen/capp.scm 295 */
												obj_t BgL_obj3461z00_1985;

												BgL_obj3461z00_1985 = (obj_t) (BgL_copz00_1118);
												BgL_testz00_2362 =
													BGl_iszd2azf3z21zz__objectz00(BgL_obj3461z00_1985,
													BGl_csetqz00zzcgen_copz00);
											}
											if (BgL_testz00_2362)
												{	/* Cgen/capp.scm 296 */
													bool_t BgL_testz00_2365;

													{	/* Cgen/capp.scm 296 */
														obj_t BgL_auxz00_2366;

														{	/* Cgen/capp.scm 296 */
															BgL_variablez00_bglt BgL_auxz00_2367;

															{	/* Cgen/capp.scm 296 */
																BgL_varcz00_bglt BgL_obj3354z00_1987;

																{
																	BgL_csetqz00_bglt BgL_auxz00_2368;

																	BgL_auxz00_2368 =
																		(BgL_csetqz00_bglt) (BgL_copz00_1118);
																	BgL_obj3354z00_1987 =
																		(((BgL_csetqz00_bglt)
																			CREF(BgL_auxz00_2368))->BgL_varz00);
																}
																BgL_auxz00_2367 =
																	(((BgL_varcz00_bglt)
																		CREF(BgL_obj3354z00_1987))->
																	BgL_variablez00);
															}
															BgL_auxz00_2366 = (obj_t) (BgL_auxz00_2367);
														}
														BgL_testz00_2365 =
															(BgL_auxz00_2366 == (obj_t) (BgL_auxz00_1119));
													}
													if (BgL_testz00_2365)
														{	/* Cgen/capp.scm 297 */
															bool_t BgL__ortest_3835z00_1123;

															BgL__ortest_3835z00_1123 =
																BGl_globalzd2argszd2safezf3zf3zzast_varz00
																(BgL_varz00_13);
															if (BgL__ortest_3835z00_1123)
																{	/* Cgen/capp.scm 297 */
																	BgL_testz00_2361 = BgL__ortest_3835z00_1123;
																}
															else
																{	/* Cgen/capp.scm 298 */
																	bool_t BgL__ortest_3836z00_1124;

																	{	/* Cgen/capp.scm 298 */
																		BgL_copz00_bglt BgL_arg3976z00_1126;

																		{
																			BgL_csetqz00_bglt BgL_auxz00_2377;

																			BgL_auxz00_2377 =
																				(BgL_csetqz00_bglt) (BgL_copz00_1118);
																			BgL_arg3976z00_1126 =
																				(((BgL_csetqz00_bglt)
																					CREF(BgL_auxz00_2377))->BgL_valuez00);
																		}
																		{	/* Cgen/capp.scm 298 */
																			obj_t BgL_obj3349z00_1989;

																			BgL_obj3349z00_1989 =
																				(obj_t) (BgL_arg3976z00_1126);
																			BgL__ortest_3836z00_1124 =
																				BGl_iszd2azf3z21zz__objectz00
																				(BgL_obj3349z00_1989,
																				BGl_catomz00zzcgen_copz00);
																		}
																	}
																	if (BgL__ortest_3836z00_1124)
																		{	/* Cgen/capp.scm 298 */
																			BgL_testz00_2361 =
																				BgL__ortest_3836z00_1124;
																		}
																	else
																		{	/* Cgen/capp.scm 299 */
																			BgL_copz00_bglt BgL_arg3975z00_1125;

																			{
																				BgL_csetqz00_bglt BgL_auxz00_2383;

																				BgL_auxz00_2383 =
																					(BgL_csetqz00_bglt) (BgL_copz00_1118);
																				BgL_arg3975z00_1125 =
																					(((BgL_csetqz00_bglt)
																						CREF(BgL_auxz00_2383))->
																					BgL_valuez00);
																			}
																			{	/* Cgen/capp.scm 299 */
																				obj_t BgL_obj3364z00_1991;

																				BgL_obj3364z00_1991 =
																					(obj_t) (BgL_arg3975z00_1125);
																				BgL_testz00_2361 =
																					BGl_iszd2azf3z21zz__objectz00
																					(BgL_obj3364z00_1991,
																					BGl_varcz00zzcgen_copz00);
																			}
																		}
																}
														}
													else
														{	/* Cgen/capp.scm 296 */
															BgL_testz00_2361 = ((bool_t) 0);
														}
												}
											else
												{	/* Cgen/capp.scm 295 */
													BgL_testz00_2361 = ((bool_t) 0);
												}
										}
										if (BgL_testz00_2361)
											{	/* Cgen/capp.scm 336 */
												obj_t BgL_arg3949z00_1094;

												obj_t BgL_arg3950z00_1095;

												obj_t BgL_arg3951z00_1096;

												BgL_arg3949z00_1094 = CDR(BgL_oldzd2actualszd2_1065);
												if (NULLP(CDR(BgL_argszd2typezd2_1066)))
													{	/* Cgen/capp.scm 337 */
														BgL_arg3950z00_1095 = BgL_argszd2typezd2_1066;
													}
												else
													{	/* Cgen/capp.scm 337 */
														BgL_arg3950z00_1095 = CDR(BgL_argszd2typezd2_1066);
													}
												{	/* Cgen/capp.scm 340 */
													BgL_copz00_bglt BgL_arg3954z00_1099;

													{
														BgL_csetqz00_bglt BgL_auxz00_2393;

														BgL_auxz00_2393 =
															(BgL_csetqz00_bglt) (BgL_copz00_1092);
														BgL_arg3954z00_1099 =
															(((BgL_csetqz00_bglt) CREF(BgL_auxz00_2393))->
															BgL_valuez00);
													}
													BgL_arg3951z00_1096 =
														MAKE_PAIR(
														(obj_t) (BgL_arg3954z00_1099),
														BgL_newzd2actualszd2_1067);
												}
												{
													obj_t BgL_newzd2actualszd2_2400;

													obj_t BgL_argszd2typezd2_2399;

													obj_t BgL_oldzd2actualszd2_2398;

													BgL_oldzd2actualszd2_2398 = BgL_arg3949z00_1094;
													BgL_argszd2typezd2_2399 = BgL_arg3950z00_1095;
													BgL_newzd2actualszd2_2400 = BgL_arg3951z00_1096;
													BgL_newzd2actualszd2_1067 = BgL_newzd2actualszd2_2400;
													BgL_argszd2typezd2_1066 = BgL_argszd2typezd2_2399;
													BgL_oldzd2actualszd2_1065 = BgL_oldzd2actualszd2_2398;
													goto BgL_zc3anonymousza33928ze3z83_1071;
												}
											}
										else
											{	/* Cgen/capp.scm 335 */
												{	/* Cgen/capp.scm 345 */
													obj_t BgL_arg3955z00_1100;

													BgL_arg3955z00_1100 = CAR(BgL_argszd2typezd2_1066);
													{
														BgL_typez00_bglt BgL_auxz00_2404;

														BgL_variablez00_bglt BgL_auxz00_2402;

														BgL_auxz00_2404 =
															(BgL_typez00_bglt) (BgL_arg3955z00_1100);
														BgL_auxz00_2402 =
															(BgL_variablez00_bglt) (BgL_auxz00_1068);
														((((BgL_variablez00_bglt) CREF(BgL_auxz00_2402))->
																BgL_typez00) =
															((BgL_typez00_bglt) BgL_auxz00_2404), BUNSPEC);
													}
												}
												{	/* Cgen/capp.scm 346 */
													obj_t BgL_arg3956z00_1101;

													obj_t BgL_arg3958z00_1102;

													obj_t BgL_arg3959z00_1103;

													BgL_localz00_bglt BgL_arg3960z00_1104;

													obj_t BgL_arg3961z00_1105;

													obj_t BgL_arg3962z00_1106;

													BgL_arg3956z00_1101 = CDR(BgL_oldzd2actualszd2_1065);
													if (NULLP(CDR(BgL_argszd2typezd2_1066)))
														{	/* Cgen/capp.scm 347 */
															BgL_arg3958z00_1102 = BgL_argszd2typezd2_1066;
														}
													else
														{	/* Cgen/capp.scm 347 */
															BgL_arg3958z00_1102 =
																CDR(BgL_argszd2typezd2_1066);
														}
													{	/* Cgen/capp.scm 351 */
														BgL_varcz00_bglt BgL_arg3965z00_1109;

														{	/* Cgen/capp.scm 351 */
															obj_t BgL_arg3966z00_1110;

															{	/* Cgen/capp.scm 351 */
																BgL_nodez00_bglt BgL_obj2091z00_1983;

																{	/* Cgen/capp.scm 351 */
																	obj_t BgL_pairz00_1982;

																	BgL_pairz00_1982 = BgL_oldzd2actualszd2_1065;
																	BgL_obj2091z00_1983 =
																		(BgL_nodez00_bglt) (CAR(BgL_pairz00_1982));
																}
																BgL_arg3966z00_1110 =
																	(((BgL_nodez00_bglt)
																		CREF(BgL_obj2091z00_1983))->BgL_locz00);
															}
															BgL_arg3965z00_1109 =
																BGl_makezd2varczd2zzcgen_copz00
																(BgL_arg3966z00_1110,
																(BgL_variablez00_bglt) (BgL_auxz00_1068));
														}
														BgL_arg3959z00_1103 =
															MAKE_PAIR(
															(obj_t) (BgL_arg3965z00_1109),
															BgL_newzd2actualszd2_1067);
													}
													{	/* Cgen/capp.scm 354 */
														obj_t BgL_arg3968z00_1112;

														obj_t BgL_arg3969z00_1113;

														BgL_arg3968z00_1112 = CNST_TABLE_REF(((long) 0));
														BgL_arg3969z00_1113 = CAR(BgL_argszd2typezd2_1066);
														BgL_arg3960z00_1104 =
															BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00
															(BgL_arg3968z00_1112,
															(BgL_typez00_bglt) (BgL_arg3969z00_1113));
													}
													BgL_arg3961z00_1105 =
														MAKE_PAIR(
														(obj_t) (BgL_auxz00_1068), BgL_auxsz00_1069);
													BgL_arg3962z00_1106 =
														MAKE_PAIR(
														(obj_t) (BgL_copz00_1092), BgL_expsz00_1070);
													{
														obj_t BgL_expsz00_2432;

														obj_t BgL_auxsz00_2431;

														BgL_localz00_bglt BgL_auxz00_2430;

														obj_t BgL_newzd2actualszd2_2429;

														obj_t BgL_argszd2typezd2_2428;

														obj_t BgL_oldzd2actualszd2_2427;

														BgL_oldzd2actualszd2_2427 = BgL_arg3956z00_1101;
														BgL_argszd2typezd2_2428 = BgL_arg3958z00_1102;
														BgL_newzd2actualszd2_2429 = BgL_arg3959z00_1103;
														BgL_auxz00_2430 = BgL_arg3960z00_1104;
														BgL_auxsz00_2431 = BgL_arg3961z00_1105;
														BgL_expsz00_2432 = BgL_arg3962z00_1106;
														BgL_expsz00_1070 = BgL_expsz00_2432;
														BgL_auxsz00_1069 = BgL_auxsz00_2431;
														BgL_auxz00_1068 = BgL_auxz00_2430;
														BgL_newzd2actualszd2_1067 =
															BgL_newzd2actualszd2_2429;
														BgL_argszd2typezd2_1066 = BgL_argszd2typezd2_2428;
														BgL_oldzd2actualszd2_1065 =
															BgL_oldzd2actualszd2_2427;
														goto BgL_zc3anonymousza33928ze3z83_1071;
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



/* node-tail-app->cop */
	obj_t BGl_nodezd2tailzd2appzd2ze3copz31zzcgen_cappz00(BgL_variablez00_bglt
		BgL_varz00_16, BgL_appz00_bglt BgL_nodez00_17, obj_t BgL_kontz00_18)
	{
		AN_OBJECT;
		{	/* Cgen/capp.scm 366 */
			{	/* Cgen/capp.scm 372 */
				BgL_clabelz00_bglt BgL_labelz00_1130;

				obj_t BgL_argsz00_1131;

				obj_t BgL_locz00_1132;

				{	/* Cgen/capp.scm 372 */
					BgL_sfunzf2czf2_bglt BgL_obj3711z00_1993;

					BgL_obj3711z00_1993 =
						(BgL_sfunzf2czf2_bglt) (
						(((BgL_variablez00_bglt) CREF(BgL_varz00_16))->BgL_valuez00));
					{
						obj_t BgL_auxz00_2435;

						{	/* Cgen/capp.scm 372 */
							BgL_objectz00_bglt BgL_auxz00_2436;

							BgL_auxz00_2436 = (BgL_objectz00_bglt) (BgL_obj3711z00_1993);
							BgL_auxz00_2435 = BGL_OBJECT_WIDENING(BgL_auxz00_2436);
						}
						BgL_labelz00_1130 =
							(((BgL_sfunzf2czf2_bglt) CREF(BgL_auxz00_2435))->BgL_labelz00);
					}
				}
				{	/* Cgen/capp.scm 373 */
					BgL_sfunz00_bglt BgL_obj1880z00_1995;

					BgL_obj1880z00_1995 =
						(BgL_sfunz00_bglt) (
						(((BgL_variablez00_bglt) CREF(BgL_varz00_16))->BgL_valuez00));
					BgL_argsz00_1131 =
						(((BgL_sfunz00_bglt) CREF(BgL_obj1880z00_1995))->BgL_argsz00);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_2443;

					BgL_auxz00_2443 = (BgL_nodez00_bglt) (BgL_nodez00_17);
					BgL_locz00_1132 =
						(((BgL_nodez00_bglt) CREF(BgL_auxz00_2443))->BgL_locz00);
				}
				{	/* Cgen/capp.scm 375 */
					bool_t BgL_testz00_2446;

					{	/* Cgen/capp.scm 375 */
						BgL_sfunzf2czf2_bglt BgL_obj3712z00_1998;

						BgL_obj3712z00_1998 =
							(BgL_sfunzf2czf2_bglt) (
							(((BgL_variablez00_bglt) CREF(BgL_varz00_16))->BgL_valuez00));
						{
							obj_t BgL_auxz00_2449;

							{	/* Cgen/capp.scm 375 */
								BgL_objectz00_bglt BgL_auxz00_2450;

								BgL_auxz00_2450 = (BgL_objectz00_bglt) (BgL_obj3712z00_1998);
								BgL_auxz00_2449 = BGL_OBJECT_WIDENING(BgL_auxz00_2450);
							}
							BgL_testz00_2446 =
								(((BgL_sfunzf2czf2_bglt) CREF(BgL_auxz00_2449))->
								BgL_integratedz00);
						}
					}
					if (BgL_testz00_2446)
						{	/* Cgen/capp.scm 375 */
							if (NULLP(BgL_argsz00_1131))
								{	/* Cgen/capp.scm 397 */
									((((BgL_clabelz00_bglt) CREF(BgL_labelz00_1130))->
											BgL_usedzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
									return (obj_t) (BGl_makezd2cgotozd2zzcgen_copz00
										(BgL_locz00_1132, BgL_labelz00_1130));
								}
							else
								{	/* Cgen/capp.scm 403 */
									obj_t BgL_g3854z00_1135;

									obj_t BgL_g3857z00_1138;

									BgL_g3854z00_1135 =
										(((BgL_appz00_bglt) CREF(BgL_nodez00_17))->BgL_argsz00);
									{	/* Cgen/capp.scm 408 */
										BgL_cgotoz00_bglt BgL_arg4009z00_1177;

										((((BgL_clabelz00_bglt) CREF(BgL_labelz00_1130))->
												BgL_usedzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
										BgL_arg4009z00_1177 =
											BGl_makezd2cgotozd2zzcgen_copz00(BgL_locz00_1132,
											BgL_labelz00_1130);
										{	/* Cgen/capp.scm 407 */
											obj_t BgL_list4010z00_1178;

											BgL_list4010z00_1178 =
												MAKE_PAIR((obj_t) (BgL_arg4009z00_1177), BNIL);
											BgL_g3857z00_1138 = BgL_list4010z00_1178;
										}
									}
									{
										obj_t BgL_argsz00_1140;

										obj_t BgL_actualsz00_1141;

										obj_t BgL_auxsz00_1142;

										obj_t BgL_seq1z00_1143;

										obj_t BgL_seq2z00_1144;

										BgL_argsz00_1140 = BgL_argsz00_1131;
										BgL_actualsz00_1141 = BgL_g3854z00_1135;
										BgL_auxsz00_1142 = BNIL;
										BgL_seq1z00_1143 = BNIL;
										BgL_seq2z00_1144 = BgL_g3857z00_1138;
									BgL_zc3anonymousza33981ze3z83_1145:
										if (NULLP(BgL_argsz00_1140))
											{	/* Cgen/capp.scm 412 */
												if (NULLP(BgL_seq1z00_1143))
													{	/* Cgen/capp.scm 414 */
														BgL_seq1z00_1143 = BgL_seq2z00_1144;
													}
												else
													{	/* Cgen/capp.scm 414 */
														BgL_seq1z00_1143 =
															bgl_reverse_bang(BgL_seq1z00_1143);
														{	/* Cgen/capp.scm 418 */
															obj_t BgL_auxz00_2469;

															BgL_auxz00_2469 =
																BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
																(BgL_seq1z00_1143);
															SET_CDR(BgL_auxz00_2469, BgL_seq2z00_1144);
														}
													}
												{	/* Cgen/capp.scm 423 */
													BgL_copz00_bglt BgL_arg3985z00_1149;

													{	/* Cgen/capp.scm 423 */
														BgL_csequencez00_bglt BgL_arg3986z00_1150;

														{	/* Cgen/capp.scm 423 */
															obj_t BgL_arg3987z00_1151;

															{	/* Cgen/capp.scm 423 */
																BgL_localzd2varzd2_bglt BgL_arg3988z00_1152;

																BgL_arg3988z00_1152 =
																	BGl_makezd2localzd2varz00zzcgen_copz00
																	(BgL_locz00_1132, BgL_auxsz00_1142);
																BgL_arg3987z00_1151 =
																	MAKE_PAIR((obj_t) (BgL_arg3988z00_1152),
																	BgL_seq1z00_1143);
															}
															BgL_arg3986z00_1150 =
																BGl_makezd2csequencezd2zzcgen_copz00
																(BgL_locz00_1132, ((bool_t) 0),
																BgL_arg3987z00_1151);
														}
														BgL_arg3985z00_1149 =
															BGl_bdbzd2letzd2varz00zzcgen_cgenz00(
															(BgL_copz00_bglt) (BgL_arg3986z00_1150),
															BgL_locz00_1132);
													}
													return
														BGl_blockzd2kontzd2zzcgen_cgenz00(
														(obj_t) (BgL_arg3985z00_1149), BFALSE);
												}
											}
										else
											{	/* Cgen/capp.scm 429 */
												obj_t BgL_argz00_1153;

												obj_t BgL_actz00_1154;

												BgL_argz00_1153 = CAR(BgL_argsz00_1140);
												BgL_actz00_1154 = CAR(BgL_actualsz00_1141);
												{	/* Cgen/capp.scm 434 */
													bool_t BgL_testz00_2482;

													if (BGl_iszd2azf3z21zz__objectz00(BgL_actz00_1154,
															BGl_varz00zzast_nodez00))
														{	/* Cgen/capp.scm 434 */
															obj_t BgL_auxz00_2485;

															{	/* Cgen/capp.scm 434 */
																BgL_variablez00_bglt BgL_auxz00_2486;

																{
																	BgL_varz00_bglt BgL_auxz00_2487;

																	BgL_auxz00_2487 =
																		(BgL_varz00_bglt) (BgL_actz00_1154);
																	BgL_auxz00_2486 =
																		(((BgL_varz00_bglt) CREF(BgL_auxz00_2487))->
																		BgL_variablez00);
																}
																BgL_auxz00_2485 = (obj_t) (BgL_auxz00_2486);
															}
															BgL_testz00_2482 =
																(BgL_argz00_1153 == BgL_auxz00_2485);
														}
													else
														{	/* Cgen/capp.scm 434 */
															BgL_testz00_2482 = ((bool_t) 0);
														}
													if (BgL_testz00_2482)
														{	/* Cgen/capp.scm 435 */
															obj_t BgL_arg3990z00_1156;

															obj_t BgL_arg3991z00_1157;

															BgL_arg3990z00_1156 = CDR(BgL_argsz00_1140);
															BgL_arg3991z00_1157 = CDR(BgL_actualsz00_1141);
															{
																obj_t BgL_actualsz00_2495;

																obj_t BgL_argsz00_2494;

																BgL_argsz00_2494 = BgL_arg3990z00_1156;
																BgL_actualsz00_2495 = BgL_arg3991z00_1157;
																BgL_actualsz00_1141 = BgL_actualsz00_2495;
																BgL_argsz00_1140 = BgL_argsz00_2494;
																goto BgL_zc3anonymousza33981ze3z83_1145;
															}
														}
													else
														{	/* Cgen/capp.scm 440 */
															BgL_localz00_bglt BgL_auxz00_1158;

															{	/* Cgen/capp.scm 441 */
																obj_t BgL_arg4005z00_1172;

																BgL_typez00_bglt BgL_arg4006z00_1173;

																{
																	BgL_variablez00_bglt BgL_auxz00_2496;

																	BgL_auxz00_2496 =
																		(BgL_variablez00_bglt) (BgL_argz00_1153);
																	BgL_arg4005z00_1172 =
																		(((BgL_variablez00_bglt)
																			CREF(BgL_auxz00_2496))->BgL_idz00);
																}
																{
																	BgL_variablez00_bglt BgL_auxz00_2499;

																	BgL_auxz00_2499 =
																		(BgL_variablez00_bglt) (BgL_argz00_1153);
																	BgL_arg4006z00_1173 =
																		(((BgL_variablez00_bglt)
																			CREF(BgL_auxz00_2499))->BgL_typez00);
																}
																BgL_auxz00_1158 =
																	BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00
																	(BgL_arg4005z00_1172, BgL_arg4006z00_1173);
															}
															{	/* Cgen/capp.scm 443 */
																obj_t BgL_arg3992z00_1159;

																obj_t BgL_arg3993z00_1160;

																obj_t BgL_arg3994z00_1161;

																obj_t BgL_arg3995z00_1162;

																obj_t BgL_arg3996z00_1163;

																BgL_arg3992z00_1159 = CDR(BgL_argsz00_1140);
																BgL_arg3993z00_1160 = CDR(BgL_actualsz00_1141);
																BgL_arg3994z00_1161 =
																	MAKE_PAIR(
																	(obj_t) (BgL_auxz00_1158), BgL_auxsz00_1142);
																{	/* Cgen/capp.scm 446 */
																	BgL_copz00_bglt BgL_arg3997z00_1164;

																	{	/* Cgen/capp.scm 446 */
																		BgL_setqz00_bglt BgL_arg3998z00_1165;

																		BgL_arg3998z00_1165 =
																			BGl_nodezd2setqzd2zzcgen_cgenz00(
																			(BgL_variablez00_bglt) (BgL_auxz00_1158),
																			(BgL_nodez00_bglt) (BgL_actz00_1154));
																		BgL_arg3997z00_1164 =
																			BGl_nodezd2ze3copz31zzcgen_cgenz00(
																			(BgL_nodez00_bglt) (BgL_arg3998z00_1165),
																			BGl_za2stopzd2kontza2zd2zzcgen_cgenz00);
																	}
																	BgL_arg3995z00_1162 =
																		MAKE_PAIR(
																		(obj_t) (BgL_arg3997z00_1164),
																		BgL_seq1z00_1143);
																}
																{	/* Cgen/capp.scm 451 */
																	BgL_stopz00_bglt BgL_arg3999z00_1166;

																	{	/* Cgen/capp.scm 451 */
																		obj_t BgL_arg4000z00_1167;

																		BgL_csetqz00_bglt BgL_arg4001z00_1168;

																		{
																			BgL_nodez00_bglt BgL_auxz00_2514;

																			BgL_auxz00_2514 =
																				(BgL_nodez00_bglt) (BgL_actz00_1154);
																			BgL_arg4000z00_1167 =
																				(((BgL_nodez00_bglt)
																					CREF(BgL_auxz00_2514))->BgL_locz00);
																		}
																		{	/* Cgen/capp.scm 455 */
																			BgL_varcz00_bglt BgL_arg4002z00_1169;

																			BgL_varcz00_bglt BgL_arg4003z00_1170;

																			BgL_arg4002z00_1169 =
																				BGl_makezd2varczd2zzcgen_copz00(BFALSE,
																				(BgL_variablez00_bglt)
																				(BgL_argz00_1153));
																			{	/* Cgen/capp.scm 458 */
																				obj_t BgL_arg4004z00_1171;

																				{
																					BgL_nodez00_bglt BgL_auxz00_2519;

																					BgL_auxz00_2519 =
																						(BgL_nodez00_bglt)
																						(BgL_actz00_1154);
																					BgL_arg4004z00_1171 =
																						(((BgL_nodez00_bglt)
																							CREF(BgL_auxz00_2519))->
																						BgL_locz00);
																				}
																				BgL_arg4003z00_1170 =
																					BGl_makezd2varczd2zzcgen_copz00
																					(BgL_arg4004z00_1171,
																					(BgL_variablez00_bglt)
																					(BgL_auxz00_1158));
																			}
																			BgL_arg4001z00_1168 =
																				BGl_makezd2csetqzd2zzcgen_copz00
																				(BgL_locz00_1132, BgL_arg4002z00_1169,
																				(BgL_copz00_bglt)
																				(BgL_arg4003z00_1170));
																		}
																		BgL_arg3999z00_1166 =
																			BGl_makezd2stopzd2zzcgen_copz00
																			(BgL_arg4000z00_1167,
																			(BgL_copz00_bglt) (BgL_arg4001z00_1168));
																	}
																	BgL_arg3996z00_1163 =
																		MAKE_PAIR(
																		(obj_t) (BgL_arg3999z00_1166),
																		BgL_seq2z00_1144);
																}
																{
																	obj_t BgL_seq2z00_2534;

																	obj_t BgL_seq1z00_2533;

																	obj_t BgL_auxsz00_2532;

																	obj_t BgL_actualsz00_2531;

																	obj_t BgL_argsz00_2530;

																	BgL_argsz00_2530 = BgL_arg3992z00_1159;
																	BgL_actualsz00_2531 = BgL_arg3993z00_1160;
																	BgL_auxsz00_2532 = BgL_arg3994z00_1161;
																	BgL_seq1z00_2533 = BgL_arg3995z00_1162;
																	BgL_seq2z00_2534 = BgL_arg3996z00_1163;
																	BgL_seq2z00_1144 = BgL_seq2z00_2534;
																	BgL_seq1z00_1143 = BgL_seq1z00_2533;
																	BgL_auxsz00_1142 = BgL_auxsz00_2532;
																	BgL_actualsz00_1141 = BgL_actualsz00_2531;
																	BgL_argsz00_1140 = BgL_argsz00_2530;
																	goto BgL_zc3anonymousza33981ze3z83_1145;
																}
															}
														}
												}
											}
									}
								}
						}
					else
						{	/* Cgen/capp.scm 375 */
							{	/* Cgen/capp.scm 377 */
								BgL_valuez00_bglt BgL_arg4011z00_1179;

								BgL_arg4011z00_1179 =
									(((BgL_variablez00_bglt) CREF(BgL_varz00_16))->BgL_valuez00);
								{	/* Cgen/capp.scm 377 */
									BgL_sfunzf2czf2_bglt BgL_obj3714z00_2024;

									bool_t BgL_val3713z00_2025;

									BgL_obj3714z00_2024 =
										(BgL_sfunzf2czf2_bglt) (BgL_arg4011z00_1179);
									BgL_val3713z00_2025 = ((bool_t) 1);
									{
										obj_t BgL_auxz00_2537;

										{	/* Cgen/capp.scm 377 */
											BgL_objectz00_bglt BgL_auxz00_2538;

											BgL_auxz00_2538 =
												(BgL_objectz00_bglt) (BgL_obj3714z00_2024);
											BgL_auxz00_2537 = BGL_OBJECT_WIDENING(BgL_auxz00_2538);
										}
										((((BgL_sfunzf2czf2_bglt) CREF(BgL_auxz00_2537))->
												BgL_integratedz00) =
											((bool_t) BgL_val3713z00_2025), BUNSPEC);
									}
								}
							}
							{	/* Cgen/capp.scm 378 */
								BgL_copz00_bglt BgL_bodyz00_1180;

								{	/* Cgen/capp.scm 378 */
									obj_t BgL_arg4024z00_1200;

									{	/* Cgen/capp.scm 378 */
										BgL_sfunz00_bglt BgL_obj1884z00_2027;

										BgL_obj1884z00_2027 =
											(BgL_sfunz00_bglt) (
											(((BgL_variablez00_bglt) CREF(BgL_varz00_16))->
												BgL_valuez00));
										BgL_arg4024z00_1200 =
											(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_2027))->
											BgL_bodyz00);
									}
									BgL_bodyz00_1180 =
										BGl_nodezd2ze3copz31zzcgen_cgenz00(
										(BgL_nodez00_bglt) (BgL_arg4024z00_1200), BgL_kontz00_18);
								}
								{
									obj_t BgL_auxz00_2547;

									BgL_auxz00_2547 = (obj_t) (BgL_bodyz00_1180);
									((((BgL_clabelz00_bglt) CREF(BgL_labelz00_1130))->
											BgL_bodyz00) = ((obj_t) BgL_auxz00_2547), BUNSPEC);
								}
								if (NULLP(BgL_argsz00_1131))
									{	/* Cgen/capp.scm 380 */
										return (obj_t) (BgL_labelz00_1130);
									}
								else
									{	/* Cgen/capp.scm 382 */
										obj_t BgL_g3849z00_1182;

										BgL_g3849z00_1182 =
											(((BgL_appz00_bglt) CREF(BgL_nodez00_17))->BgL_argsz00);
										{
											obj_t BgL_formalsz00_1185;

											obj_t BgL_actualsz00_1186;

											obj_t BgL_seqz00_1187;

											{	/* Cgen/capp.scm 382 */
												BgL_csequencez00_bglt BgL_auxz00_2554;

												BgL_formalsz00_1185 = BgL_argsz00_1131;
												BgL_actualsz00_1186 = BgL_g3849z00_1182;
												BgL_seqz00_1187 = BNIL;
											BgL_zc3anonymousza34013ze3z83_1188:
												if (NULLP(BgL_formalsz00_1185))
													{	/* Cgen/capp.scm 388 */
														obj_t BgL_arg4015z00_1190;

														{	/* Cgen/capp.scm 388 */
															obj_t BgL_arg4016z00_1191;

															BgL_arg4016z00_1191 =
																MAKE_PAIR(
																(obj_t) (BgL_labelz00_1130), BgL_seqz00_1187);
															BgL_arg4015z00_1190 =
																bgl_reverse_bang(BgL_arg4016z00_1191);
														}
														BgL_auxz00_2554 =
															BGl_makezd2csequencezd2zzcgen_copz00
															(BgL_locz00_1132, ((bool_t) 0),
															BgL_arg4015z00_1190);
													}
												else
													{	/* Cgen/capp.scm 389 */
														obj_t BgL_arg4017z00_1192;

														obj_t BgL_arg4018z00_1193;

														obj_t BgL_arg4019z00_1194;

														BgL_arg4017z00_1192 = CDR(BgL_formalsz00_1185);
														BgL_arg4018z00_1193 = CDR(BgL_actualsz00_1186);
														{	/* Cgen/capp.scm 391 */
															BgL_copz00_bglt BgL_arg4020z00_1195;

															{	/* Cgen/capp.scm 391 */
																BgL_setqz00_bglt BgL_arg4021z00_1196;

																{	/* Cgen/capp.scm 391 */
																	obj_t BgL_arg4022z00_1197;

																	obj_t BgL_arg4023z00_1198;

																	BgL_arg4022z00_1197 =
																		CAR(BgL_formalsz00_1185);
																	BgL_arg4023z00_1198 =
																		CAR(BgL_actualsz00_1186);
																	BgL_arg4021z00_1196 =
																		BGl_nodezd2setqzd2zzcgen_cgenz00(
																		(BgL_variablez00_bglt)
																		(BgL_arg4022z00_1197),
																		(BgL_nodez00_bglt) (BgL_arg4023z00_1198));
																}
																BgL_arg4020z00_1195 =
																	BGl_nodezd2ze3copz31zzcgen_cgenz00(
																	(BgL_nodez00_bglt) (BgL_arg4021z00_1196),
																	BGl_za2stopzd2kontza2zd2zzcgen_cgenz00);
															}
															BgL_arg4019z00_1194 =
																MAKE_PAIR(
																(obj_t) (BgL_arg4020z00_1195), BgL_seqz00_1187);
														}
														{
															obj_t BgL_seqz00_2574;

															obj_t BgL_actualsz00_2573;

															obj_t BgL_formalsz00_2572;

															BgL_formalsz00_2572 = BgL_arg4017z00_1192;
															BgL_actualsz00_2573 = BgL_arg4018z00_1193;
															BgL_seqz00_2574 = BgL_arg4019z00_1194;
															BgL_seqz00_1187 = BgL_seqz00_2574;
															BgL_actualsz00_1186 = BgL_actualsz00_2573;
															BgL_formalsz00_1185 = BgL_formalsz00_2572;
															goto BgL_zc3anonymousza34013ze3z83_1188;
														}
													}
												return (obj_t) (BgL_auxz00_2554);
											}
										}
									}
							}
						}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcgen_cappz00()
	{
		AN_OBJECT;
		{	/* Cgen/capp.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcgen_cappz00()
	{
		AN_OBJECT;
		{	/* Cgen/capp.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc4294z00zzcgen_cappz00, BGl_string4295z00zzcgen_cappz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_funcallz00zzast_nodez00,
				BGl_proc4296z00zzcgen_cappz00, BGl_string4295z00zzcgen_cappz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_appz00zzast_nodez00,
				BGl_proc4297z00zzcgen_cappz00, BGl_string4295z00zzcgen_cappz00);
		}
	}



/* node->cop-app3874 */
	obj_t BGl_nodezd2ze3copzd2app3874ze3zzcgen_cappz00(obj_t BgL_envz00_2144,
		obj_t BgL_nodez00_2145, obj_t BgL_kontz00_2146)
	{
		AN_OBJECT;
		{	/* Cgen/capp.scm 195 */
			{
				BgL_appz00_bglt BgL_nodez00_1901;

				obj_t BgL_kontz00_1902;

				BgL_nodez00_1901 = (BgL_appz00_bglt) (BgL_nodez00_2145);
				BgL_kontz00_1902 = BgL_kontz00_2146;
				{	/* Cgen/capp.scm 199 */
					BgL_variablez00_bglt BgL_varz00_1906;

					{	/* Cgen/capp.scm 199 */
						BgL_varz00_bglt BgL_obj2155z00_2132;

						BgL_obj2155z00_2132 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1901))->BgL_funz00);
						BgL_varz00_1906 =
							(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2132))->BgL_variablez00);
					}
					{	/* Cgen/capp.scm 200 */
						bool_t BgL_testz00_2581;

						{	/* Cgen/capp.scm 200 */
							bool_t BgL_testz00_2582;

							{	/* Cgen/capp.scm 200 */
								obj_t BgL_obj1751z00_2133;

								BgL_obj1751z00_2133 = (obj_t) (BgL_varz00_1906);
								BgL_testz00_2582 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_2133,
									BGl_globalz00zzast_varz00);
							}
							if (BgL_testz00_2582)
								{	/* Cgen/capp.scm 201 */
									bool_t BgL__ortest_3819z00_1909;

									if (
										((obj_t) (
												(BgL_globalz00_bglt) (BgL_varz00_1906)) ==
											BGl_za2thezd2globalza2zd2zzcgen_cgenz00))
										{	/* Cgen/capp.scm 201 */
											BgL__ortest_3819z00_1909 = ((bool_t) 0);
										}
									else
										{	/* Cgen/capp.scm 201 */
											BgL__ortest_3819z00_1909 = ((bool_t) 1);
										}
									if (BgL__ortest_3819z00_1909)
										{	/* Cgen/capp.scm 201 */
											BgL_testz00_2581 = BgL__ortest_3819z00_1909;
										}
									else
										{	/* Cgen/capp.scm 201 */
											if (
												(BgL_kontz00_1902 ==
													BGl_za2returnzd2kontza2zd2zzcgen_cgenz00))
												{	/* Cgen/capp.scm 202 */
													BgL_testz00_2581 = ((bool_t) 0);
												}
											else
												{	/* Cgen/capp.scm 202 */
													BgL_testz00_2581 = ((bool_t) 1);
												}
										}
								}
							else
								{	/* Cgen/capp.scm 200 */
									BgL_testz00_2581 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_2581)
							{	/* Cgen/capp.scm 203 */
								BgL_globalz00_bglt BgL_varz00_2134;

								BgL_varz00_2134 = (BgL_globalz00_bglt) (BgL_varz00_1906);
								{	/* Cgen/capp.scm 203 */
									bool_t BgL_testz00_2593;

									{	/* Cgen/capp.scm 203 */
										BgL_valuez00_bglt BgL_arg3876z00_2138;

										{
											BgL_variablez00_bglt BgL_auxz00_2594;

											BgL_auxz00_2594 =
												(BgL_variablez00_bglt) (BgL_varz00_2134);
											BgL_arg3876z00_2138 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_2594))->
												BgL_valuez00);
										}
										{	/* Cgen/capp.scm 203 */
											obj_t BgL_obj1955z00_2140;

											BgL_obj1955z00_2140 = (obj_t) (BgL_arg3876z00_2138);
											BgL_testz00_2593 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj1955z00_2140,
												BGl_sfunz00zzast_varz00);
										}
									}
									if (BgL_testz00_2593)
										{	/* Cgen/capp.scm 203 */
											return
												BGl_nodezd2sfunzd2nonzd2tailzd2appzd2ze3copz31zzcgen_cappz00
												(BgL_varz00_2134, BgL_nodez00_1901, BgL_kontz00_1902);
										}
									else
										{	/* Cgen/capp.scm 203 */
											return
												BGl_nodezd2cfunzd2nonzd2tailzd2appzd2ze3copz31zzcgen_cappz00
												(BgL_varz00_2134, BgL_nodez00_1901, BgL_kontz00_1902);
										}
								}
							}
						else
							{	/* Cgen/capp.scm 200 */
								return
									BGl_nodezd2tailzd2appzd2ze3copz31zzcgen_cappz00
									(BgL_varz00_1906, BgL_nodez00_1901, BgL_kontz00_1902);
							}
					}
				}
			}
		}
	}



/* node->cop-funcall3872 */
	obj_t BGl_nodezd2ze3copzd2funcall3872ze3zzcgen_cappz00(obj_t BgL_envz00_2147,
		obj_t BgL_nodez00_2148, obj_t BgL_kontz00_2149)
	{
		AN_OBJECT;
		{	/* Cgen/capp.scm 113 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1809;

				obj_t BgL_kontz00_1810;

				BgL_nodez00_1809 = (BgL_funcallz00_bglt) (BgL_nodez00_2148);
				BgL_kontz00_1810 = BgL_kontz00_2149;
				{	/* Cgen/capp.scm 117 */
					BgL_localz00_bglt BgL_g3801z00_1815;

					BgL_g3801z00_1815 =
						BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00(CNST_TABLE_REF((
								(long) 0)),
						(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00));
					{
						obj_t BgL_oldzd2actualszd2_1820;

						obj_t BgL_newzd2actualszd2_1821;

						BgL_localz00_bglt BgL_auxz00_1822;

						obj_t BgL_auxsz00_1823;

						obj_t BgL_expsz00_1824;

						{	/* Cgen/capp.scm 117 */
							obj_t BgL_arg4197z00_1819;

							BgL_arg4197z00_1819 =
								(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1809))->BgL_argsz00);
							BgL_oldzd2actualszd2_1820 = BgL_arg4197z00_1819;
							BgL_newzd2actualszd2_1821 = BNIL;
							BgL_auxz00_1822 = BgL_g3801z00_1815;
							BgL_auxsz00_1823 = BNIL;
							BgL_expsz00_1824 = BNIL;
						BgL_zc3anonymousza34198ze3z83_1825:
							if (NULLP(BgL_oldzd2actualszd2_1820))
								{	/* Cgen/capp.scm 123 */
									BgL_localz00_bglt BgL_auxz00_1827;

									BgL_auxz00_1827 =
										BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00
										(CNST_TABLE_REF(((long) 0)),
										(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00));
									{	/* Cgen/capp.scm 123 */
										BgL_copz00_bglt BgL_copz00_1828;

										{	/* Cgen/capp.scm 124 */
											BgL_setqz00_bglt BgL_arg4249z00_1878;

											{	/* Cgen/capp.scm 124 */
												BgL_nodez00_bglt BgL_arg4251z00_1879;

												BgL_arg4251z00_1879 =
													(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1809))->
													BgL_funz00);
												BgL_arg4249z00_1878 =
													BGl_nodezd2setqzd2zzcgen_cgenz00(
													(BgL_variablez00_bglt) (BgL_auxz00_1827),
													BgL_arg4251z00_1879);
											}
											BgL_copz00_1828 =
												BGl_nodezd2ze3copz31zzcgen_cgenz00(
												(BgL_nodez00_bglt) (BgL_arg4249z00_1878),
												BGl_za2idzd2kontza2zd2zzcgen_cgenz00);
										}
										{	/* Cgen/capp.scm 124 */

											{	/* Cgen/capp.scm 125 */
												bool_t BgL_testz00_2617;

												{	/* Cgen/capp.scm 125 */
													bool_t BgL_testz00_2618;

													{	/* Cgen/capp.scm 125 */
														obj_t BgL_obj3461z00_2096;

														BgL_obj3461z00_2096 = (obj_t) (BgL_copz00_1828);
														BgL_testz00_2618 =
															BGl_iszd2azf3z21zz__objectz00(BgL_obj3461z00_2096,
															BGl_csetqz00zzcgen_copz00);
													}
													if (BgL_testz00_2618)
														{	/* Cgen/capp.scm 126 */
															bool_t BgL_testz00_2621;

															{	/* Cgen/capp.scm 126 */
																BgL_nodez00_bglt BgL_arg4248z00_1877;

																BgL_arg4248z00_1877 =
																	(((BgL_funcallz00_bglt)
																		CREF(BgL_nodez00_1809))->BgL_funz00);
																{	/* Cgen/capp.scm 126 */
																	obj_t BgL_obj2170z00_2098;

																	BgL_obj2170z00_2098 =
																		(obj_t) (BgL_arg4248z00_1877);
																	BgL_testz00_2621 =
																		BGl_iszd2azf3z21zz__objectz00
																		(BgL_obj2170z00_2098,
																		BGl_varz00zzast_nodez00);
																}
															}
															if (BgL_testz00_2621)
																{	/* Cgen/capp.scm 127 */
																	obj_t BgL_auxz00_2625;

																	{	/* Cgen/capp.scm 127 */
																		BgL_variablez00_bglt BgL_auxz00_2626;

																		{	/* Cgen/capp.scm 127 */
																			BgL_varcz00_bglt BgL_obj3354z00_2100;

																			{
																				BgL_csetqz00_bglt BgL_auxz00_2627;

																				BgL_auxz00_2627 =
																					(BgL_csetqz00_bglt) (BgL_copz00_1828);
																				BgL_obj3354z00_2100 =
																					(((BgL_csetqz00_bglt)
																						CREF(BgL_auxz00_2627))->BgL_varz00);
																			}
																			BgL_auxz00_2626 =
																				(((BgL_varcz00_bglt)
																					CREF(BgL_obj3354z00_2100))->
																				BgL_variablez00);
																		}
																		BgL_auxz00_2625 = (obj_t) (BgL_auxz00_2626);
																	}
																	BgL_testz00_2617 =
																		(BgL_auxz00_2625 ==
																		(obj_t) (BgL_auxz00_1827));
																}
															else
																{	/* Cgen/capp.scm 126 */
																	BgL_testz00_2617 = ((bool_t) 0);
																}
														}
													else
														{	/* Cgen/capp.scm 125 */
															BgL_testz00_2617 = ((bool_t) 0);
														}
												}
												if (BgL_testz00_2617)
													{	/* Cgen/capp.scm 128 */
														BgL_copz00_bglt BgL_cfunz00_1830;

														{
															BgL_csetqz00_bglt BgL_auxz00_2634;

															BgL_auxz00_2634 =
																(BgL_csetqz00_bglt) (BgL_copz00_1828);
															BgL_cfunz00_1830 =
																(((BgL_csetqz00_bglt) CREF(BgL_auxz00_2634))->
																BgL_valuez00);
														}
														if (NULLP(BgL_auxsz00_1823))
															{	/* Cgen/capp.scm 131 */
																BgL_cfuncallz00_bglt BgL_arg4202z00_1832;

																{	/* Cgen/capp.scm 131 */
																	obj_t BgL_arg4204z00_1833;

																	obj_t BgL_arg4205z00_1834;

																	obj_t BgL_arg4206z00_1835;

																	{
																		BgL_nodez00_bglt BgL_auxz00_2639;

																		BgL_auxz00_2639 =
																			(BgL_nodez00_bglt) (BgL_nodez00_1809);
																		BgL_arg4204z00_1833 =
																			(((BgL_nodez00_bglt)
																				CREF(BgL_auxz00_2639))->BgL_locz00);
																	}
																	BgL_arg4205z00_1834 =
																		bgl_reverse_bang(BgL_newzd2actualszd2_1821);
																	BgL_arg4206z00_1835 =
																		(((BgL_funcallz00_bglt)
																			CREF(BgL_nodez00_1809))->BgL_strengthz00);
																	BgL_arg4202z00_1832 =
																		BGl_makezd2cfuncallzd2zzcgen_copz00
																		(BgL_arg4204z00_1833, BgL_cfunz00_1830,
																		BgL_arg4205z00_1834, BgL_arg4206z00_1835);
																}
																return
																	PROCEDURE_ENTRY(BgL_kontz00_1810)
																	(BgL_kontz00_1810,
																	(obj_t) (BgL_arg4202z00_1832), BEOA);
															}
														else
															{	/* Cgen/capp.scm 136 */
																obj_t BgL_arg4207z00_1836;

																BgL_csequencez00_bglt BgL_arg4208z00_1837;

																{
																	BgL_nodez00_bglt BgL_auxz00_2648;

																	BgL_auxz00_2648 =
																		(BgL_nodez00_bglt) (BgL_nodez00_1809);
																	BgL_arg4207z00_1836 =
																		(((BgL_nodez00_bglt)
																			CREF(BgL_auxz00_2648))->BgL_locz00);
																}
																{	/* Cgen/capp.scm 138 */
																	obj_t BgL_arg4209z00_1838;

																	obj_t BgL_arg4210z00_1839;

																	{
																		BgL_nodez00_bglt BgL_auxz00_2651;

																		BgL_auxz00_2651 =
																			(BgL_nodez00_bglt) (BgL_nodez00_1809);
																		BgL_arg4209z00_1838 =
																			(((BgL_nodez00_bglt)
																				CREF(BgL_auxz00_2651))->BgL_locz00);
																	}
																	{	/* Cgen/capp.scm 142 */
																		BgL_localzd2varzd2_bglt BgL_arg4211z00_1840;

																		BgL_csequencez00_bglt BgL_arg4212z00_1841;

																		obj_t BgL_arg4213z00_1842;

																		{	/* Cgen/capp.scm 142 */
																			obj_t BgL_arg4217z00_1846;

																			{
																				BgL_nodez00_bglt BgL_auxz00_2654;

																				BgL_auxz00_2654 =
																					(BgL_nodez00_bglt) (BgL_nodez00_1809);
																				BgL_arg4217z00_1846 =
																					(((BgL_nodez00_bglt)
																						CREF(BgL_auxz00_2654))->BgL_locz00);
																			}
																			BgL_arg4211z00_1840 =
																				BGl_makezd2localzd2varz00zzcgen_copz00
																				(BgL_arg4217z00_1846, BgL_auxsz00_1823);
																		}
																		{	/* Cgen/capp.scm 145 */
																			obj_t BgL_arg4218z00_1847;

																			{
																				BgL_nodez00_bglt BgL_auxz00_2658;

																				BgL_auxz00_2658 =
																					(BgL_nodez00_bglt) (BgL_nodez00_1809);
																				BgL_arg4218z00_1847 =
																					(((BgL_nodez00_bglt)
																						CREF(BgL_auxz00_2658))->BgL_locz00);
																			}
																			BgL_arg4212z00_1841 =
																				BGl_makezd2csequencezd2zzcgen_copz00
																				(BgL_arg4218z00_1847, ((bool_t) 0),
																				BgL_expsz00_1824);
																		}
																		{	/* Cgen/capp.scm 148 */
																			BgL_cfuncallz00_bglt BgL_arg4219z00_1848;

																			{	/* Cgen/capp.scm 148 */
																				obj_t BgL_arg4220z00_1849;

																				obj_t BgL_arg4221z00_1850;

																				obj_t BgL_arg4222z00_1851;

																				{
																					BgL_nodez00_bglt BgL_auxz00_2662;

																					BgL_auxz00_2662 =
																						(BgL_nodez00_bglt)
																						(BgL_nodez00_1809);
																					BgL_arg4220z00_1849 =
																						(((BgL_nodez00_bglt)
																							CREF(BgL_auxz00_2662))->
																						BgL_locz00);
																				}
																				BgL_arg4221z00_1850 =
																					bgl_reverse_bang
																					(BgL_newzd2actualszd2_1821);
																				BgL_arg4222z00_1851 =
																					(((BgL_funcallz00_bglt)
																						CREF(BgL_nodez00_1809))->
																					BgL_strengthz00);
																				BgL_arg4219z00_1848 =
																					BGl_makezd2cfuncallzd2zzcgen_copz00
																					(BgL_arg4220z00_1849,
																					BgL_cfunz00_1830, BgL_arg4221z00_1850,
																					BgL_arg4222z00_1851);
																			}
																			BgL_arg4213z00_1842 =
																				PROCEDURE_ENTRY(BgL_kontz00_1810)
																				(BgL_kontz00_1810,
																				(obj_t) (BgL_arg4219z00_1848), BEOA);
																		}
																		{	/* Cgen/capp.scm 139 */
																			obj_t BgL_list4214z00_1843;

																			{	/* Cgen/capp.scm 139 */
																				obj_t BgL_arg4215z00_1844;

																				{	/* Cgen/capp.scm 139 */
																					obj_t BgL_arg4216z00_1845;

																					BgL_arg4216z00_1845 =
																						MAKE_PAIR(BgL_arg4213z00_1842,
																						BNIL);
																					BgL_arg4215z00_1844 =
																						MAKE_PAIR((obj_t)
																						(BgL_arg4212z00_1841),
																						BgL_arg4216z00_1845);
																				}
																				BgL_list4214z00_1843 =
																					MAKE_PAIR(
																					(obj_t) (BgL_arg4211z00_1840),
																					BgL_arg4215z00_1844);
																			}
																			BgL_arg4210z00_1839 =
																				BgL_list4214z00_1843;
																		}
																	}
																	BgL_arg4208z00_1837 =
																		BGl_makezd2csequencezd2zzcgen_copz00
																		(BgL_arg4209z00_1838, ((bool_t) 0),
																		BgL_arg4210z00_1839);
																}
																return
																	(obj_t) (BGl_makezd2blockzd2zzcgen_copz00
																	(BgL_arg4207z00_1836,
																		(BgL_copz00_bglt) (BgL_arg4208z00_1837)));
															}
													}
												else
													{	/* Cgen/capp.scm 154 */
														obj_t BgL_arg4223z00_1853;

														BgL_csequencez00_bglt BgL_arg4224z00_1854;

														{
															BgL_nodez00_bglt BgL_auxz00_2680;

															BgL_auxz00_2680 =
																(BgL_nodez00_bglt) (BgL_nodez00_1809);
															BgL_arg4223z00_1853 =
																(((BgL_nodez00_bglt) CREF(BgL_auxz00_2680))->
																BgL_locz00);
														}
														{	/* Cgen/capp.scm 156 */
															obj_t BgL_arg4225z00_1855;

															obj_t BgL_arg4226z00_1856;

															{
																BgL_nodez00_bglt BgL_auxz00_2683;

																BgL_auxz00_2683 =
																	(BgL_nodez00_bglt) (BgL_nodez00_1809);
																BgL_arg4225z00_1855 =
																	(((BgL_nodez00_bglt) CREF(BgL_auxz00_2683))->
																	BgL_locz00);
															}
															{	/* Cgen/capp.scm 160 */
																BgL_localzd2varzd2_bglt BgL_arg4228z00_1857;

																BgL_csequencez00_bglt BgL_arg4229z00_1858;

																obj_t BgL_arg4230z00_1859;

																{	/* Cgen/capp.scm 160 */
																	obj_t BgL_arg4234z00_1863;

																	obj_t BgL_arg4235z00_1864;

																	{
																		BgL_nodez00_bglt BgL_auxz00_2686;

																		BgL_auxz00_2686 =
																			(BgL_nodez00_bglt) (BgL_nodez00_1809);
																		BgL_arg4234z00_1863 =
																			(((BgL_nodez00_bglt)
																				CREF(BgL_auxz00_2686))->BgL_locz00);
																	}
																	BgL_arg4235z00_1864 =
																		MAKE_PAIR(
																		(obj_t) (BgL_auxz00_1827),
																		BgL_auxsz00_1823);
																	BgL_arg4228z00_1857 =
																		BGl_makezd2localzd2varz00zzcgen_copz00
																		(BgL_arg4234z00_1863, BgL_arg4235z00_1864);
																}
																{	/* Cgen/capp.scm 163 */
																	obj_t BgL_arg4236z00_1865;

																	obj_t BgL_arg4237z00_1866;

																	{
																		BgL_nodez00_bglt BgL_auxz00_2692;

																		BgL_auxz00_2692 =
																			(BgL_nodez00_bglt) (BgL_nodez00_1809);
																		BgL_arg4236z00_1865 =
																			(((BgL_nodez00_bglt)
																				CREF(BgL_auxz00_2692))->BgL_locz00);
																	}
																	BgL_arg4237z00_1866 =
																		MAKE_PAIR(
																		(obj_t) (BgL_copz00_1828),
																		BgL_expsz00_1824);
																	BgL_arg4229z00_1858 =
																		BGl_makezd2csequencezd2zzcgen_copz00
																		(BgL_arg4236z00_1865, ((bool_t) 0),
																		BgL_arg4237z00_1866);
																}
																{	/* Cgen/capp.scm 166 */
																	BgL_cfuncallz00_bglt BgL_arg4238z00_1867;

																	{	/* Cgen/capp.scm 166 */
																		obj_t BgL_arg4239z00_1868;

																		BgL_varcz00_bglt BgL_arg4240z00_1869;

																		obj_t BgL_arg4241z00_1870;

																		obj_t BgL_arg4242z00_1871;

																		{
																			BgL_nodez00_bglt BgL_auxz00_2698;

																			BgL_auxz00_2698 =
																				(BgL_nodez00_bglt) (BgL_nodez00_1809);
																			BgL_arg4239z00_1868 =
																				(((BgL_nodez00_bglt)
																					CREF(BgL_auxz00_2698))->BgL_locz00);
																		}
																		{	/* Cgen/capp.scm 168 */
																			obj_t BgL_arg4243z00_1872;

																			{
																				BgL_nodez00_bglt BgL_auxz00_2701;

																				BgL_auxz00_2701 =
																					(BgL_nodez00_bglt) (BgL_nodez00_1809);
																				BgL_arg4243z00_1872 =
																					(((BgL_nodez00_bglt)
																						CREF(BgL_auxz00_2701))->BgL_locz00);
																			}
																			BgL_arg4240z00_1869 =
																				BGl_makezd2varczd2zzcgen_copz00
																				(BgL_arg4243z00_1872,
																				(BgL_variablez00_bglt)
																				(BgL_auxz00_1827));
																		}
																		BgL_arg4241z00_1870 =
																			bgl_reverse_bang
																			(BgL_newzd2actualszd2_1821);
																		BgL_arg4242z00_1871 =
																			(((BgL_funcallz00_bglt)
																				CREF(BgL_nodez00_1809))->
																			BgL_strengthz00);
																		BgL_arg4238z00_1867 =
																			BGl_makezd2cfuncallzd2zzcgen_copz00
																			(BgL_arg4239z00_1868,
																			(BgL_copz00_bglt) (BgL_arg4240z00_1869),
																			BgL_arg4241z00_1870, BgL_arg4242z00_1871);
																	}
																	BgL_arg4230z00_1859 =
																		PROCEDURE_ENTRY(BgL_kontz00_1810)
																		(BgL_kontz00_1810,
																		(obj_t) (BgL_arg4238z00_1867), BEOA);
																}
																{	/* Cgen/capp.scm 157 */
																	obj_t BgL_list4231z00_1860;

																	{	/* Cgen/capp.scm 157 */
																		obj_t BgL_arg4232z00_1861;

																		{	/* Cgen/capp.scm 157 */
																			obj_t BgL_arg4233z00_1862;

																			BgL_arg4233z00_1862 =
																				MAKE_PAIR(BgL_arg4230z00_1859, BNIL);
																			BgL_arg4232z00_1861 =
																				MAKE_PAIR(
																				(obj_t) (BgL_arg4229z00_1858),
																				BgL_arg4233z00_1862);
																		}
																		BgL_list4231z00_1860 =
																			MAKE_PAIR(
																			(obj_t) (BgL_arg4228z00_1857),
																			BgL_arg4232z00_1861);
																	}
																	BgL_arg4226z00_1856 = BgL_list4231z00_1860;
																}
															}
															BgL_arg4224z00_1854 =
																BGl_makezd2csequencezd2zzcgen_copz00
																(BgL_arg4225z00_1855, ((bool_t) 0),
																BgL_arg4226z00_1856);
														}
														return
															(obj_t) (BGl_makezd2blockzd2zzcgen_copz00
															(BgL_arg4223z00_1853,
																(BgL_copz00_bglt) (BgL_arg4224z00_1854)));
													}
											}
										}
									}
								}
							else
								{	/* Cgen/capp.scm 172 */
									BgL_copz00_bglt BgL_copz00_1880;

									{	/* Cgen/capp.scm 172 */
										BgL_setqz00_bglt BgL_arg4269z00_1896;

										{	/* Cgen/capp.scm 172 */
											obj_t BgL_arg4270z00_1897;

											BgL_arg4270z00_1897 = CAR(BgL_oldzd2actualszd2_1820);
											BgL_arg4269z00_1896 =
												BGl_nodezd2setqzd2zzcgen_cgenz00(
												(BgL_variablez00_bglt) (BgL_auxz00_1822),
												(BgL_nodez00_bglt) (BgL_arg4270z00_1897));
										}
										BgL_copz00_1880 =
											BGl_nodezd2ze3copz31zzcgen_cgenz00(
											(BgL_nodez00_bglt) (BgL_arg4269z00_1896),
											BGl_za2idzd2kontza2zd2zzcgen_cgenz00);
									}
									{	/* Cgen/capp.scm 174 */
										bool_t BgL_testz00_2728;

										{	/* Cgen/capp.scm 174 */
											bool_t BgL_testz00_2729;

											{	/* Cgen/capp.scm 174 */
												obj_t BgL_obj3461z00_2123;

												BgL_obj3461z00_2123 = (obj_t) (BgL_copz00_1880);
												BgL_testz00_2729 =
													BGl_iszd2azf3z21zz__objectz00(BgL_obj3461z00_2123,
													BGl_csetqz00zzcgen_copz00);
											}
											if (BgL_testz00_2729)
												{	/* Cgen/capp.scm 175 */
													obj_t BgL_auxz00_2732;

													{	/* Cgen/capp.scm 175 */
														BgL_variablez00_bglt BgL_auxz00_2733;

														{	/* Cgen/capp.scm 175 */
															BgL_varcz00_bglt BgL_obj3354z00_2125;

															{
																BgL_csetqz00_bglt BgL_auxz00_2734;

																BgL_auxz00_2734 =
																	(BgL_csetqz00_bglt) (BgL_copz00_1880);
																BgL_obj3354z00_2125 =
																	(((BgL_csetqz00_bglt) CREF(BgL_auxz00_2734))->
																	BgL_varz00);
															}
															BgL_auxz00_2733 =
																(((BgL_varcz00_bglt)
																	CREF(BgL_obj3354z00_2125))->BgL_variablez00);
														}
														BgL_auxz00_2732 = (obj_t) (BgL_auxz00_2733);
													}
													BgL_testz00_2728 =
														(BgL_auxz00_2732 == (obj_t) (BgL_auxz00_1822));
												}
											else
												{	/* Cgen/capp.scm 174 */
													BgL_testz00_2728 = ((bool_t) 0);
												}
										}
										if (BgL_testz00_2728)
											{	/* Cgen/capp.scm 177 */
												obj_t BgL_arg4253z00_1882;

												obj_t BgL_arg4254z00_1883;

												BgL_arg4253z00_1882 = CDR(BgL_oldzd2actualszd2_1820);
												{	/* Cgen/capp.scm 178 */
													BgL_copz00_bglt BgL_arg4255z00_1884;

													{
														BgL_csetqz00_bglt BgL_auxz00_2742;

														BgL_auxz00_2742 =
															(BgL_csetqz00_bglt) (BgL_copz00_1880);
														BgL_arg4255z00_1884 =
															(((BgL_csetqz00_bglt) CREF(BgL_auxz00_2742))->
															BgL_valuez00);
													}
													BgL_arg4254z00_1883 =
														MAKE_PAIR(
														(obj_t) (BgL_arg4255z00_1884),
														BgL_newzd2actualszd2_1821);
												}
												{
													obj_t BgL_newzd2actualszd2_2748;

													obj_t BgL_oldzd2actualszd2_2747;

													BgL_oldzd2actualszd2_2747 = BgL_arg4253z00_1882;
													BgL_newzd2actualszd2_2748 = BgL_arg4254z00_1883;
													BgL_newzd2actualszd2_1821 = BgL_newzd2actualszd2_2748;
													BgL_oldzd2actualszd2_1820 = BgL_oldzd2actualszd2_2747;
													goto BgL_zc3anonymousza34198ze3z83_1825;
												}
											}
										else
											{	/* Cgen/capp.scm 183 */
												obj_t BgL_arg4257z00_1885;

												obj_t BgL_arg4258z00_1886;

												BgL_localz00_bglt BgL_arg4259z00_1887;

												obj_t BgL_arg4260z00_1888;

												obj_t BgL_arg4261z00_1889;

												BgL_arg4257z00_1885 = CDR(BgL_oldzd2actualszd2_1820);
												{	/* Cgen/capp.scm 185 */
													BgL_varcz00_bglt BgL_arg4262z00_1890;

													{	/* Cgen/capp.scm 185 */
														obj_t BgL_arg4263z00_1891;

														{	/* Cgen/capp.scm 185 */
															BgL_nodez00_bglt BgL_obj2091z00_2130;

															{	/* Cgen/capp.scm 185 */
																obj_t BgL_pairz00_2129;

																BgL_pairz00_2129 = BgL_oldzd2actualszd2_1820;
																BgL_obj2091z00_2130 =
																	(BgL_nodez00_bglt) (CAR(BgL_pairz00_2129));
															}
															BgL_arg4263z00_1891 =
																(((BgL_nodez00_bglt)
																	CREF(BgL_obj2091z00_2130))->BgL_locz00);
														}
														BgL_arg4262z00_1890 =
															BGl_makezd2varczd2zzcgen_copz00
															(BgL_arg4263z00_1891,
															(BgL_variablez00_bglt) (BgL_auxz00_1822));
													}
													BgL_arg4258z00_1886 =
														MAKE_PAIR(
														(obj_t) (BgL_arg4262z00_1890),
														BgL_newzd2actualszd2_1821);
												}
												BgL_arg4259z00_1887 =
													BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00
													(CNST_TABLE_REF(((long) 0)),
													(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00));
												BgL_arg4260z00_1888 =
													MAKE_PAIR((obj_t) (BgL_auxz00_1822),
													BgL_auxsz00_1823);
												BgL_arg4261z00_1889 =
													MAKE_PAIR((obj_t) (BgL_copz00_1880),
													BgL_expsz00_1824);
												{
													obj_t BgL_expsz00_2768;

													obj_t BgL_auxsz00_2767;

													BgL_localz00_bglt BgL_auxz00_2766;

													obj_t BgL_newzd2actualszd2_2765;

													obj_t BgL_oldzd2actualszd2_2764;

													BgL_oldzd2actualszd2_2764 = BgL_arg4257z00_1885;
													BgL_newzd2actualszd2_2765 = BgL_arg4258z00_1886;
													BgL_auxz00_2766 = BgL_arg4259z00_1887;
													BgL_auxsz00_2767 = BgL_arg4260z00_1888;
													BgL_expsz00_2768 = BgL_arg4261z00_1889;
													BgL_expsz00_1824 = BgL_expsz00_2768;
													BgL_auxsz00_1823 = BgL_auxsz00_2767;
													BgL_auxz00_1822 = BgL_auxz00_2766;
													BgL_newzd2actualszd2_1821 = BgL_newzd2actualszd2_2765;
													BgL_oldzd2actualszd2_1820 = BgL_oldzd2actualszd2_2764;
													goto BgL_zc3anonymousza34198ze3z83_1825;
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



/* node->cop-app-ly3870 */
	obj_t BGl_nodezd2ze3copzd2appzd2ly3870z31zzcgen_cappz00(obj_t BgL_envz00_2150,
		obj_t BgL_nodez00_2151, obj_t BgL_kontz00_2152)
	{
		AN_OBJECT;
		{	/* Cgen/capp.scm 33 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1708;

				obj_t BgL_kontz00_1709;

				BgL_nodez00_1708 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2151);
				BgL_kontz00_1709 = BgL_kontz00_2152;
				{	/* Cgen/capp.scm 37 */
					BgL_nodez00_bglt BgL_valuez00_1713;

					BgL_valuez00_1713 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1708))->BgL_argz00);
					{	/* Cgen/capp.scm 37 */
						BgL_localz00_bglt BgL_vauxz00_1714;

						BgL_vauxz00_1714 =
							BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00(CNST_TABLE_REF((
									(long) 0)),
							(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00));
						{	/* Cgen/capp.scm 38 */
							BgL_copz00_bglt BgL_vcopz00_1715;

							{	/* Cgen/capp.scm 39 */
								BgL_setqz00_bglt BgL_arg4195z00_1806;

								BgL_arg4195z00_1806 =
									BGl_nodezd2setqzd2zzcgen_cgenz00(
									(BgL_variablez00_bglt) (BgL_vauxz00_1714), BgL_valuez00_1713);
								BgL_vcopz00_1715 =
									BGl_nodezd2ze3copz31zzcgen_cgenz00(
									(BgL_nodez00_bglt) (BgL_arg4195z00_1806),
									BGl_za2idzd2kontza2zd2zzcgen_cgenz00);
							}
							{	/* Cgen/capp.scm 39 */
								BgL_nodez00_bglt BgL_funz00_1716;

								BgL_funz00_1716 =
									(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1708))->BgL_funz00);
								{	/* Cgen/capp.scm 40 */
									BgL_localz00_bglt BgL_fauxz00_1717;

									BgL_fauxz00_1717 =
										BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00
										(CNST_TABLE_REF(((long) 1)),
										(BgL_typez00_bglt) (BGl_za2procedureza2z00zztype_cachez00));
									{	/* Cgen/capp.scm 41 */
										BgL_copz00_bglt BgL_fcopz00_1718;

										{	/* Cgen/capp.scm 42 */
											BgL_setqz00_bglt BgL_arg4194z00_1805;

											BgL_arg4194z00_1805 =
												BGl_nodezd2setqzd2zzcgen_cgenz00(
												(BgL_variablez00_bglt) (BgL_fauxz00_1717),
												BgL_funz00_1716);
											BgL_fcopz00_1718 =
												BGl_nodezd2ze3copz31zzcgen_cgenz00((BgL_nodez00_bglt)
												(BgL_arg4194z00_1805),
												BGl_za2idzd2kontza2zd2zzcgen_cgenz00);
										}
										{	/* Cgen/capp.scm 42 */

											{	/* Cgen/capp.scm 44 */
												bool_t BgL_testz00_2786;

												{	/* Cgen/capp.scm 44 */
													bool_t BgL_testz00_2787;

													{	/* Cgen/capp.scm 44 */
														obj_t BgL_obj3461z00_2039;

														BgL_obj3461z00_2039 = (obj_t) (BgL_vcopz00_1715);
														BgL_testz00_2787 =
															BGl_iszd2azf3z21zz__objectz00(BgL_obj3461z00_2039,
															BGl_csetqz00zzcgen_copz00);
													}
													if (BgL_testz00_2787)
														{	/* Cgen/capp.scm 44 */
															bool_t BgL_testz00_2790;

															{	/* Cgen/capp.scm 44 */
																obj_t BgL_auxz00_2791;

																{	/* Cgen/capp.scm 44 */
																	BgL_variablez00_bglt BgL_auxz00_2792;

																	{	/* Cgen/capp.scm 44 */
																		BgL_varcz00_bglt BgL_obj3354z00_2041;

																		{
																			BgL_csetqz00_bglt BgL_auxz00_2793;

																			BgL_auxz00_2793 =
																				(BgL_csetqz00_bglt) (BgL_vcopz00_1715);
																			BgL_obj3354z00_2041 =
																				(((BgL_csetqz00_bglt)
																					CREF(BgL_auxz00_2793))->BgL_varz00);
																		}
																		BgL_auxz00_2792 =
																			(((BgL_varcz00_bglt)
																				CREF(BgL_obj3354z00_2041))->
																			BgL_variablez00);
																	}
																	BgL_auxz00_2791 = (obj_t) (BgL_auxz00_2792);
																}
																BgL_testz00_2790 =
																	(BgL_auxz00_2791 ==
																	(obj_t) (BgL_vauxz00_1714));
															}
															if (BgL_testz00_2790)
																{	/* Cgen/capp.scm 45 */
																	bool_t BgL_testz00_2800;

																	{	/* Cgen/capp.scm 45 */
																		obj_t BgL_obj3461z00_2042;

																		BgL_obj3461z00_2042 =
																			(obj_t) (BgL_fcopz00_1718);
																		BgL_testz00_2800 =
																			BGl_iszd2azf3z21zz__objectz00
																			(BgL_obj3461z00_2042,
																			BGl_csetqz00zzcgen_copz00);
																	}
																	if (BgL_testz00_2800)
																		{	/* Cgen/capp.scm 45 */
																			obj_t BgL_auxz00_2803;

																			{	/* Cgen/capp.scm 45 */
																				BgL_variablez00_bglt BgL_auxz00_2804;

																				{	/* Cgen/capp.scm 45 */
																					BgL_varcz00_bglt BgL_obj3354z00_2044;

																					{
																						BgL_csetqz00_bglt BgL_auxz00_2805;

																						BgL_auxz00_2805 =
																							(BgL_csetqz00_bglt)
																							(BgL_fcopz00_1718);
																						BgL_obj3354z00_2044 =
																							(((BgL_csetqz00_bglt)
																								CREF(BgL_auxz00_2805))->
																							BgL_varz00);
																					}
																					BgL_auxz00_2804 =
																						(((BgL_varcz00_bglt)
																							CREF(BgL_obj3354z00_2044))->
																						BgL_variablez00);
																				}
																				BgL_auxz00_2803 =
																					(obj_t) (BgL_auxz00_2804);
																			}
																			BgL_testz00_2786 =
																				(BgL_auxz00_2803 ==
																				(obj_t) (BgL_fauxz00_1717));
																		}
																	else
																		{	/* Cgen/capp.scm 45 */
																			BgL_testz00_2786 = ((bool_t) 0);
																		}
																}
															else
																{	/* Cgen/capp.scm 44 */
																	BgL_testz00_2786 = ((bool_t) 0);
																}
														}
													else
														{	/* Cgen/capp.scm 44 */
															BgL_testz00_2786 = ((bool_t) 0);
														}
												}
												if (BgL_testz00_2786)
													{	/* Cgen/capp.scm 47 */
														BgL_capplyz00_bglt BgL_arg4106z00_1720;

														{	/* Cgen/capp.scm 47 */
															obj_t BgL_arg4107z00_1721;

															BgL_copz00_bglt BgL_arg4108z00_1722;

															BgL_copz00_bglt BgL_arg4109z00_1723;

															{
																BgL_nodez00_bglt BgL_auxz00_2812;

																BgL_auxz00_2812 =
																	(BgL_nodez00_bglt) (BgL_nodez00_1708);
																BgL_arg4107z00_1721 =
																	(((BgL_nodez00_bglt) CREF(BgL_auxz00_2812))->
																	BgL_locz00);
															}
															{
																BgL_csetqz00_bglt BgL_auxz00_2815;

																BgL_auxz00_2815 =
																	(BgL_csetqz00_bglt) (BgL_fcopz00_1718);
																BgL_arg4108z00_1722 =
																	(((BgL_csetqz00_bglt) CREF(BgL_auxz00_2815))->
																	BgL_valuez00);
															}
															{
																BgL_csetqz00_bglt BgL_auxz00_2818;

																BgL_auxz00_2818 =
																	(BgL_csetqz00_bglt) (BgL_vcopz00_1715);
																BgL_arg4109z00_1723 =
																	(((BgL_csetqz00_bglt) CREF(BgL_auxz00_2818))->
																	BgL_valuez00);
															}
															BgL_arg4106z00_1720 =
																BGl_makezd2capplyzd2zzcgen_copz00
																(BgL_arg4107z00_1721, BgL_arg4108z00_1722,
																BgL_arg4109z00_1723);
														}
														return
															PROCEDURE_ENTRY(BgL_kontz00_1709)
															(BgL_kontz00_1709, (obj_t) (BgL_arg4106z00_1720),
															BEOA);
													}
												else
													{	/* Cgen/capp.scm 50 */
														bool_t BgL_testz00_2825;

														{	/* Cgen/capp.scm 50 */
															bool_t BgL_testz00_2826;

															{	/* Cgen/capp.scm 50 */
																obj_t BgL_obj3461z00_2048;

																BgL_obj3461z00_2048 =
																	(obj_t) (BgL_vcopz00_1715);
																BgL_testz00_2826 =
																	BGl_iszd2azf3z21zz__objectz00
																	(BgL_obj3461z00_2048,
																	BGl_csetqz00zzcgen_copz00);
															}
															if (BgL_testz00_2826)
																{	/* Cgen/capp.scm 50 */
																	obj_t BgL_auxz00_2829;

																	{	/* Cgen/capp.scm 50 */
																		BgL_variablez00_bglt BgL_auxz00_2830;

																		{	/* Cgen/capp.scm 50 */
																			BgL_varcz00_bglt BgL_obj3354z00_2050;

																			{
																				BgL_csetqz00_bglt BgL_auxz00_2831;

																				BgL_auxz00_2831 =
																					(BgL_csetqz00_bglt)
																					(BgL_vcopz00_1715);
																				BgL_obj3354z00_2050 =
																					(((BgL_csetqz00_bglt)
																						CREF(BgL_auxz00_2831))->BgL_varz00);
																			}
																			BgL_auxz00_2830 =
																				(((BgL_varcz00_bglt)
																					CREF(BgL_obj3354z00_2050))->
																				BgL_variablez00);
																		}
																		BgL_auxz00_2829 = (obj_t) (BgL_auxz00_2830);
																	}
																	BgL_testz00_2825 =
																		(BgL_auxz00_2829 ==
																		(obj_t) (BgL_vauxz00_1714));
																}
															else
																{	/* Cgen/capp.scm 50 */
																	BgL_testz00_2825 = ((bool_t) 0);
																}
														}
														if (BgL_testz00_2825)
															{	/* Cgen/capp.scm 52 */
																obj_t BgL_arg4111z00_1725;

																BgL_csequencez00_bglt BgL_arg4112z00_1726;

																{
																	BgL_nodez00_bglt BgL_auxz00_2838;

																	BgL_auxz00_2838 =
																		(BgL_nodez00_bglt) (BgL_nodez00_1708);
																	BgL_arg4111z00_1725 =
																		(((BgL_nodez00_bglt)
																			CREF(BgL_auxz00_2838))->BgL_locz00);
																}
																{	/* Cgen/capp.scm 54 */
																	obj_t BgL_arg4113z00_1727;

																	obj_t BgL_arg4114z00_1728;

																	{
																		BgL_nodez00_bglt BgL_auxz00_2841;

																		BgL_auxz00_2841 =
																			(BgL_nodez00_bglt) (BgL_nodez00_1708);
																		BgL_arg4113z00_1727 =
																			(((BgL_nodez00_bglt)
																				CREF(BgL_auxz00_2841))->BgL_locz00);
																	}
																	{	/* Cgen/capp.scm 58 */
																		BgL_localzd2varzd2_bglt BgL_arg4115z00_1729;

																		BgL_csequencez00_bglt BgL_arg4116z00_1730;

																		obj_t BgL_arg4117z00_1731;

																		{	/* Cgen/capp.scm 58 */
																			obj_t BgL_arg4121z00_1735;

																			obj_t BgL_arg4122z00_1736;

																			{
																				BgL_nodez00_bglt BgL_auxz00_2844;

																				BgL_auxz00_2844 =
																					(BgL_nodez00_bglt) (BgL_nodez00_1708);
																				BgL_arg4121z00_1735 =
																					(((BgL_nodez00_bglt)
																						CREF(BgL_auxz00_2844))->BgL_locz00);
																			}
																			{	/* Cgen/capp.scm 59 */
																				obj_t BgL_list4123z00_1737;

																				BgL_list4123z00_1737 =
																					MAKE_PAIR(
																					(obj_t) (BgL_fauxz00_1717), BNIL);
																				BgL_arg4122z00_1736 =
																					BgL_list4123z00_1737;
																			}
																			BgL_arg4115z00_1729 =
																				BGl_makezd2localzd2varz00zzcgen_copz00
																				(BgL_arg4121z00_1735,
																				BgL_arg4122z00_1736);
																		}
																		{	/* Cgen/capp.scm 61 */
																			obj_t BgL_arg4124z00_1738;

																			obj_t BgL_arg4125z00_1739;

																			{
																				BgL_nodez00_bglt BgL_auxz00_2850;

																				BgL_auxz00_2850 =
																					(BgL_nodez00_bglt) (BgL_nodez00_1708);
																				BgL_arg4124z00_1738 =
																					(((BgL_nodez00_bglt)
																						CREF(BgL_auxz00_2850))->BgL_locz00);
																			}
																			{	/* Cgen/capp.scm 62 */
																				obj_t BgL_list4126z00_1740;

																				BgL_list4126z00_1740 =
																					MAKE_PAIR(
																					(obj_t) (BgL_fcopz00_1718), BNIL);
																				BgL_arg4125z00_1739 =
																					BgL_list4126z00_1740;
																			}
																			BgL_arg4116z00_1730 =
																				BGl_makezd2csequencezd2zzcgen_copz00
																				(BgL_arg4124z00_1738, ((bool_t) 0),
																				BgL_arg4125z00_1739);
																		}
																		{	/* Cgen/capp.scm 64 */
																			BgL_capplyz00_bglt BgL_arg4127z00_1741;

																			{	/* Cgen/capp.scm 64 */
																				obj_t BgL_arg4128z00_1742;

																				BgL_varcz00_bglt BgL_arg4129z00_1743;

																				BgL_copz00_bglt BgL_arg4130z00_1744;

																				{
																					BgL_nodez00_bglt BgL_auxz00_2856;

																					BgL_auxz00_2856 =
																						(BgL_nodez00_bglt)
																						(BgL_nodez00_1708);
																					BgL_arg4128z00_1742 =
																						(((BgL_nodez00_bglt)
																							CREF(BgL_auxz00_2856))->
																						BgL_locz00);
																				}
																				{	/* Cgen/capp.scm 66 */
																					obj_t BgL_arg4131z00_1745;

																					{
																						BgL_nodez00_bglt BgL_auxz00_2859;

																						BgL_auxz00_2859 =
																							(BgL_nodez00_bglt)
																							(BgL_nodez00_1708);
																						BgL_arg4131z00_1745 =
																							(((BgL_nodez00_bglt)
																								CREF(BgL_auxz00_2859))->
																							BgL_locz00);
																					}
																					BgL_arg4129z00_1743 =
																						BGl_makezd2varczd2zzcgen_copz00
																						(BgL_arg4131z00_1745,
																						(BgL_variablez00_bglt)
																						(BgL_fauxz00_1717));
																				}
																				{
																					BgL_csetqz00_bglt BgL_auxz00_2864;

																					BgL_auxz00_2864 =
																						(BgL_csetqz00_bglt)
																						(BgL_vcopz00_1715);
																					BgL_arg4130z00_1744 =
																						(((BgL_csetqz00_bglt)
																							CREF(BgL_auxz00_2864))->
																						BgL_valuez00);
																				}
																				BgL_arg4127z00_1741 =
																					BGl_makezd2capplyzd2zzcgen_copz00
																					(BgL_arg4128z00_1742,
																					(BgL_copz00_bglt)
																					(BgL_arg4129z00_1743),
																					BgL_arg4130z00_1744);
																			}
																			BgL_arg4117z00_1731 =
																				PROCEDURE_ENTRY(BgL_kontz00_1709)
																				(BgL_kontz00_1709,
																				(obj_t) (BgL_arg4127z00_1741), BEOA);
																		}
																		{	/* Cgen/capp.scm 55 */
																			obj_t BgL_list4118z00_1732;

																			{	/* Cgen/capp.scm 55 */
																				obj_t BgL_arg4119z00_1733;

																				{	/* Cgen/capp.scm 55 */
																					obj_t BgL_arg4120z00_1734;

																					BgL_arg4120z00_1734 =
																						MAKE_PAIR(BgL_arg4117z00_1731,
																						BNIL);
																					BgL_arg4119z00_1733 =
																						MAKE_PAIR((obj_t)
																						(BgL_arg4116z00_1730),
																						BgL_arg4120z00_1734);
																				}
																				BgL_list4118z00_1732 =
																					MAKE_PAIR(
																					(obj_t) (BgL_arg4115z00_1729),
																					BgL_arg4119z00_1733);
																			}
																			BgL_arg4114z00_1728 =
																				BgL_list4118z00_1732;
																		}
																	}
																	BgL_arg4112z00_1726 =
																		BGl_makezd2csequencezd2zzcgen_copz00
																		(BgL_arg4113z00_1727, ((bool_t) 0),
																		BgL_arg4114z00_1728);
																}
																return
																	(obj_t) (BGl_makezd2blockzd2zzcgen_copz00
																	(BgL_arg4111z00_1725,
																		(BgL_copz00_bglt) (BgL_arg4112z00_1726)));
															}
														else
															{	/* Cgen/capp.scm 69 */
																bool_t BgL_testz00_2881;

																{	/* Cgen/capp.scm 69 */
																	bool_t BgL_testz00_2882;

																	{	/* Cgen/capp.scm 69 */
																		obj_t BgL_obj3461z00_2064;

																		BgL_obj3461z00_2064 =
																			(obj_t) (BgL_fcopz00_1718);
																		BgL_testz00_2882 =
																			BGl_iszd2azf3z21zz__objectz00
																			(BgL_obj3461z00_2064,
																			BGl_csetqz00zzcgen_copz00);
																	}
																	if (BgL_testz00_2882)
																		{	/* Cgen/capp.scm 69 */
																			obj_t BgL_auxz00_2885;

																			{	/* Cgen/capp.scm 69 */
																				BgL_variablez00_bglt BgL_auxz00_2886;

																				{	/* Cgen/capp.scm 69 */
																					BgL_varcz00_bglt BgL_obj3354z00_2066;

																					{
																						BgL_csetqz00_bglt BgL_auxz00_2887;

																						BgL_auxz00_2887 =
																							(BgL_csetqz00_bglt)
																							(BgL_fcopz00_1718);
																						BgL_obj3354z00_2066 =
																							(((BgL_csetqz00_bglt)
																								CREF(BgL_auxz00_2887))->
																							BgL_varz00);
																					}
																					BgL_auxz00_2886 =
																						(((BgL_varcz00_bglt)
																							CREF(BgL_obj3354z00_2066))->
																						BgL_variablez00);
																				}
																				BgL_auxz00_2885 =
																					(obj_t) (BgL_auxz00_2886);
																			}
																			BgL_testz00_2881 =
																				(BgL_auxz00_2885 ==
																				(obj_t) (BgL_fauxz00_1717));
																		}
																	else
																		{	/* Cgen/capp.scm 69 */
																			BgL_testz00_2881 = ((bool_t) 0);
																		}
																}
																if (BgL_testz00_2881)
																	{	/* Cgen/capp.scm 71 */
																		obj_t BgL_arg4133z00_1747;

																		BgL_csequencez00_bglt BgL_arg4134z00_1748;

																		{
																			BgL_nodez00_bglt BgL_auxz00_2894;

																			BgL_auxz00_2894 =
																				(BgL_nodez00_bglt) (BgL_nodez00_1708);
																			BgL_arg4133z00_1747 =
																				(((BgL_nodez00_bglt)
																					CREF(BgL_auxz00_2894))->BgL_locz00);
																		}
																		{	/* Cgen/capp.scm 73 */
																			obj_t BgL_arg4135z00_1749;

																			obj_t BgL_arg4136z00_1750;

																			{
																				BgL_nodez00_bglt BgL_auxz00_2897;

																				BgL_auxz00_2897 =
																					(BgL_nodez00_bglt) (BgL_nodez00_1708);
																				BgL_arg4135z00_1749 =
																					(((BgL_nodez00_bglt)
																						CREF(BgL_auxz00_2897))->BgL_locz00);
																			}
																			{	/* Cgen/capp.scm 77 */
																				BgL_localzd2varzd2_bglt
																					BgL_arg4137z00_1751;
																				BgL_csequencez00_bglt
																					BgL_arg4138z00_1752;
																				obj_t BgL_arg4139z00_1753;

																				{	/* Cgen/capp.scm 77 */
																					obj_t BgL_arg4143z00_1757;

																					obj_t BgL_arg4144z00_1758;

																					{
																						BgL_nodez00_bglt BgL_auxz00_2900;

																						BgL_auxz00_2900 =
																							(BgL_nodez00_bglt)
																							(BgL_nodez00_1708);
																						BgL_arg4143z00_1757 =
																							(((BgL_nodez00_bglt)
																								CREF(BgL_auxz00_2900))->
																							BgL_locz00);
																					}
																					{	/* Cgen/capp.scm 78 */
																						obj_t BgL_list4145z00_1759;

																						BgL_list4145z00_1759 =
																							MAKE_PAIR(
																							(obj_t) (BgL_vauxz00_1714), BNIL);
																						BgL_arg4144z00_1758 =
																							BgL_list4145z00_1759;
																					}
																					BgL_arg4137z00_1751 =
																						BGl_makezd2localzd2varz00zzcgen_copz00
																						(BgL_arg4143z00_1757,
																						BgL_arg4144z00_1758);
																				}
																				{	/* Cgen/capp.scm 80 */
																					obj_t BgL_arg4146z00_1760;

																					obj_t BgL_arg4147z00_1761;

																					{
																						BgL_nodez00_bglt BgL_auxz00_2906;

																						BgL_auxz00_2906 =
																							(BgL_nodez00_bglt)
																							(BgL_nodez00_1708);
																						BgL_arg4146z00_1760 =
																							(((BgL_nodez00_bglt)
																								CREF(BgL_auxz00_2906))->
																							BgL_locz00);
																					}
																					{	/* Cgen/capp.scm 81 */
																						obj_t BgL_list4148z00_1762;

																						BgL_list4148z00_1762 =
																							MAKE_PAIR(
																							(obj_t) (BgL_vcopz00_1715), BNIL);
																						BgL_arg4147z00_1761 =
																							BgL_list4148z00_1762;
																					}
																					BgL_arg4138z00_1752 =
																						BGl_makezd2csequencezd2zzcgen_copz00
																						(BgL_arg4146z00_1760, ((bool_t) 0),
																						BgL_arg4147z00_1761);
																				}
																				{	/* Cgen/capp.scm 83 */
																					BgL_capplyz00_bglt
																						BgL_arg4149z00_1763;
																					{	/* Cgen/capp.scm 83 */
																						obj_t BgL_arg4150z00_1764;

																						BgL_copz00_bglt BgL_arg4151z00_1765;

																						BgL_varcz00_bglt
																							BgL_arg4152z00_1766;
																						{
																							BgL_nodez00_bglt BgL_auxz00_2912;

																							BgL_auxz00_2912 =
																								(BgL_nodez00_bglt)
																								(BgL_nodez00_1708);
																							BgL_arg4150z00_1764 =
																								(((BgL_nodez00_bglt)
																									CREF(BgL_auxz00_2912))->
																								BgL_locz00);
																						}
																						{
																							BgL_csetqz00_bglt BgL_auxz00_2915;

																							BgL_auxz00_2915 =
																								(BgL_csetqz00_bglt)
																								(BgL_fcopz00_1718);
																							BgL_arg4151z00_1765 =
																								(((BgL_csetqz00_bglt)
																									CREF(BgL_auxz00_2915))->
																								BgL_valuez00);
																						}
																						{	/* Cgen/capp.scm 86 */
																							obj_t BgL_arg4153z00_1767;

																							{
																								BgL_nodez00_bglt
																									BgL_auxz00_2918;
																								BgL_auxz00_2918 =
																									(BgL_nodez00_bglt)
																									(BgL_nodez00_1708);
																								BgL_arg4153z00_1767 =
																									(((BgL_nodez00_bglt)
																										CREF(BgL_auxz00_2918))->
																									BgL_locz00);
																							}
																							BgL_arg4152z00_1766 =
																								BGl_makezd2varczd2zzcgen_copz00
																								(BgL_arg4153z00_1767,
																								(BgL_variablez00_bglt)
																								(BgL_vauxz00_1714));
																						}
																						BgL_arg4149z00_1763 =
																							BGl_makezd2capplyzd2zzcgen_copz00
																							(BgL_arg4150z00_1764,
																							BgL_arg4151z00_1765,
																							(BgL_copz00_bglt)
																							(BgL_arg4152z00_1766));
																					}
																					BgL_arg4139z00_1753 =
																						PROCEDURE_ENTRY(BgL_kontz00_1709)
																						(BgL_kontz00_1709,
																						(obj_t) (BgL_arg4149z00_1763),
																						BEOA);
																				}
																				{	/* Cgen/capp.scm 74 */
																					obj_t BgL_list4140z00_1754;

																					{	/* Cgen/capp.scm 74 */
																						obj_t BgL_arg4141z00_1755;

																						{	/* Cgen/capp.scm 74 */
																							obj_t BgL_arg4142z00_1756;

																							BgL_arg4142z00_1756 =
																								MAKE_PAIR(BgL_arg4139z00_1753,
																								BNIL);
																							BgL_arg4141z00_1755 =
																								MAKE_PAIR((obj_t)
																								(BgL_arg4138z00_1752),
																								BgL_arg4142z00_1756);
																						}
																						BgL_list4140z00_1754 =
																							MAKE_PAIR(
																							(obj_t) (BgL_arg4137z00_1751),
																							BgL_arg4141z00_1755);
																					}
																					BgL_arg4136z00_1750 =
																						BgL_list4140z00_1754;
																				}
																			}
																			BgL_arg4134z00_1748 =
																				BGl_makezd2csequencezd2zzcgen_copz00
																				(BgL_arg4135z00_1749, ((bool_t) 0),
																				BgL_arg4136z00_1750);
																		}
																		return
																			(obj_t) (BGl_makezd2blockzd2zzcgen_copz00
																			(BgL_arg4133z00_1747,
																				(BgL_copz00_bglt)
																				(BgL_arg4134z00_1748)));
																	}
																else
																	{	/* Cgen/capp.scm 90 */
																		obj_t BgL_arg4154z00_1768;

																		BgL_csequencez00_bglt BgL_arg4155z00_1769;

																		{
																			BgL_nodez00_bglt BgL_auxz00_2937;

																			BgL_auxz00_2937 =
																				(BgL_nodez00_bglt) (BgL_nodez00_1708);
																			BgL_arg4154z00_1768 =
																				(((BgL_nodez00_bglt)
																					CREF(BgL_auxz00_2937))->BgL_locz00);
																		}
																		{	/* Cgen/capp.scm 92 */
																			obj_t BgL_arg4156z00_1770;

																			obj_t BgL_arg4158z00_1771;

																			{
																				BgL_nodez00_bglt BgL_auxz00_2940;

																				BgL_auxz00_2940 =
																					(BgL_nodez00_bglt) (BgL_nodez00_1708);
																				BgL_arg4156z00_1770 =
																					(((BgL_nodez00_bglt)
																						CREF(BgL_auxz00_2940))->BgL_locz00);
																			}
																			{	/* Cgen/capp.scm 96 */
																				BgL_localzd2varzd2_bglt
																					BgL_arg4159z00_1772;
																				BgL_csequencez00_bglt
																					BgL_arg4160z00_1773;
																				obj_t BgL_arg4161z00_1774;

																				{	/* Cgen/capp.scm 96 */
																					obj_t BgL_arg4165z00_1778;

																					obj_t BgL_arg4166z00_1779;

																					{
																						BgL_nodez00_bglt BgL_auxz00_2943;

																						BgL_auxz00_2943 =
																							(BgL_nodez00_bglt)
																							(BgL_nodez00_1708);
																						BgL_arg4165z00_1778 =
																							(((BgL_nodez00_bglt)
																								CREF(BgL_auxz00_2943))->
																							BgL_locz00);
																					}
																					{	/* Cgen/capp.scm 97 */
																						obj_t BgL_list4167z00_1780;

																						{	/* Cgen/capp.scm 97 */
																							obj_t BgL_arg4168z00_1781;

																							BgL_arg4168z00_1781 =
																								MAKE_PAIR(
																								(obj_t) (BgL_vauxz00_1714),
																								BNIL);
																							BgL_list4167z00_1780 =
																								MAKE_PAIR((obj_t)
																								(BgL_fauxz00_1717),
																								BgL_arg4168z00_1781);
																						}
																						BgL_arg4166z00_1779 =
																							BgL_list4167z00_1780;
																					}
																					BgL_arg4159z00_1772 =
																						BGl_makezd2localzd2varz00zzcgen_copz00
																						(BgL_arg4165z00_1778,
																						BgL_arg4166z00_1779);
																				}
																				{	/* Cgen/capp.scm 99 */
																					obj_t BgL_arg4169z00_1782;

																					obj_t BgL_arg4170z00_1783;

																					{
																						BgL_nodez00_bglt BgL_auxz00_2951;

																						BgL_auxz00_2951 =
																							(BgL_nodez00_bglt)
																							(BgL_nodez00_1708);
																						BgL_arg4169z00_1782 =
																							(((BgL_nodez00_bglt)
																								CREF(BgL_auxz00_2951))->
																							BgL_locz00);
																					}
																					{	/* Cgen/capp.scm 100 */
																						obj_t BgL_list4171z00_1784;

																						{	/* Cgen/capp.scm 100 */
																							obj_t BgL_arg4172z00_1785;

																							BgL_arg4172z00_1785 =
																								MAKE_PAIR(
																								(obj_t) (BgL_vcopz00_1715),
																								BNIL);
																							BgL_list4171z00_1784 =
																								MAKE_PAIR((obj_t)
																								(BgL_fcopz00_1718),
																								BgL_arg4172z00_1785);
																						}
																						BgL_arg4170z00_1783 =
																							BgL_list4171z00_1784;
																					}
																					BgL_arg4160z00_1773 =
																						BGl_makezd2csequencezd2zzcgen_copz00
																						(BgL_arg4169z00_1782, ((bool_t) 0),
																						BgL_arg4170z00_1783);
																				}
																				{	/* Cgen/capp.scm 102 */
																					BgL_capplyz00_bglt
																						BgL_arg4173z00_1786;
																					{	/* Cgen/capp.scm 102 */
																						obj_t BgL_arg4174z00_1787;

																						BgL_varcz00_bglt
																							BgL_arg4175z00_1788;
																						BgL_varcz00_bglt
																							BgL_arg4176z00_1789;
																						{
																							BgL_nodez00_bglt BgL_auxz00_2959;

																							BgL_auxz00_2959 =
																								(BgL_nodez00_bglt)
																								(BgL_nodez00_1708);
																							BgL_arg4174z00_1787 =
																								(((BgL_nodez00_bglt)
																									CREF(BgL_auxz00_2959))->
																								BgL_locz00);
																						}
																						{	/* Cgen/capp.scm 104 */
																							obj_t BgL_arg4178z00_1790;

																							{
																								BgL_nodez00_bglt
																									BgL_auxz00_2962;
																								BgL_auxz00_2962 =
																									(BgL_nodez00_bglt)
																									(BgL_nodez00_1708);
																								BgL_arg4178z00_1790 =
																									(((BgL_nodez00_bglt)
																										CREF(BgL_auxz00_2962))->
																									BgL_locz00);
																							}
																							BgL_arg4175z00_1788 =
																								BGl_makezd2varczd2zzcgen_copz00
																								(BgL_arg4178z00_1790,
																								(BgL_variablez00_bglt)
																								(BgL_fauxz00_1717));
																						}
																						{	/* Cgen/capp.scm 107 */
																							obj_t BgL_arg4180z00_1791;

																							{
																								BgL_nodez00_bglt
																									BgL_auxz00_2967;
																								BgL_auxz00_2967 =
																									(BgL_nodez00_bglt)
																									(BgL_nodez00_1708);
																								BgL_arg4180z00_1791 =
																									(((BgL_nodez00_bglt)
																										CREF(BgL_auxz00_2967))->
																									BgL_locz00);
																							}
																							BgL_arg4176z00_1789 =
																								BGl_makezd2varczd2zzcgen_copz00
																								(BgL_arg4180z00_1791,
																								(BgL_variablez00_bglt)
																								(BgL_vauxz00_1714));
																						}
																						BgL_arg4173z00_1786 =
																							BGl_makezd2capplyzd2zzcgen_copz00
																							(BgL_arg4174z00_1787,
																							(BgL_copz00_bglt)
																							(BgL_arg4175z00_1788),
																							(BgL_copz00_bglt)
																							(BgL_arg4176z00_1789));
																					}
																					BgL_arg4161z00_1774 =
																						PROCEDURE_ENTRY(BgL_kontz00_1709)
																						(BgL_kontz00_1709,
																						(obj_t) (BgL_arg4173z00_1786),
																						BEOA);
																				}
																				{	/* Cgen/capp.scm 93 */
																					obj_t BgL_list4162z00_1775;

																					{	/* Cgen/capp.scm 93 */
																						obj_t BgL_arg4163z00_1776;

																						{	/* Cgen/capp.scm 93 */
																							obj_t BgL_arg4164z00_1777;

																							BgL_arg4164z00_1777 =
																								MAKE_PAIR(BgL_arg4161z00_1774,
																								BNIL);
																							BgL_arg4163z00_1776 =
																								MAKE_PAIR((obj_t)
																								(BgL_arg4160z00_1773),
																								BgL_arg4164z00_1777);
																						}
																						BgL_list4162z00_1775 =
																							MAKE_PAIR(
																							(obj_t) (BgL_arg4159z00_1772),
																							BgL_arg4163z00_1776);
																					}
																					BgL_arg4158z00_1771 =
																						BgL_list4162z00_1775;
																				}
																			}
																			BgL_arg4155z00_1769 =
																				BGl_makezd2csequencezd2zzcgen_copz00
																				(BgL_arg4156z00_1770, ((bool_t) 0),
																				BgL_arg4158z00_1771);
																		}
																		return
																			(obj_t) (BGl_makezd2blockzd2zzcgen_copz00
																			(BgL_arg4154z00_1768,
																				(BgL_copz00_bglt)
																				(BgL_arg4155z00_1769)));
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



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcgen_cappz00()
	{
		AN_OBJECT;
		{	/* Cgen/capp.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string4298z00zzcgen_cappz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string4298z00zzcgen_cappz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4298z00zzcgen_cappz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4298z00zzcgen_cappz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 195902195),
				BSTRING_TO_STRING(BGl_string4298z00zzcgen_cappz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string4298z00zzcgen_cappz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4298z00zzcgen_cappz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4298z00zzcgen_cappz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string4298z00zzcgen_cappz00));
			BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 470955713),
				BSTRING_TO_STRING(BGl_string4298z00zzcgen_cappz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(((long) 185927088),
				BSTRING_TO_STRING(BGl_string4298z00zzcgen_cappz00));
			BGl_modulezd2initializa7ationz75zzcgen_copz00(((long) 241571075),
				BSTRING_TO_STRING(BGl_string4298z00zzcgen_cappz00));
			return
				BGl_modulezd2initializa7ationz75zzcgen_cgenz00(((long) 515633288),
				BSTRING_TO_STRING(BGl_string4298z00zzcgen_cappz00));
		}
	}

#ifdef __cplusplus
}
#endif
