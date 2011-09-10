/*===========================================================================*/
/*   (Llib/dsssl.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Llib/dsssl.scm -indent -o objs/obj_u/Llib/dsssl.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL bool_t
		BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t);
	static obj_t BGl_restzd2statezd2zz__dssslz00(obj_t, obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_keyzd2statezd2zz__dssslz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, bool_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__dssslz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__dssslz00();
	static obj_t BGl__makezd2dssslzd2functionzd2preludezd2zz__dssslz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_dssslzd2formalszd2ze3schemezd2formalsz31zz__dssslz00(obj_t, obj_t);
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_nozd2restzd2keyzd2statezd2zz__dssslz00(obj_t, obj_t, obj_t);
	static obj_t BGl_onezd2keyzd2argz00zz__dssslz00(bool_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_list2611z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_optionalzd2statez72za0zz__dssslz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__dssslz00();
	static obj_t BGl_list2655z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_importedzd2moduleszd2initz00zz__dssslz00();
	static obj_t BGl_idzd2sanszd2typez00zz__dssslz00(obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_dssslzd2checkzd2keyzd2argsz12zc0zz__dssslz00(obj_t, obj_t);
	static obj_t BGl__dssslzd2formalszd2ze3schemezd2formalsz31zz__dssslz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_optionalzd2statezd2zz__dssslz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t c_substring(obj_t, long, long);
	extern obj_t string_to_symbol(char *);
	static obj_t BGl__dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t, obj_t);
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__dssslzd2getzd2keyzd2restzd2argz00zz__dssslz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_dssslzd2getzd2keyzd2restzd2argz00zz__dssslz00(obj_t, obj_t);
	static obj_t BGl_symbol2613z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_symbol2615z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_symbol2622z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_symbol2624z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_symbol2626z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_symbol2628z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_symbol2630z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_symbol2634z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_symbol2636z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_symbol2638z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_symbol2640z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_symbol2642z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_symbol2644z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_symbol2646z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_loopz00zz__dssslz00(obj_t, obj_t, obj_t, bool_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dssslzd2getzd2keyzd2argzd2zz__dssslz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_restzd2keyzd2argz00zz__dssslz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl__dssslzd2checkzd2keyzd2argsz12zc0zz__dssslz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zz__dssslz00();
	static obj_t BGl__dssslzd2getzd2keyzd2argzd2zz__dssslz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2formalszd2ze3schemezd2formalszd2envze3zz__dssslz00,
		BgL_bgl__dssslza7d2formals2664za7,
		BGl__dssslzd2formalszd2ze3schemezd2formalsz31zz__dssslz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2612z00zz__dssslz00,
		BgL_bgl_string2612za700za7za7_2665za7, "Illegal formal list", 19);
	      DEFINE_STRING(BGl_string2614z00zz__dssslz00,
		BgL_bgl_string2614za700za7za7_2666za7, "dsssl", 5);
	      DEFINE_STRING(BGl_string2616z00zz__dssslz00,
		BgL_bgl_string2616za700za7za7_2667za7, "let", 3);
	      DEFINE_STRING(BGl_string2617z00zz__dssslz00,
		BgL_bgl_string2617za700za7za7_2668za7, "/tmp/bigloo/runtime/Llib/dsssl.scm",
		34);
	      DEFINE_STRING(BGl_string2618z00zz__dssslz00,
		BgL_bgl_string2618za700za7za7_2669za7, "_make-dsssl-function-prelude", 28);
	      DEFINE_STRING(BGl_string2620z00zz__dssslz00,
		BgL_bgl_string2620za700za7za7_2670za7, "Illegal DSSSL formal list (#!rest)",
		34);
	      DEFINE_STRING(BGl_string2619z00zz__dssslz00,
		BgL_bgl_string2619za700za7za7_2671za7, "procedure", 9);
	      DEFINE_STRING(BGl_string2621z00zz__dssslz00,
		BgL_bgl_string2621za700za7za7_2672za7, "Illegal DSSSL formal list (#!key)",
		33);
	      DEFINE_STRING(BGl_string2623z00zz__dssslz00,
		BgL_bgl_string2623za700za7za7_2673za7, "dsssl-get-key-rest-arg", 22);
	      DEFINE_STRING(BGl_string2625z00zz__dssslz00,
		BgL_bgl_string2625za700za7za7_2674za7, "quote", 5);
	      DEFINE_STRING(BGl_string2627z00zz__dssslz00,
		BgL_bgl_string2627za700za7za7_2675za7, "dsssl-get-key-arg", 17);
	      DEFINE_STRING(BGl_string2629z00zz__dssslz00,
		BgL_bgl_string2629za700za7za7_2676za7, "begin", 5);
	      DEFINE_STRING(BGl_string2631z00zz__dssslz00,
		BgL_bgl_string2631za700za7za7_2677za7, "dsssl-check-key-args!", 21);
	      DEFINE_STRING(BGl_string2632z00zz__dssslz00,
		BgL_bgl_string2632za700za7za7_2678za7, "dsssl formal parsing", 20);
	      DEFINE_STRING(BGl_string2633z00zz__dssslz00,
		BgL_bgl_string2633za700za7za7_2679za7, "Illegal #!keys parameters", 25);
	      DEFINE_STRING(BGl_string2635z00zz__dssslz00,
		BgL_bgl_string2635za700za7za7_2680za7, "tmp", 3);
	      DEFINE_STRING(BGl_string2637z00zz__dssslz00,
		BgL_bgl_string2637za700za7za7_2681za7, "if", 2);
	      DEFINE_STRING(BGl_string2639z00zz__dssslz00,
		BgL_bgl_string2639za700za7za7_2682za7, "null?", 5);
	      DEFINE_STRING(BGl_string2641z00zz__dssslz00,
		BgL_bgl_string2641za700za7za7_2683za7, "memq", 4);
	      DEFINE_STRING(BGl_string2643z00zz__dssslz00,
		BgL_bgl_string2643za700za7za7_2684za7, "car", 3);
	      DEFINE_STRING(BGl_string2645z00zz__dssslz00,
		BgL_bgl_string2645za700za7za7_2685za7, "set!", 4);
	      DEFINE_STRING(BGl_string2647z00zz__dssslz00,
		BgL_bgl_string2647za700za7za7_2686za7, "cdr", 3);
	      DEFINE_STRING(BGl_string2648z00zz__dssslz00,
		BgL_bgl_string2648za700za7za7_2687za7,
		"Illegal DSSSL formal list (#!optional)", 38);
	      DEFINE_STRING(BGl_string2650z00zz__dssslz00,
		BgL_bgl_string2650za700za7za7_2688za7, "keyword argument misses value", 29);
	      DEFINE_STRING(BGl_string2649z00zz__dssslz00,
		BgL_bgl_string2649za700za7za7_2689za7, "Unexpected #!keys parameters", 28);
	      DEFINE_STRING(BGl_string2651z00zz__dssslz00,
		BgL_bgl_string2651za700za7za7_2690za7, "_dsssl-get-key-arg", 18);
	      DEFINE_STRING(BGl_string2652z00zz__dssslz00,
		BgL_bgl_string2652za700za7za7_2691za7, "keyword", 7);
	      DEFINE_STRING(BGl_string2653z00zz__dssslz00,
		BgL_bgl_string2653za700za7za7_2692za7, "_dsssl-get-key-rest-arg", 23);
	      DEFINE_STRING(BGl_string2654z00zz__dssslz00,
		BgL_bgl_string2654za700za7za7_2693za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string2656z00zz__dssslz00,
		BgL_bgl_string2656za700za7za7_2694za7, "Illegal formal parameter", 24);
	      DEFINE_STRING(BGl_string2657z00zz__dssslz00,
		BgL_bgl_string2657za700za7za7_2695za7, "symbol or named constant expected",
		33);
	      DEFINE_STRING(BGl_string2658z00zz__dssslz00,
		BgL_bgl_string2658za700za7za7_2696za7, "symbol expected", 15);
	      DEFINE_STRING(BGl_string2660z00zz__dssslz00,
		BgL_bgl_string2660za700za7za7_2697za7, "and `.' notation", 16);
	      DEFINE_STRING(BGl_string2659z00zz__dssslz00,
		BgL_bgl_string2659za700za7za7_2698za7,
		"Can't use both DSSSL named constant", 35);
	      DEFINE_STRING(BGl_string2661z00zz__dssslz00,
		BgL_bgl_string2661za700za7za7_2699za7, "_dsssl-formals->scheme-formals",
		30);
	      DEFINE_STRING(BGl_string2662z00zz__dssslz00,
		BgL_bgl_string2662za700za7za7_2700za7, "__dsssl", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2namedzd2constantzf3zd2envz21zz__dssslz00,
		BgL_bgl__dssslza7d2namedza7d2701z00,
		BGl__dssslzd2namedzd2constantzf3zf3zz__dssslz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2checkzd2keyzd2argsz12zd2envz12zz__dssslz00,
		BgL_bgl__dssslza7d2checkza7d2702z00,
		BGl__dssslzd2checkzd2keyzd2argsz12zc0zz__dssslz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2getzd2keyzd2argzd2envz00zz__dssslz00,
		BgL_bgl__dssslza7d2getza7d2k2703z00,
		BGl__dssslzd2getzd2keyzd2argzd2zz__dssslz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2dssslzd2functionzd2preludezd2envz00zz__dssslz00,
		BgL_bgl__makeza7d2dssslza7d22704z00,
		BGl__makezd2dssslzd2functionzd2preludezd2zz__dssslz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2getzd2keyzd2restzd2argzd2envzd2zz__dssslz00,
		BgL_bgl__dssslza7d2getza7d2k2705z00,
		BGl__dssslzd2getzd2keyzd2restzd2argz00zz__dssslz00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long
		BgL_checksumz00_2296, char *BgL_fromz00_2297)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__dssslz00))
				{
					BGl_requirezd2initializa7ationz75zz__dssslz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__dssslz00();
					BGl_importedzd2moduleszd2initz00zz__dssslz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__dssslz00()
	{
		AN_OBJECT;
		{	/* Llib/dsssl.scm 14 */
			BGl_list2611z00zz__dssslz00 =
				MAKE_PAIR(BCNST(259),
				MAKE_PAIR(BCNST(258), MAKE_PAIR(BCNST(262), BNIL)));
			BGl_symbol2613z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2614z00zz__dssslz00);
			BGl_symbol2615z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2616z00zz__dssslz00);
			BGl_symbol2622z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2623z00zz__dssslz00);
			BGl_symbol2624z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2625z00zz__dssslz00);
			BGl_symbol2626z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2627z00zz__dssslz00);
			BGl_symbol2628z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2629z00zz__dssslz00);
			BGl_symbol2630z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2631z00zz__dssslz00);
			BGl_symbol2634z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2635z00zz__dssslz00);
			BGl_symbol2636z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2637z00zz__dssslz00);
			BGl_symbol2638z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2639z00zz__dssslz00);
			BGl_symbol2640z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2641z00zz__dssslz00);
			BGl_symbol2642z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2643z00zz__dssslz00);
			BGl_symbol2644z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2645z00zz__dssslz00);
			BGl_symbol2646z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2647z00zz__dssslz00);
			return (BGl_list2655z00zz__dssslz00 =
				MAKE_PAIR(BCNST(258),
					MAKE_PAIR(BCNST(259), MAKE_PAIR(BCNST(262), BNIL))), BUNSPEC);
		}
	}



/* dsssl-named-constant? */
	BGL_EXPORTED_DEF bool_t BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t
		BgL_objz00_1)
	{
		AN_OBJECT;
		{	/* Llib/dsssl.scm 56 */
			if (CNSTP(BgL_objz00_1))
				{	/* Llib/dsssl.scm 57 */
					return
						CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_1,
							BGl_list2611z00zz__dssslz00));
				}
			else
				{	/* Llib/dsssl.scm 57 */
					return ((bool_t) 0);
				}
		}
	}



/* _dsssl-named-constant? */
	obj_t BGl__dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t BgL_envz00_2213,
		obj_t BgL_objz00_2214)
	{
		AN_OBJECT;
		{	/* Llib/dsssl.scm 56 */
			return
				BBOOL(BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(BgL_objz00_2214));
		}
	}



