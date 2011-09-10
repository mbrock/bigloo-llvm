/*===========================================================================*/
/*   (Init/main.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Init/main.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_stopzd2tracezd2zztools_tracez00();
	static obj_t BGl_requirezd2initializa7ationz75zzinit_mainz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzinit_mainz00();
	extern obj_t BGl_setupzd2defaultzd2valuesz00zzinit_setrcz00();
	BGL_EXPORTED_DECL obj_t BGl_mainz00zzinit_mainz00(obj_t);
	BGL_IMPORT obj_t BGl_bigloozd2initializa7edz12z67zz__paramz00();
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzinit_mainz00();
	static obj_t BGl_exitz00zzinit_mainz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_enginez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_parsezd2argszd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_setrcz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzinit_mainz00();
	BGL_IMPORT obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	static obj_t BGl_zc3anonymousza31515ze3z83zzinit_mainz00(obj_t, obj_t);
	static obj_t BGl_za2compilerzd2exitza2zd2zzinit_mainz00 = BUNSPEC;
	extern obj_t BGl_enginez00zzengine_enginez00();
	static obj_t BGl_zc3exitza31518ze3z83zzinit_mainz00(obj_t);
	static obj_t BGl_zc3exitza31522ze3z83zzinit_mainz00(obj_t);
	extern obj_t BGl_parsezd2argszd2zzinit_parsezd2argszd2(obj_t);
	static obj_t BGl__compilerzd2exitzd2zzinit_mainz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bigloo_main(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_compilerzd2exitzd2zzinit_mainz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzinit_mainz00();
	BGL_IMPORT obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzinit_mainz00();
	static obj_t BGl__mainz00zzinit_mainz00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1524z00zzinit_mainz00,
		BgL_bgl_za7c3anonymousza7a311528z00,
		BGl_zc3anonymousza31515ze3z83zzinit_mainz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1525z00zzinit_mainz00,
		BgL_bgl_string1525za700za7za7i1529za7, "-q", 2);
	      DEFINE_STRING(BGl_string1526z00zzinit_mainz00,
		BgL_bgl_string1526za700za7za7i1530za7, "init_main", 9);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_compilerzd2exitzd2envz00zzinit_mainz00,
		BgL_bgl__compilerza7d2exit1531za7, BGl__compilerzd2exitzd2zzinit_mainz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mainzd2envzd2zzinit_mainz00,
		BgL_bgl__mainza700za7za7init_m1532za7, BGl__mainz00zzinit_mainz00, 0L,
		BUNSPEC, 1);


/* Libraries setup */
	static int bigloo_libinit(int argc, char *argv[], char *env[])
	{
		return 0;
	}


	long bigloo_abort(long n)
	{
		return n;
	}

	int BIGLOO_MAIN(int argc, char *argv[], char *env[])
	{
		return _bigloo_main(argc, argv, env, &bigloo_main, &bigloo_libinit, 0);
	}


/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long
		BgL_checksumz00_122, char *BgL_fromz00_123)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzinit_mainz00))
				{
					BGl_requirezd2initializa7ationz75zzinit_mainz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzinit_mainz00();
					BGl_importedzd2moduleszd2initz00zzinit_mainz00();
					BGl_toplevelzd2initzd2zzinit_mainz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* bigloo_main */
	BGL_EXPORTED_DEF obj_t bigloo_main(obj_t BgL_argvz00_124)
	{
		AN_OBJECT;
		{
			BGl_modulezd2initializa7ationz75zzinit_mainz00(((long) 0), "init_main");
			BGl_bigloozd2initializa7edz12z67zz__paramz00();
			{
				obj_t BgL_auxz00_134;

				BgL_auxz00_134 = BGl_mainz00zzinit_mainz00(BgL_argvz00_124);
				return BIGLOO_EXIT(BgL_auxz00_134);
			}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzinit_mainz00()
	{
		AN_OBJECT;
		{	/* Init/main.scm 15 */
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "init_main");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "init_main");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"init_main");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "init_main");
			return BUNSPEC;
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzinit_mainz00()
	{
		AN_OBJECT;
		{	/* Init/main.scm 15 */
			return (BGl_za2compilerzd2exitza2zd2zzinit_mainz00 =
				BGl_proc1524z00zzinit_mainz00, BUNSPEC);
		}
	}



/* <anonymous:1515> */
	obj_t BGl_zc3anonymousza31515ze3z83zzinit_mainz00(obj_t BgL_envz00_110,
		obj_t BgL_xz00_111)
	{
		AN_OBJECT;
		{	/* Init/main.scm 29 */
			{
				obj_t BgL_xz00_88;

				BgL_xz00_88 = BgL_xz00_111;
				{	/* Init/main.scm 29 */
					obj_t BgL_list1516z00_106;

					BgL_list1516z00_106 = MAKE_PAIR(BgL_xz00_88, BNIL);
					return BGl_exitz00zz__errorz00(BgL_list1516z00_106);
				}
			}
		}
	}



/* main */
	BGL_EXPORTED_DEF obj_t BGl_mainz00zzinit_mainz00(obj_t BgL_argvz00_1)
	{
		AN_OBJECT;
		{	/* Init/main.scm 34 */
			if (CBOOL(BGl_memberz00zz__r4_pairs_and_lists_6_3z00
					(BGl_string1525z00zzinit_mainz00, BgL_argvz00_1)))
				{	/* Init/main.scm 38 */
					BFALSE;
				}
			else
				{	/* Init/main.scm 38 */
					BGl_setupzd2defaultzd2valuesz00zzinit_setrcz00();
				}
			return BGl_zc3exitza31518ze3z83zzinit_mainz00(BgL_argvz00_1);
		}
	}



/* <exit:1518> */
	obj_t BGl_zc3exitza31518ze3z83zzinit_mainz00(obj_t BgL_argvz00_120)
	{
		AN_OBJECT;
		{	/* Init/main.scm 39 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1508z00_93;

			if (SET_EXIT(BgL_an_exit1508z00_93))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1508z00_93 = (void *) jmpbuf;
					{	/* Init/main.scm 39 */

						PUSH_EXIT(BgL_an_exit1508z00_93, ((long) 1));
						{	/* Init/main.scm 39 */
							obj_t BgL_an_exitd1509z00_94;

							BgL_an_exitd1509z00_94 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Init/main.scm 39 */
								obj_t BgL_exitz00_112;

								BgL_exitz00_112 =
									make_fx_procedure(BGl_exitz00zzinit_mainz00,
									(int) (((long) 1)), (int) (((long) 1)));
								PROCEDURE_SET(BgL_exitz00_112,
									(int) (((long) 0)), BgL_an_exitd1509z00_94);
								{	/* Init/main.scm 45 */
									obj_t BgL_res1511z00_97;

									BGl_za2compilerzd2exitza2zd2zzinit_mainz00 = BgL_exitz00_112;
									{	/* Init/main.scm 41 */
										obj_t BgL_val1512z00_98;

										BgL_val1512z00_98 =
											BGl_zc3exitza31522ze3z83zzinit_mainz00(BgL_argvz00_120);
										BGl_stopzd2tracezd2zztools_tracez00();
										if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
												(BgL_val1512z00_98)))
											{	/* Init/main.scm 45 */
												BgL_res1511z00_97 =
													BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
													(BgL_val1512z00_98), CDR(BgL_val1512z00_98));
											}
										else
											{	/* Init/main.scm 45 */
												BgL_res1511z00_97 = BgL_val1512z00_98;
											}
									}
									POP_EXIT();
									return BgL_res1511z00_97;
								}
							}
						}
					}
				}
		}
	}



