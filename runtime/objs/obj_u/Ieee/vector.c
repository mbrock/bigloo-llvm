/*===========================================================================*/
/*   (Ieee/vector.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Ieee/vector.scm -indent -o objs/obj_u/Ieee/vector.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_makezd2vectorzd2zz__r4_vectors_6_8z00(int, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sortz00zz__r4_vectors_6_8z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_vectorzd2copyz12zc0zz__r4_vectors_6_8z00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_copyzd2vectorzd2zz__r4_vectors_6_8z00(obj_t, int);
	BGL_EXPORTED_DECL obj_t BGl_vectorzd2copyzd2zz__r4_vectors_6_8z00(obj_t,
		obj_t);
	extern long bgl_list_length(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_vectorzd2fillz12zc0zz__r4_vectors_6_8z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_vectorzd2refzd2urz00zz__r4_vectors_6_8z00(obj_t,
		int);
	static obj_t BGl__vectorzd2refzd2zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t);
	static obj_t BGl__vectorzd2appendzd2zz__r4_vectors_6_8z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL int BGl_vectorzd2lengthzd2zz__r4_vectors_6_8z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_vectorzd2setz12zc0zz__r4_vectors_6_8z00(obj_t,
		int, obj_t);
	static obj_t BGl__makezd2vectorzd2zz__r4_vectors_6_8z00(obj_t, obj_t);
	static obj_t BGl__vectorzd2copyzd2zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t);
	static obj_t BGl__copyzd2vectorzd2zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_vectorz00zz__r4_vectors_6_8z00(obj_t);
	static obj_t BGl__vectorzd2tagzd2setz12z12zz__r4_vectors_6_8z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__r4_vectors_6_8z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_vectorzd2refzd2zz__r4_vectors_6_8z00(obj_t, int);
	static obj_t BGl_importedzd2moduleszd2initz00zz__r4_vectors_6_8z00();
	static obj_t BGl_innerzd2sortzd2zz__r4_vectors_6_8z00(obj_t, obj_t);
	extern obj_t make_vector(int, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__vectorzd2copyz12zc0zz__r4_vectors_6_8z00(obj_t, obj_t);
	static obj_t BGl__vectorzd2setz12zc0zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vectorzd2setzd2urz12z12zz__r4_vectors_6_8z00(obj_t, int, obj_t);
	static obj_t BGl__vectorzf3zf3zz__r4_vectors_6_8z00(obj_t, obj_t);
	static obj_t BGl__vectorzd2fillz12zc0zz__r4_vectors_6_8z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__vectorzd2refzd2urz00zz__r4_vectors_6_8z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__vectorzd2ze3listz31zz__r4_vectors_6_8z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_vectorzf3zf3zz__r4_vectors_6_8z00(obj_t);
	static obj_t BGl__vectorzd2tagzd2zz__r4_vectors_6_8z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vectorzd2tagzd2setz12z12zz__r4_vectors_6_8z00(obj_t, int);
	static obj_t BGl__vectorzd2lengthzd2zz__r4_vectors_6_8z00(obj_t, obj_t);
	static obj_t BGl__vectorzd2setzd2urz12z12zz__r4_vectors_6_8z00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_vectorzd2appendzd2zz__r4_vectors_6_8z00(obj_t,
		obj_t);
	static obj_t BGl__listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t, obj_t);
	extern obj_t fill_vector(obj_t, int, obj_t);
	static obj_t BGl__sortz00zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t);
	static obj_t BGl__vectorz00zz__r4_vectors_6_8z00(obj_t, obj_t);
	extern obj_t sort_vector(obj_t, obj_t);
	BGL_EXPORTED_DECL int BGl_vectorzd2tagzd2zz__r4_vectors_6_8z00(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectorzd2copyz12zd2envz12zz__r4_vectors_6_8z00,
		BgL_bgl__vectorza7d2copyza711545z00, opt_generic_entry,
		BGl__vectorzd2copyz12zc0zz__r4_vectors_6_8z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectorzd2appendzd2envz00zz__r4_vectors_6_8z00,
		BgL_bgl__vectorza7d2append1546za7, va_generic_entry,
		BGl__vectorzd2appendzd2zz__r4_vectors_6_8z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2vectorzd2envz00zz__r4_vectors_6_8z00,
		BgL_bgl__makeza7d2vectorza7d1547z00, opt_generic_entry,
		BGl__makezd2vectorzd2zz__r4_vectors_6_8z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectorzd2refzd2urzd2envzd2zz__r4_vectors_6_8z00,
		BgL_bgl__vectorza7d2refza7d21548z00,
		BGl__vectorzd2refzd2urz00zz__r4_vectors_6_8z00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_vectorzf3zd2envz21zz__r4_vectors_6_8z00,
		BgL_bgl__vectorza7f3za7f3za7za7_1549z00,
		BGl__vectorzf3zf3zz__r4_vectors_6_8z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_vectorzd2copyzd2envz00zz__r4_vectors_6_8z00,
		BgL_bgl__vectorza7d2copyza7d1550z00, va_generic_entry,
		BGl__vectorzd2copyzd2zz__r4_vectors_6_8z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_copyzd2vectorzd2envz00zz__r4_vectors_6_8z00,
		BgL_bgl__copyza7d2vectorza7d1551z00,
		BGl__copyzd2vectorzd2zz__r4_vectors_6_8z00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sortzd2envzd2zz__r4_vectors_6_8z00,
		BgL_bgl__sortza700za7za7__r4_v1552za7, BGl__sortz00zz__r4_vectors_6_8z00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectorzd2fillz12zd2envz12zz__r4_vectors_6_8z00,
		BgL_bgl__vectorza7d2fillza711553z00,
		BGl__vectorzd2fillz12zc0zz__r4_vectors_6_8z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1520z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1520za700za7za7_1554za7, "_make-vector", 12);
	      DEFINE_STRING(BGl_string1519z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1519za700za7za7_1555za7,
		"/tmp/bigloo/runtime/Ieee/vector.scm", 35);
	      DEFINE_STRING(BGl_string1521z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1521za700za7za7_1556za7, "int", 3);
	      DEFINE_STRING(BGl_string1522z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1522za700za7za7_1557za7, "_vector-length", 14);
	      DEFINE_STRING(BGl_string1523z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1523za700za7za7_1558za7, "vector", 6);
	      DEFINE_STRING(BGl_string1524z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1524za700za7za7_1559za7, "_vector-ref", 11);
	      DEFINE_STRING(BGl_string1525z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1525za700za7za7_1560za7, "_vector-set!", 12);
	      DEFINE_STRING(BGl_string1526z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1526za700za7za7_1561za7, "_vector-ref-ur", 14);
	      DEFINE_STRING(BGl_string1527z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1527za700za7za7_1562za7, "_vector-set-ur!", 15);
	      DEFINE_STRING(BGl_string1528z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1528za700za7za7_1563za7, "_vector->list", 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectorzd2setzd2urz12zd2envzc0zz__r4_vectors_6_8z00,
		BgL_bgl__vectorza7d2setza7d21564z00,
		BGl__vectorzd2setzd2urz12z12zz__r4_vectors_6_8z00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string1530z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1530za700za7za7_1565za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string1529z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1529za700za7za7_1566za7, "_list->vector", 13);
	      DEFINE_STRING(BGl_string1531z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1531za700za7za7_1567za7, "_vector-fill!", 13);
	      DEFINE_STRING(BGl_string1532z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1532za700za7za7_1568za7, "_vector-tag", 11);
	      DEFINE_STRING(BGl_string1533z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1533za700za7za7_1569za7, "_vector-tag-set!", 16);
	      DEFINE_STRING(BGl_string1534z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1534za700za7za7_1570za7, "_copy-vector", 12);
	      DEFINE_STRING(BGl_string1535z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1535za700za7za7_1571za7, "vector-copy", 11);
	      DEFINE_STRING(BGl_string1536z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1536za700za7za7_1572za7, "Illegal argument", 16);
	      DEFINE_STRING(BGl_string1537z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1537za700za7za7_1573za7, "Illegal indexes", 15);
	      DEFINE_STRING(BGl_string1538z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1538za700za7za7_1574za7, "_vector-copy", 12);
	      DEFINE_STRING(BGl_string1540z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1540za700za7za7_1575za7, "_vector-append", 14);
	      DEFINE_STRING(BGl_string1539z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1539za700za7za7_1576za7, "_vector-copy!", 13);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_vectorzd2envzd2zz__r4_vectors_6_8z00,
		BgL_bgl__vectorza700za7za7__r41577za7, va_generic_entry,
		BGl__vectorz00zz__r4_vectors_6_8z00, BUNSPEC, -1);
	      DEFINE_STRING(BGl_string1541z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1541za700za7za7_1578za7, "sort", 4);
	      DEFINE_STRING(BGl_string1542z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1542za700za7za7_1579za7, "Object must be a list or a vector",
		33);
	      DEFINE_STRING(BGl_string1543z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1543za700za7za7_1580za7, "__r4_vectors_6_8", 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectorzd2ze3listzd2envze3zz__r4_vectors_6_8z00,
		BgL_bgl__vectorza7d2za7e3lis1581z00,
		BGl__vectorzd2ze3listz31zz__r4_vectors_6_8z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_vectorzd2tagzd2envz00zz__r4_vectors_6_8z00,
		BgL_bgl__vectorza7d2tagza7d21582z00,
		BGl__vectorzd2tagzd2zz__r4_vectors_6_8z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectorzd2setz12zd2envz12zz__r4_vectors_6_8z00,
		BgL_bgl__vectorza7d2setza7121583z00,
		BGl__vectorzd2setz12zc0zz__r4_vectors_6_8z00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectorzd2tagzd2setz12zd2envzc0zz__r4_vectors_6_8z00,
		BgL_bgl__vectorza7d2tagza7d21584z00,
		BGl__vectorzd2tagzd2setz12z12zz__r4_vectors_6_8z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_listzd2ze3vectorzd2envze3zz__r4_vectors_6_8z00,
		BgL_bgl__listza7d2za7e3vecto1585z00,
		BGl__listzd2ze3vectorz31zz__r4_vectors_6_8z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectorzd2lengthzd2envz00zz__r4_vectors_6_8z00,
		BgL_bgl__vectorza7d2length1586za7,
		BGl__vectorzd2lengthzd2zz__r4_vectors_6_8z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_vectorzd2refzd2envz00zz__r4_vectors_6_8z00,
		BgL_bgl__vectorza7d2refza7d21587z00,
		BGl__vectorzd2refzd2zz__r4_vectors_6_8z00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long
		BgL_checksumz00_1365, char *BgL_fromz00_1366)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__r4_vectors_6_8z00))
				{
					BGl_requirezd2initializa7ationz75zz__r4_vectors_6_8z00 =
						BBOOL(((bool_t) 0));
					BGl_importedzd2moduleszd2initz00zz__r4_vectors_6_8z00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* vector? */
	BGL_EXPORTED_DEF bool_t BGl_vectorzf3zf3zz__r4_vectors_6_8z00(obj_t
		BgL_objz00_1)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 123 */
			return VECTORP(BgL_objz00_1);
		}
	}