/* make-dsssl-function-prelude */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00(obj_t BgL_wherez00_2,
		obj_t BgL_formalsz00_3, obj_t BgL_bodyz00_4, obj_t BgL_errz00_5)
	{
		AN_OBJECT;
		{	/* Llib/dsssl.scm 69 */
			{	/* Llib/dsssl.scm 73 */
				obj_t BgL_nozd2restzd2keyzd2statezd2_2218;

				obj_t BgL_restzd2statezd2_2219;

				obj_t BgL_optionalzd2statezd2_2220;

				BgL_nozd2restzd2keyzd2statezd2_2218 =
					make_fx_procedure(BGl_nozd2restzd2keyzd2statezd2zz__dssslz00,
					(int) (((long) 2)), (int) (((long) 4)));
				BgL_restzd2statezd2_2219 =
					make_fx_procedure(BGl_restzd2statezd2zz__dssslz00,
					(int) (((long) 2)), (int) (((long) 4)));
				BgL_optionalzd2statezd2_2220 =
					make_fx_procedure(BGl_optionalzd2statezd2zz__dssslz00,
					(int) (((long) 2)), (int) (((long) 6)));
				PROCEDURE_SET(BgL_nozd2restzd2keyzd2statezd2_2218,
					(int) (((long) 0)), BgL_errz00_5);
				PROCEDURE_SET(BgL_nozd2restzd2keyzd2statezd2_2218,
					(int) (((long) 1)), BgL_wherez00_2);
				PROCEDURE_SET(BgL_nozd2restzd2keyzd2statezd2_2218,
					(int) (((long) 2)), BgL_formalsz00_3);
				PROCEDURE_SET(BgL_nozd2restzd2keyzd2statezd2_2218,
					(int) (((long) 3)), BgL_bodyz00_4);
				PROCEDURE_SET(BgL_restzd2statezd2_2219,
					(int) (((long) 0)), BgL_errz00_5);
				PROCEDURE_SET(BgL_restzd2statezd2_2219,
					(int) (((long) 1)), BgL_wherez00_2);
				PROCEDURE_SET(BgL_restzd2statezd2_2219,
					(int) (((long) 2)), BgL_formalsz00_3);
				PROCEDURE_SET(BgL_restzd2statezd2_2219,
					(int) (((long) 3)), BgL_bodyz00_4);
				PROCEDURE_SET(BgL_optionalzd2statezd2_2220,
					(int) (((long) 0)), BgL_errz00_5);
				PROCEDURE_SET(BgL_optionalzd2statezd2_2220,
					(int) (((long) 1)), BgL_wherez00_2);
				PROCEDURE_SET(BgL_optionalzd2statezd2_2220,
					(int) (((long) 2)), BgL_formalsz00_3);
				PROCEDURE_SET(BgL_optionalzd2statezd2_2220,
					(int) (((long) 3)), BgL_restzd2statezd2_2219);
				PROCEDURE_SET(BgL_optionalzd2statezd2_2220,
					(int) (((long) 4)), BgL_nozd2restzd2keyzd2statezd2_2218);
				PROCEDURE_SET(BgL_optionalzd2statezd2_2220,
					(int) (((long) 5)), BgL_bodyz00_4);
				{
					obj_t BgL_argsz00_769;

					obj_t BgL_nextzd2statezd2_770;

					obj_t BgL_argsz00_752;

					BgL_argsz00_752 = BgL_formalsz00_3;
				BgL_zc3anonymousza31897ze3z83_753:
					if (PAIRP(BgL_argsz00_752))
						{	/* Llib/dsssl.scm 75 */
							bool_t BgL_testz00_2368;

							{	/* Llib/dsssl.scm 75 */
								bool_t BgL_testz00_2369;

								{	/* Llib/dsssl.scm 75 */
									obj_t BgL_auxz00_2370;

									BgL_auxz00_2370 = CAR(BgL_argsz00_752);
									BgL_testz00_2369 = SYMBOLP(BgL_auxz00_2370);
								}
								if (BgL_testz00_2369)
									{	/* Llib/dsssl.scm 75 */
										BgL_testz00_2368 = ((bool_t) 0);
									}
								else
									{	/* Llib/dsssl.scm 75 */
										bool_t BgL_testz00_2373;

										{	/* Llib/dsssl.scm 75 */
											obj_t BgL_auxz00_2374;

											BgL_auxz00_2374 = CAR(BgL_argsz00_752);
											BgL_testz00_2373 = PAIRP(BgL_auxz00_2374);
										}
										if (BgL_testz00_2373)
											{	/* Llib/dsssl.scm 75 */
												BgL_testz00_2368 = ((bool_t) 0);
											}
										else
											{	/* Llib/dsssl.scm 75 */
												BgL_testz00_2368 = ((bool_t) 1);
											}
									}
							}
							if (BgL_testz00_2368)
								{	/* Llib/dsssl.scm 77 */
									long BgL_aux1827z00_757;

									{	/* Llib/dsssl.scm 77 */
										obj_t BgL_aux1825z00_762;

										BgL_aux1825z00_762 = CAR(BgL_argsz00_752);
										if (CNSTP(BgL_aux1825z00_762))
											{	/* Llib/dsssl.scm 77 */
												BgL_aux1827z00_757 = CCNST(BgL_aux1825z00_762);
											}
										else
											{	/* Llib/dsssl.scm 77 */
												BgL_aux1827z00_757 = ((long) -1);
									}}
									switch (BgL_aux1827z00_757)
										{
										case ((long) 258):

											BgL_argsz00_769 = CDR(BgL_argsz00_752);
											BgL_nextzd2statezd2_770 = BgL_optionalzd2statezd2_2220;
										BgL_zc3anonymousza31910ze3z83_771:
											{
												obj_t BgL_asz00_773;

												BgL_asz00_773 = BgL_argsz00_769;
											BgL_zc3anonymousza31911ze3z83_774:
												if (NULLP(BgL_asz00_773))
													{	/* Llib/dsssl.scm 93 */
														return
															PROCEDURE_ENTRY(BgL_nextzd2statezd2_770)
															(BgL_nextzd2statezd2_770, BgL_argsz00_769,
															BUNSPEC, BEOA);
													}
												else
													{	/* Llib/dsssl.scm 93 */
														if (PAIRP(BgL_asz00_773))
															{	/* Llib/dsssl.scm 97 */
																bool_t BgL_testz00_2387;

																{	/* Llib/dsssl.scm 97 */
																	bool_t BgL_testz00_2388;

																	{	/* Llib/dsssl.scm 97 */
																		obj_t BgL_auxz00_2389;

																		BgL_auxz00_2389 = CAR(BgL_asz00_773);
																		BgL_testz00_2388 = SYMBOLP(BgL_auxz00_2389);
																	}
																	if (BgL_testz00_2388)
																		{	/* Llib/dsssl.scm 97 */
																			BgL_testz00_2387 = ((bool_t) 0);
																		}
																	else
																		{	/* Llib/dsssl.scm 97 */
																			bool_t BgL_testz00_2392;

																			{	/* Llib/dsssl.scm 97 */
																				obj_t BgL_auxz00_2393;

																				BgL_auxz00_2393 = CAR(BgL_asz00_773);
																				BgL_testz00_2392 =
																					PAIRP(BgL_auxz00_2393);
																			}
																			if (BgL_testz00_2392)
																				{	/* Llib/dsssl.scm 97 */
																					BgL_testz00_2387 = ((bool_t) 0);
																				}
																			else
																				{	/* Llib/dsssl.scm 97 */
																					BgL_testz00_2387 = ((bool_t) 1);
																				}
																		}
																}
																if (BgL_testz00_2387)
																	{
																		obj_t BgL_asz00_2396;

																		BgL_asz00_2396 = CDR(BgL_asz00_773);
																		BgL_asz00_773 = BgL_asz00_2396;
																		goto BgL_zc3anonymousza31911ze3z83_774;
																	}
																else
																	{

																		{	/* Llib/dsssl.scm 100 */
																			obj_t BgL_ezd21391zd2_781;

																			BgL_ezd21391zd2_781 = CAR(BgL_asz00_773);
																			if (SYMBOLP(BgL_ezd21391zd2_781))
																				{	/* Llib/dsssl.scm 100 */
																					{	/* Llib/dsssl.scm 102 */
																						obj_t BgL_dssslzd2argzd2_790;

																						BgL_dssslzd2argzd2_790 =
																							BGl_gensymz00zz__r4_symbols_6_4z00
																							(BGl_symbol2613z00zz__dssslz00);
																						{	/* Llib/dsssl.scm 103 */
																							obj_t BgL_arg1923z00_791;

																							obj_t BgL_arg1924z00_792;

																							BgL_arg1923z00_791 =
																								BGl_symbol2615z00zz__dssslz00;
																							{	/* Llib/dsssl.scm 103 */
																								obj_t BgL_arg1925z00_793;

																								obj_t BgL_arg1926z00_794;

																								{	/* Llib/dsssl.scm 103 */
																									obj_t BgL_arg1930z00_798;

																									{	/* Llib/dsssl.scm 103 */
																										obj_t BgL_arg1932z00_800;

																										{	/* Llib/dsssl.scm 103 */
																											obj_t BgL_arg1935z00_801;

																											BgL_arg1935z00_801 =
																												CAR(BgL_asz00_773);
																											{	/* Llib/dsssl.scm 103 */
																												obj_t
																													BgL_list1938z00_803;
																												BgL_list1938z00_803 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg1932z00_800 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_arg1935z00_801,
																													BgL_list1938z00_803);
																											}
																										}
																										BgL_arg1930z00_798 =
																											MAKE_PAIR
																											(BgL_dssslzd2argzd2_790,
																											BgL_arg1932z00_800);
																									}
																									BgL_arg1925z00_793 =
																										MAKE_PAIR
																										(BgL_arg1930z00_798, BNIL);
																								}
																								BgL_arg1926z00_794 =
																									PROCEDURE_ENTRY
																									(BgL_nextzd2statezd2_770)
																									(BgL_nextzd2statezd2_770,
																									BgL_argsz00_769,
																									BgL_dssslzd2argzd2_790, BEOA);
																								{	/* Llib/dsssl.scm 103 */
																									obj_t BgL_list1928z00_796;

																									{	/* Llib/dsssl.scm 103 */
																										obj_t BgL_arg1929z00_797;

																										BgL_arg1929z00_797 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list1928z00_796 =
																											MAKE_PAIR
																											(BgL_arg1926z00_794,
																											BgL_arg1929z00_797);
																									}
																									BgL_arg1924z00_792 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg1925z00_793,
																										BgL_list1928z00_796);
																								}
																							}
																							return
																								MAKE_PAIR(BgL_arg1923z00_791,
																								BgL_arg1924z00_792);
																						}
																					}
																				}
																			else
																				{	/* Llib/dsssl.scm 100 */
																					if (PAIRP(BgL_ezd21391zd2_781))
																						{	/* Llib/dsssl.scm 100 */
																							obj_t BgL_cdrzd21393zd2_784;

																							BgL_cdrzd21393zd2_784 =
																								CDR(BgL_ezd21391zd2_781);
																							{	/* Llib/dsssl.scm 100 */
																								bool_t BgL_testz00_2416;

																								{	/* Llib/dsssl.scm 100 */
																									obj_t BgL_auxz00_2417;

																									BgL_auxz00_2417 =
																										CAR(BgL_ezd21391zd2_781);
																									BgL_testz00_2416 =
																										SYMBOLP(BgL_auxz00_2417);
																								}
																								if (BgL_testz00_2416)
																									{	/* Llib/dsssl.scm 100 */
																										if (PAIRP
																											(BgL_cdrzd21393zd2_784))
																											{	/* Llib/dsssl.scm 100 */
																												if (NULLP(CDR
																														(BgL_cdrzd21393zd2_784)))
																													{	/* Llib/dsssl.scm 100 */
																														{	/* Llib/dsssl.scm 106 */
																															obj_t
																																BgL_dssslzd2argzd2_804;
																															BgL_dssslzd2argzd2_804
																																=
																																BGl_gensymz00zz__r4_symbols_6_4z00
																																(BGl_symbol2613z00zz__dssslz00);
																															{	/* Llib/dsssl.scm 107 */
																																obj_t
																																	BgL_arg1940z00_805;
																																obj_t
																																	BgL_arg1941z00_806;
																																BgL_arg1940z00_805
																																	=
																																	BGl_symbol2615z00zz__dssslz00;
																																{	/* Llib/dsssl.scm 107 */
																																	obj_t
																																		BgL_arg1942z00_807;
																																	obj_t
																																		BgL_arg1943z00_808;
																																	{	/* Llib/dsssl.scm 107 */
																																		obj_t
																																			BgL_arg1948z00_812;
																																		{	/* Llib/dsssl.scm 107 */
																																			obj_t
																																				BgL_arg1950z00_814;
																																			{	/* Llib/dsssl.scm 107 */
																																				obj_t
																																					BgL_arg1951z00_815;
																																				BgL_arg1951z00_815
																																					=
																																					CAR
																																					(CAR
																																					(BgL_asz00_773));
																																				{	/* Llib/dsssl.scm 107 */
																																					obj_t
																																						BgL_list1953z00_817;
																																					BgL_list1953z00_817
																																						=
																																						MAKE_PAIR
																																						(BNIL,
																																						BNIL);
																																					BgL_arg1950z00_814
																																						=
																																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																						(BgL_arg1951z00_815,
																																						BgL_list1953z00_817);
																																				}
																																			}
																																			BgL_arg1948z00_812
																																				=
																																				MAKE_PAIR
																																				(BgL_dssslzd2argzd2_804,
																																				BgL_arg1950z00_814);
																																		}
																																		BgL_arg1942z00_807
																																			=
																																			MAKE_PAIR
																																			(BgL_arg1948z00_812,
																																			BNIL);
																																	}
																																	BgL_arg1943z00_808
																																		=
																																		PROCEDURE_ENTRY
																																		(BgL_nextzd2statezd2_770)
																																		(BgL_nextzd2statezd2_770,
																																		BgL_argsz00_769,
																																		BgL_dssslzd2argzd2_804,
																																		BEOA);
																																	{	/* Llib/dsssl.scm 107 */
																																		obj_t
																																			BgL_list1945z00_810;
																																		{	/* Llib/dsssl.scm 107 */
																																			obj_t
																																				BgL_arg1946z00_811;
																																			BgL_arg1946z00_811
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_list1945z00_810
																																				=
																																				MAKE_PAIR
																																				(BgL_arg1943z00_808,
																																				BgL_arg1946z00_811);
																																		}
																																		BgL_arg1941z00_806
																																			=
																																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																			(BgL_arg1942z00_807,
																																			BgL_list1945z00_810);
																																	}
																																}
																																return
																																	MAKE_PAIR
																																	(BgL_arg1940z00_805,
																																	BgL_arg1941z00_806);
																															}
																														}
																													}
																												else
																													{	/* Llib/dsssl.scm 100 */
																														return BFALSE;
																													}
																											}
																										else
																											{	/* Llib/dsssl.scm 100 */
																												return BFALSE;
																											}
																									}
																								else
																									{	/* Llib/dsssl.scm 100 */
																										return BFALSE;
																									}
																							}
																						}
																					else
																						{	/* Llib/dsssl.scm 100 */
																							return BFALSE;
																						}
																				}
																		}
																	}
															}
														else
															{	/* Llib/dsssl.scm 95 */
																return
																	PROCEDURE_ENTRY(BgL_errz00_5) (BgL_errz00_5,
																	BgL_wherez00_2, BGl_string2612z00zz__dssslz00,
																	BgL_formalsz00_3, BEOA);
															}
													}
											}
											break;
										case ((long) 259):

											{
												obj_t BgL_nextzd2statezd2_2443;

												obj_t BgL_argsz00_2441;

												BgL_argsz00_2441 = CDR(BgL_argsz00_752);
												BgL_nextzd2statezd2_2443 = BgL_restzd2statezd2_2219;
												BgL_nextzd2statezd2_770 = BgL_nextzd2statezd2_2443;
												BgL_argsz00_769 = BgL_argsz00_2441;
												goto BgL_zc3anonymousza31910ze3z83_771;
											}
											break;
										case ((long) 262):

											{
												obj_t BgL_nextzd2statezd2_2446;

												obj_t BgL_argsz00_2444;

												BgL_argsz00_2444 = CDR(BgL_argsz00_752);
												BgL_nextzd2statezd2_2446 =
													BgL_nozd2restzd2keyzd2statezd2_2218;
												BgL_nextzd2statezd2_770 = BgL_nextzd2statezd2_2446;
												BgL_argsz00_769 = BgL_argsz00_2444;
												goto BgL_zc3anonymousza31910ze3z83_771;
											}
											break;
										default:
											return
												PROCEDURE_ENTRY(BgL_errz00_5) (BgL_errz00_5,
												BgL_wherez00_2, BGl_string2612z00zz__dssslz00,
												BgL_formalsz00_3, BEOA);
										}
								}
							else
								{
									obj_t BgL_argsz00_2450;

									BgL_argsz00_2450 = CDR(BgL_argsz00_752);
									BgL_argsz00_752 = BgL_argsz00_2450;
									goto BgL_zc3anonymousza31897ze3z83_753;
								}
						}
					else
						{	/* Llib/dsssl.scm 73 */
							return BgL_bodyz00_4;
						}
				}
			}
		}
	}



/* _make-dsssl-function-prelude */
	obj_t BGl__makezd2dssslzd2functionzd2preludezd2zz__dssslz00(obj_t
		BgL_envz00_2221, obj_t BgL_wherez00_2222, obj_t BgL_formalsz00_2223,
		obj_t BgL_bodyz00_2224, obj_t BgL_errz00_2225)
	{
		AN_OBJECT;
		{	/* Llib/dsssl.scm 69 */
			{	/* Llib/dsssl.scm 73 */
				obj_t BgL_auxz00_2452;

				if (PROCEDUREP(BgL_errz00_2225))
					{	/* Llib/dsssl.scm 73 */
						BgL_auxz00_2452 = BgL_errz00_2225;
					}
				else
					{
						obj_t BgL_auxz00_2455;

						BgL_auxz00_2455 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2617z00zz__dssslz00,
							BINT(((long) 3092)), BGl_string2618z00zz__dssslz00,
							BGl_string2619z00zz__dssslz00, BgL_errz00_2225);
						FAILURE(BgL_auxz00_2455, BFALSE, BFALSE);
					}
				return
					BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00
					(BgL_wherez00_2222, BgL_formalsz00_2223, BgL_bodyz00_2224,
					BgL_auxz00_2452);
			}
		}
	}



