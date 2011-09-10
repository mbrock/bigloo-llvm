/*===========================================================================*/
/*   (Type/cache.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Type/cache.scm)*/
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


	BGL_EXPORTED_DEF obj_t BGl_za2charza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2pairzd2nilza2zd2zztype_cachez00 = BUNSPEC;
	static obj_t BGl__getzd2defaultzd2czd2typezd2zztype_cachez00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_getzd2objectzd2typez00zztype_cachez00();
	extern bool_t BGl_typezd2existszf3z21zztype_envz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2procedurezd2el1za2zd2zztype_cachez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zztype_cachez00();
	BGL_EXPORTED_DEF obj_t BGl_za2symbolza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_getzd2defaultzd2czd2typezd2zztype_cachez00();
	BGL_EXPORTED_DEF obj_t BGl_za2_za2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2elongza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2procedureza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2voidza2z00zztype_cachez00 = BUNSPEC;
	extern obj_t BGl_typez00zztype_typez00;
	BGL_EXPORTED_DEF obj_t BGl_za2bboolza2z00zztype_cachez00 = BUNSPEC;
	static obj_t BGl__getzd2objectzd2typez00zztype_cachez00(obj_t);
	static obj_t BGl_cnstzd2initzd2zztype_cachez00();
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_getzd2defaultzd2typez00zztype_cachez00();
	BGL_EXPORTED_DEF obj_t BGl_za2bintza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bignumza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2unspecza2z00zztype_cachez00 = BUNSPEC;
	static obj_t BGl_importedzd2moduleszd2initz00zztype_cachez00();
	BGL_EXPORTED_DEF obj_t BGl_za2ucs2stringza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bnilza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2procedurezd2elza2zd2zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2keywordza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bllongza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zztype_cachez00();
	BGL_EXPORTED_DEF obj_t BGl_za2bstringza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2structza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2brealza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2epairza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2longza2z00zztype_cachez00 = BUNSPEC;
	extern BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2intza2z00zztype_cachez00 = BUNSPEC;
	extern BgL_typez00_bglt BGl_usezd2typez12zc0zztype_envz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2vectorza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bcharza2z00zztype_cachez00 = BUNSPEC;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_EXPORTED_DEF obj_t BGl_za2boolza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2defaultzd2typez12z12zztype_cachez00(BgL_typez00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_za2cellza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2stringza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_installzd2typezd2cachez12z12zztype_cachez00();
	static obj_t BGl__installzd2typezd2cachez12z12zztype_cachez00(obj_t);
	static obj_t BGl__getzd2defaultzd2typez00zztype_cachez00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2belongza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2objza2z00zztype_cachez00 = BUNSPEC;
	static obj_t BGl__setzd2defaultzd2typez12z12zztype_cachez00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2exitza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2llongza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2magicza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2realza2z00zztype_cachez00 = BUNSPEC;
	static obj_t BGl_za2defaultzd2typeza2zd2zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2pairza2z00zztype_cachez00 = BUNSPEC;
	static obj_t BGl_libraryzd2moduleszd2initz00zztype_cachez00();
	static obj_t BGl_za2objectza2z00zztype_cachez00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zztype_cachez00();
	BGL_EXPORTED_DEF obj_t BGl_za2cobjza2z00zztype_cachez00 = BUNSPEC;
	static obj_t __cnst[38];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_installzd2typezd2cachez12zd2envzc0zztype_cachez00,
		BgL_bgl__installza7d2typeza71607z00,
		BGl__installzd2typezd2cachez12z12zztype_cachez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2objectzd2typezd2envzd2zztype_cachez00,
		BgL_bgl__getza7d2objectza7d21608z00,
		BGl__getzd2objectzd2typez00zztype_cachez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2defaultzd2czd2typezd2envz00zztype_cachez00,
		BgL_bgl__getza7d2defaultza7d1609z00,
		BGl__getzd2defaultzd2czd2typezd2zztype_cachez00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1603z00zztype_cachez00,
		BgL_bgl_string1603za700za7za7t1610za7, "type_cache", 10);
	      DEFINE_STRING(BGl_string1604z00zztype_cachez00,
		BgL_bgl_string1604za700za7za7t1611za7,
		"_ object exit unspecified procedure-el1 procedure-el procedure struct vector keyword symbol ucs2string bstring string nil pair-nil epair pair bchar uchar bignum real double bbool bool bllong llong belong elong long int bint void magic cell cobj obj no-type-yet ",
		261);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2defaultzd2typez12zd2envzc0zztype_cachez00,
		BgL_bgl__setza7d2defaultza7d1612z00,
		BGl__setzd2defaultzd2typez12z12zztype_cachez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2defaultzd2typezd2envzd2zztype_cachez00,
		BgL_bgl__getza7d2defaultza7d1613z00,
		BGl__getzd2defaultzd2typez00zztype_cachez00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long
		BgL_checksumz00_181, char *BgL_fromz00_182)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztype_cachez00))
				{
					BGl_requirezd2initializa7ationz75zztype_cachez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zztype_cachez00();
					BGl_cnstzd2initzd2zztype_cachez00();
					BGl_importedzd2moduleszd2initz00zztype_cachez00();
					BGl_toplevelzd2initzd2zztype_cachez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztype_cachez00()
	{
		AN_OBJECT;
		{	/* Type/cache.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "type_cache");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "type_cache");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztype_cachez00()
	{
		AN_OBJECT;
		{	/* Type/cache.scm 15 */
			{	/* Type/cache.scm 15 */
				obj_t BgL_cportz00_173;

				BgL_cportz00_173 =
					bgl_open_input_string(BGl_string1604z00zztype_cachez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_174;

					BgL_iz00_174 = ((long) 37);
				BgL_loopz00_175:
					if ((BgL_iz00_174 == ((long) -1)))
						{	/* Type/cache.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Type/cache.scm 15 */
							{	/* Type/cache.scm 15 */
								obj_t BgL_arg1606z00_177;

								{	/* Type/cache.scm 15 */

									{	/* Type/cache.scm 15 */
										obj_t BgL_locationz00_179;

										BgL_locationz00_179 = BBOOL(((bool_t) 0));
										{	/* Type/cache.scm 15 */

											BgL_arg1606z00_177 =
												BGl_readz00zz__readerz00(BgL_cportz00_173,
												BgL_locationz00_179);
										}
									}
								}
								{	/* Type/cache.scm 15 */
									int BgL_auxz00_198;

									BgL_auxz00_198 = (int) (BgL_iz00_174);
									CNST_TABLE_SET(BgL_auxz00_198, BgL_arg1606z00_177);
							}}
							{	/* Type/cache.scm 15 */
								int BgL_auxz00_180;

								BgL_auxz00_180 = (int) ((BgL_iz00_174 - ((long) 1)));
								{
									long BgL_iz00_203;

									BgL_iz00_203 = (long) (BgL_auxz00_180);
									BgL_iz00_174 = BgL_iz00_203;
									goto BgL_loopz00_175;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztype_cachez00()
	{
		AN_OBJECT;
		{	/* Type/cache.scm 15 */
			BGl_za2objza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2cobjza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2cellza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2magicza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2voidza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2bintza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2intza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2longza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2llongza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2bllongza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2elongza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2belongza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2boolza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2bboolza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2realza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2brealza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2bignumza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2charza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2bcharza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2stringza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2bstringza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2ucs2stringza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2symbolza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2keywordza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2pairza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2epairza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2pairzd2nilza2zd2zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2bnilza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2vectorza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2structza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2procedureza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2procedurezd2elza2zd2zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2procedurezd2el1za2zd2zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2unspecza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2exitza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2objectza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2_za2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			return (BGl_za2defaultzd2typeza2zd2zztype_cachez00 =
				CNST_TABLE_REF(((long) 0)), BUNSPEC);
		}
	}



/* install-type-cache! */
	BGL_EXPORTED_DEF obj_t BGl_installzd2typezd2cachez12z12zztype_cachez00()
	{
		AN_OBJECT;
		{	/* Type/cache.scm 63 */
			BGl_za2objza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 1)),
					BFALSE));
			BGl_za2cobjza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 2)),
					BFALSE));
			BGl_za2cellza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 3)),
					BFALSE));
			BGl_za2magicza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 4)),
					BFALSE));
			BGl_za2voidza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 5)),
					BFALSE));
			BGl_za2bintza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 6)),
					BFALSE));
			BGl_za2intza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 7)),
					BFALSE));
			BGl_za2longza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 8)),
					BFALSE));
			BGl_za2elongza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 9)),
					BFALSE));
			BGl_za2belongza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 10)),
					BFALSE));
			BGl_za2llongza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 11)),
					BFALSE));
			BGl_za2bllongza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 12)),
					BFALSE));
			BGl_za2boolza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 13)),
					BFALSE));
			BGl_za2bboolza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 14)),
					BFALSE));
			BGl_za2realza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 15)),
					BFALSE));
			BGl_za2brealza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 16)),
					BFALSE));
			BGl_za2bignumza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 17)),
					BFALSE));
			BGl_za2charza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 18)),
					BFALSE));
			BGl_za2bcharza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 19)),
					BFALSE));
			BGl_za2pairza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 20)),
					BFALSE));
			BGl_za2epairza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 21)),
					BFALSE));
			BGl_za2pairzd2nilza2zd2zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 22)),
					BFALSE));
			BGl_za2bnilza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 23)),
					BFALSE));
			BGl_za2stringza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 24)),
					BFALSE));
			BGl_za2bstringza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 25)),
					BFALSE));
			BGl_za2ucs2stringza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 26)),
					BFALSE));
			BGl_za2symbolza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 27)),
					BFALSE));
			BGl_za2keywordza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 28)),
					BFALSE));
			BGl_za2vectorza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 29)),
					BFALSE));
			BGl_za2structza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 30)),
					BFALSE));
			BGl_za2procedureza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 31)),
					BFALSE));
			BGl_za2procedurezd2elza2zd2zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 32)),
					BFALSE));
			BGl_za2procedurezd2el1za2zd2zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 33)),
					BFALSE));
			BGl_za2unspecza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 34)),
					BFALSE));
			BGl_za2exitza2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 35)),
					BFALSE));
			if (BGl_typezd2existszf3z21zztype_envz00(CNST_TABLE_REF(((long) 36))))
				{	/* Type/cache.scm 99 */
					BGl_za2objectza2z00zztype_cachez00 =
						(obj_t) (BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long)
									36))));
				}
			else
				{	/* Type/cache.scm 99 */
					BGl_za2objectza2z00zztype_cachez00 = BFALSE;
				}
			BGl_za2_za2z00zztype_cachez00 =
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 37)),
					BFALSE));
			return (BGl_za2defaultzd2typeza2zd2zztype_cachez00 =
				BGl_za2_za2z00zztype_cachez00, BUNSPEC);
		}
	}



