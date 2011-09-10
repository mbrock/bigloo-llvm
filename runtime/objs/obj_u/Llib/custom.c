/*===========================================================================*/
/*   (Llib/custom.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Llib/custom.scm -indent -o objs/obj_u/Llib/custom.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__customz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl__customzf3zf3zz__customz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_customzf3zf3zz__customz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_customzd2nilzd2zz__customz00();
	static obj_t BGl_requirezd2initializa7ationz75zz__customz00 = BUNSPEC;
	static obj_t BGl__customzd2identifierzd2zz__customz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_customzd2hashzd2zz__customz00(obj_t, int);
	extern obj_t bgl_custom_nil();
	static obj_t BGl_genericzd2initzd2zz__customz00();
	extern obj_t string_to_bstring(char *);
	static obj_t BGl__customzd2equalzf3z21zz__customz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__customzd2nilzd2zz__customz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_customzd2equalzf3z21zz__customz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__customz00();
	static obj_t BGl__customzd2identifierzd2setz12z12zz__customz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_customzd2identifierzd2setz12z12zz__customz00(obj_t, char *);
	BGL_EXPORTED_DECL char *BGl_customzd2identifierzd2zz__customz00(obj_t);
	static obj_t BGl__customzd2hashzd2zz__customz00(obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__customz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_customzd2equalzf3zd2envzf3zz__customz00,
		BgL_bgl__customza7d2equalza72147z00, BGl__customzd2equalzf3z21zz__customz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_customzd2identifierzd2envz00zz__customz00,
		BgL_bgl__customza7d2identi2148za7, BGl__customzd2identifierzd2zz__customz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_customzf3zd2envz21zz__customz00,
		BgL_bgl__customza7f3za7f3za7za7_2149z00, BGl__customzf3zf3zz__customz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_customzd2identifierzd2setz12zd2envzc0zz__customz00,
		BgL_bgl__customza7d2identi2150za7,
		BGl__customzd2identifierzd2setz12z12zz__customz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2138z00zz__customz00,
		BgL_bgl_string2138za700za7za7_2151za7,
		"/tmp/bigloo/runtime/Llib/custom.scm", 35);
	      DEFINE_STRING(BGl_string2140z00zz__customz00,
		BgL_bgl_string2140za700za7za7_2152za7, "custom", 6);
	      DEFINE_STRING(BGl_string2139z00zz__customz00,
		BgL_bgl_string2139za700za7za7_2153za7, "_custom-equal?", 14);
	      DEFINE_STRING(BGl_string2141z00zz__customz00,
		BgL_bgl_string2141za700za7za7_2154za7, "_custom-identifier", 18);
	      DEFINE_STRING(BGl_string2142z00zz__customz00,
		BgL_bgl_string2142za700za7za7_2155za7, "_custom-identifier-set!", 23);
	      DEFINE_STRING(BGl_string2143z00zz__customz00,
		BgL_bgl_string2143za700za7za7_2156za7, "string", 6);
	      DEFINE_STRING(BGl_string2144z00zz__customz00,
		BgL_bgl_string2144za700za7za7_2157za7, "_custom-hash", 12);
	      DEFINE_STRING(BGl_string2145z00zz__customz00,
		BgL_bgl_string2145za700za7za7_2158za7, "int", 3);
	      DEFINE_STRING(BGl_string2146z00zz__customz00,
		BgL_bgl_string2146za700za7za7_2159za7, "__custom", 8);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_customzd2hashzd2envz00zz__customz00,
		BgL_bgl__customza7d2hashza7d2160z00, BGl__customzd2hashzd2zz__customz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_customzd2nilzd2envz00zz__customz00,
		BgL_bgl__customza7d2nilza7d22161z00, BGl__customzd2nilzd2zz__customz00, 0L,
		BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__customz00(long
		BgL_checksumz00_1373, char *BgL_fromz00_1374)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__customz00))
				{
					BGl_requirezd2initializa7ationz75zz__customz00 = BBOOL(((bool_t) 0));
					BGl_importedzd2moduleszd2initz00zz__customz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* custom? */
	BGL_EXPORTED_DEF bool_t BGl_customzf3zf3zz__customz00(obj_t BgL_objz00_1)
	{
		AN_OBJECT;
		{	/* Llib/custom.scm 83 */
			return CUSTOMP(BgL_objz00_1);
		}
	}



/* _custom? */
	obj_t BGl__customzf3zf3zz__customz00(obj_t BgL_envz00_1339,
		obj_t BgL_objz00_1340)
	{
		AN_OBJECT;
		{	/* Llib/custom.scm 83 */
			return BBOOL(CUSTOMP(BgL_objz00_1340));
		}
	}



