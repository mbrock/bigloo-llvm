/*===========================================================================*/
/*   (Llib/type.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Llib/type.scm -indent -o objs/obj_u/Llib/type.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__typez00(long,
		char *);
	static obj_t BGl_toplevelzd2initzd2zz__typez00();
	static obj_t BGl_requirezd2initializa7ationz75zz__typez00 = BUNSPEC;
	static obj_t *__cnst;





/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__typez00(long
		BgL_checksumz00_815, char *BgL_fromz00_816)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__typez00))
				{
					BGl_requirezd2initializa7ationz75zz__typez00 = BBOOL(((bool_t) 0));
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__typez00()
	{
		AN_OBJECT;
		{	/* Llib/type.scm 14 */
			return BUNSPEC;
		}
	}

#ifdef __cplusplus
}
#endif
