/*===========================================================================*/
/*   (Ast/glo_decl.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/glo_decl.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_backendz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_languagez00;
		obj_t BgL_srfi0z00;
		obj_t BgL_namez00;
		obj_t BgL_externzd2variableszd2;
		obj_t BgL_externzd2functionszd2;
		obj_t BgL_externzd2typeszd2;
		obj_t BgL_variablesz00;
		obj_t BgL_functionsz00;
		obj_t BgL_typesz00;
		bool_t BgL_typedz00;
		obj_t BgL_heapzd2suffixzd2;
		obj_t BgL_heapzd2compatiblezd2;
		bool_t BgL_callccz00;
		bool_t BgL_qualifiedzd2typeszd2;
		bool_t BgL_effectzb2zb2;
		bool_t BgL_removezd2emptyzd2letz00;
		bool_t BgL_foreignzd2closurezd2;
		bool_t BgL_typedzd2eqzd2;
		bool_t BgL_tracezd2supportzd2;
		obj_t BgL_foreignzd2clausezd2supportz00;
		obj_t BgL_debugzd2supportzd2;
		bool_t BgL_pragmazd2supportzd2;
		bool_t BgL_tvectorzd2descrzd2supportz00;
		bool_t BgL_requirezd2tailczd2;
		obj_t BgL_registersz00;
		obj_t BgL_pregistersz00;
		bool_t BgL_boundzd2checkzd2;
		bool_t BgL_typezd2checkzd2;
	}                 *BgL_backendz00_bglt;

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

	typedef struct BgL_scnstz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_nodez00;
		obj_t BgL_classz00;
		obj_t BgL_locz00;
	}               *BgL_scnstz00_bglt;

	typedef struct BgL_cvarz00_bgl
	{
		header_t header;
		obj_t widening;
		bool_t BgL_macrozf3zf3;
	}              *BgL_cvarz00_bglt;


	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	static obj_t BGl__declarezd2globalzd2cvarz12z12zzast_glozd2declzd2(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static BgL_globalz00_bglt
		BGl_declarezd2globalzd2nooptzd2sfunz12zc0zzast_glozd2declzd2(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_parsezd2idzf2importzd2locationzf2zzast_identz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static obj_t BGl__declarezd2globalzd2cfunz12z12zzast_glozd2declzd2(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_declarezd2globalzd2scnstz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzast_glozd2declzd2();
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	static BgL_globalz00_bglt
		BGl_declarezd2globalzd2dssslzd2sfunz12zc0zzast_glozd2declzd2(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_dssslz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long, char *);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	extern BgL_cvarz00_bglt BGl_makezd2cvarzd2zzast_varz00(bool_t);
	static obj_t BGl__declarezd2globalzd2svarz12z12zzast_glozd2declzd2(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern BgL_typez00_bglt
		BGl_usezd2foreignzd2typezf2importzd2locz12z32zztype_envz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	extern BgL_globalz00_bglt BGl_bindzd2globalz12zc0zzast_envz00(obj_t, obj_t,
		BgL_valuez00_bglt, obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__declarezd2globalzd2sfunz12z12zzast_glozd2declzd2(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern BgL_sfunz00_bglt BGl_makezd2sfunzd2zzast_varz00(long, obj_t, obj_t,
		obj_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern bool_t
		BGl_dssslzd2optionalzd2onlyzd2prototypezf3z21zztools_dssslz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzast_glozd2declzd2();
	extern obj_t BGl_argsza2zd2ze3argszd2listz41zztools_argsz00(obj_t);
	BGL_IMPORT bool_t BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_declarezd2globalzd2cvarz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		bool_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_glozd2declzd2 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzast_glozd2declzd2();
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_declarezd2globalzd2cfunz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, bool_t, bool_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(obj_t, obj_t);
	extern bool_t BGl_dssslzd2keyzd2onlyzd2prototypezf3z21zztools_dssslz00(obj_t);
	extern obj_t BGl_dssslzd2formalszd2zztools_dssslz00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	extern obj_t BGl_dssslzd2keyszd2zztools_dssslz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzast_glozd2declzd2();
	static obj_t BGl_symbol3548z00zzast_glozd2declzd2 = BUNSPEC;
	extern BgL_scnstz00_bglt BGl_makezd2scnstzd2zzast_varz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	extern BgL_cfunz00_bglt BGl_makezd2cfunzd2zzast_varz00(long, obj_t, obj_t,
		obj_t, bool_t, obj_t, obj_t, obj_t, bool_t, bool_t, obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_declarezd2globalzd2svarz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern BgL_typez00_bglt
		BGl_typezd2ofzd2idzf2importzd2locationz20zzast_identz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_declarezd2globalzd2sfunz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__declarezd2globalzd2scnstz12z12zzast_glozd2declzd2(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern long BGl_globalzd2arityzd2zztools_argsz00(obj_t);
	extern obj_t BGl_dssslzd2optionalszd2zztools_dssslz00(obj_t);
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_glozd2declzd2();
	extern BgL_svarz00_bglt BGl_makezd2svarzd2zzast_varz00(obj_t);
	static obj_t __cnst[10];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2globalzd2svarz12zd2envzc0zzast_glozd2declzd2,
		BgL_bgl__declareza7d2globa3556za7,
		BGl__declarezd2globalzd2svarz12z12zzast_glozd2declzd2, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2globalzd2cfunz12zd2envzc0zzast_glozd2declzd2,
		BgL_bgl__declareza7d2globa3557za7,
		BGl__declarezd2globalzd2cfunz12z12zzast_glozd2declzd2, 0L, BUNSPEC, 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2globalzd2cvarz12zd2envzc0zzast_glozd2declzd2,
		BgL_bgl__declareza7d2globa3558za7,
		BGl__declarezd2globalzd2cvarz12z12zzast_glozd2declzd2, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2globalzd2sfunz12zd2envzc0zzast_glozd2declzd2,
		BgL_bgl__declareza7d2globa3559za7,
		BGl__declarezd2globalzd2sfunz12z12zzast_glozd2declzd2, 0L, BUNSPEC, 7);
	      DEFINE_STRING(BGl_string3550z00zzast_glozd2declzd2,
		BgL_bgl_string3550za700za7za7a3560za7, "Illegal nary argument type", 26);
	      DEFINE_STRING(BGl_string3549z00zzast_glozd2declzd2,
		BgL_bgl_string3549za700za7za7a3561za7, "", 0);
	      DEFINE_STRING(BGl_string3551z00zzast_glozd2declzd2,
		BgL_bgl_string3551za700za7za7a3562za7, "Illegal type for global variable",
		32);
	      DEFINE_STRING(BGl_string3552z00zzast_glozd2declzd2,
		BgL_bgl_string3552za700za7za7a3563za7, "ast_glo-decl", 12);
	      DEFINE_STRING(BGl_string3553z00zzast_glozd2declzd2,
		BgL_bgl_string3553za700za7za7a3564za7,
		"foreign a-cnst write read (export import) bigloo sgfun export bdb static ",
		73);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2globalzd2scnstz12zd2envzc0zzast_glozd2declzd2,
		BgL_bgl__declareza7d2globa3565za7,
		BGl__declarezd2globalzd2scnstz12z12zzast_glozd2declzd2, 0L, BUNSPEC, 6);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(long
		BgL_checksumz00_1702, char *BgL_fromz00_1703)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_glozd2declzd2))
				{
					BGl_requirezd2initializa7ationz75zzast_glozd2declzd2 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_glozd2declzd2();
					BGl_cnstzd2initzd2zzast_glozd2declzd2();
					BGl_importedzd2moduleszd2initz00zzast_glozd2declzd2();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_glozd2declzd2()
	{
		AN_OBJECT;
		{	/* Ast/glo_decl.scm 17 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_glo-decl");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_glo-decl");
			BGl_modulezd2initializa7ationz75zz__dssslz00(((long) 0), "ast_glo-decl");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"ast_glo-decl");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_glozd2declzd2()
	{
		AN_OBJECT;
		{	/* Ast/glo_decl.scm 17 */
			{	/* Ast/glo_decl.scm 17 */
				obj_t BgL_cportz00_1694;

				BgL_cportz00_1694 =
					bgl_open_input_string(BGl_string3553z00zzast_glozd2declzd2,
					(int) (((long) 0)));
				{
					long BgL_iz00_1695;

					BgL_iz00_1695 = ((long) 9);
				BgL_loopz00_1696:
					if ((BgL_iz00_1695 == ((long) -1)))
						{	/* Ast/glo_decl.scm 17 */
							BUNSPEC;
						}
					else
						{	/* Ast/glo_decl.scm 17 */
							{	/* Ast/glo_decl.scm 17 */
								obj_t BgL_arg3555z00_1698;

								{	/* Ast/glo_decl.scm 17 */

									{	/* Ast/glo_decl.scm 17 */
										obj_t BgL_locationz00_1700;

										BgL_locationz00_1700 = BBOOL(((bool_t) 0));
										{	/* Ast/glo_decl.scm 17 */

											BgL_arg3555z00_1698 =
												BGl_readz00zz__readerz00(BgL_cportz00_1694,
												BgL_locationz00_1700);
										}
									}
								}
								{	/* Ast/glo_decl.scm 17 */
									int BgL_auxz00_1720;

									BgL_auxz00_1720 = (int) (BgL_iz00_1695);
									CNST_TABLE_SET(BgL_auxz00_1720, BgL_arg3555z00_1698);
							}}
							{	/* Ast/glo_decl.scm 17 */
								int BgL_auxz00_1701;

								BgL_auxz00_1701 = (int) ((BgL_iz00_1695 - ((long) 1)));
								{
									long BgL_iz00_1725;

									BgL_iz00_1725 = (long) (BgL_auxz00_1701);
									BgL_iz00_1695 = BgL_iz00_1725;
									goto BgL_loopz00_1696;
								}
							}
						}
				}
			}
			return (BGl_symbol3548z00zzast_glozd2declzd2 =
				bstring_to_symbol(BGl_string3549z00zzast_glozd2declzd2), BUNSPEC);
		}
	}



