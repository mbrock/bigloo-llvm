/*===========================================================================*/
/*   (Rgc/rgcset.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Rgc/rgcset.scm -indent -o objs/obj_u/Rgc/rgcset.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl__rgcsetzd2equalzf3z21zz__rgc_setz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_listzd2ze3rgcsetz31zz__rgc_setz00(obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_rgcsetzd2removez12zc0zz__rgc_setz00(obj_t, long);
	static obj_t BGl__rgcsetzd2orzd2zz__rgc_setz00(obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2rgcsetzd2zz__rgc_setz00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl__rgcsetzd2andz12zc0zz__rgc_setz00(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__rgc_setz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_rgcsetzd2equalzf3z21zz__rgc_setz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__rgc_setz00();
	BGL_EXPORTED_DECL obj_t BGl_rgcsetzd2butz12zc0zz__rgc_setz00(obj_t, obj_t);
	extern obj_t create_struct(obj_t, int);
	BGL_EXPORTED_DECL obj_t BGl_rgcsetzd2notz12zc0zz__rgc_setz00(obj_t);
	static obj_t BGl__rgcsetzd2addz12zc0zz__rgc_setz00(obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__rgc_setz00();
	static obj_t BGl__rgcsetzd2ze3listz31zz__rgc_setz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__rgc_setz00();
	static long BGl_bitzd2perzd2wordz00zz__rgc_setz00;
	static obj_t BGl__rgcsetzd2lengthzd2zz__rgc_setz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rgcsetzd2ze3listz31zz__rgc_setz00(obj_t);
	static obj_t BGl_symbol2293z00zz__rgc_setz00 = BUNSPEC;
	static obj_t BGl__rgcsetzd2memberzf3z21zz__rgc_setz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__rgcsetzd2butz12zc0zz__rgc_setz00(obj_t, obj_t, obj_t);
	extern bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__rgc_setz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zz__rgc_setz00();
	BGL_EXPORTED_DECL long BGl_rgcsetzd2lengthzd2zz__rgc_setz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rgcsetzd2orzd2zz__rgc_setz00(obj_t, obj_t);
	static obj_t BGl__rgcsetzd2notz12zc0zz__rgc_setz00(obj_t, obj_t);
	static obj_t BGl__rgcsetzd2notzd2zz__rgc_setz00(obj_t, obj_t);
	static obj_t BGl__rgcsetzd2orz12zc0zz__rgc_setz00(obj_t, obj_t, obj_t);
	extern obj_t make_vector(int, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rgcsetzd2memberzf3z21zz__rgc_setz00(obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_forzd2eachzd2rgcsetz00zz__rgc_setz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2rgcsetzd2zz__rgc_setz00(long);
	BGL_EXPORTED_DECL obj_t BGl_rgcsetzd2andz12zc0zz__rgc_setz00(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza31958ze3z83zz__rgc_setz00(obj_t, obj_t);
	static obj_t BGl__rgcsetzd2ze3hashz31zz__rgc_setz00(obj_t, obj_t);
	static obj_t BGl__rgcsetzd2removez12zc0zz__rgc_setz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rgcsetzd2notzd2zz__rgc_setz00(obj_t);
	static obj_t BGl__forzd2eachzd2rgcsetz00zz__rgc_setz00(obj_t, obj_t, obj_t);
	static obj_t BGl__listzd2ze3rgcsetz31zz__rgc_setz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rgcsetzd2orz12zc0zz__rgc_setz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_rgcsetzd2ze3hashz31zz__rgc_setz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rgcsetzd2addz12zc0zz__rgc_setz00(obj_t, long);
	static obj_t BGl_methodzd2initzd2zz__rgc_setz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rgcsetzd2envz00zz__rgc_setz00,
		BgL_bgl__makeza7d2rgcsetza7d2305z00, BGl__makezd2rgcsetzd2zz__rgc_setz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgcsetzd2memberzf3zd2envzf3zz__rgc_setz00,
		BgL_bgl__rgcsetza7d2member2306za7, BGl__rgcsetzd2memberzf3z21zz__rgc_setz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgcsetzd2butz12zd2envz12zz__rgc_setz00,
		BgL_bgl__rgcsetza7d2butza7122307z00, BGl__rgcsetzd2butz12zc0zz__rgc_setz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgcsetzd2orzd2envz00zz__rgc_setz00,
		BgL_bgl__rgcsetza7d2orza7d2za72308za7, BGl__rgcsetzd2orzd2zz__rgc_setz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgcsetzd2ze3hashzd2envze3zz__rgc_setz00,
		BgL_bgl__rgcsetza7d2za7e3has2309z00, BGl__rgcsetzd2ze3hashz31zz__rgc_setz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgcsetzd2notzd2envz00zz__rgc_setz00,
		BgL_bgl__rgcsetza7d2notza7d22310z00, BGl__rgcsetzd2notzd2zz__rgc_setz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgcsetzd2equalzf3zd2envzf3zz__rgc_setz00,
		BgL_bgl__rgcsetza7d2equalza72311z00,
		BGl__rgcsetzd2equalzf3z21zz__rgc_setz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgcsetzd2orz12zd2envz12zz__rgc_setz00,
		BgL_bgl__rgcsetza7d2orza712za72312za7, BGl__rgcsetzd2orz12zc0zz__rgc_setz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgcsetzd2ze3listzd2envze3zz__rgc_setz00,
		BgL_bgl__rgcsetza7d2za7e3lis2313z00, BGl__rgcsetzd2ze3listz31zz__rgc_setz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_forzd2eachzd2rgcsetzd2envzd2zz__rgc_setz00,
		BgL_bgl__forza7d2eachza7d2rg2314z00,
		BGl__forzd2eachzd2rgcsetz00zz__rgc_setz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgcsetzd2notz12zd2envz12zz__rgc_setz00,
		BgL_bgl__rgcsetza7d2notza7122315z00, BGl__rgcsetzd2notz12zc0zz__rgc_setz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2ze3rgcsetzd2envze3zz__rgc_setz00,
		BgL_bgl__listza7d2za7e3rgcse2316z00, BGl__listzd2ze3rgcsetz31zz__rgc_setz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgcsetzd2andz12zd2envz12zz__rgc_setz00,
		BgL_bgl__rgcsetza7d2andza7122317z00, BGl__rgcsetzd2andz12zc0zz__rgc_setz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgcsetzd2removez12zd2envz12zz__rgc_setz00,
		BgL_bgl__rgcsetza7d2remove2318za7, BGl__rgcsetzd2removez12zc0zz__rgc_setz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgcsetzd2addz12zd2envz12zz__rgc_setz00,
		BgL_bgl__rgcsetza7d2addza7122319z00, BGl__rgcsetzd2addz12zc0zz__rgc_setz00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2300z00zz__rgc_setz00,
		BgL_bgl_string2300za700za7za7_2320za7, "_list->rgcset", 13);
	      DEFINE_STRING(BGl_string2301z00zz__rgc_setz00,
		BgL_bgl_string2301za700za7za7_2321za7, "_for-each-rgcset", 16);
	      DEFINE_STRING(BGl_string2302z00zz__rgc_setz00,
		BgL_bgl_string2302za700za7za7_2322za7, "procedure", 9);
	      DEFINE_STRING(BGl_string2303z00zz__rgc_setz00,
		BgL_bgl_string2303za700za7za7_2323za7, "_rgcset-remove!", 15);
	      DEFINE_STRING(BGl_string2304z00zz__rgc_setz00,
		BgL_bgl_string2304za700za7za7_2324za7, "__rgc_set", 9);
	      DEFINE_STRING(BGl_string2294z00zz__rgc_setz00,
		BgL_bgl_string2294za700za7za7_2325za7, "__rgcset", 8);
	      DEFINE_STRING(BGl_string2295z00zz__rgc_setz00,
		BgL_bgl_string2295za700za7za7_2326za7, "/tmp/bigloo/runtime/Rgc/rgcset.scm",
		34);
	      DEFINE_STRING(BGl_string2296z00zz__rgc_setz00,
		BgL_bgl_string2296za700za7za7_2327za7, "_make-rgcset", 12);
	      DEFINE_STRING(BGl_string2297z00zz__rgc_setz00,
		BgL_bgl_string2297za700za7za7_2328za7, "long", 4);
	      DEFINE_STRING(BGl_string2298z00zz__rgc_setz00,
		BgL_bgl_string2298za700za7za7_2329za7, "_rgcset-add!", 12);
	      DEFINE_STRING(BGl_string2299z00zz__rgc_setz00,
		BgL_bgl_string2299za700za7za7_2330za7, "_rgcset-member?", 15);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgcsetzd2lengthzd2envz00zz__rgc_setz00,
		BgL_bgl__rgcsetza7d2length2331za7, BGl__rgcsetzd2lengthzd2zz__rgc_setz00,
		0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__rgc_setz00(long
		BgL_checksumz00_2434, char *BgL_fromz00_2435)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__rgc_setz00))
				{
					BGl_requirezd2initializa7ationz75zz__rgc_setz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__rgc_setz00();
					BGl_importedzd2moduleszd2initz00zz__rgc_setz00();
					BGl_toplevelzd2initzd2zz__rgc_setz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__rgc_setz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 15 */
			return (BGl_symbol2293z00zz__rgc_setz00 =
				bstring_to_symbol(BGl_string2294z00zz__rgc_setz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__rgc_setz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 15 */
			BGl_bitzd2perzd2wordz00zz__rgc_setz00 =
				((((long) 1) << (int) ((PTR_ALIGNMENT + ((long) 3)))) - PTR_ALIGNMENT);
			return BUNSPEC;
		}
	}



