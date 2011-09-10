/*===========================================================================*/
/*   (Ast/ident.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/ident.scm)*/
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


	BGL_EXPORTED_DECL obj_t
		BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	static obj_t BGl__makezd2typedzd2identz00zzast_identz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_idzd2ofzd2idz00zzast_identz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t);
	static obj_t BGl__fastzd2idzd2ofzd2idzd2zzast_identz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_localzd2idzd2ze3nameze3zzast_identz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_identz00 = BUNSPEC;
	extern obj_t BGl_dssslzd2defaultedzd2formalzf3zf3zztools_dssslz00(obj_t);
	BGL_IMPORT obj_t bigloo_mangle(obj_t);
	static obj_t BGl_genericzd2initzd2zzast_identz00();
	BGL_EXPORTED_DECL obj_t
		BGl_parsezd2idzf2importzd2locationzf2zzast_identz00(obj_t, obj_t, obj_t);
	static obj_t BGl__parsezd2dssslzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl__idzd2ze3namez31zzast_identz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(obj_t,
		obj_t);
	static obj_t BGl__parsezd2idzd2zzast_identz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	static obj_t BGl__userzd2symbolzf3z21zzast_identz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_4dotsz00zzast_identz00 = BUNSPEC;
	static obj_t BGl__idzd2ofzd2idz00zzast_identz00(obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzast_identz00();
	extern BgL_typez00_bglt BGl_getzd2defaultzd2typez00zztype_cachez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzast_identz00();
	BGL_EXPORTED_DECL bool_t BGl_userzd2symbolzf3z21zzast_identz00(obj_t);
	extern BgL_typez00_bglt
		BGl_usezd2typezf2importzd2locz12ze0zztype_envz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__typezd2ofzd2idz00zzast_identz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_dssslz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	static obj_t BGl_toplevelzd2initzd2zzast_identz00();
	BGL_EXPORTED_DECL obj_t BGl_makezd2typedzd2formalz00zzast_identz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t,
		obj_t);
	static obj_t BGl__markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_typezd2ofzd2idzf2importzd2locationz20zzast_identz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_EXPORTED_DECL obj_t BGl_checkzd2idzd2zzast_identz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_typezd2identzf3z21zzast_identz00(obj_t);
	static obj_t BGl__typezd2ofzd2idzf2importzd2locationz20zzast_identz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	static obj_t BGl__makezd2typedzd2formalz00zzast_identz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt BGl_typezd2ofzd2idz00zzast_identz00(obj_t,
		obj_t);
	static obj_t BGl_parsezd2idzf2usez20zzast_identz00(obj_t, obj_t, obj_t);
	static obj_t BGl__parsezd2idzf2importzd2locationzf2zzast_identz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	BGL_EXPORTED_DECL obj_t BGl_parsezd2dssslzd2zzast_identz00(obj_t);
	static obj_t BGl_zc3anonymousza31694ze3_1719z83zzast_identz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__localzd2idzd2ze3nameze3zzast_identz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_idzd2ze3namez31zzast_identz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_zc3anonymousza31694ze3z83zzast_identz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl__checkzd2idzd2zzast_identz00(obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_identz00();
	static obj_t BGl_methodzd2initzd2zzast_identz00();
	static obj_t BGl__typezd2identzf3z21zzast_identz00(obj_t, obj_t);
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_checkzd2idzd2envz00zzast_identz00,
		BgL_bgl__checkza7d2idza7d2za7za71732z00, BGl__checkzd2idzd2zzast_identz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_idzd2ofzd2idzd2envzd2zzast_identz00,
		BgL_bgl__idza7d2ofza7d2idza7001733za7, BGl__idzd2ofzd2idz00zzast_identz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2ofzd2idzd2envzd2zzast_identz00,
		BgL_bgl__typeza7d2ofza7d2idza71734za7, BGl__typezd2ofzd2idz00zzast_identz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_parsezd2idzd2envz00zzast_identz00,
		BgL_bgl__parseza7d2idza7d2za7za71735z00, BGl__parsezd2idzd2zzast_identz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzd2idzd2ze3namezd2envz31zzast_identz00,
		BgL_bgl__localza7d2idza7d2za7e1736za7,
		BGl__localzd2idzd2ze3nameze3zzast_identz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2identzf3zd2envzf3zzast_identz00,
		BgL_bgl__typeza7d2identza7f31737z00, BGl__typezd2identzf3z21zzast_identz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_typezd2ofzd2idzf2importzd2locationzd2envzf2zzast_identz00,
		BgL_bgl__typeza7d2ofza7d2idza71738za7,
		BGl__typezd2ofzd2idzf2importzd2locationz20zzast_identz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_idzd2ze3namezd2envze3zzast_identz00,
		BgL_bgl__idza7d2za7e3nameza7311739za7, BGl__idzd2ze3namez31zzast_identz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fastzd2idzd2ofzd2idzd2envz00zzast_identz00,
		BgL_bgl__fastza7d2idza7d2ofza71740za7,
		BGl__fastzd2idzd2ofzd2idzd2zzast_identz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2typedzd2formalzd2envzd2zzast_identz00,
		BgL_bgl__makeza7d2typedza7d21741z00,
		BGl__makezd2typedzd2formalz00zzast_identz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_usezd2typez12zd2envz12zztype_envz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_parsezd2idzf2importzd2locationzd2envz20zzast_identz00,
		BgL_bgl__parseza7d2idza7f2im1742z00,
		BGl__parsezd2idzf2importzd2locationzf2zzast_identz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string1720z00zzast_identz00,
		BgL_bgl_string1720za700za7za7a1743za7, "::", 2);
	      DEFINE_STRING(BGl_string1721z00zzast_identz00,
		BgL_bgl_string1721za700za7za7a1744za7, "Illegal identifier", 18);
	      DEFINE_STRING(BGl_string1722z00zzast_identz00,
		BgL_bgl_string1722za700za7za7a1745za7, "`'", 2);
	      DEFINE_STRING(BGl_string1723z00zzast_identz00,
		BgL_bgl_string1723za700za7za7a1746za7, "parse", 5);
	      DEFINE_STRING(BGl_string1724z00zzast_identz00,
		BgL_bgl_string1724za700za7za7a1747za7, "", 0);
	      DEFINE_STRING(BGl_string1725z00zzast_identz00,
		BgL_bgl_string1725za700za7za7a1748za7, "type-of-id", 10);
	      DEFINE_STRING(BGl_string1726z00zzast_identz00,
		BgL_bgl_string1726za700za7za7a1749za7, "Illegal formal identifier", 25);
	      DEFINE_STRING(BGl_string1727z00zzast_identz00,
		BgL_bgl_string1727za700za7za7a1750za7, "Illegal formal parameter", 24);
	      DEFINE_STRING(BGl_string1728z00zzast_identz00,
		BgL_bgl_string1728za700za7za7a1751za7, "ast_ident", 9);
	      DEFINE_STRING(BGl_string1729z00zzast_identz00,
		BgL_bgl_string1729za700za7za7a1752za7, "non-user error-ident dsssl ", 27);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_markzd2symbolzd2nonzd2userz12zd2envz12zzast_identz00,
		BgL_bgl__markza7d2symbolza7d1753z00,
		BGl__markzd2symbolzd2nonzd2userz12zc0zzast_identz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_parsezd2dssslzd2envz00zzast_identz00,
		BgL_bgl__parseza7d2dssslza7d1754z00, BGl__parsezd2dssslzd2zzast_identz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_userzd2symbolzf3zd2envzf3zzast_identz00,
		BgL_bgl__userza7d2symbolza7f1755z00, BGl__userzd2symbolzf3z21zzast_identz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2typedzd2identzd2envzd2zzast_identz00,
		BgL_bgl__makeza7d2typedza7d21756z00,
		BGl__makezd2typedzd2identz00zzast_identz00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long
		BgL_checksumz00_515, char *BgL_fromz00_516)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_identz00))
				{
					BGl_requirezd2initializa7ationz75zzast_identz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_identz00();
					BGl_cnstzd2initzd2zzast_identz00();
					BGl_importedzd2moduleszd2initz00zzast_identz00();
					BGl_toplevelzd2initzd2zzast_identz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_identz00()
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 14 */
			BGl_modulezd2initializa7ationz75zz__dssslz00(((long) 0), "ast_ident");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_ident");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "ast_ident");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"ast_ident");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_ident");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_identz00()
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 14 */
			{	/* Ast/ident.scm 14 */
				obj_t BgL_cportz00_507;

				BgL_cportz00_507 =
					bgl_open_input_string(BGl_string1729z00zzast_identz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_508;

					BgL_iz00_508 = ((long) 2);
				BgL_loopz00_509:
					if ((BgL_iz00_508 == ((long) -1)))
						{	/* Ast/ident.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/ident.scm 14 */
							{	/* Ast/ident.scm 14 */
								obj_t BgL_arg1731z00_511;

								{	/* Ast/ident.scm 14 */

									{	/* Ast/ident.scm 14 */
										obj_t BgL_locationz00_513;

										BgL_locationz00_513 = BBOOL(((bool_t) 0));
										{	/* Ast/ident.scm 14 */

											BgL_arg1731z00_511 =
												BGl_readz00zz__readerz00(BgL_cportz00_507,
												BgL_locationz00_513);
										}
									}
								}
								{	/* Ast/ident.scm 14 */
									int BgL_auxz00_535;

									BgL_auxz00_535 = (int) (BgL_iz00_508);
									CNST_TABLE_SET(BgL_auxz00_535, BgL_arg1731z00_511);
							}}
							{	/* Ast/ident.scm 14 */
								int BgL_auxz00_514;

								BgL_auxz00_514 = (int) ((BgL_iz00_508 - ((long) 1)));
								{
									long BgL_iz00_540;

									BgL_iz00_540 = (long) (BgL_auxz00_514);
									BgL_iz00_508 = BgL_iz00_540;
									goto BgL_loopz00_509;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_identz00()
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 14 */
			return (BGl_4dotsz00zzast_identz00 =
				string_to_symbol(BSTRING_TO_STRING(BGl_string1720z00zzast_identz00)),
				BUNSPEC);
		}
	}



/* type-ident? */
	BGL_EXPORTED_DEF bool_t BGl_typezd2identzf3z21zzast_identz00(obj_t
		BgL_symz00_1)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 44 */
			{	/* Ast/ident.scm 45 */
				obj_t BgL_strz00_174;

				{	/* Ast/ident.scm 45 */
					obj_t BgL_res1707z00_308;

					{	/* Ast/ident.scm 45 */
						obj_t BgL_arg2063z00_307;

						BgL_arg2063z00_307 = SYMBOL_TO_STRING(BgL_symz00_1);
						BgL_res1707z00_308 =
							BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2063z00_307);
					}
					BgL_strz00_174 = BgL_res1707z00_308;
				}
				if ((STRING_LENGTH(BgL_strz00_174) > ((long) 2)))
					{	/* Ast/ident.scm 46 */
						if (
							(STRING_REF(BgL_strz00_174, ((long) 0)) == ((unsigned char) ':')))
							{	/* Ast/ident.scm 47 */
								return
									(STRING_REF(BgL_strz00_174,
										((long) 1)) == ((unsigned char) ':'));
							}
						else
							{	/* Ast/ident.scm 47 */
								return ((bool_t) 0);
							}
					}
				else
					{	/* Ast/ident.scm 46 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* _type-ident? */
	obj_t BGl__typezd2identzf3z21zzast_identz00(obj_t BgL_envz00_454,
		obj_t BgL_symz00_455)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 44 */
			return BBOOL(BGl_typezd2identzf3z21zzast_identz00(BgL_symz00_455));
		}
	}



/* make-typed-ident */
	BGL_EXPORTED_DEF obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t
		BgL_sym1z00_2, obj_t BgL_sym2z00_3)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 53 */
			{	/* Ast/ident.scm 54 */
				obj_t BgL_list1606z00_320;

				{	/* Ast/ident.scm 54 */
					obj_t BgL_arg1607z00_321;

					{	/* Ast/ident.scm 54 */
						obj_t BgL_arg1608z00_322;

						BgL_arg1608z00_322 = MAKE_PAIR(BgL_sym2z00_3, BNIL);
						BgL_arg1607z00_321 =
							MAKE_PAIR(BGl_4dotsz00zzast_identz00, BgL_arg1608z00_322);
					}
					BgL_list1606z00_320 = MAKE_PAIR(BgL_sym1z00_2, BgL_arg1607z00_321);
				}
				return BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(BgL_list1606z00_320);
			}
		}
	}



