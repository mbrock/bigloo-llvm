/*===========================================================================*/
/*   (Globalize/loc2glo.scm)                                                 */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Globalize/loc2glo.scm)*/
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

	typedef struct BgL_letzd2funzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_localsz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
	}                   *BgL_letzd2funzd2_bglt;

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

	typedef struct BgL_sfunzf2ginfozf2_bgl
	{
		bool_t BgL_gzf3zf3;
		obj_t BgL_cfromz00;
		obj_t BgL_cfromza2za2;
		obj_t BgL_ctoz00;
		obj_t BgL_ctoza2za2;
		obj_t BgL_cfunctionz00;
		obj_t BgL_integratorz00;
		obj_t BgL_imarkz00;
		obj_t BgL_ownerz00;
		obj_t BgL_integratedz00;
		obj_t BgL_pluggedzd2inzd2;
		long BgL_markz00;
		obj_t BgL_freezd2markzd2;
		obj_t BgL_thezd2globalzd2;
		obj_t BgL_kapturedz00;
		obj_t BgL_newzd2bodyzd2;
		long BgL_bmarkz00;
		long BgL_umarkz00;
		obj_t BgL_freez00;
		obj_t BgL_boundz00;
	}                      *BgL_sfunzf2ginfozf2_bglt;

	typedef struct BgL_svarzf2ginfozf2_bgl
	{
		bool_t BgL_kapturedzf3zf3;
		long BgL_freezd2markzd2;
		long BgL_markz00;
		bool_t BgL_celledzf3zf3;
	}                      *BgL_svarzf2ginfozf2_bglt;

	typedef struct BgL_localzf2ginfozf2_bgl
	{
		bool_t BgL_escapezf3zf3;
		bool_t BgL_globaliza7edzf3z54;
	}                       *BgL_localzf2ginfozf2_bglt;

	typedef struct BgL_globalzf2ginfozf2_bgl
	{
		bool_t BgL_escapezf3zf3;
		obj_t BgL_globalzd2closurezd2;
	}                        *BgL_globalzf2ginfozf2_bglt;


	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	extern obj_t BGl_wideningzd2globalzf2Ginfoz20zzglobaliza7e_ginfoza7(bool_t,
		obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern BgL_appz00_bglt BGl_makezd2appzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_varz00_bglt, obj_t);
	static obj_t BGl_cnstzd2initzd2zzglobaliza7e_localzd2ze3globalz96();
	extern obj_t BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_localzd2ze3globalz96(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_freeza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_nodeza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern BgL_nodez00_bglt
		BGl_nodezd2globaliza7ez12z67zzglobaliza7e_nodeza7(BgL_nodez00_bglt,
		BgL_variablez00_bglt, obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern BgL_letzd2funzd2_bglt BGl_makezd2letzd2funz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, BgL_nodez00_bglt);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern BgL_sfunz00_bglt BGl_makezd2sfunzd2zzast_varz00(long, obj_t, obj_t,
		obj_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern BgL_globalz00_bglt
		BGl_defzd2globalzd2sfunzd2nozd2warningz12z12zzast_glozd2defzd2(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl__localzd2ze3globalz31zzglobaliza7e_localzd2ze3globalz96(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzglobaliza7e_localzd2ze3globalz96();
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_localzd2ze3globalz31zzglobaliza7e_localzd2ze3globalz96
		(BgL_localz00_bglt);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t
		BGl_requirezd2initializa7ationz75zzglobaliza7e_localzd2ze3globalz96 =
		BUNSPEC;
	extern obj_t BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7;
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_thezd2globalzd2zzglobaliza7e_localzd2ze3globalz96(BgL_localz00_bglt);
	static obj_t BGl_genericzd2initzd2zzglobaliza7e_localzd2ze3globalz96();
	static BgL_nodez00_bglt
		BGl_makezd2escapingzd2bodyz00zzglobaliza7e_localzd2ze3globalz96
		(BgL_localz00_bglt, BgL_globalz00_bglt, obj_t, obj_t, BgL_localz00_bglt,
		BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static BgL_globalz00_bglt
		BGl_fixzd2escapingzd2definitionz00zzglobaliza7e_localzd2ze3globalz96
		(BgL_globalz00_bglt, BgL_localz00_bglt, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_wideningzd2localzf2Ginfoz20zzglobaliza7e_ginfoza7(bool_t,
		bool_t);
	static obj_t
		BGl_importedzd2moduleszd2initz00zzglobaliza7e_localzd2ze3globalz96();
	static BgL_globalz00_bglt
		BGl_fixzd2nonzd2escapingzd2definitionzd2zzglobaliza7e_localzd2ze3globalz96
		(BgL_globalz00_bglt, BgL_localz00_bglt, obj_t, obj_t, obj_t);
	extern obj_t BGl_zb2zd2arityz60zztools_argsz00(obj_t, obj_t);
	extern obj_t BGl_wideningzd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7(bool_t,
		long, long, bool_t);
	extern obj_t BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7;
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	extern obj_t BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7;
	static obj_t BGl__thezd2globalzd2zzglobaliza7e_localzd2ze3globalz96(obj_t,
		obj_t);
	extern BgL_varz00_bglt BGl_makezd2varzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_variablez00_bglt);
	extern obj_t BGl_thezd2closurezd2zzglobaliza7e_freeza7(BgL_variablez00_bglt,
		obj_t);
	static obj_t BGl_defaultzd2typezd2zzglobaliza7e_localzd2ze3globalz96();
	extern obj_t BGl_wideningzd2sfunzf2Ginfoz20zzglobaliza7e_ginfoza7(bool_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, long,
		obj_t, obj_t, obj_t, obj_t, long, long, obj_t, obj_t);
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	extern BgL_letzd2varzd2_bglt BGl_makezd2letzd2varz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, BgL_nodez00_bglt, bool_t);
	static obj_t
		BGl_libraryzd2moduleszd2initz00zzglobaliza7e_localzd2ze3globalz96();
	static obj_t __cnst[7];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzd2ze3globalzd2envze3zzglobaliza7e_localzd2ze3globalz96,
		BgL_bgl__localza7d2za7e3glob3975z00,
		BGl__localzd2ze3globalz31zzglobaliza7e_localzd2ze3globalz96, 0L, BUNSPEC,
		1);
	      DEFINE_STRING(BGl_string3971z00zzglobaliza7e_localzd2ze3globalz96,
		BgL_bgl_string3971za700za7za7g3976za7, "globalize_local->global", 23);
	      DEFINE_STRING(BGl_string3972z00zzglobaliza7e_localzd2ze3globalz96,
		BgL_bgl_string3972za700za7za7g3977za7,
		"now sfun static _ value procedure-ref env ", 42);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_thezd2globalzd2envz00zzglobaliza7e_localzd2ze3globalz96,
		BgL_bgl__theza7d2globalza7d23978z00,
		BGl__thezd2globalzd2zzglobaliza7e_localzd2ze3globalz96, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_localzd2ze3globalz96(long
		BgL_checksumz00_1904, char *BgL_fromz00_1905)
	{
		AN_OBJECT;
		{
			if (CBOOL
				(BGl_requirezd2initializa7ationz75zzglobaliza7e_localzd2ze3globalz96))
				{
					BGl_requirezd2initializa7ationz75zzglobaliza7e_localzd2ze3globalz96 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzglobaliza7e_localzd2ze3globalz96();
					BGl_cnstzd2initzd2zzglobaliza7e_localzd2ze3globalz96();
					BGl_importedzd2moduleszd2initz00zzglobaliza7e_localzd2ze3globalz96();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_localzd2ze3globalz96()
	{
		AN_OBJECT;
		{	/* Globalize/loc2glo.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"globalize_local->global");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"globalize_local->global");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"globalize_local->global");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"globalize_local->global");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"globalize_local->global");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzglobaliza7e_localzd2ze3globalz96()
	{
		AN_OBJECT;
		{	/* Globalize/loc2glo.scm 15 */
			{	/* Globalize/loc2glo.scm 15 */
				obj_t BgL_cportz00_1892;

				BgL_cportz00_1892 =
					bgl_open_input_string
					(BGl_string3972z00zzglobaliza7e_localzd2ze3globalz96,
					(int) (((long) 0)));
				{
					long BgL_iz00_1893;

					BgL_iz00_1893 = ((long) 6);
				BgL_loopz00_1894:
					if ((BgL_iz00_1893 == ((long) -1)))
						{	/* Globalize/loc2glo.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Globalize/loc2glo.scm 15 */
							{	/* Globalize/loc2glo.scm 15 */
								obj_t BgL_arg3974z00_1896;

								{	/* Globalize/loc2glo.scm 15 */

									{	/* Globalize/loc2glo.scm 15 */
										obj_t BgL_locationz00_1898;

										BgL_locationz00_1898 = BBOOL(((bool_t) 0));
										{	/* Globalize/loc2glo.scm 15 */

											BgL_arg3974z00_1896 =
												BGl_readz00zz__readerz00(BgL_cportz00_1892,
												BgL_locationz00_1898);
										}
									}
								}
								{	/* Globalize/loc2glo.scm 15 */
									int BgL_auxz00_1923;

									BgL_auxz00_1923 = (int) (BgL_iz00_1893);
									CNST_TABLE_SET(BgL_auxz00_1923, BgL_arg3974z00_1896);
							}}
							{	/* Globalize/loc2glo.scm 15 */
								int BgL_auxz00_1899;

								BgL_auxz00_1899 = (int) ((BgL_iz00_1893 - ((long) 1)));
								{
									long BgL_iz00_1928;

									BgL_iz00_1928 = (long) (BgL_auxz00_1899);
									BgL_iz00_1893 = BgL_iz00_1928;
									goto BgL_loopz00_1894;
								}
							}
						}
				}
			}
		}
	}



/* default-type */
	obj_t BGl_defaultzd2typezd2zzglobaliza7e_localzd2ze3globalz96()
	{
		AN_OBJECT;
		{	/* Globalize/loc2glo.scm 38 */
			if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) < ((long) 2)))
				{	/* Globalize/loc2glo.scm 39 */
					return BGl_za2objza2z00zztype_cachez00;
				}
			else
				{	/* Globalize/loc2glo.scm 39 */
					return BGl_za2_za2z00zztype_cachez00;
				}
		}
	}



/* local->global */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_localzd2ze3globalz31zzglobaliza7e_localzd2ze3globalz96(BgL_localz00_bglt
		BgL_localz00_1)
	{
		AN_OBJECT;
		{	/* Globalize/loc2glo.scm 44 */
			{	/* Globalize/loc2glo.scm 48 */
				BgL_globalz00_bglt BgL_globalz00_940;

				BgL_globalz00_940 =
					BGl_thezd2globalzd2zzglobaliza7e_localzd2ze3globalz96(BgL_localz00_1);
				{	/* Globalize/loc2glo.scm 48 */
					obj_t BgL_argsz00_941;

					{	/* Globalize/loc2glo.scm 49 */
						BgL_sfunz00_bglt BgL_obj1903z00_1648;

						{	/* Globalize/loc2glo.scm 49 */
							BgL_variablez00_bglt BgL_obj1632z00_1647;

							BgL_obj1632z00_1647 = (BgL_variablez00_bglt) (BgL_localz00_1);
							BgL_obj1903z00_1648 =
								(BgL_sfunz00_bglt) (
								(((BgL_variablez00_bglt) CREF(BgL_obj1632z00_1647))->
									BgL_valuez00));
						}
						BgL_argsz00_941 =
							(((BgL_sfunz00_bglt) CREF(BgL_obj1903z00_1648))->BgL_argsz00);
					}
					{	/* Globalize/loc2glo.scm 49 */
						BgL_valuez00_bglt BgL_infoz00_942;

						{
							BgL_variablez00_bglt BgL_auxz00_1938;

							BgL_auxz00_1938 = (BgL_variablez00_bglt) (BgL_localz00_1);
							BgL_infoz00_942 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_1938))->BgL_valuez00);
						}
						{	/* Globalize/loc2glo.scm 50 */
							obj_t BgL_newzd2bodyzd2_943;

							{	/* Globalize/loc2glo.scm 51 */
								BgL_sfunzf2ginfozf2_bglt BgL_obj3401z00_1650;

								BgL_obj3401z00_1650 =
									(BgL_sfunzf2ginfozf2_bglt) (BgL_infoz00_942);
								{
									obj_t BgL_auxz00_1942;

									{	/* Globalize/loc2glo.scm 51 */
										BgL_objectz00_bglt BgL_auxz00_1943;

										BgL_auxz00_1943 =
											(BgL_objectz00_bglt) (BgL_obj3401z00_1650);
										BgL_auxz00_1942 = BGL_OBJECT_WIDENING(BgL_auxz00_1943);
									}
									BgL_newzd2bodyzd2_943 =
										(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_1942))->
										BgL_newzd2bodyzd2);
								}
							}
							{	/* Globalize/loc2glo.scm 51 */
								obj_t BgL_kapturedz00_944;

								{	/* Globalize/loc2glo.scm 52 */
									BgL_sfunzf2ginfozf2_bglt BgL_obj3398z00_1651;

									BgL_obj3398z00_1651 =
										(BgL_sfunzf2ginfozf2_bglt) (BgL_infoz00_942);
									{
										obj_t BgL_auxz00_1948;

										{	/* Globalize/loc2glo.scm 52 */
											BgL_objectz00_bglt BgL_auxz00_1949;

											BgL_auxz00_1949 =
												(BgL_objectz00_bglt) (BgL_obj3398z00_1651);
											BgL_auxz00_1948 = BGL_OBJECT_WIDENING(BgL_auxz00_1949);
										}
										BgL_kapturedz00_944 =
											(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_1948))->
											BgL_kapturedz00);
									}
								}
								{	/* Globalize/loc2glo.scm 52 */

									{	/* Globalize/loc2glo.scm 53 */
										bool_t BgL_testz00_1953;

										{	/* Globalize/loc2glo.scm 53 */
											BgL_localzf2ginfozf2_bglt BgL_obj3549z00_1652;

											BgL_obj3549z00_1652 =
												(BgL_localzf2ginfozf2_bglt) (BgL_localz00_1);
											{
												obj_t BgL_auxz00_1955;

												{	/* Globalize/loc2glo.scm 53 */
													BgL_objectz00_bglt BgL_auxz00_1956;

													BgL_auxz00_1956 =
														(BgL_objectz00_bglt) (BgL_obj3549z00_1652);
													BgL_auxz00_1955 =
														BGL_OBJECT_WIDENING(BgL_auxz00_1956);
												}
												BgL_testz00_1953 =
													(((BgL_localzf2ginfozf2_bglt) CREF(BgL_auxz00_1955))->
													BgL_escapezf3zf3);
											}
										}
										if (BgL_testz00_1953)
											{	/* Globalize/loc2glo.scm 53 */
												BGl_fixzd2escapingzd2definitionz00zzglobaliza7e_localzd2ze3globalz96
													(BgL_globalz00_940, BgL_localz00_1, BgL_argsz00_941,
													BgL_kapturedz00_944, BgL_newzd2bodyzd2_943);
											}
										else
											{	/* Globalize/loc2glo.scm 53 */
												BGl_fixzd2nonzd2escapingzd2definitionzd2zzglobaliza7e_localzd2ze3globalz96
													(BgL_globalz00_940, BgL_localz00_1, BgL_argsz00_941,
													BgL_kapturedz00_944, BgL_newzd2bodyzd2_943);
											}
									}
									return BgL_globalz00_940;
								}
							}
						}
					}
				}
			}
		}
	}



