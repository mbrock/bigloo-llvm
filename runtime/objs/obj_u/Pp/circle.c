/*===========================================================================*/
/*   (Pp/circle.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Pp/circle.scm -indent -o objs/obj_u/Pp/circle.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */

	extern obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern bool_t BGl_classzf3zf3zz__objectz00(obj_t);
	extern obj_t bgl_display_fixnum(obj_t, obj_t);
	BGL_EXPORTED_DECL char *BGl_jvmzd2debuggingzd2printz00zz__pp_circlez00(obj_t,
		int);
	static obj_t BGl_requirezd2initializa7ationz75zz__pp_circlez00 = BUNSPEC;
	static obj_t BGl__jvmzd2debuggingzd2printz00zz__pp_circlez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_displayzd2circlezd2zz__pp_circlez00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__pp_circlez00();
	static obj_t BGl__writezd2circlezd2zz__pp_circlez00(obj_t, obj_t);
	extern obj_t string_for_read(obj_t);
	extern obj_t bgl_write_ucs2(obj_t, obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_loopzd2matchedzd2zz__pp_circlez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_writezd2circlezd2zz__pp_circlez00(obj_t, obj_t);
	extern obj_t bgl_display_ucs2(obj_t, obj_t);
	extern bool_t BGl_classzd2fieldzd2indexedzf3zf3zz__objectz00(obj_t);
	extern obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__pp_circlez00();
	static obj_t BGl_zc3anonymousza32011ze3z83zz__pp_circlez00(obj_t);
	extern bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_zc3anonymousza32013ze3z83zz__pp_circlez00(obj_t);
	BGL_EXPORTED_DECL obj_t dprint(obj_t);
	extern obj_t BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
	extern obj_t bgl_display_string(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__pp_circlez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_outputzd2componentzd2zz__pp_circlez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_classzd2fieldzd2accessorz00zz__objectz00(obj_t);
	static obj_t BGl__czd2debuggingzd2printz00zz__pp_circlez00(obj_t, obj_t);
	extern obj_t BGl_objectzd2printzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_classzd2fieldszd2zz__objectz00(obj_t);
	extern obj_t BGl_writezd2ucs2stringzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_displayzd2symbolzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t string_to_bstring(char *);
	extern obj_t BGl_displayzd2ucs2stringzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t bgl_write_char(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31957ze3z83zz__pp_circlez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2classesza2z00zz__objectz00;
	static obj_t BGl_registerz00zz__pp_circlez00(obj_t, obj_t);
	static obj_t BGl_circlezd2writezf2displayz20zz__pp_circlez00(obj_t, obj_t,
		bool_t);
	extern obj_t BGl_writezd2symbolzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_classzd2fieldzd2lenzd2accessorzd2zz__objectz00(obj_t);
	static obj_t BGl__displayzd2circlezd2zz__pp_circlez00(obj_t, obj_t);
	extern obj_t BGl_writezd2stringzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t real_to_string(double);
	extern obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__pp_circlez00();
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2365z00zz__pp_circlez00,
		BgL_bgl_string2365za700za7za7_2374za7, " . ", 3);
	      DEFINE_STRING(BGl_string2366z00zz__pp_circlez00,
		BgL_bgl_string2366za700za7za7_2375za7, "#{", 2);
	      DEFINE_STRING(BGl_string2367z00zz__pp_circlez00,
		BgL_bgl_string2367za700za7za7_2376za7, "#<cell:", 7);
	      DEFINE_STRING(BGl_string2368z00zz__pp_circlez00,
		BgL_bgl_string2368za700za7za7_2377za7, ">", 1);
	      DEFINE_STRING(BGl_string2370z00zz__pp_circlez00,
		BgL_bgl_string2370za700za7za7_2378za7, "#<condition-variable:", 21);
	      DEFINE_STRING(BGl_string2369z00zz__pp_circlez00,
		BgL_bgl_string2369za700za7za7_2379za7, "#<mutex:", 8);
	      DEFINE_STRING(BGl_string2371z00zz__pp_circlez00,
		BgL_bgl_string2371za700za7za7_2380za7, "_jvm-debugging-print", 20);
	      DEFINE_STRING(BGl_string2372z00zz__pp_circlez00,
		BgL_bgl_string2372za700za7za7_2381za7, "int", 3);
	      DEFINE_STRING(BGl_string2373z00zz__pp_circlez00,
		BgL_bgl_string2373za700za7za7_2382za7, "__pp_circle", 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_displayzd2circlezd2envz00zz__pp_circlez00,
		BgL_bgl__displayza7d2circl2383za7, opt_generic_entry,
		BGl__displayzd2circlezd2zz__pp_circlez00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_czd2debuggingzd2printzd2envzd2zz__pp_circlez00,
		BgL_bgl__cza7d2debuggingza7d2384z00,
		BGl__czd2debuggingzd2printz00zz__pp_circlez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2debuggingzd2printzd2envzd2zz__pp_circlez00,
		BgL_bgl__jvmza7d2debugging2385za7,
		BGl__jvmzd2debuggingzd2printz00zz__pp_circlez00, 0L, BUNSPEC, 2);
	extern obj_t BGl_writezd2envzd2zz__r4_output_6_10_3z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_writezd2circlezd2envz00zz__pp_circlez00,
		BgL_bgl__writeza7d2circleza72386z00, opt_generic_entry,
		BGl__writezd2circlezd2zz__pp_circlez00, BFALSE, -1);
	extern obj_t BGl_displayzd2envzd2zz__r4_output_6_10_3z00;
	   
		 
		DEFINE_STRING(BGl_string2361z00zz__pp_circlez00,
		BgL_bgl_string2361za700za7za7_2387za7, "/tmp/bigloo/runtime/Pp/circle.scm",
		33);
	      DEFINE_STRING(BGl_string2362z00zz__pp_circlez00,
		BgL_bgl_string2362za700za7za7_2388za7, "_display-circle", 15);
	      DEFINE_STRING(BGl_string2363z00zz__pp_circlez00,
		BgL_bgl_string2363za700za7za7_2389za7, "output-port", 11);
	      DEFINE_STRING(BGl_string2364z00zz__pp_circlez00,
		BgL_bgl_string2364za700za7za7_2390za7, "_write-circle", 13);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__pp_circlez00(long
		BgL_checksumz00_2010, char *BgL_fromz00_2011)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__pp_circlez00))
				{
					BGl_requirezd2initializa7ationz75zz__pp_circlez00 =
						BBOOL(((bool_t) 0));
					BGl_importedzd2moduleszd2initz00zz__pp_circlez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* _display-circle */
	obj_t BGl__displayzd2circlezd2zz__pp_circlez00(obj_t BgL_envz00_4,
		obj_t BgL_optz00_3)
	{
		AN_OBJECT;
		{	/* Pp/circle.scm 77 */
			{	/* Pp/circle.scm 77 */
				obj_t BgL_g1873z00_882;

				BgL_g1873z00_882 = VECTOR_REF(BgL_optz00_3, (int) (((long) 0)));
				{	/* Pp/circle.scm 77 */
					int BgL_aux1875z00_884;

					BgL_aux1875z00_884 = VECTOR_LENGTH(BgL_optz00_3);
					switch ((long) (BgL_aux1875z00_884))
						{
						case ((long) 1):

							{	/* Pp/circle.scm 77 */
								obj_t BgL_portz00_886;

								{	/* Pp/circle.scm 77 */
									obj_t BgL_res2335z00_1583;

									{	/* Pp/circle.scm 77 */
										obj_t BgL_auxz00_2019;

										BgL_auxz00_2019 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2335z00_1583 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2019);
									}
									BgL_portz00_886 = BgL_res2335z00_1583;
								}
								{	/* Pp/circle.scm 77 */

									return
										BGl_circlezd2writezf2displayz20zz__pp_circlez00(VECTOR_REF
										(BgL_optz00_3, (int) (((long) 0))), BgL_portz00_886,
										((bool_t) 1));
							}} break;
						case ((long) 2):

							{	/* Pp/circle.scm 77 */
								obj_t BgL_portz00_888;

								BgL_portz00_888 = VECTOR_REF(BgL_optz00_3, (int) (((long) 1)));
								{	/* Pp/circle.scm 77 */

									{	/* Pp/circle.scm 77 */
										obj_t BgL_arg1915z00_889;

										BgL_arg1915z00_889 =
											VECTOR_REF(BgL_optz00_3, (int) (((long) 0)));
										{	/* Pp/circle.scm 77 */
											obj_t BgL_portz00_1587;

											if (OUTPUT_PORTP(BgL_portz00_888))
												{	/* Pp/circle.scm 77 */
													BgL_portz00_1587 = BgL_portz00_888;
												}
											else
												{
													obj_t BgL_auxz00_2031;

													BgL_auxz00_2031 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2361z00zz__pp_circlez00,
														BINT(((long) 3129)),
														BGl_string2362z00zz__pp_circlez00,
														BGl_string2363z00zz__pp_circlez00, BgL_portz00_888);
													FAILURE(BgL_auxz00_2031, BFALSE, BFALSE);
												}
											return
												BGl_circlezd2writezf2displayz20zz__pp_circlez00
												(BgL_arg1915z00_889, BgL_portz00_1587, ((bool_t) 1));
										}
									}
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* display-circle */
	BGL_EXPORTED_DEF obj_t BGl_displayzd2circlezd2zz__pp_circlez00(obj_t
		BgL_oz00_1, obj_t BgL_portz00_2)
	{
		AN_OBJECT;
		{	/* Pp/circle.scm 77 */
			return
				BGl_circlezd2writezf2displayz20zz__pp_circlez00(BgL_oz00_1,
				BgL_portz00_2, ((bool_t) 1));
		}
	}



/* _write-circle */
	obj_t BGl__writezd2circlezd2zz__pp_circlez00(obj_t BgL_envz00_8,
		obj_t BgL_optz00_7)
	{
		AN_OBJECT;
		{	/* Pp/circle.scm 83 */
			{	/* Pp/circle.scm 83 */
				obj_t BgL_g1876z00_890;

				BgL_g1876z00_890 = VECTOR_REF(BgL_optz00_7, (int) (((long) 0)));
				{	/* Pp/circle.scm 83 */
					int BgL_aux1878z00_892;

					BgL_aux1878z00_892 = VECTOR_LENGTH(BgL_optz00_7);
					switch ((long) (BgL_aux1878z00_892))
						{
						case ((long) 1):

							{	/* Pp/circle.scm 83 */
								obj_t BgL_portz00_894;

								{	/* Pp/circle.scm 83 */
									obj_t BgL_res2336z00_1589;

									{	/* Pp/circle.scm 83 */
										obj_t BgL_auxz00_2042;

										BgL_auxz00_2042 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2336z00_1589 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2042);
									}
									BgL_portz00_894 = BgL_res2336z00_1589;
								}
								{	/* Pp/circle.scm 83 */

									return
										BGl_circlezd2writezf2displayz20zz__pp_circlez00(VECTOR_REF
										(BgL_optz00_7, (int) (((long) 0))), BgL_portz00_894,
										((bool_t) 0));
							}} break;
						case ((long) 2):

							{	/* Pp/circle.scm 83 */
								obj_t BgL_portz00_896;

								BgL_portz00_896 = VECTOR_REF(BgL_optz00_7, (int) (((long) 1)));
								{	/* Pp/circle.scm 83 */

									{	/* Pp/circle.scm 83 */
										obj_t BgL_arg1919z00_897;

										BgL_arg1919z00_897 =
											VECTOR_REF(BgL_optz00_7, (int) (((long) 0)));
										{	/* Pp/circle.scm 83 */
											obj_t BgL_portz00_1593;

											if (OUTPUT_PORTP(BgL_portz00_896))
												{	/* Pp/circle.scm 83 */
													BgL_portz00_1593 = BgL_portz00_896;
												}
											else
												{
													obj_t BgL_auxz00_2054;

													BgL_auxz00_2054 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2361z00zz__pp_circlez00,
														BINT(((long) 3469)),
														BGl_string2364z00zz__pp_circlez00,
														BGl_string2363z00zz__pp_circlez00, BgL_portz00_896);
													FAILURE(BgL_auxz00_2054, BFALSE, BFALSE);
												}
											return
												BGl_circlezd2writezf2displayz20zz__pp_circlez00
												(BgL_arg1919z00_897, BgL_portz00_1593, ((bool_t) 0));
										}
									}
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* write-circle */
	BGL_EXPORTED_DEF obj_t BGl_writezd2circlezd2zz__pp_circlez00(obj_t BgL_oz00_5,
		obj_t BgL_portz00_6)
	{
		AN_OBJECT;
		{	/* Pp/circle.scm 83 */
			return
				BGl_circlezd2writezf2displayz20zz__pp_circlez00(BgL_oz00_5,
				BgL_portz00_6, ((bool_t) 0));
		}
	}



/* circle-write/display */
	obj_t BGl_circlezd2writezf2displayz20zz__pp_circlez00(obj_t BgL_objz00_9,
		obj_t BgL_portz00_10, bool_t BgL_flagz00_11)
	{
		AN_OBJECT;
		{	/* Pp/circle.scm 96 */
			{	/* Pp/circle.scm 97 */
				obj_t BgL_cachez00_898;

				BgL_cachez00_898 = MAKE_CELL(BNIL);
				{	/* Pp/circle.scm 97 */
					obj_t BgL_nextzd2cardinalzd2_899;

					{	/* Pp/circle.scm 98 */
						obj_t BgL_serialz00_1058;

						{	/* Pp/circle.scm 98 */
							obj_t BgL_cellvalz00_2062;

							BgL_cellvalz00_2062 = BINT(((long) -1));
							BgL_serialz00_1058 = MAKE_CELL(BgL_cellvalz00_2062);
						}
						{	/* Pp/circle.scm 99 */
							obj_t BgL_zc3anonymousza32011ze3z83_1968;

							BgL_zc3anonymousza32011ze3z83_1968 =
								make_fx_procedure(BGl_zc3anonymousza32011ze3z83zz__pp_circlez00,
								(int) (((long) 0)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3anonymousza32011ze3z83_1968,
								(int) (((long) 0)), BgL_serialz00_1058);
							BgL_nextzd2cardinalzd2_899 = BgL_zc3anonymousza32011ze3z83_1968;
					}}
					{	/* Pp/circle.scm 98 */

						BGl_registerz00zz__pp_circlez00(BgL_cachez00_898, BgL_objz00_9);
						{	/* Pp/circle.scm 171 */

							BGl_outputzd2componentzd2zz__pp_circlez00
								(BgL_nextzd2cardinalzd2_899, BBOOL(BgL_flagz00_11),
								BgL_portz00_10, BgL_cachez00_898, BgL_objz00_9);
			}}}}
			return BUNSPEC;
		}
	}



/* register */
	obj_t BGl_registerz00zz__pp_circlez00(obj_t BgL_cachez00_2003,
		obj_t BgL_objz00_1024)
	{
		AN_OBJECT;
		{	/* Pp/circle.scm 165 */
		BGl_registerz00zz__pp_circlez00:
			{
				obj_t BgL_objz00_991;

				{	/* Pp/circle.scm 135 */
					bool_t BgL_testz00_2072;

					if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_objz00_1024))
						{	/* Pp/circle.scm 135 */
							BgL_testz00_2072 = ((bool_t) 1);
						}
					else
						{	/* Pp/circle.scm 135 */
							if (SYMBOLP(BgL_objz00_1024))
								{	/* Pp/circle.scm 136 */
									BgL_testz00_2072 = ((bool_t) 1);
								}
							else
								{	/* Pp/circle.scm 136 */
									if (STRINGP(BgL_objz00_1024))
										{	/* Pp/circle.scm 137 */
											BgL_testz00_2072 = ((bool_t) 1);
										}
									else
										{	/* Pp/circle.scm 137 */
											if (CNSTP(BgL_objz00_1024))
												{	/* Pp/circle.scm 138 */
													BgL_testz00_2072 = ((bool_t) 1);
												}
											else
												{	/* Pp/circle.scm 138 */
													if (NULLP(BgL_objz00_1024))
														{	/* Pp/circle.scm 139 */
															BgL_testz00_2072 = ((bool_t) 1);
														}
													else
														{	/* Pp/circle.scm 139 */
															BgL_testz00_2072 =
																BGl_classzf3zf3zz__objectz00(BgL_objz00_1024);
														}
												}
										}
								}
						}
					if (BgL_testz00_2072)
						{	/* Pp/circle.scm 135 */
							return BFALSE;
						}
					else
						{	/* Pp/circle.scm 141 */
							obj_t BgL_matchz00_1027;

							BgL_matchz00_1027 =
								BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_1024,
								CELL_REF(BgL_cachez00_2003));
							if (CBOOL(BgL_matchz00_1027))
								{	/* Pp/circle.scm 142 */
									return SET_CDR(BgL_matchz00_1027, BTRUE);
								}
							else
								{	/* Pp/circle.scm 142 */
									{	/* Pp/circle.scm 145 */
										obj_t BgL_auxz00_1983;

										{	/* Pp/circle.scm 145 */
											obj_t BgL_arg1991z00_1028;

											BgL_arg1991z00_1028 = MAKE_PAIR(BgL_objz00_1024, BFALSE);
											BgL_auxz00_1983 =
												MAKE_PAIR(BgL_arg1991z00_1028,
												CELL_REF(BgL_cachez00_2003));
										}
										CELL_SET(BgL_cachez00_2003, BgL_auxz00_1983);
									}
									if (PAIRP(BgL_objz00_1024))
										{	/* Pp/circle.scm 147 */
											BGl_registerz00zz__pp_circlez00(BgL_cachez00_2003,
												CAR(BgL_objz00_1024));
											{
												obj_t BgL_objz00_2094;

												BgL_objz00_2094 = CDR(BgL_objz00_1024);
												BgL_objz00_1024 = BgL_objz00_2094;
												goto BGl_registerz00zz__pp_circlez00;
											}
										}
									else
										{	/* Pp/circle.scm 147 */
											if (VECTORP(BgL_objz00_1024))
												{	/* Pp/circle.scm 151 */
													int BgL_lenz00_1033;

													BgL_lenz00_1033 = VECTOR_LENGTH(BgL_objz00_1024);
													{
														long BgL_countz00_1035;

														{	/* Pp/circle.scm 152 */
															bool_t BgL_auxz00_2099;

															BgL_countz00_1035 = ((long) 0);
														BgL_zc3anonymousza31996ze3z83_1036:
															if (
																(BgL_countz00_1035 >= (long) (BgL_lenz00_1033)))
																{	/* Pp/circle.scm 153 */
																	BgL_auxz00_2099 = ((bool_t) 0);
																}
															else
																{	/* Pp/circle.scm 153 */
																	BGl_registerz00zz__pp_circlez00
																		(BgL_cachez00_2003,
																		VECTOR_REF(BgL_objz00_1024,
																			(int) (BgL_countz00_1035)));
																	{
																		long BgL_countz00_2106;

																		BgL_countz00_2106 =
																			(BgL_countz00_1035 + ((long) 1));
																		BgL_countz00_1035 = BgL_countz00_2106;
																		goto BgL_zc3anonymousza31996ze3z83_1036;
																	}
																}
															return BBOOL(BgL_auxz00_2099);
														}
													}
												}
											else
												{	/* Pp/circle.scm 150 */
													if (STRUCTP(BgL_objz00_1024))
														{	/* Pp/circle.scm 158 */
															int BgL_lenz00_1042;

															BgL_lenz00_1042 = STRUCT_LENGTH(BgL_objz00_1024);
															{
																long BgL_countz00_1044;

																{	/* Pp/circle.scm 159 */
																	bool_t BgL_auxz00_2112;

																	BgL_countz00_1044 = ((long) 0);
																BgL_zc3anonymousza32001ze3z83_1045:
																	if (
																		(BgL_countz00_1044 >=
																			(long) (BgL_lenz00_1042)))
																		{	/* Pp/circle.scm 160 */
																			BgL_auxz00_2112 = ((bool_t) 0);
																		}
																	else
																		{	/* Pp/circle.scm 160 */
																			BGl_registerz00zz__pp_circlez00
																				(BgL_cachez00_2003,
																				STRUCT_REF(BgL_objz00_1024,
																					(int) (BgL_countz00_1044)));
																			{
																				long BgL_countz00_2119;

																				BgL_countz00_2119 =
																					(BgL_countz00_1044 + ((long) 1));
																				BgL_countz00_1044 = BgL_countz00_2119;
																				goto BgL_zc3anonymousza32001ze3z83_1045;
																			}
																		}
																	return BBOOL(BgL_auxz00_2112);
																}
															}
														}
													else
														{	/* Pp/circle.scm 157 */
															if (BGL_OBJECTP(BgL_objz00_1024))
																{	/* Pp/circle.scm 165 */
																	bool_t BgL_auxz00_2124;

																	BgL_objz00_991 = BgL_objz00_1024;
																	{	/* Pp/circle.scm 103 */
																		obj_t BgL_classz00_993;

																		{	/* Pp/circle.scm 103 */
																			BgL_objectz00_bglt BgL_objectz00_1696;

																			BgL_objectz00_1696 =
																				(BgL_objectz00_bglt) (BgL_objz00_991);
																			{	/* Pp/circle.scm 103 */
																				long BgL_arg2322z00_1697;

																				{	/* Pp/circle.scm 103 */
																					long BgL_arg2323z00_1698;

																					BgL_arg2323z00_1698 =
																						BGL_OBJECT_CLASS_NUM
																						(BgL_objectz00_1696);
																					BgL_arg2322z00_1697 =
																						(BgL_arg2323z00_1698 - OBJECT_TYPE);
																				}
																				BgL_classz00_993 =
																					VECTOR_REF
																					(BGl_za2classesza2z00zz__objectz00,
																					(int) (BgL_arg2322z00_1697));
																		}}
																		{	/* Pp/circle.scm 104 */
																			obj_t BgL_fieldsz00_995;

																			BgL_fieldsz00_995 =
																				BGl_classzd2fieldszd2zz__objectz00
																				(BgL_classz00_993);
																			{	/* Pp/circle.scm 105 */

																				{	/* Pp/circle.scm 106 */
																					bool_t BgL_testz00_2131;

																					{	/* Pp/circle.scm 106 */
																						bool_t BgL__ortest_1859z00_1705;

																						BgL__ortest_1859z00_1705 =
																							PAIRP(BgL_fieldsz00_995);
																						if (BgL__ortest_1859z00_1705)
																							{	/* Pp/circle.scm 106 */
																								BgL_testz00_2131 =
																									BgL__ortest_1859z00_1705;
																							}
																						else
																							{	/* Pp/circle.scm 106 */
																								BgL_testz00_2131 =
																									NULLP(BgL_fieldsz00_995);
																							}
																					}
																					if (BgL_testz00_2131)
																						{
																							obj_t BgL_fieldsz00_998;

																							obj_t BgL_classz00_999;

																							BgL_fieldsz00_998 =
																								BgL_fieldsz00_995;
																							BgL_classz00_999 =
																								BgL_classz00_993;
																						BgL_zc3anonymousza31974ze3z83_1000:
																							if (NULLP(BgL_fieldsz00_998))
																								{	/* Pp/circle.scm 111 */
																									obj_t BgL_superz00_1002;

																									BgL_superz00_1002 =
																										BGl_classzd2superzd2zz__objectz00
																										(BgL_classz00_999);
																									if (BGl_classzf3zf3zz__objectz00(BgL_superz00_1002))
																										{
																											obj_t BgL_classz00_2142;

																											obj_t BgL_fieldsz00_2140;

																											BgL_fieldsz00_2140 =
																												BGl_classzd2fieldszd2zz__objectz00
																												(BgL_superz00_1002);
																											BgL_classz00_2142 =
																												BgL_superz00_1002;
																											BgL_classz00_999 =
																												BgL_classz00_2142;
																											BgL_fieldsz00_998 =
																												BgL_fieldsz00_2140;
																											goto
																												BgL_zc3anonymousza31974ze3z83_1000;
																										}
																									else
																										{	/* Pp/circle.scm 112 */
																											BgL_auxz00_2124 =
																												((bool_t) 0);
																										}
																								}
																							else
																								{	/* Pp/circle.scm 110 */
																									if (
																										(BgL_fieldsz00_998 ==
																											BUNSPEC))
																										{
																											obj_t BgL_fieldsz00_2145;

																											BgL_fieldsz00_2145 = BNIL;
																											BgL_fieldsz00_998 =
																												BgL_fieldsz00_2145;
																											goto
																												BgL_zc3anonymousza31974ze3z83_1000;
																										}
																									else
																										{	/* Pp/circle.scm 119 */
																											obj_t BgL_fz00_1006;

																											BgL_fz00_1006 =
																												CAR(BgL_fieldsz00_998);
																											{	/* Pp/circle.scm 119 */
																												obj_t BgL_gvz00_1007;

																												BgL_gvz00_1007 =
																													BGl_classzd2fieldzd2accessorz00zz__objectz00
																													(BgL_fz00_1006);
																												{	/* Pp/circle.scm 120 */

																													if (BGl_classzd2fieldzd2indexedzf3zf3zz__objectz00(BgL_fz00_1006))
																														{	/* Pp/circle.scm 122 */
																															obj_t
																																BgL_glz00_1009;
																															BgL_glz00_1009 =
																																BGl_classzd2fieldzd2lenzd2accessorzd2zz__objectz00
																																(BgL_fz00_1006);
																															{	/* Pp/circle.scm 123 */
																																long
																																	BgL_g1826z00_1010;
																																{	/* Pp/circle.scm 123 */
																																	obj_t
																																		BgL_arg1985z00_1019;
																																	BgL_arg1985z00_1019
																																		=
																																		PROCEDURE_ENTRY
																																		(BgL_glz00_1009)
																																		(BgL_glz00_1009,
																																		BgL_objz00_991,
																																		BEOA);
																																	BgL_g1826z00_1010
																																		=
																																		((long)
																																		CINT
																																		(BgL_arg1985z00_1019)
																																		-
																																		((long) 1));
																																}
																																{
																																	long
																																		BgL_lz00_1012;
																																	BgL_lz00_1012
																																		=
																																		BgL_g1826z00_1010;
																																BgL_zc3anonymousza31980ze3z83_1013:
																																	if (
																																		(BgL_lz00_1012
																																			==
																																			((long)
																																				-1)))
																																		{
																																			obj_t
																																				BgL_fieldsz00_2157;
																																			BgL_fieldsz00_2157
																																				=
																																				CDR
																																				(BgL_fieldsz00_998);
																																			BgL_fieldsz00_998
																																				=
																																				BgL_fieldsz00_2157;
																																			goto
																																				BgL_zc3anonymousza31974ze3z83_1000;
																																		}
																																	else
																																		{	/* Pp/circle.scm 124 */
																																			{	/* Pp/circle.scm 127 */
																																				obj_t
																																					BgL_arg1983z00_1016;
																																				BgL_arg1983z00_1016
																																					=
																																					PROCEDURE_ENTRY
																																					(BgL_gvz00_1007)
																																					(BgL_gvz00_1007,
																																					BgL_objz00_991,
																																					BINT
																																					(BgL_lz00_1012),
																																					BEOA);
																																				BGl_registerz00zz__pp_circlez00
																																					(BgL_cachez00_2003,
																																					BgL_arg1983z00_1016);
																																			}
																																			{
																																				long
																																					BgL_lz00_2163;
																																				BgL_lz00_2163
																																					=
																																					(BgL_lz00_1012
																																					-
																																					((long) 1));
																																				BgL_lz00_1012
																																					=
																																					BgL_lz00_2163;
																																				goto
																																					BgL_zc3anonymousza31980ze3z83_1013;
																																			}
																																		}
																																}
																															}
																														}
																													else
																														{	/* Pp/circle.scm 121 */
																															{	/* Pp/circle.scm 130 */
																																obj_t
																																	BgL_arg1987z00_1021;
																																BgL_arg1987z00_1021
																																	=
																																	PROCEDURE_ENTRY
																																	(BgL_gvz00_1007)
																																	(BgL_gvz00_1007,
																																	BgL_objz00_991,
																																	BEOA);
																																BGl_registerz00zz__pp_circlez00
																																	(BgL_cachez00_2003,
																																	BgL_arg1987z00_1021);
																															}
																															{
																																obj_t
																																	BgL_fieldsz00_2168;
																																BgL_fieldsz00_2168
																																	=
																																	CDR
																																	(BgL_fieldsz00_998);
																																BgL_fieldsz00_998
																																	=
																																	BgL_fieldsz00_2168;
																																goto
																																	BgL_zc3anonymousza31974ze3z83_1000;
																															}
																														}
																												}
																											}
																										}
																								}
																						}
																					else
																						{	/* Pp/circle.scm 106 */
																							BgL_auxz00_2124 = ((bool_t) 0);
																						}
																				}
																			}
																		}
																	}
																	return BBOOL(BgL_auxz00_2124);
																}
															else
																{	/* Pp/circle.scm 164 */
																	return BFALSE;
																}
														}
												}
										}
								}
						}
				}
			}
		}
	}



/* output-component */
	obj_t BGl_outputzd2componentzd2zz__pp_circlez00(obj_t
		BgL_nextzd2cardinalzd2_1972, obj_t BgL_flagz00_1971, obj_t BgL_portz00_1970,
		obj_t BgL_cachez00_1969, obj_t BgL_objz00_906)
	{
		AN_OBJECT;
		{	/* Pp/circle.scm 172 */
			{	/* Pp/circle.scm 173 */
				obj_t BgL_g1827z00_908;

				BgL_g1827z00_908 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_906,
					CELL_REF(BgL_cachez00_1969));
				return
					BGl_loopzd2matchedzd2zz__pp_circlez00(BgL_nextzd2cardinalzd2_1972,
					BgL_cachez00_1969, BgL_flagz00_1971, BgL_portz00_1970, BgL_objz00_906,
					BgL_g1827z00_908);
			}
		}
	}



/* loop-matched */
	obj_t BGl_loopzd2matchedzd2zz__pp_circlez00(obj_t BgL_nextzd2cardinalzd2_2002,
		obj_t BgL_cachez00_2001, obj_t BgL_flagz00_2000, obj_t BgL_portz00_1999,
		obj_t BgL_objz00_910, obj_t BgL_matchz00_911)
	{
		AN_OBJECT;
		{	/* Pp/circle.scm 173 */
		BGl_loopzd2matchedzd2zz__pp_circlez00:
			if (CBOOL(BgL_matchz00_911))
				{	/* Pp/circle.scm 176 */
					obj_t BgL_valuez00_913;

					if (CBOOL(BgL_matchz00_911))
						{	/* Pp/circle.scm 176 */
							BgL_valuez00_913 = CDR(BgL_matchz00_911);
						}
					else
						{	/* Pp/circle.scm 176 */
							BgL_valuez00_913 = BFALSE;
						}
					if (INTEGERP(BgL_valuez00_913))
						{	/* Pp/circle.scm 178 */
							bgl_display_char(((unsigned char) '#'), BgL_portz00_1999);
							BGl_outputzd2componentzd2zz__pp_circlez00
								(BgL_nextzd2cardinalzd2_2002, BgL_flagz00_2000,
								BgL_portz00_1999, BgL_cachez00_2001, BgL_valuez00_913);
							return bgl_display_char(((unsigned char) '#'), BgL_portz00_1999);
						}
					else
						{	/* Pp/circle.scm 178 */
							if (CBOOL(BgL_valuez00_913))
								{	/* Pp/circle.scm 185 */
									obj_t BgL_serialz00_915;

									BgL_serialz00_915 =
										PROCEDURE_ENTRY(BgL_nextzd2cardinalzd2_2002)
										(BgL_nextzd2cardinalzd2_2002, BEOA);
									SET_CDR(BgL_matchz00_911, BgL_serialz00_915);
									bgl_display_char(((unsigned char) '#'), BgL_portz00_1999);
									BGl_outputzd2componentzd2zz__pp_circlez00
										(BgL_nextzd2cardinalzd2_2002, BgL_flagz00_2000,
										BgL_portz00_1999, BgL_cachez00_2001, BgL_serialz00_915);
									bgl_display_char(((unsigned char) '='), BgL_portz00_1999);
									{
										obj_t BgL_matchz00_2191;

										BgL_matchz00_2191 = BFALSE;
										BgL_matchz00_911 = BgL_matchz00_2191;
										goto BGl_loopzd2matchedzd2zz__pp_circlez00;
									}
								}
							else
								{
									obj_t BgL_matchz00_2192;

									BgL_matchz00_2192 = BFALSE;
									BgL_matchz00_911 = BgL_matchz00_2192;
									goto BGl_loopzd2matchedzd2zz__pp_circlez00;
								}
						}
				}
			else
				{	/* Pp/circle.scm 175 */
					if (INTEGERP(BgL_objz00_910))
						{	/* Pp/circle.scm 197 */
							return bgl_display_fixnum(BgL_objz00_910, BgL_portz00_1999);
						}
					else
						{	/* Pp/circle.scm 197 */
							if (CHARP(BgL_objz00_910))
								{	/* Pp/circle.scm 200 */
									if (CBOOL(BgL_flagz00_2000))
										{	/* Pp/circle.scm 202 */
											unsigned char BgL_auxz00_2200;

											BgL_auxz00_2200 = CCHAR(BgL_objz00_910);
											return
												bgl_display_char(BgL_auxz00_2200, BgL_portz00_1999);
										}
									else
										{	/* Pp/circle.scm 201 */
											return bgl_write_char(BgL_objz00_910, BgL_portz00_1999);
										}
								}
							else
								{	/* Pp/circle.scm 200 */
									if (SYMBOLP(BgL_objz00_910))
										{	/* Pp/circle.scm 205 */
											if (CBOOL(BgL_flagz00_2000))
												{	/* Pp/circle.scm 206 */
													return
														BGl_displayzd2symbolzd2zz__r4_output_6_10_3z00
														(BgL_objz00_910, BgL_portz00_1999);
												}
											else
												{	/* Pp/circle.scm 206 */
													return
														BGl_writezd2symbolzd2zz__r4_output_6_10_3z00
														(BgL_objz00_910, BgL_portz00_1999);
												}
										}
									else
										{	/* Pp/circle.scm 205 */
											if (STRINGP(BgL_objz00_910))
												{	/* Pp/circle.scm 210 */
													if (CBOOL(BgL_flagz00_2000))
														{	/* Pp/circle.scm 211 */
															return
																bgl_display_string(BgL_objz00_910,
																BgL_portz00_1999);
														}
													else
														{	/* Pp/circle.scm 211 */
															return
																BGl_writezd2stringzd2zz__r4_output_6_10_3z00
																(string_for_read(BgL_objz00_910),
																BgL_portz00_1999);
														}
												}
											else
												{	/* Pp/circle.scm 210 */
													if (PAIRP(BgL_objz00_910))
														{	/* Pp/circle.scm 215 */
															bgl_display_char(((unsigned char) '('),
																BgL_portz00_1999);
															{
																obj_t BgL_lz00_924;

																BgL_lz00_924 = BgL_objz00_910;
															BgL_zc3anonymousza31929ze3z83_925:
																{	/* Pp/circle.scm 218 */
																	obj_t BgL_arg1930z00_926;

																	BgL_arg1930z00_926 = CAR(BgL_lz00_924);
																	BGl_outputzd2componentzd2zz__pp_circlez00
																		(BgL_nextzd2cardinalzd2_2002,
																		BgL_flagz00_2000, BgL_portz00_1999,
																		BgL_cachez00_2001, BgL_arg1930z00_926);
																}
																{	/* Pp/circle.scm 219 */
																	obj_t BgL_restz00_927;

																	BgL_restz00_927 = CDR(BgL_lz00_924);
																	if (NULLP(BgL_restz00_927))
																		{	/* Pp/circle.scm 220 */
																			return
																				bgl_display_char(((unsigned char) ')'),
																				BgL_portz00_1999);
																		}
																	else
																		{	/* Pp/circle.scm 222 */
																			obj_t BgL_matchz00_929;

																			BgL_matchz00_929 =
																				BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																				(BgL_restz00_927,
																				CELL_REF(BgL_cachez00_2001));
																			{	/* Pp/circle.scm 223 */
																				bool_t BgL_testz00_2227;

																				if (PAIRP(BgL_restz00_927))
																					{	/* Pp/circle.scm 223 */
																						if (CBOOL(BgL_matchz00_929))
																							{	/* Pp/circle.scm 224 */
																								obj_t BgL_pairz00_1618;

																								BgL_pairz00_1618 =
																									BgL_matchz00_929;
																								BgL_testz00_2227 =
																									CBOOL(CDR(BgL_pairz00_1618));
																							}
																						else
																							{	/* Pp/circle.scm 224 */
																								BgL_testz00_2227 = ((bool_t) 0);
																							}
																					}
																				else
																					{	/* Pp/circle.scm 223 */
																						BgL_testz00_2227 = ((bool_t) 1);
																					}
																				if (BgL_testz00_2227)
																					{	/* Pp/circle.scm 223 */
																						bgl_display_string
																							(BGl_string2365z00zz__pp_circlez00,
																							BgL_portz00_1999);
																						BGl_loopzd2matchedzd2zz__pp_circlez00
																							(BgL_nextzd2cardinalzd2_2002,
																							BgL_cachez00_2001,
																							BgL_flagz00_2000,
																							BgL_portz00_1999, BgL_restz00_927,
																							BgL_matchz00_929);
																						return bgl_display_char(((unsigned
																									char) ')'), BgL_portz00_1999);
																					}
																				else
																					{	/* Pp/circle.scm 223 */
																						bgl_display_char(((unsigned char)
																								' '), BgL_portz00_1999);
																						{
																							obj_t BgL_lz00_2238;

																							BgL_lz00_2238 = BgL_restz00_927;
																							BgL_lz00_924 = BgL_lz00_2238;
																							goto
																								BgL_zc3anonymousza31929ze3z83_925;
																						}
																					}
																			}
																		}
																}
															}
														}
													else
														{	/* Pp/circle.scm 215 */
															if (BGl_classzf3zf3zz__objectz00(BgL_objz00_910))
																{	/* Pp/circle.scm 233 */
																	return
																		bgl_display_obj(BgL_objz00_910,
																		BgL_portz00_1999);
																}
															else
																{	/* Pp/circle.scm 233 */
																	if (VECTORP(BgL_objz00_910))
																		{	/* Pp/circle.scm 236 */
																			bgl_display_char(((unsigned char) '#'),
																				BgL_portz00_1999);
																			{	/* Pp/circle.scm 238 */
																				int BgL_tagz00_936;

																				BgL_tagz00_936 =
																					VECTOR_TAG(BgL_objz00_910);
																				if (
																					((long) (BgL_tagz00_936) >
																						((long) 0)))
																					{	/* Pp/circle.scm 239 */
																						if (
																							((long) (BgL_tagz00_936) <
																								((long) 100)))
																							{	/* Pp/circle.scm 240 */
																								if (
																									((long) (BgL_tagz00_936) >
																										((long) 10)))
																									{	/* Pp/circle.scm 242 */
																										bgl_display_char(((unsigned
																													char) '0'),
																											BgL_portz00_1999);
																									}
																								else
																									{	/* Pp/circle.scm 242 */
																										BFALSE;
																									}
																								bgl_display_char(((unsigned
																											char) '0'),
																									BgL_portz00_1999);
																							}
																						else
																							{	/* Pp/circle.scm 244 */
																								obj_t BgL_list1939z00_940;

																								BgL_list1939z00_940 =
																									MAKE_PAIR(BgL_portz00_1999,
																									BNIL);
																								BGl_writez00zz__r4_output_6_10_3z00
																									(BINT(BgL_tagz00_936),
																									BgL_list1939z00_940);
																							}
																					}
																				else
																					{	/* Pp/circle.scm 239 */
																						BFALSE;
																					}
																			}
																			{	/* Pp/circle.scm 245 */
																				int BgL_lenz00_941;

																				BgL_lenz00_941 =
																					VECTOR_LENGTH(BgL_objz00_910);
																				bgl_display_char(((unsigned char) '('),
																					BgL_portz00_1999);
																				{
																					long BgL_iz00_943;

																					BgL_iz00_943 = ((long) 0);
																				BgL_zc3anonymousza31940ze3z83_944:
																					if (
																						(BgL_iz00_943 ==
																							(long) (BgL_lenz00_941)))
																						{	/* Pp/circle.scm 248 */
																							((bool_t) 0);
																						}
																					else
																						{	/* Pp/circle.scm 248 */
																							{	/* Pp/circle.scm 250 */
																								obj_t BgL_arg1942z00_946;

																								BgL_arg1942z00_946 =
																									VECTOR_REF(BgL_objz00_910,
																									(int) (BgL_iz00_943));
																								BGl_outputzd2componentzd2zz__pp_circlez00
																									(BgL_nextzd2cardinalzd2_2002,
																									BgL_flagz00_2000,
																									BgL_portz00_1999,
																									BgL_cachez00_2001,
																									BgL_arg1942z00_946);
																							}
																							{	/* Pp/circle.scm 251 */
																								long BgL_nextz00_947;

																								BgL_nextz00_947 =
																									(((long) 1) + BgL_iz00_943);
																								if (
																									(BgL_nextz00_947 ==
																										(long) (BgL_lenz00_941)))
																									{	/* Pp/circle.scm 252 */
																										BFALSE;
																									}
																								else
																									{	/* Pp/circle.scm 252 */
																										bgl_display_char(((unsigned
																													char) ' '),
																											BgL_portz00_1999);
																									}
																								{
																									long BgL_iz00_2273;

																									BgL_iz00_2273 =
																										(((long) 1) + BgL_iz00_943);
																									BgL_iz00_943 = BgL_iz00_2273;
																									goto
																										BgL_zc3anonymousza31940ze3z83_944;
																								}
																							}
																						}
																				}
																				return
																					bgl_display_char(((unsigned char)
																						')'), BgL_portz00_1999);
																		}}
																	else
																		{	/* Pp/circle.scm 236 */
																			if (STRUCTP(BgL_objz00_910))
																				{	/* Pp/circle.scm 257 */
																					bgl_display_string
																						(BGl_string2366z00zz__pp_circlez00,
																						BgL_portz00_1999);
																					{	/* Pp/circle.scm 259 */
																						obj_t BgL_arg1946z00_952;

																						BgL_arg1946z00_952 =
																							STRUCT_KEY(BgL_objz00_910);
																						{	/* Pp/circle.scm 259 */
																							obj_t BgL_list1947z00_953;

																							BgL_list1947z00_953 =
																								MAKE_PAIR(BgL_portz00_1999,
																								BNIL);
																							BGl_writez00zz__r4_output_6_10_3z00
																								(BgL_arg1946z00_952,
																								BgL_list1947z00_953);
																						}
																					}
																					bgl_display_char(((unsigned char)
																							' '), BgL_portz00_1999);
																					{	/* Pp/circle.scm 261 */
																						int BgL_lenz00_954;

																						BgL_lenz00_954 =
																							STRUCT_LENGTH(BgL_objz00_910);
																						{
																							long BgL_iz00_956;

																							BgL_iz00_956 = ((long) 0);
																						BgL_zc3anonymousza31948ze3z83_957:
																							if (
																								(BgL_iz00_956 ==
																									(long) (BgL_lenz00_954)))
																								{	/* Pp/circle.scm 263 */
																									((bool_t) 0);
																								}
																							else
																								{	/* Pp/circle.scm 263 */
																									{	/* Pp/circle.scm 265 */
																										obj_t BgL_arg1950z00_959;

																										BgL_arg1950z00_959 =
																											STRUCT_REF(BgL_objz00_910,
																											(int) (BgL_iz00_956));
																										BGl_outputzd2componentzd2zz__pp_circlez00
																											(BgL_nextzd2cardinalzd2_2002,
																											BgL_flagz00_2000,
																											BgL_portz00_1999,
																											BgL_cachez00_2001,
																											BgL_arg1950z00_959);
																									}
																									{	/* Pp/circle.scm 266 */
																										long BgL_nextz00_960;

																										BgL_nextz00_960 =
																											(((long) 1) +
																											BgL_iz00_956);
																										if ((BgL_nextz00_960 ==
																												(long)
																												(BgL_lenz00_954)))
																											{	/* Pp/circle.scm 267 */
																												BFALSE;
																											}
																										else
																											{	/* Pp/circle.scm 267 */
																												bgl_display_char((
																														(unsigned char)
																														' '),
																													BgL_portz00_1999);
																											}
																										{
																											long BgL_iz00_2295;

																											BgL_iz00_2295 =
																												(((long) 1) +
																												BgL_iz00_956);
																											BgL_iz00_956 =
																												BgL_iz00_2295;
																											goto
																												BgL_zc3anonymousza31948ze3z83_957;
																										}
																									}
																								}
																						}
																					}
																					return
																						bgl_display_char(((unsigned char)
																							'}'), BgL_portz00_1999);
																				}
																			else
																				{	/* Pp/circle.scm 257 */
																					if (CELLP(BgL_objz00_910))
																						{	/* Pp/circle.scm 272 */
																							bgl_display_string
																								(BGl_string2367z00zz__pp_circlez00,
																								BgL_portz00_1999);
																							{	/* Pp/circle.scm 274 */
																								obj_t BgL_arg1954z00_965;

																								BgL_arg1954z00_965 =
																									CELL_REF(BgL_objz00_910);
																								BGl_outputzd2componentzd2zz__pp_circlez00
																									(BgL_nextzd2cardinalzd2_2002,
																									BgL_flagz00_2000,
																									BgL_portz00_1999,
																									BgL_cachez00_2001,
																									BgL_arg1954z00_965);
																							}
																							return
																								bgl_display_string
																								(BGl_string2368z00zz__pp_circlez00,
																								BgL_portz00_1999);
																						}
																					else
																						{	/* Pp/circle.scm 272 */
																							if (BGL_OBJECTP(BgL_objz00_910))
																								{	/* Pp/circle.scm 279 */
																									obj_t
																										BgL_zc3anonymousza31957ze3z83_1966;
																									BgL_zc3anonymousza31957ze3z83_1966
																										=
																										make_va_procedure
																										(BGl_zc3anonymousza31957ze3z83zz__pp_circlez00,
																										(int) (((long) -2)),
																										(int) (((long) 4)));
																									PROCEDURE_SET
																										(BgL_zc3anonymousza31957ze3z83_1966,
																										(int) (((long) 0)),
																										BgL_cachez00_2001);
																									PROCEDURE_SET
																										(BgL_zc3anonymousza31957ze3z83_1966,
																										(int) (((long) 1)),
																										BgL_portz00_1999);
																									PROCEDURE_SET
																										(BgL_zc3anonymousza31957ze3z83_1966,
																										(int) (((long) 2)),
																										BgL_flagz00_2000);
																									PROCEDURE_SET
																										(BgL_zc3anonymousza31957ze3z83_1966,
																										(int) (((long) 3)),
																										BgL_nextzd2cardinalzd2_2002);
																									return
																										BGl_objectzd2printzd2zz__objectz00
																										((BgL_objectz00_bglt)
																										(BgL_objz00_910),
																										BgL_portz00_1999,
																										BgL_zc3anonymousza31957ze3z83_1966);
																								}
																							else
																								{	/* Pp/circle.scm 277 */
																									if (UCS2_STRINGP
																										(BgL_objz00_910))
																										{	/* Pp/circle.scm 281 */
																											if (CBOOL
																												(BgL_flagz00_2000))
																												{	/* Pp/circle.scm 282 */
																													return
																														BGl_displayzd2ucs2stringzd2zz__r4_output_6_10_3z00
																														(BgL_objz00_910,
																														BgL_portz00_1999);
																												}
																											else
																												{	/* Pp/circle.scm 282 */
																													return
																														BGl_writezd2ucs2stringzd2zz__r4_output_6_10_3z00
																														(BgL_objz00_910,
																														BgL_portz00_1999);
																												}
																										}
																									else
																										{	/* Pp/circle.scm 281 */
																											if (UCS2P(BgL_objz00_910))
																												{	/* Pp/circle.scm 286 */
																													if (CBOOL
																														(BgL_flagz00_2000))
																														{	/* Pp/circle.scm 287 */
																															return
																																bgl_display_ucs2
																																(BgL_objz00_910,
																																BgL_portz00_1999);
																														}
																													else
																														{	/* Pp/circle.scm 287 */
																															return
																																bgl_write_ucs2
																																(BgL_objz00_910,
																																BgL_portz00_1999);
																														}
																												}
																											else
																												{	/* Pp/circle.scm 286 */
																													if (REALP
																														(BgL_objz00_910))
																														{	/* Pp/circle.scm 292 */
																															obj_t
																																BgL_objz00_1675;
																															obj_t
																																BgL_portz00_1676;
																															BgL_objz00_1675 =
																																BgL_objz00_910;
																															BgL_portz00_1676 =
																																BgL_portz00_1999;
																															{	/* Pp/circle.scm 292 */
																																obj_t
																																	BgL_arg2324z00_1677;
																																BgL_arg2324z00_1677
																																	=
																																	real_to_string
																																	(REAL_TO_DOUBLE
																																	(BgL_objz00_1675));
																																return
																																	bgl_display_string
																																	(BgL_arg2324z00_1677,
																																	BgL_portz00_1676);
																															}
																														}
																													else
																														{	/* Pp/circle.scm 291 */
																															if (BGL_DATEP
																																(BgL_objz00_910))
																																{	/* Pp/circle.scm 294 */
																																	if (CBOOL
																																		(BgL_flagz00_2000))
																																		{	/* Pp/circle.scm 295 */
																																			return
																																				bgl_display_obj
																																				(BgL_objz00_910,
																																				BgL_portz00_1999);
																																		}
																																	else
																																		{	/* Pp/circle.scm 297 */
																																			obj_t
																																				BgL_list1962z00_976;
																																			BgL_list1962z00_976
																																				=
																																				MAKE_PAIR
																																				(BgL_portz00_1999,
																																				BNIL);
																																			return
																																				BGl_writez00zz__r4_output_6_10_3z00
																																				(BgL_objz00_910,
																																				BgL_list1962z00_976);
																																		}
																																}
																															else
																																{	/* Pp/circle.scm 294 */
																																	if (BGL_MUTEXP
																																		(BgL_objz00_910))
																																		{	/* Pp/circle.scm 299 */
																																			bgl_display_string
																																				(BGl_string2369z00zz__pp_circlez00,
																																				BgL_portz00_1999);
																																			{	/* Pp/circle.scm 301 */
																																				obj_t
																																					BgL_arg1965z00_978;
																																				BgL_arg1965z00_978
																																					=
																																					BGL_MUTEX_NAME
																																					(BgL_objz00_910);
																																				bgl_display_obj
																																					(BgL_arg1965z00_978,
																																					BgL_portz00_1999);
																																			}
																																			return
																																				bgl_display_string
																																				(BGl_string2368z00zz__pp_circlez00,
																																				BgL_portz00_1999);
																																		}
																																	else
																																		{	/* Pp/circle.scm 299 */
																																			if (BGL_CONDVARP(BgL_objz00_910))
																																				{	/* Pp/circle.scm 304 */
																																					bgl_display_string
																																						(BGl_string2370z00zz__pp_circlez00,
																																						BgL_portz00_1999);
																																					{	/* Pp/circle.scm 306 */
																																						obj_t
																																							BgL_arg1967z00_980;
																																						BgL_arg1967z00_980
																																							=
																																							BGL_CONDVAR_NAME
																																							(BgL_objz00_910);
																																						bgl_display_obj
																																							(BgL_arg1967z00_980,
																																							BgL_portz00_1999);
																																					}
																																					return
																																						bgl_display_string
																																						(BGl_string2368z00zz__pp_circlez00,
																																						BgL_portz00_1999);
																																				}
																																			else
																																				{	/* Pp/circle.scm 310 */
																																					obj_t
																																						BgL_list1968z00_981;
																																					BgL_list1968z00_981
																																						=
																																						MAKE_PAIR
																																						(BgL_portz00_1999,
																																						BNIL);
																																					return
																																						BGl_writez00zz__r4_output_6_10_3z00
																																						(BgL_objz00_910,
																																						BgL_list1968z00_981);
																																				}
																																		}
																																}
																														}
																												}
																										}
																								}
																						}
																				}
																		}
																}
														}
												}
										}
								}
						}
				}
		}
	}



/* <anonymous:1957> */
	obj_t BGl_zc3anonymousza31957ze3z83zz__pp_circlez00(obj_t BgL_envz00_1973,
		obj_t BgL_xz00_1978, obj_t BgL_pz00_1979)
	{
		AN_OBJECT;
		{	/* Pp/circle.scm 278 */
			{	/* Pp/circle.scm 279 */
				obj_t BgL_cachez00_1974;

				obj_t BgL_portz00_1975;

				obj_t BgL_flagz00_1976;

				obj_t BgL_nextzd2cardinalzd2_1977;

				BgL_cachez00_1974 = PROCEDURE_REF(BgL_envz00_1973, (int) (((long) 0)));
				BgL_portz00_1975 = PROCEDURE_REF(BgL_envz00_1973, (int) (((long) 1)));
				BgL_flagz00_1976 = PROCEDURE_REF(BgL_envz00_1973, (int) (((long) 2)));
				BgL_nextzd2cardinalzd2_1977 =
					PROCEDURE_REF(BgL_envz00_1973, (int) (((long) 3)));
				{
					obj_t BgL_xz00_968;

					obj_t BgL_pz00_969;

					BgL_xz00_968 = BgL_xz00_1978;
					BgL_pz00_969 = BgL_pz00_1979;
					return
						BGl_outputzd2componentzd2zz__pp_circlez00
						(BgL_nextzd2cardinalzd2_1977, BgL_flagz00_1976, BgL_portz00_1975,
						BgL_cachez00_1974, BgL_xz00_968);
				}
			}
		}
	}



/* <anonymous:2011> */
	obj_t BGl_zc3anonymousza32011ze3z83zz__pp_circlez00(obj_t BgL_envz00_1980)
	{
		AN_OBJECT;
		{	/* Pp/circle.scm 99 */
			{	/* Pp/circle.scm 100 */
				obj_t BgL_serialz00_1981;

				BgL_serialz00_1981 = PROCEDURE_REF(BgL_envz00_1980, (int) (((long) 0)));
				{

					{	/* Pp/circle.scm 100 */
						obj_t BgL_auxz00_1982;

						BgL_auxz00_1982 =
							BINT((((long) 1) + (long) CINT(CELL_REF(BgL_serialz00_1981))));
						CELL_SET(BgL_serialz00_1981, BgL_auxz00_1982);
					}
					return CELL_REF(BgL_serialz00_1981);
				}
			}
		}
	}



/* c-debugging-print */
	BGL_EXPORTED_DEF obj_t dprint(obj_t BgL_objz00_12)
	{
		AN_OBJECT;
		{	/* Pp/circle.scm 316 */
			{	/* Pp/circle.scm 317 */
				obj_t BgL_portz00_1745;

				{	/* Pp/circle.scm 317 */
					obj_t BgL_res2339z00_1747;

					{	/* Pp/circle.scm 317 */
						obj_t BgL_auxz00_2371;

						BgL_auxz00_2371 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2339z00_1747 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2371);
					}
					BgL_portz00_1745 = BgL_res2339z00_1747;
				}
				BGl_circlezd2writezf2displayz20zz__pp_circlez00(BgL_objz00_12,
					BgL_portz00_1745, ((bool_t) 0));
				bgl_display_char(((unsigned char) '\n'), BgL_portz00_1745);
				return BgL_objz00_12;
			}
		}
	}



/* _c-debugging-print */
	obj_t BGl__czd2debuggingzd2printz00zz__pp_circlez00(obj_t BgL_envz00_1984,
		obj_t BgL_objz00_1985)
	{
		AN_OBJECT;
		{	/* Pp/circle.scm 316 */
			return dprint(BgL_objz00_1985);
		}
	}



/* jvm-debugging-print */
	BGL_EXPORTED_DEF char *BGl_jvmzd2debuggingzd2printz00zz__pp_circlez00(obj_t
		BgL_objz00_13, int BgL_printerzd2numzd2_14)
	{
		AN_OBJECT;
		{	/* Pp/circle.scm 325 */
			{	/* Pp/circle.scm 327 */
				obj_t BgL_zc3anonymousza32013ze3z83_1986;

				BgL_zc3anonymousza32013ze3z83_1986 =
					make_fx_procedure(BGl_zc3anonymousza32013ze3z83zz__pp_circlez00,
					(int) (((long) 0)), (int) (((long) 2)));
				PROCEDURE_SET(BgL_zc3anonymousza32013ze3z83_1986,
					(int) (((long) 0)), BINT(BgL_printerzd2numzd2_14));
				PROCEDURE_SET(BgL_zc3anonymousza32013ze3z83_1986,
					(int) (((long) 1)), BgL_objz00_13);
				return
					BSTRING_TO_STRING
					(BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
					(BgL_zc3anonymousza32013ze3z83_1986));
			}
		}
	}



/* _jvm-debugging-print */
	obj_t BGl__jvmzd2debuggingzd2printz00zz__pp_circlez00(obj_t BgL_envz00_1993,
		obj_t BgL_objz00_1994, obj_t BgL_printerzd2numzd2_1995)
	{
		AN_OBJECT;
		{	/* Pp/circle.scm 325 */
			{	/* Pp/circle.scm 327 */
				char *BgL_auxz00_2387;

				{	/* Pp/circle.scm 327 */
					int BgL_auxz00_2388;

					{	/* Pp/circle.scm 327 */
						obj_t BgL_auxz00_2389;

						if (INTEGERP(BgL_printerzd2numzd2_1995))
							{	/* Pp/circle.scm 327 */
								BgL_auxz00_2389 = BgL_printerzd2numzd2_1995;
							}
						else
							{
								obj_t BgL_auxz00_2392;

								BgL_auxz00_2392 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2361z00zz__pp_circlez00, BINT(((long) 11197)),
									BGl_string2371z00zz__pp_circlez00,
									BGl_string2372z00zz__pp_circlez00, BgL_printerzd2numzd2_1995);
								FAILURE(BgL_auxz00_2392, BFALSE, BFALSE);
							}
						BgL_auxz00_2388 = CINT(BgL_auxz00_2389);
					}
					BgL_auxz00_2387 =
						BGl_jvmzd2debuggingzd2printz00zz__pp_circlez00(BgL_objz00_1994,
						BgL_auxz00_2388);
				}
				return string_to_bstring(BgL_auxz00_2387);
			}
		}
	}



/* <anonymous:2013> */
	obj_t BGl_zc3anonymousza32013ze3z83zz__pp_circlez00(obj_t BgL_envz00_1996)
	{
		AN_OBJECT;
		{	/* Pp/circle.scm 327 */
			{	/* Pp/circle.scm 327 */
				obj_t BgL_printerzd2numzd2_1997;

				obj_t BgL_objz00_1998;

				BgL_printerzd2numzd2_1997 =
					PROCEDURE_REF(BgL_envz00_1996, (int) (((long) 0)));
				BgL_objz00_1998 = PROCEDURE_REF(BgL_envz00_1996, (int) (((long) 1)));
				{

					{	/* Pp/circle.scm 327 */
						obj_t BgL_fun2016z00_1066;

						if (INTEGERP(BgL_printerzd2numzd2_1997))
							{	/* Pp/circle.scm 327 */
								switch ((long) CINT(BgL_printerzd2numzd2_1997))
									{
									case ((long) 1):

										BgL_fun2016z00_1066 =
											BGl_writezd2envzd2zz__r4_output_6_10_3z00;
										break;
									case ((long) 2):

										BgL_fun2016z00_1066 =
											BGl_writezd2circlezd2envz00zz__pp_circlez00;
										break;
									case ((long) 3):

										BgL_fun2016z00_1066 =
											BGl_displayzd2circlezd2envz00zz__pp_circlez00;
										break;
									default:
										BgL_fun2016z00_1066 =
											BGl_displayzd2envzd2zz__r4_output_6_10_3z00;
									}
							}
						else
							{	/* Pp/circle.scm 327 */
								BgL_fun2016z00_1066 =
									BGl_displayzd2envzd2zz__r4_output_6_10_3z00;
							}
						{	/* Pp/circle.scm 333 */
							obj_t BgL_arg2015z00_1067;

							{	/* Pp/circle.scm 333 */
								obj_t BgL_res2340z00_1752;

								{	/* Pp/circle.scm 333 */
									obj_t BgL_auxz00_2407;

									BgL_auxz00_2407 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res2340z00_1752 =
										BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2407);
								}
								BgL_arg2015z00_1067 = BgL_res2340z00_1752;
							}
							return
								PROCEDURE_ENTRY(BgL_fun2016z00_1066) (BgL_fun2016z00_1066,
								BgL_objz00_1998, BgL_arg2015z00_1067, BEOA);
						}
					}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__pp_circlez00()
	{
		AN_OBJECT;
		{	/* Pp/circle.scm 26 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__pp_circlez00()
	{
		AN_OBJECT;
		{	/* Pp/circle.scm 26 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__pp_circlez00()
	{
		AN_OBJECT;
		{	/* Pp/circle.scm 26 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2373z00zz__pp_circlez00));
			return
				BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					164543289), BSTRING_TO_STRING(BGl_string2373z00zz__pp_circlez00));
		}
	}

#ifdef __cplusplus
}
#endif
