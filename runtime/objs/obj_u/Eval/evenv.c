/*===========================================================================*/
/*   (Eval/evenv.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Eval/evenv.scm -indent -o objs/obj_u/Eval/evenv.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_z62evalzd2warningzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_argsz00;
	}                           *BgL_z62evalzd2warningzb0_bglt;


	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__evenvz00 = BUNSPEC;
	static obj_t BGl__evalzd2globalzd2valuez00zz__evenvz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__evenvz00();
	static obj_t BGl__evalzd2globalzd2namez00zz__evenvz00(obj_t, obj_t);
	extern obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_initzd2thezd2globalzd2environmentz12zc0zz__evenvz00();
	static obj_t BGl_cnstzd2initzd2zz__evenvz00();
	static obj_t BGl__definezd2primopzd2refz12z12zz__evenvz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2163z00zz__evenvz00 = BUNSPEC;
	static obj_t BGl_importedzd2moduleszd2initz00zz__evenvz00();
	static obj_t BGl_symbol2165z00zz__evenvz00 = BUNSPEC;
	static obj_t BGl_symbol2167z00zz__evenvz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_definezd2primopzd2refz12z12zz__evenvz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_bindzd2evalzd2globalz12z12zz__evenvz00(obj_t,
		obj_t);
	static obj_t BGl__unbindzd2primopz12zc0zz__evenvz00(obj_t, obj_t);
	static obj_t BGl__initzd2thezd2globalzd2environmentz12zc0zz__evenvz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__evenvz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_EXPORTED_DECL obj_t BGl_evalzd2globalzd2tagz00zz__evenvz00(obj_t);
	extern obj_t BGl_rempropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t);
	static obj_t BGl__evalzd2globalzf3z21zz__evenvz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evalzd2lookupzd2zz__evenvz00(obj_t);
	static obj_t BGl__bindzd2evalzd2globalz12z12zz__evenvz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_unbindzd2primopz12zc0zz__evenvz00(obj_t);
	static obj_t BGl__setzd2evalzd2globalzd2valuez12zc0zz__evenvz00(obj_t, obj_t,
		obj_t);
	extern BgL_z62evalzd2warningzb0_bglt
		BGl_makezd2z62evalzd2warningz62zz__objectz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__evalzd2globalzd2tagz00zz__evenvz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2evalzd2globalzd2valuez12zc0zz__evenvz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evalzd2globalzd2namez00zz__evenvz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evalzd2globalzf3z21zz__evenvz00(obj_t);
	extern obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	extern obj_t BGl_warningzd2notifyzd2zz__errorz00(obj_t);
	static obj_t BGl__definezd2primopz12zc0zz__evenvz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evalzd2globalzd2valuez00zz__evenvz00(obj_t);
	static obj_t BGl__evalzd2lookupzd2zz__evenvz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_definezd2primopz12zc0zz__evenvz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__evenvz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_unbindzd2primopz12zd2envz12zz__evenvz00,
		BgL_bgl__unbindza7d2primop2171za7, BGl__unbindzd2primopz12zc0zz__evenvz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_initzd2thezd2globalzd2environmentz12zd2envz12zz__evenvz00,
		BgL_bgl__initza7d2theza7d2gl2172z00,
		BGl__initzd2thezd2globalzd2environmentz12zc0zz__evenvz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_evalzd2globalzf3zd2envzf3zz__evenvz00,
		BgL_bgl__evalza7d2globalza7f2173z00, BGl__evalzd2globalzf3z21zz__evenvz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2evalzd2globalzd2valuez12zd2envz12zz__evenvz00,
		BgL_bgl__setza7d2evalza7d2gl2174z00,
		BGl__setzd2evalzd2globalzd2valuez12zc0zz__evenvz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_evalzd2lookupzd2envz00zz__evenvz00,
		BgL_bgl__evalza7d2lookupza7d2175z00, BGl__evalzd2lookupzd2zz__evenvz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bindzd2evalzd2globalz12zd2envzc0zz__evenvz00,
		BgL_bgl__bindza7d2evalza7d2g2176z00,
		BGl__bindzd2evalzd2globalz12z12zz__evenvz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_evalzd2globalzd2namezd2envzd2zz__evenvz00,
		BgL_bgl__evalza7d2globalza7d2177z00,
		BGl__evalzd2globalzd2namez00zz__evenvz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_evalzd2globalzd2tagzd2envzd2zz__evenvz00,
		BgL_bgl__evalza7d2globalza7d2178z00,
		BGl__evalzd2globalzd2tagz00zz__evenvz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_evalzd2globalzd2valuezd2envzd2zz__evenvz00,
		BgL_bgl__evalza7d2globalza7d2179z00,
		BGl__evalzd2globalzd2valuez00zz__evenvz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_definezd2primopz12zd2envz12zz__evenvz00,
		BgL_bgl__defineza7d2primop2180za7, BGl__definezd2primopz12zc0zz__evenvz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_definezd2primopzd2refz12zd2envzc0zz__evenvz00,
		BgL_bgl__defineza7d2primop2181za7,
		BGl__definezd2primopzd2refz12z12zz__evenvz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2164z00zz__evenvz00,
		BgL_bgl_string2164za700za7za7_2182za7, "nothing", 7);
	      DEFINE_STRING(BGl_string2166z00zz__evenvz00,
		BgL_bgl_string2166za700za7za7_2183za7, "_0000", 5);
	      DEFINE_STRING(BGl_string2168z00zz__evenvz00,
		BgL_bgl_string2168za700za7za7_2184za7, "_0000_assert", 12);
	      DEFINE_STRING(BGl_string2170z00zz__evenvz00,
		BgL_bgl_string2170za700za7za7_2185za7, "__evenv", 7);
	      DEFINE_STRING(BGl_string2169z00zz__evenvz00,
		BgL_bgl_string2169za700za7za7_2186za7, "Rebinding compiled constant", 27);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__evenvz00(long
		BgL_checksumz00_1530, char *BgL_fromz00_1531)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__evenvz00))
				{
					BGl_requirezd2initializa7ationz75zz__evenvz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__evenvz00();
					BGl_importedzd2moduleszd2initz00zz__evenvz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__evenvz00()
	{
		AN_OBJECT;
		{	/* Eval/evenv.scm 14 */
			BGl_symbol2163z00zz__evenvz00 =
				bstring_to_symbol(BGl_string2164z00zz__evenvz00);
			BGl_symbol2165z00zz__evenvz00 =
				bstring_to_symbol(BGl_string2166z00zz__evenvz00);
			return (BGl_symbol2167z00zz__evenvz00 =
				bstring_to_symbol(BGl_string2168z00zz__evenvz00), BUNSPEC);
		}
	}



