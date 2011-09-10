/*===========================================================================*/
/*   (Inline/variant.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Inline/variant.scm)*/
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

	typedef struct BgL_localzf2variantzf2_bgl
	{
		bool_t BgL_variantz00;
	}                         *BgL_localzf2variantzf2_bglt;


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	extern BgL_localz00_bglt BGl_makezd2localzd2zzast_varz00(obj_t, obj_t,
		BgL_typez00_bglt, BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, bool_t,
		long);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	static obj_t BGl__invariantzd2argszd2zzinline_variantz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_kwotez00zzast_nodez00;
	BGL_EXPORTED_DECL bool_t BGl_localzf2variantzf3z01zzinline_variantz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_localzf2variantzf2zzinline_variantz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_shrinkzd2argsz12zc0zzinline_variantz00(BgL_variablez00_bglt);
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzinline_variantz00();
	extern BgL_valuez00_bglt BGl_valuezd2nilzd2zzast_varz00();
	BGL_EXPORTED_DECL BgL_localzf2variantzf2_bglt
		BGl_localzf2variantzd2nilz20zzinline_variantz00();
	static obj_t BGl__wideningzd2localzf2variantz20zzinline_variantz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_localzf2variantzf2_bglt
		BGl_wideningzd2localzf2variantz20zzinline_variantz00(bool_t);
	static obj_t BGl__variantzd2argszd2zzinline_variantz00(obj_t, obj_t);
	static obj_t BGl_z52thezd2localzf2variantzd2nilza0zzinline_variantz00 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzinline_variantz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl__localzf2variantzd2nilz20zzinline_variantz00(obj_t);
	BGL_EXPORTED_DECL BgL_localzf2variantzf2_bglt
		BGl_fillzd2localzf2variantz12z32zzinline_variantz00
		(BgL_localzf2variantzf2_bglt, bool_t);
	static obj_t BGl__removezd2invariantzd2argsz12z12zzinline_variantz00(obj_t,
		obj_t);
	static obj_t BGl__substitutionsz00zzinline_variantz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_removezd2invariantzd2argsz12z12zzinline_variantz00(BgL_appz00_bglt);
	static obj_t BGl__makezd2localzf2variantz20zzinline_variantz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_substitutionsz00zzinline_variantz00(BgL_variablez00_bglt, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_localzf2variantzf2_bglt
		BGl_makezd2localzf2variantz20zzinline_variantz00(obj_t, obj_t,
		BgL_typez00_bglt, BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, bool_t,
		long, bool_t);
	static obj_t BGl_methodzd2initzd2zzinline_variantz00();
	static obj_t BGl__localzf2variantzf3z01zzinline_variantz00(obj_t, obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzinline_variantz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzinline_variantz00();
	static obj_t BGl__shrinkzd2argsz12zc0zzinline_variantz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_atomz00zzast_nodez00;
	extern BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzinline_variantz00();
	BGL_EXPORTED_DECL obj_t
		BGl_invariantzd2argszd2zzinline_variantz00(BgL_nodez00_bglt,
		BgL_variablez00_bglt, obj_t);
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_variantzd2argszd2zzinline_variantz00(BgL_variablez00_bglt);
	static obj_t BGl__fillzd2localzf2variantz12z32zzinline_variantz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	static obj_t BGl_objectzd2ze3structzd2local3331ze3zzinline_variantz00(obj_t,
		obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl__z52allocatezd2localzf2variantz72zzinline_variantz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzinline_variantz00();
	static obj_t BGl_structzb2objectzd2ze3objec3333z83zzinline_variantz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzinline_variantz00();
	BGL_EXPORTED_DECL BgL_localz00_bglt
		BGl_z52allocatezd2localzf2variantz72zzinline_variantz00();
	static obj_t __cnst[4];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2variantzf3zd2envzd3zzinline_variantz00,
		BgL_bgl__localza7f2variant3528za7,
		BGl__localzf2variantzf3z01zzinline_variantz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2localzf2variantzd2envzf2zzinline_variantz00,
		BgL_bgl__makeza7d2localza7f23529z00,
		BGl__makezd2localzf2variantz20zzinline_variantz00, 0L, BUNSPEC, 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_removezd2invariantzd2argsz12zd2envzc0zzinline_variantz00,
		BgL_bgl__removeza7d2invari3530za7,
		BGl__removezd2invariantzd2argsz12z12zzinline_variantz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2localzf2variantzd2envza0zzinline_variantz00,
		BgL_bgl__za752allocateza7d2l3531z00,
		BGl__z52allocatezd2localzf2variantz72zzinline_variantz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2localzf2variantzd2envzf2zzinline_variantz00,
		BgL_bgl__wideningza7d2loca3532za7,
		BGl__wideningzd2localzf2variantz20zzinline_variantz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_substitutionszd2envzd2zzinline_variantz00,
		BgL_bgl__substitutionsza703533za7, BGl__substitutionsz00zzinline_variantz00,
		0L, BUNSPEC, 3);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_invariantzd2argszd2envz00zzinline_variantz00,
		BgL_bgl__invariantza7d2arg3534za7,
		BGl__invariantzd2argszd2zzinline_variantz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2localzf2variantz12zd2envze0zzinline_variantz00,
		BgL_bgl__fillza7d2localza7f23535z00,
		BGl__fillzd2localzf2variantz12z32zzinline_variantz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_shrinkzd2argsz12zd2envz12zzinline_variantz00,
		BgL_bgl__shrinkza7d2argsza713536z00,
		BGl__shrinkzd2argsz12zc0zzinline_variantz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2variantzd2nilzd2envzf2zzinline_variantz00,
		BgL_bgl__localza7f2variant3537za7,
		BGl__localzf2variantzd2nilz20zzinline_variantz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_variantzd2argszd2envz00zzinline_variantz00,
		BgL_bgl__variantza7d2argsza73538z00,
		BGl__variantzd2argszd2zzinline_variantz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3518z00zzinline_variantz00,
		BgL_bgl_objectza7d2za7e3stru3539z00,
		BGl_objectzd2ze3structzd2local3331ze3zzinline_variantz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3520z00zzinline_variantz00,
		BgL_bgl_structza7b2objectza73540z00,
		BGl_structzb2objectzd2ze3objec3333z83zzinline_variantz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3519z00zzinline_variantz00,
		BgL_bgl_string3519za700za7za7i3541za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string3521z00zzinline_variantz00,
		BgL_bgl_string3521za700za7za7i3542za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string3522z00zzinline_variantz00,
		BgL_bgl_string3522za700za7za7i3543za7, "inline_variant", 14);
	      DEFINE_STRING(BGl_string3523z00zzinline_variantz00,
		BgL_bgl_string3523za700za7za7i3544za7, "_ local/variant done read ", 26);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzinline_variantz00(long
		BgL_checksumz00_1662, char *BgL_fromz00_1663)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzinline_variantz00))
				{
					BGl_requirezd2initializa7ationz75zzinline_variantz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzinline_variantz00();
					BGl_cnstzd2initzd2zzinline_variantz00();
					BGl_importedzd2moduleszd2initz00zzinline_variantz00();
					BGl_objectzd2initzd2zzinline_variantz00();
					BGl_methodzd2initzd2zzinline_variantz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzinline_variantz00()
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"inline_variant");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"inline_variant");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"inline_variant");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzinline_variantz00()
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 15 */
			{	/* Inline/variant.scm 15 */
				obj_t BgL_cportz00_1643;

				BgL_cportz00_1643 =
					bgl_open_input_string(BGl_string3523z00zzinline_variantz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1644;

					BgL_iz00_1644 = ((long) 3);
				BgL_loopz00_1645:
					if ((BgL_iz00_1644 == ((long) -1)))
						{	/* Inline/variant.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Inline/variant.scm 15 */
							{	/* Inline/variant.scm 15 */
								obj_t BgL_arg3525z00_1647;

								{	/* Inline/variant.scm 15 */

									{	/* Inline/variant.scm 15 */
										obj_t BgL_locationz00_1649;

										BgL_locationz00_1649 = BBOOL(((bool_t) 0));
										{	/* Inline/variant.scm 15 */

											BgL_arg3525z00_1647 =
												BGl_readz00zz__readerz00(BgL_cportz00_1643,
												BgL_locationz00_1649);
										}
									}
								}
								{	/* Inline/variant.scm 15 */
									int BgL_auxz00_1681;

									BgL_auxz00_1681 = (int) (BgL_iz00_1644);
									CNST_TABLE_SET(BgL_auxz00_1681, BgL_arg3525z00_1647);
							}}
							{	/* Inline/variant.scm 15 */
								int BgL_auxz00_1650;

								BgL_auxz00_1650 = (int) ((BgL_iz00_1644 - ((long) 1)));
								{
									long BgL_iz00_1686;

									BgL_iz00_1686 = (long) (BgL_auxz00_1650);
									BgL_iz00_1644 = BgL_iz00_1686;
									goto BgL_loopz00_1645;
								}
							}
						}
				}
			}
		}
	}