/* make-rgcset */
	BGL_EXPORTED_DEF obj_t BGl_makezd2rgcsetzd2zz__rgc_setz00(long
		BgL_siza7eza7_11)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 84 */
			{	/* Rgc/rgcset.scm 85 */
				obj_t BgL_arg1910z00_1557;

				{	/* Rgc/rgcset.scm 85 */
					long BgL_arg1911z00_1558;

					{	/* Rgc/rgcset.scm 85 */
						obj_t BgL_auxz00_2447;

						{	/* Rgc/rgcset.scm 85 */
							obj_t BgL_auxz00_2448;

							{	/* Rgc/rgcset.scm 85 */
								long BgL_za72za7_1563;

								BgL_za72za7_1563 = BGl_bitzd2perzd2wordz00zz__rgc_setz00;
								BgL_auxz00_2448 = BINT((BgL_siza7eza7_11 / BgL_za72za7_1563));
							}
							BgL_auxz00_2447 =
								BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long) 1)),
								BgL_auxz00_2448);
						}
						BgL_arg1911z00_1558 = (long) CINT(BgL_auxz00_2447);
					}
					BgL_arg1910z00_1557 =
						make_vector((int) (BgL_arg1911z00_1558), BINT(((long) 0)));
				}
				{	/* Rgc/rgcset.scm 85 */
					obj_t BgL_newz00_1566;

					BgL_newz00_1566 =
						create_struct(BGl_symbol2293z00zz__rgc_setz00, (int) (((long) 2)));
					{	/* Rgc/rgcset.scm 85 */
						int BgL_auxz00_2459;

						BgL_auxz00_2459 = (int) (((long) 1));
						STRUCT_SET(BgL_newz00_1566, BgL_auxz00_2459, BgL_arg1910z00_1557);
					}
					{	/* Rgc/rgcset.scm 85 */
						obj_t BgL_auxz00_2464;

						int BgL_auxz00_2462;

						BgL_auxz00_2464 = BINT(BgL_siza7eza7_11);
						BgL_auxz00_2462 = (int) (((long) 0));
						STRUCT_SET(BgL_newz00_1566, BgL_auxz00_2462, BgL_auxz00_2464);
					}
					return BgL_newz00_1566;
				}
			}
		}
	}



/* _make-rgcset */
	obj_t BGl__makezd2rgcsetzd2zz__rgc_setz00(obj_t BgL_envz00_2374,
		obj_t BgL_siza7eza7_2375)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 84 */
			{	/* Rgc/rgcset.scm 85 */
				long BgL_auxz00_2467;

				{	/* Rgc/rgcset.scm 85 */
					obj_t BgL_auxz00_2468;

					if (INTEGERP(BgL_siza7eza7_2375))
						{	/* Rgc/rgcset.scm 85 */
							BgL_auxz00_2468 = BgL_siza7eza7_2375;
						}
					else
						{
							obj_t BgL_auxz00_2471;

							BgL_auxz00_2471 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2295z00zz__rgc_setz00,
								BINT(((long) 3255)), BGl_string2296z00zz__rgc_setz00,
								BGl_string2297z00zz__rgc_setz00, BgL_siza7eza7_2375);
							FAILURE(BgL_auxz00_2471, BFALSE, BFALSE);
						}
					BgL_auxz00_2467 = (long) CINT(BgL_auxz00_2468);
				}
				return BGl_makezd2rgcsetzd2zz__rgc_setz00(BgL_auxz00_2467);
			}
		}
	}



/* rgcset-add! */
	BGL_EXPORTED_DEF obj_t BGl_rgcsetzd2addz12zc0zz__rgc_setz00(obj_t
		BgL_rgcsetz00_18, long BgL_numz00_19)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 108 */
			{	/* Rgc/rgcset.scm 109 */
				long BgL_wordzd2numzd2_1595;

				BgL_wordzd2numzd2_1595 =
					(BgL_numz00_19 / BGl_bitzd2perzd2wordz00zz__rgc_setz00);
				{	/* Rgc/rgcset.scm 109 */
					long BgL_wordzd2bitzd2_1596;

					BgL_wordzd2bitzd2_1596 =
						(BgL_numz00_19 % BGl_bitzd2perzd2wordz00zz__rgc_setz00);
					{	/* Rgc/rgcset.scm 109 */
						obj_t BgL_oldz00_1597;

						BgL_oldz00_1597 =
							VECTOR_REF(STRUCT_REF(BgL_rgcsetz00_18,
								(int) (((long) 1))), (int) (BgL_wordzd2numzd2_1595));
						{	/* Rgc/rgcset.scm 109 */

							{	/* Rgc/rgcset.scm 109 */
								long BgL_arg1920z00_1598;

								BgL_arg1920z00_1598 =
									(
									(long) CINT(BgL_oldz00_1597) |
									(((long) 1) << (int) (BgL_wordzd2bitzd2_1596)));
								return
									VECTOR_SET(STRUCT_REF(BgL_rgcsetz00_18,
										(int) (((long) 1))),
									(int) (BgL_wordzd2numzd2_1595), BINT(BgL_arg1920z00_1598));
		}}}}}}
	}



/* _rgcset-add! */
	obj_t BGl__rgcsetzd2addz12zc0zz__rgc_setz00(obj_t BgL_envz00_2376,
		obj_t BgL_rgcsetz00_2377, obj_t BgL_numz00_2378)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 108 */
			{	/* Rgc/rgcset.scm 109 */
				long BgL_auxz00_2492;

				{	/* Rgc/rgcset.scm 109 */
					obj_t BgL_auxz00_2493;

					if (INTEGERP(BgL_numz00_2378))
						{	/* Rgc/rgcset.scm 109 */
							BgL_auxz00_2493 = BgL_numz00_2378;
						}
					else
						{
							obj_t BgL_auxz00_2496;

							BgL_auxz00_2496 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2295z00zz__rgc_setz00,
								BINT(((long) 4490)), BGl_string2298z00zz__rgc_setz00,
								BGl_string2297z00zz__rgc_setz00, BgL_numz00_2378);
							FAILURE(BgL_auxz00_2496, BFALSE, BFALSE);
						}
					BgL_auxz00_2492 = (long) CINT(BgL_auxz00_2493);
				}
				return
					BGl_rgcsetzd2addz12zc0zz__rgc_setz00(BgL_rgcsetz00_2377,
					BgL_auxz00_2492);
			}
		}
	}



/* rgcset-member? */
	BGL_EXPORTED_DEF bool_t BGl_rgcsetzd2memberzf3z21zz__rgc_setz00(obj_t
		BgL_setz00_20, long BgL_numz00_21)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 119 */
			{	/* Rgc/rgcset.scm 120 */
				long BgL_wordzd2numzd2_1626;

				BgL_wordzd2numzd2_1626 =
					(BgL_numz00_21 / BGl_bitzd2perzd2wordz00zz__rgc_setz00);
				{	/* Rgc/rgcset.scm 120 */
					long BgL_wordzd2bitzd2_1627;

					BgL_wordzd2bitzd2_1627 =
						(BgL_numz00_21 % BGl_bitzd2perzd2wordz00zz__rgc_setz00);
					{	/* Rgc/rgcset.scm 120 */
						obj_t BgL_oldz00_1628;

						BgL_oldz00_1628 =
							VECTOR_REF(STRUCT_REF(BgL_setz00_20,
								(int) (((long) 1))), (int) (BgL_wordzd2numzd2_1626));
						{	/* Rgc/rgcset.scm 120 */
							long BgL_maskz00_1629;

							BgL_maskz00_1629 = (((long) 1) << (int) (BgL_wordzd2bitzd2_1627));
							{	/* Rgc/rgcset.scm 120 */

								return
									(BgL_maskz00_1629 ==
									((long) CINT(BgL_oldz00_1628) & BgL_maskz00_1629));
		}}}}}}
	}



