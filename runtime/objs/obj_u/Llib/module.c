/*===========================================================================*/
/*   (Llib/module.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Llib/module.scm -indent -o objs/obj_u/Llib/module.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl__modulezd2loadzd2accesszd2filezd2zz__modulez00(obj_t, obj_t);
	extern bool_t bigloo_strcmp(obj_t, obj_t);
	static obj_t BGl_moduleszd2mutexzd2zz__modulez00 = BUNSPEC;
	static obj_t BGl__modulezd2abasezd2zz__modulez00(obj_t);
	extern obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__modulez00 = BUNSPEC;
	static obj_t BGl__modulezd2readzd2accesszd2filezd2zz__modulez00(obj_t, obj_t);
	static obj_t BGl_z52bigloozd2modulezd2resolverz52zz__modulez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__modulez00();
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2loadzd2accesszd2filezd2zz__modulez00(obj_t);
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	extern bool_t fexists(char *);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2abasezd2zz__modulez00();
	static obj_t BGl_zc3anonymousza31883ze3z83zz__modulez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2readzd2accesszd2filezd2zz__modulez00(obj_t);
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_mapz12z12zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31887ze3z83zz__modulez00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__modulez00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__modulez00();
	static obj_t BGl_resolvezd2abasezf2bucketz20zz__modulez00(obj_t, obj_t);
	extern obj_t BGl_withzd2lockzd2zz__threadz00(obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2241z00zz__modulez00 = BUNSPEC;
	static obj_t BGl_symbol2248z00zz__modulez00 = BUNSPEC;
	static obj_t BGl_symbol2261z00zz__modulez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__modulez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zz__modulez00();
	static obj_t BGl__modulezd2defaultzd2resolverz00zz__modulez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__modulezd2addzd2accessz12z12zz__modulez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__bigloozd2modulezd2resolverz00zz__modulez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_bigloozd2modulezd2resolverz00zz__modulez00();
	BGL_EXPORTED_DECL obj_t BGl_modulezd2abasezd2setz12z12zz__modulez00(obj_t);
	static obj_t BGl_resolvezd2abaseza2z70zz__modulez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2addzd2accessz12z12zz__modulez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_filterz00zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl__bigloozd2modulezd2resolverzd2setz12zc0zz__modulez00(obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza31945ze3z83zz__modulez00(obj_t, obj_t);
	static obj_t BGl_modulezd2defaultzd2resolverz00zz__modulez00(obj_t, obj_t);
	extern obj_t BGl_callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza31957ze3z83zz__modulez00(obj_t, obj_t);
	extern obj_t BGl_filezd2separatorzd2zz__osz00();
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__modulezd2abasezd2setz12z12zz__modulez00(obj_t, obj_t);
	extern obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_dirnamez00zz__osz00(obj_t);
	static obj_t BGl_zc3anonymousza31965ze3z83zz__modulez00(obj_t, obj_t);
	extern obj_t BGl_warningz00zz__errorz00(obj_t);
	extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2modulezd2resolverzd2setz12zc0zz__modulez00(obj_t);
	static obj_t BGl_afilezd2tablezd2zz__modulez00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zz__modulez00();
	static obj_t BGl_modulezd2addzd2accesszd2innerz12zc0zz__modulez00(obj_t,
		obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2modulezd2resolverzd2setz12zd2envz12zz__modulez00,
		BgL_bgl__biglooza7d2module2268za7,
		BGl__bigloozd2modulezd2resolverzd2setz12zc0zz__modulez00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_modulezd2defaultzd2resolverzd2envzd2zz__modulez00,
		BgL_bgl__moduleza7d2defaul2269za7,
		BGl__modulezd2defaultzd2resolverz00zz__modulez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_modulezd2addzd2accessz12zd2envzc0zz__modulez00,
		BgL_bgl__moduleza7d2addza7d22270z00,
		BGl__modulezd2addzd2accessz12z12zz__modulez00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_modulezd2abasezd2envz00zz__modulez00,
		BgL_bgl__moduleza7d2abaseza72271z00, BGl__modulezd2abasezd2zz__modulez00,
		0L, BUNSPEC, 0);
	extern obj_t BGl_stringzf3zd2envz21zz__r4_strings_6_7z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_modulezd2abasezd2setz12zd2envzc0zz__modulez00,
		BgL_bgl__moduleza7d2abaseza72272z00,
		BGl__modulezd2abasezd2setz12z12zz__modulez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2258z00zz__modulez00,
		BgL_bgl_za7c3anonymousza7a312273z00,
		BGl_zc3anonymousza31945ze3z83zz__modulez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_modulezd2readzd2accesszd2filezd2envz00zz__modulez00,
		BgL_bgl__moduleza7d2readza7d2274z00,
		BGl__modulezd2readzd2accesszd2filezd2zz__modulez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2modulezd2resolverzd2envzd2zz__modulez00,
		BgL_bgl__biglooza7d2module2275za7,
		BGl__bigloozd2modulezd2resolverz00zz__modulez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_modulezd2loadzd2accesszd2filezd2envz00zz__modulez00,
		BgL_bgl__moduleza7d2loadza7d2276z00,
		BGl__modulezd2loadzd2accesszd2filezd2zz__modulez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2237z00zz__modulez00,
		BgL_bgl_string2237za700za7za7_2277za7, "modules", 7);
	      DEFINE_STRING(BGl_string2238z00zz__modulez00,
		BgL_bgl_string2238za700za7za7_2278za7,
		"/tmp/bigloo/runtime/Llib/module.scm", 35);
	      DEFINE_STRING(BGl_string2240z00zz__modulez00,
		BgL_bgl_string2240za700za7za7_2279za7, "procedure", 9);
	      DEFINE_STRING(BGl_string2239z00zz__modulez00,
		BgL_bgl_string2239za700za7za7_2280za7, "_bigloo-module-resolver-set!", 28);
	      DEFINE_STRING(BGl_string2242z00zz__modulez00,
		BgL_bgl_string2242za700za7za7_2281za7, "bigloo-module-resolver-set!", 27);
	      DEFINE_STRING(BGl_string2243z00zz__modulez00,
		BgL_bgl_string2243za700za7za7_2282za7, "Illegal resolver", 16);
	      DEFINE_STRING(BGl_string2244z00zz__modulez00,
		BgL_bgl_string2244za700za7za7_2283za7, "_module-default-resolver", 24);
	      DEFINE_STRING(BGl_string2245z00zz__modulez00,
		BgL_bgl_string2245za700za7za7_2284za7, "symbol", 6);
	      DEFINE_STRING(BGl_string2246z00zz__modulez00,
		BgL_bgl_string2246za700za7za7_2285za7, ".", 1);
	      DEFINE_STRING(BGl_string2247z00zz__modulez00,
		BgL_bgl_string2247za700za7za7_2286za7, ".scm", 4);
	      DEFINE_STRING(BGl_string2250z00zz__modulez00,
		BgL_bgl_string2250za700za7za7_2287za7, "\"", 1);
	      DEFINE_STRING(BGl_string2249z00zz__modulez00,
		BgL_bgl_string2249za700za7za7_2288za7, "add-access!", 11);
	      DEFINE_STRING(BGl_string2251z00zz__modulez00,
		BgL_bgl_string2251za700za7za7_2289za7, "] for directory \"", 17);
	      DEFINE_STRING(BGl_string2252z00zz__modulez00,
		BgL_bgl_string2252za700za7za7_2290za7, " ", 1);
	      DEFINE_STRING(BGl_string2253z00zz__modulez00,
		BgL_bgl_string2253za700za7za7_2291za7, " [", 2);
	      DEFINE_STRING(BGl_string2254z00zz__modulez00,
		BgL_bgl_string2254za700za7za7_2292za7, "access redefinition -- ", 23);
	      DEFINE_STRING(BGl_string2255z00zz__modulez00,
		BgL_bgl_string2255za700za7za7_2293za7, "_module-add-access!", 19);
	      DEFINE_STRING(BGl_string2256z00zz__modulez00,
		BgL_bgl_string2256za700za7za7_2294za7, "pair", 4);
	      DEFINE_STRING(BGl_string2257z00zz__modulez00,
		BgL_bgl_string2257za700za7za7_2295za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2260z00zz__modulez00,
		BgL_bgl_string2260za700za7za7_2296za7, "input-port", 10);
	      DEFINE_STRING(BGl_string2259z00zz__modulez00,
		BgL_bgl_string2259za700za7za7_2297za7, "_module-read-access-file", 24);
	      DEFINE_STRING(BGl_string2262z00zz__modulez00,
		BgL_bgl_string2262za700za7za7_2298za7, "module-read-access-file", 23);
	      DEFINE_STRING(BGl_string2263z00zz__modulez00,
		BgL_bgl_string2263za700za7za7_2299za7, "Illegal entry -- ", 17);
	      DEFINE_STRING(BGl_string2264z00zz__modulez00,
		BgL_bgl_string2264za700za7za7_2300za7, "_module-load-access-file", 24);
	      DEFINE_STRING(BGl_string2265z00zz__modulez00,
		BgL_bgl_string2265za700za7za7_2301za7, "", 0);
	      DEFINE_STRING(BGl_string2266z00zz__modulez00,
		BgL_bgl_string2266za700za7za7_2302za7, "__module", 8);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__modulez00(long
		BgL_checksumz00_1635, char *BgL_fromz00_1636)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__modulez00))
				{
					BGl_requirezd2initializa7ationz75zz__modulez00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__modulez00();
					BGl_importedzd2moduleszd2initz00zz__modulez00();
					BGl_toplevelzd2initzd2zz__modulez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__modulez00()
	{
		AN_OBJECT;
		{	/* Llib/module.scm 17 */
			BGl_symbol2241z00zz__modulez00 =
				bstring_to_symbol(BGl_string2242z00zz__modulez00);
			BGl_symbol2248z00zz__modulez00 =
				bstring_to_symbol(BGl_string2249z00zz__modulez00);
			return (BGl_symbol2261z00zz__modulez00 =
				bstring_to_symbol(BGl_string2262z00zz__modulez00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__modulez00()
	{
		AN_OBJECT;
		{	/* Llib/module.scm 17 */
			BGl_moduleszd2mutexzd2zz__modulez00 =
				bgl_make_mutex(BGl_string2237z00zz__modulez00);
			BGl_afilezd2tablezd2zz__modulez00 = BNIL;
			return (BGl_z52bigloozd2modulezd2resolverz52zz__modulez00 =
				BGl_modulezd2defaultzd2resolverzd2envzd2zz__modulez00, BUNSPEC);
		}
	}



/* module-abase */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2abasezd2zz__modulez00()
	{
		AN_OBJECT;
		{	/* Llib/module.scm 73 */
			return BGL_ABASE();
		}
	}



/* _module-abase */
	obj_t BGl__modulezd2abasezd2zz__modulez00(obj_t BgL_envz00_1585)
	{
		AN_OBJECT;
		{	/* Llib/module.scm 73 */
			return BGL_ABASE();
		}
	}



/* module-abase-set! */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2abasezd2setz12z12zz__modulez00(obj_t
		BgL_valz00_1)
	{
		AN_OBJECT;
		{	/* Llib/module.scm 76 */
			return BGL_ABASE_SET(BgL_valz00_1);
		}
	}



/* _module-abase-set! */
	obj_t BGl__modulezd2abasezd2setz12z12zz__modulez00(obj_t BgL_envz00_1586,
		obj_t BgL_valz00_1587)
	{
		AN_OBJECT;
		{	/* Llib/module.scm 76 */
			return BGL_ABASE_SET(BgL_valz00_1587);
		}
	}



/* bigloo-module-resolver */
	BGL_EXPORTED_DEF obj_t BGl_bigloozd2modulezd2resolverz00zz__modulez00()
	{
		AN_OBJECT;
		{	/* Llib/module.scm 89 */
			return BGl_z52bigloozd2modulezd2resolverz52zz__modulez00;
		}
	}



/* _bigloo-module-resolver */
	obj_t BGl__bigloozd2modulezd2resolverz00zz__modulez00(obj_t BgL_envz00_1588)
	{
		AN_OBJECT;
		{	/* Llib/module.scm 89 */
			return BGl_z52bigloozd2modulezd2resolverz52zz__modulez00;
		}
	}



/* bigloo-module-resolver-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2modulezd2resolverzd2setz12zc0zz__modulez00(obj_t
		BgL_resolvez00_2)
	{
		AN_OBJECT;
		{	/* Llib/module.scm 92 */
			{	/* Llib/module.scm 95 */
				obj_t BgL_zc3anonymousza31883ze3z83_1589;

				BgL_zc3anonymousza31883ze3z83_1589 =
					make_fx_procedure(BGl_zc3anonymousza31883ze3z83zz__modulez00,
					(int) (((long) 0)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3anonymousza31883ze3z83_1589,
					(int) (((long) 0)), BgL_resolvez00_2);
				return
					BGl_withzd2lockzd2zz__threadz00(BGl_moduleszd2mutexzd2zz__modulez00,
					BgL_zc3anonymousza31883ze3z83_1589);
			}
		}
	}



/* _bigloo-module-resolver-set! */
	obj_t BGl__bigloozd2modulezd2resolverzd2setz12zc0zz__modulez00(obj_t
		BgL_envz00_1590, obj_t BgL_resolvez00_1591)
	{
		AN_OBJECT;
		{	/* Llib/module.scm 92 */
			{	/* Llib/module.scm 95 */
				obj_t BgL_auxz00_1657;

				if (PROCEDUREP(BgL_resolvez00_1591))
					{	/* Llib/module.scm 95 */
						BgL_auxz00_1657 = BgL_resolvez00_1591;
					}
				else
					{
						obj_t BgL_auxz00_1660;

						BgL_auxz00_1660 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2238z00zz__modulez00,
							BINT(((long) 3552)), BGl_string2239z00zz__modulez00,
							BGl_string2240z00zz__modulez00, BgL_resolvez00_1591);
						FAILURE(BgL_auxz00_1660, BFALSE, BFALSE);
					}
				return
					BGl_bigloozd2modulezd2resolverzd2setz12zc0zz__modulez00
					(BgL_auxz00_1657);
			}
		}
	}