/* _vector? */
	obj_t BGl__vectorzf3zf3zz__r4_vectors_6_8z00(obj_t BgL_envz00_1243,
		obj_t BgL_objz00_1244)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 123 */
			return BBOOL(VECTORP(BgL_objz00_1244));
		}
	}



/* _make-vector */
	obj_t BGl__makezd2vectorzd2zz__r4_vectors_6_8z00(obj_t BgL_envz00_5,
		obj_t BgL_optz00_4)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 129 */
			{	/* Ieee/vector.scm 129 */
				obj_t BgL_g1111z00_1338;

				BgL_g1111z00_1338 = VECTOR_REF(BgL_optz00_4, (int) (((long) 0)));
				{	/* Ieee/vector.scm 129 */
					int BgL_aux1113z00_1339;

					BgL_aux1113z00_1339 = VECTOR_LENGTH(BgL_optz00_4);
					switch ((long) (BgL_aux1113z00_1339))
						{
						case ((long) 1):

							{	/* Ieee/vector.scm 129 */

								{	/* Ieee/vector.scm 129 */
									obj_t BgL_arg1127z00_1340;

									BgL_arg1127z00_1340 =
										VECTOR_REF(BgL_optz00_4, (int) (((long) 0)));
									{	/* Ieee/vector.scm 129 */
										int BgL_intz00_1341;

										{	/* Ieee/vector.scm 129 */
											obj_t BgL_auxz00_1379;

											if (INTEGERP(BgL_arg1127z00_1340))
												{	/* Ieee/vector.scm 129 */
													BgL_auxz00_1379 = BgL_arg1127z00_1340;
												}
											else
												{
													obj_t BgL_auxz00_1382;

													BgL_auxz00_1382 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string1519z00zz__r4_vectors_6_8z00,
														BINT(((long) 5911)),
														BGl_string1520z00zz__r4_vectors_6_8z00,
														BGl_string1521z00zz__r4_vectors_6_8z00,
														BgL_arg1127z00_1340);
													FAILURE(BgL_auxz00_1382, BFALSE, BFALSE);
												}
											BgL_intz00_1341 = CINT(BgL_auxz00_1379);
										}
										return make_vector(BgL_intz00_1341, BUNSPEC);
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Ieee/vector.scm 129 */
								obj_t BgL_fillz00_1342;

								BgL_fillz00_1342 = VECTOR_REF(BgL_optz00_4, (int) (((long) 1)));
								{	/* Ieee/vector.scm 129 */

									{	/* Ieee/vector.scm 129 */
										obj_t BgL_arg1128z00_1343;

										BgL_arg1128z00_1343 =
											VECTOR_REF(BgL_optz00_4, (int) (((long) 0)));
										{	/* Ieee/vector.scm 129 */
											int BgL_intz00_1344;

											{	/* Ieee/vector.scm 129 */
												obj_t BgL_auxz00_1392;

												if (INTEGERP(BgL_arg1128z00_1343))
													{	/* Ieee/vector.scm 129 */
														BgL_auxz00_1392 = BgL_arg1128z00_1343;
													}
												else
													{
														obj_t BgL_auxz00_1395;

														BgL_auxz00_1395 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string1519z00zz__r4_vectors_6_8z00,
															BINT(((long) 5911)),
															BGl_string1520z00zz__r4_vectors_6_8z00,
															BGl_string1521z00zz__r4_vectors_6_8z00,
															BgL_arg1128z00_1343);
														FAILURE(BgL_auxz00_1395, BFALSE, BFALSE);
													}
												BgL_intz00_1344 = CINT(BgL_auxz00_1392);
											}
											return make_vector(BgL_intz00_1344, BgL_fillz00_1342);
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



/* make-vector */
	BGL_EXPORTED_DEF obj_t BGl_makezd2vectorzd2zz__r4_vectors_6_8z00(int
		BgL_intz00_2, obj_t BgL_fillz00_3)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 129 */
			return make_vector(BgL_intz00_2, BgL_fillz00_3);
		}
	}



/* vector */
	BGL_EXPORTED_DEF obj_t BGl_vectorz00zz__r4_vectors_6_8z00(obj_t BgL_argsz00_6)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 135 */
			return BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BgL_argsz00_6);
		}
	}



/* _vector */
	obj_t BGl__vectorz00zz__r4_vectors_6_8z00(obj_t BgL_envz00_1245,
		obj_t BgL_argsz00_1246)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 135 */
			return BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BgL_argsz00_1246);
		}
	}



/* vector-length */
	BGL_EXPORTED_DEF int BGl_vectorzd2lengthzd2zz__r4_vectors_6_8z00(obj_t
		BgL_vectorz00_7)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 141 */
			return VECTOR_LENGTH(BgL_vectorz00_7);
		}
	}



/* _vector-length */
	obj_t BGl__vectorzd2lengthzd2zz__r4_vectors_6_8z00(obj_t BgL_envz00_1247,
		obj_t BgL_vectorz00_1248)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 141 */
			{	/* Ieee/vector.scm 142 */
				int BgL_auxz00_1407;

				{	/* Ieee/vector.scm 142 */
					obj_t BgL_vectorz00_1346;

					if (VECTORP(BgL_vectorz00_1248))
						{	/* Ieee/vector.scm 142 */
							BgL_vectorz00_1346 = BgL_vectorz00_1248;
						}
					else
						{
							obj_t BgL_auxz00_1410;

							BgL_auxz00_1410 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1519z00zz__r4_vectors_6_8z00, BINT(((long) 6545)),
								BGl_string1522z00zz__r4_vectors_6_8z00,
								BGl_string1523z00zz__r4_vectors_6_8z00, BgL_vectorz00_1248);
							FAILURE(BgL_auxz00_1410, BFALSE, BFALSE);
						}
					BgL_auxz00_1407 = VECTOR_LENGTH(BgL_vectorz00_1346);
				}
				return BINT(BgL_auxz00_1407);
			}
		}
	}



/* vector-ref */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2refzd2zz__r4_vectors_6_8z00(obj_t
		BgL_vectorz00_8, int BgL_kz00_9)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 147 */
			return VECTOR_REF(BgL_vectorz00_8, BgL_kz00_9);
		}
	}



/* _vector-ref */
	obj_t BGl__vectorzd2refzd2zz__r4_vectors_6_8z00(obj_t BgL_envz00_1249,
		obj_t BgL_vectorz00_1250, obj_t BgL_kz00_1251)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 147 */
			{	/* Ieee/vector.scm 148 */
				obj_t BgL_vectorz00_1347;

				int BgL_kz00_1348;

				if (VECTORP(BgL_vectorz00_1250))
					{	/* Ieee/vector.scm 148 */
						BgL_vectorz00_1347 = BgL_vectorz00_1250;
					}
				else
					{
						obj_t BgL_auxz00_1419;

						BgL_auxz00_1419 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1519z00zz__r4_vectors_6_8z00, BINT(((long) 6833)),
							BGl_string1524z00zz__r4_vectors_6_8z00,
							BGl_string1523z00zz__r4_vectors_6_8z00, BgL_vectorz00_1250);
						FAILURE(BgL_auxz00_1419, BFALSE, BFALSE);
					}
				{	/* Ieee/vector.scm 148 */
					obj_t BgL_auxz00_1423;

					if (INTEGERP(BgL_kz00_1251))
						{	/* Ieee/vector.scm 148 */
							BgL_auxz00_1423 = BgL_kz00_1251;
						}
					else
						{
							obj_t BgL_auxz00_1426;

							BgL_auxz00_1426 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1519z00zz__r4_vectors_6_8z00, BINT(((long) 6833)),
								BGl_string1524z00zz__r4_vectors_6_8z00,
								BGl_string1521z00zz__r4_vectors_6_8z00, BgL_kz00_1251);
							FAILURE(BgL_auxz00_1426, BFALSE, BFALSE);
						}
					BgL_kz00_1348 = CINT(BgL_auxz00_1423);
				}
				return VECTOR_REF(BgL_vectorz00_1347, BgL_kz00_1348);
			}
		}
	}



