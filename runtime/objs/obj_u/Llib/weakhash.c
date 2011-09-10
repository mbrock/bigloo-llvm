/*===========================================================================*/
/*   (Llib/weakhash.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Llib/weakhash.scm -indent -o objs/obj_u/Llib/weakhash.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl__weakzd2hashtablezd2keyzd2listzd2zz__weakhashz00(obj_t,
		obj_t);
	extern long BGl_hashtablezd2siza7ez75zz__hashz00(obj_t);
	static obj_t BGl_zc3anonymousza32092ze3z83zz__weakhashz00(obj_t, obj_t, obj_t,
		obj_t);
	extern bool_t bigloo_strcmp(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_weakzd2hashtablezd2containszf3zf3zz__weakhashz00(obj_t, obj_t);
	static obj_t BGl_keepgoingz00zz__weakhashz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32097ze3z83zz__weakhashz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__weakzd2hashtablezd2forzd2eachzd2zz__weakhashz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__weakzd2hashtablezd2expandz12z12zz__weakhashz00(obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__weakhashz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_weakzd2hashtablezd2expandz12z12zz__weakhashz00(obj_t);
	static obj_t BGl__weakzd2hashtablezd2updatez12z12zz__weakhashz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_weakzd2hashtablezd2keyzd2listzd2zz__weakhashz00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__weakhashz00();
	BGL_EXPORTED_DECL obj_t
		BGl_weakzd2hashtablezd2updatez12z12zz__weakhashz00(obj_t, obj_t, obj_t,
		obj_t);
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32122ze3z83zz__weakhashz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_weakzd2hashtablezd2forzd2eachzd2zz__weakhashz00(obj_t, obj_t);
	static obj_t BGl__weakzd2hashtablezd2mapz00zz__weakhashz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2addz12z12zz__weakhashz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__weakzd2hashtablezd2addz12z12zz__weakhashz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__weakhashz00();
	static obj_t BGl_zc3anonymousza32145ze3z83zz__weakhashz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2mapz00zz__weakhashz00(obj_t,
		obj_t);
	static obj_t BGl__weakzd2hashtablezd2filterz12z12zz__weakhashz00(obj_t, obj_t,
		obj_t);
	static bool_t BGl_traversezd2hashzd2zz__weakhashz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_weakzd2hashtablezd2filterz12z12zz__weakhashz00(obj_t, obj_t);
	static obj_t BGl_removez00zz__weakhashz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2putz12z12zz__weakhashz00(obj_t,
		obj_t, obj_t);
	extern obj_t weakptr_data(obj_t);
	static obj_t BGl__weakzd2hashtablezd2putz12z12zz__weakhashz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_weakzd2hashtablezd2ze3listze3zz__weakhashz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__weakhashz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t make_weakptr(obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__weakhashz00();
	static obj_t BGl_removestopz00zz__weakhashz00 = BUNSPEC;
	static obj_t BGl__weakzd2hashtablezd2ze3listze3zz__weakhashz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32166ze3z83zz__weakhashz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32174ze3z83zz__weakhashz00(obj_t, obj_t, obj_t,
		obj_t);
	extern long BGl_getzd2hashnumberzd2zz__hashz00(obj_t);
	extern bool_t BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00(obj_t);
	extern obj_t make_vector(int, obj_t);
	static obj_t BGl__weakzd2hashtablezd2removez12z12zz__weakhashz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_weakzd2hashtablezd2removez12z12zz__weakhashz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32046ze3z83zz__weakhashz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__weakzd2hashtablezd2containszf3zf3zz__weakhashz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32054ze3z83zz__weakhashz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32056ze3z83zz__weakhashz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_copyzd2vectorzd2zz__r4_vectors_6_8z00(obj_t, int);
	static obj_t BGl_zc3anonymousza32068ze3z83zz__weakhashz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__weakzd2hashtablezd2getz00zz__weakhashz00(obj_t, obj_t,
		obj_t);
	extern bool_t BGl_hashtablezd2weakzd2keyszf3zf3zz__hashz00(obj_t);
	static obj_t BGl_zc3anonymousza32073ze3z83zz__weakhashz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_traversezd2bucketszd2zz__weakhashz00(obj_t, obj_t, long,
		obj_t);
	static obj_t BGl__weakzd2hashtablezd2ze3vectorze3zz__weakhashz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_weakzd2hashtablezd2ze3vectorze3zz__weakhashz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2getz00zz__weakhashz00(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zz__weakhashz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_weakzd2hashtablezd2keyzd2listzd2envz00zz__weakhashz00,
		BgL_bgl__weakza7d2hashtabl2561za7,
		BGl__weakzd2hashtablezd2keyzd2listzd2zz__weakhashz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_weakzd2hashtablezd2forzd2eachzd2envz00zz__weakhashz00,
		BgL_bgl__weakza7d2hashtabl2562za7,
		BGl__weakzd2hashtablezd2forzd2eachzd2zz__weakhashz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_weakzd2hashtablezd2updatez12zd2envzc0zz__weakhashz00,
		BgL_bgl__weakza7d2hashtabl2563za7,
		BGl__weakzd2hashtablezd2updatez12z12zz__weakhashz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_weakzd2hashtablezd2ze3listzd2envz31zz__weakhashz00,
		BgL_bgl__weakza7d2hashtabl2564za7,
		BGl__weakzd2hashtablezd2ze3listze3zz__weakhashz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2544z00zz__weakhashz00,
		BgL_bgl_string2544za700za7za7_2565za7,
		"/tmp/bigloo/runtime/Llib/weakhash.scm", 37);
	      DEFINE_STRING(BGl_string2545z00zz__weakhashz00,
		BgL_bgl_string2545za700za7za7_2566za7, "_weak-hashtable->vector", 23);
	      DEFINE_STRING(BGl_string2546z00zz__weakhashz00,
		BgL_bgl_string2546za700za7za7_2567za7, "struct", 6);
	      DEFINE_STRING(BGl_string2547z00zz__weakhashz00,
		BgL_bgl_string2547za700za7za7_2568za7, "_weak-hashtable->list", 21);
	      DEFINE_STRING(BGl_string2548z00zz__weakhashz00,
		BgL_bgl_string2548za700za7za7_2569za7, "_weak-hashtable-key-list", 24);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_weakzd2hashtablezd2mapzd2envzd2zz__weakhashz00,
		BgL_bgl__weakza7d2hashtabl2570za7,
		BGl__weakzd2hashtablezd2mapz00zz__weakhashz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2550z00zz__weakhashz00,
		BgL_bgl_string2550za700za7za7_2571za7, "procedure", 9);
	      DEFINE_STRING(BGl_string2549z00zz__weakhashz00,
		BgL_bgl_string2549za700za7za7_2572za7, "_weak-hashtable-map", 19);
	      DEFINE_STRING(BGl_string2551z00zz__weakhashz00,
		BgL_bgl_string2551za700za7za7_2573za7, "_weak-hashtable-for-each", 24);
	      DEFINE_STRING(BGl_string2552z00zz__weakhashz00,
		BgL_bgl_string2552za700za7za7_2574za7, "_weak-hashtable-filter!", 23);
	      DEFINE_STRING(BGl_string2553z00zz__weakhashz00,
		BgL_bgl_string2553za700za7za7_2575za7, "_weak-hashtable-contains?", 25);
	      DEFINE_STRING(BGl_string2554z00zz__weakhashz00,
		BgL_bgl_string2554za700za7za7_2576za7, "_weak-hashtable-get", 19);
	      DEFINE_STRING(BGl_string2555z00zz__weakhashz00,
		BgL_bgl_string2555za700za7za7_2577za7, "_weak-hashtable-put!", 20);
	      DEFINE_STRING(BGl_string2556z00zz__weakhashz00,
		BgL_bgl_string2556za700za7za7_2578za7, "_weak-hashtable-update!", 23);
	      DEFINE_STRING(BGl_string2557z00zz__weakhashz00,
		BgL_bgl_string2557za700za7za7_2579za7, "_weak-hashtable-add!", 20);
	      DEFINE_STRING(BGl_string2558z00zz__weakhashz00,
		BgL_bgl_string2558za700za7za7_2580za7, "_weak-hashtable-remove!", 23);
	      DEFINE_STRING(BGl_string2560z00zz__weakhashz00,
		BgL_bgl_string2560za700za7za7_2581za7, "__weakhash", 10);
	      DEFINE_STRING(BGl_string2559z00zz__weakhashz00,
		BgL_bgl_string2559za700za7za7_2582za7, "_weak-hashtable-expand!", 23);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_weakzd2hashtablezd2ze3vectorzd2envz31zz__weakhashz00,
		BgL_bgl__weakza7d2hashtabl2583za7,
		BGl__weakzd2hashtablezd2ze3vectorze3zz__weakhashz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_weakzd2hashtablezd2removez12zd2envzc0zz__weakhashz00,
		BgL_bgl__weakza7d2hashtabl2584za7,
		BGl__weakzd2hashtablezd2removez12z12zz__weakhashz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_weakzd2hashtablezd2filterz12zd2envzc0zz__weakhashz00,
		BgL_bgl__weakza7d2hashtabl2585za7,
		BGl__weakzd2hashtablezd2filterz12z12zz__weakhashz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_weakzd2hashtablezd2addz12zd2envzc0zz__weakhashz00,
		BgL_bgl__weakza7d2hashtabl2586za7,
		BGl__weakzd2hashtablezd2addz12z12zz__weakhashz00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_weakzd2hashtablezd2getzd2envzd2zz__weakhashz00,
		BgL_bgl__weakza7d2hashtabl2587za7,
		BGl__weakzd2hashtablezd2getz00zz__weakhashz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_weakzd2hashtablezd2expandz12zd2envzc0zz__weakhashz00,
		BgL_bgl__weakza7d2hashtabl2588za7,
		BGl__weakzd2hashtablezd2expandz12z12zz__weakhashz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_weakzd2hashtablezd2containszf3zd2envz21zz__weakhashz00,
		BgL_bgl__weakza7d2hashtabl2589za7,
		BGl__weakzd2hashtablezd2containszf3zf3zz__weakhashz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_weakzd2hashtablezd2putz12zd2envzc0zz__weakhashz00,
		BgL_bgl__weakza7d2hashtabl2590za7,
		BGl__weakzd2hashtablezd2putz12z12zz__weakhashz00, 0L, BUNSPEC, 3);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__weakhashz00(long
		BgL_checksumz00_3355, char *BgL_fromz00_3356)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__weakhashz00))
				{
					BGl_requirezd2initializa7ationz75zz__weakhashz00 =
						BBOOL(((bool_t) 0));
					BGl_importedzd2moduleszd2initz00zz__weakhashz00();
					BGl_toplevelzd2initzd2zz__weakhashz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__weakhashz00()
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 18 */
			BGl_keepgoingz00zz__weakhashz00 = MAKE_PAIR(BUNSPEC, BUNSPEC);
			BGl_removez00zz__weakhashz00 = MAKE_PAIR(BUNSPEC, BUNSPEC);
			return (BGl_removestopz00zz__weakhashz00 =
				MAKE_PAIR(BUNSPEC, BUNSPEC), BUNSPEC);
		}
	}