/* _local->global */
	obj_t BGl__localzd2ze3globalz31zzglobaliza7e_localzd2ze3globalz96(obj_t
		BgL_envz00_1888, obj_t BgL_localz00_1889)
	{
		AN_OBJECT;
		{	/* Globalize/loc2glo.scm 44 */
			return
				(obj_t) (BGl_localzd2ze3globalz31zzglobaliza7e_localzd2ze3globalz96(
					(BgL_localz00_bglt) (BgL_localz00_1889)));
		}
	}



/* fix-escaping-definition */
	BgL_globalz00_bglt
		BGl_fixzd2escapingzd2definitionz00zzglobaliza7e_localzd2ze3globalz96
		(BgL_globalz00_bglt BgL_globalz00_2, BgL_localz00_bglt BgL_localz00_3,
		obj_t BgL_argsz00_4, obj_t BgL_kapturedz00_5, obj_t BgL_bodyz00_6)
	{
		AN_OBJECT;
		{	/* Globalize/loc2glo.scm 61 */
			{	/* Globalize/loc2glo.scm 62 */
				BgL_localz00_bglt BgL_envz00_947;

				BgL_envz00_947 =
					BGl_makezd2localzd2svarz00zzast_localz00(CNST_TABLE_REF(((long) 0)),
					(BgL_typez00_bglt) (BGl_za2procedureza2z00zztype_cachez00));
				{	/* Globalize/loc2glo.scm 62 */
					obj_t BgL_newzd2freezd2_948;

					if (NULLP(BgL_kapturedz00_5))
						{	/* Globalize/loc2glo.scm 63 */
							BgL_newzd2freezd2_948 = BNIL;
						}
					else
						{	/* Globalize/loc2glo.scm 63 */
							obj_t BgL_head3687z00_1049;

							BgL_head3687z00_1049 = MAKE_PAIR(BNIL, BNIL);
							{
								obj_t BgL_l3685z00_1051;

								obj_t BgL_tail3688z00_1052;

								BgL_l3685z00_1051 = BgL_kapturedz00_5;
								BgL_tail3688z00_1052 = BgL_head3687z00_1049;
							BgL_zc3anonymousza33793ze3z83_1053:
								if (NULLP(BgL_l3685z00_1051))
									{	/* Globalize/loc2glo.scm 63 */
										BgL_newzd2freezd2_948 = CDR(BgL_head3687z00_1049);
									}
								else
									{	/* Globalize/loc2glo.scm 63 */
										obj_t BgL_newtail3689z00_1055;

										{	/* Globalize/loc2glo.scm 63 */
											BgL_localz00_bglt BgL_arg3796z00_1057;

											{	/* Globalize/loc2glo.scm 63 */
												obj_t BgL_oldz00_1059;

												BgL_oldz00_1059 = CAR(BgL_l3685z00_1051);
												{	/* Globalize/loc2glo.scm 64 */
													BgL_localz00_bglt BgL_newz00_1060;

													{	/* Globalize/loc2glo.scm 64 */
														obj_t BgL_arg3805z00_1069;

														obj_t BgL_arg3806z00_1070;

														{
															BgL_variablez00_bglt BgL_auxz00_1975;

															BgL_auxz00_1975 =
																(BgL_variablez00_bglt) (BgL_oldz00_1059);
															BgL_arg3805z00_1069 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_auxz00_1975))->BgL_idz00);
														}
														BgL_arg3806z00_1070 =
															BGl_defaultzd2typezd2zzglobaliza7e_localzd2ze3globalz96
															();
														BgL_newz00_1060 =
															BGl_makezd2localzd2svarz00zzast_localz00
															(BgL_arg3805z00_1069,
															(BgL_typez00_bglt) (BgL_arg3806z00_1070));
													}
													{	/* Globalize/loc2glo.scm 66 */
														bool_t BgL_arg3798z00_1061;

														{
															BgL_localz00_bglt BgL_auxz00_1981;

															BgL_auxz00_1981 =
																(BgL_localz00_bglt) (BgL_oldz00_1059);
															BgL_arg3798z00_1061 =
																(((BgL_localz00_bglt) CREF(BgL_auxz00_1981))->
																BgL_userzf3zf3);
														}
														((((BgL_localz00_bglt) CREF(BgL_newz00_1060))->
																BgL_userzf3zf3) =
															((bool_t) BgL_arg3798z00_1061), BUNSPEC);
													}
													{	/* Globalize/loc2glo.scm 67 */
														BgL_localz00_bglt BgL_obj3666z00_1062;

														BgL_obj3666z00_1062 =
															((BgL_localz00_bglt) BgL_newz00_1060);
														{	/* Globalize/loc2glo.scm 67 */
															obj_t BgL_auxz00_1988;

															BgL_objectz00_bglt BgL_auxz00_1986;

															BgL_auxz00_1988 =
																BGl_wideningzd2localzf2Ginfoz20zzglobaliza7e_ginfoza7
																(((bool_t) 0), ((bool_t) 0));
															BgL_auxz00_1986 =
																(BgL_objectz00_bglt) (BgL_obj3666z00_1062);
															BGL_OBJECT_WIDENING_SET(BgL_auxz00_1986,
																BgL_auxz00_1988);
														}
														BGL_OBJECT_CLASS_NUM_SET(
															(BgL_objectz00_bglt) (BgL_obj3666z00_1062),
															BGl_classzd2numzd2zz__objectz00
															(BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7));
														BgL_obj3666z00_1062;
													}
													{	/* Globalize/loc2glo.scm 68 */
														BgL_svarz00_bglt BgL_obj3667z00_1065;

														{
															BgL_svarz00_bglt BgL_auxz00_1994;

															{	/* Globalize/loc2glo.scm 68 */
																BgL_valuez00_bglt BgL_auxz00_1995;

																{
																	BgL_variablez00_bglt BgL_auxz00_1996;

																	BgL_auxz00_1996 =
																		(BgL_variablez00_bglt) (BgL_newz00_1060);
																	BgL_auxz00_1995 =
																		(((BgL_variablez00_bglt)
																			CREF(BgL_auxz00_1996))->BgL_valuez00);
																}
																BgL_auxz00_1994 =
																	(BgL_svarz00_bglt) (BgL_auxz00_1995);
															}
															BgL_obj3667z00_1065 =
																((BgL_svarz00_bglt) BgL_auxz00_1994);
														}
														{	/* Globalize/loc2glo.scm 68 */
															obj_t BgL_auxz00_2003;

															BgL_objectz00_bglt BgL_auxz00_2001;

															BgL_auxz00_2003 =
																BGl_wideningzd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7
																(((bool_t) 1), ((long) -10), ((long) -10),
																((bool_t) 0));
															BgL_auxz00_2001 =
																(BgL_objectz00_bglt) (BgL_obj3667z00_1065);
															BGL_OBJECT_WIDENING_SET(BgL_auxz00_2001,
																BgL_auxz00_2003);
														}
														BGL_OBJECT_CLASS_NUM_SET(
															(BgL_objectz00_bglt) (BgL_obj3667z00_1065),
															BGl_classzd2numzd2zz__objectz00
															(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7));
														BgL_obj3667z00_1065;
													}
													{	/* Globalize/loc2glo.scm 70 */
														obj_t BgL_arg3804z00_1068;

														{
															BgL_variablez00_bglt BgL_auxz00_2009;

															BgL_auxz00_2009 =
																(BgL_variablez00_bglt) (BgL_oldz00_1059);
															BgL_arg3804z00_1068 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_auxz00_2009))->BgL_accessz00);
														}
														{
															BgL_variablez00_bglt BgL_auxz00_2012;

															BgL_auxz00_2012 =
																(BgL_variablez00_bglt) (BgL_newz00_1060);
															((((BgL_variablez00_bglt) CREF(BgL_auxz00_2012))->
																	BgL_accessz00) =
																((obj_t) BgL_arg3804z00_1068), BUNSPEC);
													}}
													BgL_arg3796z00_1057 = BgL_newz00_1060;
											}}
											BgL_newtail3689z00_1055 =
												MAKE_PAIR((obj_t) (BgL_arg3796z00_1057), BNIL);
										}
										SET_CDR(BgL_tail3688z00_1052, BgL_newtail3689z00_1055);
										{
											obj_t BgL_tail3688z00_2020;

											obj_t BgL_l3685z00_2018;

											BgL_l3685z00_2018 = CDR(BgL_l3685z00_1051);
											BgL_tail3688z00_2020 = BgL_newtail3689z00_1055;
											BgL_tail3688z00_1052 = BgL_tail3688z00_2020;
											BgL_l3685z00_1051 = BgL_l3685z00_2018;
											goto BgL_zc3anonymousza33793ze3z83_1053;
										}
									}
							}
						}
					{	/* Globalize/loc2glo.scm 63 */
						obj_t BgL_newzd2argszd2_949;

						if (NULLP(BgL_argsz00_4))
							{	/* Globalize/loc2glo.scm 73 */
								BgL_newzd2argszd2_949 = BNIL;
							}
						else
							{	/* Globalize/loc2glo.scm 73 */
								obj_t BgL_head3692z00_1020;

								BgL_head3692z00_1020 = MAKE_PAIR(BNIL, BNIL);
								{
									obj_t BgL_l3690z00_1022;

									obj_t BgL_tail3693z00_1023;

									BgL_l3690z00_1022 = BgL_argsz00_4;
									BgL_tail3693z00_1023 = BgL_head3692z00_1020;
								BgL_zc3anonymousza33775ze3z83_1024:
									if (NULLP(BgL_l3690z00_1022))
										{	/* Globalize/loc2glo.scm 73 */
											BgL_newzd2argszd2_949 = CDR(BgL_head3692z00_1020);
										}
									else
										{	/* Globalize/loc2glo.scm 73 */
											obj_t BgL_newtail3694z00_1026;

											{	/* Globalize/loc2glo.scm 73 */
												BgL_localz00_bglt BgL_arg3778z00_1028;

												{	/* Globalize/loc2glo.scm 73 */
													obj_t BgL_oldz00_1030;

													BgL_oldz00_1030 = CAR(BgL_l3690z00_1022);
													{	/* Globalize/loc2glo.scm 74 */
														BgL_localz00_bglt BgL_newz00_1031;

														{	/* Globalize/loc2glo.scm 74 */
															obj_t BgL_arg3790z00_1044;

															obj_t BgL_arg3791z00_1045;

															{
																BgL_variablez00_bglt BgL_auxz00_2028;

																BgL_auxz00_2028 =
																	(BgL_variablez00_bglt) (BgL_oldz00_1030);
																BgL_arg3790z00_1044 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_2028))->BgL_idz00);
															}
															BgL_arg3791z00_1045 =
																BGl_defaultzd2typezd2zzglobaliza7e_localzd2ze3globalz96
																();
															BgL_newz00_1031 =
																BGl_makezd2localzd2svarz00zzast_localz00
																(BgL_arg3790z00_1044,
																(BgL_typez00_bglt) (BgL_arg3791z00_1045));
														}
														{	/* Globalize/loc2glo.scm 76 */
															bool_t BgL_arg3780z00_1032;

															{
																BgL_localz00_bglt BgL_auxz00_2034;

																BgL_auxz00_2034 =
																	(BgL_localz00_bglt) (BgL_oldz00_1030);
																BgL_arg3780z00_1032 =
																	(((BgL_localz00_bglt) CREF(BgL_auxz00_2034))->
																	BgL_userzf3zf3);
															}
															((((BgL_localz00_bglt) CREF(BgL_newz00_1031))->
																	BgL_userzf3zf3) =
																((bool_t) BgL_arg3780z00_1032), BUNSPEC);
														}
														{	/* Globalize/loc2glo.scm 77 */
															BgL_localz00_bglt BgL_obj3668z00_1033;

															BgL_obj3668z00_1033 =
																((BgL_localz00_bglt) BgL_newz00_1031);
															{	/* Globalize/loc2glo.scm 77 */
																obj_t BgL_auxz00_2041;

																BgL_objectz00_bglt BgL_auxz00_2039;

																BgL_auxz00_2041 =
																	BGl_wideningzd2localzf2Ginfoz20zzglobaliza7e_ginfoza7
																	(((bool_t) 0), ((bool_t) 0));
																BgL_auxz00_2039 =
																	(BgL_objectz00_bglt) (BgL_obj3668z00_1033);
																BGL_OBJECT_WIDENING_SET(BgL_auxz00_2039,
																	BgL_auxz00_2041);
															}
															BGL_OBJECT_CLASS_NUM_SET(
																(BgL_objectz00_bglt) (BgL_obj3668z00_1033),
																BGl_classzd2numzd2zz__objectz00
																(BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7));
															BgL_obj3668z00_1033;
														}
														{	/* Globalize/loc2glo.scm 78 */
															BgL_svarz00_bglt BgL_obj3669z00_1036;

															{
																BgL_svarz00_bglt BgL_auxz00_2047;

																{	/* Globalize/loc2glo.scm 78 */
																	BgL_valuez00_bglt BgL_auxz00_2048;

																	{
																		BgL_variablez00_bglt BgL_auxz00_2049;

																		BgL_auxz00_2049 =
																			(BgL_variablez00_bglt) (BgL_newz00_1031);
																		BgL_auxz00_2048 =
																			(((BgL_variablez00_bglt)
																				CREF(BgL_auxz00_2049))->BgL_valuez00);
																	}
																	BgL_auxz00_2047 =
																		(BgL_svarz00_bglt) (BgL_auxz00_2048);
																}
																BgL_obj3669z00_1036 =
																	((BgL_svarz00_bglt) BgL_auxz00_2047);
															}
															{	/* Globalize/loc2glo.scm 80 */
																obj_t BgL_arg3783z00_1037;

																{	/* Globalize/loc2glo.scm 80 */
																	bool_t BgL_arg3784z00_1038;

																	{	/* Globalize/loc2glo.scm 79 */
																		BgL_svarzf2ginfozf2_bglt
																			BgL_obj3478z00_1690;
																		{	/* Globalize/loc2glo.scm 80 */
																			BgL_variablez00_bglt BgL_obj1632z00_1689;

																			BgL_obj1632z00_1689 =
																				(BgL_variablez00_bglt)
																				(BgL_oldz00_1030);
																			BgL_obj3478z00_1690 =
																				(BgL_svarzf2ginfozf2_bglt) (((
																						(BgL_variablez00_bglt)
																						CREF(BgL_obj1632z00_1689))->
																					BgL_valuez00));
																		}
																		{
																			obj_t BgL_auxz00_2057;

																			{	/* Globalize/loc2glo.scm 79 */
																				BgL_objectz00_bglt BgL_auxz00_2058;

																				BgL_auxz00_2058 =
																					(BgL_objectz00_bglt)
																					(BgL_obj3478z00_1690);
																				BgL_auxz00_2057 =
																					BGL_OBJECT_WIDENING(BgL_auxz00_2058);
																			}
																			BgL_arg3784z00_1038 =
																				(((BgL_svarzf2ginfozf2_bglt)
																					CREF(BgL_auxz00_2057))->
																				BgL_kapturedzf3zf3);
																		}
																	}
																	BgL_arg3783z00_1037 =
																		BGl_wideningzd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7
																		(BgL_arg3784z00_1038, ((long) -10),
																		((long) -10), ((bool_t) 0));
																}
																{	/* Globalize/loc2glo.scm 78 */
																	BgL_objectz00_bglt BgL_auxz00_2063;

																	BgL_auxz00_2063 =
																		(BgL_objectz00_bglt) (BgL_obj3669z00_1036);
																	BGL_OBJECT_WIDENING_SET(BgL_auxz00_2063,
																		BgL_arg3783z00_1037);
															}}
															BGL_OBJECT_CLASS_NUM_SET(
																(BgL_objectz00_bglt) (BgL_obj3669z00_1036),
																BGl_classzd2numzd2zz__objectz00
																(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7));
															BgL_obj3669z00_1036;
														}
														{	/* Globalize/loc2glo.scm 81 */
															obj_t BgL_arg3789z00_1043;

															{
																BgL_variablez00_bglt BgL_auxz00_2069;

																BgL_auxz00_2069 =
																	(BgL_variablez00_bglt) (BgL_oldz00_1030);
																BgL_arg3789z00_1043 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_2069))->BgL_accessz00);
															}
															{
																BgL_variablez00_bglt BgL_auxz00_2072;

																BgL_auxz00_2072 =
																	(BgL_variablez00_bglt) (BgL_newz00_1031);
																((((BgL_variablez00_bglt)
																			CREF(BgL_auxz00_2072))->BgL_accessz00) =
																	((obj_t) BgL_arg3789z00_1043), BUNSPEC);
														}}
														BgL_arg3778z00_1028 = BgL_newz00_1031;
												}}
												BgL_newtail3694z00_1026 =
													MAKE_PAIR((obj_t) (BgL_arg3778z00_1028), BNIL);
											}
											SET_CDR(BgL_tail3693z00_1023, BgL_newtail3694z00_1026);
											{
												obj_t BgL_tail3693z00_2080;

												obj_t BgL_l3690z00_2078;

												BgL_l3690z00_2078 = CDR(BgL_l3690z00_1022);
												BgL_tail3693z00_2080 = BgL_newtail3694z00_1026;
												BgL_tail3693z00_1023 = BgL_tail3693z00_2080;
												BgL_l3690z00_1022 = BgL_l3690z00_2078;
												goto BgL_zc3anonymousza33775ze3z83_1024;
											}
										}
								}
							}
						{	/* Globalize/loc2glo.scm 73 */
							BgL_valuez00_bglt BgL_oldzd2funzd2_950;

							{
								BgL_variablez00_bglt BgL_auxz00_2081;

								BgL_auxz00_2081 = (BgL_variablez00_bglt) (BgL_localz00_3);
								BgL_oldzd2funzd2_950 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_2081))->
									BgL_valuez00);
							}
							{	/* Globalize/loc2glo.scm 84 */
								BgL_sfunz00_bglt BgL_newzd2funzd2_951;

								{	/* Globalize/loc2glo.scm 85 */
									BgL_sfunz00_bglt BgL_duplicated3670z00_997;

									BgL_duplicated3670z00_997 =
										(BgL_sfunz00_bglt) (BgL_oldzd2funzd2_950);
									{	/* Globalize/loc2glo.scm 86 */
										BgL_sfunz00_bglt BgL_new3671z00_998;

										{	/* Globalize/loc2glo.scm 86 */
											obj_t BgL_arg3755z00_999;

											obj_t BgL_arg3756z00_1000;

											obj_t BgL_arg3757z00_1001;

											obj_t BgL_arg3758z00_1002;

											bool_t BgL_arg3759z00_1003;

											obj_t BgL_arg3760z00_1004;

											obj_t BgL_arg3761z00_1005;

											obj_t BgL_arg3762z00_1006;

											obj_t BgL_arg3763z00_1007;

											obj_t BgL_arg3764z00_1008;

											obj_t BgL_arg3765z00_1009;

											obj_t BgL_arg3766z00_1010;

											obj_t BgL_arg3767z00_1011;

											obj_t BgL_arg3768z00_1012;

											obj_t BgL_arg3769z00_1013;

											obj_t BgL_arg3770z00_1014;

											obj_t BgL_arg3771z00_1015;

											{	/* Globalize/loc2glo.scm 86 */
												long BgL_arg3772z00_1016;

												{
													BgL_funz00_bglt BgL_auxz00_2085;

													BgL_auxz00_2085 =
														(BgL_funz00_bglt) (BgL_oldzd2funzd2_950);
													BgL_arg3772z00_1016 =
														(((BgL_funz00_bglt) CREF(BgL_auxz00_2085))->
														BgL_arityz00);
												}
												BgL_arg3755z00_999 =
													BGl_zb2zd2arityz60zztools_argsz00(BINT
													(BgL_arg3772z00_1016), BINT(((long) 1)));
											}
											{
												BgL_funz00_bglt BgL_auxz00_2091;

												BgL_auxz00_2091 =
													(BgL_funz00_bglt) (BgL_duplicated3670z00_997);
												BgL_arg3756z00_1000 =
													(((BgL_funz00_bglt) CREF(BgL_auxz00_2091))->
													BgL_sidezd2effectzf3z21);
											}
											{
												BgL_funz00_bglt BgL_auxz00_2094;

												BgL_auxz00_2094 =
													(BgL_funz00_bglt) (BgL_duplicated3670z00_997);
												BgL_arg3757z00_1001 =
													(((BgL_funz00_bglt) CREF(BgL_auxz00_2094))->
													BgL_predicatezd2ofzd2);
											}
											{
												BgL_funz00_bglt BgL_auxz00_2097;

												BgL_auxz00_2097 =
													(BgL_funz00_bglt) (BgL_duplicated3670z00_997);
												BgL_arg3758z00_1002 =
													(((BgL_funz00_bglt) CREF(BgL_auxz00_2097))->
													BgL_stackzd2allocatorzd2);
											}
											{
												BgL_funz00_bglt BgL_auxz00_2100;

												BgL_auxz00_2100 =
													(BgL_funz00_bglt) (BgL_duplicated3670z00_997);
												BgL_arg3759z00_1003 =
													(((BgL_funz00_bglt) CREF(BgL_auxz00_2100))->
													BgL_topzf3zf3);
											}
											{
												BgL_funz00_bglt BgL_auxz00_2103;

												BgL_auxz00_2103 =
													(BgL_funz00_bglt) (BgL_duplicated3670z00_997);
												BgL_arg3760z00_1004 =
													(((BgL_funz00_bglt) CREF(BgL_auxz00_2103))->
													BgL_thezd2closurezd2);
											}
											{
												BgL_funz00_bglt BgL_auxz00_2106;

												BgL_auxz00_2106 =
													(BgL_funz00_bglt) (BgL_duplicated3670z00_997);
												BgL_arg3761z00_1005 =
													(((BgL_funz00_bglt) CREF(BgL_auxz00_2106))->
													BgL_effectz00);
											}
											BgL_arg3762z00_1006 =
												(((BgL_sfunz00_bglt) CREF(BgL_duplicated3670z00_997))->
												BgL_propertyz00);
											BgL_arg3763z00_1007 =
												MAKE_PAIR((obj_t) (BgL_envz00_947),
												BgL_newzd2argszd2_949);
											BgL_arg3764z00_1008 =
												(((BgL_sfunz00_bglt) CREF(BgL_duplicated3670z00_997))->
												BgL_argszd2namezd2);
											BgL_arg3765z00_1009 =
												(((BgL_sfunz00_bglt) CREF(BgL_duplicated3670z00_997))->
												BgL_bodyz00);
											BgL_arg3766z00_1010 =
												(((BgL_sfunz00_bglt) CREF(BgL_duplicated3670z00_997))->
												BgL_classz00);
											BgL_arg3767z00_1011 =
												(((BgL_sfunz00_bglt) CREF(BgL_duplicated3670z00_997))->
												BgL_dssslzd2keywordszd2);
											BgL_arg3768z00_1012 =
												(((BgL_sfunz00_bglt) CREF(BgL_duplicated3670z00_997))->
												BgL_locz00);
											BgL_arg3769z00_1013 =
												(((BgL_sfunz00_bglt) CREF(BgL_duplicated3670z00_997))->
												BgL_optionalsz00);
											BgL_arg3770z00_1014 =
												(((BgL_sfunz00_bglt) CREF(BgL_duplicated3670z00_997))->
												BgL_keysz00);
											BgL_arg3771z00_1015 =
												(((BgL_sfunz00_bglt) CREF(BgL_duplicated3670z00_997))->
												BgL_thezd2closurezd2globalz00);
											BgL_new3671z00_998 =
												BGl_makezd2sfunzd2zzast_varz00((long)
												CINT(BgL_arg3755z00_999), BgL_arg3756z00_1000,
												BgL_arg3757z00_1001, BgL_arg3758z00_1002,
												BgL_arg3759z00_1003, BgL_arg3760z00_1004,
												BgL_arg3761z00_1005, BgL_arg3762z00_1006,
												BgL_arg3763z00_1007, BgL_arg3764z00_1008,
												BgL_arg3765z00_1009, BgL_arg3766z00_1010,
												BgL_arg3767z00_1011, BgL_arg3768z00_1012,
												BgL_arg3769z00_1013, BgL_arg3770z00_1014,
												BgL_arg3771z00_1015);
										}
										{	/* Globalize/loc2glo.scm 85 */

											BgL_newzd2funzd2_951 = BgL_new3671z00_998;
								}}}
								{	/* Globalize/loc2glo.scm 85 */

									{	/* Globalize/loc2glo.scm 89 */
										BgL_globalzf2ginfozf2_bglt BgL_obj3610z00_1718;

										bool_t BgL_val3609z00_1719;

										BgL_obj3610z00_1718 =
											(BgL_globalzf2ginfozf2_bglt) (BgL_globalz00_2);
										BgL_val3609z00_1719 = ((bool_t) 1);
										{
											obj_t BgL_auxz00_2123;

											{	/* Globalize/loc2glo.scm 89 */
												BgL_objectz00_bglt BgL_auxz00_2124;

												BgL_auxz00_2124 =
													(BgL_objectz00_bglt) (BgL_obj3610z00_1718);
												BgL_auxz00_2123 = BGL_OBJECT_WIDENING(BgL_auxz00_2124);
											}
											((((BgL_globalzf2ginfozf2_bglt) CREF(BgL_auxz00_2123))->
													BgL_escapezf3zf3) =
												((bool_t) BgL_val3609z00_1719), BUNSPEC);
									}}
									{	/* Globalize/loc2glo.scm 90 */
										BgL_sfunz00_bglt BgL_obj3672z00_952;

										BgL_obj3672z00_952 =
											((BgL_sfunz00_bglt) BgL_newzd2funzd2_951);
										{	/* Globalize/loc2glo.scm 90 */
											obj_t BgL_auxz00_2131;

											BgL_objectz00_bglt BgL_auxz00_2129;

											BgL_auxz00_2131 =
												BGl_wideningzd2sfunzf2Ginfoz20zzglobaliza7e_ginfoza7((
													(bool_t) 0), BNIL, BFALSE, BNIL, BFALSE, BNIL,
												BUNSPEC, BUNSPEC, BFALSE, BNIL, BNIL, ((long) -10),
												BNIL, BFALSE, BFALSE, BFALSE, ((long) -10),
												((long) -10), BUNSPEC, BNIL);
											BgL_auxz00_2129 =
												(BgL_objectz00_bglt) (BgL_obj3672z00_952);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_2129, BgL_auxz00_2131);
										}
										BGL_OBJECT_CLASS_NUM_SET(
											(BgL_objectz00_bglt) (BgL_obj3672z00_952),
											BGl_classzd2numzd2zz__objectz00
											(BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7));
										BgL_obj3672z00_952;
									}
									{	/* Globalize/loc2glo.scm 92 */
										BgL_svarz00_bglt BgL_obj3673z00_955;

										{
											BgL_svarz00_bglt BgL_auxz00_2137;

											{	/* Globalize/loc2glo.scm 92 */
												BgL_valuez00_bglt BgL_auxz00_2138;

												{
													BgL_variablez00_bglt BgL_auxz00_2139;

													BgL_auxz00_2139 =
														(BgL_variablez00_bglt) (BgL_envz00_947);
													BgL_auxz00_2138 =
														(((BgL_variablez00_bglt) CREF(BgL_auxz00_2139))->
														BgL_valuez00);
												}
												BgL_auxz00_2137 = (BgL_svarz00_bglt) (BgL_auxz00_2138);
											}
											BgL_obj3673z00_955 = ((BgL_svarz00_bglt) BgL_auxz00_2137);
										}
										{	/* Globalize/loc2glo.scm 92 */
											obj_t BgL_auxz00_2146;

											BgL_objectz00_bglt BgL_auxz00_2144;

											BgL_auxz00_2146 =
												BGl_wideningzd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7((
													(bool_t) 0), ((long) -10), ((long) -10),
												((bool_t) 0));
											BgL_auxz00_2144 =
												(BgL_objectz00_bglt) (BgL_obj3673z00_955);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_2144, BgL_auxz00_2146);
										}
										BGL_OBJECT_CLASS_NUM_SET(
											(BgL_objectz00_bglt) (BgL_obj3673z00_955),
											BGl_classzd2numzd2zz__objectz00
											(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7));
										BgL_obj3673z00_955;
									}
									{
										BgL_typez00_bglt BgL_auxz00_2154;

										BgL_variablez00_bglt BgL_auxz00_2152;

										BgL_auxz00_2154 =
											(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00);
										BgL_auxz00_2152 = (BgL_variablez00_bglt) (BgL_globalz00_2);
										((((BgL_variablez00_bglt) CREF(BgL_auxz00_2152))->
												BgL_typez00) =
											((BgL_typez00_bglt) BgL_auxz00_2154), BUNSPEC);
									}
									{	/* Globalize/loc2glo.scm 99 */
										obj_t BgL_g3697z00_958;

										{	/* Globalize/loc2glo.scm 100 */
											obj_t BgL_pairz00_1728;

											BgL_pairz00_1728 =
												(((BgL_sfunz00_bglt) CREF(BgL_newzd2funzd2_951))->
												BgL_argsz00);
											BgL_g3697z00_958 = CDR(BgL_pairz00_1728);
										}
										{
											obj_t BgL_l3695z00_960;

											BgL_l3695z00_960 = BgL_g3697z00_958;
										BgL_zc3anonymousza33731ze3z83_961:
											if (PAIRP(BgL_l3695z00_960))
												{	/* Globalize/loc2glo.scm 100 */
													{	/* Globalize/loc2glo.scm 99 */
														obj_t BgL_lz00_963;

														BgL_lz00_963 = CAR(BgL_l3695z00_960);
														{
															BgL_typez00_bglt BgL_auxz00_2164;

															BgL_variablez00_bglt BgL_auxz00_2162;

															BgL_auxz00_2164 =
																(BgL_typez00_bglt)
																(BGl_za2objza2z00zztype_cachez00);
															BgL_auxz00_2162 =
																(BgL_variablez00_bglt) (BgL_lz00_963);
															((((BgL_variablez00_bglt) CREF(BgL_auxz00_2162))->
																	BgL_typez00) =
																((BgL_typez00_bglt) BgL_auxz00_2164), BUNSPEC);
														}
													}
													{
														obj_t BgL_l3695z00_2167;

														BgL_l3695z00_2167 = CDR(BgL_l3695z00_960);
														BgL_l3695z00_960 = BgL_l3695z00_2167;
														goto BgL_zc3anonymousza33731ze3z83_961;
													}
												}
											else
												{	/* Globalize/loc2glo.scm 100 */
													((bool_t) 1);
												}
										}
									}
									{
										BgL_valuez00_bglt BgL_auxz00_2171;

										BgL_variablez00_bglt BgL_auxz00_2169;

										BgL_auxz00_2171 =
											(BgL_valuez00_bglt) (BgL_newzd2funzd2_951);
										BgL_auxz00_2169 = (BgL_variablez00_bglt) (BgL_globalz00_2);
										((((BgL_variablez00_bglt) CREF(BgL_auxz00_2169))->
												BgL_valuez00) =
											((BgL_valuez00_bglt) BgL_auxz00_2171), BUNSPEC);
									}
									{	/* Globalize/loc2glo.scm 111 */
										BgL_nodez00_bglt BgL_arg3735z00_967;

										{	/* Globalize/loc2glo.scm 111 */
											BgL_nodez00_bglt BgL_arg3736z00_968;

											{	/* Globalize/loc2glo.scm 111 */
												obj_t BgL_arg3737z00_969;

												{	/* Globalize/loc2glo.scm 111 */
													obj_t BgL_arg3738z00_970;

													obj_t BgL_arg3739z00_971;

													BgL_arg3738z00_970 =
														MAKE_PAIR(BGl_thezd2closurezd2zzglobaliza7e_freeza7(
															(BgL_variablez00_bglt) (BgL_localz00_3), BFALSE),
														(obj_t) (BgL_envz00_947));
													if (NULLP(BgL_kapturedz00_5))
														{	/* Globalize/loc2glo.scm 113 */
															BgL_arg3739z00_971 = BNIL;
														}
													else
														{	/* Globalize/loc2glo.scm 113 */
															obj_t BgL_head3700z00_976;

															{	/* Globalize/loc2glo.scm 113 */
																obj_t BgL_arg3751z00_993;

																BgL_arg3751z00_993 =
																	MAKE_PAIR(CAR(BgL_kapturedz00_5),
																	CAR(BgL_newzd2freezd2_948));
																BgL_head3700z00_976 =
																	MAKE_PAIR(BgL_arg3751z00_993, BNIL);
															}
															{	/* Globalize/loc2glo.scm 113 */
																obj_t BgL_g3704z00_977;

																obj_t BgL_g3705z00_978;

																BgL_g3704z00_977 = CDR(BgL_kapturedz00_5);
																BgL_g3705z00_978 = CDR(BgL_newzd2freezd2_948);
																{
																	obj_t BgL_ll3698z00_980;

																	obj_t BgL_ll3699z00_981;

																	obj_t BgL_tail3701z00_982;

																	BgL_ll3698z00_980 = BgL_g3704z00_977;
																	BgL_ll3699z00_981 = BgL_g3705z00_978;
																	BgL_tail3701z00_982 = BgL_head3700z00_976;
																BgL_zc3anonymousza33742ze3z83_983:
																	if (NULLP(BgL_ll3698z00_980))
																		{	/* Globalize/loc2glo.scm 113 */
																			BgL_arg3739z00_971 = BgL_head3700z00_976;
																		}
																	else
																		{	/* Globalize/loc2glo.scm 113 */
																			obj_t BgL_newtail3702z00_985;

																			{	/* Globalize/loc2glo.scm 113 */
																				obj_t BgL_arg3747z00_988;

																				BgL_arg3747z00_988 =
																					MAKE_PAIR(CAR(BgL_ll3698z00_980),
																					CAR(BgL_ll3699z00_981));
																				BgL_newtail3702z00_985 =
																					MAKE_PAIR(BgL_arg3747z00_988, BNIL);
																			}
																			SET_CDR(BgL_tail3701z00_982,
																				BgL_newtail3702z00_985);
																			{
																				obj_t BgL_tail3701z00_2197;

																				obj_t BgL_ll3699z00_2195;

																				obj_t BgL_ll3698z00_2193;

																				BgL_ll3698z00_2193 =
																					CDR(BgL_ll3698z00_980);
																				BgL_ll3699z00_2195 =
																					CDR(BgL_ll3699z00_981);
																				BgL_tail3701z00_2197 =
																					BgL_newtail3702z00_985;
																				BgL_tail3701z00_982 =
																					BgL_tail3701z00_2197;
																				BgL_ll3699z00_981 = BgL_ll3699z00_2195;
																				BgL_ll3698z00_980 = BgL_ll3698z00_2193;
																				goto BgL_zc3anonymousza33742ze3z83_983;
																			}
																		}
																}
															}
														}
													BgL_arg3737z00_969 =
														MAKE_PAIR(BgL_arg3738z00_970, BgL_arg3739z00_971);
												}
												BgL_arg3736z00_968 =
													BGl_nodezd2globaliza7ez12z67zzglobaliza7e_nodeza7(
													(BgL_nodez00_bglt) (BgL_bodyz00_6),
													(BgL_variablez00_bglt) (BgL_localz00_3),
													BgL_arg3737z00_969);
											}
											BgL_arg3735z00_967 =
												BGl_makezd2escapingzd2bodyz00zzglobaliza7e_localzd2ze3globalz96
												(BgL_localz00_3, BgL_globalz00_2, BgL_newzd2argszd2_949,
												BgL_newzd2freezd2_948, BgL_envz00_947,
												BgL_arg3736z00_968);
										}
										{
											obj_t BgL_auxz00_2203;

											BgL_auxz00_2203 = (obj_t) (BgL_arg3735z00_967);
											((((BgL_sfunz00_bglt) CREF(BgL_newzd2funzd2_951))->
													BgL_bodyz00) = ((obj_t) BgL_auxz00_2203), BUNSPEC);
										}
									}
									return BgL_globalz00_2;
								}
							}
						}
					}
				}
			}
		}
	}