/* _make-typed-ident */
	obj_t BGl__makezd2typedzd2identz00zzast_identz00(obj_t BgL_envz00_456,
		obj_t BgL_sym1z00_457, obj_t BgL_sym2z00_458)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 53 */
			return
				BGl_makezd2typedzd2identz00zzast_identz00(BgL_sym1z00_457,
				BgL_sym2z00_458);
		}
	}



/* make-typed-formal */
	BGL_EXPORTED_DEF obj_t BGl_makezd2typedzd2formalz00zzast_identz00(obj_t
		BgL_sym2z00_4)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 59 */
			{	/* Ast/ident.scm 60 */
				obj_t BgL_arg1610z00_184;

				{	/* Ast/ident.scm 60 */
					obj_t BgL_arg1611z00_185;

					obj_t BgL_arg1613z00_186;

					{	/* Ast/ident.scm 60 */
						obj_t BgL_res1708z00_325;

						{	/* Ast/ident.scm 60 */
							obj_t BgL_symbolz00_323;

							BgL_symbolz00_323 = BGl_4dotsz00zzast_identz00;
							{	/* Ast/ident.scm 60 */
								obj_t BgL_arg2063z00_324;

								BgL_arg2063z00_324 = SYMBOL_TO_STRING(BgL_symbolz00_323);
								BgL_res1708z00_325 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2063z00_324);
							}
						}
						BgL_arg1611z00_185 = BgL_res1708z00_325;
					}
					{	/* Ast/ident.scm 60 */
						obj_t BgL_res1709z00_328;

						{	/* Ast/ident.scm 60 */
							obj_t BgL_arg2063z00_327;

							BgL_arg2063z00_327 = SYMBOL_TO_STRING(BgL_sym2z00_4);
							BgL_res1709z00_328 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2063z00_327);
						}
						BgL_arg1613z00_186 = BgL_res1709z00_328;
					}
					{	/* Ast/ident.scm 60 */
						obj_t BgL_list1614z00_187;

						{	/* Ast/ident.scm 60 */
							obj_t BgL_arg1615z00_188;

							BgL_arg1615z00_188 = MAKE_PAIR(BgL_arg1613z00_186, BNIL);
							BgL_list1614z00_187 =
								MAKE_PAIR(BgL_arg1611z00_185, BgL_arg1615z00_188);
						}
						BgL_arg1610z00_184 =
							BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1614z00_187);
					}
				}
				return string_to_symbol(BSTRING_TO_STRING(BgL_arg1610z00_184));
			}
		}
	}