/* traverse-buckets */
	obj_t BGl_traversezd2bucketszd2zz__weakhashz00(obj_t BgL_tablez00_37,
		obj_t BgL_bucketsz00_38, long BgL_iz00_39, obj_t BgL_funz00_40)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 131 */
			if (
				(((long) 1) ==
					(long) CINT(STRUCT_REF(BgL_tablez00_37, (int) (((long) 5))))))
				{	/* Llib/weakhash.scm 138 */
					obj_t BgL_g1839z00_892;

					BgL_g1839z00_892 = VECTOR_REF(BgL_bucketsz00_38, (int) (BgL_iz00_39));
					{
						obj_t BgL_bucketz00_894;

						obj_t BgL_lastzd2bucketzd2_895;

						BgL_bucketz00_894 = BgL_g1839z00_892;
						BgL_lastzd2bucketzd2_895 = BFALSE;
					BgL_zc3anonymousza31939ze3z83_896:
						if (NULLP(BgL_bucketz00_894))
							{	/* Llib/weakhash.scm 138 */
								return BGl_keepgoingz00zz__weakhashz00;
							}
						else
							{	/* Llib/weakhash.scm 140 */
								obj_t BgL_retz00_898;

								{	/* Llib/weakhash.scm 140 */
									obj_t BgL_keyz00_904;

									{	/* Llib/weakhash.scm 140 */
										obj_t BgL_arg1949z00_907;

										{	/* Llib/weakhash.scm 140 */
											obj_t BgL_pairz00_1925;

											BgL_pairz00_1925 = BgL_bucketz00_894;
											BgL_arg1949z00_907 = CAR(CAR(BgL_pairz00_1925));
										}
										BgL_keyz00_904 = weakptr_data(BgL_arg1949z00_907);
									}
									if ((BgL_keyz00_904 == BUNSPEC))
										{	/* Llib/weakhash.scm 141 */
											BgL_retz00_898 = BGl_removez00zz__weakhashz00;
										}
									else
										{	/* Llib/weakhash.scm 143 */
											obj_t BgL_arg1948z00_906;

											{	/* Llib/weakhash.scm 143 */
												obj_t BgL_pairz00_1930;

												BgL_pairz00_1930 = BgL_bucketz00_894;
												BgL_arg1948z00_906 = CDR(CAR(BgL_pairz00_1930));
											}
											BgL_retz00_898 =
												PROCEDURE_L_ENTRY(BgL_funz00_40) (BgL_funz00_40,
												BgL_keyz00_904, BgL_arg1948z00_906, BgL_bucketz00_894);
										}
								}
								if ((BgL_retz00_898 == BGl_keepgoingz00zz__weakhashz00))
									{
										obj_t BgL_lastzd2bucketzd2_3387;

										obj_t BgL_bucketz00_3385;

										BgL_bucketz00_3385 = CDR(BgL_bucketz00_894);
										BgL_lastzd2bucketzd2_3387 = BgL_bucketz00_894;
										BgL_lastzd2bucketzd2_895 = BgL_lastzd2bucketzd2_3387;
										BgL_bucketz00_894 = BgL_bucketz00_3385;
										goto BgL_zc3anonymousza31939ze3z83_896;
									}
								else
									{	/* Llib/weakhash.scm 138 */
										if ((BgL_retz00_898 == BGl_removez00zz__weakhashz00))
											{	/* Llib/weakhash.scm 138 */
												{	/* Llib/weakhash.scm 138 */
													long BgL_arg1930z00_1940;

													BgL_arg1930z00_1940 =
														(
														(long) CINT(STRUCT_REF(BgL_tablez00_37,
																(int) (((long) 0)))) - ((long) 1));
													{	/* Llib/weakhash.scm 138 */
														obj_t BgL_auxz00_3396;

														int BgL_auxz00_3394;

														BgL_auxz00_3396 = BINT(BgL_arg1930z00_1940);
														BgL_auxz00_3394 = (int) (((long) 0));
														STRUCT_SET(BgL_tablez00_37, BgL_auxz00_3394,
															BgL_auxz00_3396);
												}}
												if (CBOOL(BgL_lastzd2bucketzd2_895))
													{	/* Llib/weakhash.scm 138 */
														obj_t BgL_auxz00_3401;

														BgL_auxz00_3401 = CDR(BgL_bucketz00_894);
														SET_CDR(BgL_lastzd2bucketzd2_895, BgL_auxz00_3401);
													}
												else
													{	/* Llib/weakhash.scm 138 */
														VECTOR_SET(BgL_bucketsz00_38,
															(int) (BgL_iz00_39), CDR(BgL_bucketz00_894));
													} BGl_keepgoingz00zz__weakhashz00;
												{
													obj_t BgL_bucketz00_3407;

													BgL_bucketz00_3407 = CDR(BgL_bucketz00_894);
													BgL_bucketz00_894 = BgL_bucketz00_3407;
													goto BgL_zc3anonymousza31939ze3z83_896;
												}
											}
										else
											{	/* Llib/weakhash.scm 138 */
												if (
													(BgL_retz00_898 == BGl_removestopz00zz__weakhashz00))
													{	/* Llib/weakhash.scm 138 */
														{	/* Llib/weakhash.scm 138 */
															long BgL_arg1930z00_1968;

															BgL_arg1930z00_1968 =
																(
																(long) CINT(STRUCT_REF(BgL_tablez00_37,
																		(int) (((long) 0)))) - ((long) 1));
															{	/* Llib/weakhash.scm 138 */
																obj_t BgL_auxz00_3417;

																int BgL_auxz00_3415;

																BgL_auxz00_3417 = BINT(BgL_arg1930z00_1968);
																BgL_auxz00_3415 = (int) (((long) 0));
																STRUCT_SET(BgL_tablez00_37, BgL_auxz00_3415,
																	BgL_auxz00_3417);
														}}
														if (CBOOL(BgL_lastzd2bucketzd2_895))
															{	/* Llib/weakhash.scm 138 */
																obj_t BgL_auxz00_3422;

																BgL_auxz00_3422 = CDR(BgL_bucketz00_894);
																SET_CDR(BgL_lastzd2bucketzd2_895,
																	BgL_auxz00_3422);
															}
														else
															{	/* Llib/weakhash.scm 138 */
																VECTOR_SET(BgL_bucketsz00_38,
																	(int) (BgL_iz00_39), CDR(BgL_bucketz00_894));
															}
														return BGl_keepgoingz00zz__weakhashz00;
													}
												else
													{	/* Llib/weakhash.scm 138 */
														return BgL_retz00_898;
													}
											}
									}
							}
					}
				}
			else
				{	/* Llib/weakhash.scm 138 */
					if (
						(((long) 2) ==
							(long) CINT(STRUCT_REF(BgL_tablez00_37, (int) (((long) 5))))))
						{	/* Llib/weakhash.scm 144 */
							obj_t BgL_g1840z00_910;

							BgL_g1840z00_910 =
								VECTOR_REF(BgL_bucketsz00_38, (int) (BgL_iz00_39));
							{
								obj_t BgL_bucketz00_912;

								obj_t BgL_lastzd2bucketzd2_913;

								BgL_bucketz00_912 = BgL_g1840z00_910;
								BgL_lastzd2bucketzd2_913 = BFALSE;
							BgL_zc3anonymousza31951ze3z83_914:
								if (NULLP(BgL_bucketz00_912))
									{	/* Llib/weakhash.scm 144 */
										return BGl_keepgoingz00zz__weakhashz00;
									}
								else
									{	/* Llib/weakhash.scm 146 */
										obj_t BgL_retz00_916;

										{	/* Llib/weakhash.scm 146 */
											obj_t BgL_dataz00_922;

											{	/* Llib/weakhash.scm 146 */
												obj_t BgL_arg1960z00_925;

												{	/* Llib/weakhash.scm 146 */
													obj_t BgL_pairz00_1998;

													BgL_pairz00_1998 = BgL_bucketz00_912;
													BgL_arg1960z00_925 = CDR(CAR(BgL_pairz00_1998));
												}
												BgL_dataz00_922 = weakptr_data(BgL_arg1960z00_925);
											}
											if ((BgL_dataz00_922 == BUNSPEC))
												{	/* Llib/weakhash.scm 147 */
													BgL_retz00_916 = BGl_removez00zz__weakhashz00;
												}
											else
												{	/* Llib/weakhash.scm 149 */
													obj_t BgL_arg1959z00_924;

													{	/* Llib/weakhash.scm 149 */
														obj_t BgL_pairz00_2003;

														BgL_pairz00_2003 = BgL_bucketz00_912;
														BgL_arg1959z00_924 = CAR(CAR(BgL_pairz00_2003));
													}
													BgL_retz00_916 =
														PROCEDURE_L_ENTRY(BgL_funz00_40) (BgL_funz00_40,
														BgL_arg1959z00_924, BgL_dataz00_922,
														BgL_bucketz00_912);
												}
										}
										if ((BgL_retz00_916 == BGl_keepgoingz00zz__weakhashz00))
											{
												obj_t BgL_lastzd2bucketzd2_3450;

												obj_t BgL_bucketz00_3448;

												BgL_bucketz00_3448 = CDR(BgL_bucketz00_912);
												BgL_lastzd2bucketzd2_3450 = BgL_bucketz00_912;
												BgL_lastzd2bucketzd2_913 = BgL_lastzd2bucketzd2_3450;
												BgL_bucketz00_912 = BgL_bucketz00_3448;
												goto BgL_zc3anonymousza31951ze3z83_914;
											}
										else
											{	/* Llib/weakhash.scm 144 */
												if ((BgL_retz00_916 == BGl_removez00zz__weakhashz00))
													{	/* Llib/weakhash.scm 144 */
														{	/* Llib/weakhash.scm 144 */
															long BgL_arg1930z00_2013;

															BgL_arg1930z00_2013 =
																(
																(long) CINT(STRUCT_REF(BgL_tablez00_37,
																		(int) (((long) 0)))) - ((long) 1));
															{	/* Llib/weakhash.scm 144 */
																obj_t BgL_auxz00_3459;

																int BgL_auxz00_3457;

																BgL_auxz00_3459 = BINT(BgL_arg1930z00_2013);
																BgL_auxz00_3457 = (int) (((long) 0));
																STRUCT_SET(BgL_tablez00_37, BgL_auxz00_3457,
																	BgL_auxz00_3459);
														}}
														if (CBOOL(BgL_lastzd2bucketzd2_913))
															{	/* Llib/weakhash.scm 144 */
																obj_t BgL_auxz00_3464;

																BgL_auxz00_3464 = CDR(BgL_bucketz00_912);
																SET_CDR(BgL_lastzd2bucketzd2_913,
																	BgL_auxz00_3464);
															}
														else
															{	/* Llib/weakhash.scm 144 */
																VECTOR_SET(BgL_bucketsz00_38,
																	(int) (BgL_iz00_39), CDR(BgL_bucketz00_912));
															} BGl_keepgoingz00zz__weakhashz00;
														{
															obj_t BgL_bucketz00_3470;

															BgL_bucketz00_3470 = CDR(BgL_bucketz00_912);
															BgL_bucketz00_912 = BgL_bucketz00_3470;
															goto BgL_zc3anonymousza31951ze3z83_914;
														}
													}
												else
													{	/* Llib/weakhash.scm 144 */
														if (
															(BgL_retz00_916 ==
																BGl_removestopz00zz__weakhashz00))
															{	/* Llib/weakhash.scm 144 */
																{	/* Llib/weakhash.scm 144 */
																	long BgL_arg1930z00_2041;

																	BgL_arg1930z00_2041 =
																		(
																		(long) CINT(STRUCT_REF(BgL_tablez00_37,
																				(int) (((long) 0)))) - ((long) 1));
																	{	/* Llib/weakhash.scm 144 */
																		obj_t BgL_auxz00_3480;

																		int BgL_auxz00_3478;

																		BgL_auxz00_3480 = BINT(BgL_arg1930z00_2041);
																		BgL_auxz00_3478 = (int) (((long) 0));
																		STRUCT_SET(BgL_tablez00_37, BgL_auxz00_3478,
																			BgL_auxz00_3480);
																}}
																if (CBOOL(BgL_lastzd2bucketzd2_913))
																	{	/* Llib/weakhash.scm 144 */
																		obj_t BgL_auxz00_3485;

																		BgL_auxz00_3485 = CDR(BgL_bucketz00_912);
																		SET_CDR(BgL_lastzd2bucketzd2_913,
																			BgL_auxz00_3485);
																	}
																else
																	{	/* Llib/weakhash.scm 144 */
																		VECTOR_SET(BgL_bucketsz00_38,
																			(int) (BgL_iz00_39),
																			CDR(BgL_bucketz00_912));
																	}
																return BGl_keepgoingz00zz__weakhashz00;
															}
														else
															{	/* Llib/weakhash.scm 144 */
																return BgL_retz00_916;
															}
													}
											}
									}
							}
						}
					else
						{	/* Llib/weakhash.scm 144 */
							if (
								(((long) 3) ==
									(long) CINT(STRUCT_REF(BgL_tablez00_37, (int) (((long) 5))))))
								{	/* Llib/weakhash.scm 150 */
									obj_t BgL_g1841z00_928;

									BgL_g1841z00_928 =
										VECTOR_REF(BgL_bucketsz00_38, (int) (BgL_iz00_39));
									{
										obj_t BgL_bucketz00_930;

										obj_t BgL_lastzd2bucketzd2_931;

										BgL_bucketz00_930 = BgL_g1841z00_928;
										BgL_lastzd2bucketzd2_931 = BFALSE;
									BgL_zc3anonymousza31962ze3z83_932:
										if (NULLP(BgL_bucketz00_930))
											{	/* Llib/weakhash.scm 150 */
												return BGl_keepgoingz00zz__weakhashz00;
											}
										else
											{	/* Llib/weakhash.scm 152 */
												obj_t BgL_retz00_934;

												{	/* Llib/weakhash.scm 152 */
													obj_t BgL_keyz00_940;

													obj_t BgL_dataz00_941;

													{	/* Llib/weakhash.scm 152 */
														obj_t BgL_arg1971z00_944;

														{	/* Llib/weakhash.scm 152 */
															obj_t BgL_pairz00_2071;

															BgL_pairz00_2071 = BgL_bucketz00_930;
															BgL_arg1971z00_944 = CAR(CAR(BgL_pairz00_2071));
														}
														BgL_keyz00_940 = weakptr_data(BgL_arg1971z00_944);
													}
													{	/* Llib/weakhash.scm 153 */
														obj_t BgL_arg1972z00_945;

														{	/* Llib/weakhash.scm 153 */
															obj_t BgL_pairz00_2076;

															BgL_pairz00_2076 = BgL_bucketz00_930;
															BgL_arg1972z00_945 = CDR(CAR(BgL_pairz00_2076));
														}
														BgL_dataz00_941 = weakptr_data(BgL_arg1972z00_945);
													}
													{	/* Llib/weakhash.scm 154 */
														bool_t BgL_testz00_3506;

														if ((BgL_keyz00_940 == BUNSPEC))
															{	/* Llib/weakhash.scm 154 */
																BgL_testz00_3506 = ((bool_t) 1);
															}
														else
															{	/* Llib/weakhash.scm 154 */
																BgL_testz00_3506 = (BgL_dataz00_941 == BUNSPEC);
															}
														if (BgL_testz00_3506)
															{	/* Llib/weakhash.scm 154 */
																BgL_retz00_934 = BGl_removez00zz__weakhashz00;
															}
														else
															{	/* Llib/weakhash.scm 154 */
																BgL_retz00_934 =
																	PROCEDURE_L_ENTRY(BgL_funz00_40)
																	(BgL_funz00_40, BgL_keyz00_940,
																	BgL_dataz00_941, BgL_bucketz00_930);
															}
													}
												}
												if ((BgL_retz00_934 == BGl_keepgoingz00zz__weakhashz00))
													{
														obj_t BgL_lastzd2bucketzd2_3516;

														obj_t BgL_bucketz00_3514;

														BgL_bucketz00_3514 = CDR(BgL_bucketz00_930);
														BgL_lastzd2bucketzd2_3516 = BgL_bucketz00_930;
														BgL_lastzd2bucketzd2_931 =
															BgL_lastzd2bucketzd2_3516;
														BgL_bucketz00_930 = BgL_bucketz00_3514;
														goto BgL_zc3anonymousza31962ze3z83_932;
													}
												else
													{	/* Llib/weakhash.scm 150 */
														if (
															(BgL_retz00_934 == BGl_removez00zz__weakhashz00))
															{	/* Llib/weakhash.scm 150 */
																{	/* Llib/weakhash.scm 150 */
																	long BgL_arg1930z00_2087;

																	BgL_arg1930z00_2087 =
																		(
																		(long) CINT(STRUCT_REF(BgL_tablez00_37,
																				(int) (((long) 0)))) - ((long) 1));
																	{	/* Llib/weakhash.scm 150 */
																		obj_t BgL_auxz00_3525;

																		int BgL_auxz00_3523;

																		BgL_auxz00_3525 = BINT(BgL_arg1930z00_2087);
																		BgL_auxz00_3523 = (int) (((long) 0));
																		STRUCT_SET(BgL_tablez00_37, BgL_auxz00_3523,
																			BgL_auxz00_3525);
																}}
																if (CBOOL(BgL_lastzd2bucketzd2_931))
																	{	/* Llib/weakhash.scm 150 */
																		obj_t BgL_auxz00_3530;

																		BgL_auxz00_3530 = CDR(BgL_bucketz00_930);
																		SET_CDR(BgL_lastzd2bucketzd2_931,
																			BgL_auxz00_3530);
																	}
																else
																	{	/* Llib/weakhash.scm 150 */
																		VECTOR_SET(BgL_bucketsz00_38,
																			(int) (BgL_iz00_39),
																			CDR(BgL_bucketz00_930));
																	} BGl_keepgoingz00zz__weakhashz00;
																{
																	obj_t BgL_bucketz00_3536;

																	BgL_bucketz00_3536 = CDR(BgL_bucketz00_930);
																	BgL_bucketz00_930 = BgL_bucketz00_3536;
																	goto BgL_zc3anonymousza31962ze3z83_932;
																}
															}
														else
															{	/* Llib/weakhash.scm 150 */
																if (
																	(BgL_retz00_934 ==
																		BGl_removestopz00zz__weakhashz00))
																	{	/* Llib/weakhash.scm 150 */
																		{	/* Llib/weakhash.scm 150 */
																			long BgL_arg1930z00_2115;

																			BgL_arg1930z00_2115 =
																				(
																				(long) CINT(STRUCT_REF(BgL_tablez00_37,
																						(int) (((long) 0)))) - ((long) 1));
																			{	/* Llib/weakhash.scm 150 */
																				obj_t BgL_auxz00_3546;

																				int BgL_auxz00_3544;

																				BgL_auxz00_3546 =
																					BINT(BgL_arg1930z00_2115);
																				BgL_auxz00_3544 = (int) (((long) 0));
																				STRUCT_SET(BgL_tablez00_37,
																					BgL_auxz00_3544, BgL_auxz00_3546);
																		}}
																		if (CBOOL(BgL_lastzd2bucketzd2_931))
																			{	/* Llib/weakhash.scm 150 */
																				obj_t BgL_auxz00_3551;

																				BgL_auxz00_3551 =
																					CDR(BgL_bucketz00_930);
																				SET_CDR(BgL_lastzd2bucketzd2_931,
																					BgL_auxz00_3551);
																			}
																		else
																			{	/* Llib/weakhash.scm 150 */
																				VECTOR_SET(BgL_bucketsz00_38,
																					(int) (BgL_iz00_39),
																					CDR(BgL_bucketz00_930));
																			}
																		return BGl_keepgoingz00zz__weakhashz00;
																	}
																else
																	{	/* Llib/weakhash.scm 150 */
																		return BgL_retz00_934;
																	}
															}
													}
											}
									}
								}
							else
								{	/* Llib/weakhash.scm 150 */
									obj_t BgL_g1842z00_947;

									BgL_g1842z00_947 =
										VECTOR_REF(BgL_bucketsz00_38, (int) (BgL_iz00_39));
									{
										obj_t BgL_bucketz00_949;

										obj_t BgL_lastzd2bucketzd2_950;

										BgL_bucketz00_949 = BgL_g1842z00_947;
										BgL_lastzd2bucketzd2_950 = BFALSE;
									BgL_zc3anonymousza31973ze3z83_951:
										if (NULLP(BgL_bucketz00_949))
											{	/* Llib/weakhash.scm 150 */
												return BGl_keepgoingz00zz__weakhashz00;
											}
										else
											{	/* Llib/weakhash.scm 160 */
												obj_t BgL_retz00_953;

												{	/* Llib/weakhash.scm 160 */
													obj_t BgL_arg1981z00_959;

													obj_t BgL_arg1982z00_960;

													{	/* Llib/weakhash.scm 160 */
														obj_t BgL_pairz00_2140;

														BgL_pairz00_2140 = BgL_bucketz00_949;
														BgL_arg1981z00_959 = CAR(CAR(BgL_pairz00_2140));
													}
													{	/* Llib/weakhash.scm 160 */
														obj_t BgL_pairz00_2144;

														BgL_pairz00_2144 = BgL_bucketz00_949;
														BgL_arg1982z00_960 = CDR(CAR(BgL_pairz00_2144));
													}
													BgL_retz00_953 =
														PROCEDURE_L_ENTRY(BgL_funz00_40) (BgL_funz00_40,
														BgL_arg1981z00_959, BgL_arg1982z00_960,
														BgL_bucketz00_949);
												}
												if ((BgL_retz00_953 == BGl_keepgoingz00zz__weakhashz00))
													{
														obj_t BgL_lastzd2bucketzd2_3571;

														obj_t BgL_bucketz00_3569;

														BgL_bucketz00_3569 = CDR(BgL_bucketz00_949);
														BgL_lastzd2bucketzd2_3571 = BgL_bucketz00_949;
														BgL_lastzd2bucketzd2_950 =
															BgL_lastzd2bucketzd2_3571;
														BgL_bucketz00_949 = BgL_bucketz00_3569;
														goto BgL_zc3anonymousza31973ze3z83_951;
													}
												else
													{	/* Llib/weakhash.scm 150 */
														if (
															(BgL_retz00_953 == BGl_removez00zz__weakhashz00))
															{	/* Llib/weakhash.scm 150 */
																{	/* Llib/weakhash.scm 150 */
																	long BgL_arg1930z00_2154;

																	BgL_arg1930z00_2154 =
																		(
																		(long) CINT(STRUCT_REF(BgL_tablez00_37,
																				(int) (((long) 0)))) - ((long) 1));
																	{	/* Llib/weakhash.scm 150 */
																		obj_t BgL_auxz00_3580;

																		int BgL_auxz00_3578;

																		BgL_auxz00_3580 = BINT(BgL_arg1930z00_2154);
																		BgL_auxz00_3578 = (int) (((long) 0));
																		STRUCT_SET(BgL_tablez00_37, BgL_auxz00_3578,
																			BgL_auxz00_3580);
																}}
																if (CBOOL(BgL_lastzd2bucketzd2_950))
																	{	/* Llib/weakhash.scm 150 */
																		obj_t BgL_auxz00_3585;

																		BgL_auxz00_3585 = CDR(BgL_bucketz00_949);
																		SET_CDR(BgL_lastzd2bucketzd2_950,
																			BgL_auxz00_3585);
																	}
																else
																	{	/* Llib/weakhash.scm 150 */
																		VECTOR_SET(BgL_bucketsz00_38,
																			(int) (BgL_iz00_39),
																			CDR(BgL_bucketz00_949));
																	} BGl_keepgoingz00zz__weakhashz00;
																{
																	obj_t BgL_bucketz00_3591;

																	BgL_bucketz00_3591 = CDR(BgL_bucketz00_949);
																	BgL_bucketz00_949 = BgL_bucketz00_3591;
																	goto BgL_zc3anonymousza31973ze3z83_951;
																}
															}
														else
															{	/* Llib/weakhash.scm 150 */
																if (
																	(BgL_retz00_953 ==
																		BGl_removestopz00zz__weakhashz00))
																	{	/* Llib/weakhash.scm 150 */
																		{	/* Llib/weakhash.scm 150 */
																			long BgL_arg1930z00_2182;

																			BgL_arg1930z00_2182 =
																				(
																				(long) CINT(STRUCT_REF(BgL_tablez00_37,
																						(int) (((long) 0)))) - ((long) 1));
																			{	/* Llib/weakhash.scm 150 */
																				obj_t BgL_auxz00_3601;

																				int BgL_auxz00_3599;

																				BgL_auxz00_3601 =
																					BINT(BgL_arg1930z00_2182);
																				BgL_auxz00_3599 = (int) (((long) 0));
																				STRUCT_SET(BgL_tablez00_37,
																					BgL_auxz00_3599, BgL_auxz00_3601);
																		}}
																		if (CBOOL(BgL_lastzd2bucketzd2_950))
																			{	/* Llib/weakhash.scm 150 */
																				obj_t BgL_auxz00_3606;

																				BgL_auxz00_3606 =
																					CDR(BgL_bucketz00_949);
																				SET_CDR(BgL_lastzd2bucketzd2_950,
																					BgL_auxz00_3606);
																			}
																		else
																			{	/* Llib/weakhash.scm 150 */
																				VECTOR_SET(BgL_bucketsz00_38,
																					(int) (BgL_iz00_39),
																					CDR(BgL_bucketz00_949));
																			}
																		return BGl_keepgoingz00zz__weakhashz00;
																	}
																else
																	{	/* Llib/weakhash.scm 150 */
																		return BgL_retz00_953;
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



/* traverse-hash */
	bool_t BGl_traversezd2hashzd2zz__weakhashz00(obj_t BgL_tablez00_41,
		obj_t BgL_funz00_42)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 173 */
			if (
				(((long) 1) ==
					(long) CINT(STRUCT_REF(BgL_tablez00_41, (int) (((long) 5))))))
				{	/* Llib/weakhash.scm 183 */
					obj_t BgL_bucketsz00_969;

					BgL_bucketsz00_969 = STRUCT_REF(BgL_tablez00_41, (int) (((long) 2)));
					{	/* Llib/weakhash.scm 183 */
						int BgL_bucketszd2lenzd2_970;

						BgL_bucketszd2lenzd2_970 = VECTOR_LENGTH(BgL_bucketsz00_969);
						{	/* Llib/weakhash.scm 183 */

							{
								long BgL_iz00_972;

								BgL_iz00_972 = ((long) 0);
							BgL_zc3anonymousza31990ze3z83_973:
								if ((BgL_iz00_972 == (long) (BgL_bucketszd2lenzd2_970)))
									{	/* Llib/weakhash.scm 183 */
										return ((bool_t) 0);
									}
								else
									{	/* Llib/weakhash.scm 183 */
										{	/* Llib/weakhash.scm 183 */
											obj_t BgL_g1843z00_975;

											BgL_g1843z00_975 =
												VECTOR_REF(BgL_bucketsz00_969, (int) (BgL_iz00_972));
											{
												obj_t BgL_bucketz00_977;

												obj_t BgL_lastzd2bucketzd2_978;

												BgL_bucketz00_977 = BgL_g1843z00_975;
												BgL_lastzd2bucketzd2_978 = BFALSE;
											BgL_zc3anonymousza31992ze3z83_979:
												if (NULLP(BgL_bucketz00_977))
													{	/* Llib/weakhash.scm 183 */
														((bool_t) 0);
													}
												else
													{	/* Llib/weakhash.scm 185 */
														obj_t BgL_retz00_981;

														{	/* Llib/weakhash.scm 185 */
															obj_t BgL_keyz00_985;

															{	/* Llib/weakhash.scm 185 */
																obj_t BgL_arg1999z00_988;

																{	/* Llib/weakhash.scm 185 */
																	obj_t BgL_pairz00_2218;

																	BgL_pairz00_2218 = BgL_bucketz00_977;
																	BgL_arg1999z00_988 =
																		CAR(CAR(BgL_pairz00_2218));
																}
																BgL_keyz00_985 =
																	weakptr_data(BgL_arg1999z00_988);
															}
															if ((BgL_keyz00_985 == BUNSPEC))
																{	/* Llib/weakhash.scm 186 */
																	BgL_retz00_981 = BGl_removez00zz__weakhashz00;
																}
															else
																{	/* Llib/weakhash.scm 188 */
																	obj_t BgL_arg1998z00_987;

																	{	/* Llib/weakhash.scm 188 */
																		obj_t BgL_pairz00_2223;

																		BgL_pairz00_2223 = BgL_bucketz00_977;
																		BgL_arg1998z00_987 =
																			CDR(CAR(BgL_pairz00_2223));
																	}
																	BgL_retz00_981 =
																		PROCEDURE_ENTRY(BgL_funz00_42)
																		(BgL_funz00_42, BgL_keyz00_985,
																		BgL_arg1998z00_987, BEOA);
																}
														}
														if (
															(BgL_retz00_981 == BGl_removez00zz__weakhashz00))
															{	/* Llib/weakhash.scm 183 */
																{	/* Llib/weakhash.scm 183 */
																	long BgL_arg1930z00_2232;

																	BgL_arg1930z00_2232 =
																		(
																		(long) CINT(STRUCT_REF(BgL_tablez00_41,
																				(int) (((long) 0)))) - ((long) 1));
																	{	/* Llib/weakhash.scm 183 */
																		obj_t BgL_auxz00_3644;

																		int BgL_auxz00_3642;

																		BgL_auxz00_3644 = BINT(BgL_arg1930z00_2232);
																		BgL_auxz00_3642 = (int) (((long) 0));
																		STRUCT_SET(BgL_tablez00_41, BgL_auxz00_3642,
																			BgL_auxz00_3644);
																}}
																if (CBOOL(BgL_lastzd2bucketzd2_978))
																	{	/* Llib/weakhash.scm 183 */
																		obj_t BgL_auxz00_3649;

																		BgL_auxz00_3649 = CDR(BgL_bucketz00_977);
																		SET_CDR(BgL_lastzd2bucketzd2_978,
																			BgL_auxz00_3649);
																	}
																else
																	{	/* Llib/weakhash.scm 183 */
																		VECTOR_SET(BgL_bucketsz00_969,
																			(int) (BgL_iz00_972),
																			CDR(BgL_bucketz00_977));
																	} BGl_keepgoingz00zz__weakhashz00;
																{
																	obj_t BgL_bucketz00_3655;

																	BgL_bucketz00_3655 = CDR(BgL_bucketz00_977);
																	BgL_bucketz00_977 = BgL_bucketz00_3655;
																	goto BgL_zc3anonymousza31992ze3z83_979;
																}
															}
														else
															{
																obj_t BgL_lastzd2bucketzd2_3659;

																obj_t BgL_bucketz00_3657;

																BgL_bucketz00_3657 = CDR(BgL_bucketz00_977);
																BgL_lastzd2bucketzd2_3659 = BgL_bucketz00_977;
																BgL_lastzd2bucketzd2_978 =
																	BgL_lastzd2bucketzd2_3659;
																BgL_bucketz00_977 = BgL_bucketz00_3657;
																goto BgL_zc3anonymousza31992ze3z83_979;
															}
													}
											}
										}
										{
											long BgL_iz00_3660;

											BgL_iz00_3660 = (BgL_iz00_972 + ((long) 1));
											BgL_iz00_972 = BgL_iz00_3660;
											goto BgL_zc3anonymousza31990ze3z83_973;
										}
									}
							}
						}
					}
				}
			else
				{	/* Llib/weakhash.scm 183 */
					if (
						(((long) 2) ==
							(long) CINT(STRUCT_REF(BgL_tablez00_41, (int) (((long) 5))))))
						{	/* Llib/weakhash.scm 189 */
							obj_t BgL_bucketsz00_993;

							BgL_bucketsz00_993 =
								STRUCT_REF(BgL_tablez00_41, (int) (((long) 2)));
							{	/* Llib/weakhash.scm 189 */
								int BgL_bucketszd2lenzd2_994;

								BgL_bucketszd2lenzd2_994 = VECTOR_LENGTH(BgL_bucketsz00_993);
								{	/* Llib/weakhash.scm 189 */

									{
										long BgL_iz00_996;

										BgL_iz00_996 = ((long) 0);
									BgL_zc3anonymousza32002ze3z83_997:
										if ((BgL_iz00_996 == (long) (BgL_bucketszd2lenzd2_994)))
											{	/* Llib/weakhash.scm 189 */
												return ((bool_t) 0);
											}
										else
											{	/* Llib/weakhash.scm 189 */
												{	/* Llib/weakhash.scm 189 */
													obj_t BgL_g1844z00_999;

													BgL_g1844z00_999 =
														VECTOR_REF(BgL_bucketsz00_993,
														(int) (BgL_iz00_996));
													{
														obj_t BgL_bucketz00_1001;

														obj_t BgL_lastzd2bucketzd2_1002;

														BgL_bucketz00_1001 = BgL_g1844z00_999;
														BgL_lastzd2bucketzd2_1002 = BFALSE;
													BgL_zc3anonymousza32004ze3z83_1003:
														if (NULLP(BgL_bucketz00_1001))
															{	/* Llib/weakhash.scm 189 */
																((bool_t) 0);
															}
														else
															{	/* Llib/weakhash.scm 191 */
																obj_t BgL_retz00_1005;

																{	/* Llib/weakhash.scm 191 */
																	obj_t BgL_dataz00_1009;

																	{	/* Llib/weakhash.scm 191 */
																		obj_t BgL_arg2011z00_1012;

																		{	/* Llib/weakhash.scm 191 */
																			obj_t BgL_pairz00_2272;

																			BgL_pairz00_2272 = BgL_bucketz00_1001;
																			BgL_arg2011z00_1012 =
																				CDR(CAR(BgL_pairz00_2272));
																		}
																		BgL_dataz00_1009 =
																			weakptr_data(BgL_arg2011z00_1012);
																	}
																	if ((BgL_dataz00_1009 == BUNSPEC))
																		{	/* Llib/weakhash.scm 192 */
																			BgL_retz00_1005 =
																				BGl_removez00zz__weakhashz00;
																		}
																	else
																		{	/* Llib/weakhash.scm 194 */
																			obj_t BgL_arg2010z00_1011;

																			{	/* Llib/weakhash.scm 194 */
																				obj_t BgL_pairz00_2277;

																				BgL_pairz00_2277 = BgL_bucketz00_1001;
																				BgL_arg2010z00_1011 =
																					CAR(CAR(BgL_pairz00_2277));
																			}
																			BgL_retz00_1005 =
																				PROCEDURE_ENTRY(BgL_funz00_42)
																				(BgL_funz00_42, BgL_arg2010z00_1011,
																				BgL_dataz00_1009, BEOA);
																		}
																}
																if (
																	(BgL_retz00_1005 ==
																		BGl_removez00zz__weakhashz00))
																	{	/* Llib/weakhash.scm 189 */
																		{	/* Llib/weakhash.scm 189 */
																			long BgL_arg1930z00_2286;

																			BgL_arg1930z00_2286 =
																				(
																				(long) CINT(STRUCT_REF(BgL_tablez00_41,
																						(int) (((long) 0)))) - ((long) 1));
																			{	/* Llib/weakhash.scm 189 */
																				obj_t BgL_auxz00_3694;

																				int BgL_auxz00_3692;

																				BgL_auxz00_3694 =
																					BINT(BgL_arg1930z00_2286);
																				BgL_auxz00_3692 = (int) (((long) 0));
																				STRUCT_SET(BgL_tablez00_41,
																					BgL_auxz00_3692, BgL_auxz00_3694);
																		}}
																		if (CBOOL(BgL_lastzd2bucketzd2_1002))
																			{	/* Llib/weakhash.scm 189 */
																				obj_t BgL_auxz00_3699;

																				BgL_auxz00_3699 =
																					CDR(BgL_bucketz00_1001);
																				SET_CDR(BgL_lastzd2bucketzd2_1002,
																					BgL_auxz00_3699);
																			}
																		else
																			{	/* Llib/weakhash.scm 189 */
																				VECTOR_SET(BgL_bucketsz00_993,
																					(int) (BgL_iz00_996),
																					CDR(BgL_bucketz00_1001));
																			} BGl_keepgoingz00zz__weakhashz00;
																		{
																			obj_t BgL_bucketz00_3705;

																			BgL_bucketz00_3705 =
																				CDR(BgL_bucketz00_1001);
																			BgL_bucketz00_1001 = BgL_bucketz00_3705;
																			goto BgL_zc3anonymousza32004ze3z83_1003;
																		}
																	}
																else
																	{
																		obj_t BgL_lastzd2bucketzd2_3709;

																		obj_t BgL_bucketz00_3707;

																		BgL_bucketz00_3707 =
																			CDR(BgL_bucketz00_1001);
																		BgL_lastzd2bucketzd2_3709 =
																			BgL_bucketz00_1001;
																		BgL_lastzd2bucketzd2_1002 =
																			BgL_lastzd2bucketzd2_3709;
																		BgL_bucketz00_1001 = BgL_bucketz00_3707;
																		goto BgL_zc3anonymousza32004ze3z83_1003;
																	}
															}
													}
												}
												{
													long BgL_iz00_3710;

													BgL_iz00_3710 = (BgL_iz00_996 + ((long) 1));
													BgL_iz00_996 = BgL_iz00_3710;
													goto BgL_zc3anonymousza32002ze3z83_997;
												}
											}
									}
								}
							}
						}
					else
						{	/* Llib/weakhash.scm 189 */
							if (
								(((long) 3) ==
									(long) CINT(STRUCT_REF(BgL_tablez00_41, (int) (((long) 5))))))
								{	/* Llib/weakhash.scm 195 */
									obj_t BgL_bucketsz00_1017;

									BgL_bucketsz00_1017 =
										STRUCT_REF(BgL_tablez00_41, (int) (((long) 2)));
									{	/* Llib/weakhash.scm 195 */
										int BgL_bucketszd2lenzd2_1018;

										BgL_bucketszd2lenzd2_1018 =
											VECTOR_LENGTH(BgL_bucketsz00_1017);
										{	/* Llib/weakhash.scm 195 */

											{
												long BgL_iz00_1020;

												BgL_iz00_1020 = ((long) 0);
											BgL_zc3anonymousza32014ze3z83_1021:
												if (
													(BgL_iz00_1020 == (long) (BgL_bucketszd2lenzd2_1018)))
													{	/* Llib/weakhash.scm 195 */
														return ((bool_t) 0);
													}
												else
													{	/* Llib/weakhash.scm 195 */
														{	/* Llib/weakhash.scm 195 */
															obj_t BgL_g1845z00_1023;

															BgL_g1845z00_1023 =
																VECTOR_REF(BgL_bucketsz00_1017,
																(int) (BgL_iz00_1020));
															{
																obj_t BgL_bucketz00_1025;

																obj_t BgL_lastzd2bucketzd2_1026;

																BgL_bucketz00_1025 = BgL_g1845z00_1023;
																BgL_lastzd2bucketzd2_1026 = BFALSE;
															BgL_zc3anonymousza32016ze3z83_1027:
																if (NULLP(BgL_bucketz00_1025))
																	{	/* Llib/weakhash.scm 195 */
																		((bool_t) 0);
																	}
																else
																	{	/* Llib/weakhash.scm 197 */
																		obj_t BgL_retz00_1029;

																		{	/* Llib/weakhash.scm 197 */
																			obj_t BgL_keyz00_1033;

																			obj_t BgL_dataz00_1034;

																			{	/* Llib/weakhash.scm 197 */
																				obj_t BgL_arg2024z00_1037;

																				{	/* Llib/weakhash.scm 197 */
																					obj_t BgL_pairz00_2326;

																					BgL_pairz00_2326 = BgL_bucketz00_1025;
																					BgL_arg2024z00_1037 =
																						CAR(CAR(BgL_pairz00_2326));
																				}
																				BgL_keyz00_1033 =
																					weakptr_data(BgL_arg2024z00_1037);
																			}
																			{	/* Llib/weakhash.scm 198 */
																				obj_t BgL_arg2025z00_1038;

																				{	/* Llib/weakhash.scm 198 */
																					obj_t BgL_pairz00_2331;

																					BgL_pairz00_2331 = BgL_bucketz00_1025;
																					BgL_arg2025z00_1038 =
																						CDR(CAR(BgL_pairz00_2331));
																				}
																				BgL_dataz00_1034 =
																					weakptr_data(BgL_arg2025z00_1038);
																			}
																			{	/* Llib/weakhash.scm 199 */
																				bool_t BgL_testz00_3733;

																				if ((BgL_keyz00_1033 == BUNSPEC))
																					{	/* Llib/weakhash.scm 199 */
																						BgL_testz00_3733 = ((bool_t) 1);
																					}
																				else
																					{	/* Llib/weakhash.scm 199 */
																						BgL_testz00_3733 =
																							(BgL_dataz00_1034 == BUNSPEC);
																					}
																				if (BgL_testz00_3733)
																					{	/* Llib/weakhash.scm 199 */
																						BgL_retz00_1029 =
																							BGl_removez00zz__weakhashz00;
																					}
																				else
																					{	/* Llib/weakhash.scm 199 */
																						BgL_retz00_1029 =
																							PROCEDURE_ENTRY(BgL_funz00_42)
																							(BgL_funz00_42, BgL_keyz00_1033,
																							BgL_dataz00_1034, BEOA);
																					}
																			}
																		}
																		if (
																			(BgL_retz00_1029 ==
																				BGl_removez00zz__weakhashz00))
																			{	/* Llib/weakhash.scm 195 */
																				{	/* Llib/weakhash.scm 195 */
																					long BgL_arg1930z00_2341;

																					BgL_arg1930z00_2341 =
																						(
																						(long)
																						CINT(STRUCT_REF(BgL_tablez00_41,
																								(int) (((long) 0)))) -
																						((long) 1));
																					{	/* Llib/weakhash.scm 195 */
																						obj_t BgL_auxz00_3747;

																						int BgL_auxz00_3745;

																						BgL_auxz00_3747 =
																							BINT(BgL_arg1930z00_2341);
																						BgL_auxz00_3745 =
																							(int) (((long) 0));
																						STRUCT_SET(BgL_tablez00_41,
																							BgL_auxz00_3745, BgL_auxz00_3747);
																				}}
																				if (CBOOL(BgL_lastzd2bucketzd2_1026))
																					{	/* Llib/weakhash.scm 195 */
																						obj_t BgL_auxz00_3752;

																						BgL_auxz00_3752 =
																							CDR(BgL_bucketz00_1025);
																						SET_CDR(BgL_lastzd2bucketzd2_1026,
																							BgL_auxz00_3752);
																					}
																				else
																					{	/* Llib/weakhash.scm 195 */
																						VECTOR_SET(BgL_bucketsz00_1017,
																							(int) (BgL_iz00_1020),
																							CDR(BgL_bucketz00_1025));
																					} BGl_keepgoingz00zz__weakhashz00;
																				{
																					obj_t BgL_bucketz00_3758;

																					BgL_bucketz00_3758 =
																						CDR(BgL_bucketz00_1025);
																					BgL_bucketz00_1025 =
																						BgL_bucketz00_3758;
																					goto
																						BgL_zc3anonymousza32016ze3z83_1027;
																				}
																			}
																		else
																			{
																				obj_t BgL_lastzd2bucketzd2_3762;

																				obj_t BgL_bucketz00_3760;

																				BgL_bucketz00_3760 =
																					CDR(BgL_bucketz00_1025);
																				BgL_lastzd2bucketzd2_3762 =
																					BgL_bucketz00_1025;
																				BgL_lastzd2bucketzd2_1026 =
																					BgL_lastzd2bucketzd2_3762;
																				BgL_bucketz00_1025 = BgL_bucketz00_3760;
																				goto BgL_zc3anonymousza32016ze3z83_1027;
																			}
																	}
															}
														}
														{
															long BgL_iz00_3763;

															BgL_iz00_3763 = (BgL_iz00_1020 + ((long) 1));
															BgL_iz00_1020 = BgL_iz00_3763;
															goto BgL_zc3anonymousza32014ze3z83_1021;
														}
													}
											}
										}
									}
								}
							else
								{	/* Llib/weakhash.scm 195 */
									obj_t BgL_bucketsz00_1042;

									BgL_bucketsz00_1042 =
										STRUCT_REF(BgL_tablez00_41, (int) (((long) 2)));
									{	/* Llib/weakhash.scm 195 */
										int BgL_bucketszd2lenzd2_1043;

										BgL_bucketszd2lenzd2_1043 =
											VECTOR_LENGTH(BgL_bucketsz00_1042);
										{	/* Llib/weakhash.scm 195 */

											{
												long BgL_iz00_1045;

												BgL_iz00_1045 = ((long) 0);
											BgL_zc3anonymousza32028ze3z83_1046:
												if (
													(BgL_iz00_1045 == (long) (BgL_bucketszd2lenzd2_1043)))
													{	/* Llib/weakhash.scm 195 */
														return ((bool_t) 0);
													}
												else
													{	/* Llib/weakhash.scm 195 */
														{	/* Llib/weakhash.scm 195 */
															obj_t BgL_g1846z00_1048;

															BgL_g1846z00_1048 =
																VECTOR_REF(BgL_bucketsz00_1042,
																(int) (BgL_iz00_1045));
															{
																obj_t BgL_bucketz00_1050;

																obj_t BgL_lastzd2bucketzd2_1051;

																BgL_bucketz00_1050 = BgL_g1846z00_1048;
																BgL_lastzd2bucketzd2_1051 = BFALSE;
															BgL_zc3anonymousza32030ze3z83_1052:
																if (NULLP(BgL_bucketz00_1050))
																	{	/* Llib/weakhash.scm 195 */
																		((bool_t) 0);
																	}
																else
																	{	/* Llib/weakhash.scm 205 */
																		obj_t BgL_retz00_1054;

																		{	/* Llib/weakhash.scm 205 */
																			obj_t BgL_arg2036z00_1058;

																			obj_t BgL_arg2037z00_1059;

																			{	/* Llib/weakhash.scm 205 */
																				obj_t BgL_pairz00_2376;

																				BgL_pairz00_2376 = BgL_bucketz00_1050;
																				BgL_arg2036z00_1058 =
																					CAR(CAR(BgL_pairz00_2376));
																			}
																			{	/* Llib/weakhash.scm 205 */
																				obj_t BgL_pairz00_2380;

																				BgL_pairz00_2380 = BgL_bucketz00_1050;
																				BgL_arg2037z00_1059 =
																					CDR(CAR(BgL_pairz00_2380));
																			}
																			BgL_retz00_1054 =
																				PROCEDURE_ENTRY(BgL_funz00_42)
																				(BgL_funz00_42, BgL_arg2036z00_1058,
																				BgL_arg2037z00_1059, BEOA);
																		}
																		if (
																			(BgL_retz00_1054 ==
																				BGl_removez00zz__weakhashz00))
																			{	/* Llib/weakhash.scm 195 */
																				{	/* Llib/weakhash.scm 195 */
																					long BgL_arg1930z00_2389;

																					BgL_arg1930z00_2389 =
																						(
																						(long)
																						CINT(STRUCT_REF(BgL_tablez00_41,
																								(int) (((long) 0)))) -
																						((long) 1));
																					{	/* Llib/weakhash.scm 195 */
																						obj_t BgL_auxz00_3789;

																						int BgL_auxz00_3787;

																						BgL_auxz00_3789 =
																							BINT(BgL_arg1930z00_2389);
																						BgL_auxz00_3787 =
																							(int) (((long) 0));
																						STRUCT_SET(BgL_tablez00_41,
																							BgL_auxz00_3787, BgL_auxz00_3789);
																				}}
																				if (CBOOL(BgL_lastzd2bucketzd2_1051))
																					{	/* Llib/weakhash.scm 195 */
																						obj_t BgL_auxz00_3794;

																						BgL_auxz00_3794 =
																							CDR(BgL_bucketz00_1050);
																						SET_CDR(BgL_lastzd2bucketzd2_1051,
																							BgL_auxz00_3794);
																					}
																				else
																					{	/* Llib/weakhash.scm 195 */
																						VECTOR_SET(BgL_bucketsz00_1042,
																							(int) (BgL_iz00_1045),
																							CDR(BgL_bucketz00_1050));
																					} BGl_keepgoingz00zz__weakhashz00;
																				{
																					obj_t BgL_bucketz00_3800;

																					BgL_bucketz00_3800 =
																						CDR(BgL_bucketz00_1050);
																					BgL_bucketz00_1050 =
																						BgL_bucketz00_3800;
																					goto
																						BgL_zc3anonymousza32030ze3z83_1052;
																				}
																			}
																		else
																			{
																				obj_t BgL_lastzd2bucketzd2_3804;

																				obj_t BgL_bucketz00_3802;

																				BgL_bucketz00_3802 =
																					CDR(BgL_bucketz00_1050);
																				BgL_lastzd2bucketzd2_3804 =
																					BgL_bucketz00_1050;
																				BgL_lastzd2bucketzd2_1051 =
																					BgL_lastzd2bucketzd2_3804;
																				BgL_bucketz00_1050 = BgL_bucketz00_3802;
																				goto BgL_zc3anonymousza32030ze3z83_1052;
																			}
																	}
															}
														}
														{
															long BgL_iz00_3805;

															BgL_iz00_3805 = (BgL_iz00_1045 + ((long) 1));
															BgL_iz00_1045 = BgL_iz00_3805;
															goto BgL_zc3anonymousza32028ze3z83_1046;
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



/* weak-hashtable->vector */
	BGL_EXPORTED_DEF obj_t
		BGl_weakzd2hashtablezd2ze3vectorze3zz__weakhashz00(obj_t BgL_tablez00_43)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 217 */
			{	/* Llib/weakhash.scm 218 */
				obj_t BgL_vecz00_1069;

				obj_t BgL_wz00_1070;

				{	/* Llib/weakhash.scm 218 */
					long BgL_arg2051z00_1078;

					BgL_arg2051z00_1078 =
						BGl_hashtablezd2siza7ez75zz__hashz00(BgL_tablez00_43);
					BgL_vecz00_1069 = make_vector((int) (BgL_arg2051z00_1078), BUNSPEC);
				}
				{	/* Llib/weakhash.scm 219 */
					obj_t BgL_cellvalz00_3810;

					BgL_cellvalz00_3810 = BINT(((long) 0));
					BgL_wz00_1070 = MAKE_CELL(BgL_cellvalz00_3810);
				}
				{	/* Llib/weakhash.scm 222 */
					obj_t BgL_zc3anonymousza32046ze3z83_3193;

					BgL_zc3anonymousza32046ze3z83_3193 =
						make_fx_procedure(BGl_zc3anonymousza32046ze3z83zz__weakhashz00,
						(int) (((long) 2)), (int) (((long) 2)));
					PROCEDURE_SET(BgL_zc3anonymousza32046ze3z83_3193,
						(int) (((long) 0)), BgL_vecz00_1069);
					PROCEDURE_SET(BgL_zc3anonymousza32046ze3z83_3193,
						(int) (((long) 1)), BgL_wz00_1070);
					BGl_traversezd2hashzd2zz__weakhashz00(BgL_tablez00_43,
						BgL_zc3anonymousza32046ze3z83_3193);
				}
				{	/* Llib/weakhash.scm 224 */
					bool_t BgL_testz00_3820;

					{	/* Llib/weakhash.scm 224 */
						long BgL_arg2048z00_1077;

						BgL_arg2048z00_1077 =
							BGl_hashtablezd2siza7ez75zz__hashz00(BgL_tablez00_43);
						BgL_testz00_3820 =
							((long) CINT(CELL_REF(BgL_wz00_1070)) < BgL_arg2048z00_1077);
					}
					if (BgL_testz00_3820)
						{	/* Llib/weakhash.scm 224 */
							return
								BGl_copyzd2vectorzd2zz__r4_vectors_6_8z00(BgL_vecz00_1069,
								CINT(CELL_REF(BgL_wz00_1070)));
						}
					else
						{	/* Llib/weakhash.scm 224 */
							return BgL_vecz00_1069;
						}
				}
			}
		}
	}



/* _weak-hashtable->vector */
	obj_t BGl__weakzd2hashtablezd2ze3vectorze3zz__weakhashz00(obj_t
		BgL_envz00_3194, obj_t BgL_tablez00_3195)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 217 */
			{	/* Llib/weakhash.scm 218 */
				obj_t BgL_auxz00_3826;

				if (STRUCTP(BgL_tablez00_3195))
					{	/* Llib/weakhash.scm 218 */
						BgL_auxz00_3826 = BgL_tablez00_3195;
					}
				else
					{
						obj_t BgL_auxz00_3829;

						BgL_auxz00_3829 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2544z00zz__weakhashz00,
							BINT(((long) 8299)), BGl_string2545z00zz__weakhashz00,
							BGl_string2546z00zz__weakhashz00, BgL_tablez00_3195);
						FAILURE(BgL_auxz00_3829, BFALSE, BFALSE);
					}
				return
					BGl_weakzd2hashtablezd2ze3vectorze3zz__weakhashz00(BgL_auxz00_3826);
			}
		}
	}



/* <anonymous:2046> */
	obj_t BGl_zc3anonymousza32046ze3z83zz__weakhashz00(obj_t BgL_envz00_3196,
		obj_t BgL_keyz00_3199, obj_t BgL_valz00_3200)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 221 */
			{	/* Llib/weakhash.scm 222 */
				obj_t BgL_vecz00_3197;

				obj_t BgL_wz00_3198;

				BgL_vecz00_3197 = PROCEDURE_REF(BgL_envz00_3196, (int) (((long) 0)));
				BgL_wz00_3198 = PROCEDURE_REF(BgL_envz00_3196, (int) (((long) 1)));
				{
					obj_t BgL_keyz00_1072;

					obj_t BgL_valz00_1073;

					BgL_keyz00_1072 = BgL_keyz00_3199;
					BgL_valz00_1073 = BgL_valz00_3200;
					{	/* Llib/weakhash.scm 222 */
						obj_t BgL_vectorz00_2416;

						int BgL_kz00_2417;

						BgL_vectorz00_2416 = BgL_vecz00_3197;
						BgL_kz00_2417 = CINT(CELL_REF(BgL_wz00_3198));
						VECTOR_SET(BgL_vectorz00_2416, BgL_kz00_2417, BgL_valz00_1073);
					}
					{	/* Llib/weakhash.scm 223 */
						obj_t BgL_auxz00_3201;

						BgL_auxz00_3201 =
							BINT(((long) CINT(CELL_REF(BgL_wz00_3198)) + ((long) 1)));
						return CELL_SET(BgL_wz00_3198, BgL_auxz00_3201);
					}
				}
			}
		}
	}



/* weak-hashtable->list */
	BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2ze3listze3zz__weakhashz00(obj_t
		BgL_tablez00_44)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 231 */
			{	/* Llib/weakhash.scm 232 */
				obj_t BgL_resz00_2423;

				BgL_resz00_2423 = MAKE_CELL(BNIL);
				{	/* Llib/weakhash.scm 232 */
					obj_t BgL_zc3anonymousza32054ze3z83_3202;

					BgL_zc3anonymousza32054ze3z83_3202 =
						make_fx_procedure(BGl_zc3anonymousza32054ze3z83zz__weakhashz00,
						(int) (((long) 2)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza32054ze3z83_3202,
						(int) (((long) 0)), BgL_resz00_2423);
					BGl_traversezd2hashzd2zz__weakhashz00(BgL_tablez00_44,
						BgL_zc3anonymousza32054ze3z83_3202);
				}
				return CELL_REF(BgL_resz00_2423);
			}
		}
	}



/* _weak-hashtable->list */
	obj_t BGl__weakzd2hashtablezd2ze3listze3zz__weakhashz00(obj_t BgL_envz00_3203,
		obj_t BgL_tablez00_3204)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 231 */
			{	/* Llib/weakhash.scm 232 */
				obj_t BgL_auxz00_3849;

				if (STRUCTP(BgL_tablez00_3204))
					{	/* Llib/weakhash.scm 232 */
						BgL_auxz00_3849 = BgL_tablez00_3204;
					}
				else
					{
						obj_t BgL_auxz00_3852;

						BgL_auxz00_3852 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2544z00zz__weakhashz00,
							BINT(((long) 8805)), BGl_string2547z00zz__weakhashz00,
							BGl_string2546z00zz__weakhashz00, BgL_tablez00_3204);
						FAILURE(BgL_auxz00_3852, BFALSE, BFALSE);
					}
				return
					BGl_weakzd2hashtablezd2ze3listze3zz__weakhashz00(BgL_auxz00_3849);
			}
		}
	}



/* <anonymous:2054> */
	obj_t BGl_zc3anonymousza32054ze3z83zz__weakhashz00(obj_t BgL_envz00_3205,
		obj_t BgL_keyz00_3207, obj_t BgL_valz00_3208)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 234 */
			{	/* Llib/weakhash.scm 232 */
				obj_t BgL_resz00_3206;

				BgL_resz00_3206 = PROCEDURE_REF(BgL_envz00_3205, (int) (((long) 0)));
				{
					obj_t BgL_keyz00_2425;

					obj_t BgL_valz00_2426;

					BgL_keyz00_2425 = BgL_keyz00_3207;
					BgL_valz00_2426 = BgL_valz00_3208;
					{	/* Llib/weakhash.scm 232 */
						obj_t BgL_auxz00_3209;

						BgL_auxz00_3209 =
							MAKE_PAIR(BgL_valz00_2426, CELL_REF(BgL_resz00_3206));
						return CELL_SET(BgL_resz00_3206, BgL_auxz00_3209);
					}
				}
			}
		}
	}



/* weak-hashtable-key-list */
	BGL_EXPORTED_DEF obj_t
		BGl_weakzd2hashtablezd2keyzd2listzd2zz__weakhashz00(obj_t BgL_tablez00_45)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 241 */
			{	/* Llib/weakhash.scm 242 */
				obj_t BgL_resz00_2427;

				BgL_resz00_2427 = MAKE_CELL(BNIL);
				{	/* Llib/weakhash.scm 242 */
					obj_t BgL_zc3anonymousza32056ze3z83_3210;

					BgL_zc3anonymousza32056ze3z83_3210 =
						make_fx_procedure(BGl_zc3anonymousza32056ze3z83zz__weakhashz00,
						(int) (((long) 2)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza32056ze3z83_3210,
						(int) (((long) 0)), BgL_resz00_2427);
					BGl_traversezd2hashzd2zz__weakhashz00(BgL_tablez00_45,
						BgL_zc3anonymousza32056ze3z83_3210);
				}
				return CELL_REF(BgL_resz00_2427);
			}
		}
	}



/* _weak-hashtable-key-list */
	obj_t BGl__weakzd2hashtablezd2keyzd2listzd2zz__weakhashz00(obj_t
		BgL_envz00_3211, obj_t BgL_tablez00_3212)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 241 */
			{	/* Llib/weakhash.scm 242 */
				obj_t BgL_auxz00_3866;

				if (STRUCTP(BgL_tablez00_3212))
					{	/* Llib/weakhash.scm 242 */
						BgL_auxz00_3866 = BgL_tablez00_3212;
					}
				else
					{
						obj_t BgL_auxz00_3869;

						BgL_auxz00_3869 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2544z00zz__weakhashz00,
							BINT(((long) 9191)), BGl_string2548z00zz__weakhashz00,
							BGl_string2546z00zz__weakhashz00, BgL_tablez00_3212);
						FAILURE(BgL_auxz00_3869, BFALSE, BFALSE);
					}
				return
					BGl_weakzd2hashtablezd2keyzd2listzd2zz__weakhashz00(BgL_auxz00_3866);
			}
		}
	}



