/*===========================================================================*/
/*   (Llib/foreign.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Llib/foreign.scm -indent -o objs/obj_u/Llib/foreign.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl__stringzd2ptrzd2nullzf3zf3zz__foreignz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__foreignz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL bool_t BGl_foreignzd2nullzf3z21zz__foreignz00(obj_t);
	BGL_EXPORTED_DECL char *BGl_makezd2stringzd2ptrzd2nullzd2zz__foreignz00();
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_stringzd2ptrzd2nullzf3zf3zz__foreignz00(char *);
	extern long obj_to_cobj(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_foreignzf3zf3zz__foreignz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_voidza2zd2nullzf3z83zz__foreignz00(void *);
	static obj_t BGl__makezd2voidza2zd2nullza2zz__foreignz00(obj_t);
	static obj_t BGl__foreignzf3zf3zz__foreignz00(obj_t, obj_t);
	static obj_t BGl__makezd2stringzd2ptrzd2nullzd2zz__foreignz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__foreignz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_foreignzd2eqzf3z21zz__foreignz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__foreignz00();
	static obj_t BGl__foreignzd2nullzf3z21zz__foreignz00(obj_t, obj_t);
	static obj_t BGl__voidza2zd2nullzf3z83zz__foreignz00(obj_t, obj_t);
	extern obj_t void_star_to_obj(void *);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL void *BGl_makezd2voidza2zd2nullza2zz__foreignz00();
	extern obj_t string_to_bstring(char *);
	static obj_t BGl__foreignzd2eqzf3z21zz__foreignz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_objzd2ze3cobjz31zz__foreignz00(obj_t);
	static obj_t BGl__objzd2ze3cobjz31zz__foreignz00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_foreignzd2nullzf3zd2envzf3zz__foreignz00,
		BgL_bgl__foreignza7d2nullza71388z00,
		BGl__foreignzd2nullzf3z21zz__foreignz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2ptrzd2nullzf3zd2envz21zz__foreignz00,
		BgL_bgl__stringza7d2ptrza7d21389z00,
		BGl__stringzd2ptrzd2nullzf3zf3zz__foreignz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1380z00zz__foreignz00,
		BgL_bgl_string1380za700za7za7_1390za7, "foreign-null?", 13);
	      DEFINE_STRING(BGl_string1381z00zz__foreignz00,
		BgL_bgl_string1381za700za7za7_1391za7, "not a foreign object", 20);
	      DEFINE_STRING(BGl_string1382z00zz__foreignz00,
		BgL_bgl_string1382za700za7za7_1392za7,
		"/tmp/bigloo/runtime/Llib/foreign.scm", 36);
	      DEFINE_STRING(BGl_string1383z00zz__foreignz00,
		BgL_bgl_string1383za700za7za7_1393za7, "_string-ptr-null?", 17);
	      DEFINE_STRING(BGl_string1384z00zz__foreignz00,
		BgL_bgl_string1384za700za7za7_1394za7, "string", 6);
	      DEFINE_STRING(BGl_string1385z00zz__foreignz00,
		BgL_bgl_string1385za700za7za7_1395za7, "_void*-null?", 12);
	      DEFINE_STRING(BGl_string1386z00zz__foreignz00,
		BgL_bgl_string1386za700za7za7_1396za7, "void*", 5);
	      DEFINE_STRING(BGl_string1387z00zz__foreignz00,
		BgL_bgl_string1387za700za7za7_1397za7, "__foreign", 9);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_foreignzf3zd2envz21zz__foreignz00,
		BgL_bgl__foreignza7f3za7f3za7za71398z00, BGl__foreignzf3zf3zz__foreignz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_foreignzd2eqzf3zd2envzf3zz__foreignz00,
		BgL_bgl__foreignza7d2eqza7f31399z00, BGl__foreignzd2eqzf3z21zz__foreignz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2voidza2zd2nullzd2envz70zz__foreignz00,
		BgL_bgl__makeza7d2voidza7a2za71400za7,
		BGl__makezd2voidza2zd2nullza2zz__foreignz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_voidza2zd2nullzf3zd2envz51zz__foreignz00,
		BgL_bgl__voidza7a2za7d2nullza71401za7,
		BGl__voidza2zd2nullzf3z83zz__foreignz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2stringzd2ptrzd2nullzd2envz00zz__foreignz00,
		BgL_bgl__makeza7d2stringza7d1402z00,
		BGl__makezd2stringzd2ptrzd2nullzd2zz__foreignz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_objzd2ze3cobjzd2envze3zz__foreignz00,
		BgL_bgl__objza7d2za7e3cobjza731403za7, BGl__objzd2ze3cobjz31zz__foreignz00,
		0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__foreignz00(long
		BgL_checksumz00_666, char *BgL_fromz00_667)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__foreignz00))
				{
					BGl_requirezd2initializa7ationz75zz__foreignz00 = BBOOL(((bool_t) 0));
					BGl_importedzd2moduleszd2initz00zz__foreignz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* foreign? */
	BGL_EXPORTED_DEF bool_t BGl_foreignzf3zf3zz__foreignz00(obj_t BgL_objz00_1)
	{
		AN_OBJECT;
		{	/* Llib/foreign.scm 89 */
			return FOREIGNP(BgL_objz00_1);
		}
	}



