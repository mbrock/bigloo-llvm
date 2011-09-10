/*===========================================================================*/
/*   (Lalr/global.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Lalr/global.scm -indent -o objs/obj_u/Lalr/global.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DEF obj_t BGl_Fz00zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_actionzd2tablezd2zz__lalr_globalz00 = BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_kernelzd2endzd2zz__lalr_globalz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__lalr_globalz00();
	BGL_EXPORTED_DEF obj_t BGl_rprecz00zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_nshiftsz00zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_rrhsz00zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_tozd2statezd2zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_derivesz00zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_lookaheadsz00zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_consistentz00zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_shiftzd2tablezd2zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_reductionzd2tablezd2zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_actionsz00zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_kernelzd2basezd2zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_nsymsz00zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_nstatesz00zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_ritemz00zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_redzd2setzd2zz__lalr_globalz00 = BUNSPEC;
	static obj_t BGl_importedzd2moduleszd2initz00zz__lalr_globalz00();
	BGL_EXPORTED_DEF obj_t BGl_ntermsz00zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_ngotosz00zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_fromzd2statezd2zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_nrulesz00zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_LArulenoz00zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_nullablez00zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_maxrhsz00zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_shiftzd2symbolzd2zz__lalr_globalz00 = BUNSPEC;
	static obj_t BGl__initializa7ezd2allz75zz__lalr_globalz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__lalr_globalz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DEF obj_t BGl_shiftzd2setzd2zz__lalr_globalz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zz__lalr_globalz00();
	BGL_EXPORTED_DEF obj_t BGl_nitemsz00zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_includesz00zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_tokenzd2setzd2siza7eza7zz__lalr_globalz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_nvarsz00zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_lastzd2reductionzd2zz__lalr_globalz00 = BUNSPEC;
	extern obj_t make_vector(int, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_nonterminalsz00zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_firstzd2shiftzd2zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_terminalsz00zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_firstzd2statezd2zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_initializa7ezd2allz75zz__lalr_globalz00();
	BGL_EXPORTED_DEF obj_t BGl_rlhsz00zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_LAz00zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_gotozd2mapzd2zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_fderivesz00zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_STATEzd2TABLEzd2SIZEz00zz__lalr_globalz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_firstzd2reductionzd2zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_lastzd2shiftzd2zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_lastzd2statezd2zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_finalzd2statezd2zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_lookbackz00zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_statezd2tablezd2zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_acceszd2symbolzd2zz__lalr_globalz00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zz__lalr_globalz00();
	BGL_EXPORTED_DEF obj_t BGl_firstsz00zz__lalr_globalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_grammarz00zz__lalr_globalz00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_initializa7ezd2allzd2envza7zz__lalr_globalz00,
		BgL_bgl__initializa7a7eza7d22233z00,
		BGl__initializa7ezd2allz75zz__lalr_globalz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2232z00zz__lalr_globalz00,
		BgL_bgl_string2232za700za7za7_2234za7, "__lalr_global", 13);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__lalr_globalz00(long
		BgL_checksumz00_1391, char *BgL_fromz00_1392)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__lalr_globalz00))
				{
					BGl_requirezd2initializa7ationz75zz__lalr_globalz00 =
						BBOOL(((bool_t) 0));
					BGl_importedzd2moduleszd2initz00zz__lalr_globalz00();
					BGl_toplevelzd2initzd2zz__lalr_globalz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__lalr_globalz00()
	{
		AN_OBJECT;
		{	/* Lalr/global.scm 11 */
			BGl_rrhsz00zz__lalr_globalz00 = BFALSE;
			BGl_rlhsz00zz__lalr_globalz00 = BFALSE;
			BGl_ritemz00zz__lalr_globalz00 = BFALSE;
			BGl_rprecz00zz__lalr_globalz00 = BFALSE;
			BGl_nullablez00zz__lalr_globalz00 = BFALSE;
			BGl_derivesz00zz__lalr_globalz00 = BFALSE;
			BGl_fderivesz00zz__lalr_globalz00 = BFALSE;
			BGl_firstsz00zz__lalr_globalz00 = BFALSE;
			BGl_kernelzd2basezd2zz__lalr_globalz00 = BFALSE;
			BGl_kernelzd2endzd2zz__lalr_globalz00 = BFALSE;
			BGl_shiftzd2symbolzd2zz__lalr_globalz00 = BFALSE;
			BGl_shiftzd2setzd2zz__lalr_globalz00 = BFALSE;
			BGl_redzd2setzd2zz__lalr_globalz00 = BFALSE;
			BGl_statezd2tablezd2zz__lalr_globalz00 = BFALSE;
			BGl_acceszd2symbolzd2zz__lalr_globalz00 = BFALSE;
			BGl_reductionzd2tablezd2zz__lalr_globalz00 = BFALSE;
			BGl_shiftzd2tablezd2zz__lalr_globalz00 = BFALSE;
			BGl_consistentz00zz__lalr_globalz00 = BFALSE;
			BGl_lookaheadsz00zz__lalr_globalz00 = BFALSE;
			BGl_LAz00zz__lalr_globalz00 = BFALSE;
			BGl_LArulenoz00zz__lalr_globalz00 = BFALSE;
			BGl_lookbackz00zz__lalr_globalz00 = BFALSE;
			BGl_gotozd2mapzd2zz__lalr_globalz00 = BFALSE;
			BGl_fromzd2statezd2zz__lalr_globalz00 = BFALSE;
			BGl_tozd2statezd2zz__lalr_globalz00 = BFALSE;
			BGl_includesz00zz__lalr_globalz00 = BFALSE;
			BGl_Fz00zz__lalr_globalz00 = BFALSE;
			BGl_actionzd2tablezd2zz__lalr_globalz00 = BFALSE;
			BGl_nitemsz00zz__lalr_globalz00 = BFALSE;
			BGl_nrulesz00zz__lalr_globalz00 = BFALSE;
			BGl_nvarsz00zz__lalr_globalz00 = BFALSE;
			BGl_ntermsz00zz__lalr_globalz00 = BFALSE;
			BGl_nsymsz00zz__lalr_globalz00 = BFALSE;
			BGl_nstatesz00zz__lalr_globalz00 = BFALSE;
			BGl_firstzd2statezd2zz__lalr_globalz00 = BFALSE;
			BGl_lastzd2statezd2zz__lalr_globalz00 = BFALSE;
			BGl_finalzd2statezd2zz__lalr_globalz00 = BFALSE;
			BGl_firstzd2shiftzd2zz__lalr_globalz00 = BFALSE;
			BGl_lastzd2shiftzd2zz__lalr_globalz00 = BFALSE;
			BGl_firstzd2reductionzd2zz__lalr_globalz00 = BFALSE;
			BGl_lastzd2reductionzd2zz__lalr_globalz00 = BFALSE;
			BGl_nshiftsz00zz__lalr_globalz00 = BFALSE;
			BGl_maxrhsz00zz__lalr_globalz00 = BFALSE;
			BGl_ngotosz00zz__lalr_globalz00 = BFALSE;
			BGl_tokenzd2setzd2siza7eza7zz__lalr_globalz00 = BFALSE;
			BGl_grammarz00zz__lalr_globalz00 = BFALSE;
			BGl_terminalsz00zz__lalr_globalz00 = BFALSE;
			BGl_nonterminalsz00zz__lalr_globalz00 = BFALSE;
			BGl_actionsz00zz__lalr_globalz00 = BFALSE;
			return (BGl_STATEzd2TABLEzd2SIZEz00zz__lalr_globalz00 =
				BINT(((long) 1009)), BUNSPEC);
		}
	}