/* <anonymous:1883> */
	obj_t BGl_zc3anonymousza31883ze3z83zz__modulez00(obj_t BgL_envz00_1592)
	{
		AN_OBJECT;
		{	/* Llib/module.scm 94 */
			{	/* Llib/module.scm 95 */
				obj_t BgL_resolvez00_1593;

				BgL_resolvez00_1593 =
					PROCEDURE_REF(BgL_envz00_1592, (int) (((long) 0)));
				{

					{	/* Llib/module.scm 95 */
						bool_t BgL_testz00_1667;

						if (PROCEDUREP(BgL_resolvez00_1593))
							{	/* Llib/module.scm 95 */
								BgL_testz00_1667 =
									PROCEDURE_CORRECT_ARITYP(BgL_resolvez00_1593,
									(int) (((long) 2)));
							}
						else
							{	/* Llib/module.scm 95 */
								BgL_testz00_1667 = ((bool_t) 0);
							}
						if (BgL_testz00_1667)
							{	/* Llib/module.scm 95 */
								return (BGl_z52bigloozd2modulezd2resolverz52zz__modulez00 =
									BgL_resolvez00_1593, BUNSPEC);
							}
						else
							{	/* Llib/module.scm 95 */
								return
									BGl_errorz00zz__errorz00(BGl_symbol2241z00zz__modulez00,
									BGl_string2243z00zz__modulez00, BgL_resolvez00_1593);
							}
					}
				}
			}
		}
	}



