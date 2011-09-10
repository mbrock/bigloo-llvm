/*===========================================================================*/
/*   (Cfa/loose.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/loose.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_globalz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
		obj_t BgL_modulez00;
		obj_t BgL_importz00;
		bool_t BgL_evaluablezf3zf3;
		obj_t BgL_libraryz00;
		bool_t BgL_userzf3zf3;
		obj_t BgL_pragmaz00;
		obj_t BgL_srcz00;
		obj_t BgL_jvmzd2typezd2namez00;
	}                *BgL_globalz00_bglt;

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_approxz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_typez00_bgl *BgL_typez00;
		bool_t BgL_typezd2lockedzf3z21;
		obj_t BgL_allocsz00;
		bool_t BgL_topzf3zf3;
		long BgL_lostzd2stampzd2;
	}                *BgL_approxz00_bglt;


	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_loosez12z12zzcfa_loosez00(BgL_approxz00_bglt, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_za2cfazd2stampza2zd2zzcfa_iteratez00;
	extern obj_t BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00(obj_t,
		BgL_approxz00_bglt);
	static obj_t BGl_cnstzd2initzd2zzcfa_loosez00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_loosez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_procedurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_setz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_iteratez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzcfa_loosez00();
	static obj_t BGl__loosezd2allocz12zd2default4683z12zzcfa_loosez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__loosezd2allocz12zc0zzcfa_loosez00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_loosez00();
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_loosez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzcfa_loosez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_loosez00();
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl__globalzd2loosez12zc0zzcfa_loosez00(obj_t, obj_t, obj_t);
	static obj_t BGl__loosez12z12zzcfa_loosez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2loosez12zc0zzcfa_loosez00(BgL_globalz00_bglt,
		BgL_approxz00_bglt);
	static obj_t
		BGl_loosezd2allocz12zd2default4683z12zzcfa_loosez00(BgL_nodez00_bglt);
	extern obj_t BGl_disablezd2Xzd2Tz12z12zzcfa_procedurez00(BgL_approxz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_loosezd2allocz12zc0zzcfa_loosez00(BgL_nodez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_loosez00();
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_loosez12zd2envzc0zzcfa_loosez00,
		BgL_bgl__looseza712za712za7za7cf4795z00, BGl__loosez12z12zzcfa_loosez00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4790z00zzcfa_loosez00,
		BgL_bgl_string4790za700za7za7c4796za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string4789z00zzcfa_loosez00,
		BgL_bgl_string4789za700za7za7c4797za7, "loose-alloc!", 12);
	      DEFINE_STRING(BGl_string4791z00zzcfa_loosez00,
		BgL_bgl_string4791za700za7za7c4798za7, "cfa_loose", 9);
	      DEFINE_STRING(BGl_string4792z00zzcfa_loosez00,
		BgL_bgl_string4792za700za7za7c4799za7,
		"loose-alloc!-default4683 all (import export) ", 45);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2loosez12zd2envz12zzcfa_loosez00,
		BgL_bgl__globalza7d2looseza74800z00,
		BGl__globalzd2loosez12zc0zzcfa_loosez00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_loosezd2allocz12zd2default4683zd2envzc0zzcfa_loosez00,
		BgL_bgl__looseza7d2allocza714801z00,
		BGl__loosezd2allocz12zd2default4683z12zzcfa_loosez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_loosezd2allocz12zd2envz12zzcfa_loosez00,
		BgL_bgl__looseza7d2allocza714802z00, BGl__loosezd2allocz12zc0zzcfa_loosez00,
		0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_loosez00(long
		BgL_checksumz00_1631, char *BgL_fromz00_1632)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_loosez00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_loosez00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcfa_loosez00();
					BGl_cnstzd2initzd2zzcfa_loosez00();
					BGl_importedzd2moduleszd2initz00zzcfa_loosez00();
					BGl_genericzd2initzd2zzcfa_loosez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_loosez00()
	{
		AN_OBJECT;
		{	/* Cfa/loose.scm 16 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_loose");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cfa_loose");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_loose");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_loose");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_loosez00()
	{
		AN_OBJECT;
		{	/* Cfa/loose.scm 16 */
			{	/* Cfa/loose.scm 16 */
				obj_t BgL_cportz00_1623;

				BgL_cportz00_1623 =
					bgl_open_input_string(BGl_string4792z00zzcfa_loosez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1624;

					BgL_iz00_1624 = ((long) 2);
				BgL_loopz00_1625:
					if ((BgL_iz00_1624 == ((long) -1)))
						{	/* Cfa/loose.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/loose.scm 16 */
							{	/* Cfa/loose.scm 16 */
								obj_t BgL_arg4794z00_1627;

								{	/* Cfa/loose.scm 16 */

									{	/* Cfa/loose.scm 16 */
										obj_t BgL_locationz00_1629;

										BgL_locationz00_1629 = BBOOL(((bool_t) 0));
										{	/* Cfa/loose.scm 16 */

											BgL_arg4794z00_1627 =
												BGl_readz00zz__readerz00(BgL_cportz00_1623,
												BgL_locationz00_1629);
										}
									}
								}
								{	/* Cfa/loose.scm 16 */
									int BgL_auxz00_1650;

									BgL_auxz00_1650 = (int) (BgL_iz00_1624);
									CNST_TABLE_SET(BgL_auxz00_1650, BgL_arg4794z00_1627);
							}}
							{	/* Cfa/loose.scm 16 */
								int BgL_auxz00_1630;

								BgL_auxz00_1630 = (int) ((BgL_iz00_1624 - ((long) 1)));
								{
									long BgL_iz00_1655;

									BgL_iz00_1655 = (long) (BgL_auxz00_1630);
									BgL_iz00_1624 = BgL_iz00_1655;
									goto BgL_loopz00_1625;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_loosez00()
	{
		AN_OBJECT;
		{	/* Cfa/loose.scm 16 */
			return BUNSPEC;
		}
	}



/* loose! */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_loosez12z12zzcfa_loosez00(BgL_approxz00_bglt BgL_approxz00_1,
		obj_t BgL_ownerz00_2)
	{
		AN_OBJECT;
		{	/* Cfa/loose.scm 35 */
			{	/* Cfa/loose.scm 38 */
				bool_t BgL_testz00_1657;

				{	/* Cfa/loose.scm 38 */
					long BgL_n2z00_1584;

					BgL_n2z00_1584 =
						(long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00);
					BgL_testz00_1657 =
						(
						(((BgL_approxz00_bglt) CREF(BgL_approxz00_1))->
							BgL_lostzd2stampzd2) < BgL_n2z00_1584);
				}
				if (BgL_testz00_1657)
					{	/* Cfa/loose.scm 38 */
						{
							long BgL_auxz00_1661;

							BgL_auxz00_1661 =
								(long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00);
							((((BgL_approxz00_bglt) CREF(BgL_approxz00_1))->
									BgL_lostzd2stampzd2) = ((long) BgL_auxz00_1661), BUNSPEC);
						}
						BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
							(BGl_loosezd2allocz12zd2envz12zzcfa_loosez00, BgL_approxz00_1);
					}
				else
					{	/* Cfa/loose.scm 38 */
						BFALSE;
					}
			}
			return BgL_approxz00_1;
		}
	}



/* _loose! */
	obj_t BGl__loosez12z12zzcfa_loosez00(obj_t BgL_envz00_1613,
		obj_t BgL_approxz00_1614, obj_t BgL_ownerz00_1615)
	{
		AN_OBJECT;
		{	/* Cfa/loose.scm 35 */
			return
				(obj_t) (BGl_loosez12z12zzcfa_loosez00(
					(BgL_approxz00_bglt) (BgL_approxz00_1614), BgL_ownerz00_1615));
		}
	}



/* global-loose! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2loosez12zc0zzcfa_loosez00(BgL_globalz00_bglt BgL_globalz00_5,
		BgL_approxz00_bglt BgL_approxz00_6)
	{
		AN_OBJECT;
		{	/* Cfa/loose.scm 58 */
			if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
						(((BgL_globalz00_bglt) CREF(BgL_globalz00_5))->BgL_importz00),
						CNST_TABLE_REF(((long) 0)))))
				{	/* Cfa/loose.scm 61 */
					return
						(obj_t) (BGl_loosez12z12zzcfa_loosez00(BgL_approxz00_6,
							CNST_TABLE_REF(((long) 1))));
				}
			else
				{	/* Cfa/loose.scm 61 */
					return BGl_disablezd2Xzd2Tz12z12zzcfa_procedurez00(BgL_approxz00_6);
				}
		}
	}