/* invariant-args */
	BGL_EXPORTED_DEF obj_t
		BGl_invariantzd2argszd2zzinline_variantz00(BgL_nodez00_bglt BgL_nodez00_1,
		BgL_variablez00_bglt BgL_varz00_2, obj_t BgL_callsz00_3)
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 35 */
			{	/* Inline/variant.scm 36 */
				BgL_valuez00_bglt BgL_funz00_803;

				BgL_funz00_803 =
					(((BgL_variablez00_bglt) CREF(BgL_varz00_2))->BgL_valuez00);
				{	/* Inline/variant.scm 36 */
					obj_t BgL_argsz00_804;

					{
						BgL_sfunz00_bglt BgL_auxz00_1689;

						BgL_auxz00_1689 = (BgL_sfunz00_bglt) (BgL_funz00_803);
						BgL_argsz00_804 =
							(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1689))->BgL_argsz00);
					}
					{	/* Inline/variant.scm 37 */
						obj_t BgL_valsz00_805;

						{
							BgL_appz00_bglt BgL_auxz00_1692;

							BgL_auxz00_1692 = (BgL_appz00_bglt) (BgL_nodez00_1);
							BgL_valsz00_805 =
								(((BgL_appz00_bglt) CREF(BgL_auxz00_1692))->BgL_argsz00);
						}
						{	/* Inline/variant.scm 38 */

							{
								obj_t BgL_ll3320z00_807;

								obj_t BgL_ll3321z00_808;

								BgL_ll3320z00_807 = BgL_argsz00_804;
								BgL_ll3321z00_808 = BgL_valsz00_805;
							BgL_zc3anonymousza33334ze3z83_809:
								if (NULLP(BgL_ll3320z00_807))
									{	/* Inline/variant.scm 41 */
										((bool_t) 1);
									}
								else
									{	/* Inline/variant.scm 41 */
										{	/* Inline/variant.scm 42 */
											obj_t BgL_localz00_811;

											obj_t BgL_valz00_812;

											BgL_localz00_811 = CAR(BgL_ll3320z00_807);
											BgL_valz00_812 = CAR(BgL_ll3321z00_808);
											{	/* Inline/variant.scm 42 */
												bool_t BgL_testz00_1699;

												{	/* Inline/variant.scm 42 */
													bool_t BgL_testz00_1700;

													{	/* Inline/variant.scm 42 */
														obj_t BgL_auxz00_1701;

														{
															BgL_variablez00_bglt BgL_auxz00_1702;

															BgL_auxz00_1702 =
																(BgL_variablez00_bglt) (BgL_localz00_811);
															BgL_auxz00_1701 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_auxz00_1702))->BgL_accessz00);
														}
														BgL_testz00_1700 =
															(BgL_auxz00_1701 == CNST_TABLE_REF(((long) 0)));
													}
													if (BgL_testz00_1700)
														{	/* Inline/variant.scm 43 */
															bool_t BgL__ortest_3305z00_821;

															BgL__ortest_3305z00_821 =
																BGl_iszd2azf3z21zz__objectz00(BgL_valz00_812,
																BGl_atomz00zzast_nodez00);
															if (BgL__ortest_3305z00_821)
																{	/* Inline/variant.scm 43 */
																	BgL_testz00_1699 = BgL__ortest_3305z00_821;
																}
															else
																{	/* Inline/variant.scm 44 */
																	bool_t BgL__ortest_3306z00_822;

																	BgL__ortest_3306z00_822 =
																		BGl_iszd2azf3z21zz__objectz00
																		(BgL_valz00_812, BGl_kwotez00zzast_nodez00);
																	if (BgL__ortest_3306z00_822)
																		{	/* Inline/variant.scm 44 */
																			BgL_testz00_1699 =
																				BgL__ortest_3306z00_822;
																		}
																	else
																		{	/* Inline/variant.scm 44 */
																			if (BGl_iszd2azf3z21zz__objectz00
																				(BgL_valz00_812,
																					BGl_varz00zzast_nodez00))
																				{	/* Inline/variant.scm 46 */
																					obj_t BgL_auxz00_1713;

																					{	/* Inline/variant.scm 46 */
																						BgL_variablez00_bglt
																							BgL_obj1614z00_1385;
																						{
																							BgL_varz00_bglt BgL_auxz00_1714;

																							BgL_auxz00_1714 =
																								(BgL_varz00_bglt)
																								(BgL_valz00_812);
																							BgL_obj1614z00_1385 =
																								(((BgL_varz00_bglt)
																									CREF(BgL_auxz00_1714))->
																								BgL_variablez00);
																						}
																						BgL_auxz00_1713 =
																							(((BgL_variablez00_bglt)
																								CREF(BgL_obj1614z00_1385))->
																							BgL_accessz00);
																					}
																					BgL_testz00_1699 =
																						(BgL_auxz00_1713 ==
																						CNST_TABLE_REF(((long) 0)));
																				}
																			else
																				{	/* Inline/variant.scm 45 */
																					BgL_testz00_1699 = ((bool_t) 0);
																				}
																		}
																}
														}
													else
														{	/* Inline/variant.scm 42 */
															BgL_testz00_1699 = ((bool_t) 0);
														}
												}
												if (BgL_testz00_1699)
													{	/* Inline/variant.scm 48 */
														BgL_localz00_bglt BgL_obj3309z00_814;

														BgL_obj3309z00_814 =
															((BgL_localz00_bglt)
															(BgL_localz00_bglt) (BgL_localz00_811));
														{	/* Inline/variant.scm 48 */
															BgL_localzf2variantzf2_bglt BgL_arg3337z00_815;

															{	/* Inline/variant.scm 48 */
																BgL_localzf2variantzf2_bglt BgL_res3501z00_1392;

																{	/* Inline/variant.scm 48 */
																	BgL_localzf2variantzf2_bglt
																		BgL_new3243z00_1387;
																	BgL_new3243z00_1387 =
																		((BgL_localzf2variantzf2_bglt)
																		BREF(GC_MALLOC(sizeof(struct
																					BgL_localzf2variantzf2_bgl))));
																	{	/* Inline/variant.scm 48 */
																		BgL_localzf2variantzf2_bglt
																			BgL_res3500z00_1391;
																		{	/* Inline/variant.scm 48 */
																			BgL_localzf2variantzf2_bglt
																				BgL_new3259z00_1388;
																			BgL_new3259z00_1388 = BgL_new3243z00_1387;
																			{	/* Inline/variant.scm 48 */
																				bool_t BgL_variant3258z00_1390;

																				BgL_variant3258z00_1390 = ((bool_t) 0);
																				((((BgL_localzf2variantzf2_bglt)
																							CREF(BgL_new3259z00_1388))->
																						BgL_variantz00) =
																					((bool_t) BgL_variant3258z00_1390),
																					BUNSPEC);
																				BgL_res3500z00_1391 =
																					BgL_new3259z00_1388;
																		}} BgL_res3500z00_1391;
																	}
																	BgL_res3501z00_1392 = BgL_new3243z00_1387;
																}
																BgL_arg3337z00_815 = BgL_res3501z00_1392;
															}
															{	/* Inline/variant.scm 48 */
																obj_t BgL_auxz00_1726;

																BgL_objectz00_bglt BgL_auxz00_1724;

																BgL_auxz00_1726 = (obj_t) (BgL_arg3337z00_815);
																BgL_auxz00_1724 =
																	(BgL_objectz00_bglt) (BgL_obj3309z00_814);
																BGL_OBJECT_WIDENING_SET(BgL_auxz00_1724,
																	BgL_auxz00_1726);
														}}
														BGL_OBJECT_CLASS_NUM_SET(
															(BgL_objectz00_bglt) (BgL_obj3309z00_814),
															BGl_classzd2numzd2zz__objectz00
															(BGl_localzf2variantzf2zzinline_variantz00));
														BgL_obj3309z00_814;
													}
												else
													{	/* Inline/variant.scm 49 */
														BgL_localz00_bglt BgL_obj3310z00_817;

														BgL_obj3310z00_817 =
															((BgL_localz00_bglt)
															(BgL_localz00_bglt) (BgL_localz00_811));
														{	/* Inline/variant.scm 49 */
															BgL_localzf2variantzf2_bglt BgL_arg3339z00_818;

															{	/* Inline/variant.scm 49 */
																BgL_localzf2variantzf2_bglt BgL_res3503z00_1401;

																{	/* Inline/variant.scm 49 */
																	BgL_localzf2variantzf2_bglt
																		BgL_new3243z00_1396;
																	BgL_new3243z00_1396 =
																		((BgL_localzf2variantzf2_bglt)
																		BREF(GC_MALLOC(sizeof(struct
																					BgL_localzf2variantzf2_bgl))));
																	{	/* Inline/variant.scm 49 */
																		BgL_localzf2variantzf2_bglt
																			BgL_res3502z00_1400;
																		{	/* Inline/variant.scm 49 */
																			BgL_localzf2variantzf2_bglt
																				BgL_new3259z00_1397;
																			BgL_new3259z00_1397 = BgL_new3243z00_1396;
																			{	/* Inline/variant.scm 49 */
																				bool_t BgL_variant3258z00_1399;

																				BgL_variant3258z00_1399 = ((bool_t) 1);
																				((((BgL_localzf2variantzf2_bglt)
																							CREF(BgL_new3259z00_1397))->
																						BgL_variantz00) =
																					((bool_t) BgL_variant3258z00_1399),
																					BUNSPEC);
																				BgL_res3502z00_1400 =
																					BgL_new3259z00_1397;
																		}} BgL_res3502z00_1400;
																	}
																	BgL_res3503z00_1401 = BgL_new3243z00_1396;
																}
																BgL_arg3339z00_818 = BgL_res3503z00_1401;
															}
															{	/* Inline/variant.scm 49 */
																obj_t BgL_auxz00_1738;

																BgL_objectz00_bglt BgL_auxz00_1736;

																BgL_auxz00_1738 = (obj_t) (BgL_arg3339z00_818);
																BgL_auxz00_1736 =
																	(BgL_objectz00_bglt) (BgL_obj3310z00_817);
																BGL_OBJECT_WIDENING_SET(BgL_auxz00_1736,
																	BgL_auxz00_1738);
														}}
														BGL_OBJECT_CLASS_NUM_SET(
															(BgL_objectz00_bglt) (BgL_obj3310z00_817),
															BGl_classzd2numzd2zz__objectz00
															(BGl_localzf2variantzf2zzinline_variantz00));
														BgL_obj3310z00_817;
										}}}
										{
											obj_t BgL_ll3321z00_1746;

											obj_t BgL_ll3320z00_1744;

											BgL_ll3320z00_1744 = CDR(BgL_ll3320z00_807);
											BgL_ll3321z00_1746 = CDR(BgL_ll3321z00_808);
											BgL_ll3321z00_808 = BgL_ll3321z00_1746;
											BgL_ll3320z00_807 = BgL_ll3320z00_1744;
											goto BgL_zc3anonymousza33334ze3z83_809;
										}
									}
							}
							{
								obj_t BgL_l3325z00_833;

								BgL_l3325z00_833 = BgL_callsz00_3;
							BgL_zc3anonymousza33350ze3z83_834:
								if (PAIRP(BgL_l3325z00_833))
									{	/* Inline/variant.scm 52 */
										{	/* Inline/variant.scm 53 */
											BgL_appz00_bglt BgL_appz00_836;

											BgL_appz00_836 =
												(BgL_appz00_bglt) (CAR(BgL_l3325z00_833));
											{	/* Inline/variant.scm 53 */
												obj_t BgL_g3311z00_837;

												BgL_g3311z00_837 =
													(((BgL_appz00_bglt) CREF(BgL_appz00_836))->
													BgL_argsz00);
												{
													obj_t BgL_actualsz00_839;

													obj_t BgL_argsz00_840;

													BgL_actualsz00_839 = BgL_g3311z00_837;
													BgL_argsz00_840 = BgL_argsz00_804;
												BgL_zc3anonymousza33352ze3z83_841:
													if (NULLP(BgL_argsz00_840))
														{	/* Inline/variant.scm 56 */
															CNST_TABLE_REF(((long) 1));
														}
													else
														{	/* Inline/variant.scm 56 */
															if (NULLP(BgL_actualsz00_839))
																{
																	obj_t BgL_l3323z00_845;

																	{	/* Inline/variant.scm 59 */
																		bool_t BgL_auxz00_1758;

																		BgL_l3323z00_845 = BgL_argsz00_840;
																	BgL_zc3anonymousza33355ze3z83_846:
																		if (PAIRP(BgL_l3323z00_845))
																			{	/* Inline/variant.scm 59 */
																				{	/* Inline/variant.scm 60 */
																					obj_t BgL_localz00_848;

																					BgL_localz00_848 =
																						CAR(BgL_l3323z00_845);
																					{	/* Inline/variant.scm 60 */
																						BgL_localzf2variantzf2_bglt
																							BgL_obj3272z00_1413;
																						bool_t BgL_val3271z00_1414;

																						BgL_obj3272z00_1413 =
																							(BgL_localzf2variantzf2_bglt)
																							(BgL_localz00_848);
																						BgL_val3271z00_1414 = ((bool_t) 1);
																						{
																							obj_t BgL_auxz00_1763;

																							{	/* Inline/variant.scm 60 */
																								BgL_objectz00_bglt
																									BgL_auxz00_1764;
																								BgL_auxz00_1764 =
																									(BgL_objectz00_bglt)
																									(BgL_obj3272z00_1413);
																								BgL_auxz00_1763 =
																									BGL_OBJECT_WIDENING
																									(BgL_auxz00_1764);
																							}
																							((((BgL_localzf2variantzf2_bglt)
																										CREF(BgL_auxz00_1763))->
																									BgL_variantz00) =
																								((bool_t) BgL_val3271z00_1414),
																								BUNSPEC);
																						}
																					}
																				}
																				{
																					obj_t BgL_l3323z00_1768;

																					BgL_l3323z00_1768 =
																						CDR(BgL_l3323z00_845);
																					BgL_l3323z00_845 = BgL_l3323z00_1768;
																					goto
																						BgL_zc3anonymousza33355ze3z83_846;
																				}
																			}
																		else
																			{	/* Inline/variant.scm 59 */
																				BgL_auxz00_1758 = ((bool_t) 1);
																			}
																		BBOOL(BgL_auxz00_1758);
																	}
																}
															else
																{	/* Inline/variant.scm 62 */
																	bool_t BgL_testz00_1771;

																	{	/* Inline/variant.scm 62 */
																		bool_t BgL_testz00_1772;

																		{	/* Inline/variant.scm 62 */
																			obj_t BgL_arg3368z00_861;

																			BgL_arg3368z00_861 =
																				CAR(BgL_actualsz00_839);
																			BgL_testz00_1772 =
																				BGl_iszd2azf3z21zz__objectz00
																				(BgL_arg3368z00_861,
																				BGl_varz00zzast_nodez00);
																		}
																		if (BgL_testz00_1772)
																			{	/* Inline/variant.scm 63 */
																				obj_t BgL_auxz00_1775;

																				{	/* Inline/variant.scm 63 */
																					BgL_variablez00_bglt BgL_auxz00_1776;

																					{	/* Inline/variant.scm 63 */
																						BgL_varz00_bglt BgL_obj2155z00_1419;

																						{	/* Inline/variant.scm 63 */
																							obj_t BgL_pairz00_1418;

																							BgL_pairz00_1418 =
																								BgL_actualsz00_839;
																							BgL_obj2155z00_1419 =
																								(BgL_varz00_bglt) (CAR
																								(BgL_pairz00_1418));
																						}
																						BgL_auxz00_1776 =
																							(((BgL_varz00_bglt)
																								CREF(BgL_obj2155z00_1419))->
																							BgL_variablez00);
																					}
																					BgL_auxz00_1775 =
																						(obj_t) (BgL_auxz00_1776);
																				}
																				BgL_testz00_1771 =
																					(BgL_auxz00_1775 ==
																					CAR(BgL_argsz00_840));
																			}
																		else
																			{	/* Inline/variant.scm 62 */
																				BgL_testz00_1771 = ((bool_t) 0);
																			}
																	}
																	if (BgL_testz00_1771)
																		{
																			obj_t BgL_argsz00_1785;

																			obj_t BgL_actualsz00_1783;

																			BgL_actualsz00_1783 =
																				CDR(BgL_actualsz00_839);
																			BgL_argsz00_1785 = CDR(BgL_argsz00_840);
																			BgL_argsz00_840 = BgL_argsz00_1785;
																			BgL_actualsz00_839 = BgL_actualsz00_1783;
																			goto BgL_zc3anonymousza33352ze3z83_841;
																		}
																	else
																		{	/* Inline/variant.scm 62 */
																			{	/* Inline/variant.scm 66 */
																				obj_t BgL_arg3361z00_854;

																				BgL_arg3361z00_854 =
																					CAR(BgL_argsz00_840);
																				{	/* Inline/variant.scm 66 */
																					BgL_localzf2variantzf2_bglt
																						BgL_obj3272z00_1424;
																					bool_t BgL_val3271z00_1425;

																					BgL_obj3272z00_1424 =
																						(BgL_localzf2variantzf2_bglt)
																						(BgL_arg3361z00_854);
																					BgL_val3271z00_1425 = ((bool_t) 1);
																					{
																						obj_t BgL_auxz00_1789;

																						{	/* Inline/variant.scm 66 */
																							BgL_objectz00_bglt
																								BgL_auxz00_1790;
																							BgL_auxz00_1790 =
																								(BgL_objectz00_bglt)
																								(BgL_obj3272z00_1424);
																							BgL_auxz00_1789 =
																								BGL_OBJECT_WIDENING
																								(BgL_auxz00_1790);
																						}
																						((((BgL_localzf2variantzf2_bglt)
																									CREF(BgL_auxz00_1789))->
																								BgL_variantz00) =
																							((bool_t) BgL_val3271z00_1425),
																							BUNSPEC);
																					}
																				}
																			}
																			{
																				obj_t BgL_argsz00_1796;

																				obj_t BgL_actualsz00_1794;

																				BgL_actualsz00_1794 =
																					CDR(BgL_actualsz00_839);
																				BgL_argsz00_1796 = CDR(BgL_argsz00_840);
																				BgL_argsz00_840 = BgL_argsz00_1796;
																				BgL_actualsz00_839 =
																					BgL_actualsz00_1794;
																				goto BgL_zc3anonymousza33352ze3z83_841;
																			}
																		}
																}
														}
												}
											}
										}
										{
											obj_t BgL_l3325z00_1798;

											BgL_l3325z00_1798 = CDR(BgL_l3325z00_833);
											BgL_l3325z00_833 = BgL_l3325z00_1798;
											goto BgL_zc3anonymousza33350ze3z83_834;
										}
									}
								else
									{	/* Inline/variant.scm 52 */
										((bool_t) 1);
									}
							}
							{
								obj_t BgL_argsz00_867;

								obj_t BgL_invariantz00_868;

								BgL_argsz00_867 = BgL_argsz00_804;
								BgL_invariantz00_868 = BNIL;
							BgL_zc3anonymousza33370ze3z83_869:
								if (NULLP(BgL_argsz00_867))
									{	/* Inline/variant.scm 72 */
										return bgl_reverse_bang(BgL_invariantz00_868);
									}
								else
									{	/* Inline/variant.scm 74 */
										obj_t BgL_arg3372z00_871;

										obj_t BgL_arg3373z00_872;

										BgL_arg3372z00_871 = CDR(BgL_argsz00_867);
										{	/* Inline/variant.scm 75 */
											bool_t BgL_testz00_1804;

											{	/* Inline/variant.scm 75 */
												BgL_localzf2variantzf2_bglt BgL_obj3270z00_1432;

												{	/* Inline/variant.scm 75 */
													obj_t BgL_pairz00_1431;

													BgL_pairz00_1431 = BgL_argsz00_867;
													BgL_obj3270z00_1432 =
														(BgL_localzf2variantzf2_bglt) (CAR
														(BgL_pairz00_1431));
												}
												{
													obj_t BgL_auxz00_1807;

													{	/* Inline/variant.scm 75 */
														BgL_objectz00_bglt BgL_auxz00_1808;

														BgL_auxz00_1808 =
															(BgL_objectz00_bglt) (BgL_obj3270z00_1432);
														BgL_auxz00_1807 =
															BGL_OBJECT_WIDENING(BgL_auxz00_1808);
													}
													BgL_testz00_1804 =
														(((BgL_localzf2variantzf2_bglt)
															CREF(BgL_auxz00_1807))->BgL_variantz00);
												}
											}
											if (BgL_testz00_1804)
												{	/* Inline/variant.scm 75 */
													BgL_arg3373z00_872 = BgL_invariantz00_868;
												}
											else
												{	/* Inline/variant.scm 75 */
													BgL_arg3373z00_872 =
														MAKE_PAIR(CAR(BgL_argsz00_867),
														BgL_invariantz00_868);
												}
										}
										{
											obj_t BgL_invariantz00_1815;

											obj_t BgL_argsz00_1814;

											BgL_argsz00_1814 = BgL_arg3372z00_871;
											BgL_invariantz00_1815 = BgL_arg3373z00_872;
											BgL_invariantz00_868 = BgL_invariantz00_1815;
											BgL_argsz00_867 = BgL_argsz00_1814;
											goto BgL_zc3anonymousza33370ze3z83_869;
										}
									}
							}
						}
					}
				}
			}
		}
	}