/* _foreign? */
	obj_t BGl__foreignzf3zf3zz__foreignz00(obj_t BgL_envz00_640,
		obj_t BgL_objz00_641)
	{
		AN_OBJECT;
		{	/* Llib/foreign.scm 89 */
			return BBOOL(FOREIGNP(BgL_objz00_641));
		}
	}



/* foreign-eq? */
	BGL_EXPORTED_DEF bool_t BGl_foreignzd2eqzf3z21zz__foreignz00(obj_t
		BgL_o1z00_2, obj_t BgL_o2z00_3)
	{
		AN_OBJECT;
		{	/* Llib/foreign.scm 95 */
			return FOREIGN_EQP(BgL_o1z00_2, BgL_o2z00_3);
		}
	}



/* _foreign-eq? */
	obj_t BGl__foreignzd2eqzf3z21zz__foreignz00(obj_t BgL_envz00_642,
		obj_t BgL_o1z00_643, obj_t BgL_o2z00_644)
	{
		AN_OBJECT;
		{	/* Llib/foreign.scm 95 */
			return BBOOL(FOREIGN_EQP(BgL_o1z00_643, BgL_o2z00_644));
		}
	}



/* foreign-null? */
	BGL_EXPORTED_DEF bool_t BGl_foreignzd2nullzf3z21zz__foreignz00(obj_t
		BgL_objz00_4)
	{
		AN_OBJECT;
		{	/* Llib/foreign.scm 101 */
			if (FOREIGNP(BgL_objz00_4))
				{	/* Llib/foreign.scm 102 */
					return FOREIGN_NULLP(BgL_objz00_4);
				}
			else
				{	/* Llib/foreign.scm 102 */
					return
						CBOOL(BGl_errorz00zz__errorz00(BGl_string1380z00zz__foreignz00,
							BGl_string1381z00zz__foreignz00, BgL_objz00_4));
				}
		}
	}



/* _foreign-null? */
	obj_t BGl__foreignzd2nullzf3z21zz__foreignz00(obj_t BgL_envz00_645,
		obj_t BgL_objz00_646)
	{
		AN_OBJECT;
		{	/* Llib/foreign.scm 101 */
			{	/* Llib/foreign.scm 102 */
				bool_t BgL_auxz00_683;

				if (FOREIGNP(BgL_objz00_646))
					{	/* Llib/foreign.scm 102 */
						BgL_auxz00_683 = FOREIGN_NULLP(BgL_objz00_646);
					}
				else
					{	/* Llib/foreign.scm 102 */
						BgL_auxz00_683 =
							CBOOL(BGl_errorz00zz__errorz00(BGl_string1380z00zz__foreignz00,
								BGl_string1381z00zz__foreignz00, BgL_objz00_646));
					}
				return BBOOL(BgL_auxz00_683);
			}
		}
	}



/* string-ptr-null? */
	BGL_EXPORTED_DEF bool_t BGl_stringzd2ptrzd2nullzf3zf3zz__foreignz00(char
		*BgL_objz00_5)
	{
		AN_OBJECT;
		{	/* Llib/foreign.scm 109 */
			return STRING_PTR_NULL(BgL_objz00_5);
		}
	}