/* init-the-global-environment! */
	BGL_EXPORTED_DEF obj_t
		BGl_initzd2thezd2globalzd2environmentz12zc0zz__evenvz00()
	{
		AN_OBJECT;
		{	/* Eval/evenv.scm 80 */
			return BGl_symbol2163z00zz__evenvz00;
		}
	}



/* _init-the-global-environment! */
	obj_t BGl__initzd2thezd2globalzd2environmentz12zc0zz__evenvz00(obj_t
		BgL_envz00_1497)
	{
		AN_OBJECT;
		{	/* Eval/evenv.scm 80 */
			return BGl_symbol2163z00zz__evenvz00;
		}
	}



/* eval-global? */
	BGL_EXPORTED_DEF obj_t BGl_evalzd2globalzf3z21zz__evenvz00(obj_t
		BgL_variablez00_1)
	{
		AN_OBJECT;
		{	/* Eval/evenv.scm 91 */
			if (VECTORP(BgL_variablez00_1))
				{	/* Eval/evenv.scm 92 */
					int BgL_arg1893z00_1522;

					BgL_arg1893z00_1522 = VECTOR_LENGTH(BgL_variablez00_1);
					return BBOOL(((long) (BgL_arg1893z00_1522) == ((long) 3)));
				}
			else
				{	/* Eval/evenv.scm 92 */
					return BFALSE;
				}
		}
	}



