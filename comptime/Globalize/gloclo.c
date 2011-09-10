/*===========================================================================*/
/*   (Globalize/gloclo.scm)                                                  */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Globalize/gloclo.scm)*/
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

	typedef struct BgL_globalzf2ginfozf2_bgl
	{
		bool_t BgL_escapezf3zf3;
		obj_t BgL_globalzd2closurezd2;
	}                        *BgL_globalzf2ginfozf2_bglt;


	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t
		BGl_thezd2globalzd2closurez00zzglobaliza7e_freeza7(BgL_globalz00_bglt,
		obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	extern obj_t BGl_wideningzd2globalzf2Ginfoz20zzglobaliza7e_ginfoza7(bool_t,
		obj_t);
	static BgL_appz00_bglt
		BGl_makezd2nooptzd2bodyz00zzglobaliza7e_globalzd2closurez75(obj_t,
		BgL_globalz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t
		BGl_fillzd2glocloz12zc0zzglobaliza7e_globalzd2closurez75(BgL_globalz00_bglt,
		BgL_globalz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_foreignzd2closureszd2zzglobaliza7e_globalzd2closurez75();
	extern BgL_appz00_bglt BGl_makezd2appzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_varz00_bglt, obj_t);
	static obj_t BGl_cnstzd2initzd2zzglobaliza7e_globalzd2closurez75();
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_globalzd2closurezd2zzglobaliza7e_globalzd2closurez75(BgL_globalz00_bglt,
		obj_t);
	extern obj_t BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7;
	static obj_t
		BGl_makezd2optzf2keyzd2globalzd2closurez20zzglobaliza7e_globalzd2closurez75
		(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_globalzd2closurez75(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_freeza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_nodeza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzglobaliza7e_globalzd2closurez75();
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t
		BGl_makezd2nooptzd2globalzd2closurezd2zzglobaliza7e_globalzd2closurez75
		(BgL_globalz00_bglt);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_makezd2globalzd2closurez00zzglobaliza7e_globalzd2closurez75
		(BgL_globalz00_bglt);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t
		BGl__foreignzd2closureszd2zzglobaliza7e_globalzd2closurez75(obj_t);
	BGL_IMPORT bool_t symbol_exists_p(char *);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern BgL_globalz00_bglt
		BGl_defzd2globalzd2sfunzd2nozd2warningz12z12zzast_glozd2defzd2(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzglobaliza7e_globalzd2closurez75();
	extern int BGl_funzd2optionalzd2arityz00zzast_varz00(BgL_funz00_bglt);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t
		BGl_requirezd2initializa7ationz75zzglobaliza7e_globalzd2closurez75 =
		BUNSPEC;
	extern obj_t BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7;
	static obj_t BGl_genericzd2initzd2zzglobaliza7e_globalzd2closurez75();
	static obj_t BGl__globalzd2closurezd2zzglobaliza7e_globalzd2closurez75(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t BGl_wideningzd2localzf2Ginfoz20zzglobaliza7e_ginfoza7(bool_t,
		bool_t);
	static obj_t BGl_za2foreignzd2closuresza2zd2zzglobaliza7e_globalzd2closurez75
		= BUNSPEC;
	static obj_t
		BGl_importedzd2moduleszd2initz00zzglobaliza7e_globalzd2closurez75();
	static obj_t
		BGl_glocloz00zzglobaliza7e_globalzd2closurez75(BgL_globalz00_bglt,
		BgL_localz00_bglt, obj_t);
	extern obj_t BGl_zb2zd2arityz60zztools_argsz00(obj_t, obj_t);
	extern obj_t BGl_wideningzd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7(bool_t,
		long, long, bool_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_cfunz00zzast_varz00;
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	extern obj_t BGl_makezd2nzd2protoz00zztools_argsz00(obj_t);
	extern obj_t BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7;
	static obj_t
		BGl__makezd2globalzd2closurez00zzglobaliza7e_globalzd2closurez75(obj_t,
		obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	extern BgL_varz00_bglt BGl_makezd2varzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_variablez00_bglt);
	static obj_t
		BGl_libraryzd2moduleszd2initz00zzglobaliza7e_globalzd2closurez75();
	static obj_t __cnst[8];


	   
		 
		DEFINE_STRING(BGl_string3840z00zzglobaliza7e_globalzd2closurez75,
		BgL_bgl_string3840za700za7za7g3849za7, "make-global-closure", 19);
	      DEFINE_STRING(BGl_string3841z00zzglobaliza7e_globalzd2closurez75,
		BgL_bgl_string3841za700za7za7g3850za7, "Unexpected value", 16);
	      DEFINE_STRING(BGl_string3842z00zzglobaliza7e_globalzd2closurez75,
		BgL_bgl_string3842za700za7za7g3851za7, "_", 1);
	      DEFINE_STRING(BGl_string3843z00zzglobaliza7e_globalzd2closurez75,
		BgL_bgl_string3843za700za7za7g3852za7, "global-closure", 14);
	      DEFINE_STRING(BGl_string3844z00zzglobaliza7e_globalzd2closurez75,
		BgL_bgl_string3844za700za7za7g3853za7, "Can't allocate global closure", 29);
	      DEFINE_STRING(BGl_string3845z00zzglobaliza7e_globalzd2closurez75,
		BgL_bgl_string3845za700za7za7g3854za7, "globalize_global-closure", 24);
	      DEFINE_STRING(BGl_string3846z00zzglobaliza7e_globalzd2closurez75,
		BgL_bgl_string3846za700za7za7g3855za7,
		"static never now sfun foreign obj env _ ", 40);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_foreignzd2closureszd2envz00zzglobaliza7e_globalzd2closurez75,
		BgL_bgl__foreignza7d2closu3856za7,
		BGl__foreignzd2closureszd2zzglobaliza7e_globalzd2closurez75, 0L, BUNSPEC,
		0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2globalzd2closurezd2envzd2zzglobaliza7e_globalzd2closurez75,
		BgL_bgl__makeza7d2globalza7d3857z00,
		BGl__makezd2globalzd2closurez00zzglobaliza7e_globalzd2closurez75, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzd2closurezd2envz00zzglobaliza7e_globalzd2closurez75,
		BgL_bgl__globalza7d2closur3858za7,
		BGl__globalzd2closurezd2zzglobaliza7e_globalzd2closurez75, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_globalzd2closurez75(long
		BgL_checksumz00_1645, char *BgL_fromz00_1646)
	{
		AN_OBJECT;
		{
			if (CBOOL
				(BGl_requirezd2initializa7ationz75zzglobaliza7e_globalzd2closurez75))
				{
					BGl_requirezd2initializa7ationz75zzglobaliza7e_globalzd2closurez75 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzglobaliza7e_globalzd2closurez75();
					BGl_cnstzd2initzd2zzglobaliza7e_globalzd2closurez75();
					BGl_importedzd2moduleszd2initz00zzglobaliza7e_globalzd2closurez75();
					BGl_toplevelzd2initzd2zzglobaliza7e_globalzd2closurez75();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_globalzd2closurez75()
	{
		AN_OBJECT;
		{	/* Globalize/gloclo.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"globalize_global-closure");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"globalize_global-closure");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"globalize_global-closure");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"globalize_global-closure");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzglobaliza7e_globalzd2closurez75()
	{
		AN_OBJECT;
		{	/* Globalize/gloclo.scm 15 */
			{	/* Globalize/gloclo.scm 15 */
				obj_t BgL_cportz00_1635;

				BgL_cportz00_1635 =
					bgl_open_input_string
					(BGl_string3846z00zzglobaliza7e_globalzd2closurez75,
					(int) (((long) 0)));
				{
					long BgL_iz00_1636;

					BgL_iz00_1636 = ((long) 7);
				BgL_loopz00_1637:
					if ((BgL_iz00_1636 == ((long) -1)))
						{	/* Globalize/gloclo.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Globalize/gloclo.scm 15 */
							{	/* Globalize/gloclo.scm 15 */
								obj_t BgL_arg3848z00_1639;

								{	/* Globalize/gloclo.scm 15 */

									{	/* Globalize/gloclo.scm 15 */
										obj_t BgL_locationz00_1641;

										BgL_locationz00_1641 = BBOOL(((bool_t) 0));
										{	/* Globalize/gloclo.scm 15 */

											BgL_arg3848z00_1639 =
												BGl_readz00zz__readerz00(BgL_cportz00_1635,
												BgL_locationz00_1641);
										}
									}
								}
								{	/* Globalize/gloclo.scm 15 */
									int BgL_auxz00_1664;

									BgL_auxz00_1664 = (int) (BgL_iz00_1636);
									CNST_TABLE_SET(BgL_auxz00_1664, BgL_arg3848z00_1639);
							}}
							{	/* Globalize/gloclo.scm 15 */
								int BgL_auxz00_1642;

								BgL_auxz00_1642 = (int) ((BgL_iz00_1636 - ((long) 1)));
								{
									long BgL_iz00_1669;

									BgL_iz00_1669 = (long) (BgL_auxz00_1642);
									BgL_iz00_1636 = BgL_iz00_1669;
									goto BgL_loopz00_1637;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzglobaliza7e_globalzd2closurez75()
	{
		AN_OBJECT;
		{	/* Globalize/gloclo.scm 15 */
			return (BGl_za2foreignzd2closuresza2zd2zzglobaliza7e_globalzd2closurez75 =
				BNIL, BUNSPEC);
		}
	}



/* global-closure */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_globalzd2closurezd2zzglobaliza7e_globalzd2closurez75(BgL_globalz00_bglt
		BgL_globalz00_1, obj_t BgL_locz00_2)
	{
		AN_OBJECT;
		{	/* Globalize/gloclo.scm 41 */
			BGl_thezd2globalzd2closurez00zzglobaliza7e_freeza7(BgL_globalz00_1,
				BgL_locz00_2);
			return
				BGl_makezd2globalzd2closurez00zzglobaliza7e_globalzd2closurez75
				(BgL_globalz00_1);
		}
	}



/* _global-closure */
	obj_t BGl__globalzd2closurezd2zzglobaliza7e_globalzd2closurez75(obj_t
		BgL_envz00_1629, obj_t BgL_globalz00_1630, obj_t BgL_locz00_1631)
	{
		AN_OBJECT;
		{	/* Globalize/gloclo.scm 41 */
			return
				(obj_t) (BGl_globalzd2closurezd2zzglobaliza7e_globalzd2closurez75(
					(BgL_globalz00_bglt) (BgL_globalz00_1630), BgL_locz00_1631));
		}
	}



/* make-global-closure */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_makezd2globalzd2closurez00zzglobaliza7e_globalzd2closurez75
		(BgL_globalz00_bglt BgL_globalz00_3)
	{
		AN_OBJECT;
		{	/* Globalize/gloclo.scm 48 */
			{	/* Globalize/gloclo.scm 49 */
				obj_t BgL_gloz00_934;

				{	/* Globalize/gloclo.scm 49 */
					BgL_globalzf2ginfozf2_bglt BgL_obj3601z00_1498;

					BgL_obj3601z00_1498 = (BgL_globalzf2ginfozf2_bglt) (BgL_globalz00_3);
					{
						obj_t BgL_auxz00_1677;

						{	/* Globalize/gloclo.scm 49 */
							BgL_objectz00_bglt BgL_auxz00_1678;

							BgL_auxz00_1678 = (BgL_objectz00_bglt) (BgL_obj3601z00_1498);
							BgL_auxz00_1677 = BGL_OBJECT_WIDENING(BgL_auxz00_1678);
						}
						BgL_gloz00_934 =
							(((BgL_globalzf2ginfozf2_bglt) CREF(BgL_auxz00_1677))->
							BgL_globalzd2closurezd2);
					}
				}
				if (BGl_iszd2azf3z21zz__objectz00(BgL_gloz00_934,
						BGl_globalz00zzast_varz00))
					{	/* Globalize/gloclo.scm 50 */
						return (BgL_globalz00_bglt) (BgL_gloz00_934);
					}
				else
					{	/* Globalize/gloclo.scm 52 */
						BgL_valuez00_bglt BgL_oldzd2funzd2_936;

						{
							BgL_variablez00_bglt BgL_auxz00_1685;

							BgL_auxz00_1685 = (BgL_variablez00_bglt) (BgL_globalz00_3);
							BgL_oldzd2funzd2_936 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_1685))->BgL_valuez00);
						}
						{	/* Globalize/gloclo.scm 53 */
							bool_t BgL_testz00_1688;

							{	/* Globalize/gloclo.scm 53 */
								bool_t BgL_testz00_1689;

								{	/* Globalize/gloclo.scm 53 */
									obj_t BgL_obj1955z00_1501;

									BgL_obj1955z00_1501 = (obj_t) (BgL_oldzd2funzd2_936);
									BgL_testz00_1689 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj1955z00_1501,
										BGl_sfunz00zzast_varz00);
								}
								if (BgL_testz00_1689)
									{	/* Globalize/gloclo.scm 54 */
										bool_t BgL_testz00_1692;

										{	/* Globalize/gloclo.scm 54 */
											bool_t BgL_testz00_1693;

											{	/* Globalize/gloclo.scm 54 */
												obj_t BgL_auxz00_1694;

												{
													BgL_sfunz00_bglt BgL_auxz00_1695;

													BgL_auxz00_1695 =
														(BgL_sfunz00_bglt) (BgL_oldzd2funzd2_936);
													BgL_auxz00_1694 =
														(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1695))->
														BgL_optionalsz00);
												}
												BgL_testz00_1693 = PAIRP(BgL_auxz00_1694);
											}
											if (BgL_testz00_1693)
												{	/* Globalize/gloclo.scm 54 */
													BgL_testz00_1692 = ((bool_t) 1);
												}
											else
												{	/* Globalize/gloclo.scm 55 */
													obj_t BgL_auxz00_1699;

													{
														BgL_sfunz00_bglt BgL_auxz00_1700;

														BgL_auxz00_1700 =
															(BgL_sfunz00_bglt) (BgL_oldzd2funzd2_936);
														BgL_auxz00_1699 =
															(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1700))->
															BgL_keysz00);
													}
													BgL_testz00_1692 = PAIRP(BgL_auxz00_1699);
												}
										}
										if (BgL_testz00_1692)
											{	/* Globalize/gloclo.scm 56 */
												obj_t BgL_arg3680z00_940;

												BgL_arg3680z00_940 =
													(((BgL_globalz00_bglt) CREF(BgL_globalz00_3))->
													BgL_modulez00);
												BgL_testz00_1688 =
													(BgL_arg3680z00_940 ==
													BGl_za2moduleza2z00zzmodule_modulez00);
											}
										else
											{	/* Globalize/gloclo.scm 54 */
												BgL_testz00_1688 = ((bool_t) 0);
											}
									}
								else
									{	/* Globalize/gloclo.scm 53 */
										BgL_testz00_1688 = ((bool_t) 0);
									}
							}
							if (BgL_testz00_1688)
								{	/* Globalize/gloclo.scm 53 */
									return
										(BgL_globalz00_bglt)
										(BGl_makezd2optzf2keyzd2globalzd2closurez20zzglobaliza7e_globalzd2closurez75
										(BgL_globalz00_3));
								}
							else
								{	/* Globalize/gloclo.scm 53 */
									return
										(BgL_globalz00_bglt)
										(BGl_makezd2nooptzd2globalzd2closurezd2zzglobaliza7e_globalzd2closurez75
										(BgL_globalz00_3));
								}
						}
					}
			}
		}
	}



/* _make-global-closure */
	obj_t BGl__makezd2globalzd2closurez00zzglobaliza7e_globalzd2closurez75(obj_t
		BgL_envz00_1632, obj_t BgL_globalz00_1633)
	{
		AN_OBJECT;
		{	/* Globalize/gloclo.scm 48 */
			return
				(obj_t) (BGl_makezd2globalzd2closurez00zzglobaliza7e_globalzd2closurez75
				((BgL_globalz00_bglt) (BgL_globalz00_1633)));
		}
	}



/* make-opt/key-global-closure */
	obj_t
		BGl_makezd2optzf2keyzd2globalzd2closurez20zzglobaliza7e_globalzd2closurez75
		(BgL_globalz00_bglt BgL_globalz00_4)
	{
		AN_OBJECT;
		{	/* Globalize/gloclo.scm 63 */
			{	/* Globalize/gloclo.scm 64 */
				obj_t BgL_glocloz00_944;

				{	/* Globalize/gloclo.scm 64 */
					obj_t BgL_arg3685z00_946;

					obj_t BgL_arg3686z00_947;

					{	/* Globalize/gloclo.scm 64 */
						obj_t BgL_arg3688z00_949;

						{	/* Globalize/gloclo.scm 64 */
							obj_t BgL_arg3689z00_950;

							obj_t BgL_arg3690z00_951;

							{	/* Globalize/gloclo.scm 64 */
								obj_t BgL_res3833z00_1509;

								{	/* Globalize/gloclo.scm 64 */
									obj_t BgL_symbolz00_1507;

									BgL_symbolz00_1507 = CNST_TABLE_REF(((long) 0));
									{	/* Globalize/gloclo.scm 64 */
										obj_t BgL_arg2063z00_1508;

										BgL_arg2063z00_1508 = SYMBOL_TO_STRING(BgL_symbolz00_1507);
										BgL_res3833z00_1509 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_1508);
								}}
								BgL_arg3689z00_950 = BgL_res3833z00_1509;
							}
							{	/* Globalize/gloclo.scm 64 */
								obj_t BgL_arg3693z00_954;

								{
									BgL_variablez00_bglt BgL_auxz00_1716;

									BgL_auxz00_1716 = (BgL_variablez00_bglt) (BgL_globalz00_4);
									BgL_arg3693z00_954 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_1716))->BgL_idz00);
								}
								{	/* Globalize/gloclo.scm 64 */
									obj_t BgL_res3834z00_1513;

									{	/* Globalize/gloclo.scm 64 */
										obj_t BgL_arg2063z00_1512;

										BgL_arg2063z00_1512 = SYMBOL_TO_STRING(BgL_arg3693z00_954);
										BgL_res3834z00_1513 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_1512);
									}
									BgL_arg3690z00_951 = BgL_res3834z00_1513;
							}}
							{	/* Globalize/gloclo.scm 64 */
								obj_t BgL_list3691z00_952;

								{	/* Globalize/gloclo.scm 64 */
									obj_t BgL_arg3692z00_953;

									BgL_arg3692z00_953 = MAKE_PAIR(BgL_arg3690z00_951, BNIL);
									BgL_list3691z00_952 =
										MAKE_PAIR(BgL_arg3689z00_950, BgL_arg3692z00_953);
								}
								BgL_arg3688z00_949 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list3691z00_952);
						}}
						BgL_arg3685z00_946 =
							string_to_symbol(BSTRING_TO_STRING(BgL_arg3688z00_949));
					}
					BgL_arg3686z00_947 =
						(((BgL_globalz00_bglt) CREF(BgL_globalz00_4))->BgL_modulez00);
					{	/* Globalize/gloclo.scm 64 */
						obj_t BgL_list3687z00_948;

						BgL_list3687z00_948 = MAKE_PAIR(BgL_arg3686z00_947, BNIL);
						BgL_glocloz00_944 =
							BGl_findzd2globalzd2zzast_envz00(BgL_arg3685z00_946,
							BgL_list3687z00_948);
				}}
				BGl_fillzd2glocloz12zc0zzglobaliza7e_globalzd2closurez75
					(BgL_globalz00_4, (BgL_globalz00_bglt) (BgL_glocloz00_944));
				{	/* Globalize/gloclo.scm 67 */
					BgL_valuez00_bglt BgL_arg3684z00_945;

					{
						BgL_variablez00_bglt BgL_auxz00_1731;

						BgL_auxz00_1731 = (BgL_variablez00_bglt) (BgL_glocloz00_944);
						BgL_arg3684z00_945 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_1731))->BgL_valuez00);
					}
					{
						obj_t BgL_auxz00_1736;

						BgL_sfunz00_bglt BgL_auxz00_1734;

						BgL_auxz00_1736 = (obj_t) (BgL_globalz00_4);
						BgL_auxz00_1734 = (BgL_sfunz00_bglt) (BgL_arg3684z00_945);
						((((BgL_sfunz00_bglt) CREF(BgL_auxz00_1734))->
								BgL_thezd2closurezd2globalz00) =
							((obj_t) BgL_auxz00_1736), BUNSPEC);
				}}
				return BgL_glocloz00_944;
			}
		}
	}