/* <anonymous:2056> */
	obj_t BGl_zc3anonymousza32056ze3z83zz__weakhashz00(obj_t BgL_envz00_3213,
		obj_t BgL_keyz00_3215, obj_t BgL_valz00_3216)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 244 */
			{	/* Llib/weakhash.scm 242 */
				obj_t BgL_resz00_3214;

				BgL_resz00_3214 = PROCEDURE_REF(BgL_envz00_3213, (int) (((long) 0)));
				{
					obj_t BgL_keyz00_2429;

					obj_t BgL_valz00_2430;

					BgL_keyz00_2429 = BgL_keyz00_3215;
					BgL_valz00_2430 = BgL_valz00_3216;
					{	/* Llib/weakhash.scm 242 */
						obj_t BgL_auxz00_3217;

						BgL_auxz00_3217 =
							MAKE_PAIR(BgL_keyz00_2429, CELL_REF(BgL_resz00_3214));
						return CELL_SET(BgL_resz00_3214, BgL_auxz00_3217);
					}
				}
			}
		}
	}



/* weak-hashtable-map */
	BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2mapz00zz__weakhashz00(obj_t
		BgL_tablez00_47, obj_t BgL_funz00_48)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 268 */
			{	/* Llib/weakhash.scm 269 */
				obj_t BgL_resz00_2431;

				BgL_resz00_2431 = MAKE_CELL(BNIL);
				{	/* Llib/weakhash.scm 269 */
					obj_t BgL_zc3anonymousza32068ze3z83_3218;

					BgL_zc3anonymousza32068ze3z83_3218 =
						make_fx_procedure(BGl_zc3anonymousza32068ze3z83zz__weakhashz00,
						(int) (((long) 2)), (int) (((long) 2)));
					PROCEDURE_SET(BgL_zc3anonymousza32068ze3z83_3218,
						(int) (((long) 0)), BgL_funz00_48);
					PROCEDURE_SET(BgL_zc3anonymousza32068ze3z83_3218,
						(int) (((long) 1)), BgL_resz00_2431);
					BGl_traversezd2hashzd2zz__weakhashz00(BgL_tablez00_47,
						BgL_zc3anonymousza32068ze3z83_3218);
				}
				return CELL_REF(BgL_resz00_2431);
			}
		}
	}