/* _install-type-cache! */
	obj_t BGl__installzd2typezd2cachez12z12zztype_cachez00(obj_t BgL_envz00_167)
	{
		AN_OBJECT;
		{	/* Type/cache.scm 63 */
			return BGl_installzd2typezd2cachez12z12zztype_cachez00();
		}
	}



/* get-default-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_getzd2defaultzd2typez00zztype_cachez00()
	{
		AN_OBJECT;
		{	/* Type/cache.scm 154 */
			return (BgL_typez00_bglt) (BGl_za2defaultzd2typeza2zd2zztype_cachez00);
		}
	}



/* _get-default-type */
	obj_t BGl__getzd2defaultzd2typez00zztype_cachez00(obj_t BgL_envz00_168)
	{
		AN_OBJECT;
		{	/* Type/cache.scm 154 */
			return (obj_t) (BGl_getzd2defaultzd2typez00zztype_cachez00());
		}
	}



/* set-default-type! */
	BGL_EXPORTED_DEF obj_t
		BGl_setzd2defaultzd2typez12z12zztype_cachez00(BgL_typez00_bglt
		BgL_typez00_1)
	{
		AN_OBJECT;
		{	/* Type/cache.scm 160 */
			return (BGl_za2defaultzd2typeza2zd2zztype_cachez00 =
				(obj_t) (BgL_typez00_1), BUNSPEC);
		}
	}