/* make-noopt-global-closure */
	obj_t
		BGl_makezd2nooptzd2globalzd2closurezd2zzglobaliza7e_globalzd2closurez75
		(BgL_globalz00_bglt BgL_globalz00_5)
	{
		AN_OBJECT;
		{	/* Globalize/gloclo.scm 73 */
			{	/* Globalize/gloclo.scm 74 */
				obj_t BgL_gloz00_955;

				{	/* Globalize/gloclo.scm 74 */
					BgL_globalzf2ginfozf2_bglt BgL_obj3601z00_1519;

					BgL_obj3601z00_1519 = (BgL_globalzf2ginfozf2_bglt) (BgL_globalz00_5);
					{
						obj_t BgL_auxz00_1740;

						{	/* Globalize/gloclo.scm 74 */
							BgL_objectz00_bglt BgL_auxz00_1741;

							BgL_auxz00_1741 = (BgL_objectz00_bglt) (BgL_obj3601z00_1519);
							BgL_auxz00_1740 = BGL_OBJECT_WIDENING(BgL_auxz00_1741);
						}
						BgL_gloz00_955 =
							(((BgL_globalzf2ginfozf2_bglt) CREF(BgL_auxz00_1740))->
							BgL_globalzd2closurezd2);
					}
				}
				if (BGl_iszd2azf3z21zz__objectz00(BgL_gloz00_955,
						BGl_globalz00zzast_varz00))
					{	/* Globalize/gloclo.scm 75 */
						return BgL_gloz00_955;
					}
				else
					{	/* Globalize/gloclo.scm 77 */
						BgL_valuez00_bglt BgL_oldzd2funzd2_957;

						{
							BgL_variablez00_bglt BgL_auxz00_1747;

							BgL_auxz00_1747 = (BgL_variablez00_bglt) (BgL_globalz00_5);
							BgL_oldzd2funzd2_957 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_1747))->BgL_valuez00);
						}
						{	/* Globalize/gloclo.scm 77 */
							BgL_localz00_bglt BgL_envz00_958;

							{	/* Globalize/gloclo.scm 78 */
								BgL_localz00_bglt BgL_varz00_1006;

								BgL_varz00_1006 =
									BGl_makezd2localzd2svarz00zzast_localz00(CNST_TABLE_REF((
											(long) 1)),
									(BgL_typez00_bglt) (BGl_za2procedureza2z00zztype_cachez00));
								{	/* Globalize/gloclo.scm 79 */
									BgL_localz00_bglt BgL_obj3656z00_1007;

									BgL_obj3656z00_1007 = ((BgL_localz00_bglt) BgL_varz00_1006);
									{	/* Globalize/gloclo.scm 79 */
										obj_t BgL_auxz00_1756;

										BgL_objectz00_bglt BgL_auxz00_1754;

										BgL_auxz00_1756 =
											BGl_wideningzd2localzf2Ginfoz20zzglobaliza7e_ginfoza7((
												(bool_t) 0), ((bool_t) 0));
										BgL_auxz00_1754 =
											(BgL_objectz00_bglt) (BgL_obj3656z00_1007);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_1754, BgL_auxz00_1756);
									}
									BGL_OBJECT_CLASS_NUM_SET(
										(BgL_objectz00_bglt) (BgL_obj3656z00_1007),
										BGl_classzd2numzd2zz__objectz00
										(BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7));
									BgL_obj3656z00_1007;
								}
								BgL_envz00_958 = BgL_varz00_1006;
							}
							{	/* Globalize/gloclo.scm 78 */
								obj_t BgL_newzd2argszd2_959;

								{	/* Globalize/gloclo.scm 81 */
									obj_t BgL_l3666z00_978;

									{	/* Globalize/gloclo.scm 93 */
										bool_t BgL_testz00_1762;

										{	/* Globalize/gloclo.scm 93 */
											obj_t BgL_obj1955z00_1524;

											BgL_obj1955z00_1524 = (obj_t) (BgL_oldzd2funzd2_957);
											BgL_testz00_1762 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj1955z00_1524,
												BGl_sfunz00zzast_varz00);
										}
										if (BgL_testz00_1762)
											{
												BgL_sfunz00_bglt BgL_auxz00_1765;

												BgL_auxz00_1765 =
													(BgL_sfunz00_bglt) (BgL_oldzd2funzd2_957);
												BgL_l3666z00_978 =
													(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1765))->
													BgL_argsz00);
											}
										else
											{	/* Globalize/gloclo.scm 95 */
												bool_t BgL_testz00_1768;

												{	/* Globalize/gloclo.scm 95 */
													obj_t BgL_obj2019z00_1526;

													BgL_obj2019z00_1526 = (obj_t) (BgL_oldzd2funzd2_957);
													BgL_testz00_1768 =
														BGl_iszd2azf3z21zz__objectz00(BgL_obj2019z00_1526,
														BGl_cfunz00zzast_varz00);
												}
												if (BgL_testz00_1768)
													{
														BgL_cfunz00_bglt BgL_auxz00_1771;

														BgL_auxz00_1771 =
															(BgL_cfunz00_bglt) (BgL_oldzd2funzd2_957);
														BgL_l3666z00_978 =
															(((BgL_cfunz00_bglt) CREF(BgL_auxz00_1771))->
															BgL_argszd2typezd2);
													}
												else
													{	/* Globalize/gloclo.scm 95 */
														BgL_l3666z00_978 =
															BGl_internalzd2errorzd2zztools_errorz00
															(BGl_string3840z00zzglobaliza7e_globalzd2closurez75,
															BGl_string3841z00zzglobaliza7e_globalzd2closurez75,
															(obj_t) (BgL_oldzd2funzd2_957));
													}
											}
									}
									if (NULLP(BgL_l3666z00_978))
										{	/* Globalize/gloclo.scm 81 */
											BgL_newzd2argszd2_959 = BNIL;
										}
									else
										{	/* Globalize/gloclo.scm 81 */
											obj_t BgL_head3668z00_980;

											BgL_head3668z00_980 = MAKE_PAIR(BNIL, BNIL);
											{
												obj_t BgL_l3666z00_982;

												obj_t BgL_tail3669z00_983;

												BgL_l3666z00_982 = BgL_l3666z00_978;
												BgL_tail3669z00_983 = BgL_head3668z00_980;
											BgL_zc3anonymousza33708ze3z83_984:
												if (NULLP(BgL_l3666z00_982))
													{	/* Globalize/gloclo.scm 81 */
														BgL_newzd2argszd2_959 = CDR(BgL_head3668z00_980);
													}
												else
													{	/* Globalize/gloclo.scm 81 */
														obj_t BgL_newtail3670z00_986;

														{	/* Globalize/gloclo.scm 81 */
															BgL_localz00_bglt BgL_arg3711z00_988;

															{	/* Globalize/gloclo.scm 81 */
																obj_t BgL_oldz00_990;

																BgL_oldz00_990 = CAR(BgL_l3666z00_982);
																{	/* Globalize/gloclo.scm 82 */
																	BgL_localz00_bglt BgL_newz00_991;

																	{	/* Globalize/gloclo.scm 83 */
																		obj_t BgL_arg3719z00_1000;

																		if (BGl_iszd2azf3z21zz__objectz00
																			(BgL_oldz00_990,
																				BGl_localz00zzast_varz00))
																			{
																				BgL_variablez00_bglt BgL_auxz00_1785;

																				BgL_auxz00_1785 =
																					(BgL_variablez00_bglt) (
																					(BgL_localz00_bglt) (BgL_oldz00_990));
																				BgL_arg3719z00_1000 =
																					(((BgL_variablez00_bglt)
																						CREF(BgL_auxz00_1785))->BgL_idz00);
																			}
																		else
																			{	/* Globalize/gloclo.scm 85 */

																				{	/* Globalize/gloclo.scm 85 */

																					BgL_arg3719z00_1000 =
																						BGl_gensymz00zz__r4_symbols_6_4z00
																						(BFALSE);
																				}
																			}
																		BgL_newz00_991 =
																			BGl_makezd2localzd2svarz00zzast_localz00
																			(BgL_arg3719z00_1000,
																			(BgL_typez00_bglt)
																			(BGl_za2objza2z00zztype_cachez00));
																	}
																	if (BGl_iszd2azf3z21zz__objectz00
																		(BgL_oldz00_990, BGl_localz00zzast_varz00))
																		{	/* Globalize/gloclo.scm 89 */
																			bool_t BgL_arg3714z00_993;

																			{
																				BgL_localz00_bglt BgL_auxz00_1794;

																				BgL_auxz00_1794 =
																					(BgL_localz00_bglt) (BgL_oldz00_990);
																				BgL_arg3714z00_993 =
																					(((BgL_localz00_bglt)
																						CREF(BgL_auxz00_1794))->
																					BgL_userzf3zf3);
																			}
																			((((BgL_localz00_bglt)
																						CREF(BgL_newz00_991))->
																					BgL_userzf3zf3) =
																				((bool_t) BgL_arg3714z00_993), BUNSPEC);
																		}
																	else
																		{	/* Globalize/gloclo.scm 87 */
																			BFALSE;
																		}
																	{	/* Globalize/gloclo.scm 90 */
																		BgL_svarz00_bglt BgL_obj3657z00_994;

																		{
																			BgL_svarz00_bglt BgL_auxz00_1798;

																			{	/* Globalize/gloclo.scm 90 */
																				BgL_valuez00_bglt BgL_auxz00_1799;

																				{
																					BgL_variablez00_bglt BgL_auxz00_1800;

																					BgL_auxz00_1800 =
																						(BgL_variablez00_bglt)
																						(BgL_newz00_991);
																					BgL_auxz00_1799 =
																						(((BgL_variablez00_bglt)
																							CREF(BgL_auxz00_1800))->
																						BgL_valuez00);
																				}
																				BgL_auxz00_1798 =
																					(BgL_svarz00_bglt) (BgL_auxz00_1799);
																			}
																			BgL_obj3657z00_994 =
																				((BgL_svarz00_bglt) BgL_auxz00_1798);
																		}
																		{	/* Globalize/gloclo.scm 90 */
																			obj_t BgL_auxz00_1807;

																			BgL_objectz00_bglt BgL_auxz00_1805;

																			BgL_auxz00_1807 =
																				BGl_wideningzd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7
																				(((bool_t) 0), ((long) -10),
																				((long) -10), ((bool_t) 0));
																			BgL_auxz00_1805 =
																				(BgL_objectz00_bglt)
																				(BgL_obj3657z00_994);
																			BGL_OBJECT_WIDENING_SET(BgL_auxz00_1805,
																				BgL_auxz00_1807);
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			(BgL_objectz00_bglt) (BgL_obj3657z00_994),
																			BGl_classzd2numzd2zz__objectz00
																			(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7));
																		BgL_obj3657z00_994;
																	}
																	{	/* Globalize/gloclo.scm 91 */
																		BgL_localz00_bglt BgL_obj3658z00_997;

																		BgL_obj3658z00_997 =
																			((BgL_localz00_bglt) BgL_newz00_991);
																		{	/* Globalize/gloclo.scm 91 */
																			obj_t BgL_auxz00_1816;

																			BgL_objectz00_bglt BgL_auxz00_1814;

																			BgL_auxz00_1816 =
																				BGl_wideningzd2localzf2Ginfoz20zzglobaliza7e_ginfoza7
																				(((bool_t) 0), ((bool_t) 0));
																			BgL_auxz00_1814 =
																				(BgL_objectz00_bglt)
																				(BgL_obj3658z00_997);
																			BGL_OBJECT_WIDENING_SET(BgL_auxz00_1814,
																				BgL_auxz00_1816);
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			(BgL_objectz00_bglt) (BgL_obj3658z00_997),
																			BGl_classzd2numzd2zz__objectz00
																			(BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7));
																		BgL_obj3658z00_997;
																	}
																	BgL_arg3711z00_988 = BgL_newz00_991;
															}}
															BgL_newtail3670z00_986 =
																MAKE_PAIR((obj_t) (BgL_arg3711z00_988), BNIL);
														}
														SET_CDR(BgL_tail3669z00_983,
															BgL_newtail3670z00_986);
														{
															obj_t BgL_tail3669z00_1827;

															obj_t BgL_l3666z00_1825;

															BgL_l3666z00_1825 = CDR(BgL_l3666z00_982);
															BgL_tail3669z00_1827 = BgL_newtail3670z00_986;
															BgL_tail3669z00_983 = BgL_tail3669z00_1827;
															BgL_l3666z00_982 = BgL_l3666z00_1825;
															goto BgL_zc3anonymousza33708ze3z83_984;
														}
													}
											}
										}
								}
								{	/* Globalize/gloclo.scm 81 */
									obj_t BgL_locz00_960;

									{	/* Globalize/gloclo.scm 104 */
										bool_t BgL_testz00_1828;

										{	/* Globalize/gloclo.scm 104 */
											obj_t BgL_obj1955z00_1550;

											BgL_obj1955z00_1550 = (obj_t) (BgL_oldzd2funzd2_957);
											BgL_testz00_1828 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj1955z00_1550,
												BGl_sfunz00zzast_varz00);
										}
										if (BgL_testz00_1828)
											{	/* Globalize/gloclo.scm 105 */
												bool_t BgL_testz00_1831;

												{	/* Globalize/gloclo.scm 105 */
													bool_t BgL_testz00_1832;

													{	/* Globalize/gloclo.scm 105 */
														obj_t BgL_arg3706z00_977;

														{
															BgL_sfunz00_bglt BgL_auxz00_1833;

															BgL_auxz00_1833 =
																(BgL_sfunz00_bglt) (BgL_oldzd2funzd2_957);
															BgL_arg3706z00_977 =
																(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1833))->
																BgL_bodyz00);
														}
														BgL_testz00_1832 =
															BGl_iszd2azf3z21zz__objectz00(BgL_arg3706z00_977,
															BGl_nodez00zzast_nodez00);
													}
													if (BgL_testz00_1832)
														{	/* Globalize/gloclo.scm 106 */
															BgL_nodez00_bglt BgL_obj2091z00_1554;

															{	/* Globalize/gloclo.scm 106 */
																BgL_sfunz00_bglt BgL_obj1884z00_1553;

																BgL_obj1884z00_1553 =
																	(BgL_sfunz00_bglt) (BgL_oldzd2funzd2_957);
																BgL_obj2091z00_1554 =
																	(BgL_nodez00_bglt) (
																	(((BgL_sfunz00_bglt)
																			CREF(BgL_obj1884z00_1553))->BgL_bodyz00));
															}
															BgL_testz00_1831 =
																CBOOL(
																(((BgL_nodez00_bglt)
																		CREF(BgL_obj2091z00_1554))->BgL_locz00));
														}
													else
														{	/* Globalize/gloclo.scm 105 */
															BgL_testz00_1831 = ((bool_t) 0);
														}
												}
												if (BgL_testz00_1831)
													{	/* Globalize/gloclo.scm 107 */
														BgL_nodez00_bglt BgL_obj2091z00_1556;

														{	/* Globalize/gloclo.scm 107 */
															BgL_sfunz00_bglt BgL_obj1884z00_1555;

															BgL_obj1884z00_1555 =
																(BgL_sfunz00_bglt) (BgL_oldzd2funzd2_957);
															BgL_obj2091z00_1556 =
																(BgL_nodez00_bglt) (
																(((BgL_sfunz00_bglt)
																		CREF(BgL_obj1884z00_1555))->BgL_bodyz00));
														}
														BgL_locz00_960 =
															(((BgL_nodez00_bglt) CREF(BgL_obj2091z00_1556))->
															BgL_locz00);
													}
												else
													{
														BgL_sfunz00_bglt BgL_auxz00_1846;

														BgL_auxz00_1846 =
															(BgL_sfunz00_bglt) (BgL_oldzd2funzd2_957);
														BgL_locz00_960 =
															(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1846))->
															BgL_locz00);
													}
											}
										else
											{	/* Globalize/gloclo.scm 104 */
												BgL_locz00_960 = BFALSE;
											}
									}
									{	/* Globalize/gloclo.scm 104 */
										obj_t BgL_glocloz00_961;

										BgL_glocloz00_961 =
											BGl_glocloz00zzglobaliza7e_globalzd2closurez75
											(BgL_globalz00_5, BgL_envz00_958, BgL_newzd2argszd2_959);
										{	/* Globalize/gloclo.scm 109 */
											BgL_valuez00_bglt BgL_newzd2funzd2_962;

											{
												BgL_variablez00_bglt BgL_auxz00_1850;

												BgL_auxz00_1850 =
													(BgL_variablez00_bglt) (BgL_glocloz00_961);
												BgL_newzd2funzd2_962 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_1850))->
													BgL_valuez00);
											}
											{	/* Globalize/gloclo.scm 110 */

												{
													obj_t BgL_auxz00_1855;

													BgL_sfunz00_bglt BgL_auxz00_1853;

													BgL_auxz00_1855 = (obj_t) (BgL_globalz00_5);
													BgL_auxz00_1853 =
														(BgL_sfunz00_bglt) (BgL_newzd2funzd2_962);
													((((BgL_sfunz00_bglt) CREF(BgL_auxz00_1853))->
															BgL_thezd2closurezd2globalz00) =
														((obj_t) BgL_auxz00_1855), BUNSPEC);
												}
												{	/* Globalize/gloclo.scm 114 */
													BgL_svarz00_bglt BgL_obj3659z00_964;

													{
														BgL_svarz00_bglt BgL_auxz00_1858;

														{	/* Globalize/gloclo.scm 114 */
															BgL_valuez00_bglt BgL_auxz00_1859;

															{
																BgL_variablez00_bglt BgL_auxz00_1860;

																BgL_auxz00_1860 =
																	(BgL_variablez00_bglt) (BgL_envz00_958);
																BgL_auxz00_1859 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_1860))->BgL_valuez00);
															}
															BgL_auxz00_1858 =
																(BgL_svarz00_bglt) (BgL_auxz00_1859);
														}
														BgL_obj3659z00_964 =
															((BgL_svarz00_bglt) BgL_auxz00_1858);
													}
													{	/* Globalize/gloclo.scm 114 */
														obj_t BgL_auxz00_1867;

														BgL_objectz00_bglt BgL_auxz00_1865;

														BgL_auxz00_1867 =
															BGl_wideningzd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7
															(((bool_t) 0), ((long) -10), ((long) -10),
															((bool_t) 0));
														BgL_auxz00_1865 =
															(BgL_objectz00_bglt) (BgL_obj3659z00_964);
														BGL_OBJECT_WIDENING_SET(BgL_auxz00_1865,
															BgL_auxz00_1867);
													}
													BGL_OBJECT_CLASS_NUM_SET(
														(BgL_objectz00_bglt) (BgL_obj3659z00_964),
														BGl_classzd2numzd2zz__objectz00
														(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7));
													BgL_obj3659z00_964;
												}
												{	/* Globalize/gloclo.scm 116 */
													BgL_globalz00_bglt BgL_obj3660z00_967;

													BgL_obj3660z00_967 =
														((BgL_globalz00_bglt)
														(BgL_globalz00_bglt) (BgL_glocloz00_961));
													{	/* Globalize/gloclo.scm 116 */
														obj_t BgL_auxz00_1877;

														BgL_objectz00_bglt BgL_auxz00_1875;

														BgL_auxz00_1877 =
															BGl_wideningzd2globalzf2Ginfoz20zzglobaliza7e_ginfoza7
															(((bool_t) 1), BFALSE);
														BgL_auxz00_1875 =
															(BgL_objectz00_bglt) (BgL_obj3660z00_967);
														BGL_OBJECT_WIDENING_SET(BgL_auxz00_1875,
															BgL_auxz00_1877);
													}
													BGL_OBJECT_CLASS_NUM_SET(
														(BgL_objectz00_bglt) (BgL_obj3660z00_967),
														BGl_classzd2numzd2zz__objectz00
														(BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7));
													BgL_obj3660z00_967;
												}
												{	/* Globalize/gloclo.scm 118 */
													BgL_appz00_bglt BgL_arg3700z00_971;

													BgL_arg3700z00_971 =
														BGl_makezd2nooptzd2bodyz00zzglobaliza7e_globalzd2closurez75
														(BgL_locz00_960, BgL_globalz00_5,
														BgL_newzd2argszd2_959);
													{
														obj_t BgL_auxz00_1886;

														BgL_sfunz00_bglt BgL_auxz00_1884;

														BgL_auxz00_1886 = (obj_t) (BgL_arg3700z00_971);
														BgL_auxz00_1884 =
															(BgL_sfunz00_bglt) (BgL_newzd2funzd2_962);
														((((BgL_sfunz00_bglt) CREF(BgL_auxz00_1884))->
																BgL_bodyz00) =
															((obj_t) BgL_auxz00_1886), BUNSPEC);
												}}
												return BgL_glocloz00_961;
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