/* _weak-hashtable-map */
	obj_t BGl__weakzd2hashtablezd2mapz00zz__weakhashz00(obj_t BgL_envz00_3219,
		obj_t BgL_tablez00_3220, obj_t BgL_funz00_3221)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 268 */
			{	/* Llib/weakhash.scm 269 */
				obj_t BgL_auxz00_3892;

				obj_t BgL_auxz00_3885;

				if (PROCEDUREP(BgL_funz00_3221))
					{	/* Llib/weakhash.scm 269 */
						BgL_auxz00_3892 = BgL_funz00_3221;
					}
				else
					{
						obj_t BgL_auxz00_3895;

						BgL_auxz00_3895 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2544z00zz__weakhashz00,
							BINT(((long) 10235)), BGl_string2549z00zz__weakhashz00,
							BGl_string2550z00zz__weakhashz00, BgL_funz00_3221);
						FAILURE(BgL_auxz00_3895, BFALSE, BFALSE);
					}
				if (STRUCTP(BgL_tablez00_3220))
					{	/* Llib/weakhash.scm 269 */
						BgL_auxz00_3885 = BgL_tablez00_3220;
					}
				else
					{
						obj_t BgL_auxz00_3888;

						BgL_auxz00_3888 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2544z00zz__weakhashz00,
							BINT(((long) 10235)), BGl_string2549z00zz__weakhashz00,
							BGl_string2546z00zz__weakhashz00, BgL_tablez00_3220);
						FAILURE(BgL_auxz00_3888, BFALSE, BFALSE);
					}
				return
					BGl_weakzd2hashtablezd2mapz00zz__weakhashz00(BgL_auxz00_3885,
					BgL_auxz00_3892);
			}
		}
	}



/* <anonymous:2068> */
	obj_t BGl_zc3anonymousza32068ze3z83zz__weakhashz00(obj_t BgL_envz00_3222,
		obj_t BgL_keyz00_3225, obj_t BgL_valz00_3226)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 271 */
			{	/* Llib/weakhash.scm 269 */
				obj_t BgL_funz00_3223;

				obj_t BgL_resz00_3224;

				BgL_funz00_3223 = PROCEDURE_REF(BgL_envz00_3222, (int) (((long) 0)));
				BgL_resz00_3224 = PROCEDURE_REF(BgL_envz00_3222, (int) (((long) 1)));
				{
					obj_t BgL_keyz00_2433;

					obj_t BgL_valz00_2434;

					BgL_keyz00_2433 = BgL_keyz00_3225;
					BgL_valz00_2434 = BgL_valz00_3226;
					{	/* Llib/weakhash.scm 269 */
						obj_t BgL_auxz00_3227;

						{	/* Llib/weakhash.scm 269 */
							obj_t BgL_arg2069z00_2436;

							BgL_arg2069z00_2436 =
								PROCEDURE_ENTRY(BgL_funz00_3223) (BgL_funz00_3223,
								BgL_keyz00_2433, BgL_valz00_2434, BEOA);
							BgL_auxz00_3227 =
								MAKE_PAIR(BgL_arg2069z00_2436, CELL_REF(BgL_resz00_3224));
						}
						return CELL_SET(BgL_resz00_3224, BgL_auxz00_3227);
					}
				}
			}
		}
	}



/* weak-hashtable-for-each */
	BGL_EXPORTED_DEF obj_t
		BGl_weakzd2hashtablezd2forzd2eachzd2zz__weakhashz00(obj_t BgL_tablez00_49,
		obj_t BgL_funz00_50)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 278 */
			return
				BBOOL(BGl_traversezd2hashzd2zz__weakhashz00(BgL_tablez00_49,
					BgL_funz00_50));
		}
	}



/* _weak-hashtable-for-each */
	obj_t BGl__weakzd2hashtablezd2forzd2eachzd2zz__weakhashz00(obj_t
		BgL_envz00_3228, obj_t BgL_tablez00_3229, obj_t BgL_funz00_3230)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 278 */
			{	/* Llib/weakhash.scm 279 */
				obj_t BgL_auxz00_3916;

				obj_t BgL_auxz00_3909;

				if (PROCEDUREP(BgL_funz00_3230))
					{	/* Llib/weakhash.scm 279 */
						BgL_auxz00_3916 = BgL_funz00_3230;
					}
				else
					{
						obj_t BgL_auxz00_3919;

						BgL_auxz00_3919 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2544z00zz__weakhashz00,
							BINT(((long) 10646)), BGl_string2551z00zz__weakhashz00,
							BGl_string2550z00zz__weakhashz00, BgL_funz00_3230);
						FAILURE(BgL_auxz00_3919, BFALSE, BFALSE);
					}
				if (STRUCTP(BgL_tablez00_3229))
					{	/* Llib/weakhash.scm 279 */
						BgL_auxz00_3909 = BgL_tablez00_3229;
					}
				else
					{
						obj_t BgL_auxz00_3912;

						BgL_auxz00_3912 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2544z00zz__weakhashz00,
							BINT(((long) 10646)), BGl_string2551z00zz__weakhashz00,
							BGl_string2546z00zz__weakhashz00, BgL_tablez00_3229);
						FAILURE(BgL_auxz00_3912, BFALSE, BFALSE);
					}
				return
					BGl_weakzd2hashtablezd2forzd2eachzd2zz__weakhashz00(BgL_auxz00_3909,
					BgL_auxz00_3916);
			}
		}
	}



/* weak-hashtable-filter! */
	BGL_EXPORTED_DEF obj_t
		BGl_weakzd2hashtablezd2filterz12z12zz__weakhashz00(obj_t BgL_tablez00_51,
		obj_t BgL_funz00_52)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 284 */
			{	/* Llib/weakhash.scm 285 */
				obj_t BgL_bucketsz00_1122;

				BgL_bucketsz00_1122 = STRUCT_REF(BgL_tablez00_51, (int) (((long) 2)));
				{	/* Llib/weakhash.scm 285 */
					int BgL_bucketszd2lenzd2_1123;

					BgL_bucketszd2lenzd2_1123 = VECTOR_LENGTH(BgL_bucketsz00_1122);
					{	/* Llib/weakhash.scm 286 */

						{
							long BgL_iz00_1125;

							{	/* Llib/weakhash.scm 287 */
								bool_t BgL_auxz00_3927;

								BgL_iz00_1125 = ((long) 0);
							BgL_zc3anonymousza32070ze3z83_1126:
								if ((BgL_iz00_1125 < (long) (BgL_bucketszd2lenzd2_1123)))
									{	/* Llib/weakhash.scm 288 */
										{	/* Llib/weakhash.scm 292 */
											obj_t BgL_zc3anonymousza32073ze3z83_3231;

											{
												int BgL_auxz00_3931;

												BgL_auxz00_3931 = (int) (((long) 1));
												BgL_zc3anonymousza32073ze3z83_3231 =
													MAKE_L_PROCEDURE
													(BGl_zc3anonymousza32073ze3z83zz__weakhashz00,
													BgL_auxz00_3931);
											}
											PROCEDURE_L_SET(BgL_zc3anonymousza32073ze3z83_3231,
												(int) (((long) 0)), BgL_funz00_52);
											BGl_traversezd2bucketszd2zz__weakhashz00(BgL_tablez00_51,
												BgL_bucketsz00_1122, BgL_iz00_1125,
												BgL_zc3anonymousza32073ze3z83_3231);
										}
										{
											long BgL_iz00_3937;

											BgL_iz00_3937 = (BgL_iz00_1125 + ((long) 1));
											BgL_iz00_1125 = BgL_iz00_3937;
											goto BgL_zc3anonymousza32070ze3z83_1126;
										}
									}
								else
									{	/* Llib/weakhash.scm 288 */
										BgL_auxz00_3927 = ((bool_t) 0);
									}
								return BBOOL(BgL_auxz00_3927);
							}
						}
					}
				}
			}
		}
	}



/* _weak-hashtable-filter! */
	obj_t BGl__weakzd2hashtablezd2filterz12z12zz__weakhashz00(obj_t
		BgL_envz00_3232, obj_t BgL_tablez00_3233, obj_t BgL_funz00_3234)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 284 */
			{	/* Llib/weakhash.scm 285 */
				obj_t BgL_auxz00_3947;

				obj_t BgL_auxz00_3940;

				if (PROCEDUREP(BgL_funz00_3234))
					{	/* Llib/weakhash.scm 285 */
						BgL_auxz00_3947 = BgL_funz00_3234;
					}
				else
					{
						obj_t BgL_auxz00_3950;

						BgL_auxz00_3950 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2544z00zz__weakhashz00,
							BINT(((long) 10961)), BGl_string2552z00zz__weakhashz00,
							BGl_string2550z00zz__weakhashz00, BgL_funz00_3234);
						FAILURE(BgL_auxz00_3950, BFALSE, BFALSE);
					}
				if (STRUCTP(BgL_tablez00_3233))
					{	/* Llib/weakhash.scm 285 */
						BgL_auxz00_3940 = BgL_tablez00_3233;
					}
				else
					{
						obj_t BgL_auxz00_3943;

						BgL_auxz00_3943 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2544z00zz__weakhashz00,
							BINT(((long) 10961)), BGl_string2552z00zz__weakhashz00,
							BGl_string2546z00zz__weakhashz00, BgL_tablez00_3233);
						FAILURE(BgL_auxz00_3943, BFALSE, BFALSE);
					}
				return
					BGl_weakzd2hashtablezd2filterz12z12zz__weakhashz00(BgL_auxz00_3940,
					BgL_auxz00_3947);
			}
		}
	}



/* <anonymous:2073> */
	obj_t BGl_zc3anonymousza32073ze3z83zz__weakhashz00(obj_t BgL_envz00_3235,
		obj_t BgL_keyz00_3237, obj_t BgL_valz00_3238, obj_t BgL_bucketz00_3239)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 291 */
			{	/* Llib/weakhash.scm 292 */
				obj_t BgL_funz00_3236;

				BgL_funz00_3236 = PROCEDURE_L_REF(BgL_envz00_3235, (int) (((long) 0)));
				{
					obj_t BgL_keyz00_1129;

					obj_t BgL_valz00_1130;

					obj_t BgL_bucketz00_1131;

					BgL_keyz00_1129 = BgL_keyz00_3237;
					BgL_valz00_1130 = BgL_valz00_3238;
					BgL_bucketz00_1131 = BgL_bucketz00_3239;
					if (CBOOL(PROCEDURE_ENTRY(BgL_funz00_3236) (BgL_funz00_3236,
								BgL_keyz00_1129, BgL_valz00_1130, BEOA)))
						{	/* Llib/weakhash.scm 292 */
							return BGl_keepgoingz00zz__weakhashz00;
						}
					else
						{	/* Llib/weakhash.scm 292 */
							return BGl_removez00zz__weakhashz00;
						}
				}
			}
		}
	}



/* weak-hashtable-contains? */
	BGL_EXPORTED_DEF bool_t
		BGl_weakzd2hashtablezd2containszf3zf3zz__weakhashz00(obj_t BgL_tablez00_55,
		obj_t BgL_keyz00_56)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 319 */
			{	/* Llib/weakhash.scm 320 */
				obj_t BgL_bucketsz00_1160;

				BgL_bucketsz00_1160 = STRUCT_REF(BgL_tablez00_55, (int) (((long) 2)));
				{	/* Llib/weakhash.scm 320 */
					int BgL_bucketzd2lenzd2_1161;

					BgL_bucketzd2lenzd2_1161 = VECTOR_LENGTH(BgL_bucketsz00_1160);
					{	/* Llib/weakhash.scm 321 */
						long BgL_bucketzd2numzd2_1162;

						{	/* Llib/weakhash.scm 322 */
							long BgL_arg2094z00_1172;

							{	/* Llib/weakhash.scm 322 */
								long BgL_res2481z00_2465;

								{	/* Llib/weakhash.scm 322 */
									obj_t BgL_hashnz00_2452;

									BgL_hashnz00_2452 =
										STRUCT_REF(BgL_tablez00_55, (int) (((long) 4)));
									if (PROCEDUREP(BgL_hashnz00_2452))
										{	/* Llib/weakhash.scm 322 */
											obj_t BgL_arg1926z00_2454;

											BgL_arg1926z00_2454 =
												PROCEDURE_ENTRY(BgL_hashnz00_2452) (BgL_hashnz00_2452,
												BgL_keyz00_56, BEOA);
											{	/* Llib/weakhash.scm 322 */
												long BgL_nz00_2459;

												BgL_nz00_2459 = (long) CINT(BgL_arg1926z00_2454);
												if ((BgL_nz00_2459 < ((long) 0)))
													{	/* Llib/weakhash.scm 322 */
														BgL_res2481z00_2465 = NEG(BgL_nz00_2459);
													}
												else
													{	/* Llib/weakhash.scm 322 */
														BgL_res2481z00_2465 = BgL_nz00_2459;
													}
											}
										}
									else
										{	/* Llib/weakhash.scm 322 */
											BgL_res2481z00_2465 =
												BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_56);
										}
								}
								BgL_arg2094z00_1172 = BgL_res2481z00_2465;
							}
							{	/* Llib/weakhash.scm 322 */
								long BgL_auxz00_3975;

								BgL_auxz00_3975 = (long) (BgL_bucketzd2lenzd2_1161);
								BgL_bucketzd2numzd2_1162 =
									(BgL_arg2094z00_1172 % BgL_auxz00_3975);
						}}
						{	/* Llib/weakhash.scm 322 */
							obj_t BgL_retz00_1163;

							{	/* Llib/weakhash.scm 325 */
								obj_t BgL_zc3anonymousza32092ze3z83_3240;

								{
									int BgL_auxz00_3978;

									BgL_auxz00_3978 = (int) (((long) 2));
									BgL_zc3anonymousza32092ze3z83_3240 =
										MAKE_L_PROCEDURE
										(BGl_zc3anonymousza32092ze3z83zz__weakhashz00,
										BgL_auxz00_3978);
								}
								PROCEDURE_L_SET(BgL_zc3anonymousza32092ze3z83_3240,
									(int) (((long) 0)), BgL_tablez00_55);
								PROCEDURE_L_SET(BgL_zc3anonymousza32092ze3z83_3240,
									(int) (((long) 1)), BgL_keyz00_56);
								BgL_retz00_1163 =
									BGl_traversezd2bucketszd2zz__weakhashz00(BgL_tablez00_55,
									BgL_bucketsz00_1160, BgL_bucketzd2numzd2_1162,
									BgL_zc3anonymousza32092ze3z83_3240);
							}
							{	/* Llib/weakhash.scm 323 */

								if ((BgL_retz00_1163 == BGl_keepgoingz00zz__weakhashz00))
									{	/* Llib/weakhash.scm 328 */
										return ((bool_t) 0);
									}
								else
									{	/* Llib/weakhash.scm 328 */
										return ((bool_t) 1);
									}
							}
						}
					}
				}
			}
		}
	}



/* _weak-hashtable-contains? */
	obj_t BGl__weakzd2hashtablezd2containszf3zf3zz__weakhashz00(obj_t
		BgL_envz00_3241, obj_t BgL_tablez00_3242, obj_t BgL_keyz00_3243)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 319 */
			{	/* Llib/weakhash.scm 320 */
				bool_t BgL_auxz00_3988;

				{	/* Llib/weakhash.scm 320 */
					obj_t BgL_auxz00_3989;

					if (STRUCTP(BgL_tablez00_3242))
						{	/* Llib/weakhash.scm 320 */
							BgL_auxz00_3989 = BgL_tablez00_3242;
						}
					else
						{
							obj_t BgL_auxz00_3992;

							BgL_auxz00_3992 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2544z00zz__weakhashz00, BINT(((long) 12461)),
								BGl_string2553z00zz__weakhashz00,
								BGl_string2546z00zz__weakhashz00, BgL_tablez00_3242);
							FAILURE(BgL_auxz00_3992, BFALSE, BFALSE);
						}
					BgL_auxz00_3988 =
						BGl_weakzd2hashtablezd2containszf3zf3zz__weakhashz00
						(BgL_auxz00_3989, BgL_keyz00_3243);
				}
				return BBOOL(BgL_auxz00_3988);
			}
		}
	}