/* _make-typed-formal */
	obj_t BGl__makezd2typedzd2formalz00zzast_identz00(obj_t BgL_envz00_459,
		obj_t BgL_sym2z00_460)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 59 */
			return BGl_makezd2typedzd2formalz00zzast_identz00(BgL_sym2z00_460);
		}
	}



/* type-of-id */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_typezd2ofzd2idz00zzast_identz00(obj_t
		BgL_idz00_5, obj_t BgL_locz00_6)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 65 */
			if (SYMBOLP(BgL_idz00_5))
				{	/* Ast/ident.scm 68 */
					obj_t BgL_arg1618z00_190;

					BgL_arg1618z00_190 =
						BGl_parsezd2idzf2usez20zzast_identz00(BgL_idz00_5, BgL_locz00_6,
						BGl_usezd2typez12zd2envz12zztype_envz00);
					return (BgL_typez00_bglt) (CDR(BgL_arg1618z00_190));
				}
			else
				{	/* Ast/ident.scm 66 */
					return
						(BgL_typez00_bglt) (BGl_userzd2errorzd2zztools_errorz00
						(BGl_string1721z00zzast_identz00, BGl_string1722z00zzast_identz00,
							BgL_idz00_5, BNIL));
				}
		}
	}



/* _type-of-id */
	obj_t BGl__typezd2ofzd2idz00zzast_identz00(obj_t BgL_envz00_461,
		obj_t BgL_idz00_462, obj_t BgL_locz00_463)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 65 */
			return
				(obj_t) (BGl_typezd2ofzd2idz00zzast_identz00(BgL_idz00_462,
					BgL_locz00_463));
		}
	}