/* _invariant-args */
	obj_t BGl__invariantzd2argszd2zzinline_variantz00(obj_t BgL_envz00_1596,
		obj_t BgL_nodez00_1597, obj_t BgL_varz00_1598, obj_t BgL_callsz00_1599)
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 35 */
			return
				BGl_invariantzd2argszd2zzinline_variantz00(
				(BgL_nodez00_bglt) (BgL_nodez00_1597),
				(BgL_variablez00_bglt) (BgL_varz00_1598), BgL_callsz00_1599);
		}
	}



/* variant-args */
	BGL_EXPORTED_DEF obj_t
		BGl_variantzd2argszd2zzinline_variantz00(BgL_variablez00_bglt BgL_varz00_4)
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 84 */
			{	/* Inline/variant.scm 85 */
				BgL_valuez00_bglt BgL_funz00_877;

				BgL_funz00_877 =
					(((BgL_variablez00_bglt) CREF(BgL_varz00_4))->BgL_valuez00);
				{	/* Inline/variant.scm 85 */
					obj_t BgL_argsz00_878;

					{
						BgL_sfunz00_bglt BgL_auxz00_1820;

						BgL_auxz00_1820 = (BgL_sfunz00_bglt) (BgL_funz00_877);
						BgL_argsz00_878 =
							(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1820))->BgL_argsz00);
					}
					{	/* Inline/variant.scm 86 */

						{
							obj_t BgL_argsz00_881;

							obj_t BgL_variantz00_882;

							BgL_argsz00_881 = BgL_argsz00_878;
							BgL_variantz00_882 = BNIL;
						BgL_zc3anonymousza33377ze3z83_883:
							if (NULLP(BgL_argsz00_881))
								{	/* Inline/variant.scm 89 */
									return bgl_reverse_bang(BgL_variantz00_882);
								}
							else
								{	/* Inline/variant.scm 91 */
									obj_t BgL_arg3379z00_885;

									obj_t BgL_arg3380z00_886;

									BgL_arg3379z00_885 = CDR(BgL_argsz00_881);
									{	/* Inline/variant.scm 92 */
										bool_t BgL_testz00_1827;

										{	/* Inline/variant.scm 92 */
											BgL_localzf2variantzf2_bglt BgL_obj3270z00_1439;

											{	/* Inline/variant.scm 92 */
												obj_t BgL_pairz00_1438;

												BgL_pairz00_1438 = BgL_argsz00_881;
												BgL_obj3270z00_1439 =
													(BgL_localzf2variantzf2_bglt) (CAR(BgL_pairz00_1438));
											}
											{
												obj_t BgL_auxz00_1830;

												{	/* Inline/variant.scm 92 */
													BgL_objectz00_bglt BgL_auxz00_1831;

													BgL_auxz00_1831 =
														(BgL_objectz00_bglt) (BgL_obj3270z00_1439);
													BgL_auxz00_1830 =
														BGL_OBJECT_WIDENING(BgL_auxz00_1831);
												}
												BgL_testz00_1827 =
													(((BgL_localzf2variantzf2_bglt)
														CREF(BgL_auxz00_1830))->BgL_variantz00);
											}
										}
										if (BgL_testz00_1827)
											{	/* Inline/variant.scm 92 */
												BgL_arg3380z00_886 =
													MAKE_PAIR(CAR(BgL_argsz00_881), BgL_variantz00_882);
											}
										else
											{	/* Inline/variant.scm 92 */
												BgL_arg3380z00_886 = BgL_variantz00_882;
											}
									}
									{
										obj_t BgL_variantz00_1838;

										obj_t BgL_argsz00_1837;

										BgL_argsz00_1837 = BgL_arg3379z00_885;
										BgL_variantz00_1838 = BgL_arg3380z00_886;
										BgL_variantz00_882 = BgL_variantz00_1838;
										BgL_argsz00_881 = BgL_argsz00_1837;
										goto BgL_zc3anonymousza33377ze3z83_883;
									}
								}
						}
					}
				}
			}
		}
	}