/* make-escaping-body */
	BgL_nodez00_bglt
		BGl_makezd2escapingzd2bodyz00zzglobaliza7e_localzd2ze3globalz96
		(BgL_localz00_bglt BgL_localz00_7, BgL_globalz00_bglt BgL_globalz00_8,
		obj_t BgL_argsz00_9, obj_t BgL_kapturedz00_10,
		BgL_localz00_bglt BgL_envz00_11, BgL_nodez00_bglt BgL_bodyz00_12)
	{
		AN_OBJECT;
		{	/* Globalize/loc2glo.scm 121 */
			{	/* Globalize/loc2glo.scm 122 */
				obj_t BgL_stackz00_1072;

				obj_t BgL_locz00_1073;

				{	/* Globalize/loc2glo.scm 122 */
					obj_t BgL_list3838z00_1119;

					BgL_list3838z00_1119 = MAKE_PAIR((obj_t) (BgL_envz00_11), BNIL);
					BgL_stackz00_1072 = BgL_list3838z00_1119;
				}
				BgL_locz00_1073 =
					(((BgL_nodez00_bglt) CREF(BgL_bodyz00_12))->BgL_locz00);
				{	/* Globalize/loc2glo.scm 124 */
					BgL_valuez00_bglt BgL_arg3807z00_1074;

					{
						BgL_variablez00_bglt BgL_auxz00_2209;

						BgL_auxz00_2209 = (BgL_variablez00_bglt) (BgL_localz00_7);
						BgL_arg3807z00_1074 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_2209))->BgL_valuez00);
					}
					{
						obj_t BgL_auxz00_2214;

						BgL_sfunz00_bglt BgL_auxz00_2212;

						BgL_auxz00_2214 = (obj_t) (BgL_bodyz00_12);
						BgL_auxz00_2212 = (BgL_sfunz00_bglt) (BgL_arg3807z00_1074);
						((((BgL_sfunz00_bglt) CREF(BgL_auxz00_2212))->BgL_bodyz00) =
							((obj_t) BgL_auxz00_2214), BUNSPEC);
					}
				}
				{	/* Globalize/loc2glo.scm 125 */
					obj_t BgL_arg3809z00_1076;

					BgL_letzd2funzd2_bglt BgL_arg3810z00_1077;

					{
						obj_t BgL_kapturedz00_1080;

						long BgL_numz00_1081;

						obj_t BgL_resz00_1082;

						BgL_kapturedz00_1080 = BgL_kapturedz00_10;
						BgL_numz00_1081 = ((long) 0);
						BgL_resz00_1082 = BNIL;
					BgL_zc3anonymousza33811ze3z83_1083:
						if (NULLP(BgL_kapturedz00_1080))
							{	/* Globalize/loc2glo.scm 131 */
								BgL_arg3809z00_1076 = bgl_reverse_bang(BgL_resz00_1082);
							}
						else
							{	/* Globalize/loc2glo.scm 133 */
								obj_t BgL_arg3813z00_1085;

								long BgL_arg3814z00_1086;

								obj_t BgL_arg3815z00_1087;

								BgL_arg3813z00_1085 = CDR(BgL_kapturedz00_1080);
								BgL_arg3814z00_1086 = (BgL_numz00_1081 + ((long) 1));
								{	/* Globalize/loc2glo.scm 135 */
									obj_t BgL_arg3816z00_1088;

									{	/* Globalize/loc2glo.scm 135 */
										obj_t BgL_arg3817z00_1089;

										BgL_nodez00_bglt BgL_arg3818z00_1090;

										BgL_arg3817z00_1089 = CAR(BgL_kapturedz00_1080);
										{	/* Globalize/loc2glo.scm 137 */
											obj_t BgL_arg3819z00_1091;

											obj_t BgL_arg3820z00_1092;

											{	/* Globalize/loc2glo.scm 137 */
												obj_t BgL_arg3821z00_1093;

												obj_t BgL_arg3822z00_1094;

												BgL_arg3821z00_1093 = CNST_TABLE_REF(((long) 1));
												{	/* Globalize/loc2glo.scm 137 */
													obj_t BgL_list3823z00_1095;

													{	/* Globalize/loc2glo.scm 137 */
														obj_t BgL_arg3824z00_1096;

														BgL_arg3824z00_1096 = MAKE_PAIR(BNIL, BNIL);
														BgL_list3823z00_1095 =
															MAKE_PAIR(BINT(BgL_numz00_1081),
															BgL_arg3824z00_1096);
													}
													BgL_arg3822z00_1094 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(CNST_TABLE_REF(((long) 0)), BgL_list3823z00_1095);
												}
												BgL_arg3819z00_1091 =
													MAKE_PAIR(BgL_arg3821z00_1093, BgL_arg3822z00_1094);
											}
											BgL_arg3820z00_1092 = CNST_TABLE_REF(((long) 2));
											BgL_arg3818z00_1090 =
												BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg3819z00_1091,
												BgL_stackz00_1072, BgL_locz00_1073,
												BgL_arg3820z00_1092);
										}
										BgL_arg3816z00_1088 =
											MAKE_PAIR(BgL_arg3817z00_1089,
											(obj_t) (BgL_arg3818z00_1090));
									}
									BgL_arg3815z00_1087 =
										MAKE_PAIR(BgL_arg3816z00_1088, BgL_resz00_1082);
								}
								{
									obj_t BgL_resz00_2237;

									long BgL_numz00_2236;

									obj_t BgL_kapturedz00_2235;

									BgL_kapturedz00_2235 = BgL_arg3813z00_1085;
									BgL_numz00_2236 = BgL_arg3814z00_1086;
									BgL_resz00_2237 = BgL_arg3815z00_1087;
									BgL_resz00_1082 = BgL_resz00_2237;
									BgL_numz00_1081 = BgL_numz00_2236;
									BgL_kapturedz00_1080 = BgL_kapturedz00_2235;
									goto BgL_zc3anonymousza33811ze3z83_1083;
								}
							}
					}
					{	/* Globalize/loc2glo.scm 142 */
						obj_t BgL_arg3826z00_1099;

						BgL_appz00_bglt BgL_arg3827z00_1100;

						{	/* Globalize/loc2glo.scm 145 */
							obj_t BgL_list3828z00_1101;

							BgL_list3828z00_1101 = MAKE_PAIR((obj_t) (BgL_localz00_7), BNIL);
							BgL_arg3826z00_1099 = BgL_list3828z00_1101;
						}
						{	/* Globalize/loc2glo.scm 146 */
							BgL_varz00_bglt BgL_arg3830z00_1103;

							obj_t BgL_arg3831z00_1104;

							BgL_arg3830z00_1103 =
								BGl_makezd2varzd2zzast_nodez00(BgL_locz00_1073,
								(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00),
								(BgL_variablez00_bglt) (BgL_localz00_7));
							if (NULLP(BgL_argsz00_9))
								{	/* Globalize/loc2glo.scm 153 */
									BgL_arg3831z00_1104 = BNIL;
								}
							else
								{	/* Globalize/loc2glo.scm 153 */
									obj_t BgL_head3708z00_1107;

									BgL_head3708z00_1107 = MAKE_PAIR(BNIL, BNIL);
									{
										obj_t BgL_l3706z00_1109;

										obj_t BgL_tail3709z00_1110;

										BgL_l3706z00_1109 = BgL_argsz00_9;
										BgL_tail3709z00_1110 = BgL_head3708z00_1107;
									BgL_zc3anonymousza33833ze3z83_1111:
										if (NULLP(BgL_l3706z00_1109))
											{	/* Globalize/loc2glo.scm 153 */
												BgL_arg3831z00_1104 = CDR(BgL_head3708z00_1107);
											}
										else
											{	/* Globalize/loc2glo.scm 153 */
												obj_t BgL_newtail3710z00_1113;

												{	/* Globalize/loc2glo.scm 153 */
													BgL_varz00_bglt BgL_arg3836z00_1115;

													{	/* Globalize/loc2glo.scm 153 */
														obj_t BgL_vz00_1117;

														BgL_vz00_1117 = CAR(BgL_l3706z00_1109);
														BgL_arg3836z00_1115 =
															BGl_makezd2varzd2zzast_nodez00(BgL_locz00_1073,
															(BgL_typez00_bglt)
															(BGl_za2_za2z00zztype_cachez00),
															(BgL_variablez00_bglt) (BgL_vz00_1117));
													}
													BgL_newtail3710z00_1113 =
														MAKE_PAIR((obj_t) (BgL_arg3836z00_1115), BNIL);
												}
												SET_CDR(BgL_tail3709z00_1110, BgL_newtail3710z00_1113);
												{
													obj_t BgL_tail3709z00_2258;

													obj_t BgL_l3706z00_2256;

													BgL_l3706z00_2256 = CDR(BgL_l3706z00_1109);
													BgL_tail3709z00_2258 = BgL_newtail3710z00_1113;
													BgL_tail3709z00_1110 = BgL_tail3709z00_2258;
													BgL_l3706z00_1109 = BgL_l3706z00_2256;
													goto BgL_zc3anonymousza33833ze3z83_1111;
												}
											}
									}
								}
							BgL_arg3827z00_1100 =
								BGl_makezd2appzd2zzast_nodez00(BgL_locz00_1073,
								(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00), BUNSPEC,
								BINT(((long) -1)), BgL_arg3830z00_1103, BgL_arg3831z00_1104);
						}
						BgL_arg3810z00_1077 =
							BGl_makezd2letzd2funz00zzast_nodez00(BgL_locz00_1073,
							(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00), BUNSPEC,
							BINT(((long) -1)), BgL_arg3826z00_1099,
							(BgL_nodez00_bglt) (BgL_arg3827z00_1100));
					}
					return
						(BgL_nodez00_bglt) (BGl_makezd2letzd2varz00zzast_nodez00
						(BgL_locz00_1073,
							(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00), BUNSPEC,
							BINT(((long) -1)), BgL_arg3809z00_1076,
							(BgL_nodez00_bglt) (BgL_arg3810z00_1077), ((bool_t) 1)));
		}}}
	}



