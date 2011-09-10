/*===========================================================================*/
/*   (Lalr/util.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Lalr/util.scm -indent -o objs/obj_u/Lalr/util.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_requirezd2initializa7ationz75zz__lalr_utilz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__lalr_utilz00();
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	static obj_t BGl__filterz00zz__lalr_utilz00(obj_t, obj_t, obj_t);
	static obj_t BGl_loopz72z72z00zz__lalr_utilz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__lalr_utilz00();
	static obj_t BGl__sinsertz00zz__lalr_utilz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_poszd2inzd2listz00zz__lalr_utilz00(obj_t, obj_t);
	static obj_t BGl__sunionz00zz__lalr_utilz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__lalr_utilz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_filterz00zz__lalr_utilz00(obj_t, obj_t);
	static obj_t BGl__poszd2inzd2listz00zz__lalr_utilz00(obj_t, obj_t, obj_t);
	static obj_t BGl_loopz00zz__lalr_utilz00(obj_t, obj_t);
	static obj_t BGl_loopz72z72zz__lalr_utilz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sunionz00zz__lalr_utilz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sinsertz00zz__lalr_utilz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__lalr_utilz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sinsertzd2envzd2zz__lalr_utilz00,
		BgL_bgl__sinsertza700za7za7__l2177za7, BGl__sinsertz00zz__lalr_utilz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sunionzd2envzd2zz__lalr_utilz00,
		BgL_bgl__sunionza700za7za7__la2178za7, BGl__sunionz00zz__lalr_utilz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_poszd2inzd2listzd2envzd2zz__lalr_utilz00,
		BgL_bgl__posza7d2inza7d2list2179z00,
		BGl__poszd2inzd2listz00zz__lalr_utilz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2176z00zz__lalr_utilz00,
		BgL_bgl_string2176za700za7za7_2180za7, "__lalr_util", 11);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_filterzd2envzd2zz__lalr_utilz00,
		BgL_bgl__filterza700za7za7__la2181za7, BGl__filterz00zz__lalr_utilz00, 0L,
		BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__lalr_utilz00(long
		BgL_checksumz00_1524, char *BgL_fromz00_1525)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__lalr_utilz00))
				{
					BGl_requirezd2initializa7ationz75zz__lalr_utilz00 =
						BBOOL(((bool_t) 0));
					BGl_importedzd2moduleszd2initz00zz__lalr_utilz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* pos-in-list */
	BGL_EXPORTED_DEF obj_t BGl_poszd2inzd2listz00zz__lalr_utilz00(obj_t
		BgL_xz00_1, obj_t BgL_lstz00_2)
	{
		AN_OBJECT;
		{	/* Lalr/util.scm 48 */
			{
				obj_t BgL_lstz00_1266;

				long BgL_iz00_1267;

				BgL_lstz00_1266 = BgL_lstz00_2;
				BgL_iz00_1267 = ((long) 0);
			BgL_loopz00_1265:
				if (PAIRP(BgL_lstz00_1266))
					{	/* Lalr/util.scm 49 */
						if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(CAR(BgL_lstz00_1266),
								BgL_xz00_1))
							{	/* Lalr/util.scm 49 */
								return BINT(BgL_iz00_1267);
							}
						else
							{
								long BgL_iz00_1538;

								obj_t BgL_lstz00_1536;

								BgL_lstz00_1536 = CDR(BgL_lstz00_1266);
								BgL_iz00_1538 = (BgL_iz00_1267 + ((long) 1));
								BgL_iz00_1267 = BgL_iz00_1538;
								BgL_lstz00_1266 = BgL_lstz00_1536;
								goto BgL_loopz00_1265;
							}
					}
				else
					{	/* Lalr/util.scm 49 */
						return BFALSE;
					}
			}
		}
	}



/* _pos-in-list */
	obj_t BGl__poszd2inzd2listz00zz__lalr_utilz00(obj_t BgL_envz00_1504,
		obj_t BgL_xz00_1505, obj_t BgL_lstz00_1506)
	{
		AN_OBJECT;
		{	/* Lalr/util.scm 48 */
			return
				BGl_poszd2inzd2listz00zz__lalr_utilz00(BgL_xz00_1505, BgL_lstz00_1506);
		}
	}