/* _variant-args */
	obj_t BGl__variantzd2argszd2zzinline_variantz00(obj_t BgL_envz00_1600,
		obj_t BgL_varz00_1601)
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 84 */
			return
				BGl_variantzd2argszd2zzinline_variantz00(
				(BgL_variablez00_bglt) (BgL_varz00_1601));
		}
	}



/* substitutions */
	BGL_EXPORTED_DEF obj_t
		BGl_substitutionsz00zzinline_variantz00(BgL_variablez00_bglt BgL_varz00_5,
		obj_t BgL_actualsz00_6, obj_t BgL_varzd2argszd2_7)
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 99 */
			{	/* Inline/variant.scm 100 */
				BgL_valuez00_bglt BgL_funz00_891;

				BgL_funz00_891 =
					(((BgL_variablez00_bglt) CREF(BgL_varz00_5))->BgL_valuez00);
				{	/* Inline/variant.scm 100 */
					obj_t BgL_allzd2argszd2_892;

					{
						BgL_sfunz00_bglt BgL_auxz00_1842;

						BgL_auxz00_1842 = (BgL_sfunz00_bglt) (BgL_funz00_891);
						BgL_allzd2argszd2_892 =
							(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1842))->BgL_argsz00);
					}
					{	/* Inline/variant.scm 101 */

						{
							obj_t BgL_actualsz00_895;

							obj_t BgL_allzd2argszd2_896;

							obj_t BgL_varzd2argszd2_897;

							obj_t BgL_substitutionsz00_898;

							BgL_actualsz00_895 = BgL_actualsz00_6;
							BgL_allzd2argszd2_896 = BgL_allzd2argszd2_892;
							BgL_varzd2argszd2_897 = BgL_varzd2argszd2_7;
							BgL_substitutionsz00_898 = BNIL;
						BgL_zc3anonymousza33384ze3z83_899:
							if (NULLP(BgL_allzd2argszd2_896))
								{	/* Inline/variant.scm 107 */
									return bgl_reverse_bang(BgL_substitutionsz00_898);
								}
							else
								{	/* Inline/variant.scm 109 */
									bool_t BgL_testz00_1848;

									{	/* Inline/variant.scm 109 */
										BgL_localzf2variantzf2_bglt BgL_obj3270z00_1445;

										{	/* Inline/variant.scm 109 */
											obj_t BgL_pairz00_1444;

											BgL_pairz00_1444 = BgL_allzd2argszd2_896;
											BgL_obj3270z00_1445 =
												(BgL_localzf2variantzf2_bglt) (CAR(BgL_pairz00_1444));
										}
										{
											obj_t BgL_auxz00_1851;

											{	/* Inline/variant.scm 109 */
												BgL_objectz00_bglt BgL_auxz00_1852;

												BgL_auxz00_1852 =
													(BgL_objectz00_bglt) (BgL_obj3270z00_1445);
												BgL_auxz00_1851 = BGL_OBJECT_WIDENING(BgL_auxz00_1852);
											}
											BgL_testz00_1848 =
												(((BgL_localzf2variantzf2_bglt) CREF(BgL_auxz00_1851))->
												BgL_variantz00);
										}
									}
									if (BgL_testz00_1848)
										{	/* Inline/variant.scm 110 */
											obj_t BgL_arg3387z00_902;

											obj_t BgL_arg3388z00_903;

											obj_t BgL_arg3389z00_904;

											obj_t BgL_arg3390z00_905;

											BgL_arg3387z00_902 = CDR(BgL_actualsz00_895);
											BgL_arg3388z00_903 = CDR(BgL_allzd2argszd2_896);
											BgL_arg3389z00_904 = CDR(BgL_varzd2argszd2_897);
											BgL_arg3390z00_905 =
												MAKE_PAIR(CAR(BgL_varzd2argszd2_897),
												BgL_substitutionsz00_898);
											{
												obj_t BgL_substitutionsz00_1864;

												obj_t BgL_varzd2argszd2_1863;

												obj_t BgL_allzd2argszd2_1862;

												obj_t BgL_actualsz00_1861;

												BgL_actualsz00_1861 = BgL_arg3387z00_902;
												BgL_allzd2argszd2_1862 = BgL_arg3388z00_903;
												BgL_varzd2argszd2_1863 = BgL_arg3389z00_904;
												BgL_substitutionsz00_1864 = BgL_arg3390z00_905;
												BgL_substitutionsz00_898 = BgL_substitutionsz00_1864;
												BgL_varzd2argszd2_897 = BgL_varzd2argszd2_1863;
												BgL_allzd2argszd2_896 = BgL_allzd2argszd2_1862;
												BgL_actualsz00_895 = BgL_actualsz00_1861;
												goto BgL_zc3anonymousza33384ze3z83_899;
											}
										}
									else
										{	/* Inline/variant.scm 115 */
											obj_t BgL_arg3392z00_907;

											obj_t BgL_arg3393z00_908;

											obj_t BgL_arg3394z00_909;

											BgL_arg3392z00_907 = CDR(BgL_actualsz00_895);
											BgL_arg3393z00_908 = CDR(BgL_allzd2argszd2_896);
											{	/* Inline/variant.scm 118 */
												obj_t BgL_arg3395z00_910;

												{	/* Inline/variant.scm 118 */
													bool_t BgL_testz00_1867;

													{	/* Inline/variant.scm 118 */
														obj_t BgL_arg3398z00_913;

														BgL_arg3398z00_913 = CAR(BgL_actualsz00_895);
														BgL_testz00_1867 =
															BGl_iszd2azf3z21zz__objectz00(BgL_arg3398z00_913,
															BGl_varz00zzast_nodez00);
													}
													if (BgL_testz00_1867)
														{	/* Inline/variant.scm 119 */
															BgL_varz00_bglt BgL_obj2155z00_1455;

															{	/* Inline/variant.scm 119 */
																obj_t BgL_pairz00_1454;

																BgL_pairz00_1454 = BgL_actualsz00_895;
																BgL_obj2155z00_1455 =
																	(BgL_varz00_bglt) (CAR(BgL_pairz00_1454));
															}
															BgL_arg3395z00_910 =
																(obj_t) (
																(((BgL_varz00_bglt) CREF(BgL_obj2155z00_1455))->
																	BgL_variablez00));
														}
													else
														{	/* Inline/variant.scm 118 */
															BgL_arg3395z00_910 = CAR(BgL_actualsz00_895);
														}
												}
												BgL_arg3394z00_909 =
													MAKE_PAIR(BgL_arg3395z00_910,
													BgL_substitutionsz00_898);
											}
											{
												obj_t BgL_substitutionsz00_1878;

												obj_t BgL_allzd2argszd2_1877;

												obj_t BgL_actualsz00_1876;

												BgL_actualsz00_1876 = BgL_arg3392z00_907;
												BgL_allzd2argszd2_1877 = BgL_arg3393z00_908;
												BgL_substitutionsz00_1878 = BgL_arg3394z00_909;
												BgL_substitutionsz00_898 = BgL_substitutionsz00_1878;
												BgL_allzd2argszd2_896 = BgL_allzd2argszd2_1877;
												BgL_actualsz00_895 = BgL_actualsz00_1876;
												goto BgL_zc3anonymousza33384ze3z83_899;
											}
										}
								}
						}
					}
				}
			}
		}
	}



