/*===========================================================================*/
/*   (Ieee/boolean.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Ieee/boolean.scm -indent -o objs/obj_u/Ieee/boolean.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long, char *);
	BGL_EXPORTED_DECL bool_t BGl_notz00zz__r4_booleans_6_1z00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__r4_booleans_6_1z00 =
		BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_booleanzf3zf3zz__r4_booleans_6_1z00(obj_t);
	static obj_t BGl__booleanzf3zf3zz__r4_booleans_6_1z00(obj_t, obj_t);
	static obj_t BGl__notz00zz__r4_booleans_6_1z00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_notzd2envzd2zz__r4_booleans_6_1z00,
		BgL_bgl__notza700za7za7__r4_bo1376za7, BGl__notz00zz__r4_booleans_6_1z00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_booleanzf3zd2envz21zz__r4_booleans_6_1z00,
		BgL_bgl__booleanza7f3za7f3za7za71377z00,
		BGl__booleanzf3zf3zz__r4_booleans_6_1z00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long
		BgL_checksumz00_617, char *BgL_fromz00_618)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__r4_booleans_6_1z00))
				{
					BGl_requirezd2initializa7ationz75zz__r4_booleans_6_1z00 =
						BBOOL(((bool_t) 0));
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* not */
	BGL_EXPORTED_DEF bool_t BGl_notz00zz__r4_booleans_6_1z00(obj_t BgL_objz00_1)
	{
		AN_OBJECT;
		{	/* Ieee/boolean.scm 50 */
			if (CBOOL(BgL_objz00_1))
				{	/* Ieee/boolean.scm 51 */
					return ((bool_t) 0);
				}
			else
				{	/* Ieee/boolean.scm 51 */
					return ((bool_t) 1);
				}
		}
	}



/* _not */
	obj_t BGl__notz00zz__r4_booleans_6_1z00(obj_t BgL_envz00_611,
		obj_t BgL_objz00_612)
	{
		AN_OBJECT;
		{	/* Ieee/boolean.scm 50 */
			{	/* Ieee/boolean.scm 51 */
				bool_t BgL_auxz00_624;

				if (CBOOL(BgL_objz00_612))
					{	/* Ieee/boolean.scm 51 */
						BgL_auxz00_624 = ((bool_t) 0);
					}
				else
					{	/* Ieee/boolean.scm 51 */
						BgL_auxz00_624 = ((bool_t) 1);
					}
				return BBOOL(BgL_auxz00_624);
			}
		}
	}



/* boolean? */
	BGL_EXPORTED_DEF bool_t BGl_booleanzf3zf3zz__r4_booleans_6_1z00(obj_t
		BgL_objz00_2)
	{
		AN_OBJECT;
		{	/* Ieee/boolean.scm 56 */
			return BOOLEANP(BgL_objz00_2);
		}
	}



/* _boolean? */
	obj_t BGl__booleanzf3zf3zz__r4_booleans_6_1z00(obj_t BgL_envz00_613,
		obj_t BgL_objz00_614)
	{
		AN_OBJECT;
		{	/* Ieee/boolean.scm 56 */
			return BBOOL(BOOLEANP(BgL_objz00_614));
		}
	}

#ifdef __cplusplus
}
#endif