/* fix-non-escaping-definition */
	BgL_globalz00_bglt
		BGl_fixzd2nonzd2escapingzd2definitionzd2zzglobaliza7e_localzd2ze3globalz96
		(BgL_globalz00_bglt BgL_globalz00_13, BgL_localz00_bglt BgL_localz00_14,
		obj_t BgL_argsz00_15, obj_t BgL_kapturedz00_16, obj_t BgL_bodyz00_17)
	{
		AN_OBJECT;
		{	/* Globalize/loc2glo.scm 163 */
			{	/* Globalize/loc2glo.scm 164 */
				obj_t BgL_addzd2argszd2_1120;

				if (NULLP(BgL_kapturedz00_16))
					{	/* Globalize/loc2glo.scm 164 */
						BgL_addzd2argszd2_1120 = BNIL;
					}
				else
					{	/* Globalize/loc2glo.scm 164 */
						obj_t BgL_head3713z00_1176;

						BgL_head3713z00_1176 = MAKE_PAIR(BNIL, BNIL);
						{
							obj_t BgL_l3711z00_1178;

							obj_t BgL_tail3714z00_1179;

							BgL_l3711z00_1178 = BgL_kapturedz00_16;
							BgL_tail3714z00_1179 = BgL_head3713z00_1176;
						BgL_zc3anonymousza33878ze3z83_1180:
							if (NULLP(BgL_l3711z00_1178))
								{	/* Globalize/loc2glo.scm 164 */
									BgL_addzd2argszd2_1120 = CDR(BgL_head3713z00_1176);
								}
							else
								{	/* Globalize/loc2glo.scm 164 */
									obj_t BgL_newtail3715z00_1182;

									{	/* Globalize/loc2glo.scm 164 */
										BgL_localz00_bglt BgL_arg3881z00_1184;

										{	/* Globalize/loc2glo.scm 164 */
											obj_t BgL_oldz00_1186;

											BgL_oldz00_1186 = CAR(BgL_l3711z00_1178);
											{	/* Globalize/loc2glo.scm 165 */
												BgL_localz00_bglt BgL_newz00_1187;

												{	/* Globalize/loc2glo.scm 165 */
													obj_t BgL_arg3889z00_1196;

													obj_t BgL_arg3890z00_1197;

													{
														BgL_variablez00_bglt BgL_auxz00_2278;

														BgL_auxz00_2278 =
															(BgL_variablez00_bglt) (BgL_oldz00_1186);
														BgL_arg3889z00_1196 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_2278))->
															BgL_idz00);
													}
													BgL_arg3890z00_1197 =
														BGl_defaultzd2typezd2zzglobaliza7e_localzd2ze3globalz96
														();
													BgL_newz00_1187 =
														BGl_makezd2localzd2svarz00zzast_localz00
														(BgL_arg3889z00_1196,
														(BgL_typez00_bglt) (BgL_arg3890z00_1197));
												}
												{	/* Globalize/loc2glo.scm 167 */
													bool_t BgL_arg3883z00_1188;

													{
														BgL_localz00_bglt BgL_auxz00_2284;

														BgL_auxz00_2284 =
															(BgL_localz00_bglt) (BgL_oldz00_1186);
														BgL_arg3883z00_1188 =
															(((BgL_localz00_bglt) CREF(BgL_auxz00_2284))->
															BgL_userzf3zf3);
													}
													((((BgL_localz00_bglt) CREF(BgL_newz00_1187))->
															BgL_userzf3zf3) =
														((bool_t) BgL_arg3883z00_1188), BUNSPEC);
												}
												{	/* Globalize/loc2glo.scm 168 */
													BgL_localz00_bglt BgL_obj3680z00_1189;

													BgL_obj3680z00_1189 =
														((BgL_localz00_bglt) BgL_newz00_1187);
													{	/* Globalize/loc2glo.scm 168 */
														obj_t BgL_auxz00_2291;

														BgL_objectz00_bglt BgL_auxz00_2289;

														BgL_auxz00_2291 =
															BGl_wideningzd2localzf2Ginfoz20zzglobaliza7e_ginfoza7
															(((bool_t) 0), ((bool_t) 0));
														BgL_auxz00_2289 =
															(BgL_objectz00_bglt) (BgL_obj3680z00_1189);
														BGL_OBJECT_WIDENING_SET(BgL_auxz00_2289,
															BgL_auxz00_2291);
													}
													BGL_OBJECT_CLASS_NUM_SET(
														(BgL_objectz00_bglt) (BgL_obj3680z00_1189),
														BGl_classzd2numzd2zz__objectz00
														(BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7));
													BgL_obj3680z00_1189;
												}
												{	/* Globalize/loc2glo.scm 169 */
													BgL_svarz00_bglt BgL_obj3681z00_1192;

													{
														BgL_svarz00_bglt BgL_auxz00_2297;

														{	/* Globalize/loc2glo.scm 169 */
															BgL_valuez00_bglt BgL_auxz00_2298;

															{
																BgL_variablez00_bglt BgL_auxz00_2299;

																BgL_auxz00_2299 =
																	(BgL_variablez00_bglt) (BgL_newz00_1187);
																BgL_auxz00_2298 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_2299))->BgL_valuez00);
															}
															BgL_auxz00_2297 =
																(BgL_svarz00_bglt) (BgL_auxz00_2298);
														}
														BgL_obj3681z00_1192 =
															((BgL_svarz00_bglt) BgL_auxz00_2297);
													}
													{	/* Globalize/loc2glo.scm 169 */
														obj_t BgL_auxz00_2306;

														BgL_objectz00_bglt BgL_auxz00_2304;

														BgL_auxz00_2306 =
															BGl_wideningzd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7
															(((bool_t) 1), ((long) -10), ((long) -10),
															((bool_t) 0));
														BgL_auxz00_2304 =
															(BgL_objectz00_bglt) (BgL_obj3681z00_1192);
														BGL_OBJECT_WIDENING_SET(BgL_auxz00_2304,
															BgL_auxz00_2306);
													}
													BGL_OBJECT_CLASS_NUM_SET(
														(BgL_objectz00_bglt) (BgL_obj3681z00_1192),
														BGl_classzd2numzd2zz__objectz00
														(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7));
													BgL_obj3681z00_1192;
												}
												{	/* Globalize/loc2glo.scm 171 */
													obj_t BgL_arg3888z00_1195;

													{
														BgL_variablez00_bglt BgL_auxz00_2312;

														BgL_auxz00_2312 =
															(BgL_variablez00_bglt) (BgL_oldz00_1186);
														BgL_arg3888z00_1195 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_2312))->
															BgL_accessz00);
													}
													{
														BgL_variablez00_bglt BgL_auxz00_2315;

														BgL_auxz00_2315 =
															(BgL_variablez00_bglt) (BgL_newz00_1187);
														((((BgL_variablez00_bglt) CREF(BgL_auxz00_2315))->
																BgL_accessz00) =
															((obj_t) BgL_arg3888z00_1195), BUNSPEC);
												}}
												BgL_arg3881z00_1184 = BgL_newz00_1187;
										}}
										BgL_newtail3715z00_1182 =
											MAKE_PAIR((obj_t) (BgL_arg3881z00_1184), BNIL);
									}
									SET_CDR(BgL_tail3714z00_1179, BgL_newtail3715z00_1182);
									{
										obj_t BgL_tail3714z00_2323;

										obj_t BgL_l3711z00_2321;

										BgL_l3711z00_2321 = CDR(BgL_l3711z00_1178);
										BgL_tail3714z00_2323 = BgL_newtail3715z00_1182;
										BgL_tail3714z00_1179 = BgL_tail3714z00_2323;
										BgL_l3711z00_1178 = BgL_l3711z00_2321;
										goto BgL_zc3anonymousza33878ze3z83_1180;
									}
								}
						}
					}
				{	/* Globalize/loc2glo.scm 164 */
					BgL_valuez00_bglt BgL_oldzd2funzd2_1121;

					{
						BgL_variablez00_bglt BgL_auxz00_2324;

						BgL_auxz00_2324 = (BgL_variablez00_bglt) (BgL_localz00_14);
						BgL_oldzd2funzd2_1121 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_2324))->BgL_valuez00);
					}
					{	/* Globalize/loc2glo.scm 174 */
						BgL_sfunz00_bglt BgL_newzd2funzd2_1122;

						{	/* Globalize/loc2glo.scm 175 */
							BgL_sfunz00_bglt BgL_duplicated3682z00_1152;

							BgL_duplicated3682z00_1152 =
								(BgL_sfunz00_bglt) (BgL_oldzd2funzd2_1121);
							{	/* Globalize/loc2glo.scm 176 */
								BgL_sfunz00_bglt BgL_new3683z00_1153;

								{	/* Globalize/loc2glo.scm 176 */
									obj_t BgL_arg3857z00_1154;

									obj_t BgL_arg3858z00_1155;

									obj_t BgL_arg3859z00_1156;

									obj_t BgL_arg3860z00_1157;

									bool_t BgL_arg3861z00_1158;

									obj_t BgL_arg3862z00_1159;

									obj_t BgL_arg3863z00_1160;

									obj_t BgL_arg3864z00_1161;

									obj_t BgL_arg3865z00_1162;

									obj_t BgL_arg3866z00_1163;

									obj_t BgL_arg3867z00_1164;

									obj_t BgL_arg3868z00_1165;

									obj_t BgL_arg3869z00_1166;

									obj_t BgL_arg3870z00_1167;

									obj_t BgL_arg3871z00_1168;

									obj_t BgL_arg3872z00_1169;

									obj_t BgL_arg3873z00_1170;

									{	/* Globalize/loc2glo.scm 176 */
										long BgL_arg3874z00_1171;

										long BgL_arg3875z00_1172;

										{
											BgL_funz00_bglt BgL_auxz00_2328;

											BgL_auxz00_2328 =
												(BgL_funz00_bglt) (BgL_oldzd2funzd2_1121);
											BgL_arg3874z00_1171 =
												(((BgL_funz00_bglt) CREF(BgL_auxz00_2328))->
												BgL_arityz00);
										}
										BgL_arg3875z00_1172 = bgl_list_length(BgL_kapturedz00_16);
										BgL_arg3857z00_1154 =
											BGl_zb2zd2arityz60zztools_argsz00(BINT
											(BgL_arg3874z00_1171), BINT(BgL_arg3875z00_1172));
									}
									{
										BgL_funz00_bglt BgL_auxz00_2335;

										BgL_auxz00_2335 =
											(BgL_funz00_bglt) (BgL_duplicated3682z00_1152);
										BgL_arg3858z00_1155 =
											(((BgL_funz00_bglt) CREF(BgL_auxz00_2335))->
											BgL_sidezd2effectzf3z21);
									}
									{
										BgL_funz00_bglt BgL_auxz00_2338;

										BgL_auxz00_2338 =
											(BgL_funz00_bglt) (BgL_duplicated3682z00_1152);
										BgL_arg3859z00_1156 =
											(((BgL_funz00_bglt) CREF(BgL_auxz00_2338))->
											BgL_predicatezd2ofzd2);
									}
									{
										BgL_funz00_bglt BgL_auxz00_2341;

										BgL_auxz00_2341 =
											(BgL_funz00_bglt) (BgL_duplicated3682z00_1152);
										BgL_arg3860z00_1157 =
											(((BgL_funz00_bglt) CREF(BgL_auxz00_2341))->
											BgL_stackzd2allocatorzd2);
									}
									{
										BgL_funz00_bglt BgL_auxz00_2344;

										BgL_auxz00_2344 =
											(BgL_funz00_bglt) (BgL_duplicated3682z00_1152);
										BgL_arg3861z00_1158 =
											(((BgL_funz00_bglt) CREF(BgL_auxz00_2344))->
											BgL_topzf3zf3);
									}
									{
										BgL_funz00_bglt BgL_auxz00_2347;

										BgL_auxz00_2347 =
											(BgL_funz00_bglt) (BgL_duplicated3682z00_1152);
										BgL_arg3862z00_1159 =
											(((BgL_funz00_bglt) CREF(BgL_auxz00_2347))->
											BgL_thezd2closurezd2);
									}
									{
										BgL_funz00_bglt BgL_auxz00_2350;

										BgL_auxz00_2350 =
											(BgL_funz00_bglt) (BgL_duplicated3682z00_1152);
										BgL_arg3863z00_1160 =
											(((BgL_funz00_bglt) CREF(BgL_auxz00_2350))->
											BgL_effectz00);
									}
									BgL_arg3864z00_1161 =
										(((BgL_sfunz00_bglt) CREF(BgL_duplicated3682z00_1152))->
										BgL_propertyz00);
									BgL_arg3865z00_1162 =
										bgl_append2(bgl_reverse(BgL_addzd2argszd2_1120),
										BgL_argsz00_15);
									BgL_arg3866z00_1163 =
										(((BgL_sfunz00_bglt) CREF(BgL_duplicated3682z00_1152))->
										BgL_argszd2namezd2);
									BgL_arg3867z00_1164 =
										(((BgL_sfunz00_bglt) CREF(BgL_duplicated3682z00_1152))->
										BgL_bodyz00);
									BgL_arg3868z00_1165 =
										(((BgL_sfunz00_bglt) CREF(BgL_duplicated3682z00_1152))->
										BgL_classz00);
									BgL_arg3869z00_1166 =
										(((BgL_sfunz00_bglt) CREF(BgL_duplicated3682z00_1152))->
										BgL_dssslzd2keywordszd2);
									BgL_arg3870z00_1167 =
										(((BgL_sfunz00_bglt) CREF(BgL_duplicated3682z00_1152))->
										BgL_locz00);
									BgL_arg3871z00_1168 =
										(((BgL_sfunz00_bglt) CREF(BgL_duplicated3682z00_1152))->
										BgL_optionalsz00);
									BgL_arg3872z00_1169 =
										(((BgL_sfunz00_bglt) CREF(BgL_duplicated3682z00_1152))->
										BgL_keysz00);
									BgL_arg3873z00_1170 =
										(((BgL_sfunz00_bglt) CREF(BgL_duplicated3682z00_1152))->
										BgL_thezd2closurezd2globalz00);
									BgL_new3683z00_1153 =
										BGl_makezd2sfunzd2zzast_varz00((long)
										CINT(BgL_arg3857z00_1154), BgL_arg3858z00_1155,
										BgL_arg3859z00_1156, BgL_arg3860z00_1157,
										BgL_arg3861z00_1158, BgL_arg3862z00_1159,
										BgL_arg3863z00_1160, BgL_arg3864z00_1161,
										BgL_arg3865z00_1162, BgL_arg3866z00_1163,
										BgL_arg3867z00_1164, BgL_arg3868z00_1165,
										BgL_arg3869z00_1166, BgL_arg3870z00_1167,
										BgL_arg3871z00_1168, BgL_arg3872z00_1169,
										BgL_arg3873z00_1170);
								}
								{	/* Globalize/loc2glo.scm 175 */

									BgL_newzd2funzd2_1122 = BgL_new3683z00_1153;
						}}}
						{	/* Globalize/loc2glo.scm 175 */

							{	/* Globalize/loc2glo.scm 178 */
								BgL_localzf2ginfozf2_bglt BgL_obj3551z00_1822;

								bool_t BgL_val3550z00_1823;

								BgL_obj3551z00_1822 =
									(BgL_localzf2ginfozf2_bglt) (BgL_localz00_14);
								BgL_val3550z00_1823 = ((bool_t) 0);
								{
									obj_t BgL_auxz00_2367;

									{	/* Globalize/loc2glo.scm 178 */
										BgL_objectz00_bglt BgL_auxz00_2368;

										BgL_auxz00_2368 =
											(BgL_objectz00_bglt) (BgL_obj3551z00_1822);
										BgL_auxz00_2367 = BGL_OBJECT_WIDENING(BgL_auxz00_2368);
									}
									((((BgL_localzf2ginfozf2_bglt) CREF(BgL_auxz00_2367))->
											BgL_escapezf3zf3) =
										((bool_t) BgL_val3550z00_1823), BUNSPEC);
							}}
							{	/* Globalize/loc2glo.scm 179 */
								BgL_globalzf2ginfozf2_bglt BgL_obj3610z00_1824;

								bool_t BgL_val3609z00_1825;

								BgL_obj3610z00_1824 =
									(BgL_globalzf2ginfozf2_bglt) (BgL_globalz00_13);
								BgL_val3609z00_1825 = ((bool_t) 1);
								{
									obj_t BgL_auxz00_2373;

									{	/* Globalize/loc2glo.scm 179 */
										BgL_objectz00_bglt BgL_auxz00_2374;

										BgL_auxz00_2374 =
											(BgL_objectz00_bglt) (BgL_obj3610z00_1824);
										BgL_auxz00_2373 = BGL_OBJECT_WIDENING(BgL_auxz00_2374);
									}
									((((BgL_globalzf2ginfozf2_bglt) CREF(BgL_auxz00_2373))->
											BgL_escapezf3zf3) =
										((bool_t) BgL_val3609z00_1825), BUNSPEC);
							}}
							{	/* Globalize/loc2glo.scm 180 */
								BgL_typez00_bglt BgL_arg3839z00_1123;

								{
									BgL_variablez00_bglt BgL_auxz00_2378;

									BgL_auxz00_2378 = (BgL_variablez00_bglt) (BgL_localz00_14);
									BgL_arg3839z00_1123 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_2378))->
										BgL_typez00);
								}
								{
									BgL_variablez00_bglt BgL_auxz00_2381;

									BgL_auxz00_2381 = (BgL_variablez00_bglt) (BgL_globalz00_13);
									((((BgL_variablez00_bglt) CREF(BgL_auxz00_2381))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_arg3839z00_1123), BUNSPEC);
							}}
							{	/* Globalize/loc2glo.scm 183 */
								BgL_nodez00_bglt BgL_arg3840z00_1124;

								{	/* Globalize/loc2glo.scm 183 */
									obj_t BgL_arg3841z00_1125;

									obj_t BgL_arg3842z00_1126;

									{	/* Globalize/loc2glo.scm 182 */
										BgL_sfunzf2ginfozf2_bglt BgL_obj3401z00_1830;

										{	/* Globalize/loc2glo.scm 183 */
											BgL_variablez00_bglt BgL_obj1632z00_1829;

											BgL_obj1632z00_1829 =
												(BgL_variablez00_bglt) (BgL_localz00_14);
											BgL_obj3401z00_1830 =
												(BgL_sfunzf2ginfozf2_bglt) (
												(((BgL_variablez00_bglt) CREF(BgL_obj1632z00_1829))->
													BgL_valuez00));
										}
										{
											obj_t BgL_auxz00_2387;

											{	/* Globalize/loc2glo.scm 182 */
												BgL_objectz00_bglt BgL_auxz00_2388;

												BgL_auxz00_2388 =
													(BgL_objectz00_bglt) (BgL_obj3401z00_1830);
												BgL_auxz00_2387 = BGL_OBJECT_WIDENING(BgL_auxz00_2388);
											}
											BgL_arg3841z00_1125 =
												(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_2387))->
												BgL_newzd2bodyzd2);
									}}
									if (NULLP(BgL_kapturedz00_16))
										{	/* Globalize/loc2glo.scm 185 */
											BgL_arg3842z00_1126 = BNIL;
										}
									else
										{	/* Globalize/loc2glo.scm 185 */
											obj_t BgL_head3718z00_1131;

											{	/* Globalize/loc2glo.scm 185 */
												obj_t BgL_arg3853z00_1148;

												BgL_arg3853z00_1148 =
													MAKE_PAIR(CAR(BgL_kapturedz00_16),
													CAR(BgL_addzd2argszd2_1120));
												BgL_head3718z00_1131 =
													MAKE_PAIR(BgL_arg3853z00_1148, BNIL);
											}
											{	/* Globalize/loc2glo.scm 185 */
												obj_t BgL_g3722z00_1132;

												obj_t BgL_g3723z00_1133;

												BgL_g3722z00_1132 = CDR(BgL_kapturedz00_16);
												BgL_g3723z00_1133 = CDR(BgL_addzd2argszd2_1120);
												{
													obj_t BgL_ll3716z00_1135;

													obj_t BgL_ll3717z00_1136;

													obj_t BgL_tail3719z00_1137;

													BgL_ll3716z00_1135 = BgL_g3722z00_1132;
													BgL_ll3717z00_1136 = BgL_g3723z00_1133;
													BgL_tail3719z00_1137 = BgL_head3718z00_1131;
												BgL_zc3anonymousza33845ze3z83_1138:
													if (NULLP(BgL_ll3716z00_1135))
														{	/* Globalize/loc2glo.scm 185 */
															BgL_arg3842z00_1126 = BgL_head3718z00_1131;
														}
													else
														{	/* Globalize/loc2glo.scm 185 */
															obj_t BgL_newtail3720z00_1140;

															{	/* Globalize/loc2glo.scm 185 */
																obj_t BgL_arg3849z00_1143;

																BgL_arg3849z00_1143 =
																	MAKE_PAIR(CAR(BgL_ll3716z00_1135),
																	CAR(BgL_ll3717z00_1136));
																BgL_newtail3720z00_1140 =
																	MAKE_PAIR(BgL_arg3849z00_1143, BNIL);
															}
															SET_CDR(BgL_tail3719z00_1137,
																BgL_newtail3720z00_1140);
															{
																obj_t BgL_tail3719z00_2411;

																obj_t BgL_ll3717z00_2409;

																obj_t BgL_ll3716z00_2407;

																BgL_ll3716z00_2407 = CDR(BgL_ll3716z00_1135);
																BgL_ll3717z00_2409 = CDR(BgL_ll3717z00_1136);
																BgL_tail3719z00_2411 = BgL_newtail3720z00_1140;
																BgL_tail3719z00_1137 = BgL_tail3719z00_2411;
																BgL_ll3717z00_1136 = BgL_ll3717z00_2409;
																BgL_ll3716z00_1135 = BgL_ll3716z00_2407;
																goto BgL_zc3anonymousza33845ze3z83_1138;
															}
														}
												}
											}
										}
									BgL_arg3840z00_1124 =
										BGl_nodezd2globaliza7ez12z67zzglobaliza7e_nodeza7(
										(BgL_nodez00_bglt) (BgL_arg3841z00_1125),
										(BgL_variablez00_bglt) (BgL_localz00_14),
										BgL_arg3842z00_1126);
								}
								{
									obj_t BgL_auxz00_2415;

									BgL_auxz00_2415 = (obj_t) (BgL_arg3840z00_1124);
									((((BgL_sfunz00_bglt) CREF(BgL_newzd2funzd2_1122))->
											BgL_bodyz00) = ((obj_t) BgL_auxz00_2415), BUNSPEC);
								}
							}
							{
								BgL_valuez00_bglt BgL_auxz00_2420;

								BgL_variablez00_bglt BgL_auxz00_2418;

								BgL_auxz00_2420 = (BgL_valuez00_bglt) (BgL_newzd2funzd2_1122);
								BgL_auxz00_2418 = (BgL_variablez00_bglt) (BgL_globalz00_13);
								((((BgL_variablez00_bglt) CREF(BgL_auxz00_2418))->
										BgL_valuez00) =
									((BgL_valuez00_bglt) BgL_auxz00_2420), BUNSPEC);
							}
							return BgL_globalz00_13;
						}
					}
				}
			}
		}
	}



