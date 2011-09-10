/*===========================================================================*/
/*   (Ast/private.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/private.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_getfieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_fnamez00;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
	}                  *BgL_getfieldz00_bglt;

	typedef struct BgL_setfieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_fnamez00;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
	}                  *BgL_setfieldz00_bglt;

	typedef struct BgL_newz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_argszd2typezd2;
	}             *BgL_newz00_bglt;

	typedef struct BgL_vallocz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2heapzd2formatz00;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
	}                *BgL_vallocz00_bglt;

	typedef struct BgL_vrefz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
		bool_t BgL_unsafez00;
	}              *BgL_vrefz00_bglt;

	typedef struct BgL_vsetz12z12_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
		bool_t BgL_unsafez00;
	}                 *BgL_vsetz12z12_bglt;

	typedef struct BgL_vlengthz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                 *BgL_vlengthz00_bglt;

	typedef struct BgL_isaz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		struct BgL_typez00_bgl *BgL_classz00;
	}             *BgL_isaz00_bglt;

	typedef struct BgL_castzd2nullzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
	}                     *BgL_castzd2nullzd2_bglt;

	typedef struct BgL_castz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}              *BgL_castz00_bglt;

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

	typedef struct BgL_feffectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_readz00;
		obj_t BgL_writez00;
	}                 *BgL_feffectz00_bglt;


	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t bigloo_demangle(obj_t);
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzast_privatez00();
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t bigloo_mangledp(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzast_privatez00();
	extern BgL_vlengthz00_bglt BGl_makezd2vlengthzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt);
	extern obj_t BGl_za2boolza2z00zztype_cachez00;
	static obj_t BGl_za2privatezd2stampza2zd2zzast_privatez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_makezd2privatezd2sexpz00zzast_privatez00(obj_t,
		obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	extern BgL_vallocz00_bglt BGl_makezd2valloczd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern BgL_isaz00_bglt BGl_makezd2isazd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt);
	static obj_t BGl_methodzd2initzd2zzast_privatez00();
	extern BgL_castz00_bglt BGl_makezd2castzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, BgL_nodez00_bglt);
	static obj_t BGl__makezd2privatezd2sexpz00zzast_privatez00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_privatez00 = BUNSPEC;
	static obj_t BGl__privatezd2sexpzf3z21zzast_privatez00(obj_t, obj_t);
	extern BgL_castzd2nullzd2_bglt BGl_makezd2castzd2nullz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzast_privatez00();
	static obj_t BGl__privatezd2ze3nodez31zzast_privatez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern BgL_getfieldz00_bglt BGl_makezd2getfieldzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern BgL_vsetz12z12_bglt BGl_makezd2vsetz12zc0zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt, BgL_typez00_bglt, bool_t);
	extern BgL_newz00_bglt BGl_makezd2newzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_privatezd2sexpzf3z21zzast_privatez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_privatezd2ze3nodez31zzast_privatez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzast_privatez00();
	extern obj_t BGl_sexpza2zd2ze3nodez93zzast_sexpz00(obj_t, obj_t, obj_t,
		obj_t);
	extern BgL_feffectz00_bglt BGl_makezd2feffectzd2zzast_varz00(obj_t, obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	extern BgL_setfieldz00_bglt BGl_makezd2setfieldzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern BgL_typez00_bglt BGl_usezd2typez12zc0zztype_envz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern BgL_vrefz00_bglt BGl_makezd2vrefzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt, BgL_typez00_bglt, bool_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_privatez00();
	static obj_t __cnst[16];


	   
		 
		DEFINE_STRING(BGl_string3842z00zzast_privatez00,
		BgL_bgl_string3842za700za7za7a3848za7, "private->node", 13);
	      DEFINE_STRING(BGl_string3843z00zzast_privatez00,
		BgL_bgl_string3843za700za7za7a3849za7, "Illegal private kind", 20);
	      DEFINE_STRING(BGl_string3844z00zzast_privatez00,
		BgL_bgl_string3844za700za7za7a3850za7, "ast_private", 11);
	      DEFINE_STRING(BGl_string3845z00zzast_privatez00,
		BgL_bgl_string3845za700za7za7a3851za7,
		"vref vset! valloc vlength isa cast-null cast quote new setfield getfield vset-ur! vref-ur value - ___bgl_private_stamp_mark ",
		124);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2privatezd2sexpzd2envzd2zzast_privatez00,
		BgL_bgl__makeza7d2privateza73852z00, va_generic_entry,
		BGl__makezd2privatezd2sexpz00zzast_privatez00, BUNSPEC, -3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_privatezd2sexpzf3zd2envzf3zzast_privatez00,
		BgL_bgl__privateza7d2sexpza73853z00,
		BGl__privatezd2sexpzf3z21zzast_privatez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_privatezd2ze3nodezd2envze3zzast_privatez00,
		BgL_bgl__privateza7d2za7e3no3854z00,
		BGl__privatezd2ze3nodez31zzast_privatez00, 0L, BUNSPEC, 4);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long
		BgL_checksumz00_2438, char *BgL_fromz00_2439)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_privatez00))
				{
					BGl_requirezd2initializa7ationz75zzast_privatez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_privatez00();
					BGl_cnstzd2initzd2zzast_privatez00();
					BGl_importedzd2moduleszd2initz00zzast_privatez00();
					BGl_toplevelzd2initzd2zzast_privatez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_privatez00()
	{
		AN_OBJECT;
		{	/* Ast/private.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_private");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "ast_private");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"ast_private");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "ast_private");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_private");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_privatez00()
	{
		AN_OBJECT;
		{	/* Ast/private.scm 15 */
			{	/* Ast/private.scm 15 */
				obj_t BgL_cportz00_2430;

				BgL_cportz00_2430 =
					bgl_open_input_string(BGl_string3845z00zzast_privatez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2431;

					BgL_iz00_2431 = ((long) 15);
				BgL_loopz00_2432:
					if ((BgL_iz00_2431 == ((long) -1)))
						{	/* Ast/private.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Ast/private.scm 15 */
							{	/* Ast/private.scm 15 */
								obj_t BgL_arg3847z00_2434;

								{	/* Ast/private.scm 15 */

									{	/* Ast/private.scm 15 */
										obj_t BgL_locationz00_2436;

										BgL_locationz00_2436 = BBOOL(((bool_t) 0));
										{	/* Ast/private.scm 15 */

											BgL_arg3847z00_2434 =
												BGl_readz00zz__readerz00(BgL_cportz00_2430,
												BgL_locationz00_2436);
										}
									}
								}
								{	/* Ast/private.scm 15 */
									int BgL_auxz00_2458;

									BgL_auxz00_2458 = (int) (BgL_iz00_2431);
									CNST_TABLE_SET(BgL_auxz00_2458, BgL_arg3847z00_2434);
							}}
							{	/* Ast/private.scm 15 */
								int BgL_auxz00_2437;

								BgL_auxz00_2437 = (int) ((BgL_iz00_2431 - ((long) 1)));
								{
									long BgL_iz00_2463;

									BgL_iz00_2463 = (long) (BgL_auxz00_2437);
									BgL_iz00_2431 = BgL_iz00_2463;
									goto BgL_loopz00_2432;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_privatez00()
	{
		AN_OBJECT;
		{	/* Ast/private.scm 15 */
			return (BGl_za2privatezd2stampza2zd2zzast_privatez00 =
				CNST_TABLE_REF(((long) 0)), BUNSPEC);
		}
	}



/* private-sexp? */
	BGL_EXPORTED_DEF bool_t BGl_privatezd2sexpzf3z21zzast_privatez00(obj_t
		BgL_sexpz00_1)
	{
		AN_OBJECT;
		{	/* Ast/private.scm 39 */
			{	/* Ast/private.scm 40 */
				obj_t BgL_arg3280z00_2030;

				BgL_arg3280z00_2030 = CAR(BgL_sexpz00_1);
				return
					(BgL_arg3280z00_2030 == BGl_za2privatezd2stampza2zd2zzast_privatez00);
			}
		}
	}



/* _private-sexp? */
	obj_t BGl__privatezd2sexpzf3z21zzast_privatez00(obj_t BgL_envz00_2419,
		obj_t BgL_sexpz00_2420)
	{
		AN_OBJECT;
		{	/* Ast/private.scm 39 */
			return BBOOL(BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_sexpz00_2420));
		}
	}



/* private->node */
	BGL_EXPORTED_DEF obj_t BGl_privatezd2ze3nodez31zzast_privatez00(obj_t
		BgL_sexpz00_2, obj_t BgL_stackz00_3, obj_t BgL_locz00_4,
		obj_t BgL_sitez00_5)
	{
		AN_OBJECT;
		{	/* Ast/private.scm 45 */
			{
				obj_t BgL_vtypez00_819;

				obj_t BgL_ftypez00_820;

				obj_t BgL_otypez00_821;

				obj_t BgL_czd2fmtzd2_822;

				obj_t BgL_restz00_823;

				obj_t BgL_vtypez00_813;

				obj_t BgL_ftypez00_814;

				obj_t BgL_otypez00_815;

				obj_t BgL_czd2fmtzd2_816;

				obj_t BgL_restz00_817;

				obj_t BgL_vtypez00_807;

				obj_t BgL_ftypez00_808;

				obj_t BgL_otypez00_809;

				obj_t BgL_czd2fmtzd2_810;

				obj_t BgL_expz00_811;

				obj_t BgL_typez00_804;

				obj_t BgL_expz00_805;

				obj_t BgL_typez00_802;

				obj_t BgL_typez00_799;

				obj_t BgL_expz00_800;

				obj_t BgL_typez00_795;

				obj_t BgL_argszd2typezd2_796;

				obj_t BgL_restz00_797;

				obj_t BgL_typez00_793;

				obj_t BgL_ftypez00_788;

				obj_t BgL_otypez00_789;

				obj_t BgL_fieldzd2namezd2_790;

				obj_t BgL_restz00_791;

				obj_t BgL_ftypez00_783;

				obj_t BgL_otypez00_784;

				obj_t BgL_fieldzd2namezd2_785;

				obj_t BgL_objz00_786;

				{	/* Ast/private.scm 50 */
					obj_t BgL_cdrzd21420zd2_836;

					BgL_cdrzd21420zd2_836 = CDR(BgL_sexpz00_2);
					if (PAIRP(BgL_cdrzd21420zd2_836))
						{	/* Ast/private.scm 50 */
							obj_t BgL_cdrzd21426zd2_838;

							BgL_cdrzd21426zd2_838 = CDR(BgL_cdrzd21420zd2_836);
							if ((CAR(BgL_cdrzd21420zd2_836) == CNST_TABLE_REF(((long) 5))))
								{	/* Ast/private.scm 50 */
									if (PAIRP(BgL_cdrzd21426zd2_838))
										{	/* Ast/private.scm 50 */
											obj_t BgL_cdrzd21432zd2_841;

											BgL_cdrzd21432zd2_841 = CDR(BgL_cdrzd21426zd2_838);
											if (PAIRP(BgL_cdrzd21432zd2_841))
												{	/* Ast/private.scm 50 */
													obj_t BgL_cdrzd21438zd2_843;

													BgL_cdrzd21438zd2_843 = CDR(BgL_cdrzd21432zd2_841);
													if (PAIRP(BgL_cdrzd21438zd2_843))
														{	/* Ast/private.scm 50 */
															obj_t BgL_cdrzd21443zd2_845;

															BgL_cdrzd21443zd2_845 =
																CDR(BgL_cdrzd21438zd2_843);
															if (PAIRP(BgL_cdrzd21443zd2_845))
																{	/* Ast/private.scm 50 */
																	if (NULLP(CDR(BgL_cdrzd21443zd2_845)))
																		{	/* Ast/private.scm 50 */
																			obj_t BgL_arg3289z00_848;

																			obj_t BgL_arg3290z00_849;

																			obj_t BgL_arg3291z00_850;

																			obj_t BgL_arg3292z00_851;

																			BgL_arg3289z00_848 =
																				CAR(BgL_cdrzd21426zd2_838);
																			BgL_arg3290z00_849 =
																				CAR(BgL_cdrzd21432zd2_841);
																			BgL_arg3291z00_850 =
																				CAR(BgL_cdrzd21438zd2_843);
																			BgL_arg3292z00_851 =
																				CAR(BgL_cdrzd21443zd2_845);
																			{	/* Ast/private.scm 50 */
																				BgL_getfieldz00_bglt BgL_auxz00_2496;

																				BgL_ftypez00_783 = BgL_arg3289z00_848;
																				BgL_otypez00_784 = BgL_arg3290z00_849;
																				BgL_fieldzd2namezd2_785 =
																					BgL_arg3291z00_850;
																				BgL_objz00_786 = BgL_arg3292z00_851;
																				{	/* Ast/private.scm 52 */
																					BgL_typez00_bglt BgL_ftypez00_1520;

																					BgL_typez00_bglt BgL_otypez00_1521;

																					obj_t BgL_tidz00_1522;

																					BgL_ftypez00_1520 =
																						BGl_usezd2typez12zc0zztype_envz00
																						(BgL_ftypez00_783, BgL_locz00_4);
																					BgL_otypez00_1521 =
																						BGl_usezd2typez12zc0zztype_envz00
																						(BgL_otypez00_784, BgL_locz00_4);
																					{	/* Ast/private.scm 54 */
																						obj_t BgL_arg3694z00_1531;

																						obj_t BgL_arg3695z00_1532;

																						BgL_arg3694z00_1531 =
																							CNST_TABLE_REF(((long) 1));
																						{	/* Ast/private.scm 56 */
																							obj_t BgL_arg3699z00_1536;

																							if (bigloo_mangledp
																								(BgL_fieldzd2namezd2_785))
																								{	/* Ast/private.scm 56 */
																									BgL_arg3699z00_1536 =
																										bigloo_demangle
																										(BgL_fieldzd2namezd2_785);
																								}
																							else
																								{	/* Ast/private.scm 56 */
																									BgL_arg3699z00_1536 =
																										BgL_fieldzd2namezd2_785;
																								}
																							{	/* Ast/private.scm 55 */
																								obj_t BgL_stringz00_2352;

																								BgL_stringz00_2352 =
																									BgL_arg3699z00_1536;
																								BgL_arg3695z00_1532 =
																									string_to_symbol
																									(BSTRING_TO_STRING
																									(BgL_stringz00_2352));
																							}
																						}
																						{	/* Ast/private.scm 54 */
																							obj_t BgL_list3696z00_1533;

																							{	/* Ast/private.scm 54 */
																								obj_t BgL_arg3697z00_1534;

																								{	/* Ast/private.scm 54 */
																									obj_t BgL_arg3698z00_1535;

																									BgL_arg3698z00_1535 =
																										MAKE_PAIR
																										(BgL_arg3695z00_1532, BNIL);
																									BgL_arg3697z00_1534 =
																										MAKE_PAIR
																										(BgL_arg3694z00_1531,
																										BgL_arg3698z00_1535);
																								}
																								BgL_list3696z00_1533 =
																									MAKE_PAIR(BgL_otypez00_784,
																									BgL_arg3697z00_1534);
																							}
																							BgL_tidz00_1522 =
																								BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																								(BgL_list3696z00_1533);
																						}
																					}
																					{	/* Ast/private.scm 57 */
																						obj_t BgL_arg3687z00_1524;

																						BgL_feffectz00_bglt
																							BgL_arg3688z00_1525;
																						{	/* Ast/private.scm 64 */
																							BgL_nodez00_bglt
																								BgL_arg3689z00_1526;
																							BgL_arg3689z00_1526 =
																								BGl_sexpzd2ze3nodez31zzast_sexpz00
																								(BgL_objz00_786, BgL_stackz00_3,
																								BgL_locz00_4, BgL_sitez00_5);
																							{	/* Ast/private.scm 64 */
																								obj_t BgL_list3690z00_1527;

																								BgL_list3690z00_1527 =
																									MAKE_PAIR(
																									(obj_t) (BgL_arg3689z00_1526),
																									BNIL);
																								BgL_arg3687z00_1524 =
																									BgL_list3690z00_1527;
																							}
																						}
																						{	/* Ast/private.scm 66 */
																							obj_t BgL_arg3691z00_1528;

																							{	/* Ast/private.scm 66 */
																								obj_t BgL_list3693z00_1530;

																								BgL_list3693z00_1530 =
																									MAKE_PAIR(BgL_tidz00_1522,
																									BNIL);
																								BgL_arg3691z00_1528 =
																									BgL_list3693z00_1530;
																							}
																							BgL_arg3688z00_1525 =
																								BGl_makezd2feffectzd2zzast_varz00
																								(BgL_arg3691z00_1528, BNIL);
																						}
																						BgL_auxz00_2496 =
																							BGl_makezd2getfieldzd2zzast_nodez00
																							(BgL_locz00_4, BgL_ftypez00_1520,
																							BFALSE, BINT(((long) -1)),
																							BgL_arg3687z00_1524,
																							(obj_t) (BgL_arg3688z00_1525),
																							BgL_fieldzd2namezd2_785,
																							BgL_ftypez00_1520,
																							BgL_otypez00_1521);
																				}}
																				return (obj_t) (BgL_auxz00_2496);
																			}
																		}
																	else
																		{	/* Ast/private.scm 50 */
																		BgL_tagzd21400zd2_833:
																			{	/* Ast/private.scm 176 */
																				obj_t BgL_arg3780z00_1646;

																				{	/* Ast/private.scm 178 */
																					bool_t BgL_testz00_2518;

																					{	/* Ast/private.scm 178 */
																						obj_t BgL_auxz00_2519;

																						BgL_auxz00_2519 =
																							CDR(BgL_sexpz00_2);
																						BgL_testz00_2518 =
																							PAIRP(BgL_auxz00_2519);
																					}
																					if (BgL_testz00_2518)
																						{	/* Ast/private.scm 178 */
																							BgL_arg3780z00_1646 =
																								CAR(CDR(BgL_sexpz00_2));
																						}
																					else
																						{	/* Ast/private.scm 178 */
																							BgL_arg3780z00_1646 =
																								BgL_sexpz00_2;
																						}
																				}
																				return
																					BGl_errorz00zz__errorz00
																					(BGl_string3842z00zzast_privatez00,
																					BGl_string3843z00zzast_privatez00,
																					BgL_arg3780z00_1646);
																			}
																		}
																}
															else
																{	/* Ast/private.scm 50 */
																	goto BgL_tagzd21400zd2_833;
																}
														}
													else
														{	/* Ast/private.scm 50 */
															goto BgL_tagzd21400zd2_833;
														}
												}
											else
												{	/* Ast/private.scm 50 */
													goto BgL_tagzd21400zd2_833;
												}
										}
									else
										{	/* Ast/private.scm 50 */
											goto BgL_tagzd21400zd2_833;
										}
								}
							else
								{	/* Ast/private.scm 50 */
									obj_t BgL_cdrzd22365zd2_890;

									BgL_cdrzd22365zd2_890 = CDR(BgL_cdrzd21420zd2_836);
									if (
										(CAR(BgL_cdrzd21420zd2_836) == CNST_TABLE_REF(((long) 6))))
										{	/* Ast/private.scm 50 */
											if (PAIRP(BgL_cdrzd22365zd2_890))
												{	/* Ast/private.scm 50 */
													obj_t BgL_cdrzd22371zd2_893;

													BgL_cdrzd22371zd2_893 = CDR(BgL_cdrzd22365zd2_890);
													if (PAIRP(BgL_cdrzd22371zd2_893))
														{	/* Ast/private.scm 50 */
															obj_t BgL_cdrzd22377zd2_895;

															BgL_cdrzd22377zd2_895 =
																CDR(BgL_cdrzd22371zd2_893);
															if (PAIRP(BgL_cdrzd22377zd2_895))
																{	/* Ast/private.scm 50 */
																	obj_t BgL_arg3316z00_897;

																	obj_t BgL_arg3317z00_898;

																	obj_t BgL_arg3318z00_899;

																	obj_t BgL_arg3319z00_900;

																	BgL_arg3316z00_897 =
																		CAR(BgL_cdrzd22365zd2_890);
																	BgL_arg3317z00_898 =
																		CAR(BgL_cdrzd22371zd2_893);
																	BgL_arg3318z00_899 =
																		CAR(BgL_cdrzd22377zd2_895);
																	BgL_arg3319z00_900 =
																		CDR(BgL_cdrzd22377zd2_895);
																	{	/* Ast/private.scm 50 */
																		BgL_setfieldz00_bglt BgL_auxz00_2542;

																		BgL_ftypez00_788 = BgL_arg3316z00_897;
																		BgL_otypez00_789 = BgL_arg3317z00_898;
																		BgL_fieldzd2namezd2_790 =
																			BgL_arg3318z00_899;
																		BgL_restz00_791 = BgL_arg3319z00_900;
																		{	/* Ast/private.scm 68 */
																			BgL_typez00_bglt BgL_otypez00_1537;

																			BgL_typez00_bglt BgL_ftypez00_1538;

																			obj_t BgL_tidz00_1539;

																			BgL_otypez00_1537 =
																				BGl_usezd2typez12zc0zztype_envz00
																				(BgL_otypez00_789, BgL_locz00_4);
																			BgL_ftypez00_1538 =
																				BGl_usezd2typez12zc0zztype_envz00
																				(BgL_ftypez00_788, BgL_locz00_4);
																			{	/* Ast/private.scm 70 */
																				obj_t BgL_arg3706z00_1546;

																				obj_t BgL_arg3707z00_1547;

																				BgL_arg3706z00_1546 =
																					CNST_TABLE_REF(((long) 1));
																				{	/* Ast/private.scm 72 */
																					obj_t BgL_arg3711z00_1551;

																					if (bigloo_mangledp
																						(BgL_fieldzd2namezd2_790))
																						{	/* Ast/private.scm 72 */
																							BgL_arg3711z00_1551 =
																								bigloo_demangle
																								(BgL_fieldzd2namezd2_790);
																						}
																					else
																						{	/* Ast/private.scm 72 */
																							BgL_arg3711z00_1551 =
																								BgL_fieldzd2namezd2_790;
																						}
																					{	/* Ast/private.scm 71 */
																						obj_t BgL_stringz00_2359;

																						BgL_stringz00_2359 =
																							BgL_arg3711z00_1551;
																						BgL_arg3707z00_1547 =
																							string_to_symbol(BSTRING_TO_STRING
																							(BgL_stringz00_2359));
																					}
																				}
																				{	/* Ast/private.scm 70 */
																					obj_t BgL_list3708z00_1548;

																					{	/* Ast/private.scm 70 */
																						obj_t BgL_arg3709z00_1549;

																						{	/* Ast/private.scm 70 */
																							obj_t BgL_arg3710z00_1550;

																							BgL_arg3710z00_1550 =
																								MAKE_PAIR(BgL_arg3707z00_1547,
																								BNIL);
																							BgL_arg3709z00_1549 =
																								MAKE_PAIR(BgL_arg3706z00_1546,
																								BgL_arg3710z00_1550);
																						}
																						BgL_list3708z00_1548 =
																							MAKE_PAIR(BgL_otypez00_789,
																							BgL_arg3709z00_1549);
																					}
																					BgL_tidz00_1539 =
																						BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																						(BgL_list3708z00_1548);
																				}
																			}
																			{	/* Ast/private.scm 73 */
																				obj_t BgL_arg3701z00_1541;

																				BgL_feffectz00_bglt BgL_arg3702z00_1542;

																				BgL_arg3701z00_1541 =
																					BGl_sexpza2zd2ze3nodez93zzast_sexpz00
																					(BgL_restz00_791, BgL_stackz00_3,
																					BgL_locz00_4,
																					CNST_TABLE_REF(((long) 2)));
																				{	/* Ast/var.scm 152 */
																					obj_t BgL_arg3704z00_1544;

																					{	/* Ast/private.scm 82 */
																						obj_t BgL_list3705z00_1545;

																						BgL_list3705z00_1545 =
																							MAKE_PAIR(BgL_tidz00_1539, BNIL);
																						BgL_arg3704z00_1544 =
																							BgL_list3705z00_1545;
																					}
																					BgL_arg3702z00_1542 =
																						BGl_makezd2feffectzd2zzast_varz00
																						(BNIL, BgL_arg3704z00_1544);
																				}
																				BgL_auxz00_2542 =
																					BGl_makezd2setfieldzd2zzast_nodez00
																					(BgL_locz00_4,
																					(BgL_typez00_bglt)
																					(BGl_za2unspecza2z00zztype_cachez00),
																					BTRUE, BINT(((long) -1)),
																					BgL_arg3701z00_1541,
																					(obj_t) (BgL_arg3702z00_1542),
																					BgL_fieldzd2namezd2_790,
																					BgL_ftypez00_1538, BgL_otypez00_1537);
																		}}
																		return (obj_t) (BgL_auxz00_2542);
																	}
																}
															else
																{	/* Ast/private.scm 50 */
																	goto BgL_tagzd21400zd2_833;
																}
														}
													else
														{	/* Ast/private.scm 50 */
															goto BgL_tagzd21400zd2_833;
														}
												}
											else
												{	/* Ast/private.scm 50 */
													goto BgL_tagzd21400zd2_833;
												}
										}
									else
										{	/* Ast/private.scm 50 */
											obj_t BgL_cdrzd22749zd2_901;

											BgL_cdrzd22749zd2_901 = CDR(BgL_sexpz00_2);
											{	/* Ast/private.scm 50 */
												obj_t BgL_cdrzd22752zd2_902;

												BgL_cdrzd22752zd2_902 = CDR(BgL_cdrzd22749zd2_901);
												if (
													(CAR(BgL_cdrzd22749zd2_901) ==
														CNST_TABLE_REF(((long) 7))))
													{	/* Ast/private.scm 50 */
														if (PAIRP(BgL_cdrzd22752zd2_902))
															{	/* Ast/private.scm 50 */
																if (NULLP(CDR(BgL_cdrzd22752zd2_902)))
																	{	/* Ast/private.scm 50 */
																		obj_t BgL_arg3324z00_906;

																		BgL_arg3324z00_906 =
																			CAR(BgL_cdrzd22752zd2_902);
																		{	/* Ast/private.scm 50 */
																			BgL_newz00_bglt BgL_auxz00_2576;

																			BgL_typez00_793 = BgL_arg3324z00_906;
																			BgL_auxz00_2576 =
																				BGl_makezd2newzd2zzast_nodez00
																				(BgL_locz00_4,
																				BGl_usezd2typez12zc0zztype_envz00
																				(BgL_typez00_793, BgL_locz00_4), BTRUE,
																				BINT(((long) -1)), BNIL, BUNSPEC, BNIL);
																			return (obj_t) (BgL_auxz00_2576);
																		}
																	}
																else
																	{	/* Ast/private.scm 50 */
																		obj_t BgL_cdrzd22779zd2_907;

																		BgL_cdrzd22779zd2_907 =
																			CDR(BgL_cdrzd22749zd2_901);
																		{	/* Ast/private.scm 50 */
																			obj_t BgL_cdrzd22785zd2_908;

																			BgL_cdrzd22785zd2_908 =
																				CDR(BgL_cdrzd22779zd2_907);
																			if (PAIRP(BgL_cdrzd22785zd2_908))
																				{	/* Ast/private.scm 50 */
																					obj_t BgL_carzd22790zd2_910;

																					BgL_carzd22790zd2_910 =
																						CAR(BgL_cdrzd22785zd2_908);
																					if (PAIRP(BgL_carzd22790zd2_910))
																						{	/* Ast/private.scm 50 */
																							obj_t BgL_cdrzd22794zd2_912;

																							BgL_cdrzd22794zd2_912 =
																								CDR(BgL_carzd22790zd2_910);
																							if (
																								(CAR(BgL_carzd22790zd2_910) ==
																									CNST_TABLE_REF(((long) 8))))
																								{	/* Ast/private.scm 50 */
																									if (PAIRP
																										(BgL_cdrzd22794zd2_912))
																										{	/* Ast/private.scm 50 */
																											if (NULLP(CDR
																													(BgL_cdrzd22794zd2_912)))
																												{	/* Ast/private.scm 50 */
																													obj_t
																														BgL_arg3330z00_916;
																													obj_t
																														BgL_arg3331z00_917;
																													obj_t
																														BgL_arg3332z00_918;
																													BgL_arg3330z00_916 =
																														CAR
																														(BgL_cdrzd22779zd2_907);
																													BgL_arg3331z00_917 =
																														CAR
																														(BgL_cdrzd22794zd2_912);
																													BgL_arg3332z00_918 =
																														CDR
																														(BgL_cdrzd22785zd2_908);
																													{	/* Ast/private.scm 50 */
																														BgL_newz00_bglt
																															BgL_auxz00_2601;
																														BgL_typez00_795 =
																															BgL_arg3330z00_916;
																														BgL_argszd2typezd2_796
																															=
																															BgL_arg3331z00_917;
																														BgL_restz00_797 =
																															BgL_arg3332z00_918;
																														if (NULLP
																															(BgL_restz00_797))
																															{	/* Ast/private.scm 93 */
																																BgL_typez00_bglt
																																	BgL_arg3717z00_1557;
																																obj_t
																																	BgL_arg3720z00_1560;
																																BgL_arg3717z00_1557
																																	=
																																	BGl_usezd2typez12zc0zztype_envz00
																																	(BgL_typez00_795,
																																	BgL_locz00_4);
																																if (NULLP
																																	(BgL_argszd2typezd2_796))
																																	{	/* Ast/private.scm 94 */
																																		BgL_arg3720z00_1560
																																			= BNIL;
																																	}
																																else
																																	{	/* Ast/private.scm 94 */
																																		obj_t
																																			BgL_head3272z00_1563;
																																		BgL_head3272z00_1563
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		{
																																			obj_t
																																				BgL_l3270z00_1565;
																																			obj_t
																																				BgL_tail3273z00_1566;
																																			BgL_l3270z00_1565
																																				=
																																				BgL_argszd2typezd2_796;
																																			BgL_tail3273z00_1566
																																				=
																																				BgL_head3272z00_1563;
																																		BgL_zc3anonymousza33722ze3z83_1567:
																																			if (NULLP
																																				(BgL_l3270z00_1565))
																																				{	/* Ast/private.scm 94 */
																																					BgL_arg3720z00_1560
																																						=
																																						CDR
																																						(BgL_head3272z00_1563);
																																				}
																																			else
																																				{	/* Ast/private.scm 94 */
																																					obj_t
																																						BgL_newtail3274z00_1569;
																																					{	/* Ast/private.scm 94 */
																																						BgL_typez00_bglt
																																							BgL_arg3725z00_1571;
																																						BgL_arg3725z00_1571
																																							=
																																							BGl_usezd2typez12zc0zztype_envz00
																																							(CAR
																																							(BgL_l3270z00_1565),
																																							BgL_locz00_4);
																																						BgL_newtail3274z00_1569
																																							=
																																							MAKE_PAIR
																																							(
																																							(obj_t)
																																							(BgL_arg3725z00_1571),
																																							BNIL);
																																					}
																																					SET_CDR
																																						(BgL_tail3273z00_1566,
																																						BgL_newtail3274z00_1569);
																																					{
																																						obj_t
																																							BgL_tail3273z00_2618;
																																						obj_t
																																							BgL_l3270z00_2616;
																																						BgL_l3270z00_2616
																																							=
																																							CDR
																																							(BgL_l3270z00_1565);
																																						BgL_tail3273z00_2618
																																							=
																																							BgL_newtail3274z00_1569;
																																						BgL_tail3273z00_1566
																																							=
																																							BgL_tail3273z00_2618;
																																						BgL_l3270z00_1565
																																							=
																																							BgL_l3270z00_2616;
																																						goto
																																							BgL_zc3anonymousza33722ze3z83_1567;
																																					}
																																				}
																																		}
																																	}
																																BgL_auxz00_2601
																																	=
																																	BGl_makezd2newzd2zzast_nodez00
																																	(BgL_locz00_4,
																																	BgL_arg3717z00_1557,
																																	BTRUE,
																																	BINT(((long)
																																			-1)),
																																	BNIL, BUNSPEC,
																																	BgL_arg3720z00_1560);
																															}
																														else
																															{	/* Ast/private.scm 98 */
																																BgL_typez00_bglt
																																	BgL_arg3727z00_1575;
																																obj_t
																																	BgL_arg3729z00_1577;
																																obj_t
																																	BgL_arg3730z00_1578;
																																BgL_arg3727z00_1575
																																	=
																																	BGl_usezd2typez12zc0zztype_envz00
																																	(BgL_typez00_795,
																																	BgL_locz00_4);
																																BgL_arg3729z00_1577
																																	=
																																	BGl_sexpza2zd2ze3nodez93zzast_sexpz00
																																	(BgL_restz00_797,
																																	BgL_stackz00_3,
																																	BgL_locz00_4,
																																	CNST_TABLE_REF
																																	(((long) 2)));
																																if (NULLP
																																	(BgL_argszd2typezd2_796))
																																	{	/* Ast/private.scm 99 */
																																		BgL_arg3730z00_1578
																																			= BNIL;
																																	}
																																else
																																	{	/* Ast/private.scm 99 */
																																		obj_t
																																			BgL_head3277z00_1582;
																																		BgL_head3277z00_1582
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		{
																																			obj_t
																																				BgL_l3275z00_1584;
																																			obj_t
																																				BgL_tail3278z00_1585;
																																			BgL_l3275z00_1584
																																				=
																																				BgL_argszd2typezd2_796;
																																			BgL_tail3278z00_1585
																																				=
																																				BgL_head3277z00_1582;
																																		BgL_zc3anonymousza33733ze3z83_1586:
																																			if (NULLP
																																				(BgL_l3275z00_1584))
																																				{	/* Ast/private.scm 99 */
																																					BgL_arg3730z00_1578
																																						=
																																						CDR
																																						(BgL_head3277z00_1582);
																																				}
																																			else
																																				{	/* Ast/private.scm 99 */
																																					obj_t
																																						BgL_newtail3279z00_1588;
																																					{	/* Ast/private.scm 99 */
																																						BgL_typez00_bglt
																																							BgL_arg3736z00_1590;
																																						BgL_arg3736z00_1590
																																							=
																																							BGl_usezd2typez12zc0zztype_envz00
																																							(CAR
																																							(BgL_l3275z00_1584),
																																							BgL_locz00_4);
																																						BgL_newtail3279z00_1588
																																							=
																																							MAKE_PAIR
																																							(
																																							(obj_t)
																																							(BgL_arg3736z00_1590),
																																							BNIL);
																																					}
																																					SET_CDR
																																						(BgL_tail3278z00_1585,
																																						BgL_newtail3279z00_1588);
																																					{
																																						obj_t
																																							BgL_tail3278z00_2637;
																																						obj_t
																																							BgL_l3275z00_2635;
																																						BgL_l3275z00_2635
																																							=
																																							CDR
																																							(BgL_l3275z00_1584);
																																						BgL_tail3278z00_2637
																																							=
																																							BgL_newtail3279z00_1588;
																																						BgL_tail3278z00_1585
																																							=
																																							BgL_tail3278z00_2637;
																																						BgL_l3275z00_1584
																																							=
																																							BgL_l3275z00_2635;
																																						goto
																																							BgL_zc3anonymousza33733ze3z83_1586;
																																					}
																																				}
																																		}
																																	}
																																BgL_auxz00_2601
																																	=
																																	BGl_makezd2newzd2zzast_nodez00
																																	(BgL_locz00_4,
																																	BgL_arg3727z00_1575,
																																	BTRUE,
																																	BINT(((long)
																																			-1)),
																																	BgL_arg3729z00_1577,
																																	BUNSPEC,
																																	BgL_arg3730z00_1578);
																															}
																														return
																															(obj_t)
																															(BgL_auxz00_2601);
																													}
																												}
																											else
																												{	/* Ast/private.scm 50 */
																													goto
																														BgL_tagzd21400zd2_833;
																												}
																										}
																									else
																										{	/* Ast/private.scm 50 */
																											goto
																												BgL_tagzd21400zd2_833;
																										}
																								}
																							else
																								{	/* Ast/private.scm 50 */
																									goto BgL_tagzd21400zd2_833;
																								}
																						}
																					else
																						{	/* Ast/private.scm 50 */
																							goto BgL_tagzd21400zd2_833;
																						}
																				}
																			else
																				{	/* Ast/private.scm 50 */
																					goto BgL_tagzd21400zd2_833;
																				}
																		}
																	}
															}
														else
															{	/* Ast/private.scm 50 */
																goto BgL_tagzd21400zd2_833;
															}
													}
												else
													{	/* Ast/private.scm 50 */
														obj_t BgL_cdrzd24464zd2_1085;

														BgL_cdrzd24464zd2_1085 = CDR(BgL_cdrzd22749zd2_901);
														if (
															(CAR(BgL_cdrzd22749zd2_901) ==
																CNST_TABLE_REF(((long) 9))))
															{	/* Ast/private.scm 50 */
																if (PAIRP(BgL_cdrzd24464zd2_1085))
																	{	/* Ast/private.scm 50 */
																		obj_t BgL_cdrzd24468zd2_1088;

																		BgL_cdrzd24468zd2_1088 =
																			CDR(BgL_cdrzd24464zd2_1085);
																		if (PAIRP(BgL_cdrzd24468zd2_1088))
																			{	/* Ast/private.scm 50 */
																				if (NULLP(CDR(BgL_cdrzd24468zd2_1088)))
																					{	/* Ast/private.scm 50 */
																						obj_t BgL_arg3435z00_1091;

																						obj_t BgL_arg3436z00_1092;

																						BgL_arg3435z00_1091 =
																							CAR(BgL_cdrzd24464zd2_1085);
																						BgL_arg3436z00_1092 =
																							CAR(BgL_cdrzd24468zd2_1088);
																						{	/* Ast/private.scm 50 */
																							BgL_castz00_bglt BgL_auxz00_2656;

																							BgL_typez00_799 =
																								BgL_arg3435z00_1091;
																							BgL_expz00_800 =
																								BgL_arg3436z00_1092;
																							BgL_auxz00_2656 =
																								BGl_makezd2castzd2zzast_nodez00
																								(BgL_locz00_4,
																								BGl_usezd2typez12zc0zztype_envz00
																								(BgL_typez00_799, BgL_locz00_4),
																								BGl_sexpzd2ze3nodez31zzast_sexpz00
																								(BgL_expz00_800, BgL_stackz00_3,
																									BgL_locz00_4, BgL_sitez00_5));
																							return (obj_t) (BgL_auxz00_2656);
																						}
																					}
																				else
																					{	/* Ast/private.scm 50 */
																						goto BgL_tagzd21400zd2_833;
																					}
																			}
																		else
																			{	/* Ast/private.scm 50 */
																				goto BgL_tagzd21400zd2_833;
																			}
																	}
																else
																	{	/* Ast/private.scm 50 */
																		goto BgL_tagzd21400zd2_833;
																	}
															}
														else
															{	/* Ast/private.scm 50 */
																obj_t BgL_cdrzd24998zd2_1134;

																BgL_cdrzd24998zd2_1134 = CDR(BgL_sexpz00_2);
																{	/* Ast/private.scm 50 */
																	obj_t BgL_cdrzd25001zd2_1135;

																	BgL_cdrzd25001zd2_1135 =
																		CDR(BgL_cdrzd24998zd2_1134);
																	if (
																		(CAR(BgL_cdrzd24998zd2_1134) ==
																			CNST_TABLE_REF(((long) 10))))
																		{	/* Ast/private.scm 50 */
																			if (PAIRP(BgL_cdrzd25001zd2_1135))
																				{	/* Ast/private.scm 50 */
																					if (NULLP(CDR
																							(BgL_cdrzd25001zd2_1135)))
																						{	/* Ast/private.scm 50 */
																							obj_t BgL_arg3464z00_1139;

																							BgL_arg3464z00_1139 =
																								CAR(BgL_cdrzd25001zd2_1135);
																							{	/* Ast/private.scm 50 */
																								BgL_castzd2nullzd2_bglt
																									BgL_auxz00_2673;
																								BgL_typez00_802 =
																									BgL_arg3464z00_1139;
																								BgL_auxz00_2673 =
																									BGl_makezd2castzd2nullz00zzast_nodez00
																									(BgL_locz00_4,
																									BGl_usezd2typez12zc0zztype_envz00
																									(BgL_typez00_802,
																										BgL_locz00_4), BUNSPEC,
																									BINT(((long) -1)), BNIL,
																									BUNSPEC);
																								return (obj_t)
																									(BgL_auxz00_2673);
																							}
																						}
																					else
																						{	/* Ast/private.scm 50 */
																							goto BgL_tagzd21400zd2_833;
																						}
																				}
																			else
																				{	/* Ast/private.scm 50 */
																					goto BgL_tagzd21400zd2_833;
																				}
																		}
																	else
																		{	/* Ast/private.scm 50 */
																			obj_t BgL_cdrzd25472zd2_1184;

																			BgL_cdrzd25472zd2_1184 =
																				CDR(BgL_cdrzd24998zd2_1134);
																			if (
																				(CAR(BgL_cdrzd24998zd2_1134) ==
																					CNST_TABLE_REF(((long) 11))))
																				{	/* Ast/private.scm 50 */
																					if (PAIRP(BgL_cdrzd25472zd2_1184))
																						{	/* Ast/private.scm 50 */
																							obj_t BgL_cdrzd25476zd2_1187;

																							BgL_cdrzd25476zd2_1187 =
																								CDR(BgL_cdrzd25472zd2_1184);
																							if (PAIRP(BgL_cdrzd25476zd2_1187))
																								{	/* Ast/private.scm 50 */
																									if (NULLP(CDR
																											(BgL_cdrzd25476zd2_1187)))
																										{	/* Ast/private.scm 50 */
																											obj_t BgL_arg3495z00_1190;

																											obj_t BgL_arg3496z00_1191;

																											BgL_arg3495z00_1190 =
																												CAR
																												(BgL_cdrzd25472zd2_1184);
																											BgL_arg3496z00_1191 =
																												CAR
																												(BgL_cdrzd25476zd2_1187);
																											{	/* Ast/private.scm 50 */
																												BgL_isaz00_bglt
																													BgL_auxz00_2693;
																												BgL_typez00_804 =
																													BgL_arg3495z00_1190;
																												BgL_expz00_805 =
																													BgL_arg3496z00_1191;
																												{	/* Ast/private.scm 114 */
																													obj_t
																														BgL_arg3746z00_1600;
																													BgL_feffectz00_bglt
																														BgL_arg3747z00_1601;
																													BgL_typez00_bglt
																														BgL_arg3748z00_1602;
																													{	/* Ast/private.scm 118 */
																														BgL_nodez00_bglt
																															BgL_arg3749z00_1603;
																														BgL_arg3749z00_1603
																															=
																															BGl_sexpzd2ze3nodez31zzast_sexpz00
																															(BgL_expz00_805,
																															BgL_stackz00_3,
																															BgL_locz00_4,
																															BgL_sitez00_5);
																														{	/* Ast/private.scm 118 */
																															obj_t
																																BgL_list3750z00_1604;
																															BgL_list3750z00_1604
																																=
																																MAKE_PAIR(
																																(obj_t)
																																(BgL_arg3749z00_1603),
																																BNIL);
																															BgL_arg3746z00_1600
																																=
																																BgL_list3750z00_1604;
																														}
																													}
																													BgL_arg3747z00_1601 =
																														BGl_makezd2feffectzd2zzast_varz00
																														(BNIL, BNIL);
																													BgL_arg3748z00_1602 =
																														BGl_usezd2typez12zc0zztype_envz00
																														(BgL_typez00_804,
																														BgL_locz00_4);
																													BgL_auxz00_2693 =
																														BGl_makezd2isazd2zzast_nodez00
																														(BgL_locz00_4,
																														(BgL_typez00_bglt)
																														(BGl_za2boolza2z00zztype_cachez00),
																														BUNSPEC,
																														BINT(((long) -1)),
																														BgL_arg3746z00_1600,
																														(obj_t)
																														(BgL_arg3747z00_1601),
																														BgL_arg3748z00_1602);
																												}
																												return
																													(obj_t)
																													(BgL_auxz00_2693);
																											}
																										}
																									else
																										{	/* Ast/private.scm 50 */
																											goto
																												BgL_tagzd21400zd2_833;
																										}
																								}
																							else
																								{	/* Ast/private.scm 50 */
																									goto BgL_tagzd21400zd2_833;
																								}
																						}
																					else
																						{	/* Ast/private.scm 50 */
																							goto BgL_tagzd21400zd2_833;
																						}
																				}
																			else
																				{	/* Ast/private.scm 50 */
																					obj_t BgL_cdrzd25940zd2_1233;

																					BgL_cdrzd25940zd2_1233 =
																						CDR(BgL_sexpz00_2);
																					{	/* Ast/private.scm 50 */
																						obj_t BgL_cdrzd25947zd2_1234;

																						BgL_cdrzd25947zd2_1234 =
																							CDR(BgL_cdrzd25940zd2_1233);
																						if (
																							(CAR(BgL_cdrzd25940zd2_1233) ==
																								CNST_TABLE_REF(((long) 12))))
																							{	/* Ast/private.scm 50 */
																								if (PAIRP
																									(BgL_cdrzd25947zd2_1234))
																									{	/* Ast/private.scm 50 */
																										obj_t
																											BgL_cdrzd25954zd2_1237;
																										BgL_cdrzd25954zd2_1237 =
																											CDR
																											(BgL_cdrzd25947zd2_1234);
																										if (PAIRP
																											(BgL_cdrzd25954zd2_1237))
																											{	/* Ast/private.scm 50 */
																												obj_t
																													BgL_cdrzd25961zd2_1239;
																												BgL_cdrzd25961zd2_1239 =
																													CDR
																													(BgL_cdrzd25954zd2_1237);
																												if (PAIRP
																													(BgL_cdrzd25961zd2_1239))
																													{	/* Ast/private.scm 50 */
																														obj_t
																															BgL_cdrzd25967zd2_1241;
																														BgL_cdrzd25967zd2_1241
																															=
																															CDR
																															(BgL_cdrzd25961zd2_1239);
																														if (PAIRP
																															(BgL_cdrzd25967zd2_1241))
																															{	/* Ast/private.scm 50 */
																																obj_t
																																	BgL_carzd25971zd2_1243;
																																obj_t
																																	BgL_cdrzd25972zd2_1244;
																																BgL_carzd25971zd2_1243
																																	=
																																	CAR
																																	(BgL_cdrzd25967zd2_1241);
																																BgL_cdrzd25972zd2_1244
																																	=
																																	CDR
																																	(BgL_cdrzd25967zd2_1241);
																																if (STRINGP
																																	(BgL_carzd25971zd2_1243))
																																	{	/* Ast/private.scm 50 */
																																		if (PAIRP
																																			(BgL_cdrzd25972zd2_1244))
																																			{	/* Ast/private.scm 50 */
																																				if (NULLP(CDR(BgL_cdrzd25972zd2_1244)))
																																					{	/* Ast/private.scm 50 */
																																						obj_t
																																							BgL_arg3529z00_1248;
																																						obj_t
																																							BgL_arg3530z00_1249;
																																						obj_t
																																							BgL_arg3531z00_1250;
																																						obj_t
																																							BgL_arg3532z00_1251;
																																						BgL_arg3529z00_1248
																																							=
																																							CAR
																																							(BgL_cdrzd25947zd2_1234);
																																						BgL_arg3530z00_1249
																																							=
																																							CAR
																																							(BgL_cdrzd25954zd2_1237);
																																						BgL_arg3531z00_1250
																																							=
																																							CAR
																																							(BgL_cdrzd25961zd2_1239);
																																						BgL_arg3532z00_1251
																																							=
																																							CAR
																																							(BgL_cdrzd25972zd2_1244);
																																						{	/* Ast/private.scm 50 */
																																							BgL_vlengthz00_bglt
																																								BgL_auxz00_2734;
																																							BgL_vtypez00_807
																																								=
																																								BgL_arg3529z00_1248;
																																							BgL_ftypez00_808
																																								=
																																								BgL_arg3530z00_1249;
																																							BgL_otypez00_809
																																								=
																																								BgL_arg3531z00_1250;
																																							BgL_czd2fmtzd2_810
																																								=
																																								BgL_carzd25971zd2_1243;
																																							BgL_expz00_811
																																								=
																																								BgL_arg3532z00_1251;
																																							{	/* Ast/private.scm 121 */
																																								BgL_typez00_bglt
																																									BgL_vtypez00_1605;
																																								BgL_typez00_bglt
																																									BgL_otypez00_1606;
																																								BgL_typez00_bglt
																																									BgL_ftypez00_1607;
																																								BgL_vtypez00_1605
																																									=
																																									BGl_usezd2typez12zc0zztype_envz00
																																									(BgL_vtypez00_807,
																																									BgL_locz00_4);
																																								BgL_otypez00_1606
																																									=
																																									BGl_usezd2typez12zc0zztype_envz00
																																									(BgL_otypez00_809,
																																									BgL_locz00_4);
																																								BgL_ftypez00_1607
																																									=
																																									BGl_usezd2typez12zc0zztype_envz00
																																									(BgL_ftypez00_808,
																																									BgL_locz00_4);
																																								{	/* Ast/private.scm 124 */
																																									obj_t
																																										BgL_arg3752z00_1609;
																																									BgL_feffectz00_bglt
																																										BgL_arg3753z00_1610;
																																									{	/* Ast/private.scm 129 */
																																										BgL_nodez00_bglt
																																											BgL_arg3754z00_1611;
																																										BgL_arg3754z00_1611
																																											=
																																											BGl_sexpzd2ze3nodez31zzast_sexpz00
																																											(BgL_expz00_811,
																																											BgL_stackz00_3,
																																											BgL_locz00_4,
																																											CNST_TABLE_REF
																																											(((long) 2)));
																																										{	/* Ast/private.scm 129 */
																																											obj_t
																																												BgL_list3755z00_1612;
																																											BgL_list3755z00_1612
																																												=
																																												MAKE_PAIR
																																												(
																																												(obj_t)
																																												(BgL_arg3754z00_1611),
																																												BNIL);
																																											BgL_arg3752z00_1609
																																												=
																																												BgL_list3755z00_1612;
																																									}}
																																									BgL_arg3753z00_1610
																																										=
																																										BGl_makezd2feffectzd2zzast_varz00
																																										(BNIL,
																																										BNIL);
																																									BgL_auxz00_2734
																																										=
																																										BGl_makezd2vlengthzd2zzast_nodez00
																																										(BgL_locz00_4,
																																										BgL_otypez00_1606,
																																										BUNSPEC,
																																										BINT
																																										(((long) -1)), BgL_arg3752z00_1609, (obj_t) (BgL_arg3753z00_1610), BgL_czd2fmtzd2_810, BgL_vtypez00_1605);
																																							}}
																																							return
																																								(obj_t)
																																								(BgL_auxz00_2734);
																																						}
																																					}
																																				else
																																					{	/* Ast/private.scm 50 */
																																						goto
																																							BgL_tagzd21400zd2_833;
																																					}
																																			}
																																		else
																																			{	/* Ast/private.scm 50 */
																																				goto
																																					BgL_tagzd21400zd2_833;
																																			}
																																	}
																																else
																																	{	/* Ast/private.scm 50 */
																																		goto
																																			BgL_tagzd21400zd2_833;
																																	}
																															}
																														else
																															{	/* Ast/private.scm 50 */
																																goto
																																	BgL_tagzd21400zd2_833;
																															}
																													}
																												else
																													{	/* Ast/private.scm 50 */
																														goto
																															BgL_tagzd21400zd2_833;
																													}
																											}
																										else
																											{	/* Ast/private.scm 50 */
																												goto
																													BgL_tagzd21400zd2_833;
																											}
																									}
																								else
																									{	/* Ast/private.scm 50 */
																										goto BgL_tagzd21400zd2_833;
																									}
																							}
																						else
																							{	/* Ast/private.scm 50 */
																								obj_t BgL_carzd26991zd2_1362;

																								obj_t BgL_cdrzd26992zd2_1363;

																								BgL_carzd26991zd2_1362 =
																									CAR(BgL_cdrzd25940zd2_1233);
																								BgL_cdrzd26992zd2_1363 =
																									CDR(BgL_cdrzd25940zd2_1233);
																								{

																									if (
																										(BgL_carzd26991zd2_1362 ==
																											CNST_TABLE_REF(((long)
																													15))))
																										{	/* Ast/private.scm 50 */
																										BgL_kapzd26993zd2_1364:
																											if (PAIRP
																												(BgL_cdrzd26992zd2_1363))
																												{	/* Ast/private.scm 50 */
																													obj_t
																														BgL_cdrzd27000zd2_1435;
																													BgL_cdrzd27000zd2_1435
																														=
																														CDR
																														(BgL_cdrzd26992zd2_1363);
																													if (PAIRP
																														(BgL_cdrzd27000zd2_1435))
																														{	/* Ast/private.scm 50 */
																															obj_t
																																BgL_cdrzd27007zd2_1437;
																															BgL_cdrzd27007zd2_1437
																																=
																																CDR
																																(BgL_cdrzd27000zd2_1435);
																															if (PAIRP
																																(BgL_cdrzd27007zd2_1437))
																																{	/* Ast/private.scm 50 */
																																	obj_t
																																		BgL_cdrzd27013zd2_1439;
																																	BgL_cdrzd27013zd2_1439
																																		=
																																		CDR
																																		(BgL_cdrzd27007zd2_1437);
																																	if (PAIRP
																																		(BgL_cdrzd27013zd2_1439))
																																		{	/* Ast/private.scm 50 */
																																			obj_t
																																				BgL_carzd27017zd2_1441;
																																			BgL_carzd27017zd2_1441
																																				=
																																				CAR
																																				(BgL_cdrzd27013zd2_1439);
																																			if (STRINGP(BgL_carzd27017zd2_1441))
																																				{	/* Ast/private.scm 50 */
																																					obj_t
																																						BgL_arg3635z00_1443;
																																					obj_t
																																						BgL_arg3636z00_1444;
																																					obj_t
																																						BgL_arg3637z00_1445;
																																					obj_t
																																						BgL_arg3638z00_1446;
																																					BgL_arg3635z00_1443
																																						=
																																						CAR
																																						(BgL_cdrzd26992zd2_1363);
																																					BgL_arg3636z00_1444
																																						=
																																						CAR
																																						(BgL_cdrzd27000zd2_1435);
																																					BgL_arg3637z00_1445
																																						=
																																						CAR
																																						(BgL_cdrzd27007zd2_1437);
																																					BgL_arg3638z00_1446
																																						=
																																						CDR
																																						(BgL_cdrzd27013zd2_1439);
																																					{	/* Ast/private.scm 50 */
																																						BgL_vrefz00_bglt
																																							BgL_auxz00_2770;
																																						BgL_vtypez00_813
																																							=
																																							BgL_arg3635z00_1443;
																																						BgL_ftypez00_814
																																							=
																																							BgL_arg3636z00_1444;
																																						BgL_otypez00_815
																																							=
																																							BgL_arg3637z00_1445;
																																						BgL_czd2fmtzd2_816
																																							=
																																							BgL_carzd27017zd2_1441;
																																						BgL_restz00_817
																																							=
																																							BgL_arg3638z00_1446;
																																						{	/* Ast/private.scm 132 */
																																							BgL_typez00_bglt
																																								BgL_ftypez00_1613;
																																							BgL_typez00_bglt
																																								BgL_vtypez00_1614;
																																							BgL_typez00_bglt
																																								BgL_otypez00_1615;
																																							BgL_ftypez00_1613
																																								=
																																								BGl_usezd2typez12zc0zztype_envz00
																																								(BgL_ftypez00_814,
																																								BgL_locz00_4);
																																							BgL_vtypez00_1614
																																								=
																																								BGl_usezd2typez12zc0zztype_envz00
																																								(BgL_vtypez00_813,
																																								BgL_locz00_4);
																																							BgL_otypez00_1615
																																								=
																																								BGl_usezd2typez12zc0zztype_envz00
																																								(BgL_otypez00_815,
																																								BgL_locz00_4);
																																							{	/* Ast/private.scm 135 */
																																								obj_t
																																									BgL_arg3757z00_1617;
																																								BgL_feffectz00_bglt
																																									BgL_arg3758z00_1618;
																																								bool_t
																																									BgL_arg3759z00_1619;
																																								BgL_arg3757z00_1617
																																									=
																																									BGl_sexpza2zd2ze3nodez93zzast_sexpz00
																																									(BgL_restz00_817,
																																									BgL_stackz00_3,
																																									BgL_locz00_4,
																																									CNST_TABLE_REF
																																									(((long) 2)));
																																								{	/* Ast/private.scm 145 */
																																									obj_t
																																										BgL_arg3760z00_1620;
																																									{	/* Ast/private.scm 145 */
																																										obj_t
																																											BgL_arg3762z00_1622;
																																										BgL_arg3762z00_1622
																																											=
																																											(
																																											((BgL_typez00_bglt) CREF(BgL_ftypez00_1613))->BgL_idz00);
																																										{	/* Ast/private.scm 145 */
																																											obj_t
																																												BgL_list3763z00_1623;
																																											BgL_list3763z00_1623
																																												=
																																												MAKE_PAIR
																																												(BgL_arg3762z00_1622,
																																												BNIL);
																																											BgL_arg3760z00_1620
																																												=
																																												BgL_list3763z00_1623;
																																									}}
																																									BgL_arg3758z00_1618
																																										=
																																										BGl_makezd2feffectzd2zzast_varz00
																																										(BgL_arg3760z00_1620,
																																										BNIL);
																																								}
																																								BgL_arg3759z00_1619
																																									=
																																									(CAR
																																									(CDR
																																										(BgL_sexpz00_2))
																																									==
																																									CNST_TABLE_REF
																																									(((long) 3)));
																																								BgL_auxz00_2770
																																									=
																																									BGl_makezd2vrefzd2zzast_nodez00
																																									(BgL_locz00_4,
																																									BgL_ftypez00_1613,
																																									BUNSPEC,
																																									BINT
																																									(((long) -1)), BgL_arg3757z00_1617, (obj_t) (BgL_arg3758z00_1618), BgL_czd2fmtzd2_816, BgL_ftypez00_1613, BgL_otypez00_1615, BgL_vtypez00_1614, BgL_arg3759z00_1619);
																																						}}
																																						return
																																							(obj_t)
																																							(BgL_auxz00_2770);
																																					}
																																				}
																																			else
																																				{	/* Ast/private.scm 50 */
																																					obj_t
																																						BgL_cdrzd27040zd2_1447;
																																					BgL_cdrzd27040zd2_1447
																																						=
																																						CDR
																																						(BgL_sexpz00_2);
																																					{	/* Ast/private.scm 50 */
																																						obj_t
																																							BgL_carzd27049zd2_1448;
																																						obj_t
																																							BgL_cdrzd27050zd2_1449;
																																						BgL_carzd27049zd2_1448
																																							=
																																							CAR
																																							(BgL_cdrzd27040zd2_1447);
																																						BgL_cdrzd27050zd2_1449
																																							=
																																							CDR
																																							(BgL_cdrzd27040zd2_1447);
																																						{

																																							if ((BgL_carzd27049zd2_1448 == CNST_TABLE_REF(((long) 14))))
																																								{	/* Ast/private.scm 50 */
																																								BgL_kapzd27051zd2_1450:
																																									{	/* Ast/private.scm 50 */
																																										obj_t
																																											BgL_cdrzd27061zd2_1475;
																																										BgL_cdrzd27061zd2_1475
																																											=
																																											CDR
																																											(BgL_cdrzd27050zd2_1449);
																																										{	/* Ast/private.scm 50 */
																																											obj_t
																																												BgL_cdrzd27071zd2_1476;
																																											BgL_cdrzd27071zd2_1476
																																												=
																																												CDR
																																												(BgL_cdrzd27061zd2_1475);
																																											{	/* Ast/private.scm 50 */
																																												obj_t
																																													BgL_cdrzd27079zd2_1477;
																																												BgL_cdrzd27079zd2_1477
																																													=
																																													CDR
																																													(BgL_cdrzd27071zd2_1476);
																																												{	/* Ast/private.scm 50 */
																																													obj_t
																																														BgL_carzd27084zd2_1478;
																																													BgL_carzd27084zd2_1478
																																														=
																																														CAR
																																														(BgL_cdrzd27079zd2_1477);
																																													if (STRINGP(BgL_carzd27084zd2_1478))
																																														{	/* Ast/private.scm 50 */
																																															obj_t
																																																BgL_arg3654z00_1480;
																																															obj_t
																																																BgL_arg3655z00_1481;
																																															obj_t
																																																BgL_arg3656z00_1482;
																																															obj_t
																																																BgL_arg3657z00_1483;
																																															BgL_arg3654z00_1480
																																																=
																																																CAR
																																																(BgL_cdrzd27050zd2_1449);
																																															BgL_arg3655z00_1481
																																																=
																																																CAR
																																																(BgL_cdrzd27061zd2_1475);
																																															BgL_arg3656z00_1482
																																																=
																																																CAR
																																																(BgL_cdrzd27071zd2_1476);
																																															BgL_arg3657z00_1483
																																																=
																																																CDR
																																																(BgL_cdrzd27079zd2_1477);
																																															{	/* Ast/private.scm 50 */
																																																BgL_vsetz12z12_bglt
																																																	BgL_auxz00_2803;
																																																BgL_vtypez00_819
																																																	=
																																																	BgL_arg3654z00_1480;
																																																BgL_ftypez00_820
																																																	=
																																																	BgL_arg3655z00_1481;
																																																BgL_otypez00_821
																																																	=
																																																	BgL_arg3656z00_1482;
																																																BgL_czd2fmtzd2_822
																																																	=
																																																	BgL_carzd27084zd2_1478;
																																																BgL_restz00_823
																																																	=
																																																	BgL_arg3657z00_1483;
																																															BgL_tagzd21398zd2_824:
																																																{	/* Ast/private.scm 147 */
																																																	BgL_typez00_bglt
																																																		BgL_ftypez00_1626;
																																																	BgL_typez00_bglt
																																																		BgL_vtypez00_1627;
																																																	BgL_typez00_bglt
																																																		BgL_otypez00_1628;
																																																	BgL_ftypez00_1626
																																																		=
																																																		BGl_usezd2typez12zc0zztype_envz00
																																																		(BgL_ftypez00_820,
																																																		BgL_locz00_4);
																																																	BgL_vtypez00_1627
																																																		=
																																																		BGl_usezd2typez12zc0zztype_envz00
																																																		(BgL_vtypez00_819,
																																																		BgL_locz00_4);
																																																	BgL_otypez00_1628
																																																		=
																																																		BGl_usezd2typez12zc0zztype_envz00
																																																		(BgL_otypez00_821,
																																																		BgL_locz00_4);
																																																	{	/* Ast/private.scm 150 */
																																																		obj_t
																																																			BgL_arg3767z00_1630;
																																																		BgL_feffectz00_bglt
																																																			BgL_arg3768z00_1631;
																																																		bool_t
																																																			BgL_arg3769z00_1632;
																																																		BgL_arg3767z00_1630
																																																			=
																																																			BGl_sexpza2zd2ze3nodez93zzast_sexpz00
																																																			(BgL_restz00_823,
																																																			BgL_stackz00_3,
																																																			BgL_locz00_4,
																																																			CNST_TABLE_REF
																																																			(((long) 2)));
																																																		{	/* Ast/var.scm 152 */
																																																			obj_t
																																																				BgL_arg3771z00_1634;
																																																			{	/* Ast/private.scm 160 */
																																																				obj_t
																																																					BgL_arg3772z00_1635;
																																																				BgL_arg3772z00_1635
																																																					=
																																																					(
																																																					((BgL_typez00_bglt) CREF(BgL_ftypez00_1626))->BgL_idz00);
																																																				{	/* Ast/private.scm 160 */
																																																					obj_t
																																																						BgL_list3773z00_1636;
																																																					BgL_list3773z00_1636
																																																						=
																																																						MAKE_PAIR
																																																						(BgL_arg3772z00_1635,
																																																						BNIL);
																																																					BgL_arg3771z00_1634
																																																						=
																																																						BgL_list3773z00_1636;
																																																			}}
																																																			BgL_arg3768z00_1631
																																																				=
																																																				BGl_makezd2feffectzd2zzast_varz00
																																																				(BNIL,
																																																				BgL_arg3771z00_1634);
																																																		}
																																																		BgL_arg3769z00_1632
																																																			=
																																																			(CAR
																																																			(CDR
																																																				(BgL_sexpz00_2))
																																																			==
																																																			CNST_TABLE_REF
																																																			(((long) 4)));
																																																		BgL_auxz00_2803
																																																			=
																																																			BGl_makezd2vsetz12zc0zzast_nodez00
																																																			(BgL_locz00_4,
																																																			(BgL_typez00_bglt)
																																																			(BGl_za2unspecza2z00zztype_cachez00),
																																																			BUNSPEC,
																																																			BINT
																																																			(((long) -1)), BgL_arg3767z00_1630, (obj_t) (BgL_arg3768z00_1631), BgL_czd2fmtzd2_822, BgL_ftypez00_1626, BgL_otypez00_1628, BgL_vtypez00_1627, BgL_arg3769z00_1632);
																																																}}
																																																return
																																																	(obj_t)
																																																	(BgL_auxz00_2803);
																																															}
																																														}
																																													else
																																														{	/* Ast/private.scm 50 */
																																															obj_t
																																																BgL_cdrzd27108zd2_1484;
																																															BgL_cdrzd27108zd2_1484
																																																=
																																																CDR
																																																(BgL_sexpz00_2);
																																															{	/* Ast/private.scm 50 */
																																																obj_t
																																																	BgL_cdrzd27120zd2_1485;
																																																BgL_cdrzd27120zd2_1485
																																																	=
																																																	CDR
																																																	(BgL_cdrzd27108zd2_1484);
																																																if ((CAR(BgL_cdrzd27108zd2_1484) == CNST_TABLE_REF(((long) 13))))
																																																	{	/* Ast/private.scm 50 */
																																																		obj_t
																																																			BgL_cdrzd27132zd2_1487;
																																																		BgL_cdrzd27132zd2_1487
																																																			=
																																																			CDR
																																																			(BgL_cdrzd27120zd2_1485);
																																																		{	/* Ast/private.scm 50 */
																																																			obj_t
																																																				BgL_cdrzd27144zd2_1488;
																																																			BgL_cdrzd27144zd2_1488
																																																				=
																																																				CDR
																																																				(BgL_cdrzd27132zd2_1487);
																																																			{	/* Ast/private.scm 50 */
																																																				obj_t
																																																					BgL_cdrzd27154zd2_1489;
																																																				BgL_cdrzd27154zd2_1489
																																																					=
																																																					CDR
																																																					(BgL_cdrzd27144zd2_1488);
																																																				{	/* Ast/private.scm 50 */
																																																					obj_t
																																																						BgL_carzd27161zd2_1490;
																																																					obj_t
																																																						BgL_cdrzd27162zd2_1491;
																																																					BgL_carzd27161zd2_1490
																																																						=
																																																						CAR
																																																						(BgL_cdrzd27154zd2_1489);
																																																					BgL_cdrzd27162zd2_1491
																																																						=
																																																						CDR
																																																						(BgL_cdrzd27154zd2_1489);
																																																					if (STRINGP(BgL_carzd27161zd2_1490))
																																																						{	/* Ast/private.scm 50 */
																																																							if (PAIRP(BgL_cdrzd27162zd2_1491))
																																																								{	/* Ast/private.scm 50 */
																																																									obj_t
																																																										BgL_carzd27169zd2_1494;
																																																									obj_t
																																																										BgL_cdrzd27170zd2_1495;
																																																									BgL_carzd27169zd2_1494
																																																										=
																																																										CAR
																																																										(BgL_cdrzd27162zd2_1491);
																																																									BgL_cdrzd27170zd2_1495
																																																										=
																																																										CDR
																																																										(BgL_cdrzd27162zd2_1491);
																																																									if (STRINGP(BgL_carzd27169zd2_1494))
																																																										{	/* Ast/private.scm 50 */
																																																											if (PAIRP(BgL_cdrzd27170zd2_1495))
																																																												{	/* Ast/private.scm 50 */
																																																													obj_t
																																																														BgL_carzd27176zd2_1498;
																																																													BgL_carzd27176zd2_1498
																																																														=
																																																														CAR
																																																														(BgL_cdrzd27170zd2_1495);
																																																													if (BOOLEANP(BgL_carzd27176zd2_1498))
																																																														{	/* Ast/private.scm 50 */
																																																															obj_t
																																																																BgL_arg3664z00_1500;
																																																															obj_t
																																																																BgL_arg3665z00_1501;
																																																															obj_t
																																																																BgL_arg3666z00_1502;
																																																															obj_t
																																																																BgL_arg3667z00_1503;
																																																															BgL_arg3664z00_1500
																																																																=
																																																																CAR
																																																																(BgL_cdrzd27120zd2_1485);
																																																															BgL_arg3665z00_1501
																																																																=
																																																																CAR
																																																																(BgL_cdrzd27132zd2_1487);
																																																															BgL_arg3666z00_1502
																																																																=
																																																																CAR
																																																																(BgL_cdrzd27144zd2_1488);
																																																															BgL_arg3667z00_1503
																																																																=
																																																																CDR
																																																																(BgL_cdrzd27170zd2_1495);
																																																															{	/* Ast/private.scm 50 */
																																																																obj_t
																																																																	BgL_czd2heapzd2fmtz00_2341;
																																																																BgL_czd2heapzd2fmtz00_2341
																																																																	=
																																																																	BgL_carzd27161zd2_1490;
																																																																{	/* Ast/private.scm 50 */
																																																																	BgL_typez00_bglt
																																																																		BgL_ftypez00_2345;
																																																																	BgL_typez00_bglt
																																																																		BgL_vtypez00_2346;
																																																																	BgL_typez00_bglt
																																																																		BgL_otypez00_2347;
																																																																	BgL_ftypez00_2345
																																																																		=
																																																																		BGl_usezd2typez12zc0zztype_envz00
																																																																		(BgL_arg3665z00_1501,
																																																																		BgL_locz00_4);
																																																																	BgL_vtypez00_2346
																																																																		=
																																																																		BGl_usezd2typez12zc0zztype_envz00
																																																																		(BgL_arg3664z00_1500,
																																																																		BgL_locz00_4);
																																																																	BgL_otypez00_2347
																																																																		=
																																																																		BGl_usezd2typez12zc0zztype_envz00
																																																																		(BgL_arg3666z00_1502,
																																																																		BgL_locz00_4);
																																																																	{	/* Ast/private.scm 50 */
																																																																		obj_t
																																																																			BgL_arg3777z00_2349;
																																																																		BgL_arg3777z00_2349
																																																																			=
																																																																			BGl_sexpza2zd2ze3nodez93zzast_sexpz00
																																																																			(BgL_arg3667z00_1503,
																																																																			BgL_stackz00_3,
																																																																			BgL_locz00_4,
																																																																			CNST_TABLE_REF
																																																																			(((long) 2)));
																																																																		return
																																																																			(obj_t)
																																																																			(BGl_makezd2valloczd2zzast_nodez00
																																																																			(BgL_locz00_4,
																																																																				BgL_vtypez00_2346,
																																																																				BUNSPEC,
																																																																				BINT
																																																																				(((long) -1)), BgL_arg3777z00_2349, BUNSPEC, BgL_czd2heapzd2fmtz00_2341, BgL_ftypez00_2345, BgL_otypez00_2347));
																																																														}}}}
																																																													else
																																																														{	/* Ast/private.scm 50 */
																																																															goto
																																																																BgL_tagzd21400zd2_833;
																																																														}
																																																												}
																																																											else
																																																												{	/* Ast/private.scm 50 */
																																																													goto
																																																														BgL_tagzd21400zd2_833;
																																																												}
																																																										}
																																																									else
																																																										{	/* Ast/private.scm 50 */
																																																											goto
																																																												BgL_tagzd21400zd2_833;
																																																										}
																																																								}
																																																							else
																																																								{	/* Ast/private.scm 50 */
																																																									goto
																																																										BgL_tagzd21400zd2_833;
																																																								}
																																																						}
																																																					else
																																																						{	/* Ast/private.scm 50 */
																																																							goto
																																																								BgL_tagzd21400zd2_833;
																																																						}
																																																				}
																																																			}
																																																		}
																																																	}
																																																else
																																																	{	/* Ast/private.scm 50 */
																																																		goto
																																																			BgL_tagzd21400zd2_833;
																																																	}
																																															}
																																														}
																																												}
																																											}
																																										}
																																									}
																																								}
																																							else
																																								{	/* Ast/private.scm 50 */
																																									if ((BgL_carzd27049zd2_1448 == CNST_TABLE_REF(((long) 4))))
																																										{	/* Ast/private.scm 50 */
																																											goto
																																												BgL_kapzd27051zd2_1450;
																																										}
																																									else
																																										{	/* Ast/private.scm 50 */
																																											obj_t
																																												BgL_cdrzd27212zd2_1454;
																																											BgL_cdrzd27212zd2_1454
																																												=
																																												CDR
																																												(BgL_cdrzd27040zd2_1447);
																																											if ((CAR(BgL_cdrzd27040zd2_1447) == CNST_TABLE_REF(((long) 13))))
																																												{	/* Ast/private.scm 50 */
																																													obj_t
																																														BgL_cdrzd27224zd2_1456;
																																													BgL_cdrzd27224zd2_1456
																																														=
																																														CDR
																																														(BgL_cdrzd27212zd2_1454);
																																													{	/* Ast/private.scm 50 */
																																														obj_t
																																															BgL_cdrzd27236zd2_1457;
																																														BgL_cdrzd27236zd2_1457
																																															=
																																															CDR
																																															(BgL_cdrzd27224zd2_1456);
																																														{	/* Ast/private.scm 50 */
																																															obj_t
																																																BgL_cdrzd27246zd2_1458;
																																															BgL_cdrzd27246zd2_1458
																																																=
																																																CDR
																																																(BgL_cdrzd27236zd2_1457);
																																															{	/* Ast/private.scm 50 */
																																																obj_t
																																																	BgL_carzd27253zd2_1459;
																																																obj_t
																																																	BgL_cdrzd27254zd2_1460;
																																																BgL_carzd27253zd2_1459
																																																	=
																																																	CAR
																																																	(BgL_cdrzd27246zd2_1458);
																																																BgL_cdrzd27254zd2_1460
																																																	=
																																																	CDR
																																																	(BgL_cdrzd27246zd2_1458);
																																																if (STRINGP(BgL_carzd27253zd2_1459))
																																																	{	/* Ast/private.scm 50 */
																																																		if (PAIRP(BgL_cdrzd27254zd2_1460))
																																																			{	/* Ast/private.scm 50 */
																																																				obj_t
																																																					BgL_carzd27261zd2_1463;
																																																				obj_t
																																																					BgL_cdrzd27262zd2_1464;
																																																				BgL_carzd27261zd2_1463
																																																					=
																																																					CAR
																																																					(BgL_cdrzd27254zd2_1460);
																																																				BgL_cdrzd27262zd2_1464
																																																					=
																																																					CDR
																																																					(BgL_cdrzd27254zd2_1460);
																																																				if (STRINGP(BgL_carzd27261zd2_1463))
																																																					{	/* Ast/private.scm 50 */
																																																						if (PAIRP(BgL_cdrzd27262zd2_1464))
																																																							{	/* Ast/private.scm 50 */
																																																								obj_t
																																																									BgL_carzd27268zd2_1467;
																																																								BgL_carzd27268zd2_1467
																																																									=
																																																									CAR
																																																									(BgL_cdrzd27262zd2_1464);
																																																								if (BOOLEANP(BgL_carzd27268zd2_1467))
																																																									{	/* Ast/private.scm 50 */
																																																										obj_t
																																																											BgL_arg3647z00_1469;
																																																										obj_t
																																																											BgL_arg3648z00_1470;
																																																										obj_t
																																																											BgL_arg3649z00_1471;
																																																										obj_t
																																																											BgL_arg3650z00_1472;
																																																										BgL_arg3647z00_1469
																																																											=
																																																											CAR
																																																											(BgL_cdrzd27212zd2_1454);
																																																										BgL_arg3648z00_1470
																																																											=
																																																											CAR
																																																											(BgL_cdrzd27224zd2_1456);
																																																										BgL_arg3649z00_1471
																																																											=
																																																											CAR
																																																											(BgL_cdrzd27236zd2_1457);
																																																										BgL_arg3650z00_1472
																																																											=
																																																											CDR
																																																											(BgL_cdrzd27262zd2_1464);
																																																										{	/* Ast/private.scm 50 */
																																																											obj_t
																																																												BgL_czd2heapzd2fmtz00_2300;
																																																											BgL_czd2heapzd2fmtz00_2300
																																																												=
																																																												BgL_carzd27253zd2_1459;
																																																											{	/* Ast/private.scm 50 */
																																																												BgL_typez00_bglt
																																																													BgL_ftypez00_2304;
																																																												BgL_typez00_bglt
																																																													BgL_vtypez00_2305;
																																																												BgL_typez00_bglt
																																																													BgL_otypez00_2306;
																																																												BgL_ftypez00_2304
																																																													=
																																																													BGl_usezd2typez12zc0zztype_envz00
																																																													(BgL_arg3648z00_1470,
																																																													BgL_locz00_4);
																																																												BgL_vtypez00_2305
																																																													=
																																																													BGl_usezd2typez12zc0zztype_envz00
																																																													(BgL_arg3647z00_1469,
																																																													BgL_locz00_4);
																																																												BgL_otypez00_2306
																																																													=
																																																													BGl_usezd2typez12zc0zztype_envz00
																																																													(BgL_arg3649z00_1471,
																																																													BgL_locz00_4);
																																																												{	/* Ast/private.scm 50 */
																																																													obj_t
																																																														BgL_arg3777z00_2308;
																																																													BgL_arg3777z00_2308
																																																														=
																																																														BGl_sexpza2zd2ze3nodez93zzast_sexpz00
																																																														(BgL_arg3650z00_1472,
																																																														BgL_stackz00_3,
																																																														BgL_locz00_4,
																																																														CNST_TABLE_REF
																																																														(((long) 2)));
																																																													return
																																																														(obj_t)
																																																														(BGl_makezd2valloczd2zzast_nodez00
																																																														(BgL_locz00_4,
																																																															BgL_vtypez00_2305,
																																																															BUNSPEC,
																																																															BINT
																																																															(((long) -1)), BgL_arg3777z00_2308, BUNSPEC, BgL_czd2heapzd2fmtz00_2300, BgL_ftypez00_2304, BgL_otypez00_2306));
																																																									}}}}
																																																								else
																																																									{	/* Ast/private.scm 50 */
																																																										goto
																																																											BgL_tagzd21400zd2_833;
																																																									}
																																																							}
																																																						else
																																																							{	/* Ast/private.scm 50 */
																																																								goto
																																																									BgL_tagzd21400zd2_833;
																																																							}
																																																					}
																																																				else
																																																					{	/* Ast/private.scm 50 */
																																																						goto
																																																							BgL_tagzd21400zd2_833;
																																																					}
																																																			}
																																																		else
																																																			{	/* Ast/private.scm 50 */
																																																				goto
																																																					BgL_tagzd21400zd2_833;
																																																			}
																																																	}
																																																else
																																																	{	/* Ast/private.scm 50 */
																																																		goto
																																																			BgL_tagzd21400zd2_833;
																																																	}
																																															}
																																														}
																																													}
																																												}
																																											else
																																												{	/* Ast/private.scm 50 */
																																													goto
																																														BgL_tagzd21400zd2_833;
																																												}
																																										}
																																								}
																																						}
																																					}
																																				}
																																		}
																																	else
																																		{	/* Ast/private.scm 50 */
																																			goto
																																				BgL_tagzd21400zd2_833;
																																		}
																																}
																															else
																																{	/* Ast/private.scm 50 */
																																	goto
																																		BgL_tagzd21400zd2_833;
																																}
																														}
																													else
																														{	/* Ast/private.scm 50 */
																															goto
																																BgL_tagzd21400zd2_833;
																														}
																												}
																											else
																												{	/* Ast/private.scm 50 */
																													goto
																														BgL_tagzd21400zd2_833;
																												}
																										}
																									else
																										{	/* Ast/private.scm 50 */
																											if (
																												(BgL_carzd26991zd2_1362
																													==
																													CNST_TABLE_REF(((long)
																															3))))
																												{	/* Ast/private.scm 50 */
																													goto
																														BgL_kapzd26993zd2_1364;
																												}
																											else
																												{	/* Ast/private.scm 50 */
																													obj_t
																														BgL_cdrzd27408zd2_1367;
																													BgL_cdrzd27408zd2_1367
																														=
																														CDR(BgL_sexpz00_2);
																													{	/* Ast/private.scm 50 */
																														obj_t
																															BgL_carzd27414zd2_1368;
																														obj_t
																															BgL_cdrzd27415zd2_1369;
																														BgL_carzd27414zd2_1368
																															=
																															CAR
																															(BgL_cdrzd27408zd2_1367);
																														BgL_cdrzd27415zd2_1369
																															=
																															CDR
																															(BgL_cdrzd27408zd2_1367);
																														{

																															if (
																																(BgL_carzd27414zd2_1368
																																	==
																																	CNST_TABLE_REF
																																	(((long)
																																			14))))
																																{	/* Ast/private.scm 50 */
																																BgL_kapzd27416zd2_1370:
																																	if (PAIRP
																																		(BgL_cdrzd27415zd2_1369))
																																		{	/* Ast/private.scm 50 */
																																			obj_t
																																				BgL_cdrzd27423zd2_1400;
																																			BgL_cdrzd27423zd2_1400
																																				=
																																				CDR
																																				(BgL_cdrzd27415zd2_1369);
																																			if (PAIRP
																																				(BgL_cdrzd27423zd2_1400))
																																				{	/* Ast/private.scm 50 */
																																					obj_t
																																						BgL_cdrzd27430zd2_1402;
																																					BgL_cdrzd27430zd2_1402
																																						=
																																						CDR
																																						(BgL_cdrzd27423zd2_1400);
																																					if (PAIRP(BgL_cdrzd27430zd2_1402))
																																						{	/* Ast/private.scm 50 */
																																							obj_t
																																								BgL_cdrzd27436zd2_1404;
																																							BgL_cdrzd27436zd2_1404
																																								=
																																								CDR
																																								(BgL_cdrzd27430zd2_1402);
																																							if (PAIRP(BgL_cdrzd27436zd2_1404))
																																								{	/* Ast/private.scm 50 */
																																									obj_t
																																										BgL_carzd27440zd2_1406;
																																									BgL_carzd27440zd2_1406
																																										=
																																										CAR
																																										(BgL_cdrzd27436zd2_1404);
																																									if (STRINGP(BgL_carzd27440zd2_1406))
																																										{	/* Ast/private.scm 50 */
																																											obj_t
																																												BgL_arg3614z00_1408;
																																											obj_t
																																												BgL_arg3615z00_1409;
																																											obj_t
																																												BgL_arg3616z00_1410;
																																											obj_t
																																												BgL_arg3617z00_1411;
																																											BgL_arg3614z00_1408
																																												=
																																												CAR
																																												(BgL_cdrzd27415zd2_1369);
																																											BgL_arg3615z00_1409
																																												=
																																												CAR
																																												(BgL_cdrzd27423zd2_1400);
																																											BgL_arg3616z00_1410
																																												=
																																												CAR
																																												(BgL_cdrzd27430zd2_1402);
																																											BgL_arg3617z00_1411
																																												=
																																												CDR
																																												(BgL_cdrzd27436zd2_1404);
																																											{	/* Ast/private.scm 50 */
																																												BgL_vsetz12z12_bglt
																																													BgL_auxz00_2922;
																																												{
																																													obj_t
																																														BgL_restz00_2927;
																																													obj_t
																																														BgL_czd2fmtzd2_2926;
																																													obj_t
																																														BgL_otypez00_2925;
																																													obj_t
																																														BgL_ftypez00_2924;
																																													obj_t
																																														BgL_vtypez00_2923;
																																													BgL_vtypez00_2923
																																														=
																																														BgL_arg3614z00_1408;
																																													BgL_ftypez00_2924
																																														=
																																														BgL_arg3615z00_1409;
																																													BgL_otypez00_2925
																																														=
																																														BgL_arg3616z00_1410;
																																													BgL_czd2fmtzd2_2926
																																														=
																																														BgL_carzd27440zd2_1406;
																																													BgL_restz00_2927
																																														=
																																														BgL_arg3617z00_1411;
																																													BgL_restz00_823
																																														=
																																														BgL_restz00_2927;
																																													BgL_czd2fmtzd2_822
																																														=
																																														BgL_czd2fmtzd2_2926;
																																													BgL_otypez00_821
																																														=
																																														BgL_otypez00_2925;
																																													BgL_ftypez00_820
																																														=
																																														BgL_ftypez00_2924;
																																													BgL_vtypez00_819
																																														=
																																														BgL_vtypez00_2923;
																																													goto
																																														BgL_tagzd21398zd2_824;
																																												}
																																												return
																																													(obj_t)
																																													(BgL_auxz00_2922);
																																											}
																																										}
																																									else
																																										{	/* Ast/private.scm 50 */
																																											obj_t
																																												BgL_cdrzd27464zd2_1412;
																																											BgL_cdrzd27464zd2_1412
																																												=
																																												CDR
																																												(BgL_sexpz00_2);
																																											{	/* Ast/private.scm 50 */
																																												obj_t
																																													BgL_cdrzd27476zd2_1413;
																																												BgL_cdrzd27476zd2_1413
																																													=
																																													CDR
																																													(BgL_cdrzd27464zd2_1412);
																																												if ((CAR(BgL_cdrzd27464zd2_1412) == CNST_TABLE_REF(((long) 13))))
																																													{	/* Ast/private.scm 50 */
																																														obj_t
																																															BgL_cdrzd27488zd2_1415;
																																														BgL_cdrzd27488zd2_1415
																																															=
																																															CDR
																																															(BgL_cdrzd27476zd2_1413);
																																														{	/* Ast/private.scm 50 */
																																															obj_t
																																																BgL_cdrzd27500zd2_1416;
																																															BgL_cdrzd27500zd2_1416
																																																=
																																																CDR
																																																(BgL_cdrzd27488zd2_1415);
																																															{	/* Ast/private.scm 50 */
																																																obj_t
																																																	BgL_cdrzd27510zd2_1417;
																																																BgL_cdrzd27510zd2_1417
																																																	=
																																																	CDR
																																																	(BgL_cdrzd27500zd2_1416);
																																																{	/* Ast/private.scm 50 */
																																																	obj_t
																																																		BgL_carzd27517zd2_1418;
																																																	obj_t
																																																		BgL_cdrzd27518zd2_1419;
																																																	BgL_carzd27517zd2_1418
																																																		=
																																																		CAR
																																																		(BgL_cdrzd27510zd2_1417);
																																																	BgL_cdrzd27518zd2_1419
																																																		=
																																																		CDR
																																																		(BgL_cdrzd27510zd2_1417);
																																																	if (STRINGP(BgL_carzd27517zd2_1418))
																																																		{	/* Ast/private.scm 50 */
																																																			if (PAIRP(BgL_cdrzd27518zd2_1419))
																																																				{	/* Ast/private.scm 50 */
																																																					obj_t
																																																						BgL_carzd27525zd2_1422;
																																																					obj_t
																																																						BgL_cdrzd27526zd2_1423;
																																																					BgL_carzd27525zd2_1422
																																																						=
																																																						CAR
																																																						(BgL_cdrzd27518zd2_1419);
																																																					BgL_cdrzd27526zd2_1423
																																																						=
																																																						CDR
																																																						(BgL_cdrzd27518zd2_1419);
																																																					if (STRINGP(BgL_carzd27525zd2_1422))
																																																						{	/* Ast/private.scm 50 */
																																																							if (PAIRP(BgL_cdrzd27526zd2_1423))
																																																								{	/* Ast/private.scm 50 */
																																																									obj_t
																																																										BgL_carzd27532zd2_1426;
																																																									BgL_carzd27532zd2_1426
																																																										=
																																																										CAR
																																																										(BgL_cdrzd27526zd2_1423);
																																																									if (BOOLEANP(BgL_carzd27532zd2_1426))
																																																										{	/* Ast/private.scm 50 */
																																																											obj_t
																																																												BgL_arg3624z00_1428;
																																																											obj_t
																																																												BgL_arg3625z00_1429;
																																																											obj_t
																																																												BgL_arg3626z00_1430;
																																																											obj_t
																																																												BgL_arg3627z00_1431;
																																																											BgL_arg3624z00_1428
																																																												=
																																																												CAR
																																																												(BgL_cdrzd27476zd2_1413);
																																																											BgL_arg3625z00_1429
																																																												=
																																																												CAR
																																																												(BgL_cdrzd27488zd2_1415);
																																																											BgL_arg3626z00_1430
																																																												=
																																																												CAR
																																																												(BgL_cdrzd27500zd2_1416);
																																																											BgL_arg3627z00_1431
																																																												=
																																																												CDR
																																																												(BgL_cdrzd27526zd2_1423);
																																																											{	/* Ast/private.scm 50 */
																																																												obj_t
																																																													BgL_czd2heapzd2fmtz00_2252;
																																																												BgL_czd2heapzd2fmtz00_2252
																																																													=
																																																													BgL_carzd27517zd2_1418;
																																																												{	/* Ast/private.scm 50 */
																																																													BgL_typez00_bglt
																																																														BgL_ftypez00_2256;
																																																													BgL_typez00_bglt
																																																														BgL_vtypez00_2257;
																																																													BgL_typez00_bglt
																																																														BgL_otypez00_2258;
																																																													BgL_ftypez00_2256
																																																														=
																																																														BGl_usezd2typez12zc0zztype_envz00
																																																														(BgL_arg3625z00_1429,
																																																														BgL_locz00_4);
																																																													BgL_vtypez00_2257
																																																														=
																																																														BGl_usezd2typez12zc0zztype_envz00
																																																														(BgL_arg3624z00_1428,
																																																														BgL_locz00_4);
																																																													BgL_otypez00_2258
																																																														=
																																																														BGl_usezd2typez12zc0zztype_envz00
																																																														(BgL_arg3626z00_1430,
																																																														BgL_locz00_4);
																																																													{	/* Ast/private.scm 50 */
																																																														obj_t
																																																															BgL_arg3777z00_2260;
																																																														BgL_arg3777z00_2260
																																																															=
																																																															BGl_sexpza2zd2ze3nodez93zzast_sexpz00
																																																															(BgL_arg3627z00_1431,
																																																															BgL_stackz00_3,
																																																															BgL_locz00_4,
																																																															CNST_TABLE_REF
																																																															(((long) 2)));
																																																														return
																																																															(obj_t)
																																																															(BGl_makezd2valloczd2zzast_nodez00
																																																															(BgL_locz00_4,
																																																																BgL_vtypez00_2257,
																																																																BUNSPEC,
																																																																BINT
																																																																(((long) -1)), BgL_arg3777z00_2260, BUNSPEC, BgL_czd2heapzd2fmtz00_2252, BgL_ftypez00_2256, BgL_otypez00_2258));
																																																										}}}}
																																																									else
																																																										{	/* Ast/private.scm 50 */
																																																											goto
																																																												BgL_tagzd21400zd2_833;
																																																										}
																																																								}
																																																							else
																																																								{	/* Ast/private.scm 50 */
																																																									goto
																																																										BgL_tagzd21400zd2_833;
																																																								}
																																																						}
																																																					else
																																																						{	/* Ast/private.scm 50 */
																																																							goto
																																																								BgL_tagzd21400zd2_833;
																																																						}
																																																				}
																																																			else
																																																				{	/* Ast/private.scm 50 */
																																																					goto
																																																						BgL_tagzd21400zd2_833;
																																																				}
																																																		}
																																																	else
																																																		{	/* Ast/private.scm 50 */
																																																			goto
																																																				BgL_tagzd21400zd2_833;
																																																		}
																																																}
																																															}
																																														}
																																													}
																																												else
																																													{	/* Ast/private.scm 50 */
																																														goto
																																															BgL_tagzd21400zd2_833;
																																													}
																																											}
																																										}
																																								}
																																							else
																																								{	/* Ast/private.scm 50 */
																																									goto
																																										BgL_tagzd21400zd2_833;
																																								}
																																						}
																																					else
																																						{	/* Ast/private.scm 50 */
																																							goto
																																								BgL_tagzd21400zd2_833;
																																						}
																																				}
																																			else
																																				{	/* Ast/private.scm 50 */
																																					goto
																																						BgL_tagzd21400zd2_833;
																																				}
																																		}
																																	else
																																		{	/* Ast/private.scm 50 */
																																			goto
																																				BgL_tagzd21400zd2_833;
																																		}
																																}
																															else
																																{	/* Ast/private.scm 50 */
																																	if (
																																		(BgL_carzd27414zd2_1368
																																			==
																																			CNST_TABLE_REF
																																			(((long)
																																					4))))
																																		{	/* Ast/private.scm 50 */
																																			goto
																																				BgL_kapzd27416zd2_1370;
																																		}
																																	else
																																		{	/* Ast/private.scm 50 */
																																			obj_t
																																				BgL_cdrzd27624zd2_1374;
																																			BgL_cdrzd27624zd2_1374
																																				=
																																				CDR
																																				(BgL_cdrzd27408zd2_1367);
																																			if ((CAR
																																					(BgL_cdrzd27408zd2_1367)
																																					==
																																					CNST_TABLE_REF
																																					(((long) 13))))
																																				{	/* Ast/private.scm 50 */
																																					if (PAIRP(BgL_cdrzd27624zd2_1374))
																																						{	/* Ast/private.scm 50 */
																																							obj_t
																																								BgL_cdrzd27633zd2_1377;
																																							BgL_cdrzd27633zd2_1377
																																								=
																																								CDR
																																								(BgL_cdrzd27624zd2_1374);
																																							if (PAIRP(BgL_cdrzd27633zd2_1377))
																																								{	/* Ast/private.scm 50 */
																																									obj_t
																																										BgL_cdrzd27642zd2_1379;
																																									BgL_cdrzd27642zd2_1379
																																										=
																																										CDR
																																										(BgL_cdrzd27633zd2_1377);
																																									if (PAIRP(BgL_cdrzd27642zd2_1379))
																																										{	/* Ast/private.scm 50 */
																																											obj_t
																																												BgL_cdrzd27650zd2_1381;
																																											BgL_cdrzd27650zd2_1381
																																												=
																																												CDR
																																												(BgL_cdrzd27642zd2_1379);
																																											if (PAIRP(BgL_cdrzd27650zd2_1381))
																																												{	/* Ast/private.scm 50 */
																																													obj_t
																																														BgL_carzd27656zd2_1383;
																																													obj_t
																																														BgL_cdrzd27657zd2_1384;
																																													BgL_carzd27656zd2_1383
																																														=
																																														CAR
																																														(BgL_cdrzd27650zd2_1381);
																																													BgL_cdrzd27657zd2_1384
																																														=
																																														CDR
																																														(BgL_cdrzd27650zd2_1381);
																																													if (STRINGP(BgL_carzd27656zd2_1383))
																																														{	/* Ast/private.scm 50 */
																																															if (PAIRP(BgL_cdrzd27657zd2_1384))
																																																{	/* Ast/private.scm 50 */
																																																	obj_t
																																																		BgL_carzd27664zd2_1387;
																																																	obj_t
																																																		BgL_cdrzd27665zd2_1388;
																																																	BgL_carzd27664zd2_1387
																																																		=
																																																		CAR
																																																		(BgL_cdrzd27657zd2_1384);
																																																	BgL_cdrzd27665zd2_1388
																																																		=
																																																		CDR
																																																		(BgL_cdrzd27657zd2_1384);
																																																	if (STRINGP(BgL_carzd27664zd2_1387))
																																																		{	/* Ast/private.scm 50 */
																																																			if (PAIRP(BgL_cdrzd27665zd2_1388))
																																																				{	/* Ast/private.scm 50 */
																																																					obj_t
																																																						BgL_carzd27671zd2_1391;
																																																					BgL_carzd27671zd2_1391
																																																						=
																																																						CAR
																																																						(BgL_cdrzd27665zd2_1388);
																																																					if (BOOLEANP(BgL_carzd27671zd2_1391))
																																																						{	/* Ast/private.scm 50 */
																																																							obj_t
																																																								BgL_arg3603z00_1393;
																																																							obj_t
																																																								BgL_arg3604z00_1394;
																																																							obj_t
																																																								BgL_arg3605z00_1395;
																																																							obj_t
																																																								BgL_arg3606z00_1396;
																																																							BgL_arg3603z00_1393
																																																								=
																																																								CAR
																																																								(BgL_cdrzd27624zd2_1374);
																																																							BgL_arg3604z00_1394
																																																								=
																																																								CAR
																																																								(BgL_cdrzd27633zd2_1377);
																																																							BgL_arg3605z00_1395
																																																								=
																																																								CAR
																																																								(BgL_cdrzd27642zd2_1379);
																																																							BgL_arg3606z00_1396
																																																								=
																																																								CDR
																																																								(BgL_cdrzd27665zd2_1388);
																																																							{	/* Ast/private.scm 50 */
																																																								obj_t
																																																									BgL_czd2heapzd2fmtz00_2207;
																																																								BgL_czd2heapzd2fmtz00_2207
																																																									=
																																																									BgL_carzd27656zd2_1383;
																																																								{	/* Ast/private.scm 50 */
																																																									BgL_typez00_bglt
																																																										BgL_ftypez00_2211;
																																																									BgL_typez00_bglt
																																																										BgL_vtypez00_2212;
																																																									BgL_typez00_bglt
																																																										BgL_otypez00_2213;
																																																									BgL_ftypez00_2211
																																																										=
																																																										BGl_usezd2typez12zc0zztype_envz00
																																																										(BgL_arg3604z00_1394,
																																																										BgL_locz00_4);
																																																									BgL_vtypez00_2212
																																																										=
																																																										BGl_usezd2typez12zc0zztype_envz00
																																																										(BgL_arg3603z00_1393,
																																																										BgL_locz00_4);
																																																									BgL_otypez00_2213
																																																										=
																																																										BGl_usezd2typez12zc0zztype_envz00
																																																										(BgL_arg3605z00_1395,
																																																										BgL_locz00_4);
																																																									{	/* Ast/private.scm 50 */
																																																										obj_t
																																																											BgL_arg3777z00_2215;
																																																										BgL_arg3777z00_2215
																																																											=
																																																											BGl_sexpza2zd2ze3nodez93zzast_sexpz00
																																																											(BgL_arg3606z00_1396,
																																																											BgL_stackz00_3,
																																																											BgL_locz00_4,
																																																											CNST_TABLE_REF
																																																											(((long) 2)));
																																																										return
																																																											(obj_t)
																																																											(BGl_makezd2valloczd2zzast_nodez00
																																																											(BgL_locz00_4,
																																																												BgL_vtypez00_2212,
																																																												BUNSPEC,
																																																												BINT
																																																												(((long) -1)), BgL_arg3777z00_2215, BUNSPEC, BgL_czd2heapzd2fmtz00_2207, BgL_ftypez00_2211, BgL_otypez00_2213));
																																																						}}}}
																																																					else
																																																						{	/* Ast/private.scm 50 */
																																																							goto
																																																								BgL_tagzd21400zd2_833;
																																																						}
																																																				}
																																																			else
																																																				{	/* Ast/private.scm 50 */
																																																					goto
																																																						BgL_tagzd21400zd2_833;
																																																				}
																																																		}
																																																	else
																																																		{	/* Ast/private.scm 50 */
																																																			goto
																																																				BgL_tagzd21400zd2_833;
																																																		}
																																																}
																																															else
																																																{	/* Ast/private.scm 50 */
																																																	goto
																																																		BgL_tagzd21400zd2_833;
																																																}
																																														}
																																													else
																																														{	/* Ast/private.scm 50 */
																																															goto
																																																BgL_tagzd21400zd2_833;
																																														}
																																												}
																																											else
																																												{	/* Ast/private.scm 50 */
																																													goto
																																														BgL_tagzd21400zd2_833;
																																												}
																																										}
																																									else
																																										{	/* Ast/private.scm 50 */
																																											goto
																																												BgL_tagzd21400zd2_833;
																																										}
																																								}
																																							else
																																								{	/* Ast/private.scm 50 */
																																									goto
																																										BgL_tagzd21400zd2_833;
																																								}
																																						}
																																					else
																																						{	/* Ast/private.scm 50 */
																																							goto
																																								BgL_tagzd21400zd2_833;
																																						}
																																				}
																																			else
																																				{	/* Ast/private.scm 50 */
																																					goto
																																						BgL_tagzd21400zd2_833;
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
						{	/* Ast/private.scm 50 */
							goto BgL_tagzd21400zd2_833;
						}
				}
			}
		}
	}



/* _private->node */
	obj_t BGl__privatezd2ze3nodez31zzast_privatez00(obj_t BgL_envz00_2421,
		obj_t BgL_sexpz00_2422, obj_t BgL_stackz00_2423, obj_t BgL_locz00_2424,
		obj_t BgL_sitez00_2425)
	{
		AN_OBJECT;
		{	/* Ast/private.scm 45 */
			return
				BGl_privatezd2ze3nodez31zzast_privatez00(BgL_sexpz00_2422,
				BgL_stackz00_2423, BgL_locz00_2424, BgL_sitez00_2425);
		}
	}



/* make-private-sexp */
	BGL_EXPORTED_DEF obj_t BGl_makezd2privatezd2sexpz00zzast_privatez00(obj_t
		BgL_kindz00_6, obj_t BgL_typezd2idzd2_7, obj_t BgL_objsz00_8)
	{
		AN_OBJECT;
		{	/* Ast/private.scm 189 */
			{	/* Ast/private.scm 193 */
				obj_t BgL_arg3785z00_2416;

				{	/* Ast/private.scm 193 */
					obj_t BgL_list3786z00_2417;

					{	/* Ast/private.scm 193 */
						obj_t BgL_arg3787z00_2418;

						BgL_arg3787z00_2418 = MAKE_PAIR(BgL_objsz00_8, BNIL);
						BgL_list3786z00_2417 =
							MAKE_PAIR(BgL_typezd2idzd2_7, BgL_arg3787z00_2418);
					}
					BgL_arg3785z00_2416 =
						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_kindz00_6,
						BgL_list3786z00_2417);
				}
				return
					MAKE_PAIR(BGl_za2privatezd2stampza2zd2zzast_privatez00,
					BgL_arg3785z00_2416);
			}
		}
	}



/* _make-private-sexp */
	obj_t BGl__makezd2privatezd2sexpz00zzast_privatez00(obj_t BgL_envz00_2426,
		obj_t BgL_kindz00_2427, obj_t BgL_typezd2idzd2_2428, obj_t BgL_objsz00_2429)
	{
		AN_OBJECT;
		{	/* Ast/private.scm 189 */
			return
				BGl_makezd2privatezd2sexpz00zzast_privatez00(BgL_kindz00_2427,
				BgL_typezd2idzd2_2428, BgL_objsz00_2429);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_privatez00()
	{
		AN_OBJECT;
		{	/* Ast/private.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_privatez00()
	{
		AN_OBJECT;
		{	/* Ast/private.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_privatez00()
	{
		AN_OBJECT;
		{	/* Ast/private.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3844z00zzast_privatez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3844z00zzast_privatez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3844z00zzast_privatez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3844z00zzast_privatez00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string3844z00zzast_privatez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3844z00zzast_privatez00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string3844z00zzast_privatez00));
			return
				BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3844z00zzast_privatez00));
		}
	}

#ifdef __cplusplus
}
#endif