/* type-of-id/import-location */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_typezd2ofzd2idzf2importzd2locationz20zzast_identz00(obj_t BgL_idz00_7,
		obj_t BgL_locz00_8, obj_t BgL_lociz00_9)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 73 */
			if (SYMBOLP(BgL_idz00_7))
				{	/* Ast/ident.scm 76 */
					obj_t BgL_arg1621z00_193;

					{	/* Ast/ident.scm 76 */
						obj_t BgL_zc3anonymousza31694ze3z83_467;

						BgL_zc3anonymousza31694ze3z83_467 =
							make_fx_procedure(BGl_zc3anonymousza31694ze3z83zzast_identz00,
							(int) (((long) 2)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3anonymousza31694ze3z83_467,
							(int) (((long) 0)), BgL_lociz00_9);
						BgL_arg1621z00_193 =
							BGl_parsezd2idzf2usez20zzast_identz00(BgL_idz00_7, BgL_locz00_8,
							BgL_zc3anonymousza31694ze3z83_467);
					}
					return (BgL_typez00_bglt) (CDR(BgL_arg1621z00_193));
				}
			else
				{	/* Ast/ident.scm 74 */
					return
						(BgL_typez00_bglt) (BGl_userzd2errorzd2zztools_errorz00
						(BGl_string1721z00zzast_identz00, BGl_string1722z00zzast_identz00,
							BgL_idz00_7, BNIL));
				}
		}
	}



/* _type-of-id/import-location */
	obj_t BGl__typezd2ofzd2idzf2importzd2locationz20zzast_identz00(obj_t
		BgL_envz00_468, obj_t BgL_idz00_469, obj_t BgL_locz00_470,
		obj_t BgL_lociz00_471)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 73 */
			return
				(obj_t) (BGl_typezd2ofzd2idzf2importzd2locationz20zzast_identz00
				(BgL_idz00_469, BgL_locz00_470, BgL_lociz00_471));
		}
	}



/* <anonymous:1694> */
	obj_t BGl_zc3anonymousza31694ze3z83zzast_identz00(obj_t BgL_envz00_472,
		obj_t BgL_tidz00_474, obj_t BgL_locz00_475)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 167 */
			{	/* Ast/ident.scm 76 */
				obj_t BgL_lociz00_473;

				BgL_lociz00_473 = PROCEDURE_REF(BgL_envz00_472, (int) (((long) 0)));
				{
					obj_t BgL_tidz00_339;

					obj_t BgL_locz00_340;

					{	/* Ast/ident.scm 76 */
						BgL_typez00_bglt BgL_auxz00_596;

						BgL_tidz00_339 = BgL_tidz00_474;
						BgL_locz00_340 = BgL_locz00_475;
						BgL_auxz00_596 =
							BGl_usezd2typezf2importzd2locz12ze0zztype_envz00(BgL_tidz00_339,
							BgL_locz00_340, BgL_lociz00_473);
						return (obj_t) (BgL_auxz00_596);
					}
				}
			}
		}
	}



/* id-of-id */
	BGL_EXPORTED_DEF obj_t BGl_idzd2ofzd2idz00zzast_identz00(obj_t BgL_idz00_10,
		obj_t BgL_locz00_11)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 81 */
			if (SYMBOLP(BgL_idz00_10))
				{	/* Ast/ident.scm 82 */
					return
						CAR(BGl_parsezd2idzf2usez20zzast_identz00(BgL_idz00_10,
							BgL_locz00_11, BGl_usezd2typez12zd2envz12zztype_envz00));
				}
			else
				{	/* Ast/ident.scm 82 */
					return
						BGl_userzd2errorzd2zztools_errorz00(BGl_string1723z00zzast_identz00,
						BGl_string1721z00zzast_identz00, BgL_idz00_10, BNIL);
				}
		}
	}



/* _id-of-id */
	obj_t BGl__idzd2ofzd2idz00zzast_identz00(obj_t BgL_envz00_476,
		obj_t BgL_idz00_477, obj_t BgL_locz00_478)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 81 */
			return BGl_idzd2ofzd2idz00zzast_identz00(BgL_idz00_477, BgL_locz00_478);
		}
	}



/* fast-id-of-id */
	BGL_EXPORTED_DEF obj_t BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(obj_t
		BgL_idz00_12, obj_t BgL_locz00_13)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 89 */
			{
				obj_t BgL_idz00_206;

				if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(BgL_idz00_12))
					{	/* Ast/ident.scm 104 */
						return
							BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 0)));
					}
				else
					{	/* Ast/ident.scm 106 */
						bool_t BgL_testz00_609;

						if (PAIRP(BgL_idz00_12))
							{	/* Ast/ident.scm 106 */
								obj_t BgL_auxz00_612;

								BgL_auxz00_612 = CAR(BgL_idz00_12);
								BgL_testz00_609 = SYMBOLP(BgL_auxz00_612);
							}
						else
							{	/* Ast/ident.scm 106 */
								BgL_testz00_609 = ((bool_t) 0);
							}
						if (BgL_testz00_609)
							{	/* Ast/ident.scm 106 */
								BgL_idz00_206 = CAR(BgL_idz00_12);
							BgL_zc3anonymousza31633ze3z83_207:
								{	/* Ast/ident.scm 91 */
									obj_t BgL_stringz00_208;

									{	/* Ast/ident.scm 91 */
										obj_t BgL_res1710z00_353;

										{	/* Ast/ident.scm 91 */
											obj_t BgL_symbolz00_351;

											BgL_symbolz00_351 = BgL_idz00_206;
											{	/* Ast/ident.scm 91 */
												obj_t BgL_arg2063z00_352;

												BgL_arg2063z00_352 =
													SYMBOL_TO_STRING(BgL_symbolz00_351);
												BgL_res1710z00_353 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg2063z00_352);
											}
										}
										BgL_stringz00_208 = BgL_res1710z00_353;
									}
									{	/* Ast/ident.scm 91 */
										long BgL_lenz00_209;

										BgL_lenz00_209 = STRING_LENGTH(BgL_stringz00_208);
										{	/* Ast/ident.scm 92 */

											{
												long BgL_walkerz00_211;

												BgL_walkerz00_211 = ((long) 0);
											BgL_zc3anonymousza31634ze3z83_212:
												if ((BgL_walkerz00_211 == BgL_lenz00_209))
													{	/* Ast/ident.scm 95 */
														return BgL_idz00_206;
													}
												else
													{	/* Ast/ident.scm 97 */
														bool_t BgL_testz00_620;

														if (
															(STRING_REF(BgL_stringz00_208,
																	BgL_walkerz00_211) == ((unsigned char) ':')))
															{	/* Ast/ident.scm 97 */
																if (
																	(BgL_walkerz00_211 <
																		(BgL_lenz00_209 - ((long) 1))))
																	{	/* Ast/ident.scm 98 */
																		BgL_testz00_620 =
																			(STRING_REF(BgL_stringz00_208,
																				(BgL_walkerz00_211 + ((long) 1))) ==
																			((unsigned char) ':'));
																	}
																else
																	{	/* Ast/ident.scm 98 */
																		BgL_testz00_620 = ((bool_t) 0);
																	}
															}
														else
															{	/* Ast/ident.scm 97 */
																BgL_testz00_620 = ((bool_t) 0);
															}
														if (BgL_testz00_620)
															{	/* Ast/ident.scm 100 */
																obj_t BgL_arg1637z00_215;

																BgL_arg1637z00_215 =
																	c_substring(BgL_stringz00_208, ((long) 0),
																	BgL_walkerz00_211);
																return
																	string_to_symbol(BSTRING_TO_STRING
																	(BgL_arg1637z00_215));
															}
														else
															{
																long BgL_walkerz00_633;

																BgL_walkerz00_633 =
																	(BgL_walkerz00_211 + ((long) 1));
																BgL_walkerz00_211 = BgL_walkerz00_633;
																goto BgL_zc3anonymousza31634ze3z83_212;
															}
													}
											}
										}
									}
								}
							}
						else
							{	/* Ast/ident.scm 106 */
								if (SYMBOLP(BgL_idz00_12))
									{
										obj_t BgL_idz00_638;

										BgL_idz00_638 = BgL_idz00_12;
										BgL_idz00_206 = BgL_idz00_638;
										goto BgL_zc3anonymousza31633ze3z83_207;
									}
								else
									{	/* Ast/ident.scm 108 */
										return
											BGl_userzd2errorzd2zztools_errorz00
											(BGl_string1723z00zzast_identz00,
											BGl_string1721z00zzast_identz00, BgL_idz00_12, BNIL);
									}
							}
					}
			}
		}
	}