/* _eval-global? */
	obj_t BGl__evalzd2globalzf3z21zz__evenvz00(obj_t BgL_envz00_1498,
		obj_t BgL_variablez00_1499)
	{
		AN_OBJECT;
		{	/* Eval/evenv.scm 91 */
			if (VECTORP(BgL_variablez00_1499))
				{	/* Eval/evenv.scm 92 */
					int BgL_arg1893z00_1524;

					BgL_arg1893z00_1524 = VECTOR_LENGTH(BgL_variablez00_1499);
					return BBOOL(((long) (BgL_arg1893z00_1524) == ((long) 3)));
				}
			else
				{	/* Eval/evenv.scm 92 */
					return BFALSE;
				}
		}
	}



/* bind-eval-global! */
	BGL_EXPORTED_DEF obj_t BGl_bindzd2evalzd2globalz12z12zz__evenvz00(obj_t
		BgL_namez00_2, obj_t BgL_varz00_3)
	{
		AN_OBJECT;
		{	/* Eval/evenv.scm 99 */
			return
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_namez00_2,
				BGl_symbol2165z00zz__evenvz00, BgL_varz00_3);
		}
	}



/* _bind-eval-global! */
	obj_t BGl__bindzd2evalzd2globalz12z12zz__evenvz00(obj_t BgL_envz00_1500,
		obj_t BgL_namez00_1501, obj_t BgL_varz00_1502)
	{
		AN_OBJECT;
		{	/* Eval/evenv.scm 99 */
			return
				BGl_bindzd2evalzd2globalz12z12zz__evenvz00(BgL_namez00_1501,
				BgL_varz00_1502);
		}
	}



/* unbind-primop! */
	BGL_EXPORTED_DEF obj_t BGl_unbindzd2primopz12zc0zz__evenvz00(obj_t
		BgL_namez00_6)
	{
		AN_OBJECT;
		{	/* Eval/evenv.scm 111 */
			return
				BGl_rempropz12z12zz__r4_symbols_6_4z00(BgL_namez00_6,
				BGl_symbol2165z00zz__evenvz00);
		}
	}



/* _unbind-primop! */
	obj_t BGl__unbindzd2primopz12zc0zz__evenvz00(obj_t BgL_envz00_1503,
		obj_t BgL_namez00_1504)
	{
		AN_OBJECT;
		{	/* Eval/evenv.scm 111 */
			return BGl_unbindzd2primopz12zc0zz__evenvz00(BgL_namez00_1504);
		}
	}