/* <anonymous:2092> */
	obj_t BGl_zc3anonymousza32092ze3z83zz__weakhashz00(obj_t BgL_envz00_3244,
		obj_t BgL_bkeyz00_3247, obj_t BgL_valz00_3248, obj_t BgL_bucketz00_3249)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 324 */
			{	/* Llib/weakhash.scm 325 */
				obj_t BgL_tablez00_3245;

				obj_t BgL_keyz00_3246;

				BgL_tablez00_3245 =
					PROCEDURE_L_REF(BgL_envz00_3244, (int) (((long) 0)));
				BgL_keyz00_3246 = PROCEDURE_L_REF(BgL_envz00_3244, (int) (((long) 1)));
				{
					obj_t BgL_bkeyz00_1166;

					obj_t BgL_valz00_1167;

					obj_t BgL_bucketz00_1168;

					BgL_bkeyz00_1166 = BgL_bkeyz00_3247;
					BgL_valz00_1167 = BgL_valz00_3248;
					BgL_bucketz00_1168 = BgL_bucketz00_3249;
					{	/* Llib/weakhash.scm 325 */
						bool_t BgL_testz00_4002;

						{	/* Llib/weakhash.scm 325 */
							obj_t BgL_eqtz00_2472;

							BgL_eqtz00_2472 =
								STRUCT_REF(BgL_tablez00_3245, (int) (((long) 3)));
							if (PROCEDUREP(BgL_eqtz00_2472))
								{	/* Llib/weakhash.scm 325 */
									BgL_testz00_4002 =
										CBOOL(PROCEDURE_ENTRY(BgL_eqtz00_2472) (BgL_eqtz00_2472,
											BgL_keyz00_3246, BgL_bkeyz00_1166, BEOA));
								}
							else
								{	/* Llib/weakhash.scm 325 */
									if (STRINGP(BgL_keyz00_3246))
										{	/* Llib/weakhash.scm 325 */
											if (STRINGP(BgL_bkeyz00_1166))
												{	/* Llib/weakhash.scm 325 */
													BgL_testz00_4002 =
														bigloo_strcmp(BgL_keyz00_3246, BgL_bkeyz00_1166);
												}
											else
												{	/* Llib/weakhash.scm 325 */
													BgL_testz00_4002 = ((bool_t) 0);
												}
										}
									else
										{	/* Llib/weakhash.scm 325 */
											BgL_testz00_4002 =
												BGl_equalzf3zf3zz__r4_equivalence_6_2z00
												(BgL_keyz00_3246, BgL_bkeyz00_1166);
										}
								}
						}
						if (BgL_testz00_4002)
							{	/* Llib/weakhash.scm 325 */
								return BTRUE;
							}
						else
							{	/* Llib/weakhash.scm 325 */
								return BGl_keepgoingz00zz__weakhashz00;
							}
					}
				}
			}
		}
	}



/* weak-hashtable-get */
	BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2getz00zz__weakhashz00(obj_t
		BgL_tablez00_57, obj_t BgL_keyz00_58)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 333 */
			{	/* Llib/weakhash.scm 334 */
				obj_t BgL_bucketsz00_1173;

				BgL_bucketsz00_1173 = STRUCT_REF(BgL_tablez00_57, (int) (((long) 2)));
				{	/* Llib/weakhash.scm 334 */
					int BgL_bucketzd2lenzd2_1174;

					BgL_bucketzd2lenzd2_1174 = VECTOR_LENGTH(BgL_bucketsz00_1173);
					{	/* Llib/weakhash.scm 335 */
						long BgL_bucketzd2numzd2_1175;

						{	/* Llib/weakhash.scm 336 */
							long BgL_arg2099z00_1185;

							{	/* Llib/weakhash.scm 336 */
								long BgL_res2483z00_2503;

								{	/* Llib/weakhash.scm 336 */
									obj_t BgL_hashnz00_2490;

									BgL_hashnz00_2490 =
										STRUCT_REF(BgL_tablez00_57, (int) (((long) 4)));
									if (PROCEDUREP(BgL_hashnz00_2490))
										{	/* Llib/weakhash.scm 336 */
											obj_t BgL_arg1926z00_2492;

											BgL_arg1926z00_2492 =
												PROCEDURE_ENTRY(BgL_hashnz00_2490) (BgL_hashnz00_2490,
												BgL_keyz00_58, BEOA);
											{	/* Llib/weakhash.scm 336 */
												long BgL_nz00_2497;

												BgL_nz00_2497 = (long) CINT(BgL_arg1926z00_2492);
												if ((BgL_nz00_2497 < ((long) 0)))
													{	/* Llib/weakhash.scm 336 */
														BgL_res2483z00_2503 = NEG(BgL_nz00_2497);
													}
												else
													{	/* Llib/weakhash.scm 336 */
														BgL_res2483z00_2503 = BgL_nz00_2497;
													}
											}
										}
									else
										{	/* Llib/weakhash.scm 336 */
											BgL_res2483z00_2503 =
												BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_58);
										}
								}
								BgL_arg2099z00_1185 = BgL_res2483z00_2503;
							}
							{	/* Llib/weakhash.scm 336 */
								long BgL_auxz00_4030;

								BgL_auxz00_4030 = (long) (BgL_bucketzd2lenzd2_1174);
								BgL_bucketzd2numzd2_1175 =
									(BgL_arg2099z00_1185 % BgL_auxz00_4030);
						}}
						{	/* Llib/weakhash.scm 336 */
							obj_t BgL_retz00_1176;

							{	/* Llib/weakhash.scm 339 */
								obj_t BgL_zc3anonymousza32097ze3z83_3250;

								{
									int BgL_auxz00_4033;

									BgL_auxz00_4033 = (int) (((long) 2));
									BgL_zc3anonymousza32097ze3z83_3250 =
										MAKE_L_PROCEDURE
										(BGl_zc3anonymousza32097ze3z83zz__weakhashz00,
										BgL_auxz00_4033);
								}
								PROCEDURE_L_SET(BgL_zc3anonymousza32097ze3z83_3250,
									(int) (((long) 0)), BgL_tablez00_57);
								PROCEDURE_L_SET(BgL_zc3anonymousza32097ze3z83_3250,
									(int) (((long) 1)), BgL_keyz00_58);
								BgL_retz00_1176 =
									BGl_traversezd2bucketszd2zz__weakhashz00(BgL_tablez00_57,
									BgL_bucketsz00_1173, BgL_bucketzd2numzd2_1175,
									BgL_zc3anonymousza32097ze3z83_3250);
							}
							{	/* Llib/weakhash.scm 337 */

								if ((BgL_retz00_1176 == BGl_keepgoingz00zz__weakhashz00))
									{	/* Llib/weakhash.scm 342 */
										return BFALSE;
									}
								else
									{	/* Llib/weakhash.scm 342 */
										return BgL_retz00_1176;
									}
							}
						}
					}
				}
			}
		}
	}



/* _weak-hashtable-get */
	obj_t BGl__weakzd2hashtablezd2getz00zz__weakhashz00(obj_t BgL_envz00_3251,
		obj_t BgL_tablez00_3252, obj_t BgL_keyz00_3253)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 333 */
			{	/* Llib/weakhash.scm 334 */
				obj_t BgL_auxz00_4043;

				if (STRUCTP(BgL_tablez00_3252))
					{	/* Llib/weakhash.scm 334 */
						BgL_auxz00_4043 = BgL_tablez00_3252;
					}
				else
					{
						obj_t BgL_auxz00_4046;

						BgL_auxz00_4046 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2544z00zz__weakhashz00,
							BINT(((long) 13087)), BGl_string2554z00zz__weakhashz00,
							BGl_string2546z00zz__weakhashz00, BgL_tablez00_3252);
						FAILURE(BgL_auxz00_4046, BFALSE, BFALSE);
					}
				return
					BGl_weakzd2hashtablezd2getz00zz__weakhashz00(BgL_auxz00_4043,
					BgL_keyz00_3253);
			}
		}
	}



/* <anonymous:2097> */
	obj_t BGl_zc3anonymousza32097ze3z83zz__weakhashz00(obj_t BgL_envz00_3254,
		obj_t BgL_bkeyz00_3257, obj_t BgL_valz00_3258, obj_t BgL_bucketz00_3259)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 338 */
			{	/* Llib/weakhash.scm 339 */
				obj_t BgL_tablez00_3255;

				obj_t BgL_keyz00_3256;

				BgL_tablez00_3255 =
					PROCEDURE_L_REF(BgL_envz00_3254, (int) (((long) 0)));
				BgL_keyz00_3256 = PROCEDURE_L_REF(BgL_envz00_3254, (int) (((long) 1)));
				{
					obj_t BgL_bkeyz00_1179;

					obj_t BgL_valz00_1180;

					obj_t BgL_bucketz00_1181;

					BgL_bkeyz00_1179 = BgL_bkeyz00_3257;
					BgL_valz00_1180 = BgL_valz00_3258;
					BgL_bucketz00_1181 = BgL_bucketz00_3259;
					{	/* Llib/weakhash.scm 339 */
						bool_t BgL_testz00_4055;

						{	/* Llib/weakhash.scm 339 */
							obj_t BgL_eqtz00_2510;

							BgL_eqtz00_2510 =
								STRUCT_REF(BgL_tablez00_3255, (int) (((long) 3)));
							if (PROCEDUREP(BgL_eqtz00_2510))
								{	/* Llib/weakhash.scm 339 */
									BgL_testz00_4055 =
										CBOOL(PROCEDURE_ENTRY(BgL_eqtz00_2510) (BgL_eqtz00_2510,
											BgL_keyz00_3256, BgL_bkeyz00_1179, BEOA));
								}
							else
								{	/* Llib/weakhash.scm 339 */
									if (STRINGP(BgL_keyz00_3256))
										{	/* Llib/weakhash.scm 339 */
											if (STRINGP(BgL_bkeyz00_1179))
												{	/* Llib/weakhash.scm 339 */
													BgL_testz00_4055 =
														bigloo_strcmp(BgL_keyz00_3256, BgL_bkeyz00_1179);
												}
											else
												{	/* Llib/weakhash.scm 339 */
													BgL_testz00_4055 = ((bool_t) 0);
												}
										}
									else
										{	/* Llib/weakhash.scm 339 */
											BgL_testz00_4055 =
												BGl_equalzf3zf3zz__r4_equivalence_6_2z00
												(BgL_keyz00_3256, BgL_bkeyz00_1179);
										}
								}
						}
						if (BgL_testz00_4055)
							{	/* Llib/weakhash.scm 339 */
								return BgL_valz00_1180;
							}
						else
							{	/* Llib/weakhash.scm 339 */
								return BGl_keepgoingz00zz__weakhashz00;
							}
					}
				}
			}
		}
	}