/* _fast-id-of-id */
	obj_t BGl__fastzd2idzd2ofzd2idzd2zzast_identz00(obj_t BgL_envz00_479,
		obj_t BgL_idz00_480, obj_t BgL_locz00_481)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 89 */
			return
				BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(BgL_idz00_480, BgL_locz00_481);
		}
	}



/* parse-id/use */
	obj_t BGl_parsezd2idzf2usez20zzast_identz00(obj_t BgL_idz00_14,
		obj_t BgL_locz00_15, obj_t BgL_usezd2typezd2_16)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 116 */
			if (SYMBOLP(BgL_idz00_14))
				{	/* Ast/ident.scm 119 */
					obj_t BgL_stringz00_226;

					{	/* Ast/ident.scm 119 */
						obj_t BgL_res1711z00_380;

						{	/* Ast/ident.scm 119 */
							obj_t BgL_symbolz00_378;

							BgL_symbolz00_378 = BgL_idz00_14;
							{	/* Ast/ident.scm 119 */
								obj_t BgL_arg2063z00_379;

								BgL_arg2063z00_379 = SYMBOL_TO_STRING(BgL_symbolz00_378);
								BgL_res1711z00_380 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2063z00_379);
							}
						}
						BgL_stringz00_226 = BgL_res1711z00_380;
					}
					{	/* Ast/ident.scm 119 */
						long BgL_lenz00_227;

						BgL_lenz00_227 = STRING_LENGTH(BgL_stringz00_226);
						{	/* Ast/ident.scm 120 */

							{
								long BgL_walkerz00_229;

								long BgL_idzd2stopzd2_230;

								long BgL_typezd2startzd2_231;

								BgL_walkerz00_229 = ((long) 0);
								BgL_idzd2stopzd2_230 = ((long) 0);
								BgL_typezd2startzd2_231 = ((long) 0);
							BgL_zc3anonymousza31648ze3z83_232:
								if ((BgL_walkerz00_229 == BgL_lenz00_227))
									{	/* Ast/ident.scm 127 */
										bool_t BgL_testz00_648;

										if ((BgL_idzd2stopzd2_230 == ((long) 0)))
											{	/* Ast/ident.scm 127 */
												BgL_testz00_648 =
													(BgL_typezd2startzd2_231 > ((long) 0));
											}
										else
											{	/* Ast/ident.scm 127 */
												BgL_testz00_648 = ((bool_t) 0);
											}
										if (BgL_testz00_648)
											{	/* Ast/ident.scm 130 */
												obj_t BgL_idz00_235;

												obj_t BgL_tidz00_236;

												BgL_idz00_235 =
													string_to_symbol(BSTRING_TO_STRING
													(BGl_string1724z00zzast_identz00));
												{	/* Ast/ident.scm 131 */
													obj_t BgL_arg1653z00_238;

													BgL_arg1653z00_238 =
														c_substring(BgL_stringz00_226,
														BgL_typezd2startzd2_231, BgL_lenz00_227);
													BgL_tidz00_236 =
														string_to_symbol(BSTRING_TO_STRING
														(BgL_arg1653z00_238));
												}
												{	/* Ast/ident.scm 134 */
													obj_t BgL_arg1651z00_237;

													BgL_arg1651z00_237 =
														PROCEDURE_ENTRY(BgL_usezd2typezd2_16)
														(BgL_usezd2typezd2_16, BgL_tidz00_236,
														BgL_locz00_15, BEOA);
													return MAKE_PAIR(BgL_idz00_235, BgL_arg1651z00_237);
												}
											}
										else
											{	/* Ast/ident.scm 127 */
												if ((BgL_idzd2stopzd2_230 == ((long) 0)))
													{	/* Ast/ident.scm 136 */
														BgL_typez00_bglt BgL_arg1655z00_240;

														BgL_arg1655z00_240 =
															BGl_getzd2defaultzd2typez00zztype_cachez00();
														return
															MAKE_PAIR(BgL_idz00_14,
															(obj_t) (BgL_arg1655z00_240));
													}
												else
													{	/* Ast/ident.scm 135 */
														if ((BgL_typezd2startzd2_231 == BgL_lenz00_227))
															{	/* Ast/ident.scm 139 */
																obj_t BgL_arg1660z00_244;

																{	/* Ast/ident.scm 142 */
																	obj_t BgL_arg1662z00_246;

																	BgL_typez00_bglt BgL_arg1663z00_247;

																	BgL_arg1662z00_246 =
																		CNST_TABLE_REF(((long) 1));
																	BgL_arg1663z00_247 =
																		BGl_getzd2defaultzd2typez00zztype_cachez00
																		();
																	BgL_arg1660z00_244 =
																		MAKE_PAIR(BgL_arg1662z00_246,
																		(obj_t) (BgL_arg1663z00_247));
																}
																{	/* Ast/ident.scm 139 */
																	obj_t BgL_list1661z00_245;

																	BgL_list1661z00_245 =
																		MAKE_PAIR(BgL_arg1660z00_244, BNIL);
																	return
																		BGl_userzd2errorzd2zztools_errorz00
																		(BGl_string1725z00zzast_identz00,
																		BGl_string1726z00zzast_identz00,
																		BgL_idz00_14, BgL_list1661z00_245);
																}
															}
														else
															{	/* Ast/ident.scm 144 */
																obj_t BgL_idz00_248;

																obj_t BgL_tidz00_249;

																{	/* Ast/ident.scm 144 */
																	obj_t BgL_arg1666z00_251;

																	BgL_arg1666z00_251 =
																		c_substring(BgL_stringz00_226, ((long) 0),
																		BgL_idzd2stopzd2_230);
																	BgL_idz00_248 =
																		string_to_symbol(BSTRING_TO_STRING
																		(BgL_arg1666z00_251));
																}
																{	/* Ast/ident.scm 145 */
																	obj_t BgL_arg1667z00_252;

																	BgL_arg1667z00_252 =
																		c_substring(BgL_stringz00_226,
																		BgL_typezd2startzd2_231, BgL_lenz00_227);
																	BgL_tidz00_249 =
																		string_to_symbol(BSTRING_TO_STRING
																		(BgL_arg1667z00_252));
																}
																{	/* Ast/ident.scm 148 */
																	obj_t BgL_arg1664z00_250;

																	BgL_arg1664z00_250 =
																		PROCEDURE_ENTRY(BgL_usezd2typezd2_16)
																		(BgL_usezd2typezd2_16, BgL_tidz00_249,
																		BgL_locz00_15, BEOA);
																	return MAKE_PAIR(BgL_idz00_248,
																		BgL_arg1664z00_250);
																}
															}
													}
											}
									}
								else
									{	/* Ast/ident.scm 149 */
										bool_t BgL_testz00_682;

										if (
											(STRING_REF(BgL_stringz00_226,
													BgL_walkerz00_229) == ((unsigned char) ':')))
											{	/* Ast/ident.scm 149 */
												if ((BgL_walkerz00_229 < (BgL_lenz00_227 - ((long) 1))))
													{	/* Ast/ident.scm 150 */
														BgL_testz00_682 =
															(STRING_REF(BgL_stringz00_226,
																(BgL_walkerz00_229 + ((long) 1))) ==
															((unsigned char) ':'));
													}
												else
													{	/* Ast/ident.scm 150 */
														BgL_testz00_682 = ((bool_t) 0);
													}
											}
										else
											{	/* Ast/ident.scm 149 */
												BgL_testz00_682 = ((bool_t) 0);
											}
										if (BgL_testz00_682)
											{	/* Ast/ident.scm 149 */
												if ((BgL_typezd2startzd2_231 > ((long) 0)))
													{	/* Ast/ident.scm 153 */
														obj_t BgL_arg1674z00_258;

														{	/* Ast/ident.scm 156 */
															obj_t BgL_arg1676z00_260;

															BgL_typez00_bglt BgL_arg1677z00_261;

															BgL_arg1676z00_260 = CNST_TABLE_REF(((long) 1));
															BgL_arg1677z00_261 =
																BGl_getzd2defaultzd2typez00zztype_cachez00();
															BgL_arg1674z00_258 =
																MAKE_PAIR(BgL_arg1676z00_260,
																(obj_t) (BgL_arg1677z00_261));
														}
														{	/* Ast/ident.scm 153 */
															obj_t BgL_list1675z00_259;

															BgL_list1675z00_259 =
																MAKE_PAIR(BgL_arg1674z00_258, BNIL);
															return
																BGl_userzd2errorzd2zztools_errorz00
																(BGl_string1725z00zzast_identz00,
																BGl_string1726z00zzast_identz00, BgL_idz00_14,
																BgL_list1675z00_259);
														}
													}
												else
													{
														long BgL_typezd2startzd2_703;

														long BgL_idzd2stopzd2_702;

														long BgL_walkerz00_700;

														BgL_walkerz00_700 =
															(BgL_walkerz00_229 + ((long) 2));
														BgL_idzd2stopzd2_702 = BgL_walkerz00_229;
														BgL_typezd2startzd2_703 =
															(BgL_walkerz00_229 + ((long) 2));
														BgL_typezd2startzd2_231 = BgL_typezd2startzd2_703;
														BgL_idzd2stopzd2_230 = BgL_idzd2stopzd2_702;
														BgL_walkerz00_229 = BgL_walkerz00_700;
														goto BgL_zc3anonymousza31648ze3z83_232;
													}
											}
										else
											{
												long BgL_walkerz00_705;

												BgL_walkerz00_705 = (BgL_walkerz00_229 + ((long) 1));
												BgL_walkerz00_229 = BgL_walkerz00_705;
												goto BgL_zc3anonymousza31648ze3z83_232;
											}
									}
							}
						}
					}
				}
			else
				{	/* Ast/ident.scm 117 */
					return
						BGl_userzd2errorzd2zztools_errorz00(BGl_string1723z00zzast_identz00,
						BGl_string1721z00zzast_identz00, BgL_idz00_14, BNIL);
				}
		}
	}



