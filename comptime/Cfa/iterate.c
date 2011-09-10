/*===========================================================================*/
/*   (Cfa/iterate.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/iterate.scm)*/
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


	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_cfazd2internzd2sfunz12z12zzcfa_iteratez00
		(BgL_internzd2sfunzf2cinfoz20_bglt, obj_t);
	extern BgL_approxz00_bglt BGl_loosez12z12zzcfa_loosez00(BgL_approxz00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_unitzd2initializa7ersz75zzast_unitz00();
	BGL_EXPORTED_DEF obj_t BGl_za2cfazd2stampza2zd2zzcfa_iteratez00 = BUNSPEC;
	static obj_t BGl__cfazd2iteratez12zc0zzcfa_iteratez00(obj_t, obj_t);
	static obj_t BGl__cfazd2iteratezd2tozd2fixpointz12zc0zzcfa_iteratez00(obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzcfa_iteratez00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_cfazd2exportzd2varz12zd2defa4697zc0zzcfa_iteratez00(BgL_valuez00_bglt,
		obj_t);
	static obj_t BGl__cfazd2internzd2sfunz12z12zzcfa_iteratez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_iteratez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_loosez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_cfaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_unitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzcfa_iteratez00();
	static obj_t BGl_za2cfazd2continuezf3za2z21zzcfa_iteratez00 = BUNSPEC;
	static obj_t BGl_cfazd2exportzd2varz12zd2inte4702zc0zzcfa_iteratez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00;
	BGL_EXPORTED_DECL obj_t
		BGl_cfazd2exportzd2varz12z12zzcfa_iteratez00(BgL_valuez00_bglt, obj_t);
	extern obj_t BGl_valuez00zzast_varz00;
	static obj_t BGl__continuezd2cfaz12zc0zzcfa_iteratez00(obj_t, obj_t);
	static obj_t BGl_cfazd2exportzd2varz12zd2svar4700zc0zzcfa_iteratez00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern BgL_approxz00_bglt
		BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_approxz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_continuezd2cfaz12zc0zzcfa_iteratez00(obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_iteratez00();
	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_iteratez00 = BUNSPEC;
	static obj_t BGl__cfazd2exportzd2varz12zd2defa4697zc0zzcfa_iteratez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzcfa_iteratez00();
	extern obj_t BGl_globalz00zzast_varz00;
	BGL_EXPORTED_DECL obj_t BGl_cfazd2iteratez12zc0zzcfa_iteratez00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_iteratez00();
	extern BgL_approxz00_bglt BGl_cfaz12z12zzcfa_cfaz00(BgL_nodez00_bglt);
	extern obj_t BGl_svarzf2Cinfozf2zzcfa_infoz00;
	BGL_EXPORTED_DECL obj_t
		BGl_cfazd2iteratezd2tozd2fixpointz12zc0zzcfa_iteratez00(obj_t);
	extern obj_t BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_approxz00_bglt);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t
		BGl_cfazd2variablezd2valuezd2approxzd2zzcfa_cfaz00(BgL_valuez00_bglt);
	static bool_t BGl_exportedzd2closurezf3z21zzcfa_iteratez00(obj_t);
	static obj_t BGl__cfazd2exportzd2varz12z12zzcfa_iteratez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_iteratez00();
	static obj_t __cnst[4];


	   
		 
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_cfazd2exportzd2varz12zd2envzc0zzcfa_iteratez00,
		BgL_bgl__cfaza7d2exportza7d24854z00,
		BGl__cfazd2exportzd2varz12z12zzcfa_iteratez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfazd2internzd2sfunz12zd2envzc0zzcfa_iteratez00,
		BgL_bgl__cfaza7d2internza7d24855z00,
		BGl__cfazd2internzd2sfunz12z12zzcfa_iteratez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfazd2iteratezd2tozd2fixpointz12zd2envz12zzcfa_iteratez00,
		BgL_bgl__cfaza7d2iterateza7d4856z00,
		BGl__cfazd2iteratezd2tozd2fixpointz12zc0zzcfa_iteratez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4848z00zzcfa_iteratez00,
		BgL_bgl_cfaza7d2exportza7d2v4857z00,
		BGl_cfazd2exportzd2varz12zd2svar4700zc0zzcfa_iteratez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4849z00zzcfa_iteratez00,
		BgL_bgl_cfaza7d2exportza7d2v4858z00,
		BGl_cfazd2exportzd2varz12zd2inte4702zc0zzcfa_iteratez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4846z00zzcfa_iteratez00,
		BgL_bgl_string4846za700za7za7c4859za7, "cfa-export-var!", 15);
	      DEFINE_STRING(BGl_string4847z00zzcfa_iteratez00,
		BgL_bgl_string4847za700za7za7c4860za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string4850z00zzcfa_iteratez00,
		BgL_bgl_string4850za700za7za7c4861za7, "cfa_iterate", 11);
	      DEFINE_STRING(BGl_string4851z00zzcfa_iteratez00,
		BgL_bgl_string4851za700za7za7c4862za7,
		"all cfa-export-var!-defa4697 never export ", 42);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_continuezd2cfaz12zd2envz12zzcfa_iteratez00,
		BgL_bgl__continueza7d2cfaza74863z00,
		BGl__continuezd2cfaz12zc0zzcfa_iteratez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfazd2iteratez12zd2envz12zzcfa_iteratez00,
		BgL_bgl__cfaza7d2iterateza714864z00,
		BGl__cfazd2iteratez12zc0zzcfa_iteratez00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_cfazd2exportzd2varz12zd2defa4697zd2envz12zzcfa_iteratez00,
		BgL_bgl__cfaza7d2exportza7d24865z00,
		BGl__cfazd2exportzd2varz12zd2defa4697zc0zzcfa_iteratez00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_iteratez00(long
		BgL_checksumz00_1786, char *BgL_fromz00_1787)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_iteratez00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_iteratez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcfa_iteratez00();
					BGl_cnstzd2initzd2zzcfa_iteratez00();
					BGl_importedzd2moduleszd2initz00zzcfa_iteratez00();
					BGl_genericzd2initzd2zzcfa_iteratez00();
					BGl_methodzd2initzd2zzcfa_iteratez00();
					BGl_toplevelzd2initzd2zzcfa_iteratez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_iteratez00()
	{
		AN_OBJECT;
		{	/* Cfa/iterate.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_iterate");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cfa_iterate");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_iterate");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_iterate");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_iteratez00()
	{
		AN_OBJECT;
		{	/* Cfa/iterate.scm 15 */
			{	/* Cfa/iterate.scm 15 */
				obj_t BgL_cportz00_1778;

				BgL_cportz00_1778 =
					bgl_open_input_string(BGl_string4851z00zzcfa_iteratez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1779;

					BgL_iz00_1779 = ((long) 3);
				BgL_loopz00_1780:
					if ((BgL_iz00_1779 == ((long) -1)))
						{	/* Cfa/iterate.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/iterate.scm 15 */
							{	/* Cfa/iterate.scm 15 */
								obj_t BgL_arg4853z00_1782;

								{	/* Cfa/iterate.scm 15 */

									{	/* Cfa/iterate.scm 15 */
										obj_t BgL_locationz00_1784;

										BgL_locationz00_1784 = BBOOL(((bool_t) 0));
										{	/* Cfa/iterate.scm 15 */

											BgL_arg4853z00_1782 =
												BGl_readz00zz__readerz00(BgL_cportz00_1778,
												BgL_locationz00_1784);
										}
									}
								}
								{	/* Cfa/iterate.scm 15 */
									int BgL_auxz00_1807;

									BgL_auxz00_1807 = (int) (BgL_iz00_1779);
									CNST_TABLE_SET(BgL_auxz00_1807, BgL_arg4853z00_1782);
							}}
							{	/* Cfa/iterate.scm 15 */
								int BgL_auxz00_1785;

								BgL_auxz00_1785 = (int) ((BgL_iz00_1779 - ((long) 1)));
								{
									long BgL_iz00_1812;

									BgL_iz00_1812 = (long) (BgL_auxz00_1785);
									BgL_iz00_1779 = BgL_iz00_1812;
									goto BgL_loopz00_1780;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_iteratez00()
	{
		AN_OBJECT;
		{	/* Cfa/iterate.scm 15 */
			BGl_za2cfazd2continuezf3za2z21zzcfa_iteratez00 = BUNSPEC;
			return (BGl_za2cfazd2stampza2zd2zzcfa_iteratez00 =
				BINT(((long) -1)), BUNSPEC);
		}
	}



/* cfa-iterate-to-fixpoint! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfazd2iteratezd2tozd2fixpointz12zc0zzcfa_iteratez00(obj_t
		BgL_globalsz00_1)
	{
		AN_OBJECT;
		{	/* Cfa/iterate.scm 37 */
			BGl_za2cfazd2stampza2zd2zzcfa_iteratez00 = BINT(((long) -1));
			{	/* Cfa/iterate.scm 42 */
				obj_t BgL_glodefsz00_1054;

				BgL_glodefsz00_1054 = BNIL;
				{
					obj_t BgL_l4690z00_1056;

					BgL_l4690z00_1056 = BgL_globalsz00_1;
				BgL_zc3anonymousza34703ze3z83_1057:
					if (PAIRP(BgL_l4690z00_1056))
						{	/* Cfa/iterate.scm 43 */
							{	/* Cfa/iterate.scm 44 */
								obj_t BgL_gz00_1059;

								BgL_gz00_1059 = CAR(BgL_l4690z00_1056);
								{	/* Cfa/iterate.scm 44 */
									bool_t BgL_testz00_1819;

									{	/* Cfa/iterate.scm 44 */
										bool_t BgL_testz00_1820;

										{	/* Cfa/iterate.scm 44 */
											obj_t BgL_auxz00_1821;

											{
												BgL_globalz00_bglt BgL_auxz00_1822;

												BgL_auxz00_1822 = (BgL_globalz00_bglt) (BgL_gz00_1059);
												BgL_auxz00_1821 =
													(((BgL_globalz00_bglt) CREF(BgL_auxz00_1822))->
													BgL_importz00);
											}
											BgL_testz00_1820 =
												(BgL_auxz00_1821 == CNST_TABLE_REF(((long) 0)));
										}
										if (BgL_testz00_1820)
											{	/* Cfa/iterate.scm 44 */
												BgL_testz00_1819 = ((bool_t) 1);
											}
										else
											{	/* Cfa/iterate.scm 44 */
												BgL_testz00_1819 =
													BGl_exportedzd2closurezf3z21zzcfa_iteratez00
													(BgL_gz00_1059);
											}
									}
									if (BgL_testz00_1819)
										{	/* Cfa/iterate.scm 44 */
											BgL_glodefsz00_1054 =
												MAKE_PAIR(BgL_gz00_1059, BgL_glodefsz00_1054);
										}
									else
										{	/* Cfa/iterate.scm 44 */
											BFALSE;
										}
								}
							}
							{
								obj_t BgL_l4690z00_1829;

								BgL_l4690z00_1829 = CDR(BgL_l4690z00_1056);
								BgL_l4690z00_1056 = BgL_l4690z00_1829;
								goto BgL_zc3anonymousza34703ze3z83_1057;
							}
						}
					else
						{	/* Cfa/iterate.scm 43 */
							((bool_t) 1);
						}
				}
				{	/* Cfa/iterate.scm 49 */
					obj_t BgL_arg4711z00_1066;

					BgL_arg4711z00_1066 = BGl_unitzd2initializa7ersz75zzast_unitz00();
					BgL_glodefsz00_1054 =
						bgl_append2(BgL_arg4711z00_1066, BgL_glodefsz00_1054);
				}
				if (CBOOL(BGl_za2cfazd2continuezf3za2z21zzcfa_iteratez00))
					{	/* Cfa/iterate.scm 51 */
						BFALSE;
					}
				else
					{	/* Cfa/iterate.scm 51 */
						BNIL;
					}
				BGl_za2cfazd2continuezf3za2z21zzcfa_iteratez00 = BTRUE;
				{

				BgL_zc3anonymousza34712ze3z83_1068:
					if (CBOOL(BGl_za2cfazd2continuezf3za2z21zzcfa_iteratez00))
						{	/* Cfa/iterate.scm 54 */
							BGl_cfazd2iteratez12zc0zzcfa_iteratez00(BgL_glodefsz00_1054);
							goto BgL_zc3anonymousza34712ze3z83_1068;
						}
					else
						{	/* Cfa/iterate.scm 54 */
							return BgL_glodefsz00_1054;
						}
				}
			}
		}
	}



/* _cfa-iterate-to-fixpoint! */
	obj_t BGl__cfazd2iteratezd2tozd2fixpointz12zc0zzcfa_iteratez00(obj_t
		BgL_envz00_1755, obj_t BgL_globalsz00_1756)
	{
		AN_OBJECT;
		{	/* Cfa/iterate.scm 37 */
			return
				BGl_cfazd2iteratezd2tozd2fixpointz12zc0zzcfa_iteratez00
				(BgL_globalsz00_1756);
		}
	}



/* exported-closure? */
	bool_t BGl_exportedzd2closurezf3z21zzcfa_iteratez00(obj_t BgL_gz00_2)
	{
		AN_OBJECT;
		{	/* Cfa/iterate.scm 64 */
			{	/* Cfa/iterate.scm 65 */
				bool_t BgL_testz00_1839;

				{	/* Cfa/iterate.scm 65 */
					obj_t BgL_auxz00_1840;

					{
						BgL_variablez00_bglt BgL_auxz00_1841;

						BgL_auxz00_1841 = (BgL_variablez00_bglt) (BgL_gz00_2);
						BgL_auxz00_1840 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_1841))->
							BgL_removablez00);
					}
					BgL_testz00_1839 = (BgL_auxz00_1840 == CNST_TABLE_REF(((long) 1)));
				}
				if (BgL_testz00_1839)
					{	/* Cfa/iterate.scm 66 */
						BgL_valuez00_bglt BgL_valz00_1072;

						{
							BgL_variablez00_bglt BgL_auxz00_1846;

							BgL_auxz00_1846 = (BgL_variablez00_bglt) (BgL_gz00_2);
							BgL_valz00_1072 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_1846))->BgL_valuez00);
						}
						{	/* Cfa/iterate.scm 67 */
							bool_t BgL_testz00_1849;

							{	/* Cfa/iterate.scm 67 */
								obj_t BgL_obj1955z00_1665;

								BgL_obj1955z00_1665 = (obj_t) (BgL_valz00_1072);
								BgL_testz00_1849 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj1955z00_1665,
									BGl_sfunz00zzast_varz00);
							}
							if (BgL_testz00_1849)
								{	/* Cfa/iterate.scm 68 */
									bool_t BgL_testz00_1852;

									{	/* Cfa/iterate.scm 68 */
										obj_t BgL_arg4717z00_1078;

										{
											BgL_sfunz00_bglt BgL_auxz00_1853;

											BgL_auxz00_1853 = (BgL_sfunz00_bglt) (BgL_valz00_1072);
											BgL_arg4717z00_1078 =
												(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1853))->
												BgL_thezd2closurezd2globalz00);
										}
										BgL_testz00_1852 =
											BGl_iszd2azf3z21zz__objectz00(BgL_arg4717z00_1078,
											BGl_globalz00zzast_varz00);
									}
									if (BgL_testz00_1852)
										{	/* Cfa/iterate.scm 69 */
											obj_t BgL_auxz00_1857;

											{	/* Cfa/iterate.scm 69 */
												BgL_globalz00_bglt BgL_obj1679z00_1669;

												{	/* Cfa/iterate.scm 69 */
													BgL_sfunz00_bglt BgL_obj1898z00_1668;

													BgL_obj1898z00_1668 =
														(BgL_sfunz00_bglt) (BgL_valz00_1072);
													BgL_obj1679z00_1669 =
														(BgL_globalz00_bglt) (
														(((BgL_sfunz00_bglt) CREF(BgL_obj1898z00_1668))->
															BgL_thezd2closurezd2globalz00));
												}
												BgL_auxz00_1857 =
													(((BgL_globalz00_bglt) CREF(BgL_obj1679z00_1669))->
													BgL_importz00);
											}
											return (BgL_auxz00_1857 == CNST_TABLE_REF(((long) 0)));
										}
									else
										{	/* Cfa/iterate.scm 68 */
											return ((bool_t) 0);
										}
								}
							else
								{	/* Cfa/iterate.scm 67 */
									return ((bool_t) 0);
								}
						}
					}
				else
					{	/* Cfa/iterate.scm 65 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* cfa-iterate! */
	BGL_EXPORTED_DEF obj_t BGl_cfazd2iteratez12zc0zzcfa_iteratez00(obj_t
		BgL_globalsz00_3)
	{
		AN_OBJECT;
		{	/* Cfa/iterate.scm 74 */
			BGl_za2cfazd2continuezf3za2z21zzcfa_iteratez00 = BFALSE;
			{	/* Cfa/iterate.scm 76 */
				long BgL_za72za7_1671;

				BgL_za72za7_1671 =
					(long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00);
				BGl_za2cfazd2stampza2zd2zzcfa_iteratez00 =
					BINT((((long) 1) + BgL_za72za7_1671));
			}
			{
				obj_t BgL_l4692z00_1082;

				BgL_l4692z00_1082 = BgL_globalsz00_3;
			BgL_zc3anonymousza34720ze3z83_1083:
				if (PAIRP(BgL_l4692z00_1082))
					{	/* Cfa/iterate.scm 78 */
						{	/* Cfa/iterate.scm 81 */
							obj_t BgL_gz00_1085;

							BgL_gz00_1085 = CAR(BgL_l4692z00_1082);
							{	/* Cfa/iterate.scm 80 */
								BgL_valuez00_bglt BgL_arg4722z00_1086;

								{
									BgL_variablez00_bglt BgL_auxz00_1870;

									BgL_auxz00_1870 = (BgL_variablez00_bglt) (BgL_gz00_1085);
									BgL_arg4722z00_1086 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_1870))->
										BgL_valuez00);
								}
								{	/* Cfa/iterate.scm 80 */
									obj_t BgL_method4698z00_1677;

									{	/* Cfa/iterate.scm 80 */
										BgL_objectz00_bglt BgL_objz00_1678;

										BgL_objz00_1678 =
											(BgL_objectz00_bglt) (BgL_arg4722z00_1086);
										{	/* Cfa/iterate.scm 80 */
											long BgL_objzd2classzd2numz00_1679;

											BgL_objzd2classzd2numz00_1679 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1678);
											{	/* Cfa/iterate.scm 80 */
												obj_t BgL_arg2643z00_1680;

												BgL_arg2643z00_1680 =
													PROCEDURE_REF
													(BGl_cfazd2exportzd2varz12zd2envzc0zzcfa_iteratez00,
													(int) (((long) 1)));
												{	/* Cfa/iterate.scm 80 */
													obj_t BgL_arrayz00_1682;

													int BgL_offsetz00_1683;

													BgL_arrayz00_1682 = BgL_arg2643z00_1680;
													BgL_offsetz00_1683 =
														(int) (BgL_objzd2classzd2numz00_1679);
													{	/* Cfa/iterate.scm 80 */
														long BgL_offsetz00_1684;

														BgL_offsetz00_1684 =
															((long) (BgL_offsetz00_1683) - OBJECT_TYPE);
														{	/* Cfa/iterate.scm 80 */
															long BgL_modz00_1685;

															{	/* Cfa/iterate.scm 80 */
																int BgL_arg2645z00_1686;

																BgL_arg2645z00_1686 = (int) (((long) 16));
																{	/* Cfa/iterate.scm 80 */
																	long BgL_auxz00_1881;

																	BgL_auxz00_1881 =
																		(long) (BgL_arg2645z00_1686);
																	BgL_modz00_1685 =
																		(BgL_offsetz00_1684 / BgL_auxz00_1881);
															}}
															{	/* Cfa/iterate.scm 80 */
																long BgL_restz00_1687;

																{	/* Cfa/iterate.scm 80 */
																	int BgL_arg2644z00_1688;

																	BgL_arg2644z00_1688 = (int) (((long) 16));
																	{	/* Cfa/iterate.scm 80 */
																		long BgL_auxz00_1885;

																		BgL_auxz00_1885 =
																			(long) (BgL_arg2644z00_1688);
																		BgL_restz00_1687 =
																			(BgL_offsetz00_1684 % BgL_auxz00_1885);
																}}
																{	/* Cfa/iterate.scm 80 */

																	BgL_method4698z00_1677 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1682,
																			(int) (BgL_modz00_1685)),
																		(int) (BgL_restz00_1687));
									}}}}}}}}
									PROCEDURE_ENTRY(BgL_method4698z00_1677)
										(BgL_method4698z00_1677, (obj_t) (BgL_arg4722z00_1086),
										BgL_gz00_1085, BEOA);
							}} BNIL;
						}
						{
							obj_t BgL_l4692z00_1895;

							BgL_l4692z00_1895 = CDR(BgL_l4692z00_1082);
							BgL_l4692z00_1082 = BgL_l4692z00_1895;
							goto BgL_zc3anonymousza34720ze3z83_1083;
						}
					}
				else
					{	/* Cfa/iterate.scm 78 */
						((bool_t) 1);
					}
			}
			return BNIL;
		}
	}