/* define-primop! */
	BGL_EXPORTED_DEF obj_t BGl_definezd2primopz12zc0zz__evenvz00(obj_t
		BgL_varz00_8, obj_t BgL_valz00_9)
	{
		AN_OBJECT;
		{	/* Eval/evenv.scm 123 */
			{	/* Eval/evenv.scm 124 */
				obj_t BgL_cellz00_786;

				{	/* Eval/evenv.scm 124 */
					obj_t BgL_propz00_1253;

					BgL_propz00_1253 =
						BGl_getpropz00zz__r4_symbols_6_4z00(BgL_varz00_8,
						BGl_symbol2167z00zz__evenvz00);
					if (CBOOL(BgL_propz00_1253))
						{	/* Eval/evenv.scm 124 */
							BgL_cellz00_786 = BgL_propz00_1253;
						}
					else
						{	/* Eval/evenv.scm 124 */
							obj_t BgL_propz00_1254;

							BgL_propz00_1254 =
								BGl_getpropz00zz__r4_symbols_6_4z00(BgL_varz00_8,
								BGl_symbol2165z00zz__evenvz00);
							if (CBOOL(BgL_propz00_1254))
								{	/* Eval/evenv.scm 124 */
									BgL_cellz00_786 = BgL_propz00_1254;
								}
							else
								{	/* Eval/evenv.scm 124 */
									BgL_cellz00_786 = BFALSE;
								}
						}
				}
				{	/* Eval/evenv.scm 125 */
					bool_t BgL_testz00_1562;

					if (VECTORP(BgL_cellz00_786))
						{	/* Eval/evenv.scm 125 */
							int BgL_arg1893z00_1257;

							BgL_arg1893z00_1257 = VECTOR_LENGTH(BgL_cellz00_786);
							BgL_testz00_1562 = ((long) (BgL_arg1893z00_1257) == ((long) 3));
						}
					else
						{	/* Eval/evenv.scm 125 */
							BgL_testz00_1562 = ((bool_t) 0);
						}
					if (BgL_testz00_1562)
						{	/* Eval/evenv.scm 125 */
							return
								VECTOR_SET(BgL_cellz00_786, (int) (((long) 2)), BgL_valz00_9);
						}
					else
						{	/* Eval/evenv.scm 126 */
							obj_t BgL_arg1896z00_788;

							{	/* Eval/evenv.scm 126 */
								obj_t BgL_v1848z00_789;

								BgL_v1848z00_789 = create_vector((int) (((long) 3)));
								VECTOR_SET(BgL_v1848z00_789, (int) (((long) 2)), BgL_valz00_9);
								VECTOR_SET(BgL_v1848z00_789, (int) (((long) 1)), BgL_varz00_8);
								VECTOR_SET(BgL_v1848z00_789,
									(int) (((long) 0)), BINT(((long) 0)));
								BgL_arg1896z00_788 = BgL_v1848z00_789;
							}
							return
								BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_varz00_8,
								BGl_symbol2165z00zz__evenvz00, BgL_arg1896z00_788);
						}
				}
			}
		}
	}



/* _define-primop! */
	obj_t BGl__definezd2primopz12zc0zz__evenvz00(obj_t BgL_envz00_1505,
		obj_t BgL_varz00_1506, obj_t BgL_valz00_1507)
	{
		AN_OBJECT;
		{	/* Eval/evenv.scm 123 */
			return
				BGl_definezd2primopz12zc0zz__evenvz00(BgL_varz00_1506, BgL_valz00_1507);
		}
	}