/* parse-id/import-location */
	BGL_EXPORTED_DEF obj_t
		BGl_parsezd2idzf2importzd2locationzf2zzast_identz00(obj_t BgL_idz00_17,
		obj_t BgL_locz00_18, obj_t BgL_lociz00_19)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 164 */
			{	/* Ast/ident.scm 167 */
				obj_t BgL_zc3anonymousza31694ze3z83_482;

				BgL_zc3anonymousza31694ze3z83_482 =
					make_fx_procedure(BGl_zc3anonymousza31694ze3_1719z83zzast_identz00,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3anonymousza31694ze3z83_482,
					(int) (((long) 0)), BgL_lociz00_19);
				return
					BGl_parsezd2idzf2usez20zzast_identz00(BgL_idz00_17, BgL_locz00_18,
					BgL_zc3anonymousza31694ze3z83_482);
			}
		}
	}



/* _parse-id/import-location */
	obj_t BGl__parsezd2idzf2importzd2locationzf2zzast_identz00(obj_t
		BgL_envz00_483, obj_t BgL_idz00_484, obj_t BgL_locz00_485,
		obj_t BgL_lociz00_486)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 164 */
			return
				BGl_parsezd2idzf2importzd2locationzf2zzast_identz00(BgL_idz00_484,
				BgL_locz00_485, BgL_lociz00_486);
		}
	}