/* _substitutions */
	obj_t BGl__substitutionsz00zzinline_variantz00(obj_t BgL_envz00_1602,
		obj_t BgL_varz00_1603, obj_t BgL_actualsz00_1604,
		obj_t BgL_varzd2argszd2_1605)
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 99 */
			return
				BGl_substitutionsz00zzinline_variantz00(
				(BgL_variablez00_bglt) (BgL_varz00_1603), BgL_actualsz00_1604,
				BgL_varzd2argszd2_1605);
		}
	}



/* shrink-args! */
	BGL_EXPORTED_DEF obj_t
		BGl_shrinkzd2argsz12zc0zzinline_variantz00(BgL_variablez00_bglt
		BgL_varz00_8)
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 126 */
			{	/* Inline/variant.scm 127 */
				BgL_valuez00_bglt BgL_funz00_916;

				BgL_funz00_916 =
					(((BgL_variablez00_bglt) CREF(BgL_varz00_8))->BgL_valuez00);
				{	/* Inline/variant.scm 127 */
					obj_t BgL_argsz00_917;

					{
						BgL_sfunz00_bglt BgL_auxz00_1882;

						BgL_auxz00_1882 = (BgL_sfunz00_bglt) (BgL_funz00_916);
						BgL_argsz00_917 =
							(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1882))->BgL_argsz00);
					}
					{	/* Inline/variant.scm 128 */

						{
							obj_t BgL_l3327z00_919;

							{	/* Inline/variant.scm 129 */
								bool_t BgL_auxz00_1885;

								BgL_l3327z00_919 = BgL_argsz00_917;
							BgL_zc3anonymousza33400ze3z83_920:
								if (PAIRP(BgL_l3327z00_919))
									{	/* Inline/variant.scm 129 */
										{	/* Inline/variant.scm 129 */
											obj_t BgL_az00_922;

											BgL_az00_922 = CAR(BgL_l3327z00_919);
											{	/* Inline/variant.scm 129 */
												bool_t BgL_testz00_1889;

												{	/* Inline/variant.scm 129 */
													bool_t BgL_testz00_1890;

													{	/* Inline/variant.scm 129 */
														obj_t BgL_auxz00_1891;

														{	/* Inline/variant.scm 129 */
															BgL_objectz00_bglt BgL_auxz00_1892;

															BgL_auxz00_1892 =
																(BgL_objectz00_bglt) (BgL_az00_922);
															BgL_auxz00_1891 =
																BGL_OBJECT_WIDENING(BgL_auxz00_1892);
														}
														BgL_testz00_1890 = CBOOL(BgL_auxz00_1891);
													}
													if (BgL_testz00_1890)
														{	/* Inline/variant.scm 129 */
															BgL_testz00_1889 = ((bool_t) 1);
														}
													else
														{	/* Inline/variant.scm 129 */
															BgL_testz00_1889 = ((bool_t) 0);
														}
												}
												if (BgL_testz00_1889)
													{	/* Inline/variant.scm 129 */
														{	/* Inline/variant.scm 129 */
															long BgL_arg3403z00_925;

															{	/* Inline/variant.scm 129 */
																obj_t BgL_arg3404z00_926;

																{	/* Inline/variant.scm 129 */
																	obj_t BgL_arg3405z00_927;

																	{	/* Inline/variant.scm 129 */
																		BgL_objectz00_bglt BgL_objectz00_1464;

																		BgL_objectz00_1464 =
																			(BgL_objectz00_bglt) (BgL_az00_922);
																		{	/* Inline/variant.scm 129 */
																			long BgL_arg2646z00_1465;

																			{	/* Inline/variant.scm 129 */
																				long BgL_arg2647z00_1466;

																				BgL_arg2647z00_1466 =
																					BGL_OBJECT_CLASS_NUM
																					(BgL_objectz00_1464);
																				BgL_arg2646z00_1465 =
																					(BgL_arg2647z00_1466 - OBJECT_TYPE);
																			}
																			BgL_arg3405z00_927 =
																				VECTOR_REF
																				(BGl_za2classesza2z00zz__objectz00,
																				(int) (BgL_arg2646z00_1465));
																	}}
																	BgL_arg3404z00_926 =
																		BGl_classzd2superzd2zz__objectz00
																		(BgL_arg3405z00_927);
																}
																BgL_arg3403z00_925 =
																	BGl_classzd2numzd2zz__objectz00
																	(BgL_arg3404z00_926);
															}
															BGL_OBJECT_CLASS_NUM_SET(
																(BgL_objectz00_bglt) (BgL_az00_922),
																BgL_arg3403z00_925);
														}
														{	/* Inline/variant.scm 129 */
															BgL_objectz00_bglt BgL_auxz00_1905;

															BgL_auxz00_1905 =
																(BgL_objectz00_bglt) (BgL_az00_922);
															BGL_OBJECT_WIDENING_SET(BgL_auxz00_1905, BFALSE);
														} BgL_az00_922;
													}
												else
													{	/* Inline/variant.scm 129 */
														BFALSE;
													}
											}
										}
										{
											obj_t BgL_l3327z00_1908;

											BgL_l3327z00_1908 = CDR(BgL_l3327z00_919);
											BgL_l3327z00_919 = BgL_l3327z00_1908;
											goto BgL_zc3anonymousza33400ze3z83_920;
										}
									}
								else
									{	/* Inline/variant.scm 129 */
										BgL_auxz00_1885 = ((bool_t) 1);
									}
								return BBOOL(BgL_auxz00_1885);
							}
						}
					}
				}
			}
		}
	}



/* _shrink-args! */
	obj_t BGl__shrinkzd2argsz12zc0zzinline_variantz00(obj_t BgL_envz00_1606,
		obj_t BgL_varz00_1607)
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 126 */
			return
				BGl_shrinkzd2argsz12zc0zzinline_variantz00(
				(BgL_variablez00_bglt) (BgL_varz00_1607));
		}
	}



/* remove-invariant-args! */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_removezd2invariantzd2argsz12z12zzinline_variantz00(BgL_appz00_bglt
		BgL_appz00_9)
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 140 */
			{	/* Inline/variant.scm 142 */
				obj_t BgL_g3318z00_931;

				{	/* Inline/variant.scm 142 */
					BgL_sfunz00_bglt BgL_obj1880z00_1478;

					{	/* Inline/variant.scm 142 */
						BgL_valuez00_bglt BgL_auxz00_1913;

						{	/* Inline/variant.scm 142 */
							BgL_variablez00_bglt BgL_arg3424z00_954;

							{	/* Inline/variant.scm 142 */
								BgL_varz00_bglt BgL_obj2155z00_1476;

								BgL_obj2155z00_1476 =
									(((BgL_appz00_bglt) CREF(BgL_appz00_9))->BgL_funz00);
								BgL_arg3424z00_954 =
									(((BgL_varz00_bglt) CREF(BgL_obj2155z00_1476))->
									BgL_variablez00);
							}
							BgL_auxz00_1913 =
								(((BgL_variablez00_bglt) CREF(BgL_arg3424z00_954))->
								BgL_valuez00);
						}
						BgL_obj1880z00_1478 = (BgL_sfunz00_bglt) (BgL_auxz00_1913);
					}
					BgL_g3318z00_931 =
						(((BgL_sfunz00_bglt) CREF(BgL_obj1880z00_1478))->BgL_argsz00);
				}
				{
					obj_t BgL_formalsz00_935;

					obj_t BgL_oldzd2argszd2_936;

					obj_t BgL_newzd2argszd2_937;

					{	/* Inline/variant.scm 142 */
						obj_t BgL_arg3407z00_934;

						BgL_arg3407z00_934 =
							(((BgL_appz00_bglt) CREF(BgL_appz00_9))->BgL_argsz00);
						BgL_formalsz00_935 = BgL_g3318z00_931;
						BgL_oldzd2argszd2_936 = BgL_arg3407z00_934;
						BgL_newzd2argszd2_937 = BNIL;
					BgL_zc3anonymousza33408ze3z83_938:
						if (NULLP(BgL_oldzd2argszd2_936))
							{	/* Inline/variant.scm 146 */
								{
									obj_t BgL_auxz00_1922;

									BgL_auxz00_1922 = bgl_reverse_bang(BgL_newzd2argszd2_937);
									((((BgL_appz00_bglt) CREF(BgL_appz00_9))->BgL_argsz00) =
										((obj_t) BgL_auxz00_1922), BUNSPEC);
								}
								return BgL_appz00_9;
							}
						else
							{	/* Inline/variant.scm 149 */
								bool_t BgL_testz00_1925;

								{	/* Inline/variant.scm 149 */
									bool_t BgL_testz00_1926;

									{	/* Inline/variant.scm 149 */
										obj_t BgL_arg3421z00_951;

										BgL_arg3421z00_951 = CAR(BgL_formalsz00_935);
										BgL_testz00_1926 =
											BGl_iszd2azf3z21zz__objectz00(BgL_arg3421z00_951,
											BGl_localzf2variantzf2zzinline_variantz00);
									}
									if (BgL_testz00_1926)
										{	/* Inline/variant.scm 150 */
											bool_t BgL_testz00_1929;

											{	/* Inline/variant.scm 150 */
												BgL_localzf2variantzf2_bglt BgL_obj3270z00_1486;

												{	/* Inline/variant.scm 150 */
													obj_t BgL_pairz00_1485;

													BgL_pairz00_1485 = BgL_formalsz00_935;
													BgL_obj3270z00_1486 =
														(BgL_localzf2variantzf2_bglt) (CAR
														(BgL_pairz00_1485));
												}
												{
													obj_t BgL_auxz00_1932;

													{	/* Inline/variant.scm 150 */
														BgL_objectz00_bglt BgL_auxz00_1933;

														BgL_auxz00_1933 =
															(BgL_objectz00_bglt) (BgL_obj3270z00_1486);
														BgL_auxz00_1932 =
															BGL_OBJECT_WIDENING(BgL_auxz00_1933);
													}
													BgL_testz00_1929 =
														(((BgL_localzf2variantzf2_bglt)
															CREF(BgL_auxz00_1932))->BgL_variantz00);
												}
											}
											if (BgL_testz00_1929)
												{	/* Inline/variant.scm 150 */
													BgL_testz00_1925 = ((bool_t) 0);
												}
											else
												{	/* Inline/variant.scm 150 */
													BgL_testz00_1925 = ((bool_t) 1);
												}
										}
									else
										{	/* Inline/variant.scm 149 */
											BgL_testz00_1925 = ((bool_t) 0);
										}
								}
								if (BgL_testz00_1925)
									{
										obj_t BgL_oldzd2argszd2_1939;

										obj_t BgL_formalsz00_1937;

										BgL_formalsz00_1937 = CDR(BgL_formalsz00_935);
										BgL_oldzd2argszd2_1939 = CDR(BgL_oldzd2argszd2_936);
										BgL_oldzd2argszd2_936 = BgL_oldzd2argszd2_1939;
										BgL_formalsz00_935 = BgL_formalsz00_1937;
										goto BgL_zc3anonymousza33408ze3z83_938;
									}
								else
									{	/* Inline/variant.scm 155 */
										obj_t BgL_arg3414z00_944;

										obj_t BgL_arg3415z00_945;

										obj_t BgL_arg3416z00_946;

										BgL_arg3414z00_944 = CDR(BgL_formalsz00_935);
										BgL_arg3415z00_945 = CDR(BgL_oldzd2argszd2_936);
										BgL_arg3416z00_946 =
											MAKE_PAIR(CAR(BgL_oldzd2argszd2_936),
											BgL_newzd2argszd2_937);
										{
											obj_t BgL_newzd2argszd2_1947;

											obj_t BgL_oldzd2argszd2_1946;

											obj_t BgL_formalsz00_1945;

											BgL_formalsz00_1945 = BgL_arg3414z00_944;
											BgL_oldzd2argszd2_1946 = BgL_arg3415z00_945;
											BgL_newzd2argszd2_1947 = BgL_arg3416z00_946;
											BgL_newzd2argszd2_937 = BgL_newzd2argszd2_1947;
											BgL_oldzd2argszd2_936 = BgL_oldzd2argszd2_1946;
											BgL_formalsz00_935 = BgL_formalsz00_1945;
											goto BgL_zc3anonymousza33408ze3z83_938;
										}
									}
							}
					}
				}
			}
		}
	}



