/*===========================================================================*/
/*   (Llib/bexit.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Llib/bexit.scm -indent -o objs/obj_u/Llib/bexit.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__bexitz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__bexitz00();
	BGL_EXPORTED_DECL bool_t unwind_stack_value_p(obj_t);
	static obj_t BGl__unwindzd2stackzd2valuezf3zf3zz__bexitz00(obj_t, obj_t);
	static obj_t BGl__unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__bexitz00();
	BGL_EXPORTED_DECL obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_symbol2135z00zz__bexitz00 = BUNSPEC;
	static obj_t BGl__valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__bexitz00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	BGL_EXPORTED_DECL obj_t bgl_uncaught_exception_handler(obj_t);
	BGL_EXPORTED_DECL obj_t unwind_stack_until(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__unwindzd2stackzd2untilz12z12zz__bexitz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t
		BGl__defaultzd2uncaughtzd2exceptionzd2handlerzd2zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__bexitz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_unwindzd2untilz12zd2envz12zz__bexitz00,
		BgL_bgl__unwindza7d2untilza72139z00, BGl__unwindzd2untilz12zc0zz__bexitz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_valzd2fromzd2exitzf3zd2envz21zz__bexitz00,
		BgL_bgl__valza7d2fromza7d2ex2140z00,
		BGl__valzd2fromzd2exitzf3zf3zz__bexitz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unwindzd2stackzd2untilz12zd2envzc0zz__bexitz00,
		BgL_bgl__unwindza7d2stackza72141z00,
		BGl__unwindzd2stackzd2untilz12z12zz__bexitz00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string2136z00zz__bexitz00,
		BgL_bgl_string2136za700za7za7_2142za7, "unwind-until!", 13);
	      DEFINE_STRING(BGl_string2137z00zz__bexitz00,
		BgL_bgl_string2137za700za7za7_2143za7, "exit out of dynamic scope", 25);
	      DEFINE_STRING(BGl_string2138z00zz__bexitz00,
		BgL_bgl_string2138za700za7za7_2144za7, "__bexit", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_defaultzd2uncaughtzd2exceptionzd2handlerzd2envz00zz__bexitz00,
		BgL_bgl__defaultza7d2uncau2145za7,
		BGl__defaultzd2uncaughtzd2exceptionzd2handlerzd2zz__bexitz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unwindzd2stackzd2valuezf3zd2envz21zz__bexitz00,
		BgL_bgl__unwindza7d2stackza72146z00,
		BGl__unwindzd2stackzd2valuezf3zf3zz__bexitz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long
		BgL_checksumz00_1351, char *BgL_fromz00_1352)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__bexitz00))
				{
					BGl_requirezd2initializa7ationz75zz__bexitz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__bexitz00();
					BGl_importedzd2moduleszd2initz00zz__bexitz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__bexitz00()
	{
		AN_OBJECT;
		{	/* Llib/bexit.scm 14 */
			return (BGl_symbol2135z00zz__bexitz00 =
				bstring_to_symbol(BGl_string2136z00zz__bexitz00), BUNSPEC);
		}
	}



/* val-from-exit? */
	BGL_EXPORTED_DEF obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t
		BgL_valz00_1)
	{
		AN_OBJECT;
		{	/* Llib/bexit.scm 94 */
			{	/* Llib/bexit.scm 95 */
				obj_t BgL_arg1880z00_1154;

				BgL_arg1880z00_1154 = BGL_EXITD_VAL();
				return BBOOL((BgL_valz00_1 == BgL_arg1880z00_1154));
			}
		}
	}



/* _val-from-exit? */
	obj_t BGl__valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t BgL_envz00_1337,
		obj_t BgL_valz00_1338)
	{
		AN_OBJECT;
		{	/* Llib/bexit.scm 94 */
			return BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_valz00_1338);
		}
	}



/* unwind-stack-value? */
	BGL_EXPORTED_DEF bool_t unwind_stack_value_p(obj_t BgL_valz00_2)
	{
		AN_OBJECT;
		{	/* Llib/bexit.scm 105 */
			{	/* Llib/bexit.scm 106 */
				obj_t BgL_arg1880z00_1156;

				BgL_arg1880z00_1156 = BGL_EXITD_VAL();
				return (BgL_valz00_2 == BgL_arg1880z00_1156);
			}
		}
	}