/* initialize-all */
	BGL_EXPORTED_DEF obj_t BGl_initializa7ezd2allz75zz__lalr_globalz00()
	{
		AN_OBJECT;
		{	/* Lalr/global.scm 149 */
			BGl_rrhsz00zz__lalr_globalz00 = BFALSE;
			BGl_rlhsz00zz__lalr_globalz00 = BFALSE;
			BGl_ritemz00zz__lalr_globalz00 = BFALSE;
			BGl_rprecz00zz__lalr_globalz00 = BFALSE;
			BGl_nullablez00zz__lalr_globalz00 = BFALSE;
			BGl_derivesz00zz__lalr_globalz00 = BFALSE;
			BGl_fderivesz00zz__lalr_globalz00 = BFALSE;
			BGl_firstsz00zz__lalr_globalz00 = BFALSE;
			BGl_kernelzd2basezd2zz__lalr_globalz00 = BFALSE;
			BGl_kernelzd2endzd2zz__lalr_globalz00 = BFALSE;
			BGl_shiftzd2symbolzd2zz__lalr_globalz00 = BFALSE;
			BGl_shiftzd2setzd2zz__lalr_globalz00 = BFALSE;
			BGl_redzd2setzd2zz__lalr_globalz00 = BFALSE;
			BGl_statezd2tablezd2zz__lalr_globalz00 =
				make_vector(CINT(BGl_STATEzd2TABLEzd2SIZEz00zz__lalr_globalz00), BNIL);
			BGl_acceszd2symbolzd2zz__lalr_globalz00 = BFALSE;
			BGl_reductionzd2tablezd2zz__lalr_globalz00 = BFALSE;
			BGl_shiftzd2tablezd2zz__lalr_globalz00 = BFALSE;
			BGl_consistentz00zz__lalr_globalz00 = BFALSE;
			BGl_lookaheadsz00zz__lalr_globalz00 = BFALSE;
			BGl_LAz00zz__lalr_globalz00 = BFALSE;
			BGl_LArulenoz00zz__lalr_globalz00 = BFALSE;
			BGl_lookbackz00zz__lalr_globalz00 = BFALSE;
			BGl_gotozd2mapzd2zz__lalr_globalz00 = BFALSE;
			BGl_fromzd2statezd2zz__lalr_globalz00 = BFALSE;
			BGl_tozd2statezd2zz__lalr_globalz00 = BFALSE;
			BGl_includesz00zz__lalr_globalz00 = BFALSE;
			BGl_Fz00zz__lalr_globalz00 = BFALSE;
			BGl_actionzd2tablezd2zz__lalr_globalz00 = BFALSE;
			BGl_nstatesz00zz__lalr_globalz00 = BFALSE;
			BGl_firstzd2statezd2zz__lalr_globalz00 = BFALSE;
			BGl_lastzd2statezd2zz__lalr_globalz00 = BFALSE;
			BGl_finalzd2statezd2zz__lalr_globalz00 = BFALSE;
			BGl_firstzd2shiftzd2zz__lalr_globalz00 = BFALSE;
			BGl_lastzd2shiftzd2zz__lalr_globalz00 = BFALSE;
			BGl_firstzd2reductionzd2zz__lalr_globalz00 = BFALSE;
			BGl_lastzd2reductionzd2zz__lalr_globalz00 = BFALSE;
			BGl_nshiftsz00zz__lalr_globalz00 = BFALSE;
			BGl_maxrhsz00zz__lalr_globalz00 = BFALSE;
			BGl_ngotosz00zz__lalr_globalz00 = BFALSE;
			BGl_tokenzd2setzd2siza7eza7zz__lalr_globalz00 = BFALSE;
			BGl_grammarz00zz__lalr_globalz00 = BFALSE;
			BGl_terminalsz00zz__lalr_globalz00 = BFALSE;
			BGl_nonterminalsz00zz__lalr_globalz00 = BFALSE;
			return (BGl_actionsz00zz__lalr_globalz00 = BFALSE, BUNSPEC);
		}
	}



/* _initialize-all */
	obj_t BGl__initializa7ezd2allz75zz__lalr_globalz00(obj_t BgL_envz00_1390)
	{
		AN_OBJECT;
		{	/* Lalr/global.scm 149 */
			return BGl_initializa7ezd2allz75zz__lalr_globalz00();
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__lalr_globalz00()
	{
		AN_OBJECT;
		{	/* Lalr/global.scm 11 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__lalr_globalz00()
	{
		AN_OBJECT;
		{	/* Lalr/global.scm 11 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__lalr_globalz00()
	{
		AN_OBJECT;
		{	/* Lalr/global.scm 11 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2232z00zz__lalr_globalz00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2232z00zz__lalr_globalz00));
		}
	}

#ifdef __cplusplus
}
#endif