/* _rgcset-member? */
	obj_t BGl__rgcsetzd2memberzf3z21zz__rgc_setz00(obj_t BgL_envz00_2379,
		obj_t BgL_setz00_2380, obj_t BgL_numz00_2381)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 119 */
			{	/* Rgc/rgcset.scm 120 */
				bool_t BgL_auxz00_2513;

				{	/* Rgc/rgcset.scm 120 */
					long BgL_auxz00_2514;

					{	/* Rgc/rgcset.scm 120 */
						obj_t BgL_auxz00_2515;

						if (INTEGERP(BgL_numz00_2381))
							{	/* Rgc/rgcset.scm 120 */
								BgL_auxz00_2515 = BgL_numz00_2381;
							}
						else
							{
								obj_t BgL_auxz00_2518;

								BgL_auxz00_2518 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2295z00zz__rgc_setz00, BINT(((long) 4973)),
									BGl_string2299z00zz__rgc_setz00,
									BGl_string2297z00zz__rgc_setz00, BgL_numz00_2381);
								FAILURE(BgL_auxz00_2518, BFALSE, BFALSE);
							}
						BgL_auxz00_2514 = (long) CINT(BgL_auxz00_2515);
					}
					BgL_auxz00_2513 =
						BGl_rgcsetzd2memberzf3z21zz__rgc_setz00(BgL_setz00_2380,
						BgL_auxz00_2514);
				}
				return BBOOL(BgL_auxz00_2513);
			}
		}
	}



/* list->rgcset */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3rgcsetz31zz__rgc_setz00(obj_t
		BgL_lstz00_22, long BgL_maxz00_23)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 129 */
			{	/* Rgc/rgcset.scm 130 */
				obj_t BgL_setz00_1649;

				{	/* Rgc/rgcset.scm 130 */
					obj_t BgL_arg1910z00_1656;

					{	/* Rgc/rgcset.scm 130 */
						long BgL_arg1911z00_1657;

						{	/* Rgc/rgcset.scm 130 */
							obj_t BgL_auxz00_2525;

							{	/* Rgc/rgcset.scm 130 */
								obj_t BgL_auxz00_2526;

								{	/* Rgc/rgcset.scm 130 */
									long BgL_za72za7_1662;

									BgL_za72za7_1662 = BGl_bitzd2perzd2wordz00zz__rgc_setz00;
									BgL_auxz00_2526 = BINT((BgL_maxz00_23 / BgL_za72za7_1662));
								}
								BgL_auxz00_2525 =
									BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long) 1)),
									BgL_auxz00_2526);
							}
							BgL_arg1911z00_1657 = (long) CINT(BgL_auxz00_2525);
						}
						BgL_arg1910z00_1656 =
							make_vector((int) (BgL_arg1911z00_1657), BINT(((long) 0)));
					}
					{	/* Rgc/rgcset.scm 130 */
						obj_t BgL_newz00_1665;

						BgL_newz00_1665 =
							create_struct(BGl_symbol2293z00zz__rgc_setz00,
							(int) (((long) 2)));
						{	/* Rgc/rgcset.scm 130 */
							int BgL_auxz00_2537;

							BgL_auxz00_2537 = (int) (((long) 1));
							STRUCT_SET(BgL_newz00_1665, BgL_auxz00_2537, BgL_arg1910z00_1656);
						}
						{	/* Rgc/rgcset.scm 130 */
							obj_t BgL_auxz00_2542;

							int BgL_auxz00_2540;

							BgL_auxz00_2542 = BINT(BgL_maxz00_23);
							BgL_auxz00_2540 = (int) (((long) 0));
							STRUCT_SET(BgL_newz00_1665, BgL_auxz00_2540, BgL_auxz00_2542);
						}
						BgL_setz00_1649 = BgL_newz00_1665;
				}}
				{
					obj_t BgL_l1854z00_1677;

					BgL_l1854z00_1677 = BgL_lstz00_22;
				BgL_zc3anonymousza31923ze3z83_1676:
					if (PAIRP(BgL_l1854z00_1677))
						{	/* Rgc/rgcset.scm 130 */
							{	/* Rgc/rgcset.scm 130 */
								obj_t BgL_itemz00_1682;

								BgL_itemz00_1682 = CAR(BgL_l1854z00_1677);
								BGl_rgcsetzd2addz12zc0zz__rgc_setz00(BgL_setz00_1649,
									(long) CINT(BgL_itemz00_1682));
							}
							{
								obj_t BgL_l1854z00_2550;

								BgL_l1854z00_2550 = CDR(BgL_l1854z00_1677);
								BgL_l1854z00_1677 = BgL_l1854z00_2550;
								goto BgL_zc3anonymousza31923ze3z83_1676;
							}
						}
					else
						{	/* Rgc/rgcset.scm 130 */
							((bool_t) 1);
						}
				}
				return BgL_setz00_1649;
			}
		}
	}



/* _list->rgcset */
	obj_t BGl__listzd2ze3rgcsetz31zz__rgc_setz00(obj_t BgL_envz00_2382,
		obj_t BgL_lstz00_2383, obj_t BgL_maxz00_2384)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 129 */
			{	/* Rgc/rgcset.scm 130 */
				long BgL_auxz00_2552;

				{	/* Rgc/rgcset.scm 130 */
					obj_t BgL_auxz00_2553;

					if (INTEGERP(BgL_maxz00_2384))
						{	/* Rgc/rgcset.scm 130 */
							BgL_auxz00_2553 = BgL_maxz00_2384;
						}
					else
						{
							obj_t BgL_auxz00_2556;

							BgL_auxz00_2556 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2295z00zz__rgc_setz00,
								BINT(((long) 5435)), BGl_string2300z00zz__rgc_setz00,
								BGl_string2297z00zz__rgc_setz00, BgL_maxz00_2384);
							FAILURE(BgL_auxz00_2556, BFALSE, BFALSE);
						}
					BgL_auxz00_2552 = (long) CINT(BgL_auxz00_2553);
				}
				return
					BGl_listzd2ze3rgcsetz31zz__rgc_setz00(BgL_lstz00_2383,
					BgL_auxz00_2552);
			}
		}
	}