/* the-global */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_thezd2globalzd2zzglobaliza7e_localzd2ze3globalz96(BgL_localz00_bglt
		BgL_localz00_18)
	{
		AN_OBJECT;
		{	/* Globalize/loc2glo.scm 195 */
			{	/* Globalize/loc2glo.scm 196 */
				BgL_valuez00_bglt BgL_valuez00_1199;

				{
					BgL_variablez00_bglt BgL_auxz00_2423;

					BgL_auxz00_2423 = (BgL_variablez00_bglt) (BgL_localz00_18);
					BgL_valuez00_1199 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_2423))->BgL_valuez00);
				}
				{	/* Globalize/loc2glo.scm 197 */
					bool_t BgL_testz00_2426;

					{	/* Globalize/loc2glo.scm 197 */
						obj_t BgL_arg3911z00_1222;

						{	/* Globalize/loc2glo.scm 197 */
							BgL_sfunzf2ginfozf2_bglt BgL_obj3395z00_1856;

							BgL_obj3395z00_1856 =
								(BgL_sfunzf2ginfozf2_bglt) (BgL_valuez00_1199);
							{
								obj_t BgL_auxz00_2428;

								{	/* Globalize/loc2glo.scm 197 */
									BgL_objectz00_bglt BgL_auxz00_2429;

									BgL_auxz00_2429 = (BgL_objectz00_bglt) (BgL_obj3395z00_1856);
									BgL_auxz00_2428 = BGL_OBJECT_WIDENING(BgL_auxz00_2429);
								}
								BgL_arg3911z00_1222 =
									(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_2428))->
									BgL_thezd2globalzd2);
							}
						}
						BgL_testz00_2426 =
							BGl_iszd2azf3z21zz__objectz00(BgL_arg3911z00_1222,
							BGl_globalz00zzast_varz00);
					}
					if (BgL_testz00_2426)
						{	/* Globalize/loc2glo.scm 198 */
							BgL_sfunzf2ginfozf2_bglt BgL_obj3395z00_1858;

							BgL_obj3395z00_1858 =
								(BgL_sfunzf2ginfozf2_bglt) (BgL_valuez00_1199);
							{	/* Globalize/loc2glo.scm 198 */
								obj_t BgL_auxz00_2435;

								{
									obj_t BgL_auxz00_2436;

									{	/* Globalize/loc2glo.scm 198 */
										BgL_objectz00_bglt BgL_auxz00_2437;

										BgL_auxz00_2437 =
											(BgL_objectz00_bglt) (BgL_obj3395z00_1858);
										BgL_auxz00_2436 = BGL_OBJECT_WIDENING(BgL_auxz00_2437);
									}
									BgL_auxz00_2435 =
										(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_2436))->
										BgL_thezd2globalzd2);
								}
								return (BgL_globalz00_bglt) (BgL_auxz00_2435);
							}
						}
					else
						{	/* Globalize/loc2glo.scm 199 */
							obj_t BgL_idz00_1201;

							{	/* Globalize/loc2glo.scm 199 */
								bool_t BgL_testz00_2442;

								{	/* Globalize/loc2glo.scm 199 */
									obj_t BgL_arg3909z00_1220;

									{	/* Globalize/loc2glo.scm 199 */
										obj_t BgL_arg3910z00_1221;

										{
											BgL_variablez00_bglt BgL_auxz00_2443;

											BgL_auxz00_2443 =
												(BgL_variablez00_bglt) (BgL_localz00_18);
											BgL_arg3910z00_1221 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_2443))->
												BgL_idz00);
										}
										BgL_arg3909z00_1220 =
											BGl_findzd2globalzf2modulez20zzast_envz00
											(BgL_arg3910z00_1221,
											BGl_za2moduleza2z00zzmodule_modulez00);
									}
									BgL_testz00_2442 =
										BGl_iszd2azf3z21zz__objectz00(BgL_arg3909z00_1220,
										BGl_globalz00zzast_varz00);
								}
								if (BgL_testz00_2442)
									{	/* Globalize/loc2glo.scm 201 */
										obj_t BgL_arg3901z00_1213;

										{	/* Globalize/loc2glo.scm 201 */
											obj_t BgL_arg3902z00_1214;

											{	/* Globalize/loc2glo.scm 201 */
												obj_t BgL_arg3903z00_1215;

												obj_t BgL_arg3904z00_1216;

												{	/* Globalize/loc2glo.scm 201 */
													obj_t BgL_arg3908z00_1219;

													{
														BgL_variablez00_bglt BgL_auxz00_2448;

														BgL_auxz00_2448 =
															(BgL_variablez00_bglt) (BgL_localz00_18);
														BgL_arg3908z00_1219 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_2448))->
															BgL_idz00);
													}
													{	/* Globalize/loc2glo.scm 201 */
														obj_t BgL_res3969z00_1864;

														{	/* Globalize/loc2glo.scm 201 */
															obj_t BgL_arg2063z00_1863;

															BgL_arg2063z00_1863 =
																SYMBOL_TO_STRING(BgL_arg3908z00_1219);
															BgL_res3969z00_1864 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_1863);
														}
														BgL_arg3903z00_1215 = BgL_res3969z00_1864;
													}
												}
												{	/* Globalize/loc2glo.scm 201 */
													obj_t BgL_res3970z00_1867;

													{	/* Globalize/loc2glo.scm 201 */
														obj_t BgL_symbolz00_1865;

														BgL_symbolz00_1865 = CNST_TABLE_REF(((long) 3));
														{	/* Globalize/loc2glo.scm 201 */
															obj_t BgL_arg2063z00_1866;

															BgL_arg2063z00_1866 =
																SYMBOL_TO_STRING(BgL_symbolz00_1865);
															BgL_res3970z00_1867 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_1866);
													}}
													BgL_arg3904z00_1216 = BgL_res3970z00_1867;
												}
												{	/* Globalize/loc2glo.scm 201 */
													obj_t BgL_list3905z00_1217;

													{	/* Globalize/loc2glo.scm 201 */
														obj_t BgL_arg3906z00_1218;

														BgL_arg3906z00_1218 =
															MAKE_PAIR(BgL_arg3904z00_1216, BNIL);
														BgL_list3905z00_1217 =
															MAKE_PAIR(BgL_arg3903z00_1215,
															BgL_arg3906z00_1218);
													}
													BgL_arg3902z00_1214 =
														BGl_stringzd2appendzd2zz__r4_strings_6_7z00
														(BgL_list3905z00_1217);
											}}
											BgL_arg3901z00_1213 =
												string_to_symbol(BSTRING_TO_STRING
												(BgL_arg3902z00_1214));
										}
										BgL_idz00_1201 =
											BGl_gensymz00zz__r4_symbols_6_4z00(BgL_arg3901z00_1213);
									}
								else
									{
										BgL_variablez00_bglt BgL_auxz00_2462;

										BgL_auxz00_2462 = (BgL_variablez00_bglt) (BgL_localz00_18);
										BgL_idz00_1201 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_2462))->
											BgL_idz00);
									}
							}
							{	/* Globalize/loc2glo.scm 199 */
								BgL_globalz00_bglt BgL_globalz00_1202;

								BgL_globalz00_1202 =
									BGl_defzd2globalzd2sfunzd2nozd2warningz12z12zzast_glozd2defzd2
									(BgL_idz00_1201, BNIL, BNIL,
									BGl_za2moduleza2z00zzmodule_modulez00,
									CNST_TABLE_REF(((long) 4)), CNST_TABLE_REF(((long) 5)),
									CNST_TABLE_REF(((long) 6)), BUNSPEC);
								{	/* Globalize/loc2glo.scm 203 */

									{	/* Globalize/loc2glo.scm 216 */
										BgL_valuez00_bglt BgL_arg3892z00_1203;

										obj_t BgL_arg3893z00_1204;

										{
											BgL_variablez00_bglt BgL_auxz00_2469;

											BgL_auxz00_2469 =
												(BgL_variablez00_bglt) (BgL_globalz00_1202);
											BgL_arg3892z00_1203 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_2469))->
												BgL_valuez00);
										}
										{
											BgL_sfunz00_bglt BgL_auxz00_2472;

											BgL_auxz00_2472 = (BgL_sfunz00_bglt) (BgL_valuez00_1199);
											BgL_arg3893z00_1204 =
												(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2472))->
												BgL_locz00);
										}
										{
											BgL_sfunz00_bglt BgL_auxz00_2475;

											BgL_auxz00_2475 =
												(BgL_sfunz00_bglt) (BgL_arg3892z00_1203);
											((((BgL_sfunz00_bglt) CREF(BgL_auxz00_2475))->
													BgL_locz00) = ((obj_t) BgL_arg3893z00_1204), BUNSPEC);
									}}
									{	/* Globalize/loc2glo.scm 218 */
										BgL_typez00_bglt BgL_arg3894z00_1205;

										{
											BgL_variablez00_bglt BgL_auxz00_2478;

											BgL_auxz00_2478 =
												(BgL_variablez00_bglt) (BgL_localz00_18);
											BgL_arg3894z00_1205 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_2478))->
												BgL_typez00);
										}
										{
											BgL_variablez00_bglt BgL_auxz00_2481;

											BgL_auxz00_2481 =
												(BgL_variablez00_bglt) (BgL_globalz00_1202);
											((((BgL_variablez00_bglt) CREF(BgL_auxz00_2481))->
													BgL_typez00) =
												((BgL_typez00_bglt) BgL_arg3894z00_1205), BUNSPEC);
									}}
									if (
										(((BgL_localz00_bglt) CREF(BgL_localz00_18))->
											BgL_userzf3zf3))
										{	/* Globalize/loc2glo.scm 220 */
											BFALSE;
										}
									else
										{	/* Globalize/loc2glo.scm 220 */
											((((BgL_globalz00_bglt) CREF(BgL_globalz00_1202))->
													BgL_userzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
										}
									{	/* Globalize/loc2glo.scm 222 */
										BgL_globalz00_bglt BgL_obj3684z00_1207;

										BgL_obj3684z00_1207 =
											((BgL_globalz00_bglt) BgL_globalz00_1202);
										{	/* Globalize/loc2glo.scm 222 */
											obj_t BgL_auxz00_2490;

											BgL_objectz00_bglt BgL_auxz00_2488;

											BgL_auxz00_2490 =
												BGl_wideningzd2globalzf2Ginfoz20zzglobaliza7e_ginfoza7((
													(bool_t) 0), BFALSE);
											BgL_auxz00_2488 =
												(BgL_objectz00_bglt) (BgL_obj3684z00_1207);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_2488, BgL_auxz00_2490);
										}
										BGL_OBJECT_CLASS_NUM_SET(
											(BgL_objectz00_bglt) (BgL_obj3684z00_1207),
											BGl_classzd2numzd2zz__objectz00
											(BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7));
										BgL_obj3684z00_1207;
									}
									{	/* Globalize/loc2glo.scm 223 */
										BgL_valuez00_bglt BgL_arg3898z00_1210;

										obj_t BgL_arg3899z00_1211;

										{
											BgL_variablez00_bglt BgL_auxz00_2496;

											BgL_auxz00_2496 =
												(BgL_variablez00_bglt) (BgL_globalz00_1202);
											BgL_arg3898z00_1210 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_2496))->
												BgL_valuez00);
										}
										{
											BgL_funz00_bglt BgL_auxz00_2499;

											BgL_auxz00_2499 = (BgL_funz00_bglt) (BgL_valuez00_1199);
											BgL_arg3899z00_1211 =
												(((BgL_funz00_bglt) CREF(BgL_auxz00_2499))->
												BgL_sidezd2effectzf3z21);
										}
										{
											BgL_funz00_bglt BgL_auxz00_2502;

											BgL_auxz00_2502 = (BgL_funz00_bglt) (BgL_arg3898z00_1210);
											((((BgL_funz00_bglt) CREF(BgL_auxz00_2502))->
													BgL_sidezd2effectzf3z21) =
												((obj_t) BgL_arg3899z00_1211), BUNSPEC);
										}
									}
									{	/* Globalize/loc2glo.scm 225 */
										BgL_sfunzf2ginfozf2_bglt BgL_obj3397z00_1886;

										obj_t BgL_val3396z00_1887;

										BgL_obj3397z00_1886 =
											(BgL_sfunzf2ginfozf2_bglt) (BgL_valuez00_1199);
										BgL_val3396z00_1887 = (obj_t) (BgL_globalz00_1202);
										{
											obj_t BgL_auxz00_2507;

											{	/* Globalize/loc2glo.scm 225 */
												BgL_objectz00_bglt BgL_auxz00_2508;

												BgL_auxz00_2508 =
													(BgL_objectz00_bglt) (BgL_obj3397z00_1886);
												BgL_auxz00_2507 = BGL_OBJECT_WIDENING(BgL_auxz00_2508);
											}
											((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_2507))->
													BgL_thezd2globalzd2) =
												((obj_t) BgL_val3396z00_1887), BUNSPEC);
										}
									}
									return BgL_globalz00_1202;
								}
							}
						}
				}
			}
		}
	}