/* declare-global-sfun! */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_declarezd2globalzd2sfunz12z12zzast_glozd2declzd2(obj_t BgL_idz00_1,
		obj_t BgL_argsz00_2, obj_t BgL_modulez00_3, obj_t BgL_importz00_4,
		obj_t BgL_classz00_5, obj_t BgL_srcez00_6, obj_t BgL_srciz00_7)
	{
		AN_OBJECT;
		{	/* Ast/glo_decl.scm 77 */
			if (BGl_dssslzd2optionalzd2onlyzd2prototypezf3z21zztools_dssslz00
				(BgL_argsz00_2))
				{	/* Ast/glo_decl.scm 81 */
					return
						BGl_declarezd2globalzd2dssslzd2sfunz12zc0zzast_glozd2declzd2
						(BGl_dssslzd2optionalszd2zztools_dssslz00(BgL_argsz00_2), BNIL,
						BgL_idz00_1, BgL_argsz00_2, BgL_modulez00_3, BgL_importz00_4,
						BgL_classz00_5, BgL_srcez00_6, BgL_srciz00_7);
				}
			else
				{	/* Ast/glo_decl.scm 81 */
					if (BGl_dssslzd2keyzd2onlyzd2prototypezf3z21zztools_dssslz00
						(BgL_argsz00_2))
						{	/* Ast/glo_decl.scm 83 */
							return
								BGl_declarezd2globalzd2dssslzd2sfunz12zc0zzast_glozd2declzd2
								(BNIL, BGl_dssslzd2keyszd2zztools_dssslz00(BgL_argsz00_2),
								BgL_idz00_1, BgL_argsz00_2, BgL_modulez00_3, BgL_importz00_4,
								BgL_classz00_5, BgL_srcez00_6, BgL_srciz00_7);
						}
					else
						{	/* Ast/glo_decl.scm 83 */
							return
								BGl_declarezd2globalzd2nooptzd2sfunz12zc0zzast_glozd2declzd2
								(BgL_idz00_1, BgL_argsz00_2, BgL_modulez00_3, BgL_importz00_4,
								BgL_classz00_5, BgL_srcez00_6, BgL_srciz00_7);
						}
				}
		}
	}



/* _declare-global-sfun! */
	obj_t BGl__declarezd2globalzd2sfunz12z12zzast_glozd2declzd2(obj_t
		BgL_envz00_1656, obj_t BgL_idz00_1657, obj_t BgL_argsz00_1658,
		obj_t BgL_modulez00_1659, obj_t BgL_importz00_1660, obj_t BgL_classz00_1661,
		obj_t BgL_srcez00_1662, obj_t BgL_srciz00_1663)
	{
		AN_OBJECT;
		{	/* Ast/glo_decl.scm 77 */
			return
				(obj_t) (BGl_declarezd2globalzd2sfunz12z12zzast_glozd2declzd2
				(BgL_idz00_1657, BgL_argsz00_1658, BgL_modulez00_1659,
					BgL_importz00_1660, BgL_classz00_1661, BgL_srcez00_1662,
					BgL_srciz00_1663));
		}
	}