/* rgcset->list */
	BGL_EXPORTED_DEF obj_t BGl_rgcsetzd2ze3listz31zz__rgc_setz00(obj_t
		BgL_setz00_24)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 137 */
			{	/* Rgc/rgcset.scm 138 */
				obj_t BgL_maxz00_931;

				long BgL_maxmaskz00_932;

				BgL_maxz00_931 = STRUCT_REF(BgL_setz00_24, (int) (((long) 0)));
				{	/* Rgc/rgcset.scm 139 */
					long BgL_yz00_1737;

					BgL_yz00_1737 = BGl_bitzd2perzd2wordz00zz__rgc_setz00;
					BgL_maxmaskz00_932 = (((long) 1) << (int) (BgL_yz00_1737));
				}
				{	/* Rgc/rgcset.scm 140 */
					obj_t BgL_g1824z00_933;

					BgL_g1824z00_933 =
						VECTOR_REF(STRUCT_REF(BgL_setz00_24,
							(int) (((long) 1))), (int) (((long) 0)));
					{
						long BgL_iz00_936;

						long BgL_wordzd2numzd2_937;

						obj_t BgL_wordz00_938;

						long BgL_maskz00_939;

						obj_t BgL_resz00_940;

						BgL_iz00_936 = ((long) 0);
						BgL_wordzd2numzd2_937 = ((long) 0);
						BgL_wordz00_938 = BgL_g1824z00_933;
						BgL_maskz00_939 = ((long) 1);
						BgL_resz00_940 = BNIL;
					BgL_zc3anonymousza31926ze3z83_941:
						if ((BgL_iz00_936 == (long) CINT(BgL_maxz00_931)))
							{	/* Rgc/rgcset.scm 146 */
								return BgL_resz00_940;
							}
						else
							{	/* Rgc/rgcset.scm 146 */
								if ((BgL_maskz00_939 == BgL_maxmaskz00_932))
									{	/* Rgc/rgcset.scm 150 */
										long BgL_arg1929z00_944;

										obj_t BgL_arg1930z00_945;

										BgL_arg1929z00_944 = (BgL_wordzd2numzd2_937 + ((long) 1));
										{	/* Rgc/rgcset.scm 151 */
											long BgL_arg1932z00_947;

											BgL_arg1932z00_947 = (BgL_wordzd2numzd2_937 + ((long) 1));
											BgL_arg1930z00_945 =
												VECTOR_REF(STRUCT_REF(BgL_setz00_24,
													(int) (((long) 1))), (int) (BgL_arg1932z00_947));
										}
										{
											long BgL_maskz00_2583;

											obj_t BgL_wordz00_2582;

											long BgL_wordzd2numzd2_2581;

											BgL_wordzd2numzd2_2581 = BgL_arg1929z00_944;
											BgL_wordz00_2582 = BgL_arg1930z00_945;
											BgL_maskz00_2583 = ((long) 1);
											BgL_maskz00_939 = BgL_maskz00_2583;
											BgL_wordz00_938 = BgL_wordz00_2582;
											BgL_wordzd2numzd2_937 = BgL_wordzd2numzd2_2581;
											goto BgL_zc3anonymousza31926ze3z83_941;
										}
									}
								else
									{	/* Rgc/rgcset.scm 148 */
										if (
											(((long) CINT(BgL_wordz00_938) & BgL_maskz00_939) ==
												BgL_maskz00_939))
											{	/* Rgc/rgcset.scm 155 */
												long BgL_arg1935z00_949;

												long BgL_arg1937z00_950;

												obj_t BgL_arg1938z00_951;

												BgL_arg1935z00_949 = (BgL_iz00_936 + ((long) 1));
												BgL_arg1937z00_950 =
													(BgL_maskz00_939 << (int) (((long) 1)));
												BgL_arg1938z00_951 =
													MAKE_PAIR(BINT(BgL_iz00_936), BgL_resz00_940);
												{
													obj_t BgL_resz00_2595;

													long BgL_maskz00_2594;

													long BgL_iz00_2593;

													BgL_iz00_2593 = BgL_arg1935z00_949;
													BgL_maskz00_2594 = BgL_arg1937z00_950;
													BgL_resz00_2595 = BgL_arg1938z00_951;
													BgL_resz00_940 = BgL_resz00_2595;
													BgL_maskz00_939 = BgL_maskz00_2594;
													BgL_iz00_936 = BgL_iz00_2593;
													goto BgL_zc3anonymousza31926ze3z83_941;
												}
											}
										else
											{
												long BgL_maskz00_2598;

												long BgL_iz00_2596;

												BgL_iz00_2596 = (BgL_iz00_936 + ((long) 1));
												BgL_maskz00_2598 =
													(BgL_maskz00_939 << (int) (((long) 1)));
												BgL_maskz00_939 = BgL_maskz00_2598;
												BgL_iz00_936 = BgL_iz00_2596;
												goto BgL_zc3anonymousza31926ze3z83_941;
											}
									}
							}
					}
				}
			}
		}
	}



/* _rgcset->list */
	obj_t BGl__rgcsetzd2ze3listz31zz__rgc_setz00(obj_t BgL_envz00_2385,
		obj_t BgL_setz00_2386)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 137 */
			return BGl_rgcsetzd2ze3listz31zz__rgc_setz00(BgL_setz00_2386);
		}
	}



/* for-each-rgcset */
	BGL_EXPORTED_DEF obj_t BGl_forzd2eachzd2rgcsetz00zz__rgc_setz00(obj_t
		BgL_procz00_25, obj_t BgL_setz00_26)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 162 */
			{	/* Rgc/rgcset.scm 163 */
				obj_t BgL_maxz00_956;

				long BgL_maxmaskz00_957;

				BgL_maxz00_956 = STRUCT_REF(BgL_setz00_26, (int) (((long) 0)));
				{	/* Rgc/rgcset.scm 164 */
					long BgL_yz00_1778;

					BgL_yz00_1778 = BGl_bitzd2perzd2wordz00zz__rgc_setz00;
					BgL_maxmaskz00_957 = (((long) 1) << (int) (BgL_yz00_1778));
				}
				{	/* Rgc/rgcset.scm 165 */
					obj_t BgL_g1826z00_958;

					BgL_g1826z00_958 =
						VECTOR_REF(STRUCT_REF(BgL_setz00_26,
							(int) (((long) 1))), (int) (((long) 0)));
					{
						long BgL_iz00_960;

						long BgL_wordzd2numzd2_961;

						obj_t BgL_wordz00_962;

						long BgL_maskz00_963;

						BgL_iz00_960 = ((long) 0);
						BgL_wordzd2numzd2_961 = ((long) 0);
						BgL_wordz00_962 = BgL_g1826z00_958;
						BgL_maskz00_963 = ((long) 1);
					BgL_zc3anonymousza31943ze3z83_964:
						if ((BgL_iz00_960 == (long) CINT(BgL_maxz00_956)))
							{	/* Rgc/rgcset.scm 170 */
								return BUNSPEC;
							}
						else
							{	/* Rgc/rgcset.scm 170 */
								if ((BgL_maskz00_963 == BgL_maxmaskz00_957))
									{	/* Rgc/rgcset.scm 174 */
										long BgL_arg1946z00_967;

										obj_t BgL_arg1948z00_968;

										BgL_arg1946z00_967 = (BgL_wordzd2numzd2_961 + ((long) 1));
										{	/* Rgc/rgcset.scm 175 */
											long BgL_arg1950z00_970;

											BgL_arg1950z00_970 = (BgL_wordzd2numzd2_961 + ((long) 1));
											BgL_arg1948z00_968 =
												VECTOR_REF(STRUCT_REF(BgL_setz00_26,
													(int) (((long) 1))), (int) (BgL_arg1950z00_970));
										}
										{
											long BgL_maskz00_2623;

											obj_t BgL_wordz00_2622;

											long BgL_wordzd2numzd2_2621;

											BgL_wordzd2numzd2_2621 = BgL_arg1946z00_967;
											BgL_wordz00_2622 = BgL_arg1948z00_968;
											BgL_maskz00_2623 = ((long) 1);
											BgL_maskz00_963 = BgL_maskz00_2623;
											BgL_wordz00_962 = BgL_wordz00_2622;
											BgL_wordzd2numzd2_961 = BgL_wordzd2numzd2_2621;
											goto BgL_zc3anonymousza31943ze3z83_964;
										}
									}
								else
									{	/* Rgc/rgcset.scm 172 */
										if (
											(((long) CINT(BgL_wordz00_962) & BgL_maskz00_963) ==
												BgL_maskz00_963))
											{	/* Rgc/rgcset.scm 177 */
												PROCEDURE_ENTRY(BgL_procz00_25) (BgL_procz00_25,
													BINT(BgL_iz00_960), BEOA);
												{
													long BgL_maskz00_2633;

													long BgL_iz00_2631;

													BgL_iz00_2631 = (BgL_iz00_960 + ((long) 1));
													BgL_maskz00_2633 =
														(BgL_maskz00_963 << (int) (((long) 1)));
													BgL_maskz00_963 = BgL_maskz00_2633;
													BgL_iz00_960 = BgL_iz00_2631;
													goto BgL_zc3anonymousza31943ze3z83_964;
												}
											}
										else
											{
												long BgL_maskz00_2638;

												long BgL_iz00_2636;

												BgL_iz00_2636 = (BgL_iz00_960 + ((long) 1));
												BgL_maskz00_2638 =
													(BgL_maskz00_963 << (int) (((long) 1)));
												BgL_maskz00_963 = BgL_maskz00_2638;
												BgL_iz00_960 = BgL_iz00_2636;
												goto BgL_zc3anonymousza31943ze3z83_964;
											}
									}
							}
					}
				}
			}
		}
	}



/* _for-each-rgcset */
	obj_t BGl__forzd2eachzd2rgcsetz00zz__rgc_setz00(obj_t BgL_envz00_2387,
		obj_t BgL_procz00_2388, obj_t BgL_setz00_2389)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 162 */
			{	/* Rgc/rgcset.scm 163 */
				obj_t BgL_auxz00_2641;

				if (PROCEDUREP(BgL_procz00_2388))
					{	/* Rgc/rgcset.scm 163 */
						BgL_auxz00_2641 = BgL_procz00_2388;
					}
				else
					{
						obj_t BgL_auxz00_2644;

						BgL_auxz00_2644 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2295z00zz__rgc_setz00,
							BINT(((long) 6587)), BGl_string2301z00zz__rgc_setz00,
							BGl_string2302z00zz__rgc_setz00, BgL_procz00_2388);
						FAILURE(BgL_auxz00_2644, BFALSE, BFALSE);
					}
				return
					BGl_forzd2eachzd2rgcsetz00zz__rgc_setz00(BgL_auxz00_2641,
					BgL_setz00_2389);
			}
		}
	}