/* module-default-resolver */
	obj_t BGl_modulezd2defaultzd2resolverz00zz__modulez00(obj_t BgL_modz00_3,
		obj_t BgL_abasez00_4)
	{
		AN_OBJECT;
		{	/* Llib/module.scm 105 */
			{	/* Llib/module.scm 109 */
				obj_t BgL_zc3anonymousza31887ze3z83_1594;

				BgL_zc3anonymousza31887ze3z83_1594 =
					make_fx_procedure(BGl_zc3anonymousza31887ze3z83zz__modulez00,
					(int) (((long) 0)), (int) (((long) 2)));
				PROCEDURE_SET(BgL_zc3anonymousza31887ze3z83_1594,
					(int) (((long) 0)), BgL_modz00_3);
				PROCEDURE_SET(BgL_zc3anonymousza31887ze3z83_1594,
					(int) (((long) 1)), BgL_abasez00_4);
				return
					BGl_withzd2lockzd2zz__threadz00(BGl_moduleszd2mutexzd2zz__modulez00,
					BgL_zc3anonymousza31887ze3z83_1594);
			}
		}
	}



/* _module-default-resolver */
	obj_t BGl__modulezd2defaultzd2resolverz00zz__modulez00(obj_t BgL_envz00_1582,
		obj_t BgL_modz00_1583, obj_t BgL_abasez00_1584)
	{
		AN_OBJECT;
		{	/* Llib/module.scm 105 */
			{	/* Llib/module.scm 109 */
				obj_t BgL_auxz00_1681;

				if (SYMBOLP(BgL_modz00_1583))
					{	/* Llib/module.scm 109 */
						BgL_auxz00_1681 = BgL_modz00_1583;
					}
				else
					{
						obj_t BgL_auxz00_1684;

						BgL_auxz00_1684 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2238z00zz__modulez00,
							BINT(((long) 4285)), BGl_string2244z00zz__modulez00,
							BGl_string2245z00zz__modulez00, BgL_modz00_1583);
						FAILURE(BgL_auxz00_1684, BFALSE, BFALSE);
					}
				return
					BGl_modulezd2defaultzd2resolverz00zz__modulez00(BgL_auxz00_1681,
					BgL_abasez00_1584);
			}
		}
	}