/* <anonymous:1694>_1719 */
	obj_t BGl_zc3anonymousza31694ze3_1719z83zzast_identz00(obj_t BgL_envz00_487,
		obj_t BgL_tidz00_489, obj_t BgL_locz00_490)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 167 */
			{	/* Ast/ident.scm 167 */
				obj_t BgL_lociz00_488;

				BgL_lociz00_488 = PROCEDURE_REF(BgL_envz00_487, (int) (((long) 0)));
				{
					obj_t BgL_tidz00_428;

					obj_t BgL_locz00_429;

					{	/* Ast/ident.scm 167 */
						BgL_typez00_bglt BgL_auxz00_717;

						BgL_tidz00_428 = BgL_tidz00_489;
						BgL_locz00_429 = BgL_locz00_490;
						BgL_auxz00_717 =
							BGl_usezd2typezf2importzd2locz12ze0zztype_envz00(BgL_tidz00_428,
							BgL_locz00_429, BgL_lociz00_488);
						return (obj_t) (BgL_auxz00_717);
					}
				}
			}
		}
	}



/* parse-id */
	BGL_EXPORTED_DEF obj_t BGl_parsezd2idzd2zzast_identz00(obj_t BgL_idz00_20,
		obj_t BgL_locz00_21)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 172 */
			return
				BGl_parsezd2idzf2usez20zzast_identz00(BgL_idz00_20, BgL_locz00_21,
				BGl_usezd2typez12zd2envz12zztype_envz00);
		}
	}



/* _parse-id */
	obj_t BGl__parsezd2idzd2zzast_identz00(obj_t BgL_envz00_491,
		obj_t BgL_idz00_492, obj_t BgL_locz00_493)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 172 */
			return BGl_parsezd2idzd2zzast_identz00(BgL_idz00_492, BgL_locz00_493);
		}
	}



/* id->name */
	BGL_EXPORTED_DEF obj_t BGl_idzd2ze3namez31zzast_identz00(obj_t BgL_idz00_22)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 178 */
			{	/* Ast/ident.scm 179 */
				obj_t BgL_namez00_430;

				{	/* Ast/ident.scm 179 */
					obj_t BgL_arg1695z00_431;

					{	/* Ast/ident.scm 179 */
						obj_t BgL_res1712z00_434;

						{	/* Ast/ident.scm 179 */
							obj_t BgL_symbolz00_432;

							BgL_symbolz00_432 = BgL_idz00_22;
							{	/* Ast/ident.scm 179 */
								obj_t BgL_arg2063z00_433;

								BgL_arg2063z00_433 = SYMBOL_TO_STRING(BgL_symbolz00_432);
								BgL_res1712z00_434 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2063z00_433);
							}
						}
						BgL_arg1695z00_431 = BgL_res1712z00_434;
					}
					BgL_namez00_430 =
						BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(BgL_arg1695z00_431);
				}
				return bigloo_mangle(BgL_namez00_430);
			}
		}
	}



/* _id->name */
	obj_t BGl__idzd2ze3namez31zzast_identz00(obj_t BgL_envz00_494,
		obj_t BgL_idz00_495)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 178 */
			return BGl_idzd2ze3namez31zzast_identz00(BgL_idz00_495);
		}
	}



/* local-id->name */
	BGL_EXPORTED_DEF obj_t BGl_localzd2idzd2ze3nameze3zzast_identz00(obj_t
		BgL_idz00_23)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 185 */
			{	/* Ast/ident.scm 186 */
				obj_t BgL_res1714z00_441;

				{	/* Ast/ident.scm 186 */
					obj_t BgL_namez00_436;

					{	/* Ast/ident.scm 186 */
						obj_t BgL_arg1695z00_437;

						{	/* Ast/ident.scm 186 */
							obj_t BgL_res1713z00_440;

							{	/* Ast/ident.scm 186 */
								obj_t BgL_arg2063z00_439;

								BgL_arg2063z00_439 = SYMBOL_TO_STRING(BgL_idz00_23);
								BgL_res1713z00_440 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2063z00_439);
							}
							BgL_arg1695z00_437 = BgL_res1713z00_440;
						}
						BgL_namez00_436 =
							BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(BgL_arg1695z00_437);
					}
					BgL_res1714z00_441 = bigloo_mangle(BgL_namez00_436);
				}
				return BgL_res1714z00_441;
			}
		}
	}