/* weak-hashtable-put! */
	BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2putz12z12zz__weakhashz00(obj_t
		BgL_tablez00_61, obj_t BgL_keyz00_62, obj_t BgL_objz00_63)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 366 */
			{	/* Llib/weakhash.scm 367 */
				obj_t BgL_bucketsz00_1199;

				BgL_bucketsz00_1199 = STRUCT_REF(BgL_tablez00_61, (int) (((long) 2)));
				{	/* Llib/weakhash.scm 367 */
					int BgL_bucketzd2lenzd2_1200;

					BgL_bucketzd2lenzd2_1200 = VECTOR_LENGTH(BgL_bucketsz00_1199);
					{	/* Llib/weakhash.scm 368 */
						long BgL_bucketzd2numzd2_1201;

						{	/* Llib/weakhash.scm 369 */
							long BgL_arg2127z00_1229;

							{	/* Llib/weakhash.scm 369 */
								long BgL_res2485z00_2541;

								{	/* Llib/weakhash.scm 369 */
									obj_t BgL_hashnz00_2528;

									BgL_hashnz00_2528 =
										STRUCT_REF(BgL_tablez00_61, (int) (((long) 4)));
									if (PROCEDUREP(BgL_hashnz00_2528))
										{	/* Llib/weakhash.scm 369 */
											obj_t BgL_arg1926z00_2530;

											BgL_arg1926z00_2530 =
												PROCEDURE_ENTRY(BgL_hashnz00_2528) (BgL_hashnz00_2528,
												BgL_keyz00_62, BEOA);
											{	/* Llib/weakhash.scm 369 */
												long BgL_nz00_2535;

												BgL_nz00_2535 = (long) CINT(BgL_arg1926z00_2530);
												if ((BgL_nz00_2535 < ((long) 0)))
													{	/* Llib/weakhash.scm 369 */
														BgL_res2485z00_2541 = NEG(BgL_nz00_2535);
													}
												else
													{	/* Llib/weakhash.scm 369 */
														BgL_res2485z00_2541 = BgL_nz00_2535;
													}
											}
										}
									else
										{	/* Llib/weakhash.scm 369 */
											BgL_res2485z00_2541 =
												BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_62);
										}
								}
								BgL_arg2127z00_1229 = BgL_res2485z00_2541;
							}
							{	/* Llib/weakhash.scm 369 */
								long BgL_auxz00_4083;

								BgL_auxz00_4083 = (long) (BgL_bucketzd2lenzd2_1200);
								BgL_bucketzd2numzd2_1201 =
									(BgL_arg2127z00_1229 % BgL_auxz00_4083);
						}}
						{	/* Llib/weakhash.scm 369 */
							obj_t BgL_bucketz00_1202;

							BgL_bucketz00_1202 =
								VECTOR_REF(BgL_bucketsz00_1199,
								(int) (BgL_bucketzd2numzd2_1201));
							{	/* Llib/weakhash.scm 370 */
								obj_t BgL_maxzd2bucketzd2lenz00_1203;

								BgL_maxzd2bucketzd2lenz00_1203 =
									STRUCT_REF(BgL_tablez00_61, (int) (((long) 1)));
								{	/* Llib/weakhash.scm 371 */
									obj_t BgL_countz00_1204;

									{	/* Llib/weakhash.scm 372 */
										obj_t BgL_cellvalz00_4090;

										BgL_cellvalz00_4090 = BINT(((long) 0));
										BgL_countz00_1204 = MAKE_CELL(BgL_cellvalz00_4090);
									}
									{	/* Llib/weakhash.scm 372 */
										obj_t BgL_foundz00_1205;

										{	/* Llib/weakhash.scm 377 */
											obj_t BgL_zc3anonymousza32122ze3z83_3260;

											{
												int BgL_auxz00_4092;

												BgL_auxz00_4092 = (int) (((long) 4));
												BgL_zc3anonymousza32122ze3z83_3260 =
													MAKE_L_PROCEDURE
													(BGl_zc3anonymousza32122ze3z83zz__weakhashz00,
													BgL_auxz00_4092);
											}
											PROCEDURE_L_SET(BgL_zc3anonymousza32122ze3z83_3260,
												(int) (((long) 0)), BgL_countz00_1204);
											PROCEDURE_L_SET(BgL_zc3anonymousza32122ze3z83_3260,
												(int) (((long) 1)), BgL_objz00_63);
											PROCEDURE_L_SET(BgL_zc3anonymousza32122ze3z83_3260,
												(int) (((long) 2)), BgL_tablez00_61);
											PROCEDURE_L_SET(BgL_zc3anonymousza32122ze3z83_3260,
												(int) (((long) 3)), BgL_keyz00_62);
											BgL_foundz00_1205 =
												BGl_traversezd2bucketszd2zz__weakhashz00
												(BgL_tablez00_61, BgL_bucketsz00_1199,
												BgL_bucketzd2numzd2_1201,
												BgL_zc3anonymousza32122ze3z83_3260);
										}
										{	/* Llib/weakhash.scm 374 */

											if (
												(BgL_foundz00_1205 == BGl_keepgoingz00zz__weakhashz00))
												{	/* Llib/weakhash.scm 388 */
													{	/* Llib/weakhash.scm 391 */
														long BgL_arg2107z00_1207;

														BgL_arg2107z00_1207 =
															(
															(long) CINT(STRUCT_REF(BgL_tablez00_61,
																	(int) (((long) 0)))) + ((long) 1));
														{	/* Llib/weakhash.scm 391 */
															obj_t BgL_auxz00_4112;

															int BgL_auxz00_4110;

															BgL_auxz00_4112 = BINT(BgL_arg2107z00_1207);
															BgL_auxz00_4110 = (int) (((long) 0));
															STRUCT_SET(BgL_tablez00_61, BgL_auxz00_4110,
																BgL_auxz00_4112);
													}}
													{	/* Llib/weakhash.scm 393 */
														obj_t BgL_arg2110z00_1210;

														{	/* Llib/weakhash.scm 393 */
															obj_t BgL_arg2111z00_1211;

															obj_t BgL_arg2112z00_1212;

															{	/* Llib/weakhash.scm 393 */
																obj_t BgL_arg2113z00_1213;

																obj_t BgL_arg2114z00_1214;

																if (BGl_hashtablezd2weakzd2keyszf3zf3zz__hashz00
																	(BgL_tablez00_61))
																	{	/* Llib/weakhash.scm 393 */
																		BgL_arg2113z00_1213 =
																			make_weakptr(BgL_keyz00_62);
																	}
																else
																	{	/* Llib/weakhash.scm 393 */
																		BgL_arg2113z00_1213 = BgL_keyz00_62;
																	}
																if (BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00
																	(BgL_tablez00_61))
																	{	/* Llib/weakhash.scm 396 */
																		BgL_arg2114z00_1214 =
																			make_weakptr(BgL_objz00_63);
																	}
																else
																	{	/* Llib/weakhash.scm 396 */
																		BgL_arg2114z00_1214 = BgL_objz00_63;
																	}
																BgL_arg2111z00_1211 =
																	MAKE_PAIR(BgL_arg2113z00_1213,
																	BgL_arg2114z00_1214);
															}
															BgL_arg2112z00_1212 =
																VECTOR_REF(STRUCT_REF(BgL_tablez00_61,
																	(int) (((long) 2))),
																(int) (BgL_bucketzd2numzd2_1201));
															BgL_arg2110z00_1210 =
																MAKE_PAIR(BgL_arg2111z00_1211,
																BgL_arg2112z00_1212);
														}
														VECTOR_SET(BgL_bucketsz00_1199,
															(int) (BgL_bucketzd2numzd2_1201),
															BgL_arg2110z00_1210);
													}
													if (
														((long) CINT(CELL_REF(BgL_countz00_1204)) >
															(long) CINT(BgL_maxzd2bucketzd2lenz00_1203)))
														{	/* Llib/weakhash.scm 403 */
															BGl_weakzd2hashtablezd2expandz12z12zz__weakhashz00
																(BgL_tablez00_61);
														}
													else
														{	/* Llib/weakhash.scm 403 */
															BFALSE;
														}
													return BgL_objz00_63;
												}
											else
												{	/* Llib/weakhash.scm 388 */
													return BgL_foundz00_1205;
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



/* _weak-hashtable-put! */
	obj_t BGl__weakzd2hashtablezd2putz12z12zz__weakhashz00(obj_t BgL_envz00_3261,
		obj_t BgL_tablez00_3262, obj_t BgL_keyz00_3263, obj_t BgL_objz00_3264)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 366 */
			{	/* Llib/weakhash.scm 367 */
				obj_t BgL_auxz00_4134;

				if (STRUCTP(BgL_tablez00_3262))
					{	/* Llib/weakhash.scm 367 */
						BgL_auxz00_4134 = BgL_tablez00_3262;
					}
				else
					{
						obj_t BgL_auxz00_4137;

						BgL_auxz00_4137 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2544z00zz__weakhashz00,
							BINT(((long) 14403)), BGl_string2555z00zz__weakhashz00,
							BGl_string2546z00zz__weakhashz00, BgL_tablez00_3262);
						FAILURE(BgL_auxz00_4137, BFALSE, BFALSE);
					}
				return
					BGl_weakzd2hashtablezd2putz12z12zz__weakhashz00(BgL_auxz00_4134,
					BgL_keyz00_3263, BgL_objz00_3264);
			}
		}
	}



/* <anonymous:2122> */
	obj_t BGl_zc3anonymousza32122ze3z83zz__weakhashz00(obj_t BgL_envz00_3265,
		obj_t BgL_bkeyz00_3270, obj_t BgL_valz00_3271, obj_t BgL_bucketz00_3272)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 376 */
			{	/* Llib/weakhash.scm 377 */
				obj_t BgL_countz00_3266;

				obj_t BgL_objz00_3267;

				obj_t BgL_tablez00_3268;

				obj_t BgL_keyz00_3269;

				BgL_countz00_3266 =
					PROCEDURE_L_REF(BgL_envz00_3265, (int) (((long) 0)));
				BgL_objz00_3267 = PROCEDURE_L_REF(BgL_envz00_3265, (int) (((long) 1)));
				BgL_tablez00_3268 =
					PROCEDURE_L_REF(BgL_envz00_3265, (int) (((long) 2)));
				BgL_keyz00_3269 = PROCEDURE_L_REF(BgL_envz00_3265, (int) (((long) 3)));
				{
					obj_t BgL_bkeyz00_1220;

					obj_t BgL_valz00_1221;

					obj_t BgL_bucketz00_1222;

					BgL_bkeyz00_1220 = BgL_bkeyz00_3270;
					BgL_valz00_1221 = BgL_valz00_3271;
					BgL_bucketz00_1222 = BgL_bucketz00_3272;
					{	/* Llib/weakhash.scm 377 */
						obj_t BgL_auxz00_3273;

						BgL_auxz00_3273 =
							BINT(((long) CINT(CELL_REF(BgL_countz00_3266)) + ((long) 1)));
						CELL_SET(BgL_countz00_3266, BgL_auxz00_3273);
					}
					{	/* Llib/weakhash.scm 378 */
						bool_t BgL_testz00_4153;

						{	/* Llib/weakhash.scm 378 */
							obj_t BgL_eqtz00_2558;

							BgL_eqtz00_2558 =
								STRUCT_REF(BgL_tablez00_3268, (int) (((long) 3)));
							if (PROCEDUREP(BgL_eqtz00_2558))
								{	/* Llib/weakhash.scm 378 */
									BgL_testz00_4153 =
										CBOOL(PROCEDURE_ENTRY(BgL_eqtz00_2558) (BgL_eqtz00_2558,
											BgL_bkeyz00_1220, BgL_keyz00_3269, BEOA));
								}
							else
								{	/* Llib/weakhash.scm 378 */
									if (STRINGP(BgL_bkeyz00_1220))
										{	/* Llib/weakhash.scm 378 */
											if (STRINGP(BgL_keyz00_3269))
												{	/* Llib/weakhash.scm 378 */
													BgL_testz00_4153 =
														bigloo_strcmp(BgL_bkeyz00_1220, BgL_keyz00_3269);
												}
											else
												{	/* Llib/weakhash.scm 378 */
													BgL_testz00_4153 = ((bool_t) 0);
												}
										}
									else
										{	/* Llib/weakhash.scm 378 */
											BgL_testz00_4153 =
												BGl_equalzf3zf3zz__r4_equivalence_6_2z00
												(BgL_bkeyz00_1220, BgL_keyz00_3269);
										}
								}
						}
						if (BgL_testz00_4153)
							{	/* Llib/weakhash.scm 378 */
								{	/* Llib/weakhash.scm 378 */
									obj_t BgL_arg2124z00_2550;

									obj_t BgL_arg2125z00_2551;

									BgL_arg2124z00_2550 = CAR(BgL_bucketz00_1222);
									if (BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00
										(BgL_tablez00_3268))
										{	/* Llib/weakhash.scm 378 */
											BgL_arg2125z00_2551 = make_weakptr(BgL_objz00_3267);
										}
									else
										{	/* Llib/weakhash.scm 378 */
											BgL_arg2125z00_2551 = BgL_objz00_3267;
										}
									SET_CDR(BgL_arg2124z00_2550, BgL_arg2125z00_2551);
								}
								return BgL_valz00_1221;
							}
						else
							{	/* Llib/weakhash.scm 378 */
								return BGl_keepgoingz00zz__weakhashz00;
							}
					}
				}
			}
		}
	}



/* weak-hashtable-update! */
	BGL_EXPORTED_DEF obj_t
		BGl_weakzd2hashtablezd2updatez12z12zz__weakhashz00(obj_t BgL_tablez00_64,
		obj_t BgL_keyz00_65, obj_t BgL_procz00_66, obj_t BgL_objz00_67)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 410 */
			{	/* Llib/weakhash.scm 411 */
				obj_t BgL_bucketsz00_1230;

				BgL_bucketsz00_1230 = STRUCT_REF(BgL_tablez00_64, (int) (((long) 2)));
				{	/* Llib/weakhash.scm 411 */
					int BgL_bucketzd2lenzd2_1231;

					BgL_bucketzd2lenzd2_1231 = VECTOR_LENGTH(BgL_bucketsz00_1230);
					{	/* Llib/weakhash.scm 412 */
						long BgL_bucketzd2numzd2_1232;

						{	/* Llib/weakhash.scm 413 */
							long BgL_arg2150z00_1261;

							{	/* Llib/weakhash.scm 413 */
								long BgL_res2487z00_2615;

								{	/* Llib/weakhash.scm 413 */
									obj_t BgL_hashnz00_2602;

									BgL_hashnz00_2602 =
										STRUCT_REF(BgL_tablez00_64, (int) (((long) 4)));
									if (PROCEDUREP(BgL_hashnz00_2602))
										{	/* Llib/weakhash.scm 413 */
											obj_t BgL_arg1926z00_2604;

											BgL_arg1926z00_2604 =
												PROCEDURE_ENTRY(BgL_hashnz00_2602) (BgL_hashnz00_2602,
												BgL_keyz00_65, BEOA);
											{	/* Llib/weakhash.scm 413 */
												long BgL_nz00_2609;

												BgL_nz00_2609 = (long) CINT(BgL_arg1926z00_2604);
												if ((BgL_nz00_2609 < ((long) 0)))
													{	/* Llib/weakhash.scm 413 */
														BgL_res2487z00_2615 = NEG(BgL_nz00_2609);
													}
												else
													{	/* Llib/weakhash.scm 413 */
														BgL_res2487z00_2615 = BgL_nz00_2609;
													}
											}
										}
									else
										{	/* Llib/weakhash.scm 413 */
											BgL_res2487z00_2615 =
												BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_65);
										}
								}
								BgL_arg2150z00_1261 = BgL_res2487z00_2615;
							}
							{	/* Llib/weakhash.scm 413 */
								long BgL_auxz00_4186;

								BgL_auxz00_4186 = (long) (BgL_bucketzd2lenzd2_1231);
								BgL_bucketzd2numzd2_1232 =
									(BgL_arg2150z00_1261 % BgL_auxz00_4186);
						}}
						{	/* Llib/weakhash.scm 413 */
							obj_t BgL_bucketz00_1233;

							BgL_bucketz00_1233 =
								VECTOR_REF(BgL_bucketsz00_1230,
								(int) (BgL_bucketzd2numzd2_1232));
							{	/* Llib/weakhash.scm 414 */
								obj_t BgL_maxzd2bucketzd2lenz00_1234;

								BgL_maxzd2bucketzd2lenz00_1234 =
									STRUCT_REF(BgL_tablez00_64, (int) (((long) 1)));
								{	/* Llib/weakhash.scm 415 */
									obj_t BgL_countz00_1235;

									{	/* Llib/weakhash.scm 416 */
										obj_t BgL_cellvalz00_4193;

										BgL_cellvalz00_4193 = BINT(((long) 0));
										BgL_countz00_1235 = MAKE_CELL(BgL_cellvalz00_4193);
									}
									{	/* Llib/weakhash.scm 416 */
										obj_t BgL_foundz00_1236;

										{	/* Llib/weakhash.scm 421 */
											obj_t BgL_zc3anonymousza32145ze3z83_3274;

											{
												int BgL_auxz00_4195;

												BgL_auxz00_4195 = (int) (((long) 4));
												BgL_zc3anonymousza32145ze3z83_3274 =
													MAKE_L_PROCEDURE
													(BGl_zc3anonymousza32145ze3z83zz__weakhashz00,
													BgL_auxz00_4195);
											}
											PROCEDURE_L_SET(BgL_zc3anonymousza32145ze3z83_3274,
												(int) (((long) 0)), BgL_countz00_1235);
											PROCEDURE_L_SET(BgL_zc3anonymousza32145ze3z83_3274,
												(int) (((long) 1)), BgL_procz00_66);
											PROCEDURE_L_SET(BgL_zc3anonymousza32145ze3z83_3274,
												(int) (((long) 2)), BgL_tablez00_64);
											PROCEDURE_L_SET(BgL_zc3anonymousza32145ze3z83_3274,
												(int) (((long) 3)), BgL_keyz00_65);
											BgL_foundz00_1236 =
												BGl_traversezd2bucketszd2zz__weakhashz00
												(BgL_tablez00_64, BgL_bucketsz00_1230,
												BgL_bucketzd2numzd2_1232,
												BgL_zc3anonymousza32145ze3z83_3274);
										}
										{	/* Llib/weakhash.scm 418 */

											if (
												(BgL_foundz00_1236 == BGl_keepgoingz00zz__weakhashz00))
												{	/* Llib/weakhash.scm 432 */
													{	/* Llib/weakhash.scm 435 */
														long BgL_arg2130z00_1238;

														BgL_arg2130z00_1238 =
															(
															(long) CINT(STRUCT_REF(BgL_tablez00_64,
																	(int) (((long) 0)))) + ((long) 1));
														{	/* Llib/weakhash.scm 435 */
															obj_t BgL_auxz00_4215;

															int BgL_auxz00_4213;

															BgL_auxz00_4215 = BINT(BgL_arg2130z00_1238);
															BgL_auxz00_4213 = (int) (((long) 0));
															STRUCT_SET(BgL_tablez00_64, BgL_auxz00_4213,
																BgL_auxz00_4215);
													}}
													{	/* Llib/weakhash.scm 437 */
														obj_t BgL_arg2133z00_1241;

														{	/* Llib/weakhash.scm 437 */
															obj_t BgL_arg2134z00_1242;

															obj_t BgL_arg2135z00_1243;

															{	/* Llib/weakhash.scm 437 */
																obj_t BgL_arg2136z00_1244;

																obj_t BgL_arg2137z00_1245;

																if (BGl_hashtablezd2weakzd2keyszf3zf3zz__hashz00
																	(BgL_tablez00_64))
																	{	/* Llib/weakhash.scm 437 */
																		BgL_arg2136z00_1244 =
																			make_weakptr(BgL_keyz00_65);
																	}
																else
																	{	/* Llib/weakhash.scm 437 */
																		BgL_arg2136z00_1244 = BgL_keyz00_65;
																	}
																if (BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00
																	(BgL_tablez00_64))
																	{	/* Llib/weakhash.scm 440 */
																		BgL_arg2137z00_1245 =
																			make_weakptr(BgL_objz00_67);
																	}
																else
																	{	/* Llib/weakhash.scm 440 */
																		BgL_arg2137z00_1245 = BgL_objz00_67;
																	}
																BgL_arg2134z00_1242 =
																	MAKE_PAIR(BgL_arg2136z00_1244,
																	BgL_arg2137z00_1245);
															}
															BgL_arg2135z00_1243 =
																VECTOR_REF(STRUCT_REF(BgL_tablez00_64,
																	(int) (((long) 2))),
																(int) (BgL_bucketzd2numzd2_1232));
															BgL_arg2133z00_1241 =
																MAKE_PAIR(BgL_arg2134z00_1242,
																BgL_arg2135z00_1243);
														}
														VECTOR_SET(BgL_bucketsz00_1230,
															(int) (BgL_bucketzd2numzd2_1232),
															BgL_arg2133z00_1241);
													}
													if (
														((long) CINT(CELL_REF(BgL_countz00_1235)) >
															(long) CINT(BgL_maxzd2bucketzd2lenz00_1234)))
														{	/* Llib/weakhash.scm 447 */
															BGl_weakzd2hashtablezd2expandz12z12zz__weakhashz00
																(BgL_tablez00_64);
														}
													else
														{	/* Llib/weakhash.scm 447 */
															BFALSE;
														}
													return BgL_objz00_67;
												}
											else
												{	/* Llib/weakhash.scm 432 */
													return BgL_foundz00_1236;
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



/* _weak-hashtable-update! */
	obj_t BGl__weakzd2hashtablezd2updatez12z12zz__weakhashz00(obj_t
		BgL_envz00_3275, obj_t BgL_tablez00_3276, obj_t BgL_keyz00_3277,
		obj_t BgL_procz00_3278, obj_t BgL_objz00_3279)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 410 */
			{	/* Llib/weakhash.scm 411 */
				obj_t BgL_auxz00_4244;

				obj_t BgL_auxz00_4237;

				if (PROCEDUREP(BgL_procz00_3278))
					{	/* Llib/weakhash.scm 411 */
						BgL_auxz00_4244 = BgL_procz00_3278;
					}
				else
					{
						obj_t BgL_auxz00_4247;

						BgL_auxz00_4247 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2544z00zz__weakhashz00,
							BINT(((long) 15993)), BGl_string2556z00zz__weakhashz00,
							BGl_string2550z00zz__weakhashz00, BgL_procz00_3278);
						FAILURE(BgL_auxz00_4247, BFALSE, BFALSE);
					}
				if (STRUCTP(BgL_tablez00_3276))
					{	/* Llib/weakhash.scm 411 */
						BgL_auxz00_4237 = BgL_tablez00_3276;
					}
				else
					{
						obj_t BgL_auxz00_4240;

						BgL_auxz00_4240 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2544z00zz__weakhashz00,
							BINT(((long) 15993)), BGl_string2556z00zz__weakhashz00,
							BGl_string2546z00zz__weakhashz00, BgL_tablez00_3276);
						FAILURE(BgL_auxz00_4240, BFALSE, BFALSE);
					}
				return
					BGl_weakzd2hashtablezd2updatez12z12zz__weakhashz00(BgL_auxz00_4237,
					BgL_keyz00_3277, BgL_auxz00_4244, BgL_objz00_3279);
			}
		}
	}



/* <anonymous:2145> */
	obj_t BGl_zc3anonymousza32145ze3z83zz__weakhashz00(obj_t BgL_envz00_3280,
		obj_t BgL_bkeyz00_3285, obj_t BgL_valz00_3286, obj_t BgL_bucketz00_3287)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 420 */
			{	/* Llib/weakhash.scm 421 */
				obj_t BgL_countz00_3281;

				obj_t BgL_procz00_3282;

				obj_t BgL_tablez00_3283;

				obj_t BgL_keyz00_3284;

				BgL_countz00_3281 =
					PROCEDURE_L_REF(BgL_envz00_3280, (int) (((long) 0)));
				BgL_procz00_3282 = PROCEDURE_L_REF(BgL_envz00_3280, (int) (((long) 1)));
				BgL_tablez00_3283 =
					PROCEDURE_L_REF(BgL_envz00_3280, (int) (((long) 2)));
				BgL_keyz00_3284 = PROCEDURE_L_REF(BgL_envz00_3280, (int) (((long) 3)));
				{
					obj_t BgL_bkeyz00_1251;

					obj_t BgL_valz00_1252;

					obj_t BgL_bucketz00_1253;

					BgL_bkeyz00_1251 = BgL_bkeyz00_3285;
					BgL_valz00_1252 = BgL_valz00_3286;
					BgL_bucketz00_1253 = BgL_bucketz00_3287;
					{	/* Llib/weakhash.scm 421 */
						obj_t BgL_auxz00_3288;

						BgL_auxz00_3288 =
							BINT(((long) CINT(CELL_REF(BgL_countz00_3281)) + ((long) 1)));
						CELL_SET(BgL_countz00_3281, BgL_auxz00_3288);
					}
					{	/* Llib/weakhash.scm 422 */
						bool_t BgL_testz00_4263;

						{	/* Llib/weakhash.scm 422 */
							obj_t BgL_eqtz00_2633;

							BgL_eqtz00_2633 =
								STRUCT_REF(BgL_tablez00_3283, (int) (((long) 3)));
							if (PROCEDUREP(BgL_eqtz00_2633))
								{	/* Llib/weakhash.scm 422 */
									BgL_testz00_4263 =
										CBOOL(PROCEDURE_ENTRY(BgL_eqtz00_2633) (BgL_eqtz00_2633,
											BgL_bkeyz00_1251, BgL_keyz00_3284, BEOA));
								}
							else
								{	/* Llib/weakhash.scm 422 */
									if (STRINGP(BgL_bkeyz00_1251))
										{	/* Llib/weakhash.scm 422 */
											if (STRINGP(BgL_keyz00_3284))
												{	/* Llib/weakhash.scm 422 */
													BgL_testz00_4263 =
														bigloo_strcmp(BgL_bkeyz00_1251, BgL_keyz00_3284);
												}
											else
												{	/* Llib/weakhash.scm 422 */
													BgL_testz00_4263 = ((bool_t) 0);
												}
										}
									else
										{	/* Llib/weakhash.scm 422 */
											BgL_testz00_4263 =
												BGl_equalzf3zf3zz__r4_equivalence_6_2z00
												(BgL_bkeyz00_1251, BgL_keyz00_3284);
										}
								}
						}
						if (BgL_testz00_4263)
							{	/* Llib/weakhash.scm 422 */
								obj_t BgL_newvalz00_2624;

								BgL_newvalz00_2624 =
									PROCEDURE_ENTRY(BgL_procz00_3282) (BgL_procz00_3282,
									BgL_valz00_1252, BEOA);
								{	/* Llib/weakhash.scm 422 */
									obj_t BgL_arg2147z00_2625;

									obj_t BgL_arg2148z00_2626;

									BgL_arg2147z00_2625 = CAR(BgL_bucketz00_1253);
									if (BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00
										(BgL_tablez00_3283))
										{	/* Llib/weakhash.scm 422 */
											BgL_arg2148z00_2626 = make_weakptr(BgL_newvalz00_2624);
										}
									else
										{	/* Llib/weakhash.scm 422 */
											BgL_arg2148z00_2626 = BgL_newvalz00_2624;
										}
									SET_CDR(BgL_arg2147z00_2625, BgL_arg2148z00_2626);
								}
								return BgL_newvalz00_2624;
							}
						else
							{	/* Llib/weakhash.scm 422 */
								return BGl_keepgoingz00zz__weakhashz00;
							}
					}
				}
			}
		}
	}



/* weak-hashtable-add! */
	BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2addz12z12zz__weakhashz00(obj_t
		BgL_tablez00_68, obj_t BgL_keyz00_69, obj_t BgL_procz00_70,
		obj_t BgL_objz00_71, obj_t BgL_initz00_72)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 454 */
			{	/* Llib/weakhash.scm 455 */
				obj_t BgL_bucketsz00_1262;

				BgL_bucketsz00_1262 = STRUCT_REF(BgL_tablez00_68, (int) (((long) 2)));
				{	/* Llib/weakhash.scm 455 */
					int BgL_bucketzd2lenzd2_1263;

					BgL_bucketzd2lenzd2_1263 = VECTOR_LENGTH(BgL_bucketsz00_1262);
					{	/* Llib/weakhash.scm 456 */
						long BgL_bucketzd2numzd2_1264;

						{	/* Llib/weakhash.scm 457 */
							long BgL_arg2171z00_1295;

							{	/* Llib/weakhash.scm 457 */
								long BgL_res2489z00_2690;

								{	/* Llib/weakhash.scm 457 */
									obj_t BgL_hashnz00_2677;

									BgL_hashnz00_2677 =
										STRUCT_REF(BgL_tablez00_68, (int) (((long) 4)));
									if (PROCEDUREP(BgL_hashnz00_2677))
										{	/* Llib/weakhash.scm 457 */
											obj_t BgL_arg1926z00_2679;

											BgL_arg1926z00_2679 =
												PROCEDURE_ENTRY(BgL_hashnz00_2677) (BgL_hashnz00_2677,
												BgL_keyz00_69, BEOA);
											{	/* Llib/weakhash.scm 457 */
												long BgL_nz00_2684;

												BgL_nz00_2684 = (long) CINT(BgL_arg1926z00_2679);
												if ((BgL_nz00_2684 < ((long) 0)))
													{	/* Llib/weakhash.scm 457 */
														BgL_res2489z00_2690 = NEG(BgL_nz00_2684);
													}
												else
													{	/* Llib/weakhash.scm 457 */
														BgL_res2489z00_2690 = BgL_nz00_2684;
													}
											}
										}
									else
										{	/* Llib/weakhash.scm 457 */
											BgL_res2489z00_2690 =
												BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_69);
										}
								}
								BgL_arg2171z00_1295 = BgL_res2489z00_2690;
							}
							{	/* Llib/weakhash.scm 457 */
								long BgL_auxz00_4298;

								BgL_auxz00_4298 = (long) (BgL_bucketzd2lenzd2_1263);
								BgL_bucketzd2numzd2_1264 =
									(BgL_arg2171z00_1295 % BgL_auxz00_4298);
						}}
						{	/* Llib/weakhash.scm 457 */
							obj_t BgL_bucketz00_1265;

							BgL_bucketz00_1265 =
								VECTOR_REF(BgL_bucketsz00_1262,
								(int) (BgL_bucketzd2numzd2_1264));
							{	/* Llib/weakhash.scm 458 */
								obj_t BgL_maxzd2bucketzd2lenz00_1266;

								BgL_maxzd2bucketzd2lenz00_1266 =
									STRUCT_REF(BgL_tablez00_68, (int) (((long) 1)));
								{	/* Llib/weakhash.scm 459 */
									obj_t BgL_countz00_1267;

									{	/* Llib/weakhash.scm 460 */
										obj_t BgL_cellvalz00_4305;

										BgL_cellvalz00_4305 = BINT(((long) 0));
										BgL_countz00_1267 = MAKE_CELL(BgL_cellvalz00_4305);
									}
									{	/* Llib/weakhash.scm 460 */
										obj_t BgL_foundz00_1268;

										{	/* Llib/weakhash.scm 465 */
											obj_t BgL_zc3anonymousza32166ze3z83_3289;

											{
												int BgL_auxz00_4307;

												BgL_auxz00_4307 = (int) (((long) 4));
												BgL_zc3anonymousza32166ze3z83_3289 =
													MAKE_L_PROCEDURE
													(BGl_zc3anonymousza32166ze3z83zz__weakhashz00,
													BgL_auxz00_4307);
											}
											PROCEDURE_L_SET(BgL_zc3anonymousza32166ze3z83_3289,
												(int) (((long) 0)), BgL_countz00_1267);
											PROCEDURE_L_SET(BgL_zc3anonymousza32166ze3z83_3289,
												(int) (((long) 1)), BgL_procz00_70);
											PROCEDURE_L_SET(BgL_zc3anonymousza32166ze3z83_3289,
												(int) (((long) 2)), BgL_tablez00_68);
											PROCEDURE_L_SET(BgL_zc3anonymousza32166ze3z83_3289,
												(int) (((long) 3)), BgL_keyz00_69);
											BgL_foundz00_1268 =
												BGl_traversezd2bucketszd2zz__weakhashz00
												(BgL_tablez00_68, BgL_bucketsz00_1262,
												BgL_bucketzd2numzd2_1264,
												BgL_zc3anonymousza32166ze3z83_3289);
										}
										{	/* Llib/weakhash.scm 462 */

											if (
												(BgL_foundz00_1268 == BGl_keepgoingz00zz__weakhashz00))
												{	/* Llib/weakhash.scm 478 */
													obj_t BgL_vz00_1270;

													if (BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00
														(BgL_tablez00_68))
														{	/* Llib/weakhash.scm 479 */
															obj_t BgL_arg2163z00_1282;

															obj_t BgL_arg2164z00_1283;

															BgL_arg2163z00_1282 = make_weakptr(BgL_objz00_71);
															BgL_arg2164z00_1283 =
																make_weakptr(BgL_initz00_72);
															BgL_vz00_1270 =
																PROCEDURE_ENTRY(BgL_procz00_70) (BgL_procz00_70,
																BgL_arg2163z00_1282, BgL_arg2164z00_1283, BEOA);
														}
													else
														{	/* Llib/weakhash.scm 478 */
															BgL_vz00_1270 =
																PROCEDURE_ENTRY(BgL_procz00_70) (BgL_procz00_70,
																BgL_objz00_71, BgL_initz00_72, BEOA);
														}
													{	/* Llib/weakhash.scm 481 */
														long BgL_arg2152z00_1271;

														BgL_arg2152z00_1271 =
															(
															(long) CINT(STRUCT_REF(BgL_tablez00_68,
																	(int) (((long) 0)))) + ((long) 1));
														{	/* Llib/weakhash.scm 481 */
															obj_t BgL_auxz00_4335;

															int BgL_auxz00_4333;

															BgL_auxz00_4335 = BINT(BgL_arg2152z00_1271);
															BgL_auxz00_4333 = (int) (((long) 0));
															STRUCT_SET(BgL_tablez00_68, BgL_auxz00_4333,
																BgL_auxz00_4335);
													}}
													{	/* Llib/weakhash.scm 483 */
														obj_t BgL_arg2155z00_1274;

														{	/* Llib/weakhash.scm 483 */
															obj_t BgL_arg2156z00_1275;

															obj_t BgL_arg2157z00_1276;

															{	/* Llib/weakhash.scm 483 */
																obj_t BgL_arg2158z00_1277;

																if (BGl_hashtablezd2weakzd2keyszf3zf3zz__hashz00
																	(BgL_tablez00_68))
																	{	/* Llib/weakhash.scm 483 */
																		BgL_arg2158z00_1277 =
																			make_weakptr(BgL_keyz00_69);
																	}
																else
																	{	/* Llib/weakhash.scm 483 */
																		BgL_arg2158z00_1277 = BgL_keyz00_69;
																	}
																BgL_arg2156z00_1275 =
																	MAKE_PAIR(BgL_arg2158z00_1277, BgL_vz00_1270);
															}
															BgL_arg2157z00_1276 =
																VECTOR_REF(STRUCT_REF(BgL_tablez00_68,
																	(int) (((long) 2))),
																(int) (BgL_bucketzd2numzd2_1264));
															BgL_arg2155z00_1274 =
																MAKE_PAIR(BgL_arg2156z00_1275,
																BgL_arg2157z00_1276);
														}
														VECTOR_SET(BgL_bucketsz00_1262,
															(int) (BgL_bucketzd2numzd2_1264),
															BgL_arg2155z00_1274);
													}
													if (
														((long) CINT(CELL_REF(BgL_countz00_1267)) >
															(long) CINT(BgL_maxzd2bucketzd2lenz00_1266)))
														{	/* Llib/weakhash.scm 491 */
															BGl_weakzd2hashtablezd2expandz12z12zz__weakhashz00
																(BgL_tablez00_68);
														}
													else
														{	/* Llib/weakhash.scm 491 */
															BFALSE;
														}
													return BgL_vz00_1270;
												}
											else
												{	/* Llib/weakhash.scm 476 */
													return BgL_foundz00_1268;
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



/* _weak-hashtable-add! */
	obj_t BGl__weakzd2hashtablezd2addz12z12zz__weakhashz00(obj_t BgL_envz00_3290,
		obj_t BgL_tablez00_3291, obj_t BgL_keyz00_3292, obj_t BgL_procz00_3293,
		obj_t BgL_objz00_3294, obj_t BgL_initz00_3295)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 454 */
			{	/* Llib/weakhash.scm 455 */
				obj_t BgL_auxz00_4361;

				obj_t BgL_auxz00_4354;

				if (PROCEDUREP(BgL_procz00_3293))
					{	/* Llib/weakhash.scm 455 */
						BgL_auxz00_4361 = BgL_procz00_3293;
					}
				else
					{
						obj_t BgL_auxz00_4364;

						BgL_auxz00_4364 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2544z00zz__weakhashz00,
							BINT(((long) 17614)), BGl_string2557z00zz__weakhashz00,
							BGl_string2550z00zz__weakhashz00, BgL_procz00_3293);
						FAILURE(BgL_auxz00_4364, BFALSE, BFALSE);
					}
				if (STRUCTP(BgL_tablez00_3291))
					{	/* Llib/weakhash.scm 455 */
						BgL_auxz00_4354 = BgL_tablez00_3291;
					}
				else
					{
						obj_t BgL_auxz00_4357;

						BgL_auxz00_4357 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2544z00zz__weakhashz00,
							BINT(((long) 17614)), BGl_string2557z00zz__weakhashz00,
							BGl_string2546z00zz__weakhashz00, BgL_tablez00_3291);
						FAILURE(BgL_auxz00_4357, BFALSE, BFALSE);
					}
				return
					BGl_weakzd2hashtablezd2addz12z12zz__weakhashz00(BgL_auxz00_4354,
					BgL_keyz00_3292, BgL_auxz00_4361, BgL_objz00_3294, BgL_initz00_3295);
			}
		}
	}



/* <anonymous:2166> */
	obj_t BGl_zc3anonymousza32166ze3z83zz__weakhashz00(obj_t BgL_envz00_3296,
		obj_t BgL_bkeyz00_3301, obj_t BgL_valz00_3302, obj_t BgL_bucketz00_3303)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 464 */
			{	/* Llib/weakhash.scm 465 */
				obj_t BgL_countz00_3297;

				obj_t BgL_procz00_3298;

				obj_t BgL_tablez00_3299;

				obj_t BgL_keyz00_3300;

				BgL_countz00_3297 =
					PROCEDURE_L_REF(BgL_envz00_3296, (int) (((long) 0)));
				BgL_procz00_3298 = PROCEDURE_L_REF(BgL_envz00_3296, (int) (((long) 1)));
				BgL_tablez00_3299 =
					PROCEDURE_L_REF(BgL_envz00_3296, (int) (((long) 2)));
				BgL_keyz00_3300 = PROCEDURE_L_REF(BgL_envz00_3296, (int) (((long) 3)));
				{
					obj_t BgL_bkeyz00_1285;

					obj_t BgL_valz00_1286;

					obj_t BgL_bucketz00_1287;

					BgL_bkeyz00_1285 = BgL_bkeyz00_3301;
					BgL_valz00_1286 = BgL_valz00_3302;
					BgL_bucketz00_1287 = BgL_bucketz00_3303;
					{	/* Llib/weakhash.scm 465 */
						obj_t BgL_auxz00_3304;

						BgL_auxz00_3304 =
							BINT(((long) CINT(CELL_REF(BgL_countz00_3297)) + ((long) 1)));
						CELL_SET(BgL_countz00_3297, BgL_auxz00_3304);
					}
					{	/* Llib/weakhash.scm 466 */
						bool_t BgL_testz00_4380;

						{	/* Llib/weakhash.scm 466 */
							obj_t BgL_eqtz00_2708;

							BgL_eqtz00_2708 =
								STRUCT_REF(BgL_tablez00_3299, (int) (((long) 3)));
							if (PROCEDUREP(BgL_eqtz00_2708))
								{	/* Llib/weakhash.scm 466 */
									BgL_testz00_4380 =
										CBOOL(PROCEDURE_ENTRY(BgL_eqtz00_2708) (BgL_eqtz00_2708,
											BgL_bkeyz00_1285, BgL_keyz00_3300, BEOA));
								}
							else
								{	/* Llib/weakhash.scm 466 */
									if (STRINGP(BgL_bkeyz00_1285))
										{	/* Llib/weakhash.scm 466 */
											if (STRINGP(BgL_keyz00_3300))
												{	/* Llib/weakhash.scm 466 */
													BgL_testz00_4380 =
														bigloo_strcmp(BgL_bkeyz00_1285, BgL_keyz00_3300);
												}
											else
												{	/* Llib/weakhash.scm 466 */
													BgL_testz00_4380 = ((bool_t) 0);
												}
										}
									else
										{	/* Llib/weakhash.scm 466 */
											BgL_testz00_4380 =
												BGl_equalzf3zf3zz__r4_equivalence_6_2z00
												(BgL_bkeyz00_1285, BgL_keyz00_3300);
										}
								}
						}
						if (BgL_testz00_4380)
							{	/* Llib/weakhash.scm 466 */
								obj_t BgL_newvalz00_2699;

								BgL_newvalz00_2699 =
									PROCEDURE_ENTRY(BgL_procz00_3298) (BgL_procz00_3298,
									BgL_valz00_1286, BEOA);
								{	/* Llib/weakhash.scm 466 */
									obj_t BgL_arg2168z00_2700;

									obj_t BgL_arg2169z00_2701;

									BgL_arg2168z00_2700 = CAR(BgL_bucketz00_1287);
									if (BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00
										(BgL_tablez00_3299))
										{	/* Llib/weakhash.scm 466 */
											BgL_arg2169z00_2701 = make_weakptr(BgL_newvalz00_2699);
										}
									else
										{	/* Llib/weakhash.scm 466 */
											BgL_arg2169z00_2701 = BgL_newvalz00_2699;
										}
									SET_CDR(BgL_arg2168z00_2700, BgL_arg2169z00_2701);
								}
								return BgL_newvalz00_2699;
							}
						else
							{	/* Llib/weakhash.scm 466 */
								return BGl_keepgoingz00zz__weakhashz00;
							}
					}
				}
			}
		}
	}



/* weak-hashtable-remove! */
	BGL_EXPORTED_DEF obj_t
		BGl_weakzd2hashtablezd2removez12z12zz__weakhashz00(obj_t BgL_tablez00_73,
		obj_t BgL_keyz00_74)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 498 */
			{	/* Llib/weakhash.scm 499 */
				obj_t BgL_bucketsz00_1296;

				BgL_bucketsz00_1296 = STRUCT_REF(BgL_tablez00_73, (int) (((long) 2)));
				{	/* Llib/weakhash.scm 499 */
					int BgL_bucketzd2lenzd2_1297;

					BgL_bucketzd2lenzd2_1297 = VECTOR_LENGTH(BgL_bucketsz00_1296);
					{	/* Llib/weakhash.scm 500 */
						long BgL_bucketzd2numzd2_1298;

						{	/* Llib/weakhash.scm 501 */
							long BgL_arg2176z00_1309;

							{	/* Llib/weakhash.scm 501 */
								long BgL_res2491z00_2766;

								{	/* Llib/weakhash.scm 501 */
									obj_t BgL_hashnz00_2753;

									BgL_hashnz00_2753 =
										STRUCT_REF(BgL_tablez00_73, (int) (((long) 4)));
									if (PROCEDUREP(BgL_hashnz00_2753))
										{	/* Llib/weakhash.scm 501 */
											obj_t BgL_arg1926z00_2755;

											BgL_arg1926z00_2755 =
												PROCEDURE_ENTRY(BgL_hashnz00_2753) (BgL_hashnz00_2753,
												BgL_keyz00_74, BEOA);
											{	/* Llib/weakhash.scm 501 */
												long BgL_nz00_2760;

												BgL_nz00_2760 = (long) CINT(BgL_arg1926z00_2755);
												if ((BgL_nz00_2760 < ((long) 0)))
													{	/* Llib/weakhash.scm 501 */
														BgL_res2491z00_2766 = NEG(BgL_nz00_2760);
													}
												else
													{	/* Llib/weakhash.scm 501 */
														BgL_res2491z00_2766 = BgL_nz00_2760;
													}
											}
										}
									else
										{	/* Llib/weakhash.scm 501 */
											BgL_res2491z00_2766 =
												BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_74);
										}
								}
								BgL_arg2176z00_1309 = BgL_res2491z00_2766;
							}
							{	/* Llib/weakhash.scm 501 */
								long BgL_auxz00_4415;

								BgL_auxz00_4415 = (long) (BgL_bucketzd2lenzd2_1297);
								BgL_bucketzd2numzd2_1298 =
									(BgL_arg2176z00_1309 % BgL_auxz00_4415);
						}}
						{	/* Llib/weakhash.scm 501 */
							obj_t BgL_bucketz00_1299;

							BgL_bucketz00_1299 =
								VECTOR_REF(BgL_bucketsz00_1296,
								(int) (BgL_bucketzd2numzd2_1298));
							{	/* Llib/weakhash.scm 502 */
								obj_t BgL_foundz00_1300;

								{	/* Llib/weakhash.scm 506 */
									obj_t BgL_zc3anonymousza32174ze3z83_3305;

									{
										int BgL_auxz00_4420;

										BgL_auxz00_4420 = (int) (((long) 2));
										BgL_zc3anonymousza32174ze3z83_3305 =
											MAKE_L_PROCEDURE
											(BGl_zc3anonymousza32174ze3z83zz__weakhashz00,
											BgL_auxz00_4420);
									}
									PROCEDURE_L_SET(BgL_zc3anonymousza32174ze3z83_3305,
										(int) (((long) 0)), BgL_tablez00_73);
									PROCEDURE_L_SET(BgL_zc3anonymousza32174ze3z83_3305,
										(int) (((long) 1)), BgL_keyz00_74);
									BgL_foundz00_1300 =
										BGl_traversezd2bucketszd2zz__weakhashz00(BgL_tablez00_73,
										BgL_bucketsz00_1296, BgL_bucketzd2numzd2_1298,
										BgL_zc3anonymousza32174ze3z83_3305);
								}
								{	/* Llib/weakhash.scm 503 */

									if ((BgL_foundz00_1300 == BGl_keepgoingz00zz__weakhashz00))
										{	/* Llib/weakhash.scm 509 */
											return BFALSE;
										}
									else
										{	/* Llib/weakhash.scm 509 */
											return BTRUE;
										}
								}
							}
						}
					}
				}
			}
		}
	}



/* _weak-hashtable-remove! */
	obj_t BGl__weakzd2hashtablezd2removez12z12zz__weakhashz00(obj_t
		BgL_envz00_3306, obj_t BgL_tablez00_3307, obj_t BgL_keyz00_3308)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 498 */
			{	/* Llib/weakhash.scm 499 */
				obj_t BgL_auxz00_4430;

				if (STRUCTP(BgL_tablez00_3307))
					{	/* Llib/weakhash.scm 499 */
						BgL_auxz00_4430 = BgL_tablez00_3307;
					}
				else
					{
						obj_t BgL_auxz00_4433;

						BgL_auxz00_4433 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2544z00zz__weakhashz00,
							BINT(((long) 19260)), BGl_string2558z00zz__weakhashz00,
							BGl_string2546z00zz__weakhashz00, BgL_tablez00_3307);
						FAILURE(BgL_auxz00_4433, BFALSE, BFALSE);
					}
				return
					BGl_weakzd2hashtablezd2removez12z12zz__weakhashz00(BgL_auxz00_4430,
					BgL_keyz00_3308);
			}
		}
	}



/* <anonymous:2174> */
	obj_t BGl_zc3anonymousza32174ze3z83zz__weakhashz00(obj_t BgL_envz00_3309,
		obj_t BgL_bkeyz00_3312, obj_t BgL_valz00_3313, obj_t BgL_bucketz00_3314)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 505 */
			{	/* Llib/weakhash.scm 506 */
				obj_t BgL_tablez00_3310;

				obj_t BgL_keyz00_3311;

				BgL_tablez00_3310 =
					PROCEDURE_L_REF(BgL_envz00_3309, (int) (((long) 0)));
				BgL_keyz00_3311 = PROCEDURE_L_REF(BgL_envz00_3309, (int) (((long) 1)));
				{
					obj_t BgL_bkeyz00_1303;

					obj_t BgL_valz00_1304;

					obj_t BgL_bucketz00_1305;

					BgL_bkeyz00_1303 = BgL_bkeyz00_3312;
					BgL_valz00_1304 = BgL_valz00_3313;
					BgL_bucketz00_1305 = BgL_bucketz00_3314;
					{	/* Llib/weakhash.scm 506 */
						bool_t BgL_testz00_4442;

						{	/* Llib/weakhash.scm 506 */
							obj_t BgL_eqtz00_2775;

							BgL_eqtz00_2775 =
								STRUCT_REF(BgL_tablez00_3310, (int) (((long) 3)));
							if (PROCEDUREP(BgL_eqtz00_2775))
								{	/* Llib/weakhash.scm 506 */
									BgL_testz00_4442 =
										CBOOL(PROCEDURE_ENTRY(BgL_eqtz00_2775) (BgL_eqtz00_2775,
											BgL_keyz00_3311, BgL_bkeyz00_1303, BEOA));
								}
							else
								{	/* Llib/weakhash.scm 506 */
									if (STRINGP(BgL_keyz00_3311))
										{	/* Llib/weakhash.scm 506 */
											if (STRINGP(BgL_bkeyz00_1303))
												{	/* Llib/weakhash.scm 506 */
													BgL_testz00_4442 =
														bigloo_strcmp(BgL_keyz00_3311, BgL_bkeyz00_1303);
												}
											else
												{	/* Llib/weakhash.scm 506 */
													BgL_testz00_4442 = ((bool_t) 0);
												}
										}
									else
										{	/* Llib/weakhash.scm 506 */
											BgL_testz00_4442 =
												BGl_equalzf3zf3zz__r4_equivalence_6_2z00
												(BgL_keyz00_3311, BgL_bkeyz00_1303);
										}
								}
						}
						if (BgL_testz00_4442)
							{	/* Llib/weakhash.scm 506 */
								return BGl_removestopz00zz__weakhashz00;
							}
						else
							{	/* Llib/weakhash.scm 506 */
								return BGl_keepgoingz00zz__weakhashz00;
							}
					}
				}
			}
		}
	}