/* <anonymous:1887> */
	obj_t BGl_zc3anonymousza31887ze3z83zz__modulez00(obj_t BgL_envz00_1595)
	{
		AN_OBJECT;
		{	/* Llib/module.scm 107 */
			{	/* Llib/module.scm 109 */
				obj_t BgL_modz00_1596;

				obj_t BgL_abasez00_1597;

				BgL_modz00_1596 = PROCEDURE_REF(BgL_envz00_1595, (int) (((long) 0)));
				BgL_abasez00_1597 = PROCEDURE_REF(BgL_envz00_1595, (int) (((long) 1)));
				{

					if (NULLP(BgL_abasez00_1597))
						{	/* Llib/module.scm 110 */
							obj_t BgL_basez00_1342;

							BgL_basez00_1342 =
								BGl_assocz00zz__r4_pairs_and_lists_6_3z00
								(BGl_string2246z00zz__modulez00,
								BGl_afilezd2tablezd2zz__modulez00);
							if (PAIRP(BgL_basez00_1342))
								{	/* Llib/module.scm 110 */
									return
										BGl_resolvezd2abasezf2bucketz20zz__modulez00
										(BgL_modz00_1596, BgL_basez00_1342);
								}
							else
								{	/* Llib/module.scm 110 */
									return BNIL;
								}
						}
					else
						{	/* Llib/module.scm 109 */
							if (STRINGP(BgL_abasez00_1597))
								{	/* Llib/module.scm 112 */
									obj_t BgL_basez00_1348;

									BgL_basez00_1348 =
										BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_abasez00_1597,
										BGl_afilezd2tablezd2zz__modulez00);
									if (PAIRP(BgL_basez00_1348))
										{	/* Llib/module.scm 112 */
											return
												BGl_resolvezd2abasezf2bucketz20zz__modulez00
												(BgL_modz00_1596, BgL_basez00_1348);
										}
									else
										{	/* Llib/module.scm 112 */
											return BNIL;
										}
								}
							else
								{	/* Llib/module.scm 111 */
									if (PAIRP(BgL_abasez00_1597))
										{
											obj_t BgL_abasez00_800;

											BgL_abasez00_800 = BgL_abasez00_1597;
										BgL_zc3anonymousza31891ze3z83_801:
											if (PAIRP(BgL_abasez00_800))
												{	/* Llib/module.scm 116 */
													obj_t BgL_resolvez00_803;

													{	/* Llib/module.scm 116 */
														obj_t BgL_arg1895z00_806;

														BgL_arg1895z00_806 = CAR(BgL_abasez00_800);
														{	/* Llib/module.scm 116 */
															obj_t BgL_basez00_1356;

															BgL_basez00_1356 =
																BGl_assocz00zz__r4_pairs_and_lists_6_3z00
																(BgL_arg1895z00_806,
																BGl_afilezd2tablezd2zz__modulez00);
															if (PAIRP(BgL_basez00_1356))
																{	/* Llib/module.scm 116 */
																	BgL_resolvez00_803 =
																		BGl_resolvezd2abasezf2bucketz20zz__modulez00
																		(BgL_modz00_1596, BgL_basez00_1356);
																}
															else
																{	/* Llib/module.scm 116 */
																	BgL_resolvez00_803 = BNIL;
																}
														}
													}
													if (PAIRP(BgL_resolvez00_803))
														{	/* Llib/module.scm 117 */
															return BgL_resolvez00_803;
														}
													else
														{
															obj_t BgL_abasez00_1716;

															BgL_abasez00_1716 = CDR(BgL_abasez00_800);
															BgL_abasez00_800 = BgL_abasez00_1716;
															goto BgL_zc3anonymousza31891ze3z83_801;
														}
												}
											else
												{	/* Llib/module.scm 115 */
													return BNIL;
												}
										}
									else
										{	/* Llib/module.scm 113 */
											return
												BGl_resolvezd2abaseza2z70zz__modulez00(BgL_modz00_1596);
										}
								}
						}
				}
			}
		}
	}



/* resolve-abase* */
	obj_t BGl_resolvezd2abaseza2z70zz__modulez00(obj_t BgL_modz00_5)
	{
		AN_OBJECT;
		{	/* Llib/module.scm 127 */
			{
				obj_t BgL_afilez00_810;

				BgL_afilez00_810 = BGl_afilezd2tablezd2zz__modulez00;
			BgL_zc3anonymousza31896ze3z83_811:
				if (NULLP(BgL_afilez00_810))
					{	/* Llib/module.scm 129 */
						return BNIL;
					}
				else
					{	/* Llib/module.scm 131 */
						obj_t BgL_fz00_813;

						BgL_fz00_813 =
							BGl_resolvezd2abasezf2bucketz20zz__modulez00(BgL_modz00_5,
							CAR(BgL_afilez00_810));
						if (PAIRP(BgL_fz00_813))
							{	/* Llib/module.scm 132 */
								return BgL_fz00_813;
							}
						else
							{
								obj_t BgL_afilez00_1725;

								BgL_afilez00_1725 = CDR(BgL_afilez00_810);
								BgL_afilez00_810 = BgL_afilez00_1725;
								goto BgL_zc3anonymousza31896ze3z83_811;
							}
					}
			}
		}
	}