/* <exit:1522> */
	obj_t BGl_zc3exitza31522ze3z83zzinit_mainz00(obj_t BgL_argvz00_121)
	{
		AN_OBJECT;
		{	/* Init/main.scm 45 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1513z00_103;

			if (SET_EXIT(BgL_an_exit1513z00_103))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1513z00_103 = (void *) jmpbuf;
					{	/* Init/main.scm 45 */

						PUSH_EXIT(BgL_an_exit1513z00_103, ((long) 0));
						{	/* Init/main.scm 42 */
							obj_t BgL_val1514z00_104;

							if (CBOOL(BGl_parsezd2argszd2zzinit_parsezd2argszd2
									(BgL_argvz00_121)))
								{	/* Init/main.scm 42 */
									BgL_val1514z00_104 = BGl_enginez00zzengine_enginez00();
								}
							else
								{	/* Init/main.scm 42 */
									BgL_val1514z00_104 = BINT(((long) -1));
								}
							POP_EXIT();
							return BgL_val1514z00_104;
						}
					}
				}
		}
	}



/* _main */
	obj_t BGl__mainz00zzinit_mainz00(obj_t BgL_envz00_113, obj_t BgL_argvz00_114)
	{
		AN_OBJECT;
		{	/* Init/main.scm 34 */
			return BGl_mainz00zzinit_mainz00(BgL_argvz00_114);
		}
	}



/* exit */
	obj_t BGl_exitz00zzinit_mainz00(obj_t BgL_envz00_115,
		obj_t BgL_val1510z00_117)
	{
		AN_OBJECT;
		{	/* Init/main.scm 39 */
			{	/* Init/main.scm 39 */
				obj_t BgL_an_exitd1509z00_116;

				BgL_an_exitd1509z00_116 =
					PROCEDURE_REF(BgL_envz00_115, (int) (((long) 0)));
				{
					obj_t BgL_val1510z00_95;

					BgL_val1510z00_95 = BgL_val1510z00_117;
					return
						BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1509z00_116,
						BgL_val1510z00_95);
				}
			}
		}
	}



/* compiler-exit */
	BGL_EXPORTED_DEF obj_t BGl_compilerzd2exitzd2zzinit_mainz00(obj_t
		BgL_valuez00_2)
	{
		AN_OBJECT;
		{	/* Init/main.scm 50 */
			return
				PROCEDURE_ENTRY(BGl_za2compilerzd2exitza2zd2zzinit_mainz00)
				(BGl_za2compilerzd2exitza2zd2zzinit_mainz00, BgL_valuez00_2, BEOA);
		}
	}



/* _compiler-exit */
	obj_t BGl__compilerzd2exitzd2zzinit_mainz00(obj_t BgL_envz00_118,
		obj_t BgL_valuez00_119)
	{
		AN_OBJECT;
		{	/* Init/main.scm 50 */
			return BGl_compilerzd2exitzd2zzinit_mainz00(BgL_valuez00_119);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzinit_mainz00()
	{
		AN_OBJECT;
		{	/* Init/main.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzinit_mainz00()
	{
		AN_OBJECT;
		{	/* Init/main.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzinit_mainz00()
	{
		AN_OBJECT;
		{	/* Init/main.scm 15 */
			BGl_modulezd2initializa7ationz75zzinit_setrcz00(((long) 385369337),
				BSTRING_TO_STRING(BGl_string1526z00zzinit_mainz00));
			BGl_modulezd2initializa7ationz75zzinit_parsezd2argszd2(((long) 392825731),
				BSTRING_TO_STRING(BGl_string1526z00zzinit_mainz00));
			BGl_modulezd2initializa7ationz75zzengine_enginez00(((long) 528201616),
				BSTRING_TO_STRING(BGl_string1526z00zzinit_mainz00));
			return
				BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string1526z00zzinit_mainz00));
		}
	}

#ifdef __cplusplus
}
#endif