/* weak-hashtable-expand! */
	BGL_EXPORTED_DEF obj_t
		BGl_weakzd2hashtablezd2expandz12z12zz__weakhashz00(obj_t BgL_tablez00_75)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 514 */
			if (
				(((long) 1) ==
					(long) CINT(STRUCT_REF(BgL_tablez00_75, (int) (((long) 5))))))
				{	/* Llib/weakhash.scm 526 */
					obj_t BgL_oldzd2buckszd2_1311;

					BgL_oldzd2buckszd2_1311 =
						STRUCT_REF(BgL_tablez00_75, (int) (((long) 2)));
					{	/* Llib/weakhash.scm 526 */
						int BgL_oldzd2buckszd2lenz00_1312;

						BgL_oldzd2buckszd2lenz00_1312 =
							VECTOR_LENGTH(BgL_oldzd2buckszd2_1311);
						{	/* Llib/weakhash.scm 526 */
							long BgL_newzd2buckszd2lenz00_1313;

							BgL_newzd2buckszd2lenz00_1313 =
								(((long) 2) * (long) (BgL_oldzd2buckszd2lenz00_1312));
							{	/* Llib/weakhash.scm 526 */
								obj_t BgL_newzd2buckszd2_1314;

								BgL_newzd2buckszd2_1314 =
									make_vector((int) (BgL_newzd2buckszd2lenz00_1313), BNIL);
								{	/* Llib/weakhash.scm 526 */
									obj_t BgL_countz00_1315;

									BgL_countz00_1315 =
										STRUCT_REF(BgL_tablez00_75, (int) (((long) 0)));
									{	/* Llib/weakhash.scm 526 */

										{	/* Llib/weakhash.scm 526 */
											int BgL_auxz00_4470;

											BgL_auxz00_4470 = (int) (((long) 2));
											STRUCT_SET(BgL_tablez00_75, BgL_auxz00_4470,
												BgL_newzd2buckszd2_1314);
										}
										{
											long BgL_iz00_1317;

											BgL_iz00_1317 = ((long) 0);
										BgL_zc3anonymousza32178ze3z83_1318:
											if (
												(BgL_iz00_1317 <
													(long) (BgL_oldzd2buckszd2lenz00_1312)))
												{	/* Llib/weakhash.scm 526 */
													{	/* Llib/weakhash.scm 526 */
														obj_t BgL_g1871z00_1320;

														BgL_g1871z00_1320 =
															VECTOR_REF(BgL_oldzd2buckszd2_1311,
															(int) (BgL_iz00_1317));
														{
															obj_t BgL_l1869z00_1322;

															BgL_l1869z00_1322 = BgL_g1871z00_1320;
														BgL_zc3anonymousza32180ze3z83_1323:
															if (PAIRP(BgL_l1869z00_1322))
																{	/* Llib/weakhash.scm 526 */
																	{	/* Llib/weakhash.scm 528 */
																		obj_t BgL_cellz00_1325;

																		BgL_cellz00_1325 = CAR(BgL_l1869z00_1322);
																		{	/* Llib/weakhash.scm 528 */
																			obj_t BgL_keyz00_1326;

																			BgL_keyz00_1326 =
																				weakptr_data(CAR(BgL_cellz00_1325));
																			if ((BgL_keyz00_1326 == BUNSPEC))
																				{	/* Llib/weakhash.scm 530 */
																					long BgL_za71za7_2814;

																					BgL_za71za7_2814 =
																						(long) CINT(BgL_countz00_1315);
																					BgL_countz00_1315 =
																						BINT(
																						(BgL_za71za7_2814 - ((long) 1)));
																				}
																			else
																				{	/* Llib/weakhash.scm 531 */
																					long BgL_hz00_1328;

																					{	/* Llib/weakhash.scm 532 */
																						long BgL_arg2185z00_1331;

																						{	/* Llib/weakhash.scm 532 */
																							long BgL_res2493z00_2831;

																							{	/* Llib/weakhash.scm 532 */
																								obj_t BgL_hashnz00_2818;

																								BgL_hashnz00_2818 =
																									STRUCT_REF(BgL_tablez00_75,
																									(int) (((long) 4)));
																								if (PROCEDUREP
																									(BgL_hashnz00_2818))
																									{	/* Llib/weakhash.scm 532 */
																										obj_t BgL_arg1926z00_2820;

																										BgL_arg1926z00_2820 =
																											PROCEDURE_ENTRY
																											(BgL_hashnz00_2818)
																											(BgL_hashnz00_2818,
																											BgL_keyz00_1326, BEOA);
																										{	/* Llib/weakhash.scm 532 */
																											long BgL_nz00_2825;

																											BgL_nz00_2825 =
																												(long)
																												CINT
																												(BgL_arg1926z00_2820);
																											if ((BgL_nz00_2825 <
																													((long) 0)))
																												{	/* Llib/weakhash.scm 532 */
																													BgL_res2493z00_2831 =
																														NEG(BgL_nz00_2825);
																												}
																											else
																												{	/* Llib/weakhash.scm 532 */
																													BgL_res2493z00_2831 =
																														BgL_nz00_2825;
																												}
																										}
																									}
																								else
																									{	/* Llib/weakhash.scm 532 */
																										BgL_res2493z00_2831 =
																											BGl_getzd2hashnumberzd2zz__hashz00
																											(BgL_keyz00_1326);
																									}
																							}
																							BgL_arg2185z00_1331 =
																								BgL_res2493z00_2831;
																						}
																						BgL_hz00_1328 =
																							(BgL_arg2185z00_1331 %
																							BgL_newzd2buckszd2lenz00_1313);
																					}
																					{	/* Llib/weakhash.scm 537 */
																						obj_t BgL_arg2183z00_1329;

																						BgL_arg2183z00_1329 =
																							MAKE_PAIR(BgL_cellz00_1325,
																							VECTOR_REF
																							(BgL_newzd2buckszd2_1314,
																								(int) (BgL_hz00_1328)));
																						VECTOR_SET(BgL_newzd2buckszd2_1314,
																							(int) (BgL_hz00_1328),
																							BgL_arg2183z00_1329);
																	}}}}
																	{
																		obj_t BgL_l1869z00_4505;

																		BgL_l1869z00_4505 = CDR(BgL_l1869z00_1322);
																		BgL_l1869z00_1322 = BgL_l1869z00_4505;
																		goto BgL_zc3anonymousza32180ze3z83_1323;
																	}
																}
															else
																{	/* Llib/weakhash.scm 526 */
																	((bool_t) 1);
																}
														}
													}
													{
														long BgL_iz00_4507;

														BgL_iz00_4507 = (BgL_iz00_1317 + ((long) 1));
														BgL_iz00_1317 = BgL_iz00_4507;
														goto BgL_zc3anonymousza32178ze3z83_1318;
													}
												}
											else
												{	/* Llib/weakhash.scm 526 */
													((bool_t) 0);
												}
										}
										{	/* Llib/weakhash.scm 526 */
											int BgL_auxz00_4509;

											BgL_auxz00_4509 = (int) (((long) 0));
											return
												STRUCT_SET(BgL_tablez00_75, BgL_auxz00_4509,
												BgL_countz00_1315);
										}
									}
								}
							}
						}
					}
				}
			else
				{	/* Llib/weakhash.scm 526 */
					if (
						(((long) 2) ==
							(long) CINT(STRUCT_REF(BgL_tablez00_75, (int) (((long) 5))))))
						{	/* Llib/weakhash.scm 539 */
							obj_t BgL_oldzd2buckszd2_1338;

							BgL_oldzd2buckszd2_1338 =
								STRUCT_REF(BgL_tablez00_75, (int) (((long) 2)));
							{	/* Llib/weakhash.scm 539 */
								int BgL_oldzd2buckszd2lenz00_1339;

								BgL_oldzd2buckszd2lenz00_1339 =
									VECTOR_LENGTH(BgL_oldzd2buckszd2_1338);
								{	/* Llib/weakhash.scm 539 */
									long BgL_newzd2buckszd2lenz00_1340;

									BgL_newzd2buckszd2lenz00_1340 =
										(((long) 2) * (long) (BgL_oldzd2buckszd2lenz00_1339));
									{	/* Llib/weakhash.scm 539 */
										obj_t BgL_newzd2buckszd2_1341;

										BgL_newzd2buckszd2_1341 =
											make_vector((int) (BgL_newzd2buckszd2lenz00_1340), BNIL);
										{	/* Llib/weakhash.scm 539 */
											obj_t BgL_countz00_1342;

											BgL_countz00_1342 =
												STRUCT_REF(BgL_tablez00_75, (int) (((long) 0)));
											{	/* Llib/weakhash.scm 539 */

												{	/* Llib/weakhash.scm 539 */
													int BgL_auxz00_4526;

													BgL_auxz00_4526 = (int) (((long) 2));
													STRUCT_SET(BgL_tablez00_75, BgL_auxz00_4526,
														BgL_newzd2buckszd2_1341);
												}
												{
													long BgL_iz00_1344;

													BgL_iz00_1344 = ((long) 0);
												BgL_zc3anonymousza32190ze3z83_1345:
													if (
														(BgL_iz00_1344 <
															(long) (BgL_oldzd2buckszd2lenz00_1339)))
														{	/* Llib/weakhash.scm 539 */
															{	/* Llib/weakhash.scm 539 */
																obj_t BgL_g1874z00_1347;

																BgL_g1874z00_1347 =
																	VECTOR_REF(BgL_oldzd2buckszd2_1338,
																	(int) (BgL_iz00_1344));
																{
																	obj_t BgL_l1872z00_1349;

																	BgL_l1872z00_1349 = BgL_g1874z00_1347;
																BgL_zc3anonymousza32192ze3z83_1350:
																	if (PAIRP(BgL_l1872z00_1349))
																		{	/* Llib/weakhash.scm 539 */
																			{	/* Llib/weakhash.scm 541 */
																				obj_t BgL_cellz00_1352;

																				BgL_cellz00_1352 =
																					CAR(BgL_l1872z00_1349);
																				{	/* Llib/weakhash.scm 541 */
																					obj_t BgL_dataz00_1353;

																					BgL_dataz00_1353 =
																						weakptr_data(CDR(BgL_cellz00_1352));
																					if ((BgL_dataz00_1353 == BUNSPEC))
																						{	/* Llib/weakhash.scm 543 */
																							long BgL_za71za7_2874;

																							BgL_za71za7_2874 =
																								(long) CINT(BgL_countz00_1342);
																							BgL_countz00_1342 =
																								BINT(
																								(BgL_za71za7_2874 -
																									((long) 1)));
																						}
																					else
																						{	/* Llib/weakhash.scm 544 */
																							long BgL_hz00_1355;

																							{	/* Llib/weakhash.scm 546 */
																								long BgL_arg2197z00_1358;

																								{	/* Llib/weakhash.scm 546 */
																									obj_t BgL_arg2198z00_1359;

																									BgL_arg2198z00_1359 =
																										CAR(BgL_cellz00_1352);
																									{	/* Llib/weakhash.scm 545 */
																										long BgL_res2495z00_2892;

																										{	/* Llib/weakhash.scm 545 */
																											obj_t BgL_hashnz00_2879;

																											BgL_hashnz00_2879 =
																												STRUCT_REF
																												(BgL_tablez00_75,
																												(int) (((long) 4)));
																											if (PROCEDUREP
																												(BgL_hashnz00_2879))
																												{	/* Llib/weakhash.scm 545 */
																													obj_t
																														BgL_arg1926z00_2881;
																													BgL_arg1926z00_2881 =
																														PROCEDURE_ENTRY
																														(BgL_hashnz00_2879)
																														(BgL_hashnz00_2879,
																														BgL_arg2198z00_1359,
																														BEOA);
																													{	/* Llib/weakhash.scm 545 */
																														long BgL_nz00_2886;

																														BgL_nz00_2886 =
																															(long)
																															CINT
																															(BgL_arg1926z00_2881);
																														if ((BgL_nz00_2886 <
																																((long) 0)))
																															{	/* Llib/weakhash.scm 545 */
																																BgL_res2495z00_2892
																																	=
																																	NEG
																																	(BgL_nz00_2886);
																															}
																														else
																															{	/* Llib/weakhash.scm 545 */
																																BgL_res2495z00_2892
																																	=
																																	BgL_nz00_2886;
																															}
																													}
																												}
																											else
																												{	/* Llib/weakhash.scm 545 */
																													BgL_res2495z00_2892 =
																														BGl_getzd2hashnumberzd2zz__hashz00
																														(BgL_arg2198z00_1359);
																												}
																										}
																										BgL_arg2197z00_1358 =
																											BgL_res2495z00_2892;
																									}
																								}
																								BgL_hz00_1355 =
																									(BgL_arg2197z00_1358 %
																									BgL_newzd2buckszd2lenz00_1340);
																							}
																							{	/* Llib/weakhash.scm 551 */
																								obj_t BgL_arg2195z00_1356;

																								BgL_arg2195z00_1356 =
																									MAKE_PAIR(BgL_cellz00_1352,
																									VECTOR_REF
																									(BgL_newzd2buckszd2_1341,
																										(int) (BgL_hz00_1355)));
																								VECTOR_SET
																									(BgL_newzd2buckszd2_1341,
																									(int) (BgL_hz00_1355),
																									BgL_arg2195z00_1356);
																			}}}}
																			{
																				obj_t BgL_l1872z00_4562;

																				BgL_l1872z00_4562 =
																					CDR(BgL_l1872z00_1349);
																				BgL_l1872z00_1349 = BgL_l1872z00_4562;
																				goto BgL_zc3anonymousza32192ze3z83_1350;
																			}
																		}
																	else
																		{	/* Llib/weakhash.scm 539 */
																			((bool_t) 1);
																		}
																}
															}
															{
																long BgL_iz00_4564;

																BgL_iz00_4564 = (BgL_iz00_1344 + ((long) 1));
																BgL_iz00_1344 = BgL_iz00_4564;
																goto BgL_zc3anonymousza32190ze3z83_1345;
															}
														}
													else
														{	/* Llib/weakhash.scm 539 */
															((bool_t) 0);
														}
												}
												{	/* Llib/weakhash.scm 539 */
													int BgL_auxz00_4566;

													BgL_auxz00_4566 = (int) (((long) 0));
													return
														STRUCT_SET(BgL_tablez00_75, BgL_auxz00_4566,
														BgL_countz00_1342);
												}
											}
										}
									}
								}
							}
						}
					else
						{	/* Llib/weakhash.scm 539 */
							if (
								(((long) 3) ==
									(long) CINT(STRUCT_REF(BgL_tablez00_75, (int) (((long) 5))))))
								{	/* Llib/weakhash.scm 553 */
									obj_t BgL_oldzd2buckszd2_1366;

									BgL_oldzd2buckszd2_1366 =
										STRUCT_REF(BgL_tablez00_75, (int) (((long) 2)));
									{	/* Llib/weakhash.scm 553 */
										int BgL_oldzd2buckszd2lenz00_1367;

										BgL_oldzd2buckszd2lenz00_1367 =
											VECTOR_LENGTH(BgL_oldzd2buckszd2_1366);
										{	/* Llib/weakhash.scm 553 */
											long BgL_newzd2buckszd2lenz00_1368;

											BgL_newzd2buckszd2lenz00_1368 =
												(((long) 2) * (long) (BgL_oldzd2buckszd2lenz00_1367));
											{	/* Llib/weakhash.scm 553 */
												obj_t BgL_newzd2buckszd2_1369;

												BgL_newzd2buckszd2_1369 =
													make_vector(
													(int) (BgL_newzd2buckszd2lenz00_1368), BNIL);
												{	/* Llib/weakhash.scm 553 */
													obj_t BgL_countz00_1370;

													BgL_countz00_1370 =
														STRUCT_REF(BgL_tablez00_75, (int) (((long) 0)));
													{	/* Llib/weakhash.scm 553 */

														{	/* Llib/weakhash.scm 553 */
															int BgL_auxz00_4583;

															BgL_auxz00_4583 = (int) (((long) 2));
															STRUCT_SET(BgL_tablez00_75, BgL_auxz00_4583,
																BgL_newzd2buckszd2_1369);
														}
														{
															long BgL_iz00_1372;

															BgL_iz00_1372 = ((long) 0);
														BgL_zc3anonymousza32205ze3z83_1373:
															if (
																(BgL_iz00_1372 <
																	(long) (BgL_oldzd2buckszd2lenz00_1367)))
																{	/* Llib/weakhash.scm 553 */
																	{	/* Llib/weakhash.scm 553 */
																		obj_t BgL_g1877z00_1375;

																		BgL_g1877z00_1375 =
																			VECTOR_REF(BgL_oldzd2buckszd2_1366,
																			(int) (BgL_iz00_1372));
																		{
																			obj_t BgL_l1875z00_1377;

																			BgL_l1875z00_1377 = BgL_g1877z00_1375;
																		BgL_zc3anonymousza32207ze3z83_1378:
																			if (PAIRP(BgL_l1875z00_1377))
																				{	/* Llib/weakhash.scm 553 */
																					{	/* Llib/weakhash.scm 555 */
																						obj_t BgL_cellz00_1380;

																						BgL_cellz00_1380 =
																							CAR(BgL_l1875z00_1377);
																						{	/* Llib/weakhash.scm 555 */
																							obj_t BgL_keyz00_1381;

																							obj_t BgL_dataz00_1382;

																							BgL_keyz00_1381 =
																								weakptr_data(CAR
																								(BgL_cellz00_1380));
																							BgL_dataz00_1382 =
																								weakptr_data(CDR
																								(BgL_cellz00_1380));
																							{	/* Llib/weakhash.scm 557 */
																								bool_t BgL_testz00_4598;

																								if (
																									(BgL_keyz00_1381 == BUNSPEC))
																									{	/* Llib/weakhash.scm 557 */
																										BgL_testz00_4598 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Llib/weakhash.scm 557 */
																										BgL_testz00_4598 =
																											(BgL_dataz00_1382 ==
																											BUNSPEC);
																									}
																								if (BgL_testz00_4598)
																									{	/* Llib/weakhash.scm 559 */
																										long BgL_za71za7_2937;

																										BgL_za71za7_2937 =
																											(long)
																											CINT(BgL_countz00_1370);
																										BgL_countz00_1370 =
																											BINT((BgL_za71za7_2937 -
																												((long) 1)));
																									}
																								else
																									{	/* Llib/weakhash.scm 560 */
																										long BgL_hz00_1384;

																										{	/* Llib/weakhash.scm 561 */
																											long BgL_arg2212z00_1387;

																											{	/* Llib/weakhash.scm 561 */
																												long
																													BgL_res2497z00_2954;
																												{	/* Llib/weakhash.scm 561 */
																													obj_t
																														BgL_hashnz00_2941;
																													BgL_hashnz00_2941 =
																														STRUCT_REF
																														(BgL_tablez00_75,
																														(int) (((long) 4)));
																													if (PROCEDUREP
																														(BgL_hashnz00_2941))
																														{	/* Llib/weakhash.scm 561 */
																															obj_t
																																BgL_arg1926z00_2943;
																															BgL_arg1926z00_2943
																																=
																																PROCEDURE_ENTRY
																																(BgL_hashnz00_2941)
																																(BgL_hashnz00_2941,
																																BgL_keyz00_1381,
																																BEOA);
																															{	/* Llib/weakhash.scm 561 */
																																long
																																	BgL_nz00_2948;
																																BgL_nz00_2948 =
																																	(long)
																																	CINT
																																	(BgL_arg1926z00_2943);
																																if (
																																	(BgL_nz00_2948
																																		<
																																		((long) 0)))
																																	{	/* Llib/weakhash.scm 561 */
																																		BgL_res2497z00_2954
																																			=
																																			NEG
																																			(BgL_nz00_2948);
																																	}
																																else
																																	{	/* Llib/weakhash.scm 561 */
																																		BgL_res2497z00_2954
																																			=
																																			BgL_nz00_2948;
																																	}
																															}
																														}
																													else
																														{	/* Llib/weakhash.scm 561 */
																															BgL_res2497z00_2954
																																=
																																BGl_getzd2hashnumberzd2zz__hashz00
																																(BgL_keyz00_1381);
																														}
																												}
																												BgL_arg2212z00_1387 =
																													BgL_res2497z00_2954;
																											}
																											BgL_hz00_1384 =
																												(BgL_arg2212z00_1387 %
																												BgL_newzd2buckszd2lenz00_1368);
																										}
																										{	/* Llib/weakhash.scm 566 */
																											obj_t BgL_arg2210z00_1385;

																											BgL_arg2210z00_1385 =
																												MAKE_PAIR
																												(BgL_cellz00_1380,
																												VECTOR_REF
																												(BgL_newzd2buckszd2_1369,
																													(int)
																													(BgL_hz00_1384)));
																											VECTOR_SET
																												(BgL_newzd2buckszd2_1369,
																												(int) (BgL_hz00_1384),
																												BgL_arg2210z00_1385);
																					}}}}}
																					{
																						obj_t BgL_l1875z00_4622;

																						BgL_l1875z00_4622 =
																							CDR(BgL_l1875z00_1377);
																						BgL_l1875z00_1377 =
																							BgL_l1875z00_4622;
																						goto
																							BgL_zc3anonymousza32207ze3z83_1378;
																					}
																				}
																			else
																				{	/* Llib/weakhash.scm 553 */
																					((bool_t) 1);
																				}
																		}
																	}
																	{
																		long BgL_iz00_4624;

																		BgL_iz00_4624 =
																			(BgL_iz00_1372 + ((long) 1));
																		BgL_iz00_1372 = BgL_iz00_4624;
																		goto BgL_zc3anonymousza32205ze3z83_1373;
																	}
																}
															else
																{	/* Llib/weakhash.scm 553 */
																	((bool_t) 0);
																}
														}
														{	/* Llib/weakhash.scm 553 */
															int BgL_auxz00_4626;

															BgL_auxz00_4626 = (int) (((long) 0));
															return
																STRUCT_SET(BgL_tablez00_75, BgL_auxz00_4626,
																BgL_countz00_1370);
														}
													}
												}
											}
										}
									}
								}
							else
								{	/* Llib/weakhash.scm 553 */
									obj_t BgL_oldzd2buckszd2_1395;

									BgL_oldzd2buckszd2_1395 =
										STRUCT_REF(BgL_tablez00_75, (int) (((long) 2)));
									{	/* Llib/weakhash.scm 553 */
										int BgL_oldzd2buckszd2lenz00_1396;

										BgL_oldzd2buckszd2lenz00_1396 =
											VECTOR_LENGTH(BgL_oldzd2buckszd2_1395);
										{	/* Llib/weakhash.scm 553 */
											long BgL_newzd2buckszd2lenz00_1397;

											BgL_newzd2buckszd2lenz00_1397 =
												(((long) 2) * (long) (BgL_oldzd2buckszd2lenz00_1396));
											{	/* Llib/weakhash.scm 553 */
												obj_t BgL_newzd2buckszd2_1398;

												BgL_newzd2buckszd2_1398 =
													make_vector(
													(int) (BgL_newzd2buckszd2lenz00_1397), BNIL);
												{	/* Llib/weakhash.scm 553 */
													obj_t BgL_countz00_1399;

													BgL_countz00_1399 =
														STRUCT_REF(BgL_tablez00_75, (int) (((long) 0)));
													{	/* Llib/weakhash.scm 553 */

														{	/* Llib/weakhash.scm 553 */
															int BgL_auxz00_4638;

															BgL_auxz00_4638 = (int) (((long) 2));
															STRUCT_SET(BgL_tablez00_75, BgL_auxz00_4638,
																BgL_newzd2buckszd2_1398);
														}
														{
															long BgL_iz00_1401;

															BgL_iz00_1401 = ((long) 0);
														BgL_zc3anonymousza32223ze3z83_1402:
															if (
																(BgL_iz00_1401 <
																	(long) (BgL_oldzd2buckszd2lenz00_1396)))
																{	/* Llib/weakhash.scm 553 */
																	{	/* Llib/weakhash.scm 553 */
																		obj_t BgL_g1880z00_1404;

																		BgL_g1880z00_1404 =
																			VECTOR_REF(BgL_oldzd2buckszd2_1395,
																			(int) (BgL_iz00_1401));
																		{
																			obj_t BgL_l1878z00_1406;

																			BgL_l1878z00_1406 = BgL_g1880z00_1404;
																		BgL_zc3anonymousza32225ze3z83_1407:
																			if (PAIRP(BgL_l1878z00_1406))
																				{	/* Llib/weakhash.scm 553 */
																					{	/* Llib/weakhash.scm 570 */
																						obj_t BgL_cellz00_1409;

																						BgL_cellz00_1409 =
																							CAR(BgL_l1878z00_1406);
																						{	/* Llib/weakhash.scm 570 */
																							long BgL_hz00_1410;

																							{	/* Llib/weakhash.scm 572 */
																								long BgL_arg2234z00_1413;

																								{	/* Llib/weakhash.scm 572 */
																									obj_t BgL_arg2235z00_1414;

																									BgL_arg2235z00_1414 =
																										CAR(BgL_cellz00_1409);
																									{	/* Llib/weakhash.scm 571 */
																										long BgL_res2499z00_3006;

																										{	/* Llib/weakhash.scm 571 */
																											obj_t BgL_hashnz00_2993;

																											BgL_hashnz00_2993 =
																												STRUCT_REF
																												(BgL_tablez00_75,
																												(int) (((long) 4)));
																											if (PROCEDUREP
																												(BgL_hashnz00_2993))
																												{	/* Llib/weakhash.scm 571 */
																													obj_t
																														BgL_arg1926z00_2995;
																													BgL_arg1926z00_2995 =
																														PROCEDURE_ENTRY
																														(BgL_hashnz00_2993)
																														(BgL_hashnz00_2993,
																														BgL_arg2235z00_1414,
																														BEOA);
																													{	/* Llib/weakhash.scm 571 */
																														long BgL_nz00_3000;

																														BgL_nz00_3000 =
																															(long)
																															CINT
																															(BgL_arg1926z00_2995);
																														if ((BgL_nz00_3000 <
																																((long) 0)))
																															{	/* Llib/weakhash.scm 571 */
																																BgL_res2499z00_3006
																																	=
																																	NEG
																																	(BgL_nz00_3000);
																															}
																														else
																															{	/* Llib/weakhash.scm 571 */
																																BgL_res2499z00_3006
																																	=
																																	BgL_nz00_3000;
																															}
																													}
																												}
																											else
																												{	/* Llib/weakhash.scm 571 */
																													BgL_res2499z00_3006 =
																														BGl_getzd2hashnumberzd2zz__hashz00
																														(BgL_arg2235z00_1414);
																												}
																										}
																										BgL_arg2234z00_1413 =
																											BgL_res2499z00_3006;
																									}
																								}
																								BgL_hz00_1410 =
																									(BgL_arg2234z00_1413 %
																									BgL_newzd2buckszd2lenz00_1397);
																							}
																							{	/* Llib/weakhash.scm 578 */
																								obj_t BgL_arg2227z00_1411;

																								BgL_arg2227z00_1411 =
																									MAKE_PAIR(BgL_cellz00_1409,
																									VECTOR_REF
																									(BgL_newzd2buckszd2_1398,
																										(int) (BgL_hz00_1410)));
																								VECTOR_SET
																									(BgL_newzd2buckszd2_1398,
																									(int) (BgL_hz00_1410),
																									BgL_arg2227z00_1411);
																					}}}
																					{
																						obj_t BgL_l1878z00_4667;

																						BgL_l1878z00_4667 =
																							CDR(BgL_l1878z00_1406);
																						BgL_l1878z00_1406 =
																							BgL_l1878z00_4667;
																						goto
																							BgL_zc3anonymousza32225ze3z83_1407;
																					}
																				}
																			else
																				{	/* Llib/weakhash.scm 553 */
																					((bool_t) 1);
																				}
																		}
																	}
																	{
																		long BgL_iz00_4669;

																		BgL_iz00_4669 =
																			(BgL_iz00_1401 + ((long) 1));
																		BgL_iz00_1401 = BgL_iz00_4669;
																		goto BgL_zc3anonymousza32223ze3z83_1402;
																	}
																}
															else
																{	/* Llib/weakhash.scm 553 */
																	((bool_t) 0);
																}
														}
														{	/* Llib/weakhash.scm 553 */
															int BgL_auxz00_4671;

															BgL_auxz00_4671 = (int) (((long) 0));
															return
																STRUCT_SET(BgL_tablez00_75, BgL_auxz00_4671,
																BgL_countz00_1399);
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



/* _weak-hashtable-expand! */
	obj_t BGl__weakzd2hashtablezd2expandz12z12zz__weakhashz00(obj_t
		BgL_envz00_3315, obj_t BgL_tablez00_3316)
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 514 */
			{	/* Llib/weakhash.scm 526 */
				obj_t BgL_auxz00_4674;

				if (STRUCTP(BgL_tablez00_3316))
					{	/* Llib/weakhash.scm 526 */
						BgL_auxz00_4674 = BgL_tablez00_3316;
					}
				else
					{
						obj_t BgL_auxz00_4677;

						BgL_auxz00_4677 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2544z00zz__weakhashz00,
							BINT(((long) 20360)), BGl_string2559z00zz__weakhashz00,
							BGl_string2546z00zz__weakhashz00, BgL_tablez00_3316);
						FAILURE(BgL_auxz00_4677, BFALSE, BFALSE);
					}
				return
					BGl_weakzd2hashtablezd2expandz12z12zz__weakhashz00(BgL_auxz00_4674);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__weakhashz00()
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 18 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__weakhashz00()
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 18 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__weakhashz00()
	{
		AN_OBJECT;
		{	/* Llib/weakhash.scm 18 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2560z00zz__weakhashz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 504082187),
				BSTRING_TO_STRING(BGl_string2560z00zz__weakhashz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2560z00zz__weakhashz00));
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 81619416),
				BSTRING_TO_STRING(BGl_string2560z00zz__weakhashz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string2560z00zz__weakhashz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2560z00zz__weakhashz00));
			return
				BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2560z00zz__weakhashz00));
		}
	}

#ifdef __cplusplus
}
#endif