/* key-state */
	obj_t BGl_keyzd2statezd2zz__dssslz00(obj_t BgL_bodyz00_2229,
		obj_t BgL_formalsz00_2228, obj_t BgL_wherez00_2227, obj_t BgL_errz00_2226,
		obj_t BgL_argsz00_1107, obj_t BgL_dssslzd2argzd2_1108,
		obj_t BgL_collectedzd2keyszd2_1109, bool_t BgL_allowzd2restpzd2_1110)
	{
		AN_OBJECT;
		{	/* Llib/dsssl.scm 260 */
			if (NULLP(BgL_argsz00_1107))
				{	/* Llib/dsssl.scm 266 */
					return BgL_bodyz00_2229;
				}
			else
				{	/* Llib/dsssl.scm 266 */
					if ((CAR(BgL_argsz00_1107) == BCNST(259)))
						{	/* Llib/dsssl.scm 269 */
							bool_t BgL_testz00_2465;

							if (BgL_allowzd2restpzd2_1110)
								{	/* Llib/dsssl.scm 269 */
									if (NULLP(CDR(BgL_argsz00_1107)))
										{	/* Llib/dsssl.scm 270 */
											BgL_testz00_2465 = ((bool_t) 1);
										}
									else
										{	/* Llib/dsssl.scm 271 */
											bool_t BgL_testz00_2470;

											{	/* Llib/dsssl.scm 271 */
												obj_t BgL_auxz00_2471;

												{	/* Llib/dsssl.scm 271 */
													obj_t BgL_pairz00_1899;

													BgL_pairz00_1899 = BgL_argsz00_1107;
													BgL_auxz00_2471 = CAR(CDR(BgL_pairz00_1899));
												}
												BgL_testz00_2470 = SYMBOLP(BgL_auxz00_2471);
											}
											if (BgL_testz00_2470)
												{	/* Llib/dsssl.scm 272 */
													obj_t BgL_auxz00_2475;

													{	/* Llib/dsssl.scm 272 */
														obj_t BgL_pairz00_1904;

														BgL_pairz00_1904 = BgL_argsz00_1107;
														BgL_auxz00_2475 = CDR(CDR(BgL_pairz00_1904));
													}
													BgL_testz00_2465 = PAIRP(BgL_auxz00_2475);
												}
											else
												{	/* Llib/dsssl.scm 271 */
													BgL_testz00_2465 = ((bool_t) 1);
												}
										}
								}
							else
								{	/* Llib/dsssl.scm 269 */
									BgL_testz00_2465 = ((bool_t) 1);
								}
							if (BgL_testz00_2465)
								{	/* Llib/dsssl.scm 269 */
									return
										PROCEDURE_ENTRY(BgL_errz00_2226) (BgL_errz00_2226,
										BgL_wherez00_2227, BGl_string2620z00zz__dssslz00,
										BgL_formalsz00_2228, BEOA);
								}
							else
								{	/* Llib/dsssl.scm 274 */
									obj_t BgL_arg2194z00_1117;

									{	/* Llib/dsssl.scm 274 */
										obj_t BgL_pairz00_1909;

										BgL_pairz00_1909 = BgL_argsz00_1107;
										BgL_arg2194z00_1117 = CAR(CDR(BgL_pairz00_1909));
									}
									return
										BGl_restzd2keyzd2argz00zz__dssslz00(BgL_dssslzd2argzd2_1108,
										BgL_collectedzd2keyszd2_1109, BgL_arg2194z00_1117,
										BgL_bodyz00_2229);
								}
						}
					else
						{	/* Llib/dsssl.scm 268 */
							if (PAIRP(BgL_argsz00_1107))
								{	/* Llib/dsssl.scm 277 */
									bool_t BgL_testz00_2486;

									{	/* Llib/dsssl.scm 277 */
										bool_t BgL_testz00_2487;

										{	/* Llib/dsssl.scm 277 */
											obj_t BgL_auxz00_2488;

											BgL_auxz00_2488 = CAR(BgL_argsz00_1107);
											BgL_testz00_2487 = SYMBOLP(BgL_auxz00_2488);
										}
										if (BgL_testz00_2487)
											{	/* Llib/dsssl.scm 277 */
												BgL_testz00_2486 = ((bool_t) 0);
											}
										else
											{	/* Llib/dsssl.scm 277 */
												bool_t BgL_testz00_2491;

												{	/* Llib/dsssl.scm 277 */
													obj_t BgL_auxz00_2492;

													BgL_auxz00_2492 = CAR(BgL_argsz00_1107);
													BgL_testz00_2491 = PAIRP(BgL_auxz00_2492);
												}
												if (BgL_testz00_2491)
													{	/* Llib/dsssl.scm 277 */
														BgL_testz00_2486 = ((bool_t) 0);
													}
												else
													{	/* Llib/dsssl.scm 277 */
														BgL_testz00_2486 = ((bool_t) 1);
													}
											}
									}
									if (BgL_testz00_2486)
										{	/* Llib/dsssl.scm 277 */
											return
												PROCEDURE_ENTRY(BgL_errz00_2226) (BgL_errz00_2226,
												BgL_wherez00_2227, BGl_string2621z00zz__dssslz00,
												BgL_formalsz00_2228, BEOA);
										}
									else
										{	/* Llib/dsssl.scm 281 */
											obj_t BgL_ezd21456zd2_1131;

											BgL_ezd21456zd2_1131 = CAR(BgL_argsz00_1107);
											if (PAIRP(BgL_ezd21456zd2_1131))
												{	/* Llib/dsssl.scm 281 */
													obj_t BgL_carzd21461zd2_1133;

													obj_t BgL_cdrzd21462zd2_1134;

													BgL_carzd21461zd2_1133 = CAR(BgL_ezd21456zd2_1131);
													BgL_cdrzd21462zd2_1134 = CDR(BgL_ezd21456zd2_1131);
													if (SYMBOLP(BgL_carzd21461zd2_1133))
														{	/* Llib/dsssl.scm 281 */
															if (PAIRP(BgL_cdrzd21462zd2_1134))
																{	/* Llib/dsssl.scm 281 */
																	if (NULLP(CDR(BgL_cdrzd21462zd2_1134)))
																		{	/* Llib/dsssl.scm 281 */
																			return
																				BGl_onezd2keyzd2argz00zz__dssslz00
																				(BgL_allowzd2restpzd2_1110,
																				BgL_argsz00_1107,
																				BgL_dssslzd2argzd2_1108,
																				BgL_bodyz00_2229, BgL_formalsz00_2228,
																				BgL_wherez00_2227, BgL_errz00_2226,
																				BgL_carzd21461zd2_1133,
																				CAR(BgL_cdrzd21462zd2_1134),
																				BgL_collectedzd2keyszd2_1109);
																		}
																	else
																		{	/* Llib/dsssl.scm 281 */
																			return
																				PROCEDURE_ENTRY(BgL_errz00_2226)
																				(BgL_errz00_2226, BgL_wherez00_2227,
																				BGl_string2621z00zz__dssslz00,
																				BgL_formalsz00_2228, BEOA);
																		}
																}
															else
																{	/* Llib/dsssl.scm 281 */
																	return
																		PROCEDURE_ENTRY(BgL_errz00_2226)
																		(BgL_errz00_2226, BgL_wherez00_2227,
																		BGl_string2621z00zz__dssslz00,
																		BgL_formalsz00_2228, BEOA);
																}
														}
													else
														{	/* Llib/dsssl.scm 281 */
															return
																PROCEDURE_ENTRY(BgL_errz00_2226)
																(BgL_errz00_2226, BgL_wherez00_2227,
																BGl_string2621z00zz__dssslz00,
																BgL_formalsz00_2228, BEOA);
														}
												}
											else
												{	/* Llib/dsssl.scm 281 */
													if (SYMBOLP(BgL_ezd21456zd2_1131))
														{	/* Llib/dsssl.scm 281 */
															return
																BGl_onezd2keyzd2argz00zz__dssslz00
																(BgL_allowzd2restpzd2_1110, BgL_argsz00_1107,
																BgL_dssslzd2argzd2_1108, BgL_bodyz00_2229,
																BgL_formalsz00_2228, BgL_wherez00_2227,
																BgL_errz00_2226, BgL_ezd21456zd2_1131, BFALSE,
																BgL_collectedzd2keyszd2_1109);
														}
													else
														{	/* Llib/dsssl.scm 281 */
															return
																PROCEDURE_ENTRY(BgL_errz00_2226)
																(BgL_errz00_2226, BgL_wherez00_2227,
																BGl_string2621z00zz__dssslz00,
																BgL_formalsz00_2228, BEOA);
														}
												}
										}
								}
							else
								{	/* Llib/dsssl.scm 275 */
									return
										PROCEDURE_ENTRY(BgL_errz00_2226) (BgL_errz00_2226,
										BgL_wherez00_2227, BGl_string2621z00zz__dssslz00,
										BgL_formalsz00_2228, BEOA);
								}
						}
				}
		}
	}



/* rest-key-arg */
	obj_t BGl_restzd2keyzd2argz00zz__dssslz00(obj_t BgL_dssslzd2argzd2_2231,
		obj_t BgL_collectedzd2keyszd2_2230, obj_t BgL_argz00_1176,
		obj_t BgL_bodyz00_1177)
	{
		AN_OBJECT;
		{	/* Llib/dsssl.scm 264 */
			{	/* Llib/dsssl.scm 263 */
				obj_t BgL_arg2252z00_1179;

				obj_t BgL_arg2253z00_1180;

				BgL_arg2252z00_1179 = BGl_symbol2615z00zz__dssslz00;
				{	/* Llib/dsssl.scm 263 */
					obj_t BgL_arg2255z00_1181;

					{	/* Llib/dsssl.scm 263 */
						obj_t BgL_arg2260z00_1185;

						{	/* Llib/dsssl.scm 263 */
							obj_t BgL_arg2263z00_1187;

							{	/* Llib/dsssl.scm 263 */
								obj_t BgL_arg2264z00_1188;

								{	/* Llib/dsssl.scm 263 */
									obj_t BgL_arg2267z00_1191;

									obj_t BgL_arg2268z00_1192;

									BgL_arg2267z00_1191 = BGl_symbol2622z00zz__dssslz00;
									{	/* Llib/dsssl.scm 263 */
										obj_t BgL_arg2269z00_1193;

										{	/* Llib/dsssl.scm 263 */
											obj_t BgL_arg2274z00_1197;

											obj_t BgL_arg2275z00_1198;

											BgL_arg2274z00_1197 = BGl_symbol2624z00zz__dssslz00;
											{	/* Llib/dsssl.scm 263 */
												obj_t BgL_list2276z00_1199;

												BgL_list2276z00_1199 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2275z00_1198 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_collectedzd2keyszd2_2230, BgL_list2276z00_1199);
											}
											BgL_arg2269z00_1193 =
												MAKE_PAIR(BgL_arg2274z00_1197, BgL_arg2275z00_1198);
										}
										{	/* Llib/dsssl.scm 263 */
											obj_t BgL_list2271z00_1195;

											{	/* Llib/dsssl.scm 263 */
												obj_t BgL_arg2272z00_1196;

												BgL_arg2272z00_1196 = MAKE_PAIR(BNIL, BNIL);
												BgL_list2271z00_1195 =
													MAKE_PAIR(BgL_arg2269z00_1193, BgL_arg2272z00_1196);
											}
											BgL_arg2268z00_1192 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_dssslzd2argzd2_2231, BgL_list2271z00_1195);
										}
									}
									BgL_arg2264z00_1188 =
										MAKE_PAIR(BgL_arg2267z00_1191, BgL_arg2268z00_1192);
								}
								{	/* Llib/dsssl.scm 263 */
									obj_t BgL_list2266z00_1190;

									BgL_list2266z00_1190 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2263z00_1187 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg2264z00_1188, BgL_list2266z00_1190);
								}
							}
							BgL_arg2260z00_1185 =
								MAKE_PAIR(BgL_argz00_1176, BgL_arg2263z00_1187);
						}
						BgL_arg2255z00_1181 = MAKE_PAIR(BgL_arg2260z00_1185, BNIL);
					}
					{	/* Llib/dsssl.scm 263 */
						obj_t BgL_list2257z00_1183;

						{	/* Llib/dsssl.scm 263 */
							obj_t BgL_arg2259z00_1184;

							BgL_arg2259z00_1184 = MAKE_PAIR(BNIL, BNIL);
							BgL_list2257z00_1183 =
								MAKE_PAIR(BgL_bodyz00_1177, BgL_arg2259z00_1184);
						}
						BgL_arg2253z00_1180 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2255z00_1181,
							BgL_list2257z00_1183);
					}
				}
				return MAKE_PAIR(BgL_arg2252z00_1179, BgL_arg2253z00_1180);
			}
		}
	}



/* one-key-arg */
	obj_t BGl_onezd2keyzd2argz00zz__dssslz00(bool_t BgL_allowzd2restpzd2_2238,
		obj_t BgL_argsz00_2237, obj_t BgL_dssslzd2argzd2_2236,
		obj_t BgL_bodyz00_2235, obj_t BgL_formalsz00_2234, obj_t BgL_wherez00_2233,
		obj_t BgL_errz00_2232, obj_t BgL_argz00_1149,
		obj_t BgL_initializa7erza7_1150, obj_t BgL_collectedzd2keyszd2_1151)
	{
		AN_OBJECT;
		{	/* Llib/dsssl.scm 260 */
			{	/* Llib/dsssl.scm 253 */
				obj_t BgL_arg2222z00_1153;

				obj_t BgL_arg2223z00_1154;

				BgL_arg2222z00_1153 = BGl_symbol2615z00zz__dssslz00;
				{	/* Llib/dsssl.scm 253 */
					obj_t BgL_arg2224z00_1155;

					obj_t BgL_arg2226z00_1156;

					{	/* Llib/dsssl.scm 253 */
						obj_t BgL_arg2234z00_1160;

						{	/* Llib/dsssl.scm 253 */
							obj_t BgL_arg2236z00_1162;

							{	/* Llib/dsssl.scm 253 */
								obj_t BgL_arg2237z00_1163;

								{	/* Llib/dsssl.scm 253 */
									obj_t BgL_arg2240z00_1166;

									obj_t BgL_arg2242z00_1167;

									BgL_arg2240z00_1166 = BGl_symbol2626z00zz__dssslz00;
									{	/* Llib/dsssl.scm 254 */
										obj_t BgL_arg2243z00_1168;

										BgL_arg2243z00_1168 =
											BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00
											(BgL_argz00_1149);
										{	/* Llib/dsssl.scm 253 */
											obj_t BgL_list2245z00_1170;

											{	/* Llib/dsssl.scm 253 */
												obj_t BgL_arg2246z00_1171;

												{	/* Llib/dsssl.scm 253 */
													obj_t BgL_arg2247z00_1172;

													BgL_arg2247z00_1172 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2246z00_1171 =
														MAKE_PAIR(BgL_initializa7erza7_1150,
														BgL_arg2247z00_1172);
												}
												BgL_list2245z00_1170 =
													MAKE_PAIR(BgL_arg2243z00_1168, BgL_arg2246z00_1171);
											}
											BgL_arg2242z00_1167 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_dssslzd2argzd2_2236, BgL_list2245z00_1170);
										}
									}
									BgL_arg2237z00_1163 =
										MAKE_PAIR(BgL_arg2240z00_1166, BgL_arg2242z00_1167);
								}
								{	/* Llib/dsssl.scm 253 */
									obj_t BgL_list2239z00_1165;

									BgL_list2239z00_1165 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2236z00_1162 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg2237z00_1163, BgL_list2239z00_1165);
								}
							}
							BgL_arg2234z00_1160 =
								MAKE_PAIR(BgL_argz00_1149, BgL_arg2236z00_1162);
						}
						BgL_arg2224z00_1155 = MAKE_PAIR(BgL_arg2234z00_1160, BNIL);
					}
					{	/* Llib/dsssl.scm 256 */
						obj_t BgL_arg2248z00_1173;

						obj_t BgL_arg2249z00_1174;

						BgL_arg2248z00_1173 = CDR(BgL_argsz00_2237);
						BgL_arg2249z00_1174 =
							MAKE_PAIR(BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00
							(BgL_argz00_1149), BgL_collectedzd2keyszd2_1151);
						BgL_arg2226z00_1156 =
							BGl_keyzd2statezd2zz__dssslz00(BgL_bodyz00_2235,
							BgL_formalsz00_2234, BgL_wherez00_2233, BgL_errz00_2232,
							BgL_arg2248z00_1173, BgL_dssslzd2argzd2_2236, BgL_arg2249z00_1174,
							BgL_allowzd2restpzd2_2238);
					}
					{	/* Llib/dsssl.scm 253 */
						obj_t BgL_list2228z00_1158;

						{	/* Llib/dsssl.scm 253 */
							obj_t BgL_arg2233z00_1159;

							BgL_arg2233z00_1159 = MAKE_PAIR(BNIL, BNIL);
							BgL_list2228z00_1158 =
								MAKE_PAIR(BgL_arg2226z00_1156, BgL_arg2233z00_1159);
						}
						BgL_arg2223z00_1154 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2224z00_1155,
							BgL_list2228z00_1158);
					}
				}
				return MAKE_PAIR(BgL_arg2222z00_1153, BgL_arg2223z00_1154);
			}
		}
	}