/* rgcset-length */
	BGL_EXPORTED_DEF long BGl_rgcsetzd2lengthzd2zz__rgc_setz00(obj_t
		BgL_setz00_27)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 188 */
			{	/* Rgc/rgcset.scm 189 */
				obj_t BgL_numz00_1815;

				{	/* Rgc/rgcset.scm 189 */
					obj_t BgL_cellvalz00_2649;

					BgL_cellvalz00_2649 = BINT(((long) 0));
					BgL_numz00_1815 = MAKE_CELL(BgL_cellvalz00_2649);
				}
				{	/* Rgc/rgcset.scm 189 */
					obj_t BgL_zc3anonymousza31958ze3z83_2390;

					BgL_zc3anonymousza31958ze3z83_2390 =
						make_fx_procedure(BGl_zc3anonymousza31958ze3z83zz__rgc_setz00,
						(int) (((long) 1)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza31958ze3z83_2390,
						(int) (((long) 0)), BgL_numz00_1815);
					BGl_forzd2eachzd2rgcsetz00zz__rgc_setz00
						(BgL_zc3anonymousza31958ze3z83_2390, BgL_setz00_27);
				}
				return (long) CINT(CELL_REF(BgL_numz00_1815));
		}}
	}



/* _rgcset-length */
	obj_t BGl__rgcsetzd2lengthzd2zz__rgc_setz00(obj_t BgL_envz00_2391,
		obj_t BgL_setz00_2392)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 188 */
			return BINT(BGl_rgcsetzd2lengthzd2zz__rgc_setz00(BgL_setz00_2392));
		}
	}



/* <anonymous:1958> */
	obj_t BGl_zc3anonymousza31958ze3z83zz__rgc_setz00(obj_t BgL_envz00_2393,
		obj_t BgL_xz00_2395)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 190 */
			{	/* Rgc/rgcset.scm 189 */
				obj_t BgL_numz00_2394;

				BgL_numz00_2394 = PROCEDURE_REF(BgL_envz00_2393, (int) (((long) 0)));
				{
					obj_t BgL_xz00_1817;

					BgL_xz00_1817 = BgL_xz00_2395;
					{	/* Rgc/rgcset.scm 189 */
						obj_t BgL_auxz00_2396;

						BgL_auxz00_2396 =
							BINT((((long) 1) + (long) CINT(CELL_REF(BgL_numz00_2394))));
						return CELL_SET(BgL_numz00_2394, BgL_auxz00_2396);
					}
				}
			}
		}
	}



/* rgcset-not! */
	BGL_EXPORTED_DEF obj_t BGl_rgcsetzd2notz12zc0zz__rgc_setz00(obj_t
		BgL_setz00_28)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 196 */
			{	/* Rgc/rgcset.scm 198 */
				int BgL_lenz00_983;

				BgL_lenz00_983 =
					VECTOR_LENGTH(STRUCT_REF(BgL_setz00_28, (int) (((long) 1))));
				{
					long BgL_iz00_985;

					{	/* Rgc/rgcset.scm 199 */
						bool_t BgL_auxz00_2668;

						BgL_iz00_985 = ((long) 0);
					BgL_zc3anonymousza31959ze3z83_986:
						if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BINT(BgL_iz00_985),
								BINT(BgL_lenz00_983)))
							{	/* Rgc/rgcset.scm 200 */
								{	/* Rgc/rgcset.scm 202 */
									long BgL_arg1961z00_988;

									{	/* Rgc/rgcset.scm 202 */
										obj_t BgL_arg1962z00_989;

										BgL_arg1962z00_989 =
											VECTOR_REF(STRUCT_REF(BgL_setz00_28,
												(int) (((long) 1))), (int) (BgL_iz00_985));
										BgL_arg1961z00_988 = ~((long) CINT(BgL_arg1962z00_989));
									}
									VECTOR_SET(STRUCT_REF(BgL_setz00_28,
											(int) (((long) 1))),
										(int) (BgL_iz00_985), BINT(BgL_arg1961z00_988));
								}
								{
									long BgL_iz00_2684;

									BgL_iz00_2684 = (BgL_iz00_985 + ((long) 1));
									BgL_iz00_985 = BgL_iz00_2684;
									goto BgL_zc3anonymousza31959ze3z83_986;
								}
							}
						else
							{	/* Rgc/rgcset.scm 200 */
								BgL_auxz00_2668 = ((bool_t) 0);
							}
						return BBOOL(BgL_auxz00_2668);
					}
				}
			}
		}
	}



/* _rgcset-not! */
	obj_t BGl__rgcsetzd2notz12zc0zz__rgc_setz00(obj_t BgL_envz00_2397,
		obj_t BgL_setz00_2398)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 196 */
			return BGl_rgcsetzd2notz12zc0zz__rgc_setz00(BgL_setz00_2398);
		}
	}



/* rgcset-not */
	BGL_EXPORTED_DEF obj_t BGl_rgcsetzd2notzd2zz__rgc_setz00(obj_t BgL_setz00_29)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 208 */
			{	/* Rgc/rgcset.scm 210 */
				int BgL_lenz00_992;

				obj_t BgL_newz00_993;

				BgL_lenz00_992 =
					VECTOR_LENGTH(STRUCT_REF(BgL_setz00_29, (int) (((long) 1))));
				{	/* Rgc/rgcset.scm 211 */
					obj_t BgL_arg1969z00_1002;

					BgL_arg1969z00_1002 = STRUCT_REF(BgL_setz00_29, (int) (((long) 0)));
					{	/* Rgc/rgcset.scm 211 */
						long BgL_siza7eza7_1856;

						BgL_siza7eza7_1856 = (long) CINT(BgL_arg1969z00_1002);
						{	/* Rgc/rgcset.scm 211 */
							obj_t BgL_arg1910z00_1857;

							{	/* Rgc/rgcset.scm 211 */
								long BgL_arg1911z00_1858;

								{	/* Rgc/rgcset.scm 211 */
									obj_t BgL_auxz00_2694;

									{	/* Rgc/rgcset.scm 211 */
										obj_t BgL_auxz00_2695;

										{	/* Rgc/rgcset.scm 211 */
											long BgL_za72za7_1863;

											BgL_za72za7_1863 = BGl_bitzd2perzd2wordz00zz__rgc_setz00;
											BgL_auxz00_2695 =
												BINT((BgL_siza7eza7_1856 / BgL_za72za7_1863));
										}
										BgL_auxz00_2694 =
											BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long) 1)),
											BgL_auxz00_2695);
									}
									BgL_arg1911z00_1858 = (long) CINT(BgL_auxz00_2694);
								}
								BgL_arg1910z00_1857 =
									make_vector((int) (BgL_arg1911z00_1858), BINT(((long) 0)));
							}
							{	/* Rgc/rgcset.scm 211 */
								obj_t BgL_newz00_1866;

								BgL_newz00_1866 =
									create_struct(BGl_symbol2293z00zz__rgc_setz00,
									(int) (((long) 2)));
								{	/* Rgc/rgcset.scm 211 */
									int BgL_auxz00_2706;

									BgL_auxz00_2706 = (int) (((long) 1));
									STRUCT_SET(BgL_newz00_1866, BgL_auxz00_2706,
										BgL_arg1910z00_1857);
								}
								{	/* Rgc/rgcset.scm 211 */
									obj_t BgL_auxz00_2711;

									int BgL_auxz00_2709;

									BgL_auxz00_2711 = BINT(BgL_siza7eza7_1856);
									BgL_auxz00_2709 = (int) (((long) 0));
									STRUCT_SET(BgL_newz00_1866, BgL_auxz00_2709, BgL_auxz00_2711);
								}
								BgL_newz00_993 = BgL_newz00_1866;
				}}}}
				{
					long BgL_iz00_995;

					BgL_iz00_995 = ((long) 0);
				BgL_zc3anonymousza31964ze3z83_996:
					if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BINT(BgL_iz00_995),
							BINT(BgL_lenz00_992)))
						{	/* Rgc/rgcset.scm 213 */
							{	/* Rgc/rgcset.scm 215 */
								long BgL_arg1966z00_998;

								{	/* Rgc/rgcset.scm 215 */
									obj_t BgL_arg1967z00_999;

									BgL_arg1967z00_999 =
										VECTOR_REF(STRUCT_REF(BgL_setz00_29,
											(int) (((long) 1))), (int) (BgL_iz00_995));
									BgL_arg1966z00_998 = ~((long) CINT(BgL_arg1967z00_999));
								}
								VECTOR_SET(STRUCT_REF(BgL_newz00_993,
										(int) (((long) 1))),
									(int) (BgL_iz00_995), BINT(BgL_arg1966z00_998));
							}
							{
								long BgL_iz00_2729;

								BgL_iz00_2729 = (BgL_iz00_995 + ((long) 1));
								BgL_iz00_995 = BgL_iz00_2729;
								goto BgL_zc3anonymousza31964ze3z83_996;
							}
						}
					else
						{	/* Rgc/rgcset.scm 213 */
							return BgL_newz00_993;
						}
				}
			}
		}
	}