/* _string-ptr-null? */
	obj_t BGl__stringzd2ptrzd2nullzf3zf3zz__foreignz00(obj_t BgL_envz00_647,
		obj_t BgL_objz00_648)
	{
		AN_OBJECT;
		{	/* Llib/foreign.scm 109 */
			{	/* Llib/foreign.scm 110 */
				bool_t BgL_auxz00_691;

				{	/* Llib/foreign.scm 110 */
					char *BgL_objz00_663;

					{	/* Llib/foreign.scm 110 */
						obj_t BgL_auxz00_692;

						if (STRINGP(BgL_objz00_648))
							{	/* Llib/foreign.scm 110 */
								BgL_auxz00_692 = BgL_objz00_648;
							}
						else
							{
								obj_t BgL_auxz00_695;

								BgL_auxz00_695 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1382z00zz__foreignz00, BINT(((long) 4782)),
									BGl_string1383z00zz__foreignz00,
									BGl_string1384z00zz__foreignz00, BgL_objz00_648);
								FAILURE(BgL_auxz00_695, BFALSE, BFALSE);
							}
						BgL_objz00_663 = BSTRING_TO_STRING(BgL_auxz00_692);
					}
					BgL_auxz00_691 = STRING_PTR_NULL(BgL_objz00_663);
				}
				return BBOOL(BgL_auxz00_691);
			}
		}
	}



/* obj->cobj */
	BGL_EXPORTED_DEF long BGl_objzd2ze3cobjz31zz__foreignz00(obj_t BgL_objz00_6)
	{
		AN_OBJECT;
		{	/* Llib/foreign.scm 115 */
			return obj_to_cobj(BgL_objz00_6);
		}
	}



/* _obj->cobj */
	obj_t BGl__objzd2ze3cobjz31zz__foreignz00(obj_t BgL_envz00_649,
		obj_t BgL_objz00_650)
	{
		AN_OBJECT;
		{	/* Llib/foreign.scm 115 */
			return (obj_t) (obj_to_cobj(BgL_objz00_650));
		}
	}



/* void*-null? */
	BGL_EXPORTED_DEF bool_t BGl_voidza2zd2nullzf3z83zz__foreignz00(void
		*BgL_objz00_7)
	{
		AN_OBJECT;
		{	/* Llib/foreign.scm 121 */
			return FOREIGN_PTR_NULL(BgL_objz00_7);
		}
	}



/* _void*-null? */
	obj_t BGl__voidza2zd2nullzf3z83zz__foreignz00(obj_t BgL_envz00_651,
		obj_t BgL_objz00_652)
	{
		AN_OBJECT;
		{	/* Llib/foreign.scm 121 */
			{	/* Llib/foreign.scm 122 */
				bool_t BgL_auxz00_706;

				{	/* Llib/foreign.scm 122 */
					void *BgL_objz00_665;

					if (FOREIGNP(BgL_objz00_652))
						{	/* Llib/foreign.scm 122 */
							BgL_objz00_665 = FOREIGN_TO_COBJ(BgL_objz00_652);
						}
					else
						{
							obj_t BgL_auxz00_710;

							BgL_auxz00_710 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1382z00zz__foreignz00,
								BINT(((long) 5349)), BGl_string1385z00zz__foreignz00,
								BGl_string1386z00zz__foreignz00, BgL_objz00_652);
							FAILURE(BgL_auxz00_710, BFALSE, BFALSE);
						}
					BgL_auxz00_706 = FOREIGN_PTR_NULL(BgL_objz00_665);
				}
				return BBOOL(BgL_auxz00_706);
			}
		}
	}



/* make-string-ptr-null */
	BGL_EXPORTED_DEF char *BGl_makezd2stringzd2ptrzd2nullzd2zz__foreignz00()
	{
		AN_OBJECT;
		{	/* Llib/foreign.scm 127 */
			return (0L);
		}
	}



/* _make-string-ptr-null */
	obj_t BGl__makezd2stringzd2ptrzd2nullzd2zz__foreignz00(obj_t BgL_envz00_653)
	{
		AN_OBJECT;
		{	/* Llib/foreign.scm 127 */
			return string_to_bstring((0L));
		}
	}



/* make-void*-null */
	BGL_EXPORTED_DEF void *BGl_makezd2voidza2zd2nullza2zz__foreignz00()
	{
		AN_OBJECT;
		{	/* Llib/foreign.scm 133 */
			return (0L);
		}
	}



/* _make-void*-null */
	obj_t BGl__makezd2voidza2zd2nullza2zz__foreignz00(obj_t BgL_envz00_654)
	{
		AN_OBJECT;
		{	/* Llib/foreign.scm 133 */
			return void_star_to_obj((0L));
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__foreignz00()
	{
		AN_OBJECT;
		{	/* Llib/foreign.scm 18 */
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string1387z00zz__foreignz00));
		}
	}

#ifdef __cplusplus
}
#endif