/* _local-id->name */
	obj_t BGl__localzd2idzd2ze3nameze3zzast_identz00(obj_t BgL_envz00_496,
		obj_t BgL_idz00_497)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 185 */
			return BGl_localzd2idzd2ze3nameze3zzast_identz00(BgL_idz00_497);
		}
	}



/* check-id */
	BGL_EXPORTED_DEF obj_t BGl_checkzd2idzd2zzast_identz00(obj_t BgL_idz00_24,
		obj_t BgL_srcz00_25)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 191 */
			{	/* Ast/ident.scm 192 */
				bool_t BgL_testz00_732;

				{	/* Ast/ident.scm 192 */
					obj_t BgL_arg1700z00_282;

					{	/* Ast/ident.scm 192 */
						obj_t BgL_arg1701z00_283;

						BgL_arg1701z00_283 = CAR(BgL_idz00_24);
						{	/* Ast/ident.scm 192 */
							obj_t BgL_res1715z00_445;

							{	/* Ast/ident.scm 192 */
								obj_t BgL_symbolz00_443;

								BgL_symbolz00_443 = BgL_arg1701z00_283;
								{	/* Ast/ident.scm 192 */
									obj_t BgL_arg2063z00_444;

									BgL_arg2063z00_444 = SYMBOL_TO_STRING(BgL_symbolz00_443);
									BgL_res1715z00_445 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2063z00_444);
								}
							}
							BgL_arg1700z00_282 = BgL_res1715z00_445;
						}
					}
					BgL_testz00_732 = (STRING_LENGTH(BgL_arg1700z00_282) == ((long) 0));
				}
				if (BgL_testz00_732)
					{	/* Ast/ident.scm 192 */
						return
							BGl_userzd2errorzd2zztools_errorz00
							(BGl_string1721z00zzast_identz00, BGl_string1722z00zzast_identz00,
							BgL_srcz00_25, BNIL);
					}
				else
					{	/* Ast/ident.scm 192 */
						return BgL_idz00_24;
					}
			}
		}
	}



/* _check-id */
	obj_t BGl__checkzd2idzd2zzast_identz00(obj_t BgL_envz00_498,
		obj_t BgL_idz00_499, obj_t BgL_srcz00_500)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 191 */
			return BGl_checkzd2idzd2zzast_identz00(BgL_idz00_499, BgL_srcz00_500);
		}
	}



/* parse-dsssl */
	BGL_EXPORTED_DEF obj_t BGl_parsezd2dssslzd2zzast_identz00(obj_t BgL_objz00_26)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 199 */
			if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(BgL_objz00_26))
				{	/* Ast/ident.scm 201 */
					return MAKE_PAIR(BgL_objz00_26, BGl_za2objza2z00zztype_cachez00);
				}
			else
				{	/* Ast/ident.scm 201 */
					if (CBOOL(BGl_dssslzd2defaultedzd2formalzf3zf3zztools_dssslz00
							(BgL_objz00_26)))
						{	/* Ast/ident.scm 203 */
							return MAKE_PAIR(BgL_objz00_26, BGl_za2objza2z00zztype_cachez00);
						}
					else
						{	/* Ast/ident.scm 203 */
							return
								BGl_userzd2errorzd2zztools_errorz00
								(BGl_string1727z00zzast_identz00,
								BGl_string1724z00zzast_identz00, BgL_objz00_26, BNIL);
						}
				}
		}
	}



/* _parse-dsssl */
	obj_t BGl__parsezd2dssslzd2zzast_identz00(obj_t BgL_envz00_501,
		obj_t BgL_objz00_502)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 199 */
			return BGl_parsezd2dssslzd2zzast_identz00(BgL_objz00_502);
		}
	}



/* mark-symbol-non-user! */
	BGL_EXPORTED_DEF obj_t
		BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t BgL_symz00_27)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 218 */
			BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_symz00_27,
				CNST_TABLE_REF(((long) 2)), BTRUE);
			return BgL_symz00_27;
		}
	}



/* _mark-symbol-non-user! */
	obj_t BGl__markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t
		BgL_envz00_503, obj_t BgL_symz00_504)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 218 */
			return BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(BgL_symz00_504);
		}
	}



/* user-symbol? */
	BGL_EXPORTED_DEF bool_t BGl_userzd2symbolzf3z21zzast_identz00(obj_t
		BgL_symbolz00_28)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 227 */
			if (CBOOL(BGl_getpropz00zz__r4_symbols_6_4z00(BgL_symbolz00_28,
						CNST_TABLE_REF(((long) 2)))))
				{	/* Ast/ident.scm 228 */
					return ((bool_t) 0);
				}
			else
				{	/* Ast/ident.scm 228 */
					return ((bool_t) 1);
				}
		}
	}



/* _user-symbol? */
	obj_t BGl__userzd2symbolzf3z21zzast_identz00(obj_t BgL_envz00_505,
		obj_t BgL_symbolz00_506)
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 227 */
			return BBOOL(BGl_userzd2symbolzf3z21zzast_identz00(BgL_symbolz00_506));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_identz00()
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_identz00()
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_identz00()
	{
		AN_OBJECT;
		{	/* Ast/ident.scm 14 */
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string1728z00zzast_identz00));
			BGl_modulezd2initializa7ationz75zztools_dssslz00(((long) 315398661),
				BSTRING_TO_STRING(BGl_string1728z00zzast_identz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string1728z00zzast_identz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string1728z00zzast_identz00));
			return
				BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string1728z00zzast_identz00));
		}
	}

#ifdef __cplusplus
}
#endif