/* no-rest-key-state */
	obj_t BGl_nozd2restzd2keyzd2statezd2zz__dssslz00(obj_t BgL_envz00_2239,
		obj_t BgL_argsz00_2244, obj_t BgL_dssslzd2argzd2_2245)
	{
		AN_OBJECT;
		{	/* Llib/dsssl.scm 248 */
			{	/* Llib/dsssl.scm 243 */
				obj_t BgL_errz00_2240;

				obj_t BgL_wherez00_2241;

				obj_t BgL_formalsz00_2242;

				obj_t BgL_bodyz00_2243;

				BgL_errz00_2240 = PROCEDURE_REF(BgL_envz00_2239, (int) (((long) 0)));
				BgL_wherez00_2241 = PROCEDURE_REF(BgL_envz00_2239, (int) (((long) 1)));
				BgL_formalsz00_2242 =
					PROCEDURE_REF(BgL_envz00_2239, (int) (((long) 2)));
				BgL_bodyz00_2243 = PROCEDURE_REF(BgL_envz00_2239, (int) (((long) 3)));
				{
					obj_t BgL_argsz00_1085;

					obj_t BgL_dssslzd2argzd2_1086;

					BgL_argsz00_1085 = BgL_argsz00_2244;
					BgL_dssslzd2argzd2_1086 = BgL_dssslzd2argzd2_2245;
					{
						obj_t BgL_argsz00_1054;

						if (NULLP(BgL_argsz00_1085))
							{	/* Llib/dsssl.scm 243 */
								return BgL_bodyz00_2243;
							}
						else
							{	/* Llib/dsssl.scm 246 */
								obj_t BgL_arg2172z00_1089;

								obj_t BgL_arg2173z00_1090;

								BgL_arg2172z00_1089 = BGl_symbol2628z00zz__dssslz00;
								{	/* Llib/dsssl.scm 247 */
									obj_t BgL_arg2174z00_1091;

									obj_t BgL_arg2175z00_1092;

									{	/* Llib/dsssl.scm 247 */
										obj_t BgL_arg2179z00_1096;

										obj_t BgL_arg2180z00_1097;

										BgL_arg2179z00_1096 = BGl_symbol2630z00zz__dssslz00;
										{	/* Llib/dsssl.scm 247 */
											obj_t BgL_arg2181z00_1098;

											{	/* Llib/dsssl.scm 247 */
												obj_t BgL_arg2185z00_1102;

												obj_t BgL_arg2186z00_1103;

												BgL_arg2185z00_1102 = BGl_symbol2624z00zz__dssslz00;
												{	/* Llib/dsssl.scm 247 */
													obj_t BgL_arg2187z00_1104;

													BgL_argsz00_1054 = BgL_argsz00_1085;
													{
														obj_t BgL_argsz00_1058;

														obj_t BgL_auxz00_1059;

														BgL_argsz00_1058 = BgL_argsz00_1054;
														BgL_auxz00_1059 = BNIL;
													BgL_zc3anonymousza32154ze3z83_1060:
														if (NULLP(BgL_argsz00_1058))
															{	/* Llib/dsssl.scm 226 */
																BgL_arg2187z00_1104 =
																	bgl_reverse_bang(BgL_auxz00_1059);
															}
														else
															{	/* Llib/dsssl.scm 226 */
																if ((CAR(BgL_argsz00_1058) == BCNST(259)))
																	{	/* Llib/dsssl.scm 228 */
																		BgL_arg2187z00_1104 =
																			bgl_reverse_bang(BgL_auxz00_1059);
																	}
																else
																	{	/* Llib/dsssl.scm 231 */
																		obj_t BgL_ezd21439zd2_1068;

																		BgL_ezd21439zd2_1068 =
																			CAR(BgL_argsz00_1058);
																		if (SYMBOLP(BgL_ezd21439zd2_1068))
																			{	/* Llib/dsssl.scm 231 */
																				obj_t BgL_argz00_1869;

																				BgL_argz00_1869 = BgL_ezd21439zd2_1068;
																				{	/* Llib/dsssl.scm 231 */
																					obj_t BgL_arg2163z00_1870;

																					obj_t BgL_arg2164z00_1871;

																					BgL_arg2163z00_1870 =
																						CDR(BgL_argsz00_1058);
																					BgL_arg2164z00_1871 =
																						MAKE_PAIR
																						(BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00
																						(BgL_argz00_1869), BgL_auxz00_1059);
																					{
																						obj_t BgL_auxz00_2581;

																						obj_t BgL_argsz00_2580;

																						BgL_argsz00_2580 =
																							BgL_arg2163z00_1870;
																						BgL_auxz00_2581 =
																							BgL_arg2164z00_1871;
																						BgL_auxz00_1059 = BgL_auxz00_2581;
																						BgL_argsz00_1058 = BgL_argsz00_2580;
																						goto
																							BgL_zc3anonymousza32154ze3z83_1060;
																					}
																				}
																			}
																		else
																			{	/* Llib/dsssl.scm 231 */
																				if (PAIRP(BgL_ezd21439zd2_1068))
																					{	/* Llib/dsssl.scm 231 */
																						obj_t BgL_carzd21446zd2_1071;

																						obj_t BgL_cdrzd21447zd2_1072;

																						BgL_carzd21446zd2_1071 =
																							CAR(BgL_ezd21439zd2_1068);
																						BgL_cdrzd21447zd2_1072 =
																							CDR(BgL_ezd21439zd2_1068);
																						if (SYMBOLP(BgL_carzd21446zd2_1071))
																							{	/* Llib/dsssl.scm 231 */
																								if (PAIRP
																									(BgL_cdrzd21447zd2_1072))
																									{	/* Llib/dsssl.scm 231 */
																										if (NULLP(CDR
																												(BgL_cdrzd21447zd2_1072)))
																											{	/* Llib/dsssl.scm 231 */
																												obj_t BgL_argz00_1881;

																												BgL_argz00_1881 =
																													BgL_carzd21446zd2_1071;
																												{	/* Llib/dsssl.scm 231 */
																													obj_t
																														BgL_arg2166z00_1882;
																													obj_t
																														BgL_arg2167z00_1883;
																													BgL_arg2166z00_1882 =
																														CDR
																														(BgL_argsz00_1058);
																													BgL_arg2167z00_1883 =
																														MAKE_PAIR
																														(BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00
																														(BgL_argz00_1881),
																														BgL_auxz00_1059);
																													{
																														obj_t
																															BgL_auxz00_2597;
																														obj_t
																															BgL_argsz00_2596;
																														BgL_argsz00_2596 =
																															BgL_arg2166z00_1882;
																														BgL_auxz00_2597 =
																															BgL_arg2167z00_1883;
																														BgL_auxz00_1059 =
																															BgL_auxz00_2597;
																														BgL_argsz00_1058 =
																															BgL_argsz00_2596;
																														goto
																															BgL_zc3anonymousza32154ze3z83_1060;
																													}
																												}
																											}
																										else
																											{	/* Llib/dsssl.scm 231 */
																												BgL_arg2187z00_1104 =
																													PROCEDURE_ENTRY
																													(BgL_errz00_2240)
																													(BgL_errz00_2240,
																													BgL_wherez00_2241,
																													BGl_string2621z00zz__dssslz00,
																													BgL_formalsz00_2242,
																													BEOA);
																											}
																									}
																								else
																									{	/* Llib/dsssl.scm 231 */
																										BgL_arg2187z00_1104 =
																											PROCEDURE_ENTRY
																											(BgL_errz00_2240)
																											(BgL_errz00_2240,
																											BgL_wherez00_2241,
																											BGl_string2621z00zz__dssslz00,
																											BgL_formalsz00_2242,
																											BEOA);
																									}
																							}
																						else
																							{	/* Llib/dsssl.scm 231 */
																								BgL_arg2187z00_1104 =
																									PROCEDURE_ENTRY
																									(BgL_errz00_2240)
																									(BgL_errz00_2240,
																									BgL_wherez00_2241,
																									BGl_string2621z00zz__dssslz00,
																									BgL_formalsz00_2242, BEOA);
																							}
																					}
																				else
																					{	/* Llib/dsssl.scm 231 */
																						BgL_arg2187z00_1104 =
																							PROCEDURE_ENTRY(BgL_errz00_2240)
																							(BgL_errz00_2240,
																							BgL_wherez00_2241,
																							BGl_string2621z00zz__dssslz00,
																							BgL_formalsz00_2242, BEOA);
																					}
																			}
																	}
															}
													}
													{	/* Llib/dsssl.scm 247 */
														obj_t BgL_list2189z00_1106;

														BgL_list2189z00_1106 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2186z00_1103 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg2187z00_1104, BgL_list2189z00_1106);
													}
												}
												BgL_arg2181z00_1098 =
													MAKE_PAIR(BgL_arg2185z00_1102, BgL_arg2186z00_1103);
											}
											{	/* Llib/dsssl.scm 247 */
												obj_t BgL_list2183z00_1100;

												{	/* Llib/dsssl.scm 247 */
													obj_t BgL_arg2184z00_1101;

													BgL_arg2184z00_1101 = MAKE_PAIR(BNIL, BNIL);
													BgL_list2183z00_1100 =
														MAKE_PAIR(BgL_arg2181z00_1098, BgL_arg2184z00_1101);
												}
												BgL_arg2180z00_1097 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_dssslzd2argzd2_1086, BgL_list2183z00_1100);
											}
										}
										BgL_arg2174z00_1091 =
											MAKE_PAIR(BgL_arg2179z00_1096, BgL_arg2180z00_1097);
									}
									BgL_arg2175z00_1092 =
										BGl_keyzd2statezd2zz__dssslz00(BgL_bodyz00_2243,
										BgL_formalsz00_2242, BgL_wherez00_2241, BgL_errz00_2240,
										BgL_argsz00_1085, BgL_dssslzd2argzd2_1086, BNIL,
										((bool_t) 1));
									{	/* Llib/dsssl.scm 246 */
										obj_t BgL_list2177z00_1094;

										{	/* Llib/dsssl.scm 246 */
											obj_t BgL_arg2178z00_1095;

											BgL_arg2178z00_1095 = MAKE_PAIR(BNIL, BNIL);
											BgL_list2177z00_1094 =
												MAKE_PAIR(BgL_arg2175z00_1092, BgL_arg2178z00_1095);
										}
										BgL_arg2173z00_1090 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg2174z00_1091, BgL_list2177z00_1094);
									}
								}
								return MAKE_PAIR(BgL_arg2172z00_1089, BgL_arg2173z00_1090);
							}
					}
				}
			}
		}
	}