/* sunion */
	BGL_EXPORTED_DEF obj_t BGl_sunionz00zz__lalr_utilz00(obj_t BgL_lst1z00_3,
		obj_t BgL_lst2z00_4)
	{
		AN_OBJECT;
		{	/* Lalr/util.scm 54 */
			return BGl_loopz72z72z00zz__lalr_utilz00(BgL_lst1z00_3, BgL_lst2z00_4);
		}
	}



/* loop'' */
	obj_t BGl_loopz72z72z00zz__lalr_utilz00(obj_t BgL_l1z00_787,
		obj_t BgL_l2z00_788)
	{
		AN_OBJECT;
		{	/* Lalr/util.scm 55 */
		BGl_loopz72z72z00zz__lalr_utilz00:
			if (NULLP(BgL_l1z00_787))
				{	/* Lalr/util.scm 57 */
					return BgL_l2z00_788;
				}
			else
				{	/* Lalr/util.scm 57 */
					if (NULLP(BgL_l2z00_788))
						{	/* Lalr/util.scm 58 */
							return BgL_l1z00_787;
						}
					else
						{	/* Lalr/util.scm 60 */
							obj_t BgL_xz00_792;

							obj_t BgL_yz00_793;

							BgL_xz00_792 = CAR(BgL_l1z00_787);
							BgL_yz00_793 = CAR(BgL_l2z00_788);
							if (((long) CINT(BgL_xz00_792) > (long) CINT(BgL_yz00_793)))
								{	/* Lalr/util.scm 62 */
									return
										MAKE_PAIR(BgL_yz00_793,
										BGl_loopz72z72z00zz__lalr_utilz00(BgL_l1z00_787,
											CDR(BgL_l2z00_788)));
								}
							else
								{	/* Lalr/util.scm 62 */
									if (((long) CINT(BgL_xz00_792) < (long) CINT(BgL_yz00_793)))
										{	/* Lalr/util.scm 64 */
											return
												MAKE_PAIR(BgL_xz00_792,
												BGl_loopz72z72z00zz__lalr_utilz00(CDR(BgL_l1z00_787),
													BgL_l2z00_788));
										}
									else
										{
											obj_t BgL_l1z00_1562;

											BgL_l1z00_1562 = CDR(BgL_l1z00_787);
											BgL_l1z00_787 = BgL_l1z00_1562;
											goto BGl_loopz72z72z00zz__lalr_utilz00;
										}
								}
						}
				}
		}
	}



/* _sunion */
	obj_t BGl__sunionz00zz__lalr_utilz00(obj_t BgL_envz00_1507,
		obj_t BgL_lst1z00_1508, obj_t BgL_lst2z00_1509)
	{
		AN_OBJECT;
		{	/* Lalr/util.scm 54 */
			return
				BGl_loopz72z72z00zz__lalr_utilz00(BgL_lst1z00_1508, BgL_lst2z00_1509);
		}
	}



/* sinsert */
	BGL_EXPORTED_DEF obj_t BGl_sinsertz00zz__lalr_utilz00(obj_t BgL_elemz00_5,
		obj_t BgL_lstz00_6)
	{
		AN_OBJECT;
		{	/* Lalr/util.scm 70 */
			return BGl_loopz72z72zz__lalr_utilz00(BgL_elemz00_5, BgL_lstz00_6);
		}
	}