/* resolve-abase/bucket */
	obj_t BGl_resolvezd2abasezf2bucketz20zz__modulez00(obj_t BgL_modz00_8,
		obj_t BgL_basez00_9)
	{
		AN_OBJECT;
		{	/* Llib/module.scm 148 */
			{	/* Llib/module.scm 149 */
				obj_t BgL_cellz00_820;

				BgL_cellz00_820 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_modz00_8,
					CDR(BgL_basez00_9));
				if (PAIRP(BgL_cellz00_820))
					{	/* Llib/module.scm 150 */
						return
							BGl_filterz00zz__r4_control_features_6_9z00
							(BGl_stringzf3zd2envz21zz__r4_strings_6_7z00,
							CDR(BgL_cellz00_820));
					}
				else
					{	/* Llib/module.scm 152 */
						obj_t BgL_fz00_823;

						{	/* Llib/module.scm 152 */
							obj_t BgL_arg1906z00_826;

							{	/* Llib/module.scm 152 */
								obj_t BgL_res2212z00_1373;

								{	/* Llib/module.scm 152 */
									obj_t BgL_symbolz00_1371;

									BgL_symbolz00_1371 = BgL_modz00_8;
									{	/* Llib/module.scm 152 */
										obj_t BgL_arg2063z00_1372;

										BgL_arg2063z00_1372 = SYMBOL_TO_STRING(BgL_symbolz00_1371);
										BgL_res2212z00_1373 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_1372);
									}
								}
								BgL_arg1906z00_826 = BgL_res2212z00_1373;
							}
							BgL_fz00_823 =
								string_append(BgL_arg1906z00_826,
								BGl_string2247z00zz__modulez00);
						}
						if (fexists(BSTRING_TO_STRING(BgL_fz00_823)))
							{	/* Llib/module.scm 154 */
								obj_t BgL_list1905z00_825;

								BgL_list1905z00_825 = MAKE_PAIR(BgL_fz00_823, BNIL);
								return BgL_list1905z00_825;
							}
						else
							{	/* Llib/module.scm 153 */
								return BNIL;
							}
					}
			}
		}
	}



/* module-add-access-inner! */
	obj_t BGl_modulezd2addzd2accesszd2innerz12zc0zz__modulez00(obj_t
		BgL_modulez00_10, obj_t BgL_filesz00_11, obj_t BgL_abasez00_12)
	{
		AN_OBJECT;
		{	/* Llib/module.scm 160 */
			{	/* Llib/module.scm 161 */
				obj_t BgL_basez00_829;

				BgL_basez00_829 =
					BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_abasez00_12,
					BGl_afilezd2tablezd2zz__modulez00);
				if (CBOOL(BgL_basez00_829))
					{	/* Llib/module.scm 165 */
						obj_t BgL_cellz00_830;

						BgL_cellz00_830 =
							BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_modulez00_10,
							CDR(BgL_basez00_829));
						if (CBOOL(BgL_cellz00_830))
							{	/* Llib/module.scm 166 */
								if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(CDR
										(BgL_cellz00_830), BgL_filesz00_11))
									{	/* Llib/module.scm 168 */
										return BFALSE;
									}
								else
									{	/* Llib/module.scm 168 */
										SET_CDR(BgL_cellz00_830, BgL_filesz00_11);
										{	/* Llib/module.scm 170 */
											obj_t BgL_arg1910z00_832;

											obj_t BgL_arg1914z00_835;

											BgL_arg1910z00_832 = BGl_symbol2248z00zz__modulez00;
											BgL_arg1914z00_835 = CDR(BgL_cellz00_830);
											{	/* Llib/module.scm 170 */
												obj_t BgL_list1919z00_839;

												{	/* Llib/module.scm 170 */
													obj_t BgL_arg1920z00_840;

													{	/* Llib/module.scm 170 */
														obj_t BgL_arg1921z00_841;

														{	/* Llib/module.scm 170 */
															obj_t BgL_arg1922z00_842;

															{	/* Llib/module.scm 170 */
																obj_t BgL_arg1923z00_843;

																{	/* Llib/module.scm 170 */
																	obj_t BgL_arg1924z00_844;

																	{	/* Llib/module.scm 170 */
																		obj_t BgL_arg1925z00_845;

																		{	/* Llib/module.scm 170 */
																			obj_t BgL_arg1926z00_846;

																			{	/* Llib/module.scm 170 */
																				obj_t BgL_arg1927z00_847;

																				{	/* Llib/module.scm 170 */
																					obj_t BgL_arg1929z00_848;

																					BgL_arg1929z00_848 =
																						MAKE_PAIR
																						(BGl_string2250z00zz__modulez00,
																						BNIL);
																					BgL_arg1927z00_847 =
																						MAKE_PAIR(BgL_abasez00_12,
																						BgL_arg1929z00_848);
																				}
																				BgL_arg1926z00_846 =
																					MAKE_PAIR
																					(BGl_string2251z00zz__modulez00,
																					BgL_arg1927z00_847);
																			}
																			BgL_arg1925z00_845 =
																				MAKE_PAIR(BgL_filesz00_11,
																				BgL_arg1926z00_846);
																		}
																		BgL_arg1924z00_844 =
																			MAKE_PAIR(BGl_string2252z00zz__modulez00,
																			BgL_arg1925z00_845);
																	}
																	BgL_arg1923z00_843 =
																		MAKE_PAIR(BgL_arg1914z00_835,
																		BgL_arg1924z00_844);
																}
																BgL_arg1922z00_842 =
																	MAKE_PAIR(BGl_string2253z00zz__modulez00,
																	BgL_arg1923z00_843);
															}
															BgL_arg1921z00_841 =
																MAKE_PAIR(BgL_modulez00_10, BgL_arg1922z00_842);
														}
														BgL_arg1920z00_840 =
															MAKE_PAIR(BGl_string2254z00zz__modulez00,
															BgL_arg1921z00_841);
													}
													BgL_list1919z00_839 =
														MAKE_PAIR(BgL_arg1910z00_832, BgL_arg1920z00_840);
												}
												return BGl_warningz00zz__errorz00(BgL_list1919z00_839);
											}
										}
									}
							}
						else
							{	/* Llib/module.scm 167 */
								obj_t BgL_arg1931z00_850;

								{	/* Llib/module.scm 167 */
									obj_t BgL_arg1932z00_851;

									obj_t BgL_arg1935z00_852;

									BgL_arg1932z00_851 =
										MAKE_PAIR(BgL_modulez00_10, BgL_filesz00_11);
									BgL_arg1935z00_852 = CDR(BgL_basez00_829);
									BgL_arg1931z00_850 =
										MAKE_PAIR(BgL_arg1932z00_851, BgL_arg1935z00_852);
								}
								return SET_CDR(BgL_basez00_829, BgL_arg1931z00_850);
							}
					}
				else
					{	/* Llib/module.scm 164 */
						obj_t BgL_arg1938z00_854;

						{	/* Llib/module.scm 164 */
							obj_t BgL_arg1940z00_855;

							{	/* Llib/module.scm 164 */
								obj_t BgL_arg1941z00_856;

								BgL_arg1941z00_856 =
									MAKE_PAIR(BgL_modulez00_10, BgL_filesz00_11);
								{	/* Llib/module.scm 164 */
									obj_t BgL_list1942z00_857;

									BgL_list1942z00_857 = MAKE_PAIR(BgL_arg1941z00_856, BNIL);
									BgL_arg1940z00_855 = BgL_list1942z00_857;
								}
							}
							BgL_arg1938z00_854 =
								MAKE_PAIR(BgL_abasez00_12, BgL_arg1940z00_855);
						}
						return (BGl_afilezd2tablezd2zz__modulez00 =
							MAKE_PAIR(BgL_arg1938z00_854, BGl_afilezd2tablezd2zz__modulez00),
							BUNSPEC);
					}
			}
		}
	}