/* _rgcset-not */
	obj_t BGl__rgcsetzd2notzd2zz__rgc_setz00(obj_t BgL_envz00_2399,
		obj_t BgL_setz00_2400)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 208 */
			return BGl_rgcsetzd2notzd2zz__rgc_setz00(BgL_setz00_2400);
		}
	}



/* rgcset-and! */
	BGL_EXPORTED_DEF obj_t BGl_rgcsetzd2andz12zc0zz__rgc_setz00(obj_t
		BgL_set1z00_30, obj_t BgL_set2z00_31)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 222 */
			{	/* Rgc/rgcset.scm 224 */
				int BgL_len1z00_1003;

				int BgL_len2z00_1004;

				BgL_len1z00_1003 =
					VECTOR_LENGTH(STRUCT_REF(BgL_set1z00_30, (int) (((long) 1))));
				BgL_len2z00_1004 =
					VECTOR_LENGTH(STRUCT_REF(BgL_set2z00_31, (int) (((long) 1))));
				{
					long BgL_iz00_1006;

					{	/* Rgc/rgcset.scm 226 */
						bool_t BgL_auxz00_2738;

						BgL_iz00_1006 = ((long) 0);
					BgL_zc3anonymousza31970ze3z83_1007:
						{	/* Rgc/rgcset.scm 227 */
							bool_t BgL_testz00_2739;

							if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BINT(BgL_iz00_1006),
									BINT(BgL_len1z00_1003)))
								{	/* Rgc/rgcset.scm 227 */
									BgL_testz00_2739 =
										BGl_2zc3zc3zz__r4_numbers_6_5z00(BINT(BgL_iz00_1006),
										BINT(BgL_len2z00_1004));
								}
							else
								{	/* Rgc/rgcset.scm 227 */
									BgL_testz00_2739 = ((bool_t) 0);
								}
							if (BgL_testz00_2739)
								{	/* Rgc/rgcset.scm 227 */
									{	/* Rgc/rgcset.scm 231 */
										long BgL_arg1972z00_1009;

										{	/* Rgc/rgcset.scm 231 */
											obj_t BgL_arg1973z00_1010;

											obj_t BgL_arg1974z00_1011;

											BgL_arg1973z00_1010 =
												VECTOR_REF(STRUCT_REF(BgL_set1z00_30,
													(int) (((long) 1))), (int) (BgL_iz00_1006));
											BgL_arg1974z00_1011 =
												VECTOR_REF(STRUCT_REF(BgL_set2z00_31,
													(int) (((long) 1))), (int) (BgL_iz00_1006));
											BgL_arg1972z00_1009 =
												(
												(long) CINT(BgL_arg1973z00_1010) &
												(long) CINT(BgL_arg1974z00_1011));
										}
										VECTOR_SET(STRUCT_REF(BgL_set1z00_30,
												(int) (((long) 1))),
											(int) (BgL_iz00_1006), BINT(BgL_arg1972z00_1009));
									}
									{
										long BgL_iz00_2763;

										BgL_iz00_2763 = (BgL_iz00_1006 + ((long) 1));
										BgL_iz00_1006 = BgL_iz00_2763;
										goto BgL_zc3anonymousza31970ze3z83_1007;
									}
								}
							else
								{	/* Rgc/rgcset.scm 227 */
									BgL_auxz00_2738 = ((bool_t) 0);
								}
						}
						return BBOOL(BgL_auxz00_2738);
					}
				}
			}
		}
	}



/* _rgcset-and! */
	obj_t BGl__rgcsetzd2andz12zc0zz__rgc_setz00(obj_t BgL_envz00_2401,
		obj_t BgL_set1z00_2402, obj_t BgL_set2z00_2403)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 222 */
			return
				BGl_rgcsetzd2andz12zc0zz__rgc_setz00(BgL_set1z00_2402,
				BgL_set2z00_2403);
		}
	}



/* rgcset-or! */
	BGL_EXPORTED_DEF obj_t BGl_rgcsetzd2orz12zc0zz__rgc_setz00(obj_t
		BgL_set1z00_32, obj_t BgL_set2z00_33)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 238 */
			{	/* Rgc/rgcset.scm 240 */
				int BgL_len1z00_1015;

				int BgL_len2z00_1016;

				BgL_len1z00_1015 =
					VECTOR_LENGTH(STRUCT_REF(BgL_set1z00_32, (int) (((long) 1))));
				BgL_len2z00_1016 =
					VECTOR_LENGTH(STRUCT_REF(BgL_set2z00_33, (int) (((long) 1))));
				{
					long BgL_iz00_1018;

					{	/* Rgc/rgcset.scm 243 */
						bool_t BgL_auxz00_2773;

						BgL_iz00_1018 = ((long) 0);
					BgL_zc3anonymousza31977ze3z83_1019:
						if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BINT(BgL_iz00_1018),
								BINT(BgL_len1z00_1015)))
							{	/* Rgc/rgcset.scm 244 */
								{	/* Rgc/rgcset.scm 248 */
									long BgL_arg1979z00_1021;

									{	/* Rgc/rgcset.scm 248 */
										obj_t BgL_arg1980z00_1022;

										obj_t BgL_arg1981z00_1023;

										BgL_arg1980z00_1022 =
											VECTOR_REF(STRUCT_REF(BgL_set1z00_32,
												(int) (((long) 1))), (int) (BgL_iz00_1018));
										BgL_arg1981z00_1023 =
											VECTOR_REF(STRUCT_REF(BgL_set2z00_33,
												(int) (((long) 1))), (int) (BgL_iz00_1018));
										BgL_arg1979z00_1021 =
											(
											(long) CINT(BgL_arg1980z00_1022) |
											(long) CINT(BgL_arg1981z00_1023));
									}
									VECTOR_SET(STRUCT_REF(BgL_set1z00_32,
											(int) (((long) 1))),
										(int) (BgL_iz00_1018), BINT(BgL_arg1979z00_1021));
								}
								{
									long BgL_iz00_2794;

									BgL_iz00_2794 = (BgL_iz00_1018 + ((long) 1));
									BgL_iz00_1018 = BgL_iz00_2794;
									goto BgL_zc3anonymousza31977ze3z83_1019;
								}
							}
						else
							{	/* Rgc/rgcset.scm 244 */
								BgL_auxz00_2773 = ((bool_t) 0);
							}
						return BBOOL(BgL_auxz00_2773);
					}
				}
			}
		}
	}



/* _rgcset-or! */
	obj_t BGl__rgcsetzd2orz12zc0zz__rgc_setz00(obj_t BgL_envz00_2404,
		obj_t BgL_set1z00_2405, obj_t BgL_set2z00_2406)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 238 */
			return
				BGl_rgcsetzd2orz12zc0zz__rgc_setz00(BgL_set1z00_2405, BgL_set2z00_2406);
		}
	}