/* custom-nil */
	BGL_EXPORTED_DEF obj_t BGl_customzd2nilzd2zz__customz00()
	{
		AN_OBJECT;
		{	/* Llib/custom.scm 89 */
			return bgl_custom_nil();
		}
	}



/* _custom-nil */
	obj_t BGl__customzd2nilzd2zz__customz00(obj_t BgL_envz00_1341)
	{
		AN_OBJECT;
		{	/* Llib/custom.scm 89 */
			return bgl_custom_nil();
		}
	}



/* custom-equal? */
	BGL_EXPORTED_DEF bool_t BGl_customzd2equalzf3z21zz__customz00(obj_t
		BgL_obj1z00_2, obj_t BgL_obj2z00_3)
	{
		AN_OBJECT;
		{	/* Llib/custom.scm 95 */
			return CUSTOM_CMP(BgL_obj1z00_2, BgL_obj2z00_3);
		}
	}



/* _custom-equal? */
	obj_t BGl__customzd2equalzf3z21zz__customz00(obj_t BgL_envz00_1342,
		obj_t BgL_obj1z00_1343, obj_t BgL_obj2z00_1344)
	{
		AN_OBJECT;
		{	/* Llib/custom.scm 95 */
			{	/* Llib/custom.scm 96 */
				bool_t BgL_auxz00_1385;

				{	/* Llib/custom.scm 96 */
					obj_t BgL_obj1z00_1368;

					obj_t BgL_obj2z00_1369;

					if (CUSTOMP(BgL_obj1z00_1343))
						{	/* Llib/custom.scm 96 */
							BgL_obj1z00_1368 = BgL_obj1z00_1343;
						}
					else
						{
							obj_t BgL_auxz00_1388;

							BgL_auxz00_1388 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2138z00zz__customz00,
								BINT(((long) 3582)), BGl_string2139z00zz__customz00,
								BGl_string2140z00zz__customz00, BgL_obj1z00_1343);
							FAILURE(BgL_auxz00_1388, BFALSE, BFALSE);
						}
					if (CUSTOMP(BgL_obj2z00_1344))
						{	/* Llib/custom.scm 96 */
							BgL_obj2z00_1369 = BgL_obj2z00_1344;
						}
					else
						{
							obj_t BgL_auxz00_1394;

							BgL_auxz00_1394 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2138z00zz__customz00,
								BINT(((long) 3582)), BGl_string2139z00zz__customz00,
								BGl_string2140z00zz__customz00, BgL_obj2z00_1344);
							FAILURE(BgL_auxz00_1394, BFALSE, BFALSE);
						}
					BgL_auxz00_1385 = CUSTOM_CMP(BgL_obj1z00_1368, BgL_obj2z00_1369);
				}
				return BBOOL(BgL_auxz00_1385);
			}
		}
	}



/* custom-identifier */
	BGL_EXPORTED_DEF char *BGl_customzd2identifierzd2zz__customz00(obj_t
		BgL_customz00_4)
	{
		AN_OBJECT;
		{	/* Llib/custom.scm 101 */
			return CUSTOM_IDENTIFIER(BgL_customz00_4);
		}
	}



/* _custom-identifier */
	obj_t BGl__customzd2identifierzd2zz__customz00(obj_t BgL_envz00_1345,
		obj_t BgL_customz00_1346)
	{
		AN_OBJECT;
		{	/* Llib/custom.scm 101 */
			{	/* Llib/custom.scm 102 */
				char *BgL_auxz00_1401;

				{	/* Llib/custom.scm 102 */
					obj_t BgL_customz00_1370;

					if (CUSTOMP(BgL_customz00_1346))
						{	/* Llib/custom.scm 102 */
							BgL_customz00_1370 = BgL_customz00_1346;
						}
					else
						{
							obj_t BgL_auxz00_1404;

							BgL_auxz00_1404 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2138z00zz__customz00,
								BINT(((long) 3895)), BGl_string2141z00zz__customz00,
								BGl_string2140z00zz__customz00, BgL_customz00_1346);
							FAILURE(BgL_auxz00_1404, BFALSE, BFALSE);
						}
					BgL_auxz00_1401 = CUSTOM_IDENTIFIER(BgL_customz00_1370);
				}
				return string_to_bstring(BgL_auxz00_1401);
			}
		}
	}



/* custom-identifier-set! */
	BGL_EXPORTED_DEF obj_t BGl_customzd2identifierzd2setz12z12zz__customz00(obj_t
		BgL_customz00_5, char *BgL_strz00_6)
	{
		AN_OBJECT;
		{	/* Llib/custom.scm 107 */
			return CUSTOM_IDENTIFIER_SET(BgL_customz00_5, BgL_strz00_6);
		}
	}