/* module-add-access! */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2addzd2accessz12z12zz__modulez00(obj_t
		BgL_modulez00_13, obj_t BgL_filesz00_14, obj_t BgL_abasez00_15)
	{
		AN_OBJECT;
		{	/* Llib/module.scm 178 */
			{	/* Llib/module.scm 179 */
				obj_t BgL_g1874z00_1387;

				BgL_g1874z00_1387 = BGl_moduleszd2mutexzd2zz__modulez00;
				{	/* Llib/module.scm 179 */

					if ((((long) 0) == ((long) 0)))
						{	/* Llib/module.scm 179 */
							bgl_mutex_lock(BgL_g1874z00_1387);
						}
					else
						{	/* Llib/module.scm 179 */
							bgl_mutex_timed_lock(BgL_g1874z00_1387, ((long) 0));
			}}}
			BGl_modulezd2addzd2accesszd2innerz12zc0zz__modulez00(BgL_modulez00_13,
				BgL_filesz00_14, BgL_abasez00_15);
			{	/* Llib/module.scm 179 */
				obj_t BgL_mz00_1394;

				BgL_mz00_1394 = BGl_moduleszd2mutexzd2zz__modulez00;
				return BBOOL(bgl_mutex_unlock(BgL_mz00_1394));
			}
		}
	}



/* _module-add-access! */
	obj_t BGl__modulezd2addzd2accessz12z12zz__modulez00(obj_t BgL_envz00_1600,
		obj_t BgL_modulez00_1601, obj_t BgL_filesz00_1602, obj_t BgL_abasez00_1603)
	{
		AN_OBJECT;
		{	/* Llib/module.scm 178 */
			{	/* Llib/module.scm 181 */
				obj_t BgL_auxz00_1792;

				obj_t BgL_auxz00_1785;

				obj_t BgL_auxz00_1778;

				if (STRINGP(BgL_abasez00_1603))
					{	/* Llib/module.scm 181 */
						BgL_auxz00_1792 = BgL_abasez00_1603;
					}
				else
					{
						obj_t BgL_auxz00_1795;

						BgL_auxz00_1795 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2238z00zz__modulez00,
							BINT(((long) 7035)), BGl_string2255z00zz__modulez00,
							BGl_string2257z00zz__modulez00, BgL_abasez00_1603);
						FAILURE(BgL_auxz00_1795, BFALSE, BFALSE);
					}
				if (PAIRP(BgL_filesz00_1602))
					{	/* Llib/module.scm 181 */
						BgL_auxz00_1785 = BgL_filesz00_1602;
					}
				else
					{
						obj_t BgL_auxz00_1788;

						BgL_auxz00_1788 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2238z00zz__modulez00,
							BINT(((long) 7035)), BGl_string2255z00zz__modulez00,
							BGl_string2256z00zz__modulez00, BgL_filesz00_1602);
						FAILURE(BgL_auxz00_1788, BFALSE, BFALSE);
					}
				if (SYMBOLP(BgL_modulez00_1601))
					{	/* Llib/module.scm 181 */
						BgL_auxz00_1778 = BgL_modulez00_1601;
					}
				else
					{
						obj_t BgL_auxz00_1781;

						BgL_auxz00_1781 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2238z00zz__modulez00,
							BINT(((long) 7035)), BGl_string2255z00zz__modulez00,
							BGl_string2245z00zz__modulez00, BgL_modulez00_1601);
						FAILURE(BgL_auxz00_1781, BFALSE, BFALSE);
					}
				return
					BGl_modulezd2addzd2accessz12z12zz__modulez00(BgL_auxz00_1778,
					BgL_auxz00_1785, BgL_auxz00_1792);
			}
		}
	}



/* module-read-access-file */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2readzd2accesszd2filezd2zz__modulez00(obj_t
		BgL_portz00_16)
	{
		AN_OBJECT;
		{	/* Llib/module.scm 186 */
			{	/* Llib/module.scm 187 */
				obj_t BgL_arg1944z00_861;

				{	/* Llib/module.scm 193 */

					{	/* Llib/module.scm 193 */

						BgL_arg1944z00_861 =
							BGl_readz00zz__readerz00(BgL_portz00_16, BFALSE);
					}
				}
				return
					BGl_filterz00zz__r4_control_features_6_9z00
					(BGl_proc2258z00zz__modulez00, BgL_arg1944z00_861);
			}
		}
	}



/* _module-read-access-file */
	obj_t BGl__modulezd2readzd2accesszd2filezd2zz__modulez00(obj_t
		BgL_envz00_1605, obj_t BgL_portz00_1606)
	{
		AN_OBJECT;
		{	/* Llib/module.scm 186 */
			{	/* Llib/module.scm 187 */
				obj_t BgL_auxz00_1802;

				if (INPUT_PORTP(BgL_portz00_1606))
					{	/* Llib/module.scm 187 */
						BgL_auxz00_1802 = BgL_portz00_1606;
					}
				else
					{
						obj_t BgL_auxz00_1805;

						BgL_auxz00_1805 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2238z00zz__modulez00,
							BINT(((long) 7311)), BGl_string2259z00zz__modulez00,
							BGl_string2260z00zz__modulez00, BgL_portz00_1606);
						FAILURE(BgL_auxz00_1805, BFALSE, BFALSE);
					}
				return
					BGl_modulezd2readzd2accesszd2filezd2zz__modulez00(BgL_auxz00_1802);
			}
		}
	}