/* rgcset-or */
	BGL_EXPORTED_DEF obj_t BGl_rgcsetzd2orzd2zz__rgc_setz00(obj_t BgL_set1z00_34,
		obj_t BgL_set2z00_35)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 255 */
			{	/* Rgc/rgcset.scm 257 */
				int BgL_len1z00_1026;

				BgL_len1z00_1026 =
					VECTOR_LENGTH(STRUCT_REF(BgL_set1z00_34, (int) (((long) 1))));
				{	/* Rgc/rgcset.scm 257 */
					int BgL_len2z00_1027;

					BgL_len2z00_1027 =
						VECTOR_LENGTH(STRUCT_REF(BgL_set2z00_35, (int) (((long) 1))));
					{	/* Rgc/rgcset.scm 258 */
						obj_t BgL_newz00_1028;

						{	/* Rgc/rgcset.scm 259 */
							obj_t BgL_arg1989z00_1038;

							BgL_arg1989z00_1038 =
								STRUCT_REF(BgL_set1z00_34, (int) (((long) 0)));
							{	/* Rgc/rgcset.scm 259 */
								long BgL_siza7eza7_1997;

								BgL_siza7eza7_1997 = (long) CINT(BgL_arg1989z00_1038);
								{	/* Rgc/rgcset.scm 259 */
									obj_t BgL_arg1910z00_1998;

									{	/* Rgc/rgcset.scm 259 */
										long BgL_arg1911z00_1999;

										{	/* Rgc/rgcset.scm 259 */
											obj_t BgL_auxz00_2807;

											{	/* Rgc/rgcset.scm 259 */
												obj_t BgL_auxz00_2808;

												{	/* Rgc/rgcset.scm 259 */
													long BgL_za72za7_2004;

													BgL_za72za7_2004 =
														BGl_bitzd2perzd2wordz00zz__rgc_setz00;
													BgL_auxz00_2808 =
														BINT((BgL_siza7eza7_1997 / BgL_za72za7_2004));
												}
												BgL_auxz00_2807 =
													BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long) 1)),
													BgL_auxz00_2808);
											}
											BgL_arg1911z00_1999 = (long) CINT(BgL_auxz00_2807);
										}
										BgL_arg1910z00_1998 =
											make_vector(
											(int) (BgL_arg1911z00_1999), BINT(((long) 0)));
									}
									{	/* Rgc/rgcset.scm 259 */
										obj_t BgL_newz00_2007;

										BgL_newz00_2007 =
											create_struct(BGl_symbol2293z00zz__rgc_setz00,
											(int) (((long) 2)));
										{	/* Rgc/rgcset.scm 259 */
											int BgL_auxz00_2819;

											BgL_auxz00_2819 = (int) (((long) 1));
											STRUCT_SET(BgL_newz00_2007, BgL_auxz00_2819,
												BgL_arg1910z00_1998);
										}
										{	/* Rgc/rgcset.scm 259 */
											obj_t BgL_auxz00_2824;

											int BgL_auxz00_2822;

											BgL_auxz00_2824 = BINT(BgL_siza7eza7_1997);
											BgL_auxz00_2822 = (int) (((long) 0));
											STRUCT_SET(BgL_newz00_2007, BgL_auxz00_2822,
												BgL_auxz00_2824);
										}
										BgL_newz00_1028 = BgL_newz00_2007;
						}}}}
						{	/* Rgc/rgcset.scm 259 */

							{
								long BgL_iz00_1030;

								BgL_iz00_1030 = ((long) 0);
							BgL_zc3anonymousza31983ze3z83_1031:
								if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BINT(BgL_iz00_1030),
										BINT(BgL_len1z00_1026)))
									{	/* Rgc/rgcset.scm 262 */
										{	/* Rgc/rgcset.scm 266 */
											long BgL_arg1985z00_1033;

											{	/* Rgc/rgcset.scm 266 */
												obj_t BgL_arg1986z00_1034;

												obj_t BgL_arg1987z00_1035;

												BgL_arg1986z00_1034 =
													VECTOR_REF(STRUCT_REF(BgL_set1z00_34,
														(int) (((long) 1))), (int) (BgL_iz00_1030));
												BgL_arg1987z00_1035 =
													VECTOR_REF(STRUCT_REF(BgL_set2z00_35,
														(int) (((long) 1))), (int) (BgL_iz00_1030));
												BgL_arg1985z00_1033 =
													(
													(long) CINT(BgL_arg1986z00_1034) |
													(long) CINT(BgL_arg1987z00_1035));
											}
											VECTOR_SET(STRUCT_REF(BgL_newz00_1028,
													(int) (((long) 1))),
												(int) (BgL_iz00_1030), BINT(BgL_arg1985z00_1033));
										}
										{
											long BgL_iz00_2847;

											BgL_iz00_2847 = (BgL_iz00_1030 + ((long) 1));
											BgL_iz00_1030 = BgL_iz00_2847;
											goto BgL_zc3anonymousza31983ze3z83_1031;
										}
									}
								else
									{	/* Rgc/rgcset.scm 262 */
										return BgL_newz00_1028;
									}
							}
						}
					}
				}
			}
		}
	}



/* _rgcset-or */
	obj_t BGl__rgcsetzd2orzd2zz__rgc_setz00(obj_t BgL_envz00_2407,
		obj_t BgL_set1z00_2408, obj_t BgL_set2z00_2409)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 255 */
			return
				BGl_rgcsetzd2orzd2zz__rgc_setz00(BgL_set1z00_2408, BgL_set2z00_2409);
		}
	}



/* rgcset-but! */
	BGL_EXPORTED_DEF obj_t BGl_rgcsetzd2butz12zc0zz__rgc_setz00(obj_t
		BgL_set1z00_36, obj_t BgL_set2z00_37)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 274 */
			{	/* Rgc/rgcset.scm 275 */
				int BgL_len1z00_1039;

				int BgL_len2z00_1040;

				BgL_len1z00_1039 =
					VECTOR_LENGTH(STRUCT_REF(BgL_set1z00_36, (int) (((long) 1))));
				BgL_len2z00_1040 =
					VECTOR_LENGTH(STRUCT_REF(BgL_set2z00_37, (int) (((long) 1))));
				{
					long BgL_iz00_1042;

					{	/* Rgc/rgcset.scm 278 */
						bool_t BgL_auxz00_2856;

						BgL_iz00_1042 = ((long) 0);
					BgL_zc3anonymousza31990ze3z83_1043:
						if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BINT(BgL_iz00_1042),
								BINT(BgL_len1z00_1039)))
							{	/* Rgc/rgcset.scm 279 */
								{	/* Rgc/rgcset.scm 283 */
									obj_t BgL_arg1992z00_1045;

									BgL_arg1992z00_1045 =
										BGl_2zd2zd2zz__r4_numbers_6_5z00(VECTOR_REF(STRUCT_REF
											(BgL_set1z00_36, (int) (((long) 1))),
											(int) (BgL_iz00_1042)),
										VECTOR_REF(STRUCT_REF(BgL_set2z00_37, (int) (((long) 1))),
											(int) (BgL_iz00_1042)));
									VECTOR_SET(STRUCT_REF(BgL_set1z00_36, (int) (((long) 1))),
										(int) (BgL_iz00_1042), BgL_arg1992z00_1045);
								}
								{
									long BgL_iz00_2874;

									BgL_iz00_2874 = (BgL_iz00_1042 + ((long) 1));
									BgL_iz00_1042 = BgL_iz00_2874;
									goto BgL_zc3anonymousza31990ze3z83_1043;
								}
							}
						else
							{	/* Rgc/rgcset.scm 279 */
								BgL_auxz00_2856 = ((bool_t) 0);
							}
						return BBOOL(BgL_auxz00_2856);
					}
				}
			}
		}
	}



/* _rgcset-but! */
	obj_t BGl__rgcsetzd2butz12zc0zz__rgc_setz00(obj_t BgL_envz00_2410,
		obj_t BgL_set1z00_2411, obj_t BgL_set2z00_2412)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 274 */
			return
				BGl_rgcsetzd2butz12zc0zz__rgc_setz00(BgL_set1z00_2411,
				BgL_set2z00_2412);
		}
	}



/* rgcset-equal? */
	BGL_EXPORTED_DEF bool_t BGl_rgcsetzd2equalzf3z21zz__rgc_setz00(obj_t
		BgL_set1z00_38, obj_t BgL_set2z00_39)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 290 */
			{	/* Rgc/rgcset.scm 291 */
				int BgL_len1z00_1050;

				int BgL_len2z00_1051;

				BgL_len1z00_1050 =
					VECTOR_LENGTH(STRUCT_REF(BgL_set1z00_38, (int) (((long) 1))));
				BgL_len2z00_1051 =
					VECTOR_LENGTH(STRUCT_REF(BgL_set2z00_39, (int) (((long) 1))));
				if (((long) (BgL_len1z00_1050) == (long) (BgL_len2z00_1051)))
					{	/* Rgc/rgcset.scm 294 */
						obj_t BgL_w1z00_1053;

						obj_t BgL_w2z00_1054;

						BgL_w1z00_1053 = STRUCT_REF(BgL_set1z00_38, (int) (((long) 1)));
						BgL_w2z00_1054 = STRUCT_REF(BgL_set2z00_39, (int) (((long) 1)));
						{
							long BgL_iz00_1056;

							BgL_iz00_1056 = ((long) 0);
						BgL_zc3anonymousza31996ze3z83_1057:
							if ((BgL_iz00_1056 == (long) (BgL_len1z00_1050)))
								{	/* Rgc/rgcset.scm 298 */
									return ((bool_t) 1);
								}
							else
								{	/* Rgc/rgcset.scm 300 */
									bool_t BgL_testz00_2895;

									{	/* Rgc/rgcset.scm 300 */
										obj_t BgL_arg2000z00_1061;

										obj_t BgL_arg2001z00_1062;

										BgL_arg2000z00_1061 =
											VECTOR_REF(BgL_w1z00_1053, (int) (BgL_iz00_1056));
										BgL_arg2001z00_1062 =
											VECTOR_REF(BgL_w2z00_1054, (int) (BgL_iz00_1056));
										BgL_testz00_2895 =
											(
											(long) CINT(BgL_arg2000z00_1061) ==
											(long) CINT(BgL_arg2001z00_1062));
									}
									if (BgL_testz00_2895)
										{
											long BgL_iz00_2903;

											BgL_iz00_2903 = (BgL_iz00_1056 + ((long) 1));
											BgL_iz00_1056 = BgL_iz00_2903;
											goto BgL_zc3anonymousza31996ze3z83_1057;
										}
									else
										{	/* Rgc/rgcset.scm 300 */
											return ((bool_t) 0);
										}
								}
						}
					}
				else
					{	/* Rgc/rgcset.scm 293 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* _rgcset-equal? */
	obj_t BGl__rgcsetzd2equalzf3z21zz__rgc_setz00(obj_t BgL_envz00_2413,
		obj_t BgL_set1z00_2414, obj_t BgL_set2z00_2415)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 290 */
			return
				BBOOL(BGl_rgcsetzd2equalzf3z21zz__rgc_setz00(BgL_set1z00_2414,
					BgL_set2z00_2415));
		}
	}



