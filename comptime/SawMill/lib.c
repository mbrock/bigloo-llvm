/*===========================================================================*/
/*   (SawMill/lib.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/lib.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_substz00zzsaw_libz00(obj_t, obj_t, obj_t);
	static obj_t BGl_walkz72z72zzsaw_libz00(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_libz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_substzd2appendzd2zzsaw_libz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzsaw_libz00();
	static obj_t BGl__substz00zzsaw_libz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_walkz00zzsaw_libz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzsaw_libz00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_libz00();
	static obj_t BGl_methodzd2initzd2zzsaw_libz00();
	static obj_t BGl__substzd2appendzd2zzsaw_libz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_substzd2appendzd2envz00zzsaw_libz00,
		BgL_bgl__substza7d2appendza71524z00, BGl__substzd2appendzd2zzsaw_libz00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_substzd2envzd2zzsaw_libz00,
		BgL_bgl__substza700za7za7saw_l1525za7, BGl__substz00zzsaw_libz00, 0L,
		BUNSPEC, 3);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_libz00(long
		BgL_checksumz00_142, char *BgL_fromz00_143)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_libz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_libz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzsaw_libz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_libz00()
	{
		AN_OBJECT;
		{	/* SawMill/lib.scm 1 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_lib");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_lib");
			return BUNSPEC;
		}
	}



/* subst */
	BGL_EXPORTED_DEF obj_t BGl_substz00zzsaw_libz00(obj_t BgL_lz00_1,
		obj_t BgL_xz00_2, obj_t BgL_yz00_3)
	{
		AN_OBJECT;
		{	/* SawMill/lib.scm 5 */
			return BGl_walkz72z72zzsaw_libz00(BgL_xz00_2, BgL_yz00_3, BgL_lz00_1);
		}
	}



/* walk' */
	obj_t BGl_walkz72z72zzsaw_libz00(obj_t BgL_xz00_133, obj_t BgL_yz00_132,
		obj_t BgL_lz00_93)
	{
		AN_OBJECT;
		{	/* SawMill/lib.scm 12 */
			if (NULLP(BgL_lz00_93))
				{	/* SawMill/lib.scm 7 */
					return BgL_lz00_93;
				}
			else
				{	/* SawMill/lib.scm 9 */
					obj_t BgL_oz00_96;

					BgL_oz00_96 = CAR(BgL_lz00_93);
					if ((BgL_oz00_96 == BgL_xz00_133))
						{	/* SawMill/lib.scm 10 */
							return
								MAKE_PAIR(BgL_yz00_132,
								BGl_walkz72z72zzsaw_libz00(BgL_xz00_133, BgL_yz00_132,
									CDR(BgL_lz00_93)));
						}
					else
						{	/* SawMill/lib.scm 10 */
							return
								MAKE_PAIR(BgL_oz00_96,
								BGl_walkz72z72zzsaw_libz00(BgL_xz00_133, BgL_yz00_132,
									CDR(BgL_lz00_93)));
						}
				}
		}
	}



/* _subst */
	obj_t BGl__substz00zzsaw_libz00(obj_t BgL_envz00_122, obj_t BgL_lz00_123,
		obj_t BgL_xz00_124, obj_t BgL_yz00_125)
	{
		AN_OBJECT;
		{	/* SawMill/lib.scm 5 */
			return
				BGl_walkz72z72zzsaw_libz00(BgL_xz00_124, BgL_yz00_125, BgL_lz00_123);
		}
	}



/* subst-append */
	BGL_EXPORTED_DEF obj_t BGl_substzd2appendzd2zzsaw_libz00(obj_t BgL_lz00_4,
		obj_t BgL_xz00_5, obj_t BgL_yz00_6)
	{
		AN_OBJECT;
		{	/* SawMill/lib.scm 15 */
			return BGl_walkz00zzsaw_libz00(BgL_xz00_5, BgL_yz00_6, BgL_lz00_4);
		}
	}



/* walk */
	obj_t BGl_walkz00zzsaw_libz00(obj_t BgL_xz00_131, obj_t BgL_yz00_130,
		obj_t BgL_lz00_104)
	{
		AN_OBJECT;
		{	/* SawMill/lib.scm 22 */
			if (NULLP(BgL_lz00_104))
				{	/* SawMill/lib.scm 17 */
					return BgL_lz00_104;
				}
			else
				{	/* SawMill/lib.scm 19 */
					obj_t BgL_oz00_107;

					BgL_oz00_107 = CAR(BgL_lz00_104);
					if ((BgL_oz00_107 == BgL_xz00_131))
						{	/* SawMill/lib.scm 20 */
							return
								bgl_append2(BgL_yz00_130,
								BGl_walkz00zzsaw_libz00(BgL_xz00_131, BgL_yz00_130,
									CDR(BgL_lz00_104)));
						}
					else
						{	/* SawMill/lib.scm 20 */
							return
								MAKE_PAIR(BgL_oz00_107,
								BGl_walkz00zzsaw_libz00(BgL_xz00_131, BgL_yz00_130,
									CDR(BgL_lz00_104)));
						}
				}
		}
	}



/* _subst-append */
	obj_t BGl__substzd2appendzd2zzsaw_libz00(obj_t BgL_envz00_126,
		obj_t BgL_lz00_127, obj_t BgL_xz00_128, obj_t BgL_yz00_129)
	{
		AN_OBJECT;
		{	/* SawMill/lib.scm 15 */
			return BGl_walkz00zzsaw_libz00(BgL_xz00_128, BgL_yz00_129, BgL_lz00_127);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_libz00()
	{
		AN_OBJECT;
		{	/* SawMill/lib.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_libz00()
	{
		AN_OBJECT;
		{	/* SawMill/lib.scm 1 */
			return BUNSPEC;
		}
	}

#ifdef __cplusplus
}
#endif