/* _global-loose! */
	obj_t BGl__globalzd2loosez12zc0zzcfa_loosez00(obj_t BgL_envz00_1618,
		obj_t BgL_globalz00_1619, obj_t BgL_approxz00_1620)
	{
		AN_OBJECT;
		{	/* Cfa/loose.scm 58 */
			return
				BGl_globalzd2loosez12zc0zzcfa_loosez00(
				(BgL_globalz00_bglt) (BgL_globalz00_1619),
				(BgL_approxz00_bglt) (BgL_approxz00_1620));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_loosez00()
	{
		AN_OBJECT;
		{	/* Cfa/loose.scm 16 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_loosezd2allocz12zd2envz12zzcfa_loosez00,
				BGl_loosezd2allocz12zd2default4683zd2envzc0zzcfa_loosez00,
				BGl_nodez00zzast_nodez00, BGl_string4789z00zzcfa_loosez00);
		}
	}



/* loose-alloc! */
	BGL_EXPORTED_DEF obj_t BGl_loosezd2allocz12zc0zzcfa_loosez00(BgL_nodez00_bglt
		BgL_nodez00_3)
	{
		AN_OBJECT;
		{	/* Cfa/loose.scm 47 */
			{	/* Cfa/loose.scm 47 */
				obj_t BgL_method4684z00_1588;

				{	/* Cfa/loose.scm 47 */
					BgL_objectz00_bglt BgL_objz00_1589;

					BgL_objz00_1589 = (BgL_objectz00_bglt) (BgL_nodez00_3);
					{	/* Cfa/loose.scm 47 */
						long BgL_objzd2classzd2numz00_1590;

						BgL_objzd2classzd2numz00_1590 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1589);
						{	/* Cfa/loose.scm 47 */
							obj_t BgL_arg2643z00_1591;

							BgL_arg2643z00_1591 =
								PROCEDURE_REF(BGl_loosezd2allocz12zd2envz12zzcfa_loosez00,
								(int) (((long) 1)));
							{	/* Cfa/loose.scm 47 */
								obj_t BgL_arrayz00_1593;

								int BgL_offsetz00_1594;

								BgL_arrayz00_1593 = BgL_arg2643z00_1591;
								BgL_offsetz00_1594 = (int) (BgL_objzd2classzd2numz00_1590);
								{	/* Cfa/loose.scm 47 */
									long BgL_offsetz00_1595;

									BgL_offsetz00_1595 =
										((long) (BgL_offsetz00_1594) - OBJECT_TYPE);
									{	/* Cfa/loose.scm 47 */
										long BgL_modz00_1596;

										{	/* Cfa/loose.scm 47 */
											int BgL_arg2645z00_1597;

											BgL_arg2645z00_1597 = (int) (((long) 16));
											{	/* Cfa/loose.scm 47 */
												long BgL_auxz00_1689;

												BgL_auxz00_1689 = (long) (BgL_arg2645z00_1597);
												BgL_modz00_1596 =
													(BgL_offsetz00_1595 / BgL_auxz00_1689);
										}}
										{	/* Cfa/loose.scm 47 */
											long BgL_restz00_1598;

											{	/* Cfa/loose.scm 47 */
												int BgL_arg2644z00_1599;

												BgL_arg2644z00_1599 = (int) (((long) 16));
												{	/* Cfa/loose.scm 47 */
													long BgL_auxz00_1693;

													BgL_auxz00_1693 = (long) (BgL_arg2644z00_1599);
													BgL_restz00_1598 =
														(BgL_offsetz00_1595 % BgL_auxz00_1693);
											}}
											{	/* Cfa/loose.scm 47 */

												BgL_method4684z00_1588 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1593,
														(int) (BgL_modz00_1596)), (int) (BgL_restz00_1598));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method4684z00_1588) (BgL_method4684z00_1588,
					(obj_t) (BgL_nodez00_3), BEOA);
			}
		}
	}



/* _loose-alloc! */
	obj_t BGl__loosezd2allocz12zc0zzcfa_loosez00(obj_t BgL_envz00_1616,
		obj_t BgL_nodez00_1617)
	{
		AN_OBJECT;
		{	/* Cfa/loose.scm 47 */
			return
				BGl_loosezd2allocz12zc0zzcfa_loosez00(
				(BgL_nodez00_bglt) (BgL_nodez00_1617));
		}
	}



/* loose-alloc!-default4683 */
	obj_t BGl_loosezd2allocz12zd2default4683z12zzcfa_loosez00(BgL_nodez00_bglt
		BgL_nodez00_4)
	{
		AN_OBJECT;
		{	/* Cfa/loose.scm 16 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 2)),
				BGl_string4790z00zzcfa_loosez00, (obj_t) (BgL_nodez00_4));
		}
	}



/* _loose-alloc!-default4683 */
	obj_t BGl__loosezd2allocz12zd2default4683z12zzcfa_loosez00(obj_t
		BgL_envz00_1621, obj_t BgL_nodez00_1622)
	{
		AN_OBJECT;
		{	/* Cfa/loose.scm 16 */
			return
				BGl_loosezd2allocz12zd2default4683z12zzcfa_loosez00(
				(BgL_nodez00_bglt) (BgL_nodez00_1622));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_loosez00()
	{
		AN_OBJECT;
		{	/* Cfa/loose.scm 16 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_loosez00()
	{
		AN_OBJECT;
		{	/* Cfa/loose.scm 16 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string4791z00zzcfa_loosez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4791z00zzcfa_loosez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4791z00zzcfa_loosez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4791z00zzcfa_loosez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4791z00zzcfa_loosez00));
			BGl_modulezd2initializa7ationz75zzcfa_iteratez00(((long) 319050990),
				BSTRING_TO_STRING(BGl_string4791z00zzcfa_loosez00));
			BGl_modulezd2initializa7ationz75zzcfa_setz00(((long) 474371048),
				BSTRING_TO_STRING(BGl_string4791z00zzcfa_loosez00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 243010053),
				BSTRING_TO_STRING(BGl_string4791z00zzcfa_loosez00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string4791z00zzcfa_loosez00));
			BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 535144917),
				BSTRING_TO_STRING(BGl_string4791z00zzcfa_loosez00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_procedurez00(((long) 526522172),
				BSTRING_TO_STRING(BGl_string4791z00zzcfa_loosez00));
		}
	}

#ifdef __cplusplus
}
#endif