/* declare-global-dsssl-sfun! */
	BgL_globalz00_bglt
		BGl_declarezd2globalzd2dssslzd2sfunz12zc0zzast_glozd2declzd2(obj_t
		BgL_optsz00_8, obj_t BgL_keysz00_9, obj_t BgL_idz00_10,
		obj_t BgL_argsz00_11, obj_t BgL_modulez00_12, obj_t BgL_importz00_13,
		obj_t BgL_classz00_14, obj_t BgL_srcez00_15, obj_t BgL_srciz00_16)
	{
		AN_OBJECT;
		{	/* Ast/glo_decl.scm 91 */
			{	/* Ast/glo_decl.scm 92 */
				long BgL_arityz00_933;

				BgL_arityz00_933 = BGl_globalzd2arityzd2zztools_argsz00(BgL_argsz00_11);
				{	/* Ast/glo_decl.scm 92 */
					bool_t BgL_exportzf3zf3_934;

					{	/* Ast/glo_decl.scm 93 */
						bool_t BgL__ortest_3363z00_992;

						if ((BgL_importz00_13 == CNST_TABLE_REF(((long) 0))))
							{	/* Ast/glo_decl.scm 93 */
								BgL__ortest_3363z00_992 = ((bool_t) 0);
							}
						else
							{	/* Ast/glo_decl.scm 93 */
								BgL__ortest_3363z00_992 = ((bool_t) 1);
							}
						if (BgL__ortest_3363z00_992)
							{	/* Ast/glo_decl.scm 93 */
								BgL_exportzf3zf3_934 = BgL__ortest_3363z00_992;
							}
						else
							{	/* Ast/glo_decl.scm 94 */
								obj_t BgL__andtest_3364z00_993;

								{	/* Ast/glo_decl.scm 94 */
									obj_t BgL_arg3417z00_994;

									obj_t BgL_arg3418z00_995;

									BgL_arg3417z00_994 = CNST_TABLE_REF(((long) 1));
									{	/* Ast/glo_decl.scm 94 */
										obj_t BgL_arg3419z00_996;

										BgL_arg3419z00_996 =
											BGl_thezd2backendzd2zzbackend_backendz00();
										{
											BgL_backendz00_bglt BgL_auxz00_1746;

											BgL_auxz00_1746 =
												(BgL_backendz00_bglt) (BgL_arg3419z00_996);
											BgL_arg3418z00_995 =
												(((BgL_backendz00_bglt) CREF(BgL_auxz00_1746))->
												BgL_debugzd2supportzd2);
									}}
									BgL__andtest_3364z00_993 =
										BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg3417z00_994,
										BgL_arg3418z00_995);
								}
								if (CBOOL(BgL__andtest_3364z00_993))
									{	/* Ast/glo_decl.scm 94 */
										BgL_exportzf3zf3_934 =
											(
											(long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >=
											((long) 3));
									}
								else
									{	/* Ast/glo_decl.scm 94 */
										BgL_exportzf3zf3_934 = ((bool_t) 0);
									}
							}
					}
					{	/* Ast/glo_decl.scm 93 */
						obj_t BgL_importz00_935;

						{	/* Ast/glo_decl.scm 96 */
							bool_t BgL_testz00_1754;

							if ((BgL_importz00_13 == CNST_TABLE_REF(((long) 0))))
								{	/* Ast/glo_decl.scm 97 */
									bool_t BgL_testz00_1758;

									{	/* Ast/glo_decl.scm 97 */
										obj_t BgL_arg3414z00_989;

										obj_t BgL_arg3415z00_990;

										BgL_arg3414z00_989 = CNST_TABLE_REF(((long) 1));
										{	/* Ast/glo_decl.scm 97 */
											obj_t BgL_arg3416z00_991;

											BgL_arg3416z00_991 =
												BGl_thezd2backendzd2zzbackend_backendz00();
											{
												BgL_backendz00_bglt BgL_auxz00_1761;

												BgL_auxz00_1761 =
													(BgL_backendz00_bglt) (BgL_arg3416z00_991);
												BgL_arg3415z00_990 =
													(((BgL_backendz00_bglt) CREF(BgL_auxz00_1761))->
													BgL_debugzd2supportzd2);
										}}
										BgL_testz00_1758 =
											CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3414z00_989, BgL_arg3415z00_990));
									}
									if (BgL_testz00_1758)
										{	/* Ast/glo_decl.scm 97 */
											BgL_testz00_1754 =
												(
												(long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00)
												>= ((long) 3));
										}
									else
										{	/* Ast/glo_decl.scm 97 */
											BgL_testz00_1754 = ((bool_t) 0);
										}
								}
							else
								{	/* Ast/glo_decl.scm 96 */
									BgL_testz00_1754 = ((bool_t) 0);
								}
							if (BgL_testz00_1754)
								{	/* Ast/glo_decl.scm 96 */
									BgL_importz00_935 = CNST_TABLE_REF(((long) 2));
								}
							else
								{	/* Ast/glo_decl.scm 96 */
									BgL_importz00_935 = BgL_importz00_13;
								}
						}
						{	/* Ast/glo_decl.scm 96 */
							obj_t BgL_locz00_936;

							BgL_locz00_936 =
								BGl_findzd2locationzd2zztools_locationz00(BgL_srcez00_15);
							{	/* Ast/glo_decl.scm 101 */
								obj_t BgL_lociz00_937;

								BgL_lociz00_937 =
									BGl_findzd2locationzf2locz20zztools_locationz00
									(BgL_srciz00_16, BgL_locz00_936);
								{	/* Ast/glo_decl.scm 102 */
									obj_t BgL_argszd2typezd2_938;

									{
										obj_t BgL_argsz00_969;

										obj_t BgL_resz00_970;

										BgL_argsz00_969 = BgL_argsz00_11;
										BgL_resz00_970 = BNIL;
									BgL_zc3anonymousza33400ze3z83_971:
										if (NULLP(BgL_argsz00_969))
											{	/* Ast/glo_decl.scm 106 */
												BgL_argszd2typezd2_938 =
													bgl_reverse_bang(BgL_resz00_970);
											}
										else
											{	/* Ast/glo_decl.scm 106 */
												if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
														(BgL_argsz00_969)))
													{
														obj_t BgL_argsz00_1777;

														BgL_argsz00_1777 = CDR(BgL_argsz00_969);
														BgL_argsz00_969 = BgL_argsz00_1777;
														goto BgL_zc3anonymousza33400ze3z83_971;
													}
												else
													{	/* Ast/glo_decl.scm 111 */
														obj_t BgL_az00_975;

														{	/* Ast/glo_decl.scm 111 */
															bool_t BgL_testz00_1779;

															{	/* Ast/glo_decl.scm 111 */
																obj_t BgL_auxz00_1780;

																BgL_auxz00_1780 = CAR(BgL_argsz00_969);
																BgL_testz00_1779 = SYMBOLP(BgL_auxz00_1780);
															}
															if (BgL_testz00_1779)
																{	/* Ast/glo_decl.scm 111 */
																	BgL_az00_975 = CAR(BgL_argsz00_969);
																}
															else
																{	/* Ast/glo_decl.scm 113 */
																	obj_t BgL_pairz00_1554;

																	BgL_pairz00_1554 = BgL_argsz00_969;
																	BgL_az00_975 = CAR(CAR(BgL_pairz00_1554));
																}
														}
														{	/* Ast/glo_decl.scm 111 */
															obj_t BgL_tyz00_976;

															{	/* Ast/glo_decl.scm 114 */
																BgL_typez00_bglt BgL_tz00_979;

																BgL_tz00_979 =
																	BGl_typezd2ofzd2idzf2importzd2locationz20zzast_identz00
																	(BgL_az00_975, BgL_locz00_936,
																	BgL_lociz00_937);
																{	/* Ast/glo_decl.scm 116 */
																	bool_t BgL_testz00_1787;

																	if (
																		((obj_t) (BgL_tz00_979) ==
																			BGl_za2_za2z00zztype_cachez00))
																		{	/* Ast/glo_decl.scm 116 */
																			BgL_testz00_1787 = BgL_exportzf3zf3_934;
																		}
																	else
																		{	/* Ast/glo_decl.scm 116 */
																			BgL_testz00_1787 = ((bool_t) 0);
																		}
																	if (BgL_testz00_1787)
																		{	/* Ast/glo_decl.scm 116 */
																			BgL_tyz00_976 =
																				BGl_za2objza2z00zztype_cachez00;
																		}
																	else
																		{	/* Ast/glo_decl.scm 116 */
																			BgL_tyz00_976 = (obj_t) (BgL_tz00_979);
																		}
																}
															}
															{	/* Ast/glo_decl.scm 114 */

																{	/* Ast/glo_decl.scm 119 */
																	obj_t BgL_arg3404z00_977;

																	obj_t BgL_arg3405z00_978;

																	BgL_arg3404z00_977 = CDR(BgL_argsz00_969);
																	BgL_arg3405z00_978 =
																		MAKE_PAIR(BgL_tyz00_976, BgL_resz00_970);
																	{
																		obj_t BgL_resz00_1795;

																		obj_t BgL_argsz00_1794;

																		BgL_argsz00_1794 = BgL_arg3404z00_977;
																		BgL_resz00_1795 = BgL_arg3405z00_978;
																		BgL_resz00_970 = BgL_resz00_1795;
																		BgL_argsz00_969 = BgL_argsz00_1794;
																		goto BgL_zc3anonymousza33400ze3z83_971;
																	}
																}
															}
														}
													}
											}
									}
									{	/* Ast/glo_decl.scm 103 */
										obj_t BgL_argszd2namezd2_939;

										{
											obj_t BgL_argsz00_950;

											obj_t BgL_resz00_951;

											BgL_argsz00_950 = BgL_argsz00_11;
											BgL_resz00_951 = BNIL;
										BgL_zc3anonymousza33390ze3z83_952:
											if (NULLP(BgL_argsz00_950))
												{	/* Ast/glo_decl.scm 123 */
													BgL_argszd2namezd2_939 =
														bgl_reverse_bang(BgL_resz00_951);
												}
											else
												{	/* Ast/glo_decl.scm 123 */
													if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
															(BgL_argsz00_950)))
														{
															obj_t BgL_argsz00_1802;

															BgL_argsz00_1802 = CDR(BgL_argsz00_950);
															BgL_argsz00_950 = BgL_argsz00_1802;
															goto BgL_zc3anonymousza33390ze3z83_952;
														}
													else
														{	/* Ast/glo_decl.scm 128 */
															obj_t BgL_az00_956;

															{	/* Ast/glo_decl.scm 128 */
																bool_t BgL_testz00_1804;

																{	/* Ast/glo_decl.scm 128 */
																	obj_t BgL_auxz00_1805;

																	BgL_auxz00_1805 = CAR(BgL_argsz00_950);
																	BgL_testz00_1804 = SYMBOLP(BgL_auxz00_1805);
																}
																if (BgL_testz00_1804)
																	{	/* Ast/glo_decl.scm 128 */
																		BgL_az00_956 = CAR(BgL_argsz00_950);
																	}
																else
																	{	/* Ast/glo_decl.scm 130 */
																		obj_t BgL_pairz00_1565;

																		BgL_pairz00_1565 = BgL_argsz00_950;
																		BgL_az00_956 = CAR(CAR(BgL_pairz00_1565));
																	}
															}
															{	/* Ast/glo_decl.scm 128 */
																obj_t BgL_vidz00_957;

																BgL_vidz00_957 =
																	BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																	(BgL_az00_956, BgL_locz00_936);
																{	/* Ast/glo_decl.scm 131 */
																	obj_t BgL_varz00_958;

																	if (
																		(BgL_vidz00_957 ==
																			BGl_symbol3548z00zzast_glozd2declzd2))
																		{	/* Ast/glo_decl.scm 133 */

																			{	/* Ast/glo_decl.scm 133 */

																				BgL_varz00_958 =
																					BGl_gensymz00zz__r4_symbols_6_4z00
																					(BFALSE);
																			}
																		}
																	else
																		{	/* Ast/glo_decl.scm 132 */
																			BgL_varz00_958 = BgL_vidz00_957;
																		}
																	{	/* Ast/glo_decl.scm 132 */

																		{	/* Ast/glo_decl.scm 135 */
																			obj_t BgL_arg3394z00_959;

																			obj_t BgL_arg3395z00_960;

																			BgL_arg3394z00_959 = CDR(BgL_argsz00_950);
																			BgL_arg3395z00_960 =
																				MAKE_PAIR(BgL_varz00_958,
																				BgL_resz00_951);
																			{
																				obj_t BgL_resz00_1818;

																				obj_t BgL_argsz00_1817;

																				BgL_argsz00_1817 = BgL_arg3394z00_959;
																				BgL_resz00_1818 = BgL_arg3395z00_960;
																				BgL_resz00_951 = BgL_resz00_1818;
																				BgL_argsz00_950 = BgL_argsz00_1817;
																				goto BgL_zc3anonymousza33390ze3z83_952;
																			}
																		}
																	}
																}
															}
														}
												}
										}
										{	/* Ast/glo_decl.scm 120 */
											obj_t BgL_idze2typeze2_940;

											BgL_idze2typeze2_940 =
												BGl_parsezd2idzf2importzd2locationzf2zzast_identz00
												(BgL_idz00_10, BgL_locz00_936, BgL_lociz00_937);
											{	/* Ast/glo_decl.scm 136 */
												obj_t BgL_typezd2reszd2_941;

												BgL_typezd2reszd2_941 = CDR(BgL_idze2typeze2_940);
												{	/* Ast/glo_decl.scm 137 */
													obj_t BgL_idz00_942;

													BgL_idz00_942 = CAR(BgL_idze2typeze2_940);
													{	/* Ast/glo_decl.scm 138 */
														BgL_sfunz00_bglt BgL_sfunz00_943;

														BgL_sfunz00_943 =
															BGl_makezd2sfunzd2zzast_varz00(BgL_arityz00_933,
															BUNSPEC, BFALSE, BFALSE, ((bool_t) 1), BUNSPEC,
															BUNSPEC, BNIL, BgL_argszd2typezd2_938,
															BgL_argszd2namezd2_939, BUNSPEC, BgL_classz00_14,
															BNIL, BUNSPEC, BgL_optsz00_8, BgL_keysz00_9,
															BUNSPEC);
														{	/* Ast/glo_decl.scm 139 */
															obj_t BgL_oldz00_944;

															BgL_oldz00_944 =
																BGl_findzd2globalzd2zzast_envz00(BgL_idz00_942,
																BNIL);
															{	/* Ast/glo_decl.scm 146 */
																BgL_globalz00_bglt BgL_globalz00_945;

																BgL_globalz00_945 =
																	BGl_bindzd2globalz12zc0zzast_envz00
																	(BgL_idz00_942, BgL_modulez00_12,
																	(BgL_valuez00_bglt) (BgL_sfunz00_943),
																	BgL_importz00_935, BgL_srcez00_15);
																{	/* Ast/glo_decl.scm 147 */

																	if (
																		(BgL_typezd2reszd2_941 ==
																			BGl_za2_za2z00zztype_cachez00))
																		{	/* Ast/glo_decl.scm 155 */
																			if (BgL_exportzf3zf3_934)
																				{
																					BgL_typez00_bglt BgL_auxz00_1831;

																					BgL_variablez00_bglt BgL_auxz00_1829;

																					BgL_auxz00_1831 =
																						(BgL_typez00_bglt)
																						(BGl_za2objza2z00zztype_cachez00);
																					BgL_auxz00_1829 =
																						(BgL_variablez00_bglt)
																						(BgL_globalz00_945);
																					((((BgL_variablez00_bglt)
																								CREF(BgL_auxz00_1829))->
																							BgL_typez00) =
																						((BgL_typez00_bglt)
																							BgL_auxz00_1831), BUNSPEC);
																				}
																			else
																				{
																					BgL_typez00_bglt BgL_auxz00_1836;

																					BgL_variablez00_bglt BgL_auxz00_1834;

																					BgL_auxz00_1836 =
																						(BgL_typez00_bglt)
																						(BgL_typezd2reszd2_941);
																					BgL_auxz00_1834 =
																						(BgL_variablez00_bglt)
																						(BgL_globalz00_945);
																					((((BgL_variablez00_bglt)
																								CREF(BgL_auxz00_1834))->
																							BgL_typez00) =
																						((BgL_typez00_bglt)
																							BgL_auxz00_1836), BUNSPEC);
																				}
																		}
																	else
																		{
																			BgL_typez00_bglt BgL_auxz00_1841;

																			BgL_variablez00_bglt BgL_auxz00_1839;

																			BgL_auxz00_1841 =
																				(BgL_typez00_bglt)
																				(BgL_typezd2reszd2_941);
																			BgL_auxz00_1839 =
																				(BgL_variablez00_bglt)
																				(BgL_globalz00_945);
																			((((BgL_variablez00_bglt)
																						CREF(BgL_auxz00_1839))->
																					BgL_typez00) =
																				((BgL_typez00_bglt) BgL_auxz00_1841),
																				BUNSPEC);
																		}
																	return BgL_globalz00_945;
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



/* declare-global-noopt-sfun! */
	BgL_globalz00_bglt
		BGl_declarezd2globalzd2nooptzd2sfunz12zc0zzast_glozd2declzd2(obj_t
		BgL_idz00_31, obj_t BgL_argsz00_32, obj_t BgL_modulez00_33,
		obj_t BgL_importz00_34, obj_t BgL_classz00_35, obj_t BgL_srcez00_36,
		obj_t BgL_srciz00_37)
	{
		AN_OBJECT;
		{	/* Ast/glo_decl.scm 181 */
			{	/* Ast/glo_decl.scm 182 */
				long BgL_arityz00_1002;

				BgL_arityz00_1002 =
					BGl_globalzd2arityzd2zztools_argsz00(BgL_argsz00_32);
				{	/* Ast/glo_decl.scm 182 */
					obj_t BgL_argsz00_1003;

					BgL_argsz00_1003 =
						BGl_argsza2zd2ze3argszd2listz41zztools_argsz00(BgL_argsz00_32);
					{	/* Ast/glo_decl.scm 183 */
						bool_t BgL_exportzf3zf3_1004;

						{	/* Ast/glo_decl.scm 184 */
							bool_t BgL__ortest_3368z00_1071;

							if ((BgL_importz00_34 == CNST_TABLE_REF(((long) 0))))
								{	/* Ast/glo_decl.scm 184 */
									BgL__ortest_3368z00_1071 = ((bool_t) 0);
								}
							else
								{	/* Ast/glo_decl.scm 184 */
									BgL__ortest_3368z00_1071 = ((bool_t) 1);
								}
							if (BgL__ortest_3368z00_1071)
								{	/* Ast/glo_decl.scm 184 */
									BgL_exportzf3zf3_1004 = BgL__ortest_3368z00_1071;
								}
							else
								{	/* Ast/glo_decl.scm 185 */
									obj_t BgL__andtest_3369z00_1072;

									{	/* Ast/glo_decl.scm 185 */
										obj_t BgL_arg3466z00_1073;

										obj_t BgL_arg3467z00_1074;

										BgL_arg3466z00_1073 = CNST_TABLE_REF(((long) 1));
										{	/* Ast/glo_decl.scm 185 */
											obj_t BgL_arg3468z00_1075;

											BgL_arg3468z00_1075 =
												BGl_thezd2backendzd2zzbackend_backendz00();
											{
												BgL_backendz00_bglt BgL_auxz00_1852;

												BgL_auxz00_1852 =
													(BgL_backendz00_bglt) (BgL_arg3468z00_1075);
												BgL_arg3467z00_1074 =
													(((BgL_backendz00_bglt) CREF(BgL_auxz00_1852))->
													BgL_debugzd2supportzd2);
										}}
										BgL__andtest_3369z00_1072 =
											BGl_memqz00zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3466z00_1073, BgL_arg3467z00_1074);
									}
									if (CBOOL(BgL__andtest_3369z00_1072))
										{	/* Ast/glo_decl.scm 185 */
											BgL_exportzf3zf3_1004 =
												(
												(long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00)
												>= ((long) 3));
										}
									else
										{	/* Ast/glo_decl.scm 185 */
											BgL_exportzf3zf3_1004 = ((bool_t) 0);
										}
								}
						}
						{	/* Ast/glo_decl.scm 184 */
							obj_t BgL_importz00_1005;

							{	/* Ast/glo_decl.scm 187 */
								bool_t BgL_testz00_1860;

								if ((BgL_importz00_34 == CNST_TABLE_REF(((long) 0))))
									{	/* Ast/glo_decl.scm 188 */
										bool_t BgL_testz00_1864;

										{	/* Ast/glo_decl.scm 188 */
											obj_t BgL_arg3463z00_1068;

											obj_t BgL_arg3464z00_1069;

											BgL_arg3463z00_1068 = CNST_TABLE_REF(((long) 1));
											{	/* Ast/glo_decl.scm 188 */
												obj_t BgL_arg3465z00_1070;

												BgL_arg3465z00_1070 =
													BGl_thezd2backendzd2zzbackend_backendz00();
												{
													BgL_backendz00_bglt BgL_auxz00_1867;

													BgL_auxz00_1867 =
														(BgL_backendz00_bglt) (BgL_arg3465z00_1070);
													BgL_arg3464z00_1069 =
														(((BgL_backendz00_bglt) CREF(BgL_auxz00_1867))->
														BgL_debugzd2supportzd2);
											}}
											BgL_testz00_1864 =
												CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
												(BgL_arg3463z00_1068, BgL_arg3464z00_1069));
										}
										if (BgL_testz00_1864)
											{	/* Ast/glo_decl.scm 188 */
												BgL_testz00_1860 =
													(
													(long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00)
													>= ((long) 3));
											}
										else
											{	/* Ast/glo_decl.scm 188 */
												BgL_testz00_1860 = ((bool_t) 0);
											}
									}
								else
									{	/* Ast/glo_decl.scm 187 */
										BgL_testz00_1860 = ((bool_t) 0);
									}
								if (BgL_testz00_1860)
									{	/* Ast/glo_decl.scm 187 */
										BgL_importz00_1005 = CNST_TABLE_REF(((long) 2));
									}
								else
									{	/* Ast/glo_decl.scm 187 */
										BgL_importz00_1005 = BgL_importz00_34;
									}
							}
							{	/* Ast/glo_decl.scm 187 */
								obj_t BgL_locz00_1006;

								BgL_locz00_1006 =
									BGl_findzd2locationzd2zztools_locationz00(BgL_srcez00_36);
								{	/* Ast/glo_decl.scm 192 */
									obj_t BgL_lociz00_1007;

									BgL_lociz00_1007 =
										BGl_findzd2locationzf2locz20zztools_locationz00
										(BgL_srciz00_37, BgL_locz00_1006);
									{	/* Ast/glo_decl.scm 193 */
										obj_t BgL_argszd2typezd2_1008;

										{	/* Ast/glo_decl.scm 194 */
											bool_t BgL_g3371z00_1037;

											BgL_g3371z00_1037 =
												(BgL_classz00_35 == CNST_TABLE_REF(((long) 3)));
											{
												obj_t BgL_argsz00_1039;

												obj_t BgL_resz00_1040;

												bool_t BgL_sgfunzf3zf3_1041;

												BgL_argsz00_1039 = BgL_argsz00_1003;
												BgL_resz00_1040 = BNIL;
												BgL_sgfunzf3zf3_1041 = BgL_g3371z00_1037;
											BgL_zc3anonymousza33442ze3z83_1042:
												if (NULLP(BgL_argsz00_1039))
													{	/* Ast/glo_decl.scm 198 */
														if ((BgL_arityz00_1002 >= ((long) 0)))
															{	/* Ast/glo_decl.scm 199 */
																BgL_argszd2typezd2_1008 =
																	bgl_reverse_bang(BgL_resz00_1040);
															}
														else
															{	/* Ast/glo_decl.scm 201 */
																obj_t BgL_typez00_1045;

																BgL_typez00_1045 = CAR(BgL_resz00_1040);
																if (
																	(BgL_typez00_1045 ==
																		BGl_za2objza2z00zztype_cachez00))
																	{	/* Ast/glo_decl.scm 203 */
																		BgL_argszd2typezd2_1008 =
																			bgl_reverse_bang(BgL_resz00_1040);
																	}
																else
																	{	/* Ast/glo_decl.scm 203 */
																		if (
																			(BgL_typez00_1045 ==
																				BGl_za2_za2z00zztype_cachez00))
																			{	/* Ast/glo_decl.scm 206 */
																				obj_t BgL_arg3447z00_1048;

																				{	/* Ast/glo_decl.scm 206 */
																					obj_t BgL_arg3448z00_1049;

																					BgL_arg3448z00_1049 =
																						CDR(BgL_resz00_1040);
																					BgL_arg3447z00_1048 =
																						MAKE_PAIR
																						(BGl_za2objza2z00zztype_cachez00,
																						BgL_arg3448z00_1049);
																				}
																				BgL_argszd2typezd2_1008 =
																					bgl_reverse_bang(BgL_arg3447z00_1048);
																			}
																		else
																			{	/* Ast/glo_decl.scm 205 */
																				BgL_argszd2typezd2_1008 =
																					BGl_userzd2errorzd2zztools_errorz00
																					(BgL_idz00_31,
																					BGl_string3550z00zzast_glozd2declzd2,
																					BGl_shapez00zztools_shapez00
																					(BgL_typez00_1045), BNIL);
																			}
																	}
															}
													}
												else
													{	/* Ast/glo_decl.scm 198 */
														if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00
															(CAR(BgL_argsz00_1039)))
															{	/* Ast/glo_decl.scm 212 */
																obj_t BgL_arg3453z00_1054;

																BgL_arg3453z00_1054 =
																	MAKE_PAIR(BGl_za2objza2z00zztype_cachez00,
																	BgL_resz00_1040);
																BgL_argszd2typezd2_1008 =
																	bgl_reverse_bang(BgL_arg3453z00_1054);
															}
														else
															{	/* Ast/glo_decl.scm 214 */
																obj_t BgL_typez00_1055;

																{	/* Ast/glo_decl.scm 214 */
																	BgL_typez00_bglt BgL_tz00_1058;

																	BgL_tz00_1058 =
																		BGl_typezd2ofzd2idzf2importzd2locationz20zzast_identz00
																		(CAR(BgL_argsz00_1039), BgL_locz00_1006,
																		BgL_lociz00_1007);
																	{	/* Ast/glo_decl.scm 216 */
																		bool_t BgL_testz00_1902;

																		if (
																			((obj_t) (BgL_tz00_1058) ==
																				BGl_za2_za2z00zztype_cachez00))
																			{	/* Ast/glo_decl.scm 216 */
																				if (BgL_exportzf3zf3_1004)
																					{	/* Ast/glo_decl.scm 217 */
																						BgL_testz00_1902 =
																							BgL_exportzf3zf3_1004;
																					}
																				else
																					{	/* Ast/glo_decl.scm 217 */
																						BgL_testz00_1902 =
																							BgL_sgfunzf3zf3_1041;
																					}
																			}
																		else
																			{	/* Ast/glo_decl.scm 216 */
																				BgL_testz00_1902 = ((bool_t) 0);
																			}
																		if (BgL_testz00_1902)
																			{	/* Ast/glo_decl.scm 216 */
																				BgL_typez00_1055 =
																					BGl_za2objza2z00zztype_cachez00;
																			}
																		else
																			{	/* Ast/glo_decl.scm 216 */
																				BgL_typez00_1055 =
																					(obj_t) (BgL_tz00_1058);
																			}
																	}
																}
																{	/* Ast/glo_decl.scm 220 */
																	obj_t BgL_arg3454z00_1056;

																	obj_t BgL_arg3455z00_1057;

																	BgL_arg3454z00_1056 = CDR(BgL_argsz00_1039);
																	BgL_arg3455z00_1057 =
																		MAKE_PAIR(BgL_typez00_1055,
																		BgL_resz00_1040);
																	{
																		bool_t BgL_sgfunzf3zf3_1912;

																		obj_t BgL_resz00_1911;

																		obj_t BgL_argsz00_1910;

																		BgL_argsz00_1910 = BgL_arg3454z00_1056;
																		BgL_resz00_1911 = BgL_arg3455z00_1057;
																		BgL_sgfunzf3zf3_1912 = ((bool_t) 0);
																		BgL_sgfunzf3zf3_1041 = BgL_sgfunzf3zf3_1912;
																		BgL_resz00_1040 = BgL_resz00_1911;
																		BgL_argsz00_1039 = BgL_argsz00_1910;
																		goto BgL_zc3anonymousza33442ze3z83_1042;
																	}
																}
															}
													}
											}
										}
										{	/* Ast/glo_decl.scm 194 */
											obj_t BgL_argszd2namezd2_1009;

											{
												obj_t BgL_argsz00_1024;

												obj_t BgL_resz00_1025;

												BgL_argsz00_1024 = BgL_argsz00_1003;
												BgL_resz00_1025 = BNIL;
											BgL_zc3anonymousza33434ze3z83_1026:
												if (NULLP(BgL_argsz00_1024))
													{	/* Ast/glo_decl.scm 226 */
														BgL_argszd2namezd2_1009 =
															bgl_reverse_bang(BgL_resz00_1025);
													}
												else
													{	/* Ast/glo_decl.scm 226 */
														if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00
															(CAR(BgL_argsz00_1024)))
															{
																obj_t BgL_argsz00_1919;

																BgL_argsz00_1919 = CDR(BgL_argsz00_1024);
																BgL_argsz00_1024 = BgL_argsz00_1919;
																goto BgL_zc3anonymousza33434ze3z83_1026;
															}
														else
															{	/* Ast/glo_decl.scm 231 */
																obj_t BgL_az00_1030;

																BgL_az00_1030 =
																	BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(CAR
																	(BgL_argsz00_1024), BgL_locz00_1006);
																{	/* Ast/glo_decl.scm 232 */
																	obj_t BgL_arg3438z00_1031;

																	obj_t BgL_arg3439z00_1032;

																	BgL_arg3438z00_1031 = CDR(BgL_argsz00_1024);
																	BgL_arg3439z00_1032 =
																		MAKE_PAIR(BgL_az00_1030, BgL_resz00_1025);
																	{
																		obj_t BgL_resz00_1926;

																		obj_t BgL_argsz00_1925;

																		BgL_argsz00_1925 = BgL_arg3438z00_1031;
																		BgL_resz00_1926 = BgL_arg3439z00_1032;
																		BgL_resz00_1025 = BgL_resz00_1926;
																		BgL_argsz00_1024 = BgL_argsz00_1925;
																		goto BgL_zc3anonymousza33434ze3z83_1026;
																	}
																}
															}
													}
											}
											{	/* Ast/glo_decl.scm 223 */
												obj_t BgL_idze2typeze2_1010;

												BgL_idze2typeze2_1010 =
													BGl_parsezd2idzf2importzd2locationzf2zzast_identz00
													(BgL_idz00_31, BgL_locz00_1006, BgL_lociz00_1007);
												{	/* Ast/glo_decl.scm 233 */
													obj_t BgL_typezd2reszd2_1011;

													BgL_typezd2reszd2_1011 = CDR(BgL_idze2typeze2_1010);
													{	/* Ast/glo_decl.scm 234 */
														obj_t BgL_idz00_1012;

														BgL_idz00_1012 = CAR(BgL_idze2typeze2_1010);
														{	/* Ast/glo_decl.scm 235 */
															BgL_sfunz00_bglt BgL_sfunz00_1013;

															BgL_sfunz00_1013 =
																BGl_makezd2sfunzd2zzast_varz00
																(BgL_arityz00_1002, BUNSPEC, BFALSE, BFALSE,
																((bool_t) 1), BUNSPEC, BUNSPEC, BNIL,
																BgL_argszd2typezd2_1008,
																BgL_argszd2namezd2_1009, BUNSPEC,
																BgL_classz00_35,
																BGl_dssslzd2formalszd2zztools_dssslz00
																(BgL_argsz00_1003), BUNSPEC, BNIL, BNIL,
																BUNSPEC);
															{	/* Ast/glo_decl.scm 236 */
																obj_t BgL_oldz00_1014;

																BgL_oldz00_1014 =
																	BGl_findzd2globalzd2zzast_envz00
																	(BgL_idz00_1012, BNIL);
																{	/* Ast/glo_decl.scm 242 */
																	BgL_globalz00_bglt BgL_globalz00_1015;

																	BgL_globalz00_1015 =
																		BGl_bindzd2globalz12zc0zzast_envz00
																		(BgL_idz00_1012, BgL_modulez00_33,
																		(BgL_valuez00_bglt) (BgL_sfunz00_1013),
																		BgL_importz00_1005, BgL_srcez00_36);
																	{	/* Ast/glo_decl.scm 243 */

																		if (
																			(BgL_typezd2reszd2_1011 ==
																				BGl_za2_za2z00zztype_cachez00))
																			{	/* Ast/glo_decl.scm 251 */
																				if (BgL_exportzf3zf3_1004)
																					{
																						BgL_typez00_bglt BgL_auxz00_1940;

																						BgL_variablez00_bglt
																							BgL_auxz00_1938;
																						BgL_auxz00_1940 =
																							(BgL_typez00_bglt)
																							(BGl_za2objza2z00zztype_cachez00);
																						BgL_auxz00_1938 =
																							(BgL_variablez00_bglt)
																							(BgL_globalz00_1015);
																						((((BgL_variablez00_bglt)
																									CREF(BgL_auxz00_1938))->
																								BgL_typez00) =
																							((BgL_typez00_bglt)
																								BgL_auxz00_1940), BUNSPEC);
																					}
																				else
																					{
																						BgL_typez00_bglt BgL_auxz00_1945;

																						BgL_variablez00_bglt
																							BgL_auxz00_1943;
																						BgL_auxz00_1945 =
																							(BgL_typez00_bglt)
																							(BgL_typezd2reszd2_1011);
																						BgL_auxz00_1943 =
																							(BgL_variablez00_bglt)
																							(BgL_globalz00_1015);
																						((((BgL_variablez00_bglt)
																									CREF(BgL_auxz00_1943))->
																								BgL_typez00) =
																							((BgL_typez00_bglt)
																								BgL_auxz00_1945), BUNSPEC);
																					}
																			}
																		else
																			{
																				BgL_typez00_bglt BgL_auxz00_1950;

																				BgL_variablez00_bglt BgL_auxz00_1948;

																				BgL_auxz00_1950 =
																					(BgL_typez00_bglt)
																					(BgL_typezd2reszd2_1011);
																				BgL_auxz00_1948 =
																					(BgL_variablez00_bglt)
																					(BgL_globalz00_1015);
																				((((BgL_variablez00_bglt)
																							CREF(BgL_auxz00_1948))->
																						BgL_typez00) =
																					((BgL_typez00_bglt) BgL_auxz00_1950),
																					BUNSPEC);
																			}
																		return BgL_globalz00_1015;
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



/* declare-global-svar! */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_declarezd2globalzd2svarz12z12zzast_glozd2declzd2(obj_t BgL_idz00_38,
		obj_t BgL_modulez00_39, obj_t BgL_importz00_40, obj_t BgL_srcez00_41,
		obj_t BgL_srciz00_42)
	{
		AN_OBJECT;
		{	/* Ast/glo_decl.scm 263 */
			{	/* Ast/glo_decl.scm 264 */
				obj_t BgL_locz00_1077;

				BgL_locz00_1077 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_srcez00_41);
				{	/* Ast/glo_decl.scm 264 */
					obj_t BgL_lociz00_1078;

					BgL_lociz00_1078 =
						BGl_findzd2locationzf2locz20zztools_locationz00(BgL_srciz00_42,
						BgL_locz00_1077);
					{	/* Ast/glo_decl.scm 265 */
						obj_t BgL_idze2typeze2_1079;

						BgL_idze2typeze2_1079 =
							BGl_parsezd2idzf2importzd2locationzf2zzast_identz00(BgL_idz00_38,
							BgL_locz00_1077, BgL_lociz00_1078);
						{	/* Ast/glo_decl.scm 266 */
							obj_t BgL_typez00_1080;

							{	/* Ast/glo_decl.scm 267 */
								obj_t BgL_typez00_1095;

								BgL_typez00_1095 = CDR(BgL_idze2typeze2_1079);
								{	/* Ast/glo_decl.scm 271 */
									bool_t BgL_testz00_1957;

									{	/* Ast/glo_decl.scm 271 */
										obj_t BgL_auxz00_1958;

										{
											BgL_typez00_bglt BgL_auxz00_1959;

											BgL_auxz00_1959 = (BgL_typez00_bglt) (BgL_typez00_1095);
											BgL_auxz00_1958 =
												(((BgL_typez00_bglt) CREF(BgL_auxz00_1959))->
												BgL_classz00);
										}
										BgL_testz00_1957 =
											(BgL_auxz00_1958 == CNST_TABLE_REF(((long) 4)));
									}
									if (BgL_testz00_1957)
										{	/* Ast/glo_decl.scm 276 */
											bool_t BgL_testz00_1964;

											if ((BgL_typez00_1095 == BGl_za2_za2z00zztype_cachez00))
												{	/* Ast/glo_decl.scm 277 */
													obj_t BgL__ortest_3375z00_1099;

													BgL__ortest_3375z00_1099 =
														BGl_memqz00zz__r4_pairs_and_lists_6_3z00
														(BgL_importz00_40, CNST_TABLE_REF(((long) 5)));
													if (CBOOL(BgL__ortest_3375z00_1099))
														{	/* Ast/glo_decl.scm 277 */
															BgL_testz00_1964 =
																CBOOL(BgL__ortest_3375z00_1099);
														}
													else
														{	/* Ast/glo_decl.scm 278 */
															obj_t BgL__andtest_3376z00_1100;

															{	/* Ast/glo_decl.scm 278 */
																obj_t BgL_arg3482z00_1101;

																obj_t BgL_arg3483z00_1102;

																BgL_arg3482z00_1101 =
																	CNST_TABLE_REF(((long) 1));
																{	/* Ast/glo_decl.scm 279 */
																	obj_t BgL_arg3484z00_1103;

																	BgL_arg3484z00_1103 =
																		BGl_thezd2backendzd2zzbackend_backendz00();
																	{
																		BgL_backendz00_bglt BgL_auxz00_1974;

																		BgL_auxz00_1974 =
																			(BgL_backendz00_bglt)
																			(BgL_arg3484z00_1103);
																		BgL_arg3483z00_1102 =
																			(((BgL_backendz00_bglt)
																				CREF(BgL_auxz00_1974))->
																			BgL_debugzd2supportzd2);
																}}
																BgL__andtest_3376z00_1100 =
																	BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3482z00_1101, BgL_arg3483z00_1102);
															}
															if (CBOOL(BgL__andtest_3376z00_1100))
																{	/* Ast/glo_decl.scm 278 */
																	BgL_testz00_1964 =
																		(
																		(long)
																		CINT
																		(BGl_za2bdbzd2debugza2zd2zzengine_paramz00)
																		> ((long) 0));
																}
															else
																{	/* Ast/glo_decl.scm 278 */
																	BgL_testz00_1964 = ((bool_t) 0);
																}
														}
												}
											else
												{	/* Ast/glo_decl.scm 276 */
													BgL_testz00_1964 = ((bool_t) 0);
												}
											if (BgL_testz00_1964)
												{	/* Ast/glo_decl.scm 276 */
													BgL_typez00_1080 = BGl_za2objza2z00zztype_cachez00;
												}
											else
												{	/* Ast/glo_decl.scm 276 */
													BgL_typez00_1080 = BgL_typez00_1095;
												}
										}
									else
										{	/* Ast/glo_decl.scm 272 */
											obj_t BgL_arg3486z00_1105;

											BgL_arg3486z00_1105 =
												BGl_shapez00zztools_shapez00(BgL_typez00_1095);
											{	/* Ast/glo_decl.scm 272 */
												obj_t BgL_list3487z00_1106;

												BgL_list3487z00_1106 =
													MAKE_PAIR(BGl_za2_za2z00zztype_cachez00, BNIL);
												BgL_typez00_1080 =
													BGl_userzd2errorzd2zztools_errorz00(BgL_idz00_38,
													BGl_string3551z00zzast_glozd2declzd2,
													BgL_arg3486z00_1105, BgL_list3487z00_1106);
											}
										}
								}
							}
							{	/* Ast/glo_decl.scm 267 */
								obj_t BgL_importz00_1081;

								{	/* Ast/glo_decl.scm 284 */
									bool_t BgL_testz00_1985;

									if ((BgL_importz00_40 == CNST_TABLE_REF(((long) 0))))
										{	/* Ast/glo_decl.scm 285 */
											bool_t BgL_testz00_1989;

											{	/* Ast/glo_decl.scm 285 */
												obj_t BgL_arg3476z00_1092;

												obj_t BgL_arg3477z00_1093;

												BgL_arg3476z00_1092 = CNST_TABLE_REF(((long) 1));
												{	/* Ast/glo_decl.scm 285 */
													obj_t BgL_arg3478z00_1094;

													BgL_arg3478z00_1094 =
														BGl_thezd2backendzd2zzbackend_backendz00();
													{
														BgL_backendz00_bglt BgL_auxz00_1992;

														BgL_auxz00_1992 =
															(BgL_backendz00_bglt) (BgL_arg3478z00_1094);
														BgL_arg3477z00_1093 =
															(((BgL_backendz00_bglt) CREF(BgL_auxz00_1992))->
															BgL_debugzd2supportzd2);
												}}
												BgL_testz00_1989 =
													CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
													(BgL_arg3476z00_1092, BgL_arg3477z00_1093));
											}
											if (BgL_testz00_1989)
												{	/* Ast/glo_decl.scm 285 */
													BgL_testz00_1985 =
														(
														(long)
														CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >=
														((long) 3));
												}
											else
												{	/* Ast/glo_decl.scm 285 */
													BgL_testz00_1985 = ((bool_t) 0);
												}
										}
									else
										{	/* Ast/glo_decl.scm 284 */
											BgL_testz00_1985 = ((bool_t) 0);
										}
									if (BgL_testz00_1985)
										{	/* Ast/glo_decl.scm 284 */
											BgL_importz00_1081 = CNST_TABLE_REF(((long) 2));
										}
									else
										{	/* Ast/glo_decl.scm 284 */
											BgL_importz00_1081 = BgL_importz00_40;
										}
								}
								{	/* Ast/glo_decl.scm 284 */
									obj_t BgL_idz00_1082;

									BgL_idz00_1082 = CAR(BgL_idze2typeze2_1079);
									{	/* Ast/glo_decl.scm 289 */
										BgL_svarz00_bglt BgL_svarz00_1083;

										BgL_svarz00_1083 = BGl_makezd2svarzd2zzast_varz00(BUNSPEC);
										{	/* Ast/glo_decl.scm 290 */
											obj_t BgL_oldz00_1084;

											BgL_oldz00_1084 =
												BGl_findzd2globalzd2zzast_envz00(BgL_idz00_1082, BNIL);
											{	/* Ast/glo_decl.scm 291 */
												BgL_globalz00_bglt BgL_globalz00_1085;

												BgL_globalz00_1085 =
													BGl_bindzd2globalz12zc0zzast_envz00(BgL_idz00_1082,
													BgL_modulez00_39,
													(BgL_valuez00_bglt) (BgL_svarz00_1083),
													BgL_importz00_1081, BgL_srcez00_41);
												{	/* Ast/glo_decl.scm 292 */

													{
														BgL_typez00_bglt BgL_auxz00_2007;

														BgL_variablez00_bglt BgL_auxz00_2005;

														BgL_auxz00_2007 =
															(BgL_typez00_bglt) (BgL_typez00_1080);
														BgL_auxz00_2005 =
															(BgL_variablez00_bglt) (BgL_globalz00_1085);
														((((BgL_variablez00_bglt) CREF(BgL_auxz00_2005))->
																BgL_typez00) =
															((BgL_typez00_bglt) BgL_auxz00_2007), BUNSPEC);
													}
													{	/* Ast/glo_decl.scm 296 */
														obj_t BgL_arg3470z00_1086;

														if (
															(BgL_importz00_1081 ==
																CNST_TABLE_REF(((long) 0))))
															{	/* Ast/glo_decl.scm 296 */
																BgL_arg3470z00_1086 =
																	CNST_TABLE_REF(((long) 6));
															}
														else
															{	/* Ast/glo_decl.scm 296 */
																BgL_arg3470z00_1086 =
																	CNST_TABLE_REF(((long) 7));
															}
														{
															BgL_variablez00_bglt BgL_auxz00_2015;

															BgL_auxz00_2015 =
																(BgL_variablez00_bglt) (BgL_globalz00_1085);
															((((BgL_variablez00_bglt) CREF(BgL_auxz00_2015))->
																	BgL_accessz00) =
																((obj_t) BgL_arg3470z00_1086), BUNSPEC);
													}}
													return BgL_globalz00_1085;
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



/* _declare-global-svar! */
	obj_t BGl__declarezd2globalzd2svarz12z12zzast_glozd2declzd2(obj_t
		BgL_envz00_1664, obj_t BgL_idz00_1665, obj_t BgL_modulez00_1666,
		obj_t BgL_importz00_1667, obj_t BgL_srcez00_1668, obj_t BgL_srciz00_1669)
	{
		AN_OBJECT;
		{	/* Ast/glo_decl.scm 263 */
			return
				(obj_t) (BGl_declarezd2globalzd2svarz12z12zzast_glozd2declzd2
				(BgL_idz00_1665, BgL_modulez00_1666, BgL_importz00_1667,
					BgL_srcez00_1668, BgL_srciz00_1669));
		}
	}



/* declare-global-scnst! */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_declarezd2globalzd2scnstz12z12zzast_glozd2declzd2(obj_t BgL_idz00_43,
		obj_t BgL_modulez00_44, obj_t BgL_importz00_45, obj_t BgL_nodez00_46,
		obj_t BgL_classz00_47, obj_t BgL_locz00_48)
	{
		AN_OBJECT;
		{	/* Ast/glo_decl.scm 303 */
			{	/* Ast/glo_decl.scm 304 */
				obj_t BgL_idze2typeze2_1109;

				BgL_idze2typeze2_1109 =
					BGl_parsezd2idzd2zzast_identz00(BgL_idz00_43, BgL_locz00_48);
				{	/* Ast/glo_decl.scm 304 */
					obj_t BgL_typez00_1110;

					{	/* Ast/glo_decl.scm 305 */
						obj_t BgL_typez00_1114;

						BgL_typez00_1114 = CDR(BgL_idze2typeze2_1109);
						if ((BgL_typez00_1114 == BGl_za2_za2z00zztype_cachez00))
							{	/* Ast/glo_decl.scm 309 */
								BgL_typez00_1110 =
									BGl_internalzd2errorzd2zztools_errorz00(BgL_idz00_43,
									BGl_string3551z00zzast_glozd2declzd2,
									BGl_shapez00zztools_shapez00(BgL_typez00_1114));
							}
						else
							{	/* Ast/glo_decl.scm 309 */
								BgL_typez00_1110 = BgL_typez00_1114;
							}
					}
					{	/* Ast/glo_decl.scm 305 */
						obj_t BgL_idz00_1111;

						BgL_idz00_1111 = CAR(BgL_idze2typeze2_1109);
						{	/* Ast/glo_decl.scm 315 */
							BgL_scnstz00_bglt BgL_scnstz00_1112;

							BgL_scnstz00_1112 =
								BGl_makezd2scnstzd2zzast_varz00(BgL_nodez00_46, BgL_classz00_47,
								BUNSPEC);
							{	/* Ast/glo_decl.scm 316 */
								BgL_globalz00_bglt BgL_globalz00_1113;

								BgL_globalz00_1113 =
									BGl_bindzd2globalz12zc0zzast_envz00(BgL_idz00_1111,
									BgL_modulez00_44, (BgL_valuez00_bglt) (BgL_scnstz00_1112),
									BgL_importz00_45, CNST_TABLE_REF(((long) 8)));
								{	/* Ast/glo_decl.scm 319 */

									{
										BgL_typez00_bglt BgL_auxz00_2033;

										BgL_variablez00_bglt BgL_auxz00_2031;

										BgL_auxz00_2033 = (BgL_typez00_bglt) (BgL_typez00_1110);
										BgL_auxz00_2031 =
											(BgL_variablez00_bglt) (BgL_globalz00_1113);
										((((BgL_variablez00_bglt) CREF(BgL_auxz00_2031))->
												BgL_typez00) =
											((BgL_typez00_bglt) BgL_auxz00_2033), BUNSPEC);
									}
									{	/* Ast/glo_decl.scm 323 */
										BgL_variablez00_bglt BgL_obj1704z00_1626;

										obj_t BgL_val1703z00_1627;

										BgL_obj1704z00_1626 =
											(BgL_variablez00_bglt) (BgL_globalz00_1113);
										BgL_val1703z00_1627 = CNST_TABLE_REF(((long) 6));
										((((BgL_variablez00_bglt) CREF(BgL_obj1704z00_1626))->
												BgL_accessz00) =
											((obj_t) BgL_val1703z00_1627), BUNSPEC);
									}
									return BgL_globalz00_1113;
								}
							}
						}
					}
				}
			}
		}
	}



/* _declare-global-scnst! */
	obj_t BGl__declarezd2globalzd2scnstz12z12zzast_glozd2declzd2(obj_t
		BgL_envz00_1670, obj_t BgL_idz00_1671, obj_t BgL_modulez00_1672,
		obj_t BgL_importz00_1673, obj_t BgL_nodez00_1674, obj_t BgL_classz00_1675,
		obj_t BgL_locz00_1676)
	{
		AN_OBJECT;
		{	/* Ast/glo_decl.scm 303 */
			return
				(obj_t) (BGl_declarezd2globalzd2scnstz12z12zzast_glozd2declzd2
				(BgL_idz00_1671, BgL_modulez00_1672, BgL_importz00_1673,
					BgL_nodez00_1674, BgL_classz00_1675, BgL_locz00_1676));
		}
	}



/* declare-global-cfun! */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_declarezd2globalzd2cfunz12z12zzast_glozd2declzd2(obj_t BgL_idz00_49,
		obj_t BgL_modulez00_50, obj_t BgL_namez00_51, obj_t BgL_treszd2idzd2_52,
		obj_t BgL_targszd2idzd2_53, bool_t BgL_infixzf3zf3_54,
		bool_t BgL_macrozf3zf3_55, obj_t BgL_srcez00_56, obj_t BgL_srciz00_57)
	{
		AN_OBJECT;
		{	/* Ast/glo_decl.scm 330 */
			{	/* Ast/glo_decl.scm 331 */
				long BgL_arityz00_1118;

				BgL_arityz00_1118 =
					BGl_globalzd2arityzd2zztools_argsz00(BgL_targszd2idzd2_53);
				{	/* Ast/glo_decl.scm 331 */
					obj_t BgL_locz00_1119;

					BgL_locz00_1119 =
						BGl_findzd2locationzd2zztools_locationz00(BgL_srcez00_56);
					{	/* Ast/glo_decl.scm 332 */
						obj_t BgL_lociz00_1120;

						BgL_lociz00_1120 =
							BGl_findzd2locationzf2locz20zztools_locationz00(BgL_srciz00_57,
							BgL_locz00_1119);
						{	/* Ast/glo_decl.scm 333 */
							BgL_typez00_bglt BgL_typezd2reszd2_1121;

							BgL_typezd2reszd2_1121 =
								BGl_usezd2foreignzd2typezf2importzd2locz12z32zztype_envz00
								(BgL_treszd2idzd2_52, BgL_locz00_1119, BgL_lociz00_1120);
							{	/* Ast/glo_decl.scm 334 */
								obj_t BgL_typezd2argszd2_1122;

								{	/* Ast/glo_decl.scm 335 */
									obj_t BgL_l3381z00_1125;

									BgL_l3381z00_1125 =
										BGl_argsza2zd2ze3argszd2listz41zztools_argsz00
										(BgL_targszd2idzd2_53);
									if (NULLP(BgL_l3381z00_1125))
										{	/* Ast/glo_decl.scm 335 */
											BgL_typezd2argszd2_1122 = BNIL;
										}
									else
										{	/* Ast/glo_decl.scm 335 */
											obj_t BgL_head3383z00_1127;

											BgL_head3383z00_1127 = MAKE_PAIR(BNIL, BNIL);
											{
												obj_t BgL_l3381z00_1129;

												obj_t BgL_tail3384z00_1130;

												BgL_l3381z00_1129 = BgL_l3381z00_1125;
												BgL_tail3384z00_1130 = BgL_head3383z00_1127;
											BgL_zc3anonymousza33494ze3z83_1131:
												if (NULLP(BgL_l3381z00_1129))
													{	/* Ast/glo_decl.scm 335 */
														BgL_typezd2argszd2_1122 = CDR(BgL_head3383z00_1127);
													}
												else
													{	/* Ast/glo_decl.scm 335 */
														obj_t BgL_newtail3385z00_1133;

														{	/* Ast/glo_decl.scm 335 */
															BgL_typez00_bglt BgL_arg3497z00_1135;

															BgL_arg3497z00_1135 =
																BGl_usezd2foreignzd2typezf2importzd2locz12z32zztype_envz00
																(CAR(BgL_l3381z00_1129), BgL_locz00_1119,
																BgL_lociz00_1120);
															BgL_newtail3385z00_1133 =
																MAKE_PAIR((obj_t) (BgL_arg3497z00_1135), BNIL);
														}
														SET_CDR(BgL_tail3384z00_1130,
															BgL_newtail3385z00_1133);
														{
															obj_t BgL_tail3384z00_2059;

															obj_t BgL_l3381z00_2057;

															BgL_l3381z00_2057 = CDR(BgL_l3381z00_1129);
															BgL_tail3384z00_2059 = BgL_newtail3385z00_1133;
															BgL_tail3384z00_1130 = BgL_tail3384z00_2059;
															BgL_l3381z00_1129 = BgL_l3381z00_2057;
															goto BgL_zc3anonymousza33494ze3z83_1131;
														}
													}
											}
										}
								}
								{	/* Ast/glo_decl.scm 335 */
									BgL_cfunz00_bglt BgL_cfunz00_1123;

									BgL_cfunz00_1123 =
										BGl_makezd2cfunzd2zzast_varz00(BgL_arityz00_1118, BUNSPEC,
										BFALSE, BFALSE, ((bool_t) 1), BUNSPEC, BUNSPEC,
										BgL_typezd2argszd2_1122, BgL_macrozf3zf3_55,
										BgL_infixzf3zf3_54, BNIL);
									{	/* Ast/glo_decl.scm 338 */
										BgL_globalz00_bglt BgL_globalz00_1124;

										BgL_globalz00_1124 =
											BGl_bindzd2globalz12zc0zzast_envz00(BgL_idz00_49,
											BgL_modulez00_50, (BgL_valuez00_bglt) (BgL_cfunz00_1123),
											CNST_TABLE_REF(((long) 9)), BgL_srcez00_56);
										{	/* Ast/glo_decl.scm 342 */

											{
												BgL_variablez00_bglt BgL_auxz00_2064;

												BgL_auxz00_2064 =
													(BgL_variablez00_bglt) (BgL_globalz00_1124);
												((((BgL_variablez00_bglt) CREF(BgL_auxz00_2064))->
														BgL_namez00) = ((obj_t) BgL_namez00_51), BUNSPEC);
											}
											{
												BgL_variablez00_bglt BgL_auxz00_2067;

												BgL_auxz00_2067 =
													(BgL_variablez00_bglt) (BgL_globalz00_1124);
												((((BgL_variablez00_bglt) CREF(BgL_auxz00_2067))->
														BgL_typez00) =
													((BgL_typez00_bglt) BgL_typezd2reszd2_1121), BUNSPEC);
											}
											((((BgL_globalz00_bglt) CREF(BgL_globalz00_1124))->
													BgL_evaluablezf3zf3) =
												((bool_t) ((bool_t) 0)), BUNSPEC);
											return BgL_globalz00_1124;
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



/* _declare-global-cfun! */
	obj_t BGl__declarezd2globalzd2cfunz12z12zzast_glozd2declzd2(obj_t
		BgL_envz00_1677, obj_t BgL_idz00_1678, obj_t BgL_modulez00_1679,
		obj_t BgL_namez00_1680, obj_t BgL_treszd2idzd2_1681,
		obj_t BgL_targszd2idzd2_1682, obj_t BgL_infixzf3zf3_1683,
		obj_t BgL_macrozf3zf3_1684, obj_t BgL_srcez00_1685, obj_t BgL_srciz00_1686)
	{
		AN_OBJECT;
		{	/* Ast/glo_decl.scm 330 */
			return
				(obj_t) (BGl_declarezd2globalzd2cfunz12z12zzast_glozd2declzd2
				(BgL_idz00_1678, BgL_modulez00_1679, BgL_namez00_1680,
					BgL_treszd2idzd2_1681, BgL_targszd2idzd2_1682,
					CBOOL(BgL_infixzf3zf3_1683), CBOOL(BgL_macrozf3zf3_1684),
					BgL_srcez00_1685, BgL_srciz00_1686));
		}
	}



/* declare-global-cvar! */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_declarezd2globalzd2cvarz12z12zzast_glozd2declzd2(obj_t BgL_idz00_58,
		obj_t BgL_namez00_59, obj_t BgL_typezd2idzd2_60, bool_t BgL_macrozf3zf3_61,
		obj_t BgL_srcez00_62, obj_t BgL_srciz00_63)
	{
		AN_OBJECT;
		{	/* Ast/glo_decl.scm 355 */
			{	/* Ast/glo_decl.scm 356 */
				obj_t BgL_locz00_1645;

				BgL_locz00_1645 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_srcez00_62);
				{	/* Ast/glo_decl.scm 356 */
					obj_t BgL_lociz00_1646;

					BgL_lociz00_1646 =
						BGl_findzd2locationzf2locz20zztools_locationz00(BgL_srciz00_63,
						BgL_locz00_1645);
					{	/* Ast/glo_decl.scm 356 */
						BgL_typez00_bglt BgL_typez00_1647;

						BgL_typez00_1647 =
							BGl_usezd2foreignzd2typezf2importzd2locz12z32zztype_envz00
							(BgL_typezd2idzd2_60, BgL_locz00_1645, BgL_lociz00_1646);
						{	/* Ast/glo_decl.scm 356 */
							BgL_cvarz00_bglt BgL_cvarz00_1648;

							BgL_cvarz00_1648 =
								BGl_makezd2cvarzd2zzast_varz00(BgL_macrozf3zf3_61);
							{	/* Ast/glo_decl.scm 356 */
								BgL_globalz00_bglt BgL_globalz00_1649;

								BgL_globalz00_1649 =
									BGl_bindzd2globalz12zc0zzast_envz00(BgL_idz00_58,
									CNST_TABLE_REF(((long) 9)),
									(BgL_valuez00_bglt) (BgL_cvarz00_1648),
									CNST_TABLE_REF(((long) 9)), BgL_srcez00_62);
								{	/* Ast/glo_decl.scm 356 */

									{
										BgL_variablez00_bglt BgL_auxz00_2083;

										BgL_auxz00_2083 =
											(BgL_variablez00_bglt) (BgL_globalz00_1649);
										((((BgL_variablez00_bglt) CREF(BgL_auxz00_2083))->
												BgL_namez00) = ((obj_t) BgL_namez00_59), BUNSPEC);
									}
									{
										BgL_variablez00_bglt BgL_auxz00_2086;

										BgL_auxz00_2086 =
											(BgL_variablez00_bglt) (BgL_globalz00_1649);
										((((BgL_variablez00_bglt) CREF(BgL_auxz00_2086))->
												BgL_typez00) =
											((BgL_typez00_bglt) BgL_typez00_1647), BUNSPEC);
									}
									((((BgL_globalz00_bglt) CREF(BgL_globalz00_1649))->
											BgL_evaluablezf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
									return BgL_globalz00_1649;
								}
							}
						}
					}
				}
			}
		}
	}



/* _declare-global-cvar! */
	obj_t BGl__declarezd2globalzd2cvarz12z12zzast_glozd2declzd2(obj_t
		BgL_envz00_1687, obj_t BgL_idz00_1688, obj_t BgL_namez00_1689,
		obj_t BgL_typezd2idzd2_1690, obj_t BgL_macrozf3zf3_1691,
		obj_t BgL_srcez00_1692, obj_t BgL_srciz00_1693)
	{
		AN_OBJECT;
		{	/* Ast/glo_decl.scm 355 */
			return
				(obj_t) (BGl_declarezd2globalzd2cvarz12z12zzast_glozd2declzd2
				(BgL_idz00_1688, BgL_namez00_1689, BgL_typezd2idzd2_1690,
					CBOOL(BgL_macrozf3zf3_1691), BgL_srcez00_1692, BgL_srciz00_1693));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_glozd2declzd2()
	{
		AN_OBJECT;
		{	/* Ast/glo_decl.scm 17 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_glozd2declzd2()
	{
		AN_OBJECT;
		{	/* Ast/glo_decl.scm 17 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_glozd2declzd2()
	{
		AN_OBJECT;
		{	/* Ast/glo_decl.scm 17 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3552z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3552z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 320731191),
				BSTRING_TO_STRING(BGl_string3552z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3552z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zztools_dssslz00(((long) 315398661),
				BSTRING_TO_STRING(BGl_string3552z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string3552z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string3552z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3552z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3552z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3552z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3552z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3552z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string3552z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3552z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string3552z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string3552z00zzast_glozd2declzd2));
			return
				BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string3552z00zzast_glozd2declzd2));
		}
	}

#ifdef __cplusplus
}
#endif