/* _cfa-iterate! */
	obj_t BGl__cfazd2iteratez12zc0zzcfa_iteratez00(obj_t BgL_envz00_1757,
		obj_t BgL_globalsz00_1758)
	{
		AN_OBJECT;
		{	/* Cfa/iterate.scm 74 */
			return BGl_cfazd2iteratez12zc0zzcfa_iteratez00(BgL_globalsz00_1758);
		}
	}



/* cfa-intern-sfun! */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_cfazd2internzd2sfunz12z12zzcfa_iteratez00
		(BgL_internzd2sfunzf2cinfoz20_bglt BgL_sfunz00_12, obj_t BgL_ownerz00_13)
	{
		AN_OBJECT;
		{	/* Cfa/iterate.scm 135 */
			{	/* Cfa/iterate.scm 138 */
				bool_t BgL_testz00_1898;

				{	/* Cfa/iterate.scm 138 */
					long BgL_n2z00_1705;

					BgL_n2z00_1705 =
						(long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00);
					{	/* Cfa/iterate.scm 138 */
						long BgL_auxz00_1900;

						{
							obj_t BgL_auxz00_1901;

							{	/* Cfa/iterate.scm 138 */
								BgL_objectz00_bglt BgL_auxz00_1902;

								BgL_auxz00_1902 = (BgL_objectz00_bglt) (BgL_sfunz00_12);
								BgL_auxz00_1901 = BGL_OBJECT_WIDENING(BgL_auxz00_1902);
							}
							BgL_auxz00_1900 =
								(((BgL_internzd2sfunzf2cinfoz20_bglt) CREF(BgL_auxz00_1901))->
								BgL_stampz00);
						}
						BgL_testz00_1898 = (BgL_auxz00_1900 == BgL_n2z00_1705);
				}}
				if (BgL_testz00_1898)
					{
						obj_t BgL_auxz00_1907;

						{	/* Cfa/iterate.scm 139 */
							BgL_objectz00_bglt BgL_auxz00_1908;

							BgL_auxz00_1908 = (BgL_objectz00_bglt) (BgL_sfunz00_12);
							BgL_auxz00_1907 = BGL_OBJECT_WIDENING(BgL_auxz00_1908);
						}
						return
							(((BgL_internzd2sfunzf2cinfoz20_bglt) CREF(BgL_auxz00_1907))->
							BgL_approxz00);
					}
				else
					{	/* Cfa/iterate.scm 138 */
						{
							long BgL_auxz00_1916;

							obj_t BgL_auxz00_1912;

							BgL_auxz00_1916 =
								(long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00);
							{	/* Cfa/iterate.scm 141 */
								BgL_objectz00_bglt BgL_auxz00_1913;

								BgL_auxz00_1913 = (BgL_objectz00_bglt) (BgL_sfunz00_12);
								BgL_auxz00_1912 = BGL_OBJECT_WIDENING(BgL_auxz00_1913);
							}
							((((BgL_internzd2sfunzf2cinfoz20_bglt) CREF(BgL_auxz00_1912))->
									BgL_stampz00) = ((long) BgL_auxz00_1916), BUNSPEC);
						}
						{	/* Cfa/iterate.scm 142 */
							BgL_approxz00_bglt BgL_arg4725z00_1091;

							BgL_approxz00_bglt BgL_arg4726z00_1092;

							{
								obj_t BgL_auxz00_1919;

								{	/* Cfa/iterate.scm 142 */
									BgL_objectz00_bglt BgL_auxz00_1920;

									BgL_auxz00_1920 = (BgL_objectz00_bglt) (BgL_sfunz00_12);
									BgL_auxz00_1919 = BGL_OBJECT_WIDENING(BgL_auxz00_1920);
								}
								BgL_arg4725z00_1091 =
									(((BgL_internzd2sfunzf2cinfoz20_bglt) CREF(BgL_auxz00_1919))->
									BgL_approxz00);
							}
							{	/* Cfa/iterate.scm 142 */
								obj_t BgL_arg4727z00_1093;

								{
									BgL_sfunz00_bglt BgL_auxz00_1924;

									BgL_auxz00_1924 = (BgL_sfunz00_bglt) (BgL_sfunz00_12);
									BgL_arg4727z00_1093 =
										(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1924))->BgL_bodyz00);
								}
								BgL_arg4726z00_1092 =
									BGl_cfaz12z12zzcfa_cfaz00(
									(BgL_nodez00_bglt) (BgL_arg4727z00_1093));
							}
							BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg4725z00_1091,
								BgL_arg4726z00_1092);
						}
						{
							obj_t BgL_auxz00_1930;

							{	/* Cfa/iterate.scm 142 */
								BgL_objectz00_bglt BgL_auxz00_1931;

								BgL_auxz00_1931 = (BgL_objectz00_bglt) (BgL_sfunz00_12);
								BgL_auxz00_1930 = BGL_OBJECT_WIDENING(BgL_auxz00_1931);
							}
							return
								(((BgL_internzd2sfunzf2cinfoz20_bglt) CREF(BgL_auxz00_1930))->
								BgL_approxz00);
						}
					}
			}
		}
	}