/* rest-state */
	obj_t BGl_restzd2statezd2zz__dssslz00(obj_t BgL_envz00_2246,
		obj_t BgL_argsz00_2251, obj_t BgL_dssslzd2argzd2_2252)
	{
		AN_OBJECT;
		{	/* Llib/dsssl.scm 189 */
			{	/* Llib/dsssl.scm 181 */
				obj_t BgL_errz00_2247;

				obj_t BgL_wherez00_2248;

				obj_t BgL_formalsz00_2249;

				obj_t BgL_bodyz00_2250;

				BgL_errz00_2247 = PROCEDURE_REF(BgL_envz00_2246, (int) (((long) 0)));
				BgL_wherez00_2248 = PROCEDURE_REF(BgL_envz00_2246, (int) (((long) 1)));
				BgL_formalsz00_2249 =
					PROCEDURE_REF(BgL_envz00_2246, (int) (((long) 2)));
				BgL_bodyz00_2250 = PROCEDURE_REF(BgL_envz00_2246, (int) (((long) 3)));
				{
					obj_t BgL_argsz00_985;

					obj_t BgL_dssslzd2argzd2_986;

					BgL_argsz00_985 = BgL_argsz00_2251;
					BgL_dssslzd2argzd2_986 = BgL_dssslzd2argzd2_2252;
					{
						obj_t BgL_argsz00_1006;

						obj_t BgL_dssslzd2argzd2_1007;

						obj_t BgL_argsz00_1014;

						obj_t BgL_dssslzd2argzd2_1015;

						if (PAIRP(BgL_argsz00_985))
							{
								obj_t BgL_idz00_989;

								{	/* Llib/dsssl.scm 184 */
									obj_t BgL_ezd21431zd2_992;

									BgL_ezd21431zd2_992 = CAR(BgL_argsz00_985);
									if (SYMBOLP(BgL_ezd21431zd2_992))
										{	/* Llib/dsssl.scm 184 */
											BgL_idz00_989 = BgL_ezd21431zd2_992;
											{	/* Llib/dsssl.scm 186 */
												obj_t BgL_arg2103z00_994;

												obj_t BgL_arg2104z00_995;

												BgL_arg2103z00_994 = BGl_symbol2615z00zz__dssslz00;
												{	/* Llib/dsssl.scm 186 */
													obj_t BgL_arg2105z00_996;

													obj_t BgL_arg2106z00_997;

													{	/* Llib/dsssl.scm 186 */
														obj_t BgL_arg2110z00_1001;

														{	/* Llib/dsssl.scm 186 */
															obj_t BgL_arg2112z00_1003;

															{	/* Llib/dsssl.scm 186 */
																obj_t BgL_list2113z00_1004;

																BgL_list2113z00_1004 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2112z00_1003 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_dssslzd2argzd2_986,
																	BgL_list2113z00_1004);
															}
															BgL_arg2110z00_1001 =
																MAKE_PAIR(BgL_idz00_989, BgL_arg2112z00_1003);
														}
														BgL_arg2105z00_996 =
															MAKE_PAIR(BgL_arg2110z00_1001, BNIL);
													}
													BgL_argsz00_1006 = CDR(BgL_argsz00_985);
													BgL_dssslzd2argzd2_1007 = BgL_dssslzd2argzd2_986;
													if (NULLP(BgL_argsz00_1006))
														{	/* Llib/dsssl.scm 193 */
															BgL_arg2106z00_997 = BgL_bodyz00_2250;
														}
													else
														{	/* Llib/dsssl.scm 193 */
															if (PAIRP(BgL_argsz00_1006))
																{	/* Llib/dsssl.scm 195 */
																	if ((CAR(BgL_argsz00_1006) == BCNST(262)))
																		{	/* Llib/dsssl.scm 197 */
																			BgL_argsz00_1014 = CDR(BgL_argsz00_1006);
																			BgL_dssslzd2argzd2_1015 =
																				BgL_dssslzd2argzd2_1007;
																			if (NULLP(BgL_argsz00_1014))
																				{	/* Llib/dsssl.scm 204 */
																					BgL_arg2106z00_997 = BgL_bodyz00_2250;
																				}
																			else
																				{	/* Llib/dsssl.scm 207 */
																					obj_t BgL_keyzd2listzd2_1018;

																					{	/* Llib/dsssl.scm 207 */
																						obj_t BgL_head1859z00_1037;

																						BgL_head1859z00_1037 =
																							MAKE_PAIR(BNIL, BNIL);
																						{
																							obj_t BgL_l1857z00_1039;

																							obj_t BgL_tail1860z00_1040;

																							BgL_l1857z00_1039 =
																								BgL_argsz00_1014;
																							BgL_tail1860z00_1040 =
																								BgL_head1859z00_1037;
																						BgL_zc3anonymousza32143ze3z83_1041:
																							if (NULLP(BgL_l1857z00_1039))
																								{	/* Llib/dsssl.scm 207 */
																									BgL_keyzd2listzd2_1018 =
																										CDR(BgL_head1859z00_1037);
																								}
																							else
																								{	/* Llib/dsssl.scm 207 */
																									obj_t BgL_newtail1861z00_1043;

																									{	/* Llib/dsssl.scm 207 */
																										obj_t BgL_arg2146z00_1045;

																										{	/* Llib/dsssl.scm 207 */
																											obj_t BgL_xz00_1047;

																											BgL_xz00_1047 =
																												CAR(BgL_l1857z00_1039);
																											{	/* Llib/dsssl.scm 209 */
																												bool_t BgL_testz00_2649;

																												if (PAIRP
																													(BgL_xz00_1047))
																													{	/* Llib/dsssl.scm 209 */
																														obj_t
																															BgL_auxz00_2652;
																														BgL_auxz00_2652 =
																															CAR
																															(BgL_xz00_1047);
																														BgL_testz00_2649 =
																															SYMBOLP
																															(BgL_auxz00_2652);
																													}
																												else
																													{	/* Llib/dsssl.scm 209 */
																														BgL_testz00_2649 =
																															((bool_t) 0);
																													}
																												if (BgL_testz00_2649)
																													{	/* Llib/dsssl.scm 209 */
																														BgL_arg2146z00_1045
																															=
																															BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00
																															(CAR
																															(BgL_xz00_1047));
																													}
																												else
																													{	/* Llib/dsssl.scm 209 */
																														if (SYMBOLP
																															(BgL_xz00_1047))
																															{	/* Llib/dsssl.scm 211 */
																																BgL_arg2146z00_1045
																																	=
																																	BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00
																																	(BgL_xz00_1047);
																															}
																														else
																															{	/* Llib/dsssl.scm 211 */
																																BgL_arg2146z00_1045
																																	=
																																	BGl_errorz00zz__errorz00
																																	(BGl_string2632z00zz__dssslz00,
																																	BGl_string2633z00zz__dssslz00,
																																	BgL_xz00_1047);
																															}
																													}
																											}
																										}
																										BgL_newtail1861z00_1043 =
																											MAKE_PAIR
																											(BgL_arg2146z00_1045,
																											BNIL);
																									}
																									SET_CDR(BgL_tail1860z00_1040,
																										BgL_newtail1861z00_1043);
																									{
																										obj_t BgL_tail1860z00_2665;

																										obj_t BgL_l1857z00_2663;

																										BgL_l1857z00_2663 =
																											CDR(BgL_l1857z00_1039);
																										BgL_tail1860z00_2665 =
																											BgL_newtail1861z00_1043;
																										BgL_tail1860z00_1040 =
																											BgL_tail1860z00_2665;
																										BgL_l1857z00_1039 =
																											BgL_l1857z00_2663;
																										goto
																											BgL_zc3anonymousza32143ze3z83_1041;
																									}
																								}
																						}
																					}
																					{	/* Llib/dsssl.scm 218 */
																						obj_t BgL_arg2124z00_1019;

																						obj_t BgL_arg2125z00_1020;

																						BgL_arg2124z00_1019 =
																							BGl_symbol2628z00zz__dssslz00;
																						{	/* Llib/dsssl.scm 219 */
																							obj_t BgL_arg2126z00_1021;

																							obj_t BgL_arg2127z00_1022;

																							{	/* Llib/dsssl.scm 219 */
																								obj_t BgL_arg2133z00_1026;

																								obj_t BgL_arg2134z00_1027;

																								BgL_arg2133z00_1026 =
																									BGl_symbol2630z00zz__dssslz00;
																								{	/* Llib/dsssl.scm 219 */
																									obj_t BgL_arg2135z00_1028;

																									{	/* Llib/dsssl.scm 219 */
																										obj_t BgL_arg2139z00_1032;

																										obj_t BgL_arg2140z00_1033;

																										BgL_arg2139z00_1032 =
																											BGl_symbol2624z00zz__dssslz00;
																										{	/* Llib/dsssl.scm 219 */
																											obj_t
																												BgL_list2141z00_1034;
																											BgL_list2141z00_1034 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg2140z00_1033 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_keyzd2listzd2_1018,
																												BgL_list2141z00_1034);
																										}
																										BgL_arg2135z00_1028 =
																											MAKE_PAIR
																											(BgL_arg2139z00_1032,
																											BgL_arg2140z00_1033);
																									}
																									{	/* Llib/dsssl.scm 219 */
																										obj_t BgL_list2137z00_1030;

																										{	/* Llib/dsssl.scm 219 */
																											obj_t BgL_arg2138z00_1031;

																											BgL_arg2138z00_1031 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_list2137z00_1030 =
																												MAKE_PAIR
																												(BgL_arg2135z00_1028,
																												BgL_arg2138z00_1031);
																										}
																										BgL_arg2134z00_1027 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_dssslzd2argzd2_1015,
																											BgL_list2137z00_1030);
																									}
																								}
																								BgL_arg2126z00_1021 =
																									MAKE_PAIR(BgL_arg2133z00_1026,
																									BgL_arg2134z00_1027);
																							}
																							BgL_arg2127z00_1022 =
																								BGl_keyzd2statezd2zz__dssslz00
																								(BgL_bodyz00_2250,
																								BgL_formalsz00_2249,
																								BgL_wherez00_2248,
																								BgL_errz00_2247,
																								BgL_argsz00_1014,
																								BgL_dssslzd2argzd2_1015, BNIL,
																								((bool_t) 0));
																							{	/* Llib/dsssl.scm 218 */
																								obj_t BgL_list2131z00_1024;

																								{	/* Llib/dsssl.scm 218 */
																									obj_t BgL_arg2132z00_1025;

																									BgL_arg2132z00_1025 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list2131z00_1024 =
																										MAKE_PAIR
																										(BgL_arg2127z00_1022,
																										BgL_arg2132z00_1025);
																								}
																								BgL_arg2125z00_1020 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg2126z00_1021,
																									BgL_list2131z00_1024);
																							}
																						}
																						BgL_arg2106z00_997 =
																							MAKE_PAIR(BgL_arg2124z00_1019,
																							BgL_arg2125z00_1020);
																					}
																				}
																		}
																	else
																		{	/* Llib/dsssl.scm 197 */
																			BgL_arg2106z00_997 =
																				PROCEDURE_ENTRY(BgL_errz00_2247)
																				(BgL_errz00_2247, BgL_wherez00_2248,
																				BGl_string2620z00zz__dssslz00,
																				BgL_formalsz00_2249, BEOA);
																		}
																}
															else
																{	/* Llib/dsssl.scm 195 */
																	BgL_arg2106z00_997 =
																		PROCEDURE_ENTRY(BgL_errz00_2247)
																		(BgL_errz00_2247, BgL_wherez00_2248,
																		BGl_string2620z00zz__dssslz00,
																		BgL_formalsz00_2249, BEOA);
																}
														}
													{	/* Llib/dsssl.scm 186 */
														obj_t BgL_list2108z00_999;

														{	/* Llib/dsssl.scm 186 */
															obj_t BgL_arg2109z00_1000;

															BgL_arg2109z00_1000 = MAKE_PAIR(BNIL, BNIL);
															BgL_list2108z00_999 =
																MAKE_PAIR(BgL_arg2106z00_997,
																BgL_arg2109z00_1000);
														}
														BgL_arg2104z00_995 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg2105z00_996, BgL_list2108z00_999);
													}
												}
												return
													MAKE_PAIR(BgL_arg2103z00_994, BgL_arg2104z00_995);
											}
										}
									else
										{	/* Llib/dsssl.scm 184 */
											return
												BGl_errorz00zz__errorz00(BgL_wherez00_2248,
												BGl_string2620z00zz__dssslz00, BgL_formalsz00_2249);
										}
								}
							}
						else
							{	/* Llib/dsssl.scm 181 */
								return
									PROCEDURE_ENTRY(BgL_errz00_2247) (BgL_errz00_2247,
									BgL_wherez00_2248, BGl_string2620z00zz__dssslz00,
									BgL_formalsz00_2249, BEOA);
							}
					}
				}
			}
		}
	}



/* optional-state */
	obj_t BGl_optionalzd2statezd2zz__dssslz00(obj_t BgL_envz00_2253,
		obj_t BgL_argsz00_2260, obj_t BgL_dssslzd2argzd2_2261)
	{
		AN_OBJECT;
		{	/* Llib/dsssl.scm 134 */
			return
				BGl_optionalzd2statez72za0zz__dssslz00(PROCEDURE_REF(BgL_envz00_2253,
					(int) (((long) 5))),
				PROCEDURE_REF(BgL_envz00_2253,
					(int) (((long) 4))),
				PROCEDURE_REF(BgL_envz00_2253,
					(int) (((long) 3))),
				PROCEDURE_REF(BgL_envz00_2253,
					(int) (((long) 2))),
				PROCEDURE_REF(BgL_envz00_2253,
					(int) (((long) 1))),
				PROCEDURE_REF(BgL_envz00_2253,
					(int) (((long) 0))), BgL_argsz00_2260, BgL_dssslzd2argzd2_2261);
		}
	}