/* _remove-invariant-args! */
	obj_t BGl__removezd2invariantzd2argsz12z12zzinline_variantz00(obj_t
		BgL_envz00_1608, obj_t BgL_appz00_1609)
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 140 */
			return
				(obj_t) (BGl_removezd2invariantzd2argsz12z12zzinline_variantz00(
					(BgL_appz00_bglt) (BgL_appz00_1609)));
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzinline_variantz00()
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 15 */
			{	/* Inline/variant.scm 21 */
				obj_t BgL_arg3426z00_956;

				obj_t BgL_arg3427z00_957;

				obj_t BgL_arg3432z00_960;

				BgL_arg3426z00_956 = CNST_TABLE_REF(((long) 2));
				BgL_arg3427z00_957 = BGl_localz00zzast_varz00;
				{	/* Inline/variant.scm 21 */
					obj_t BgL_v3329z00_961;

					BgL_v3329z00_961 = create_vector((int) (((long) 0)));
					BgL_arg3432z00_960 = BgL_v3329z00_961;
				}
				BGl_localzf2variantzf2zzinline_variantz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3426z00_956,
					BgL_arg3427z00_957, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2localzf2variantzd2envza0zzinline_variantz00,
					BGl_localzf2variantzd2nilzd2envzf2zzinline_variantz00,
					BGl_localzf2variantzf3zd2envzd3zzinline_variantz00,
					((long) 448785462), BFALSE, BFALSE, BgL_arg3432z00_960);
			}
			return (BGl_z52thezd2localzf2variantzd2nilza0zzinline_variantz00 =
				BUNSPEC, BUNSPEC);
		}
	}



/* local/variant? */
	BGL_EXPORTED_DEF bool_t BGl_localzf2variantzf3z01zzinline_variantz00(obj_t
		BgL_obj3269z00_10)
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 21 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3269z00_10,
				BGl_localzf2variantzf2zzinline_variantz00);
		}
	}



/* _local/variant? */
	obj_t BGl__localzf2variantzf3z01zzinline_variantz00(obj_t BgL_envz00_1612,
		obj_t BgL_obj3269z00_1613)
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 21 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3269z00_1613,
					BGl_localzf2variantzf2zzinline_variantz00));
		}
	}



/* widening-local/variant */
	BGL_EXPORTED_DEF BgL_localzf2variantzf2_bglt
		BGl_wideningzd2localzf2variantz20zzinline_variantz00(bool_t
		BgL_variant3242z00_14)
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 21 */
			{	/* Inline/variant.scm 21 */
				BgL_localzf2variantzf2_bglt BgL_new3243z00_1492;

				BgL_new3243z00_1492 =
					((BgL_localzf2variantzf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_localzf2variantzf2_bgl))));
				{	/* Inline/variant.scm 21 */
					BgL_localzf2variantzf2_bglt BgL_res3505z00_1496;

					{	/* Inline/variant.scm 21 */
						BgL_localzf2variantzf2_bglt BgL_new3259z00_1493;

						BgL_new3259z00_1493 = BgL_new3243z00_1492;
						{	/* Inline/variant.scm 21 */
							bool_t BgL_variant3258z00_1495;

							BgL_variant3258z00_1495 = BgL_variant3242z00_14;
							((((BgL_localzf2variantzf2_bglt) CREF(BgL_new3259z00_1493))->
									BgL_variantz00) =
								((bool_t) BgL_variant3258z00_1495), BUNSPEC);
							BgL_res3505z00_1496 = BgL_new3259z00_1493;
					}} BgL_res3505z00_1496;
				}
				return BgL_new3243z00_1492;
			}
		}
	}



/* _widening-local/variant */
	obj_t BGl__wideningzd2localzf2variantz20zzinline_variantz00(obj_t
		BgL_envz00_1614, obj_t BgL_variant3242z00_1615)
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 21 */
			return
				(obj_t) (BGl_wideningzd2localzf2variantz20zzinline_variantz00(CBOOL
					(BgL_variant3242z00_1615)));
		}
	}



/* make-local/variant */
	BGL_EXPORTED_DEF BgL_localzf2variantzf2_bglt
		BGl_makezd2localzf2variantz20zzinline_variantz00(obj_t BgL_id3246z00_15,
		obj_t BgL_name3247z00_16, BgL_typez00_bglt BgL_type3248z00_17,
		BgL_valuez00_bglt BgL_value3249z00_18, obj_t BgL_access3250z00_19,
		obj_t BgL_fastzd2alpha3251zd2_20, obj_t BgL_removable3252z00_21,
		long BgL_occurrence3253z00_22, bool_t BgL_userzf33254zf3_23,
		long BgL_key3255z00_24, bool_t BgL_variant3245z00_25)
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 21 */
			{	/* Inline/variant.scm 21 */
				BgL_localz00_bglt BgL_aux3256z00_1497;

				BgL_aux3256z00_1497 =
					BGl_makezd2localzd2zzast_varz00(BgL_id3246z00_15, BgL_name3247z00_16,
					BgL_type3248z00_17, BgL_value3249z00_18, BgL_access3250z00_19,
					BgL_fastzd2alpha3251zd2_20, BgL_removable3252z00_21,
					BgL_occurrence3253z00_22, BgL_userzf33254zf3_23, BgL_key3255z00_24);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux3256z00_1497),
					BGl_classzd2numzd2zz__objectz00
					(BGl_localzf2variantzf2zzinline_variantz00));
				{	/* Inline/variant.scm 21 */
					BgL_localzf2variantzf2_bglt BgL_arg3434z00_1499;

					{	/* Inline/variant.scm 21 */
						BgL_localzf2variantzf2_bglt BgL_res3507z00_1509;

						{	/* Inline/variant.scm 21 */
							BgL_localzf2variantzf2_bglt BgL_new3243z00_1504;

							BgL_new3243z00_1504 =
								((BgL_localzf2variantzf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_localzf2variantzf2_bgl))));
							{	/* Inline/variant.scm 21 */
								BgL_localzf2variantzf2_bglt BgL_res3506z00_1508;

								{	/* Inline/variant.scm 21 */
									BgL_localzf2variantzf2_bglt BgL_new3259z00_1505;

									BgL_new3259z00_1505 = BgL_new3243z00_1504;
									{	/* Inline/variant.scm 21 */
										bool_t BgL_variant3258z00_1507;

										BgL_variant3258z00_1507 = BgL_variant3245z00_25;
										((((BgL_localzf2variantzf2_bglt)
													CREF(BgL_new3259z00_1505))->BgL_variantz00) =
											((bool_t) BgL_variant3258z00_1507), BUNSPEC);
										BgL_res3506z00_1508 = BgL_new3259z00_1505;
								}} BgL_res3506z00_1508;
							}
							BgL_res3507z00_1509 = BgL_new3243z00_1504;
						}
						BgL_arg3434z00_1499 = BgL_res3507z00_1509;
					}
					{	/* Inline/variant.scm 21 */
						obj_t BgL_auxz00_1971;

						BgL_objectz00_bglt BgL_auxz00_1969;

						BgL_auxz00_1971 = (obj_t) (BgL_arg3434z00_1499);
						BgL_auxz00_1969 = (BgL_objectz00_bglt) (BgL_aux3256z00_1497);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_1969, BgL_auxz00_1971);
				}}
				return
					((BgL_localzf2variantzf2_bglt)
					(BgL_localzf2variantzf2_bglt) (BgL_aux3256z00_1497));
			}
		}
	}



/* _make-local/variant */
	obj_t BGl__makezd2localzf2variantz20zzinline_variantz00(obj_t BgL_envz00_1616,
		obj_t BgL_id3246z00_1617, obj_t BgL_name3247z00_1618,
		obj_t BgL_type3248z00_1619, obj_t BgL_value3249z00_1620,
		obj_t BgL_access3250z00_1621, obj_t BgL_fastzd2alpha3251zd2_1622,
		obj_t BgL_removable3252z00_1623, obj_t BgL_occurrence3253z00_1624,
		obj_t BgL_userzf33254zf3_1625, obj_t BgL_key3255z00_1626,
		obj_t BgL_variant3245z00_1627)
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 21 */
			return
				(obj_t) (BGl_makezd2localzf2variantz20zzinline_variantz00
				(BgL_id3246z00_1617, BgL_name3247z00_1618,
					(BgL_typez00_bglt) (BgL_type3248z00_1619),
					(BgL_valuez00_bglt) (BgL_value3249z00_1620), BgL_access3250z00_1621,
					BgL_fastzd2alpha3251zd2_1622, BgL_removable3252z00_1623,
					(long) CINT(BgL_occurrence3253z00_1624),
					CBOOL(BgL_userzf33254zf3_1625), (long) CINT(BgL_key3255z00_1626),
					CBOOL(BgL_variant3245z00_1627)));
		}
	}



