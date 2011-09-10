/*===========================================================================*/
/*   (Llib/weakptr.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Llib/weakptr.scm -indent -o objs/obj_u/Llib/weakptr.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl__weakptrzd2datazd2setz12z12zz__weakptrz00(obj_t, obj_t,
		obj_t);
	extern void weakptr_data_set(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__weakptrz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__weakptrz00();
	static obj_t BGl__weakptrzf3zf3zz__weakptrz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__weakptrz00();
	extern obj_t weakptr_data(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__weakptrz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t make_weakptr(obj_t);
	static obj_t BGl__weakptrzd2datazd2zz__weakptrz00(obj_t, obj_t);
	static obj_t BGl__makezd2weakptrzd2zz__weakptrz00(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_weakptrzd2datazd2zz__weakptrz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2weakptrzd2zz__weakptrz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_weakptrzd2datazd2setz12z12zz__weakptrz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_weakptrzf3zf3zz__weakptrz00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__weakptrz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_weakptrzf3zd2envz21zz__weakptrz00,
		BgL_bgl__weakptrza7f3za7f3za7za72133z00, BGl__weakptrzf3zf3zz__weakptrz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2weakptrzd2envz00zz__weakptrz00,
		BgL_bgl__makeza7d2weakptrza72134z00, BGl__makezd2weakptrzd2zz__weakptrz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_weakptrzd2datazd2setz12zd2envzc0zz__weakptrz00,
		BgL_bgl__weakptrza7d2dataza72135z00,
		BGl__weakptrzd2datazd2setz12z12zz__weakptrz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2128z00zz__weakptrz00,
		BgL_bgl_string2128za700za7za7_2136za7,
		"/tmp/bigloo/runtime/Llib/weakptr.scm", 36);
	      DEFINE_STRING(BGl_string2130z00zz__weakptrz00,
		BgL_bgl_string2130za700za7za7_2137za7, "weakptr", 7);
	      DEFINE_STRING(BGl_string2129z00zz__weakptrz00,
		BgL_bgl_string2129za700za7za7_2138za7, "_weakptr-data", 13);
	      DEFINE_STRING(BGl_string2131z00zz__weakptrz00,
		BgL_bgl_string2131za700za7za7_2139za7, "_weakptr-data-set!", 18);
	      DEFINE_STRING(BGl_string2132z00zz__weakptrz00,
		BgL_bgl_string2132za700za7za7_2140za7, "__weakptr", 9);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_weakptrzd2datazd2envz00zz__weakptrz00,
		BgL_bgl__weakptrza7d2dataza72141z00, BGl__weakptrzd2datazd2zz__weakptrz00,
		0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__weakptrz00(long
		BgL_checksumz00_1350, char *BgL_fromz00_1351)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__weakptrz00))
				{
					BGl_requirezd2initializa7ationz75zz__weakptrz00 = BBOOL(((bool_t) 0));
					BGl_importedzd2moduleszd2initz00zz__weakptrz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* weakptr? */
	BGL_EXPORTED_DEF bool_t BGl_weakptrzf3zf3zz__weakptrz00(obj_t BgL_objz00_1)
	{
		AN_OBJECT;
		{	/* Llib/weakptr.scm 72 */
			return BGL_WEAKPTRP(BgL_objz00_1);
		}
	}



/* _weakptr? */
	obj_t BGl__weakptrzf3zf3zz__weakptrz00(obj_t BgL_envz00_1332,
		obj_t BgL_objz00_1333)
	{
		AN_OBJECT;
		{	/* Llib/weakptr.scm 72 */
			return BBOOL(BGL_WEAKPTRP(BgL_objz00_1333));
		}
	}



/* weakptr-data */
	BGL_EXPORTED_DEF obj_t BGl_weakptrzd2datazd2zz__weakptrz00(obj_t BgL_objz00_2)
	{
		AN_OBJECT;
		{	/* Llib/weakptr.scm 78 */
			return weakptr_data(BgL_objz00_2);
		}
	}