/* optional-state' */
	obj_t BGl_optionalzd2statez72za0zz__dssslz00(obj_t BgL_bodyz00_2282,
		obj_t BgL_nozd2restzd2keyzd2statezd2_2281, obj_t BgL_restzd2statezd2_2280,
		obj_t BgL_formalsz00_2279, obj_t BgL_wherez00_2278, obj_t BgL_errz00_2277,
		obj_t BgL_argsz00_824, obj_t BgL_dssslzd2argzd2_825)
	{
		AN_OBJECT;
		{	/* Llib/dsssl.scm 134 */
			{	/* Llib/dsssl.scm 134 */
				obj_t BgL_keywordzd2argumentszd2_828;

				BgL_keywordzd2argumentszd2_828 = BUNSPEC;
				{
					obj_t BgL_argz00_902;

					obj_t BgL_initializa7erza7_903;

					obj_t BgL_argsz00_863;

					BgL_argsz00_863 = BgL_argsz00_824;
					{
						obj_t BgL_argsz00_866;

						BgL_argsz00_866 = BgL_argsz00_863;
					BgL_zc3anonymousza31983ze3z83_867:
						if (PAIRP(BgL_argsz00_866))
							{	/* Llib/dsssl.scm 115 */
								if ((CAR(BgL_argsz00_866) == BCNST(262)))
									{	/* Llib/dsssl.scm 118 */
										obj_t BgL_g1828z00_870;

										BgL_g1828z00_870 = CDR(BgL_argsz00_866);
										{
											obj_t BgL_argsz00_873;

											obj_t BgL_resz00_874;

											BgL_argsz00_873 = BgL_g1828z00_870;
											BgL_resz00_874 = BNIL;
										BgL_zc3anonymousza31986ze3z83_875:
											{	/* Llib/dsssl.scm 121 */
												bool_t BgL_testz00_2710;

												if (PAIRP(BgL_argsz00_873))
													{	/* Llib/dsssl.scm 122 */
														bool_t BgL_testz00_2713;

														{	/* Llib/dsssl.scm 122 */
															bool_t BgL_testz00_2714;

															{	/* Llib/dsssl.scm 122 */
																obj_t BgL_auxz00_2715;

																BgL_auxz00_2715 = CAR(BgL_argsz00_873);
																BgL_testz00_2714 = PAIRP(BgL_auxz00_2715);
															}
															if (BgL_testz00_2714)
																{	/* Llib/dsssl.scm 122 */
																	BgL_testz00_2713 = ((bool_t) 1);
																}
															else
																{	/* Llib/dsssl.scm 123 */
																	obj_t BgL_auxz00_2718;

																	BgL_auxz00_2718 = CAR(BgL_argsz00_873);
																	BgL_testz00_2713 = SYMBOLP(BgL_auxz00_2718);
																}
														}
														if (BgL_testz00_2713)
															{	/* Llib/dsssl.scm 122 */
																if ((CAR(BgL_argsz00_873) == BCNST(258)))
																	{	/* Llib/dsssl.scm 124 */
																		BgL_testz00_2710 = ((bool_t) 1);
																	}
																else
																	{	/* Llib/dsssl.scm 124 */
																		BgL_testz00_2710 =
																			(CAR(BgL_argsz00_873) == BCNST(259));
																	}
															}
														else
															{	/* Llib/dsssl.scm 122 */
																BgL_testz00_2710 = ((bool_t) 1);
															}
													}
												else
													{	/* Llib/dsssl.scm 121 */
														BgL_testz00_2710 = ((bool_t) 1);
													}
												if (BgL_testz00_2710)
													{	/* Llib/dsssl.scm 121 */
														BgL_keywordzd2argumentszd2_828 = BgL_resz00_874;
													}
												else
													{	/* Llib/dsssl.scm 127 */
														bool_t BgL_testz00_2726;

														{	/* Llib/dsssl.scm 127 */
															obj_t BgL_auxz00_2727;

															BgL_auxz00_2727 = CAR(BgL_argsz00_873);
															BgL_testz00_2726 = SYMBOLP(BgL_auxz00_2727);
														}
														if (BgL_testz00_2726)
															{	/* Llib/dsssl.scm 128 */
																obj_t BgL_arg1989z00_878;

																obj_t BgL_arg1990z00_879;

																BgL_arg1989z00_878 = CDR(BgL_argsz00_873);
																BgL_arg1990z00_879 =
																	MAKE_PAIR
																	(BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00
																	(CAR(BgL_argsz00_873)), BgL_resz00_874);
																{
																	obj_t BgL_resz00_2735;

																	obj_t BgL_argsz00_2734;

																	BgL_argsz00_2734 = BgL_arg1989z00_878;
																	BgL_resz00_2735 = BgL_arg1990z00_879;
																	BgL_resz00_874 = BgL_resz00_2735;
																	BgL_argsz00_873 = BgL_argsz00_2734;
																	goto BgL_zc3anonymousza31986ze3z83_875;
																}
															}
														else
															{	/* Llib/dsssl.scm 131 */
																obj_t BgL_arg1993z00_882;

																obj_t BgL_arg1994z00_883;

																BgL_arg1993z00_882 = CDR(BgL_argsz00_873);
																{	/* Llib/dsssl.scm 132 */
																	obj_t BgL_arg1995z00_884;

																	{	/* Llib/dsssl.scm 132 */
																		obj_t BgL_arg1996z00_885;

																		{	/* Llib/dsssl.scm 132 */
																			obj_t BgL_pairz00_1834;

																			BgL_pairz00_1834 = BgL_argsz00_873;
																			BgL_arg1996z00_885 =
																				CAR(CAR(BgL_pairz00_1834));
																		}
																		BgL_arg1995z00_884 =
																			BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00
																			(BgL_arg1996z00_885);
																	}
																	BgL_arg1994z00_883 =
																		MAKE_PAIR(BgL_arg1995z00_884,
																		BgL_resz00_874);
																}
																{
																	obj_t BgL_resz00_2742;

																	obj_t BgL_argsz00_2741;

																	BgL_argsz00_2741 = BgL_arg1993z00_882;
																	BgL_resz00_2742 = BgL_arg1994z00_883;
																	BgL_resz00_874 = BgL_resz00_2742;
																	BgL_argsz00_873 = BgL_argsz00_2741;
																	goto BgL_zc3anonymousza31986ze3z83_875;
																}
															}
													}
											}
										}
									}
								else
									{
										obj_t BgL_argsz00_2743;

										BgL_argsz00_2743 = CDR(BgL_argsz00_866);
										BgL_argsz00_866 = BgL_argsz00_2743;
										goto BgL_zc3anonymousza31983ze3z83_867;
									}
							}
						else
							{	/* Llib/dsssl.scm 115 */
								BgL_keywordzd2argumentszd2_828 = BNIL;
							}
					}
					if (NULLP(BgL_argsz00_824))
						{	/* Llib/dsssl.scm 156 */
							return BgL_bodyz00_2282;
						}
					else
						{	/* Llib/dsssl.scm 156 */
							if (PAIRP(BgL_argsz00_824))
								{	/* Llib/dsssl.scm 160 */
									bool_t BgL_testz00_2749;

									{	/* Llib/dsssl.scm 160 */
										bool_t BgL_testz00_2750;

										{	/* Llib/dsssl.scm 160 */
											obj_t BgL_auxz00_2751;

											BgL_auxz00_2751 = CAR(BgL_argsz00_824);
											BgL_testz00_2750 = SYMBOLP(BgL_auxz00_2751);
										}
										if (BgL_testz00_2750)
											{	/* Llib/dsssl.scm 160 */
												BgL_testz00_2749 = ((bool_t) 0);
											}
										else
											{	/* Llib/dsssl.scm 160 */
												bool_t BgL_testz00_2754;

												{	/* Llib/dsssl.scm 160 */
													obj_t BgL_auxz00_2755;

													BgL_auxz00_2755 = CAR(BgL_argsz00_824);
													BgL_testz00_2754 = PAIRP(BgL_auxz00_2755);
												}
												if (BgL_testz00_2754)
													{	/* Llib/dsssl.scm 160 */
														BgL_testz00_2749 = ((bool_t) 0);
													}
												else
													{	/* Llib/dsssl.scm 160 */
														BgL_testz00_2749 = ((bool_t) 1);
													}
											}
									}
									if (BgL_testz00_2749)
										{	/* Llib/dsssl.scm 162 */
											long BgL_aux1832z00_834;

											{	/* Llib/dsssl.scm 162 */
												obj_t BgL_aux1830z00_838;

												BgL_aux1830z00_838 = CAR(BgL_argsz00_824);
												if (CNSTP(BgL_aux1830z00_838))
													{	/* Llib/dsssl.scm 162 */
														BgL_aux1832z00_834 = CCNST(BgL_aux1830z00_838);
													}
												else
													{	/* Llib/dsssl.scm 162 */
														BgL_aux1832z00_834 = ((long) -1);
											}}
											switch (BgL_aux1832z00_834)
												{
												case ((long) 259):

													return
														BGl_restzd2statezd2zz__dssslz00
														(BgL_restzd2statezd2_2280, CDR(BgL_argsz00_824),
														BgL_dssslzd2argzd2_825);
													break;
												case ((long) 262):

													return
														BGl_nozd2restzd2keyzd2statezd2zz__dssslz00
														(BgL_nozd2restzd2keyzd2statezd2_2281,
														CDR(BgL_argsz00_824), BgL_dssslzd2argzd2_825);
													break;
												default:
													return
														PROCEDURE_ENTRY(BgL_errz00_2277) (BgL_errz00_2277,
														BgL_wherez00_2278, BGl_string2648z00zz__dssslz00,
														BgL_formalsz00_2279, BEOA);
												}
										}
									else
										{	/* Llib/dsssl.scm 171 */
											obj_t BgL_ezd21399zd2_846;

											BgL_ezd21399zd2_846 = CAR(BgL_argsz00_824);
											if (PAIRP(BgL_ezd21399zd2_846))
												{	/* Llib/dsssl.scm 171 */
													obj_t BgL_carzd21404zd2_848;

													obj_t BgL_cdrzd21405zd2_849;

													BgL_carzd21404zd2_848 = CAR(BgL_ezd21399zd2_846);
													BgL_cdrzd21405zd2_849 = CDR(BgL_ezd21399zd2_846);
													if (SYMBOLP(BgL_carzd21404zd2_848))
														{	/* Llib/dsssl.scm 171 */
															if (PAIRP(BgL_cdrzd21405zd2_849))
																{	/* Llib/dsssl.scm 171 */
																	if (NULLP(CDR(BgL_cdrzd21405zd2_849)))
																		{	/* Llib/dsssl.scm 171 */
																			BgL_argz00_902 = BgL_carzd21404zd2_848;
																			BgL_initializa7erza7_903 =
																				CAR(BgL_cdrzd21405zd2_849);
																		BgL_zc3anonymousza32012ze3z83_904:
																			{	/* Llib/dsssl.scm 139 */
																				obj_t BgL_tmpz00_905;

																				BgL_tmpz00_905 =
																					BGl_gensymz00zz__r4_symbols_6_4z00
																					(BGl_symbol2634z00zz__dssslz00);
																				{	/* Llib/dsssl.scm 140 */
																					obj_t BgL_arg2013z00_906;

																					obj_t BgL_arg2015z00_907;

																					BgL_arg2013z00_906 =
																						BGl_symbol2615z00zz__dssslz00;
																					{	/* Llib/dsssl.scm 140 */
																						obj_t BgL_arg2016z00_908;

																						obj_t BgL_arg2017z00_909;

																						{	/* Llib/dsssl.scm 140 */
																							obj_t BgL_arg2022z00_913;

																							{	/* Llib/dsssl.scm 140 */
																								obj_t BgL_arg2024z00_915;

																								{	/* Llib/dsssl.scm 140 */
																									obj_t BgL_arg2025z00_916;

																									{	/* Llib/dsssl.scm 140 */
																										obj_t BgL_arg2029z00_919;

																										obj_t BgL_arg2030z00_920;

																										BgL_arg2029z00_919 =
																											BGl_symbol2636z00zz__dssslz00;
																										{	/* Llib/dsssl.scm 140 */
																											obj_t BgL_arg2031z00_921;

																											obj_t BgL_arg2033z00_922;

																											{	/* Llib/dsssl.scm 140 */
																												obj_t
																													BgL_arg2038z00_927;
																												obj_t
																													BgL_arg2039z00_928;
																												BgL_arg2038z00_927 =
																													BGl_symbol2636z00zz__dssslz00;
																												{	/* Llib/dsssl.scm 140 */
																													obj_t
																														BgL_arg2040z00_929;
																													obj_t
																														BgL_arg2041z00_930;
																													{	/* Llib/dsssl.scm 140 */
																														obj_t
																															BgL_arg2046z00_935;
																														obj_t
																															BgL_arg2047z00_936;
																														BgL_arg2046z00_935 =
																															BGl_symbol2638z00zz__dssslz00;
																														{	/* Llib/dsssl.scm 140 */
																															obj_t
																																BgL_list2048z00_937;
																															BgL_list2048z00_937
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_arg2047z00_936
																																=
																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																(BgL_dssslzd2argzd2_825,
																																BgL_list2048z00_937);
																														}
																														BgL_arg2040z00_929 =
																															MAKE_PAIR
																															(BgL_arg2046z00_935,
																															BgL_arg2047z00_936);
																													}
																													{	/* Llib/dsssl.scm 142 */
																														obj_t
																															BgL_arg2051z00_938;
																														obj_t
																															BgL_arg2052z00_939;
																														BgL_arg2051z00_938 =
																															BGl_symbol2640z00zz__dssslz00;
																														{	/* Llib/dsssl.scm 142 */
																															obj_t
																																BgL_arg2053z00_940;
																															obj_t
																																BgL_arg2054z00_941;
																															{	/* Llib/dsssl.scm 142 */
																																obj_t
																																	BgL_arg2058z00_945;
																																obj_t
																																	BgL_arg2059z00_946;
																																BgL_arg2058z00_945
																																	=
																																	BGl_symbol2642z00zz__dssslz00;
																																{	/* Llib/dsssl.scm 142 */
																																	obj_t
																																		BgL_list2060z00_947;
																																	BgL_list2060z00_947
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_arg2059z00_946
																																		=
																																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_dssslzd2argzd2_825,
																																		BgL_list2060z00_947);
																																}
																																BgL_arg2053z00_940
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2058z00_945,
																																	BgL_arg2059z00_946);
																															}
																															{	/* Llib/dsssl.scm 142 */
																																obj_t
																																	BgL_arg2061z00_948;
																																obj_t
																																	BgL_arg2062z00_949;
																																BgL_arg2061z00_948
																																	=
																																	BGl_symbol2624z00zz__dssslz00;
																																{	/* Llib/dsssl.scm 142 */
																																	obj_t
																																		BgL_list2063z00_950;
																																	BgL_list2063z00_950
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_arg2062z00_949
																																		=
																																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_keywordzd2argumentszd2_828,
																																		BgL_list2063z00_950);
																																}
																																BgL_arg2054z00_941
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2061z00_948,
																																	BgL_arg2062z00_949);
																															}
																															{	/* Llib/dsssl.scm 142 */
																																obj_t
																																	BgL_list2056z00_943;
																																{	/* Llib/dsssl.scm 142 */
																																	obj_t
																																		BgL_arg2057z00_944;
																																	BgL_arg2057z00_944
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_list2056z00_943
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2054z00_941,
																																		BgL_arg2057z00_944);
																																}
																																BgL_arg2052z00_939
																																	=
																																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																	(BgL_arg2053z00_940,
																																	BgL_list2056z00_943);
																															}
																														}
																														BgL_arg2041z00_930 =
																															MAKE_PAIR
																															(BgL_arg2051z00_938,
																															BgL_arg2052z00_939);
																													}
																													{	/* Llib/dsssl.scm 140 */
																														obj_t
																															BgL_list2043z00_932;
																														{	/* Llib/dsssl.scm 140 */
																															obj_t
																																BgL_arg2044z00_933;
																															{	/* Llib/dsssl.scm 140 */
																																obj_t
																																	BgL_arg2045z00_934;
																																BgL_arg2045z00_934
																																	=
																																	MAKE_PAIR
																																	(BNIL, BNIL);
																																BgL_arg2044z00_933
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2041z00_930,
																																	BgL_arg2045z00_934);
																															}
																															BgL_list2043z00_932
																																=
																																MAKE_PAIR(BTRUE,
																																BgL_arg2044z00_933);
																														}
																														BgL_arg2039z00_928 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_arg2040z00_929,
																															BgL_list2043z00_932);
																													}
																												}
																												BgL_arg2031z00_921 =
																													MAKE_PAIR
																													(BgL_arg2038z00_927,
																													BgL_arg2039z00_928);
																											}
																											{	/* Llib/dsssl.scm 144 */
																												obj_t
																													BgL_arg2064z00_951;
																												obj_t
																													BgL_arg2065z00_952;
																												BgL_arg2064z00_951 =
																													BGl_symbol2615z00zz__dssslz00;
																												{	/* Llib/dsssl.scm 144 */
																													obj_t
																														BgL_arg2066z00_953;
																													obj_t
																														BgL_arg2067z00_954;
																													{	/* Llib/dsssl.scm 144 */
																														obj_t
																															BgL_arg2072z00_958;
																														{	/* Llib/dsssl.scm 144 */
																															obj_t
																																BgL_arg2076z00_960;
																															{	/* Llib/dsssl.scm 144 */
																																obj_t
																																	BgL_arg2077z00_961;
																																{	/* Llib/dsssl.scm 144 */
																																	obj_t
																																		BgL_arg2080z00_964;
																																	obj_t
																																		BgL_arg2081z00_965;
																																	BgL_arg2080z00_964
																																		=
																																		BGl_symbol2642z00zz__dssslz00;
																																	{	/* Llib/dsssl.scm 144 */
																																		obj_t
																																			BgL_list2082z00_966;
																																		BgL_list2082z00_966
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		BgL_arg2081z00_965
																																			=
																																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																			(BgL_dssslzd2argzd2_825,
																																			BgL_list2082z00_966);
																																	}
																																	BgL_arg2077z00_961
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2080z00_964,
																																		BgL_arg2081z00_965);
																																}
																																{	/* Llib/dsssl.scm 144 */
																																	obj_t
																																		BgL_list2079z00_963;
																																	BgL_list2079z00_963
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_arg2076z00_960
																																		=
																																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_arg2077z00_961,
																																		BgL_list2079z00_963);
																																}
																															}
																															BgL_arg2072z00_958
																																=
																																MAKE_PAIR
																																(BgL_tmpz00_905,
																																BgL_arg2076z00_960);
																														}
																														BgL_arg2066z00_953 =
																															MAKE_PAIR
																															(BgL_arg2072z00_958,
																															BNIL);
																													}
																													{	/* Llib/dsssl.scm 151 */
																														obj_t
																															BgL_arg2083z00_967;
																														obj_t
																															BgL_arg2084z00_968;
																														BgL_arg2083z00_967 =
																															BGl_symbol2628z00zz__dssslz00;
																														{	/* Llib/dsssl.scm 152 */
																															obj_t
																																BgL_arg2085z00_969;
																															{	/* Llib/dsssl.scm 152 */
																																obj_t
																																	BgL_arg2090z00_973;
																																obj_t
																																	BgL_arg2091z00_974;
																																BgL_arg2090z00_973
																																	=
																																	BGl_symbol2644z00zz__dssslz00;
																																{	/* Llib/dsssl.scm 152 */
																																	obj_t
																																		BgL_arg2092z00_975;
																																	{	/* Llib/dsssl.scm 152 */
																																		obj_t
																																			BgL_arg2096z00_979;
																																		obj_t
																																			BgL_arg2097z00_980;
																																		BgL_arg2096z00_979
																																			=
																																			BGl_symbol2646z00zz__dssslz00;
																																		{	/* Llib/dsssl.scm 152 */
																																			obj_t
																																				BgL_list2098z00_981;
																																			BgL_list2098z00_981
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_arg2097z00_980
																																				=
																																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																				(BgL_dssslzd2argzd2_825,
																																				BgL_list2098z00_981);
																																		}
																																		BgL_arg2092z00_975
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2096z00_979,
																																			BgL_arg2097z00_980);
																																	}
																																	{	/* Llib/dsssl.scm 152 */
																																		obj_t
																																			BgL_list2094z00_977;
																																		{	/* Llib/dsssl.scm 152 */
																																			obj_t
																																				BgL_arg2095z00_978;
																																			BgL_arg2095z00_978
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_list2094z00_977
																																				=
																																				MAKE_PAIR
																																				(BgL_arg2092z00_975,
																																				BgL_arg2095z00_978);
																																		}
																																		BgL_arg2091z00_974
																																			=
																																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																			(BgL_dssslzd2argzd2_825,
																																			BgL_list2094z00_977);
																																	}
																																}
																																BgL_arg2085z00_969
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2090z00_973,
																																	BgL_arg2091z00_974);
																															}
																															{	/* Llib/dsssl.scm 151 */
																																obj_t
																																	BgL_list2087z00_971;
																																{	/* Llib/dsssl.scm 151 */
																																	obj_t
																																		BgL_arg2089z00_972;
																																	BgL_arg2089z00_972
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_list2087z00_971
																																		=
																																		MAKE_PAIR
																																		(BgL_tmpz00_905,
																																		BgL_arg2089z00_972);
																																}
																																BgL_arg2084z00_968
																																	=
																																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																	(BgL_arg2085z00_969,
																																	BgL_list2087z00_971);
																															}
																														}
																														BgL_arg2067z00_954 =
																															MAKE_PAIR
																															(BgL_arg2083z00_967,
																															BgL_arg2084z00_968);
																													}
																													{	/* Llib/dsssl.scm 144 */
																														obj_t
																															BgL_list2069z00_956;
																														{	/* Llib/dsssl.scm 144 */
																															obj_t
																																BgL_arg2070z00_957;
																															BgL_arg2070z00_957
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_list2069z00_956
																																=
																																MAKE_PAIR
																																(BgL_arg2067z00_954,
																																BgL_arg2070z00_957);
																														}
																														BgL_arg2065z00_952 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_arg2066z00_953,
																															BgL_list2069z00_956);
																													}
																												}
																												BgL_arg2033z00_922 =
																													MAKE_PAIR
																													(BgL_arg2064z00_951,
																													BgL_arg2065z00_952);
																											}
																											{	/* Llib/dsssl.scm 140 */
																												obj_t
																													BgL_list2035z00_924;
																												{	/* Llib/dsssl.scm 140 */
																													obj_t
																														BgL_arg2036z00_925;
																													{	/* Llib/dsssl.scm 140 */
																														obj_t
																															BgL_arg2037z00_926;
																														BgL_arg2037z00_926 =
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg2036z00_925 =
																															MAKE_PAIR
																															(BgL_arg2033z00_922,
																															BgL_arg2037z00_926);
																													}
																													BgL_list2035z00_924 =
																														MAKE_PAIR
																														(BgL_initializa7erza7_903,
																														BgL_arg2036z00_925);
																												}
																												BgL_arg2030z00_920 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_arg2031z00_921,
																													BgL_list2035z00_924);
																											}
																										}
																										BgL_arg2025z00_916 =
																											MAKE_PAIR
																											(BgL_arg2029z00_919,
																											BgL_arg2030z00_920);
																									}
																									{	/* Llib/dsssl.scm 140 */
																										obj_t BgL_list2028z00_918;

																										BgL_list2028z00_918 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2024z00_915 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg2025z00_916,
																											BgL_list2028z00_918);
																									}
																								}
																								BgL_arg2022z00_913 =
																									MAKE_PAIR(BgL_argz00_902,
																									BgL_arg2024z00_915);
																							}
																							BgL_arg2016z00_908 =
																								MAKE_PAIR(BgL_arg2022z00_913,
																								BNIL);
																						}
																						BgL_arg2017z00_909 =
																							BGl_optionalzd2statez72za0zz__dssslz00
																							(BgL_bodyz00_2282,
																							BgL_nozd2restzd2keyzd2statezd2_2281,
																							BgL_restzd2statezd2_2280,
																							BgL_formalsz00_2279,
																							BgL_wherez00_2278,
																							BgL_errz00_2277,
																							CDR(BgL_argsz00_824),
																							BgL_dssslzd2argzd2_825);
																						{	/* Llib/dsssl.scm 140 */
																							obj_t BgL_list2019z00_911;

																							{	/* Llib/dsssl.scm 140 */
																								obj_t BgL_arg2021z00_912;

																								BgL_arg2021z00_912 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list2019z00_911 =
																									MAKE_PAIR(BgL_arg2017z00_909,
																									BgL_arg2021z00_912);
																							}
																							BgL_arg2015z00_907 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2016z00_908,
																								BgL_list2019z00_911);
																						}
																					}
																					return
																						MAKE_PAIR(BgL_arg2013z00_906,
																						BgL_arg2015z00_907);
																				}
																			}
																		}
																	else
																		{	/* Llib/dsssl.scm 171 */
																			return
																				PROCEDURE_ENTRY(BgL_errz00_2277)
																				(BgL_errz00_2277, BgL_wherez00_2278,
																				BGl_string2648z00zz__dssslz00,
																				BgL_formalsz00_2279, BEOA);
																		}
																}
															else
																{	/* Llib/dsssl.scm 171 */
																	return
																		PROCEDURE_ENTRY(BgL_errz00_2277)
																		(BgL_errz00_2277, BgL_wherez00_2278,
																		BGl_string2648z00zz__dssslz00,
																		BgL_formalsz00_2279, BEOA);
																}
														}
													else
														{	/* Llib/dsssl.scm 171 */
															return
																PROCEDURE_ENTRY(BgL_errz00_2277)
																(BgL_errz00_2277, BgL_wherez00_2278,
																BGl_string2648z00zz__dssslz00,
																BgL_formalsz00_2279, BEOA);
														}
												}
											else
												{	/* Llib/dsssl.scm 171 */
													if (SYMBOLP(BgL_ezd21399zd2_846))
														{
															obj_t BgL_initializa7erza7_2847;

															obj_t BgL_argz00_2846;

															BgL_argz00_2846 = BgL_ezd21399zd2_846;
															BgL_initializa7erza7_2847 = BFALSE;
															BgL_initializa7erza7_903 =
																BgL_initializa7erza7_2847;
															BgL_argz00_902 = BgL_argz00_2846;
															goto BgL_zc3anonymousza32012ze3z83_904;
														}
													else
														{	/* Llib/dsssl.scm 171 */
															return
																PROCEDURE_ENTRY(BgL_errz00_2277)
																(BgL_errz00_2277, BgL_wherez00_2278,
																BGl_string2648z00zz__dssslz00,
																BgL_formalsz00_2279, BEOA);
														}
												}
										}
								}
							else
								{	/* Llib/dsssl.scm 158 */
									return
										PROCEDURE_ENTRY(BgL_errz00_2277) (BgL_errz00_2277,
										BgL_wherez00_2278, BGl_string2648z00zz__dssslz00,
										BgL_formalsz00_2279, BEOA);
								}
						}
				}
			}
		}
	}