/* vector-set! */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2setz12zc0zz__r4_vectors_6_8z00(obj_t
		BgL_vectorz00_10, int BgL_kz00_11, obj_t BgL_objz00_12)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 153 */
			return VECTOR_SET(BgL_vectorz00_10, BgL_kz00_11, BgL_objz00_12);
		}
	}



/* _vector-set! */
	obj_t BGl__vectorzd2setz12zc0zz__r4_vectors_6_8z00(obj_t BgL_envz00_1252,
		obj_t BgL_vectorz00_1253, obj_t BgL_kz00_1254, obj_t BgL_objz00_1255)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 153 */
			{	/* Ieee/vector.scm 154 */
				obj_t BgL_vectorz00_1349;

				int BgL_kz00_1350;

				if (VECTORP(BgL_vectorz00_1253))
					{	/* Ieee/vector.scm 154 */
						BgL_vectorz00_1349 = BgL_vectorz00_1253;
					}
				else
					{
						obj_t BgL_auxz00_1435;

						BgL_auxz00_1435 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1519z00zz__r4_vectors_6_8z00, BINT(((long) 7125)),
							BGl_string1525z00zz__r4_vectors_6_8z00,
							BGl_string1523z00zz__r4_vectors_6_8z00, BgL_vectorz00_1253);
						FAILURE(BgL_auxz00_1435, BFALSE, BFALSE);
					}
				{	/* Ieee/vector.scm 154 */
					obj_t BgL_auxz00_1439;

					if (INTEGERP(BgL_kz00_1254))
						{	/* Ieee/vector.scm 154 */
							BgL_auxz00_1439 = BgL_kz00_1254;
						}
					else
						{
							obj_t BgL_auxz00_1442;

							BgL_auxz00_1442 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1519z00zz__r4_vectors_6_8z00, BINT(((long) 7125)),
								BGl_string1525z00zz__r4_vectors_6_8z00,
								BGl_string1521z00zz__r4_vectors_6_8z00, BgL_kz00_1254);
							FAILURE(BgL_auxz00_1442, BFALSE, BFALSE);
						}
					BgL_kz00_1350 = CINT(BgL_auxz00_1439);
				}
				return VECTOR_SET(BgL_vectorz00_1349, BgL_kz00_1350, BgL_objz00_1255);
			}
		}
	}



/* vector-ref-ur */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2refzd2urz00zz__r4_vectors_6_8z00(obj_t
		BgL_vectorz00_13, int BgL_kz00_14)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 159 */
			return VECTOR_REF(BgL_vectorz00_13, BgL_kz00_14);
		}
	}



/* _vector-ref-ur */
	obj_t BGl__vectorzd2refzd2urz00zz__r4_vectors_6_8z00(obj_t BgL_envz00_1256,
		obj_t BgL_vectorz00_1257, obj_t BgL_kz00_1258)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 159 */
			{	/* Ieee/vector.scm 160 */
				obj_t BgL_vectorz00_1352;

				int BgL_kz00_1353;

				if (VECTORP(BgL_vectorz00_1257))
					{	/* Ieee/vector.scm 160 */
						BgL_vectorz00_1352 = BgL_vectorz00_1257;
					}
				else
					{
						obj_t BgL_auxz00_1451;

						BgL_auxz00_1451 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1519z00zz__r4_vectors_6_8z00, BINT(((long) 7420)),
							BGl_string1526z00zz__r4_vectors_6_8z00,
							BGl_string1523z00zz__r4_vectors_6_8z00, BgL_vectorz00_1257);
						FAILURE(BgL_auxz00_1451, BFALSE, BFALSE);
					}
				{	/* Ieee/vector.scm 160 */
					obj_t BgL_auxz00_1455;

					if (INTEGERP(BgL_kz00_1258))
						{	/* Ieee/vector.scm 160 */
							BgL_auxz00_1455 = BgL_kz00_1258;
						}
					else
						{
							obj_t BgL_auxz00_1458;

							BgL_auxz00_1458 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1519z00zz__r4_vectors_6_8z00, BINT(((long) 7420)),
								BGl_string1526z00zz__r4_vectors_6_8z00,
								BGl_string1521z00zz__r4_vectors_6_8z00, BgL_kz00_1258);
							FAILURE(BgL_auxz00_1458, BFALSE, BFALSE);
						}
					BgL_kz00_1353 = CINT(BgL_auxz00_1455);
				}
				return VECTOR_REF(BgL_vectorz00_1352, BgL_kz00_1353);
			}
		}
	}



/* vector-set-ur! */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2setzd2urz12z12zz__r4_vectors_6_8z00(obj_t
		BgL_vectorz00_15, int BgL_kz00_16, obj_t BgL_objz00_17)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 165 */
			return VECTOR_SET(BgL_vectorz00_15, BgL_kz00_16, BgL_objz00_17);
		}
	}



/* _vector-set-ur! */
	obj_t BGl__vectorzd2setzd2urz12z12zz__r4_vectors_6_8z00(obj_t BgL_envz00_1259,
		obj_t BgL_vectorz00_1260, obj_t BgL_kz00_1261, obj_t BgL_objz00_1262)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 165 */
			{	/* Ieee/vector.scm 166 */
				obj_t BgL_vectorz00_1354;

				int BgL_kz00_1355;

				if (VECTORP(BgL_vectorz00_1260))
					{	/* Ieee/vector.scm 166 */
						BgL_vectorz00_1354 = BgL_vectorz00_1260;
					}
				else
					{
						obj_t BgL_auxz00_1467;

						BgL_auxz00_1467 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1519z00zz__r4_vectors_6_8z00, BINT(((long) 7718)),
							BGl_string1527z00zz__r4_vectors_6_8z00,
							BGl_string1523z00zz__r4_vectors_6_8z00, BgL_vectorz00_1260);
						FAILURE(BgL_auxz00_1467, BFALSE, BFALSE);
					}
				{	/* Ieee/vector.scm 166 */
					obj_t BgL_auxz00_1471;

					if (INTEGERP(BgL_kz00_1261))
						{	/* Ieee/vector.scm 166 */
							BgL_auxz00_1471 = BgL_kz00_1261;
						}
					else
						{
							obj_t BgL_auxz00_1474;

							BgL_auxz00_1474 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1519z00zz__r4_vectors_6_8z00, BINT(((long) 7718)),
								BGl_string1527z00zz__r4_vectors_6_8z00,
								BGl_string1521z00zz__r4_vectors_6_8z00, BgL_kz00_1261);
							FAILURE(BgL_auxz00_1474, BFALSE, BFALSE);
						}
					BgL_kz00_1355 = CINT(BgL_auxz00_1471);
				}
				return VECTOR_SET(BgL_vectorz00_1354, BgL_kz00_1355, BgL_objz00_1262);
			}
		}
	}



/* vector->list */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(obj_t
		BgL_vectorz00_18)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 171 */
			{	/* Ieee/vector.scm 172 */
				int BgL_vlenz00_395;

				BgL_vlenz00_395 = VECTOR_LENGTH(BgL_vectorz00_18);
				if (((long) (BgL_vlenz00_395) == ((long) 0)))
					{	/* Ieee/vector.scm 173 */
						return BNIL;
					}
				else
					{	/* Ieee/vector.scm 175 */
						long BgL_g1096z00_397;

						BgL_g1096z00_397 = ((long) (BgL_vlenz00_395) - ((long) 1));
						{
							long BgL_iz00_733;

							obj_t BgL_accz00_734;

							BgL_iz00_733 = BgL_g1096z00_397;
							BgL_accz00_734 = BNIL;
						BgL_loopz00_732:
							if ((BgL_iz00_733 == ((long) 0)))
								{	/* Ieee/vector.scm 175 */
									return
										MAKE_PAIR(VECTOR_REF(BgL_vectorz00_18,
											(int) (BgL_iz00_733)), BgL_accz00_734);
								}
							else
								{	/* Ieee/vector.scm 175 */
									long BgL_arg1238z00_742;

									obj_t BgL_arg1239z00_743;

									BgL_arg1238z00_742 = (BgL_iz00_733 - ((long) 1));
									BgL_arg1239z00_743 =
										MAKE_PAIR(VECTOR_REF(BgL_vectorz00_18,
											(int) (BgL_iz00_733)), BgL_accz00_734);
									{
										obj_t BgL_accz00_1496;

										long BgL_iz00_1495;

										BgL_iz00_1495 = BgL_arg1238z00_742;
										BgL_accz00_1496 = BgL_arg1239z00_743;
										BgL_accz00_734 = BgL_accz00_1496;
										BgL_iz00_733 = BgL_iz00_1495;
										goto BgL_loopz00_732;
									}
								}
						}
					}
			}
		}
	}