/* define-primop-ref! */
	BGL_EXPORTED_DEF obj_t BGl_definezd2primopzd2refz12z12zz__evenvz00(obj_t
		BgL_varz00_10, obj_t BgL_addrz00_11)
	{
		AN_OBJECT;
		{	/* Eval/evenv.scm 132 */
			{	/* Eval/evenv.scm 133 */
				obj_t BgL_cellz00_790;

				{	/* Eval/evenv.scm 133 */
					obj_t BgL_propz00_1280;

					BgL_propz00_1280 =
						BGl_getpropz00zz__r4_symbols_6_4z00(BgL_varz00_10,
						BGl_symbol2167z00zz__evenvz00);
					if (CBOOL(BgL_propz00_1280))
						{	/* Eval/evenv.scm 133 */
							BgL_cellz00_790 = BgL_propz00_1280;
						}
					else
						{	/* Eval/evenv.scm 133 */
							obj_t BgL_propz00_1281;

							BgL_propz00_1281 =
								BGl_getpropz00zz__r4_symbols_6_4z00(BgL_varz00_10,
								BGl_symbol2165z00zz__evenvz00);
							if (CBOOL(BgL_propz00_1281))
								{	/* Eval/evenv.scm 133 */
									BgL_cellz00_790 = BgL_propz00_1281;
								}
							else
								{	/* Eval/evenv.scm 133 */
									BgL_cellz00_790 = BFALSE;
								}
						}
				}
				{	/* Eval/evenv.scm 134 */
					bool_t BgL_testz00_1587;

					if (VECTORP(BgL_cellz00_790))
						{	/* Eval/evenv.scm 134 */
							int BgL_arg1893z00_1284;

							BgL_arg1893z00_1284 = VECTOR_LENGTH(BgL_cellz00_790);
							BgL_testz00_1587 = ((long) (BgL_arg1893z00_1284) == ((long) 3));
						}
					else
						{	/* Eval/evenv.scm 134 */
							BgL_testz00_1587 = ((bool_t) 0);
						}
					if (BgL_testz00_1587)
						{	/* Eval/evenv.scm 134 */
							VECTOR_SET(BgL_cellz00_790, (int) (((long) 2)), BgL_addrz00_11);
							{	/* Eval/evenv.scm 142 */
								BgL_z62evalzd2warningzb0_bglt BgL_arg1898z00_792;

								{	/* Eval/evenv.scm 142 */
									obj_t BgL_arg1899z00_793;

									{	/* Eval/evenv.scm 142 */
										obj_t BgL_list1900z00_794;

										{	/* Eval/evenv.scm 142 */
											obj_t BgL_arg1902z00_796;

											BgL_arg1902z00_796 = MAKE_PAIR(BgL_varz00_10, BNIL);
											BgL_list1900z00_794 =
												MAKE_PAIR(BGl_string2169z00zz__evenvz00,
												BgL_arg1902z00_796);
										}
										BgL_arg1899z00_793 = BgL_list1900z00_794;
									}
									BgL_arg1898z00_792 =
										BGl_makezd2z62evalzd2warningz62zz__objectz00(BFALSE, BFALSE,
										BFALSE, BgL_arg1899z00_793);
								}
								return
									BGl_warningzd2notifyzd2zz__errorz00(
									(obj_t) (BgL_arg1898z00_792));
							}
						}
					else
						{	/* Eval/evenv.scm 135 */
							obj_t BgL_arg1903z00_797;

							{	/* Eval/evenv.scm 135 */
								obj_t BgL_v1849z00_798;

								BgL_v1849z00_798 = create_vector((int) (((long) 3)));
								VECTOR_SET(BgL_v1849z00_798,
									(int) (((long) 2)), BgL_addrz00_11);
								VECTOR_SET(BgL_v1849z00_798, (int) (((long) 1)), BgL_varz00_10);
								VECTOR_SET(BgL_v1849z00_798,
									(int) (((long) 0)), BINT(((long) 1)));
								BgL_arg1903z00_797 = BgL_v1849z00_798;
							}
							return
								BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_varz00_10,
								BGl_symbol2165z00zz__evenvz00, BgL_arg1903z00_797);
						}
				}
			}
		}
	}



/* _define-primop-ref! */
	obj_t BGl__definezd2primopzd2refz12z12zz__evenvz00(obj_t BgL_envz00_1508,
		obj_t BgL_varz00_1509, obj_t BgL_addrz00_1510)
	{
		AN_OBJECT;
		{	/* Eval/evenv.scm 132 */
			return
				BGl_definezd2primopzd2refz12z12zz__evenvz00(BgL_varz00_1509,
				BgL_addrz00_1510);
		}
	}



/* eval-lookup */
	BGL_EXPORTED_DEF obj_t BGl_evalzd2lookupzd2zz__evenvz00(obj_t BgL_varz00_14)
	{
		AN_OBJECT;
		{	/* Eval/evenv.scm 153 */
			{	/* Eval/evenv.scm 154 */
				obj_t BgL_propz00_1308;

				BgL_propz00_1308 =
					BGl_getpropz00zz__r4_symbols_6_4z00(BgL_varz00_14,
					BGl_symbol2167z00zz__evenvz00);
				if (CBOOL(BgL_propz00_1308))
					{	/* Eval/evenv.scm 154 */
						return BgL_propz00_1308;
					}
				else
					{	/* Eval/evenv.scm 154 */
						obj_t BgL_propz00_1309;

						BgL_propz00_1309 =
							BGl_getpropz00zz__r4_symbols_6_4z00(BgL_varz00_14,
							BGl_symbol2165z00zz__evenvz00);
						if (CBOOL(BgL_propz00_1309))
							{	/* Eval/evenv.scm 154 */
								return BgL_propz00_1309;
							}
						else
							{	/* Eval/evenv.scm 154 */
								return BFALSE;
							}
					}
			}
		}
	}