/* dsssl-check-key-args! */
	BGL_EXPORTED_DEF obj_t BGl_dssslzd2checkzd2keyzd2argsz12zc0zz__dssslz00(obj_t
		BgL_dssslzd2argszd2_6, obj_t BgL_keyzd2listzd2_7)
	{
		AN_OBJECT;
		{	/* Llib/dsssl.scm 300 */
			if (NULLP(BgL_keyzd2listzd2_7))
				{
					obj_t BgL_argsz00_1213;

					BgL_argsz00_1213 = BgL_dssslzd2argszd2_6;
				BgL_zc3anonymousza32278ze3z83_1214:
					if (NULLP(BgL_argsz00_1213))
						{	/* Llib/dsssl.scm 304 */
							return BgL_dssslzd2argszd2_6;
						}
					else
						{	/* Llib/dsssl.scm 306 */
							bool_t BgL_testz00_2856;

							if (PAIRP(BgL_argsz00_1213))
								{	/* Llib/dsssl.scm 306 */
									if (NULLP(CDR(BgL_argsz00_1213)))
										{	/* Llib/dsssl.scm 307 */
											BgL_testz00_2856 = ((bool_t) 1);
										}
									else
										{	/* Llib/dsssl.scm 308 */
											bool_t BgL_testz00_2862;

											{	/* Llib/dsssl.scm 308 */
												obj_t BgL_auxz00_2863;

												BgL_auxz00_2863 = CAR(BgL_argsz00_1213);
												BgL_testz00_2862 = KEYWORDP(BgL_auxz00_2863);
											}
											if (BgL_testz00_2862)
												{	/* Llib/dsssl.scm 308 */
													BgL_testz00_2856 = ((bool_t) 0);
												}
											else
												{	/* Llib/dsssl.scm 308 */
													BgL_testz00_2856 = ((bool_t) 1);
												}
										}
								}
							else
								{	/* Llib/dsssl.scm 306 */
									BgL_testz00_2856 = ((bool_t) 1);
								}
							if (BgL_testz00_2856)
								{	/* Llib/dsssl.scm 306 */
									return
										BGl_errorz00zz__errorz00(BGl_string2632z00zz__dssslz00,
										BGl_string2649z00zz__dssslz00, BgL_argsz00_1213);
								}
							else
								{	/* Llib/dsssl.scm 313 */
									obj_t BgL_arg2281z00_1217;

									{	/* Llib/dsssl.scm 313 */
										obj_t BgL_pairz00_1945;

										BgL_pairz00_1945 = BgL_argsz00_1213;
										BgL_arg2281z00_1217 = CDR(CDR(BgL_pairz00_1945));
									}
									{
										obj_t BgL_argsz00_2869;

										BgL_argsz00_2869 = BgL_arg2281z00_1217;
										BgL_argsz00_1213 = BgL_argsz00_2869;
										goto BgL_zc3anonymousza32278ze3z83_1214;
									}
								}
						}
				}
			else
				{
					obj_t BgL_argsz00_1226;

					bool_t BgL_armedz00_1227;

					obj_t BgL_optsz00_1228;

					BgL_argsz00_1226 = BgL_dssslzd2argszd2_6;
					BgL_armedz00_1227 = ((bool_t) 0);
					BgL_optsz00_1228 = BNIL;
				BgL_zc3anonymousza32287ze3z83_1229:
					if (NULLP(BgL_argsz00_1226))
						{	/* Llib/dsssl.scm 318 */
							return bgl_reverse_bang(BgL_optsz00_1228);
						}
					else
						{	/* Llib/dsssl.scm 320 */
							bool_t BgL_testz00_2873;

							if (PAIRP(BgL_argsz00_1226))
								{	/* Llib/dsssl.scm 320 */
									if (NULLP(CDR(BgL_argsz00_1226)))
										{	/* Llib/dsssl.scm 321 */
											BgL_testz00_2873 = ((bool_t) 1);
										}
									else
										{	/* Llib/dsssl.scm 322 */
											bool_t BgL_testz00_2879;

											{	/* Llib/dsssl.scm 322 */
												obj_t BgL_auxz00_2880;

												BgL_auxz00_2880 = CAR(BgL_argsz00_1226);
												BgL_testz00_2879 = KEYWORDP(BgL_auxz00_2880);
											}
											if (BgL_testz00_2879)
												{	/* Llib/dsssl.scm 322 */
													if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR
																(BgL_argsz00_1226), BgL_keyzd2listzd2_7)))
														{	/* Llib/dsssl.scm 323 */
															BgL_testz00_2873 = ((bool_t) 0);
														}
													else
														{	/* Llib/dsssl.scm 323 */
															BgL_testz00_2873 = ((bool_t) 1);
														}
												}
											else
												{	/* Llib/dsssl.scm 322 */
													BgL_testz00_2873 = ((bool_t) 1);
												}
										}
								}
							else
								{	/* Llib/dsssl.scm 320 */
									BgL_testz00_2873 = ((bool_t) 1);
								}
							if (BgL_testz00_2873)
								{	/* Llib/dsssl.scm 320 */
									if (BgL_armedz00_1227)
										{	/* Llib/dsssl.scm 326 */
											obj_t BgL_arg2290z00_1232;

											obj_t BgL_arg2291z00_1233;

											BgL_arg2290z00_1232 = CDR(BgL_argsz00_1226);
											BgL_arg2291z00_1233 =
												MAKE_PAIR(CAR(BgL_argsz00_1226), BgL_optsz00_1228);
											{
												obj_t BgL_optsz00_2893;

												bool_t BgL_armedz00_2892;

												obj_t BgL_argsz00_2891;

												BgL_argsz00_2891 = BgL_arg2290z00_1232;
												BgL_armedz00_2892 = ((bool_t) 0);
												BgL_optsz00_2893 = BgL_arg2291z00_1233;
												BgL_optsz00_1228 = BgL_optsz00_2893;
												BgL_armedz00_1227 = BgL_armedz00_2892;
												BgL_argsz00_1226 = BgL_argsz00_2891;
												goto BgL_zc3anonymousza32287ze3z83_1229;
											}
										}
									else
										{
											obj_t BgL_argsz00_2894;

											BgL_argsz00_2894 = CDR(BgL_argsz00_1226);
											BgL_argsz00_1226 = BgL_argsz00_2894;
											goto BgL_zc3anonymousza32287ze3z83_1229;
										}
								}
							else
								{	/* Llib/dsssl.scm 330 */
									obj_t BgL_arg2294z00_1236;

									{	/* Llib/dsssl.scm 330 */
										obj_t BgL_pairz00_1959;

										BgL_pairz00_1959 = BgL_argsz00_1226;
										BgL_arg2294z00_1236 = CDR(CDR(BgL_pairz00_1959));
									}
									{
										bool_t BgL_armedz00_2899;

										obj_t BgL_argsz00_2898;

										BgL_argsz00_2898 = BgL_arg2294z00_1236;
										BgL_armedz00_2899 = ((bool_t) 1);
										BgL_armedz00_1227 = BgL_armedz00_2899;
										BgL_argsz00_1226 = BgL_argsz00_2898;
										goto BgL_zc3anonymousza32287ze3z83_1229;
									}
								}
						}
				}
		}
	}



/* _dsssl-check-key-args! */
	obj_t BGl__dssslzd2checkzd2keyzd2argsz12zc0zz__dssslz00(obj_t BgL_envz00_2262,
		obj_t BgL_dssslzd2argszd2_2263, obj_t BgL_keyzd2listzd2_2264)
	{
		AN_OBJECT;
		{	/* Llib/dsssl.scm 300 */
			return
				BGl_dssslzd2checkzd2keyzd2argsz12zc0zz__dssslz00
				(BgL_dssslzd2argszd2_2263, BgL_keyzd2listzd2_2264);
		}
	}



/* dsssl-get-key-arg */
	BGL_EXPORTED_DEF obj_t BGl_dssslzd2getzd2keyzd2argzd2zz__dssslz00(obj_t
		BgL_dssslzd2argszd2_8, obj_t BgL_keywordz00_9,
		obj_t BgL_initializa7erza7_10)
	{
		AN_OBJECT;
		{	/* Llib/dsssl.scm 338 */
			{
				obj_t BgL_argsz00_1246;

				BgL_argsz00_1246 = BgL_dssslzd2argszd2_8;
			BgL_zc3anonymousza32303ze3z83_1247:
				if (NULLP(BgL_argsz00_1246))
					{	/* Llib/dsssl.scm 341 */
						return BgL_initializa7erza7_10;
					}
				else
					{	/* Llib/dsssl.scm 343 */
						bool_t BgL_testz00_2903;

						{	/* Llib/dsssl.scm 343 */
							obj_t BgL_auxz00_2904;

							BgL_auxz00_2904 = CAR(BgL_argsz00_1246);
							BgL_testz00_2903 = KEYWORDP(BgL_auxz00_2904);
						}
						if (BgL_testz00_2903)
							{	/* Llib/dsssl.scm 343 */
								if ((CAR(BgL_argsz00_1246) == BgL_keywordz00_9))
									{	/* Llib/dsssl.scm 346 */
										bool_t BgL_testz00_2910;

										{	/* Llib/dsssl.scm 346 */
											obj_t BgL_auxz00_2911;

											BgL_auxz00_2911 = CDR(BgL_argsz00_1246);
											BgL_testz00_2910 = PAIRP(BgL_auxz00_2911);
										}
										if (BgL_testz00_2910)
											{	/* Llib/dsssl.scm 350 */
												obj_t BgL_pairz00_1969;

												BgL_pairz00_1969 = BgL_argsz00_1246;
												return CAR(CDR(BgL_pairz00_1969));
											}
										else
											{	/* Llib/dsssl.scm 346 */
												return
													BGl_errorz00zz__errorz00
													(BGl_symbol2626z00zz__dssslz00,
													BGl_string2650z00zz__dssslz00, CAR(BgL_argsz00_1246));
											}
									}
								else
									{	/* Llib/dsssl.scm 352 */
										bool_t BgL_testz00_2918;

										{	/* Llib/dsssl.scm 352 */
											obj_t BgL_auxz00_2919;

											BgL_auxz00_2919 = CDR(BgL_argsz00_1246);
											BgL_testz00_2918 = PAIRP(BgL_auxz00_2919);
										}
										if (BgL_testz00_2918)
											{	/* Llib/dsssl.scm 356 */
												obj_t BgL_arg2313z00_1257;

												{	/* Llib/dsssl.scm 356 */
													obj_t BgL_pairz00_1976;

													BgL_pairz00_1976 = BgL_argsz00_1246;
													BgL_arg2313z00_1257 = CDR(CDR(BgL_pairz00_1976));
												}
												{
													obj_t BgL_argsz00_2924;

													BgL_argsz00_2924 = BgL_arg2313z00_1257;
													BgL_argsz00_1246 = BgL_argsz00_2924;
													goto BgL_zc3anonymousza32303ze3z83_1247;
												}
											}
										else
											{	/* Llib/dsssl.scm 352 */
												return
													BGl_errorz00zz__errorz00
													(BGl_symbol2626z00zz__dssslz00,
													BGl_string2650z00zz__dssslz00, CAR(BgL_argsz00_1246));
											}
									}
							}
						else
							{
								obj_t BgL_argsz00_2927;

								BgL_argsz00_2927 = CDR(BgL_argsz00_1246);
								BgL_argsz00_1246 = BgL_argsz00_2927;
								goto BgL_zc3anonymousza32303ze3z83_1247;
							}
					}
			}
		}
	}