/* _set-default-type! */
	obj_t BGl__setzd2defaultzd2typez12z12zztype_cachez00(obj_t BgL_envz00_169,
		obj_t BgL_typez00_170)
	{
		AN_OBJECT;
		{	/* Type/cache.scm 160 */
			return
				BGl_setzd2defaultzd2typez12z12zztype_cachez00(
				(BgL_typez00_bglt) (BgL_typez00_170));
		}
	}



/* get-object-type */
	BGL_EXPORTED_DEF obj_t BGl_getzd2objectzd2typez00zztype_cachez00()
	{
		AN_OBJECT;
		{	/* Type/cache.scm 166 */
			{	/* Type/cache.scm 168 */
				bool_t BgL_testz00_364;

				{	/* Type/cache.scm 168 */
					obj_t BgL_obj1599z00_166;

					BgL_obj1599z00_166 = BGl_za2objectza2z00zztype_cachez00;
					BgL_testz00_364 =
						BGl_iszd2azf3z21zz__objectz00(BgL_obj1599z00_166,
						BGl_typez00zztype_typez00);
				}
				if (BgL_testz00_364)
					{	/* Type/cache.scm 168 */
						return BGl_za2objectza2z00zztype_cachez00;
					}
				else
					{	/* Type/cache.scm 168 */
						BGl_za2objectza2z00zztype_cachez00 =
							(obj_t) (BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long)
										36))));
						return BGl_za2objectza2z00zztype_cachez00;
					}
			}
		}
	}



/* _get-object-type */
	obj_t BGl__getzd2objectzd2typez00zztype_cachez00(obj_t BgL_envz00_171)
	{
		AN_OBJECT;
		{	/* Type/cache.scm 166 */
			return BGl_getzd2objectzd2typez00zztype_cachez00();
		}
	}



/* get-default-c-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_getzd2defaultzd2czd2typezd2zztype_cachez00()
	{
		AN_OBJECT;
		{	/* Type/cache.scm 179 */
			return (BgL_typez00_bglt) (BGl_za2intza2z00zztype_cachez00);
		}
	}



/* _get-default-c-type */
	obj_t BGl__getzd2defaultzd2czd2typezd2zztype_cachez00(obj_t BgL_envz00_172)
	{
		AN_OBJECT;
		{	/* Type/cache.scm 179 */
			return (obj_t) (BGl_getzd2defaultzd2czd2typezd2zztype_cachez00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztype_cachez00()
	{
		AN_OBJECT;
		{	/* Type/cache.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztype_cachez00()
	{
		AN_OBJECT;
		{	/* Type/cache.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztype_cachez00()
	{
		AN_OBJECT;
		{	/* Type/cache.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string1603z00zztype_cachez00));
			return
				BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string1603z00zztype_cachez00));
		}
	}

#ifdef __cplusplus
}
#endif