/* _cfa-intern-sfun! */
	obj_t BGl__cfazd2internzd2sfunz12z12zzcfa_iteratez00(obj_t BgL_envz00_1762,
		obj_t BgL_sfunz00_1763, obj_t BgL_ownerz00_1764)
	{
		AN_OBJECT;
		{	/* Cfa/iterate.scm 135 */
			return
				(obj_t) (BGl_cfazd2internzd2sfunz12z12zzcfa_iteratez00(
					(BgL_internzd2sfunzf2cinfoz20_bglt) (BgL_sfunz00_1763),
					BgL_ownerz00_1764));
		}
	}



/* continue-cfa! */
	BGL_EXPORTED_DEF obj_t BGl_continuezd2cfaz12zc0zzcfa_iteratez00(obj_t
		BgL_reasonz00_14)
	{
		AN_OBJECT;
		{	/* Cfa/iterate.scm 154 */
			if (CBOOL(BGl_za2cfazd2continuezf3za2z21zzcfa_iteratez00))
				{	/* Cfa/iterate.scm 155 */
					BFALSE;
				}
			else
				{	/* Cfa/iterate.scm 155 */
					BNIL;
				}
			return (BGl_za2cfazd2continuezf3za2z21zzcfa_iteratez00 = BTRUE, BUNSPEC);
		}
	}