/* _vector->list */
	obj_t BGl__vectorzd2ze3listz31zz__r4_vectors_6_8z00(obj_t BgL_envz00_1263,
		obj_t BgL_vectorz00_1264)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 171 */
			{	/* Ieee/vector.scm 172 */
				obj_t BgL_auxz00_1497;

				if (VECTORP(BgL_vectorz00_1264))
					{	/* Ieee/vector.scm 172 */
						BgL_auxz00_1497 = BgL_vectorz00_1264;
					}
				else
					{
						obj_t BgL_auxz00_1500;

						BgL_auxz00_1500 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1519z00zz__r4_vectors_6_8z00, BINT(((long) 8006)),
							BGl_string1528z00zz__r4_vectors_6_8z00,
							BGl_string1523z00zz__r4_vectors_6_8z00, BgL_vectorz00_1264);
						FAILURE(BgL_auxz00_1500, BFALSE, BFALSE);
					}
				return BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(BgL_auxz00_1497);
			}
		}
	}



/* list->vector */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t
		BgL_listz00_19)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 184 */
			{	/* Ieee/vector.scm 185 */
				long BgL_lenz00_409;

				BgL_lenz00_409 = bgl_list_length(BgL_listz00_19);
				{	/* Ieee/vector.scm 185 */
					obj_t BgL_vecz00_410;

					BgL_vecz00_410 = create_vector((int) (BgL_lenz00_409));
					{	/* Ieee/vector.scm 186 */

						{
							long BgL_iz00_782;

							obj_t BgL_lz00_783;

							BgL_iz00_782 = ((long) 0);
							BgL_lz00_783 = BgL_listz00_19;
						BgL_loopz00_781:
							if ((BgL_iz00_782 == BgL_lenz00_409))
								{	/* Ieee/vector.scm 187 */
									return BgL_vecz00_410;
								}
							else
								{	/* Ieee/vector.scm 187 */
									VECTOR_SET(BgL_vecz00_410,
										(int) (BgL_iz00_782), CAR(BgL_lz00_783));
									{
										obj_t BgL_lz00_1515;

										long BgL_iz00_1513;

										BgL_iz00_1513 = (BgL_iz00_782 + ((long) 1));
										BgL_lz00_1515 = CDR(BgL_lz00_783);
										BgL_lz00_783 = BgL_lz00_1515;
										BgL_iz00_782 = BgL_iz00_1513;
										goto BgL_loopz00_781;
									}
								}
						}
					}
				}
			}
		}
	}



/* _list->vector */
	obj_t BGl__listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t BgL_envz00_1265,
		obj_t BgL_listz00_1266)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 184 */
			{	/* Ieee/vector.scm 185 */
				obj_t BgL_auxz00_1517;

				{	/* Ieee/vector.scm 185 */
					bool_t BgL_testz00_1518;

					if (PAIRP(BgL_listz00_1266))
						{	/* Ieee/vector.scm 185 */
							BgL_testz00_1518 = ((bool_t) 1);
						}
					else
						{	/* Ieee/vector.scm 185 */
							BgL_testz00_1518 = NULLP(BgL_listz00_1266);
						}
					if (BgL_testz00_1518)
						{	/* Ieee/vector.scm 185 */
							BgL_auxz00_1517 = BgL_listz00_1266;
						}
					else
						{
							obj_t BgL_auxz00_1522;

							BgL_auxz00_1522 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1519z00zz__r4_vectors_6_8z00, BINT(((long) 8496)),
								BGl_string1529z00zz__r4_vectors_6_8z00,
								BGl_string1530z00zz__r4_vectors_6_8z00, BgL_listz00_1266);
							FAILURE(BgL_auxz00_1522, BFALSE, BFALSE);
				}}
				return BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BgL_auxz00_1517);
			}
		}
	}



/* vector-fill! */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2fillz12zc0zz__r4_vectors_6_8z00(obj_t
		BgL_vectorz00_20, obj_t BgL_fillz00_21)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 198 */
			{	/* Ieee/vector.scm 199 */
				int BgL_arg1246z00_829;

				BgL_arg1246z00_829 = VECTOR_LENGTH(BgL_vectorz00_20);
				return
					fill_vector(BgL_vectorz00_20, BgL_arg1246z00_829, BgL_fillz00_21);
			}
		}
	}



/* _vector-fill! */
	obj_t BGl__vectorzd2fillz12zc0zz__r4_vectors_6_8z00(obj_t BgL_envz00_1267,
		obj_t BgL_vectorz00_1268, obj_t BgL_fillz00_1269)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 198 */
			{	/* Ieee/vector.scm 199 */
				obj_t BgL_auxz00_1529;

				if (VECTORP(BgL_vectorz00_1268))
					{	/* Ieee/vector.scm 199 */
						BgL_auxz00_1529 = BgL_vectorz00_1268;
					}
				else
					{
						obj_t BgL_auxz00_1532;

						BgL_auxz00_1532 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1519z00zz__r4_vectors_6_8z00, BINT(((long) 8979)),
							BGl_string1531z00zz__r4_vectors_6_8z00,
							BGl_string1523z00zz__r4_vectors_6_8z00, BgL_vectorz00_1268);
						FAILURE(BgL_auxz00_1532, BFALSE, BFALSE);
					}
				return
					BGl_vectorzd2fillz12zc0zz__r4_vectors_6_8z00(BgL_auxz00_1529,
					BgL_fillz00_1269);
			}
		}
	}



/* vector-tag */
	BGL_EXPORTED_DEF int BGl_vectorzd2tagzd2zz__r4_vectors_6_8z00(obj_t
		BgL_vectorz00_22)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 204 */
			return VECTOR_TAG(BgL_vectorz00_22);
		}
	}



/* _vector-tag */
	obj_t BGl__vectorzd2tagzd2zz__r4_vectors_6_8z00(obj_t BgL_envz00_1270,
		obj_t BgL_vectorz00_1271)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 204 */
			{	/* Ieee/vector.scm 205 */
				int BgL_auxz00_1538;

				{	/* Ieee/vector.scm 205 */
					obj_t BgL_vectorz00_1362;

					if (VECTORP(BgL_vectorz00_1271))
						{	/* Ieee/vector.scm 205 */
							BgL_vectorz00_1362 = BgL_vectorz00_1271;
						}
					else
						{
							obj_t BgL_auxz00_1541;

							BgL_auxz00_1541 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1519z00zz__r4_vectors_6_8z00, BINT(((long) 9270)),
								BGl_string1532z00zz__r4_vectors_6_8z00,
								BGl_string1523z00zz__r4_vectors_6_8z00, BgL_vectorz00_1271);
							FAILURE(BgL_auxz00_1541, BFALSE, BFALSE);
						}
					BgL_auxz00_1538 = VECTOR_TAG(BgL_vectorz00_1362);
				}
				return BINT(BgL_auxz00_1538);
			}
		}
	}



/* vector-tag-set! */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2tagzd2setz12z12zz__r4_vectors_6_8z00(obj_t
		BgL_vectorz00_23, int BgL_tagz00_24)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 210 */
			return VECTOR_TAG_SET(BgL_vectorz00_23, BgL_tagz00_24);
		}
	}



/* _vector-tag-set! */
	obj_t BGl__vectorzd2tagzd2setz12z12zz__r4_vectors_6_8z00(obj_t
		BgL_envz00_1272, obj_t BgL_vectorz00_1273, obj_t BgL_tagz00_1274)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 210 */
			{	/* Ieee/vector.scm 211 */
				obj_t BgL_vectorz00_1363;

				int BgL_tagz00_1364;

				if (VECTORP(BgL_vectorz00_1273))
					{	/* Ieee/vector.scm 211 */
						BgL_vectorz00_1363 = BgL_vectorz00_1273;
					}
				else
					{
						obj_t BgL_auxz00_1550;

						BgL_auxz00_1550 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1519z00zz__r4_vectors_6_8z00, BINT(((long) 9562)),
							BGl_string1533z00zz__r4_vectors_6_8z00,
							BGl_string1523z00zz__r4_vectors_6_8z00, BgL_vectorz00_1273);
						FAILURE(BgL_auxz00_1550, BFALSE, BFALSE);
					}
				{	/* Ieee/vector.scm 211 */
					obj_t BgL_auxz00_1554;

					if (INTEGERP(BgL_tagz00_1274))
						{	/* Ieee/vector.scm 211 */
							BgL_auxz00_1554 = BgL_tagz00_1274;
						}
					else
						{
							obj_t BgL_auxz00_1557;

							BgL_auxz00_1557 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1519z00zz__r4_vectors_6_8z00, BINT(((long) 9562)),
								BGl_string1533z00zz__r4_vectors_6_8z00,
								BGl_string1521z00zz__r4_vectors_6_8z00, BgL_tagz00_1274);
							FAILURE(BgL_auxz00_1557, BFALSE, BFALSE);
						}
					BgL_tagz00_1364 = CINT(BgL_auxz00_1554);
				}
				return VECTOR_TAG_SET(BgL_vectorz00_1363, BgL_tagz00_1364);
			}
		}
	}