/* <anonymous:1945> */
	obj_t BGl_zc3anonymousza31945ze3z83zz__modulez00(obj_t BgL_envz00_1607,
		obj_t BgL_xz00_1608)
	{
		AN_OBJECT;
		{	/* Llib/module.scm 187 */
			{
				obj_t BgL_xz00_862;

				{	/* Llib/module.scm 188 */
					bool_t BgL_auxz00_1810;

					BgL_xz00_862 = BgL_xz00_1608;
					{	/* Llib/module.scm 188 */
						bool_t BgL_testz00_1811;

						if (PAIRP(BgL_xz00_862))
							{	/* Llib/module.scm 188 */
								bool_t BgL_testz00_1814;

								{	/* Llib/module.scm 188 */
									obj_t BgL_auxz00_1815;

									BgL_auxz00_1815 = CAR(BgL_xz00_862);
									BgL_testz00_1814 = SYMBOLP(BgL_auxz00_1815);
								}
								if (BgL_testz00_1814)
									{	/* Llib/module.scm 188 */
										BgL_testz00_1811 =
											BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(CDR
											(BgL_xz00_862));
									}
								else
									{	/* Llib/module.scm 188 */
										BgL_testz00_1811 = ((bool_t) 0);
									}
							}
						else
							{	/* Llib/module.scm 188 */
								BgL_testz00_1811 = ((bool_t) 0);
							}
						if (BgL_testz00_1811)
							{	/* Llib/module.scm 188 */
								BgL_auxz00_1810 = ((bool_t) 1);
							}
						else
							{	/* Llib/module.scm 188 */
								{	/* Llib/module.scm 191 */
									obj_t BgL_list1947z00_865;

									{	/* Llib/module.scm 191 */
										obj_t BgL_arg1948z00_866;

										obj_t BgL_arg1949z00_867;

										BgL_arg1948z00_866 = BGl_symbol2261z00zz__modulez00;
										{	/* Llib/module.scm 191 */
											obj_t BgL_arg1951z00_869;

											BgL_arg1951z00_869 = MAKE_PAIR(BgL_xz00_862, BNIL);
											BgL_arg1949z00_867 =
												MAKE_PAIR(BGl_string2263z00zz__modulez00,
												BgL_arg1951z00_869);
										}
										BgL_list1947z00_865 =
											MAKE_PAIR(BgL_arg1948z00_866, BgL_arg1949z00_867);
									}
									BGl_warningz00zz__errorz00(BgL_list1947z00_865);
								}
								BgL_auxz00_1810 = ((bool_t) 0);
							}
					}
					return BBOOL(BgL_auxz00_1810);
				}
			}
		}
	}



/* module-load-access-file */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2loadzd2accesszd2filezd2zz__modulez00(obj_t
		BgL_namez00_17)
	{
		AN_OBJECT;
		{	/* Llib/module.scm 198 */
			{	/* Llib/module.scm 206 */
				obj_t BgL_g1874z00_878;

				BgL_g1874z00_878 = BGl_moduleszd2mutexzd2zz__modulez00;
				{	/* Llib/thread.scm 201 */

					if ((((long) 0) == ((long) 0)))
						{	/* Llib/thread.scm 201 */
							bgl_mutex_lock(BgL_g1874z00_878);
						}
					else
						{	/* Llib/thread.scm 201 */
							bgl_mutex_timed_lock(BgL_g1874z00_878, ((long) 0));
			}}}
			{	/* Llib/module.scm 209 */
				obj_t BgL_zc3anonymousza31957ze3z83_1610;

				BgL_zc3anonymousza31957ze3z83_1610 =
					make_fx_procedure(BGl_zc3anonymousza31957ze3z83zz__modulez00,
					(int) (((long) 1)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3anonymousza31957ze3z83_1610,
					(int) (((long) 0)), BgL_namez00_17);
				BGl_callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00(BgL_namez00_17,
					BgL_zc3anonymousza31957ze3z83_1610);
			}
			{	/* Llib/module.scm 218 */
				obj_t BgL_mz00_1412;

				BgL_mz00_1412 = BGl_moduleszd2mutexzd2zz__modulez00;
				return BBOOL(bgl_mutex_unlock(BgL_mz00_1412));
			}
		}
	}



/* _module-load-access-file */
	obj_t BGl__modulezd2loadzd2accesszd2filezd2zz__modulez00(obj_t
		BgL_envz00_1611, obj_t BgL_namez00_1612)
	{
		AN_OBJECT;
		{	/* Llib/module.scm 198 */
			{	/* Llib/module.scm 202 */
				obj_t BgL_auxz00_1837;

				if (STRINGP(BgL_namez00_1612))
					{	/* Llib/module.scm 202 */
						BgL_auxz00_1837 = BgL_namez00_1612;
					}
				else
					{
						obj_t BgL_auxz00_1840;

						BgL_auxz00_1840 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2238z00zz__modulez00,
							BINT(((long) 7813)), BGl_string2264z00zz__modulez00,
							BGl_string2257z00zz__modulez00, BgL_namez00_1612);
						FAILURE(BgL_auxz00_1840, BFALSE, BFALSE);
					}
				return
					BGl_modulezd2loadzd2accesszd2filezd2zz__modulez00(BgL_auxz00_1837);
			}
		}
	}