/* make-noopt-body */
	BgL_appz00_bglt
		BGl_makezd2nooptzd2bodyz00zzglobaliza7e_globalzd2closurez75(obj_t
		BgL_locz00_6, BgL_globalz00_bglt BgL_globalz00_7, obj_t BgL_newzd2argszd2_8)
	{
		AN_OBJECT;
		{	/* Globalize/gloclo.scm 127 */
			{	/* Globalize/gloclo.scm 128 */
				BgL_varz00_bglt BgL_arg3726z00_1011;

				obj_t BgL_arg3727z00_1012;

				BgL_arg3726z00_1011 =
					BGl_makezd2varzd2zzast_nodez00(BgL_locz00_6,
					(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00),
					(BgL_variablez00_bglt) (BgL_globalz00_7));
				if (NULLP(BgL_newzd2argszd2_8))
					{	/* Globalize/gloclo.scm 138 */
						BgL_arg3727z00_1012 = BNIL;
					}
				else
					{	/* Globalize/gloclo.scm 138 */
						obj_t BgL_head3673z00_1015;

						BgL_head3673z00_1015 = MAKE_PAIR(BNIL, BNIL);
						{
							obj_t BgL_l3671z00_1017;

							obj_t BgL_tail3674z00_1018;

							BgL_l3671z00_1017 = BgL_newzd2argszd2_8;
							BgL_tail3674z00_1018 = BgL_head3673z00_1015;
						BgL_zc3anonymousza33729ze3z83_1019:
							if (NULLP(BgL_l3671z00_1017))
								{	/* Globalize/gloclo.scm 138 */
									BgL_arg3727z00_1012 = CDR(BgL_head3673z00_1015);
								}
							else
								{	/* Globalize/gloclo.scm 138 */
									obj_t BgL_newtail3675z00_1021;

									{	/* Globalize/gloclo.scm 138 */
										BgL_varz00_bglt BgL_arg3732z00_1023;

										{	/* Globalize/gloclo.scm 138 */
											obj_t BgL_vz00_1025;

											BgL_vz00_1025 = CAR(BgL_l3671z00_1017);
											BgL_arg3732z00_1023 =
												BGl_makezd2varzd2zzast_nodez00(BgL_locz00_6,
												(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00),
												(BgL_variablez00_bglt) (BgL_vz00_1025));
										}
										BgL_newtail3675z00_1021 =
											MAKE_PAIR((obj_t) (BgL_arg3732z00_1023), BNIL);
									}
									SET_CDR(BgL_tail3674z00_1018, BgL_newtail3675z00_1021);
									{
										obj_t BgL_tail3674z00_1907;

										obj_t BgL_l3671z00_1905;

										BgL_l3671z00_1905 = CDR(BgL_l3671z00_1017);
										BgL_tail3674z00_1907 = BgL_newtail3675z00_1021;
										BgL_tail3674z00_1018 = BgL_tail3674z00_1907;
										BgL_l3671z00_1017 = BgL_l3671z00_1905;
										goto BgL_zc3anonymousza33729ze3z83_1019;
									}
								}
						}
					}
				return
					BGl_makezd2appzd2zzast_nodez00(BgL_locz00_6,
					(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00), BUNSPEC,
					BINT(((long) -1)), BgL_arg3726z00_1011, BgL_arg3727z00_1012);
		}}
	}