/* copy-vector */
	BGL_EXPORTED_DEF obj_t BGl_copyzd2vectorzd2zz__r4_vectors_6_8z00(obj_t
		BgL_oldzd2veczd2_25, int BgL_newzd2lenzd2_26)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 216 */
			{	/* Ieee/vector.scm 217 */
				int BgL_oldzd2lenzd2_421;

				BgL_oldzd2lenzd2_421 = VECTOR_LENGTH(BgL_oldzd2veczd2_25);
				{	/* Ieee/vector.scm 217 */
					obj_t BgL_newzd2veczd2_422;

					BgL_newzd2veczd2_422 = make_vector(BgL_newzd2lenzd2_26, BUNSPEC);
					{	/* Ieee/vector.scm 218 */
						int BgL_minz00_423;

						if (((long) (BgL_newzd2lenzd2_26) < (long) (BgL_oldzd2lenzd2_421)))
							{	/* Ieee/vector.scm 219 */
								BgL_minz00_423 = BgL_newzd2lenzd2_26;
							}
						else
							{	/* Ieee/vector.scm 219 */
								BgL_minz00_423 = BgL_oldzd2lenzd2_421;
							}
						{	/* Ieee/vector.scm 219 */

							{
								long BgL_iz00_425;

								BgL_iz00_425 = ((long) 0);
							BgL_zc3anonymousza31247ze3z83_426:
								if ((BgL_iz00_425 == (long) (BgL_minz00_423)))
									{	/* Ieee/vector.scm 223 */
										return BgL_newzd2veczd2_422;
									}
								else
									{	/* Ieee/vector.scm 223 */
										VECTOR_SET(BgL_newzd2veczd2_422,
											(int) (BgL_iz00_425),
											VECTOR_REF(BgL_oldzd2veczd2_25, (int) (BgL_iz00_425)));
										{
											long BgL_iz00_1576;

											BgL_iz00_1576 = (BgL_iz00_425 + ((long) 1));
											BgL_iz00_425 = BgL_iz00_1576;
											goto BgL_zc3anonymousza31247ze3z83_426;
										}
									}
							}
						}
					}
				}
			}
		}
	}



/* _copy-vector */
	obj_t BGl__copyzd2vectorzd2zz__r4_vectors_6_8z00(obj_t BgL_envz00_1275,
		obj_t BgL_oldzd2veczd2_1276, obj_t BgL_newzd2lenzd2_1277)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 216 */
			{	/* Ieee/vector.scm 217 */
				int BgL_auxz00_1585;

				obj_t BgL_auxz00_1578;

				{	/* Ieee/vector.scm 217 */
					obj_t BgL_auxz00_1586;

					if (INTEGERP(BgL_newzd2lenzd2_1277))
						{	/* Ieee/vector.scm 217 */
							BgL_auxz00_1586 = BgL_newzd2lenzd2_1277;
						}
					else
						{
							obj_t BgL_auxz00_1589;

							BgL_auxz00_1589 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1519z00zz__r4_vectors_6_8z00, BINT(((long) 9878)),
								BGl_string1534z00zz__r4_vectors_6_8z00,
								BGl_string1521z00zz__r4_vectors_6_8z00, BgL_newzd2lenzd2_1277);
							FAILURE(BgL_auxz00_1589, BFALSE, BFALSE);
						}
					BgL_auxz00_1585 = CINT(BgL_auxz00_1586);
				}
				if (VECTORP(BgL_oldzd2veczd2_1276))
					{	/* Ieee/vector.scm 217 */
						BgL_auxz00_1578 = BgL_oldzd2veczd2_1276;
					}
				else
					{
						obj_t BgL_auxz00_1581;

						BgL_auxz00_1581 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1519z00zz__r4_vectors_6_8z00, BINT(((long) 9878)),
							BGl_string1534z00zz__r4_vectors_6_8z00,
							BGl_string1523z00zz__r4_vectors_6_8z00, BgL_oldzd2veczd2_1276);
						FAILURE(BgL_auxz00_1581, BFALSE, BFALSE);
					}
				return
					BGl_copyzd2vectorzd2zz__r4_vectors_6_8z00(BgL_auxz00_1578,
					BgL_auxz00_1585);
			}
		}
	}