/* loop' */
	obj_t BGl_loopz72z72zz__lalr_utilz00(obj_t BgL_elemz00_1517,
		obj_t BgL_l1z00_803)
	{
		AN_OBJECT;
		{	/* Lalr/util.scm 71 */
			if (NULLP(BgL_l1z00_803))
				{	/* Lalr/util.scm 72 */
					return MAKE_PAIR(BgL_elemz00_1517, BgL_l1z00_803);
				}
			else
				{	/* Lalr/util.scm 74 */
					obj_t BgL_xz00_806;

					BgL_xz00_806 = CAR(BgL_l1z00_803);
					if (((long) CINT(BgL_elemz00_1517) < (long) CINT(BgL_xz00_806)))
						{	/* Lalr/util.scm 75 */
							return MAKE_PAIR(BgL_elemz00_1517, BgL_l1z00_803);
						}
					else
						{	/* Lalr/util.scm 75 */
							if (((long) CINT(BgL_elemz00_1517) > (long) CINT(BgL_xz00_806)))
								{	/* Lalr/util.scm 77 */
									return
										MAKE_PAIR(BgL_xz00_806,
										BGl_loopz72z72zz__lalr_utilz00(BgL_elemz00_1517,
											CDR(BgL_l1z00_803)));
								}
							else
								{	/* Lalr/util.scm 77 */
									return BgL_l1z00_803;
								}
						}
				}
		}
	}



/* _sinsert */
	obj_t BGl__sinsertz00zz__lalr_utilz00(obj_t BgL_envz00_1510,
		obj_t BgL_elemz00_1511, obj_t BgL_lstz00_1512)
	{
		AN_OBJECT;
		{	/* Lalr/util.scm 70 */
			return BGl_loopz72z72zz__lalr_utilz00(BgL_elemz00_1511, BgL_lstz00_1512);
		}
	}



/* filter */
	BGL_EXPORTED_DEF obj_t BGl_filterz00zz__lalr_utilz00(obj_t BgL_pz00_7,
		obj_t BgL_lstz00_8)
	{
		AN_OBJECT;
		{	/* Lalr/util.scm 82 */
			return BGl_loopz00zz__lalr_utilz00(BgL_pz00_7, BgL_lstz00_8);
		}
	}



/* loop */
	obj_t BGl_loopz00zz__lalr_utilz00(obj_t BgL_pz00_1516, obj_t BgL_lz00_813)
	{
		AN_OBJECT;
		{	/* Lalr/util.scm 83 */
		BGl_loopz00zz__lalr_utilz00:
			if (NULLP(BgL_lz00_813))
				{	/* Lalr/util.scm 84 */
					return BNIL;
				}
			else
				{	/* Lalr/util.scm 86 */
					obj_t BgL_xz00_816;

					obj_t BgL_yz00_817;

					BgL_xz00_816 = CAR(BgL_lz00_813);
					BgL_yz00_817 = CDR(BgL_lz00_813);
					if (CBOOL(PROCEDURE_ENTRY(BgL_pz00_1516) (BgL_pz00_1516, BgL_xz00_816,
								BEOA)))
						{	/* Lalr/util.scm 87 */
							return
								MAKE_PAIR(BgL_xz00_816,
								BGl_loopz00zz__lalr_utilz00(BgL_pz00_1516, BgL_yz00_817));
						}
					else
						{
							obj_t BgL_lz00_1594;

							BgL_lz00_1594 = BgL_yz00_817;
							BgL_lz00_813 = BgL_lz00_1594;
							goto BGl_loopz00zz__lalr_utilz00;
						}
				}
		}
	}



/* _filter */
	obj_t BGl__filterz00zz__lalr_utilz00(obj_t BgL_envz00_1513,
		obj_t BgL_pz00_1514, obj_t BgL_lstz00_1515)
	{
		AN_OBJECT;
		{	/* Lalr/util.scm 82 */
			return BGl_loopz00zz__lalr_utilz00(BgL_pz00_1514, BgL_lstz00_1515);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__lalr_utilz00()
	{
		AN_OBJECT;
		{	/* Lalr/util.scm 11 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__lalr_utilz00()
	{
		AN_OBJECT;
		{	/* Lalr/util.scm 11 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__lalr_utilz00()
	{
		AN_OBJECT;
		{	/* Lalr/util.scm 11 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2176z00zz__lalr_utilz00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2176z00zz__lalr_utilz00));
		}
	}

#ifdef __cplusplus
}
#endif