/* _unwind-stack-value? */
	obj_t BGl__unwindzd2stackzd2valuezf3zf3zz__bexitz00(obj_t BgL_envz00_1339,
		obj_t BgL_valz00_1340)
	{
		AN_OBJECT;
		{	/* Llib/bexit.scm 105 */
			return BBOOL(unwind_stack_value_p(BgL_valz00_1340));
		}
	}



/* unwind-until! */
	BGL_EXPORTED_DEF obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t
		BgL_exitdz00_3, obj_t BgL_valz00_4)
	{
		AN_OBJECT;
		{	/* Llib/bexit.scm 115 */
			if (PAIRP(BgL_exitdz00_3))
				{	/* Llib/bexit.scm 116 */
					return
						unwind_stack_until(CAR(BgL_exitdz00_3), BFALSE, BgL_valz00_4,
						CDR(BgL_exitdz00_3));
				}
			else
				{	/* Llib/bexit.scm 116 */
					return
						unwind_stack_until(BgL_exitdz00_3, BFALSE, BgL_valz00_4, BFALSE);
				}
		}
	}



/* _unwind-until! */
	obj_t BGl__unwindzd2untilz12zc0zz__bexitz00(obj_t BgL_envz00_1341,
		obj_t BgL_exitdz00_1342, obj_t BgL_valz00_1343)
	{
		AN_OBJECT;
		{	/* Llib/bexit.scm 115 */
			return
				BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_exitdz00_1342,
				BgL_valz00_1343);
		}
	}



/* unwind-stack-until! */
	BGL_EXPORTED_DEF obj_t unwind_stack_until(obj_t BgL_exitdz00_5,
		obj_t BgL_estampz00_6, obj_t BgL_valz00_7, obj_t BgL_procz00_8)
	{
		AN_OBJECT;
		{	/* Llib/bexit.scm 128 */
			{

			BgL_zc3anonymousza31884ze3z83_720:
				{	/* Llib/bexit.scm 130 */
					obj_t BgL_exitdzd2topzd2_721;

					BgL_exitdzd2topzd2_721 = BGL_EXITD_TOP_AS_OBJ();
					if (BGL_EXITD_BOTTOMP(BgL_exitdzd2topzd2_721))
						{	/* Llib/bexit.scm 131 */
							if (PROCEDUREP(BgL_procz00_8))
								{	/* Llib/bexit.scm 132 */
									return
										PROCEDURE_ENTRY(BgL_procz00_8) (BgL_procz00_8, BgL_valz00_7,
										BEOA);
								}
							else
								{	/* Llib/bexit.scm 134 */
									obj_t BgL_hdlz00_724;

									BgL_hdlz00_724 = BGL_UNCAUGHT_EXCEPTION_HANDLER_GET();
									{	/* Llib/bexit.scm 135 */
										obj_t BgL_fun1889z00_726;

										if (PROCEDUREP(BgL_hdlz00_724))
											{	/* Llib/bexit.scm 135 */
												BgL_fun1889z00_726 = BgL_hdlz00_724;
											}
										else
											{	/* Llib/bexit.scm 135 */
												BgL_fun1889z00_726 =
													BGl_defaultzd2uncaughtzd2exceptionzd2handlerzd2envz00zz__bexitz00;
											}
										return
											PROCEDURE_ENTRY(BgL_fun1889z00_726) (BgL_fun1889z00_726,
											BgL_valz00_7, BEOA);
									}
								}
						}
					else
						{	/* Llib/bexit.scm 131 */
							POP_EXIT();
							{	/* Llib/bexit.scm 142 */
								bool_t BgL_testz00_1387;

								if ((BgL_exitdzd2topzd2_721 == BgL_exitdz00_5))
									{	/* Llib/bexit.scm 143 */
										bool_t BgL__ortest_1824z00_735;

										if (INTEGERP(BgL_estampz00_6))
											{	/* Llib/bexit.scm 143 */
												BgL__ortest_1824z00_735 = ((bool_t) 0);
											}
										else
											{	/* Llib/bexit.scm 143 */
												BgL__ortest_1824z00_735 = ((bool_t) 1);
											}
										if (BgL__ortest_1824z00_735)
											{	/* Llib/bexit.scm 143 */
												BgL_testz00_1387 = BgL__ortest_1824z00_735;
											}
										else
											{	/* Llib/bexit.scm 144 */
												obj_t BgL_arg1898z00_736;

												BgL_arg1898z00_736 =
													EXITD_STAMP(BgL_exitdzd2topzd2_721);
												BgL_testz00_1387 =
													(
													(long) CINT(BgL_arg1898z00_736) ==
													(long) CINT(BgL_estampz00_6));
									}}
								else
									{	/* Llib/bexit.scm 142 */
										BgL_testz00_1387 = ((bool_t) 0);
									}
								if (BgL_testz00_1387)
									{	/* Llib/bexit.scm 142 */
										if (EXITD_CALLCCP(BgL_exitdzd2topzd2_721))
											{	/* Llib/bexit.scm 147 */
												void *BgL_arg1892z00_729;

												BgL_arg1892z00_729 =
													EXITD_TO_EXIT(BgL_exitdzd2topzd2_721);
												CALLCC_JUMP_EXIT(BgL_arg1892z00_729, BgL_valz00_7);
											}
										else
											{	/* Llib/bexit.scm 145 */
												JUMP_EXIT(EXITD_TO_EXIT(BgL_exitdzd2topzd2_721),
													BgL_valz00_7);
											}
										return BUNSPEC;
									}
								else
									{	/* Llib/bexit.scm 142 */
										if (EXITD_USERP(BgL_exitdzd2topzd2_721))
											{	/* Llib/bexit.scm 151 */
												goto BgL_zc3anonymousza31884ze3z83_720;
											}
										else
											{	/* Llib/bexit.scm 151 */
												{	/* Llib/bexit.scm 152 */
													obj_t BgL_pz00_731;

													BgL_pz00_731 = BGL_EXITD_VAL();
													{	/* Llib/bexit.scm 153 */
														obj_t BgL_auxz00_1407;

														BgL_auxz00_1407 = CAR(BgL_pz00_731);
														SET_CAR(BgL_auxz00_1407, BgL_exitdz00_5);
													}
													{	/* Llib/bexit.scm 154 */
														obj_t BgL_auxz00_1410;

														BgL_auxz00_1410 = CAR(BgL_pz00_731);
														SET_CDR(BgL_auxz00_1410, BgL_procz00_8);
													}
													SET_CDR(BgL_pz00_731, BgL_valz00_7);
													JUMP_EXIT(EXITD_TO_EXIT(BgL_exitdzd2topzd2_721),
														BgL_pz00_731);
												}
												return BUNSPEC;
											}
									}
							}
						}
				}
			}
		}
	}