/* _weakptr-data */
	obj_t BGl__weakptrzd2datazd2zz__weakptrz00(obj_t BgL_envz00_1334,
		obj_t BgL_objz00_1335)
	{
		AN_OBJECT;
		{	/* Llib/weakptr.scm 78 */
			{	/* Llib/weakptr.scm 79 */
				obj_t BgL_objz00_1346;

				if (BGL_WEAKPTRP(BgL_objz00_1335))
					{	/* Llib/weakptr.scm 79 */
						BgL_objz00_1346 = BgL_objz00_1335;
					}
				else
					{
						obj_t BgL_auxz00_1362;

						BgL_auxz00_1362 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2128z00zz__weakptrz00,
							BINT(((long) 2903)), BGl_string2129z00zz__weakptrz00,
							BGl_string2130z00zz__weakptrz00, BgL_objz00_1335);
						FAILURE(BgL_auxz00_1362, BFALSE, BFALSE);
					}
				return weakptr_data(BgL_objz00_1346);
			}
		}
	}



/* weakptr-data-set! */
	BGL_EXPORTED_DEF obj_t BGl_weakptrzd2datazd2setz12z12zz__weakptrz00(obj_t
		BgL_ptrz00_3, obj_t BgL_objz00_4)
	{
		AN_OBJECT;
		{	/* Llib/weakptr.scm 84 */
			weakptr_data_set(BgL_ptrz00_3, BgL_objz00_4);
			BUNSPEC;
			return BUNSPEC;
		}
	}



/* _weakptr-data-set! */
	obj_t BGl__weakptrzd2datazd2setz12z12zz__weakptrz00(obj_t BgL_envz00_1336,
		obj_t BgL_ptrz00_1337, obj_t BgL_objz00_1338)
	{
		AN_OBJECT;
		{	/* Llib/weakptr.scm 84 */
			{	/* Llib/weakptr.scm 86 */
				obj_t BgL_ptrz00_1347;

				if (BGL_WEAKPTRP(BgL_ptrz00_1337))
					{	/* Llib/weakptr.scm 86 */
						BgL_ptrz00_1347 = BgL_ptrz00_1337;
					}
				else
					{
						obj_t BgL_auxz00_1370;

						BgL_auxz00_1370 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2128z00zz__weakptrz00,
							BINT(((long) 3228)), BGl_string2131z00zz__weakptrz00,
							BGl_string2130z00zz__weakptrz00, BgL_ptrz00_1337);
						FAILURE(BgL_auxz00_1370, BFALSE, BFALSE);
					}
				weakptr_data_set(BgL_ptrz00_1347, BgL_objz00_1338);
				BUNSPEC;
				return BUNSPEC;
			}
		}
	}



/* make-weakptr */
	BGL_EXPORTED_DEF obj_t BGl_makezd2weakptrzd2zz__weakptrz00(obj_t BgL_objz00_5)
	{
		AN_OBJECT;
		{	/* Llib/weakptr.scm 91 */
			return make_weakptr(BgL_objz00_5);
		}
	}



/* _make-weakptr */
	obj_t BGl__makezd2weakptrzd2zz__weakptrz00(obj_t BgL_envz00_1339,
		obj_t BgL_objz00_1340)
	{
		AN_OBJECT;
		{	/* Llib/weakptr.scm 91 */
			return make_weakptr(BgL_objz00_1340);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__weakptrz00()
	{
		AN_OBJECT;
		{	/* Llib/weakptr.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__weakptrz00()
	{
		AN_OBJECT;
		{	/* Llib/weakptr.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__weakptrz00()
	{
		AN_OBJECT;
		{	/* Llib/weakptr.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2132z00zz__weakptrz00));
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 81619416),
				BSTRING_TO_STRING(BGl_string2132z00zz__weakptrz00));
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 32372471),
				BSTRING_TO_STRING(BGl_string2132z00zz__weakptrz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2132z00zz__weakptrz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string2132z00zz__weakptrz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2132z00zz__weakptrz00));
			return
				BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2132z00zz__weakptrz00));
		}
	}

#ifdef __cplusplus
}
#endif