/* vector-copy */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2copyzd2zz__r4_vectors_6_8z00(obj_t
		BgL_oldzd2veczd2_27, obj_t BgL_argsz00_28)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 232 */
			{	/* Ieee/vector.scm 233 */
				int BgL_oldzd2lenzd2_433;

				BgL_oldzd2lenzd2_433 = VECTOR_LENGTH(BgL_oldzd2veczd2_27);
				{	/* Ieee/vector.scm 233 */
					obj_t BgL_startz00_434;

					if (PAIRP(BgL_argsz00_28))
						{	/* Ieee/vector.scm 234 */
							if (INTEGERP(CAR(BgL_argsz00_28)))
								{	/* Ieee/vector.scm 235 */
									BgL_startz00_434 = CAR(BgL_argsz00_28);
								}
							else
								{	/* Ieee/vector.scm 235 */
									BgL_startz00_434 =
										BGl_errorz00zz__errorz00
										(BGl_string1535z00zz__r4_vectors_6_8z00,
										BGl_string1536z00zz__r4_vectors_6_8z00,
										CAR(BgL_argsz00_28));
								}
						}
					else
						{	/* Ieee/vector.scm 234 */
							BgL_startz00_434 = BINT(((long) 0));
						}
					{	/* Ieee/vector.scm 234 */
						obj_t BgL_stopz00_435;

						{	/* Ieee/vector.scm 239 */
							bool_t BgL_testz00_1605;

							if (PAIRP(BgL_argsz00_28))
								{	/* Ieee/vector.scm 239 */
									obj_t BgL_auxz00_1608;

									BgL_auxz00_1608 = CDR(BgL_argsz00_28);
									BgL_testz00_1605 = PAIRP(BgL_auxz00_1608);
								}
							else
								{	/* Ieee/vector.scm 239 */
									BgL_testz00_1605 = ((bool_t) 0);
								}
							if (BgL_testz00_1605)
								{	/* Ieee/vector.scm 240 */
									bool_t BgL_testz00_1611;

									{	/* Ieee/vector.scm 240 */
										bool_t BgL_testz00_1612;

										{	/* Ieee/vector.scm 240 */
											obj_t BgL_auxz00_1613;

											BgL_auxz00_1613 = CDR(CDR(BgL_argsz00_28));
											BgL_testz00_1612 = PAIRP(BgL_auxz00_1613);
										}
										if (BgL_testz00_1612)
											{	/* Ieee/vector.scm 240 */
												BgL_testz00_1611 = ((bool_t) 1);
											}
										else
											{	/* Ieee/vector.scm 240 */
												if (INTEGERP(CAR(CDR(BgL_argsz00_28))))
													{	/* Ieee/vector.scm 241 */
														BgL_testz00_1611 = ((bool_t) 0);
													}
												else
													{	/* Ieee/vector.scm 241 */
														BgL_testz00_1611 = ((bool_t) 1);
													}
											}
									}
									if (BgL_testz00_1611)
										{	/* Ieee/vector.scm 240 */
											BgL_stopz00_435 =
												BGl_errorz00zz__errorz00
												(BGl_string1535z00zz__r4_vectors_6_8z00,
												BGl_string1536z00zz__r4_vectors_6_8z00,
												CDR(BgL_argsz00_28));
										}
									else
										{	/* Ieee/vector.scm 240 */
											BgL_stopz00_435 = CAR(CDR(BgL_argsz00_28));
										}
								}
							else
								{	/* Ieee/vector.scm 239 */
									BgL_stopz00_435 = BINT(BgL_oldzd2lenzd2_433);
								}
						}
						{	/* Ieee/vector.scm 239 */
							long BgL_newzd2lenzd2_436;

							BgL_newzd2lenzd2_436 =
								((long) CINT(BgL_stopz00_435) - (long) CINT(BgL_startz00_434));
							{	/* Ieee/vector.scm 245 */
								obj_t BgL_newzd2veczd2_437;

								BgL_newzd2veczd2_437 =
									make_vector((int) (BgL_newzd2lenzd2_436), BUNSPEC);
								{	/* Ieee/vector.scm 247 */

									{	/* Ieee/vector.scm 250 */
										bool_t BgL_testz00_1631;

										if ((BgL_newzd2lenzd2_436 < ((long) 0)))
											{	/* Ieee/vector.scm 250 */
												BgL_testz00_1631 = ((bool_t) 1);
											}
										else
											{	/* Ieee/vector.scm 250 */
												if (
													((long) CINT(BgL_startz00_434) >
														(long) (BgL_oldzd2lenzd2_433)))
													{	/* Ieee/vector.scm 251 */
														BgL_testz00_1631 = ((bool_t) 1);
													}
												else
													{	/* Ieee/vector.scm 251 */
														BgL_testz00_1631 =
															(
															(long) CINT(BgL_stopz00_435) >
															(long) (BgL_oldzd2lenzd2_433));
											}}
										if (BgL_testz00_1631)
											{	/* Ieee/vector.scm 250 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string1535z00zz__r4_vectors_6_8z00,
													BGl_string1537z00zz__r4_vectors_6_8z00,
													BgL_argsz00_28);
											}
										else
											{
												obj_t BgL_rz00_880;

												long BgL_wz00_881;

												BgL_rz00_880 = BgL_startz00_434;
												BgL_wz00_881 = ((long) 0);
											BgL_loopz00_879:
												if (
													((long) CINT(BgL_rz00_880) ==
														(long) CINT(BgL_stopz00_435)))
													{	/* Ieee/vector.scm 254 */
														return BgL_newzd2veczd2_437;
													}
												else
													{	/* Ieee/vector.scm 254 */
														VECTOR_SET(BgL_newzd2veczd2_437,
															(int) (BgL_wz00_881),
															VECTOR_REF(BgL_oldzd2veczd2_27,
																CINT(BgL_rz00_880)));
														{	/* Ieee/vector.scm 254 */
															long BgL_arg1257z00_888;

															long BgL_arg1258z00_889;

															BgL_arg1257z00_888 =
																((long) CINT(BgL_rz00_880) + ((long) 1));
															BgL_arg1258z00_889 = (BgL_wz00_881 + ((long) 1));
															{
																long BgL_wz00_1655;

																obj_t BgL_rz00_1653;

																BgL_rz00_1653 = BINT(BgL_arg1257z00_888);
																BgL_wz00_1655 = BgL_arg1258z00_889;
																BgL_wz00_881 = BgL_wz00_1655;
																BgL_rz00_880 = BgL_rz00_1653;
																goto BgL_loopz00_879;
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



/* _vector-copy */
	obj_t BGl__vectorzd2copyzd2zz__r4_vectors_6_8z00(obj_t BgL_envz00_1278,
		obj_t BgL_oldzd2veczd2_1279, obj_t BgL_argsz00_1280)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 232 */
			{	/* Ieee/vector.scm 233 */
				obj_t BgL_auxz00_1656;

				if (VECTORP(BgL_oldzd2veczd2_1279))
					{	/* Ieee/vector.scm 233 */
						BgL_auxz00_1656 = BgL_oldzd2veczd2_1279;
					}
				else
					{
						obj_t BgL_auxz00_1659;

						BgL_auxz00_1659 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1519z00zz__r4_vectors_6_8z00, BINT(((long) 10456)),
							BGl_string1538z00zz__r4_vectors_6_8z00,
							BGl_string1523z00zz__r4_vectors_6_8z00, BgL_oldzd2veczd2_1279);
						FAILURE(BgL_auxz00_1659, BFALSE, BFALSE);
					}
				return
					BGl_vectorzd2copyzd2zz__r4_vectors_6_8z00(BgL_auxz00_1656,
					BgL_argsz00_1280);
			}
		}
	}



/* _vector-copy! */
	obj_t BGl__vectorzd2copyz12zc0zz__r4_vectors_6_8z00(obj_t BgL_envz00_35,
		obj_t BgL_optz00_34)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 265 */
			{	/* Ieee/vector.scm 265 */
				obj_t BgL_targetz00_470;

				obj_t BgL_tstartz00_471;

				obj_t BgL_sourcez00_472;

				BgL_targetz00_470 = VECTOR_REF(BgL_optz00_34, (int) (((long) 0)));
				BgL_tstartz00_471 = VECTOR_REF(BgL_optz00_34, (int) (((long) 1)));
				BgL_sourcez00_472 = VECTOR_REF(BgL_optz00_34, (int) (((long) 2)));
				{	/* Ieee/vector.scm 265 */
					int BgL_aux1115z00_474;

					BgL_aux1115z00_474 = VECTOR_LENGTH(BgL_optz00_34);
					switch ((long) (BgL_aux1115z00_474))
						{
						case ((long) 3):

							{	/* Ieee/vector.scm 266 */
								int BgL_sendz00_477;

								{	/* Ieee/vector.scm 266 */
									obj_t BgL_vectorz00_933;

									if (VECTORP(BgL_sourcez00_472))
										{	/* Ieee/vector.scm 266 */
											BgL_vectorz00_933 = BgL_sourcez00_472;
										}
									else
										{
											obj_t BgL_auxz00_1673;

											BgL_auxz00_1673 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string1519z00zz__r4_vectors_6_8z00,
												BINT(((long) 11604)),
												BGl_string1539z00zz__r4_vectors_6_8z00,
												BGl_string1523z00zz__r4_vectors_6_8z00,
												BgL_sourcez00_472);
											FAILURE(BgL_auxz00_1673, BFALSE, BFALSE);
										}
									BgL_sendz00_477 = VECTOR_LENGTH(BgL_vectorz00_933);
								}
								{	/* Ieee/vector.scm 265 */

									{	/* Ieee/vector.scm 265 */
										obj_t BgL_arg1281z00_478;

										obj_t BgL_arg1282z00_479;

										obj_t BgL_arg1283z00_480;

										BgL_arg1281z00_478 =
											VECTOR_REF(BgL_optz00_34, (int) (((long) 0)));
										BgL_arg1282z00_479 =
											VECTOR_REF(BgL_optz00_34, (int) (((long) 1)));
										BgL_arg1283z00_480 =
											VECTOR_REF(BgL_optz00_34, (int) (((long) 2)));
										{	/* Ieee/vector.scm 265 */
											obj_t BgL_sstartz00_937;

											obj_t BgL_sendz00_938;

											BgL_sstartz00_937 = BINT(((long) 0));
											BgL_sendz00_938 = BINT(BgL_sendz00_477);
											{
												obj_t BgL_iz00_940;

												obj_t BgL_jz00_941;

												{	/* Ieee/vector.scm 265 */
													bool_t BgL_auxz00_1686;

													BgL_iz00_940 = BgL_sstartz00_937;
													BgL_jz00_941 = BgL_arg1282z00_479;
												BgL_loopz00_939:
													if (
														((long) CINT(BgL_iz00_940) <
															(long) CINT(BgL_sendz00_938)))
														{	/* Ieee/vector.scm 265 */
															VECTOR_SET(BgL_arg1281z00_478,
																CINT(BgL_jz00_941),
																VECTOR_REF(BgL_arg1283z00_480,
																	CINT(BgL_iz00_940)));
															{	/* Ieee/vector.scm 265 */
																long BgL_arg1293z00_948;

																long BgL_arg1294z00_949;

																BgL_arg1293z00_948 =
																	((long) CINT(BgL_iz00_940) + ((long) 1));
																BgL_arg1294z00_949 =
																	((long) CINT(BgL_jz00_941) + ((long) 1));
																{
																	obj_t BgL_jz00_1701;

																	obj_t BgL_iz00_1699;

																	BgL_iz00_1699 = BINT(BgL_arg1293z00_948);
																	BgL_jz00_1701 = BINT(BgL_arg1294z00_949);
																	BgL_jz00_941 = BgL_jz00_1701;
																	BgL_iz00_940 = BgL_iz00_1699;
																	goto BgL_loopz00_939;
																}
															}
														}
													else
														{	/* Ieee/vector.scm 265 */
															BgL_auxz00_1686 = ((bool_t) 0);
														}
													return BBOOL(BgL_auxz00_1686);
												}
											}
										}
									}
								}
							}
							break;
						case ((long) 4):

							{	/* Ieee/vector.scm 265 */
								obj_t BgL_sstartz00_481;

								BgL_sstartz00_481 =
									VECTOR_REF(BgL_optz00_34, (int) (((long) 3)));
								{	/* Ieee/vector.scm 266 */
									int BgL_sendz00_482;

									{	/* Ieee/vector.scm 266 */
										obj_t BgL_vectorz00_961;

										if (VECTORP(BgL_sourcez00_472))
											{	/* Ieee/vector.scm 266 */
												BgL_vectorz00_961 = BgL_sourcez00_472;
											}
										else
											{
												obj_t BgL_auxz00_1708;

												BgL_auxz00_1708 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string1519z00zz__r4_vectors_6_8z00,
													BINT(((long) 11604)),
													BGl_string1539z00zz__r4_vectors_6_8z00,
													BGl_string1523z00zz__r4_vectors_6_8z00,
													BgL_sourcez00_472);
												FAILURE(BgL_auxz00_1708, BFALSE, BFALSE);
											}
										BgL_sendz00_482 = VECTOR_LENGTH(BgL_vectorz00_961);
									}
									{	/* Ieee/vector.scm 265 */

										{	/* Ieee/vector.scm 265 */
											obj_t BgL_arg1284z00_483;

											obj_t BgL_arg1285z00_484;

											obj_t BgL_arg1286z00_485;

											BgL_arg1284z00_483 =
												VECTOR_REF(BgL_optz00_34, (int) (((long) 0)));
											BgL_arg1285z00_484 =
												VECTOR_REF(BgL_optz00_34, (int) (((long) 1)));
											BgL_arg1286z00_485 =
												VECTOR_REF(BgL_optz00_34, (int) (((long) 2)));
											{	/* Ieee/vector.scm 265 */
												obj_t BgL_sendz00_966;

												BgL_sendz00_966 = BINT(BgL_sendz00_482);
												{
													obj_t BgL_iz00_968;

													obj_t BgL_jz00_969;

													{	/* Ieee/vector.scm 265 */
														bool_t BgL_auxz00_1720;

														BgL_iz00_968 = BgL_sstartz00_481;
														BgL_jz00_969 = BgL_arg1285z00_484;
													BgL_loopz00_967:
														if (
															((long) CINT(BgL_iz00_968) <
																(long) CINT(BgL_sendz00_966)))
															{	/* Ieee/vector.scm 265 */
																VECTOR_SET(BgL_arg1284z00_483,
																	CINT(BgL_jz00_969),
																	VECTOR_REF(BgL_arg1286z00_485,
																		CINT(BgL_iz00_968)));
																{	/* Ieee/vector.scm 265 */
																	long BgL_arg1293z00_976;

																	long BgL_arg1294z00_977;

																	BgL_arg1293z00_976 =
																		((long) CINT(BgL_iz00_968) + ((long) 1));
																	BgL_arg1294z00_977 =
																		((long) CINT(BgL_jz00_969) + ((long) 1));
																	{
																		obj_t BgL_jz00_1735;

																		obj_t BgL_iz00_1733;

																		BgL_iz00_1733 = BINT(BgL_arg1293z00_976);
																		BgL_jz00_1735 = BINT(BgL_arg1294z00_977);
																		BgL_jz00_969 = BgL_jz00_1735;
																		BgL_iz00_968 = BgL_iz00_1733;
																		goto BgL_loopz00_967;
																	}
																}
															}
														else
															{	/* Ieee/vector.scm 265 */
																BgL_auxz00_1720 = ((bool_t) 0);
															}
														return BBOOL(BgL_auxz00_1720);
													}
												}
											}
										}
									}
								}
							}
							break;
						case ((long) 5):

							{	/* Ieee/vector.scm 265 */
								obj_t BgL_sstartz00_486;

								BgL_sstartz00_486 =
									VECTOR_REF(BgL_optz00_34, (int) (((long) 3)));
								{	/* Ieee/vector.scm 265 */
									obj_t BgL_sendz00_487;

									BgL_sendz00_487 =
										VECTOR_REF(BgL_optz00_34, (int) (((long) 4)));
									{	/* Ieee/vector.scm 265 */

										{	/* Ieee/vector.scm 265 */
											obj_t BgL_arg1287z00_488;

											obj_t BgL_arg1288z00_489;

											obj_t BgL_arg1289z00_490;

											BgL_arg1287z00_488 =
												VECTOR_REF(BgL_optz00_34, (int) (((long) 0)));
											BgL_arg1288z00_489 =
												VECTOR_REF(BgL_optz00_34, (int) (((long) 1)));
											BgL_arg1289z00_490 =
												VECTOR_REF(BgL_optz00_34, (int) (((long) 2)));
											{
												obj_t BgL_iz00_995;

												obj_t BgL_jz00_996;

												{	/* Ieee/vector.scm 265 */
													bool_t BgL_auxz00_1748;

													BgL_iz00_995 = BgL_sstartz00_486;
													BgL_jz00_996 = BgL_arg1288z00_489;
												BgL_loopz00_994:
													if (
														((long) CINT(BgL_iz00_995) <
															(long) CINT(BgL_sendz00_487)))
														{	/* Ieee/vector.scm 265 */
															VECTOR_SET(BgL_arg1287z00_488,
																CINT(BgL_jz00_996),
																VECTOR_REF(BgL_arg1289z00_490,
																	CINT(BgL_iz00_995)));
															{	/* Ieee/vector.scm 265 */
																long BgL_arg1293z00_1003;

																long BgL_arg1294z00_1004;

																BgL_arg1293z00_1003 =
																	((long) CINT(BgL_iz00_995) + ((long) 1));
																BgL_arg1294z00_1004 =
																	((long) CINT(BgL_jz00_996) + ((long) 1));
																{
																	obj_t BgL_jz00_1763;

																	obj_t BgL_iz00_1761;

																	BgL_iz00_1761 = BINT(BgL_arg1293z00_1003);
																	BgL_jz00_1763 = BINT(BgL_arg1294z00_1004);
																	BgL_jz00_996 = BgL_jz00_1763;
																	BgL_iz00_995 = BgL_iz00_1761;
																	goto BgL_loopz00_994;
																}
															}
														}
													else
														{	/* Ieee/vector.scm 265 */
															BgL_auxz00_1748 = ((bool_t) 0);
														}
													return BBOOL(BgL_auxz00_1748);
												}
											}
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



/* vector-copy! */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2copyz12zc0zz__r4_vectors_6_8z00(obj_t
		BgL_targetz00_29, obj_t BgL_tstartz00_30, obj_t BgL_sourcez00_31,
		obj_t BgL_sstartz00_32, obj_t BgL_sendz00_33)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 265 */
			{
				obj_t BgL_iz00_1024;

				obj_t BgL_jz00_1025;

				{	/* Ieee/vector.scm 269 */
					bool_t BgL_auxz00_1768;

					BgL_iz00_1024 = BgL_sstartz00_32;
					BgL_jz00_1025 = BgL_tstartz00_30;
				BgL_loopz00_1023:
					if (((long) CINT(BgL_iz00_1024) < (long) CINT(BgL_sendz00_33)))
						{	/* Ieee/vector.scm 269 */
							VECTOR_SET(BgL_targetz00_29,
								CINT(BgL_jz00_1025),
								VECTOR_REF(BgL_sourcez00_31, CINT(BgL_iz00_1024)));
							{	/* Ieee/vector.scm 269 */
								long BgL_arg1293z00_1032;

								long BgL_arg1294z00_1033;

								BgL_arg1293z00_1032 = ((long) CINT(BgL_iz00_1024) + ((long) 1));
								BgL_arg1294z00_1033 = ((long) CINT(BgL_jz00_1025) + ((long) 1));
								{
									obj_t BgL_jz00_1783;

									obj_t BgL_iz00_1781;

									BgL_iz00_1781 = BINT(BgL_arg1293z00_1032);
									BgL_jz00_1783 = BINT(BgL_arg1294z00_1033);
									BgL_jz00_1025 = BgL_jz00_1783;
									BgL_iz00_1024 = BgL_iz00_1781;
									goto BgL_loopz00_1023;
								}
							}
						}
					else
						{	/* Ieee/vector.scm 269 */
							BgL_auxz00_1768 = ((bool_t) 0);
						}
					return BBOOL(BgL_auxz00_1768);
				}
			}
		}
	}



/* vector-append */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2appendzd2zz__r4_vectors_6_8z00(obj_t
		BgL_vecz00_36, obj_t BgL_argsz00_37)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 276 */
			{	/* Ieee/vector.scm 277 */
				int BgL_g1099z00_500;

				BgL_g1099z00_500 = VECTOR_LENGTH(BgL_vecz00_36);
				{
					int BgL_lenz00_502;

					obj_t BgL_vectsz00_503;

					BgL_lenz00_502 = BgL_g1099z00_500;
					BgL_vectsz00_503 = BgL_argsz00_37;
				BgL_zc3anonymousza31295ze3z83_504:
					if (NULLP(BgL_vectsz00_503))
						{	/* Ieee/vector.scm 280 */
							obj_t BgL_resz00_506;

							BgL_resz00_506 = make_vector(BgL_lenz00_502, BUNSPEC);
							{	/* Ieee/vector.scm 104 */
								int BgL_sendz00_511;

								BgL_sendz00_511 = VECTOR_LENGTH(BgL_vecz00_36);
								{	/* Ieee/vector.scm 104 */

									{	/* Ieee/vector.scm 104 */
										obj_t BgL_tstartz00_1082;

										obj_t BgL_sstartz00_1084;

										obj_t BgL_sendz00_1085;

										BgL_tstartz00_1082 = BINT(((long) 0));
										BgL_sstartz00_1084 = BINT(((long) 0));
										BgL_sendz00_1085 = BINT(BgL_sendz00_511);
										{
											obj_t BgL_iz00_1087;

											obj_t BgL_jz00_1088;

											BgL_iz00_1087 = BgL_sstartz00_1084;
											BgL_jz00_1088 = BgL_tstartz00_1082;
										BgL_loopz00_1086:
											if (
												((long) CINT(BgL_iz00_1087) <
													(long) CINT(BgL_sendz00_1085)))
												{	/* Ieee/vector.scm 104 */
													VECTOR_SET(BgL_resz00_506,
														CINT(BgL_jz00_1088),
														VECTOR_REF(BgL_vecz00_36, CINT(BgL_iz00_1087)));
													{	/* Ieee/vector.scm 104 */
														long BgL_arg1293z00_1095;

														long BgL_arg1294z00_1096;

														BgL_arg1293z00_1095 =
															((long) CINT(BgL_iz00_1087) + ((long) 1));
														BgL_arg1294z00_1096 =
															((long) CINT(BgL_jz00_1088) + ((long) 1));
														{
															obj_t BgL_jz00_1808;

															obj_t BgL_iz00_1806;

															BgL_iz00_1806 = BINT(BgL_arg1293z00_1095);
															BgL_jz00_1808 = BINT(BgL_arg1294z00_1096);
															BgL_jz00_1088 = BgL_jz00_1808;
															BgL_iz00_1087 = BgL_iz00_1806;
															goto BgL_loopz00_1086;
														}
													}
												}
											else
												{	/* Ieee/vector.scm 104 */
													((bool_t) 0);
												}
										}
									}
								}
							}
							{	/* Ieee/vector.scm 282 */
								int BgL_g1100z00_512;

								BgL_g1100z00_512 = VECTOR_LENGTH(BgL_vecz00_36);
								{
									int BgL_iz00_514;

									obj_t BgL_vectsz00_515;

									BgL_iz00_514 = BgL_g1100z00_512;
									BgL_vectsz00_515 = BgL_argsz00_37;
								BgL_zc3anonymousza31297ze3z83_516:
									if (NULLP(BgL_vectsz00_515))
										{	/* Ieee/vector.scm 284 */
											return BgL_resz00_506;
										}
									else
										{	/* Ieee/vector.scm 286 */
											obj_t BgL_vecz00_518;

											BgL_vecz00_518 = CAR(BgL_vectsz00_515);
											{	/* Ieee/vector.scm 104 */
												int BgL_sendz00_523;

												BgL_sendz00_523 = VECTOR_LENGTH(BgL_vecz00_518);
												{	/* Ieee/vector.scm 104 */

													{	/* Ieee/vector.scm 104 */
														obj_t BgL_tstartz00_1113;

														obj_t BgL_sstartz00_1115;

														obj_t BgL_sendz00_1116;

														BgL_tstartz00_1113 = BINT(BgL_iz00_514);
														BgL_sstartz00_1115 = BINT(((long) 0));
														BgL_sendz00_1116 = BINT(BgL_sendz00_523);
														{
															obj_t BgL_iz00_1118;

															obj_t BgL_jz00_1119;

															BgL_iz00_1118 = BgL_sstartz00_1115;
															BgL_jz00_1119 = BgL_tstartz00_1113;
														BgL_loopz00_1117:
															if (
																((long) CINT(BgL_iz00_1118) <
																	(long) CINT(BgL_sendz00_1116)))
																{	/* Ieee/vector.scm 104 */
																	VECTOR_SET(BgL_resz00_506,
																		CINT(BgL_jz00_1119),
																		VECTOR_REF(BgL_vecz00_518,
																			CINT(BgL_iz00_1118)));
																	{	/* Ieee/vector.scm 104 */
																		long BgL_arg1293z00_1126;

																		long BgL_arg1294z00_1127;

																		BgL_arg1293z00_1126 =
																			((long) CINT(BgL_iz00_1118) + ((long) 1));
																		BgL_arg1294z00_1127 =
																			((long) CINT(BgL_jz00_1119) + ((long) 1));
																		{
																			obj_t BgL_jz00_1832;

																			obj_t BgL_iz00_1830;

																			BgL_iz00_1830 = BINT(BgL_arg1293z00_1126);
																			BgL_jz00_1832 = BINT(BgL_arg1294z00_1127);
																			BgL_jz00_1119 = BgL_jz00_1832;
																			BgL_iz00_1118 = BgL_iz00_1830;
																			goto BgL_loopz00_1117;
																		}
																	}
																}
															else
																{	/* Ieee/vector.scm 104 */
																	((bool_t) 0);
																}
														}
													}
												}
											}
											{	/* Ieee/vector.scm 288 */
												long BgL_arg1299z00_524;

												obj_t BgL_arg1300z00_525;

												{	/* Ieee/vector.scm 288 */
													int BgL_arg1301z00_526;

													BgL_arg1301z00_526 = VECTOR_LENGTH(BgL_vecz00_518);
													BgL_arg1299z00_524 =
														(
														(long) (BgL_iz00_514) +
														(long) (BgL_arg1301z00_526));
												}
												BgL_arg1300z00_525 = CDR(BgL_vectsz00_515);
												{
													obj_t BgL_vectsz00_1841;

													int BgL_iz00_1839;

													BgL_iz00_1839 = (int) (BgL_arg1299z00_524);
													BgL_vectsz00_1841 = BgL_arg1300z00_525;
													BgL_vectsz00_515 = BgL_vectsz00_1841;
													BgL_iz00_514 = BgL_iz00_1839;
													goto BgL_zc3anonymousza31297ze3z83_516;
												}
											}
										}
								}
							}
						}
					else
						{	/* Ieee/vector.scm 289 */
							long BgL_arg1303z00_529;

							obj_t BgL_arg1304z00_530;

							{	/* Ieee/vector.scm 289 */
								int BgL_arg1305z00_531;

								BgL_arg1305z00_531 = VECTOR_LENGTH(CAR(BgL_vectsz00_503));
								BgL_arg1303z00_529 =
									((long) (BgL_arg1305z00_531) + (long) (BgL_lenz00_502));
							}
							BgL_arg1304z00_530 = CDR(BgL_vectsz00_503);
							{
								obj_t BgL_vectsz00_1850;

								int BgL_lenz00_1848;

								BgL_lenz00_1848 = (int) (BgL_arg1303z00_529);
								BgL_vectsz00_1850 = BgL_arg1304z00_530;
								BgL_vectsz00_503 = BgL_vectsz00_1850;
								BgL_lenz00_502 = BgL_lenz00_1848;
								goto BgL_zc3anonymousza31295ze3z83_504;
							}
						}
				}
			}
		}
	}



/* _vector-append */
	obj_t BGl__vectorzd2appendzd2zz__r4_vectors_6_8z00(obj_t BgL_envz00_1281,
		obj_t BgL_vecz00_1282, obj_t BgL_argsz00_1283)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 276 */
			{	/* Ieee/vector.scm 277 */
				obj_t BgL_auxz00_1851;

				if (VECTORP(BgL_vecz00_1282))
					{	/* Ieee/vector.scm 277 */
						BgL_auxz00_1851 = BgL_vecz00_1282;
					}
				else
					{
						obj_t BgL_auxz00_1854;

						BgL_auxz00_1854 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1519z00zz__r4_vectors_6_8z00, BINT(((long) 12045)),
							BGl_string1540z00zz__r4_vectors_6_8z00,
							BGl_string1523z00zz__r4_vectors_6_8z00, BgL_vecz00_1282);
						FAILURE(BgL_auxz00_1854, BFALSE, BFALSE);
					}
				return
					BGl_vectorzd2appendzd2zz__r4_vectors_6_8z00(BgL_auxz00_1851,
					BgL_argsz00_1283);
			}
		}
	}



/* sort */
	BGL_EXPORTED_DEF obj_t BGl_sortz00zz__r4_vectors_6_8z00(obj_t BgL_o1z00_38,
		obj_t BgL_o2z00_39)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 294 */
			if (PROCEDUREP(BgL_o1z00_38))
				{	/* Ieee/vector.scm 295 */
					return
						BGl_innerzd2sortzd2zz__r4_vectors_6_8z00(BgL_o2z00_39,
						BgL_o1z00_38);
				}
			else
				{	/* Ieee/vector.scm 295 */
					return
						BGl_innerzd2sortzd2zz__r4_vectors_6_8z00(BgL_o1z00_38,
						BgL_o2z00_39);
				}
		}
	}



/* _sort */
	obj_t BGl__sortz00zz__r4_vectors_6_8z00(obj_t BgL_envz00_1284,
		obj_t BgL_o1z00_1285, obj_t BgL_o2z00_1286)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 294 */
			return BGl_sortz00zz__r4_vectors_6_8z00(BgL_o1z00_1285, BgL_o2z00_1286);
		}
	}



/* inner-sort */
	obj_t BGl_innerzd2sortzd2zz__r4_vectors_6_8z00(obj_t BgL_objz00_40,
		obj_t BgL_procz00_41)
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 302 */
			if (NULLP(BgL_objz00_40))
				{	/* Ieee/vector.scm 304 */
					return BgL_objz00_40;
				}
			else
				{	/* Ieee/vector.scm 306 */
					bool_t BgL_testz00_1866;

					if (PAIRP(BgL_objz00_40))
						{	/* Ieee/vector.scm 306 */
							BgL_testz00_1866 = NULLP(CDR(BgL_objz00_40));
						}
					else
						{	/* Ieee/vector.scm 306 */
							BgL_testz00_1866 = ((bool_t) 0);
						}
					if (BgL_testz00_1866)
						{	/* Ieee/vector.scm 306 */
							return BgL_objz00_40;
						}
					else
						{	/* Ieee/vector.scm 309 */
							obj_t BgL_vecz00_537;

							if (VECTORP(BgL_objz00_40))
								{	/* Ieee/vector.scm 311 */
									int BgL_lenz00_541;

									BgL_lenz00_541 = VECTOR_LENGTH(BgL_objz00_40);
									{	/* Ieee/vector.scm 311 */
										obj_t BgL_newz00_542;

										BgL_newz00_542 = make_vector(BgL_lenz00_541, BUNSPEC);
										{	/* Ieee/vector.scm 312 */

											{
												long BgL_iz00_544;

												BgL_iz00_544 = ((long) 0);
											BgL_zc3anonymousza31312ze3z83_545:
												if ((BgL_iz00_544 < (long) (BgL_lenz00_541)))
													{	/* Ieee/vector.scm 314 */
														VECTOR_SET(BgL_newz00_542,
															(int) (BgL_iz00_544),
															VECTOR_REF(BgL_objz00_40, (int) (BgL_iz00_544)));
														{
															long BgL_iz00_1882;

															BgL_iz00_1882 = (BgL_iz00_544 + ((long) 1));
															BgL_iz00_544 = BgL_iz00_1882;
															goto BgL_zc3anonymousza31312ze3z83_545;
														}
													}
												else
													{	/* Ieee/vector.scm 314 */
														((bool_t) 0);
													}
											}
											BgL_vecz00_537 = BgL_newz00_542;
										}
									}
								}
							else
								{	/* Ieee/vector.scm 310 */
									if (PAIRP(BgL_objz00_40))
										{	/* Ieee/vector.scm 319 */
											BgL_vecz00_537 =
												BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
												(BgL_objz00_40);
										}
									else
										{	/* Ieee/vector.scm 319 */
											BgL_vecz00_537 =
												BGl_errorz00zz__errorz00
												(BGl_string1541z00zz__r4_vectors_6_8z00,
												BGl_string1542z00zz__r4_vectors_6_8z00, BgL_objz00_40);
										}
								}
							{	/* Ieee/vector.scm 325 */
								obj_t BgL_resz00_538;

								BgL_resz00_538 = sort_vector(BgL_vecz00_537, BgL_procz00_41);
								if (PAIRP(BgL_objz00_40))
									{	/* Ieee/vector.scm 326 */
										return
											BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00
											(BgL_resz00_538);
									}
								else
									{	/* Ieee/vector.scm 326 */
										return BgL_resz00_538;
									}
							}
						}
				}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__r4_vectors_6_8z00()
	{
		AN_OBJECT;
		{	/* Ieee/vector.scm 18 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string1543z00zz__r4_vectors_6_8z00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string1543z00zz__r4_vectors_6_8z00));
		}
	}

#ifdef __cplusplus
}
#endif
