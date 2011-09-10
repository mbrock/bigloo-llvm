/*===========================================================================*/
/*   (Cfa/app.scm)                                                           */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/app.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_valuez00_bgl
	{
		header_t header;
		obj_t widening;
	}               *BgL_valuez00_bglt;

	typedef struct BgL_variablez00_bgl
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
	}                  *BgL_variablez00_bglt;

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

	typedef struct BgL_funz00_bgl
	{
		header_t header;
		obj_t widening;
		long BgL_arityz00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_predicatezd2ofzd2;
		obj_t BgL_stackzd2allocatorzd2;
		bool_t BgL_topzf3zf3;
		obj_t BgL_thezd2closurezd2;
		obj_t BgL_effectz00;
	}             *BgL_funz00_bglt;

	typedef struct BgL_sfunz00_bgl
	{
		header_t header;
		obj_t widening;
		long BgL_arityz00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_predicatezd2ofzd2;
		obj_t BgL_stackzd2allocatorzd2;
		bool_t BgL_topzf3zf3;
		obj_t BgL_thezd2closurezd2;
		obj_t BgL_effectz00;
		obj_t BgL_propertyz00;
		obj_t BgL_argsz00;
		obj_t BgL_argszd2namezd2;
		obj_t BgL_bodyz00;
		obj_t BgL_classz00;
		obj_t BgL_dssslzd2keywordszd2;
		obj_t BgL_locz00;
		obj_t BgL_optionalsz00;
		obj_t BgL_keysz00;
		obj_t BgL_thezd2closurezd2globalz00;
	}              *BgL_sfunz00_bglt;

	typedef struct BgL_cfunz00_bgl
	{
		header_t header;
		obj_t widening;
		long BgL_arityz00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_predicatezd2ofzd2;
		obj_t BgL_stackzd2allocatorzd2;
		bool_t BgL_topzf3zf3;
		obj_t BgL_thezd2closurezd2;
		obj_t BgL_effectz00;
		obj_t BgL_argszd2typezd2;
		bool_t BgL_macrozf3zf3;
		bool_t BgL_infixzf3zf3;
		obj_t BgL_methodz00;
	}              *BgL_cfunz00_bglt;

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;

	typedef struct BgL_appz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		struct BgL_varz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
	}             *BgL_appz00_bglt;

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

	typedef struct BgL_cfunzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                      *BgL_cfunzf2cinfozf2_bglt;

	typedef struct BgL_externzd2sfunzf2cinfoz20_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                               *BgL_externzd2sfunzf2cinfoz20_bglt;

	typedef struct BgL_internzd2sfunzf2cinfoz20_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		long BgL_stampz00;
	}                               *BgL_internzd2sfunzf2cinfoz20_bglt;

	typedef struct BgL_svarzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		bool_t BgL_clozd2envzf3z21;
	}                      *BgL_svarzf2cinfozf2_bglt;


	extern BgL_approxz00_bglt
		BGl_cfazd2internzd2sfunz12z12zzcfa_iteratez00
		(BgL_internzd2sfunzf2cinfoz20_bglt, obj_t);
	extern BgL_approxz00_bglt BGl_loosez12z12zzcfa_loosez00(BgL_approxz00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl__appz12zd2default4706zc0zzcfa_appz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzcfa_appz00();
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_appz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_loosez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_iteratez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_cfaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzcfa_appz00();
	extern obj_t BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00;
	extern obj_t BGl_cfazd2exportzd2varz12z12zzcfa_iteratez00(BgL_valuez00_bglt,
		obj_t);
	extern obj_t BGl_cfunzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	extern BgL_approxz00_bglt
		BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_approxz00_bglt);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_appz12z12zzcfa_appz00(BgL_funz00_bglt, BgL_varz00_bglt, obj_t);
	static obj_t BGl_cfaz12zd2app4705zc0zzcfa_appz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_appz00();
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_appz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzcfa_appz00();
	extern obj_t BGl_funz00zzast_varz00;
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_appz00();
	static obj_t BGl_appz12zd2cfunzf2Cinfo4713z32zzcfa_appz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_appz12zd2externzd2sfunzf2Cin4711ze0zzcfa_appz00(obj_t, obj_t,
		obj_t, obj_t);
	extern BgL_approxz00_bglt BGl_cfaz12z12zzcfa_cfaz00(BgL_nodez00_bglt);
	static obj_t BGl__appz12z12zzcfa_appz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_approxz00_bglt
		BGl_appz12zd2default4706zc0zzcfa_appz00(BgL_funz00_bglt, BgL_varz00_bglt,
		obj_t);
	static obj_t BGl_appz12zd2internzd2sfunzf2Cin4709ze0zzcfa_appz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_externzd2sfunzf2Cinfoz20zzcfa_infoz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_appz00();
	static obj_t __cnst[2];


	extern obj_t BGl_cfaz12zd2envzc0zzcfa_cfaz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4867z00zzcfa_appz00,
		BgL_bgl_cfaza712za7d2app47054876z00, BGl_cfaz12zd2app4705zc0zzcfa_appz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4870z00zzcfa_appz00,
		BgL_bgl_appza712za7d2externza74877za7,
		BGl_appz12zd2externzd2sfunzf2Cin4711ze0zzcfa_appz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4869z00zzcfa_appz00,
		BgL_bgl_appza712za7d2internza74878za7,
		BGl_appz12zd2internzd2sfunzf2Cin4709ze0zzcfa_appz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4871z00zzcfa_appz00,
		BgL_bgl_appza712za7d2cfunza7f24879za7,
		BGl_appz12zd2cfunzf2Cinfo4713z32zzcfa_appz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string4865z00zzcfa_appz00,
		BgL_bgl_string4865za700za7za7c4880za7, "app!", 4);
	      DEFINE_STRING(BGl_string4866z00zzcfa_appz00,
		BgL_bgl_string4866za700za7za7c4881za7, "No method for this function", 27);
	      DEFINE_STRING(BGl_string4868z00zzcfa_appz00,
		BgL_bgl_string4868za700za7za7c4882za7, "cfa!::approx", 12);
	      DEFINE_STRING(BGl_string4872z00zzcfa_appz00,
		BgL_bgl_string4872za700za7za7c4883za7, "cfa_app", 7);
	      DEFINE_STRING(BGl_string4873z00zzcfa_appz00,
		BgL_bgl_string4873za700za7za7c4884za7, "static all ", 11);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_appz12zd2default4706zd2envz12zzcfa_appz00,
		BgL_bgl__appza712za7d2defaul4885z00,
		BGl__appz12zd2default4706zc0zzcfa_appz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_appz12zd2envzc0zzcfa_appz00,
		BgL_bgl__appza712za712za7za7cfa_4886z00, BGl__appz12z12zzcfa_appz00, 0L,
		BUNSPEC, 3);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_appz00(long
		BgL_checksumz00_1819, char *BgL_fromz00_1820)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_appz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_appz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcfa_appz00();
					BGl_cnstzd2initzd2zzcfa_appz00();
					BGl_importedzd2moduleszd2initz00zzcfa_appz00();
					BGl_genericzd2initzd2zzcfa_appz00();
					BGl_methodzd2initzd2zzcfa_appz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_appz00()
	{
		AN_OBJECT;
		{	/* Cfa/app.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_app");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_app");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_appz00()
	{
		AN_OBJECT;
		{	/* Cfa/app.scm 15 */
			{	/* Cfa/app.scm 15 */
				obj_t BgL_cportz00_1811;

				BgL_cportz00_1811 =
					bgl_open_input_string(BGl_string4873z00zzcfa_appz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1812;

					BgL_iz00_1812 = ((long) 1);
				BgL_loopz00_1813:
					if ((BgL_iz00_1812 == ((long) -1)))
						{	/* Cfa/app.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/app.scm 15 */
							{	/* Cfa/app.scm 15 */
								obj_t BgL_arg4875z00_1815;

								{	/* Cfa/app.scm 15 */

									{	/* Cfa/app.scm 15 */
										obj_t BgL_locationz00_1817;

										BgL_locationz00_1817 = BBOOL(((bool_t) 0));
										{	/* Cfa/app.scm 15 */

											BgL_arg4875z00_1815 =
												BGl_readz00zz__readerz00(BgL_cportz00_1811,
												BgL_locationz00_1817);
										}
									}
								}
								{	/* Cfa/app.scm 15 */
									int BgL_auxz00_1837;

									BgL_auxz00_1837 = (int) (BgL_iz00_1812);
									CNST_TABLE_SET(BgL_auxz00_1837, BgL_arg4875z00_1815);
							}}
							{	/* Cfa/app.scm 15 */
								int BgL_auxz00_1818;

								BgL_auxz00_1818 = (int) ((BgL_iz00_1812 - ((long) 1)));
								{
									long BgL_iz00_1842;

									BgL_iz00_1842 = (long) (BgL_auxz00_1818);
									BgL_iz00_1812 = BgL_iz00_1842;
									goto BgL_loopz00_1813;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_appz00()
	{
		AN_OBJECT;
		{	/* Cfa/app.scm 15 */
			return BUNSPEC;
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_appz00()
	{
		AN_OBJECT;
		{	/* Cfa/app.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_appz12zd2envzc0zzcfa_appz00,
				BGl_appz12zd2default4706zd2envz12zzcfa_appz00, BGl_funz00zzast_varz00,
				BGl_string4865z00zzcfa_appz00);
		}
	}



/* app! */
	BGL_EXPORTED_DEF BgL_approxz00_bglt BGl_appz12z12zzcfa_appz00(BgL_funz00_bglt
		BgL_funz00_2, BgL_varz00_bglt BgL_varz00_3, obj_t BgL_argszd2approxzd2_4)
	{
		AN_OBJECT;
		{	/* Cfa/app.scm 41 */
			{	/* Cfa/app.scm 41 */
				obj_t BgL_method4707z00_1682;

				{	/* Cfa/app.scm 41 */
					BgL_objectz00_bglt BgL_objz00_1683;

					BgL_objz00_1683 = (BgL_objectz00_bglt) (BgL_funz00_2);
					{	/* Cfa/app.scm 41 */
						long BgL_objzd2classzd2numz00_1684;

						BgL_objzd2classzd2numz00_1684 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1683);
						{	/* Cfa/app.scm 41 */
							obj_t BgL_arg2643z00_1685;

							BgL_arg2643z00_1685 =
								PROCEDURE_REF(BGl_appz12zd2envzc0zzcfa_appz00,
								(int) (((long) 1)));
							{	/* Cfa/app.scm 41 */
								obj_t BgL_arrayz00_1687;

								int BgL_offsetz00_1688;

								BgL_arrayz00_1687 = BgL_arg2643z00_1685;
								BgL_offsetz00_1688 = (int) (BgL_objzd2classzd2numz00_1684);
								{	/* Cfa/app.scm 41 */
									long BgL_offsetz00_1689;

									BgL_offsetz00_1689 =
										((long) (BgL_offsetz00_1688) - OBJECT_TYPE);
									{	/* Cfa/app.scm 41 */
										long BgL_modz00_1690;

										{	/* Cfa/app.scm 41 */
											int BgL_arg2645z00_1691;

											BgL_arg2645z00_1691 = (int) (((long) 16));
											{	/* Cfa/app.scm 41 */
												long BgL_auxz00_1853;

												BgL_auxz00_1853 = (long) (BgL_arg2645z00_1691);
												BgL_modz00_1690 =
													(BgL_offsetz00_1689 / BgL_auxz00_1853);
										}}
										{	/* Cfa/app.scm 41 */
											long BgL_restz00_1692;

											{	/* Cfa/app.scm 41 */
												int BgL_arg2644z00_1693;

												BgL_arg2644z00_1693 = (int) (((long) 16));
												{	/* Cfa/app.scm 41 */
													long BgL_auxz00_1857;

													BgL_auxz00_1857 = (long) (BgL_arg2644z00_1693);
													BgL_restz00_1692 =
														(BgL_offsetz00_1689 % BgL_auxz00_1857);
											}}
											{	/* Cfa/app.scm 41 */

												BgL_method4707z00_1682 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1687,
														(int) (BgL_modz00_1690)), (int) (BgL_restz00_1692));
				}}}}}}}}
				return
					(BgL_approxz00_bglt) (PROCEDURE_ENTRY(BgL_method4707z00_1682)
					(BgL_method4707z00_1682, (obj_t) (BgL_funz00_2),
						(obj_t) (BgL_varz00_3), BgL_argszd2approxzd2_4, BEOA));
			}
		}
	}



/* _app! */
	obj_t BGl__appz12z12zzcfa_appz00(obj_t BgL_envz00_1783, obj_t BgL_funz00_1784,
		obj_t BgL_varz00_1785, obj_t BgL_argszd2approxzd2_1786)
	{
		AN_OBJECT;
		{	/* Cfa/app.scm 41 */
			return
				(obj_t) (BGl_appz12z12zzcfa_appz00(
					(BgL_funz00_bglt) (BgL_funz00_1784),
					(BgL_varz00_bglt) (BgL_varz00_1785), BgL_argszd2approxzd2_1786));
		}
	}



/* app!-default4706 */
	BgL_approxz00_bglt BGl_appz12zd2default4706zc0zzcfa_appz00(BgL_funz00_bglt
		BgL_funz00_5, BgL_varz00_bglt BgL_varz00_6, obj_t BgL_argszd2approxzd2_7)
	{
		AN_OBJECT;
		{	/* Cfa/app.scm 15 */
			{	/* Cfa/app.scm 44 */
				obj_t BgL_arg4813z00_1709;

				BgL_arg4813z00_1709 =
					MAKE_PAIR(
					(obj_t) (BgL_funz00_5),
					BGl_shapez00zztools_shapez00((obj_t) (BgL_varz00_6)));
				return
					(BgL_approxz00_bglt) (BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string4865z00zzcfa_appz00, BGl_string4866z00zzcfa_appz00,
						BgL_arg4813z00_1709));
			}
		}
	}



/* _app!-default4706 */
	obj_t BGl__appz12zd2default4706zc0zzcfa_appz00(obj_t BgL_envz00_1787,
		obj_t BgL_funz00_1788, obj_t BgL_varz00_1789,
		obj_t BgL_argszd2approxzd2_1790)
	{
		AN_OBJECT;
		{	/* Cfa/app.scm 15 */
			return
				(obj_t) (BGl_appz12zd2default4706zc0zzcfa_appz00(
					(BgL_funz00_bglt) (BgL_funz00_1788),
					(BgL_varz00_bglt) (BgL_varz00_1789), BgL_argszd2approxzd2_1790));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_appz00()
	{
		AN_OBJECT;
		{	/* Cfa/app.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_appz00zzast_nodez00,
				BGl_proc4867z00zzcfa_appz00, BGl_string4868z00zzcfa_appz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_appz12zd2envzc0zzcfa_appz00,
				BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00, BGl_proc4869z00zzcfa_appz00,
				BGl_string4865z00zzcfa_appz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_appz12zd2envzc0zzcfa_appz00,
				BGl_externzd2sfunzf2Cinfoz20zzcfa_infoz00, BGl_proc4870z00zzcfa_appz00,
				BGl_string4865z00zzcfa_appz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_appz12zd2envzc0zzcfa_appz00, BGl_cfunzf2Cinfozf2zzcfa_infoz00,
				BGl_proc4871z00zzcfa_appz00, BGl_string4865z00zzcfa_appz00);
		}
	}



/* app!-cfun/Cinfo4713 */
	obj_t BGl_appz12zd2cfunzf2Cinfo4713z32zzcfa_appz00(obj_t BgL_envz00_1795,
		obj_t BgL_funz00_1796, obj_t BgL_varz00_1797,
		obj_t BgL_argszd2approxzd2_1798)
	{
		AN_OBJECT;
		{	/* Cfa/app.scm 83 */
			{
				BgL_cfunzf2cinfozf2_bglt BgL_funz00_1666;

				BgL_varz00_bglt BgL_varz00_1667;

				obj_t BgL_argszd2approxzd2_1668;

				{	/* Tools/trace.sch 53 */
					BgL_approxz00_bglt BgL_auxz00_1887;

					BgL_funz00_1666 = (BgL_cfunzf2cinfozf2_bglt) (BgL_funz00_1796);
					BgL_varz00_1667 = (BgL_varz00_bglt) (BgL_varz00_1797);
					BgL_argszd2approxzd2_1668 = BgL_argszd2approxzd2_1798;
					{	/* Cfa/app.scm 87 */
						bool_t BgL_testz00_1888;

						{
							BgL_funz00_bglt BgL_auxz00_1889;

							BgL_auxz00_1889 = (BgL_funz00_bglt) (BgL_funz00_1666);
							BgL_testz00_1888 =
								(((BgL_funz00_bglt) CREF(BgL_auxz00_1889))->BgL_topzf3zf3);
						}
						if (BgL_testz00_1888)
							{
								obj_t BgL_l4702z00_1674;

								BgL_l4702z00_1674 = BgL_argszd2approxzd2_1668;
							BgL_zc3anonymousza34855ze3z83_1675:
								if (PAIRP(BgL_l4702z00_1674))
									{	/* Cfa/app.scm 87 */
										{	/* Cfa/app.scm 87 */
											obj_t BgL_az00_1677;

											BgL_az00_1677 = CAR(BgL_l4702z00_1674);
											BGl_loosez12z12zzcfa_loosez00(
												(BgL_approxz00_bglt) (BgL_az00_1677),
												CNST_TABLE_REF(((long) 0)));
										}
										{
											obj_t BgL_l4702z00_1898;

											BgL_l4702z00_1898 = CDR(BgL_l4702z00_1674);
											BgL_l4702z00_1674 = BgL_l4702z00_1898;
											goto BgL_zc3anonymousza34855ze3z83_1675;
										}
									}
								else
									{	/* Cfa/app.scm 87 */
										((bool_t) 1);
									}
							}
						else
							{	/* Cfa/app.scm 87 */
								((bool_t) 0);
							}
					}
					{
						obj_t BgL_auxz00_1900;

						{	/* Cfa/app.scm 89 */
							BgL_objectz00_bglt BgL_auxz00_1901;

							BgL_auxz00_1901 = (BgL_objectz00_bglt) (BgL_funz00_1666);
							BgL_auxz00_1900 = BGL_OBJECT_WIDENING(BgL_auxz00_1901);
						}
						BgL_auxz00_1887 =
							(((BgL_cfunzf2cinfozf2_bglt) CREF(BgL_auxz00_1900))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_1887);
				}
			}
		}
	}



/* app!-extern-sfun/Cin4711 */
	obj_t BGl_appz12zd2externzd2sfunzf2Cin4711ze0zzcfa_appz00(obj_t
		BgL_envz00_1799, obj_t BgL_funz00_1800, obj_t BgL_varz00_1801,
		obj_t BgL_argszd2approxzd2_1802)
	{
		AN_OBJECT;
		{	/* Cfa/app.scm 71 */
			{
				BgL_externzd2sfunzf2cinfoz20_bglt BgL_funz00_1650;

				BgL_varz00_bglt BgL_varz00_1651;

				obj_t BgL_argszd2approxzd2_1652;

				{	/* Tools/trace.sch 53 */
					BgL_approxz00_bglt BgL_auxz00_1908;

					BgL_funz00_1650 =
						(BgL_externzd2sfunzf2cinfoz20_bglt) (BgL_funz00_1800);
					BgL_varz00_1651 = (BgL_varz00_bglt) (BgL_varz00_1801);
					BgL_argszd2approxzd2_1652 = BgL_argszd2approxzd2_1802;
					{	/* Cfa/app.scm 76 */
						bool_t BgL_testz00_1909;

						{
							BgL_funz00_bglt BgL_auxz00_1910;

							BgL_auxz00_1910 = (BgL_funz00_bglt) (BgL_funz00_1650);
							BgL_testz00_1909 =
								(((BgL_funz00_bglt) CREF(BgL_auxz00_1910))->BgL_topzf3zf3);
						}
						if (BgL_testz00_1909)
							{
								obj_t BgL_l4700z00_1658;

								BgL_l4700z00_1658 = BgL_argszd2approxzd2_1652;
							BgL_zc3anonymousza34850ze3z83_1659:
								if (PAIRP(BgL_l4700z00_1658))
									{	/* Cfa/app.scm 76 */
										{	/* Cfa/app.scm 76 */
											obj_t BgL_az00_1661;

											BgL_az00_1661 = CAR(BgL_l4700z00_1658);
											BGl_loosez12z12zzcfa_loosez00(
												(BgL_approxz00_bglt) (BgL_az00_1661),
												CNST_TABLE_REF(((long) 0)));
										}
										{
											obj_t BgL_l4700z00_1919;

											BgL_l4700z00_1919 = CDR(BgL_l4700z00_1658);
											BgL_l4700z00_1658 = BgL_l4700z00_1919;
											goto BgL_zc3anonymousza34850ze3z83_1659;
										}
									}
								else
									{	/* Cfa/app.scm 76 */
										((bool_t) 1);
									}
							}
						else
							{	/* Cfa/app.scm 76 */
								((bool_t) 0);
							}
					}
					{
						obj_t BgL_auxz00_1921;

						{	/* Cfa/app.scm 78 */
							BgL_objectz00_bglt BgL_auxz00_1922;

							BgL_auxz00_1922 = (BgL_objectz00_bglt) (BgL_funz00_1650);
							BgL_auxz00_1921 = BGL_OBJECT_WIDENING(BgL_auxz00_1922);
						}
						BgL_auxz00_1908 =
							(((BgL_externzd2sfunzf2cinfoz20_bglt) CREF(BgL_auxz00_1921))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_1908);
				}
			}
		}
	}



/* app!-intern-sfun/Cin4709 */
	obj_t BGl_appz12zd2internzd2sfunzf2Cin4709ze0zzcfa_appz00(obj_t
		BgL_envz00_1803, obj_t BgL_funz00_1804, obj_t BgL_varz00_1805,
		obj_t BgL_argszd2approxzd2_1806)
	{
		AN_OBJECT;
		{	/* Cfa/app.scm 49 */
			{
				BgL_internzd2sfunzf2cinfoz20_bglt BgL_funz00_1619;

				BgL_varz00_bglt BgL_varz00_1620;

				obj_t BgL_argszd2approxzd2_1621;

				BgL_funz00_1619 = (BgL_internzd2sfunzf2cinfoz20_bglt) (BgL_funz00_1804);
				BgL_varz00_1620 = (BgL_varz00_bglt) (BgL_varz00_1805);
				BgL_argszd2approxzd2_1621 = BgL_argszd2approxzd2_1806;
				{	/* Cfa/app.scm 54 */
					obj_t BgL_g4699z00_1625;

					{
						BgL_sfunz00_bglt BgL_auxz00_1929;

						BgL_auxz00_1929 = (BgL_sfunz00_bglt) (BgL_funz00_1619);
						BgL_g4699z00_1625 =
							(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1929))->BgL_argsz00);
					}
					{
						obj_t BgL_ll4696z00_1627;

						obj_t BgL_ll4697z00_1628;

						BgL_ll4696z00_1627 = BgL_g4699z00_1625;
						BgL_ll4697z00_1628 = BgL_argszd2approxzd2_1621;
					BgL_zc3anonymousza34832ze3z83_1629:
						if (NULLP(BgL_ll4696z00_1627))
							{	/* Cfa/app.scm 54 */
								((bool_t) 1);
							}
						else
							{	/* Cfa/app.scm 54 */
								{	/* Cfa/app.scm 55 */
									obj_t BgL_formalz00_1631;

									obj_t BgL_approxz00_1632;

									BgL_formalz00_1631 = CAR(BgL_ll4696z00_1627);
									BgL_approxz00_1632 = CAR(BgL_ll4697z00_1628);
									{	/* Cfa/app.scm 55 */
										BgL_approxz00_bglt BgL_arg4834z00_1633;

										{	/* Cfa/app.scm 55 */
											BgL_svarzf2cinfozf2_bglt BgL_obj3502z00_1762;

											{	/* Cfa/app.scm 55 */
												BgL_variablez00_bglt BgL_obj1611z00_1761;

												BgL_obj1611z00_1761 =
													(BgL_variablez00_bglt) (BgL_formalz00_1631);
												BgL_obj3502z00_1762 =
													(BgL_svarzf2cinfozf2_bglt) (
													(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1761))->
														BgL_valuez00));
											}
											{
												obj_t BgL_auxz00_1939;

												{	/* Cfa/app.scm 55 */
													BgL_objectz00_bglt BgL_auxz00_1940;

													BgL_auxz00_1940 =
														(BgL_objectz00_bglt) (BgL_obj3502z00_1762);
													BgL_auxz00_1939 =
														BGL_OBJECT_WIDENING(BgL_auxz00_1940);
												}
												BgL_arg4834z00_1633 =
													(((BgL_svarzf2cinfozf2_bglt) CREF(BgL_auxz00_1939))->
													BgL_approxz00);
											}
										}
										BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg4834z00_1633,
											(BgL_approxz00_bglt) (BgL_approxz00_1632));
									}
								}
								{
									obj_t BgL_ll4697z00_1948;

									obj_t BgL_ll4696z00_1946;

									BgL_ll4696z00_1946 = CDR(BgL_ll4696z00_1627);
									BgL_ll4697z00_1948 = CDR(BgL_ll4697z00_1628);
									BgL_ll4697z00_1628 = BgL_ll4697z00_1948;
									BgL_ll4696z00_1627 = BgL_ll4696z00_1946;
									goto BgL_zc3anonymousza34832ze3z83_1629;
								}
							}
					}
				}
				{	/* Cfa/app.scm 60 */
					bool_t BgL_testz00_1950;

					{	/* Cfa/app.scm 60 */
						bool_t BgL_testz00_1951;

						{	/* Cfa/app.scm 60 */
							BgL_variablez00_bglt BgL_arg4847z00_1647;

							BgL_arg4847z00_1647 =
								(((BgL_varz00_bglt) CREF(BgL_varz00_1620))->BgL_variablez00);
							{	/* Cfa/app.scm 60 */
								obj_t BgL_obj1751z00_1766;

								BgL_obj1751z00_1766 = (obj_t) (BgL_arg4847z00_1647);
								BgL_testz00_1951 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_1766,
									BGl_globalz00zzast_varz00);
							}
						}
						if (BgL_testz00_1951)
							{	/* Cfa/app.scm 61 */
								bool_t BgL_testz00_1955;

								{	/* Cfa/app.scm 61 */
									BgL_variablez00_bglt BgL_arg4846z00_1646;

									BgL_arg4846z00_1646 =
										(((BgL_varz00_bglt) CREF(BgL_varz00_1620))->
										BgL_variablez00);
									{	/* Cfa/app.scm 61 */
										obj_t BgL_obj1751z00_1768;

										BgL_obj1751z00_1768 = (obj_t) (BgL_arg4846z00_1646);
										BgL_testz00_1955 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_1768,
											BGl_globalz00zzast_varz00);
									}
								}
								if (BgL_testz00_1955)
									{	/* Cfa/app.scm 62 */
										obj_t BgL_auxz00_1959;

										{	/* Cfa/app.scm 62 */
											BgL_globalz00_bglt BgL_obj1679z00_1770;

											BgL_obj1679z00_1770 =
												(BgL_globalz00_bglt) (
												(((BgL_varz00_bglt) CREF(BgL_varz00_1620))->
													BgL_variablez00));
											BgL_auxz00_1959 =
												(((BgL_globalz00_bglt) CREF(BgL_obj1679z00_1770))->
												BgL_importz00);
										}
										BgL_testz00_1950 =
											(BgL_auxz00_1959 == CNST_TABLE_REF(((long) 1)));
									}
								else
									{	/* Cfa/app.scm 61 */
										BgL_testz00_1950 = ((bool_t) 0);
									}
							}
						else
							{	/* Cfa/app.scm 60 */
								BgL_testz00_1950 = ((bool_t) 1);
							}
					}
					if (BgL_testz00_1950)
						{	/* Cfa/app.scm 64 */
							BgL_variablez00_bglt BgL_arg4839z00_1639;

							BgL_arg4839z00_1639 =
								(((BgL_varz00_bglt) CREF(BgL_varz00_1620))->BgL_variablez00);
							return
								(obj_t) (BGl_cfazd2internzd2sfunz12z12zzcfa_iteratez00
								(BgL_funz00_1619, (obj_t) (BgL_arg4839z00_1639)));
						}
					else
						{	/* Cfa/app.scm 66 */
							BgL_variablez00_bglt BgL_arg4840z00_1640;

							BgL_arg4840z00_1640 =
								(((BgL_varz00_bglt) CREF(BgL_varz00_1620))->BgL_variablez00);
							return
								BGl_cfazd2exportzd2varz12z12zzcfa_iteratez00(
								(BgL_valuez00_bglt) (BgL_funz00_1619),
								(obj_t) (BgL_arg4840z00_1640));
						}
				}
			}
		}
	}



/* cfa!-app4705 */
	obj_t BGl_cfaz12zd2app4705zc0zzcfa_appz00(obj_t BgL_envz00_1807,
		obj_t BgL_nodez00_1808)
	{
		AN_OBJECT;
		{	/* Cfa/app.scm 33 */
			{
				BgL_appz00_bglt BgL_nodez00_1590;

				{	/* Tools/trace.sch 53 */
					BgL_approxz00_bglt BgL_auxz00_1975;

					BgL_nodez00_1590 = (BgL_appz00_bglt) (BgL_nodez00_1808);
					{	/* Cfa/app.scm 36 */
						BgL_valuez00_bglt BgL_arg4815z00_1594;

						BgL_varz00_bglt BgL_arg4816z00_1595;

						obj_t BgL_arg4817z00_1596;

						{	/* Cfa/app.scm 36 */
							BgL_variablez00_bglt BgL_arg4819z00_1597;

							{	/* Cfa/app.scm 36 */
								BgL_varz00_bglt BgL_obj2155z00_1712;

								BgL_obj2155z00_1712 =
									(((BgL_appz00_bglt) CREF(BgL_nodez00_1590))->BgL_funz00);
								BgL_arg4819z00_1597 =
									(((BgL_varz00_bglt) CREF(BgL_obj2155z00_1712))->
									BgL_variablez00);
							}
							BgL_arg4815z00_1594 =
								(((BgL_variablez00_bglt) CREF(BgL_arg4819z00_1597))->
								BgL_valuez00);
						}
						BgL_arg4816z00_1595 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1590))->BgL_funz00);
						{	/* Cfa/app.scm 36 */
							obj_t BgL_l4690z00_1599;

							BgL_l4690z00_1599 =
								(((BgL_appz00_bglt) CREF(BgL_nodez00_1590))->BgL_argsz00);
							if (NULLP(BgL_l4690z00_1599))
								{	/* Cfa/app.scm 36 */
									BgL_arg4817z00_1596 = BNIL;
								}
							else
								{	/* Cfa/app.scm 36 */
									obj_t BgL_head4692z00_1601;

									{	/* Cfa/app.scm 36 */
										BgL_approxz00_bglt BgL_arg4828z00_1614;

										{	/* Cfa/app.scm 36 */
											obj_t BgL_arg4830z00_1616;

											BgL_arg4830z00_1616 = CAR(BgL_l4690z00_1599);
											BgL_arg4828z00_1614 =
												BGl_cfaz12z12zzcfa_cfaz00(
												(BgL_nodez00_bglt) (BgL_arg4830z00_1616));
										}
										BgL_head4692z00_1601 =
											MAKE_PAIR((obj_t) (BgL_arg4828z00_1614), BNIL);
									}
									{	/* Cfa/app.scm 36 */
										obj_t BgL_g4695z00_1602;

										BgL_g4695z00_1602 = CDR(BgL_l4690z00_1599);
										{
											obj_t BgL_l4690z00_1604;

											obj_t BgL_tail4693z00_1605;

											BgL_l4690z00_1604 = BgL_g4695z00_1602;
											BgL_tail4693z00_1605 = BgL_head4692z00_1601;
										BgL_zc3anonymousza34822ze3z83_1606:
											if (NULLP(BgL_l4690z00_1604))
												{	/* Cfa/app.scm 36 */
													BgL_arg4817z00_1596 = BgL_head4692z00_1601;
												}
											else
												{	/* Cfa/app.scm 36 */
													obj_t BgL_newtail4694z00_1608;

													{	/* Cfa/app.scm 36 */
														BgL_approxz00_bglt BgL_arg4825z00_1610;

														{	/* Cfa/app.scm 36 */
															obj_t BgL_arg4827z00_1612;

															BgL_arg4827z00_1612 = CAR(BgL_l4690z00_1604);
															BgL_arg4825z00_1610 =
																BGl_cfaz12z12zzcfa_cfaz00(
																(BgL_nodez00_bglt) (BgL_arg4827z00_1612));
														}
														BgL_newtail4694z00_1608 =
															MAKE_PAIR((obj_t) (BgL_arg4825z00_1610), BNIL);
													}
													SET_CDR(BgL_tail4693z00_1605,
														BgL_newtail4694z00_1608);
													{
														obj_t BgL_tail4693z00_1999;

														obj_t BgL_l4690z00_1997;

														BgL_l4690z00_1997 = CDR(BgL_l4690z00_1604);
														BgL_tail4693z00_1999 = BgL_newtail4694z00_1608;
														BgL_tail4693z00_1605 = BgL_tail4693z00_1999;
														BgL_l4690z00_1604 = BgL_l4690z00_1997;
														goto BgL_zc3anonymousza34822ze3z83_1606;
													}
												}
										}
									}
								}
						}
						{	/* Cfa/app.scm 36 */
							BgL_approxz00_bglt BgL_res4863z00_1756;

							{	/* Cfa/app.scm 36 */
								BgL_funz00_bglt BgL_funz00_1728;

								BgL_funz00_1728 = (BgL_funz00_bglt) (BgL_arg4815z00_1594);
								{	/* Cfa/app.scm 36 */
									obj_t BgL_method4707z00_1731;

									{	/* Cfa/app.scm 36 */
										BgL_objectz00_bglt BgL_objz00_1732;

										BgL_objz00_1732 = (BgL_objectz00_bglt) (BgL_funz00_1728);
										{	/* Cfa/app.scm 36 */
											long BgL_objzd2classzd2numz00_1733;

											BgL_objzd2classzd2numz00_1733 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1732);
											{	/* Cfa/app.scm 36 */
												obj_t BgL_arg2643z00_1734;

												BgL_arg2643z00_1734 =
													PROCEDURE_REF(BGl_appz12zd2envzc0zzcfa_appz00,
													(int) (((long) 1)));
												{	/* Cfa/app.scm 36 */
													obj_t BgL_arrayz00_1736;

													int BgL_offsetz00_1737;

													BgL_arrayz00_1736 = BgL_arg2643z00_1734;
													BgL_offsetz00_1737 =
														(int) (BgL_objzd2classzd2numz00_1733);
													{	/* Cfa/app.scm 36 */
														long BgL_offsetz00_1738;

														BgL_offsetz00_1738 =
															((long) (BgL_offsetz00_1737) - OBJECT_TYPE);
														{	/* Cfa/app.scm 36 */
															long BgL_modz00_1739;

															{	/* Cfa/app.scm 36 */
																int BgL_arg2645z00_1740;

																BgL_arg2645z00_1740 = (int) (((long) 16));
																{	/* Cfa/app.scm 36 */
																	long BgL_auxz00_2009;

																	BgL_auxz00_2009 =
																		(long) (BgL_arg2645z00_1740);
																	BgL_modz00_1739 =
																		(BgL_offsetz00_1738 / BgL_auxz00_2009);
															}}
															{	/* Cfa/app.scm 36 */
																long BgL_restz00_1741;

																{	/* Cfa/app.scm 36 */
																	int BgL_arg2644z00_1742;

																	BgL_arg2644z00_1742 = (int) (((long) 16));
																	{	/* Cfa/app.scm 36 */
																		long BgL_auxz00_2013;

																		BgL_auxz00_2013 =
																			(long) (BgL_arg2644z00_1742);
																		BgL_restz00_1741 =
																			(BgL_offsetz00_1738 % BgL_auxz00_2013);
																}}
																{	/* Cfa/app.scm 36 */

																	BgL_method4707z00_1731 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1736,
																			(int) (BgL_modz00_1739)),
																		(int) (BgL_restz00_1741));
									}}}}}}}}
									BgL_res4863z00_1756 =
										(BgL_approxz00_bglt) (PROCEDURE_ENTRY
										(BgL_method4707z00_1731) (BgL_method4707z00_1731,
											(obj_t) (BgL_funz00_1728), (obj_t) (BgL_arg4816z00_1595),
											BgL_arg4817z00_1596, BEOA));
							}}
							BgL_auxz00_1975 = BgL_res4863z00_1756;
					}}
					return (obj_t) (BgL_auxz00_1975);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_appz00()
	{
		AN_OBJECT;
		{	/* Cfa/app.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string4872z00zzcfa_appz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4872z00zzcfa_appz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string4872z00zzcfa_appz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4872z00zzcfa_appz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4872z00zzcfa_appz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4872z00zzcfa_appz00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 243010053),
				BSTRING_TO_STRING(BGl_string4872z00zzcfa_appz00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string4872z00zzcfa_appz00));
			BGl_modulezd2initializa7ationz75zzcfa_cfaz00(((long) 42139303),
				BSTRING_TO_STRING(BGl_string4872z00zzcfa_appz00));
			BGl_modulezd2initializa7ationz75zzcfa_iteratez00(((long) 319050990),
				BSTRING_TO_STRING(BGl_string4872z00zzcfa_appz00));
			BGl_modulezd2initializa7ationz75zzcfa_loosez00(((long) 235614963),
				BSTRING_TO_STRING(BGl_string4872z00zzcfa_appz00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 535144917),
				BSTRING_TO_STRING(BGl_string4872z00zzcfa_appz00));
		}
	}

#ifdef __cplusplus
}
#endif