/* _continue-cfa! */
	obj_t BGl__continuezd2cfaz12zc0zzcfa_iteratez00(obj_t BgL_envz00_1765,
		obj_t BgL_reasonz00_1766)
	{
		AN_OBJECT;
		{	/* Cfa/iterate.scm 154 */
			return BGl_continuezd2cfaz12zc0zzcfa_iteratez00(BgL_reasonz00_1766);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_iteratez00()
	{
		AN_OBJECT;
		{	/* Cfa/iterate.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_cfazd2exportzd2varz12zd2envzc0zzcfa_iteratez00,
				BGl_cfazd2exportzd2varz12zd2defa4697zd2envz12zzcfa_iteratez00,
				BGl_valuez00zzast_varz00, BGl_string4846z00zzcfa_iteratez00);
		}
	}



/* cfa-export-var! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfazd2exportzd2varz12z12zzcfa_iteratez00(BgL_valuez00_bglt
		BgL_valuez00_4, obj_t BgL_ownerz00_5)
	{
		AN_OBJECT;
		{	/* Cfa/iterate.scm 88 */
			{	/* Cfa/iterate.scm 88 */
				obj_t BgL_method4698z00_1712;

				{	/* Cfa/iterate.scm 88 */
					BgL_objectz00_bglt BgL_objz00_1713;

					BgL_objz00_1713 = (BgL_objectz00_bglt) (BgL_valuez00_4);
					{	/* Cfa/iterate.scm 88 */
						long BgL_objzd2classzd2numz00_1714;

						BgL_objzd2classzd2numz00_1714 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1713);
						{	/* Cfa/iterate.scm 88 */
							obj_t BgL_arg2643z00_1715;

							BgL_arg2643z00_1715 =
								PROCEDURE_REF
								(BGl_cfazd2exportzd2varz12zd2envzc0zzcfa_iteratez00,
								(int) (((long) 1)));
							{	/* Cfa/iterate.scm 88 */
								obj_t BgL_arrayz00_1717;

								int BgL_offsetz00_1718;

								BgL_arrayz00_1717 = BgL_arg2643z00_1715;
								BgL_offsetz00_1718 = (int) (BgL_objzd2classzd2numz00_1714);
								{	/* Cfa/iterate.scm 88 */
									long BgL_offsetz00_1719;

									BgL_offsetz00_1719 =
										((long) (BgL_offsetz00_1718) - OBJECT_TYPE);
									{	/* Cfa/iterate.scm 88 */
										long BgL_modz00_1720;

										{	/* Cfa/iterate.scm 88 */
											int BgL_arg2645z00_1721;

											BgL_arg2645z00_1721 = (int) (((long) 16));
											{	/* Cfa/iterate.scm 88 */
												long BgL_auxz00_1950;

												BgL_auxz00_1950 = (long) (BgL_arg2645z00_1721);
												BgL_modz00_1720 =
													(BgL_offsetz00_1719 / BgL_auxz00_1950);
										}}
										{	/* Cfa/iterate.scm 88 */
											long BgL_restz00_1722;

											{	/* Cfa/iterate.scm 88 */
												int BgL_arg2644z00_1723;

												BgL_arg2644z00_1723 = (int) (((long) 16));
												{	/* Cfa/iterate.scm 88 */
													long BgL_auxz00_1954;

													BgL_auxz00_1954 = (long) (BgL_arg2644z00_1723);
													BgL_restz00_1722 =
														(BgL_offsetz00_1719 % BgL_auxz00_1954);
											}}
											{	/* Cfa/iterate.scm 88 */

												BgL_method4698z00_1712 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1717,
														(int) (BgL_modz00_1720)), (int) (BgL_restz00_1722));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method4698z00_1712) (BgL_method4698z00_1712,
					(obj_t) (BgL_valuez00_4), BgL_ownerz00_5, BEOA);
			}
		}
	}



/* _cfa-export-var! */
	obj_t BGl__cfazd2exportzd2varz12z12zzcfa_iteratez00(obj_t BgL_envz00_1759,
		obj_t BgL_valuez00_1760, obj_t BgL_ownerz00_1761)
	{
		AN_OBJECT;
		{	/* Cfa/iterate.scm 88 */
			return
				BGl_cfazd2exportzd2varz12z12zzcfa_iteratez00(
				(BgL_valuez00_bglt) (BgL_valuez00_1760), BgL_ownerz00_1761);
		}
	}



/* cfa-export-var!-defa4697 */
	obj_t
		BGl_cfazd2exportzd2varz12zd2defa4697zc0zzcfa_iteratez00(BgL_valuez00_bglt
		BgL_valuez00_6, obj_t BgL_ownerz00_7)
	{
		AN_OBJECT;
		{	/* Cfa/iterate.scm 15 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 2)),
				BGl_string4847z00zzcfa_iteratez00, (obj_t) (BgL_valuez00_6));
		}
	}



/* _cfa-export-var!-defa4697 */
	obj_t BGl__cfazd2exportzd2varz12zd2defa4697zc0zzcfa_iteratez00(obj_t
		BgL_envz00_1767, obj_t BgL_valuez00_1768, obj_t BgL_ownerz00_1769)
	{
		AN_OBJECT;
		{	/* Cfa/iterate.scm 15 */
			return
				BGl_cfazd2exportzd2varz12zd2defa4697zc0zzcfa_iteratez00(
				(BgL_valuez00_bglt) (BgL_valuez00_1768), BgL_ownerz00_1769);
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_iteratez00()
	{
		AN_OBJECT;
		{	/* Cfa/iterate.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfazd2exportzd2varz12zd2envzc0zzcfa_iteratez00,
				BGl_svarzf2Cinfozf2zzcfa_infoz00, BGl_proc4848z00zzcfa_iteratez00,
				BGl_string4846z00zzcfa_iteratez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfazd2exportzd2varz12zd2envzc0zzcfa_iteratez00,
				BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00,
				BGl_proc4849z00zzcfa_iteratez00, BGl_string4846z00zzcfa_iteratez00);
		}
	}



/* cfa-export-var!-inte4702 */
	obj_t BGl_cfazd2exportzd2varz12zd2inte4702zc0zzcfa_iteratez00(obj_t
		BgL_envz00_1772, obj_t BgL_valuez00_1773, obj_t BgL_ownerz00_1774)
	{
		AN_OBJECT;
		{	/* Cfa/iterate.scm 107 */
			{
				BgL_internzd2sfunzf2cinfoz20_bglt BgL_valuez00_1636;

				obj_t BgL_ownerz00_1637;

				{	/* Cfa/iterate.scm 108 */
					BgL_approxz00_bglt BgL_auxz00_1973;

					BgL_valuez00_1636 =
						(BgL_internzd2sfunzf2cinfoz20_bglt) (BgL_valuez00_1773);
					BgL_ownerz00_1637 = BgL_ownerz00_1774;
					{	/* Cfa/iterate.scm 112 */
						bool_t BgL_testz00_1974;

						{	/* Cfa/iterate.scm 112 */
							long BgL_n2z00_1744;

							BgL_n2z00_1744 =
								(long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00);
							{	/* Cfa/iterate.scm 112 */
								long BgL_auxz00_1976;

								{
									obj_t BgL_auxz00_1977;

									{	/* Cfa/iterate.scm 112 */
										BgL_objectz00_bglt BgL_auxz00_1978;

										BgL_auxz00_1978 = (BgL_objectz00_bglt) (BgL_valuez00_1636);
										BgL_auxz00_1977 = BGL_OBJECT_WIDENING(BgL_auxz00_1978);
									}
									BgL_auxz00_1976 =
										(((BgL_internzd2sfunzf2cinfoz20_bglt)
											CREF(BgL_auxz00_1977))->BgL_stampz00);
								}
								BgL_testz00_1974 = (BgL_auxz00_1976 == BgL_n2z00_1744);
						}}
						if (BgL_testz00_1974)
							{	/* Cfa/iterate.scm 112 */
								{
									long BgL_auxz00_1987;

									obj_t BgL_auxz00_1983;

									BgL_auxz00_1987 =
										(long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00);
									{	/* Cfa/iterate.scm 114 */
										BgL_objectz00_bglt BgL_auxz00_1984;

										BgL_auxz00_1984 = (BgL_objectz00_bglt) (BgL_valuez00_1636);
										BgL_auxz00_1983 = BGL_OBJECT_WIDENING(BgL_auxz00_1984);
									}
									((((BgL_internzd2sfunzf2cinfoz20_bglt)
												CREF(BgL_auxz00_1983))->BgL_stampz00) =
										((long) BgL_auxz00_1987), BUNSPEC);
								}
								{
									obj_t BgL_auxz00_1990;

									{	/* Cfa/iterate.scm 114 */
										BgL_objectz00_bglt BgL_auxz00_1991;

										BgL_auxz00_1991 = (BgL_objectz00_bglt) (BgL_valuez00_1636);
										BgL_auxz00_1990 = BGL_OBJECT_WIDENING(BgL_auxz00_1991);
									}
									BgL_auxz00_1973 =
										(((BgL_internzd2sfunzf2cinfoz20_bglt)
											CREF(BgL_auxz00_1990))->BgL_approxz00);
							}}
						else
							{	/* Cfa/iterate.scm 112 */
								{	/* Cfa/iterate.scm 121 */
									obj_t BgL_g4696z00_1642;

									{
										BgL_sfunz00_bglt BgL_auxz00_1995;

										BgL_auxz00_1995 = (BgL_sfunz00_bglt) (BgL_valuez00_1636);
										BgL_g4696z00_1642 =
											(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1995))->BgL_argsz00);
									}
									{
										obj_t BgL_l4694z00_1644;

										BgL_l4694z00_1644 = BgL_g4696z00_1642;
									BgL_zc3anonymousza34833ze3z83_1645:
										if (PAIRP(BgL_l4694z00_1644))
											{	/* Cfa/iterate.scm 121 */
												{	/* Cfa/iterate.scm 122 */
													obj_t BgL_localz00_1647;

													BgL_localz00_1647 = CAR(BgL_l4694z00_1644);
													{	/* Cfa/iterate.scm 122 */
														BgL_valuez00_bglt BgL_valz00_1648;

														{
															BgL_variablez00_bglt BgL_auxz00_2001;

															BgL_auxz00_2001 =
																(BgL_variablez00_bglt) (BgL_localz00_1647);
															BgL_valz00_1648 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_auxz00_2001))->BgL_valuez00);
														}
														{	/* Cfa/iterate.scm 126 */
															bool_t BgL_testz00_2004;

															{	/* Cfa/iterate.scm 126 */
																BgL_svarzf2cinfozf2_bglt BgL_obj3503z00_1752;

																BgL_obj3503z00_1752 =
																	(BgL_svarzf2cinfozf2_bglt) (BgL_valz00_1648);
																{
																	obj_t BgL_auxz00_2006;

																	{	/* Cfa/iterate.scm 126 */
																		BgL_objectz00_bglt BgL_auxz00_2007;

																		BgL_auxz00_2007 =
																			(BgL_objectz00_bglt)
																			(BgL_obj3503z00_1752);
																		BgL_auxz00_2006 =
																			BGL_OBJECT_WIDENING(BgL_auxz00_2007);
																	}
																	BgL_testz00_2004 =
																		(((BgL_svarzf2cinfozf2_bglt)
																			CREF(BgL_auxz00_2006))->
																		BgL_clozd2envzf3z21);
																}
															}
															if (BgL_testz00_2004)
																{	/* Cfa/iterate.scm 126 */
																	BFALSE;
																}
															else
																{	/* Cfa/iterate.scm 127 */
																	BgL_approxz00_bglt BgL_arg4836z00_1650;

																	{	/* Cfa/iterate.scm 127 */
																		BgL_svarzf2cinfozf2_bglt
																			BgL_obj3502z00_1753;
																		BgL_obj3502z00_1753 =
																			(BgL_svarzf2cinfozf2_bglt)
																			(BgL_valz00_1648);
																		{
																			obj_t BgL_auxz00_2012;

																			{	/* Cfa/iterate.scm 127 */
																				BgL_objectz00_bglt BgL_auxz00_2013;

																				BgL_auxz00_2013 =
																					(BgL_objectz00_bglt)
																					(BgL_obj3502z00_1753);
																				BgL_auxz00_2012 =
																					BGL_OBJECT_WIDENING(BgL_auxz00_2013);
																			}
																			BgL_arg4836z00_1650 =
																				(((BgL_svarzf2cinfozf2_bglt)
																					CREF(BgL_auxz00_2012))->
																				BgL_approxz00);
																		}
																	}
																	BGl_approxzd2setzd2topz12z12zzcfa_approxz00
																		(BgL_arg4836z00_1650);
																}
														}
													}
												}
												{
													obj_t BgL_l4694z00_2018;

													BgL_l4694z00_2018 = CDR(BgL_l4694z00_1644);
													BgL_l4694z00_1644 = BgL_l4694z00_2018;
													goto BgL_zc3anonymousza34833ze3z83_1645;
												}
											}
										else
											{	/* Cfa/iterate.scm 121 */
												((bool_t) 1);
											}
									}
								}
								{	/* Cfa/iterate.scm 130 */
									BgL_approxz00_bglt BgL_arg4838z00_1653;

									obj_t BgL_arg4839z00_1654;

									BgL_arg4838z00_1653 =
										BGl_cfazd2internzd2sfunz12z12zzcfa_iteratez00
										(BgL_valuez00_1636, BgL_ownerz00_1637);
									BgL_arg4839z00_1654 = CNST_TABLE_REF(((long) 3));
									BgL_auxz00_1973 =
										BGl_loosez12z12zzcfa_loosez00(BgL_arg4838z00_1653,
										BgL_arg4839z00_1654);
					}}}
					return (obj_t) (BgL_auxz00_1973);
				}
			}
		}
	}



/* cfa-export-var!-svar4700 */
	obj_t BGl_cfazd2exportzd2varz12zd2svar4700zc0zzcfa_iteratez00(obj_t
		BgL_envz00_1775, obj_t BgL_valuez00_1776, obj_t BgL_ownerz00_1777)
	{
		AN_OBJECT;
		{	/* Cfa/iterate.scm 93 */
			{
				BgL_svarzf2cinfozf2_bglt BgL_valuez00_1625;

				obj_t BgL_ownerz00_1626;

				BgL_valuez00_1625 = (BgL_svarzf2cinfozf2_bglt) (BgL_valuez00_1776);
				BgL_ownerz00_1626 = BgL_ownerz00_1777;
				{	/* Cfa/iterate.scm 94 */
					obj_t BgL_instance4684z00_1629;

					BgL_instance4684z00_1629 = BGl_sfunz00zzast_varz00;
					{	/* Cfa/iterate.scm 98 */
						bool_t BgL_testz00_2025;

						{	/* Cfa/iterate.scm 98 */
							long BgL_n2z00_1739;

							BgL_n2z00_1739 =
								(long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00);
							{	/* Cfa/iterate.scm 98 */
								long BgL_auxz00_2027;

								{	/* Cfa/iterate.scm 98 */
									BgL_internzd2sfunzf2cinfoz20_bglt BgL_obj3416z00_1737;

									BgL_obj3416z00_1737 =
										(BgL_internzd2sfunzf2cinfoz20_bglt)
										(BgL_instance4684z00_1629);
									{
										obj_t BgL_auxz00_2029;

										{	/* Cfa/iterate.scm 98 */
											BgL_objectz00_bglt BgL_auxz00_2030;

											BgL_auxz00_2030 =
												(BgL_objectz00_bglt) (BgL_obj3416z00_1737);
											BgL_auxz00_2029 = BGL_OBJECT_WIDENING(BgL_auxz00_2030);
										}
										BgL_auxz00_2027 =
											(((BgL_internzd2sfunzf2cinfoz20_bglt)
												CREF(BgL_auxz00_2029))->BgL_stampz00);
								}}
								BgL_testz00_2025 = (BgL_auxz00_2027 == BgL_n2z00_1739);
						}}
						if (BgL_testz00_2025)
							{	/* Cfa/iterate.scm 98 */
								return
									BGl_cfazd2variablezd2valuezd2approxzd2zzcfa_cfaz00(
									(BgL_valuez00_bglt) (BgL_valuez00_1625));
							}
						else
							{	/* Cfa/iterate.scm 98 */
								{	/* Cfa/iterate.scm 101 */
									BgL_internzd2sfunzf2cinfoz20_bglt BgL_obj3418z00_1740;

									long BgL_val3417z00_1741;

									BgL_obj3418z00_1740 =
										(BgL_internzd2sfunzf2cinfoz20_bglt)
										(BgL_instance4684z00_1629);
									BgL_val3417z00_1741 =
										(long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00);
									{
										obj_t BgL_auxz00_2039;

										{	/* Cfa/iterate.scm 101 */
											BgL_objectz00_bglt BgL_auxz00_2040;

											BgL_auxz00_2040 =
												(BgL_objectz00_bglt) (BgL_obj3418z00_1740);
											BgL_auxz00_2039 = BGL_OBJECT_WIDENING(BgL_auxz00_2040);
										}
										((((BgL_internzd2sfunzf2cinfoz20_bglt)
													CREF(BgL_auxz00_2039))->BgL_stampz00) =
											((long) BgL_val3417z00_1741), BUNSPEC);
								}}
								{	/* Cfa/iterate.scm 102 */
									obj_t BgL_arg4828z00_1631;

									obj_t BgL_arg4829z00_1632;

									BgL_arg4828z00_1631 =
										BGl_cfazd2variablezd2valuezd2approxzd2zzcfa_cfaz00(
										(BgL_valuez00_bglt) (BgL_valuez00_1625));
									BgL_arg4829z00_1632 = CNST_TABLE_REF(((long) 3));
									return
										(obj_t) (BGl_loosez12z12zzcfa_loosez00(
											(BgL_approxz00_bglt) (BgL_arg4828z00_1631),
											BgL_arg4829z00_1632));
								}
							}
					}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_iteratez00()
	{
		AN_OBJECT;
		{	/* Cfa/iterate.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string4850z00zzcfa_iteratez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4850z00zzcfa_iteratez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4850z00zzcfa_iteratez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4850z00zzcfa_iteratez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4850z00zzcfa_iteratez00));
			BGl_modulezd2initializa7ationz75zzast_unitz00(((long) 386858258),
				BSTRING_TO_STRING(BGl_string4850z00zzcfa_iteratez00));
			BGl_modulezd2initializa7ationz75zzcfa_cfaz00(((long) 42139303),
				BSTRING_TO_STRING(BGl_string4850z00zzcfa_iteratez00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 243010053),
				BSTRING_TO_STRING(BGl_string4850z00zzcfa_iteratez00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string4850z00zzcfa_iteratez00));
			BGl_modulezd2initializa7ationz75zzcfa_loosez00(((long) 235614963),
				BSTRING_TO_STRING(BGl_string4850z00zzcfa_iteratez00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 535144917),
				BSTRING_TO_STRING(BGl_string4850z00zzcfa_iteratez00));
		}
	}

#ifdef __cplusplus
}
#endif