/* foreign-closures */
	BGL_EXPORTED_DEF obj_t
		BGl_foreignzd2closureszd2zzglobaliza7e_globalzd2closurez75()
	{
		AN_OBJECT;
		{	/* Globalize/gloclo.scm 153 */
			{	/* Globalize/gloclo.scm 154 */
				obj_t BgL_resz00_1027;

				BgL_resz00_1027 =
					BGl_za2foreignzd2closuresza2zd2zzglobaliza7e_globalzd2closurez75;
				BGl_za2foreignzd2closuresza2zd2zzglobaliza7e_globalzd2closurez75 = BNIL;
				return BgL_resz00_1027;
			}
		}
	}



/* _foreign-closures */
	obj_t BGl__foreignzd2closureszd2zzglobaliza7e_globalzd2closurez75(obj_t
		BgL_envz00_1634)
	{
		AN_OBJECT;
		{	/* Globalize/gloclo.scm 153 */
			return BGl_foreignzd2closureszd2zzglobaliza7e_globalzd2closurez75();
		}
	}



/* gloclo */
	obj_t BGl_glocloz00zzglobaliza7e_globalzd2closurez75(BgL_globalz00_bglt
		BgL_globalz00_9, BgL_localz00_bglt BgL_envz00_10, obj_t BgL_argsz00_11)
	{
		AN_OBJECT;
		{	/* Globalize/gloclo.scm 161 */
			{	/* Globalize/gloclo.scm 162 */
				int BgL_arityz00_1028;

				{	/* Globalize/gloclo.scm 162 */
					BgL_valuez00_bglt BgL_arg3764z00_1060;

					{
						BgL_variablez00_bglt BgL_auxz00_1912;

						BgL_auxz00_1912 = (BgL_variablez00_bglt) (BgL_globalz00_9);
						BgL_arg3764z00_1060 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_1912))->BgL_valuez00);
					}
					BgL_arityz00_1028 =
						BGl_funzd2optionalzd2arityz00zzast_varz00(
						(BgL_funz00_bglt) (BgL_arg3764z00_1060));
				}
				{	/* Globalize/gloclo.scm 162 */
					obj_t BgL_idz00_1029;

					{	/* Globalize/gloclo.scm 163 */
						obj_t BgL_strz00_1042;

						{	/* Globalize/gloclo.scm 163 */
							obj_t BgL_arg3762z00_1058;

							{	/* Globalize/gloclo.scm 165 */
								obj_t BgL_arg3763z00_1059;

								{
									BgL_variablez00_bglt BgL_auxz00_1917;

									BgL_auxz00_1917 = (BgL_variablez00_bglt) (BgL_globalz00_9);
									BgL_arg3763z00_1059 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_1917))->BgL_idz00);
								}
								{	/* Globalize/gloclo.scm 165 */
									obj_t BgL_res3835z00_1584;

									{	/* Globalize/gloclo.scm 165 */
										obj_t BgL_arg2063z00_1583;

										BgL_arg2063z00_1583 = SYMBOL_TO_STRING(BgL_arg3763z00_1059);
										BgL_res3835z00_1584 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_1583);
									}
									BgL_arg3762z00_1058 = BgL_res3835z00_1584;
							}}
							BgL_strz00_1042 =
								string_append
								(BGl_string3842z00zzglobaliza7e_globalzd2closurez75,
								BgL_arg3762z00_1058);
						}
						if (symbol_exists_p(BSTRING_TO_STRING(BgL_strz00_1042)))
							{	/* Globalize/gloclo.scm 167 */
								obj_t BgL_arg3748z00_1044;

								{	/* Globalize/gloclo.scm 167 */
									obj_t BgL_arg3749z00_1045;

									{	/* Globalize/gloclo.scm 167 */
										obj_t BgL_arg3750z00_1046;

										obj_t BgL_arg3751z00_1047;

										{	/* Globalize/gloclo.scm 167 */
											obj_t BgL_res3836z00_1587;

											{	/* Globalize/gloclo.scm 167 */
												obj_t BgL_symbolz00_1585;

												BgL_symbolz00_1585 = CNST_TABLE_REF(((long) 0));
												{	/* Globalize/gloclo.scm 167 */
													obj_t BgL_arg2063z00_1586;

													BgL_arg2063z00_1586 =
														SYMBOL_TO_STRING(BgL_symbolz00_1585);
													BgL_res3836z00_1587 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg2063z00_1586);
											}}
											BgL_arg3750z00_1046 = BgL_res3836z00_1587;
										}
										{	/* Globalize/gloclo.scm 167 */
											obj_t BgL_arg3754z00_1050;

											{
												BgL_variablez00_bglt BgL_auxz00_1929;

												BgL_auxz00_1929 =
													(BgL_variablez00_bglt) (BgL_globalz00_9);
												BgL_arg3754z00_1050 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_1929))->
													BgL_idz00);
											}
											{	/* Globalize/gloclo.scm 167 */
												obj_t BgL_res3837z00_1591;

												{	/* Globalize/gloclo.scm 167 */
													obj_t BgL_arg2063z00_1590;

													BgL_arg2063z00_1590 =
														SYMBOL_TO_STRING(BgL_arg3754z00_1050);
													BgL_res3837z00_1591 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg2063z00_1590);
												}
												BgL_arg3751z00_1047 = BgL_res3837z00_1591;
										}}
										{	/* Globalize/gloclo.scm 167 */
											obj_t BgL_list3752z00_1048;

											{	/* Globalize/gloclo.scm 167 */
												obj_t BgL_arg3753z00_1049;

												BgL_arg3753z00_1049 =
													MAKE_PAIR(BgL_arg3751z00_1047, BNIL);
												BgL_list3752z00_1048 =
													MAKE_PAIR(BgL_arg3750z00_1046, BgL_arg3753z00_1049);
											}
											BgL_arg3749z00_1045 =
												BGl_stringzd2appendzd2zz__r4_strings_6_7z00
												(BgL_list3752z00_1048);
									}}
									BgL_arg3748z00_1044 =
										string_to_symbol(BSTRING_TO_STRING(BgL_arg3749z00_1045));
								}
								BgL_idz00_1029 =
									BGl_gensymz00zz__r4_symbols_6_4z00(BgL_arg3748z00_1044);
							}
						else
							{	/* Globalize/gloclo.scm 168 */
								obj_t BgL_arg3755z00_1051;

								{	/* Globalize/gloclo.scm 168 */
									obj_t BgL_arg3756z00_1052;

									obj_t BgL_arg3757z00_1053;

									{	/* Globalize/gloclo.scm 168 */
										obj_t BgL_res3838z00_1595;

										{	/* Globalize/gloclo.scm 168 */
											obj_t BgL_symbolz00_1593;

											BgL_symbolz00_1593 = CNST_TABLE_REF(((long) 0));
											{	/* Globalize/gloclo.scm 168 */
												obj_t BgL_arg2063z00_1594;

												BgL_arg2063z00_1594 =
													SYMBOL_TO_STRING(BgL_symbolz00_1593);
												BgL_res3838z00_1595 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg2063z00_1594);
										}}
										BgL_arg3756z00_1052 = BgL_res3838z00_1595;
									}
									{	/* Globalize/gloclo.scm 168 */
										obj_t BgL_arg3760z00_1056;

										{
											BgL_variablez00_bglt BgL_auxz00_1943;

											BgL_auxz00_1943 =
												(BgL_variablez00_bglt) (BgL_globalz00_9);
											BgL_arg3760z00_1056 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_1943))->
												BgL_idz00);
										}
										{	/* Globalize/gloclo.scm 168 */
											obj_t BgL_res3839z00_1599;

											{	/* Globalize/gloclo.scm 168 */
												obj_t BgL_arg2063z00_1598;

												BgL_arg2063z00_1598 =
													SYMBOL_TO_STRING(BgL_arg3760z00_1056);
												BgL_res3839z00_1599 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg2063z00_1598);
											}
											BgL_arg3757z00_1053 = BgL_res3839z00_1599;
									}}
									{	/* Globalize/gloclo.scm 168 */
										obj_t BgL_list3758z00_1054;

										{	/* Globalize/gloclo.scm 168 */
											obj_t BgL_arg3759z00_1055;

											BgL_arg3759z00_1055 =
												MAKE_PAIR(BgL_arg3757z00_1053, BNIL);
											BgL_list3758z00_1054 =
												MAKE_PAIR(BgL_arg3756z00_1052, BgL_arg3759z00_1055);
										}
										BgL_arg3755z00_1051 =
											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
											(BgL_list3758z00_1054);
								}}
								BgL_idz00_1029 =
									string_to_symbol(BSTRING_TO_STRING(BgL_arg3755z00_1051));
					}}
					{	/* Globalize/gloclo.scm 163 */
						BgL_globalz00_bglt BgL_glocloz00_1030;

						{	/* Globalize/gloclo.scm 169 */
							obj_t BgL_arg3734z00_1031;

							obj_t BgL_arg3735z00_1032;

							obj_t BgL_arg3736z00_1033;

							obj_t BgL_arg3737z00_1034;

							obj_t BgL_arg3738z00_1035;

							obj_t BgL_arg3739z00_1036;

							obj_t BgL_arg3740z00_1037;

							BgL_arg3734z00_1031 =
								BGl_makezd2typedzd2identz00zzast_identz00(BgL_idz00_1029,
								CNST_TABLE_REF(((long) 2)));
							BgL_arg3735z00_1032 =
								BGl_makezd2nzd2protoz00zztools_argsz00
								(BGl_zb2zd2arityz60zztools_argsz00(BINT(BgL_arityz00_1028),
									BINT(((long) 1))));
							BgL_arg3736z00_1033 =
								MAKE_PAIR((obj_t) (BgL_envz00_10), BgL_argsz00_11);
							if (((((BgL_globalz00_bglt) CREF(BgL_globalz00_9))->
										BgL_importz00) == CNST_TABLE_REF(((long) 3))))
								{	/* Globalize/gloclo.scm 172 */
									BgL_arg3737z00_1034 = BGl_za2moduleza2z00zzmodule_modulez00;
								}
							else
								{	/* Globalize/gloclo.scm 172 */
									BgL_arg3737z00_1034 =
										(((BgL_globalz00_bglt) CREF(BgL_globalz00_9))->
										BgL_modulez00);
								}
							BgL_arg3738z00_1035 =
								(((BgL_globalz00_bglt) CREF(BgL_globalz00_9))->BgL_importz00);
							BgL_arg3739z00_1036 = CNST_TABLE_REF(((long) 4));
							BgL_arg3740z00_1037 = CNST_TABLE_REF(((long) 5));
							BgL_glocloz00_1030 =
								BGl_defzd2globalzd2sfunzd2nozd2warningz12z12zzast_glozd2defzd2
								(BgL_arg3734z00_1031, BgL_arg3735z00_1032, BgL_arg3736z00_1033,
								BgL_arg3737z00_1034, BgL_arg3738z00_1035, BgL_arg3739z00_1036,
								BgL_arg3740z00_1037, BUNSPEC);
						}
						{	/* Globalize/gloclo.scm 169 */

							return
								BGl_fillzd2glocloz12zc0zzglobaliza7e_globalzd2closurez75
								(BgL_globalz00_9, BgL_glocloz00_1030);
						}
					}
				}
			}
		}
	}