/* _dsssl-get-key-arg */
	obj_t BGl__dssslzd2getzd2keyzd2argzd2zz__dssslz00(obj_t BgL_envz00_2265,
		obj_t BgL_dssslzd2argszd2_2266, obj_t BgL_keywordz00_2267,
		obj_t BgL_initializa7erza7_2268)
	{
		AN_OBJECT;
		{	/* Llib/dsssl.scm 338 */
			{	/* Llib/dsssl.scm 341 */
				obj_t BgL_auxz00_2929;

				if (KEYWORDP(BgL_keywordz00_2267))
					{	/* Llib/dsssl.scm 341 */
						BgL_auxz00_2929 = BgL_keywordz00_2267;
					}
				else
					{
						obj_t BgL_auxz00_2932;

						BgL_auxz00_2932 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2617z00zz__dssslz00,
							BINT(((long) 11499)), BGl_string2651z00zz__dssslz00,
							BGl_string2652z00zz__dssslz00, BgL_keywordz00_2267);
						FAILURE(BgL_auxz00_2932, BFALSE, BFALSE);
					}
				return
					BGl_dssslzd2getzd2keyzd2argzd2zz__dssslz00(BgL_dssslzd2argszd2_2266,
					BgL_auxz00_2929, BgL_initializa7erza7_2268);
			}
		}
	}



/* dsssl-get-key-rest-arg */
	BGL_EXPORTED_DEF obj_t BGl_dssslzd2getzd2keyzd2restzd2argz00zz__dssslz00(obj_t
		BgL_dssslzd2argszd2_11, obj_t BgL_keysz00_12)
	{
		AN_OBJECT;
		{	/* Llib/dsssl.scm 361 */
			{
				obj_t BgL_argsz00_1267;

				BgL_argsz00_1267 = BgL_dssslzd2argszd2_11;
			BgL_zc3anonymousza32321ze3z83_1268:
				if (NULLP(BgL_argsz00_1267))
					{	/* Llib/dsssl.scm 364 */
						return BNIL;
					}
				else
					{	/* Llib/dsssl.scm 366 */
						bool_t BgL_testz00_2939;

						{	/* Llib/dsssl.scm 366 */
							bool_t BgL_testz00_2940;

							{	/* Llib/dsssl.scm 366 */
								obj_t BgL_auxz00_2941;

								BgL_auxz00_2941 = CAR(BgL_argsz00_1267);
								BgL_testz00_2940 = KEYWORDP(BgL_auxz00_2941);
							}
							if (BgL_testz00_2940)
								{	/* Llib/dsssl.scm 366 */
									if (NULLP(CDR(BgL_argsz00_1267)))
										{	/* Llib/dsssl.scm 367 */
											BgL_testz00_2939 = ((bool_t) 1);
										}
									else
										{	/* Llib/dsssl.scm 367 */
											if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR
														(BgL_argsz00_1267), BgL_keysz00_12)))
												{	/* Llib/dsssl.scm 368 */
													BgL_testz00_2939 = ((bool_t) 0);
												}
											else
												{	/* Llib/dsssl.scm 368 */
													BgL_testz00_2939 = ((bool_t) 1);
												}
										}
								}
							else
								{	/* Llib/dsssl.scm 366 */
									BgL_testz00_2939 = ((bool_t) 1);
								}
						}
						if (BgL_testz00_2939)
							{	/* Llib/dsssl.scm 366 */
								return BgL_argsz00_1267;
							}
						else
							{	/* Llib/dsssl.scm 371 */
								obj_t BgL_arg2324z00_1271;

								{	/* Llib/dsssl.scm 371 */
									obj_t BgL_pairz00_1988;

									BgL_pairz00_1988 = BgL_argsz00_1267;
									BgL_arg2324z00_1271 = CDR(CDR(BgL_pairz00_1988));
								}
								{
									obj_t BgL_argsz00_2953;

									BgL_argsz00_2953 = BgL_arg2324z00_1271;
									BgL_argsz00_1267 = BgL_argsz00_2953;
									goto BgL_zc3anonymousza32321ze3z83_1268;
								}
							}
					}
			}
		}
	}



/* _dsssl-get-key-rest-arg */
	obj_t BGl__dssslzd2getzd2keyzd2restzd2argz00zz__dssslz00(obj_t
		BgL_envz00_2269, obj_t BgL_dssslzd2argszd2_2270, obj_t BgL_keysz00_2271)
	{
		AN_OBJECT;
		{	/* Llib/dsssl.scm 361 */
			{	/* Llib/dsssl.scm 364 */
				obj_t BgL_auxz00_2954;

				{	/* Llib/dsssl.scm 364 */
					bool_t BgL_testz00_2955;

					if (PAIRP(BgL_keysz00_2271))
						{	/* Llib/dsssl.scm 364 */
							BgL_testz00_2955 = ((bool_t) 1);
						}
					else
						{	/* Llib/dsssl.scm 364 */
							BgL_testz00_2955 = NULLP(BgL_keysz00_2271);
						}
					if (BgL_testz00_2955)
						{	/* Llib/dsssl.scm 364 */
							BgL_auxz00_2954 = BgL_keysz00_2271;
						}
					else
						{
							obj_t BgL_auxz00_2959;

							BgL_auxz00_2959 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2617z00zz__dssslz00,
								BINT(((long) 12238)), BGl_string2653z00zz__dssslz00,
								BGl_string2654z00zz__dssslz00, BgL_keysz00_2271);
							FAILURE(BgL_auxz00_2959, BFALSE, BFALSE);
				}}
				return
					BGl_dssslzd2getzd2keyzd2restzd2argz00zz__dssslz00
					(BgL_dssslzd2argszd2_2270, BgL_auxz00_2954);
			}
		}
	}



/* id-sans-type */
	obj_t BGl_idzd2sanszd2typez00zz__dssslz00(obj_t BgL_idz00_13)
	{
		AN_OBJECT;
		{	/* Llib/dsssl.scm 379 */
			{	/* Llib/dsssl.scm 380 */
				obj_t BgL_stringz00_1279;

				{	/* Llib/dsssl.scm 380 */
					obj_t BgL_res2594z00_1994;

					{	/* Llib/dsssl.scm 380 */
						obj_t BgL_arg2395z00_1993;

						BgL_arg2395z00_1993 = SYMBOL_TO_STRING(BgL_idz00_13);
						BgL_res2594z00_1994 =
							BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2395z00_1993);
					}
					BgL_stringz00_1279 = BgL_res2594z00_1994;
				}
				{	/* Llib/dsssl.scm 380 */
					long BgL_lenz00_1280;

					BgL_lenz00_1280 = STRING_LENGTH(BgL_stringz00_1279);
					{	/* Llib/dsssl.scm 381 */

						{
							long BgL_walkerz00_1282;

							BgL_walkerz00_1282 = ((long) 0);
						BgL_zc3anonymousza32331ze3z83_1283:
							if ((BgL_walkerz00_1282 == BgL_lenz00_1280))
								{	/* Llib/dsssl.scm 384 */
									return BgL_idz00_13;
								}
							else
								{	/* Llib/dsssl.scm 386 */
									bool_t BgL_testz00_2969;

									if (
										(STRING_REF(BgL_stringz00_1279,
												BgL_walkerz00_1282) == ((unsigned char) ':')))
										{	/* Llib/dsssl.scm 386 */
											if ((BgL_walkerz00_1282 < (BgL_lenz00_1280 - ((long) 1))))
												{	/* Llib/dsssl.scm 387 */
													BgL_testz00_2969 =
														(STRING_REF(BgL_stringz00_1279,
															(BgL_walkerz00_1282 + ((long) 1))) ==
														((unsigned char) ':'));
												}
											else
												{	/* Llib/dsssl.scm 387 */
													BgL_testz00_2969 = ((bool_t) 0);
												}
										}
									else
										{	/* Llib/dsssl.scm 386 */
											BgL_testz00_2969 = ((bool_t) 0);
										}
									if (BgL_testz00_2969)
										{	/* Llib/dsssl.scm 389 */
											obj_t BgL_arg2334z00_1286;

											BgL_arg2334z00_1286 =
												c_substring(BgL_stringz00_1279, ((long) 0),
												BgL_walkerz00_1282);
											return
												string_to_symbol(BSTRING_TO_STRING
												(BgL_arg2334z00_1286));
										}
									else
										{
											long BgL_walkerz00_2982;

											BgL_walkerz00_2982 = (BgL_walkerz00_1282 + ((long) 1));
											BgL_walkerz00_1282 = BgL_walkerz00_2982;
											goto BgL_zc3anonymousza32331ze3z83_1283;
										}
								}
						}
					}
				}
			}
		}
	}



/* dsssl-formals->scheme-formals */
	BGL_EXPORTED_DEF obj_t
		BGl_dssslzd2formalszd2ze3schemezd2formalsz31zz__dssslz00(obj_t
		BgL_formalsz00_14, obj_t BgL_errz00_15)
	{
		AN_OBJECT;
		{	/* Llib/dsssl.scm 405 */
			return
				BGl_loopz00zz__dssslz00(BgL_formalsz00_14, BgL_errz00_15,
				BgL_formalsz00_14, ((bool_t) 0));
		}
	}



/* loop */
	obj_t BGl_loopz00zz__dssslz00(obj_t BgL_formalsz00_2276,
		obj_t BgL_errz00_2275, obj_t BgL_argsz00_1299, bool_t BgL_dssslz00_1300)
	{
		AN_OBJECT;
		{	/* Llib/dsssl.scm 418 */
		BGl_loopz00zz__dssslz00:
			{
				obj_t BgL_objz00_1322;

				if (NULLP(BgL_argsz00_1299))
					{	/* Llib/dsssl.scm 421 */
						return BNIL;
					}
				else
					{	/* Llib/dsssl.scm 421 */
						if (PAIRP(BgL_argsz00_1299))
							{	/* Llib/dsssl.scm 433 */
								bool_t BgL_testz00_2989;

								{	/* Llib/dsssl.scm 433 */
									obj_t BgL_auxz00_2990;

									BgL_auxz00_2990 = CAR(BgL_argsz00_1299);
									BgL_testz00_2989 = SYMBOLP(BgL_auxz00_2990);
								}
								if (BgL_testz00_2989)
									{	/* Llib/dsssl.scm 433 */
										if (BgL_dssslz00_1300)
											{	/* Llib/dsssl.scm 445 */
												return
													BGl_idzd2sanszd2typez00zz__dssslz00(CAR
													(BgL_argsz00_1299));
											}
										else
											{	/* Llib/dsssl.scm 445 */
												return
													MAKE_PAIR(BGl_idzd2sanszd2typez00zz__dssslz00(CAR
														(BgL_argsz00_1299)),
													BGl_loopz00zz__dssslz00(BgL_formalsz00_2276,
														BgL_errz00_2275, CDR(BgL_argsz00_1299),
														((bool_t) 0)));
											}
									}
								else
									{	/* Llib/dsssl.scm 433 */
										if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR
													(BgL_argsz00_1299), BGl_list2655z00zz__dssslz00)))
											{
												bool_t BgL_dssslz00_3007;

												obj_t BgL_argsz00_3005;

												BgL_argsz00_3005 = CDR(BgL_argsz00_1299);
												BgL_dssslz00_3007 = ((bool_t) 1);
												BgL_dssslz00_1300 = BgL_dssslz00_3007;
												BgL_argsz00_1299 = BgL_argsz00_3005;
												goto BGl_loopz00zz__dssslz00;
											}
										else
											{	/* Llib/dsssl.scm 435 */
												if (BgL_dssslz00_1300)
													{	/* Llib/dsssl.scm 439 */
														bool_t BgL_testz00_3009;

														BgL_objz00_1322 = CAR(BgL_argsz00_1299);
														if (PAIRP(BgL_objz00_1322))
															{	/* Llib/dsssl.scm 412 */
																bool_t BgL_testz00_3012;

																{	/* Llib/dsssl.scm 412 */
																	obj_t BgL_auxz00_3013;

																	BgL_auxz00_3013 = CDR(BgL_objz00_1322);
																	BgL_testz00_3012 = PAIRP(BgL_auxz00_3013);
																}
																if (BgL_testz00_3012)
																	{	/* Llib/dsssl.scm 412 */
																		BgL_testz00_3009 =
																			NULLP(CDR(CDR(BgL_objz00_1322)));
																	}
																else
																	{	/* Llib/dsssl.scm 412 */
																		BgL_testz00_3009 = ((bool_t) 0);
																	}
															}
														else
															{	/* Llib/dsssl.scm 411 */
																BgL_testz00_3009 = ((bool_t) 0);
															}
														if (BgL_testz00_3009)
															{	/* Llib/dsssl.scm 439 */
																return
																	BGl_idzd2sanszd2typez00zz__dssslz00(CAR(CAR
																		(BgL_argsz00_1299)));
															}
														else
															{	/* Llib/dsssl.scm 439 */
																return
																	PROCEDURE_ENTRY(BgL_errz00_2275)
																	(BgL_errz00_2275,
																	BGl_string2656z00zz__dssslz00,
																	BGl_string2657z00zz__dssslz00,
																	BgL_formalsz00_2276, BEOA);
															}
													}
												else
													{	/* Llib/dsssl.scm 437 */
														return
															PROCEDURE_ENTRY(BgL_errz00_2275) (BgL_errz00_2275,
															BGl_string2656z00zz__dssslz00,
															BGl_string2658z00zz__dssslz00,
															BgL_formalsz00_2276, BEOA);
													}
											}
									}
							}
						else
							{	/* Llib/dsssl.scm 423 */
								if (BgL_dssslz00_1300)
									{	/* Llib/dsssl.scm 425 */
										return
											PROCEDURE_ENTRY(BgL_errz00_2275) (BgL_errz00_2275,
											BGl_string2659z00zz__dssslz00,
											BGl_string2660z00zz__dssslz00, BgL_formalsz00_2276, BEOA);
									}
								else
									{	/* Llib/dsssl.scm 425 */
										if (SYMBOLP(BgL_argsz00_1299))
											{	/* Llib/dsssl.scm 429 */
												return
													BGl_idzd2sanszd2typez00zz__dssslz00(BgL_argsz00_1299);
											}
										else
											{	/* Llib/dsssl.scm 429 */
												return
													PROCEDURE_ENTRY(BgL_errz00_2275) (BgL_errz00_2275,
													BGl_string2656z00zz__dssslz00,
													BGl_string2658z00zz__dssslz00, BgL_formalsz00_2276,
													BEOA);
											}
									}
							}
					}
			}
		}
	}



/* _dsssl-formals->scheme-formals */
	obj_t BGl__dssslzd2formalszd2ze3schemezd2formalsz31zz__dssslz00(obj_t
		BgL_envz00_2272, obj_t BgL_formalsz00_2273, obj_t BgL_errz00_2274)
	{
		AN_OBJECT;
		{	/* Llib/dsssl.scm 405 */
			{	/* Llib/dsssl.scm 408 */
				obj_t BgL_auxz00_3035;

				if (PROCEDUREP(BgL_errz00_2274))
					{	/* Llib/dsssl.scm 408 */
						BgL_auxz00_3035 = BgL_errz00_2274;
					}
				else
					{
						obj_t BgL_auxz00_3038;

						BgL_auxz00_3038 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2617z00zz__dssslz00,
							BINT(((long) 14255)), BGl_string2661z00zz__dssslz00,
							BGl_string2619z00zz__dssslz00, BgL_errz00_2274);
						FAILURE(BgL_auxz00_3038, BFALSE, BFALSE);
					}
				return
					BGl_dssslzd2formalszd2ze3schemezd2formalsz31zz__dssslz00
					(BgL_formalsz00_2273, BgL_auxz00_3035);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__dssslz00()
	{
		AN_OBJECT;
		{	/* Llib/dsssl.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__dssslz00()
	{
		AN_OBJECT;
		{	/* Llib/dsssl.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__dssslz00()
	{
		AN_OBJECT;
		{	/* Llib/dsssl.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2662z00zz__dssslz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2662z00zz__dssslz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string2662z00zz__dssslz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2662z00zz__dssslz00));
			return
				BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2662z00zz__dssslz00));
		}
	}

#ifdef __cplusplus
}
#endif