/* _eval-lookup */
	obj_t BGl__evalzd2lookupzd2zz__evenvz00(obj_t BgL_envz00_1511,
		obj_t BgL_varz00_1512)
	{
		AN_OBJECT;
		{	/* Eval/evenv.scm 153 */
			return BGl_evalzd2lookupzd2zz__evenvz00(BgL_varz00_1512);
		}
	}



/* eval-global-tag */
	BGL_EXPORTED_DEF obj_t BGl_evalzd2globalzd2tagz00zz__evenvz00(obj_t
		BgL_evalzd2globalzd2_15)
	{
		AN_OBJECT;
		{	/* Eval/evenv.scm 165 */
			return VECTOR_REF(BgL_evalzd2globalzd2_15, (int) (((long) 0)));
		}
	}



/* _eval-global-tag */
	obj_t BGl__evalzd2globalzd2tagz00zz__evenvz00(obj_t BgL_envz00_1513,
		obj_t BgL_evalzd2globalzd2_1514)
	{
		AN_OBJECT;
		{	/* Eval/evenv.scm 165 */
			return VECTOR_REF(BgL_evalzd2globalzd2_1514, (int) (((long) 0)));
		}
	}



/* eval-global-name */
	BGL_EXPORTED_DEF obj_t BGl_evalzd2globalzd2namez00zz__evenvz00(obj_t
		BgL_evalzd2globalzd2_16)
	{
		AN_OBJECT;
		{	/* Eval/evenv.scm 171 */
			return VECTOR_REF(BgL_evalzd2globalzd2_16, (int) (((long) 1)));
		}
	}



/* _eval-global-name */
	obj_t BGl__evalzd2globalzd2namez00zz__evenvz00(obj_t BgL_envz00_1515,
		obj_t BgL_evalzd2globalzd2_1516)
	{
		AN_OBJECT;
		{	/* Eval/evenv.scm 171 */
			return VECTOR_REF(BgL_evalzd2globalzd2_1516, (int) (((long) 1)));
		}
	}



/* eval-global-value */
	BGL_EXPORTED_DEF obj_t BGl_evalzd2globalzd2valuez00zz__evenvz00(obj_t
		BgL_evalzd2globalzd2_17)
	{
		AN_OBJECT;
		{	/* Eval/evenv.scm 177 */
			return VECTOR_REF(BgL_evalzd2globalzd2_17, (int) (((long) 2)));
		}
	}



/* _eval-global-value */
	obj_t BGl__evalzd2globalzd2valuez00zz__evenvz00(obj_t BgL_envz00_1517,
		obj_t BgL_evalzd2globalzd2_1518)
	{
		AN_OBJECT;
		{	/* Eval/evenv.scm 177 */
			return VECTOR_REF(BgL_evalzd2globalzd2_1518, (int) (((long) 2)));
		}
	}



/* set-eval-global-value! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2evalzd2globalzd2valuez12zc0zz__evenvz00(obj_t
		BgL_evalzd2globalzd2_18, obj_t BgL_valuez00_19)
	{
		AN_OBJECT;
		{	/* Eval/evenv.scm 183 */
			return
				VECTOR_SET(BgL_evalzd2globalzd2_18,
				(int) (((long) 2)), BgL_valuez00_19);
		}
	}



/* _set-eval-global-value! */
	obj_t BGl__setzd2evalzd2globalzd2valuez12zc0zz__evenvz00(obj_t
		BgL_envz00_1519, obj_t BgL_evalzd2globalzd2_1520, obj_t BgL_valuez00_1521)
	{
		AN_OBJECT;
		{	/* Eval/evenv.scm 183 */
			return
				VECTOR_SET(BgL_evalzd2globalzd2_1520,
				(int) (((long) 2)), BgL_valuez00_1521);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__evenvz00()
	{
		AN_OBJECT;
		{	/* Eval/evenv.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__evenvz00()
	{
		AN_OBJECT;
		{	/* Eval/evenv.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__evenvz00()
	{
		AN_OBJECT;
		{	/* Eval/evenv.scm 14 */
			return
				BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long)
					504082187), BSTRING_TO_STRING(BGl_string2170z00zz__evenvz00));
		}
	}

#ifdef __cplusplus
}
#endif