/* _unwind-stack-until! */
	obj_t BGl__unwindzd2stackzd2untilz12z12zz__bexitz00(obj_t BgL_envz00_1344,
		obj_t BgL_exitdz00_1345, obj_t BgL_estampz00_1346, obj_t BgL_valz00_1347,
		obj_t BgL_procz00_1348)
	{
		AN_OBJECT;
		{	/* Llib/bexit.scm 128 */
			return
				unwind_stack_until(BgL_exitdz00_1345, BgL_estampz00_1346,
				BgL_valz00_1347, BgL_procz00_1348);
		}
	}



/* default-uncaught-exception-handler */
	BGL_EXPORTED_DEF obj_t bgl_uncaught_exception_handler(obj_t BgL_valz00_9)
	{
		AN_OBJECT;
		{	/* Llib/bexit.scm 164 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol2135z00zz__bexitz00,
				BGl_string2137z00zz__bexitz00, BgL_valz00_9);
		}
	}



/* _default-uncaught-exception-handler */
	obj_t BGl__defaultzd2uncaughtzd2exceptionzd2handlerzd2zz__bexitz00(obj_t
		BgL_envz00_1349, obj_t BgL_valz00_1350)
	{
		AN_OBJECT;
		{	/* Llib/bexit.scm 164 */
			return bgl_uncaught_exception_handler(BgL_valz00_1350);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__bexitz00()
	{
		AN_OBJECT;
		{	/* Llib/bexit.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__bexitz00()
	{
		AN_OBJECT;
		{	/* Llib/bexit.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__bexitz00()
	{
		AN_OBJECT;
		{	/* Llib/bexit.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2138z00zz__bexitz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2138z00zz__bexitz00));
			return
				BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2138z00zz__bexitz00));
		}
	}

#ifdef __cplusplus
}
#endif