/* fill-gloclo! */
	obj_t
		BGl_fillzd2glocloz12zc0zzglobaliza7e_globalzd2closurez75(BgL_globalz00_bglt
		BgL_globalz00_12, BgL_globalz00_bglt BgL_glocloz00_13)
	{
		AN_OBJECT;
		{	/* Globalize/gloclo.scm 184 */
			{	/* Globalize/gloclo.scm 185 */
				BgL_globalzf2ginfozf2_bglt BgL_obj3603z00_1604;

				obj_t BgL_val3602z00_1605;

				BgL_obj3603z00_1604 = (BgL_globalzf2ginfozf2_bglt) (BgL_globalz00_12);
				BgL_val3602z00_1605 = (obj_t) (BgL_glocloz00_13);
				{
					obj_t BgL_auxz00_1973;

					{	/* Globalize/gloclo.scm 185 */
						BgL_objectz00_bglt BgL_auxz00_1974;

						BgL_auxz00_1974 = (BgL_objectz00_bglt) (BgL_obj3603z00_1604);
						BgL_auxz00_1973 = BGL_OBJECT_WIDENING(BgL_auxz00_1974);
					}
					((((BgL_globalzf2ginfozf2_bglt) CREF(BgL_auxz00_1973))->
							BgL_globalzd2closurezd2) =
						((obj_t) BgL_val3602z00_1605), BUNSPEC);
				}
			}
			{	/* Globalize/gloclo.scm 188 */
				bool_t BgL_testz00_1978;

				{	/* Globalize/gloclo.scm 188 */
					BgL_valuez00_bglt BgL_arg3769z00_1065;

					{
						BgL_variablez00_bglt BgL_auxz00_1979;

						BgL_auxz00_1979 = (BgL_variablez00_bglt) (BgL_globalz00_12);
						BgL_arg3769z00_1065 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_1979))->BgL_valuez00);
					}
					{	/* Globalize/gloclo.scm 188 */
						obj_t BgL_obj1955z00_1607;

						BgL_obj1955z00_1607 = (obj_t) (BgL_arg3769z00_1065);
						BgL_testz00_1978 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj1955z00_1607,
							BGl_sfunz00zzast_varz00);
					}
				}
				if (BgL_testz00_1978)
					{	/* Globalize/gloclo.scm 189 */
						BgL_valuez00_bglt BgL_arg3766z00_1062;

						obj_t BgL_arg3767z00_1063;

						{
							BgL_variablez00_bglt BgL_auxz00_1984;

							BgL_auxz00_1984 = (BgL_variablez00_bglt) (BgL_glocloz00_13);
							BgL_arg3766z00_1062 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_1984))->BgL_valuez00);
						}
						{	/* Globalize/gloclo.scm 190 */
							BgL_sfunz00_bglt BgL_obj1893z00_1610;

							{	/* Globalize/gloclo.scm 190 */
								BgL_variablez00_bglt BgL_obj1611z00_1609;

								BgL_obj1611z00_1609 = (BgL_variablez00_bglt) (BgL_globalz00_12);
								BgL_obj1893z00_1610 =
									(BgL_sfunz00_bglt) (
									(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1609))->
										BgL_valuez00));
							}
							BgL_arg3767z00_1063 =
								(((BgL_sfunz00_bglt) CREF(BgL_obj1893z00_1610))->BgL_locz00);
						}
						{
							BgL_sfunz00_bglt BgL_auxz00_1991;

							BgL_auxz00_1991 = (BgL_sfunz00_bglt) (BgL_arg3766z00_1062);
							((((BgL_sfunz00_bglt) CREF(BgL_auxz00_1991))->BgL_locz00) =
								((obj_t) BgL_arg3767z00_1063), BUNSPEC);
						}
					}
				else
					{	/* Globalize/gloclo.scm 188 */
						BFALSE;
					}
			}
			if (
				((((BgL_globalz00_bglt) CREF(BgL_globalz00_12))->BgL_importz00) ==
					CNST_TABLE_REF(((long) 3))))
				{	/* Globalize/gloclo.scm 199 */
					BGl_za2foreignzd2closuresza2zd2zzglobaliza7e_globalzd2closurez75 =
						MAKE_PAIR(
						(obj_t) (BgL_glocloz00_13),
						BGl_za2foreignzd2closuresza2zd2zzglobaliza7e_globalzd2closurez75);
					{	/* Globalize/gloclo.scm 202 */
						BgL_variablez00_bglt BgL_obj1622z00_1614;

						obj_t BgL_val1621z00_1615;

						BgL_obj1622z00_1614 = (BgL_variablez00_bglt) (BgL_glocloz00_13);
						BgL_val1621z00_1615 = CNST_TABLE_REF(((long) 6));
						((((BgL_variablez00_bglt) CREF(BgL_obj1622z00_1614))->
								BgL_removablez00) = ((obj_t) BgL_val1621z00_1615), BUNSPEC);
					}
					{	/* Globalize/gloclo.scm 203 */
						BgL_globalz00_bglt BgL_obj1681z00_1616;

						obj_t BgL_val1680z00_1617;

						BgL_obj1681z00_1616 = BgL_glocloz00_13;
						BgL_val1680z00_1617 = CNST_TABLE_REF(((long) 7));
						((((BgL_globalz00_bglt) CREF(BgL_obj1681z00_1616))->BgL_importz00) =
							((obj_t) BgL_val1680z00_1617), BUNSPEC);
				}}
			else
				{	/* Globalize/gloclo.scm 199 */
					if (
						((((BgL_globalz00_bglt) CREF(BgL_globalz00_12))->BgL_importz00) ==
							CNST_TABLE_REF(((long) 7))))
						{	/* Globalize/gloclo.scm 205 */
							BFALSE;
						}
					else
						{	/* Globalize/gloclo.scm 206 */
							BgL_variablez00_bglt BgL_obj1622z00_1619;

							obj_t BgL_val1621z00_1620;

							BgL_obj1622z00_1619 = (BgL_variablez00_bglt) (BgL_glocloz00_13);
							BgL_val1621z00_1620 = CNST_TABLE_REF(((long) 6));
							((((BgL_variablez00_bglt) CREF(BgL_obj1622z00_1619))->
									BgL_removablez00) = ((obj_t) BgL_val1621z00_1620), BUNSPEC);
						}
					{	/* Globalize/gloclo.scm 207 */
						BgL_globalz00_bglt BgL_obj1681z00_1621;

						obj_t BgL_val1680z00_1622;

						BgL_obj1681z00_1621 = BgL_glocloz00_13;
						BgL_val1680z00_1622 = CNST_TABLE_REF(((long) 7));
						((((BgL_globalz00_bglt) CREF(BgL_obj1681z00_1621))->BgL_importz00) =
							((obj_t) BgL_val1680z00_1622), BUNSPEC);
				}}
			{	/* Globalize/gloclo.scm 208 */
				BgL_valuez00_bglt BgL_arg3776z00_1072;

				obj_t BgL_arg3777z00_1073;

				{
					BgL_variablez00_bglt BgL_auxz00_2014;

					BgL_auxz00_2014 = (BgL_variablez00_bglt) (BgL_glocloz00_13);
					BgL_arg3776z00_1072 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_2014))->BgL_valuez00);
				}
				{	/* Globalize/gloclo.scm 209 */
					BgL_funz00_bglt BgL_obj1814z00_1625;

					{	/* Globalize/gloclo.scm 209 */
						BgL_variablez00_bglt BgL_obj1611z00_1624;

						BgL_obj1611z00_1624 = (BgL_variablez00_bglt) (BgL_globalz00_12);
						BgL_obj1814z00_1625 =
							(BgL_funz00_bglt) (
							(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1624))->
								BgL_valuez00));
					}
					BgL_arg3777z00_1073 =
						(((BgL_funz00_bglt) CREF(BgL_obj1814z00_1625))->
						BgL_sidezd2effectzf3z21);
				}
				{
					BgL_funz00_bglt BgL_auxz00_2021;

					BgL_auxz00_2021 = (BgL_funz00_bglt) (BgL_arg3776z00_1072);
					((((BgL_funz00_bglt) CREF(BgL_auxz00_2021))->
							BgL_sidezd2effectzf3z21) =
						((obj_t) BgL_arg3777z00_1073), BUNSPEC);
			}}
			{	/* Globalize/gloclo.scm 210 */
				bool_t BgL_testz00_2024;

				{	/* Globalize/gloclo.scm 210 */
					obj_t BgL_obj1751z00_1628;

					BgL_obj1751z00_1628 = (obj_t) (BgL_glocloz00_13);
					BgL_testz00_2024 =
						BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_1628,
						BGl_globalz00zzast_varz00);
				}
				if (BgL_testz00_2024)
					{	/* Globalize/gloclo.scm 210 */
						return (obj_t) (BgL_glocloz00_13);
					}
				else
					{	/* Globalize/gloclo.scm 210 */
						return
							BGl_internalzd2errorzd2zztools_errorz00
							(BGl_string3843z00zzglobaliza7e_globalzd2closurez75,
							BGl_string3844z00zzglobaliza7e_globalzd2closurez75,
							(obj_t) (BgL_glocloz00_13));
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzglobaliza7e_globalzd2closurez75()
	{
		AN_OBJECT;
		{	/* Globalize/gloclo.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzglobaliza7e_globalzd2closurez75()
	{
		AN_OBJECT;
		{	/* Globalize/gloclo.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_globalzd2closurez75()
	{
		AN_OBJECT;
		{	/* Globalize/gloclo.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3845z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3845z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 320731191),
				BSTRING_TO_STRING(BGl_string3845z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3845z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3845z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3845z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3845z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3845z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3845z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string3845z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string3845z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(((long) 189731515),
				BSTRING_TO_STRING(BGl_string3845z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string3845z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string3845z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(((long) 0),
				BSTRING_TO_STRING(BGl_string3845z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_nodeza7(((long) 157543843),
				BSTRING_TO_STRING(BGl_string3845z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_freeza7(((long) 242972228),
				BSTRING_TO_STRING(BGl_string3845z00zzglobaliza7e_globalzd2closurez75));
			return
				BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3845z00zzglobaliza7e_globalzd2closurez75));
		}
	}

#ifdef __cplusplus
}
#endif