/* rgcset->hash */
	BGL_EXPORTED_DEF long BGl_rgcsetzd2ze3hashz31zz__rgc_setz00(obj_t
		BgL_setz00_40)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 308 */
			{	/* Rgc/rgcset.scm 309 */
				int BgL_lenz00_1064;

				BgL_lenz00_1064 =
					VECTOR_LENGTH(STRUCT_REF(BgL_setz00_40, (int) (((long) 1))));
				{	/* Rgc/rgcset.scm 310 */
					obj_t BgL_g1828z00_1065;

					BgL_g1828z00_1065 =
						VECTOR_REF(STRUCT_REF(BgL_setz00_40,
							(int) (((long) 1))), (int) (((long) 0)));
					{
						long BgL_iz00_1067;

						obj_t BgL_resz00_1068;

						{	/* Rgc/rgcset.scm 310 */
							obj_t BgL_auxz00_2914;

							BgL_iz00_1067 = ((long) 1);
							BgL_resz00_1068 = BgL_g1828z00_1065;
						BgL_zc3anonymousza32002ze3z83_1069:
							if ((BgL_iz00_1067 == (long) (BgL_lenz00_1064)))
								{	/* Rgc/rgcset.scm 312 */
									if (((long) CINT(BgL_resz00_1068) < ((long) 0)))
										{	/* Rgc/rgcset.scm 313 */
											BgL_auxz00_2914 = BINT(NEG((long) CINT(BgL_resz00_1068)));
										}
									else
										{	/* Rgc/rgcset.scm 313 */
											BgL_auxz00_2914 = BgL_resz00_1068;
										}
								}
							else
								{	/* Rgc/rgcset.scm 316 */
									long BgL_vz00_1072;

									{	/* Rgc/rgcset.scm 316 */
										long BgL_arg2010z00_1078;

										{	/* Rgc/rgcset.scm 316 */
											long BgL_arg2011z00_1079;

											obj_t BgL_arg2012z00_1080;

											BgL_arg2011z00_1079 =
												((long) CINT(BgL_resz00_1068) << (int) (((long) 3)));
											BgL_arg2012z00_1080 =
												VECTOR_REF(STRUCT_REF(BgL_setz00_40,
													(int) (((long) 1))), (int) (BgL_iz00_1067));
											BgL_arg2010z00_1078 =
												(BgL_arg2011z00_1079 +
												(long) CINT(BgL_arg2012z00_1080));
										}
										BgL_vz00_1072 =
											((long) CINT(BgL_resz00_1068) + BgL_arg2010z00_1078);
									}
									{	/* Rgc/rgcset.scm 317 */
										long BgL_arg2005z00_1073;

										long BgL_arg2006z00_1074;

										BgL_arg2005z00_1073 = (BgL_iz00_1067 + ((long) 1));
										{	/* Rgc/rgcset.scm 318 */
											bool_t BgL_testz00_2936;

											{	/* Rgc/rgcset.scm 318 */
												obj_t BgL_arg2008z00_1076;

												BgL_arg2008z00_1076 =
													VECTOR_REF(STRUCT_REF(BgL_setz00_40,
														(int) (((long) 1))), (int) (BgL_iz00_1067));
												BgL_testz00_2936 =
													((long) CINT(BgL_arg2008z00_1076) == ((long) 0));
											}
											if (BgL_testz00_2936)
												{	/* Rgc/rgcset.scm 318 */
													BgL_arg2006z00_1074 = BgL_vz00_1072;
												}
											else
												{	/* Rgc/rgcset.scm 318 */
													BgL_arg2006z00_1074 = (BgL_iz00_1067 + BgL_vz00_1072);
												}
										}
										{
											obj_t BgL_resz00_2945;

											long BgL_iz00_2944;

											BgL_iz00_2944 = BgL_arg2005z00_1073;
											BgL_resz00_2945 = BINT(BgL_arg2006z00_1074);
											BgL_resz00_1068 = BgL_resz00_2945;
											BgL_iz00_1067 = BgL_iz00_2944;
											goto BgL_zc3anonymousza32002ze3z83_1069;
										}
									}
								}
							return (long) CINT(BgL_auxz00_2914);
		}}}}}
	}



/* _rgcset->hash */
	obj_t BGl__rgcsetzd2ze3hashz31zz__rgc_setz00(obj_t BgL_envz00_2416,
		obj_t BgL_setz00_2417)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 308 */
			return BINT(BGl_rgcsetzd2ze3hashz31zz__rgc_setz00(BgL_setz00_2417));
		}
	}



/* rgcset-remove! */
	BGL_EXPORTED_DEF obj_t BGl_rgcsetzd2removez12zc0zz__rgc_setz00(obj_t
		BgL_setz00_41, long BgL_numz00_42)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 325 */
			{	/* Rgc/rgcset.scm 326 */
				long BgL_wordzd2numzd2_2165;

				BgL_wordzd2numzd2_2165 =
					(BgL_numz00_42 / BGl_bitzd2perzd2wordz00zz__rgc_setz00);
				{	/* Rgc/rgcset.scm 326 */
					long BgL_wordzd2bitzd2_2166;

					BgL_wordzd2bitzd2_2166 =
						(BgL_numz00_42 % BGl_bitzd2perzd2wordz00zz__rgc_setz00);
					{	/* Rgc/rgcset.scm 326 */
						obj_t BgL_oldz00_2167;

						BgL_oldz00_2167 =
							VECTOR_REF(STRUCT_REF(BgL_setz00_41,
								(int) (((long) 1))), (int) (BgL_wordzd2numzd2_2165));
						{	/* Rgc/rgcset.scm 326 */

							{	/* Rgc/rgcset.scm 326 */
								long BgL_arg2013z00_2168;

								BgL_arg2013z00_2168 =
									(
									(long) CINT(BgL_oldz00_2167) ^
									(((long) 1) << (int) (BgL_wordzd2bitzd2_2166)));
								return
									VECTOR_SET(STRUCT_REF(BgL_setz00_41,
										(int) (((long) 1))),
									(int) (BgL_wordzd2numzd2_2165), BINT(BgL_arg2013z00_2168));
		}}}}}}
	}



/* _rgcset-remove! */
	obj_t BGl__rgcsetzd2removez12zc0zz__rgc_setz00(obj_t BgL_envz00_2418,
		obj_t BgL_setz00_2419, obj_t BgL_numz00_2420)
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 325 */
			{	/* Rgc/rgcset.scm 326 */
				long BgL_auxz00_2965;

				{	/* Rgc/rgcset.scm 326 */
					obj_t BgL_auxz00_2966;

					if (INTEGERP(BgL_numz00_2420))
						{	/* Rgc/rgcset.scm 326 */
							BgL_auxz00_2966 = BgL_numz00_2420;
						}
					else
						{
							obj_t BgL_auxz00_2969;

							BgL_auxz00_2969 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2295z00zz__rgc_setz00,
								BINT(((long) 12615)), BGl_string2303z00zz__rgc_setz00,
								BGl_string2297z00zz__rgc_setz00, BgL_numz00_2420);
							FAILURE(BgL_auxz00_2969, BFALSE, BFALSE);
						}
					BgL_auxz00_2965 = (long) CINT(BgL_auxz00_2966);
				}
				return
					BGl_rgcsetzd2removez12zc0zz__rgc_setz00(BgL_setz00_2419,
					BgL_auxz00_2965);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__rgc_setz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__rgc_setz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__rgc_setz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcset.scm 15 */
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2304z00zz__rgc_setz00));
		}
	}

#ifdef __cplusplus
}
#endif