/* _custom-identifier-set! */
	obj_t BGl__customzd2identifierzd2setz12z12zz__customz00(obj_t BgL_envz00_1347,
		obj_t BgL_customz00_1348, obj_t BgL_strz00_1349)
	{
		AN_OBJECT;
		{	/* Llib/custom.scm 107 */
			{	/* Llib/custom.scm 108 */
				obj_t BgL_customz00_1371;

				char *BgL_strz00_1372;

				if (CUSTOMP(BgL_customz00_1348))
					{	/* Llib/custom.scm 108 */
						BgL_customz00_1371 = BgL_customz00_1348;
					}
				else
					{
						obj_t BgL_auxz00_1413;

						BgL_auxz00_1413 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2138z00zz__customz00,
							BINT(((long) 4218)), BGl_string2142z00zz__customz00,
							BGl_string2140z00zz__customz00, BgL_customz00_1348);
						FAILURE(BgL_auxz00_1413, BFALSE, BFALSE);
					}
				{	/* Llib/custom.scm 108 */
					obj_t BgL_auxz00_1417;

					if (STRINGP(BgL_strz00_1349))
						{	/* Llib/custom.scm 108 */
							BgL_auxz00_1417 = BgL_strz00_1349;
						}
					else
						{
							obj_t BgL_auxz00_1420;

							BgL_auxz00_1420 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2138z00zz__customz00,
								BINT(((long) 4218)), BGl_string2142z00zz__customz00,
								BGl_string2143z00zz__customz00, BgL_strz00_1349);
							FAILURE(BgL_auxz00_1420, BFALSE, BFALSE);
						}
					BgL_strz00_1372 = BSTRING_TO_STRING(BgL_auxz00_1417);
				}
				return CUSTOM_IDENTIFIER_SET(BgL_customz00_1371, BgL_strz00_1372);
			}
		}
	}



/* custom-hash */
	BGL_EXPORTED_DEF obj_t BGl_customzd2hashzd2zz__customz00(obj_t
		BgL_customz00_7, int BgL_modz00_8)
	{
		AN_OBJECT;
		{	/* Llib/custom.scm 113 */
			{	/* Llib/custom.scm 114 */
				int BgL_numz00_1175;

				BgL_numz00_1175 = CUSTOM_HASH_NUMBER(BgL_customz00_7);
				{	/* Llib/custom.scm 114 */
					long BgL_n1z00_1176;

					long BgL_n2z00_1177;

					BgL_n1z00_1176 = (long) (BgL_numz00_1175);
					BgL_n2z00_1177 = (long) (BgL_modz00_8);
					return BINT((BgL_n1z00_1176 % BgL_n2z00_1177));
				}
			}
		}
	}



/* _custom-hash */
	obj_t BGl__customzd2hashzd2zz__customz00(obj_t BgL_envz00_1350,
		obj_t BgL_customz00_1351, obj_t BgL_modz00_1352)
	{
		AN_OBJECT;
		{	/* Llib/custom.scm 113 */
			{	/* Llib/custom.scm 114 */
				int BgL_auxz00_1438;

				obj_t BgL_auxz00_1431;

				{	/* Llib/custom.scm 114 */
					obj_t BgL_auxz00_1439;

					if (INTEGERP(BgL_modz00_1352))
						{	/* Llib/custom.scm 114 */
							BgL_auxz00_1439 = BgL_modz00_1352;
						}
					else
						{
							obj_t BgL_auxz00_1442;

							BgL_auxz00_1442 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2138z00zz__customz00,
								BINT(((long) 4529)), BGl_string2144z00zz__customz00,
								BGl_string2145z00zz__customz00, BgL_modz00_1352);
							FAILURE(BgL_auxz00_1442, BFALSE, BFALSE);
						}
					BgL_auxz00_1438 = CINT(BgL_auxz00_1439);
				}
				if (CUSTOMP(BgL_customz00_1351))
					{	/* Llib/custom.scm 114 */
						BgL_auxz00_1431 = BgL_customz00_1351;
					}
				else
					{
						obj_t BgL_auxz00_1434;

						BgL_auxz00_1434 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2138z00zz__customz00,
							BINT(((long) 4529)), BGl_string2144z00zz__customz00,
							BGl_string2140z00zz__customz00, BgL_customz00_1351);
						FAILURE(BgL_auxz00_1434, BFALSE, BFALSE);
					}
				return
					BGl_customzd2hashzd2zz__customz00(BgL_auxz00_1431, BgL_auxz00_1438);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__customz00()
	{
		AN_OBJECT;
		{	/* Llib/custom.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__customz00()
	{
		AN_OBJECT;
		{	/* Llib/custom.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__customz00()
	{
		AN_OBJECT;
		{	/* Llib/custom.scm 14 */
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2146z00zz__customz00));
		}
	}

#ifdef __cplusplus
}
#endif