/* _the-global */
	obj_t BGl__thezd2globalzd2zzglobaliza7e_localzd2ze3globalz96(obj_t
		BgL_envz00_1890, obj_t BgL_localz00_1891)
	{
		AN_OBJECT;
		{	/* Globalize/loc2glo.scm 195 */
			return
				(obj_t) (BGl_thezd2globalzd2zzglobaliza7e_localzd2ze3globalz96(
					(BgL_localz00_bglt) (BgL_localz00_1891)));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzglobaliza7e_localzd2ze3globalz96()
	{
		AN_OBJECT;
		{	/* Globalize/loc2glo.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzglobaliza7e_localzd2ze3globalz96()
	{
		AN_OBJECT;
		{	/* Globalize/loc2glo.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_localzd2ze3globalz96()
	{
		AN_OBJECT;
		{	/* Globalize/loc2glo.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3971z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3971z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 320731191),
				BSTRING_TO_STRING(BGl_string3971z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3971z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string3971z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3971z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3971z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3971z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3971z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string3971z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(((long) 189731515),
				BSTRING_TO_STRING(BGl_string3971z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string3971z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3971z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(((long) 0),
				BSTRING_TO_STRING(BGl_string3971z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_nodeza7(((long) 157543843),
				BSTRING_TO_STRING(BGl_string3971z00zzglobaliza7e_localzd2ze3globalz96));
			return
				BGl_modulezd2initializa7ationz75zzglobaliza7e_freeza7(((long)
					242972228),
				BSTRING_TO_STRING(BGl_string3971z00zzglobaliza7e_localzd2ze3globalz96));
		}
	}

#ifdef __cplusplus
}
#endif