/* fill-local/variant! */
	BGL_EXPORTED_DEF BgL_localzf2variantzf2_bglt
		BGl_fillzd2localzf2variantz12z32zzinline_variantz00
		(BgL_localzf2variantzf2_bglt BgL_new3259z00_26,
		bool_t BgL_variant3258z00_27)
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 21 */
			{	/* Inline/variant.scm 21 */
				bool_t BgL_variant3258z00_1652;

				BgL_variant3258z00_1652 = BgL_variant3258z00_27;
				((((BgL_localzf2variantzf2_bglt) CREF(BgL_new3259z00_26))->
						BgL_variantz00) = ((bool_t) BgL_variant3258z00_1652), BUNSPEC);
				return BgL_new3259z00_26;
			}
		}
	}



/* _fill-local/variant! */
	obj_t BGl__fillzd2localzf2variantz12z32zzinline_variantz00(obj_t
		BgL_envz00_1628, obj_t BgL_new3259z00_1629, obj_t BgL_variant3258z00_1630)
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 21 */
			{	/* Inline/variant.scm 21 */
				BgL_localzf2variantzf2_bglt BgL_auxz00_1985;

				{	/* Inline/variant.scm 21 */
					BgL_localzf2variantzf2_bglt BgL_res3526z00_1656;

					{	/* Inline/variant.scm 21 */
						BgL_localzf2variantzf2_bglt BgL_new3259z00_1653;

						bool_t BgL_variant3258z00_1654;

						BgL_new3259z00_1653 =
							(BgL_localzf2variantzf2_bglt) (BgL_new3259z00_1629);
						BgL_variant3258z00_1654 = CBOOL(BgL_variant3258z00_1630);
						{	/* Inline/variant.scm 21 */
							bool_t BgL_variant3258z00_1655;

							BgL_variant3258z00_1655 = BgL_variant3258z00_1654;
							((((BgL_localzf2variantzf2_bglt) CREF(BgL_new3259z00_1653))->
									BgL_variantz00) =
								((bool_t) BgL_variant3258z00_1655), BUNSPEC);
							BgL_res3526z00_1656 = BgL_new3259z00_1653;
						}
					}
					BgL_auxz00_1985 = BgL_res3526z00_1656;
				}
				return (obj_t) (BgL_auxz00_1985);
			}
		}
	}



/* %allocate-local/variant */
	BGL_EXPORTED_DEF BgL_localz00_bglt
		BGl_z52allocatezd2localzf2variantz72zzinline_variantz00()
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 21 */
			{	/* Inline/variant.scm 21 */
				BgL_localz00_bglt BgL_new3262z00_1657;

				BgL_new3262z00_1657 =
					((BgL_localz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_localz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3262z00_1657),
					BGl_classzd2numzd2zz__objectz00
					(BGl_localzf2variantzf2zzinline_variantz00));
				{	/* Inline/variant.scm 21 */
					BgL_objectz00_bglt BgL_auxz00_1994;

					BgL_auxz00_1994 = (BgL_objectz00_bglt) (BgL_new3262z00_1657);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_1994, BFALSE);
				}
				return BgL_new3262z00_1657;
			}
		}
	}



/* _%allocate-local/variant */
	obj_t BGl__z52allocatezd2localzf2variantz72zzinline_variantz00(obj_t
		BgL_envz00_1610)
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 21 */
			{	/* Inline/variant.scm 21 */
				BgL_localz00_bglt BgL_auxz00_1997;

				{	/* Inline/variant.scm 21 */
					BgL_localz00_bglt BgL_res3527z00_1661;

					{	/* Inline/variant.scm 21 */
						BgL_localz00_bglt BgL_new3262z00_1659;

						BgL_new3262z00_1659 =
							((BgL_localz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_localz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3262z00_1659),
							BGl_classzd2numzd2zz__objectz00
							(BGl_localzf2variantzf2zzinline_variantz00));
						{	/* Inline/variant.scm 21 */
							BgL_objectz00_bglt BgL_auxz00_2002;

							BgL_auxz00_2002 = (BgL_objectz00_bglt) (BgL_new3262z00_1659);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2002, BFALSE);
						}
						BgL_res3527z00_1661 = BgL_new3262z00_1659;
					}
					BgL_auxz00_1997 = BgL_res3527z00_1661;
				}
				return (obj_t) (BgL_auxz00_1997);
			}
		}
	}



/* local/variant-nil */
	BGL_EXPORTED_DEF BgL_localzf2variantzf2_bglt
		BGl_localzf2variantzd2nilz20zzinline_variantz00()
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 21 */
			if ((BGl_z52thezd2localzf2variantzd2nilza0zzinline_variantz00 == BUNSPEC))
				{	/* Inline/variant.scm 21 */
					{	/* Inline/variant.scm 21 */
						BgL_localz00_bglt BgL_res3508z00_1519;

						{	/* Inline/variant.scm 21 */
							BgL_localz00_bglt BgL_new1810z00_1515;

							BgL_new1810z00_1515 =
								((BgL_localz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_localz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1810z00_1515),
								BGl_classzd2numzd2zz__objectz00(BGl_localz00zzast_varz00));
							{	/* Inline/variant.scm 21 */
								BgL_objectz00_bglt BgL_auxz00_2012;

								BgL_auxz00_2012 = (BgL_objectz00_bglt) (BgL_new1810z00_1515);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2012, BFALSE);
							}
							BgL_res3508z00_1519 = BgL_new1810z00_1515;
						}
						BGl_z52thezd2localzf2variantzd2nilza0zzinline_variantz00 =
							(obj_t) (BgL_res3508z00_1519);
					}
					{	/* Inline/variant.scm 21 */
						obj_t BgL_arg3437z00_971;

						BgL_typez00_bglt BgL_arg3438z00_972;

						BgL_valuez00_bglt BgL_arg3439z00_973;

						BgL_arg3437z00_971 = CNST_TABLE_REF(((long) 3));
						BgL_arg3438z00_972 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg3439z00_973 = BGl_valuezd2nilzd2zzast_varz00();
						{	/* Inline/variant.scm 21 */
							BgL_localz00_bglt BgL_res3509z00_1541;

							{	/* Inline/variant.scm 21 */
								BgL_localz00_bglt BgL_new1798z00_1520;

								BgL_new1798z00_1520 =
									(BgL_localz00_bglt)
									(BGl_z52thezd2localzf2variantzd2nilza0zzinline_variantz00);
								{	/* Inline/variant.scm 21 */
									obj_t BgL_id1788z00_1531;

									obj_t BgL_name1789z00_1532;

									BgL_typez00_bglt BgL_type1790z00_1533;

									BgL_valuez00_bglt BgL_value1791z00_1534;

									obj_t BgL_access1792z00_1535;

									obj_t BgL_fastzd2alpha1793zd2_1536;

									obj_t BgL_removable1794z00_1537;

									long BgL_occurrence1795z00_1538;

									bool_t BgL_userzf31796zf3_1539;

									long BgL_key1797z00_1540;

									BgL_id1788z00_1531 = BgL_arg3437z00_971;
									BgL_name1789z00_1532 = BUNSPEC;
									BgL_type1790z00_1533 = BgL_arg3438z00_972;
									BgL_value1791z00_1534 = BgL_arg3439z00_973;
									BgL_access1792z00_1535 = BUNSPEC;
									BgL_fastzd2alpha1793zd2_1536 = BUNSPEC;
									BgL_removable1794z00_1537 = BUNSPEC;
									BgL_occurrence1795z00_1538 = ((long) 0);
									BgL_userzf31796zf3_1539 = ((bool_t) 0);
									BgL_key1797z00_1540 = ((long) 0);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1520))->
											BgL_idz00) = ((obj_t) BgL_id1788z00_1531), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1520))->
											BgL_namez00) = ((obj_t) BgL_name1789z00_1532), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1520))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type1790z00_1533), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1520))->
											BgL_valuez00) =
										((BgL_valuez00_bglt) BgL_value1791z00_1534), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1520))->
											BgL_accessz00) =
										((obj_t) BgL_access1792z00_1535), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1520))->
											BgL_fastzd2alphazd2) =
										((obj_t) BgL_fastzd2alpha1793zd2_1536), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1520))->
											BgL_removablez00) =
										((obj_t) BgL_removable1794z00_1537), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1520))->
											BgL_occurrencez00) =
										((long) BgL_occurrence1795z00_1538), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1520))->
											BgL_userzf3zf3) =
										((bool_t) BgL_userzf31796zf3_1539), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1520))->
											BgL_keyz00) = ((long) BgL_key1797z00_1540), BUNSPEC);
									BgL_res3509z00_1541 = BgL_new1798z00_1520;
							}} BgL_res3509z00_1541;
					}}
					{	/* Inline/variant.scm 21 */
						long BgL_arg3443z00_976;

						BgL_arg3443z00_976 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_localzf2variantzf2zzinline_variantz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2localzf2variantzd2nilza0zzinline_variantz00),
							BgL_arg3443z00_976);
					}
					{	/* Inline/variant.scm 21 */
						BgL_localzf2variantzf2_bglt BgL_arg3444z00_977;

						{	/* Inline/variant.scm 21 */
							BgL_localzf2variantzf2_bglt BgL_res3511z00_1550;

							{	/* Inline/variant.scm 21 */
								BgL_localzf2variantzf2_bglt BgL_new3243z00_1545;

								BgL_new3243z00_1545 =
									((BgL_localzf2variantzf2_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_localzf2variantzf2_bgl))));
								{	/* Inline/variant.scm 21 */
									BgL_localzf2variantzf2_bglt BgL_res3510z00_1549;

									{	/* Inline/variant.scm 21 */
										BgL_localzf2variantzf2_bglt BgL_new3259z00_1546;

										BgL_new3259z00_1546 = BgL_new3243z00_1545;
										{	/* Inline/variant.scm 21 */
											bool_t BgL_variant3258z00_1548;

											BgL_variant3258z00_1548 = ((bool_t) 0);
											((((BgL_localzf2variantzf2_bglt)
														CREF(BgL_new3259z00_1546))->BgL_variantz00) =
												((bool_t) BgL_variant3258z00_1548), BUNSPEC);
											BgL_res3510z00_1549 = BgL_new3259z00_1546;
									}} BgL_res3510z00_1549;
								}
								BgL_res3511z00_1550 = BgL_new3243z00_1545;
							}
							BgL_arg3444z00_977 = BgL_res3511z00_1550;
						}
						{	/* Inline/variant.scm 21 */
							obj_t BgL_auxz00_2037;

							BgL_objectz00_bglt BgL_auxz00_2035;

							BgL_auxz00_2037 = (obj_t) (BgL_arg3444z00_977);
							BgL_auxz00_2035 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2localzf2variantzd2nilza0zzinline_variantz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2035, BgL_auxz00_2037);
				}}}
			else
				{	/* Inline/variant.scm 21 */
					BFALSE;
				}
			return
				(BgL_localzf2variantzf2_bglt)
				(BGl_z52thezd2localzf2variantzd2nilza0zzinline_variantz00);
		}
	}