/* <anonymous:1957> */
	obj_t BGl_zc3anonymousza31957ze3z83zz__modulez00(obj_t BgL_envz00_1613,
		obj_t BgL_portz00_1615)
	{
		AN_OBJECT;
		{	/* Llib/module.scm 208 */
			{	/* Llib/module.scm 209 */
				obj_t BgL_namez00_1614;

				BgL_namez00_1614 = PROCEDURE_REF(BgL_envz00_1613, (int) (((long) 0)));
				{
					obj_t BgL_portz00_881;

					{	/* Llib/module.scm 209 */
						bool_t BgL_auxz00_1847;

						BgL_portz00_881 = BgL_portz00_1615;
						{	/* Llib/module.scm 209 */
							obj_t BgL_abasez00_883;

							BgL_abasez00_883 = BGl_dirnamez00zz__osz00(BgL_namez00_1614);
							{	/* Llib/module.scm 210 */
								obj_t BgL_g1846z00_884;

								BgL_g1846z00_884 =
									BGl_modulezd2readzd2accesszd2filezd2zz__modulez00
									(BgL_portz00_881);
								{
									obj_t BgL_l1844z00_886;

									BgL_l1844z00_886 = BgL_g1846z00_884;
								BgL_zc3anonymousza31958ze3z83_887:
									if (PAIRP(BgL_l1844z00_886))
										{	/* Llib/module.scm 217 */
											{	/* Llib/module.scm 211 */
												obj_t BgL_accessz00_889;

												BgL_accessz00_889 = CAR(BgL_l1844z00_886);
												{	/* Llib/module.scm 211 */
													obj_t BgL_infoz00_890;

													if (bigloo_strcmp(BgL_abasez00_883,
															BGl_string2246z00zz__modulez00))
														{	/* Llib/module.scm 211 */
															BgL_infoz00_890 = CDR(BgL_accessz00_889);
														}
													else
														{	/* Llib/module.scm 213 */
															obj_t BgL_arg1963z00_894;

															BgL_arg1963z00_894 = CDR(BgL_accessz00_889);
															{	/* Llib/module.scm 214 */
																obj_t BgL_zc3anonymousza31965ze3z83_1609;

																BgL_zc3anonymousza31965ze3z83_1609 =
																	make_fx_procedure
																	(BGl_zc3anonymousza31965ze3z83zz__modulez00,
																	(int) (((long) 1)), (int) (((long) 1)));
																PROCEDURE_SET
																	(BgL_zc3anonymousza31965ze3z83_1609,
																	(int) (((long) 0)), BgL_abasez00_883);
																{	/* Llib/module.scm 213 */
																	obj_t BgL_list1964z00_895;

																	BgL_list1964z00_895 =
																		MAKE_PAIR(BgL_arg1963z00_894, BNIL);
																	BgL_infoz00_890 =
																		BGl_mapz12z12zz__r4_control_features_6_9z00
																		(BgL_zc3anonymousza31965ze3z83_1609,
																		BgL_list1964z00_895);
														}}}
													BGl_modulezd2addzd2accesszd2innerz12zc0zz__modulez00
														(CAR(BgL_accessz00_889), BgL_infoz00_890,
														BgL_abasez00_883);
											}}
											{
												obj_t BgL_l1844z00_1866;

												BgL_l1844z00_1866 = CDR(BgL_l1844z00_886);
												BgL_l1844z00_886 = BgL_l1844z00_1866;
												goto BgL_zc3anonymousza31958ze3z83_887;
											}
										}
									else
										{	/* Llib/module.scm 217 */
											BgL_auxz00_1847 = ((bool_t) 1);
										}
								}
							}
						}
						return BBOOL(BgL_auxz00_1847);
					}
				}
			}
		}
	}



/* <anonymous:1965> */
	obj_t BGl_zc3anonymousza31965ze3z83zz__modulez00(obj_t BgL_envz00_1616,
		obj_t BgL_fz00_1618)
	{
		AN_OBJECT;
		{	/* Llib/module.scm 213 */
			{	/* Llib/module.scm 214 */
				obj_t BgL_abasez00_1617;

				BgL_abasez00_1617 = PROCEDURE_REF(BgL_envz00_1616, (int) (((long) 0)));
				{
					obj_t BgL_fz00_896;

					BgL_fz00_896 = BgL_fz00_1618;
					{
						obj_t BgL_fz00_902;

						obj_t BgL_abasez00_903;

						BgL_fz00_902 = BgL_fz00_896;
						BgL_abasez00_903 = BgL_abasez00_1617;
						if (STRINGP(BgL_fz00_902))
							{	/* Llib/module.scm 203 */
								bool_t BgL_testz00_1873;

								if (bigloo_strcmp(BgL_fz00_902, BGl_string2265z00zz__modulez00))
									{	/* Llib/module.scm 203 */
										BgL_testz00_1873 = ((bool_t) 1);
									}
								else
									{	/* Llib/module.scm 203 */
										unsigned char BgL_arg1971z00_908;

										obj_t BgL_arg1972z00_909;

										BgL_arg1971z00_908 = STRING_REF(BgL_fz00_902, ((long) 0));
										BgL_arg1972z00_909 = BGl_filezd2separatorzd2zz__osz00();
										BgL_testz00_1873 =
											(BgL_arg1971z00_908 == CCHAR(BgL_arg1972z00_909));
									}
								if (BgL_testz00_1873)
									{	/* Llib/module.scm 203 */
										return BgL_fz00_902;
									}
								else
									{	/* Llib/module.scm 203 */
										return
											BGl_makezd2filezd2namez00zz__osz00(BgL_abasez00_903,
											BgL_fz00_902);
									}
							}
						else
							{	/* Llib/module.scm 202 */
								return BgL_fz00_902;
							}
					}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__modulez00()
	{
		AN_OBJECT;
		{	/* Llib/module.scm 17 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__modulez00()
	{
		AN_OBJECT;
		{	/* Llib/module.scm 17 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__modulez00()
	{
		AN_OBJECT;
		{	/* Llib/module.scm 17 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2266z00zz__modulez00));
			BGl_modulezd2initializa7ationz75zz__configurez00(((long) 306671391),
				BSTRING_TO_STRING(BGl_string2266z00zz__modulez00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2266z00zz__modulez00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2266z00zz__modulez00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2266z00zz__modulez00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string2266z00zz__modulez00));
			return
				BGl_modulezd2initializa7ationz75zz__readerz00(((long) 32372471),
				BSTRING_TO_STRING(BGl_string2266z00zz__modulez00));
		}
	}

#ifdef __cplusplus
}
#endif