/* _local/variant-nil */
	obj_t BGl__localzf2variantzd2nilz20zzinline_variantz00(obj_t BgL_envz00_1611)
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 21 */
			return (obj_t) (BGl_localzf2variantzd2nilz20zzinline_variantz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzinline_variantz00()
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzinline_variantz00()
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_localzf2variantzf2zzinline_variantz00,
				BGl_proc3518z00zzinline_variantz00,
				BGl_string3519z00zzinline_variantz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_localzf2variantzf2zzinline_variantz00,
				BGl_proc3520z00zzinline_variantz00,
				BGl_string3521z00zzinline_variantz00);
		}
	}



/* struct+object->objec3333 */
	obj_t BGl_structzb2objectzd2ze3objec3333z83zzinline_variantz00(obj_t
		BgL_envz00_1638, obj_t BgL_oz00_1639, obj_t BgL_sz00_1640)
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 21 */
			{
				BgL_localzf2variantzf2_bglt BgL_oz00_1362;

				obj_t BgL_sz00_1363;

				{	/* Inline/variant.scm 21 */
					BgL_localzf2variantzf2_bglt BgL_auxz00_2045;

					BgL_oz00_1362 = (BgL_localzf2variantzf2_bglt) (BgL_oz00_1639);
					BgL_sz00_1363 = BgL_sz00_1640;
					{

						{	/* Inline/variant.scm 21 */
							obj_t BgL_old3266z00_1366;

							obj_t BgL_aux3267z00_1367;

							{	/* Inline/variant.scm 21 */
								obj_t BgL_nextzd2method3332zd2_1372;

								BgL_nextzd2method3332zd2_1372 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1362),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_localzf2variantzf2zzinline_variantz00);
								if (PROCEDUREP(BgL_nextzd2method3332zd2_1372))
									{	/* Inline/variant.scm 21 */
										BgL_old3266z00_1366 =
											PROCEDURE_ENTRY(BgL_nextzd2method3332zd2_1372)
											(BgL_nextzd2method3332zd2_1372, (obj_t) (BgL_oz00_1362),
											BgL_sz00_1363, BEOA);
									}
								else
									{	/* Inline/variant.scm 21 */
										BgL_old3266z00_1366 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1362), BgL_sz00_1363));
									}
							}
							BgL_aux3267z00_1367 =
								STRUCT_REF(BgL_sz00_1363, (int) (((long) 0)));
							{	/* Inline/variant.scm 21 */
								BgL_localzf2variantzf2_bglt BgL_new3268z00_1368;

								BgL_new3268z00_1368 =
									((BgL_localzf2variantzf2_bglt) (BgL_old3266z00_1366));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3268z00_1368),
									BGl_classzd2numzd2zz__objectz00
									(BGl_localzf2variantzf2zzinline_variantz00));
								{	/* Inline/variant.scm 21 */
									BgL_localzf2variantzf2_bglt BgL_arg3497z00_1370;

									{	/* Inline/variant.scm 21 */
										obj_t BgL_arg3498z00_1371;

										BgL_arg3498z00_1371 =
											STRUCT_REF(BgL_aux3267z00_1367, (int) (((long) 0)));
										{	/* Inline/variant.scm 21 */
											BgL_localzf2variantzf2_bglt BgL_res3514z00_1594;

											{	/* Inline/variant.scm 21 */
												bool_t BgL_variant3242z00_1588;

												BgL_variant3242z00_1588 = CBOOL(BgL_arg3498z00_1371);
												{	/* Inline/variant.scm 21 */
													BgL_localzf2variantzf2_bglt BgL_new3243z00_1589;

													BgL_new3243z00_1589 =
														((BgL_localzf2variantzf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_localzf2variantzf2_bgl))));
													{	/* Inline/variant.scm 21 */
														BgL_localzf2variantzf2_bglt BgL_res3513z00_1593;

														{	/* Inline/variant.scm 21 */
															BgL_localzf2variantzf2_bglt BgL_new3259z00_1590;

															BgL_new3259z00_1590 = BgL_new3243z00_1589;
															{	/* Inline/variant.scm 21 */
																bool_t BgL_variant3258z00_1592;

																BgL_variant3258z00_1592 =
																	BgL_variant3242z00_1588;
																((((BgL_localzf2variantzf2_bglt)
																			CREF(BgL_new3259z00_1590))->
																		BgL_variantz00) =
																	((bool_t) BgL_variant3258z00_1592), BUNSPEC);
																BgL_res3513z00_1593 = BgL_new3259z00_1590;
														}} BgL_res3513z00_1593;
													}
													BgL_res3514z00_1594 = BgL_new3243z00_1589;
											}}
											BgL_arg3497z00_1370 = BgL_res3514z00_1594;
									}}
									{	/* Inline/variant.scm 21 */
										obj_t BgL_auxz00_2069;

										BgL_objectz00_bglt BgL_auxz00_2067;

										BgL_auxz00_2069 = (obj_t) (BgL_arg3497z00_1370);
										BgL_auxz00_2067 =
											(BgL_objectz00_bglt) (BgL_new3268z00_1368);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_2067, BgL_auxz00_2069);
								}}
								BgL_auxz00_2045 = BgL_new3268z00_1368;
					}}}
					return (obj_t) (BgL_auxz00_2045);
				}
			}
		}
	}



/* object->struct-local3331 */
	obj_t BGl_objectzd2ze3structzd2local3331ze3zzinline_variantz00(obj_t
		BgL_envz00_1641, obj_t BgL_obj3263z00_1642)
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 21 */
			{
				BgL_localzf2variantzf2_bglt BgL_obj3263z00_1352;

				BgL_obj3263z00_1352 =
					(BgL_localzf2variantzf2_bglt) (BgL_obj3263z00_1642);
				{

					{	/* Inline/variant.scm 21 */
						obj_t BgL_res3264z00_1355;

						{	/* Inline/variant.scm 21 */
							obj_t BgL_nextzd2method3330zd2_1360;

							BgL_nextzd2method3330zd2_1360 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3263z00_1352),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_localzf2variantzf2zzinline_variantz00);
							if (PROCEDUREP(BgL_nextzd2method3330zd2_1360))
								{	/* Inline/variant.scm 21 */
									BgL_res3264z00_1355 =
										PROCEDURE_ENTRY(BgL_nextzd2method3330zd2_1360)
										(BgL_nextzd2method3330zd2_1360,
										(obj_t) (BgL_obj3263z00_1352), BEOA);
								}
							else
								{	/* Inline/variant.scm 21 */
									BgL_res3264z00_1355 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3263z00_1352));
								}
						}
						{	/* Inline/variant.scm 21 */
							obj_t BgL_aux3265z00_1356;

							{	/* Inline/variant.scm 21 */
								obj_t BgL_keyz00_1565;

								BgL_keyz00_1565 = CNST_TABLE_REF(((long) 2));
								BgL_aux3265z00_1356 =
									make_struct(BgL_keyz00_1565, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Inline/variant.scm 21 */
								bool_t BgL_arg3493z00_1358;

								{
									obj_t BgL_auxz00_2086;

									{	/* Inline/variant.scm 21 */
										BgL_objectz00_bglt BgL_auxz00_2087;

										BgL_auxz00_2087 =
											(BgL_objectz00_bglt) (BgL_obj3263z00_1352);
										BgL_auxz00_2086 = BGL_OBJECT_WIDENING(BgL_auxz00_2087);
									}
									BgL_arg3493z00_1358 =
										(((BgL_localzf2variantzf2_bglt) CREF(BgL_auxz00_2086))->
										BgL_variantz00);
								}
								{	/* Inline/variant.scm 21 */
									obj_t BgL_auxz00_2093;

									int BgL_auxz00_2091;

									BgL_auxz00_2093 = BBOOL(BgL_arg3493z00_1358);
									BgL_auxz00_2091 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3265z00_1356, BgL_auxz00_2091,
										BgL_auxz00_2093);
							}}
							{	/* Inline/variant.scm 21 */
								int BgL_auxz00_2096;

								BgL_auxz00_2096 = (int) (((long) 0));
								STRUCT_SET(BgL_res3264z00_1355, BgL_auxz00_2096,
									BgL_aux3265z00_1356);
							}
							{	/* Inline/variant.scm 21 */
								obj_t BgL_auxz00_2099;

								BgL_auxz00_2099 = STRUCT_KEY(BgL_res3264z00_1355);
								STRUCT_KEY_SET(BgL_aux3265z00_1356, BgL_auxz00_2099);
							}
							{	/* Inline/variant.scm 21 */
								obj_t BgL_kz00_1580;

								BgL_kz00_1580 = CNST_TABLE_REF(((long) 2));
								STRUCT_KEY_SET(BgL_res3264z00_1355, BgL_kz00_1580);
							}
							return BgL_res3264z00_1355;
						}
					}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzinline_variantz00()
	{
		AN_OBJECT;
		{	/* Inline/variant.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3522z00zzinline_variantz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3522z00zzinline_variantz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3522z00zzinline_variantz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3522z00zzinline_variantz00));
			return
				BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3522z00zzinline_variantz00));
		}
	}

#ifdef __cplusplus
}
#endif
